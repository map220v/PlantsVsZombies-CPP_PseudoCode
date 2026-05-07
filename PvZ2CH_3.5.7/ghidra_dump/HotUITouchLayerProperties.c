// Class: HotUITouchLayerProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUITouchLayerProperties::StaticClassInit() */

void HotUITouchLayerProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUITouchLayerProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03666ccc,0x128,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUITouchLayerProperties::StaticGetClass() */

long * HotUITouchLayerProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HotUITouchLayerProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUITouchLayerProperties::GetClass() const */

long * HotUITouchLayerProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"HotUITouchLayerProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUITouchLayerProperties::GetWidgetClass() const */

long * HotUITouchLayerProperties::GetWidgetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (HotUITouchLayer::sClass != (long *)0x0) {
    return HotUITouchLayer::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  HotUITouchLayer::sClass = plVar1;
  uVar2 = HotUIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"HotUITouchLayer",uVar2,HotUITouchLayer::StaticNew);
  HotUITouchLayer::StaticClassInit();
  return HotUITouchLayer::sClass;
}


/* HotUITouchLayerProperties::HotUITouchLayerProperties() */

void __thiscall
HotUITouchLayerProperties::HotUITouchLayerProperties(HotUITouchLayerProperties *this)

{
  HotUIWidgetProperties::HotUIWidgetProperties((HotUIWidgetProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06675480;
  return;
}


/* HotUITouchLayerProperties::StaticNew() */

HotUITouchLayerProperties * HotUITouchLayerProperties::StaticNew(void)

{
  HotUITouchLayerProperties *this;
  
  this = ::operator_new(0x128);
  HotUITouchLayerProperties(this);
  return this;
}


/* HotUITouchLayerProperties::~HotUITouchLayerProperties() */

void __thiscall
HotUITouchLayerProperties::~HotUITouchLayerProperties(HotUITouchLayerProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06675480;
  HotUIWidgetProperties::~HotUIWidgetProperties((HotUIWidgetProperties *)this);
  return;
}


/* HotUITouchLayerProperties::~HotUITouchLayerProperties() */

void __thiscall
HotUITouchLayerProperties::~HotUITouchLayerProperties(HotUITouchLayerProperties *this)

{
  ~HotUITouchLayerProperties(this);
  AK::FreeHook(this);
  return;
}

