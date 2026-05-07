// Class: NewPlayerSpecialGiftData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPlayerSpecialGiftData::StaticClassInit() */

void NewPlayerSpecialGiftData::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPlayerSpecialGiftData");
    (*pcVar2)(plVar1,asStack_10,FUN_0344b484,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPlayerSpecialGiftData::StaticGetClass() */

long * NewPlayerSpecialGiftData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NewPlayerSpecialGiftData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPlayerSpecialGiftData::GetClass() const */

long * NewPlayerSpecialGiftData::GetClass(void)

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
  (*pcVar3)(plVar1,"NewPlayerSpecialGiftData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPlayerSpecialGiftData::NewPlayerSpecialGiftData() */

void __thiscall NewPlayerSpecialGiftData::NewPlayerSpecialGiftData(NewPlayerSpecialGiftData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06631c30;
  *(undefined ***)(this + 8) = &PTR__NewPlayerSpecialGiftData_06631c98;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  return;
}


/* NewPlayerSpecialGiftData::StaticNew() */

NewPlayerSpecialGiftData * NewPlayerSpecialGiftData::StaticNew(void)

{
  NewPlayerSpecialGiftData *this;
  
  this = ::operator_new(0x50);
  NewPlayerSpecialGiftData(this);
  return this;
}


/* NewPlayerSpecialGiftData::~NewPlayerSpecialGiftData() */

void __thiscall NewPlayerSpecialGiftData::~NewPlayerSpecialGiftData(NewPlayerSpecialGiftData *this)

{
  *(undefined ***)this = &PTR_GetClass_06631c30;
  *(undefined ***)(this + 8) = &PTR__NewPlayerSpecialGiftData_06631c98;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x30));
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::~vector((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
             *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NewPlayerSpecialGiftData::~NewPlayerSpecialGiftData() */

void __thiscall NewPlayerSpecialGiftData::~NewPlayerSpecialGiftData(NewPlayerSpecialGiftData *this)

{
  ~NewPlayerSpecialGiftData(this + -8);
  return;
}


/* NewPlayerSpecialGiftData::~NewPlayerSpecialGiftData() */

void __thiscall NewPlayerSpecialGiftData::~NewPlayerSpecialGiftData(NewPlayerSpecialGiftData *this)

{
  ~NewPlayerSpecialGiftData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NewPlayerSpecialGiftData::~NewPlayerSpecialGiftData() */

void __thiscall NewPlayerSpecialGiftData::~NewPlayerSpecialGiftData(NewPlayerSpecialGiftData *this)

{
  ~NewPlayerSpecialGiftData(this + -8);
  return;
}


/* NewPlayerSpecialGiftData::NewPlayerSpecialGiftData(NewPlayerSpecialGiftData const&) */

void __thiscall
NewPlayerSpecialGiftData::NewPlayerSpecialGiftData
          (NewPlayerSpecialGiftData *this,NewPlayerSpecialGiftData *param_1)

{
  undefined4 uVar1;
  
  INetworkData::INetworkData((INetworkData *)this,(INetworkData *)param_1);
  *(undefined ***)this = &PTR_GetClass_06631c30;
  *(undefined ***)(this + 8) = &PTR__NewPlayerSpecialGiftData_06631c98;
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::vector((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
            *)(this + 0x18),(vector *)(param_1 + 0x18));
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x30),(vector *)(param_1 + 0x30));
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x48) = uVar1;
  return;
}


/* NewPlayerSpecialGiftData::TEMPNAMEPLACEHOLDERVALUE(NewPlayerSpecialGiftData const&) */

NewPlayerSpecialGiftData * __thiscall
NewPlayerSpecialGiftData::operator=
          (NewPlayerSpecialGiftData *this,NewPlayerSpecialGiftData *param_1)

{
  undefined4 uVar1;
  
  INetworkData::operator=((INetworkData *)this,(INetworkData *)param_1);
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::operator=((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
               *)(this + 0x18),(vector *)(param_1 + 0x18));
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x30),(vector *)(param_1 + 0x30));
  uVar1 = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = uVar1;
  return this;
}

