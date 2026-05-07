// Class: SteamStageProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SteamStageProperties::StaticClassInit() */

void SteamStageProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"SteamStageProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03d03818,0x130,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SteamStageProperties::StaticGetClass() */

long * SteamStageProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SteamStageProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SteamStageProperties::GetClass() const */

long * SteamStageProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"SteamStageProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SteamStageProperties::GetModuleClass() const */

long * SteamStageProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (SteamStage::sClass != (long *)0x0) {
    return SteamStage::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  SteamStage::sClass = plVar1;
  uVar2 = StageModule::StaticGetClass();
  (*pcVar3)(plVar1,"SteamStage",uVar2,SteamStage::StaticNew);
  SteamStage::StaticClassInit();
  return SteamStage::sClass;
}


/* SteamStageProperties::SteamStageProperties() */

void __thiscall SteamStageProperties::SteamStageProperties(SteamStageProperties *this)

{
  StageModuleProperties::StageModuleProperties((StageModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06762f00;
  return;
}


/* SteamStageProperties::StaticNew() */

SteamStageProperties * SteamStageProperties::StaticNew(void)

{
  SteamStageProperties *this;
  
  this = ::operator_new(0x130);
  SteamStageProperties(this);
  return this;
}


/* SteamStageProperties::~SteamStageProperties() */

void __thiscall SteamStageProperties::~SteamStageProperties(SteamStageProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06762f00;
  StageModuleProperties::~StageModuleProperties((StageModuleProperties *)this);
  return;
}


/* SteamStageProperties::~SteamStageProperties() */

void __thiscall SteamStageProperties::~SteamStageProperties(SteamStageProperties *this)

{
  ~SteamStageProperties(this);
  AK::FreeHook(this);
  return;
}

