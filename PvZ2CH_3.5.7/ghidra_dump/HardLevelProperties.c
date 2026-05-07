// Class: HardLevelProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HardLevelProperties::StaticClassInit() */

void HardLevelProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"HardLevelProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_04960248,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HardLevelProperties::StaticGetClass() */

long * HardLevelProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HardLevelProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HardLevelProperties::GetClass() const */

long * HardLevelProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"HardLevelProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HardLevelProperties::GetModuleClass() const */

long * HardLevelProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (HardLevelModule::sClass != (long *)0x0) {
    return HardLevelModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  HardLevelModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"HardLevelModule",uVar2,HardLevelModule::StaticNew);
  HardLevelModule::StaticClassInit();
  return HardLevelModule::sClass;
}


/* HardLevelProperties::HardLevelProperties() */

void __thiscall HardLevelProperties::HardLevelProperties(HardLevelProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06915a40;
  return;
}


/* HardLevelProperties::StaticNew() */

HardLevelProperties * HardLevelProperties::StaticNew(void)

{
  HardLevelProperties *this;
  
  this = ::operator_new(0x40);
  HardLevelProperties(this);
  return this;
}


/* HardLevelProperties::~HardLevelProperties() */

void __thiscall HardLevelProperties::~HardLevelProperties(HardLevelProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06915a40;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* HardLevelProperties::~HardLevelProperties() */

void __thiscall HardLevelProperties::~HardLevelProperties(HardLevelProperties *this)

{
  ~HardLevelProperties(this);
  AK::FreeHook(this);
  return;
}

