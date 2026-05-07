// Class: ZombieLostCityRelicHunterProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLostCityRelicHunterProps::StaticClassInit() */

void ZombieLostCityRelicHunterProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieLostCityRelicHunterProps");
    (*pcVar2)(plVar1,asStack_10,FUN_047d7fd0,0x218,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieLostCityRelicHunterProps::StaticGetClass() */

long * ZombieLostCityRelicHunterProps::StaticGetClass(void)

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
  uVar2 = ZombieSwashbucklerProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieLostCityRelicHunterProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieLostCityRelicHunterProps::GetClass() const */

long * ZombieLostCityRelicHunterProps::GetClass(void)

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
  uVar2 = ZombieSwashbucklerProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieLostCityRelicHunterProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieLostCityRelicHunterProps::ZombieLostCityRelicHunterProps() */

void __thiscall
ZombieLostCityRelicHunterProps::ZombieLostCityRelicHunterProps(ZombieLostCityRelicHunterProps *this)

{
  ZombieSwashbucklerProps::ZombieSwashbucklerProps((ZombieSwashbucklerProps *)this);
  *(undefined ***)this = &PTR_GetClass_068e9910;
  return;
}


/* ZombieLostCityRelicHunterProps::StaticNew() */

ZombieLostCityRelicHunterProps * ZombieLostCityRelicHunterProps::StaticNew(void)

{
  ZombieLostCityRelicHunterProps *this;
  
  this = ::operator_new(0x218);
  ZombieLostCityRelicHunterProps(this);
  return this;
}


/* ZombieLostCityRelicHunterProps::~ZombieLostCityRelicHunterProps() */

void __thiscall
ZombieLostCityRelicHunterProps::~ZombieLostCityRelicHunterProps
          (ZombieLostCityRelicHunterProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068e9910;
  ZombieSwashbucklerProps::~ZombieSwashbucklerProps((ZombieSwashbucklerProps *)this);
  return;
}


/* ZombieLostCityRelicHunterProps::~ZombieLostCityRelicHunterProps() */

void __thiscall
ZombieLostCityRelicHunterProps::~ZombieLostCityRelicHunterProps
          (ZombieLostCityRelicHunterProps *this)

{
  ~ZombieLostCityRelicHunterProps(this);
  AK::FreeHook(this);
  return;
}

