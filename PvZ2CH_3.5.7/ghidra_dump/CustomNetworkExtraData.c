// Class: CustomNetworkExtraData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomNetworkExtraData::StaticClassInit() */

void CustomNetworkExtraData::StaticClassInit(void)

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
    std::string::string(asStack_10,"CustomNetworkAppraiseData");
    (*pcVar3)(plVar2,asStack_10,FUN_0358f9ac,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"CustomNetworkExtraData");
    (*pcVar3)(plVar2,asStack_10,FUN_0359db04,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomNetworkExtraData::StaticGetClass() */

long * CustomNetworkExtraData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CustomNetworkExtraData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CustomNetworkExtraData::GetClass() const */

long * CustomNetworkExtraData::GetClass(void)

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
  (*pcVar3)(plVar1,"CustomNetworkExtraData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CustomNetworkExtraData::CustomNetworkExtraData() */

void __thiscall CustomNetworkExtraData::CustomNetworkExtraData(CustomNetworkExtraData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0665d8e0;
  *(undefined ***)(this + 8) = &PTR__CustomNetworkExtraData_0665d948;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  Set8BytesTo0(this + 0x30);
  Set8BytesTo0(this + 0x38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  Set8BytesTo0(this + 0x60);
  return;
}


/* CustomNetworkExtraData::StaticNew() */

CustomNetworkExtraData * CustomNetworkExtraData::StaticNew(void)

{
  CustomNetworkExtraData *this;
  
  this = ::operator_new(0x70);
  CustomNetworkExtraData(this);
  return this;
}


/* CustomNetworkExtraData::~CustomNetworkExtraData() */

void __thiscall CustomNetworkExtraData::~CustomNetworkExtraData(CustomNetworkExtraData *this)

{
  *(undefined ***)this = &PTR_GetClass_0665d8e0;
  *(undefined ***)(this + 8) = &PTR__CustomNetworkExtraData_0665d948;
  std::string::~string((string *)(this + 0x60));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x40));
  std::string::~string((string *)(this + 0x38));
  std::string::~string((string *)(this + 0x30));
  std::vector<CustomNetworkAppraiseData,std::allocator<CustomNetworkAppraiseData>>::~vector
            ((vector<CustomNetworkAppraiseData,std::allocator<CustomNetworkAppraiseData>> *)
             (this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to CustomNetworkExtraData::~CustomNetworkExtraData() */

void __thiscall CustomNetworkExtraData::~CustomNetworkExtraData(CustomNetworkExtraData *this)

{
  ~CustomNetworkExtraData(this + -8);
  return;
}


/* CustomNetworkExtraData::~CustomNetworkExtraData() */

void __thiscall CustomNetworkExtraData::~CustomNetworkExtraData(CustomNetworkExtraData *this)

{
  ~CustomNetworkExtraData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CustomNetworkExtraData::~CustomNetworkExtraData() */

void __thiscall CustomNetworkExtraData::~CustomNetworkExtraData(CustomNetworkExtraData *this)

{
  ~CustomNetworkExtraData(this + -8);
  return;
}


/* CustomNetworkExtraData::TEMPNAMEPLACEHOLDERVALUE(CustomNetworkExtraData const&) */

CustomNetworkExtraData * __thiscall
CustomNetworkExtraData::operator=(CustomNetworkExtraData *this,CustomNetworkExtraData *param_1)

{
  undefined4 uVar1;
  
  INetworkData::operator=((INetworkData *)this,(INetworkData *)param_1);
  std::vector<CustomNetworkAppraiseData,std::allocator<CustomNetworkAppraiseData>>::operator=
            ((vector<CustomNetworkAppraiseData,std::allocator<CustomNetworkAppraiseData>> *)
             (this + 0x18),(vector *)(param_1 + 0x18));
  thunk_FUN_05475e00(this + 0x30,param_1 + 0x30);
  thunk_FUN_05475e00(this + 0x38,param_1 + 0x38);
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x40),
             (vector *)(param_1 + 0x40));
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  thunk_FUN_05475e00(this + 0x60,param_1 + 0x60);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = uVar1;
  return this;
}

