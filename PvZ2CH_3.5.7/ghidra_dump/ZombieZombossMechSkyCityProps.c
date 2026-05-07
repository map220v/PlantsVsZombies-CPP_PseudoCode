// Class: ZombieZombossMechSkyCityProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMechSkyCityProps::StaticClassInit() */

void ZombieZombossMechSkyCityProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieZombossMechSkyCityProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04728648,0x2b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMechSkyCityProps::StaticGetClass() */

long * ZombieZombossMechSkyCityProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieZombossMechSkyCityProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMechSkyCityProps::GetClass() const */

long * ZombieZombossMechSkyCityProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieZombossMechSkyCityProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMechSkyCityProps::ZombieZombossMechSkyCityProps() */

void __thiscall
ZombieZombossMechSkyCityProps::ZombieZombossMechSkyCityProps(ZombieZombossMechSkyCityProps *this)

{
  ZombieZombossMechProps::ZombieZombossMechProps((ZombieZombossMechProps *)this);
  this[0x2ac] = (ZombieZombossMechSkyCityProps)0x1;
  *(undefined ***)this = &PTR_GetClass_068c3800;
  *(undefined4 *)(this + 0x2a4) = 0x42c80000;
  *(undefined4 *)(this + 0x2a8) = 0x42c80000;
  *(undefined4 *)(this + 0x2a0) = 0x43fa0000;
  return;
}


/* ZombieZombossMechSkyCityProps::StaticNew() */

ZombieZombossMechSkyCityProps * ZombieZombossMechSkyCityProps::StaticNew(void)

{
  ZombieZombossMechSkyCityProps *this;
  
  this = ::operator_new(0x2b0);
  ZombieZombossMechSkyCityProps(this);
  return this;
}


/* ZombieZombossMechSkyCityProps::~ZombieZombossMechSkyCityProps() */

void __thiscall
ZombieZombossMechSkyCityProps::~ZombieZombossMechSkyCityProps(ZombieZombossMechSkyCityProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068c3800;
  ZombieZombossMechProps::~ZombieZombossMechProps((ZombieZombossMechProps *)this);
  return;
}


/* ZombieZombossMechSkyCityProps::~ZombieZombossMechSkyCityProps() */

void __thiscall
ZombieZombossMechSkyCityProps::~ZombieZombossMechSkyCityProps(ZombieZombossMechSkyCityProps *this)

{
  ~ZombieZombossMechSkyCityProps(this);
  AK::FreeHook(this);
  return;
}

