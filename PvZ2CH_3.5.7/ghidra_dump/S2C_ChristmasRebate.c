// Class: S2C_ChristmasRebate


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_ChristmasRebate::StaticClassInit() */

void S2C_ChristmasRebate::StaticClassInit(void)

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
    std::string::string(asStack_10,"RebateRewardItem");
    (*pcVar3)(plVar2,asStack_10,FUN_031ff098,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"S2C_ChristmasRebate");
    (*pcVar3)(plVar2,asStack_10,FUN_03225b94,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_ChristmasRebate::StaticGetClass() */

long * S2C_ChristmasRebate::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_ChristmasRebate",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_ChristmasRebate::GetClass() const */

long * S2C_ChristmasRebate::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_ChristmasRebate",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_ChristmasRebate::S2C_ChristmasRebate() */

void __thiscall S2C_ChristmasRebate::S2C_ChristmasRebate(S2C_ChristmasRebate *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0660ab60;
  *(undefined ***)(this + 8) = &PTR__S2C_ChristmasRebate_0660abc8;
  Sexy::FlagsMod::FlagsMod((FlagsMod *)(this + 0x14));
  Sexy::FlagsMod::FlagsMod((FlagsMod *)(this + 0x1c));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  return;
}


/* S2C_ChristmasRebate::StaticNew() */

S2C_ChristmasRebate * S2C_ChristmasRebate::StaticNew(void)

{
  S2C_ChristmasRebate *this;
  
  this = ::operator_new(0x40);
  S2C_ChristmasRebate(this);
  return this;
}


/* S2C_ChristmasRebate::~S2C_ChristmasRebate() */

void __thiscall S2C_ChristmasRebate::~S2C_ChristmasRebate(S2C_ChristmasRebate *this)

{
  *(undefined ***)this = &PTR_GetClass_0660ab60;
  *(undefined ***)(this + 8) = &PTR__S2C_ChristmasRebate_0660abc8;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x28));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_ChristmasRebate::~S2C_ChristmasRebate() */

void __thiscall S2C_ChristmasRebate::~S2C_ChristmasRebate(S2C_ChristmasRebate *this)

{
  ~S2C_ChristmasRebate(this + -8);
  return;
}


/* S2C_ChristmasRebate::~S2C_ChristmasRebate() */

void __thiscall S2C_ChristmasRebate::~S2C_ChristmasRebate(S2C_ChristmasRebate *this)

{
  ~S2C_ChristmasRebate(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_ChristmasRebate::~S2C_ChristmasRebate() */

void __thiscall S2C_ChristmasRebate::~S2C_ChristmasRebate(S2C_ChristmasRebate *this)

{
  ~S2C_ChristmasRebate(this + -8);
  return;
}

