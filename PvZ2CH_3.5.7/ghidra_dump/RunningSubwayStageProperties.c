// Class: RunningSubwayStageProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningSubwayStageProperties::StaticClassInit() */

void RunningSubwayStageProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"RunningSubwayStageProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_033ea148,0x130,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RunningSubwayStageProperties::StaticGetClass() */

long * RunningSubwayStageProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RunningSubwayStageProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RunningSubwayStageProperties::GetClass() const */

long * RunningSubwayStageProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"RunningSubwayStageProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RunningSubwayStageProperties::GetModuleClass() const */

long * RunningSubwayStageProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (RunningSubwayStage::sClass != (long *)0x0) {
    return RunningSubwayStage::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  RunningSubwayStage::sClass = plVar1;
  uVar2 = StageModule::StaticGetClass();
  (*pcVar3)(plVar1,"RunningSubwayStage",uVar2,RunningSubwayStage::StaticNew);
  RunningSubwayStage::StaticClassInit();
  return RunningSubwayStage::sClass;
}


/* RunningSubwayStageProperties::RunningSubwayStageProperties() */

void __thiscall
RunningSubwayStageProperties::RunningSubwayStageProperties(RunningSubwayStageProperties *this)

{
  StageModuleProperties::StageModuleProperties((StageModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0661c070;
  return;
}


/* RunningSubwayStageProperties::StaticNew() */

RunningSubwayStageProperties * RunningSubwayStageProperties::StaticNew(void)

{
  RunningSubwayStageProperties *this;
  
  this = ::operator_new(0x130);
  RunningSubwayStageProperties(this);
  return this;
}


/* RunningSubwayStageProperties::~RunningSubwayStageProperties() */

void __thiscall
RunningSubwayStageProperties::~RunningSubwayStageProperties(RunningSubwayStageProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0661c070;
  StageModuleProperties::~StageModuleProperties((StageModuleProperties *)this);
  return;
}


/* RunningSubwayStageProperties::~RunningSubwayStageProperties() */

void __thiscall
RunningSubwayStageProperties::~RunningSubwayStageProperties(RunningSubwayStageProperties *this)

{
  ~RunningSubwayStageProperties(this);
  AK::FreeHook(this);
  return;
}

