// Class: New_S2C_ItemAddInfo


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* New_S2C_ItemAddInfo::StaticClassInit() */

void New_S2C_ItemAddInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"NetworkItemInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_0320338c,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"New_S2C_ItemAddInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_0323ac60,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* New_S2C_ItemAddInfo::StaticGetClass() */

long * New_S2C_ItemAddInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"New_S2C_ItemAddInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* New_S2C_ItemAddInfo::GetClass() const */

long * New_S2C_ItemAddInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"New_S2C_ItemAddInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* New_S2C_ItemAddInfo::New_S2C_ItemAddInfo() */

void __thiscall New_S2C_ItemAddInfo::New_S2C_ItemAddInfo(New_S2C_ItemAddInfo *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0660e7a0;
  *(undefined ***)(this + 8) = &PTR__New_S2C_ItemAddInfo_0660e808;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* New_S2C_ItemAddInfo::StaticNew() */

New_S2C_ItemAddInfo * New_S2C_ItemAddInfo::StaticNew(void)

{
  New_S2C_ItemAddInfo *this;
  
  this = ::operator_new(0x30);
  New_S2C_ItemAddInfo(this);
  return this;
}


/* New_S2C_ItemAddInfo::~New_S2C_ItemAddInfo() */

void __thiscall New_S2C_ItemAddInfo::~New_S2C_ItemAddInfo(New_S2C_ItemAddInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_0660e7a0;
  *(undefined ***)(this + 8) = &PTR__New_S2C_ItemAddInfo_0660e808;
  std::vector<NetworkItemInfo,std::allocator<NetworkItemInfo>>::~vector
            ((vector<NetworkItemInfo,std::allocator<NetworkItemInfo>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to New_S2C_ItemAddInfo::~New_S2C_ItemAddInfo() */

void __thiscall New_S2C_ItemAddInfo::~New_S2C_ItemAddInfo(New_S2C_ItemAddInfo *this)

{
  ~New_S2C_ItemAddInfo(this + -8);
  return;
}


/* New_S2C_ItemAddInfo::~New_S2C_ItemAddInfo() */

void __thiscall New_S2C_ItemAddInfo::~New_S2C_ItemAddInfo(New_S2C_ItemAddInfo *this)

{
  ~New_S2C_ItemAddInfo(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to New_S2C_ItemAddInfo::~New_S2C_ItemAddInfo() */

void __thiscall New_S2C_ItemAddInfo::~New_S2C_ItemAddInfo(New_S2C_ItemAddInfo *this)

{
  ~New_S2C_ItemAddInfo(this + -8);
  return;
}

