// Class: ZombieIceAgeSkiProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceAgeSkiProps::StaticClassInit() */

void ZombieIceAgeSkiProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieIceAgeSkiProps");
    (*pcVar2)(plVar1,asStack_10,FUN_047733e4,0x228,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieIceAgeSkiProps::StaticGetClass() */

long * ZombieIceAgeSkiProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieIceAgeSkiProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieIceAgeSkiProps::GetClass() const */

long * ZombieIceAgeSkiProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieIceAgeSkiProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieIceAgeSkiProps::ZombieIceAgeSkiProps() */

void __thiscall ZombieIceAgeSkiProps::ZombieIceAgeSkiProps(ZombieIceAgeSkiProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_068d5e00;
  return;
}


/* ZombieIceAgeSkiProps::StaticNew() */

ZombieIceAgeSkiProps * ZombieIceAgeSkiProps::StaticNew(void)

{
  ZombieIceAgeSkiProps *this;
  
  this = ::operator_new(0x228);
  ZombieIceAgeSkiProps(this);
  return this;
}


/* ZombieIceAgeSkiProps::~ZombieIceAgeSkiProps() */

void __thiscall ZombieIceAgeSkiProps::~ZombieIceAgeSkiProps(ZombieIceAgeSkiProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068d5e00;
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieIceAgeSkiProps::~ZombieIceAgeSkiProps() */

void __thiscall ZombieIceAgeSkiProps::~ZombieIceAgeSkiProps(ZombieIceAgeSkiProps *this)

{
  ~ZombieIceAgeSkiProps(this);
  AK::FreeHook(this);
  return;
}

