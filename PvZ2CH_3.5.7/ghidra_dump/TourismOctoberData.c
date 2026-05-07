// Class: TourismOctoberData


/* TourismOctoberData::TourismOctoberData() */

void __thiscall TourismOctoberData::TourismOctoberData(TourismOctoberData *this)

{
  undefined **__n;
  
  INetworkData::INetworkData((INetworkData *)this);
  __n = &PTR_GetClass_069edc60;
  *(undefined ***)this = &PTR_GetClass_069edc60;
  *(undefined ***)(this + 8) = &PTR__TourismOctoberData_069edcc8;
  Set8BytesTo0((string *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x78));
  *(undefined4 *)(this + 0x14) = 0;
  std::string::append((string *)(this + 0x18),"",(size_t)__n);
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  std::vector<TourismOctoberPlayerData,std::allocator<TourismOctoberPlayerData>>::clear
            ((vector<TourismOctoberPlayerData,std::allocator<TourismOctoberPlayerData>> *)
             (this + 0x30));
  std::vector<TourismOctoberPlayerInfo,std::allocator<TourismOctoberPlayerInfo>>::clear
            ((vector<TourismOctoberPlayerInfo,std::allocator<TourismOctoberPlayerInfo>> *)
             (this + 0x48));
  std::vector<TourismOctoberShopData,std::allocator<TourismOctoberShopData>>::clear
            ((vector<TourismOctoberShopData,std::allocator<TourismOctoberShopData>> *)(this + 0x78))
  ;
  return;
}


/* TourismOctoberData::~TourismOctoberData() */

void __thiscall TourismOctoberData::~TourismOctoberData(TourismOctoberData *this)

