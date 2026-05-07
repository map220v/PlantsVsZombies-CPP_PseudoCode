// Class: ArtifactSnowdrift


/* ArtifactSnowdrift::KillFlyZombie(Zombie*) */

void __thiscall ArtifactSnowdrift::KillFlyZombie(ArtifactSnowdrift *this,Zombie *param_1)

{
  (**(code **)(*(long *)param_1 + 0x80))(param_1,1);
  return;
}


/* ArtifactSnowdrift::OnZombieConditionTimeAppend(Zombie*, int, float*, bool) */

void __thiscall
ArtifactSnowdrift::OnZombieConditionTimeAppend
          (ArtifactSnowdrift *this,Zombie *param_1,int param_2,float *param_3,bool param_4)

{
  if ((param_4) && ((uint)param_2 < 2)) {
    *param_3 = *param_3 + *(float *)(this + 0x5c) * 0.01;
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSnowdrift::StaticClassInit() */

void ArtifactSnowdrift::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactSnowdrift");
    (*pcVar2)(plVar1,asStack_10,FUN_0375f3d0,0x90,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactSnowdrift::StaticGetClass() */

long * ArtifactSnowdrift::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactSnowdrift",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactSnowdrift::GetClass() const */

long * ArtifactSnowdrift::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactSnowdrift",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactSnowdrift::~ArtifactSnowdrift() */

void __thiscall ArtifactSnowdrift::~ArtifactSnowdrift(ArtifactSnowdrift *this)

{
  *(undefined ***)this = &PTR_GetClass_06691db0;
  Artifact::~Artifact((Artifact *)this);
  return;
}


/* ArtifactSnowdrift::~ArtifactSnowdrift() */

void __thiscall ArtifactSnowdrift::~ArtifactSnowdrift(ArtifactSnowdrift *this)

{
  ~ArtifactSnowdrift(this);
  AK::FreeHook(this);
  return;
}


/* ArtifactSnowdrift::ArtifactSnowdrift() */

void __thiscall ArtifactSnowdrift::ArtifactSnowdrift(ArtifactSnowdrift *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Artifact::Artifact((Artifact *)this);
  *(undefined4 *)(this + 0x44) = 1;
  *(undefined ***)this = &PTR_GetClass_06691db0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  this[0x80] = (ArtifactSnowdrift)0x0;
  *(undefined4 *)(this + 0x74) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnZombieConditionTimeAppend);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,int,float*,bool,Sexy::CBMemberTranslatorX<ArtifactSnowdrift,void(ArtifactSnowdrift::*)(Zombie*,int,float*,bool)>>
            ((MessageRouter *)puVar1,Message::ZombieConditionTimeAppend,&local_40);
  return;
}


/* ArtifactSnowdrift::StaticNew() */

ArtifactSnowdrift * ArtifactSnowdrift::StaticNew(void)

{
  ArtifactSnowdrift *this;
  
  this = ::operator_new(0x90);
  ArtifactSnowdrift(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSnowdrift::freezeBoard() */

void __thiscall ArtifactSnowdrift::freezeBoard(ArtifactSnowdrift *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  Zombie *this_00;
  float fVar5;
  float fVar6;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesOnBoard(avStack_20,2);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar4);
    if ((((this_00 != (Zombie *)0x0) &&
         (cVar2 = (**(code **)(*(long *)this_00 + 0x4d8))(), cVar2 == '\0')) &&
        (cVar2 = RealObject::IsOnTeam(this_00,1), cVar2 == '\0')) &&
       (((cVar2 = Zombie::HasCondition(this_00,0x82), cVar2 == '\0' &&
         (iVar3 = Zombie::GetSizeType(this_00), iVar3 == 2)) &&
        (cVar2 = Zombie::HasCondition(this_00,1), cVar2 == '\0')))) {
      cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00);
      if (cVar2 == '\0') {
        fVar5 = (float)FUN_03723c84(*(undefined4 *)(this + 0x74));
        fVar6 = (float)PVZ_T();
        if (fVar6 < fVar5) {
          fVar5 = (float)FUN_03723c84(*(undefined4 *)(this + 0x74));
          fVar6 = (float)PVZ_T();
          Zombie::ApplyCondition((Zombie *)((fVar5 + 1.0) - fVar6),0,this_00,1,0);
        }
        Zombie::ApplyCondition((Zombie *)0x40400000,0,this_00,1,1);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSnowdrift::repelZombies() */

void ArtifactSnowdrift::repelZombies(void)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  Zombie *this;
  string *psVar6;
  undefined8 local_40;
  undefined8 local_38;
  float local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar3 = operator|(2,4);
  EntityFinder::GetEntitiesOnBoard(avStack_20,uVar3);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar2) {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    this = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
    Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar5);
    if ((((this != (Zombie *)0x0) && (cVar1 = RealObject::IsOnTeam(this,1), cVar1 == '\0')) &&
        (cVar1 = Zombie::HasCondition(this,0x92), cVar1 == '\0')) &&
       ((iVar4 = Zombie::GetSizeType(this), iVar4 < 2 &&
        (cVar1 = Zombie::DoesIgnoresCollisions(this), cVar1 == '\0')))) {
      psVar6 = (string *)Zombie::GetTypeName(this);
      bVar2 = std::operator!=(psVar6,"bumpercar");
      if (bVar2) {
        puVar5 = (undefined8 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                *)this);
        local_30 = (float)*puVar5;
        local_28 = *(undefined4 *)(puVar5 + 1);
        _local_30 = CONCAT44((int)((ulong)*puVar5 >> 0x20),local_30 + 0.1);
        Zombie::SetTargetPosition(this,(SexyVector3 *)&local_30);
        FUN_03723b74(0x3f800000,this + 0x360);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSnowdrift::LaunchZombie(Zombie*) */

void __thiscall ArtifactSnowdrift::LaunchZombie(ArtifactSnowdrift *this,Zombie *param_1)

{
  ZombieBlowerSubSystem *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Board::GetGameSubSystem<ZombieBlowerSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"KillFlyZombie");
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *)aRStack_50,aRStack_60,asStack_58);
  ZombieBlowerSubSystem::BlowZombie
            ((ZombieBlowerSubSystem *)0x43960000,0,pZVar1,0,param_1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSnowdrift::DoTrigger() */

void __thiscall ArtifactSnowdrift::DoTrigger(ArtifactSnowdrift *this)

{
  long lVar1;
  Effect_Snowdrift *this_00;
  ResourceInfo *pRVar2;
  char *pcVar3;
  StandaloneEffect *this_01;
  Effect_PopAnim *pEVar4;
  float fVar5;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ArtifactGravity::DelayToCooldown((ArtifactGravity *)this);
  fVar5 = (float)PVZ_T();
  *(float *)(this + 0x70) = fVar5 + *(float *)(this + 0x6c);
  fVar5 = (float)PVZ_T();
  *(float *)(this + 0x74) = fVar5 + *(float *)(this + 0x50);
  this_00 = Board::AddEffect<Effect_Snowdrift>(*(Board **)(gLawnApp + 0x9f0));
  *(Effect_Snowdrift **)(this + 0x88) = this_00;
  std::string::string(asStack_20,"POPANIM_EFFECTS_ARTIFACT_SNOWDRIFT_EFFECT");
  GetPAMByName(asStack_20);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this_00,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
  nop();
  this_01 = *(StandaloneEffect **)(this + 0x88);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,120.0,180.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin(this_01,(SexyVector3 *)aRStack_18,-1);
  FUN_03723aa0(*(long *)(this + 0x88) + 0x1c,900000);
  pEVar4 = *(Effect_PopAnim **)(this + 0x88);
  std::string::string((string *)aRStack_18,"idle");
  Effect_PopAnim::PlaySingleAnimation(pEVar4,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar3,"Play_Plant_Blover_Attack");
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x40) = 1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSnowdrift::turn2Snowman() */

void __thiscall ArtifactSnowdrift::turn2Snowman(ArtifactSnowdrift *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  Zombie *this_00;
  string *psVar5;
  ArtifactSnowdriftSubSystem *pAVar6;
  float fVar7;
  float fVar8;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesOnBoard(avStack_20,2);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar4);
    cVar2 = (**(code **)(*(long *)this_00 + 0x328))();
    if ((((cVar2 == '\0') && (cVar2 = Zombie::DoesIgnoresCollisions(this_00), cVar2 == '\0')) &&
        (cVar2 = RealObject::IsOnTeam(this_00,1), cVar2 == '\0')) &&
       ((cVar2 = Zombie::HasCondition(this_00,0x92), cVar2 == '\0' &&
        (cVar2 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar2 == '\0')))) {
      cVar2 = Zombie::IsFlying(this_00);
      if ((cVar2 == '\0') ||
         ((bVar1 = Sexy::RtObject::IsA<Zomboss>((RtObject *)this_00), bVar1 ||
          (bVar1 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)this_00), bVar1)))) {
        psVar5 = (string *)Zombie::GetTypeName(this_00);
        bVar1 = std::operator!=(psVar5,"zombie_snowman");
        if (bVar1) {
          psVar5 = (string *)Zombie::GetTypeName(this_00);
          bVar1 = std::operator!=(psVar5,"bumpercar");
          if (((bVar1) && (iVar3 = Zombie::GetSizeType(this_00), iVar3 < 2)) &&
             (cVar2 = FUN_0373c80c(*(undefined4 *)(this_00 + 0xcc)), cVar2 == '\0')) {
            pAVar6 = Board::GetGameSubSystem<ArtifactSnowdriftSubSystem>
                               (*(Board **)(gLawnApp + 0x9f0));
            FUN_03723b28(*(undefined4 *)(this_00 + 0x50));
            fVar8 = *(float *)(this + 0x74);
            fVar7 = (float)PVZ_T();
            ArtifactSnowdriftSubSystem::transform
                      ((Zombie *)pAVar6,(int)this_00,(fVar8 + *(float *)(this + 0x4c)) - fVar7,
                       *(float *)(this + 0x48));
          }
        }
      }
      else {
        LaunchZombie(this,this_00);
        Zombie::SetMarkedForDeath(this_00);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSnowdrift::throwSnowball() */

void ArtifactSnowdrift::throwSnowball(void)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  RtObject *this;
  ArtifactSnowdriftProperties *pAVar6;
  undefined8 *puVar7;
  Zombie *this_00;
  GridItem *pGVar8;
  long lVar9;
  Projectile *pPVar10;
  SexyVector3 *pSVar11;
  int iVar12;
  undefined8 local_40;
  undefined8 local_38;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  iVar12 = 0;
  uVar3 = operator|(2,4);
  EntityFinder::GetEntitiesOnBoard(avStack_20,uVar3);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_20);
  FUN_03781c08(uVar4,uVar5);
  EntityComponent_GroundEffect::GetEffect();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
  pAVar6 = Sexy::RtObject::Cast<ArtifactSnowdriftProperties>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar2) {
    puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar7);
    pGVar8 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar7);
    if (this_00 == (Zombie *)0x0) {
      if (pGVar8 != (GridItem *)0x0) {
        GridItem::GetType();
        lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
        bVar2 = std::operator==((string *)(lVar9 + 8),"monotropa_snowman");
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
        if (bVar2) {
          iVar12 = iVar12 + 1;
          uVar4 = *(undefined8 *)(gLawnApp + 0x9f0);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aRStack_28,(RtWeakPtrBase *)(pAVar6 + 0x150))
          ;
          pPVar10 = (Projectile *)
                    Board::AddProjectile((Board *)0x43480000,0x43820000,0,uVar4,aRStack_28,0,0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
          pSVar11 = (SexyVector3 *)
                    std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)*puVar7);
          Projectile::LaunchAt(pPVar10,pSVar11,400.0,0.5);
          FUN_03723b18(0,pPVar10 + 0xd8);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aRStack_28,(RtWeakPtrBase *)aRStack_30);
          Projectile::SetTarget(pPVar10,(RtWeakPtr *)aRStack_28);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
          FUN_03723b10(pPVar10 + 0x4c,1);
        }
      }
