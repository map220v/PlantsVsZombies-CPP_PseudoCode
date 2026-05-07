// Class: PlantHomingThistle


/* PlantHomingThistle::UpdateUnconditionally() */

void __thiscall PlantHomingThistle::UpdateUnconditionally(PlantHomingThistle *this)

{
  this[0x28] = (PlantHomingThistle)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHomingThistle::StaticClassInit() */

void PlantHomingThistle::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantHomingThistle");
    (*pcVar2)(plVar1,asStack_10,FUN_041e5984,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHomingThistle::StaticGetClass() */

long * PlantHomingThistle::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantHomingThistle",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantHomingThistle::GetClass() const */

long * PlantHomingThistle::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantHomingThistle",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantHomingThistle::Initialize() */

void __thiscall PlantHomingThistle::Initialize(PlantHomingThistle *this)

{
  char cVar1;
  
  PlantFramework::Initialize((PlantFramework *)this);
  Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  cVar1 = PVPManager::IsInBattle();
  if (cVar1 == '\0') {
    return;
  }
  Plant::SetExtraLevelDamge(*(Plant **)(this + 0x10),0.5);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHomingThistle::GetPlantFoodPlayCount() */

void __thiscall PlantHomingThistle::GetPlantFoodPlayCount(PlantHomingThistle *this)

{
  int iVar1;
  long extraout_x0;
  long lVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_041e42e0(aRStack_10,*(undefined8 *)(this + 0x10));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  lVar2 = FUN_041e4310(*(undefined8 *)(this + 0x48),*(undefined8 *)(this + 0x50));
  if (lVar2 == 0) {
    iVar1 = *(int *)(extraout_x0 + 700);
  }
  else {
    iVar1 = (int)lVar2;
    if ((int)lVar2 < *(int *)(extraout_x0 + 0x2b8)) {
      iVar1 = *(int *)(extraout_x0 + 0x2b8);
    }
    iVar1 = iVar1 / 5 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHomingThistle::fireRotatedProjectile(PlantWeapon, int) */

void __thiscall
PlantHomingThistle::fireRotatedProjectile(PlantHomingThistle *this,undefined4 param_2,int param_3)

{
  Projectile *this_00;
  long extraout_x0;
  DVec3 *this_01;
  float fVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  PlantFramework::Fire
            ((PlantFramework *)this,a_Stack_10,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),
             param_2);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  FUN_041e42e0(a_Stack_10,*(undefined8 *)(this + 0x10));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  Sexy::SexyMath::DegToRad((float)(param_3 * *(int *)(extraout_x0 + 0x2c8)));
  FUN_041e42d4(this_00 + 0xc4);
  this_01 = (DVec3 *)Projectile::GetVelocity(this_00);
  fVar1 = (float)DVec3::getLength(this_01);
  HomingThistleLeaf::SetRotatedVelocity((HomingThistleLeaf *)this_00,fVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* PlantHomingThistle::FindTargetZombie(Sexy::TRect<int>&, PlantWeapon, PlantTargetParams&) */

RtWeakPtr<Sexy::SoundResource> *
PlantHomingThistle::FindTargetZombie
          (RtWeakPtr<Sexy::SoundResource> *param_1_00,long param_1,undefined8 param_3,
          undefined8 param_4,undefined8 param_5)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x28) != '\0') {
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(param_1 + 0x30));
    if (cVar1 != '\0') {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(param_1_00,(RtWeakPtrBase *)(param_1 + 0x30));
      return param_1_00;
    }
  }
  PlantFramework::FindTargetZombie(param_1_00,param_1,param_3,param_4,param_5);
  return param_1_00;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHomingThistle::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantHomingThistle::Fire
          (PlantHomingThistle *this,RtWeakPtrBase *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  long extraout_x0;
  ulong uVar4;
  PineconePlantfoodProjectile *this_00;
  RtWeakPtr *this_01;
  ResourceInfo *pRVar5;
  PineconePlantfoodProjectile *this_02;
  PineconePlantfoodProjectile *pPVar6;
  Plant *this_03;
  float fVar7;
  float fVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_041e42e0(aRStack_10,*(undefined8 *)(this + 0x10));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  cVar2 = (**(code **)(*(long *)this + 0x180))(this);
  if (cVar2 != '\0') {
    iVar3 = *(int *)(this + 0x38);
    uVar4 = FUN_041e4310(*(undefined8 *)(this + 0x48),*(undefined8 *)(this + 0x50));
    if (uVar4 <= (ulong)(long)iVar3) {
      if (uVar4 == 0) {
        iVar1 = *(int *)(extraout_x0 + 0x2c0);
        *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 1;
        pPVar6 = (PineconePlantfoodProjectile *)fireRotatedProjectile(this,1,iVar3 + iVar1);
        *(int *)(this + 0x38) = *(int *)(this + 0x38) + 1;
        goto LAB_041e5534;
      }
      *(undefined4 *)(this + 0x38) = 0;
    }
  }
  cVar2 = (**(code **)(*(long *)this + 0x180))(this);
  if (cVar2 != '\0') {
    this_03 = *(Plant **)(this + 0x10);
    *(undefined4 *)(this_03 + 0x150) = 1;
    cVar2 = Plant::GetAvatarEnable(this_03);
    if (cVar2 != '\0') {
      iVar3 = PlantFramework::Rand((PlantFramework *)this,100);
      if (iVar3 < 0x1e) {
        *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 2;
      }
      else if (iVar3 < 0x3c) {
        *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 3;
      }
    }
    fireRotatedProjectile(this,1,*(int *)(this + 0x3c) + *(int *)(extraout_x0 + 0x2c4));
    nop();
    iVar3 = *(int *)(this + 0x38);
    *(int *)(this + 0x3c) = *(int *)(this + 0x3c) + 1;
    *(int *)(this + 0x38) = iVar3 + 1;
    this_01 = (RtWeakPtr *)FUN_041e431c(*(undefined8 *)(this + 0x48),(long)iVar3);
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01);
    PineconePlantfoodProjectile::SetOverrideTarget(this_00,(BoardEntity *)pRVar5);
    pPVar6 = this_00;
    goto LAB_041e5534;
  }
  fVar7 = (float)Plant::GetGeneSkillBoost(*(Plant **)(this + 0x10));
  iVar3 = FUN_041e4304(*(undefined8 *)(this + 0x10));
  if (iVar3 == 2) {
    fVar8 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
    if (fVar7 + 0.15 <= fVar8) goto LAB_041e5588;
    iVar3 = 1;
  }
  else if ((iVar3 < 3) ||
          (fVar8 = (float)PlantFramework::Rand((PlantFramework *)this,1.0), fVar7 + 0.3 <= fVar8)) {
LAB_041e5588:
    iVar3 = 0;
  }
  else {
    iVar3 = 1;
  }
  if (this[0x28] == (PlantHomingThistle)0x0) {
    Plant::FindTarget(aRStack_10,*(undefined8 *)(this + 0x10));
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x30),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x30));
    if (cVar2 != '\0') {
      this[0x28] = (PlantHomingThistle)0x1;
    }
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,param_2);
  PlantFramework::Fire((PlantFramework *)this,aRStack_10,param_3,param_4);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x30));
  PineconePlantfoodProjectile::SetOverrideTarget(this_02,(BoardEntity *)pRVar5);
  *(int *)(this + 0x40) = iVar3;
  pPVar6 = this_02;
  if (iVar3 != 0) {
    fVar7 = (float)PVZ_T();
    *(float *)(this + 0x44) = fVar7 + 0.2;
  }
