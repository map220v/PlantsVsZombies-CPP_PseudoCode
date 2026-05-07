// Class: UnchartedModeSpringFestivalModuleProperties


/* UnchartedModeSpringFestivalModuleProperties::GetModuleClass() const */

long * UnchartedModeSpringFestivalModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (UnchartedModeSpringFestivalModule::sClass != (long *)0x0) {
    return UnchartedModeSpringFestivalModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  UnchartedModeSpringFestivalModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"UnchartedModeSpringFestivalModule",uVar2,
            UnchartedModeSpringFestivalModule::StaticNew);
  UnchartedModeSpringFestivalModule::StaticClassInit();
  return UnchartedModeSpringFestivalModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeSpringFestivalModuleProperties::StaticClassInit() */

void UnchartedModeSpringFestivalModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"UnchartedModeSpringFestivalModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_038347a8,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UnchartedModeSpringFestivalModuleProperties::StaticGetClass() */

long * UnchartedModeSpringFestivalModuleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"UnchartedModeSpringFestivalModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UnchartedModeSpringFestivalModuleProperties::GetClass() const */

long * UnchartedModeSpringFestivalModuleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"UnchartedModeSpringFestivalModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UnchartedModeSpringFestivalModuleProperties::UnchartedModeSpringFestivalModuleProperties() */

void __thiscall
UnchartedModeSpringFestivalModuleProperties::UnchartedModeSpringFestivalModuleProperties
          (UnchartedModeSpringFestivalModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_066a6b00;
  return;
}


/* UnchartedModeSpringFestivalModuleProperties::StaticNew() */

UnchartedModeSpringFestivalModuleProperties *
UnchartedModeSpringFestivalModuleProperties::StaticNew(void)

{
  UnchartedModeSpringFestivalModuleProperties *this;
  
  this = ::operator_new(0x40);
  UnchartedModeSpringFestivalModuleProperties(this);
  return this;
}


/* UnchartedModeSpringFestivalModuleProperties::~UnchartedModeSpringFestivalModuleProperties() */

void __thiscall
UnchartedModeSpringFestivalModuleProperties::~UnchartedModeSpringFestivalModuleProperties
          (UnchartedModeSpringFestivalModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_066a6b00;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* UnchartedModeSpringFestivalModuleProperties::~UnchartedModeSpringFestivalModuleProperties() */

void __thiscall
UnchartedModeSpringFestivalModuleProperties::~UnchartedModeSpringFestivalModuleProperties
          (UnchartedModeSpringFestivalModuleProperties *this)

{
  ~UnchartedModeSpringFestivalModuleProperties(this);
  AK::FreeHook(this);
  return;
}

