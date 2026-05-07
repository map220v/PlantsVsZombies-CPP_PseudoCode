// Class: HotUISliderProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUISliderProperties::StaticClassInit() */

void HotUISliderProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUISliderProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_0364eaf8,0x140,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUISliderProperties::StaticGetClass() */

long * HotUISliderProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HotUISliderProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUISliderProperties::GetClass() const */

long * HotUISliderProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"HotUISliderProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUISliderProperties::GetWidgetClass() const */

long * HotUISliderProperties::GetWidgetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (HotUISlider::sClass != (long *)0x0) {
    return HotUISlider::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  HotUISlider::sClass = plVar1;
  uVar2 = HotUIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"HotUISlider",uVar2,HotUISlider::StaticNew);
  HotUISlider::StaticClassInit();
  return HotUISlider::sClass;
}


/* HotUISliderProperties::HotUISliderProperties() */

void __thiscall HotUISliderProperties::HotUISliderProperties(HotUISliderProperties *this)

{
  HotUIWidgetProperties::HotUIWidgetProperties((HotUIWidgetProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06671a50;
  Set8BytesTo0(this + 0x128);
  Set8BytesTo0(this + 0x130);
  Set8BytesTo0(this + 0x138);
  return;
}


/* HotUISliderProperties::StaticNew() */

HotUISliderProperties * HotUISliderProperties::StaticNew(void)

{
  HotUISliderProperties *this;
  
  this = ::operator_new(0x140);
  HotUISliderProperties(this);
  return this;
}


/* HotUISliderProperties::~HotUISliderProperties() */

void __thiscall HotUISliderProperties::~HotUISliderProperties(HotUISliderProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06671a50;
  std::string::~string((string *)(this + 0x138));
  std::string::~string((string *)(this + 0x130));
  std::string::~string((string *)(this + 0x128));
  HotUIWidgetProperties::~HotUIWidgetProperties((HotUIWidgetProperties *)this);
  return;
}


/* HotUISliderProperties::~HotUISliderProperties() */

void __thiscall HotUISliderProperties::~HotUISliderProperties(HotUISliderProperties *this)

{
  ~HotUISliderProperties(this);
  AK::FreeHook(this);
  return;
}

