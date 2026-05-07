// Class: WestStageProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WestStageProperties::StaticClassInit() */

void WestStageProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"WestStageProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_0450b378,0x130,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WestStageProperties::StaticGetClass() */

long * WestStageProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WestStageProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WestStageProperties::GetClass() const */

long * WestStageProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"WestStageProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WestStageProperties::GetModuleClass() const */

long * WestStageProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (WestStage::sClass != (long *)0x0) {
    return WestStage::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  WestStage::sClass = plVar1;
  uVar2 = StageModule::StaticGetClass();
  (*pcVar3)(plVar1,"WestStage",uVar2,WestStage::StaticNew);
  WestStage::StaticClassInit();
  return WestStage::sClass;
}


/* WestStageProperties::WestStageProperties() */

void __thiscall WestStageProperties::WestStageProperties(WestStageProperties *this)

{
  StageModuleProperties::StageModuleProperties((StageModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06857680;
  return;
}


/* WestStageProperties::StaticNew() */

WestStageProperties * WestStageProperties::StaticNew(void)

{
  WestStageProperties *this;
  
  this = ::operator_new(0x130);
  WestStageProperties(this);
  return this;
}


/* WestStageProperties::~WestStageProperties() */

void __thiscall WestStageProperties::~WestStageProperties(WestStageProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06857680;
  StageModuleProperties::~StageModuleProperties((StageModuleProperties *)this);
  return;
}


/* WestStageProperties::~WestStageProperties() */

void __thiscall WestStageProperties::~WestStageProperties(WestStageProperties *this)

{
  ~WestStageProperties(this);
  AK::FreeHook(this);
  return;
}

