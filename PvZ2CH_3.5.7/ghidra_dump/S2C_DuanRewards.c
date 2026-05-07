// Class: S2C_DuanRewards


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_DuanRewards::StaticClassInit() */

void S2C_DuanRewards::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"S2C_DuanRewards");
    (*pcVar2)(plVar1,asStack_10,FUN_035313c4,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_DuanRewards::StaticGetClass() */

long * S2C_DuanRewards::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_DuanRewards",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_DuanRewards::GetClass() const */

long * S2C_DuanRewards::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_DuanRewards",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_DuanRewards::S2C_DuanRewards() */

void __thiscall S2C_DuanRewards::S2C_DuanRewards(S2C_DuanRewards *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06651100;
  *(undefined ***)(this + 8) = &PTR__S2C_DuanRewards_06651168;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* S2C_DuanRewards::StaticNew() */

S2C_DuanRewards * S2C_DuanRewards::StaticNew(void)

{
  S2C_DuanRewards *this;
  
  this = ::operator_new(0x30);
  S2C_DuanRewards(this);
  return this;
}


/* S2C_DuanRewards::~S2C_DuanRewards() */

void __thiscall S2C_DuanRewards::~S2C_DuanRewards(S2C_DuanRewards *this)

{
  *(undefined ***)this = &PTR_GetClass_06651100;
  *(undefined ***)(this + 8) = &PTR__S2C_DuanRewards_06651168;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_DuanRewards::~S2C_DuanRewards() */

void __thiscall S2C_DuanRewards::~S2C_DuanRewards(S2C_DuanRewards *this)

{
  ~S2C_DuanRewards(this + -8);
  return;
}


/* S2C_DuanRewards::~S2C_DuanRewards() */

void __thiscall S2C_DuanRewards::~S2C_DuanRewards(S2C_DuanRewards *this)

{
  ~S2C_DuanRewards(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_DuanRewards::~S2C_DuanRewards() */

void __thiscall S2C_DuanRewards::~S2C_DuanRewards(S2C_DuanRewards *this)

{
  ~S2C_DuanRewards(this + -8);
  return;
}

