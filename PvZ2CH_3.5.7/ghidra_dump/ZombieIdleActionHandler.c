// Class: ZombieIdleActionHandler


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIdleActionHandler::StaticClassInit() */

void ZombieIdleActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieIdleActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_04f018c4,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieIdleActionHandler::StaticGetClass() */

long * ZombieIdleActionHandler::StaticGetClass(void)

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
  uVar2 = ZombieTimedActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieIdleActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieIdleActionHandler::GetClass() const */

long * ZombieIdleActionHandler::GetClass(void)

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
  uVar2 = ZombieTimedActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieIdleActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieIdleActionHandler::ZombieIdleActionHandler() */

void __thiscall ZombieIdleActionHandler::ZombieIdleActionHandler(ZombieIdleActionHandler *this)

{
  ZombieTimedActionHandler::ZombieTimedActionHandler((ZombieTimedActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_06a0bdd0;
  return;
}


/* ZombieIdleActionHandler::StaticNew() */

ZombieIdleActionHandler * ZombieIdleActionHandler::StaticNew(void)

{
  ZombieIdleActionHandler *this;
  
  this = ::operator_new(0x28);
  ZombieIdleActionHandler(this);
  return this;
}


/* ZombieIdleActionHandler::~ZombieIdleActionHandler() */

void __thiscall ZombieIdleActionHandler::~ZombieIdleActionHandler(ZombieIdleActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_06a0bdd0;
  ZombieTimedActionHandler::~ZombieTimedActionHandler((ZombieTimedActionHandler *)this);
  return;
}


/* ZombieIdleActionHandler::~ZombieIdleActionHandler() */

void __thiscall ZombieIdleActionHandler::~ZombieIdleActionHandler(ZombieIdleActionHandler *this)

{
  ~ZombieIdleActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* ZombieIdleActionHandler::onUpdateAction() */

void __thiscall ZombieIdleActionHandler::onUpdateAction(ZombieIdleActionHandler *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  if (fVar1 < *(float *)(this + 0x24)) {
    return;
  }
  ZombieActionHandler::markActionDone((ZombieActionHandler *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIdleActionHandler::onStartAction() */

void __thiscall ZombieIdleActionHandler::onStartAction(ZombieIdleActionHandler *this)

{
  Zombie *this_00;
  long *plVar1;
  code *pcVar2;
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieTimedActionHandler::onStartAction((ZombieTimedActionHandler *)this);
  this_00 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  plVar1 = (long *)Zombie::GetAnimRig(this_00);
  pcVar2 = *(code **)(*plVar1 + 0x110);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  (*pcVar2)(plVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

