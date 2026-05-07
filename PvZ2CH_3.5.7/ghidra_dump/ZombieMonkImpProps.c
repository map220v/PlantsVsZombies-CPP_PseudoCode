// Class: ZombieMonkImpProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMonkImpProps::StaticClassInit() */

void ZombieMonkImpProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieMonkImpProps");
    (*pcVar2)(plVar1,asStack_10,FUN_046c1abc,0x220,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieMonkImpProps::ZombieMonkImpProps() */

void __thiscall ZombieMonkImpProps::ZombieMonkImpProps(ZombieMonkImpProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined4 *)(this + 0x210) = 6;
  *(undefined4 *)(this + 0x214) = 3;
  *(undefined ***)this = &PTR_GetClass_068b1150;
  *(undefined4 *)(this + 0x218) = 0x3f000000;
  return;
}


/* ZombieMonkImpProps::StaticNew() */

ZombieMonkImpProps * ZombieMonkImpProps::StaticNew(void)

{
  ZombieMonkImpProps *this;
  
  this = ::operator_new(0x220);
  ZombieMonkImpProps(this);
  return this;
}


/* ZombieMonkImpProps::~ZombieMonkImpProps() */

void __thiscall ZombieMonkImpProps::~ZombieMonkImpProps(ZombieMonkImpProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068b1150;
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieMonkImpProps::~ZombieMonkImpProps() */

void __thiscall ZombieMonkImpProps::~ZombieMonkImpProps(ZombieMonkImpProps *this)

{
  ~ZombieMonkImpProps(this);
  AK::FreeHook(this);
  return;
}


/* ZombieMonkImpProps::StaticGetClass() */

long * ZombieMonkImpProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieMonkImpProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieMonkImpProps::GetClass() const */

long * ZombieMonkImpProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieMonkImpProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

