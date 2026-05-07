// Class: NetworkPennyClassroomData


/* NetworkPennyClassroomData::NetworkPennyClassroomData() */

void __thiscall
NetworkPennyClassroomData::NetworkPennyClassroomData(NetworkPennyClassroomData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_069ccb10;
  *(undefined ***)(this + 8) = &PTR__NetworkPennyClassroomData_069ccb78;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x68));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x80));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x98));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xb0));
  return;
}


/* NetworkPennyClassroomData::NetworkPennyClassroomData(NetworkPennyClassroomData const&) */

void __thiscall
NetworkPennyClassroomData::NetworkPennyClassroomData
          (NetworkPennyClassroomData *this,NetworkPennyClassroomData *param_1)

{
  undefined4 uVar1;
  
  INetworkData::INetworkData((INetworkData *)this,(INetworkData *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = uVar1;
  *(undefined ***)this = &PTR_GetClass_069ccb10;
  *(undefined ***)(this + 8) = &PTR__NetworkPennyClassroomData_069ccb78;
  std::vector<PennyClassroomPlantData,std::allocator<PennyClassroomPlantData>>::vector
            ((vector<PennyClassroomPlantData,std::allocator<PennyClassroomPlantData>> *)
             (this + 0x20),(vector *)(param_1 + 0x20));
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x38),(vector *)(param_1 + 0x38));
  std::
  vector<std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>,std::allocator<std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>>>
  ::vector((vector<std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>,std::allocator<std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>>>
            *)(this + 0x50),(vector *)(param_1 + 0x50));
  std::
  vector<std::vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>,std::allocator<std::vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>>>
  ::vector((vector<std::vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>,std::allocator<std::vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>>>
            *)(this + 0x68),(vector *)(param_1 + 0x68));
  std::vector<PennyClassroomShopData,std::allocator<PennyClassroomShopData>>::vector
            ((vector<PennyClassroomShopData,std::allocator<PennyClassroomShopData>> *)(this + 0x80),
             (vector *)(param_1 + 0x80));
  std::
  vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
  ::vector((vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
            *)(this + 0x98),(vector *)(param_1 + 0x98));
  std::
  vector<std::vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>,std::allocator<std::vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>>>
  ::vector((vector<std::vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>,std::allocator<std::vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>>>
            *)(this + 0xb0),(vector *)(param_1 + 0xb0));
  return;
}


/* NetworkPennyClassroomData::~NetworkPennyClassroomData() */

void __thiscall
NetworkPennyClassroomData::~NetworkPennyClassroomData(NetworkPennyClassroomData *this)

{
  *(undefined ***)this = &PTR_GetClass_069ccb10;
  *(undefined ***)(this + 8) = &PTR__NetworkPennyClassroomData_069ccb78;
  std::
  vector<std::vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>,std::allocator<std::vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>>>
  ::~vector((vector<std::vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>,std::allocator<std::vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>>>
             *)(this + 0xb0));
  std::
  vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
  ::~vector((vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
             *)(this + 0x98));
  std::vector<PennyClassroomShopData,std::allocator<PennyClassroomShopData>>::~vector
            ((vector<PennyClassroomShopData,std::allocator<PennyClassroomShopData>> *)(this + 0x80))
  ;
  std::
  vector<std::vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>,std::allocator<std::vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>>>
  ::~vector((vector<std::vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>,std::allocator<std::vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>>>
             *)(this + 0x68));
  std::
  vector<std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>,std::allocator<std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>>>
  ::~vector((vector<std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>,std::allocator<std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>>>
             *)(this + 0x50));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x38));
  std::vector<PennyClassroomPlantData,std::allocator<PennyClassroomPlantData>>::~vector
            ((vector<PennyClassroomPlantData,std::allocator<PennyClassroomPlantData>> *)
             (this + 0x20));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NetworkPennyClassroomData::~NetworkPennyClassroomData() */

void __thiscall
NetworkPennyClassroomData::~NetworkPennyClassroomData(NetworkPennyClassroomData *this)

{
  ~NetworkPennyClassroomData(this + -8);
  return;
}


/* NetworkPennyClassroomData::~NetworkPennyClassroomData() */

void __thiscall
NetworkPennyClassroomData::~NetworkPennyClassroomData(NetworkPennyClassroomData *this)

{
  ~NetworkPennyClassroomData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NetworkPennyClassroomData::~NetworkPennyClassroomData() */

void __thiscall
NetworkPennyClassroomData::~NetworkPennyClassroomData(NetworkPennyClassroomData *this)

{
  ~NetworkPennyClassroomData(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkPennyClassroomData::StaticClassInit() */

void NetworkPennyClassroomData::StaticClassInit(void)

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
    std::string::string(asStack_10,"PennyClassroomIconData");
    (*pcVar3)(plVar2,asStack_10,FUN_04de7dd8,4,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PennyClassroomShopData");
    (*pcVar3)(plVar2,asStack_10,FUN_04de7b40,0x14,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PennyClassroomPlantData");
    (*pcVar3)(plVar2,asStack_10,FUN_04de7980,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NetworkPennyClassroomData");
    (*pcVar3)(plVar2,asStack_10,FUN_04decfa8,200,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkPennyClassroomData::StaticGetClass() */

long * NetworkPennyClassroomData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkPennyClassroomData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkPennyClassroomData::GetClass() const */

long * NetworkPennyClassroomData::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkPennyClassroomData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkPennyClassroomData::StaticNew() */

NetworkPennyClassroomData * NetworkPennyClassroomData::StaticNew(void)

{
  NetworkPennyClassroomData *this;
  
  this = ::operator_new(200);
  NetworkPennyClassroomData(this);
  return this;
}


/* NetworkPennyClassroomData::TEMPNAMEPLACEHOLDERVALUE(NetworkPennyClassroomData const&) */

NetworkPennyClassroomData * __thiscall
NetworkPennyClassroomData::operator=
          (NetworkPennyClassroomData *this,NetworkPennyClassroomData *param_1)

{
  undefined4 uVar1;
  
  INetworkData::operator=((INetworkData *)this,(INetworkData *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x14) = uVar1;
  std::vector<PennyClassroomPlantData,std::allocator<PennyClassroomPlantData>>::operator=
            ((vector<PennyClassroomPlantData,std::allocator<PennyClassroomPlantData>> *)
             (this + 0x20),(vector *)(param_1 + 0x20));
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x38),(vector *)(param_1 + 0x38));
  std::
  vector<std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>,std::allocator<std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>>>
  ::operator=((vector<std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>,std::allocator<std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>>>
               *)(this + 0x50),(vector *)(param_1 + 0x50));
  std::
  vector<std::vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>,std::allocator<std::vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>>>
  ::operator=((vector<std::vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>,std::allocator<std::vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>>>
               *)(this + 0x68),(vector *)(param_1 + 0x68));
  std::vector<PennyClassroomShopData,std::allocator<PennyClassroomShopData>>::operator=
            ((vector<PennyClassroomShopData,std::allocator<PennyClassroomShopData>> *)(this + 0x80),
             (vector *)(param_1 + 0x80));
  std::
  vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
  ::operator=((vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
               *)(this + 0x98),(vector *)(param_1 + 0x98));
  std::
  vector<std::vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>,std::allocator<std::vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>>>
  ::operator=((vector<std::vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>,std::allocator<std::vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>>>
               *)(this + 0xb0),(vector *)(param_1 + 0xb0));
  return this;
}

