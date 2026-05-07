// Class: S2C_ICloud_SignReward


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_ICloud_SignReward::StaticClassInit() */

void S2C_ICloud_SignReward::StaticClassInit(void)

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
    (*pcVar3)(plVar2,asStack_10,FUN_031fe610,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"S2C_DailySign");
    (*pcVar3)(plVar2,asStack_10,FUN_031fe4c4,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"S2C_ICloud_SignReward");
    (*pcVar3)(plVar2,asStack_10,FUN_032304d0,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_ICloud_SignReward::StaticGetClass() */

long * S2C_ICloud_SignReward::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_ICloud_SignReward",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_ICloud_SignReward::GetClass() const */

long * S2C_ICloud_SignReward::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_ICloud_SignReward",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_ICloud_SignReward::S2C_ICloud_SignReward() */

void __thiscall S2C_ICloud_SignReward::S2C_ICloud_SignReward(S2C_ICloud_SignReward *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0660a2f0;
  *(undefined ***)(this + 8) = &PTR__S2C_ICloud_SignReward_0660a358;
  Sexy::FlagsMod::FlagsMod((FlagsMod *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  return;
}


/* S2C_ICloud_SignReward::StaticNew() */

S2C_ICloud_SignReward * S2C_ICloud_SignReward::StaticNew(void)

{
  S2C_ICloud_SignReward *this;
  
  this = ::operator_new(0x50);
  S2C_ICloud_SignReward(this);
  return this;
}


/* S2C_ICloud_SignReward::~S2C_ICloud_SignReward() */

void __thiscall S2C_ICloud_SignReward::~S2C_ICloud_SignReward(S2C_ICloud_SignReward *this)

{
  *(undefined ***)this = &PTR_GetClass_0660a2f0;
  *(undefined ***)(this + 8) = &PTR__S2C_ICloud_SignReward_0660a358;
  std::vector<S2C_DailySignContent,std::allocator<S2C_DailySignContent>>::~vector
            ((vector<S2C_DailySignContent,std::allocator<S2C_DailySignContent>> *)(this + 0x38));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x20));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_ICloud_SignReward::~S2C_ICloud_SignReward() */

void __thiscall S2C_ICloud_SignReward::~S2C_ICloud_SignReward(S2C_ICloud_SignReward *this)

{
  ~S2C_ICloud_SignReward(this + -8);
  return;
}


/* S2C_ICloud_SignReward::~S2C_ICloud_SignReward() */

void __thiscall S2C_ICloud_SignReward::~S2C_ICloud_SignReward(S2C_ICloud_SignReward *this)

{
  ~S2C_ICloud_SignReward(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_ICloud_SignReward::~S2C_ICloud_SignReward() */

void __thiscall S2C_ICloud_SignReward::~S2C_ICloud_SignReward(S2C_ICloud_SignReward *this)

{
  ~S2C_ICloud_SignReward(this + -8);
  return;
}

