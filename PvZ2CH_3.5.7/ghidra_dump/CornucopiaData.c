// Class: CornucopiaData


/* CornucopiaData::CornucopiaData() */

void __thiscall CornucopiaData::CornucopiaData(CornucopiaData *this)

{
  undefined **__n;
  
  INetworkData::INetworkData((INetworkData *)this);
  __n = &PTR_GetClass_069e2e60;
  *(undefined ***)this = &PTR_GetClass_069e2e60;
  *(undefined ***)(this + 8) = &PTR__CornucopiaData_069e2ec8;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x70));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xa8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 200));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x108));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x120));
  Set8BytesTo0((string *)(this + 0x140));
  *(undefined4 *)(this + 0x14) = 0;
  this[0x18] = (CornucopiaData)0x0;
  *(undefined4 *)(this + 0x1c) = 0;
  this[0x50] = (CornucopiaData)0x0;
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::clear((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
           *)(this + 0x58));
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x70));
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  this[0x94] = (CornucopiaData)0x1;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa4) = 0;
  std::vector<CornucopiaShopItemData,std::allocator<CornucopiaShopItemData>>::clear
            ((vector<CornucopiaShopItemData,std::allocator<CornucopiaShopItemData>> *)(this + 0xa8))
  ;
  *(undefined4 *)(this + 0xc0) = 100;
  std::vector<CornucopiaBubbleHarvestData,std::allocator<CornucopiaBubbleHarvestData>>::clear
            ((vector<CornucopiaBubbleHarvestData,std::allocator<CornucopiaBubbleHarvestData>> *)
             (this + 200));
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xf0));
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x108));
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x120));
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x13c) = 0;
  std::string::append((string *)(this + 0x140),"",(size_t)__n);
  return;
}


/* CornucopiaData::~CornucopiaData() */

void __thiscall CornucopiaData::~CornucopiaData(CornucopiaData *this)

{
  *(undefined ***)this = &PTR_GetClass_069e2e60;
  *(undefined ***)(this + 8) = &PTR__CornucopiaData_069e2ec8;
  std::string::~string((string *)(this + 0x140));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x120));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x108));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xf0));
  std::vector<CornucopiaBubbleHarvestData,std::allocator<CornucopiaBubbleHarvestData>>::~vector
            ((vector<CornucopiaBubbleHarvestData,std::allocator<CornucopiaBubbleHarvestData>> *)
             (this + 200));
  std::vector<CornucopiaShopItemData,std::allocator<CornucopiaShopItemData>>::~vector
            ((vector<CornucopiaShopItemData,std::allocator<CornucopiaShopItemData>> *)(this + 0xa8))
  ;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x70));
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::~vector((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
             *)(this + 0x58));
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::~map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
          *)(this + 0x20));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to CornucopiaData::~CornucopiaData() */

void __thiscall CornucopiaData::~CornucopiaData(CornucopiaData *this)

{
  ~CornucopiaData(this + -8);
  return;
}


/* CornucopiaData::~CornucopiaData() */

void __thiscall CornucopiaData::~CornucopiaData(CornucopiaData *this)

