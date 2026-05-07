// Class: PiggyBankRewardData


/* PiggyBankRewardData::PiggyBankRewardData() */

void __thiscall PiggyBankRewardData::PiggyBankRewardData(PiggyBankRewardData *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)this = &PTR_GetClass_066d91a0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  return;
}


/* PiggyBankRewardData::~PiggyBankRewardData() */

void __thiscall PiggyBankRewardData::~PiggyBankRewardData(PiggyBankRewardData *this)

{
  *(undefined ***)this = &PTR_GetClass_066d91a0;
  std::vector<S2C_DailySignContent,std::allocator<S2C_DailySignContent>>::~vector
            ((vector<S2C_DailySignContent,std::allocator<S2C_DailySignContent>> *)(this + 0x28));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x10));
  nop();
  return;
}


/* PiggyBankRewardData::~PiggyBankRewardData() */

void __thiscall PiggyBankRewardData::~PiggyBankRewardData(PiggyBankRewardData *this)

{
  ~PiggyBankRewardData(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PiggyBankRewardData::StaticClassInit() */

void PiggyBankRewardData::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_DailySignContent");
    (*pcVar3)(plVar2,asStack_10,FUN_03979094,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PiggyBankRewardData");
    (*pcVar3)(plVar2,asStack_10,FUN_0397acec,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PiggyBankRewardData::StaticGetClass() */

long * PiggyBankRewardData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PiggyBankRewardData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PiggyBankRewardData::GetClass() const */

long * PiggyBankRewardData::GetClass(void)

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
  (*pcVar3)(plVar1,"PiggyBankRewardData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PiggyBankRewardData::StaticNew() */

PiggyBankRewardData * PiggyBankRewardData::StaticNew(void)

{
  PiggyBankRewardData *this;
  
  this = ::operator_new(0x40);
  PiggyBankRewardData(this);
  return this;
}

