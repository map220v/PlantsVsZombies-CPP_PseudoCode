// Class: ArtifactUFO


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactUFO::StaticClassInit() */

void ArtifactUFO::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactUFO");
    (*pcVar2)(plVar1,asStack_10,FUN_0377901c,0x90,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactUFO::StaticGetClass() */

long * ArtifactUFO::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactUFO",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactUFO::GetClass() const */

long * ArtifactUFO::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactUFO",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactUFO::calcVelocityRate(BoardEntity*) */

undefined4 __thiscall ArtifactUFO::calcVelocityRate(ArtifactUFO *this,BoardEntity *param_1)

{
  char cVar1;
  int iVar2;
  Zombie *this_00;
  undefined4 uVar3;
  
  nop();
  cVar1 = Zombie::IsFlying(this_00);
  uVar3 = 0x40400000;
  if (cVar1 == '\0') {
    iVar2 = Zombie::GetSizeType(this_00);
    if (iVar2 == 1) {
      uVar3 = 0x3fc00000;
    }
    else if (iVar2 == 0) {
      uVar3 = 0x40000000;
    }
    else {
      uVar3 = 0x3f800000;
      if (iVar2 != 2) {
        uVar3 = 0x40400000;
      }
    }
  }
  return uVar3;
}


/* ArtifactUFO::ArtifactUFO() */

void __thiscall ArtifactUFO::ArtifactUFO(ArtifactUFO *this)

{
  ArtifactUFOSubSystem *pAVar1;
  
  Artifact::Artifact((Artifact *)this);
  *(undefined ***)this = &PTR_GetClass_06690da0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x78));
  pAVar1 = Board::GetGameSubSystem<ArtifactUFOSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  *(ArtifactUFOSubSystem **)(this + 0x40) = pAVar1;
  return;
}


/* ArtifactUFO::StaticNew() */

ArtifactUFO * ArtifactUFO::StaticNew(void)

{
  ArtifactUFO *this;
  
  this = ::operator_new(0x90);
  ArtifactUFO(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactUFO::canBeTargeted(BoardEntity*) */

void __thiscall ArtifactUFO::canBeTargeted(ArtifactUFO *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  long extraout_x0;
  Zombie *this_00;
  undefined8 uVar6;
  undefined8 uVar7;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long lVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (BoardEntity *)0x0) && (cVar2 = RealObject::IsOnTeam(param_1,1), cVar2 == '\0')) {
    EntityComponent_GroundEffect::GetEffect();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    bVar3 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
    if ((bVar3) && (nop(), this_00 != (Zombie *)0x0)) {
      uVar5 = operator|(7,2);
      cVar2 = Zombie::IsTargetable(this_00);
      if (((((cVar2 != '\0') &&
            (cVar2 = (**(code **)(*(long *)this_00 + 0xb8))(this_00,uVar5), cVar2 != '\0')) &&
           (cVar2 = Zombie::IsControlled(this_00), cVar2 == '\0')) &&
          ((cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar2 == '\0' &&
           (cVar2 = Zombie::HasFogImmune(this_00), cVar2 == '\0')))) &&
         ((cVar2 = Zombie::IsBerserk(this_00), cVar2 == '\0' &&
          (((cVar2 = Zombie::IsBoss(this_00), cVar2 == '\0' &&
            (cVar2 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar2 == '\0')) &&
           (cVar2 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar2 == '\0')))))) {
        pvVar1 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)(this + 0x60);
        uVar6 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(pvVar1);
        uVar7 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(pvVar1);
        ToolPacketData::GetProps();
        local_28 = std::
                   find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Zombie>*,std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>>,Sexy::RtWeakPtr<GameObject>>
                             (uVar6,uVar7,aRStack_30);
        local_20 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(pvVar1);
        bVar4 = __gnu_cxx::operator==((__normal_iterator *)&local_28,(__normal_iterator *)&local_20)
        ;
        bVar3 = false;
        if (bVar4) {
          pvVar1 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(extraout_x0 + 0x178);
          uVar6 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin(pvVar1);
          uVar7 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(pvVar1);
          this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this_00);
          lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
          local_18 = std::
                     find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                               (uVar6,uVar7,lVar8 + 8);
          local_10 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end(pvVar1);
          bVar3 = __gnu_cxx::operator==
                            ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
        goto LAB_03764b8c;
      }
    }
  }
  bVar3 = false;
LAB_03764b8c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactUFO::doRiseSingleZombie(BoardEntity*) */

void __thiscall ArtifactUFO::doRiseSingleZombie(ArtifactUFO *this,BoardEntity *param_1)

