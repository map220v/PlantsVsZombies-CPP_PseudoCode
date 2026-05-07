// Class: PlantTrialProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTrialProperties::StaticClassInit() */

void PlantTrialProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantTrialProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_0496471c,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTrialProperties::StaticGetClass() */

long * PlantTrialProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantTrialProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantTrialProperties::GetClass() const */

long * PlantTrialProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantTrialProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantTrialProperties::GetModuleClass() const */

long * PlantTrialProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (PlantTrialModule::sClass != (long *)0x0) {
    return PlantTrialModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  PlantTrialModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"PlantTrialModule",uVar2,PlantTrialModule::StaticNew);
  PlantTrialModule::StaticClassInit();
  return PlantTrialModule::sClass;
}


/* PlantTrialProperties::PlantTrialProperties() */

void __thiscall PlantTrialProperties::PlantTrialProperties(PlantTrialProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06915c60;
  return;
}


/* PlantTrialProperties::StaticNew() */

PlantTrialProperties * PlantTrialProperties::StaticNew(void)

{
  PlantTrialProperties *this;
  
  this = ::operator_new(0x40);
  PlantTrialProperties(this);
  return this;
}


/* PlantTrialProperties::~PlantTrialProperties() */

void __thiscall PlantTrialProperties::~PlantTrialProperties(PlantTrialProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06915c60;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* PlantTrialProperties::~PlantTrialProperties() */

void __thiscall PlantTrialProperties::~PlantTrialProperties(PlantTrialProperties *this)

{
  ~PlantTrialProperties(this);
  AK::FreeHook(this);
  return;
}