{
  *(undefined ***)this = &PTR_GetClass_069edc60;
  *(undefined ***)(this + 8) = &PTR__TourismOctoberData_069edcc8;
  std::vector<TourismOctoberShopData,std::allocator<TourismOctoberShopData>>::~vector
            ((vector<TourismOctoberShopData,std::allocator<TourismOctoberShopData>> *)(this + 0x78))
  ;
  std::vector<TourismOctoberTaskDate,std::allocator<TourismOctoberTaskDate>>::~vector
            ((vector<TourismOctoberTaskDate,std::allocator<TourismOctoberTaskDate>> *)(this + 0x60))
  ;
  std::vector<TourismOctoberPlayerInfo,std::allocator<TourismOctoberPlayerInfo>>::~vector
            ((vector<TourismOctoberPlayerInfo,std::allocator<TourismOctoberPlayerInfo>> *)
             (this + 0x48));
  std::vector<TourismOctoberPlayerData,std::allocator<TourismOctoberPlayerData>>::~vector
            ((vector<TourismOctoberPlayerData,std::allocator<TourismOctoberPlayerData>> *)
             (this + 0x30));
  std::string::~string((string *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to TourismOctoberData::~TourismOctoberData() */

void __thiscall TourismOctoberData::~TourismOctoberData(TourismOctoberData *this)

{
  ~TourismOctoberData(this + -8);
  return;
}


/* TourismOctoberData::~TourismOctoberData() */

void __thiscall TourismOctoberData::~TourismOctoberData(TourismOctoberData *this)

{
  ~TourismOctoberData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to TourismOctoberData::~TourismOctoberData() */

void __thiscall TourismOctoberData::~TourismOctoberData(TourismOctoberData *this)

{
  ~TourismOctoberData(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TourismOctoberData::StaticClassInit() */

void TourismOctoberData::StaticClassInit(void)

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
    std::string::string(asStack_10,"TourismOctoberPlayerData");
    (*pcVar3)(plVar2,asStack_10,FUN_04e9570c,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"TourismOctoberTaskDate");
    (*pcVar3)(plVar2,asStack_10,FUN_04e98de4,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"TourismOctoberShopData");
    (*pcVar3)(plVar2,asStack_10,FUN_04e952c8,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"TourismOctoberPlayerInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_04e98abc,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"TourismOctoberData");
    (*pcVar3)(plVar2,asStack_10,FUN_04e9b550,0x90,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TourismOctoberData::StaticGetClass() */

long * TourismOctoberData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TourismOctoberData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TourismOctoberData::GetClass() const */

long * TourismOctoberData::GetClass(void)

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
  (*pcVar3)(plVar1,"TourismOctoberData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TourismOctoberData::StaticNew() */

TourismOctoberData * TourismOctoberData::StaticNew(void)

{
  TourismOctoberData *this;
  
  this = ::operator_new(0x90);
  TourismOctoberData(this);
  return this;
}


/* TourismOctoberData::TourismOctoberData(TourismOctoberData const&) */

void __thiscall
TourismOctoberData::TourismOctoberData(TourismOctoberData *this,TourismOctoberData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  INetworkData::INetworkData((INetworkData *)this,(INetworkData *)param_1);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined ***)this = &PTR_GetClass_069edc60;
  *(undefined ***)(this + 8) = &PTR__TourismOctoberData_069edcc8;
  FUN_05475d88(this + 0x18,param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x20) = uVar1;
  *(undefined4 *)(this + 0x24) = uVar2;
  std::vector<TourismOctoberPlayerData,std::allocator<TourismOctoberPlayerData>>::vector
            ((vector<TourismOctoberPlayerData,std::allocator<TourismOctoberPlayerData>> *)
             (this + 0x30),(vector *)(param_1 + 0x30));
  std::vector<TourismOctoberPlayerInfo,std::allocator<TourismOctoberPlayerInfo>>::vector
            ((vector<TourismOctoberPlayerInfo,std::allocator<TourismOctoberPlayerInfo>> *)
             (this + 0x48),(vector *)(param_1 + 0x48));
  std::vector<TourismOctoberTaskDate,std::allocator<TourismOctoberTaskDate>>::vector
            ((vector<TourismOctoberTaskDate,std::allocator<TourismOctoberTaskDate>> *)(this + 0x60),
             (vector *)(param_1 + 0x60));
  std::vector<TourismOctoberShopData,std::allocator<TourismOctoberShopData>>::vector
            ((vector<TourismOctoberShopData,std::allocator<TourismOctoberShopData>> *)(this + 0x78),
             (vector *)(param_1 + 0x78));
  return;
}


/* TourismOctoberData::TEMPNAMEPLACEHOLDERVALUE(TourismOctoberData const&) */

TourismOctoberData * __thiscall
TourismOctoberData::operator=(TourismOctoberData *this,TourismOctoberData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  INetworkData::operator=((INetworkData *)this,(INetworkData *)param_1);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  thunk_FUN_05475e00(this + 0x18,param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x20) = uVar1;
  *(undefined4 *)(this + 0x24) = uVar2;
  std::vector<TourismOctoberPlayerData,std::allocator<TourismOctoberPlayerData>>::operator=
            ((vector<TourismOctoberPlayerData,std::allocator<TourismOctoberPlayerData>> *)
             (this + 0x30),(vector *)(param_1 + 0x30));
  std::vector<TourismOctoberPlayerInfo,std::allocator<TourismOctoberPlayerInfo>>::operator=
            ((vector<TourismOctoberPlayerInfo,std::allocator<TourismOctoberPlayerInfo>> *)
             (this + 0x48),(vector *)(param_1 + 0x48));
  std::vector<TourismOctoberTaskDate,std::allocator<TourismOctoberTaskDate>>::operator=
            ((vector<TourismOctoberTaskDate,std::allocator<TourismOctoberTaskDate>> *)(this + 0x60),
             (vector *)(param_1 + 0x60));
  std::vector<TourismOctoberShopData,std::allocator<TourismOctoberShopData>>::operator=
            ((vector<TourismOctoberShopData,std::allocator<TourismOctoberShopData>> *)(this + 0x78),
             (vector *)(param_1 + 0x78));
  return this;
}

