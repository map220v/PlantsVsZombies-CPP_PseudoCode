// Class: IceAgeStageProperties


/* IceAgeStageProperties::GetModuleClass() const */

long * IceAgeStageProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (IceAgeStage::sClass != (long *)0x0) {
    return IceAgeStage::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  IceAgeStage::sClass = plVar1;
  uVar2 = StageModule::StaticGetClass();
  (*pcVar3)(plVar1,"IceAgeStage",uVar2,IceAgeStage::StaticNew);
  IceAgeStage::StaticClassInit();
  return IceAgeStage::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IceAgeStageProperties::StaticClassInit() */

void IceAgeStageProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"IceAgeStageProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03cf7874,0x130,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IceAgeStageProperties::StaticGetClass() */

long * IceAgeStageProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"IceAgeStageProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IceAgeStageProperties::GetClass() const */

long * IceAgeStageProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"IceAgeStageProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IceAgeStageProperties::IceAgeStageProperties() */

void __thiscall IceAgeStageProperties::IceAgeStageProperties(IceAgeStageProperties *this)

{
  StageModuleProperties::StageModuleProperties((StageModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06761ef0;
  return;
}


/* IceAgeStageProperties::StaticNew() */

IceAgeStageProperties * IceAgeStageProperties::StaticNew(void)

{
  IceAgeStageProperties *this;
  
  this = ::operator_new(0x130);
  IceAgeStageProperties(this);
  return this;
}


/* IceAgeStageProperties::~IceAgeStageProperties() */

void __thiscall IceAgeStageProperties::~IceAgeStageProperties(IceAgeStageProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06761ef0;
  StageModuleProperties::~StageModuleProperties((StageModuleProperties *)this);
  return;
}


/* IceAgeStageProperties::~IceAgeStageProperties() */

void __thiscall IceAgeStageProperties::~IceAgeStageProperties(IceAgeStageProperties *this)

{
  ~IceAgeStageProperties(this);
  AK::FreeHook(this);
  return;
}

