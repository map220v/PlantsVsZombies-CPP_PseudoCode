// Class: NFSLinkageData


/* NFSLinkageData::NFSLinkageData() */

void __thiscall NFSLinkageData::NFSLinkageData(NFSLinkageData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_069ec100;
  *(undefined ***)(this + 8) = &PTR__NFSLinkageData_069ec168;
  DailySignBonus::DailySignBonus((DailySignBonus *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x68));
  *(undefined4 *)(this + 0x14) = 0;
  std::vector<NFSLinkageShopData,std::allocator<NFSLinkageShopData>>::clear
            ((vector<NFSLinkageShopData,std::allocator<NFSLinkageShopData>> *)(this + 0x68));
  std::vector<NFSLinkageTask,std::allocator<NFSLinkageTask>>::clear
            ((vector<NFSLinkageTask,std::allocator<NFSLinkageTask>> *)(this + 0x50));
  *(undefined4 *)(this + 0x80) = 0;
  return;
}


/* NFSLinkageData::~NFSLinkageData() */

void __thiscall NFSLinkageData::~NFSLinkageData(NFSLinkageData *this)

{
  *(undefined ***)this = &PTR_GetClass_069ec100;
  *(undefined ***)(this + 8) = &PTR__NFSLinkageData_069ec168;
  std::vector<NFSLinkageShopData,std::allocator<NFSLinkageShopData>>::~vector
            ((vector<NFSLinkageShopData,std::allocator<NFSLinkageShopData>> *)(this + 0x68));
  std::vector<NFSLinkageTask,std::allocator<NFSLinkageTask>>::~vector
            ((vector<NFSLinkageTask,std::allocator<NFSLinkageTask>> *)(this + 0x50));
  DailySignBonus::~DailySignBonus((DailySignBonus *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NFSLinkageData::~NFSLinkageData() */

void __thiscall NFSLinkageData::~NFSLinkageData(NFSLinkageData *this)

{
  ~NFSLinkageData(this + -8);
  return;
}


/* NFSLinkageData::~NFSLinkageData() */

void __thiscall NFSLinkageData::~NFSLinkageData(NFSLinkageData *this)

{
  ~NFSLinkageData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NFSLinkageData::~NFSLinkageData() */

void __thiscall NFSLinkageData::~NFSLinkageData(NFSLinkageData *this)

{
  ~NFSLinkageData(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NFSLinkageData::StaticClassInit() */

void NFSLinkageData::StaticClassInit(void)

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
    std::string::string(asStack_10,"NFSLinkageTask");
    (*pcVar3)(plVar2,asStack_10,FUN_04e9073c,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NFSLinkageShopData");
    (*pcVar3)(plVar2,asStack_10,FUN_04e8dabc,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NFSLinkageData");
    (*pcVar3)(plVar2,asStack_10,FUN_04e90bb0,0x88,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NFSLinkageData::StaticGetClass() */

long * NFSLinkageData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NFSLinkageData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NFSLinkageData::GetClass() const */

long * NFSLinkageData::GetClass(void)

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
  (*pcVar3)(plVar1,"NFSLinkageData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NFSLinkageData::StaticNew() */

NFSLinkageData * NFSLinkageData::StaticNew(void)

{
  NFSLinkageData *this;
  
  this = ::operator_new(0x88);
  NFSLinkageData(this);
  return this;
}


/* NFSLinkageData::TEMPNAMEPLACEHOLDERVALUE(NFSLinkageData const&) */

NFSLinkageData * __thiscall NFSLinkageData::operator=(NFSLinkageData *this,NFSLinkageData *param_1)

{
  INetworkData::operator=((INetworkData *)this,(INetworkData *)param_1);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  DailySignBonus::operator=((DailySignBonus *)(this + 0x18),(DailySignBonus *)(param_1 + 0x18));
  std::vector<NFSLinkageTask,std::allocator<NFSLinkageTask>>::operator=
            ((vector<NFSLinkageTask,std::allocator<NFSLinkageTask>> *)(this + 0x50),
             (vector *)(param_1 + 0x50));
  std::vector<NFSLinkageShopData,std::allocator<NFSLinkageShopData>>::operator=
            ((vector<NFSLinkageShopData,std::allocator<NFSLinkageShopData>> *)(this + 0x68),
             (vector *)(param_1 + 0x68));
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  return this;
}

