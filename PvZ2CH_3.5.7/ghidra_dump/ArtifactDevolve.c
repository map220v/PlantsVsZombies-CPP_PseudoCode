// Class: ArtifactDevolve


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactDevolve::StaticClassInit() */

void ArtifactDevolve::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"ArtifactDevolve");
    (*pcVar2)(plVar1,asStack_10,FUN_03761564,0x80,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactDevolve::StaticGetClass() */

long * ArtifactDevolve::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = Artifact::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactDevolve",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactDevolve::GetClass() const */

long * ArtifactDevolve::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = Artifact::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactDevolve",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactDevolve::DoTrigger() */

void __thiscall ArtifactDevolve::DoTrigger(ArtifactDevolve *this)

{
  undefined4 uVar1;
  
  ArtifactGravity::DelayToCooldown((ArtifactGravity *)this);
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x68) = uVar1;
  return;
}


/* ArtifactDevolve::ArtifactDevolve() */

void __thiscall ArtifactDevolve::ArtifactDevolve(ArtifactDevolve *this)

{
  Artifact::Artifact((Artifact *)this);
  *(undefined ***)this = &PTR_GetClass_06690f50;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  this[0x70] = (ArtifactDevolve)0x0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  return;
}


/* ArtifactDevolve::StaticNew() */

ArtifactDevolve * ArtifactDevolve::StaticNew(void)

