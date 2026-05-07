// Class: ZombieSteamStoveProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSteamStoveProps::StaticClassInit() */

void ZombieSteamStoveProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieSteamStoveProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03c3bed8,0x228,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSteamStoveProps::StaticGetClass() */

long * ZombieSteamStoveProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieSteamStoveProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSteamStoveProps::GetClass() const */

long * ZombieSteamStoveProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieSteamStoveProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSteamStoveProps::ZombieSteamStoveProps() */

void __thiscall ZombieSteamStoveProps::ZombieSteamStoveProps(ZombieSteamStoveProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined4 *)(this + 0x214) = 0x41200000;
  *(undefined ***)this = &PTR_GetClass_0674fd90;
  *(undefined4 *)(this + 0x21c) = 0x40a00000;
  *(undefined4 *)(this + 0x210) = 0x42c80000;
  *(undefined4 *)(this + 0x218) = 0x459c4000;
  *(undefined4 *)(this + 0x220) = 0x42200000;
  return;
}


/* ZombieSteamStoveProps::StaticNew() */

ZombieSteamStoveProps * ZombieSteamStoveProps::StaticNew(void)

{
  ZombieSteamStoveProps *this;
  
  this = ::operator_new(0x228);
  ZombieSteamStoveProps(this);
  return this;
}


/* ZombieSteamStoveProps::~ZombieSteamStoveProps() */

void __thiscall ZombieSteamStoveProps::~ZombieSteamStoveProps(ZombieSteamStoveProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0674fd90;
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieSteamStoveProps::~ZombieSteamStoveProps() */

void __thiscall ZombieSteamStoveProps::~ZombieSteamStoveProps(ZombieSteamStoveProps *this)

{
  ~ZombieSteamStoveProps(this);
  AK::FreeHook(this);
  return;
}

