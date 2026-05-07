// Class: ZombieLostCityLostPilotProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLostCityLostPilotProps::StaticClassInit() */

void ZombieLostCityLostPilotProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieLostCityLostPilotProps");
    (*pcVar2)(plVar1,asStack_10,FUN_047d6100,0x230,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieLostCityLostPilotProps::StaticGetClass() */

long * ZombieLostCityLostPilotProps::StaticGetClass(void)

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
  uVar2 = ZombieWithActionsProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieLostCityLostPilotProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieLostCityLostPilotProps::GetClass() const */

long * ZombieLostCityLostPilotProps::GetClass(void)

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
  uVar2 = ZombieWithActionsProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieLostCityLostPilotProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieLostCityLostPilotProps::ZombieLostCityLostPilotProps() */

void __thiscall
ZombieLostCityLostPilotProps::ZombieLostCityLostPilotProps(ZombieLostCityLostPilotProps *this)

{
  ZombieWithActionsProps::ZombieWithActionsProps((ZombieWithActionsProps *)this);
  *(undefined ***)this = &PTR_GetClass_068e8aa0;
  return;
}


/* ZombieLostCityLostPilotProps::StaticNew() */

ZombieLostCityLostPilotProps * ZombieLostCityLostPilotProps::StaticNew(void)

{
  ZombieLostCityLostPilotProps *this;
  
  this = ::operator_new(0x230);
  ZombieLostCityLostPilotProps(this);
  return this;
}


/* ZombieLostCityLostPilotProps::~ZombieLostCityLostPilotProps() */

void __thiscall
ZombieLostCityLostPilotProps::~ZombieLostCityLostPilotProps(ZombieLostCityLostPilotProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068e8aa0;
  ZombieWithActionsProps::~ZombieWithActionsProps((ZombieWithActionsProps *)this);
  return;
}


/* ZombieLostCityLostPilotProps::~ZombieLostCityLostPilotProps() */

void __thiscall
ZombieLostCityLostPilotProps::~ZombieLostCityLostPilotProps(ZombieLostCityLostPilotProps *this)

{
  ~ZombieLostCityLostPilotProps(this);
  AK::FreeHook(this);
  return;
}

