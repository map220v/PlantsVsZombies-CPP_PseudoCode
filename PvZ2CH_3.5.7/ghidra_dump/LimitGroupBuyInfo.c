// Class: LimitGroupBuyInfo


/* LimitGroupBuyInfo::LimitGroupBuyInfo() */

void __thiscall LimitGroupBuyInfo::LimitGroupBuyInfo(LimitGroupBuyInfo *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_066ec910;
  *(undefined ***)(this + 8) = &PTR__LimitGroupBuyInfo_066ec978;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  return;
}


/* LimitGroupBuyInfo::~LimitGroupBuyInfo() */

void __thiscall LimitGroupBuyInfo::~LimitGroupBuyInfo(LimitGroupBuyInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_066ec910;
  *(undefined ***)(this + 8) = &PTR__LimitGroupBuyInfo_066ec978;
  std::vector<LimitGroupBuyItemInfo,std::allocator<LimitGroupBuyItemInfo>>::~vector
            ((vector<LimitGroupBuyItemInfo,std::allocator<LimitGroupBuyItemInfo>> *)(this + 0x48));
  std::vector<LimitGroupBuyItemInfo,std::allocator<LimitGroupBuyItemInfo>>::~vector
            ((vector<LimitGroupBuyItemInfo,std::allocator<LimitGroupBuyItemInfo>> *)(this + 0x30));
  std::vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>>::~vector
            ((vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to LimitGroupBuyInfo::~LimitGroupBuyInfo() */

void __thiscall LimitGroupBuyInfo::~LimitGroupBuyInfo(LimitGroupBuyInfo *this)

{
  ~LimitGroupBuyInfo(this + -8);
  return;
}


/* LimitGroupBuyInfo::~LimitGroupBuyInfo() */

void __thiscall LimitGroupBuyInfo::~LimitGroupBuyInfo(LimitGroupBuyInfo *this)

{
  ~LimitGroupBuyInfo(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to LimitGroupBuyInfo::~LimitGroupBuyInfo() */

void __thiscall LimitGroupBuyInfo::~LimitGroupBuyInfo(LimitGroupBuyInfo *this)

{
  ~LimitGroupBuyInfo(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitGroupBuyInfo::StaticClassInit() */

void LimitGroupBuyInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"NDLoginRewardBonus");
    (*pcVar3)(plVar2,asStack_10,FUN_039c24dc,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"LimitGroupBuyItemInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_039c2244,0x14,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"LimitGroupBuyInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_039c5944,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LimitGroupBuyInfo::StaticGetClass() */

long * LimitGroupBuyInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LimitGroupBuyInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LimitGroupBuyInfo::GetClass() const */

long * LimitGroupBuyInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"LimitGroupBuyInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LimitGroupBuyInfo::StaticNew() */

LimitGroupBuyInfo * LimitGroupBuyInfo::StaticNew(void)

{
  LimitGroupBuyInfo *this;
  
  this = ::operator_new(0x68);
  LimitGroupBuyInfo(this);
  return this;
}


/* LimitGroupBuyInfo::TEMPNAMEPLACEHOLDERVALUE(LimitGroupBuyInfo const&) */

LimitGroupBuyInfo * __thiscall
LimitGroupBuyInfo::operator=(LimitGroupBuyInfo *this,LimitGroupBuyInfo *param_1)

{
  undefined4 uVar1;
  
  INetworkData::operator=((INetworkData *)this,(INetworkData *)param_1);
  std::vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>>::operator=
            ((vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  std::vector<LimitGroupBuyItemInfo,std::allocator<LimitGroupBuyItemInfo>>::operator=
            ((vector<LimitGroupBuyItemInfo,std::allocator<LimitGroupBuyItemInfo>> *)(this + 0x30),
             (vector *)(param_1 + 0x30));
  std::vector<LimitGroupBuyItemInfo,std::allocator<LimitGroupBuyItemInfo>>::operator=
            ((vector<LimitGroupBuyItemInfo,std::allocator<LimitGroupBuyItemInfo>> *)(this + 0x48),
             (vector *)(param_1 + 0x48));
  uVar1 = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = uVar1;
  return this;
}

