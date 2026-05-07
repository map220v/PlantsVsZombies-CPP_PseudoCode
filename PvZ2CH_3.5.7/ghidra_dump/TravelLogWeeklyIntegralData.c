// Class: TravelLogWeeklyIntegralData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TravelLogWeeklyIntegralData::StaticClassInit() */

void TravelLogWeeklyIntegralData::StaticClassInit(void)

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
    std::string::string(asStack_10,"TravelLogWeeklyIntegralData");
    (*pcVar2)(plVar1,asStack_10,FUN_039e502c,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TravelLogWeeklyIntegralData::StaticGetClass() */

long * TravelLogWeeklyIntegralData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TravelLogWeeklyIntegralData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TravelLogWeeklyIntegralData::GetClass() const */

long * TravelLogWeeklyIntegralData::GetClass(void)

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
  (*pcVar3)(plVar1,"TravelLogWeeklyIntegralData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TravelLogWeeklyIntegralData::TravelLogWeeklyIntegralData() */

void __thiscall
TravelLogWeeklyIntegralData::TravelLogWeeklyIntegralData(TravelLogWeeklyIntegralData *this)

{
  TravelLogData::TravelLogData((TravelLogData *)this);
  *(undefined ***)this = &PTR_GetClass_066f5830;
  return;
}


/* TravelLogWeeklyIntegralData::StaticNew() */

TravelLogWeeklyIntegralData * TravelLogWeeklyIntegralData::StaticNew(void)

{
  TravelLogWeeklyIntegralData *this;
  
  this = ::operator_new(0x48);
  TravelLogWeeklyIntegralData(this);
  return this;
}


/* TravelLogWeeklyIntegralData::~TravelLogWeeklyIntegralData() */

void __thiscall
TravelLogWeeklyIntegralData::~TravelLogWeeklyIntegralData(TravelLogWeeklyIntegralData *this)

{
  *(undefined ***)this = &PTR_GetClass_066f5830;
  TravelLogData::~TravelLogData((TravelLogData *)this);
  return;
}


/* TravelLogWeeklyIntegralData::~TravelLogWeeklyIntegralData() */

void __thiscall
TravelLogWeeklyIntegralData::~TravelLogWeeklyIntegralData(TravelLogWeeklyIntegralData *this)

{
  ~TravelLogWeeklyIntegralData(this);
  AK::FreeHook(this);
  return;
}

