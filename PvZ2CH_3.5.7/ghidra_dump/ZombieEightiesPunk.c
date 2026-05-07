// Class: ZombieEightiesPunk


/* ZombieEightiesPunk::updateState_Push() */

void __thiscall ZombieEightiesPunk::updateState_Push(ZombieEightiesPunk *this)

{
  (**(code **)(*(long *)this + 0x260))();
  return;
}


/* ZombieEightiesPunk::StartJamming() */

void __thiscall ZombieEightiesPunk::StartJamming(ZombieEightiesPunk *this)

{
  ZombieHydraHeadAnimRig *this_00;
  
  this[0x800] = (ZombieEightiesPunk)0x1;
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  ZombieAnimRig_EightiesPunk::StartJamming((ZombieAnimRig_EightiesPunk *)this_00);
  Zombie::reenterZombieState((Zombie *)this);
  return;
}


/* ZombieEightiesPunk::onZombieInitialize() */

void __thiscall ZombieEightiesPunk::onZombieInitialize(ZombieEightiesPunk *this)

{
  this[0x800] = (ZombieEightiesPunk)0x0;
  *(undefined4 *)(this + 0x804) = 0;
  return;
}


/* ZombieEightiesPunk::~ZombieEightiesPunk() */

void __thiscall ZombieEightiesPunk::~ZombieEightiesPunk(ZombieEightiesPunk *this)

