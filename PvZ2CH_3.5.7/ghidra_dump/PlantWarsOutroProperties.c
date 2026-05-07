// Class: PlantWarsOutroProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsOutroProperties::StaticClassInit() */

void PlantWarsOutroProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantWarsOutroProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_04d8ff40,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWarsOutroProperties::StaticGetClass() */

long * PlantWarsOutroProperties::StaticGetClass(void)

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
  uVar2 = OutroModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"PlantWarsOutroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWarsOutroProperties::GetClass() const */

long * PlantWarsOutroProperties::GetClass(void)

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
  uVar2 = OutroModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"PlantWarsOutroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWarsOutroProperties::GetModuleClass() const */

long * PlantWarsOutroProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (PlantWarsOutro::sClass != (long *)0x0) {
    return PlantWarsOutro::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  PlantWarsOutro::sClass = plVar1;
  uVar2 = OutroModule::StaticGetClass();
  (*pcVar3)(plVar1,"PlantWarsOutro",uVar2,PlantWarsOutro::StaticNew);
  PlantWarsOutro::StaticClassInit();
  return PlantWarsOutro::sClass;
}


/* PlantWarsOutroProperties::PlantWarsOutroProperties() */

void __thiscall PlantWarsOutroProperties::PlantWarsOutroProperties(PlantWarsOutroProperties *this)

{
  OutroModuleProperties::OutroModuleProperties((OutroModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_069bae00;
  return;
}


/* PlantWarsOutroProperties::StaticNew() */

PlantWarsOutroProperties * PlantWarsOutroProperties::StaticNew(void)

{
  PlantWarsOutroProperties *this;
  
  this = ::operator_new(0x40);
  PlantWarsOutroProperties(this);
  return this;
}


/* PlantWarsOutroProperties::~PlantWarsOutroProperties() */

void __thiscall PlantWarsOutroProperties::~PlantWarsOutroProperties(PlantWarsOutroProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_069bae00;
  OutroModuleProperties::~OutroModuleProperties((OutroModuleProperties *)this);
  return;
}


/* PlantWarsOutroProperties::~PlantWarsOutroProperties() */

void __thiscall PlantWarsOutroProperties::~PlantWarsOutroProperties(PlantWarsOutroProperties *this)

{
  ~PlantWarsOutroProperties(this);
  AK::FreeHook(this);
  return;
}

