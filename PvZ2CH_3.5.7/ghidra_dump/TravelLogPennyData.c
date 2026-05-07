// Class: TravelLogPennyData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TravelLogPennyData::StaticClassInit() */

void TravelLogPennyData::StaticClassInit(void)

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
    std::string::string(asStack_10,"TravelLogPennyData");
    (*pcVar2)(plVar1,asStack_10,FUN_039e3ae0,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TravelLogPennyData::StaticGetClass() */

long * TravelLogPennyData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TravelLogPennyData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TravelLogPennyData::GetClass() const */

long * TravelLogPennyData::GetClass(void)

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
  (*pcVar3)(plVar1,"TravelLogPennyData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TravelLogPennyData::TravelLogPennyData() */

void __thiscall TravelLogPennyData::TravelLogPennyData(TravelLogPennyData *this)

{
  TravelLogData::TravelLogData((TravelLogData *)this);
  *(undefined ***)this = &PTR_GetClass_066f5440;
  return;
}


/* TravelLogPennyData::StaticNew() */

TravelLogPennyData * TravelLogPennyData::StaticNew(void)

{
  TravelLogPennyData *this;
  
  this = ::operator_new(0x50);
  TravelLogPennyData(this);
  return this;
}


/* TravelLogPennyData::~TravelLogPennyData() */

void __thiscall TravelLogPennyData::~TravelLogPennyData(TravelLogPennyData *this)

{
  *(undefined ***)this = &PTR_GetClass_066f5440;
  TravelLogData::~TravelLogData((TravelLogData *)this);
  return;
}


/* TravelLogPennyData::~TravelLogPennyData() */

void __thiscall TravelLogPennyData::~TravelLogPennyData(TravelLogPennyData *this)

{
  ~TravelLogPennyData(this);
  AK::FreeHook(this);
  return;
}

