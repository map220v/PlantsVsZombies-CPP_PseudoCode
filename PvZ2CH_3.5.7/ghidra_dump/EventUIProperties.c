// Class: EventUIProperties


/* EventUIProperties::GetWidgetClass() const */

long * EventUIProperties::GetWidgetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (EventUI::sClass != (long *)0x0) {
    return EventUI::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  EventUI::sClass = plVar1;
  uVar2 = HotUIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"EventUI",uVar2,EventUI::StaticNew);
  EventUI::StaticClassInit();
  return EventUI::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EventUIProperties::StaticClassInit() */

void EventUIProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"EventUIProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_038dc860,0x130,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EventUIProperties::StaticGetClass() */

long * EventUIProperties::StaticGetClass(void)

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
  uVar2 = HotUIWidgetProperties::StaticGetClass();
  (*pcVar3)(plVar1,"EventUIProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EventUIProperties::GetClass() const */

long * EventUIProperties::GetClass(void)

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
  uVar2 = HotUIWidgetProperties::StaticGetClass();
  (*pcVar3)(plVar1,"EventUIProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EventUIProperties::EventUIProperties() */

void __thiscall EventUIProperties::EventUIProperties(EventUIProperties *this)

{
  HotUIWidgetProperties::HotUIWidgetProperties((HotUIWidgetProperties *)this);
  *(undefined ***)this = &PTR_GetClass_066bbba0;
  Set8BytesTo0(this + 0x128);
  return;
}


/* EventUIProperties::StaticNew() */

EventUIProperties * EventUIProperties::StaticNew(void)

{
  EventUIProperties *this;
  
  this = ::operator_new(0x130);
  EventUIProperties(this);
  return this;
}


/* EventUIProperties::~EventUIProperties() */

void __thiscall EventUIProperties::~EventUIProperties(EventUIProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_066bbba0;
  std::string::~string((string *)(this + 0x128));
  HotUIWidgetProperties::~HotUIWidgetProperties((HotUIWidgetProperties *)this);
  return;
}


/* EventUIProperties::~EventUIProperties() */

void __thiscall EventUIProperties::~EventUIProperties(EventUIProperties *this)

{
  ~EventUIProperties(this);
  AK::FreeHook(this);
  return;
}

