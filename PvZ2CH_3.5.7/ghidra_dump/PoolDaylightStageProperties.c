// Class: PoolDaylightStageProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PoolDaylightStageProperties::StaticClassInit() */

void PoolDaylightStageProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"PoolDaylightStageProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03f1d5d8,0x130,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PoolDaylightStageProperties::StaticGetClass() */

long * PoolDaylightStageProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PoolDaylightStageProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PoolDaylightStageProperties::GetClass() const */

long * PoolDaylightStageProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"PoolDaylightStageProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PoolDaylightStageProperties::GetModuleClass() const */

long * PoolDaylightStageProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (PoolDaylightStage::sClass != (long *)0x0) {
    return PoolDaylightStage::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  PoolDaylightStage::sClass = plVar1;
  uVar2 = StageModule::StaticGetClass();
  (*pcVar3)(plVar1,"PoolDaylightStage",uVar2,PoolDaylightStage::StaticNew);
  PoolDaylightStage::StaticClassInit();
  return PoolDaylightStage::sClass;
}


/* PoolDaylightStageProperties::PoolDaylightStageProperties() */

void __thiscall
PoolDaylightStageProperties::PoolDaylightStageProperties(PoolDaylightStageProperties *this)

{
  StageModuleProperties::StageModuleProperties((StageModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06797080;
  return;
}


/* PoolDaylightStageProperties::StaticNew() */

PoolDaylightStageProperties * PoolDaylightStageProperties::StaticNew(void)

{
  PoolDaylightStageProperties *this;
  
  this = ::operator_new(0x130);
  PoolDaylightStageProperties(this);
  return this;
}


/* PoolDaylightStageProperties::~PoolDaylightStageProperties() */

void __thiscall
PoolDaylightStageProperties::~PoolDaylightStageProperties(PoolDaylightStageProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06797080;
  StageModuleProperties::~StageModuleProperties((StageModuleProperties *)this);
  return;
}


/* PoolDaylightStageProperties::~PoolDaylightStageProperties() */

void __thiscall
PoolDaylightStageProperties::~PoolDaylightStageProperties(PoolDaylightStageProperties *this)

{
  ~PoolDaylightStageProperties(this);
  AK::FreeHook(this);
  return;
}

