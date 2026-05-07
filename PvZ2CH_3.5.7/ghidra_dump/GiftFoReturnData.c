// Class: GiftFoReturnData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GiftFoReturnData::StaticClassInit() */

void GiftFoReturnData::StaticClassInit(void)

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
    std::string::string(asStack_10,"GiftFoReturnSignInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_0348e8fc,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"GiftFoReturnTaskInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_0348e65c,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"GiftFoReturnTaskRewardInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_0348e494,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"GiftFoReturnData");
    (*pcVar3)(plVar2,asStack_10,FUN_0348ecbc,0x100,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GiftFoReturnData::StaticGetClass() */

long * GiftFoReturnData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GiftFoReturnData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GiftFoReturnData::GetClass() const */

long * GiftFoReturnData::GetClass(void)

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
  (*pcVar3)(plVar1,"GiftFoReturnData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GiftFoReturnData::GiftFoReturnData() */

void __thiscall GiftFoReturnData::GiftFoReturnData(GiftFoReturnData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_066405a0;
  *(undefined ***)(this + 8) = &PTR__GiftFoReturnData_06640608;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  *(undefined4 *)(this + 0x40) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x78));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x90));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xa8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xc0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe8));
  return;
}


/* GiftFoReturnData::StaticNew() */

GiftFoReturnData * GiftFoReturnData::StaticNew(void)

{
  GiftFoReturnData *this;
  
  this = ::operator_new(0x100);
  GiftFoReturnData(this);
  return this;
}


/* GiftFoReturnData::~GiftFoReturnData() */

void __thiscall GiftFoReturnData::~GiftFoReturnData(GiftFoReturnData *this)

{
  *(undefined ***)this = &PTR_GetClass_066405a0;
  *(undefined ***)(this + 8) = &PTR__GiftFoReturnData_06640608;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0xe8));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0xc0));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0xa8));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x90));
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::~vector((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
             *)(this + 0x78));
  std::vector<GiftFoReturnTaskRewardInfo,std::allocator<GiftFoReturnTaskRewardInfo>>::~vector
            ((vector<GiftFoReturnTaskRewardInfo,std::allocator<GiftFoReturnTaskRewardInfo>> *)
             (this + 0x60));
  std::vector<GiftFoReturnTaskInfo,std::allocator<GiftFoReturnTaskInfo>>::~vector
            ((vector<GiftFoReturnTaskInfo,std::allocator<GiftFoReturnTaskInfo>> *)(this + 0x48));
  std::vector<GiftFoReturnSignInfo,std::allocator<GiftFoReturnSignInfo>>::~vector
            ((vector<GiftFoReturnSignInfo,std::allocator<GiftFoReturnSignInfo>> *)(this + 0x20));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to GiftFoReturnData::~GiftFoReturnData() */

void __thiscall GiftFoReturnData::~GiftFoReturnData(GiftFoReturnData *this)

{
  ~GiftFoReturnData(this + -8);
  return;
}


/* GiftFoReturnData::~GiftFoReturnData() */

void __thiscall GiftFoReturnData::~GiftFoReturnData(GiftFoReturnData *this)

{
  ~GiftFoReturnData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GiftFoReturnData::~GiftFoReturnData() */

void __thiscall GiftFoReturnData::~GiftFoReturnData(GiftFoReturnData *this)

{
  ~GiftFoReturnData(this + -8);
  return;
}