{
  ~CornucopiaData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CornucopiaData::~CornucopiaData() */

void __thiscall CornucopiaData::~CornucopiaData(CornucopiaData *this)

{
  ~CornucopiaData(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CornucopiaData::StaticClassInit() */

void CornucopiaData::StaticClassInit(void)

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
    std::string::string(asStack_10,"CornucopiaShopItemData");
    (*pcVar3)(plVar2,asStack_10,FUN_04e543d0,0x24,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"CornucopiaBubbleHarvestData");
    (*pcVar3)(plVar2,asStack_10,FUN_04e5420c,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"CornucopiaPresentData");
    (*pcVar3)(plVar2,asStack_10,FUN_04e5a838,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"CornucopiaData");
    (*pcVar3)(plVar2,asStack_10,FUN_04e5ad8c,0x148,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CornucopiaData::StaticGetClass() */

long * CornucopiaData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CornucopiaData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CornucopiaData::GetClass() const */

long * CornucopiaData::GetClass(void)

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
  (*pcVar3)(plVar1,"CornucopiaData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CornucopiaData::StaticNew() */

CornucopiaData * CornucopiaData::StaticNew(void)

{
  CornucopiaData *this;
  
  this = ::operator_new(0x148);
  CornucopiaData(this);
  return this;
}


/* CornucopiaData::CornucopiaData(CornucopiaData const&) */

void __thiscall CornucopiaData::CornucopiaData(CornucopiaData *this,CornucopiaData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  CornucopiaData CVar7;
  undefined8 uVar8;
  
  INetworkData::INetworkData((INetworkData *)this,(INetworkData *)param_1);
  CVar7 = param_1[0x18];
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined ***)this = &PTR_GetClass_069e2e60;
  this[0x18] = CVar7;
  *(undefined4 *)(this + 0x1c) = uVar1;
  *(undefined ***)(this + 8) = &PTR__CornucopiaData_069e2ec8;
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
         *)(this + 0x20),(map *)(param_1 + 0x20));
  this[0x50] = param_1[0x50];
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::vector((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
            *)(this + 0x58),(vector *)(param_1 + 0x58));
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x70),(vector *)(param_1 + 0x70));
  uVar1 = *(undefined4 *)(param_1 + 0x88);
  uVar2 = *(undefined4 *)(param_1 + 0x8c);
  uVar3 = *(undefined4 *)(param_1 + 0x90);
  CVar7 = param_1[0x94];
  uVar4 = *(undefined4 *)(param_1 + 0x98);
  uVar5 = *(undefined4 *)(param_1 + 0x9c);
  uVar6 = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(this + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(this + 0x88) = uVar1;
  *(undefined4 *)(this + 0x8c) = uVar2;
  *(undefined4 *)(this + 0x90) = uVar3;
  this[0x94] = CVar7;
  *(undefined4 *)(this + 0x98) = uVar4;
  *(undefined4 *)(this + 0x9c) = uVar5;
  *(undefined4 *)(this + 0xa0) = uVar6;
  std::vector<CornucopiaShopItemData,std::allocator<CornucopiaShopItemData>>::vector
            ((vector<CornucopiaShopItemData,std::allocator<CornucopiaShopItemData>> *)(this + 0xa8),
             (vector *)(param_1 + 0xa8));
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  std::vector<CornucopiaBubbleHarvestData,std::allocator<CornucopiaBubbleHarvestData>>::vector
            ((vector<CornucopiaBubbleHarvestData,std::allocator<CornucopiaBubbleHarvestData>> *)
             (this + 200),(vector *)(param_1 + 200));
  uVar8 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined4 *)(this + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined8 *)(this + 0xe8) = uVar8;
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xf0),
             (vector *)(param_1 + 0xf0));
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x108),(vector *)(param_1 + 0x108));
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x120),(vector *)(param_1 + 0x120));
  uVar1 = *(undefined4 *)(param_1 + 0x138);
  *(undefined4 *)(this + 0x13c) = *(undefined4 *)(param_1 + 0x13c);
  *(undefined4 *)(this + 0x138) = uVar1;
  FUN_05475d88(this + 0x140,param_1 + 0x140);
  return;
}


/* CornucopiaData::TEMPNAMEPLACEHOLDERVALUE(CornucopiaData const&) */

CornucopiaData * __thiscall CornucopiaData::operator=(CornucopiaData *this,CornucopiaData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  CornucopiaData CVar7;
  undefined8 uVar8;
  
  INetworkData::operator=((INetworkData *)this,(INetworkData *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  CVar7 = param_1[0x18];
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x14) = uVar1;
  this[0x18] = CVar7;
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::operator=((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
               *)(this + 0x20),(map *)(param_1 + 0x20));
  this[0x50] = param_1[0x50];
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::operator=((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
               *)(this + 0x58),(vector *)(param_1 + 0x58));
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x70),(vector *)(param_1 + 0x70));
  uVar1 = *(undefined4 *)(param_1 + 0x88);
  uVar2 = *(undefined4 *)(param_1 + 0x8c);
  uVar3 = *(undefined4 *)(param_1 + 0x90);
  CVar7 = param_1[0x94];
  uVar4 = *(undefined4 *)(param_1 + 0x98);
  uVar5 = *(undefined4 *)(param_1 + 0x9c);
  uVar6 = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(this + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(this + 0x88) = uVar1;
  *(undefined4 *)(this + 0x8c) = uVar2;
  *(undefined4 *)(this + 0x90) = uVar3;
  this[0x94] = CVar7;
  *(undefined4 *)(this + 0x98) = uVar4;
  *(undefined4 *)(this + 0x9c) = uVar5;
  *(undefined4 *)(this + 0xa0) = uVar6;
  std::vector<CornucopiaShopItemData,std::allocator<CornucopiaShopItemData>>::operator=
            ((vector<CornucopiaShopItemData,std::allocator<CornucopiaShopItemData>> *)(this + 0xa8),
             (vector *)(param_1 + 0xa8));
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  std::vector<CornucopiaBubbleHarvestData,std::allocator<CornucopiaBubbleHarvestData>>::operator=
            ((vector<CornucopiaBubbleHarvestData,std::allocator<CornucopiaBubbleHarvestData>> *)
             (this + 200),(vector *)(param_1 + 200));
  uVar8 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined4 *)(this + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined8 *)(this + 0xe8) = uVar8;
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xf0),
             (vector *)(param_1 + 0xf0));
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x108),(vector *)(param_1 + 0x108));
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x120),(vector *)(param_1 + 0x120));
  uVar1 = *(undefined4 *)(param_1 + 0x138);
  *(undefined4 *)(this + 0x13c) = *(undefined4 *)(param_1 + 0x13c);
  *(undefined4 *)(this + 0x138) = uVar1;
  thunk_FUN_05475e00(this + 0x140,param_1 + 0x140);
  return this;
}

