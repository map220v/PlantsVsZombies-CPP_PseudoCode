// Class: TravelLogPassChallengeData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TravelLogPassChallengeData::StaticClassInit() */

void TravelLogPassChallengeData::StaticClassInit(void)

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
    std::string::string(asStack_10,"TravelLogPassChallengeData");
    (*pcVar2)(plVar1,asStack_10,FUN_039e4530,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TravelLogPassChallengeData::StaticGetClass() */

long * TravelLogPassChallengeData::StaticGetClass(void)

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
  uVar2 = TravelLogData::StaticGetClass();
  (*pcVar3)(plVar1,"TravelLogPassChallengeData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TravelLogPassChallengeData::GetClass() const */

long * TravelLogPassChallengeData::GetClass(void)

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
  uVar2 = TravelLogData::StaticGetClass();
  (*pcVar3)(plVar1,"TravelLogPassChallengeData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TravelLogPassChallengeData::TravelLogPassChallengeData() */

void __thiscall
TravelLogPassChallengeData::TravelLogPassChallengeData(TravelLogPassChallengeData *this)

{
  TravelLogData::TravelLogData((TravelLogData *)this);
  *(undefined ***)this = &PTR_GetClass_066f5600;
  return;
}


/* TravelLogPassChallengeData::StaticNew() */

TravelLogPassChallengeData * TravelLogPassChallengeData::StaticNew(void)

{
  TravelLogPassChallengeData *this;
  
  this = ::operator_new(0x50);
  TravelLogPassChallengeData(this);
  return this;
}


/* TravelLogPassChallengeData::~TravelLogPassChallengeData() */

void __thiscall
TravelLogPassChallengeData::~TravelLogPassChallengeData(TravelLogPassChallengeData *this)

{
  *(undefined ***)this = &PTR_GetClass_066f5600;
  TravelLogData::~TravelLogData((TravelLogData *)this);
  return;
}


/* TravelLogPassChallengeData::~TravelLogPassChallengeData() */

void __thiscall
TravelLogPassChallengeData::~TravelLogPassChallengeData(TravelLogPassChallengeData *this)

{
  ~TravelLogPassChallengeData(this);
  AK::FreeHook(this);
  return;
}

