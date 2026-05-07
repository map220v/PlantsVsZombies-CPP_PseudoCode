// Class: ZombieFutureImp


/* ZombieFutureImp::EMPeachStun(float) */

void __thiscall ZombieFutureImp::EMPeachStun(ZombieFutureImp *this,float param_1)

{
  *(float *)(this + 0x818) = param_1;
  Zombie::setZombieState((Zombie *)this,0x24,0);
  return;
}


/* ZombieFutureImp::IsStunned() const */

undefined8 __thiscall ZombieFutureImp::IsStunned(ZombieFutureImp *this)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = Zombie::getZombieStateSerialization((Zombie *)this);
  if (iVar1 != 0x24) {
    uVar2 = Zombie::IsStunned((Zombie *)this);
    return uVar2;
  }
  return 1;
}


/* ZombieFutureImp::~ZombieFutureImp() */

void __thiscall ZombieFutureImp::~ZombieFutureImp(ZombieFutureImp *this)

{
  *(undefined ***)this = &PTR_GetClass_068a2890;
  *(undefined ***)(this + 0x10) = &PTR__ZombieFutureImp_068a3368;
  ZombieImp::~ZombieImp((ZombieImp *)this);
  return;
}


/* non-virtual thunk to ZombieFutureImp::~ZombieFutureImp() */

void __thiscall ZombieFutureImp::~ZombieFutureImp(ZombieFutureImp *this)

{
  ~ZombieFutureImp(this + -0x10);
  return;
}


/* ZombieFutureImp::~ZombieFutureImp() */

void __thiscall ZombieFutureImp::~ZombieFutureImp(ZombieFutureImp *this)

{
  ~ZombieFutureImp(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieFutureImp::~ZombieFutureImp() */

void __thiscall ZombieFutureImp::~ZombieFutureImp(ZombieFutureImp *this)

{
  ~ZombieFutureImp(this + -0x10);
  return;
}


/* ZombieFutureImp::ZombieFutureImp() */

void __thiscall ZombieFutureImp::ZombieFutureImp(ZombieFutureImp *this)

{
  ZombieImp::ZombieImp((ZombieImp *)this);
  *(undefined4 *)(this + 0x818) = 0xbf800000;
  *(undefined ***)this = &PTR_GetClass_068a2890;
  *(undefined ***)(this + 0x10) = &PTR__ZombieFutureImp_068a3368;
  return;
}


/* ZombieFutureImp::StaticNew() */

ZombieFutureImp * ZombieFutureImp::StaticNew(void)

{
  ZombieFutureImp *this;
  
  this = ::operator_new(0x820);
  ZombieFutureImp(this);
  return this;
}


/* ZombieFutureImp::ShouldDrawShadow() const */

byte __thiscall ZombieFutureImp::ShouldDrawShadow(ZombieFutureImp *this)

{
  char cVar1;
  byte bVar2;
  long extraout_x0;
  
  cVar1 = Zombie::ShouldDrawShadow((Zombie *)this);
  bVar2 = 0;
  if (cVar1 != '\0') {
    Zombie::GetAnimRig((Zombie *)this);
    nop();
    bVar2 = FUN_046925c8(*(undefined1 *)(extraout_x0 + 0x240));
    bVar2 = bVar2 ^ 1;
  }
  return bVar2;
}


/* ZombieFutureImp::SetIsFallingFromSpawn(bool) */

void __thiscall ZombieFutureImp::SetIsFallingFromSpawn(ZombieFutureImp *this,bool param_1)

{
  long extraout_x0;
  
  Zombie::GetAnimRig((Zombie *)this);
  nop();
  FUN_046925c0(extraout_x0 + 0x240,param_1);
  return;
}


/* ZombieFutureImp::updateState_FutureImpEMPeachStun() */

void __thiscall ZombieFutureImp::updateState_FutureImpEMPeachStun(ZombieFutureImp *this)

{
  char cVar1;
  PopAnimRig *this_00;
  ZombieHydraHeadAnimRig *this_01;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  
  fVar2 = (float)PVZ_Dt();
  fVar4 = *(float *)(this + 0x818);
  *(float *)(this + 0x818) = fVar4 - fVar2;
  if (fVar4 - fVar2 < 0.0) {
    this_01 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
    ZombieAnimRig_FutureImp::PlayEMPeachStunEnd((ZombieAnimRig_FutureImp *)this_01);
    uVar3 = PVZ_EOT();
    *(undefined4 *)(this + 0x818) = uVar3;
  }
  this_00 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
  cVar1 = PopAnimRig::IsPlayingAnything(this_00);
  if (cVar1 == '\0') {
    (**(code **)(*(long *)this + 0x260))(this);
    *(undefined4 *)(this + 0x818) = 0xbf800000;
  }
  return;
}


/* ZombieFutureImp::onEnterState_FutureImpEMPeachStun(ZombieState) */

void ZombieFutureImp::onEnterState_FutureImpEMPeachStun(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *this;
  
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ZombieAnimRig_FutureImp::PlayEMPeachStunStart((ZombieAnimRig_FutureImp *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieFutureImp::StaticClassInit() */

void ZombieFutureImp::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieFutureImp");
      (*pcVar4)(plVar1,asStack_150,FUN_04693c00,0x820,0);
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
            ((ReceivedDataCallback *)0x0,(_func_void *)0xab0);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieFutureImp,void(ZombieFutureImp::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xab8);
  Sexy::Delegate0::Delegate0<ZombieFutureImp,void(ZombieFutureImp::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xac0);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieFutureImp,void(ZombieFutureImp::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_FUTUREIMP_EMPeachStun");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x24,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046939a4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieFutureImp::StaticGetClass() */

long * ZombieFutureImp::StaticGetClass(void)

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
  uVar2 = ZombieImp::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieFutureImp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieFutureImp::GetClass() const */

long * ZombieFutureImp::GetClass(void)

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
  uVar2 = ZombieImp::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieFutureImp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