LAB_03781e58:
      if (iVar12 == 3) break;
    }
    else {
      cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00);
      if ((((cVar1 == '\0') &&
           (cVar1 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar1 == '\0')) &&
          (cVar1 = RealObject::IsOnTeam(this_00,1), cVar1 == '\0')) &&
         ((cVar1 = Zombie::DoesIgnoresCollisions(this_00), cVar1 == '\0' &&
          (cVar1 = Zombie::IsFlying(this_00), cVar1 == '\0')))) {
        cVar1 = Zombie::HasCondition(this_00,0x92);
        if (cVar1 == '\0') {
          iVar12 = iVar12 + 1;
          uVar4 = *(undefined8 *)(gLawnApp + 0x9f0);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aRStack_28,(RtWeakPtrBase *)(pAVar6 + 0x150))
          ;
          pPVar10 = (Projectile *)
                    Board::AddProjectile((Board *)0x43480000,0x43820000,0,uVar4,aRStack_28,0,0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
          pSVar11 = (SexyVector3 *)
                    std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)*puVar7);
          Projectile::LaunchAt(pPVar10,pSVar11,400.0,0.5);
          FUN_03723b18(0,pPVar10 + 0xd8);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aRStack_28,(RtWeakPtrBase *)aRStack_30);
          Projectile::SetTarget(pPVar10,(RtWeakPtr *)aRStack_28);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
          FUN_03723b10(pPVar10 + 0x4c,1);
          goto LAB_03781e58;
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactSnowdrift::UpdatePassiveSnowdrift() */

