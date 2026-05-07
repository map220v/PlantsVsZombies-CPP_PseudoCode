// Class: LostCityStageProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LostCityStageProperties::StaticClassInit() */

void LostCityStageProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"LostCityStageProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03d00604,0x130,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LostCityStageProperties::StaticGetClass() */

long * LostCityStageProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LostCityStageProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LostCityStageProperties::GetClass() const */

long * LostCityStageProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"LostCityStageProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LostCityStageProperties::GetModuleClass() const */

long * LostCityStageProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (LostCityStage::sClass != (long *)0x0) {
    return LostCityStage::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  LostCityStage::sClass = plVar1;
  uVar2 = StageModule::StaticGetClass();
  (*pcVar3)(plVar1,"LostCityStage",uVar2,LostCityStage::StaticNew);
  LostCityStage::StaticClassInit();
  return LostCityStage::sClass;
}


/* LostCityStageProperties::LostCityStageProperties() */

void __thiscall LostCityStageProperties::LostCityStageProperties(LostCityStageProperties *this)

{
  StageModuleProperties::StageModuleProperties((StageModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06762490;
  return;
}


/* LostCityStageProperties::StaticNew() */

LostCityStageProperties * LostCityStageProperties::StaticNew(void)

{
  LostCityStageProperties *this;
  
  this = ::operator_new(0x130);
  LostCityStageProperties(this);
  return this;
}


/* LostCityStageProperties::~LostCityStageProperties() */

void __thiscall LostCityStageProperties::~LostCityStageProperties(LostCityStageProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06762490;
  StageModuleProperties::~StageModuleProperties((StageModuleProperties *)this);
  return;
}


/* LostCityStageProperties::~LostCityStageProperties() */

void __thiscall LostCityStageProperties::~LostCityStageProperties(LostCityStageProperties *this)

{
  ~LostCityStageProperties(this);
  AK::FreeHook(this);
  return;
}

