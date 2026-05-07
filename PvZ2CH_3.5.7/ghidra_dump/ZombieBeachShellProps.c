// Class: ZombieBeachShellProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBeachShellProps::StaticClassInit() */

void ZombieBeachShellProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieBeachShellProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04638944,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieBeachShellProps::StaticGetClass() */

long * ZombieBeachShellProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieBeachShellProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieBeachShellProps::GetClass() const */

long * ZombieBeachShellProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieBeachShellProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieBeachShellProps::ZombieBeachShellProps() */

void __thiscall ZombieBeachShellProps::ZombieBeachShellProps(ZombieBeachShellProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06880280;
  Sexy::Insets::Insets((Insets *)(this + 0x218));
  Sexy::Insets::Insets((Insets *)(this + 0x228));
  *(undefined4 *)(this + 0x238) = 0;
  *(undefined4 *)(this + 0x210) = 0x3f400000;
  *(undefined4 *)(this + 0x214) = 0x42c80000;
  return;
}


/* ZombieBeachShellProps::StaticNew() */

ZombieBeachShellProps * ZombieBeachShellProps::StaticNew(void)

{
  ZombieBeachShellProps *this;
  
  this = ::operator_new(0x240);
  ZombieBeachShellProps(this);
  return this;
}


/* ZombieBeachShellProps::~ZombieBeachShellProps() */

void __thiscall ZombieBeachShellProps::~ZombieBeachShellProps(ZombieBeachShellProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06880280;
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieBeachShellProps::~ZombieBeachShellProps() */

void __thiscall ZombieBeachShellProps::~ZombieBeachShellProps(ZombieBeachShellProps *this)

{
  ~ZombieBeachShellProps(this);
  AK::FreeHook(this);
  return;
}

