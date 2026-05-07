// Class: HotUIMessageBarProperties


/* HotUIMessageBarProperties::GetWidgetClass() const */

long * HotUIMessageBarProperties::GetWidgetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (HotUIMessageBar::sClass != (long *)0x0) {
    return HotUIMessageBar::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  HotUIMessageBar::sClass = plVar1;
  uVar2 = HotUIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIMessageBar",uVar2,HotUIMessageBar::StaticNew);
  HotUIMessageBar::StaticClassInit();
  return HotUIMessageBar::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIMessageBarProperties::StaticClassInit() */

void HotUIMessageBarProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIMessageBarProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03647fa0,0x128,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIMessageBarProperties::StaticGetClass() */

long * HotUIMessageBarProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HotUIMessageBarProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIMessageBarProperties::GetClass() const */

long * HotUIMessageBarProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"HotUIMessageBarProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIMessageBarProperties::HotUIMessageBarProperties() */

void __thiscall
HotUIMessageBarProperties::HotUIMessageBarProperties(HotUIMessageBarProperties *this)

{
  HotUIWidgetProperties::HotUIWidgetProperties((HotUIWidgetProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0666fb20;
  return;
}


/* HotUIMessageBarProperties::StaticNew() */

HotUIMessageBarProperties * HotUIMessageBarProperties::StaticNew(void)

{
  HotUIMessageBarProperties *this;
  
  this = ::operator_new(0x128);
  HotUIMessageBarProperties(this);
  return this;
}


/* HotUIMessageBarProperties::~HotUIMessageBarProperties() */

void __thiscall
HotUIMessageBarProperties::~HotUIMessageBarProperties(HotUIMessageBarProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0666fb20;
  HotUIWidgetProperties::~HotUIWidgetProperties((HotUIWidgetProperties *)this);
  return;
}


/* HotUIMessageBarProperties::~HotUIMessageBarProperties() */

void __thiscall
HotUIMessageBarProperties::~HotUIMessageBarProperties(HotUIMessageBarProperties *this)

{
  ~HotUIMessageBarProperties(this);
  AK::FreeHook(this);
  return;
}

