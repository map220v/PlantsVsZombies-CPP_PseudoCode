// Class: ZombieZombossMechFutureProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMechFutureProps::StaticClassInit() */

void ZombieZombossMechFutureProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieZombossMechFutureProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0471d77c,0x2a0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMechFutureProps::StaticGetClass() */

long * ZombieZombossMechFutureProps::StaticGetClass(void)

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
  uVar2 = ZombieZombossMechProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZombossMechFutureProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMechFutureProps::GetClass() const */

long * ZombieZombossMechFutureProps::GetClass(void)

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
  uVar2 = ZombieZombossMechProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZombossMechFutureProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMechFutureProps::ZombieZombossMechFutureProps() */

void __thiscall
ZombieZombossMechFutureProps::ZombieZombossMechFutureProps(ZombieZombossMechFutureProps *this)

{
  ZombieZombossMechProps::ZombieZombossMechProps((ZombieZombossMechProps *)this);
  *(undefined ***)this = &PTR_GetClass_068c0890;
  return;
}


/* ZombieZombossMechFutureProps::StaticNew() */

ZombieZombossMechFutureProps * ZombieZombossMechFutureProps::StaticNew(void)

{
  ZombieZombossMechFutureProps *this;
  
  this = ::operator_new(0x2a0);
  ZombieZombossMechFutureProps(this);
  return this;
}


/* ZombieZombossMechFutureProps::~ZombieZombossMechFutureProps() */

void __thiscall
ZombieZombossMechFutureProps::~ZombieZombossMechFutureProps(ZombieZombossMechFutureProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068c0890;
  ZombieZombossMechProps::~ZombieZombossMechProps((ZombieZombossMechProps *)this);
  return;
}


/* ZombieZombossMechFutureProps::~ZombieZombossMechFutureProps() */

void __thiscall
ZombieZombossMechFutureProps::~ZombieZombossMechFutureProps(ZombieZombossMechFutureProps *this)

{
  ~ZombieZombossMechFutureProps(this);
  AK::FreeHook(this);
  return;
}

