// Class: TravelLogBeatZombiesData


/* TravelLogBeatZombiesData::GetWidgetClass() const */

long * TravelLogBeatZombiesData::GetWidgetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (BeatZombiesTaskWidget::sClass != (long *)0x0) {
    return BeatZombiesTaskWidget::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  BeatZombiesTaskWidget::sClass = plVar1;
  uVar2 = BasicTaskWidget::StaticGetClass();
  (*pcVar3)(plVar1,"BeatZombiesTaskWidget",uVar2,BeatZombiesTaskWidget::StaticNew);
  BeatZombiesTaskWidget::StaticClassInit();
  return BeatZombiesTaskWidget::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TravelLogBeatZombiesData::StaticClassInit() */

void TravelLogBeatZombiesData::StaticClassInit(void)

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
    std::string::string(asStack_10,"TravelLogBeatZombiesData");
    (*pcVar2)(plVar1,asStack_10,FUN_039e4bec,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TravelLogBeatZombiesData::StaticGetClass() */

long * TravelLogBeatZombiesData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TravelLogBeatZombiesData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TravelLogBeatZombiesData::GetClass() const */

long * TravelLogBeatZombiesData::GetClass(void)

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
  (*pcVar3)(plVar1,"TravelLogBeatZombiesData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TravelLogBeatZombiesData::TravelLogBeatZombiesData() */

void __thiscall TravelLogBeatZombiesData::TravelLogBeatZombiesData(TravelLogBeatZombiesData *this)

{
  TravelLogData::TravelLogData((TravelLogData *)this);
  *(undefined ***)this = &PTR_GetClass_066f5750;
  Set8BytesTo0(this + 0x48);
  Set8BytesTo0(this + 0x50);
  return;
}


/* TravelLogBeatZombiesData::StaticNew() */

TravelLogBeatZombiesData * TravelLogBeatZombiesData::StaticNew(void)

{
  TravelLogBeatZombiesData *this;
  
  this = ::operator_new(0x58);
  TravelLogBeatZombiesData(this);
  return this;
}


/* TravelLogBeatZombiesData::~TravelLogBeatZombiesData() */

void __thiscall TravelLogBeatZombiesData::~TravelLogBeatZombiesData(TravelLogBeatZombiesData *this)

{
  *(undefined ***)this = &PTR_GetClass_066f5750;
  std::string::~string((string *)(this + 0x50));
  std::string::~string((string *)(this + 0x48));
  TravelLogData::~TravelLogData((TravelLogData *)this);
  return;
}


/* TravelLogBeatZombiesData::~TravelLogBeatZombiesData() */

void __thiscall TravelLogBeatZombiesData::~TravelLogBeatZombiesData(TravelLogBeatZombiesData *this)

{
  ~TravelLogBeatZombiesData(this);
  AK::FreeHook(this);
  return;
}

