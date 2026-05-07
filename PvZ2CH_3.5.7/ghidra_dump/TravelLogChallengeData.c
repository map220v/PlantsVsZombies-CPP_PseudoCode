// Class: TravelLogChallengeData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TravelLogChallengeData::StaticClassInit() */

void TravelLogChallengeData::StaticClassInit(void)

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
    std::string::string(asStack_10,"TravelLogChallengeData");
    (*pcVar2)(plVar1,asStack_10,FUN_039e384c,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TravelLogChallengeData::StaticGetClass() */

long * TravelLogChallengeData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TravelLogChallengeData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TravelLogChallengeData::GetClass() const */

long * TravelLogChallengeData::GetClass(void)

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
  (*pcVar3)(plVar1,"TravelLogChallengeData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TravelLogChallengeData::TravelLogChallengeData() */

void __thiscall TravelLogChallengeData::TravelLogChallengeData(TravelLogChallengeData *this)

{
  TravelLogData::TravelLogData((TravelLogData *)this);
  *(undefined ***)this = &PTR_GetClass_066f53d0;
  return;
}


/* TravelLogChallengeData::StaticNew() */

TravelLogChallengeData * TravelLogChallengeData::StaticNew(void)

{
  TravelLogChallengeData *this;
  
  this = ::operator_new(0x50);
  TravelLogChallengeData(this);
  return this;
}


/* TravelLogChallengeData::~TravelLogChallengeData() */

void __thiscall TravelLogChallengeData::~TravelLogChallengeData(TravelLogChallengeData *this)

{
  *(undefined ***)this = &PTR_GetClass_066f53d0;
  TravelLogData::~TravelLogData((TravelLogData *)this);
  return;
}


/* TravelLogChallengeData::~TravelLogChallengeData() */

void __thiscall TravelLogChallengeData::~TravelLogChallengeData(TravelLogChallengeData *this)

{
  ~TravelLogChallengeData(this);
  AK::FreeHook(this);
  return;
}

