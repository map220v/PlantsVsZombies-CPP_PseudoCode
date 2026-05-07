// Class: RoofStageProperties


/* RoofStageProperties::GetModuleClass() const */

long * RoofStageProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (RoofStage::sClass != (long *)0x0) {
    return RoofStage::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  RoofStage::sClass = plVar1;
  uVar2 = StageModule::StaticGetClass();
  (*pcVar3)(plVar1,"RoofStage",uVar2,RoofStage::StaticNew);
  RoofStage::StaticClassInit();
  return RoofStage::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RoofStageProperties::StaticClassInit() */

void RoofStageProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"RoofStageProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03d6f6e0,0x180,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RoofStageProperties::StaticGetClass() */

long * RoofStageProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RoofStageProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RoofStageProperties::GetClass() const */

long * RoofStageProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"RoofStageProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RoofStageProperties::RoofStageProperties() */

void __thiscall RoofStageProperties::RoofStageProperties(RoofStageProperties *this)

{
  StageModuleProperties::StageModuleProperties((StageModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0676ed80;
  PlantRestrictionSet::PlantRestrictionSet((PlantRestrictionSet *)(this + 0x130));
  PlantRestrictionSet::PlantRestrictionSet((PlantRestrictionSet *)(this + 0x158));
  return;
}


/* RoofStageProperties::StaticNew() */

RoofStageProperties * RoofStageProperties::StaticNew(void)

{
  RoofStageProperties *this;
  
  this = ::operator_new(0x180);
  RoofStageProperties(this);
  return this;
}


/* RoofStageProperties::~RoofStageProperties() */

void __thiscall RoofStageProperties::~RoofStageProperties(RoofStageProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0676ed80;
  PlantRestrictionSet::~PlantRestrictionSet((PlantRestrictionSet *)(this + 0x158));
  PlantRestrictionSet::~PlantRestrictionSet((PlantRestrictionSet *)(this + 0x130));
  StageModuleProperties::~StageModuleProperties((StageModuleProperties *)this);
  return;
}


/* RoofStageProperties::~RoofStageProperties() */

void __thiscall RoofStageProperties::~RoofStageProperties(RoofStageProperties *this)

{
  ~RoofStageProperties(this);
  AK::FreeHook(this);
  return;
}

