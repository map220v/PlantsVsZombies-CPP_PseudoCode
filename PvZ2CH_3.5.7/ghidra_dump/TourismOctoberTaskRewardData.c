// Class: TourismOctoberTaskRewardData


/* TourismOctoberTaskRewardData::~TourismOctoberTaskRewardData() */

void __thiscall
TourismOctoberTaskRewardData::~TourismOctoberTaskRewardData(TourismOctoberTaskRewardData *this)

{
  *(undefined ***)this = &PTR_GetClass_069edd80;
  *(undefined ***)(this + 8) = &PTR__TourismOctoberTaskRewardData_069edde8;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to TourismOctoberTaskRewardData::~TourismOctoberTaskRewardData() */

void __thiscall
TourismOctoberTaskRewardData::~TourismOctoberTaskRewardData(TourismOctoberTaskRewardData *this)

{
  ~TourismOctoberTaskRewardData(this + -8);
  return;
}


/* TourismOctoberTaskRewardData::~TourismOctoberTaskRewardData() */

void __thiscall
TourismOctoberTaskRewardData::~TourismOctoberTaskRewardData(TourismOctoberTaskRewardData *this)

{
  ~TourismOctoberTaskRewardData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to TourismOctoberTaskRewardData::~TourismOctoberTaskRewardData() */

void __thiscall
TourismOctoberTaskRewardData::~TourismOctoberTaskRewardData(TourismOctoberTaskRewardData *this)

{
  ~TourismOctoberTaskRewardData(this + -8);
  return;
}


/* TourismOctoberTaskRewardData::TourismOctoberTaskRewardData() */

void __thiscall
TourismOctoberTaskRewardData::TourismOctoberTaskRewardData(TourismOctoberTaskRewardData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_069edd80;
  *(undefined ***)(this + 8) = &PTR__TourismOctoberTaskRewardData_069edde8;
  Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)(this + 0x14));
  return;
}


/* TourismOctoberTaskRewardData::StaticNew() */

TourismOctoberTaskRewardData * TourismOctoberTaskRewardData::StaticNew(void)

{
  TourismOctoberTaskRewardData *this;
  
  this = ::operator_new(0x20);
  TourismOctoberTaskRewardData(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TourismOctoberTaskRewardData::StaticClassInit() */

void TourismOctoberTaskRewardData::StaticClassInit(void)

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
    std::string::string(asStack_10,"TourismOctoberTaskRewardData");
    (*pcVar2)(plVar1,asStack_10,FUN_04e99178,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TourismOctoberTaskRewardData::StaticGetClass() */

long * TourismOctoberTaskRewardData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TourismOctoberTaskRewardData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TourismOctoberTaskRewardData::GetClass() const */

long * TourismOctoberTaskRewardData::GetClass(void)

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
  (*pcVar3)(plVar1,"TourismOctoberTaskRewardData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

