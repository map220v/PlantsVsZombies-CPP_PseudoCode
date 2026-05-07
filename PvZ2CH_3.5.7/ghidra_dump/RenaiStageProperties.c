// Class: RenaiStageProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenaiStageProperties::StaticClassInit() */

void RenaiStageProperties::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"EnvironmentAnim");
    (*pcVar3)(plVar2,asStack_10,FUN_03d045e4,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"RenaiStageProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_03d04c48,0x148,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RenaiStageProperties::StaticGetClass() */

long * RenaiStageProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RenaiStageProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RenaiStageProperties::GetClass() const */

long * RenaiStageProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"RenaiStageProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RenaiStageProperties::GetModuleClass() const */

long * RenaiStageProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (RenaiStage::sClass != (long *)0x0) {
    return RenaiStage::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  RenaiStage::sClass = plVar1;
  uVar2 = StageModule::StaticGetClass();
  (*pcVar3)(plVar1,"RenaiStage",uVar2,RenaiStage::StaticNew);
  RenaiStage::StaticClassInit();
  return RenaiStage::sClass;
}


/* RenaiStageProperties::RenaiStageProperties() */

void __thiscall RenaiStageProperties::RenaiStageProperties(RenaiStageProperties *this)

{
  StageModuleProperties::StageModuleProperties((StageModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_067630c0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x130));
  return;
}


/* RenaiStageProperties::StaticNew() */

RenaiStageProperties * RenaiStageProperties::StaticNew(void)

{
  RenaiStageProperties *this;
  
  this = ::operator_new(0x148);
  RenaiStageProperties(this);
  return this;
}


/* RenaiStageProperties::~RenaiStageProperties() */

void __thiscall RenaiStageProperties::~RenaiStageProperties(RenaiStageProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_067630c0;
  std::vector<EnvironmentAnim,std::allocator<EnvironmentAnim>>::~vector
            ((vector<EnvironmentAnim,std::allocator<EnvironmentAnim>> *)(this + 0x130));
  StageModuleProperties::~StageModuleProperties((StageModuleProperties *)this);
  return;
}


/* RenaiStageProperties::~RenaiStageProperties() */

void __thiscall RenaiStageProperties::~RenaiStageProperties(RenaiStageProperties *this)

{
  ~RenaiStageProperties(this);
  AK::FreeHook(this);
  return;
}

