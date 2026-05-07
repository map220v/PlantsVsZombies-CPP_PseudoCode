// Class: PresentTable


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PresentTable::StaticClassInit() */

void PresentTable::StaticClassInit(void)

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
    std::string::string(asStack_10,"PresentTableEntry");
    (*pcVar3)(plVar2,asStack_10,FUN_0431c7cc,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PresentTable");
    (*pcVar3)(plVar2,asStack_10,FUN_0431cc90,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PresentTable::StaticGetClass() */

long * PresentTable::StaticGetClass(void)

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
  uVar2 = ObjectTypeDescriptor::StaticGetClass();
  (*pcVar3)(plVar1,"PresentTable",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PresentTable::GetClass() const */

long * PresentTable::GetClass(void)

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
  uVar2 = ObjectTypeDescriptor::StaticGetClass();
  (*pcVar3)(plVar1,"PresentTable",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PresentTable::PresentTable() */

void __thiscall PresentTable::PresentTable(PresentTable *this)

{
  ObjectTypeDescriptor::ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  *(undefined ***)this = &PTR_GetClass_068335d0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  this[0x10] = (PresentTable)0x0;
  return;
}


/* PresentTable::StaticNew() */

PresentTable * PresentTable::StaticNew(void)

{
  PresentTable *this;
  
  this = ::operator_new(0x30);
  PresentTable(this);
  return this;
}


/* PresentTable::~PresentTable() */

void __thiscall PresentTable::~PresentTable(PresentTable *this)

{
  *(undefined ***)this = &PTR_GetClass_068335d0;
  std::vector<PresentTableEntry,std::allocator<PresentTableEntry>>::~vector
            ((vector<PresentTableEntry,std::allocator<PresentTableEntry>> *)(this + 0x18));
  ObjectTypeDescriptor::~ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  return;
}


/* PresentTable::~PresentTable() */

void __thiscall PresentTable::~PresentTable(PresentTable *this)

{
  ~PresentTable(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PresentTable::Roll(unsigned int) const */

void PresentTable::Roll(uint param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  uint in_w1;
  string *in_x8;
  undefined8 uVar5;
  ulong uVar6;
  ProbabilitySet<int> aPStack_38 [48];
  long local_8;
  
  uVar2 = (ulong)param_1;
  uVar5 = *(undefined8 *)(uVar2 + 0x18);
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_0431c6f0(uVar5,*(undefined8 *)(uVar2 + 0x20));
  if (lVar3 == 0) {
    std::string::string(in_x8,"");
    nop();
  }
  else if (lVar3 == 1) {
    FUN_0431c718(uVar5,0);
    FUN_05475d88();
  }
  else {
    ProbabilitySet<int>::ProbabilitySet(aPStack_38,(ulong)in_w1);
    uVar6 = 0;
    while( true ) {
      uVar5 = *(undefined8 *)(uVar2 + 0x18);
      uVar4 = FUN_0431c6f0(uVar5,*(undefined8 *)(uVar2 + 0x20));
      if (uVar4 <= uVar6) break;
      lVar3 = FUN_0431c718(uVar5,uVar6);
      ProbabilitySet<int>::AddItem(aPStack_38,(int)uVar6,*(int *)(lVar3 + 8));
      uVar6 = uVar6 + 1;
    }
    iVar1 = ProbabilitySet<int>::PickItem(aPStack_38);
    FUN_0431c718(*(undefined8 *)(uVar2 + 0x18),(long)iVar1);
    FUN_05475d88();
    ProbabilitySet<int>::~ProbabilitySet(aPStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

