// Class: IZombieZombieJalapeno


/* IZombieZombieJalapeno::onZombieDied(Zombie*, DamageInfo const*) */

void IZombieZombieJalapeno::onZombieDied(Zombie *param_1,DamageInfo *param_2)

{
  return;
}


/* IZombieZombieJalapeno::onLostHead() */

void IZombieZombieJalapeno::onLostHead(void)

{
  nop();
  Zombie::setZombieState();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IZombieZombieJalapeno::StaticClassInit() */

void IZombieZombieJalapeno::StaticClassInit(void)

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
    std::string::string(asStack_10,"IZombieZombieJalapeno");
    (*pcVar2)(plVar1,asStack_10,FUN_0341b9e0,0x820,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IZombieZombieJalapeno::StaticGetClass() */

long * IZombieZombieJalapeno::StaticGetClass(void)

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
  uVar2 = ZombieJalapeno::StaticGetClass();
  (*pcVar3)(plVar1,"IZombieZombieJalapeno",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IZombieZombieJalapeno::GetClass() const */

long * IZombieZombieJalapeno::GetClass(void)

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
  uVar2 = ZombieJalapeno::StaticGetClass();
  (*pcVar3)(plVar1,"IZombieZombieJalapeno",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IZombieZombieJalapeno::IZombieZombieJalapeno() */

void __thiscall IZombieZombieJalapeno::IZombieZombieJalapeno(IZombieZombieJalapeno *this)

{
  ZombieJalapeno::ZombieJalapeno((ZombieJalapeno *)this);
  *(undefined ***)this = &PTR_GetClass_066240f0;
  *(undefined ***)(this + 0x10) = &PTR__IZombieZombieJalapeno_06624b20;
  return;
}


/* IZombieZombieJalapeno::StaticNew() */

IZombieZombieJalapeno * IZombieZombieJalapeno::StaticNew(void)

{
  IZombieZombieJalapeno *this;
  
  this = ::operator_new(0x820);
  IZombieZombieJalapeno(this);
  return this;
}


/* IZombieZombieJalapeno::onZombieInitialize() */

void __thiscall IZombieZombieJalapeno::onZombieInitialize(IZombieZombieJalapeno *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  ZombieJalapeno::onZombieInitialize((ZombieJalapeno *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDied);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<IZombieZombieJalapeno,void(IZombieZombieJalapeno::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,&local_40);
  return;
}


/* IZombieZombieJalapeno::~IZombieZombieJalapeno() */

void __thiscall IZombieZombieJalapeno::~IZombieZombieJalapeno(IZombieZombieJalapeno *this)

{
  *(undefined ***)this = &PTR_GetClass_066240f0;
  *(undefined ***)(this + 0x10) = &PTR__IZombieZombieJalapeno_06624b20;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  ZombieJalapeno::~ZombieJalapeno((ZombieJalapeno *)this);
  return;
}


/* non-virtual thunk to IZombieZombieJalapeno::~IZombieZombieJalapeno() */

void __thiscall IZombieZombieJalapeno::~IZombieZombieJalapeno(IZombieZombieJalapeno *this)

{
  ~IZombieZombieJalapeno(this + -0x10);
  return;
}


/* IZombieZombieJalapeno::~IZombieZombieJalapeno() */

void __thiscall IZombieZombieJalapeno::~IZombieZombieJalapeno(IZombieZombieJalapeno *this)

{
  ~IZombieZombieJalapeno(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to IZombieZombieJalapeno::~IZombieZombieJalapeno() */

void __thiscall IZombieZombieJalapeno::~IZombieZombieJalapeno(IZombieZombieJalapeno *this)

{
  ~IZombieZombieJalapeno(this + -0x10);
  return;
}

