// Class: PlantWarsSeedBankModuleProperties


/* PlantWarsSeedBankModuleProperties::GetModuleClass() const */

long * PlantWarsSeedBankModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (PlantWarsSeedBankModule::sClass != (long *)0x0) {
    return PlantWarsSeedBankModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  PlantWarsSeedBankModule::sClass = plVar1;
  uVar2 = SeedBankModule::StaticGetClass();
  (*pcVar3)(plVar1,"PlantWarsSeedBankModule",uVar2,PlantWarsSeedBankModule::StaticNew);
  PlantWarsSeedBankModule::StaticClassInit();
  return PlantWarsSeedBankModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsSeedBankModuleProperties::StaticClassInit() */

void PlantWarsSeedBankModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantWarsSeedBankModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_04d8fd2c,0xd0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWarsSeedBankModuleProperties::StaticGetClass() */

long * PlantWarsSeedBankModuleProperties::StaticGetClass(void)

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
  uVar2 = SeedBankProperties::StaticGetClass();
  (*pcVar3)(plVar1,"PlantWarsSeedBankModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWarsSeedBankModuleProperties::GetClass() const */

long * PlantWarsSeedBankModuleProperties::GetClass(void)

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
  uVar2 = SeedBankProperties::StaticGetClass();
  (*pcVar3)(plVar1,"PlantWarsSeedBankModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWarsSeedBankModuleProperties::PlantWarsSeedBankModuleProperties() */

void __thiscall
PlantWarsSeedBankModuleProperties::PlantWarsSeedBankModuleProperties
          (PlantWarsSeedBankModuleProperties *this)

{
  SeedBankProperties::SeedBankProperties((SeedBankProperties *)this);
  *(undefined ***)this = &PTR_GetClass_069bad40;
  return;
}


/* PlantWarsSeedBankModuleProperties::StaticNew() */

PlantWarsSeedBankModuleProperties * PlantWarsSeedBankModuleProperties::StaticNew(void)

{
  PlantWarsSeedBankModuleProperties *this;
  
  this = ::operator_new(0xd0);
  PlantWarsSeedBankModuleProperties(this);
  return this;
}


/* PlantWarsSeedBankModuleProperties::~PlantWarsSeedBankModuleProperties() */

void __thiscall
PlantWarsSeedBankModuleProperties::~PlantWarsSeedBankModuleProperties
          (PlantWarsSeedBankModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_069bad40;
  SeedBankProperties::~SeedBankProperties((SeedBankProperties *)this);
  return;
}


/* PlantWarsSeedBankModuleProperties::~PlantWarsSeedBankModuleProperties() */

void __thiscall
PlantWarsSeedBankModuleProperties::~PlantWarsSeedBankModuleProperties
          (PlantWarsSeedBankModuleProperties *this)

{
  ~PlantWarsSeedBankModuleProperties(this);
  AK::FreeHook(this);
  return;
}

