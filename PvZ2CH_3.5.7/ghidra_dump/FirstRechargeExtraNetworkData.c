// Class: FirstRechargeExtraNetworkData


/* FirstRechargeExtraNetworkData::IsPopUp() */

undefined8 __thiscall FirstRechargeExtraNetworkData::IsPopUp(FirstRechargeExtraNetworkData *this)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x18);
  lVar2 = FUN_03aecdd0(uVar5,*(undefined8 *)(this + 0x20));
  lVar1 = 0;
  do {
    lVar4 = lVar1;
    if (lVar4 == lVar2) {
      return 0;
    }
    piVar3 = (int *)FUN_03aecddc(uVar5,lVar4);
    lVar1 = lVar4 + 1;
  } while ((*piVar3 != 0) ||
          (piVar3 = (int *)FUN_03aecddc(*(undefined8 *)(this + 0x30),lVar4), *piVar3 < 1));
  return 1;
}


/* FirstRechargeExtraNetworkData::FirstRechargeExtraNetworkData() */

void __thiscall
FirstRechargeExtraNetworkData::FirstRechargeExtraNetworkData(FirstRechargeExtraNetworkData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_069bee10;
  *(undefined ***)(this + 8) = &PTR__FirstRechargeExtraNetworkData_069bee78;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  *(undefined4 *)(this + 0x60) = 0;
  return;
}


/* FirstRechargeExtraNetworkData::~FirstRechargeExtraNetworkData() */

void __thiscall
FirstRechargeExtraNetworkData::~FirstRechargeExtraNetworkData(FirstRechargeExtraNetworkData *this)

{
  *(undefined ***)this = &PTR_GetClass_069bee10;
  *(undefined ***)(this + 8) = &PTR__FirstRechargeExtraNetworkData_069bee78;
  std::
  vector<std::vector<FirstRechargeExtraBonusData,std::allocator<FirstRechargeExtraBonusData>>,std::allocator<std::vector<FirstRechargeExtraBonusData,std::allocator<FirstRechargeExtraBonusData>>>>
  ::~vector((vector<std::vector<FirstRechargeExtraBonusData,std::allocator<FirstRechargeExtraBonusData>>,std::allocator<std::vector<FirstRechargeExtraBonusData,std::allocator<FirstRechargeExtraBonusData>>>>
             *)(this + 0x48));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x30));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to FirstRechargeExtraNetworkData::~FirstRechargeExtraNetworkData() */

void __thiscall
FirstRechargeExtraNetworkData::~FirstRechargeExtraNetworkData(FirstRechargeExtraNetworkData *this)

{
  ~FirstRechargeExtraNetworkData(this + -8);
  return;
}


/* FirstRechargeExtraNetworkData::~FirstRechargeExtraNetworkData() */

void __thiscall
FirstRechargeExtraNetworkData::~FirstRechargeExtraNetworkData(FirstRechargeExtraNetworkData *this)

{
  ~FirstRechargeExtraNetworkData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to FirstRechargeExtraNetworkData::~FirstRechargeExtraNetworkData() */

void __thiscall
FirstRechargeExtraNetworkData::~FirstRechargeExtraNetworkData(FirstRechargeExtraNetworkData *this)

{
  ~FirstRechargeExtraNetworkData(this + -8);
  return;
}


/* FirstRechargeExtraNetworkData::IsNoRecharge() */

undefined8 __thiscall
FirstRechargeExtraNetworkData::IsNoRecharge(FirstRechargeExtraNetworkData *this)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 0x30);
  lVar1 = FUN_04b9bedc(uVar4,*(undefined8 *)(this + 0x38));
  lVar3 = 0;
  do {
    if (lVar3 == lVar1) {
      return 1;
    }
    piVar2 = (int *)FUN_04b9bee8(uVar4,lVar3);
    lVar3 = lVar3 + 1;
  } while (*piVar2 == 0);
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FirstRechargeExtraNetworkData::StaticClassInit() */

void FirstRechargeExtraNetworkData::StaticClassInit(void)

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
    std::string::string(asStack_10,"FirstRechargeExtraBonusData");
    (*pcVar3)(plVar2,asStack_10,FUN_04db0454,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"FirstRechargeExtraNetworkData");
    (*pcVar3)(plVar2,asStack_10,FUN_04db0e20,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FirstRechargeExtraNetworkData::StaticGetClass() */

long * FirstRechargeExtraNetworkData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"FirstRechargeExtraNetworkData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FirstRechargeExtraNetworkData::GetClass() const */

long * FirstRechargeExtraNetworkData::GetClass(void)

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
  (*pcVar3)(plVar1,"FirstRechargeExtraNetworkData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FirstRechargeExtraNetworkData::StaticNew() */

FirstRechargeExtraNetworkData * FirstRechargeExtraNetworkData::StaticNew(void)

{
  FirstRechargeExtraNetworkData *this;
  
  this = ::operator_new(0x68);
  FirstRechargeExtraNetworkData(this);
  return this;
}


/* FirstRechargeExtraNetworkData::FirstRechargeExtraNetworkData(FirstRechargeExtraNetworkData
   const&) */

void __thiscall
FirstRechargeExtraNetworkData::FirstRechargeExtraNetworkData
          (FirstRechargeExtraNetworkData *this,FirstRechargeExtraNetworkData *param_1)

{
  INetworkData::INetworkData((INetworkData *)this,(INetworkData *)param_1);
  *(undefined ***)this = &PTR_GetClass_069bee10;
  *(undefined ***)(this + 8) = &PTR__FirstRechargeExtraNetworkData_069bee78;
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x18),(vector *)(param_1 + 0x18));
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x30),(vector *)(param_1 + 0x30));
  std::
  vector<std::vector<FirstRechargeExtraBonusData,std::allocator<FirstRechargeExtraBonusData>>,std::allocator<std::vector<FirstRechargeExtraBonusData,std::allocator<FirstRechargeExtraBonusData>>>>
  ::vector((vector<std::vector<FirstRechargeExtraBonusData,std::allocator<FirstRechargeExtraBonusData>>,std::allocator<std::vector<FirstRechargeExtraBonusData,std::allocator<FirstRechargeExtraBonusData>>>>
            *)(this + 0x48),(vector *)(param_1 + 0x48));
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  return;
}


/* FirstRechargeExtraNetworkData::TEMPNAMEPLACEHOLDERVALUE(FirstRechargeExtraNetworkData const&) */

FirstRechargeExtraNetworkData * __thiscall
FirstRechargeExtraNetworkData::operator=
          (FirstRechargeExtraNetworkData *this,FirstRechargeExtraNetworkData *param_1)

{
  INetworkData::operator=((INetworkData *)this,(INetworkData *)param_1);
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x18),(vector *)(param_1 + 0x18));
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x30),(vector *)(param_1 + 0x30));
  std::
  vector<std::vector<FirstRechargeExtraBonusData,std::allocator<FirstRechargeExtraBonusData>>,std::allocator<std::vector<FirstRechargeExtraBonusData,std::allocator<FirstRechargeExtraBonusData>>>>
  ::operator=((vector<std::vector<FirstRechargeExtraBonusData,std::allocator<FirstRechargeExtraBonusData>>,std::allocator<std::vector<FirstRechargeExtraBonusData,std::allocator<FirstRechargeExtraBonusData>>>>
               *)(this + 0x48),(vector *)(param_1 + 0x48));
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  return this;
}

