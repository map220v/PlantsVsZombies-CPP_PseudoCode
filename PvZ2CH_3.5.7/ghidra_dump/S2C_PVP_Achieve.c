// Class: S2C_PVP_Achieve


/* S2C_PVP_Achieve::S2C_PVP_Achieve() */

void __thiscall S2C_PVP_Achieve::S2C_PVP_Achieve(S2C_PVP_Achieve *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined ***)this = &PTR_GetClass_0660baa0;
  *(undefined ***)(this + 8) = &PTR__S2C_PVP_Achieve_0660bb08;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  return;
}


/* S2C_PVP_Achieve::~S2C_PVP_Achieve() */

void __thiscall S2C_PVP_Achieve::~S2C_PVP_Achieve(S2C_PVP_Achieve *this)

{
  *(undefined ***)this = &PTR_GetClass_0660baa0;
  *(undefined ***)(this + 8) = &PTR__S2C_PVP_Achieve_0660bb08;
  std::vector<S2C_PVP_BigMapInfo,std::allocator<S2C_PVP_BigMapInfo>>::~vector
            ((vector<S2C_PVP_BigMapInfo,std::allocator<S2C_PVP_BigMapInfo>> *)(this + 0x28));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_PVP_Achieve::~S2C_PVP_Achieve() */

void __thiscall S2C_PVP_Achieve::~S2C_PVP_Achieve(S2C_PVP_Achieve *this)

{
  ~S2C_PVP_Achieve(this + -8);
  return;
}


/* S2C_PVP_Achieve::~S2C_PVP_Achieve() */

void __thiscall S2C_PVP_Achieve::~S2C_PVP_Achieve(S2C_PVP_Achieve *this)

{
  ~S2C_PVP_Achieve(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_PVP_Achieve::~S2C_PVP_Achieve() */

void __thiscall S2C_PVP_Achieve::~S2C_PVP_Achieve(S2C_PVP_Achieve *this)

{
  ~S2C_PVP_Achieve(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_PVP_Achieve::StaticClassInit() */

void S2C_PVP_Achieve::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_PVP_Achieve");
    (*pcVar2)(plVar1,asStack_10,FUN_03227a18,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_PVP_Achieve::StaticGetClass() */

long * S2C_PVP_Achieve::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_PVP_Achieve",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_PVP_Achieve::GetClass() const */

long * S2C_PVP_Achieve::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_PVP_Achieve",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_PVP_Achieve::StaticNew() */

S2C_PVP_Achieve * S2C_PVP_Achieve::StaticNew(void)

{
  S2C_PVP_Achieve *this;
  
  this = ::operator_new(0x40);
  S2C_PVP_Achieve(this);
  return this;
}

