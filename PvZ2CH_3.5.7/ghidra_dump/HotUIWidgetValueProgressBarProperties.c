// Class: HotUIWidgetValueProgressBarProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidgetValueProgressBarProperties::StaticClassInit() */

void HotUIWidgetValueProgressBarProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIWidgetValueProgressBarProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_033bf78c,0x128,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIWidgetValueProgressBarProperties::StaticGetClass() */

long * HotUIWidgetValueProgressBarProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HotUIWidgetValueProgressBarProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIWidgetValueProgressBarProperties::GetClass() const */

long * HotUIWidgetValueProgressBarProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"HotUIWidgetValueProgressBarProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIWidgetValueProgressBarProperties::GetWidgetClass() const */

long * HotUIWidgetValueProgressBarProperties::GetWidgetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (HotUIWidgetValueProgressBar::sClass != (long *)0x0) {
    return HotUIWidgetValueProgressBar::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  HotUIWidgetValueProgressBar::sClass = plVar1;
  uVar2 = HotUIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIWidgetValueProgressBar",uVar2,HotUIWidgetValueProgressBar::StaticNew);
  HotUIWidgetValueProgressBar::StaticClassInit();
  return HotUIWidgetValueProgressBar::sClass;
}


/* HotUIWidgetValueProgressBarProperties::HotUIWidgetValueProgressBarProperties() */

void __thiscall
HotUIWidgetValueProgressBarProperties::HotUIWidgetValueProgressBarProperties
          (HotUIWidgetValueProgressBarProperties *this)

{
  HotUIWidgetProperties::HotUIWidgetProperties((HotUIWidgetProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06617590;
  return;
}


/* HotUIWidgetValueProgressBarProperties::StaticNew() */

HotUIWidgetValueProgressBarProperties * HotUIWidgetValueProgressBarProperties::StaticNew(void)

{
  HotUIWidgetValueProgressBarProperties *this;
  
  this = ::operator_new(0x128);
  HotUIWidgetValueProgressBarProperties(this);
  return this;
}


/* HotUIWidgetValueProgressBarProperties::~HotUIWidgetValueProgressBarProperties() */

void __thiscall
HotUIWidgetValueProgressBarProperties::~HotUIWidgetValueProgressBarProperties
          (HotUIWidgetValueProgressBarProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06617590;
  HotUIWidgetProperties::~HotUIWidgetProperties((HotUIWidgetProperties *)this);
  return;
}


/* HotUIWidgetValueProgressBarProperties::~HotUIWidgetValueProgressBarProperties() */

void __thiscall
HotUIWidgetValueProgressBarProperties::~HotUIWidgetValueProgressBarProperties
          (HotUIWidgetValueProgressBarProperties *this)

{
  ~HotUIWidgetValueProgressBarProperties(this);
  AK::FreeHook(this);
  return;
}

