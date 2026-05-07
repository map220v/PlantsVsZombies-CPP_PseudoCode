// Class: PlantWarsModuleProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsModuleProperties::StaticClassInit() */

void PlantWarsModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantWarsModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_04d8f670,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWarsModuleProperties::StaticGetClass() */

long * PlantWarsModuleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantWarsModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWarsModuleProperties::GetClass() const */

long * PlantWarsModuleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantWarsModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWarsModuleProperties::GetModuleClass() const */

long * PlantWarsModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (PlantWarsModule::sClass != (long *)0x0) {
    return PlantWarsModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  PlantWarsModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"PlantWarsModule",uVar2,PlantWarsModule::StaticNew);
  PlantWarsModule::StaticClassInit();
  return PlantWarsModule::sClass;
}


/* PlantWarsModuleProperties::PlantWarsModuleProperties() */

void __thiscall
PlantWarsModuleProperties::PlantWarsModuleProperties(PlantWarsModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_069bab00;
  *(undefined4 *)(this + 0x40) = 0x42700000;
  return;
}


/* PlantWarsModuleProperties::StaticNew() */

PlantWarsModuleProperties * PlantWarsModuleProperties::StaticNew(void)

{
  PlantWarsModuleProperties *this;
  
  this = ::operator_new(0x48);
  PlantWarsModuleProperties(this);
  return this;
}


/* PlantWarsModuleProperties::~PlantWarsModuleProperties() */

void __thiscall
PlantWarsModuleProperties::~PlantWarsModuleProperties(PlantWarsModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_069bab00;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* PlantWarsModuleProperties::~PlantWarsModuleProperties() */

void __thiscall
PlantWarsModuleProperties::~PlantWarsModuleProperties(PlantWarsModuleProperties *this)

{
  ~PlantWarsModuleProperties(this);
  AK::FreeHook(this);
  return;
}

