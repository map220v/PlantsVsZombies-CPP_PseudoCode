// Class: AccumulatedLoginData


/* AccumulatedLoginData::AccumulatedLoginData() */

void __thiscall AccumulatedLoginData::AccumulatedLoginData(AccumulatedLoginData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_069f4a80;
  *(undefined ***)(this + 8) = &PTR__AccumulatedLoginData_069f4ae8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  return;
}


/* AccumulatedLoginData::~AccumulatedLoginData() */

void __thiscall AccumulatedLoginData::~AccumulatedLoginData(AccumulatedLoginData *this)

{
  *(undefined ***)this = &PTR_GetClass_069f4a80;
  *(undefined ***)(this + 8) = &PTR__AccumulatedLoginData_069f4ae8;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x48));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x30));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to AccumulatedLoginData::~AccumulatedLoginData() */

void __thiscall AccumulatedLoginData::~AccumulatedLoginData(AccumulatedLoginData *this)

{
  ~AccumulatedLoginData(this + -8);
  return;
}


/* AccumulatedLoginData::~AccumulatedLoginData() */

void __thiscall AccumulatedLoginData::~AccumulatedLoginData(AccumulatedLoginData *this)

{
  ~AccumulatedLoginData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to AccumulatedLoginData::~AccumulatedLoginData() */

void __thiscall AccumulatedLoginData::~AccumulatedLoginData(AccumulatedLoginData *this)

{
  ~AccumulatedLoginData(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccumulatedLoginData::StaticClassInit() */

void AccumulatedLoginData::StaticClassInit(void)

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
    std::string::string(asStack_10,"AccumulatedLoginData");
    (*pcVar2)(plVar1,asStack_10,FUN_04ebaa4c,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AccumulatedLoginData::StaticGetClass() */

long * AccumulatedLoginData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AccumulatedLoginData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AccumulatedLoginData::GetClass() const */

long * AccumulatedLoginData::GetClass(void)

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
  (*pcVar3)(plVar1,"AccumulatedLoginData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AccumulatedLoginData::StaticNew() */

AccumulatedLoginData * AccumulatedLoginData::StaticNew(void)

{
  AccumulatedLoginData *this;
  
  this = ::operator_new(0x68);
  AccumulatedLoginData(this);
  return this;
}


/* AccumulatedLoginData::TEMPNAMEPLACEHOLDERVALUE(AccumulatedLoginData const&) */

AccumulatedLoginData * __thiscall
AccumulatedLoginData::operator=(AccumulatedLoginData *this,AccumulatedLoginData *param_1)

{
  undefined4 uVar1;
  
  INetworkData::operator=((INetworkData *)this,(INetworkData *)param_1);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x30),(vector *)(param_1 + 0x30));
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x48),(vector *)(param_1 + 0x48));
  uVar1 = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = uVar1;
  return this;
}