{
  ArtifactDevolve *this;
  
  this = ::operator_new(0x80);
  ArtifactDevolve(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactDevolve::isZombieTypeBlacklisted(std::string const&) */

void __thiscall ArtifactDevolve::isZombieTypeBlacklisted(ArtifactDevolve *this,string *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  RtObject *this_01;
  ArtifactDevolveProperties *pAVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EntityComponent_GroundEffect::GetEffect();
  this_01 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  pAVar2 = Sexy::RtObject::Cast<ArtifactDevolveProperties>(this_01);
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(pAVar2 + 0x210);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                       (uVar3,uVar4,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* ArtifactDevolve::~ArtifactDevolve() */

void __thiscall ArtifactDevolve::~ArtifactDevolve(ArtifactDevolve *this)

{
  *(undefined ***)this = &PTR_GetClass_06690f50;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x40));
  Artifact::~Artifact((Artifact *)this);
  return;
}


/* ArtifactDevolve::~ArtifactDevolve() */

void __thiscall ArtifactDevolve::~ArtifactDevolve(ArtifactDevolve *this)

{
  ~ArtifactDevolve(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactDevolve::spawnZombies(std::string const&, Sexy::SexyVector3, int, float, int) */

void ArtifactDevolve::spawnZombies
               (float param_1_00,float param_2,undefined1 param_3 [16],float param_4,long param_1,
               string *param_6,undefined4 param_7,int param_8)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  string *psVar5;
  ZombieType *pZVar6;
  SexyVector3 *this;
  ZombieGargantuar *this_00;
  long *plVar7;
  code *pcVar8;
  float fVar9;
  Zombie *pZVar10;
  int local_58;
  int local_54;
  RtWeakPtr<Sexy::SoundResource> aRStack_50 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_48 [8];
  Vec3 aVStack_40 [16];
  undefined4 local_30;
  undefined1 local_29;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_6,"iceage_weasel");
  if (!bVar1) {
    Sexy::Point::Point((Point *)&local_58);
    local_58 = BoardTransforms::BoardSpaceToGridXKeepOnBoard(param_1_00);
    local_54 = BoardTransforms::BoardSpaceToGridYKeepOnBoard(param_2);
    iVar2 = BoardTransforms::GridToBoardSpaceX(local_58);
    iVar3 = BoardTransforms::GridToBoardSpaceY(local_54);
    EATextSquish::Vec3::Vec3(aVStack_40,(float)iVar2,(float)iVar3,0.0);
    bVar1 = std::operator==(param_6,"chicken");
    if (!bVar1) {
      bVar1 = std::operator==(param_6,"special_chicken");
      local_30 = param_7;
      if (bVar1) {
        psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
        std::string::string((string *)aRStack_48,"chicken");
        ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar5);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,(RtWeakPtrBase *)&local_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
        std::string::~string((string *)aRStack_48);
        nop();
        pZVar6 = (ZombieType *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
        ZombieType::EnsureResourceGroupsLoaded(pZVar6);
        Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_30);
        local_29 = 1;
        plVar7 = *(long **)(gLawnApp + 0x9f0);
        pcVar8 = *(code **)(*plVar7 + 0x318);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_48,(RtWeakPtrBase *)aRStack_50);
        pZVar10 = (Zombie *)
                  (*pcVar8)(plVar7,(string *)aRStack_48,0xfffffffb,
                            (RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48)
        ;
        RealObject::JoinTeam((RealObject *)pZVar10,1);
        Zombie::SetIgnoresCollisions(pZVar10,true);
        Zombie::SetIgnoresAllDamage(pZVar10,true);
        Zombie::SetIsControlled(pZVar10,true);
        Zombie::SetIsTargetable(pZVar10,false);
        Zombie::SetIgnoreFindTarget(pZVar10,true);
        BoardEntity::PlaceOnBoard((SexyVector3 *)pZVar10);
        Zombie::SetFacing(pZVar10,1);
        (**(code **)(*(long *)pZVar10 + 0x2f0))(pZVar10);
        fVar9 = (float)FUN_03723b88(*(undefined4 *)(pZVar10 + 0x280));
        Zombie::SetHitpoints(pZVar10,fVar9 * param_4);
        uVar4 = FUN_03723b98(*(undefined4 *)(pZVar10 + 0xb0));
        fVar9 = (float)FUN_03723b9c(*(undefined4 *)(pZVar10 + 0x2a8));
        Zombie::setHelm((Zombie *)(fVar9 * param_4),pZVar10,uVar4);
        ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50)
        ;
      }
      else {
        psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
        ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar5);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,(RtWeakPtrBase *)&local_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
        pZVar6 = (ZombieType *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
        ZombieType::EnsureResourceGroupsLoaded(pZVar6);
        Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_30);
        local_29 = 1;
        plVar7 = *(long **)(gLawnApp + 0x9f0);
        pcVar8 = *(code **)(*plVar7 + 0x318);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_48,(RtWeakPtrBase *)aRStack_50);
        this = (SexyVector3 *)
               (*pcVar8)(plVar7,aRStack_48,0xfffffffb,(RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48)
        ;
        BoardEntity::PlaceOnBoard(this);
        fVar9 = (float)FUN_03723b88(*(undefined4 *)(this + 0x280));
        Zombie::SetHitpoints((Zombie *)this,fVar9 * param_4);
        uVar4 = FUN_03723b98(*(undefined4 *)(this + 0xb0));
        fVar9 = (float)FUN_03723b9c(*(undefined4 *)(this + 0x2a8));
        Zombie::setHelm((Zombie *)(fVar9 * param_4),this,uVar4);
        if (param_8 == 1) {
          pZVar10._0_4_ = (Zombie *)PVZ_EOT();
          Zombie::ApplyCondition(pZVar10._0_4_,0,this,0x6a,1);
        }
        else if (param_8 == 2) {
          pZVar10._0_4_ = (Zombie *)PVZ_EOT();
          Zombie::ApplyCondition(pZVar10._0_4_,0,this,0x6b,1);
        }
        else if (param_8 == 3) {
          pZVar10._0_4_ = (Zombie *)PVZ_EOT();
          Zombie::ApplyCondition(pZVar10._0_4_,0,this,0x6c,1);
        }
        iVar2 = Zombie::GetSizeType((Zombie *)this);
        if (((iVar2 == 2) && (*(int *)(param_1 + 0x7c) != 0)) &&
           (this_00 = Sexy::RtObject::Cast<ZombieGargantuar>((RtObject *)this),
           this_00 != (ZombieGargantuar *)0x0)) {
          FUN_03723ba8(this_00 + 0x800,*(undefined4 *)(param_1 + 0x7c));
          ZombieGargantuar::SetHiddenImp(this_00,0);
        }
        ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50)
        ;
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactDevolve::Activate() */

void __thiscall ArtifactDevolve::Activate(ArtifactDevolve *this)

{
  char cVar1;
  ArtifactMgr *pAVar2;
  undefined4 uVar3;
  float fVar4;
  
  Artifact::Activate((Artifact *)this);
  uVar3 = PVZ_EOT();
  *(undefined4 *)(this + 100) = uVar3;
  *(undefined4 *)(this + 0x68) = uVar3;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,1);
  fVar4 = 0.0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar4 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,1,0);
    fVar4 = fVar4 * 0.01;
  }
  *(float *)(this + 0x2c) = fVar4;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,1);
  fVar4 = 0.0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar4 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,1,0);
    fVar4 = fVar4 * 0.01;
  }
  *(float *)(this + 0x30) = fVar4;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
  uVar3 = 0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    uVar3 = ArtifactMgr::CalculateFieldValue(pAVar2,2,0);
  }
  *(undefined4 *)(this + 0x58) = uVar3;
  fVar4 = (float)Artifact::GetBoostValue((Artifact *)this,6);
  *(float *)(this + 0x58) = *(float *)(this + 0x58) - fVar4;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
  fVar4 = 0.0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar4 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,2,1);
    fVar4 = fVar4 * 0.01;
  }
  *(float *)(this + 0x5c) = fVar4;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,3);
  uVar3 = 0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    uVar3 = ArtifactMgr::CalculateFieldValue(pAVar2,3,0);
  }
  *(undefined4 *)(this + 0x60) = uVar3;
  fVar4 = (float)PVZ_T();
  *(float *)(this + 0x6c) = fVar4 + *(float *)(this + 0x58);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactDevolve::DevolveZombie(Zombie*, int) */

