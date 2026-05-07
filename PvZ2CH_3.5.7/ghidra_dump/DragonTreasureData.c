// Class: DragonTreasureData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DragonTreasureData::StaticClassInit() */

void DragonTreasureData::StaticClassInit(void)

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
    std::string::string(asStack_10,"DragonTreasureItemData");
    (*pcVar3)(plVar2,asStack_10,FUN_03499d1c,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"DragonTreasureShopData");
    (*pcVar3)(plVar2,asStack_10,FUN_03499af4,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"DragonTreasureData");
    (*pcVar3)(plVar2,asStack_10,FUN_0349da78,200,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DragonTreasureData::StaticGetClass() */

long * DragonTreasureData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DragonTreasureData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DragonTreasureData::GetClass() const */

long * DragonTreasureData::GetClass(void)

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
  (*pcVar3)(plVar1,"DragonTreasureData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DragonTreasureData::DragonTreasureData() */

void __thiscall DragonTreasureData::DragonTreasureData(DragonTreasureData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_066436e0;
  *(undefined ***)(this + 8) = &PTR__DragonTreasureData_06643748;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
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


/* DragonTreasureData::StaticNew() */

DragonTreasureData * DragonTreasureData::StaticNew(void)

{
  DragonTreasureData *this;
  
  this = ::operator_new(200);
  DragonTreasureData(this);
  return this;
}


/* DragonTreasureData::~DragonTreasureData() */

void __thiscall DragonTreasureData::~DragonTreasureData(DragonTreasureData *this)

{
  *(undefined ***)this = &PTR_GetClass_066436e0;
  *(undefined ***)(this + 8) = &PTR__DragonTreasureData_06643748;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0xb0));
  std::vector<DragonTreasureShopData,std::allocator<DragonTreasureShopData>>::~vector
            ((vector<DragonTreasureShopData,std::allocator<DragonTreasureShopData>> *)(this + 0x98))
  ;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x80));
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::~vector((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
             *)(this + 0x68));
  std::
  vector<std::vector<DragonTreasureItemData,std::allocator<DragonTreasureItemData>>,std::allocator<std::vector<DragonTreasureItemData,std::allocator<DragonTreasureItemData>>>>
  ::~vector((vector<std::vector<DragonTreasureItemData,std::allocator<DragonTreasureItemData>>,std::allocator<std::vector<DragonTreasureItemData,std::allocator<DragonTreasureItemData>>>>
             *)(this + 0x48));
  std::vector<DragonTreasureItemData,std::allocator<DragonTreasureItemData>>::~vector
            ((vector<DragonTreasureItemData,std::allocator<DragonTreasureItemData>> *)(this + 0x30))
  ;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to DragonTreasureData::~DragonTreasureData() */

void __thiscall DragonTreasureData::~DragonTreasureData(DragonTreasureData *this)

{
  ~DragonTreasureData(this + -8);
  return;
}


/* DragonTreasureData::~DragonTreasureData() */

void __thiscall DragonTreasureData::~DragonTreasureData(DragonTreasureData *this)

{
  ~DragonTreasureData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DragonTreasureData::~DragonTreasureData() */

void __thiscall DragonTreasureData::~DragonTreasureData(DragonTreasureData *this)

{
  ~DragonTreasureData(this + -8);
  return;
}

