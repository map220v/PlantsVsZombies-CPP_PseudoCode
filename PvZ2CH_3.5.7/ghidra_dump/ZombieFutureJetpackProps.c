// Class: ZombieFutureJetpackProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieFutureJetpackProps::StaticClassInit() */

void ZombieFutureJetpackProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieFutureJetpackProps");
    (*pcVar2)(plVar1,asStack_10,FUN_046c05f8,0x218,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieFutureJetpackProps::ZombieFutureJetpackProps() */

void __thiscall ZombieFutureJetpackProps::ZombieFutureJetpackProps(ZombieFutureJetpackProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  this[0x210] = (ZombieFutureJetpackProps)0x0;
  *(undefined ***)this = &PTR_GetClass_068b0c40;
  return;
}


/* ZombieFutureJetpackProps::StaticNew() */

ZombieFutureJetpackProps * ZombieFutureJetpackProps::StaticNew(void)

{
  ZombieFutureJetpackProps *this;
  
  this = ::operator_new(0x218);
  ZombieFutureJetpackProps(this);
  return this;
}


/* ZombieFutureJetpackProps::~ZombieFutureJetpackProps() */

void __thiscall ZombieFutureJetpackProps::~ZombieFutureJetpackProps(ZombieFutureJetpackProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068b0c40;
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieFutureJetpackProps::~ZombieFutureJetpackProps() */

void __thiscall ZombieFutureJetpackProps::~ZombieFutureJetpackProps(ZombieFutureJetpackProps *this)

{
  ~ZombieFutureJetpackProps(this);
  AK::FreeHook(this);
  return;
}


/* ZombieFutureJetpackProps::StaticGetClass() */

long * ZombieFutureJetpackProps::StaticGetClass(void)

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
  uVar2 = ZombiePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieFutureJetpackProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieFutureJetpackProps::GetClass() const */

long * ZombieFutureJetpackProps::GetClass(void)

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
  uVar2 = ZombiePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieFutureJetpackProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

