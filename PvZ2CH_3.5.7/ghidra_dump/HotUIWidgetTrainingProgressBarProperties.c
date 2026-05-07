// Class: HotUIWidgetTrainingProgressBarProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidgetTrainingProgressBarProperties::StaticClassInit() */

void HotUIWidgetTrainingProgressBarProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIWidgetTrainingProgressBarProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_034bc680,0x128,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIWidgetTrainingProgressBarProperties::StaticGetClass() */

long * HotUIWidgetTrainingProgressBarProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HotUIWidgetTrainingProgressBarProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIWidgetTrainingProgressBarProperties::GetClass() const */

long * HotUIWidgetTrainingProgressBarProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"HotUIWidgetTrainingProgressBarProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIWidgetTrainingProgressBarProperties::GetWidgetClass() const */

long * HotUIWidgetTrainingProgressBarProperties::GetWidgetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (HotUIWidgetTrainingProgressBar::sClass != (long *)0x0) {
    return HotUIWidgetTrainingProgressBar::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  HotUIWidgetTrainingProgressBar::sClass = plVar1;
  uVar2 = HotUIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIWidgetTrainingProgressBar",uVar2,HotUIWidgetTrainingProgressBar::StaticNew)
  ;
  HotUIWidgetTrainingProgressBar::StaticClassInit();
  return HotUIWidgetTrainingProgressBar::sClass;
}


/* HotUIWidgetTrainingProgressBarProperties::HotUIWidgetTrainingProgressBarProperties() */

void __thiscall
HotUIWidgetTrainingProgressBarProperties::HotUIWidgetTrainingProgressBarProperties
          (HotUIWidgetTrainingProgressBarProperties *this)

{
  HotUIWidgetProperties::HotUIWidgetProperties((HotUIWidgetProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06648840;
  return;
}


/* HotUIWidgetTrainingProgressBarProperties::StaticNew() */

HotUIWidgetTrainingProgressBarProperties * HotUIWidgetTrainingProgressBarProperties::StaticNew(void)

{
  HotUIWidgetTrainingProgressBarProperties *this;
  
  this = ::operator_new(0x128);
  HotUIWidgetTrainingProgressBarProperties(this);
  return this;
}


/* HotUIWidgetTrainingProgressBarProperties::~HotUIWidgetTrainingProgressBarProperties() */

void __thiscall
HotUIWidgetTrainingProgressBarProperties::~HotUIWidgetTrainingProgressBarProperties
          (HotUIWidgetTrainingProgressBarProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06648840;
  HotUIWidgetProperties::~HotUIWidgetProperties((HotUIWidgetProperties *)this);
  return;
}


/* HotUIWidgetTrainingProgressBarProperties::~HotUIWidgetTrainingProgressBarProperties() */

void __thiscall
HotUIWidgetTrainingProgressBarProperties::~HotUIWidgetTrainingProgressBarProperties
          (HotUIWidgetTrainingProgressBarProperties *this)

{
  ~HotUIWidgetTrainingProgressBarProperties(this);
  AK::FreeHook(this);
  return;
}

