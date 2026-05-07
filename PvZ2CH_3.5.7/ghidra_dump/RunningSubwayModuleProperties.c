// Class: RunningSubwayModuleProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningSubwayModuleProperties::StaticClassInit() */

void RunningSubwayModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"RunningPlayerInitInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_033eef18,0x2c,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"RunningSubwayModuleProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_033ef304,0x90,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RunningSubwayModuleProperties::StaticGetClass() */

long * RunningSubwayModuleProperties::StaticGetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"RunningSubwayModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RunningSubwayModuleProperties::GetClass() const */

long * RunningSubwayModuleProperties::GetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"RunningSubwayModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RunningSubwayModuleProperties::GetModuleClass() const */

long * RunningSubwayModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (RunningSubwayModule::sClass != (long *)0x0) {
    return RunningSubwayModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  RunningSubwayModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"RunningSubwayModule",uVar2,RunningSubwayModule::StaticNew);
  RunningSubwayModule::StaticClassInit();
  return RunningSubwayModule::sClass;
}


/* RunningSubwayModuleProperties::RunningSubwayModuleProperties() */

void __thiscall
RunningSubwayModuleProperties::RunningSubwayModuleProperties(RunningSubwayModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0661c230;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  RunningPlayerInitInfo::RunningPlayerInitInfo((RunningPlayerInitInfo *)(this + 0x58));
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  return;
}


/* RunningSubwayModuleProperties::StaticNew() */

RunningSubwayModuleProperties * RunningSubwayModuleProperties::StaticNew(void)

{
  RunningSubwayModuleProperties *this;
  
  this = ::operator_new(0x90);
  RunningSubwayModuleProperties(this);
  return this;
}


/* RunningSubwayModuleProperties::~RunningSubwayModuleProperties() */

void __thiscall
RunningSubwayModuleProperties::~RunningSubwayModuleProperties(RunningSubwayModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0661c230;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x40));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* RunningSubwayModuleProperties::~RunningSubwayModuleProperties() */

void __thiscall
RunningSubwayModuleProperties::~RunningSubwayModuleProperties(RunningSubwayModuleProperties *this)

{
  ~RunningSubwayModuleProperties(this);
  AK::FreeHook(this);
  return;
}

