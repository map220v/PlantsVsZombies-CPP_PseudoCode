// Class: HotUIPowerUpButtonProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIPowerUpButtonProperties::StaticClassInit() */

void HotUIPowerUpButtonProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIPowerUpButtonProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_0364960c,0x128,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIPowerUpButtonProperties::StaticGetClass() */

long * HotUIPowerUpButtonProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HotUIPowerUpButtonProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIPowerUpButtonProperties::GetClass() const */

long * HotUIPowerUpButtonProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"HotUIPowerUpButtonProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIPowerUpButtonProperties::GetWidgetClass() const */

long * HotUIPowerUpButtonProperties::GetWidgetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (HotUIPowerUpButton::sClass != (long *)0x0) {
    return HotUIPowerUpButton::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  HotUIPowerUpButton::sClass = plVar1;
  uVar2 = HotUIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIPowerUpButton",uVar2,HotUIPowerUpButton::StaticNew);
  HotUIPowerUpButton::StaticClassInit();
  return HotUIPowerUpButton::sClass;
}


/* HotUIPowerUpButtonProperties::HotUIPowerUpButtonProperties() */

void __thiscall
HotUIPowerUpButtonProperties::HotUIPowerUpButtonProperties(HotUIPowerUpButtonProperties *this)

{
  HotUIWidgetProperties::HotUIWidgetProperties((HotUIWidgetProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0666ffd0;
  return;
}


/* HotUIPowerUpButtonProperties::StaticNew() */

HotUIPowerUpButtonProperties * HotUIPowerUpButtonProperties::StaticNew(void)

{
  HotUIPowerUpButtonProperties *this;
  
  this = ::operator_new(0x128);
  HotUIPowerUpButtonProperties(this);
  return this;
}


/* HotUIPowerUpButtonProperties::~HotUIPowerUpButtonProperties() */

void __thiscall
HotUIPowerUpButtonProperties::~HotUIPowerUpButtonProperties(HotUIPowerUpButtonProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0666ffd0;
  HotUIWidgetProperties::~HotUIWidgetProperties((HotUIWidgetProperties *)this);
  return;
}


/* HotUIPowerUpButtonProperties::~HotUIPowerUpButtonProperties() */

void __thiscall
HotUIPowerUpButtonProperties::~HotUIPowerUpButtonProperties(HotUIPowerUpButtonProperties *this)

{
  ~HotUIPowerUpButtonProperties(this);
  AK::FreeHook(this);
  return;
}

