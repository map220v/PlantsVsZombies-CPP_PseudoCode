// Class: ZombieZombossMechBeachProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMechBeachProps::StaticClassInit() */

void ZombieZombossMechBeachProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieZombossMechBeachProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04842750,0x2c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMechBeachProps::StaticGetClass() */

long * ZombieZombossMechBeachProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieZombossMechBeachProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMechBeachProps::GetClass() const */

long * ZombieZombossMechBeachProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieZombossMechBeachProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMechBeachProps::ZombieZombossMechBeachProps() */

void __thiscall
ZombieZombossMechBeachProps::ZombieZombossMechBeachProps(ZombieZombossMechBeachProps *this)

{
  ZombieZombossMechProps::ZombieZombossMechProps((ZombieZombossMechProps *)this);
  this[0x2a4] = (ZombieZombossMechBeachProps)0x0;
  this[0x2a5] = (ZombieZombossMechBeachProps)0x0;
  *(undefined ***)this = &PTR_GetClass_069095f0;
  *(undefined4 *)(this + 0x2a0) = 0;
  *(undefined4 *)(this + 0x2a8) = 0;
  SharkMinionParameters::SharkMinionParameters((SharkMinionParameters *)(this + 0x2ac));
  return;
}


/* ZombieZombossMechBeachProps::StaticNew() */

ZombieZombossMechBeachProps * ZombieZombossMechBeachProps::StaticNew(void)

{
  ZombieZombossMechBeachProps *this;
  
  this = ::operator_new(0x2c0);
  ZombieZombossMechBeachProps(this);
  return this;
}


/* ZombieZombossMechBeachProps::~ZombieZombossMechBeachProps() */

void __thiscall
ZombieZombossMechBeachProps::~ZombieZombossMechBeachProps(ZombieZombossMechBeachProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069095f0;
  ZombieZombossMechProps::~ZombieZombossMechProps((ZombieZombossMechProps *)this);
  return;
}


/* ZombieZombossMechBeachProps::~ZombieZombossMechBeachProps() */

void __thiscall
ZombieZombossMechBeachProps::~ZombieZombossMechBeachProps(ZombieZombossMechBeachProps *this)

{
  ~ZombieZombossMechBeachProps(this);
  AK::FreeHook(this);
  return;
}

