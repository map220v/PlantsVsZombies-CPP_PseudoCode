// Class: CardGameEndOfPlayData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameEndOfPlayData::StaticClassInit() */

void CardGameEndOfPlayData::StaticClassInit(void)

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
    std::string::string(asStack_10,"CardGameEndOfPlayData");
    (*pcVar2)(plVar1,asStack_10,FUN_0356e908,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameEndOfPlayData::StaticGetClass() */

long * CardGameEndOfPlayData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CardGameEndOfPlayData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardGameEndOfPlayData::GetClass() const */

long * CardGameEndOfPlayData::GetClass(void)

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
  (*pcVar3)(plVar1,"CardGameEndOfPlayData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardGameEndOfPlayData::CardGameEndOfPlayData() */

void __thiscall CardGameEndOfPlayData::CardGameEndOfPlayData(CardGameEndOfPlayData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0665b930;
  *(undefined ***)(this + 8) = &PTR__CardGameEndOfPlayData_0665b998;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  return;
}


/* CardGameEndOfPlayData::StaticNew() */

CardGameEndOfPlayData * CardGameEndOfPlayData::StaticNew(void)

{
  CardGameEndOfPlayData *this;
  
  this = ::operator_new(0x68);
  CardGameEndOfPlayData(this);
  return this;
}


/* CardGameEndOfPlayData::~CardGameEndOfPlayData() */

void __thiscall CardGameEndOfPlayData::~CardGameEndOfPlayData(CardGameEndOfPlayData *this)

{
  *(undefined ***)this = &PTR_GetClass_0665b930;
  *(undefined ***)(this + 8) = &PTR__CardGameEndOfPlayData_0665b998;
  std::vector<CardGameCardInfo,std::allocator<CardGameCardInfo>>::~vector
            ((vector<CardGameCardInfo,std::allocator<CardGameCardInfo>> *)(this + 0x50));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x30));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to CardGameEndOfPlayData::~CardGameEndOfPlayData() */

void __thiscall CardGameEndOfPlayData::~CardGameEndOfPlayData(CardGameEndOfPlayData *this)

{
  ~CardGameEndOfPlayData(this + -8);
  return;
}


/* CardGameEndOfPlayData::~CardGameEndOfPlayData() */

void __thiscall CardGameEndOfPlayData::~CardGameEndOfPlayData(CardGameEndOfPlayData *this)

{
  ~CardGameEndOfPlayData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CardGameEndOfPlayData::~CardGameEndOfPlayData() */

void __thiscall CardGameEndOfPlayData::~CardGameEndOfPlayData(CardGameEndOfPlayData *this)

{
  ~CardGameEndOfPlayData(this + -8);
  return;
}


/* CardGameEndOfPlayData::TEMPNAMEPLACEHOLDERVALUE(CardGameEndOfPlayData const&) */

CardGameEndOfPlayData * __thiscall
CardGameEndOfPlayData::operator=(CardGameEndOfPlayData *this,CardGameEndOfPlayData *param_1)

{
  INetworkData::operator=((INetworkData *)this,(INetworkData *)param_1);
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x30),
             (vector *)(param_1 + 0x30));
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  std::vector<CardGameCardInfo,std::allocator<CardGameCardInfo>>::operator=
            ((vector<CardGameCardInfo,std::allocator<CardGameCardInfo>> *)(this + 0x50),
             (vector *)(param_1 + 0x50));
  return this;
}


/* CardGameEndOfPlayData::CardGameEndOfPlayData(CardGameEndOfPlayData const&) */

void __thiscall
CardGameEndOfPlayData::CardGameEndOfPlayData
          (CardGameEndOfPlayData *this,CardGameEndOfPlayData *param_1)

{
  INetworkData::INetworkData((INetworkData *)this,(INetworkData *)param_1);
  *(undefined ***)this = &PTR_GetClass_0665b930;
  *(undefined ***)(this + 8) = &PTR__CardGameEndOfPlayData_0665b998;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x30),
             (vector *)(param_1 + 0x30));
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  std::vector<CardGameCardInfo,std::allocator<CardGameCardInfo>>::vector
            ((vector<CardGameCardInfo,std::allocator<CardGameCardInfo>> *)(this + 0x50),
             (vector *)(param_1 + 0x50));
  return;
}