{
  *(undefined ***)this = &PTR_GetClass_068f49a0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieEightiesPunk_068f53e8;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieEightiesPunk::~ZombieEightiesPunk() */

void __thiscall ZombieEightiesPunk::~ZombieEightiesPunk(ZombieEightiesPunk *this)

{
  ~ZombieEightiesPunk(this + -0x10);
  return;
}


/* ZombieEightiesPunk::~ZombieEightiesPunk() */

void __thiscall ZombieEightiesPunk::~ZombieEightiesPunk(ZombieEightiesPunk *this)

{
  ~ZombieEightiesPunk(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieEightiesPunk::~ZombieEightiesPunk() */

void __thiscall ZombieEightiesPunk::~ZombieEightiesPunk(ZombieEightiesPunk *this)

{
  ~ZombieEightiesPunk(this + -0x10);
  return;
}


/* ZombieEightiesPunk::ZombieEightiesPunk() */

void __thiscall ZombieEightiesPunk::ZombieEightiesPunk(ZombieEightiesPunk *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_068f49a0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieEightiesPunk_068f53e8;
  return;
}


/* ZombieEightiesPunk::StaticNew() */

ZombieEightiesPunk * ZombieEightiesPunk::StaticNew(void)

{
  ZombieEightiesPunk *this;
  
  this = ::operator_new(0x810);
  ZombieEightiesPunk(this);
  return this;
}


/* ZombieEightiesPunk::StopJamming() */

void __thiscall ZombieEightiesPunk::StopJamming(ZombieEightiesPunk *this)

{
  ZombieHydraHeadAnimRig *this_00;
  
  this[0x800] = (ZombieEightiesPunk)0x0;
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  ZombieAnimRig_ZombossMech_Hydra::onPostPlayCalled((ZombieAnimRig_ZombossMech_Hydra *)this_00);
  Zombie::reenterZombieState((Zombie *)this);
  return;
}


/* ZombieEightiesPunk::GetJamStyle() */

void ZombieEightiesPunk::GetJamStyle(void)

{
  Zombie *in_x0;
  
  Zombie::GetProps<ZombieEightiesPunkProps>(in_x0);
  FUN_05475d88();
  return;
}


/* ZombieEightiesPunk::shouldDamagePlantGroup(PlantGroup const*) */

void __thiscall
ZombieEightiesPunk::shouldDamagePlantGroup(ZombieEightiesPunk *this,PlantGroup *param_1)

{
  ZombieEightiesPunkProps *pZVar1;
  
  pZVar1 = Zombie::GetProps<ZombieEightiesPunkProps>((Zombie *)this);
  PlantGroup::HasAnyRestrictionSetInclusion(param_1,(PlantRestrictionSet *)(pZVar1 + 0x228));
  return;
}


/* ZombieEightiesPunk::shouldJamIneffectually(BoardEntity const*) */

ulong __thiscall
ZombieEightiesPunk::shouldJamIneffectually(ZombieEightiesPunk *this,BoardEntity *param_1)

{
  char cVar1;
  byte bVar2;
  GridItem *pGVar3;
  PlantGroup *pPVar4;
  ulong uVar5;
  
  if (param_1 == (BoardEntity *)0x0) {
    Zombie::isInState((Zombie *)this,4);
    return 0;
  }
  pGVar3 = Sexy::RtObject::Cast<GridItem>((RtObject *)param_1);
  pPVar4 = Sexy::RtObject::Cast<PlantGroup>((RtObject *)param_1);
  cVar1 = Zombie::isInState((Zombie *)this,4);
  if (cVar1 == '\0') {
    bVar2 = FUN_047ec774(this[0x800]);
    uVar5 = (ulong)bVar2;
    if ((bVar2 != 0) && (pGVar3 == (GridItem *)0x0)) {
      if (pPVar4 != (PlantGroup *)0x0) {
        uVar5 = shouldDamagePlantGroup(this,pPVar4);
        return uVar5;
      }
      uVar5 = 0;
    }
    return uVar5;
  }
  return 0;
}


/* ZombieEightiesPunk::shouldPush(BoardEntity const*) */

bool __thiscall ZombieEightiesPunk::shouldPush(ZombieEightiesPunk *this,BoardEntity *param_1)

{
  byte bVar1;
  char cVar2;
  PlantGroup *pPVar3;
  float fVar4;
  
  if (param_1 == (BoardEntity *)0x0) {
    Zombie::isInState((Zombie *)this,4);
    return false;
  }
  pPVar3 = Sexy::RtObject::Cast<PlantGroup>((RtObject *)param_1);
  bVar1 = Zombie::isInState((Zombie *)this,4);
  if (((bVar1 < (pPVar3 != (PlantGroup *)0x0)) &&
      (cVar2 = shouldDamagePlantGroup(this,pPVar3), cVar2 == '\0')) &&
     (cVar2 = FUN_047ec774(this[0x800]), cVar2 != '\0')) {
    fVar4 = (float)PVZ_T();
    return *(float *)(this + 0x804) <= fVar4;
  }
  return false;
}


/* ZombieEightiesPunk::changeStatesBasedOnJams() */

void __thiscall ZombieEightiesPunk::changeStatesBasedOnJams(ZombieEightiesPunk *this)

{
  char cVar1;
  BoardEntity *pBVar2;
  
  pBVar2 = (BoardEntity *)(**(code **)(*(long *)this + 0x228))();
  cVar1 = shouldPush(this,pBVar2);
  if (cVar1 != '\0') {
    Zombie::setZombieState((Zombie *)this,0x1f,0);
    return;
  }
  cVar1 = shouldJamIneffectually(this,pBVar2);
  if (cVar1 == '\0') {
    cVar1 = Zombie::isInState((Zombie *)this,1);
    if (cVar1 == '\0') {
      (**(code **)(*(long *)this + 0x260))(this);
    }
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x20,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesPunk::tryPushPlant(BoardEntity*) */

void __thiscall ZombieEightiesPunk::tryPushPlant(ZombieEightiesPunk *this,BoardEntity *param_1)

{
  char cVar1;
  PlantGroup *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_50 [8];
  string asStack_48 [24];
  BoardEntityPusher aBStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_48,"Play_Zomb_Future_Football_Mvmt_Fling");
  BoardEntityPusher::BoardEntityPusher(aBStack_30,(BoardEntity *)this,asStack_48);
  std::string::~string(asStack_48);
  nop();
  if (((param_1 != (BoardEntity *)0x0) &&
      (this_00 = Sexy::RtObject::Cast<PlantGroup>((RtObject *)param_1), this_00 != (PlantGroup *)0x0
      )) && (cVar1 = PlantGroup::CanAttackRelocateGroup(this_00,(BoardEntity *)0x0), cVar1 != '\0'))
  {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,(RtWeakPtrBase *)aRStack_58);
    PushPlantGroupProps::PushPlantGroupProps
              ((PushPlantGroupProps *)asStack_48,aRStack_50,BoardEntityPusher::PUSH_DIRECTION_LEFT,1
              );
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    BoardEntityPusher::PushPlantGroup(aBStack_30,(PushPlantGroupProps *)asStack_48);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)asStack_48);
  }
  BoardEntityPusher::~BoardEntityPusher(aBStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesPunk::tryDamageZombie(BoardEntity*) */

void __thiscall ZombieEightiesPunk::tryDamageZombie(ZombieEightiesPunk *this,BoardEntity *param_1)

{
  Zombie *pZVar1;
  ZombieEightiesPunkProps *pZVar2;
  ZombieEightiesPunk *local_68;
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (BoardEntity *)0x0) &&
     (pZVar1 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), pZVar1 != (Zombie *)0x0)) {
    DamageInfo::DamageInfo((DamageInfo *)&local_68);
    pZVar2 = Zombie::GetProps<ZombieEightiesPunkProps>((Zombie *)this);
    local_60 = *(undefined4 *)(pZVar2 + 0x21c);
    local_68 = this;
    (**(code **)(*(long *)pZVar1 + 0x110))(pZVar1,(DamageInfo *)&local_68);
    DamageInfo::~DamageInfo((DamageInfo *)&local_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieEightiesPunk::findAndPushTarget() */

void __thiscall ZombieEightiesPunk::findAndPushTarget(ZombieEightiesPunk *this)

{
  char cVar1;
  BoardEntity *pBVar2;
  
  cVar1 = Zombie::isInState((Zombie *)this,4);
  if (cVar1 != '\0') {
    return;
  }
  pBVar2 = (BoardEntity *)(**(code **)(*(long *)this + 0x228))(this);
  tryPushPlant(this,pBVar2);
  tryDamageZombie(this,pBVar2);
  return;
}


/* ZombieEightiesPunk::onEnterState_Push(ZombieState) */

void ZombieEightiesPunk::onEnterState_Push(Zombie *param_1)

{
  ZombieEightiesPunkProps *pZVar1;
  float fVar2;
  
  fVar2 = (float)PVZ_T();
  pZVar1 = Zombie::GetProps<ZombieEightiesPunkProps>(param_1);
  *(float *)(param_1 + 0x804) = fVar2 + *(float *)(pZVar1 + 0x218);
  findAndPushTarget((ZombieEightiesPunk *)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesPunk::updateState_Kick_Damage_Target() */

void __thiscall ZombieEightiesPunk::updateState_Kick_Damage_Target(ZombieEightiesPunk *this)

{
  char cVar1;
  BoardEntity *pBVar2;
  ZombieEightiesPunkProps *pZVar3;
  EntityConditionTracker<Zombie,ZombieConditions> *this_00;
  float *pfVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  DamageInfo *pDVar9;
  float fVar8;
  Point aPStack_78 [8];
  float local_70;
  undefined4 local_6c;
  undefined4 local_68 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar2 = (BoardEntity *)(**(code **)(*(long *)this + 0x228))();
  cVar1 = shouldPush(this,pBVar2);
  if (cVar1 == '\0') {
    cVar1 = shouldJamIneffectually(this,pBVar2);
    if (cVar1 == '\0') {
      (**(code **)(*(long *)this + 0x260))(this);
    }
    else {
      pZVar3 = Zombie::GetProps<ZombieEightiesPunkProps>((Zombie *)this);
      fVar8 = *(float *)(pZVar3 + 0x220);
      this_00 = (EntityConditionTracker<Zombie,ZombieConditions> *)
                Zombie::GetConditionTracker((Zombie *)this);
      fVar6 = (float)EntityConditionTracker<Zombie,ZombieConditions>::GetDPSModifier(this_00);
      fVar7 = (float)PVZ_Dt();
      local_70 = fVar6 * fVar7 * fVar8;
      local_68[0] = 0;
      pfVar4 = eastl::max_alt<float>(&local_70,(float *)local_68);
                    /* WARNING: Load size is inaccurate */
      pDVar9._0_4_ = *(DamageInfo **)pfVar4;
      if (*(code **)(*(long *)this + 0x910) == Zombie::getEatingDamageType) {
        uVar5 = Zombie::getEatingDamageType();
      }
      else {
        uVar5 = (**(code **)(*(long *)this + 0x910))(this);
      }
      Sexy::Point::Point(aPStack_78,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
      DamageInfo::DamageInfo
                (pDVar9._0_4_,local_70,local_6c,(DamageInfo *)local_68,uVar5,this,aPStack_78,0);
      (**(code **)(*(long *)this + 0x958))(this,pBVar2);
      DamageInfo::~DamageInfo((DamageInfo *)local_68);
    }
  }
  else {
    Zombie::setZombieState((Zombie *)this,0x1f,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesPunk::StaticClassInit() */

void ZombieEightiesPunk::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  StateMachineTableBuilder *this_00;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  code *pcVar4;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<ZombieState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<ZombieState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"ZombieEightiesPunk");
      (*pcVar4)(plVar1,asStack_150,FUN_047ee108,0x810,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<ZombieState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa08);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieEightiesPunk,void(ZombieEightiesPunk::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieEightiesPunk,void(ZombieEightiesPunk::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieEightiesPunk,void(ZombieEightiesPunk::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_PUNK_Push");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_047ede04(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieEightiesPunk,void(ZombieEightiesPunk::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieEightiesPunk,void(ZombieEightiesPunk::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieEightiesPunk,void(ZombieEightiesPunk::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_PUNK_Kick_Damage_Target");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_047ede04(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieEightiesPunk::StaticGetClass() */

long * ZombieEightiesPunk::StaticGetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieEightiesPunk",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieEightiesPunk::GetClass() const */

long * ZombieEightiesPunk::GetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieEightiesPunk",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieEightiesPunk::onPlaceOnBoard() */

void __thiscall ZombieEightiesPunk::onPlaceOnBoard(ZombieEightiesPunk *this)

{
  Zombie::onPlaceOnBoard((Zombie *)this);
  this[0x808] = (ZombieEightiesPunk)0x0;
  return;
}


/* ZombieEightiesPunk::onPlaceOnStreet() */

void __thiscall ZombieEightiesPunk::onPlaceOnStreet(ZombieEightiesPunk *this)

{
  Zombie::onPlaceOnStreet((Zombie *)this);
  this[0x808] = (ZombieEightiesPunk)0x1;
  return;
}


/* ZombieEightiesPunk::onStartBleeding() */

void __thiscall ZombieEightiesPunk::onStartBleeding(ZombieEightiesPunk *this)

{
  (**(code **)(*(long *)this + 0x288))();
  Zombie::onStartBleeding((Zombie *)this);
  return;
}


/* ZombieEightiesPunk::updateState_Walk() */

void __thiscall ZombieEightiesPunk::updateState_Walk(ZombieEightiesPunk *this)

{
  char cVar1;
  
  cVar1 = FUN_047ec774(this[0x800]);
  if (cVar1 != '\0') {
    changeStatesBasedOnJams(this);
    return;
  }
  Zombie::updateState_Walk((Zombie *)this);
  return;
}


/* ZombieEightiesPunk::updateState_Eat() */

void __thiscall ZombieEightiesPunk::updateState_Eat(ZombieEightiesPunk *this)

{
  char cVar1;
  
  cVar1 = FUN_047ec774(this[0x800]);
  if (cVar1 == '\0') {
    Zombie::updateState_Eat((Zombie *)this);
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x1f,0);
  return;
}


/* ZombieEightiesPunk::updateState_Idle() */

void __thiscall ZombieEightiesPunk::updateState_Idle(ZombieEightiesPunk *this)

{
  if (this[0x808] == (ZombieEightiesPunk)0x0) {
    changeStatesBasedOnJams(this);
    return;
  }
  Zombie::updateState_Idle((Zombie *)this);
  return;
}

