// Class: EightiesStageProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EightiesStageProperties::StaticClassInit() */

void EightiesStageProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"EightiesStageProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03d01524,0x130,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EightiesStageProperties::StaticGetClass() */

long * EightiesStageProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EightiesStageProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EightiesStageProperties::GetClass() const */

long * EightiesStageProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"EightiesStageProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EightiesStageProperties::GetModuleClass() const */

long * EightiesStageProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (EightiesStage::sClass != (long *)0x0) {
    return EightiesStage::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  EightiesStage::sClass = plVar1;
  uVar2 = StageModule::StaticGetClass();
  (*pcVar3)(plVar1,"EightiesStage",uVar2,EightiesStage::StaticNew);
  EightiesStage::StaticClassInit();
  return EightiesStage::sClass;
}


/* EightiesStageProperties::EightiesStageProperties() */

void __thiscall EightiesStageProperties::EightiesStageProperties(EightiesStageProperties *this)

{
  StageModuleProperties::StageModuleProperties((StageModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06762850;
  return;
}


/* EightiesStageProperties::StaticNew() */

EightiesStageProperties * EightiesStageProperties::StaticNew(void)

{
  EightiesStageProperties *this;
  
  this = ::operator_new(0x130);
  EightiesStageProperties(this);
  return this;
}


/* EightiesStageProperties::~EightiesStageProperties() */

void __thiscall EightiesStageProperties::~EightiesStageProperties(EightiesStageProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06762850;
  StageModuleProperties::~StageModuleProperties((StageModuleProperties *)this);
  return;
}


/* EightiesStageProperties::~EightiesStageProperties() */

void __thiscall EightiesStageProperties::~EightiesStageProperties(EightiesStageProperties *this)

{
  ~EightiesStageProperties(this);
  AK::FreeHook(this);
  return;
}

