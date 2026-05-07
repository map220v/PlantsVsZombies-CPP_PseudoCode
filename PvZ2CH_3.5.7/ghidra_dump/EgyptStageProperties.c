// Class: EgyptStageProperties


/* EgyptStageProperties::GetModuleClass() const */

long * EgyptStageProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (EgyptStage::sClass != (long *)0x0) {
    return EgyptStage::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  EgyptStage::sClass = plVar1;
  uVar2 = StageModule::StaticGetClass();
  (*pcVar3)(plVar1,"EgyptStage",uVar2,EgyptStage::StaticNew);
  EgyptStage::StaticClassInit();
  return EgyptStage::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EgyptStageProperties::StaticClassInit() */

void EgyptStageProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"EgyptStageProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03ce0ef0,0x130,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EgyptStageProperties::StaticGetClass() */

long * EgyptStageProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EgyptStageProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EgyptStageProperties::GetClass() const */

long * EgyptStageProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"EgyptStageProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EgyptStageProperties::EgyptStageProperties() */

void __thiscall EgyptStageProperties::EgyptStageProperties(EgyptStageProperties *this)

{
  StageModuleProperties::StageModuleProperties((StageModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_067609c0;
  return;
}


/* EgyptStageProperties::StaticNew() */

EgyptStageProperties * EgyptStageProperties::StaticNew(void)

{
  EgyptStageProperties *this;
  
  this = ::operator_new(0x130);
  EgyptStageProperties(this);
  return this;
}


/* EgyptStageProperties::~EgyptStageProperties() */

void __thiscall EgyptStageProperties::~EgyptStageProperties(EgyptStageProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_067609c0;
  StageModuleProperties::~StageModuleProperties((StageModuleProperties *)this);
  return;
}


/* EgyptStageProperties::~EgyptStageProperties() */

void __thiscall EgyptStageProperties::~EgyptStageProperties(EgyptStageProperties *this)

{
  ~EgyptStageProperties(this);
  AK::FreeHook(this);
  return;
}