LAB_041e5534:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pPVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHomingThistle::UpdateActions() */

void __thiscall PlantHomingThistle::UpdateActions(PlantHomingThistle *this)

{
  undefined4 uVar1;
  char cVar2;
  PineconePlantfoodProjectile *this_00;
  ResourceInfo *pRVar3;
  float fVar4;
  float fVar5;
  RtMixedPtrBase aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((0 < *(int *)(this + 0x40)) &&
     (fVar5 = *(float *)(this + 0x44), fVar4 = (float)PVZ_T(), fVar5 < fVar4)) {
    this[0x28] = (PlantHomingThistle)0x0;
    PlantFramework::FindTargetZombie(aRStack_18,this,0);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
    if (cVar2 != '\0') {
      uVar1 = *(undefined4 *)(*(long *)(this + 0x10) + 0x150);
      *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0;
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
      PlantFramework::Fire
                ((PlantFramework *)this,aRStack_10,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0
                );
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = uVar1;
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_18);
      PineconePlantfoodProjectile::SetOverrideTarget(this_00,(BoardEntity *)pRVar3);
    }
    *(int *)(this + 0x40) = *(int *)(this + 0x40) + -1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHomingThistle::PlantHomingThistle() */

void __thiscall PlantHomingThistle::PlantHomingThistle(PlantHomingThistle *this)

{
  long lVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_06803c10;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x30));
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  this[0x28] = (PlantHomingThistle)0x0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x30),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x38) = 0xffffffff;
  *(undefined4 *)(this + 0x3c) = 0xffffffff;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHomingThistle::StaticNew() */

PlantHomingThistle * PlantHomingThistle::StaticNew(void)

{
  PlantHomingThistle *this;
  
  this = ::operator_new(0x60);
  PlantHomingThistle(this);
  return this;
}


/* PlantHomingThistle::~PlantHomingThistle() */

void __thiscall PlantHomingThistle::~PlantHomingThistle(PlantHomingThistle *this)

{
  *(undefined ***)this = &PTR_GetClass_06803c10;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x48));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantHomingThistle::~PlantHomingThistle() */

void __thiscall PlantHomingThistle::~PlantHomingThistle(PlantHomingThistle *this)

{
  ~PlantHomingThistle(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHomingThistle::ApplyPlantfood() */

void __thiscall PlantHomingThistle::ApplyPlantfood(PlantHomingThistle *this)

{
  vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *this_00;
  undefined8 uVar1;
  undefined8 uVar2;
  vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> avStack_20 [24];
  long local_8;
  
  this_00 = (vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
            (this + 0x48);
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0xd0))(avStack_20,this,0);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::operator=
            (this_00,(vector *)avStack_20);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            (avStack_20);
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)this_00);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)this_00);
  std::
  random_shuffle<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<GridItemVase>*,std::vector<Sexy::RtWeakPtr<GridItemVase>,std::allocator<Sexy::RtWeakPtr<GridItemVase>>>>>
            (uVar1,uVar2);
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

