// Class: TravelLogEpicTaskData


/* TravelLogEpicTaskData::GetWidgetClass() const */

long * TravelLogEpicTaskData::GetWidgetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (EpicTaskWidget::sClass != (long *)0x0) {
    return EpicTaskWidget::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  EpicTaskWidget::sClass = plVar1;
  uVar2 = TaskWidget::StaticGetClass();
  (*pcVar3)(plVar1,"EpicTaskWidget",uVar2,EpicTaskWidget::StaticNew);
  EpicTaskWidget::StaticClassInit();
  return EpicTaskWidget::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TravelLogEpicTaskData::StaticClassInit() */

void TravelLogEpicTaskData::StaticClassInit(void)

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
    std::string::string(asStack_10,"TravelLogEpicTaskData");
    (*pcVar2)(plVar1,asStack_10,FUN_039e5994,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TravelLogEpicTaskData::StaticGetClass() */

long * TravelLogEpicTaskData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TravelLogEpicTaskData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TravelLogEpicTaskData::GetClass() const */

long * TravelLogEpicTaskData::GetClass(void)

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
  (*pcVar3)(plVar1,"TravelLogEpicTaskData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TravelLogEpicTaskData::TravelLogEpicTaskData() */

void __thiscall TravelLogEpicTaskData::TravelLogEpicTaskData(TravelLogEpicTaskData *this)

{
  TravelLogData::TravelLogData((TravelLogData *)this);
  *(undefined ***)this = &PTR_GetClass_066f57c0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  return;
}


/* TravelLogEpicTaskData::StaticNew() */

TravelLogEpicTaskData * TravelLogEpicTaskData::StaticNew(void)

{
  TravelLogEpicTaskData *this;
  
  this = ::operator_new(0x68);
  TravelLogEpicTaskData(this);
  return this;
}


/* TravelLogEpicTaskData::~TravelLogEpicTaskData() */

void __thiscall TravelLogEpicTaskData::~TravelLogEpicTaskData(TravelLogEpicTaskData *this)

{
  *(undefined ***)this = &PTR_GetClass_066f57c0;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x50));
  TravelLogData::~TravelLogData((TravelLogData *)this);
  return;
}


/* TravelLogEpicTaskData::~TravelLogEpicTaskData() */

void __thiscall TravelLogEpicTaskData::~TravelLogEpicTaskData(TravelLogEpicTaskData *this)

{
  ~TravelLogEpicTaskData(this);
  AK::FreeHook(this);
  return;
}