{
  char cVar1;
  int iVar2;
  long extraout_x0;
  Zombie *pZVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  RtMixedPtr aRStack_78 [8];
  RtId aRStack_70 [8];
  string asStack_68 [8];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
  cVar1 = canBeTargeted(this,param_1);
  if (cVar1 != '\0') {
    fVar9 = *(float *)(extraout_x0 + 400);
    fVar5 = (float)calcVelocityRate(this,param_1);
    fVar11 = *(float *)(this + 0x54);
    fVar6 = (float)calcVelocityRate(this,param_1);
    fVar10 = *(float *)(this + 0x58);
    fVar7 = (float)calcVelocityRate(this,param_1);
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    uVar4 = *(undefined8 *)(this + 0x40);
    pZVar3 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    EATextSquish::Vec3::Vec3((Vec3 *)&local_60,0.0,0.0,fVar5 * fVar9);
    uVar8 = *(undefined4 *)(this + 0x48);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
    std::string::string(asStack_68,"onLandedCallback");
    RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *)aRStack_50,aRStack_70,asStack_68);
    ArtifactUFOSubSystem::riseAndTossBackZombie
              (local_60,local_5c,local_58,uVar8,fVar11 / fVar6,fVar7 * fVar10 * (float)iVar2,uVar4,
               pZVar3,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_68);
    nop();
    Sexy::RtId::~RtId(aRStack_70);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactUFO::doRiseAllZombies() */

void __thiscall ArtifactUFO::doRiseAllZombies(ArtifactUFO *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long extraout_x0;
  undefined8 *puVar4;
  Zombie *pZVar5;
  undefined8 uVar6;
  RtObject *this_00;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_a0;
  undefined8 local_98;
  RtMixedPtr aRStack_90 [8];
  RtId aRStack_88 [8];
  string asStack_80 [8];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [24];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_68);
  EntityFinder::GetEntitiesOnBoard(aRStack_68,2);
  local_a0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)aRStack_68);
  local_98 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)aRStack_68);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98), bVar1) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
    this_00 = (RtObject *)*puVar4;
    cVar2 = canBeTargeted(this,(BoardEntity *)this_00);
    if (cVar2 != '\0') {
      fVar11 = *(float *)(extraout_x0 + 400);
      fVar7 = (float)calcVelocityRate(this,(BoardEntity *)this_00);
      fVar13 = *(float *)(this + 0x54);
      fVar8 = (float)calcVelocityRate(this,(BoardEntity *)this_00);
      fVar12 = *(float *)(this + 0x58);
      fVar9 = (float)calcVelocityRate(this,(BoardEntity *)this_00);
      iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
      uVar6 = *(undefined8 *)(this + 0x40);
      pZVar5 = Sexy::RtObject::Cast<Zombie>(this_00);
      EATextSquish::Vec3::Vec3((Vec3 *)&local_78,0.0,0.0,fVar7 * fVar11);
      uVar10 = *(undefined4 *)(this + 0x48);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_90);
      std::string::string(asStack_80,"onLandedCallback");
      RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *)aRStack_50,aRStack_88,asStack_80)
      ;
      ArtifactUFOSubSystem::riseAndTossBackZombie
                (local_78,local_74,local_70,uVar10,fVar8 * fVar13,fVar9 * fVar12 * (float)iVar3,
                 uVar6,pZVar5,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_80);
      nop();
      Sexy::RtId::~RtId(aRStack_88);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactUFO::onPopAnimCommand(std::string const&, float, std::string const&, std::string const&)
    */

void ArtifactUFO::onPopAnimCommand(string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_4,"start");
  if (!bVar1) {
    return;
  }
  doRiseAllZombies((ArtifactUFO *)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactUFO::onLandedCallback(Zombie*) */

void __thiscall ArtifactUFO::onLandedCallback(ArtifactUFO *this,Zombie *param_1)

{
  float fVar1;
  DamageInfo aDStack_68 [8];
  float local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Zombie *)0x0) {
    DamageInfo::DamageInfo(aDStack_68);
    fVar1 = *(float *)(this + 0x5c);
    local_60 = (float)calcVelocityRate(this,(BoardEntity *)param_1);
    local_60 = local_60 * fVar1;
    (**(code **)(*(long *)param_1 + 0x110))(param_1,aDStack_68);
    DamageInfo::~DamageInfo(aDStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactUFO::~ArtifactUFO() */

void __thiscall ArtifactUFO::~ArtifactUFO(ArtifactUFO *this)

{
  *(undefined ***)this = &PTR_GetClass_06690da0;
  std::vector<Sexy::RtWeakPtr<UFO>,std::allocator<Sexy::RtWeakPtr<UFO>>>::~vector
            ((vector<Sexy::RtWeakPtr<UFO>,std::allocator<Sexy::RtWeakPtr<UFO>>> *)(this + 0x78));
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x60));
  Artifact::~Artifact((Artifact *)this);
  return;
}


