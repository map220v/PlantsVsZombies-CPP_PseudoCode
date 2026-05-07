// Class: ZombieZombossMechSteamProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMechSteamProps::StaticClassInit() */

void ZombieZombossMechSteamProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieZombossMechSteamProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03c40438,0x2a0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMechSteamProps::StaticGetClass() */

long * ZombieZombossMechSteamProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieZombossMechSteamProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMechSteamProps::GetClass() const */

long * ZombieZombossMechSteamProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieZombossMechSteamProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMechSteamProps::ZombieZombossMechSteamProps() */

void __thiscall
ZombieZombossMechSteamProps::ZombieZombossMechSteamProps(ZombieZombossMechSteamProps *this)

{
  ZombieZombossMechProps::ZombieZombossMechProps((ZombieZombossMechProps *)this);
  *(undefined ***)this = &PTR_GetClass_06751080;
  return;
}


/* ZombieZombossMechSteamProps::StaticNew() */

ZombieZombossMechSteamProps * ZombieZombossMechSteamProps::StaticNew(void)

{
  ZombieZombossMechSteamProps *this;
  
  this = ::operator_new(0x2a0);
  ZombieZombossMechSteamProps(this);
  return this;
}


/* ZombieZombossMechSteamProps::~ZombieZombossMechSteamProps() */

void __thiscall
ZombieZombossMechSteamProps::~ZombieZombossMechSteamProps(ZombieZombossMechSteamProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06751080;
  ZombieZombossMechProps::~ZombieZombossMechProps((ZombieZombossMechProps *)this);
  return;
}


/* ZombieZombossMechSteamProps::~ZombieZombossMechSteamProps() */

void __thiscall
ZombieZombossMechSteamProps::~ZombieZombossMechSteamProps(ZombieZombossMechSteamProps *this)

{
  ~ZombieZombossMechSteamProps(this);
  AK::FreeHook(this);
  return;
}

