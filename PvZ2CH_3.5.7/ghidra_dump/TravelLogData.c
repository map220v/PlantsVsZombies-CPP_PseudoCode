// Class: TravelLogData


/* TravelLogData::GetWidgetClass() const */

long * TravelLogData::GetWidgetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (BasicTaskWidget::sClass != (long *)0x0) {
    return BasicTaskWidget::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  BasicTaskWidget::sClass = plVar1;
  uVar2 = TaskWidget::StaticGetClass();
  (*pcVar3)(plVar1,"BasicTaskWidget",uVar2,BasicTaskWidget::StaticNew);
  BasicTaskWidget::StaticClassInit();
  return BasicTaskWidget::sClass;
}


/* TravelLogData::StaticNew() */

undefined8 TravelLogData::StaticNew(void)

{
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TravelLogData::StaticClassInit() */

void TravelLogData::StaticClassInit(void)

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
    std::string::string(asStack_10,"TravelLogAward");
    (*pcVar3)(plVar2,asStack_10,FUN_039e2ac4,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"TravelLogData");
    (*pcVar3)(plVar2,asStack_10,FUN_039e641c,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TravelLogData::StaticGetClass() */

long * TravelLogData::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"TravelLogData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TravelLogData::GetClass() const */

long * TravelLogData::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"TravelLogData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TravelLogData::TravelLogData() */

void __thiscall TravelLogData::TravelLogData(TravelLogData *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_066f5280;
  Set8BytesTo0(this + 0x10);
  Set8BytesTo0(this + 0x18);
  Set8BytesTo0(this + 0x20);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  return;
}


/* TravelLogData::~TravelLogData() */

void __thiscall TravelLogData::~TravelLogData(TravelLogData *this)

{
  *(undefined ***)this = &PTR_GetClass_066f5280;
  std::vector<TravelLogAward,std::allocator<TravelLogAward>>::~vector
            ((vector<TravelLogAward,std::allocator<TravelLogAward>> *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  nop();
  return;
}


/* TravelLogData::~TravelLogData() */

void __thiscall TravelLogData::~TravelLogData(TravelLogData *this)

{
  ~TravelLogData(this);
  AK::FreeHook(this);
  return;
}

