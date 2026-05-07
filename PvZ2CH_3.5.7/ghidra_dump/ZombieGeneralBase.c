// Class: ZombieGeneralBase


/* ZombieGeneralBase::ZombieGeneralBase() */

void __thiscall ZombieGeneralBase::ZombieGeneralBase(ZombieGeneralBase *this)

{
  ZombieWithActions::ZombieWithActions((ZombieWithActions *)this);
  *(undefined ***)this = &PTR_GetClass_06a0c1e0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieGeneralBase_06a0cc58;
  return;
}


/* ZombieGeneralBase::~ZombieGeneralBase() */

void __thiscall ZombieGeneralBase::~ZombieGeneralBase(ZombieGeneralBase *this)

{
  *(undefined ***)this = &PTR_GetClass_06a0c1e0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieGeneralBase_06a0cc58;
  ZombieWithActions::~ZombieWithActions((ZombieWithActions *)this);
  return;
}


/* non-virtual thunk to ZombieGeneralBase::~ZombieGeneralBase() */

void __thiscall ZombieGeneralBase::~ZombieGeneralBase(ZombieGeneralBase *this)

{
  ~ZombieGeneralBase(this + -0x10);
  return;
}


/* ZombieGeneralBase::~ZombieGeneralBase() */

void __thiscall ZombieGeneralBase::~ZombieGeneralBase(ZombieGeneralBase *this)

