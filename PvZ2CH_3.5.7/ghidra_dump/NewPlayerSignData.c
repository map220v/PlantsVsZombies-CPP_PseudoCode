// Class: NewPlayerSignData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPlayerSignData::StaticClassInit() */

void NewPlayerSignData::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPlayerSignItemData");
    (*pcVar3)(plVar2,asStack_10,FUN_03446794,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NewPlayerSignData");
    (*pcVar3)(plVar2,asStack_10,FUN_0344a720,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPlayerSignData::StaticGetClass() */

long * NewPlayerSignData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NewPlayerSignData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPlayerSignData::GetClass() const */

long * NewPlayerSignData::GetClass(void)

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
  (*pcVar3)(plVar1,"NewPlayerSignData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPlayerSignData::NewPlayerSignData() */

void __thiscall NewPlayerSignData::NewPlayerSignData(NewPlayerSignData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06631ba0;
  *(undefined ***)(this + 8) = &PTR__NewPlayerSignData_06631c08;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* NewPlayerSignData::StaticNew() */

NewPlayerSignData * NewPlayerSignData::StaticNew(void)

{
  NewPlayerSignData *this;
  
  this = ::operator_new(0x38);
  NewPlayerSignData(this);
  return this;
}


/* NewPlayerSignData::~NewPlayerSignData() */

void __thiscall NewPlayerSignData::~NewPlayerSignData(NewPlayerSignData *this)

{
  *(undefined ***)this = &PTR_GetClass_06631ba0;
  *(undefined ***)(this + 8) = &PTR__NewPlayerSignData_06631c08;
  std::vector<NewPlayerSignItemData,std::allocator<NewPlayerSignItemData>>::~vector
            ((vector<NewPlayerSignItemData,std::allocator<NewPlayerSignItemData>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NewPlayerSignData::~NewPlayerSignData() */

void __thiscall NewPlayerSignData::~NewPlayerSignData(NewPlayerSignData *this)

{
  ~NewPlayerSignData(this + -8);
  return;
}


/* NewPlayerSignData::~NewPlayerSignData() */

void __thiscall NewPlayerSignData::~NewPlayerSignData(NewPlayerSignData *this)

{
  ~NewPlayerSignData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NewPlayerSignData::~NewPlayerSignData() */

void __thiscall NewPlayerSignData::~NewPlayerSignData(NewPlayerSignData *this)

{
  ~NewPlayerSignData(this + -8);
  return;
}


/* NewPlayerSignData::NewPlayerSignData(NewPlayerSignData const&) */

void __thiscall
NewPlayerSignData::NewPlayerSignData(NewPlayerSignData *this,NewPlayerSignData *param_1)

{
  undefined4 uVar1;
  
  INetworkData::INetworkData((INetworkData *)this,(INetworkData *)param_1);
  *(undefined ***)this = &PTR_GetClass_06631ba0;
  *(undefined ***)(this + 8) = &PTR__NewPlayerSignData_06631c08;
  std::vector<NewPlayerSignItemData,std::allocator<NewPlayerSignItemData>>::vector
            ((vector<NewPlayerSignItemData,std::allocator<NewPlayerSignItemData>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x30) = uVar1;
  return;
}

