// Class: ModernStageProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ModernStageProperties::StaticClassInit() */

void ModernStageProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ModernStageProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03d02d1c,0x130,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ModernStageProperties::StaticGetClass() */

long * ModernStageProperties::StaticGetClass(void)

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
  uVar2 = StageModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"ModernStageProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ModernStageProperties::GetClass() const */

long * ModernStageProperties::GetClass(void)

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
  uVar2 = StageModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"ModernStageProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ModernStageProperties::GetModuleClass() const */

long * ModernStageProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (ModernStage::sClass != (long *)0x0) {
    return ModernStage::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  ModernStage::sClass = plVar1;
  uVar2 = StageModule::StaticGetClass();
  (*pcVar3)(plVar1,"ModernStage",uVar2,ModernStage::StaticNew);
  ModernStage::StaticClassInit();
  return ModernStage::sClass;
}


/* ModernStageProperties::ModernStageProperties() */

void __thiscall ModernStageProperties::ModernStageProperties(ModernStageProperties *this)

{
  StageModuleProperties::StageModuleProperties((StageModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06762d40;
  return;
}


/* ModernStageProperties::StaticNew() */

ModernStageProperties * ModernStageProperties::StaticNew(void)

{
  ModernStageProperties *this;
  
  this = ::operator_new(0x130);
  ModernStageProperties(this);
  return this;
}


/* ModernStageProperties::~ModernStageProperties() */

void __thiscall ModernStageProperties::~ModernStageProperties(ModernStageProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06762d40;
  StageModuleProperties::~StageModuleProperties((StageModuleProperties *)this);
  return;
}


/* ModernStageProperties::~ModernStageProperties() */

void __thiscall ModernStageProperties::~ModernStageProperties(ModernStageProperties *this)

{
  ~ModernStageProperties(this);
  AK::FreeHook(this);
  return;
}

