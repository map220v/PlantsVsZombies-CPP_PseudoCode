// Class: FightZodiacData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FightZodiacData::StaticClassInit() */

void FightZodiacData::StaticClassInit(void)

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
    std::string::string(asStack_10,"FightZodiacData");
    (*pcVar2)(plVar1,asStack_10,FUN_039cf5c8,0x90,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FightZodiacData::StaticGetClass() */

long * FightZodiacData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"FightZodiacData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FightZodiacData::GetClass() const */

long * FightZodiacData::GetClass(void)

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
  (*pcVar3)(plVar1,"FightZodiacData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FightZodiacData::FightZodiacData() */

void __thiscall FightZodiacData::FightZodiacData(FightZodiacData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_066f0ee0;
  *(undefined ***)(this + 8) = &PTR__FightZodiacData_066f0f48;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x78));
  return;
}


/* FightZodiacData::StaticNew() */

FightZodiacData * FightZodiacData::StaticNew(void)

{
  FightZodiacData *this;
  
  this = ::operator_new(0x90);
  FightZodiacData(this);
  return this;
}


/* FightZodiacData::~FightZodiacData() */

void __thiscall FightZodiacData::~FightZodiacData(FightZodiacData *this)

{
  *(undefined ***)this = &PTR_GetClass_066f0ee0;
  *(undefined ***)(this + 8) = &PTR__FightZodiacData_066f0f48;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x78));
  std::vector<S2C_FightZodiacStateInfo,std::allocator<S2C_FightZodiacStateInfo>>::~vector
            ((vector<S2C_FightZodiacStateInfo,std::allocator<S2C_FightZodiacStateInfo>> *)
             (this + 0x60));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x48));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x20));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to FightZodiacData::~FightZodiacData() */

void __thiscall FightZodiacData::~FightZodiacData(FightZodiacData *this)

{
  ~FightZodiacData(this + -8);
  return;
}


/* FightZodiacData::~FightZodiacData() */

void __thiscall FightZodiacData::~FightZodiacData(FightZodiacData *this)

{
  ~FightZodiacData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to FightZodiacData::~FightZodiacData() */

void __thiscall FightZodiacData::~FightZodiacData(FightZodiacData *this)

{
  ~FightZodiacData(this + -8);
  return;
}

