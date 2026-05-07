// Class: CardGameModuleProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameModuleProperties::StaticClassInit() */

void CardGameModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemCardGameTowerGenerateData");
    (*pcVar3)(plVar2,asStack_10,FUN_04e016d0,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"CardGameZombieGenerateData");
    (*pcVar3)(plVar2,asStack_10,FUN_04e03740,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PresetCard");
    (*pcVar3)(plVar2,asStack_10,FUN_04e0144c,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"TutorialCard");
    (*pcVar3)(plVar2,asStack_10,FUN_04e0128c,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"CardGameModuleProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_04e03bdc,0x98,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameModuleProperties::StaticGetClass() */

long * CardGameModuleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CardGameModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardGameModuleProperties::GetClass() const */

long * CardGameModuleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"CardGameModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardGameModuleProperties::CardGameModuleProperties() */

void __thiscall CardGameModuleProperties::CardGameModuleProperties(CardGameModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_069d2ee0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x68));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x80));
  *(undefined4 *)(this + 0x40) = 5;
  *(undefined4 *)(this + 0x44) = 3;
  *(undefined4 *)(this + 0x48) = 0x42700000;
  return;
}


/* CardGameModuleProperties::StaticNew() */

CardGameModuleProperties * CardGameModuleProperties::StaticNew(void)

{
  CardGameModuleProperties *this;
  
  this = ::operator_new(0x98);
  CardGameModuleProperties(this);
  return this;
}


/* CardGameModuleProperties::~CardGameModuleProperties() */

void __thiscall CardGameModuleProperties::~CardGameModuleProperties(CardGameModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_069d2ee0;
  std::vector<TutorialCard,std::allocator<TutorialCard>>::~vector
            ((vector<TutorialCard,std::allocator<TutorialCard>> *)(this + 0x80));
  std::vector<PresetCard,std::allocator<PresetCard>>::~vector
            ((vector<PresetCard,std::allocator<PresetCard>> *)(this + 0x68));
  std::vector<CardGameZombieGenerateData,std::allocator<CardGameZombieGenerateData>>::~vector
            ((vector<CardGameZombieGenerateData,std::allocator<CardGameZombieGenerateData>> *)
             (this + 0x50));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* CardGameModuleProperties::~CardGameModuleProperties() */

void __thiscall CardGameModuleProperties::~CardGameModuleProperties(CardGameModuleProperties *this)

{
  ~CardGameModuleProperties(this);
  AK::FreeHook(this);
  return;
}


/* CardGameModuleProperties::GetModuleClass() const */

long * CardGameModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (CardGameModule::sClass != (long *)0x0) {
    return CardGameModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  CardGameModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"CardGameModule",uVar2,CardGameModule::StaticNew);
  CardGameModule::StaticClassInit();
  return CardGameModule::sClass;
}

