// Class: ZombieIceAgeDodo


/* ZombieIceAgeDodo::canTargetEntityHeight(BoardEntityHeight) */

void __thiscall ZombieIceAgeDodo::canTargetEntityHeight(ZombieIceAgeDodo *this,int param_2)

{
  char cVar1;
  
  cVar1 = Zombie::IsOnGround((Zombie *)this);
  if ((cVar1 == '\0') && (param_2 < 2)) {
    return;
  }
  Zombie::canTargetEntityHeight((Zombie *)this);
  return;
}


/* ZombieIceAgeDodo::onFlyEndAnimDone(std::string const&) */

void ZombieIceAgeDodo::onFlyEndAnimDone(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    (**(code **)(*(long *)param_1 + 0x260))(param_1);
  }
  return;
}


/* ZombieIceAgeDodo::onFlyStartAnimDone(std::string const&) */

void ZombieIceAgeDodo::onFlyStartAnimDone(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 != '\0') {
    return;
  }
  Zombie::setZombieState((Zombie *)param_1,0x20);
  return;
}


/* ZombieIceAgeDodo::ShouldClipWithWater() const */

bool __thiscall ZombieIceAgeDodo::ShouldClipWithWater(ZombieIceAgeDodo *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = Zombie::IsFlying((Zombie *)this);
  bVar1 = false;
  if (cVar2 == '\0') {
    iVar3 = Zombie::getZombieStateSerialization((Zombie *)this);
    bVar1 = iVar3 != 5;
  }
  return bVar1;
}


/* ZombieIceAgeDodo::~ZombieIceAgeDodo() */

void __thiscall ZombieIceAgeDodo::~ZombieIceAgeDodo(ZombieIceAgeDodo *this)

