// Class: KongFuStageProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* KongFuStageProperties::StaticClassInit() */

void KongFuStageProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"KongFuStageProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03ce15d8,0x138,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* KongFuStageProperties::StaticGetClass() */

long * KongFuStageProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"KongFuStageProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* KongFuStageProperties::GetClass() const */

long * KongFuStageProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"KongFuStageProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* KongFuStageProperties::GetModuleClass() const */

long * KongFuStageProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (KongFuStage::sClass != (long *)0x0) {
    return KongFuStage::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  KongFuStage::sClass = plVar1;
  uVar2 = StageModule::StaticGetClass();
  (*pcVar3)(plVar1,"KongFuStage",uVar2,KongFuStage::StaticNew);
  KongFuStage::StaticClassInit();
  return KongFuStage::sClass;
}


/* KongFuStageProperties::KongFuStageProperties() */

void __thiscall KongFuStageProperties::KongFuStageProperties(KongFuStageProperties *this)

{
  StageModuleProperties::StageModuleProperties((StageModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06760a70;
  return;
}


/* KongFuStageProperties::StaticNew() */

KongFuStageProperties * KongFuStageProperties::StaticNew(void)

{
  KongFuStageProperties *this;
  
  this = ::operator_new(0x138);
  KongFuStageProperties(this);
  return this;
}


/* KongFuStageProperties::~KongFuStageProperties() */

void __thiscall KongFuStageProperties::~KongFuStageProperties(KongFuStageProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06760a70;
  StageModuleProperties::~StageModuleProperties((StageModuleProperties *)this);
  return;
}


/* KongFuStageProperties::~KongFuStageProperties() */

void __thiscall KongFuStageProperties::~KongFuStageProperties(KongFuStageProperties *this)

{
  ~KongFuStageProperties(this);
  AK::FreeHook(this);
  return;
}

