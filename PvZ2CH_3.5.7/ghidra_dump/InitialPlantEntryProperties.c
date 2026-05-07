// Class: InitialPlantEntryProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InitialPlantEntryProperties::StaticClassInit() */

void InitialPlantEntryProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"InitialPlantEntry");
    (*pcVar3)(plVar2,asStack_10,FUN_04358eac,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"InitialPlantEntryProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_04359270,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* InitialPlantEntryProperties::StaticGetClass() */

long * InitialPlantEntryProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"InitialPlantEntryProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* InitialPlantEntryProperties::GetClass() const */

long * InitialPlantEntryProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"InitialPlantEntryProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* InitialPlantEntryProperties::GetModuleClass() const */

long * InitialPlantEntryProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (InitialPlantModule::sClass != (long *)0x0) {
    return InitialPlantModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  InitialPlantModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"InitialPlantModule",uVar2,InitialPlantModule::StaticNew);
  InitialPlantModule::StaticClassInit();
  return InitialPlantModule::sClass;
}


/* InitialPlantEntryProperties::InitialPlantEntryProperties() */

void __thiscall
InitialPlantEntryProperties::InitialPlantEntryProperties(InitialPlantEntryProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06834790;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::vector<InitialPlantEntry,std::allocator<InitialPlantEntry>>::clear
            ((vector<InitialPlantEntry,std::allocator<InitialPlantEntry>> *)(this + 0x40));
  return;
}


/* InitialPlantEntryProperties::StaticNew() */

InitialPlantEntryProperties * InitialPlantEntryProperties::StaticNew(void)

{
  InitialPlantEntryProperties *this;
  
  this = ::operator_new(0x58);
  InitialPlantEntryProperties(this);
  return this;
}


/* InitialPlantEntryProperties::~InitialPlantEntryProperties() */

void __thiscall
InitialPlantEntryProperties::~InitialPlantEntryProperties(InitialPlantEntryProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06834790;
  std::vector<InitialPlantEntry,std::allocator<InitialPlantEntry>>::~vector
            ((vector<InitialPlantEntry,std::allocator<InitialPlantEntry>> *)(this + 0x40));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* InitialPlantEntryProperties::~InitialPlantEntryProperties() */

void __thiscall
InitialPlantEntryProperties::~InitialPlantEntryProperties(InitialPlantEntryProperties *this)

{
  ~InitialPlantEntryProperties(this);
  AK::FreeHook(this);
  return;
}

