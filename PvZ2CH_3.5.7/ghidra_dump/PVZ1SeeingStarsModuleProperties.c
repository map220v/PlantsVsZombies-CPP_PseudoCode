// Class: PVZ1SeeingStarsModuleProperties


/* PVZ1SeeingStarsModuleProperties::GetModuleClass() const */

long * PVZ1SeeingStarsModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (PVZ1SeeingStarsModule::sClass != (long *)0x0) {
    return PVZ1SeeingStarsModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  PVZ1SeeingStarsModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"PVZ1SeeingStarsModule",uVar2,PVZ1SeeingStarsModule::StaticNew);
  PVZ1SeeingStarsModule::StaticClassInit();
  return PVZ1SeeingStarsModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1SeeingStarsModuleProperties::StaticClassInit() */

void PVZ1SeeingStarsModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"MatchPlantData");
    (*pcVar3)(plVar2,asStack_10,FUN_04e079ac,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PVZ1SeeingStarsModuleProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_04e0884c,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1SeeingStarsModuleProperties::StaticGetClass() */

long * PVZ1SeeingStarsModuleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PVZ1SeeingStarsModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZ1SeeingStarsModuleProperties::GetClass() const */

long * PVZ1SeeingStarsModuleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"PVZ1SeeingStarsModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZ1SeeingStarsModuleProperties::PVZ1SeeingStarsModuleProperties() */

void __thiscall
PVZ1SeeingStarsModuleProperties::PVZ1SeeingStarsModuleProperties
          (PVZ1SeeingStarsModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_069d32b0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  return;
}


/* PVZ1SeeingStarsModuleProperties::StaticNew() */

PVZ1SeeingStarsModuleProperties * PVZ1SeeingStarsModuleProperties::StaticNew(void)

{
  PVZ1SeeingStarsModuleProperties *this;
  
  this = ::operator_new(0x60);
  PVZ1SeeingStarsModuleProperties(this);
  return this;
}


/* PVZ1SeeingStarsModuleProperties::~PVZ1SeeingStarsModuleProperties() */

void __thiscall
PVZ1SeeingStarsModuleProperties::~PVZ1SeeingStarsModuleProperties
          (PVZ1SeeingStarsModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_069d32b0;
  std::vector<MatchPlantData,std::allocator<MatchPlantData>>::~vector
            ((vector<MatchPlantData,std::allocator<MatchPlantData>> *)(this + 0x40));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* PVZ1SeeingStarsModuleProperties::~PVZ1SeeingStarsModuleProperties() */

void __thiscall
PVZ1SeeingStarsModuleProperties::~PVZ1SeeingStarsModuleProperties
          (PVZ1SeeingStarsModuleProperties *this)

{
  ~PVZ1SeeingStarsModuleProperties(this);
  AK::FreeHook(this);
  return;
}

