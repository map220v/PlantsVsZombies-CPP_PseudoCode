// Class: ZombieSkyCityElectricProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkyCityElectricProps::StaticClassInit() */

void ZombieSkyCityElectricProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieSkyCityElectricProps");
    (*pcVar2)(plVar1,asStack_10,FUN_047a5ff0,0x238,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSkyCityElectricProps::StaticGetClass() */

long * ZombieSkyCityElectricProps::StaticGetClass(void)

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
  uVar2 = ZombieSkyCityProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieSkyCityElectricProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSkyCityElectricProps::GetClass() const */

long * ZombieSkyCityElectricProps::GetClass(void)

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
  uVar2 = ZombieSkyCityProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieSkyCityElectricProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSkyCityElectricProps::ZombieSkyCityElectricProps() */

void __thiscall
ZombieSkyCityElectricProps::ZombieSkyCityElectricProps(ZombieSkyCityElectricProps *this)

{
  ZombieSkyCityProps::ZombieSkyCityProps((ZombieSkyCityProps *)this);
  *(undefined ***)this = &PTR_GetClass_068df670;
  return;
}


/* ZombieSkyCityElectricProps::StaticNew() */

ZombieSkyCityElectricProps * ZombieSkyCityElectricProps::StaticNew(void)

{
  ZombieSkyCityElectricProps *this;
  
  this = ::operator_new(0x238);
  ZombieSkyCityElectricProps(this);
  return this;
}


/* ZombieSkyCityElectricProps::~ZombieSkyCityElectricProps() */

void __thiscall
ZombieSkyCityElectricProps::~ZombieSkyCityElectricProps(ZombieSkyCityElectricProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068df670;
  ZombieSkyCityProps::~ZombieSkyCityProps((ZombieSkyCityProps *)this);
  return;
}


/* ZombieSkyCityElectricProps::~ZombieSkyCityElectricProps() */

void __thiscall
ZombieSkyCityElectricProps::~ZombieSkyCityElectricProps(ZombieSkyCityElectricProps *this)

{
  ~ZombieSkyCityElectricProps(this);
  AK::FreeHook(this);
  return;
}

