// Class: PennyGiftBoxData


/* PennyGiftBoxData::PennyGiftBoxData() */

void __thiscall PennyGiftBoxData::PennyGiftBoxData(PennyGiftBoxData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_069e7cd0;
  *(undefined ***)(this + 8) = &PTR__PennyGiftBoxData_069e7d38;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x78));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x90));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x110));
  return;
}


/* PennyGiftBoxData::~PennyGiftBoxData() */

void __thiscall PennyGiftBoxData::~PennyGiftBoxData(PennyGiftBoxData *this)

{
  *(undefined ***)this = &PTR_GetClass_069e7cd0;
  *(undefined ***)(this + 8) = &PTR__PennyGiftBoxData_069e7d38;
  std::vector<PennyGiftBoxConfigData,std::allocator<PennyGiftBoxConfigData>>::~vector
            ((vector<PennyGiftBoxConfigData,std::allocator<PennyGiftBoxConfigData>> *)(this + 0x110)
            );
  std::vector<CarnivalRewardData,std::allocator<CarnivalRewardData>>::~vector
            ((vector<CarnivalRewardData,std::allocator<CarnivalRewardData>> *)(this + 0xf8));
  std::vector<CarnivalRewardData,std::allocator<CarnivalRewardData>>::~vector
            ((vector<CarnivalRewardData,std::allocator<CarnivalRewardData>> *)(this + 0xe0));
  std::vector<PennyGiftBoxRankItemData,std::allocator<PennyGiftBoxRankItemData>>::~vector
            ((vector<PennyGiftBoxRankItemData,std::allocator<PennyGiftBoxRankItemData>> *)
             (this + 0x90));
  std::vector<PennyGiftBoxRankItemData,std::allocator<PennyGiftBoxRankItemData>>::~vector
            ((vector<PennyGiftBoxRankItemData,std::allocator<PennyGiftBoxRankItemData>> *)
             (this + 0x78));
  std::vector<PennyGiftBoxRankPriviewItemData,std::allocator<PennyGiftBoxRankPriviewItemData>>::
  ~vector((vector<PennyGiftBoxRankPriviewItemData,std::allocator<PennyGiftBoxRankPriviewItemData>> *
          )(this + 0x60));
  std::vector<PennyGiftBoxRankPriviewItemData,std::allocator<PennyGiftBoxRankPriviewItemData>>::
  ~vector((vector<PennyGiftBoxRankPriviewItemData,std::allocator<PennyGiftBoxRankPriviewItemData>> *
          )(this + 0x48));
  std::vector<PennyGiftBoxGrowData,std::allocator<PennyGiftBoxGrowData>>::~vector
            ((vector<PennyGiftBoxGrowData,std::allocator<PennyGiftBoxGrowData>> *)(this + 0x30));
  std::vector<PennyGiftBoxGrowData,std::allocator<PennyGiftBoxGrowData>>::~vector
            ((vector<PennyGiftBoxGrowData,std::allocator<PennyGiftBoxGrowData>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to PennyGiftBoxData::~PennyGiftBoxData() */

void __thiscall PennyGiftBoxData::~PennyGiftBoxData(PennyGiftBoxData *this)

{
  ~PennyGiftBoxData(this + -8);
  return;
}


/* PennyGiftBoxData::~PennyGiftBoxData() */

void __thiscall PennyGiftBoxData::~PennyGiftBoxData(PennyGiftBoxData *this)

{
  ~PennyGiftBoxData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PennyGiftBoxData::~PennyGiftBoxData() */

void __thiscall PennyGiftBoxData::~PennyGiftBoxData(PennyGiftBoxData *this)

{
  ~PennyGiftBoxData(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyGiftBoxData::StaticClassInit() */

void PennyGiftBoxData::StaticClassInit(void)

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
    std::string::string(asStack_10,"PennyGiftBoxRankPriviewItemData");
    (*pcVar3)(plVar2,asStack_10,FUN_04e7eaec,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PennyGiftBoxGrowData");
    (*pcVar3)(plVar2,asStack_10,FUN_04e7e83c,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"CarnivalRewardData");
    (*pcVar3)(plVar2,asStack_10,FUN_04e7e674,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PennyGiftBoxConfigData");
    (*pcVar3)(plVar2,asStack_10,FUN_04e7e524,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PennyGiftBoxData");
    (*pcVar3)(plVar2,asStack_10,FUN_04e7f8b8,0x130,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PennyGiftBoxData::StaticGetClass() */

long * PennyGiftBoxData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PennyGiftBoxData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyGiftBoxData::GetClass() const */

long * PennyGiftBoxData::GetClass(void)

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
  (*pcVar3)(plVar1,"PennyGiftBoxData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyGiftBoxData::StaticNew() */

PennyGiftBoxData * PennyGiftBoxData::StaticNew(void)

{
  PennyGiftBoxData *this;
  
  this = ::operator_new(0x130);
  PennyGiftBoxData(this);
  return this;
}


/* PennyGiftBoxData::PennyGiftBoxData(PennyGiftBoxData const&) */

void __thiscall PennyGiftBoxData::PennyGiftBoxData(PennyGiftBoxData *this,PennyGiftBoxData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  PennyGiftBoxData PVar12;
  PennyGiftBoxData PVar13;
  
  INetworkData::INetworkData((INetworkData *)this,(INetworkData *)param_1);
  *(undefined ***)this = &PTR_GetClass_069e7cd0;
  *(undefined ***)(this + 8) = &PTR__PennyGiftBoxData_069e7d38;
  std::vector<PennyGiftBoxGrowData,std::allocator<PennyGiftBoxGrowData>>::vector
            ((vector<PennyGiftBoxGrowData,std::allocator<PennyGiftBoxGrowData>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  std::vector<PennyGiftBoxGrowData,std::allocator<PennyGiftBoxGrowData>>::vector
            ((vector<PennyGiftBoxGrowData,std::allocator<PennyGiftBoxGrowData>> *)(this + 0x30),
             (vector *)(param_1 + 0x30));
  std::vector<PennyGiftBoxRankPriviewItemData,std::allocator<PennyGiftBoxRankPriviewItemData>>::
  vector((vector<PennyGiftBoxRankPriviewItemData,std::allocator<PennyGiftBoxRankPriviewItemData>> *)
         (this + 0x48),(vector *)(param_1 + 0x48));
  std::vector<PennyGiftBoxRankPriviewItemData,std::allocator<PennyGiftBoxRankPriviewItemData>>::
  vector((vector<PennyGiftBoxRankPriviewItemData,std::allocator<PennyGiftBoxRankPriviewItemData>> *)
         (this + 0x60),(vector *)(param_1 + 0x60));
  std::vector<PennyGiftBoxRankItemData,std::allocator<PennyGiftBoxRankItemData>>::vector
            ((vector<PennyGiftBoxRankItemData,std::allocator<PennyGiftBoxRankItemData>> *)
             (this + 0x78),(vector *)(param_1 + 0x78));
  std::vector<PennyGiftBoxRankItemData,std::allocator<PennyGiftBoxRankItemData>>::vector
            ((vector<PennyGiftBoxRankItemData,std::allocator<PennyGiftBoxRankItemData>> *)
             (this + 0x90),(vector *)(param_1 + 0x90));
  uVar1 = *(undefined4 *)(param_1 + 0xa8);
  uVar2 = *(undefined4 *)(param_1 + 0xac);
  uVar3 = *(undefined4 *)(param_1 + 0xb0);
  uVar4 = *(undefined4 *)(param_1 + 0xb4);
  PVar12 = param_1[0xb8];
  PVar13 = param_1[0xb9];
  uVar5 = *(undefined4 *)(param_1 + 0xbc);
  uVar6 = *(undefined4 *)(param_1 + 0xc0);
  uVar7 = *(undefined4 *)(param_1 + 0xc4);
  uVar8 = *(undefined4 *)(param_1 + 200);
  uVar9 = *(undefined4 *)(param_1 + 0xcc);
  uVar10 = *(undefined4 *)(param_1 + 0xd0);
  uVar11 = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)(this + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(this + 0xa8) = uVar1;
  *(undefined4 *)(this + 0xac) = uVar2;
  *(undefined4 *)(this + 0xb0) = uVar3;
  *(undefined4 *)(this + 0xb4) = uVar4;
  this[0xb8] = PVar12;
  this[0xb9] = PVar13;
  *(undefined4 *)(this + 0xbc) = uVar5;
  *(undefined4 *)(this + 0xc0) = uVar6;
  *(undefined4 *)(this + 0xc4) = uVar7;
  *(undefined4 *)(this + 200) = uVar8;
  *(undefined4 *)(this + 0xcc) = uVar9;
  *(undefined4 *)(this + 0xd0) = uVar10;
  *(undefined4 *)(this + 0xd4) = uVar11;
  std::vector<CarnivalRewardData,std::allocator<CarnivalRewardData>>::vector
            ((vector<CarnivalRewardData,std::allocator<CarnivalRewardData>> *)(this + 0xe0),
             (vector *)(param_1 + 0xe0));
  std::vector<CarnivalRewardData,std::allocator<CarnivalRewardData>>::vector
            ((vector<CarnivalRewardData,std::allocator<CarnivalRewardData>> *)(this + 0xf8),
             (vector *)(param_1 + 0xf8));
  std::vector<PennyGiftBoxConfigData,std::allocator<PennyGiftBoxConfigData>>::vector
            ((vector<PennyGiftBoxConfigData,std::allocator<PennyGiftBoxConfigData>> *)(this + 0x110)
             ,(vector *)(param_1 + 0x110));
  *(undefined4 *)(this + 0x128) = *(undefined4 *)(param_1 + 0x128);
  return;
}


/* PennyGiftBoxData::TEMPNAMEPLACEHOLDERVALUE(PennyGiftBoxData const&) */

PennyGiftBoxData * __thiscall
PennyGiftBoxData::operator=(PennyGiftBoxData *this,PennyGiftBoxData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  PennyGiftBoxData PVar12;
  PennyGiftBoxData PVar13;
  
  INetworkData::operator=((INetworkData *)this,(INetworkData *)param_1);
  std::vector<PennyGiftBoxGrowData,std::allocator<PennyGiftBoxGrowData>>::operator=
            ((vector<PennyGiftBoxGrowData,std::allocator<PennyGiftBoxGrowData>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  std::vector<PennyGiftBoxGrowData,std::allocator<PennyGiftBoxGrowData>>::operator=
            ((vector<PennyGiftBoxGrowData,std::allocator<PennyGiftBoxGrowData>> *)(this + 0x30),
             (vector *)(param_1 + 0x30));
  std::vector<PennyGiftBoxRankPriviewItemData,std::allocator<PennyGiftBoxRankPriviewItemData>>::
  operator=((vector<PennyGiftBoxRankPriviewItemData,std::allocator<PennyGiftBoxRankPriviewItemData>>
             *)(this + 0x48),(vector *)(param_1 + 0x48));
  std::vector<PennyGiftBoxRankPriviewItemData,std::allocator<PennyGiftBoxRankPriviewItemData>>::
  operator=((vector<PennyGiftBoxRankPriviewItemData,std::allocator<PennyGiftBoxRankPriviewItemData>>
             *)(this + 0x60),(vector *)(param_1 + 0x60));
  std::vector<PennyGiftBoxRankItemData,std::allocator<PennyGiftBoxRankItemData>>::operator=
            ((vector<PennyGiftBoxRankItemData,std::allocator<PennyGiftBoxRankItemData>> *)
             (this + 0x78),(vector *)(param_1 + 0x78));
  std::vector<PennyGiftBoxRankItemData,std::allocator<PennyGiftBoxRankItemData>>::operator=
            ((vector<PennyGiftBoxRankItemData,std::allocator<PennyGiftBoxRankItemData>> *)
             (this + 0x90),(vector *)(param_1 + 0x90));
  uVar1 = *(undefined4 *)(param_1 + 0xa8);
  uVar2 = *(undefined4 *)(param_1 + 0xac);
  uVar3 = *(undefined4 *)(param_1 + 0xb0);
  uVar4 = *(undefined4 *)(param_1 + 0xb4);
  PVar12 = param_1[0xb8];
  PVar13 = param_1[0xb9];
  uVar5 = *(undefined4 *)(param_1 + 0xbc);
  uVar6 = *(undefined4 *)(param_1 + 0xc0);
  uVar7 = *(undefined4 *)(param_1 + 0xc4);
  uVar8 = *(undefined4 *)(param_1 + 200);
  uVar9 = *(undefined4 *)(param_1 + 0xcc);
  uVar10 = *(undefined4 *)(param_1 + 0xd0);
  uVar11 = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)(this + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(this + 0xa8) = uVar1;
  *(undefined4 *)(this + 0xac) = uVar2;
  *(undefined4 *)(this + 0xb0) = uVar3;
  *(undefined4 *)(this + 0xb4) = uVar4;
  this[0xb8] = PVar12;
  this[0xb9] = PVar13;
  *(undefined4 *)(this + 0xbc) = uVar5;
  *(undefined4 *)(this + 0xc0) = uVar6;
  *(undefined4 *)(this + 0xc4) = uVar7;
  *(undefined4 *)(this + 200) = uVar8;
  *(undefined4 *)(this + 0xcc) = uVar9;
  *(undefined4 *)(this + 0xd0) = uVar10;
  *(undefined4 *)(this + 0xd4) = uVar11;
  std::vector<CarnivalRewardData,std::allocator<CarnivalRewardData>>::operator=
            ((vector<CarnivalRewardData,std::allocator<CarnivalRewardData>> *)(this + 0xe0),
             (vector *)(param_1 + 0xe0));
  std::vector<CarnivalRewardData,std::allocator<CarnivalRewardData>>::operator=
            ((vector<CarnivalRewardData,std::allocator<CarnivalRewardData>> *)(this + 0xf8),
             (vector *)(param_1 + 0xf8));
  std::vector<PennyGiftBoxConfigData,std::allocator<PennyGiftBoxConfigData>>::operator=
            ((vector<PennyGiftBoxConfigData,std::allocator<PennyGiftBoxConfigData>> *)(this + 0x110)
             ,(vector *)(param_1 + 0x110));
  *(undefined4 *)(this + 0x128) = *(undefined4 *)(param_1 + 0x128);
  return this;
}

