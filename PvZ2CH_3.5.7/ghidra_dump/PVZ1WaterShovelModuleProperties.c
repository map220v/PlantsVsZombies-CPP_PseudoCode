// Class: PVZ1WaterShovelModuleProperties


/* PVZ1WaterShovelModuleProperties::GetModuleClass() const */

long * PVZ1WaterShovelModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (WaterShovelModule::sClass != (long *)0x0) {
    return WaterShovelModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  WaterShovelModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"WaterShovelModule",uVar2,WaterShovelModule::StaticNew);
  WaterShovelModule::StaticClassInit();
  return WaterShovelModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1WaterShovelModuleProperties::StaticClassInit() */

void PVZ1WaterShovelModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"PVZ1WaterShovelModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_038d3750,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1WaterShovelModuleProperties::StaticGetClass() */

long * PVZ1WaterShovelModuleProperties::StaticGetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"PVZ1WaterShovelModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZ1WaterShovelModuleProperties::GetClass() const */

long * PVZ1WaterShovelModuleProperties::GetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"PVZ1WaterShovelModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZ1WaterShovelModuleProperties::PVZ1WaterShovelModuleProperties() */

void __thiscall
PVZ1WaterShovelModuleProperties::PVZ1WaterShovelModuleProperties
          (PVZ1WaterShovelModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_066ba990;
  return;
}


/* PVZ1WaterShovelModuleProperties::StaticNew() */

PVZ1WaterShovelModuleProperties * PVZ1WaterShovelModuleProperties::StaticNew(void)

{
  PVZ1WaterShovelModuleProperties *this;
  
  this = ::operator_new(0x40);
  PVZ1WaterShovelModuleProperties(this);
  return this;
}


/* PVZ1WaterShovelModuleProperties::~PVZ1WaterShovelModuleProperties() */

void __thiscall
PVZ1WaterShovelModuleProperties::~PVZ1WaterShovelModuleProperties
          (PVZ1WaterShovelModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_066ba990;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* PVZ1WaterShovelModuleProperties::~PVZ1WaterShovelModuleProperties() */

void __thiscall
PVZ1WaterShovelModuleProperties::~PVZ1WaterShovelModuleProperties
          (PVZ1WaterShovelModuleProperties *this)

{
  ~PVZ1WaterShovelModuleProperties(this);
  AK::FreeHook(this);
  return;
}

