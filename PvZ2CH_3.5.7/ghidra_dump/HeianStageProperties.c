// Class: HeianStageProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeianStageProperties::StaticClassInit() */

void HeianStageProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"HeianStageProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03d251c4,0x130,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HeianStageProperties::StaticGetClass() */

long * HeianStageProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HeianStageProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeianStageProperties::GetClass() const */

long * HeianStageProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"HeianStageProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeianStageProperties::GetModuleClass() const */

long * HeianStageProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (HeianStage::sClass != (long *)0x0) {
    return HeianStage::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  HeianStage::sClass = plVar1;
  uVar2 = StageModule::StaticGetClass();
  (*pcVar3)(plVar1,"HeianStage",uVar2,HeianStage::StaticNew);
  HeianStage::StaticClassInit();
  return HeianStage::sClass;
}


/* HeianStageProperties::HeianStageProperties() */

void __thiscall HeianStageProperties::HeianStageProperties(HeianStageProperties *this)

{
  StageModuleProperties::StageModuleProperties((StageModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06765c70;
  return;
}


/* HeianStageProperties::StaticNew() */

HeianStageProperties * HeianStageProperties::StaticNew(void)

{
  HeianStageProperties *this;
  
  this = ::operator_new(0x130);
  HeianStageProperties(this);
  return this;
}


/* HeianStageProperties::~HeianStageProperties() */

void __thiscall HeianStageProperties::~HeianStageProperties(HeianStageProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06765c70;
  StageModuleProperties::~StageModuleProperties((StageModuleProperties *)this);
  return;
}


/* HeianStageProperties::~HeianStageProperties() */

void __thiscall HeianStageProperties::~HeianStageProperties(HeianStageProperties *this)

{
  ~HeianStageProperties(this);
  AK::FreeHook(this);
  return;
}

