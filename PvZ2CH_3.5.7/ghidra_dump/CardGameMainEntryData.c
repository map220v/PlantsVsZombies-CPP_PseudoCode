// Class: CardGameMainEntryData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameMainEntryData::StaticClassInit() */

void CardGameMainEntryData::StaticClassInit(void)

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
    std::string::string(asStack_10,"CardGameLevelBonusData");
    (*pcVar3)(plVar2,asStack_10,FUN_0356bd28,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"CardGameLevelData");
    (*pcVar3)(plVar2,asStack_10,FUN_0356daa4,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"CardGameStarRewardData");
    (*pcVar3)(plVar2,asStack_10,FUN_0356baf8,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"CardGameCardInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_0356b9a4,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"CardGameWorldData");
    (*pcVar3)(plVar2,asStack_10,FUN_0356e078,0x80,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"CardGameMainEntryData");
    (*pcVar3)(plVar2,asStack_10,FUN_0356e638,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameMainEntryData::StaticGetClass() */

long * CardGameMainEntryData::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"CardGameMainEntryData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardGameMainEntryData::GetClass() const */

long * CardGameMainEntryData::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"CardGameMainEntryData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardGameMainEntryData::CardGameMainEntryData() */

void __thiscall CardGameMainEntryData::CardGameMainEntryData(CardGameMainEntryData *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0665b8d0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}


/* CardGameMainEntryData::StaticNew() */

CardGameMainEntryData * CardGameMainEntryData::StaticNew(void)

{
  CardGameMainEntryData *this;
  
  this = ::operator_new(0x58);
  CardGameMainEntryData(this);
  return this;
}


/* CardGameMainEntryData::~CardGameMainEntryData() */

void __thiscall CardGameMainEntryData::~CardGameMainEntryData(CardGameMainEntryData *this)

{
  *(undefined ***)this = &PTR_GetClass_0665b8d0;
  std::vector<CardGameCardInfo,std::allocator<CardGameCardInfo>>::~vector
            ((vector<CardGameCardInfo,std::allocator<CardGameCardInfo>> *)(this + 0x40));
  std::vector<CardGameCardInfo,std::allocator<CardGameCardInfo>>::~vector
            ((vector<CardGameCardInfo,std::allocator<CardGameCardInfo>> *)(this + 0x28));
  std::vector<CardGameWorldData,std::allocator<CardGameWorldData>>::~vector
            ((vector<CardGameWorldData,std::allocator<CardGameWorldData>> *)(this + 0x10));
  nop();
  return;
}


/* CardGameMainEntryData::~CardGameMainEntryData() */

void __thiscall CardGameMainEntryData::~CardGameMainEntryData(CardGameMainEntryData *this)

{
  ~CardGameMainEntryData(this);
  AK::FreeHook(this);
  return;
}