/* ArtifactUFO::~ArtifactUFO() */

void __thiscall ArtifactUFO::~ArtifactUFO(ArtifactUFO *this)

{
  ~ArtifactUFO(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactUFO::DoTrigger() */

void __thiscall ArtifactUFO::DoTrigger(ArtifactUFO *this)

{
  long extraout_x0;
  UFO *pUVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  undefined4 local_58 [4];
  undefined1 auStack_48 [8];
  RtWeakPtr<SpartanBambooMatrixSystem> aRStack_40 [8];
  undefined4 local_38;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ArtifactGravity::DelayToCooldown((ArtifactGravity *)this);
  if (*(long *)(this + 0x40) != 0) {
    EntityComponent_GroundEffect::GetEffect();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    pUVar1 = GameObject::Create<UFO>();
    UFO::RiseDes::RiseDes((RiseDes *)local_58);
    thunk_FUN_05475e00(auStack_48,extraout_x0 + 0x150);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(aRStack_40,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    local_38 = 0;
    local_58[0] = *(undefined4 *)(this + 0x48);
    UFO::RiseDes::RiseDes((RiseDes *)aRStack_30,(RiseDes *)local_58);
    UFO::setValues(pUVar1,aRStack_30);
    UFO::RiseDes::~RiseDes((RiseDes *)aRStack_30);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_60);
    std::vector<Sexy::RtWeakPtr<UFO>,std::allocator<Sexy::RtWeakPtr<UFO>>>::push_back
              ((vector<Sexy::RtWeakPtr<UFO>,std::allocator<Sexy::RtWeakPtr<UFO>>> *)(this + 0x78),
               (RtWeakPtr *)aRStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
    UFO::RiseDes::~RiseDes((RiseDes *)local_58);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactUFO::checkPassiveSkill2() */

void __thiscall ArtifactUFO::checkPassiveSkill2(ArtifactUFO *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long extraout_x0;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  UFO *pUVar7;
  float fVar8;
  float fVar9;
  undefined8 local_88;
  undefined8 local_80;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_70 [24];
  undefined4 local_58 [2];
  RtWeakPtr<SpartanBambooMatrixSystem> aRStack_50 [8];
  undefined1 auStack_48 [8];
  RtWeakPtr<SpartanBambooMatrixSystem> aRStack_40 [8];
  undefined4 local_38;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_03723bb4(*(undefined4 *)(this + 0x20));
  if ((2 < iVar3) && (fVar9 = *(float *)(this + 0x50), fVar8 = (float)PVZ_T(), fVar9 <= fVar8)) {
    EntityComponent_GroundEffect::GetEffect();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    fVar8 = (float)PVZ_T();
    if (*(float *)(this + 0x50) < fVar8) {
      iVar3 = 0;
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_70);
      EntityFinder::GetEntitiesOnBoard(avStack_70,2);
      uVar4 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_70);
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)avStack_70);
      FUN_037819dc(uVar4,uVar5);
      local_88 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_70);
      local_80 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_70);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_88,(__normal_iterator *)&local_80),
            bVar1) {
        puVar6 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_88);
        cVar2 = canBeTargeted(this,(BoardEntity *)*puVar6);
        if (cVar2 != '\0') {
          iVar3 = iVar3 + 1;
          pUVar7 = GameObject::Create<UFO>();
          UFO::RiseDes::RiseDes((RiseDes *)local_58);
          thunk_FUN_05475e00(auStack_48,extraout_x0 + 0x150);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                    (aRStack_40,(RtWeakPtrBase *)aRStack_30);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                    (aRStack_50,(RtWeakPtrBase *)aRStack_30);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
          local_58[0] = *(undefined4 *)(this + 0x48);
          local_38 = 1;
          UFO::RiseDes::RiseDes((RiseDes *)aRStack_30,(RiseDes *)local_58);
          UFO::setValues(pUVar7,aRStack_30);
          UFO::RiseDes::~RiseDes((RiseDes *)aRStack_30);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_78);
          std::vector<Sexy::RtWeakPtr<UFO>,std::allocator<Sexy::RtWeakPtr<UFO>>>::push_back
                    ((vector<Sexy::RtWeakPtr<UFO>,std::allocator<Sexy::RtWeakPtr<UFO>>> *)
                     (this + 0x78),(RtWeakPtr *)aRStack_30);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_78);
          std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                    ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                     (this + 0x60),(RtWeakPtr *)aRStack_30);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
          UFO::RiseDes::~RiseDes((RiseDes *)local_58);
        }
        if (2 < iVar3) goto LAB_0378311c;
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_88);
      }
      if (iVar3 != 0) {
LAB_0378311c:
        fVar8 = (float)PVZ_T();
        *(float *)(this + 0x50) = fVar8 + *(float *)(this + 0x4c);
        std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
                  ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                   (this + 0x60));
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_70);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactUFO::Update() */

