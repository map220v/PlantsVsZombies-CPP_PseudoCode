// Class: CornucopiaBubbleRewardData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CornucopiaBubbleRewardData::StaticClassInit() */

void CornucopiaBubbleRewardData::StaticClassInit(void)

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
    std::string::string(asStack_10,"CornucopiaBubbleRewardData");
    (*pcVar2)(plVar1,asStack_10,FUN_04e5b9f8,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CornucopiaBubbleRewardData::StaticGetClass() */

long * CornucopiaBubbleRewardData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CornucopiaBubbleRewardData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CornucopiaBubbleRewardData::GetClass() const */

long * CornucopiaBubbleRewardData::GetClass(void)

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
  (*pcVar3)(plVar1,"CornucopiaBubbleRewardData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CornucopiaBubbleRewardData::CornucopiaBubbleRewardData() */

void __thiscall
CornucopiaBubbleRewardData::CornucopiaBubbleRewardData(CornucopiaBubbleRewardData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_069e2f80;
  *(undefined ***)(this + 8) = &PTR__CornucopiaBubbleRewardData_069e2fe8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::clear
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x18));
  std::vector<CornucopiaBubbleHarvestData,std::allocator<CornucopiaBubbleHarvestData>>::clear
            ((vector<CornucopiaBubbleHarvestData,std::allocator<CornucopiaBubbleHarvestData>> *)
             (this + 0x30));
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  return;
}


/* CornucopiaBubbleRewardData::StaticNew() */

CornucopiaBubbleRewardData * CornucopiaBubbleRewardData::StaticNew(void)

{
  CornucopiaBubbleRewardData *this;
  
  this = ::operator_new(0x60);
  CornucopiaBubbleRewardData(this);
  return this;
}


/* CornucopiaBubbleRewardData::~CornucopiaBubbleRewardData() */

void __thiscall
CornucopiaBubbleRewardData::~CornucopiaBubbleRewardData(CornucopiaBubbleRewardData *this)

{
  *(undefined ***)this = &PTR_GetClass_069e2f80;
  *(undefined ***)(this + 8) = &PTR__CornucopiaBubbleRewardData_069e2fe8;
  std::vector<CornucopiaBubbleHarvestData,std::allocator<CornucopiaBubbleHarvestData>>::~vector
            ((vector<CornucopiaBubbleHarvestData,std::allocator<CornucopiaBubbleHarvestData>> *)
             (this + 0x30));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to CornucopiaBubbleRewardData::~CornucopiaBubbleRewardData() */

void __thiscall
CornucopiaBubbleRewardData::~CornucopiaBubbleRewardData(CornucopiaBubbleRewardData *this)

{
  ~CornucopiaBubbleRewardData(this + -8);
  return;
}


/* CornucopiaBubbleRewardData::~CornucopiaBubbleRewardData() */

void __thiscall
CornucopiaBubbleRewardData::~CornucopiaBubbleRewardData(CornucopiaBubbleRewardData *this)

{
  ~CornucopiaBubbleRewardData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CornucopiaBubbleRewardData::~CornucopiaBubbleRewardData() */

void __thiscall
CornucopiaBubbleRewardData::~CornucopiaBubbleRewardData(CornucopiaBubbleRewardData *this)

{
  ~CornucopiaBubbleRewardData(this + -8);
  return;
}

