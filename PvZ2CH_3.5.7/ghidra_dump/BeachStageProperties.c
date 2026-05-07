// Class: BeachStageProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeachStageProperties::StaticClassInit() */

void BeachStageProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"BeachStageProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03cf5334,0x130,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BeachStageProperties::StaticGetClass() */

long * BeachStageProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BeachStageProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BeachStageProperties::GetClass() const */

long * BeachStageProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"BeachStageProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BeachStageProperties::GetModuleClass() const */

long * BeachStageProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (BeachStage::sClass != (long *)0x0) {
    return BeachStage::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  BeachStage::sClass = plVar1;
  uVar2 = StageModule::StaticGetClass();
  (*pcVar3)(plVar1,"BeachStage",uVar2,BeachStage::StaticNew);
  BeachStage::StaticClassInit();
  return BeachStage::sClass;
}


/* BeachStageProperties::BeachStageProperties() */

void __thiscall BeachStageProperties::BeachStageProperties(BeachStageProperties *this)

{
  StageModuleProperties::StageModuleProperties((StageModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06761ab0;
  return;
}


/* BeachStageProperties::StaticNew() */

BeachStageProperties * BeachStageProperties::StaticNew(void)

{
  BeachStageProperties *this;
  
  this = ::operator_new(0x130);
  BeachStageProperties(this);
  return this;
}


/* BeachStageProperties::~BeachStageProperties() */

void __thiscall BeachStageProperties::~BeachStageProperties(BeachStageProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06761ab0;
  StageModuleProperties::~StageModuleProperties((StageModuleProperties *)this);
  return;
}


/* BeachStageProperties::~BeachStageProperties() */

void __thiscall BeachStageProperties::~BeachStageProperties(BeachStageProperties *this)

{
  ~BeachStageProperties(this);
  AK::FreeHook(this);
  return;
}