void __thiscall ArtifactDevolve::DevolveZombie(ArtifactDevolve *this,Zombie *param_1,int param_2)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int extraout_w0;
  int extraout_w0_00;
  int iVar5;
  int extraout_w0_01;
  undefined8 *puVar6;
  Effect_PopAnim *this_00;
  PopAnim *pPVar7;
  undefined8 uVar8;
  long extraout_x0;
  long lVar9;
  string *psVar10;
  long lVar11;
  size_t __n;
  char *pcVar12;
  char *pcVar13;
  undefined8 uVar14;
  undefined4 extraout_var;
  LightningBolt *this_02;
  undefined4 extraout_var_00;
  int *piVar15;
  undefined4 extraout_var_01;
  ZombieGargantuar *pZVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  string asStack_130 [8];
  string asStack_128 [8];
  string asStack_120 [8];
  string asStack_118 [8];
  string asStack_110 [8];
  Vec3 aVStack_108 [16];
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  int local_d8;
  undefined4 uStack_d4;
  vector<std::string,std::allocator<std::string>> avStack_c8 [24];
  vector<std::string,std::allocator<std::string>> avStack_b0 [24];
  vector<std::string,std::allocator<std::string>> avStack_98 [24];
  vector<std::string,std::allocator<std::string>> avStack_80 [24];
  vector<std::string,std::allocator<std::string>> avStack_68 [24];
  undefined8 local_50;
  undefined8 local_48;
  string asStack_38 [24];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long local_8;
  vector<std::string,std::allocator<std::string>> *this_01;
  
  uVar22 = 0;
  uVar21 = 0xc2fa0000;
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3(aVStack_108,-100.0,-125.0,0.0);
  puVar6 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_1);
  local_f8 = *puVar6;
  local_f0 = *(undefined4 *)(puVar6 + 1);
  local_e8 = Sexy::SexyVector3::operator+((SexyVector3 *)&local_f8,(SexyVector3 *)aVStack_108);
  local_e4 = uVar21;
  local_e0 = uVar22;
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_38,"POPANIM_EFFECTS_WITCHHAZEL_ATTACK");
  GetPAMByName(asStack_38);
  pPVar7 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  Effect_PopAnim::CreatePopAnimRig(this_00,pPVar7,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  std::string::~string(asStack_38);
  nop();
  std::string::string((string *)aRStack_20,"fumeshroom_appear");
  Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_20,0);
  std::string::~string((string *)aRStack_20);
  nop();
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)&local_e8,-1);
  uVar21 = BoardTransforms::BoardSpaceToGridYKeepOnBoard(local_f8._4_4_);
  uVar21 = Board::MakeRenderOrder(0x65130,uVar21,0);
  FUN_03723aa0(this_00 + 0x1c,uVar21);
  *(undefined4 *)(this + 0x7c) = 0;
  cVar2 = Zombie::HasCondition(param_1,0x6a);
  if (cVar2 == '\0') {
    cVar2 = Zombie::HasCondition(param_1,0x6b);
    if (cVar2 == '\0') {
      cVar2 = Zombie::HasCondition(param_1,0x6c);
      if (cVar2 == '\0') {
        *(undefined4 *)(this + 0x78) = 0;
      }
      else {
        *(undefined4 *)(this + 0x78) = 3;
        Zombie::EndCondition(param_1,0x6c);
      }
    }
    else {
      *(undefined4 *)(this + 0x78) = 2;
      Zombie::EndCondition(param_1,0x6b);
    }
  }
  else {
    *(undefined4 *)(this + 0x78) = 1;
    Zombie::EndCondition(param_1,0x6a);
  }
  bVar4 = false;
  uVar8 = Zombie::GetTypeName(param_1);
  FUN_05475d88(asStack_130,uVar8);
  Set8BytesTo0(asStack_128);
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  std::vector<std::string,std::allocator<std::string>>::vector
            (avStack_c8,(vector *)(extraout_x0 + 0x168));
  std::vector<std::string,std::allocator<std::string>>::vector
            (avStack_b0,(vector *)(extraout_x0 + 0x1f8));
  std::vector<std::string,std::allocator<std::string>>::vector
            (avStack_98,(vector *)(extraout_x0 + 0x1e0));
  std::vector<std::string,std::allocator<std::string>>::vector
            (avStack_80,(vector *)(extraout_x0 + 0x1b0));
  std::vector<std::string,std::allocator<std::string>>::vector
            (avStack_68,(vector *)(extraout_x0 + 0x1c8));
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)&local_50,
             (vector *)(extraout_x0 + 0x180));
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)asStack_38,
             (vector *)(extraout_x0 + 0x198));
  lVar9 = FUN_0372476c(local_50,local_48);
  lVar11 = 0;
  while (lVar11 != lVar9) {
    lVar1 = lVar11 + 1;
    psVar10 = (string *)FUN_03724778(local_50,lVar11);
    cVar2 = std::operator==(asStack_130,psVar10);
    lVar11 = lVar1;
    if (cVar2 != '\0') {
      bVar4 = true;
    }
  }
  lVar11 = Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_20);
  local_d8 = 1;
  do {
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)aRStack_20,&local_d8);
    local_d8 = local_d8 + 1;
  } while (local_d8 < 0xb);
  __n = std::
        vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
        ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)aRStack_20);
  uVar8 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)aRStack_20);
  std::random_shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            (__n,uVar8);
  if (*(int *)(lVar11 + 0x14) < 4) {
LAB_0378a1ec:
    bVar3 = std::operator==(asStack_130,"iceage_weasel");
    if ((!bVar3) && (bVar3 = std::operator==(asStack_130,"chicken"), !bVar3)) {
      this_01 = avStack_98;
      if (bVar4) {
LAB_0378a690:
        uVar8 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)this_01);
        uVar14 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this_01);
        std::
        random_shuffle<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>>
                  (uVar8,uVar14);
      }
      else {
        pcVar12 = (char *)FUN_0547429c(asStack_130);
        pcVar13 = strstr(pcVar12,"armor1");
        if (pcVar13 == (char *)0x0) {
          pcVar13 = strstr(pcVar12,"armor2");
          this_01 = avStack_80;
          if (pcVar13 == (char *)0x0) {
            pcVar12 = strstr(pcVar12,"_imp");
            if (((pcVar12 != (char *)0x0) ||
                (bVar4 = std::operator==(asStack_130,"modern_superfanimp"), bVar4)) ||
               (bVar4 = std::operator==(asStack_130,"heian_ninja"), bVar4)) goto LAB_0378a658;
            iVar5 = Zombie::GetSizeType(param_1);
            if ((((iVar5 != 0) || (cVar2 = Zombie::IsBoss(param_1), cVar2 != '\0')) ||
                (cVar2 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar2 != '\0')) ||
               (cVar2 = (**(code **)(*(long *)param_1 + 0x508))(param_1), this_01 = avStack_68,
               cVar2 != '\0')) {
              iVar5 = Zombie::GetSizeType(param_1);
              if (((iVar5 != 1) || (cVar2 = Zombie::IsBoss(param_1), cVar2 != '\0')) ||
                 ((cVar2 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar2 != '\0' ||
                  (cVar2 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar2 != '\0')))) {
                iVar5 = Zombie::GetSizeType(param_1);
                if (((iVar5 == 2) && (cVar2 = Zombie::IsBoss(param_1), cVar2 == '\0')) &&
                   ((cVar2 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar2 == '\0' &&
                    (cVar2 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar2 == '\0')))) {
                  uVar8 = std::
                          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                   *)avStack_b0);
                  uVar14 = std::
                           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                  *)avStack_b0);
                  std::
                  random_shuffle<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>>
                            (uVar8,uVar14);
                  std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)avStack_b0);
                  local_d8 = extraout_w0_01;
                  uStack_d4 = extraout_var_01;
                  uVar8 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_d8);
                  thunk_FUN_05475e00(asStack_128,uVar8);
                  pZVar16 = Sexy::RtObject::Cast<ZombieGargantuar>((RtObject *)param_1);
                  if (pZVar16 != (ZombieGargantuar *)0x0) {
                    uVar21 = FUN_03723ba4(*(undefined4 *)(pZVar16 + 0x800));
                    *(undefined4 *)(this + 0x7c) = uVar21;
                  }
                }
                else {
                  std::string::append(asStack_128,"",__n);
                }
                goto LAB_0378a228;
              }
              uVar8 = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                               *)asStack_38);
              uVar14 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)asStack_38);
              std::
              random_shuffle<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>>
                        (uVar8,uVar14);
              this_01 = (vector<std::string,std::allocator<std::string>> *)asStack_38;
              goto LAB_0378a404;
            }
          }
          goto LAB_0378a690;
        }
        uVar8 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)&local_50);
        uVar14 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_50);
        std::
        random_shuffle<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>>
                  (uVar8,uVar14);
        this_01 = (vector<std::string,std::allocator<std::string>> *)&local_50;
      }
