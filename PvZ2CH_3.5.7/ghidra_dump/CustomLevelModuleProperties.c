// Class: CustomLevelModuleProperties


/* CustomLevelModuleProperties::GetModuleClass() const */

long * CustomLevelModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (CustomLevelModule::sClass != (long *)0x0) {
    return CustomLevelModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  CustomLevelModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"CustomLevelModule",uVar2,CustomLevelModule::StaticNew);
  CustomLevelModule::StaticClassInit();
  return CustomLevelModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelModuleProperties::StaticClassInit() */

void CustomLevelModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"CustomLevelModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_035e094c,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelModuleProperties::StaticGetClass() */

long * CustomLevelModuleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CustomLevelModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CustomLevelModuleProperties::GetClass() const */

long * CustomLevelModuleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"CustomLevelModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CustomLevelModuleProperties::CustomLevelModuleProperties() */

void __thiscall
CustomLevelModuleProperties::CustomLevelModuleProperties(CustomLevelModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0665ed70;
  return;
}


/* CustomLevelModuleProperties::StaticNew() */

CustomLevelModuleProperties * CustomLevelModuleProperties::StaticNew(void)

{
  CustomLevelModuleProperties *this;
  
  this = ::operator_new(0x40);
  CustomLevelModuleProperties(this);
  return this;
}


/* CustomLevelModuleProperties::~CustomLevelModuleProperties() */

void __thiscall
CustomLevelModuleProperties::~CustomLevelModuleProperties(CustomLevelModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0665ed70;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* CustomLevelModuleProperties::~CustomLevelModuleProperties() */

void __thiscall
CustomLevelModuleProperties::~CustomLevelModuleProperties(CustomLevelModuleProperties *this)

{
  ~CustomLevelModuleProperties(this);
  AK::FreeHook(this);
  return;
}

