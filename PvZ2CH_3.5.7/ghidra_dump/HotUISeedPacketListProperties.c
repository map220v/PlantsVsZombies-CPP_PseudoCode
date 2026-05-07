// Class: HotUISeedPacketListProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUISeedPacketListProperties::StaticClassInit() */

void HotUISeedPacketListProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUISeedPacketListProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_0364d054,0x128,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUISeedPacketListProperties::StaticGetClass() */

long * HotUISeedPacketListProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HotUISeedPacketListProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUISeedPacketListProperties::GetClass() const */

long * HotUISeedPacketListProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"HotUISeedPacketListProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUISeedPacketListProperties::GetWidgetClass() const */

long * HotUISeedPacketListProperties::GetWidgetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (HotUISeedPacketList::sClass != (long *)0x0) {
    return HotUISeedPacketList::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  HotUISeedPacketList::sClass = plVar1;
  uVar2 = HotUIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"HotUISeedPacketList",uVar2,HotUISeedPacketList::StaticNew);
  HotUISeedPacketList::StaticClassInit();
  return HotUISeedPacketList::sClass;
}


/* HotUISeedPacketListProperties::HotUISeedPacketListProperties() */

void __thiscall
HotUISeedPacketListProperties::HotUISeedPacketListProperties(HotUISeedPacketListProperties *this)

{
  HotUIWidgetProperties::HotUIWidgetProperties((HotUIWidgetProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06671640;
  return;
}


/* HotUISeedPacketListProperties::StaticNew() */

HotUISeedPacketListProperties * HotUISeedPacketListProperties::StaticNew(void)

{
  HotUISeedPacketListProperties *this;
  
  this = ::operator_new(0x128);
  HotUISeedPacketListProperties(this);
  return this;
}


/* HotUISeedPacketListProperties::~HotUISeedPacketListProperties() */

void __thiscall
HotUISeedPacketListProperties::~HotUISeedPacketListProperties(HotUISeedPacketListProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06671640;
  HotUIWidgetProperties::~HotUIWidgetProperties((HotUIWidgetProperties *)this);
  return;
}


/* HotUISeedPacketListProperties::~HotUISeedPacketListProperties() */

void __thiscall
HotUISeedPacketListProperties::~HotUISeedPacketListProperties(HotUISeedPacketListProperties *this)

{
  ~HotUISeedPacketListProperties(this);
  AK::FreeHook(this);
  return;
}

