// Class: ZombieMonkDrinkProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMonkDrinkProps::StaticClassInit() */

void ZombieMonkDrinkProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieMonkDrinkProps");
    (*pcVar2)(plVar1,asStack_10,FUN_046c1208,0x238,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieMonkDrinkProps::ZombieMonkDrinkProps() */

void __thiscall ZombieMonkDrinkProps::ZombieMonkDrinkProps(ZombieMonkDrinkProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_068b0fa0;
  Sexy::Insets::Insets((Insets *)(this + 0x224));
  *(undefined4 *)(this + 0x21c) = 0;
  *(undefined4 *)(this + 0x210) = 0x3f400000;
  *(undefined4 *)(this + 0x214) = 0x3f400000;
  *(undefined4 *)(this + 0x218) = 0x43480000;
  *(undefined4 *)(this + 0x220) = 0;
  return;
}


/* ZombieMonkDrinkProps::StaticNew() */

ZombieMonkDrinkProps * ZombieMonkDrinkProps::StaticNew(void)

{
  ZombieMonkDrinkProps *this;
  
  this = ::operator_new(0x238);
  ZombieMonkDrinkProps(this);
  return this;
}


/* ZombieMonkDrinkProps::~ZombieMonkDrinkProps() */

void __thiscall ZombieMonkDrinkProps::~ZombieMonkDrinkProps(ZombieMonkDrinkProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068b0fa0;
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieMonkDrinkProps::~ZombieMonkDrinkProps() */

void __thiscall ZombieMonkDrinkProps::~ZombieMonkDrinkProps(ZombieMonkDrinkProps *this)

{
  ~ZombieMonkDrinkProps(this);
  AK::FreeHook(this);
  return;
}


/* ZombieMonkDrinkProps::StaticGetClass() */

long * ZombieMonkDrinkProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieMonkDrinkProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieMonkDrinkProps::GetClass() const */

long * ZombieMonkDrinkProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieMonkDrinkProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