LAB_0378a404:
      std::
      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
      ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)this_01);
      local_d8 = extraout_w0;
      uStack_d4 = extraout_var;
      uVar8 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_d8);
      thunk_FUN_05475e00(asStack_128,uVar8);
      EATextSquish::Vec3::Vec3((Vec3 *)&local_d8,200.0,300.0,0.0);
      goto joined_r0x0378a438;
    }
    (**(code **)(*(long *)param_1 + 0x48))(param_1);
    thunk_FUN_05475e00(asStack_128,asStack_130);
  }
  else {
    std::
    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
    ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)aRStack_20);
    local_d8 = extraout_w0_00;
    uStack_d4 = extraout_var_00;
    piVar15 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_d8);
    if ((((3 < *piVar15) || (cVar2 = Zombie::IsBoss(param_1), cVar2 != '\0')) ||
        (cVar2 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar2 != '\0')) ||
       ((cVar2 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar2 != '\0' ||
        (iVar5 = Zombie::GetSizeType(param_1), iVar5 == 2)))) goto LAB_0378a1ec;
LAB_0378a658:
    std::string::append(asStack_128,"special_chicken",0x5592000);
  }
LAB_0378a228:
  EATextSquish::Vec3::Vec3((Vec3 *)&local_d8,200.0,300.0,0.0);