void __thiscall ArtifactUFO::Update(ArtifactUFO *this)

{
  char cVar1;
  bool bVar2;
  RtWeakPtrBase *pRVar3;
  UFO *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Artifact::Update((Artifact *)this);
  cVar1 = FUN_03723bb8(this[0x3d]);
  if (cVar1 != '\0') {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x78));
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x78));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2)
    {
      pRVar3 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,pRVar3);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_20);
      if (bVar2) {
        this_00 = (UFO *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
        UFO::update(this_00);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
    checkPassiveSkill2(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactUFO::Activate() */

void __thiscall ArtifactUFO::Activate(ArtifactUFO *this)

{
  char cVar1;
  int iVar2;
  long extraout_x0;
  ArtifactUFOSubSystem *this_00;
  ArtifactMgr *pAVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Artifact::Activate((Artifact *)this);
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,1);
  if (cVar1 == '\0') {
    *(undefined4 *)(this + 0x2c) = 0;
    cVar1 = Artifact::IsFieldActivated((Artifact *)this,1);
  }
  else {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar5 = (float)ArtifactMgr::CalculateFieldValue(pAVar3,1,0);
    *(float *)(this + 0x2c) = fVar5 * 0.01;
    cVar1 = Artifact::IsFieldActivated((Artifact *)this,1);
  }
  if (cVar1 == '\0') {
    *(undefined4 *)(this + 0x30) = 0;
    cVar1 = Artifact::IsFieldActivated((Artifact *)this,0);
  }
  else {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar5 = (float)ArtifactMgr::CalculateFieldValue(pAVar3,1,0);
    *(float *)(this + 0x30) = fVar5 * 0.01;
    cVar1 = Artifact::IsFieldActivated((Artifact *)this,0);
  }
  fVar5 = 0.0;
  if (cVar1 != '\0') {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar5 = (float)ArtifactMgr::CalculateFieldValue(pAVar3,0,1);
  }
  *(float *)(this + 0x48) = fVar5;
  fVar4 = (float)Artifact::GetBoostValue((Artifact *)this,2);
  fVar7 = 0.0;
  *(float *)(this + 0x48) = *(float *)(this + 0x48) + fVar5 * fVar4;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
  if (cVar1 != '\0') {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar7 = (float)ArtifactMgr::CalculateFieldValue(pAVar3,2,0);
  }
  *(float *)(this + 0x4c) = fVar7;
  fVar5 = (float)Artifact::GetBoostValue((Artifact *)this,6);
  fVar4 = 0.0;
  fVar5 = *(float *)(this + 0x4c) - fVar7 * fVar5;
  *(float *)(this + 0x4c) = fVar5;
  Sexy::OutputDebugStrF((wchar_t *)"ArtifactUFO::Activate m_psInterval = %f",(double)fVar5);
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,0);
  if (cVar1 != '\0') {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar4 = (float)ArtifactMgr::CalculateFieldValue(pAVar3,0,0);
  }
  *(float *)(this + 0x5c) = fVar4;
  fVar5 = (float)Artifact::GetBoostValue((Artifact *)this,1);
  *(float *)(this + 0x5c) = *(float *)(this + 0x5c) + fVar4 * fVar5;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,0);
  if (cVar1 == '\0') {
    uVar6 = 0x7f7fffff;
  }
  else {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    uVar6 = ArtifactMgr::CalculateFieldValue(pAVar3,0,2);
  }
  *(undefined4 *)(this + 0x54) = uVar6;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,0);
  uVar6 = 0;
  if (cVar1 != '\0') {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    uVar6 = ArtifactMgr::CalculateFieldValue(pAVar3,0,3);
  }
  *(undefined4 *)(this + 0x58) = uVar6;
  iVar2 = FUN_03723bb4(*(undefined4 *)(this + 0x20));
  if (iVar2 < 4) {
    uVar6 = PVZ_EOT();
    *(undefined4 *)(this + 0x54) = uVar6;
    *(undefined4 *)(this + 0x58) = 0;
  }
  uVar6 = PVZ_T();
  this_00 = *(ArtifactUFOSubSystem **)(this + 0x40);
  *(undefined4 *)(this + 0x50) = uVar6;
  if (this_00 == (ArtifactUFOSubSystem *)0x0) {
    this_00 = Board::GetGameSubSystem<ArtifactUFOSubSystem>(*(Board **)(gLawnApp + 0x9f0));
    *(ArtifactUFOSubSystem **)(this + 0x40) = this_00;
  }
  ArtifactUFOSubSystem::setValues(this_00,-600.0,*(float *)(extraout_x0 + 400) * 17.9);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

