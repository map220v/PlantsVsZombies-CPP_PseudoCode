// Class: RenaissanceChallengeActivityData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenaissanceChallengeActivityData::StaticClassInit() */

void RenaissanceChallengeActivityData::StaticClassInit(void)

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
    std::string::string(asStack_10,"SubActivityTimeData");
    (*pcVar3)(plVar2,asStack_10,FUN_03aac2a8,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"RenaissanceChallengeActivityData");
    (*pcVar3)(plVar2,asStack_10,FUN_03ab01ac,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RenaissanceChallengeActivityData::StaticGetClass() */

long * RenaissanceChallengeActivityData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RenaissanceChallengeActivityData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RenaissanceChallengeActivityData::GetClass() const */

long * RenaissanceChallengeActivityData::GetClass(void)

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
  (*pcVar3)(plVar1,"RenaissanceChallengeActivityData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RenaissanceChallengeActivityData::RenaissanceChallengeActivityData() */

void __thiscall
RenaissanceChallengeActivityData::RenaissanceChallengeActivityData
          (RenaissanceChallengeActivityData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06713de0;
  *(undefined ***)(this + 8) = &PTR__RenaissanceChallengeActivityData_06713e48;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  *(undefined4 *)(this + 0x30) = 0;
  return;
}


/* RenaissanceChallengeActivityData::StaticNew() */

RenaissanceChallengeActivityData * RenaissanceChallengeActivityData::StaticNew(void)

{
  RenaissanceChallengeActivityData *this;
  
  this = ::operator_new(0x38);
  RenaissanceChallengeActivityData(this);
  return this;
}


/* RenaissanceChallengeActivityData::~RenaissanceChallengeActivityData() */

void __thiscall
RenaissanceChallengeActivityData::~RenaissanceChallengeActivityData
          (RenaissanceChallengeActivityData *this)

{
  *(undefined ***)this = &PTR_GetClass_06713de0;
  *(undefined ***)(this + 8) = &PTR__RenaissanceChallengeActivityData_06713e48;
  std::vector<SubActivityTimeData,std::allocator<SubActivityTimeData>>::~vector
            ((vector<SubActivityTimeData,std::allocator<SubActivityTimeData>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to RenaissanceChallengeActivityData::~RenaissanceChallengeActivityData() */

void __thiscall
RenaissanceChallengeActivityData::~RenaissanceChallengeActivityData
          (RenaissanceChallengeActivityData *this)

{
  ~RenaissanceChallengeActivityData(this + -8);
  return;
}


/* RenaissanceChallengeActivityData::~RenaissanceChallengeActivityData() */

void __thiscall
RenaissanceChallengeActivityData::~RenaissanceChallengeActivityData
          (RenaissanceChallengeActivityData *this)

{
  ~RenaissanceChallengeActivityData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to RenaissanceChallengeActivityData::~RenaissanceChallengeActivityData() */

void __thiscall
RenaissanceChallengeActivityData::~RenaissanceChallengeActivityData
          (RenaissanceChallengeActivityData *this)

{
  ~RenaissanceChallengeActivityData(this + -8);
  return;
}

