// Class: ZombieRocket


/* ZombieRocket::updateState_MowedDown() */

void __thiscall ZombieRocket::updateState_MowedDown(ZombieRocket *this)

{
  char cVar1;
  
  cVar1 = Zombie::IsFlying((Zombie *)this);
  if (cVar1 != '\0') {
    return;
  }
  Zombie::updateState_MowedDown((Zombie *)this);
  return;
}


/* ZombieRocket::onExitState_MowedDown(ZombieState) */

void __thiscall ZombieRocket::onExitState_MowedDown(ZombieRocket *this)

{
  char cVar1;
  
  cVar1 = Zombie::IsFlying((Zombie *)this);
  if (cVar1 != '\0') {
    return;
  }
  nop();
  return;
}


/* ZombieRocket::onRocketFlyDieAnimDone(std::string const&) */

void ZombieRocket::onRocketFlyDieAnimDone(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x48))();
  return;
}


/* ZombieRocket::onRocketLandAnimDone(std::string const&) */

void ZombieRocket::onRocketLandAnimDone(string *param_1)

{
  char cVar1;
  
  Zombie::SetIsFlying((Zombie *)param_1,false);
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1);
  if (cVar1 == '\0') {
    (**(code **)(*(long *)param_1 + 0x260))(param_1);
  }
  return;
}


/* ZombieRocket::~ZombieRocket() */

void __thiscall ZombieRocket::~ZombieRocket(ZombieRocket *this)

{
  *(undefined ***)this = &PTR_GetClass_068b8010;
  *(undefined ***)(this + 0x10) = &PTR__ZombieRocket_068b8a58;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieRocket::~ZombieRocket() */

void __thiscall ZombieRocket::~ZombieRocket(ZombieRocket *this)

{
  ~ZombieRocket(this + -0x10);
  return;
}


/* ZombieRocket::~ZombieRocket() */

void __thiscall ZombieRocket::~ZombieRocket(ZombieRocket *this)

{
  ~ZombieRocket(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieRocket::~ZombieRocket() */

void __thiscall ZombieRocket::~ZombieRocket(ZombieRocket *this)

{
  ~ZombieRocket(this + -0x10);
  return;
}


/* ZombieRocket::onZombieInitialize() */

void __thiscall ZombieRocket::onZombieInitialize(ZombieRocket *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_EOT();
  this[0x800] = (ZombieRocket)0x0;
  *(undefined4 *)(this + 0x804) = uVar1;
  return;
}


/* ZombieRocket::onExitState_Flying(ZombieState) */

void ZombieRocket::onExitState_Flying(Zombie *param_1)

{
  undefined4 uVar1;
  
  Zombie::SetIsUsingAnimTranslation(param_1,false);
  uVar1 = PVZ_EOT();
  *(undefined4 *)(param_1 + 0x804) = uVar1;
  return;
}


/* ZombieRocket::ZombieRocket() */

void __thiscall ZombieRocket::ZombieRocket(ZombieRocket *this)

{
  undefined4 uVar1;
  
  Zombie::Zombie((Zombie *)this);
  this[0x800] = (ZombieRocket)0x0;
  *(undefined ***)this = &PTR_GetClass_068b8010;
  *(undefined ***)(this + 0x10) = &PTR__ZombieRocket_068b8a58;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x804) = uVar1;
  return;
}


/* ZombieRocket::StaticNew() */

ZombieRocket * ZombieRocket::StaticNew(void)

{
  ZombieRocket *this;
  
  this = ::operator_new(0x808);
  ZombieRocket(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRocket::Land() */

void __thiscall ZombieRocket::Land(ZombieRocket *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Stop_Kongfu_Rocket_Fly");
  RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  Zombie::setZombieState((Zombie *)this,0x20,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieRocket::updateState_Flying() */

void __thiscall ZombieRocket::updateState_Flying(ZombieRocket *this)

{
  char cVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(this + 0x804);
  fVar2 = (float)PVZ_T();
  if ((fVar3 <= fVar2) && (cVar1 = (**(code **)(*(long *)this + 0x328))(this), cVar1 == '\0')) {
    Land(this);
    return;
  }
  return;
}


/* ZombieRocket::onEnterState_Flying(ZombieState) */

void ZombieRocket::onEnterState_Flying(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *this;
  ZombieRocketProps *pZVar1;
  float fVar2;
  float fVar3;
  
  Zombie::SetIsFlying(param_1,true);
  Zombie::SetIsUsingAnimTranslation(param_1,true);
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ZombieAnimRig_Rocket::PlayFlying((ZombieAnimRig_Rocket *)this);
  pZVar1 = Zombie::GetProps<ZombieRocketProps>(param_1);
  fVar2 = *(float *)(pZVar1 + 0x210);
  pZVar1 = Zombie::GetProps<ZombieRocketProps>(param_1);
  fVar2 = (float)RandRangeFloat(fVar2,*(float *)(pZVar1 + 0x214));
  fVar3 = (float)PVZ_T();
  *(float *)(param_1 + 0x804) = fVar3 + fVar2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRocket::onEnterState_DroppingFromSky(ZombieState) */

void ZombieRocket::onEnterState_DroppingFromSky(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onRocketLandAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_Rocket::PlayDropIn((ZombieAnimRig_Rocket *)pZVar1,aRStack_50);
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
/* ZombieRocket::StaticClassInit() */

void ZombieRocket::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieRocket");
      (*pcVar4)(plVar1,asStack_150,FUN_046f65ec,0x808,0);
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
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieRocket,void(ZombieRocket::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieRocket,void(ZombieRocket::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieRocket,void(ZombieRocket::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_RK_Flying");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046f62e8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieRocket,void(ZombieRocket::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieRocket,void(ZombieRocket::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieRocket,void(ZombieRocket::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_RK_DroppingFromSky");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046f62e8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieRocket::StaticGetClass() */

long * ZombieRocket::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieRocket",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieRocket::GetClass() const */

long * ZombieRocket::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieRocket",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRocket::onPlaceOnBoard() */

void __thiscall ZombieRocket::onPlaceOnBoard(ZombieRocket *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onPlaceOnBoard((Zombie *)this);
  std::string::string(asStack_10,"Play_Kongfu_Rocket_Fly");
  RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  Zombie::setZombieState((Zombie *)this,0x1f,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRocket::onEnterState_MowedDown(ZombieState) */

void __thiscall ZombieRocket::onEnterState_MowedDown(ZombieRocket *this,undefined8 param_2)

{
  char cVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  float fVar3;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Zombie::IsFlying((Zombie *)this);
  if (cVar1 == '\0') {
    Zombie::onEnterState_MowedDown(this,param_2);
  }
  else {
    fVar3 = (float)(**(code **)(*(long *)this + 0x920))(this);
    if (0.0 <= fVar3) {
      (**(code **)(*(long *)this + 0x240))(this);
    }
    pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onRocketFlyDieAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    ZombieAnimRig_Rocket::PlayFlyDie((ZombieAnimRig_Rocket *)pZVar2,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

