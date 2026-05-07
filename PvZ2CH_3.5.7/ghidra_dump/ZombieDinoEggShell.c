// Class: ZombieDinoEggShell


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDinoEggShell::StaticClassInit() */

void ZombieDinoEggShell::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieDinoEggShell");
    (*pcVar2)(plVar1,asStack_10,FUN_047fba28,0x810,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieDinoEggShell::StaticGetClass() */

long * ZombieDinoEggShell::StaticGetClass(void)

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
  uVar2 = ZombieBasic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieDinoEggShell",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieDinoEggShell::GetClass() const */

long * ZombieDinoEggShell::GetClass(void)

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
  uVar2 = ZombieBasic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieDinoEggShell",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieDinoEggShell::~ZombieDinoEggShell() */

void __thiscall ZombieDinoEggShell::~ZombieDinoEggShell(ZombieDinoEggShell *this)

{
  *(undefined ***)this = &PTR_GetClass_068f9b70;
  *(undefined ***)(this + 0x10) = &PTR__ZombieDinoEggShell_068fa598;
  ZombieBasic::~ZombieBasic((ZombieBasic *)this);
  return;
}


/* non-virtual thunk to ZombieDinoEggShell::~ZombieDinoEggShell() */

void __thiscall ZombieDinoEggShell::~ZombieDinoEggShell(ZombieDinoEggShell *this)

{
  ~ZombieDinoEggShell(this + -0x10);
  return;
}


/* ZombieDinoEggShell::~ZombieDinoEggShell() */

void __thiscall ZombieDinoEggShell::~ZombieDinoEggShell(ZombieDinoEggShell *this)

{
  ~ZombieDinoEggShell(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieDinoEggShell::~ZombieDinoEggShell() */

void __thiscall ZombieDinoEggShell::~ZombieDinoEggShell(ZombieDinoEggShell *this)

{
  ~ZombieDinoEggShell(this + -0x10);
  return;
}


/* ZombieDinoEggShell::ZombieDinoEggShell() */

void __thiscall ZombieDinoEggShell::ZombieDinoEggShell(ZombieDinoEggShell *this)

{
  ZombieBasic::ZombieBasic((ZombieBasic *)this);
  *(undefined ***)this = &PTR_GetClass_068f9b70;
  *(undefined ***)(this + 0x10) = &PTR__ZombieDinoEggShell_068fa598;
  return;
}


/* ZombieDinoEggShell::StaticNew() */

ZombieDinoEggShell * ZombieDinoEggShell::StaticNew(void)

{
  ZombieDinoEggShell *this;
  
  this = ::operator_new(0x810);
  ZombieDinoEggShell(this);
  return this;
}

