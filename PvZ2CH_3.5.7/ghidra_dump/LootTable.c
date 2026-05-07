// Class: LootTable


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LootTable::StaticClassInit() */

void LootTable::StaticClassInit(void)

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
    std::string::string(asStack_10,"LootTableEntry");
    (*pcVar3)(plVar2,asStack_10,FUN_03e8f1b4,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"LootTable");
    (*pcVar3)(plVar2,asStack_10,FUN_03e8fbf0,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LootTable::StaticGetClass() */

long * LootTable::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LootTable",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LootTable::GetClass() const */

long * LootTable::GetClass(void)

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
  (*pcVar3)(plVar1,"LootTable",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LootTable::LootTable() */

void __thiscall LootTable::LootTable(LootTable *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_067902f0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* LootTable::StaticNew() */

LootTable * LootTable::StaticNew(void)

{
  LootTable *this;
  
  this = ::operator_new(0x20);
  LootTable(this);
  return this;
}


/* LootTable::~LootTable() */

void __thiscall LootTable::~LootTable(LootTable *this)

{
  *(undefined ***)this = &PTR_GetClass_067902f0;
  std::vector<LootTableEntry,std::allocator<LootTableEntry>>::~vector
            ((vector<LootTableEntry,std::allocator<LootTableEntry>> *)(this + 8));
  nop();
  return;
}


/* LootTable::~LootTable() */

void __thiscall LootTable::~LootTable(LootTable *this)

{
  ~LootTable(this);
  AK::FreeHook(this);
  return;
}