joined_r0x0378a438:
  if (param_2 == 0) {
    this_02 = GameObject::Create<LightningBolt>();
    std::string::string(asStack_120,"POPANIM_EFFECTS_DARK_WIZARD_LIGHTNINGBOLT");
    std::string::string(asStack_118,"");
    std::string::string(asStack_110,"POPANIM_EFFECTS_ZOMBIE_DARK_WIZARD_PROJECTILE_HIT");
    LightningBolt::SetPopAnim(this_02,asStack_120,asStack_118,asStack_110);
    std::string::~string(asStack_110);
    nop();
    std::string::~string(asStack_118);
    nop();
    std::string::~string(asStack_120);
    nop();
    FUN_03726e0c(this_02 + 0x118);
    FUN_03726df8(this_02 + 0x11c,this_02 + 0x120);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_110,(RtWeakPtrBase *)asStack_118);
    TwinsAssistPerson::SetOwner((TwinsAssistPerson *)this_02,asStack_110);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_110);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_118);
    BoardEntity::PlaceOnBoard((SexyVector3 *)this_02);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_118,(RtWeakPtrBase *)asStack_110);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_110);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_110,(RtWeakPtrBase *)asStack_118);
    LightningBolt::SetInitialTarget(this_02,asStack_110);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_110);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_118);
  }
  bVar4 = std::operator!=(asStack_128,"");
  if (bVar4) {
    uVar21 = FUN_03723b28(*(undefined4 *)(param_1 + 0x50));
    fVar17 = (float)FUN_03723b88(*(undefined4 *)(param_1 + 0x280));
    fVar18 = (float)FUN_03723b9c(*(undefined4 *)(param_1 + 0x2a8));
    fVar19 = (float)FUN_03723b94(*(undefined4 *)(param_1 + 0x284));
    fVar20 = (float)FUN_03723ba0(*(undefined4 *)(param_1 + 0x2ac));
    spawnZombies((undefined4)local_f8,local_f8._4_4_,local_f0,(fVar18 + fVar17) / (fVar20 + fVar19),
                 this,asStack_128,uVar21,*(undefined4 *)(this + 0x78));
    (**(code **)(*(long *)param_1 + 0x80))(param_1,1);
    (**(code **)(*(long *)param_1 + 0x48))(param_1);
  }
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)aRStack_20);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)asStack_38);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&local_50);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_68);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_80);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_98);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_b0);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_c8);
  std::string::~string(asStack_128);
  std::string::~string(asStack_130);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactDevolve::GenerateLightning() */

