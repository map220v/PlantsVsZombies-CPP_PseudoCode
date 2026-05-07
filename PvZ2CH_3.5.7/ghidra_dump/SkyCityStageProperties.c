// Class: SkyCityStageProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkyCityStageProperties::StaticClassInit() */

void SkyCityStageProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"SkyCityStageProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03cf8648,0x158,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SkyCityStageProperties::StaticGetClass() */

long * SkyCityStageProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SkyCityStageProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SkyCityStageProperties::GetClass() const */

long * SkyCityStageProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"SkyCityStageProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SkyCityStageProperties::GetModuleClass() const */

long * SkyCityStageProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (SkyCityStage::sClass != (long *)0x0) {
    return SkyCityStage::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  SkyCityStage::sClass = plVar1;
  uVar2 = StageModule::StaticGetClass();
  (*pcVar3)(plVar1,"SkyCityStage",uVar2,SkyCityStage::StaticNew);
  SkyCityStage::StaticClassInit();
  return SkyCityStage::sClass;
}


/* SkyCityStageProperties::SkyCityStageProperties() */

void __thiscall SkyCityStageProperties::SkyCityStageProperties(SkyCityStageProperties *this)

{
  StageModuleProperties::StageModuleProperties((StageModuleProperties *)this);
  this[0x134] = (SkyCityStageProperties)0x1;
  this[0x135] = (SkyCityStageProperties)0x1;
  *(undefined ***)this = &PTR_GetClass_06761fa0;
  *(undefined4 *)(this + 0x130) = 0x42c80000;
  *(undefined4 *)(this + 0x138) = 0x42c80000;
  *(undefined4 *)(this + 0x13c) = 0x42c80000;
  *(undefined4 *)(this + 0x140) = 0x42c80000;
  *(undefined4 *)(this + 0x144) = 0x42c80000;
  *(undefined4 *)(this + 0x148) = 0x42c80000;
  *(undefined4 *)(this + 0x14c) = 0x41f00000;
  *(undefined4 *)(this + 0x150) = 0x41f00000;
  return;
}


/* SkyCityStageProperties::StaticNew() */

SkyCityStageProperties * SkyCityStageProperties::StaticNew(void)

{
  SkyCityStageProperties *this;
  
  this = ::operator_new(0x158);
  SkyCityStageProperties(this);
  return this;
}


/* SkyCityStageProperties::~SkyCityStageProperties() */

void __thiscall SkyCityStageProperties::~SkyCityStageProperties(SkyCityStageProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06761fa0;
  StageModuleProperties::~StageModuleProperties((StageModuleProperties *)this);
  return;
}


/* SkyCityStageProperties::~SkyCityStageProperties() */

void __thiscall SkyCityStageProperties::~SkyCityStageProperties(SkyCityStageProperties *this)

{
  ~SkyCityStageProperties(this);
  AK::FreeHook(this);
  return;
}

