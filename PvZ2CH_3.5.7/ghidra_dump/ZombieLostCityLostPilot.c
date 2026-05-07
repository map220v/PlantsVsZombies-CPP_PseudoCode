// Class: ZombieLostCityLostPilot


/* ZombieLostCityLostPilot::canTargetEntityHeight(BoardEntityHeight) */

ulong __thiscall
ZombieLostCityLostPilot::canTargetEntityHeight(ZombieLostCityLostPilot *this,int param_2)

{
  char cVar1;
  ulong uVar2;
  
  cVar1 = Zombie::IsFlying((Zombie *)this);
  if (cVar1 != '\0') {
    return (ulong)(1 < param_2);
  }
  uVar2 = Zombie::canTargetEntityHeight((Zombie *)this);
  return uVar2;
}


/* ZombieLostCityLostPilot::onExitState_HangCut(ZombieState) */

void ZombieLostCityLostPilot::onExitState_HangCut(Zombie *param_1)

{
  Zombie::EndCondition(param_1,0x2b);
  return;
}


/* ZombieLostCityLostPilot::onEnterState_HangBleed(ZombieState) */

void ZombieLostCityLostPilot::onEnterState_HangBleed(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  (**(code **)(*(long *)pZVar1 + 0x148))();
  return;
}


/* ZombieLostCityLostPilot::onZombieInitialize() */

void __thiscall ZombieLostCityLostPilot::onZombieInitialize(ZombieLostCityLostPilot *this)

{
  *(undefined4 *)(this + 0x800) = 0;
  *(undefined4 *)(this + 0x810) = 0xffffffff;
  *(undefined4 *)(this + 0x814) = 0;
  *(undefined4 *)(this + 0x804) = 0;
  return;
}


/* ZombieLostCityLostPilot::updateState_HangEat() */

void __thiscall ZombieLostCityLostPilot::updateState_HangEat(ZombieLostCityLostPilot *this)

{
  long lVar1;
  
  lVar1 = (**(code **)(*(long *)this + 0x228))();
  if (lVar1 != 0) {
    (**(code **)(*(long *)this + 0x958))(this,lVar1);
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x23);
  return;
}


/* ZombieLostCityLostPilot::onHangCutCompleted(std::string const&) */

void ZombieLostCityLostPilot::onHangCutCompleted(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 != '\0') {
    return;
  }
  Zombie::setZombieState((Zombie *)param_1,1);
  return;
}


/* ZombieLostCityLostPilot::updateState_Walk() */

void __thiscall ZombieLostCityLostPilot::updateState_Walk(ZombieLostCityLostPilot *this)

{
  long lVar1;
  
  lVar1 = (**(code **)(*(long *)this + 0x228))();
  if (lVar1 != 0) {
    Zombie::setZombieState((Zombie *)this,2,0);
    return;
  }
  return;
}


/* ZombieLostCityLostPilot::onHangStartCompleted(std::string const&) */

void ZombieLostCityLostPilot::onHangStartCompleted(string *param_1)

{
  Zombie::SetIsControlled((Zombie *)param_1,false);
  Zombie::setZombieState((Zombie *)param_1,0x23,0);
  return;
}


/* ZombieLostCityLostPilot::onStartBleeding() */

void __thiscall ZombieLostCityLostPilot::onStartBleeding(ZombieLostCityLostPilot *this)

{
  char cVar1;
  
  cVar1 = Zombie::IsFlying((Zombie *)this);
  if (cVar1 == '\0') {
    Zombie::onStartBleeding((Zombie *)this);
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x26,0);
  return;
}


/* ZombieLostCityLostPilot::doFallFromSky() */

void __thiscall ZombieLostCityLostPilot::doFallFromSky(ZombieLostCityLostPilot *this)

{
  Zombie::setZombieState((Zombie *)this,0x22,0);
  return;
}


/* ZombieLostCityLostPilot::updateState_HangIdle() */

void __thiscall ZombieLostCityLostPilot::updateState_HangIdle(ZombieLostCityLostPilot *this)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  
  lVar1 = (**(code **)(*(long *)this + 0x228))();
  if (lVar1 != 0) {
    Zombie::setZombieState((Zombie *)this,0x24,0);
    return;
  }
  fVar2 = (float)PVZ_T();
  if (fVar2 < *(float *)(this + 0x840)) {
    return;
  }
  uVar3 = PVZ_EOT();
  *(undefined4 *)(this + 0x840) = uVar3;
  Zombie::setZombieState((Zombie *)this,0x25,0);
  return;
}


/* ZombieLostCityLostPilot::immediatelyCutDown() */

void __thiscall ZombieLostCityLostPilot::immediatelyCutDown(ZombieLostCityLostPilot *this)

