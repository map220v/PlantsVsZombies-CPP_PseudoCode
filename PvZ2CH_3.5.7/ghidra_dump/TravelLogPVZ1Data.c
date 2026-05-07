// Class: TravelLogPVZ1Data


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TravelLogPVZ1Data::StaticClassInit() */

void TravelLogPVZ1Data::StaticClassInit(void)

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
    std::string::string(asStack_10,"TravelLogPVZ1Data");
    (*pcVar2)(plVar1,asStack_10,FUN_039e3d74,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TravelLogPVZ1Data::StaticGetClass() */

long * TravelLogPVZ1Data::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TravelLogPVZ1Data",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TravelLogPVZ1Data::GetClass() const */

long * TravelLogPVZ1Data::GetClass(void)

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
  (*pcVar3)(plVar1,"TravelLogPVZ1Data",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TravelLogPVZ1Data::TravelLogPVZ1Data() */

void __thiscall TravelLogPVZ1Data::TravelLogPVZ1Data(TravelLogPVZ1Data *this)

{
  TravelLogData::TravelLogData((TravelLogData *)this);
  *(undefined ***)this = &PTR_GetClass_066f54b0;
  return;
}


/* TravelLogPVZ1Data::StaticNew() */

TravelLogPVZ1Data * TravelLogPVZ1Data::StaticNew(void)

{
  TravelLogPVZ1Data *this;
  
  this = ::operator_new(0x50);
  TravelLogPVZ1Data(this);
  return this;
}


/* TravelLogPVZ1Data::~TravelLogPVZ1Data() */

void __thiscall TravelLogPVZ1Data::~TravelLogPVZ1Data(TravelLogPVZ1Data *this)

{
  *(undefined ***)this = &PTR_GetClass_066f54b0;
  TravelLogData::~TravelLogData((TravelLogData *)this);
  return;
}


/* TravelLogPVZ1Data::~TravelLogPVZ1Data() */

void __thiscall TravelLogPVZ1Data::~TravelLogPVZ1Data(TravelLogPVZ1Data *this)

{
  ~TravelLogPVZ1Data(this);
  AK::FreeHook(this);
  return;
}