void __thiscall ArtifactSnowdrift::UpdatePassiveSnowdrift(ArtifactSnowdrift *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0x68) < fVar1) {
    throwSnowball();
    fVar1 = (float)PVZ_T();
    *(float *)(this + 0x68) = fVar1 + *(float *)(this + 0x60);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSnowdrift::tryAttack() */

void ArtifactSnowdrift::tryAttack(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  Zombie *this;
  Zombie *pZVar9;
  string *psVar10;
  long lVar11;
  int in_w4;
  undefined8 local_48;
  undefined8 local_40;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  undefined1 auStack_30 [8];
  int local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar4 = BoardConstants::NUMBER_OF_ROWS();
  BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)0x0,0,iVar3,iVar4,in_w4);
  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
  local_28 = (int)((double)local_28 + (double)iVar3 * 0.3);
  uVar5 = operator|(2,4);
  EntityFinder::GetEntitiesInRectangle(avStack_20,uVar5,auStack_30);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_20);
  FUN_03782230(uVar6,uVar7);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar1) {
    puVar8 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    this = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar8);
    pZVar9 = (Zombie *)Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar8);
    if (this == (Zombie *)0x0) {
      if (pZVar9 != (Zombie *)0x0) {
LAB_037823b8:
        GridItem::GetType();
        lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
        bVar1 = std::operator==((string *)(lVar11 + 8),"monotropa_snowman");
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
        if (bVar1) goto LAB_03782410;
        if (this != (Zombie *)0x0) goto LAB_037823ec;
      }
    }
    else {
      psVar10 = (string *)Zombie::GetTypeName(this);
      bVar1 = std::operator==(psVar10,"zombie_snowman");
      if (bVar1) {
        cVar2 = (**(code **)(*(long *)this + 0x328))(this);
        pZVar9 = this;
        if (cVar2 == '\0') goto LAB_03782410;
      }
      else {
        if (pZVar9 != (Zombie *)0x0) goto LAB_037823b8;
LAB_037823ec:
        iVar3 = Zombie::GetSizeType(this);
        if ((iVar3 == 2) && (cVar2 = Zombie::HasCondition(this,1), pZVar9 = this, cVar2 != '\0'))
        goto LAB_03782410;
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
  }
  pZVar9 = (Zombie *)0x0;
LAB_03782410:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pZVar9);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSnowdrift::fireIcebullets() */

