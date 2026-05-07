// Class: JoustStageProperties


/* JoustStageProperties::GetModuleClass() const */

long * JoustStageProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (JoustStage::sClass != (long *)0x0) {
    return JoustStage::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  JoustStage::sClass = plVar1;
  uVar2 = StageModule::StaticGetClass();
  (*pcVar3)(plVar1,"JoustStage",uVar2,JoustStage::StaticNew);
  JoustStage::StaticClassInit();
  return JoustStage::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustStageProperties::StaticClassInit() */

void JoustStageProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"JoustStageProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_0388dce0,0x138,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JoustStageProperties::StaticGetClass() */

long * JoustStageProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"JoustStageProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* JoustStageProperties::GetClass() const */

long * JoustStageProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"JoustStageProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* JoustStageProperties::JoustStageProperties() */

void __thiscall JoustStageProperties::JoustStageProperties(JoustStageProperties *this)

{
  StageModuleProperties::StageModuleProperties((StageModuleProperties *)this);
  this[0x130] = (JoustStageProperties)0x0;
  this[0x131] = (JoustStageProperties)0x0;
  *(undefined ***)this = &PTR_GetClass_066af480;
  return;
}


/* JoustStageProperties::StaticNew() */

JoustStageProperties * JoustStageProperties::StaticNew(void)

{
  JoustStageProperties *this;
  
  this = ::operator_new(0x138);
  JoustStageProperties(this);
  return this;
}


/* JoustStageProperties::~JoustStageProperties() */

void __thiscall JoustStageProperties::~JoustStageProperties(JoustStageProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_066af480;
  StageModuleProperties::~StageModuleProperties((StageModuleProperties *)this);
  return;
}


/* JoustStageProperties::~JoustStageProperties() */

void __thiscall JoustStageProperties::~JoustStageProperties(JoustStageProperties *this)

{
  ~JoustStageProperties(this);
  AK::FreeHook(this);
  return;
}

