// Class: ProtectThePlantChallengeProperties


/* ProtectThePlantChallengeProperties::GetDescriptiveName() const */

void __thiscall
ProtectThePlantChallengeProperties::GetDescriptiveName(ProtectThePlantChallengeProperties *this)

{
  TodStringTranslate(L"[STARCHALLENGE_PROTECT_THE_PLANT_NAME]");
  return;
}


/* ProtectThePlantChallengeProperties::GetDescription() const */

void __thiscall
ProtectThePlantChallengeProperties::GetDescription(ProtectThePlantChallengeProperties *this)

{
  TodStringTranslate(L"[STARCHALLENGE_PROTECT_THE_PLANT]");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProtectThePlantChallengeProperties::StaticClassInit() */

void ProtectThePlantChallengeProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ProtectedPlantEntry");
    (*pcVar3)(plVar2,asStack_10,FUN_043550b8,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ProtectThePlantChallengeProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_0435672c,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ProtectThePlantChallengeProperties::StaticGetClass() */

long * ProtectThePlantChallengeProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ProtectThePlantChallengeProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ProtectThePlantChallengeProperties::GetClass() const */

long * ProtectThePlantChallengeProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"ProtectThePlantChallengeProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ProtectThePlantChallengeProperties::GetModuleClass() const */

long * ProtectThePlantChallengeProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (ProtectThePlantChallengeModule::sClass != (long *)0x0) {
    return ProtectThePlantChallengeModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  ProtectThePlantChallengeModule::sClass = plVar1;
  uVar2 = Challenge::StaticGetClass();
  (*pcVar3)(plVar1,"ProtectThePlantChallengeModule",uVar2,ProtectThePlantChallengeModule::StaticNew)
  ;
  ProtectThePlantChallengeModule::StaticClassInit();
  return ProtectThePlantChallengeModule::sClass;
}


/* ProtectThePlantChallengeProperties::ProtectThePlantChallengeProperties() */

void __thiscall
ProtectThePlantChallengeProperties::ProtectThePlantChallengeProperties
          (ProtectThePlantChallengeProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06834580;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  *(undefined4 *)(this + 0x58) = 0;
  this[0x5c] = (ProtectThePlantChallengeProperties)0x0;
  return;
}


/* ProtectThePlantChallengeProperties::StaticNew() */

ProtectThePlantChallengeProperties * ProtectThePlantChallengeProperties::StaticNew(void)

{
  ProtectThePlantChallengeProperties *this;
  
  this = ::operator_new(0x60);
  ProtectThePlantChallengeProperties(this);
  return this;
}


/* ProtectThePlantChallengeProperties::~ProtectThePlantChallengeProperties() */

void __thiscall
ProtectThePlantChallengeProperties::~ProtectThePlantChallengeProperties
          (ProtectThePlantChallengeProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06834580;
  std::vector<ProtectedPlantEntry,std::allocator<ProtectedPlantEntry>>::~vector
            ((vector<ProtectedPlantEntry,std::allocator<ProtectedPlantEntry>> *)(this + 0x40));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* ProtectThePlantChallengeProperties::~ProtectThePlantChallengeProperties() */

void __thiscall
ProtectThePlantChallengeProperties::~ProtectThePlantChallengeProperties
          (ProtectThePlantChallengeProperties *this)

{
  ~ProtectThePlantChallengeProperties(this);
  AK::FreeHook(this);
  return;
}