void __thiscall ArtifactSnowdrift::fireIcebullets(ArtifactSnowdrift *this)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  RtObject *this_01;
  ArtifactSnowdriftProperties *pAVar1;
  Projectile *this_02;
  SexyVector3 *pSVar2;
  undefined8 uVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)tryAttack();
  if (this_00 !=
      (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
       *)0x0) {
    EntityComponent_GroundEffect::GetEffect();
    this_01 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    pAVar1 = Sexy::RtObject::Cast<ArtifactSnowdriftProperties>(this_01);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    uVar3 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)(pAVar1 + 0x158));
    this_02 = (Projectile *)
              Board::AddProjectile((Board *)0x43480000,0x43820000,0,uVar3,aRStack_10,0,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    pSVar2 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this_00);
    Projectile::SetVelocity(this_02,pSVar2);
    FUN_03723b18(*(undefined4 *)(this + 0x78),this_02 + 0xd8);
    FUN_03723b10(this_02 + 0x4c,3);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
    Projectile::SetTarget(this_02,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    Projectile::RotateTowardTarget(this_02);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_10);
    Projectile::SetTarget(this_02,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSnowdrift::Update() */

void __thiscall ArtifactSnowdrift::Update(ArtifactSnowdrift *this)

{
  int iVar1;
  char cVar2;
  Effect_PopAnim *pEVar3;
  float fVar4;
  float fVar5;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Artifact::Update((Artifact *)this);
  iVar1 = *(int *)(this + 0x40);
  if (iVar1 == 2) {
    fVar5 = *(float *)(this + 0x74);
    fVar4 = (float)PVZ_T();
    if (fVar5 <= fVar4) {
      *(undefined4 *)(this + 0x40) = 3;
    }
    else {
      turn2Snowman(this);
      freezeBoard(this);
      repelZombies();
      fVar4 = (float)PVZ_T();
      if (*(float *)(this + 0x70) < fVar4) {
        fVar4 = (float)PVZ_T();
        *(float *)(this + 0x70) = fVar4 + *(float *)(this + 0x6c);
        fireIcebullets(this);
      }
    }
  }
  else if (iVar1 == 3) {
    pEVar3 = *(Effect_PopAnim **)(this + 0x88);
    std::string::string((string *)avStack_20,"idle02");
    Effect_PopAnim::PlaySingleAnimation(pEVar3,(string *)avStack_20,0);
    std::string::~string((string *)avStack_20);
    nop();
    *(undefined4 *)(this + 0x40) = 0;
  }
  else if ((iVar1 == 1) && (this[0x3c] != (ArtifactSnowdrift)0x0)) {
    *(undefined4 *)(this + 0x40) = 2;
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesOnBoard(avStack_20,2);
  cVar2 = FUN_03723bb8(this[0x3d]);
  if (cVar2 == '\0') {
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  }
  else {
    UpdatePassiveSnowdrift(this);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactSnowdrift::Activate() */

void __thiscall ArtifactSnowdrift::Activate(ArtifactSnowdrift *this)

{
  char cVar1;
  ArtifactMgr *pAVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  Artifact::Activate((Artifact *)this);
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,0);
  uVar3 = 0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    uVar3 = ArtifactMgr::CalculateFieldValue(pAVar2,0,0);
  }
  *(undefined4 *)(this + 0x48) = uVar3;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,0);
  fVar5 = 0.0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar5 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,0,1);
  }
  *(float *)(this + 0x50) = fVar5;
  fVar4 = (float)Artifact::GetBoostValue((Artifact *)this,2);
  fVar6 = 0.0;
  *(float *)(this + 0x50) = *(float *)(this + 0x50) + fVar5 * fVar4;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,0);
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar6 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,0,2);
  }
  *(float *)(this + 0x4c) = fVar6;
  fVar5 = (float)Artifact::GetBoostValue((Artifact *)this,3);
  *(float *)(this + 0x4c) = *(float *)(this + 0x4c) + fVar6 * fVar5;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,0);
  uVar3 = 0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    uVar3 = ArtifactMgr::CalculateFieldValue(pAVar2,0,3);
  }
  *(undefined4 *)(this + 0x7c) = uVar3;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,1);
  uVar3 = 0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    uVar3 = ArtifactMgr::CalculateFieldValue(pAVar2,1,0);
  }
  *(undefined4 *)(this + 0x5c) = uVar3;
  fVar5 = (float)Artifact::GetBoostValue((Artifact *)this,3);
  fVar4 = 0.0;
  *(float *)(this + 0x5c) = *(float *)(this + 0x5c) + fVar5;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar4 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,2,0);
  }
  *(float *)(this + 0x60) = fVar4;
  fVar5 = (float)Artifact::GetBoostValue((Artifact *)this,6);
  *(float *)(this + 0x60) = *(float *)(this + 0x60) - fVar4 * fVar5;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
  uVar3 = 0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    uVar3 = ArtifactMgr::CalculateFieldValue(pAVar2,2,1);
  }
  *(undefined4 *)(this + 100) = uVar3;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,3);
  uVar3 = 0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    uVar3 = ArtifactMgr::CalculateFieldValue(pAVar2,3,0);
  }
  *(undefined4 *)(this + 0x6c) = uVar3;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,3);
  fVar5 = 0.0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar5 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,3,1);
  }
  *(float *)(this + 0x78) = fVar5;
  fVar4 = (float)Artifact::GetBoostValue((Artifact *)this,1);
  *(float *)(this + 0x78) = *(float *)(this + 0x78) + fVar5 * fVar4;
  if (*(float *)(this + 0x60) <= 0.0) {
    uVar3 = PVZ_EOT();
    *(undefined4 *)(this + 0x68) = uVar3;
  }
  else {
    fVar5 = (float)PVZ_T();
    *(float *)(this + 0x68) = fVar5 + *(float *)(this + 0x60);
  }
  if (*(float *)(this + 0x6c) == 0.0) {
    uVar3 = PVZ_EOT();
    *(undefined4 *)(this + 0x6c) = uVar3;
  }
  return;
}

