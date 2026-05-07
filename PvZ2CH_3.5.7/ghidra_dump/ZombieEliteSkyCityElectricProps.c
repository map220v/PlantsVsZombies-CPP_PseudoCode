// Class: ZombieEliteSkyCityElectricProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEliteSkyCityElectricProps::StaticClassInit() */

void ZombieEliteSkyCityElectricProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieEliteSkyCityElectricProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04ef8d58,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieEliteSkyCityElectricProps::StaticGetClass() */

long * ZombieEliteSkyCityElectricProps::StaticGetClass(void)

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
  uVar2 = ZombieSkyCityElectricProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieEliteSkyCityElectricProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieEliteSkyCityElectricProps::GetClass() const */

long * ZombieEliteSkyCityElectricProps::GetClass(void)

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
  uVar2 = ZombieSkyCityElectricProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieEliteSkyCityElectricProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieEliteSkyCityElectricProps::ZombieEliteSkyCityElectricProps() */

void __thiscall
ZombieEliteSkyCityElectricProps::ZombieEliteSkyCityElectricProps
          (ZombieEliteSkyCityElectricProps *this)

{
  ZombieSkyCityElectricProps::ZombieSkyCityElectricProps((ZombieSkyCityElectricProps *)this);
  *(undefined4 *)(this + 0x23c) = 0x41f00000;
  *(undefined ***)this = &PTR_GetClass_06a08760;
  *(undefined4 *)(this + 0x238) = 0x43160000;
  return;
}


/* ZombieEliteSkyCityElectricProps::StaticNew() */

ZombieEliteSkyCityElectricProps * ZombieEliteSkyCityElectricProps::StaticNew(void)

{
  ZombieEliteSkyCityElectricProps *this;
  
  this = ::operator_new(0x240);
  ZombieEliteSkyCityElectricProps(this);
  return this;
}


/* ZombieEliteSkyCityElectricProps::~ZombieEliteSkyCityElectricProps() */

void __thiscall
ZombieEliteSkyCityElectricProps::~ZombieEliteSkyCityElectricProps
          (ZombieEliteSkyCityElectricProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06a08760;
  ZombieSkyCityElectricProps::~ZombieSkyCityElectricProps((ZombieSkyCityElectricProps *)this);
  return;
}


/* ZombieEliteSkyCityElectricProps::~ZombieEliteSkyCityElectricProps() */

void __thiscall
ZombieEliteSkyCityElectricProps::~ZombieEliteSkyCityElectricProps
          (ZombieEliteSkyCityElectricProps *this)

{
  ~ZombieEliteSkyCityElectricProps(this);
  AK::FreeHook(this);
  return;
}

