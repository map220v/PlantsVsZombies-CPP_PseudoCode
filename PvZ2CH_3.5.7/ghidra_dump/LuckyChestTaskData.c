// Class: LuckyChestTaskData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LuckyChestTaskData::StaticClassInit() */

void LuckyChestTaskData::StaticClassInit(void)

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
    std::string::string(asStack_10,"LuckyChestTaskData");
    (*pcVar2)(plVar1,asStack_10,FUN_04eb4d08,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LuckyChestTaskData::StaticGetClass() */

long * LuckyChestTaskData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LuckyChestTaskData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LuckyChestTaskData::GetClass() const */

long * LuckyChestTaskData::GetClass(void)

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
  (*pcVar3)(plVar1,"LuckyChestTaskData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LuckyChestTaskData::LuckyChestTaskData() */

void __thiscall LuckyChestTaskData::LuckyChestTaskData(LuckyChestTaskData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_069f2f10;
  *(undefined ***)(this + 8) = &PTR__LuckyChestTaskData_069f2f78;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  return;
}


/* LuckyChestTaskData::StaticNew() */

LuckyChestTaskData * LuckyChestTaskData::StaticNew(void)

{
  LuckyChestTaskData *this;
  
  this = ::operator_new(0x48);
  LuckyChestTaskData(this);
  return this;
}


/* LuckyChestTaskData::LuckyChestTaskData(LuckyChestTaskData&&) */

void __thiscall
LuckyChestTaskData::LuckyChestTaskData(LuckyChestTaskData *this,LuckyChestTaskData *param_1)

{
  INetworkData::INetworkData((INetworkData *)this,(INetworkData *)param_1);
  *(undefined ***)this = &PTR_GetClass_069f2f10;
  *(undefined ***)(this + 8) = &PTR__LuckyChestTaskData_069f2f78;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x18),(vector *)(param_1 + 0x18));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x30),(vector *)(param_1 + 0x30));
  return;
}


/* LuckyChestTaskData::~LuckyChestTaskData() */

void __thiscall LuckyChestTaskData::~LuckyChestTaskData(LuckyChestTaskData *this)

{
  *(undefined ***)this = &PTR_GetClass_069f2f10;
  *(undefined ***)(this + 8) = &PTR__LuckyChestTaskData_069f2f78;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x30));
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::~vector((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
             *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to LuckyChestTaskData::~LuckyChestTaskData() */

void __thiscall LuckyChestTaskData::~LuckyChestTaskData(LuckyChestTaskData *this)

{
  ~LuckyChestTaskData(this + -8);
  return;
}


/* LuckyChestTaskData::~LuckyChestTaskData() */

void __thiscall LuckyChestTaskData::~LuckyChestTaskData(LuckyChestTaskData *this)

{
  ~LuckyChestTaskData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to LuckyChestTaskData::~LuckyChestTaskData() */

void __thiscall LuckyChestTaskData::~LuckyChestTaskData(LuckyChestTaskData *this)

{
  ~LuckyChestTaskData(this + -8);
  return;
}


/* LuckyChestTaskData::LuckyChestTaskData(LuckyChestTaskData const&) */

void __thiscall
LuckyChestTaskData::LuckyChestTaskData(LuckyChestTaskData *this,LuckyChestTaskData *param_1)

{
  INetworkData::INetworkData((INetworkData *)this,(INetworkData *)param_1);
  *(undefined ***)this = &PTR_GetClass_069f2f10;
  *(undefined ***)(this + 8) = &PTR__LuckyChestTaskData_069f2f78;
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::vector((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
            *)(this + 0x18),(vector *)(param_1 + 0x18));
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x30),(vector *)(param_1 + 0x30));
  return;
}

