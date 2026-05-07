// Class: FrontLawnStageProperties


/* FrontLawnStageProperties::GetModuleClass() const */

long * FrontLawnStageProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (FrontLawnStage::sClass != (long *)0x0) {
    return FrontLawnStage::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  FrontLawnStage::sClass = plVar1;
  uVar2 = StageModule::StaticGetClass();
  (*pcVar3)(plVar1,"FrontLawnStage",uVar2,FrontLawnStage::StaticNew);
  FrontLawnStage::StaticClassInit();
  return FrontLawnStage::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FrontLawnStageProperties::StaticClassInit() */

void FrontLawnStageProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"FrontLawnStageProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_049d0f54,0x130,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FrontLawnStageProperties::StaticGetClass() */

long * FrontLawnStageProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"FrontLawnStageProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FrontLawnStageProperties::GetClass() const */

long * FrontLawnStageProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"FrontLawnStageProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FrontLawnStageProperties::FrontLawnStageProperties() */

void __thiscall FrontLawnStageProperties::FrontLawnStageProperties(FrontLawnStageProperties *this)

{
  StageModuleProperties::StageModuleProperties((StageModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06928e40;
  return;
}


/* FrontLawnStageProperties::StaticNew() */

FrontLawnStageProperties * FrontLawnStageProperties::StaticNew(void)

{
  FrontLawnStageProperties *this;
  
  this = ::operator_new(0x130);
  FrontLawnStageProperties(this);
  return this;
}


/* FrontLawnStageProperties::~FrontLawnStageProperties() */

void __thiscall FrontLawnStageProperties::~FrontLawnStageProperties(FrontLawnStageProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06928e40;
  StageModuleProperties::~StageModuleProperties((StageModuleProperties *)this);
  return;
}


/* FrontLawnStageProperties::~FrontLawnStageProperties() */

void __thiscall FrontLawnStageProperties::~FrontLawnStageProperties(FrontLawnStageProperties *this)

{
  ~FrontLawnStageProperties(this);
  AK::FreeHook(this);
  return;
}

