// Class: S2C_ICloud_ResetPendant


/* S2C_ICloud_ResetPendant::S2C_ICloud_ResetPendant() */

void __thiscall S2C_ICloud_ResetPendant::S2C_ICloud_ResetPendant(S2C_ICloud_ResetPendant *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06609840;
  *(undefined ***)(this + 8) = &PTR__S2C_ICloud_ResetPendant_066098a8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  return;
}


/* S2C_ICloud_ResetPendant::~S2C_ICloud_ResetPendant() */

void __thiscall S2C_ICloud_ResetPendant::~S2C_ICloud_ResetPendant(S2C_ICloud_ResetPendant *this)

{
  *(undefined ***)this = &PTR_GetClass_06609840;
  *(undefined ***)(this + 8) = &PTR__S2C_ICloud_ResetPendant_066098a8;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x28));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_ICloud_ResetPendant::~S2C_ICloud_ResetPendant() */

void __thiscall S2C_ICloud_ResetPendant::~S2C_ICloud_ResetPendant(S2C_ICloud_ResetPendant *this)

{
  ~S2C_ICloud_ResetPendant(this + -8);
  return;
}


/* S2C_ICloud_ResetPendant::~S2C_ICloud_ResetPendant() */

void __thiscall S2C_ICloud_ResetPendant::~S2C_ICloud_ResetPendant(S2C_ICloud_ResetPendant *this)

{
  ~S2C_ICloud_ResetPendant(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_ICloud_ResetPendant::~S2C_ICloud_ResetPendant() */

void __thiscall S2C_ICloud_ResetPendant::~S2C_ICloud_ResetPendant(S2C_ICloud_ResetPendant *this)

{
  ~S2C_ICloud_ResetPendant(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_ICloud_ResetPendant::StaticClassInit() */

void S2C_ICloud_ResetPendant::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_ICloud_ResetPendant");
    (*pcVar2)(plVar1,asStack_10,FUN_03220f88,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_ICloud_ResetPendant::StaticGetClass() */

long * S2C_ICloud_ResetPendant::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_ICloud_ResetPendant",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_ICloud_ResetPendant::GetClass() const */

long * S2C_ICloud_ResetPendant::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_ICloud_ResetPendant",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_ICloud_ResetPendant::StaticNew() */

S2C_ICloud_ResetPendant * S2C_ICloud_ResetPendant::StaticNew(void)

{
  S2C_ICloud_ResetPendant *this;
  
  this = ::operator_new(0x40);
  S2C_ICloud_ResetPendant(this);
  return this;
}