{
  *(undefined ***)this = &PTR_GetClass_068ceec0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieIceAgeDodo_068cf920;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieIceAgeDodo::~ZombieIceAgeDodo() */

void __thiscall ZombieIceAgeDodo::~ZombieIceAgeDodo(ZombieIceAgeDodo *this)

{
  ~ZombieIceAgeDodo(this + -0x10);
  return;
}


/* ZombieIceAgeDodo::~ZombieIceAgeDodo() */

void __thiscall ZombieIceAgeDodo::~ZombieIceAgeDodo(ZombieIceAgeDodo *this)

{
  ~ZombieIceAgeDodo(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieIceAgeDodo::~ZombieIceAgeDodo() */

void __thiscall ZombieIceAgeDodo::~ZombieIceAgeDodo(ZombieIceAgeDodo *this)

{
  ~ZombieIceAgeDodo(this + -0x10);
  return;
}


/* ZombieIceAgeDodo::ZombieIceAgeDodo() */

void __thiscall ZombieIceAgeDodo::ZombieIceAgeDodo(ZombieIceAgeDodo *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_068ceec0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieIceAgeDodo_068cf920;
  return;
}


/* ZombieIceAgeDodo::StaticNew() */

ZombieIceAgeDodo * ZombieIceAgeDodo::StaticNew(void)

{
  ZombieIceAgeDodo *this;
  
  this = ::operator_new(0x820);
  ZombieIceAgeDodo(this);
  return this;
}


/* ZombieIceAgeDodo::isRestedForFlying() */

bool __thiscall ZombieIceAgeDodo::isRestedForFlying(ZombieIceAgeDodo *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  return *(float *)(this + 0x818) < fVar1;
}


/* ZombieIceAgeDodo::shouldStartFlyingRandomly() */

char __thiscall ZombieIceAgeDodo::shouldStartFlyingRandomly(ZombieIceAgeDodo *this)

{
  char cVar1;
  float fVar2;
  
  cVar1 = isRestedForFlying(this);
  if ((cVar1 != '\0') &&
     (fVar2 = (float)(**(code **)(*(long *)this + 0x308))(0x3f800000,this),
     fVar2 < *(float *)(this + 0x814))) {
    return cVar1;
  }
  return '\0';
}


/* ZombieIceAgeDodo::onEnterState_FlyForward(ZombieState) */

void ZombieIceAgeDodo::onEnterState_FlyForward(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *this;
  
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ZombieAnimRig_Dodo::PlayFlyForward((ZombieAnimRig_Dodo *)this);
  Zombie::SetIsUsingAnimTranslation(param_1,true);
  return;
}


/* ZombieIceAgeDodo::onApplyCondition(ZombieConditions) */

void __thiscall ZombieIceAgeDodo::onApplyCondition(ZombieIceAgeDodo *this,int param_2)

{
  ZombieHydraHeadAnimRig *this_00;
  
  if ((4 < param_2 - 0x40U) && (param_2 != 0x60)) {
    return;
  }
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  ZombieAnimRig_Dodo::DisableImpLayers((ZombieAnimRig_Dodo *)this_00);
  return;
}


/* ZombieIceAgeDodo::onZombieInitialize() */

void __thiscall ZombieIceAgeDodo::onZombieInitialize(ZombieIceAgeDodo *this)

{
  ZombieIceAgeDodoProps *pZVar1;
  undefined4 uVar2;
  float fVar3;
  
  pZVar1 = Zombie::GetProps<ZombieIceAgeDodoProps>((Zombie *)this);
  uVar2 = PVZ_T();
  *(undefined4 *)(this + 0x818) = uVar2;
  uVar2 = BoardHelpers::ApplyLevelBasedModifierValue(*(float *)(pZVar1 + 0x238),0xe,9,1);
  *(undefined4 *)(this + 0x804) = 0;
  *(undefined4 *)(this + 0x808) = 0;
  *(undefined4 *)(this + 0x81c) = 0;
  *(undefined4 *)(this + 0x814) = uVar2;
  fVar3 = (float)FUN_04762578(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                              *(undefined4 *)(this + 0x20));
  *(int *)(this + 0x80c) = (int)fVar3;
  uVar2 = BoardTransforms::GridToBoardSpaceXUnbounded(8);
  *(undefined4 *)(this + 0x810) = uVar2;
  return;
}


/* ZombieIceAgeDodo::shouldFlyOverEntity(BoardEntity*) */

undefined8 __thiscall
ZombieIceAgeDodo::shouldFlyOverEntity(ZombieIceAgeDodo *this,BoardEntity *param_1)

{
  char cVar1;
  ZombieIceAgeDodoProps *pZVar2;
  Plant *this_00;
  GridItem *pGVar3;
  
  if (param_1 != (BoardEntity *)0x0) {
    pZVar2 = Zombie::GetProps<ZombieIceAgeDodoProps>((Zombie *)this);
    this_00 = Sexy::RtObject::Cast<Plant>((RtObject *)param_1);
    if ((((this_00 != (Plant *)0x0) &&
         (cVar1 = PlantRestrictionSet::IsIncluded((Plant *)(pZVar2 + 0x248)), cVar1 != '\0')) &&
        (cVar1 = Plant::IsIceblocked(this_00), cVar1 == '\0')) ||
       ((pGVar3 = Sexy::RtObject::Cast<GridItem>((RtObject *)param_1), pGVar3 != (GridItem *)0x0 &&
        (cVar1 = GridItemRestrictionSet::IsIncluded((GridItem *)(pZVar2 + 0x270)), cVar1 != '\0'))))
    {
      return 1;
    }
  }
  return 0;
}


/* ZombieIceAgeDodo::startFlyingRandomly() */

void __thiscall ZombieIceAgeDodo::startFlyingRandomly(ZombieIceAgeDodo *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ZombieIceAgeDodoProps *pZVar4;
  float fVar5;
  
  pZVar4 = Zombie::GetProps<ZombieIceAgeDodoProps>((Zombie *)this);
  iVar1 = (**(code **)(*(long *)this + 0x300))
                    (this,*(int *)(pZVar4 + 0x230) - *(int *)(pZVar4 + 0x22c));
  iVar3 = *(int *)(pZVar4 + 0x22c);
  fVar5 = (float)FUN_04762578(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                              *(undefined4 *)(this + 0x20));
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  *(int *)(this + 0x810) = (int)(fVar5 - (float)(iVar2 * (iVar1 + iVar3)));
  fVar5 = (float)FUN_04762578(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                              *(undefined4 *)(this + 0x20));
  *(int *)(this + 0x804) = (int)fVar5;
  fVar5 = (float)FUN_04762578(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                              *(undefined4 *)(this + 0x20));
  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
  *(int *)(this + 0x808) = (int)(fVar5 - (float)(iVar3 * *(int *)(pZVar4 + 0x228)));
  Zombie::setZombieState((Zombie *)this,0x1f,0);
  return;
}


/* ZombieIceAgeDodo::startFlyingToAvoidObjects() */

void __thiscall ZombieIceAgeDodo::startFlyingToAvoidObjects(ZombieIceAgeDodo *this)

{
  int iVar1;
  ZombieIceAgeDodoProps *pZVar2;
  float fVar3;
  
  pZVar2 = Zombie::GetProps<ZombieIceAgeDodoProps>((Zombie *)this);
  fVar3 = (float)FUN_04762578(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                              *(undefined4 *)(this + 0x20));
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  *(int *)(this + 0x810) = (int)(fVar3 - (float)iVar1);
  fVar3 = (float)FUN_04762578(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                              *(undefined4 *)(this + 0x20));
  *(int *)(this + 0x804) = (int)fVar3;
  fVar3 = (float)FUN_04762578(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                              *(undefined4 *)(this + 0x20));
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  *(int *)(this + 0x808) = (int)(fVar3 - (float)(iVar1 * *(int *)(pZVar2 + 0x228)));
  Zombie::setZombieState((Zombie *)this,0x1f,0);
  return;
}


/* ZombieIceAgeDodo::onExitState_FlyEnd(ZombieState) */

void ZombieIceAgeDodo::onExitState_FlyEnd(Zombie *param_1)

{
  ZombieIceAgeDodoProps *pZVar1;
  undefined4 uVar2;
  float fVar3;
  
  pZVar1 = Zombie::GetProps<ZombieIceAgeDodoProps>(param_1);
  uVar2 = BoardHelpers::ApplyLevelBasedModifierValue(*(float *)(pZVar1 + 0x23c),0xe,9,1);
  *(undefined4 *)(param_1 + 0x814) = uVar2;
  fVar3 = (float)PVZ_T();
  *(float *)(param_1 + 0x818) = fVar3 + (float)*(int *)(pZVar1 + 0x234);
  Zombie::EndCondition(param_1,0x2b);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceAgeDodo::getElectrocutePAMName() const */

void ZombieIceAgeDodo::getElectrocutePAMName(void)

{
  char cVar1;
  Zombie *in_x0;
  string *extraout_x1;
  Sexy aSStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::GetProps<ZombieIceAgeDodoProps>(in_x0);
  FUN_05475d88();
  Zombie::GetElectrocuteColor();
  cVar1 = FUN_0547419c(aSStack_18);
  if (cVar1 == '\0') {
    FUN_05475ad8();
    Sexy::Upper(aSStack_18,extraout_x1);
    thunk_FUN_054757c0();
    std::string::~string(asStack_10);
  }
  std::string::~string((string *)aSStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceAgeDodo::onEnterState_FlyStart(ZombieState) */

void ZombieIceAgeDodo::onEnterState_FlyStart(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  undefined1 auVar2 [16];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::SetIsFlying(param_1,true);
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onFlyStartAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_LostCityBug::PlayFlyingUp((ZombieAnimRig_LostCityBug *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  auVar2 = PVZ_EOT();
  Zombie::ApplyCondition((Zombie *)auVar2,0,param_1,0x2b,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceAgeDodo::onEnterState_FlyEnd(ZombieState) */

void ZombieIceAgeDodo::onEnterState_FlyEnd(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::SetIsFlying(param_1,false);
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onFlyEndAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_LostCityBug::PlayFlyingDown((ZombieAnimRig_LostCityBug *)pZVar1,aRStack_50);
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
/* ZombieIceAgeDodo::findOtherObjectsToAvoid() */

void __thiscall ZombieIceAgeDodo::findOtherObjectsToAvoid(ZombieIceAgeDodo *this)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_38 [4];
  int local_34;
  undefined1 auStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  (**(code **)(*(long *)this + 0x3a0))(auStack_30,this);
  iVar3 = SharkMinion::getRow((SharkMinion *)this);
  uVar4 = operator|(4,1);
  (**(code **)(*(long *)this + 0xd0))(auStack_38,this);
  EntityFinder::GetEntitiesTouchingRectangle
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,uVar4,
             auStack_30,iVar3,iVar3 + local_34 + -1);
  uVar7 = 0;
  do {
    uVar1 = local_20;
    uVar6 = FUN_047624b8(local_20,local_18);
    if (uVar6 <= uVar7) {
      cVar2 = '\0';
      break;
    }
    puVar5 = (undefined8 *)FUN_047624c4(uVar1,uVar7);
    cVar2 = shouldFlyOverEntity(this,(BoardEntity *)*puVar5);
    uVar7 = uVar7 + 1;
  } while (cVar2 == '\0');
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* ZombieIceAgeDodo::shouldStayFlying() */

void __thiscall ZombieIceAgeDodo::shouldStayFlying(ZombieIceAgeDodo *this)

{
  char cVar1;
  BoardEntity *pBVar2;
  
  pBVar2 = (BoardEntity *)(**(code **)(*(long *)this + 0x228))();
  cVar1 = shouldFlyOverEntity(this,pBVar2);
  if (cVar1 != '\0') {
    return;
  }
  findOtherObjectsToAvoid(this);
  return;
}


/* ZombieIceAgeDodo::updateState_FlyForward() */

void __thiscall ZombieIceAgeDodo::updateState_FlyForward(ZombieIceAgeDodo *this)

{
  char cVar1;
  int iVar2;
  EntityConditionTracker<Creature,CreatureConditions> *pEVar3;
  float fVar4;
  
  pEVar3 = (EntityConditionTracker<Creature,CreatureConditions> *)
           Zombie::GetConditionTracker((Zombie *)this);
  cVar1 = EntityConditionTracker<Creature,CreatureConditions>::TestModifierFlag(pEVar3,4);
  if (cVar1 != '\0') {
    Zombie::setZombieState((Zombie *)this,0x21,0);
    return;
  }
  fVar4 = (float)FUN_04762578(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                              *(undefined4 *)(this + 0x20));
  if ((float)*(int *)(this + 0x808) <= fVar4) {
    fVar4 = (float)FUN_04762578(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                                *(undefined4 *)(this + 0x20));
    if (fVar4 < (float)*(int *)(this + 0x810)) {
      iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
      *(int *)(this + 0x810) = *(int *)(this + 0x810) - iVar2;
      cVar1 = shouldStayFlying(this);
      if (cVar1 == '\0') {
        Zombie::setZombieState((Zombie *)this,0x21);
        return;
      }
    }
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x21,0);
  return;
}


/* ZombieIceAgeDodo::updateState_Walk() */

void __thiscall ZombieIceAgeDodo::updateState_Walk(ZombieIceAgeDodo *this)

{
  char cVar1;
  int iVar2;
  BoardEntity *pBVar3;
  ZombieIceAgeDodoProps *pZVar4;
  float fVar5;
  
  pBVar3 = (BoardEntity *)(**(code **)(*(long *)this + 0x228))();
  cVar1 = isRestedForFlying(this);
  if ((cVar1 != '\0') &&
     ((cVar1 = shouldFlyOverEntity(this,pBVar3), cVar1 != '\0' ||
      (cVar1 = findOtherObjectsToAvoid(this), cVar1 != '\0')))) {
    startFlyingToAvoidObjects(this);
    return;
  }
  if (pBVar3 != (BoardEntity *)0x0) {
    Zombie::setZombieState((Zombie *)this,2,0);
    return;
  }
  fVar5 = (float)FUN_04762578(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                              *(undefined4 *)(this + 0x20));
  if (fVar5 < (float)*(int *)(this + 0x810)) {
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    *(int *)(this + 0x810) = *(int *)(this + 0x810) - iVar2;
    cVar1 = shouldStartFlyingRandomly(this);
    if (cVar1 != '\0') {
      startFlyingRandomly(this);
      return;
    }
    pZVar4 = Zombie::GetProps<ZombieIceAgeDodoProps>((Zombie *)this);
    *(float *)(this + 0x814) = *(float *)(this + 0x814) + *(float *)(pZVar4 + 0x240);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceAgeDodo::StaticClassInit() */

void ZombieIceAgeDodo::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieIceAgeDodo");
      (*pcVar4)(plVar1,asStack_150,FUN_04764888,0x820,0);
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
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieIceAgeDodo,void(ZombieIceAgeDodo::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieIceAgeDodo,void(ZombieIceAgeDodo::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieIceAgeDodo,void(ZombieIceAgeDodo::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_DODO_FlyStart");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_047644d4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieIceAgeDodo,void(ZombieIceAgeDodo::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieIceAgeDodo,void(ZombieIceAgeDodo::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieIceAgeDodo,void(ZombieIceAgeDodo::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_DODO_FlyForward");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_047644d4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa38);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieIceAgeDodo,void(ZombieIceAgeDodo::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa40);
  Sexy::Delegate0::Delegate0<ZombieIceAgeDodo,void(ZombieIceAgeDodo::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa48);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieIceAgeDodo,void(ZombieIceAgeDodo::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_DODO_FlyEnd");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_047644d4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieIceAgeDodo::StaticGetClass() */

long * ZombieIceAgeDodo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieIceAgeDodo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieIceAgeDodo::GetClass() const */

long * ZombieIceAgeDodo::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieIceAgeDodo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceAgeDodo::onUpdate() */

void __thiscall ZombieIceAgeDodo::onUpdate(ZombieIceAgeDodo *this)

{
  int iVar1;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar2;
  int *piVar3;
  ZombieHydraHeadAnimRig *this_01;
  float fVar4;
  int local_14 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onUpdate((Zombie *)this);
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  fVar4 = (float)FUN_047624a4(*(undefined4 *)(this + 0x280));
  local_14[1] = 0;
  iVar1 = (int)*(float *)(lVar2 + 0x18) / 3;
  local_14[0] = 0;
  if (iVar1 != 0) {
    local_14[0] = (int)fVar4 / iVar1;
  }
  local_14[0] = 2 - local_14[0];
  piVar3 = eastl::max_alt<int>(local_14,local_14 + 1);
  local_14[2] = 2;
  piVar3 = eastl::min_alt<int>(piVar3,local_14 + 2);
  if (*(int *)(this + 0x81c) == *piVar3) {
    if (local_8 == ___stack_chk_guard) {
      return;
    }
  }
  else {
    *(int *)(this + 0x81c) = *piVar3;
    this_01 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
    if (local_8 == ___stack_chk_guard) {
      ZombieAnimRig_Dodo::SetDamageState((ZombieAnimRig_Dodo *)this_01,*(int *)(this + 0x81c));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieIceAgeDodo::updateState_Eat() */

void __thiscall ZombieIceAgeDodo::updateState_Eat(ZombieIceAgeDodo *this)

{
  char cVar1;
  
  cVar1 = isRestedForFlying(this);
  if ((cVar1 != '\0') && (cVar1 = shouldStayFlying(this), cVar1 != '\0')) {
    startFlyingToAvoidObjects(this);
    return;
  }
  Zombie::updateState_Eat((Zombie *)this);
  return;
}


/* ZombieIceAgeDodo::ShouldDrawShadow() const */

undefined8 __thiscall ZombieIceAgeDodo::ShouldDrawShadow(ZombieIceAgeDodo *this)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = Zombie::getZombieStateSerialization((Zombie *)this);
  if (iVar1 != 5) {
    uVar2 = Zombie::ShouldDrawShadow((Zombie *)this);
    return uVar2;
  }
  return 0;
}


/* ZombieIceAgeDodo::calcCollisionRect() */

void ZombieIceAgeDodo::calcCollisionRect(void)

{
  char cVar1;
  Zombie *in_x0;
  long in_x8;
  
  Zombie::calcCollisionRect();
  cVar1 = Zombie::IsFlying(in_x0);
  if (cVar1 != '\0') {
    *(int *)(in_x8 + 4) = (int)((float)*(int *)(in_x8 + 4) - 80.0);
    *(int *)(in_x8 + 0xc) = (int)((float)*(int *)(in_x8 + 0xc) + 80.0);
  }
  return;
}