void __thiscall ArtifactDevolve::GenerateLightning(ArtifactDevolve *this)

{
  bool bVar1;
  char cVar2;
  long extraout_x0;
  ArtifactMgr *pAVar3;
  Zombie *this_00;
  string *psVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long lVar5;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28;
  undefined4 local_24;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  ArtifactThunderData::ArtifactThunderData((ArtifactThunderData *)&local_38);
  local_38 = *(undefined4 *)(extraout_x0 + 0x150);
  pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  local_34 = ArtifactMgr::CalculateFieldValue(pAVar3,0,0);
  local_30 = *(undefined4 *)(extraout_x0 + 0x154);
  pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  local_2c = ArtifactMgr::CalculateFieldValue(pAVar3,0,1);
  pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  local_28 = (float)ArtifactMgr::CalculateFieldValue(pAVar3,0,2);
  local_28 = local_28 * 0.01;
  pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  local_24 = ArtifactMgr::CalculateFieldValue(pAVar3,0,3);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_20);
  EntityFinder::GetEntitiesOnBoard(aRStack_20,2);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)aRStack_20);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)aRStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar1) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    nop();
    cVar2 = (**(code **)(*(long *)this_00 + 0x328))();
    if ((((cVar2 == '\0') &&
         (cVar2 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar2 == '\0')) &&
        (cVar2 = FUN_0373c274(*(undefined4 *)(this_00 + 0x28)), cVar2 == '\0')) &&
       ((cVar2 = RealObject::IsOnTeam(this_00,1), cVar2 == '\0' &&
        (cVar2 = FUN_0373c80c(*(undefined4 *)(this_00 + 0xcc)), cVar2 == '\0')))) {
      psVar4 = (string *)Zombie::GetTypeName(this_00);
      bVar1 = std::operator==(psVar4,"wave_airbubble");
      if (!bVar1) {
        this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this_00);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
        cVar2 = isZombieTypeBlacklisted(this,(string *)(lVar5 + 8));
        if (cVar2 == '\0') {
          DevolveZombie(this,this_00,1);
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactDevolve::GeneratePassiveFieldLightning() */

void __thiscall ArtifactDevolve::GeneratePassiveFieldLightning(ArtifactDevolve *this)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  long extraout_x0;
  undefined8 uVar4;
  undefined8 uVar5;
  Zombie *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long lVar6;
  int iVar7;
  undefined8 local_30;
  undefined8 local_28;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar7 = 0;
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_20);
  EntityFinder::GetEntitiesOnBoard(aRStack_20,2);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)aRStack_20);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)aRStack_20);
  std::
  random_shuffle<__gnu_cxx::__normal_iterator<Pinata**,std::vector<Pinata*,std::allocator<Pinata*>>>>
            (uVar4,uVar5);
  iVar1 = *(int *)(extraout_x0 + 0x160);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)aRStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)aRStack_20);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar2) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    nop();
    if ((((this_00 != (Zombie *)0x0) &&
         (cVar3 = (**(code **)(*(long *)this_00 + 0x328))(), cVar3 == '\0')) &&
        (cVar3 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar3 == '\0')) &&
       ((cVar3 = FUN_0373c274(*(undefined4 *)(this_00 + 0x28)), cVar3 == '\0' &&
        (cVar3 = RealObject::IsOnTeam(this_00,1), cVar3 == '\0')))) {
      this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this_00);
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
      cVar3 = isZombieTypeBlacklisted(this,(string *)(lVar6 + 8));
      if (cVar3 == '\0') {
        iVar7 = iVar7 + 1;
        DevolveZombie(this,this_00,0);
        if (iVar7 == iVar1) break;
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactDevolve::Update() */

void __thiscall ArtifactDevolve::Update(ArtifactDevolve *this)

{
  Effect_PopAnim *this_00;
  PopAnim *pPVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  string asStack_38 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  Vec3 aVStack_28 [16];
  Vec3 aVStack_18 [4];
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Artifact::Update((Artifact *)this);
  fVar2 = (float)PVZ_T();
  if (*(float *)(this + 0x68) <= fVar2) {
    if (*(float *)(this + 0x74) == 0.0) {
      uVar3 = PVZ_T();
      *(undefined4 *)(this + 0x74) = uVar3;
      EATextSquish::Vec3::Vec3(aVStack_28,200.0,300.0,0.0);
      EATextSquish::Vec3::Vec3(aVStack_18,130.0,180.0,0.0);
      this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      std::string::string(asStack_38,"POPANIM_EFFECTS_DARK_WIZARD_WAVE");
      GetPAMByName(asStack_38);
      pPVar1 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
      Effect_PopAnim::CreatePopAnimRig(this_00,pPVar1,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
      std::string::~string(asStack_38);
      nop();
      std::string::string((string *)aRStack_30,"ANIMATION");
      Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_30,0);
      std::string::~string((string *)aRStack_30);
      nop();
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)this_00,(SexyVector3 *)aVStack_18,-1);
      uVar3 = BoardTransforms::BoardSpaceToGridYKeepOnBoard(local_14);
      uVar3 = Board::MakeRenderOrder(0x65130,uVar3,0);
      FUN_03723aa0(this_00 + 0x1c,uVar3);
    }
    else {
      fVar2 = (float)PVZ_T();
      if (*(float *)(this + 0x74) + 0.3 < fVar2) {
        *(undefined4 *)(this + 0x74) = 0;
        GenerateLightning(this);
        uVar3 = PVZ_EOT();
        *(undefined4 *)(this + 0x68) = uVar3;
        EntityComponent_GroundEffect::GetEffect();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_18)
        ;
        fVar2 = (float)PVZ_T();
        fVar4 = *(float *)(this + 0x58);
        *(float *)(this + 0x6c) = fVar2 + fVar4;
        goto LAB_0378ae14;
      }
    }
  }
  fVar4 = *(float *)(this + 0x58);
LAB_0378ae14:
  if (0.0 < fVar4) {
    EntityComponent_GroundEffect::GetEffect();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_18);
    fVar2 = (float)PVZ_T();
    if (*(float *)(this + 0x6c) <= fVar2) {
      if (this[0x70] == (ArtifactDevolve)0x0) {
        GeneratePassiveFieldLightning(this);
      }
      fVar2 = (float)PVZ_T();
      *(float *)(this + 0x6c) = fVar2 + *(float *)(this + 0x58);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

