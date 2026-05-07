// Class: NewPVPStageProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPStageProperties::StaticClassInit() */

void NewPVPStageProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPVPStageProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_034b98ec,0x130,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPStageProperties::StaticGetClass() */

long * NewPVPStageProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPStageProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPStageProperties::GetClass() const */

long * NewPVPStageProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPStageProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPStageProperties::GetModuleClass() const */

long * NewPVPStageProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (NewPVPStage::sClass != (long *)0x0) {
    return NewPVPStage::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  NewPVPStage::sClass = plVar1;
  uVar2 = StageModule::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPStage",uVar2,NewPVPStage::StaticNew);
  NewPVPStage::StaticClassInit();
  return NewPVPStage::sClass;
}


/* NewPVPStageProperties::NewPVPStageProperties() */

void __thiscall NewPVPStageProperties::NewPVPStageProperties(NewPVPStageProperties *this)

{
  StageModuleProperties::StageModuleProperties((StageModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_066472d0;
  return;
}


/* NewPVPStageProperties::StaticNew() */

NewPVPStageProperties * NewPVPStageProperties::StaticNew(void)

{
  NewPVPStageProperties *this;
  
  this = ::operator_new(0x130);
  NewPVPStageProperties(this);
  return this;
}


/* NewPVPStageProperties::~NewPVPStageProperties() */

void __thiscall NewPVPStageProperties::~NewPVPStageProperties(NewPVPStageProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_066472d0;
  StageModuleProperties::~StageModuleProperties((StageModuleProperties *)this);
  return;
}


/* NewPVPStageProperties::~NewPVPStageProperties() */

void __thiscall NewPVPStageProperties::~NewPVPStageProperties(NewPVPStageProperties *this)

{
  ~NewPVPStageProperties(this);
  AK::FreeHook(this);
  return;
}

