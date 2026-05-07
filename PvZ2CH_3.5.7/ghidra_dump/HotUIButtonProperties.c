// Class: HotUIButtonProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIButtonProperties::StaticClassInit() */

void HotUIButtonProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIButtonProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03620838,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIButtonProperties::StaticGetClass() */

long * HotUIButtonProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HotUIButtonProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIButtonProperties::GetClass() const */

long * HotUIButtonProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"HotUIButtonProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIButtonProperties::GetWidgetClass() const */

long * HotUIButtonProperties::GetWidgetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (HotUIButton::sClass != (long *)0x0) {
    return HotUIButton::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  HotUIButton::sClass = plVar1;
  uVar2 = HotUIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIButton",uVar2,HotUIButton::StaticNew);
  HotUIButton::StaticClassInit();
  return HotUIButton::sClass;
}


/* HotUIButtonProperties::HotUIButtonProperties() */

void __thiscall HotUIButtonProperties::HotUIButtonProperties(HotUIButtonProperties *this)

{
  size_t in_x2;
  
  HotUIWidgetProperties::HotUIWidgetProperties((HotUIWidgetProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0666aff0;
  Set8BytesTo0(this + 0x128);
  DynamicPadding::DynamicPadding((DynamicPadding *)(this + 0x130));
  Set8BytesTo0((string *)(this + 0x170));
  Set8BytesTo0((string *)(this + 0x178));
  Set8BytesTo0((string *)(this + 0x188));
  Set8BytesTo0((string *)(this + 400));
  Set8BytesTo0(this + 0x1a0);
  Set8BytesTo0(this + 0x1a8);
  Set8BytesTo0(this + 0x1b0);
  std::string::append((string *)(this + 0x170),"IMAGE_UI_GENERIC_PURPLEBUTTON",in_x2);
  std::string::append((string *)(this + 0x178),"IMAGE_UI_GENERIC_PURPLEBUTTON_DOWN",in_x2);
  this[0x180] = (HotUIButtonProperties)0x0;
  std::string::append((string *)(this + 0x188),"",in_x2);
  std::string::append((string *)(this + 400),"",in_x2);
  *(undefined4 *)(this + 0x19c) = 0;
  *(undefined4 *)(this + 0x198) = 5;
  return;
}


/* HotUIButtonProperties::StaticNew() */

HotUIButtonProperties * HotUIButtonProperties::StaticNew(void)

{
  HotUIButtonProperties *this;
  
  this = ::operator_new(0x1b8);
  HotUIButtonProperties(this);
  return this;
}


/* HotUIButtonProperties::~HotUIButtonProperties() */

void __thiscall HotUIButtonProperties::~HotUIButtonProperties(HotUIButtonProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0666aff0;
  std::string::~string((string *)(this + 0x1b0));
  std::string::~string((string *)(this + 0x1a8));
  std::string::~string((string *)(this + 0x1a0));
  std::string::~string((string *)(this + 400));
  std::string::~string((string *)(this + 0x188));
  std::string::~string((string *)(this + 0x178));
  std::string::~string((string *)(this + 0x170));
  DynamicPadding::~DynamicPadding((DynamicPadding *)(this + 0x130));
  std::string::~string((string *)(this + 0x128));
  HotUIWidgetProperties::~HotUIWidgetProperties((HotUIWidgetProperties *)this);
  return;
}


/* HotUIButtonProperties::~HotUIButtonProperties() */

void __thiscall HotUIButtonProperties::~HotUIButtonProperties(HotUIButtonProperties *this)

{
  ~HotUIButtonProperties(this);
  AK::FreeHook(this);
  return;
}

