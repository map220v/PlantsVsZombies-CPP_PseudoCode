// Class: S2C_PVP_Unlock


/* S2C_PVP_Unlock::S2C_PVP_Unlock() */

void __thiscall S2C_PVP_Unlock::S2C_PVP_Unlock(S2C_PVP_Unlock *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR_GetClass_0660bb30;
  *(undefined ***)(this + 8) = &PTR__S2C_PVP_Unlock_0660bb98;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  *(undefined4 *)(this + 0x14) = 0;
  return;
}


/* S2C_PVP_Unlock::~S2C_PVP_Unlock() */

void __thiscall S2C_PVP_Unlock::~S2C_PVP_Unlock(S2C_PVP_Unlock *this)

{
  *(undefined ***)this = &PTR_GetClass_0660bb30;
  *(undefined ***)(this + 8) = &PTR__S2C_PVP_Unlock_0660bb98;
  std::vector<S2C_PVP_BigMapPVPInfo,std::allocator<S2C_PVP_BigMapPVPInfo>>::~vector
            ((vector<S2C_PVP_BigMapPVPInfo,std::allocator<S2C_PVP_BigMapPVPInfo>> *)(this + 0x38));
  std::vector<S2C_PVP_BigMapInfo,std::allocator<S2C_PVP_BigMapInfo>>::~vector
            ((vector<S2C_PVP_BigMapInfo,std::allocator<S2C_PVP_BigMapInfo>> *)(this + 0x20));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_PVP_Unlock::~S2C_PVP_Unlock() */

void __thiscall S2C_PVP_Unlock::~S2C_PVP_Unlock(S2C_PVP_Unlock *this)

{
  ~S2C_PVP_Unlock(this + -8);
  return;
}


/* S2C_PVP_Unlock::~S2C_PVP_Unlock() */

void __thiscall S2C_PVP_Unlock::~S2C_PVP_Unlock(S2C_PVP_Unlock *this)

{
  ~S2C_PVP_Unlock(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_PVP_Unlock::~S2C_PVP_Unlock() */

void __thiscall S2C_PVP_Unlock::~S2C_PVP_Unlock(S2C_PVP_Unlock *this)

{
  ~S2C_PVP_Unlock(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_PVP_Unlock::StaticClassInit() */

void S2C_PVP_Unlock::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_PVP_Unlock");
    (*pcVar2)(plVar1,asStack_10,FUN_03227de4,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_PVP_Unlock::StaticGetClass() */

long * S2C_PVP_Unlock::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_PVP_Unlock",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_PVP_Unlock::GetClass() const */

long * S2C_PVP_Unlock::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_PVP_Unlock",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_PVP_Unlock::StaticNew() */

S2C_PVP_Unlock * S2C_PVP_Unlock::StaticNew(void)

{
  S2C_PVP_Unlock *this;
  
  this = ::operator_new(0x50);
  S2C_PVP_Unlock(this);
  return this;
}

