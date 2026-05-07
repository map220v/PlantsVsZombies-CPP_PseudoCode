// Class: UnchartedModeSpringFestivalSeedBankProperties


/* UnchartedModeSpringFestivalSeedBankProperties::GetModuleClass() const */

long * UnchartedModeSpringFestivalSeedBankProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (UnchartedModeSpringFestivalSeedBankModule::sClass != (long *)0x0) {
    return UnchartedModeSpringFestivalSeedBankModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  UnchartedModeSpringFestivalSeedBankModule::sClass = plVar1;
  uVar2 = SeedBankModule::StaticGetClass();
  (*pcVar3)(plVar1,"UnchartedModeSpringFestivalSeedBankModule",uVar2,
            UnchartedModeSpringFestivalSeedBankModule::StaticNew);
  UnchartedModeSpringFestivalSeedBankModule::StaticClassInit();
  return UnchartedModeSpringFestivalSeedBankModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeSpringFestivalSeedBankProperties::StaticClassInit() */

void UnchartedModeSpringFestivalSeedBankProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"UnchartedModeSpringFestivalSeedBankProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03834380,0xd0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UnchartedModeSpringFestivalSeedBankProperties::StaticGetClass() */

long * UnchartedModeSpringFestivalSeedBankProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"UnchartedModeSpringFestivalSeedBankProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UnchartedModeSpringFestivalSeedBankProperties::GetClass() const */

long * UnchartedModeSpringFestivalSeedBankProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"UnchartedModeSpringFestivalSeedBankProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UnchartedModeSpringFestivalSeedBankProperties::UnchartedModeSpringFestivalSeedBankProperties() */

void __thiscall
UnchartedModeSpringFestivalSeedBankProperties::UnchartedModeSpringFestivalSeedBankProperties
          (UnchartedModeSpringFestivalSeedBankProperties *this)

{
  SeedBankProperties::SeedBankProperties((SeedBankProperties *)this);
  *(undefined ***)this = &PTR_GetClass_066a6990;
  return;
}


/* UnchartedModeSpringFestivalSeedBankProperties::StaticNew() */

UnchartedModeSpringFestivalSeedBankProperties *
UnchartedModeSpringFestivalSeedBankProperties::StaticNew(void)

{
  UnchartedModeSpringFestivalSeedBankProperties *this;
  
  this = ::operator_new(0xd0);
  UnchartedModeSpringFestivalSeedBankProperties(this);
  return this;
}


/* UnchartedModeSpringFestivalSeedBankProperties::~UnchartedModeSpringFestivalSeedBankProperties()
    */

void __thiscall
UnchartedModeSpringFestivalSeedBankProperties::~UnchartedModeSpringFestivalSeedBankProperties
          (UnchartedModeSpringFestivalSeedBankProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_066a6990;
  SeedBankProperties::~SeedBankProperties((SeedBankProperties *)this);
  return;
}


/* UnchartedModeSpringFestivalSeedBankProperties::~UnchartedModeSpringFestivalSeedBankProperties()
    */

void __thiscall
UnchartedModeSpringFestivalSeedBankProperties::~UnchartedModeSpringFestivalSeedBankProperties
          (UnchartedModeSpringFestivalSeedBankProperties *this)

{
  ~UnchartedModeSpringFestivalSeedBankProperties(this);
  AK::FreeHook(this);
  return;
}

