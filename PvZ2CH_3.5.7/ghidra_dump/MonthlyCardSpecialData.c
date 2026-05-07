// Class: MonthlyCardSpecialData


/* MonthlyCardSpecialData::MonthlyCardSpecialData() */

void __thiscall MonthlyCardSpecialData::MonthlyCardSpecialData(MonthlyCardSpecialData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_069bfe00;
  *(undefined ***)(this + 8) = &PTR__MonthlyCardSpecialData_069bfe68;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<MonthlyCardSpecialItemData,std::allocator<MonthlyCardSpecialItemData>>::clear
            ((vector<MonthlyCardSpecialItemData,std::allocator<MonthlyCardSpecialItemData>> *)
             (this + 0x18));
  return;
}


/* MonthlyCardSpecialData::~MonthlyCardSpecialData() */

void __thiscall MonthlyCardSpecialData::~MonthlyCardSpecialData(MonthlyCardSpecialData *this)

{
  *(undefined ***)this = &PTR_GetClass_069bfe00;
  *(undefined ***)(this + 8) = &PTR__MonthlyCardSpecialData_069bfe68;
  std::vector<MonthlyCardSpecialItemData,std::allocator<MonthlyCardSpecialItemData>>::~vector
            ((vector<MonthlyCardSpecialItemData,std::allocator<MonthlyCardSpecialItemData>> *)
             (this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to MonthlyCardSpecialData::~MonthlyCardSpecialData() */

void __thiscall MonthlyCardSpecialData::~MonthlyCardSpecialData(MonthlyCardSpecialData *this)

{
  ~MonthlyCardSpecialData(this + -8);
  return;
}


/* MonthlyCardSpecialData::~MonthlyCardSpecialData() */

void __thiscall MonthlyCardSpecialData::~MonthlyCardSpecialData(MonthlyCardSpecialData *this)

{
  ~MonthlyCardSpecialData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to MonthlyCardSpecialData::~MonthlyCardSpecialData() */

void __thiscall MonthlyCardSpecialData::~MonthlyCardSpecialData(MonthlyCardSpecialData *this)

{
  ~MonthlyCardSpecialData(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MonthlyCardSpecialData::StaticClassInit() */

void MonthlyCardSpecialData::StaticClassInit(void)

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
    std::string::string(asStack_10,"MonthlyCardSpecialData");
    (*pcVar2)(plVar1,asStack_10,FUN_04db5d74,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MonthlyCardSpecialData::StaticGetClass() */

long * MonthlyCardSpecialData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MonthlyCardSpecialData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MonthlyCardSpecialData::GetClass() const */

long * MonthlyCardSpecialData::GetClass(void)

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
  (*pcVar3)(plVar1,"MonthlyCardSpecialData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MonthlyCardSpecialData::StaticNew() */

MonthlyCardSpecialData * MonthlyCardSpecialData::StaticNew(void)

{
  MonthlyCardSpecialData *this;
  
  this = ::operator_new(0x30);
  MonthlyCardSpecialData(this);
  return this;
}


/* MonthlyCardSpecialData::MonthlyCardSpecialData(MonthlyCardSpecialData const&) */

void __thiscall
MonthlyCardSpecialData::MonthlyCardSpecialData
          (MonthlyCardSpecialData *this,MonthlyCardSpecialData *param_1)

{
  INetworkData::INetworkData((INetworkData *)this,(INetworkData *)param_1);
  *(undefined ***)this = &PTR_GetClass_069bfe00;
  *(undefined ***)(this + 8) = &PTR__MonthlyCardSpecialData_069bfe68;
  std::vector<MonthlyCardSpecialItemData,std::allocator<MonthlyCardSpecialItemData>>::vector
            ((vector<MonthlyCardSpecialItemData,std::allocator<MonthlyCardSpecialItemData>> *)
             (this + 0x18),(vector *)(param_1 + 0x18));
  return;
}


/* MonthlyCardSpecialData::TEMPNAMEPLACEHOLDERVALUE(MonthlyCardSpecialData const&) */

MonthlyCardSpecialData * __thiscall
MonthlyCardSpecialData::operator=(MonthlyCardSpecialData *this,MonthlyCardSpecialData *param_1)

{
  INetworkData::operator=((INetworkData *)this,(INetworkData *)param_1);
  std::vector<MonthlyCardSpecialItemData,std::allocator<MonthlyCardSpecialItemData>>::operator=
            ((vector<MonthlyCardSpecialItemData,std::allocator<MonthlyCardSpecialItemData>> *)
             (this + 0x18),(vector *)(param_1 + 0x18));
  return this;
}

