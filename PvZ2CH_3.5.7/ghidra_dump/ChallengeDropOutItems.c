// Class: ChallengeDropOutItems


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengeDropOutItems::StaticClassInit() */

void ChallengeDropOutItems::StaticClassInit(void)

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
    std::string::string(asStack_10,"ChallengeItemData");
    (*pcVar3)(plVar2,asStack_10,FUN_0451aa3c,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ChallengeGroupData");
    (*pcVar3)(plVar2,asStack_10,FUN_045204a0,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ChallengeDropOutItemGroup");
    (*pcVar3)(plVar2,asStack_10,FUN_04520628,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ChallengeDropOutItems");
    (*pcVar3)(plVar2,asStack_10,FUN_04520820,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChallengeDropOutItems::StaticGetClass() */

long * ChallengeDropOutItems::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ChallengeDropOutItems",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ChallengeDropOutItems::GetClass() const */

long * ChallengeDropOutItems::GetClass(void)

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
  (*pcVar3)(plVar1,"ChallengeDropOutItems",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ChallengeDropOutItems::ChallengeDropOutItems() */

void __thiscall ChallengeDropOutItems::ChallengeDropOutItems(ChallengeDropOutItems *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06857b90;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* ChallengeDropOutItems::StaticNew() */

ChallengeDropOutItems * ChallengeDropOutItems::StaticNew(void)

{
  ChallengeDropOutItems *this;
  
  this = ::operator_new(0x20);
  ChallengeDropOutItems(this);
  return this;
}


/* ChallengeDropOutItems::~ChallengeDropOutItems() */

void __thiscall ChallengeDropOutItems::~ChallengeDropOutItems(ChallengeDropOutItems *this)

{
  *(undefined ***)this = &PTR_GetClass_06857b90;
  std::vector<ChallengeDropOutItemGroup,std::allocator<ChallengeDropOutItemGroup>>::~vector
            ((vector<ChallengeDropOutItemGroup,std::allocator<ChallengeDropOutItemGroup>> *)
             (this + 8));
  nop();
  return;
}


/* ChallengeDropOutItems::~ChallengeDropOutItems() */

void __thiscall ChallengeDropOutItems::~ChallengeDropOutItems(ChallengeDropOutItems *this)

{
  ~ChallengeDropOutItems(this);
  AK::FreeHook(this);
  return;
}

