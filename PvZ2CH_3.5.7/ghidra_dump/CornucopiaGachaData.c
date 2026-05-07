// Class: CornucopiaGachaData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CornucopiaGachaData::StaticClassInit() */

void CornucopiaGachaData::StaticClassInit(void)

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
    std::string::string(asStack_10,"CornucopiaGachaData");
    (*pcVar2)(plVar1,asStack_10,FUN_04e5a918,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CornucopiaGachaData::StaticGetClass() */

long * CornucopiaGachaData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CornucopiaGachaData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CornucopiaGachaData::GetClass() const */

long * CornucopiaGachaData::GetClass(void)

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
  (*pcVar3)(plVar1,"CornucopiaGachaData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CornucopiaGachaData::CornucopiaGachaData() */

void __thiscall CornucopiaGachaData::CornucopiaGachaData(CornucopiaGachaData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_069e2ef0;
  *(undefined ***)(this + 8) = &PTR__CornucopiaGachaData_069e2f58;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::clear
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x18));
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  return;
}


/* CornucopiaGachaData::StaticNew() */

CornucopiaGachaData * CornucopiaGachaData::StaticNew(void)

{
  CornucopiaGachaData *this;
  
  this = ::operator_new(0x40);
  CornucopiaGachaData(this);
  return this;
}


/* CornucopiaGachaData::~CornucopiaGachaData() */

void __thiscall CornucopiaGachaData::~CornucopiaGachaData(CornucopiaGachaData *this)

{
  *(undefined ***)this = &PTR_GetClass_069e2ef0;
  *(undefined ***)(this + 8) = &PTR__CornucopiaGachaData_069e2f58;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to CornucopiaGachaData::~CornucopiaGachaData() */

void __thiscall CornucopiaGachaData::~CornucopiaGachaData(CornucopiaGachaData *this)

{
  ~CornucopiaGachaData(this + -8);
  return;
}


/* CornucopiaGachaData::~CornucopiaGachaData() */

void __thiscall CornucopiaGachaData::~CornucopiaGachaData(CornucopiaGachaData *this)

{
  ~CornucopiaGachaData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CornucopiaGachaData::~CornucopiaGachaData() */

void __thiscall CornucopiaGachaData::~CornucopiaGachaData(CornucopiaGachaData *this)

{
  ~CornucopiaGachaData(this + -8);
  return;
}

