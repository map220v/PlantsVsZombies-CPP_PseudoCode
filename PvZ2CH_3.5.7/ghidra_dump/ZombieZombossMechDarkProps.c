// Class: ZombieZombossMechDarkProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMechDarkProps::StaticClassInit() */

void ZombieZombossMechDarkProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieZombossMechDarkProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0471f5f4,0x2a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMechDarkProps::StaticGetClass() */

long * ZombieZombossMechDarkProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieZombossMechDarkProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMechDarkProps::GetClass() const */

long * ZombieZombossMechDarkProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieZombossMechDarkProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMechDarkProps::ZombieZombossMechDarkProps() */

void __thiscall
ZombieZombossMechDarkProps::ZombieZombossMechDarkProps(ZombieZombossMechDarkProps *this)

{
  ZombieZombossMechProps::ZombieZombossMechProps((ZombieZombossMechProps *)this);
  *(undefined4 *)(this + 0x2a0) = 0x40400000;
  *(undefined ***)this = &PTR_GetClass_068c1a90;
  return;
}


/* ZombieZombossMechDarkProps::StaticNew() */

ZombieZombossMechDarkProps * ZombieZombossMechDarkProps::StaticNew(void)

{
  ZombieZombossMechDarkProps *this;
  
  this = ::operator_new(0x2a8);
  ZombieZombossMechDarkProps(this);
  return this;
}


/* ZombieZombossMechDarkProps::~ZombieZombossMechDarkProps() */

void __thiscall
ZombieZombossMechDarkProps::~ZombieZombossMechDarkProps(ZombieZombossMechDarkProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068c1a90;
  ZombieZombossMechProps::~ZombieZombossMechProps((ZombieZombossMechProps *)this);
  return;
}


/* ZombieZombossMechDarkProps::~ZombieZombossMechDarkProps() */

void __thiscall
ZombieZombossMechDarkProps::~ZombieZombossMechDarkProps(ZombieZombossMechDarkProps *this)

{
  ~ZombieZombossMechDarkProps(this);
  AK::FreeHook(this);
  return;
}

