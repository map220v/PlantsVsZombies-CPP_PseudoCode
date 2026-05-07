// Class: HotUIWidgetPacketContainerProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidgetPacketContainerProperties::StaticClassInit() */

void HotUIWidgetPacketContainerProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIWidgetPacketContainerProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_034beb7c,0x128,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIWidgetPacketContainerProperties::StaticGetClass() */

long * HotUIWidgetPacketContainerProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HotUIWidgetPacketContainerProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIWidgetPacketContainerProperties::GetClass() const */

long * HotUIWidgetPacketContainerProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"HotUIWidgetPacketContainerProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIWidgetPacketContainerProperties::GetWidgetClass() const */

long * HotUIWidgetPacketContainerProperties::GetWidgetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (HotUIWidgetPacketContainer::sClass != (long *)0x0) {
    return HotUIWidgetPacketContainer::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  HotUIWidgetPacketContainer::sClass = plVar1;
  uVar2 = HotUIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIWidgetPacketContainer",uVar2,HotUIWidgetPacketContainer::StaticNew);
  HotUIWidgetPacketContainer::StaticClassInit();
  return HotUIWidgetPacketContainer::sClass;
}


/* HotUIWidgetPacketContainerProperties::HotUIWidgetPacketContainerProperties() */

void __thiscall
HotUIWidgetPacketContainerProperties::HotUIWidgetPacketContainerProperties
          (HotUIWidgetPacketContainerProperties *this)

{
  HotUIWidgetProperties::HotUIWidgetProperties((HotUIWidgetProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0664b760;
  return;
}


/* HotUIWidgetPacketContainerProperties::StaticNew() */

HotUIWidgetPacketContainerProperties * HotUIWidgetPacketContainerProperties::StaticNew(void)

{
  HotUIWidgetPacketContainerProperties *this;
  
  this = ::operator_new(0x128);
  HotUIWidgetPacketContainerProperties(this);
  return this;
}


/* HotUIWidgetPacketContainerProperties::~HotUIWidgetPacketContainerProperties() */

void __thiscall
HotUIWidgetPacketContainerProperties::~HotUIWidgetPacketContainerProperties
          (HotUIWidgetPacketContainerProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0664b760;
  HotUIWidgetProperties::~HotUIWidgetProperties((HotUIWidgetProperties *)this);
  return;
}


/* HotUIWidgetPacketContainerProperties::~HotUIWidgetPacketContainerProperties() */

void __thiscall
HotUIWidgetPacketContainerProperties::~HotUIWidgetPacketContainerProperties
          (HotUIWidgetPacketContainerProperties *this)

{
  ~HotUIWidgetPacketContainerProperties(this);
  AK::FreeHook(this);
  return;
}

