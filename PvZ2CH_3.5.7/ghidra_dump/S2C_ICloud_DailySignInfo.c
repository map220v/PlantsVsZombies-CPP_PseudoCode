// Class: S2C_ICloud_DailySignInfo


/* S2C_ICloud_DailySignInfo::S2C_ICloud_DailySignInfo() */

void __thiscall S2C_ICloud_DailySignInfo::S2C_ICloud_DailySignInfo(S2C_ICloud_DailySignInfo *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0660a890;
  *(undefined ***)(this + 8) = &PTR__S2C_ICloud_DailySignInfo_0660a8f8;
  Sexy::FlagsMod::FlagsMod((FlagsMod *)(this + 0x14));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  return;
}


/* S2C_ICloud_DailySignInfo::~S2C_ICloud_DailySignInfo() */

void __thiscall S2C_ICloud_DailySignInfo::~S2C_ICloud_DailySignInfo(S2C_ICloud_DailySignInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_0660a890;
  *(undefined ***)(this + 8) = &PTR__S2C_ICloud_DailySignInfo_0660a8f8;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x50));
  std::vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>>::~vector
            ((vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>> *)(this + 0x38));
  std::vector<S2C_DailySignContent,std::allocator<S2C_DailySignContent>>::~vector
            ((vector<S2C_DailySignContent,std::allocator<S2C_DailySignContent>> *)(this + 0x20));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_ICloud_DailySignInfo::~S2C_ICloud_DailySignInfo() */

void __thiscall S2C_ICloud_DailySignInfo::~S2C_ICloud_DailySignInfo(S2C_ICloud_DailySignInfo *this)

{
  ~S2C_ICloud_DailySignInfo(this + -8);
  return;
}


/* S2C_ICloud_DailySignInfo::~S2C_ICloud_DailySignInfo() */

void __thiscall S2C_ICloud_DailySignInfo::~S2C_ICloud_DailySignInfo(S2C_ICloud_DailySignInfo *this)

{
  ~S2C_ICloud_DailySignInfo(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_ICloud_DailySignInfo::~S2C_ICloud_DailySignInfo() */

void __thiscall S2C_ICloud_DailySignInfo::~S2C_ICloud_DailySignInfo(S2C_ICloud_DailySignInfo *this)

{
  ~S2C_ICloud_DailySignInfo(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_ICloud_DailySignInfo::StaticClassInit() */

void S2C_ICloud_DailySignInfo::StaticClassInit(void)

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
    (*pcVar3)(plVar2,asStack_10,FUN_031fef44,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"S2C_DailySign");
    (*pcVar3)(plVar2,asStack_10,FUN_031fedf8,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NDLoginRewardBonus");
    (*pcVar3)(plVar2,asStack_10,FUN_031feca4,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"S2C_ICloud_DailySignInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_0323104c,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_ICloud_DailySignInfo::StaticGetClass() */

long * S2C_ICloud_DailySignInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_ICloud_DailySignInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_ICloud_DailySignInfo::GetClass() const */

long * S2C_ICloud_DailySignInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_ICloud_DailySignInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_ICloud_DailySignInfo::StaticNew() */

S2C_ICloud_DailySignInfo * S2C_ICloud_DailySignInfo::StaticNew(void)

{
  S2C_ICloud_DailySignInfo *this;
  
  this = ::operator_new(0x78);
  S2C_ICloud_DailySignInfo(this);
  return this;
}

