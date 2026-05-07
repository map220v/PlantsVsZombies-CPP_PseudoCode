// Class: DarkStageProperties


/* DarkStageProperties::GetModuleClass() const */

long * DarkStageProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (DarkStage::sClass != (long *)0x0) {
    return DarkStage::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  DarkStage::sClass = plVar1;
  uVar2 = StageModule::StaticGetClass();
  (*pcVar3)(plVar1,"DarkStage",uVar2,DarkStage::StaticNew);
  DarkStage::StaticClassInit();
  return DarkStage::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DarkStageProperties::StaticClassInit() */

void DarkStageProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"DarkStageProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03cf4924,0x138,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DarkStageProperties::StaticGetClass() */

long * DarkStageProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DarkStageProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DarkStageProperties::GetClass() const */

long * DarkStageProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"DarkStageProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DarkStageProperties::DarkStageProperties() */

void __thiscall DarkStageProperties::DarkStageProperties(DarkStageProperties *this)

{
  StageModuleProperties::StageModuleProperties((StageModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06761a00;
  Set8BytesTo0(this + 0x130);
  return;
}


/* DarkStageProperties::StaticNew() */

DarkStageProperties * DarkStageProperties::StaticNew(void)

{
  DarkStageProperties *this;
  
  this = ::operator_new(0x138);
  DarkStageProperties(this);
  return this;
}


/* DarkStageProperties::~DarkStageProperties() */

void __thiscall DarkStageProperties::~DarkStageProperties(DarkStageProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06761a00;
  std::string::~string((string *)(this + 0x130));
  StageModuleProperties::~StageModuleProperties((StageModuleProperties *)this);
  return;
}


/* DarkStageProperties::~DarkStageProperties() */

void __thiscall DarkStageProperties::~DarkStageProperties(DarkStageProperties *this)

{
  ~DarkStageProperties(this);
  AK::FreeHook(this);
  return;
}

