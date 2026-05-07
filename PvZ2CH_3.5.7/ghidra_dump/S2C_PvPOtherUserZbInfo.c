// Class: S2C_PvPOtherUserZbInfo


/* S2C_PvPOtherUserZbInfo::S2C_PvPOtherUserZbInfo() */

void __thiscall S2C_PvPOtherUserZbInfo::S2C_PvPOtherUserZbInfo(S2C_PvPOtherUserZbInfo *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0660ba10;
  *(undefined ***)(this + 8) = &PTR__S2C_PvPOtherUserZbInfo_0660ba78;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


/* S2C_PvPOtherUserZbInfo::~S2C_PvPOtherUserZbInfo() */

void __thiscall S2C_PvPOtherUserZbInfo::~S2C_PvPOtherUserZbInfo(S2C_PvPOtherUserZbInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_0660ba10;
  *(undefined ***)(this + 8) = &PTR__S2C_PvPOtherUserZbInfo_0660ba78;
  std::vector<S2C_PVP_ZombieInfo,std::allocator<S2C_PVP_ZombieInfo>>::~vector
            ((vector<S2C_PVP_ZombieInfo,std::allocator<S2C_PVP_ZombieInfo>> *)(this + 0x20));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_PvPOtherUserZbInfo::~S2C_PvPOtherUserZbInfo() */

void __thiscall S2C_PvPOtherUserZbInfo::~S2C_PvPOtherUserZbInfo(S2C_PvPOtherUserZbInfo *this)

{
  ~S2C_PvPOtherUserZbInfo(this + -8);
  return;
}


/* S2C_PvPOtherUserZbInfo::~S2C_PvPOtherUserZbInfo() */

void __thiscall S2C_PvPOtherUserZbInfo::~S2C_PvPOtherUserZbInfo(S2C_PvPOtherUserZbInfo *this)

{
  ~S2C_PvPOtherUserZbInfo(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_PvPOtherUserZbInfo::~S2C_PvPOtherUserZbInfo() */

void __thiscall S2C_PvPOtherUserZbInfo::~S2C_PvPOtherUserZbInfo(S2C_PvPOtherUserZbInfo *this)

{
  ~S2C_PvPOtherUserZbInfo(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_PvPOtherUserZbInfo::StaticClassInit() */

void S2C_PvPOtherUserZbInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_PvPOtherUserZbInfo");
    (*pcVar2)(plVar1,asStack_10,FUN_032335ec,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_PvPOtherUserZbInfo::StaticGetClass() */

long * S2C_PvPOtherUserZbInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_PvPOtherUserZbInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_PvPOtherUserZbInfo::GetClass() const */

long * S2C_PvPOtherUserZbInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_PvPOtherUserZbInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_PvPOtherUserZbInfo::StaticNew() */

S2C_PvPOtherUserZbInfo * S2C_PvPOtherUserZbInfo::StaticNew(void)

{
  S2C_PvPOtherUserZbInfo *this;
  
  this = ::operator_new(0x38);
  S2C_PvPOtherUserZbInfo(this);
  return this;
}