{
  int iVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  
  iVar1 = Zombie::getZombieStateSerialization((Zombie *)this);
  if (1 < iVar1 - 0x23U) {
    return;
  }
  Zombie::SetIsFlying((Zombie *)this,false);
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  FUN_047d5e68(pZVar2 + 0x240,0);
  Zombie::setZombieState((Zombie *)this,1,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLostCityLostPilot::OnBeforeBlown(BoardEntity*) */

void __thiscall
ZombieLostCityLostPilot::OnBeforeBlown(ZombieLostCityLostPilot *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (BoardEntity *)0x0) {
    bVar1 = Sexy::RtObject::IsA<Plant>((RtObject *)param_1);
    if (bVar1) {
      Plant::GetType();
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      bVar1 = std::operator==((string *)(lVar3 + 8),"blover");
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      if (bVar1) {
        cVar2 = Zombie::IsFlying((Zombie *)this);
        if (cVar2 != '\0') {
          Zombie::setZombieState((Zombie *)this,0x25,0);
        }
        goto LAB_047d69a8;
      }
    }
  }
  immediatelyCutDown(this);
LAB_047d69a8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieLostCityLostPilot::onExternalControlEvent() */

void __thiscall ZombieLostCityLostPilot::onExternalControlEvent(ZombieLostCityLostPilot *this)

{
  int iVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  
  iVar1 = Zombie::getZombieStateSerialization((Zombie *)this);
  if (1 < iVar1 - 0x23U) {
    return;
  }
  Zombie::SetIsFlying((Zombie *)this,false);
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  FUN_047d5e68(pZVar2 + 0x240,0);
  Zombie::setZombieState((Zombie *)this,1,0);
  return;
}


/* ZombieLostCityLostPilot::onMowedDown() */

void __thiscall ZombieLostCityLostPilot::onMowedDown(ZombieLostCityLostPilot *this)

{
  ZombieHydraHeadAnimRig *pZVar1;
  
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  FUN_047d5e68(pZVar1 + 0x240,0);
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  (**(code **)(*(long *)pZVar1 + 0x148))();
  return;
}


/* ZombieLostCityLostPilot::allowAshState() const */

byte __thiscall ZombieLostCityLostPilot::allowAshState(ZombieLostCityLostPilot *this)

{
  byte bVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  bVar1 = FUN_047d5e70(pZVar2[0x240]);
  return bVar1 ^ 1;
}


/* ZombieLostCityLostPilot::onEnterState_HangEat(ZombieState) */

void ZombieLostCityLostPilot::onEnterState_HangEat(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *this;
  
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ZombieAnimRig_LostCityLostPilot::PlayHangEat((ZombieAnimRig_LostCityLostPilot *)this);
  PVZ_T();
  FUN_047d5e60(param_1 + 200);
  return;
}


/* ZombieLostCityLostPilot::ZombieLostCityLostPilot() */

void __thiscall ZombieLostCityLostPilot::ZombieLostCityLostPilot(ZombieLostCityLostPilot *this)

{
  undefined4 uVar1;
  
  ZombieWithActions::ZombieWithActions((ZombieWithActions *)this);
  *(undefined ***)this = &PTR_GetClass_068e8b30;
  *(undefined ***)(this + 0x10) = &PTR__ZombieLostCityLostPilot_068e9618;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x840) = uVar1;
  return;
}


/* ZombieLostCityLostPilot::StaticNew() */

ZombieLostCityLostPilot * ZombieLostCityLostPilot::StaticNew(void)

{
  ZombieLostCityLostPilot *this;
  
  this = ::operator_new(0x848);
  ZombieLostCityLostPilot(this);
  return this;
}


/* ZombieLostCityLostPilot::onEnterState_HangIdle(ZombieState) */

void ZombieLostCityLostPilot::onEnterState_HangIdle(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *this;
  ZombieLostCityLostPilotProps *pZVar1;
  float fVar2;
  
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ZombieAnimRig_LostCityLostPilot::PlayHangIdle((ZombieAnimRig_LostCityLostPilot *)this);
  pZVar1 = Zombie::GetProps<ZombieLostCityLostPilotProps>(param_1);
  fVar2 = (float)PVZ_T();
  *(float *)(param_1 + 0x840) = fVar2 + *(float *)(pZVar1 + 0x22c);
  return;
}


/* ZombieLostCityLostPilot::CalcZombieAttackRect() */

void ZombieLostCityLostPilot::CalcZombieAttackRect(void)

{
  char cVar1;
  Zombie *in_x0;
  ZombieLostCityLostPilotProps *pZVar2;
  long in_x8;
  
  Zombie::CalcZombieAttackRect();
  cVar1 = Zombie::isInState(in_x0,0x23);
  if ((cVar1 == '\0') && (cVar1 = Zombie::isInState(in_x0,0x24), cVar1 == '\0')) {
    return;
  }
  pZVar2 = Zombie::GetProps<ZombieLostCityLostPilotProps>(in_x0);
  *(int *)(in_x8 + 4) = *(int *)(in_x8 + 4) + *(int *)(pZVar2 + 0x228);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLostCityLostPilot::onEnterState_HangStart(ZombieState) */

void ZombieLostCityLostPilot::onEnterState_HangStart(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::SetIsFlying(param_1,true);
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  FUN_047d5e68(pZVar1 + 0x240,1);
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onHangStartCompleted");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_LostCityLostPilot::PlayHangStart
            ((ZombieAnimRig_LostCityLostPilot *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  Zombie::SetIsControlled(param_1,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLostCityLostPilot::onEnterState_HangCut(ZombieState) */

void ZombieLostCityLostPilot::onEnterState_HangCut(Zombie *param_1)

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
  Zombie::SetIsFlying(param_1,false);
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  FUN_047d5e68(pZVar1 + 0x240,0);
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onHangCutCompleted");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_LostCityLostPilot::PlayHangCut((ZombieAnimRig_LostCityLostPilot *)pZVar1,aRStack_50)
  ;
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


/* ZombieLostCityLostPilot::~ZombieLostCityLostPilot() */

void __thiscall ZombieLostCityLostPilot::~ZombieLostCityLostPilot(ZombieLostCityLostPilot *this)

{
  *(undefined ***)this = &PTR_GetClass_068e8b30;
  *(undefined ***)(this + 0x10) = &PTR__ZombieLostCityLostPilot_068e9618;
  ZombieWithActions::~ZombieWithActions((ZombieWithActions *)this);
  return;
}


/* non-virtual thunk to ZombieLostCityLostPilot::~ZombieLostCityLostPilot() */

void __thiscall ZombieLostCityLostPilot::~ZombieLostCityLostPilot(ZombieLostCityLostPilot *this)

{
  ~ZombieLostCityLostPilot(this + -0x10);
  return;
}


/* ZombieLostCityLostPilot::~ZombieLostCityLostPilot() */

void __thiscall ZombieLostCityLostPilot::~ZombieLostCityLostPilot(ZombieLostCityLostPilot *this)

{
  ~ZombieLostCityLostPilot(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieLostCityLostPilot::~ZombieLostCityLostPilot() */

void __thiscall ZombieLostCityLostPilot::~ZombieLostCityLostPilot(ZombieLostCityLostPilot *this)

{
  ~ZombieLostCityLostPilot(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLostCityLostPilot::StaticClassInit() */

void ZombieLostCityLostPilot::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieLostCityLostPilot");
      (*pcVar4)(plVar1,asStack_150,FUN_047d78b4,0x848,0);
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
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa60);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieLostCityLostPilot,void(ZombieLostCityLostPilot::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa68);
  Sexy::Delegate0::Delegate0<ZombieLostCityLostPilot,void(ZombieLostCityLostPilot::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa70);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieLostCityLostPilot,void(ZombieLostCityLostPilot::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_LP_HangStart");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x22,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_047d7398(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa78);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieLostCityLostPilot,void(ZombieLostCityLostPilot::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa80);
  Sexy::Delegate0::Delegate0<ZombieLostCityLostPilot,void(ZombieLostCityLostPilot::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa88);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieLostCityLostPilot,void(ZombieLostCityLostPilot::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_LP_HangIdle");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x23,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_047d7398(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa90);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieLostCityLostPilot,void(ZombieLostCityLostPilot::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa98);
  Sexy::Delegate0::Delegate0<ZombieLostCityLostPilot,void(ZombieLostCityLostPilot::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xaa0);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieLostCityLostPilot,void(ZombieLostCityLostPilot::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_LP_HangEat");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x24,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_047d7398(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xaa8);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieLostCityLostPilot,void(ZombieLostCityLostPilot::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xab0);
  Sexy::Delegate0::Delegate0<ZombieLostCityLostPilot,void(ZombieLostCityLostPilot::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xab8);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieLostCityLostPilot,void(ZombieLostCityLostPilot::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_LP_HangCut");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x25,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_047d7398(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xac0);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieLostCityLostPilot,void(ZombieLostCityLostPilot::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xac8);
  Sexy::Delegate0::Delegate0<ZombieLostCityLostPilot,void(ZombieLostCityLostPilot::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xad0);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieLostCityLostPilot,void(ZombieLostCityLostPilot::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_LP_HangBleed");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x26,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_047d7398(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieLostCityLostPilot::StaticGetClass() */

long * ZombieLostCityLostPilot::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieLostCityLostPilot",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieLostCityLostPilot::GetClass() const */

long * ZombieLostCityLostPilot::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieLostCityLostPilot",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

