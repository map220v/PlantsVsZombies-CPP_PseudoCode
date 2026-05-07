// Class: PirateStageProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PirateStageProperties::StaticClassInit() */

void PirateStageProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"PirateStageProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03f198d8,0x160,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PirateStageProperties::StaticGetClass() */

long * PirateStageProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PirateStageProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PirateStageProperties::GetClass() const */

long * PirateStageProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"PirateStageProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PirateStageProperties::GetModuleClass() const */

long * PirateStageProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (PirateStage::sClass != (long *)0x0) {
    return PirateStage::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  PirateStage::sClass = plVar1;
  uVar2 = StageModule::StaticGetClass();
  (*pcVar3)(plVar1,"PirateStage",uVar2,PirateStage::StaticNew);
  PirateStage::StaticClassInit();
  return PirateStage::sClass;
}


/* PirateStageProperties::PirateStageProperties() */

void __thiscall PirateStageProperties::PirateStageProperties(PirateStageProperties *this)

{
  StageModuleProperties::StageModuleProperties((StageModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06796ca0;
  PlantRestrictionSet::PlantRestrictionSet((PlantRestrictionSet *)(this + 0x138));
  *(undefined4 *)(this + 0x130) = 0x40a00000;
  return;
}


/* PirateStageProperties::StaticNew() */

PirateStageProperties * PirateStageProperties::StaticNew(void)

{
  PirateStageProperties *this;
  
  this = ::operator_new(0x160);
  PirateStageProperties(this);
  return this;
}


/* PirateStageProperties::~PirateStageProperties() */

void __thiscall PirateStageProperties::~PirateStageProperties(PirateStageProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06796ca0;
  PlantRestrictionSet::~PlantRestrictionSet((PlantRestrictionSet *)(this + 0x138));
  StageModuleProperties::~StageModuleProperties((StageModuleProperties *)this);
  return;
}


/* PirateStageProperties::~PirateStageProperties() */

void __thiscall PirateStageProperties::~PirateStageProperties(PirateStageProperties *this)

{
  ~PirateStageProperties(this);
  AK::FreeHook(this);
  return;
}

