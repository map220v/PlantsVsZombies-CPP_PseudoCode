// Class: ArtifactWatergun


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactWatergun::StaticClassInit() */

void ArtifactWatergun::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactWatergun");
    (*pcVar2)(plVar1,asStack_10,FUN_0373321c,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactWatergun::StaticGetClass() */

long * ArtifactWatergun::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactWatergun",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactWatergun::GetClass() const */

long * ArtifactWatergun::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactWatergun",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactWatergun::~ArtifactWatergun() */

void __thiscall ArtifactWatergun::~ArtifactWatergun(ArtifactWatergun *this)

{
  *(undefined ***)this = &PTR_GetClass_06691460;
  Artifact::~Artifact((Artifact *)this);
  return;
}


/* ArtifactWatergun::~ArtifactWatergun() */

void __thiscall ArtifactWatergun::~ArtifactWatergun(ArtifactWatergun *this)

{
  ~ArtifactWatergun(this);
  AK::FreeHook(this);
  return;
}


/* ArtifactWatergun::DoTrigger() */

void __thiscall ArtifactWatergun::DoTrigger(ArtifactWatergun *this)

{
  ArtifactWatergunSubSystem *this_00;
  
  ArtifactGravity::DelayToCooldown((ArtifactGravity *)this);
  this_00 = Board::GetGameSubSystem<ArtifactWatergunSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  ArtifactWatergunSubSystem::Start(this_00);
  return;
}


/* ArtifactWatergun::ArtifactWatergun() */

void __thiscall ArtifactWatergun::ArtifactWatergun(ArtifactWatergun *this)

{
  Artifact::Artifact((Artifact *)this);
  *(undefined ***)this = &PTR_GetClass_06691460;
  return;
}


/* ArtifactWatergun::StaticNew() */

ArtifactWatergun * ArtifactWatergun::StaticNew(void)

{
  ArtifactWatergun *this;
  
  this = ::operator_new(0x50);
  ArtifactWatergun(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactWatergun::UpdateBuffPlants() */

void __thiscall ArtifactWatergun::UpdateBuffPlants(ArtifactWatergun *this)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  Plant *pPVar4;
  float fVar5;
  undefined8 local_38;
  undefined8 local_30 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar5 = (float)PVZ_T();
  if (*(float *)(this + 0x44) < fVar5) {
    *(float *)(this + 0x44) = *(float *)(this + 0x40) + *(float *)(this + 0x44);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    iVar2 = BoardConstants::NUMBER_OF_ROWS();
    Sexy::Insets::Insets((Insets *)local_30,0,0,3,iVar2);
    EntityFinder::GetEntitiesInGridSquares(avStack_20,1,(Insets *)local_30);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_30[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)avStack_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_38,(__normal_iterator *)local_30), bVar1)
    {
      puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38)
      ;
      pPVar4 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar3);
      if (pPVar4 != (Plant *)0x0) {
        Plant::ApplyCondition(*(undefined4 *)(this + 0x48),0,pPVar4,0x1f);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactWatergun::Update() */

void __thiscall ArtifactWatergun::Update(ArtifactWatergun *this)

{
  char cVar1;
  
  Artifact::Update((Artifact *)this);
  cVar1 = FUN_03723bb8(this[0x3d]);
  if (cVar1 == '\0') {
    return;
  }
  UpdateBuffPlants(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactWatergun::Activate() */

void __thiscall ArtifactWatergun::Activate(ArtifactWatergun *this)

{
  char cVar1;
  long extraout_x0;
  ArtifactWatergunSubSystem *pAVar2;
  ArtifactMgr *pAVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  float local_30;
  undefined4 uStack_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Artifact::Activate((Artifact *)this);
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,1);
  if (cVar1 == '\0') {
    *(undefined4 *)(this + 0x2c) = 0;
    cVar1 = Artifact::IsFieldActivated((Artifact *)this,1);
  }
  else {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar6 = (float)ArtifactMgr::CalculateFieldValue(pAVar3,1,0);
    *(float *)(this + 0x2c) = fVar6 * 0.01;
    cVar1 = Artifact::IsFieldActivated((Artifact *)this,1);
  }
  fVar6 = 0.0;
  if (cVar1 != '\0') {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar6 = (float)ArtifactMgr::CalculateFieldValue(pAVar3,1,0);
    fVar6 = fVar6 * 0.01;
  }
  *(float *)(this + 0x30) = fVar6;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
  if (cVar1 == '\0') {
    Artifact::GetBoostValue((Artifact *)this,6);
  }
  else {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar6 = (float)ArtifactMgr::CalculateFieldValue(pAVar3,2,0);
    fVar5 = (float)Artifact::GetBoostValue((Artifact *)this,6);
    fVar6 = fVar6 - fVar6 * fVar5;
    if (0.0 < fVar6) {
      *(float *)(this + 0x40) = fVar6;
      fVar5 = (float)PVZ_T();
      *(float *)(this + 0x44) = fVar5 + fVar6;
      cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
      goto joined_r0x03787020;
    }
  }
  uVar4 = PVZ_EOT();
  *(undefined4 *)(this + 0x40) = uVar4;
  *(undefined4 *)(this + 0x44) = uVar4;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
joined_r0x03787020:
  if (cVar1 == '\0') {
    *(undefined4 *)(this + 0x48) = 0;
    cVar1 = Artifact::IsFieldActivated((Artifact *)this,3);
  }
  else {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    uVar4 = ArtifactMgr::CalculateFieldValue(pAVar3,2,2);
    *(undefined4 *)(this + 0x48) = uVar4;
    cVar1 = Artifact::IsFieldActivated((Artifact *)this,3);
  }
  fVar6 = 0.0;
  if (cVar1 != '\0') {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar6 = (float)ArtifactMgr::CalculateFieldValue(pAVar3,3,0);
  }
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
  pAVar2 = Board::GetGameSubSystem<ArtifactWatergunSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  if (pAVar2 != (ArtifactWatergunSubSystem *)0x0) {
    WatergunBeamParams::WatergunBeamParams((WatergunBeamParams *)&local_30);
    fVar6 = fVar6 + *(float *)(extraout_x0 + 0x150);
    local_30 = fVar6;
    fVar5 = (float)Artifact::GetBoostValue((Artifact *)this,3);
    local_30 = local_30 + fVar6 * fVar5;
    uStack_2c = *(undefined4 *)(extraout_x0 + 0x154);
    fVar5 = *(float *)(extraout_x0 + 0x158);
    local_28 = fVar5;
    fVar6 = (float)Artifact::GetBoostValue((Artifact *)this,2);
    local_28 = local_28 + fVar5 * fVar6;
    local_24 = *(undefined4 *)(extraout_x0 + 0x15c);
    local_20 = *(undefined4 *)(extraout_x0 + 0x160);
    local_60 = CONCAT44(uStack_2c,local_30);
    uStack_58 = CONCAT44(local_24,local_28);
    uStack_1c = *(undefined4 *)(extraout_x0 + 0x164);
    local_50 = *(undefined8 *)(extraout_x0 + 0x160);
    local_18 = *(undefined4 *)(extraout_x0 + 0x168);
    local_14 = *(undefined4 *)(extraout_x0 + 0x16c);
    uStack_48 = *(undefined8 *)(extraout_x0 + 0x168);
    local_40 = *(undefined4 *)(extraout_x0 + 0x170);
    local_10 = local_40;
    ArtifactWatergunSubSystem::FillWatergunBeamParams(pAVar2,&local_60);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

