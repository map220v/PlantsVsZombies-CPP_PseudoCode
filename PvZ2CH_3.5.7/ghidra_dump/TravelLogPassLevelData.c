// Class: TravelLogPassLevelData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TravelLogPassLevelData::StaticClassInit() */

void TravelLogPassLevelData::StaticClassInit(void)

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
    std::string::string(asStack_10,"TravelLogPassLevelData");
    (*pcVar2)(plVar1,asStack_10,FUN_039e429c,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TravelLogPassLevelData::StaticGetClass() */

long * TravelLogPassLevelData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TravelLogPassLevelData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TravelLogPassLevelData::GetClass() const */

long * TravelLogPassLevelData::GetClass(void)

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
  (*pcVar3)(plVar1,"TravelLogPassLevelData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TravelLogPassLevelData::TravelLogPassLevelData() */

void __thiscall TravelLogPassLevelData::TravelLogPassLevelData(TravelLogPassLevelData *this)

{
  TravelLogData::TravelLogData((TravelLogData *)this);
  *(undefined ***)this = &PTR_GetClass_066f5590;
  return;
}


/* TravelLogPassLevelData::StaticNew() */

TravelLogPassLevelData * TravelLogPassLevelData::StaticNew(void)

{
  TravelLogPassLevelData *this;
  
  this = ::operator_new(0x50);
  TravelLogPassLevelData(this);
  return this;
}


/* TravelLogPassLevelData::~TravelLogPassLevelData() */

void __thiscall TravelLogPassLevelData::~TravelLogPassLevelData(TravelLogPassLevelData *this)

{
  *(undefined ***)this = &PTR_GetClass_066f5590;
  TravelLogData::~TravelLogData((TravelLogData *)this);
  return;
}


/* TravelLogPassLevelData::~TravelLogPassLevelData() */

void __thiscall TravelLogPassLevelData::~TravelLogPassLevelData(TravelLogPassLevelData *this)

{
  ~TravelLogPassLevelData(this);
  AK::FreeHook(this);
  return;
}

