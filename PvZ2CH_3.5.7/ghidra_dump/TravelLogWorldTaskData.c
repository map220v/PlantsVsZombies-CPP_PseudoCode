// Class: TravelLogWorldTaskData


/* TravelLogWorldTaskData::GetWidgetClass() const */

long * TravelLogWorldTaskData::GetWidgetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (WorldTaskWidget::sClass != (long *)0x0) {
    return WorldTaskWidget::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  WorldTaskWidget::sClass = plVar1;
  uVar2 = TaskWidget::StaticGetClass();
  (*pcVar3)(plVar1,"WorldTaskWidget",uVar2,WorldTaskWidget::StaticNew);
  WorldTaskWidget::StaticClassInit();
  return WorldTaskWidget::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TravelLogWorldTaskData::StaticClassInit() */

void TravelLogWorldTaskData::StaticClassInit(void)

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
    std::string::string(asStack_10,"TravelLogWorldTaskData");
    (*pcVar2)(plVar1,asStack_10,FUN_039e5240,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TravelLogWorldTaskData::StaticGetClass() */

long * TravelLogWorldTaskData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TravelLogWorldTaskData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TravelLogWorldTaskData::GetClass() const */

long * TravelLogWorldTaskData::GetClass(void)

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
  (*pcVar3)(plVar1,"TravelLogWorldTaskData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TravelLogWorldTaskData::TravelLogWorldTaskData() */

void __thiscall TravelLogWorldTaskData::TravelLogWorldTaskData(TravelLogWorldTaskData *this)

{
  TravelLogData::TravelLogData((TravelLogData *)this);
  *(undefined ***)this = &PTR_GetClass_066f58a0;
  Set8BytesTo0(this + 0x48);
  return;
}


/* TravelLogWorldTaskData::StaticNew() */

TravelLogWorldTaskData * TravelLogWorldTaskData::StaticNew(void)

{
  TravelLogWorldTaskData *this;
  
  this = ::operator_new(0x58);
  TravelLogWorldTaskData(this);
  return this;
}


/* TravelLogWorldTaskData::~TravelLogWorldTaskData() */

void __thiscall TravelLogWorldTaskData::~TravelLogWorldTaskData(TravelLogWorldTaskData *this)

{
  *(undefined ***)this = &PTR_GetClass_066f58a0;
  std::string::~string((string *)(this + 0x48));
  TravelLogData::~TravelLogData((TravelLogData *)this);
  return;
}


/* TravelLogWorldTaskData::~TravelLogWorldTaskData() */

void __thiscall TravelLogWorldTaskData::~TravelLogWorldTaskData(TravelLogWorldTaskData *this)

{
  ~TravelLogWorldTaskData(this);
  AK::FreeHook(this);
  return;
}

