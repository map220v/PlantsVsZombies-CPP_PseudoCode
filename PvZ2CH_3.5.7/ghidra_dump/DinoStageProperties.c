// Class: DinoStageProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinoStageProperties::StaticClassInit() */

void DinoStageProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"DinoStageProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03d0243c,0x130,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinoStageProperties::StaticGetClass() */

long * DinoStageProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DinoStageProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DinoStageProperties::GetClass() const */

long * DinoStageProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"DinoStageProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DinoStageProperties::GetModuleClass() const */

long * DinoStageProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (DinoStage::sClass != (long *)0x0) {
    return DinoStage::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  DinoStage::sClass = plVar1;
  uVar2 = StageModule::StaticGetClass();
  (*pcVar3)(plVar1,"DinoStage",uVar2,DinoStage::StaticNew);
  DinoStage::StaticClassInit();
  return DinoStage::sClass;
}


/* DinoStageProperties::DinoStageProperties() */

void __thiscall DinoStageProperties::DinoStageProperties(DinoStageProperties *this)

{
  StageModuleProperties::StageModuleProperties((StageModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06762b80;
  return;
}


/* DinoStageProperties::StaticNew() */

DinoStageProperties * DinoStageProperties::StaticNew(void)

{
  DinoStageProperties *this;
  
  this = ::operator_new(0x130);
  DinoStageProperties(this);
  return this;
}


/* DinoStageProperties::~DinoStageProperties() */

void __thiscall DinoStageProperties::~DinoStageProperties(DinoStageProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06762b80;
  StageModuleProperties::~StageModuleProperties((StageModuleProperties *)this);
  return;
}


/* DinoStageProperties::~DinoStageProperties() */

void __thiscall DinoStageProperties::~DinoStageProperties(DinoStageProperties *this)

{
  ~DinoStageProperties(this);
  AK::FreeHook(this);
  return;
}

