// Class: ChagreDoubleFesivalConfig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChagreDoubleFesivalConfig::StaticClassInit() */

void ChagreDoubleFesivalConfig::StaticClassInit(void)

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
    std::string::string(asStack_10,"stAward");
    (*pcVar3)(plVar2,asStack_10,FUN_03924d88,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"stRewardInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_0392951c,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"stThirdAward");
    (*pcVar3)(plVar2,asStack_10,FUN_03924bc8,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"stThirdAwardInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03929720,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ChagreDoubleFesivalConfig");
    (*pcVar3)(plVar2,asStack_10,FUN_039270d8,0xe0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChagreDoubleFesivalConfig::StaticGetClass() */

long * ChagreDoubleFesivalConfig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ChagreDoubleFesivalConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ChagreDoubleFesivalConfig::GetClass() const */

long * ChagreDoubleFesivalConfig::GetClass(void)

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
  (*pcVar3)(plVar1,"ChagreDoubleFesivalConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ChagreDoubleFesivalConfig::ChagreDoubleFesivalConfig() */

void __thiscall
ChagreDoubleFesivalConfig::ChagreDoubleFesivalConfig(ChagreDoubleFesivalConfig *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_066c8ff0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  Sexy::RtDbTable::IteratorStorage::IteratorStorage((IteratorStorage *)(this + 0x38));
  Sexy::RtDbTable::IteratorStorage::IteratorStorage((IteratorStorage *)(this + 0x68));
  Sexy::RtDbTable::IteratorStorage::IteratorStorage((IteratorStorage *)(this + 0x98));
  *(undefined4 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  return;
}


/* ChagreDoubleFesivalConfig::StaticNew() */

ChagreDoubleFesivalConfig * ChagreDoubleFesivalConfig::StaticNew(void)

{
  ChagreDoubleFesivalConfig *this;
  
  this = ::operator_new(0xe0);
  ChagreDoubleFesivalConfig(this);
  return this;
}


/* ChagreDoubleFesivalConfig::~ChagreDoubleFesivalConfig() */

void __thiscall
ChagreDoubleFesivalConfig::~ChagreDoubleFesivalConfig(ChagreDoubleFesivalConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_066c8ff0;
  stThirdAwardInfo::~stThirdAwardInfo((stThirdAwardInfo *)(this + 0x98));
  stRewardInfo::~stRewardInfo((stRewardInfo *)(this + 0x68));
  stRewardInfo::~stRewardInfo((stRewardInfo *)(this + 0x38));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x20));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 8));
  nop();
  return;
}


/* ChagreDoubleFesivalConfig::~ChagreDoubleFesivalConfig() */

void __thiscall
ChagreDoubleFesivalConfig::~ChagreDoubleFesivalConfig(ChagreDoubleFesivalConfig *this)

{
  ~ChagreDoubleFesivalConfig(this);
  AK::FreeHook(this);
  return;
}

