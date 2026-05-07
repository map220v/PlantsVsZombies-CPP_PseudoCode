// Class: ZombieSteamCoalCartProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSteamCoalCartProps::StaticClassInit() */

void ZombieSteamCoalCartProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieSteamCoalCartProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0480a230,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSteamCoalCartProps::StaticGetClass() */

long * ZombieSteamCoalCartProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieSteamCoalCartProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSteamCoalCartProps::GetClass() const */

long * ZombieSteamCoalCartProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieSteamCoalCartProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSteamCoalCartProps::ZombieSteamCoalCartProps() */

void __thiscall ZombieSteamCoalCartProps::ZombieSteamCoalCartProps(ZombieSteamCoalCartProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_068fe910;
  return;
}


/* ZombieSteamCoalCartProps::StaticNew() */

ZombieSteamCoalCartProps * ZombieSteamCoalCartProps::StaticNew(void)

{
  ZombieSteamCoalCartProps *this;
  
  this = ::operator_new(0x210);
  ZombieSteamCoalCartProps(this);
  return this;
}


/* ZombieSteamCoalCartProps::~ZombieSteamCoalCartProps() */

void __thiscall ZombieSteamCoalCartProps::~ZombieSteamCoalCartProps(ZombieSteamCoalCartProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068fe910;
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieSteamCoalCartProps::~ZombieSteamCoalCartProps() */

void __thiscall ZombieSteamCoalCartProps::~ZombieSteamCoalCartProps(ZombieSteamCoalCartProps *this)

{
  ~ZombieSteamCoalCartProps(this);
  AK::FreeHook(this);
  return;
}

