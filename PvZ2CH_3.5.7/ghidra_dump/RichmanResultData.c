// Class: RichmanResultData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RichmanResultData::StaticClassInit() */

void RichmanResultData::StaticClassInit(void)

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
    std::string::string(asStack_10,"LotteryBonus");
    (*pcVar3)(plVar2,asStack_10,FUN_04c45308,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"RichmanResultData");
    (*pcVar3)(plVar2,asStack_10,FUN_04c4748c,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RichmanResultData::StaticGetClass() */

long * RichmanResultData::StaticGetClass(void)

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
  uVar2 = INetworkData::StaticGetClass();
  (*pcVar3)(plVar1,"RichmanResultData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RichmanResultData::GetClass() const */

long * RichmanResultData::GetClass(void)

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
  uVar2 = INetworkData::StaticGetClass();
  (*pcVar3)(plVar1,"RichmanResultData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RichmanResultData::RichmanResultData() */

void __thiscall RichmanResultData::RichmanResultData(RichmanResultData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06987d10;
  *(undefined ***)(this + 8) = &PTR__RichmanResultData_06987d78;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* RichmanResultData::StaticNew() */

RichmanResultData * RichmanResultData::StaticNew(void)

{
  RichmanResultData *this;
  
  this = ::operator_new(0x38);
  RichmanResultData(this);
  return this;
}


/* RichmanResultData::~RichmanResultData() */

void __thiscall RichmanResultData::~RichmanResultData(RichmanResultData *this)

{
  *(undefined ***)this = &PTR_GetClass_06987d10;
  *(undefined ***)(this + 8) = &PTR__RichmanResultData_06987d78;
  std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
            ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to RichmanResultData::~RichmanResultData() */

void __thiscall RichmanResultData::~RichmanResultData(RichmanResultData *this)

{
  ~RichmanResultData(this + -8);
  return;
}


/* RichmanResultData::~RichmanResultData() */

void __thiscall RichmanResultData::~RichmanResultData(RichmanResultData *this)

{
  ~RichmanResultData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to RichmanResultData::~RichmanResultData() */

void __thiscall RichmanResultData::~RichmanResultData(RichmanResultData *this)

{
  ~RichmanResultData(this + -8);
  return;
}

