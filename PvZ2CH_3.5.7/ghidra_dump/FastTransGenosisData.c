// Class: FastTransGenosisData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FastTransGenosisData::StaticClassInit() */

void FastTransGenosisData::StaticClassInit(void)

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
    std::string::string(asStack_10,"FastTransGenosisData");
    (*pcVar2)(plVar1,asStack_10,FUN_04bce0a0,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FastTransGenosisData::StaticGetClass() */

long * FastTransGenosisData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"FastTransGenosisData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FastTransGenosisData::GetClass() const */

long * FastTransGenosisData::GetClass(void)

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
  (*pcVar3)(plVar1,"FastTransGenosisData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FastTransGenosisData::FastTransGenosisData() */

void __thiscall FastTransGenosisData::FastTransGenosisData(FastTransGenosisData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0697bce0;
  *(undefined ***)(this + 8) = &PTR__FastTransGenosisData_0697bd48;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  return;
}


/* FastTransGenosisData::StaticNew() */

FastTransGenosisData * FastTransGenosisData::StaticNew(void)

{
  FastTransGenosisData *this;
  
  this = ::operator_new(0x50);
  FastTransGenosisData(this);
  return this;
}


/* FastTransGenosisData::~FastTransGenosisData() */

void __thiscall FastTransGenosisData::~FastTransGenosisData(FastTransGenosisData *this)

{
  *(undefined ***)this = &PTR_GetClass_0697bce0;
  *(undefined ***)(this + 8) = &PTR__FastTransGenosisData_0697bd48;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x30));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to FastTransGenosisData::~FastTransGenosisData() */

void __thiscall FastTransGenosisData::~FastTransGenosisData(FastTransGenosisData *this)

{
  ~FastTransGenosisData(this + -8);
  return;
}


/* FastTransGenosisData::~FastTransGenosisData() */

void __thiscall FastTransGenosisData::~FastTransGenosisData(FastTransGenosisData *this)

{
  ~FastTransGenosisData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to FastTransGenosisData::~FastTransGenosisData() */

void __thiscall FastTransGenosisData::~FastTransGenosisData(FastTransGenosisData *this)

{
  ~FastTransGenosisData(this + -8);
  return;
}

