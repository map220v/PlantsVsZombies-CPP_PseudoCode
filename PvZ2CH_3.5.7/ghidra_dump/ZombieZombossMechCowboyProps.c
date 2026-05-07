// Class: ZombieZombossMechCowboyProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMechCowboyProps::StaticClassInit() */

void ZombieZombossMechCowboyProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieZombossMechCowboyProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04719a2c,0x2a0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMechCowboyProps::StaticGetClass() */

long * ZombieZombossMechCowboyProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieZombossMechCowboyProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMechCowboyProps::GetClass() const */

long * ZombieZombossMechCowboyProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieZombossMechCowboyProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMechCowboyProps::ZombieZombossMechCowboyProps() */

void __thiscall
ZombieZombossMechCowboyProps::ZombieZombossMechCowboyProps(ZombieZombossMechCowboyProps *this)

{
  ZombieZombossMechProps::ZombieZombossMechProps((ZombieZombossMechProps *)this);
  *(undefined ***)this = &PTR_GetClass_068be1b0;
  return;
}


/* ZombieZombossMechCowboyProps::StaticNew() */

ZombieZombossMechCowboyProps * ZombieZombossMechCowboyProps::StaticNew(void)

{
  ZombieZombossMechCowboyProps *this;
  
  this = ::operator_new(0x2a0);
  ZombieZombossMechCowboyProps(this);
  return this;
}


/* ZombieZombossMechCowboyProps::~ZombieZombossMechCowboyProps() */

void __thiscall
ZombieZombossMechCowboyProps::~ZombieZombossMechCowboyProps(ZombieZombossMechCowboyProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068be1b0;
  ZombieZombossMechProps::~ZombieZombossMechProps((ZombieZombossMechProps *)this);
  return;
}


/* ZombieZombossMechCowboyProps::~ZombieZombossMechCowboyProps() */

void __thiscall
ZombieZombossMechCowboyProps::~ZombieZombossMechCowboyProps(ZombieZombossMechCowboyProps *this)

{
  ~ZombieZombossMechCowboyProps(this);
  AK::FreeHook(this);
  return;
}