{
  ~ZombieGeneralBase(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieGeneralBase::~ZombieGeneralBase() */

void __thiscall ZombieGeneralBase::~ZombieGeneralBase(ZombieGeneralBase *this)

{
  ~ZombieGeneralBase(this + -0x10);
  return;
}


/* ZombieGeneralBase::shouldCrushPlants() */

bool __thiscall ZombieGeneralBase::shouldCrushPlants(ZombieGeneralBase *this)

{
  uint uVar1;
  
  uVar1 = FUN_04f04240(*(undefined4 *)(this + 0x814));
  return (uVar1 & 0xfffffffd) == 1 || uVar1 == 7;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGeneralBase::StaticClassInit() */

void ZombieGeneralBase::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieGeneralBase");
    (*pcVar2)(plVar1,asStack_10,FUN_04f043dc,0x850,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieGeneralBase::StaticGetClass() */

long * ZombieGeneralBase::StaticGetClass(void)

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
  uVar2 = ZombieWithActions::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieGeneralBase",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieGeneralBase::GetClass() const */

long * ZombieGeneralBase::GetClass(void)

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
  uVar2 = ZombieWithActions::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieGeneralBase",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieGeneralBase::SetLifetime(float) */

void __thiscall ZombieGeneralBase::SetLifetime(ZombieGeneralBase *this,float param_1)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x844) = fVar1 + param_1;
  return;
}


/* ZombieGeneralBase::updateState_ZombiePickNextAction() */

void __thiscall ZombieGeneralBase::updateState_ZombiePickNextAction(ZombieGeneralBase *this)

{
  int iVar1;
  float fVar2;
  
  iVar1 = FUN_04f04240(*(undefined4 *)(this + 0x814));
  if ((iVar1 == 3) && (fVar2 = (float)PVZ_T(), *(float *)(this + 0x844) < fVar2)) {
    ZombieWithActions::SetPhase((ZombieWithActions *)this,7);
  }
  ZombieWithActions::updateState_ZombiePickNextAction((ZombieWithActions *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGeneralBase::onApplyCondition(ZombieConditions) */

void __thiscall ZombieGeneralBase::onApplyCondition(ZombieGeneralBase *this,int param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((((param_2 == 1) || (param_2 == 0x27)) || (param_2 == 0x24)) || (param_2 == 2)) {
    Zombie::EndCondition();
  }
  iVar2 = FUN_04f04240(*(undefined4 *)(this + 0x814));
  if (iVar2 - 8U < 2) {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)k_conditionsIgnoredWhileDying);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)k_conditionsIgnoredWhileDying);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1)
    {
      piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      if (param_2 == *piVar3) {
        Zombie::EndCondition((Zombie *)this,param_2);
      }
      eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieGeneralBase::StaticNew() */

ZombieGeneralBase * ZombieGeneralBase::StaticNew(void)

{
  ZombieGeneralBase *this;
  
  this = ::operator_new(0x850);
  ZombieGeneralBase(this);
  return this;
}


/* ZombieGeneralBase::pickNextAction() */

void __thiscall ZombieGeneralBase::pickNextAction(ZombieGeneralBase *this)

{
  ZombieWithActionsProps *pZVar1;
  
  pZVar1 = Zombie::GetProps<ZombieWithActionsProps>((Zombie *)this);
  ZombieWithActions::tryStartActionRandom((ZombieWithActions *)this,(vector *)(pZVar1 + 0x210));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGeneralBase::setupDeathPhase(DamageInfo const&) */

void __thiscall ZombieGeneralBase::setupDeathPhase(ZombieGeneralBase *this,DamageInfo *param_1)

{
  vector<ZombieConditions,std::allocator<ZombieConditions>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::broadcastZombieDied((Zombie *)this,param_1);
  std::vector<ZombieConditions,std::allocator<ZombieConditions>>::vector
            (avStack_20,(vector *)k_conditionsIgnoredWhileDying);
  Zombie::EndConditions((Zombie *)this,avStack_20);
  std::vector<ZombieConditions,std::allocator<ZombieConditions>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieGeneralBase::CanEatZombies() const */

bool __thiscall ZombieGeneralBase::CanEatZombies(ZombieGeneralBase *this)

{
  ZombieGeneralProps *pZVar1;
  
  pZVar1 = Zombie::GetProps<ZombieGeneralProps>((Zombie *)this);
  return *(int *)(pZVar1 + 0x234) != 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGeneralBase::tryCrushPlants() */

void __thiscall ZombieGeneralBase::tryCrushPlants(ZombieGeneralBase *this)

{
  char cVar1;
  RtObject *this_00;
  ZombieGeneralProps *pZVar2;
  Zombie *this_01;
  Plant *pPVar3;
  undefined8 uVar4;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0xa60))();
  if (((cVar1 != '\0') &&
      (this_00 = (RtObject *)(**(code **)(*(long *)this + 0x428))(this), this_00 != (RtObject *)0x0)
      ) && (cVar1 = RealObject::IsOnTeam(this_00,1), cVar1 != '\0')) {
    pZVar2 = Zombie::GetProps<ZombieGeneralProps>((Zombie *)this);
    this_01 = Sexy::RtObject::Cast<Zombie>(this_00);
    pPVar3 = Sexy::RtObject::Cast<Plant>(this_00);
    if (pPVar3 == (Plant *)0x0) {
      if (this_01 == (Zombie *)0x0) {
        Sexy::Point::Point(aPStack_78,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
        DamageInfo::DamageInfo
                  ((DamageInfo *)0x3f800000,local_70,local_6c,aDStack_68,0x200000000000,this,
                   aPStack_78,0);
        (**(code **)(*(long *)this_00 + 0x120))(this_00,aDStack_68);
        DamageInfo::~DamageInfo(aDStack_68);
      }
      else if (*(int *)(pZVar2 + 0x234) == 1) {
        Sexy::Point::Point(aPStack_78,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
        DamageInfo::DamageInfo
                  ((DamageInfo *)0x3f800000,local_70,local_6c,aDStack_68,this,aPStack_78,0);
        (**(code **)(*(long *)this_00 + 0x120))(this_00,aDStack_68);
        DamageInfo::~DamageInfo(aDStack_68);
      }
      else if (*(int *)(pZVar2 + 0x234) == 2) {
        Zombie::TurnToAsh(this_01);
      }
    }
    else if (*(int *)(pZVar2 + 0x230) == 1) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aDStack_68,(RtWeakPtrBase *)&local_70);
      Plant::TakeSmashAttack(pPVar3,(RtWeakPtr<Sexy::SoundResource> *)aDStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aDStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
    }
    else if (*(int *)(pZVar2 + 0x230) == 2) {
      uVar4 = operator|(0x200000000000,0x400);
      Sexy::Point::Point(aPStack_78,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
      DamageInfo::DamageInfo
                ((DamageInfo *)0x3f800000,local_70,local_6c,aDStack_68,uVar4,this,aPStack_78,0);
      (**(code **)(*(long *)pPVar3 + 0x120))(pPVar3,aDStack_68);
      DamageInfo::~DamageInfo(aDStack_68);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieGeneralBase::onUpdate() */

void __thiscall ZombieGeneralBase::onUpdate(ZombieGeneralBase *this)

{
  tryCrushPlants(this);
  Zombie::onUpdate((Zombie *)this);
  return;
}


/* ZombieGeneralBase::updateDamageState() */

void __thiscall ZombieGeneralBase::updateDamageState(ZombieGeneralBase *this)

{
  ZombieGeneralProps *pZVar1;
  ZombieHydraHeadAnimRig *this_00;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)FUN_04f04238(*(undefined4 *)(this + 0x280));
  fVar3 = (float)FUN_04f0423c(*(undefined4 *)(this + 0x284));
  pZVar1 = Zombie::GetProps<ZombieGeneralProps>((Zombie *)this);
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  ZombieAnimRig_GeneralBase::UpdateDamageLayers
            ((ZombieAnimRig_GeneralBase *)this_00,*(int *)(pZVar1 + 0x22c),1.0 - fVar2 / fVar3,
             *(int *)(this + 0x848));
  return;
}


/* ZombieGeneralBase::onZombieInitialize() */

void __thiscall ZombieGeneralBase::onZombieInitialize(ZombieGeneralBase *this)

{
  undefined4 uVar1;
  
  ZombieWithActions::onZombieInitialize((ZombieWithActions *)this);
  ZombieWithActions::SetPhase((ZombieWithActions *)this,1);
  ZombieCamelTouch::SetCardType((ZombieCamelTouch *)this,0x21);
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x848) = 0xffffffff;
  *(undefined4 *)(this + 0x844) = uVar1;
  updateDamageState(this);
  return;
}


/* ZombieGeneralBase::chooseDeathState(DamageInfo const&) */

void __thiscall ZombieGeneralBase::chooseDeathState(ZombieGeneralBase *this,DamageInfo *param_1)

{
  ZombieWithActions::SetPhase((ZombieWithActions *)this,9);
  updateDamageState(this);
  setupDeathPhase(this,param_1);
  ZombieWithActions::CancelCurrentAction((ZombieWithActions *)this);
  *(undefined4 *)(this + 0x804) = 10;
  return;
}


/* ZombieGeneralBase::onTakeBodyDamage(DamageInfo const&) */

void ZombieGeneralBase::onTakeBodyDamage(DamageInfo *param_1)

{
  ZombieGeneralProps *pZVar1;
  ZombieHydraHeadAnimRig *this;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)FUN_04f04238(*(undefined4 *)(param_1 + 0x280));
  fVar3 = (float)FUN_04f0423c(*(undefined4 *)(param_1 + 0x284));
  pZVar1 = Zombie::GetProps<ZombieGeneralProps>((Zombie *)param_1);
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
  ZombieAnimRig_GeneralBase::UpdateDamageLayers
            ((ZombieAnimRig_GeneralBase *)this,*(int *)(pZVar1 + 0x22c),1.0 - fVar2 / fVar3,
             *(int *)(param_1 + 0x848));
  return;
}


/* ZombieGeneralBase::onPlaceOnBoard() */

void __thiscall ZombieGeneralBase::onPlaceOnBoard(ZombieGeneralBase *this)

{
  ZombieGeneralProps *pZVar1;
  
  Zombie::onPlaceOnBoard((Zombie *)this);
  Zombie::setZombieState((Zombie *)this,0x21,0);
  pZVar1 = Zombie::GetProps<ZombieGeneralProps>((Zombie *)this);
  SetLifetime(this,*(float *)(pZVar1 + 0x228));
  return;
}


/* ZombieGeneralBase::GetGeneralPhase() const */

undefined4 __thiscall ZombieGeneralBase::GetGeneralPhase(ZombieGeneralBase *this)

{
  ZombieGeneralProps *pZVar1;
  
  pZVar1 = Zombie::GetProps<ZombieGeneralProps>((Zombie *)this);
  return *(undefined4 *)(pZVar1 + 0x22c);
}


/* ZombieGeneralBase::CanDropArm() const */

bool __thiscall ZombieGeneralBase::CanDropArm(ZombieGeneralBase *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = Zombie::CanDropArm((Zombie *)this);
  bVar1 = false;
  if (cVar2 != '\0') {
    iVar3 = GetGeneralPhase(this);
    bVar1 = iVar3 == 2;
  }
  return bVar1;
}

