// Class: HotUITouchCloseWidgetProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUITouchCloseWidgetProperties::StaticClassInit() */

void HotUITouchCloseWidgetProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUITouchCloseWidgetProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_033c2650,0x140,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUITouchCloseWidgetProperties::StaticGetClass() */

long * HotUITouchCloseWidgetProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HotUITouchCloseWidgetProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUITouchCloseWidgetProperties::GetClass() const */

long * HotUITouchCloseWidgetProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"HotUITouchCloseWidgetProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUITouchCloseWidgetProperties::GetWidgetClass() const */

long * HotUITouchCloseWidgetProperties::GetWidgetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (HotUITouchCloseWidget::sClass != (long *)0x0) {
    return HotUITouchCloseWidget::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  HotUITouchCloseWidget::sClass = plVar1;
  uVar2 = HotUIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"HotUITouchCloseWidget",uVar2,HotUITouchCloseWidget::StaticNew);
  HotUITouchCloseWidget::StaticClassInit();
  return HotUITouchCloseWidget::sClass;
}


/* HotUITouchCloseWidgetProperties::HotUITouchCloseWidgetProperties() */

void __thiscall
HotUITouchCloseWidgetProperties::HotUITouchCloseWidgetProperties
          (HotUITouchCloseWidgetProperties *this)

{
  HotUIWidgetProperties::HotUIWidgetProperties((HotUIWidgetProperties *)this);
  *(undefined ***)this = &PTR_GetClass_066179a0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x128));
  return;
}


/* HotUITouchCloseWidgetProperties::StaticNew() */

HotUITouchCloseWidgetProperties * HotUITouchCloseWidgetProperties::StaticNew(void)

{
  HotUITouchCloseWidgetProperties *this;
  
  this = ::operator_new(0x140);
  HotUITouchCloseWidgetProperties(this);
  return this;
}


/* HotUITouchCloseWidgetProperties::~HotUITouchCloseWidgetProperties() */

void __thiscall
HotUITouchCloseWidgetProperties::~HotUITouchCloseWidgetProperties
          (HotUITouchCloseWidgetProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_066179a0;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x128));
  HotUIWidgetProperties::~HotUIWidgetProperties((HotUIWidgetProperties *)this);
  return;
}


/* HotUITouchCloseWidgetProperties::~HotUITouchCloseWidgetProperties() */

void __thiscall
HotUITouchCloseWidgetProperties::~HotUITouchCloseWidgetProperties
          (HotUITouchCloseWidgetProperties *this)

{
  ~HotUITouchCloseWidgetProperties(this);
  AK::FreeHook(this);
  return;
}

