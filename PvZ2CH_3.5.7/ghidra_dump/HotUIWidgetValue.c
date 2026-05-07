// Class: HotUIWidgetValue


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidgetValue::StaticClassInit() */

void HotUIWidgetValue::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIWidgetValue");
    (*pcVar2)(plVar1,asStack_10,FUN_03651ea0,0x218,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIWidgetValue::StaticGetClass() */

long * HotUIWidgetValue::StaticGetClass(void)

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
  uVar2 = HotUIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIWidgetValue",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIWidgetValue::HotUIWidgetValue() */

void __thiscall HotUIWidgetValue::HotUIWidgetValue(HotUIWidgetValue *this)

{
  HotUIWidget::HotUIWidget((HotUIWidget *)this);
  *(undefined ***)this = &PTR_GetWidgetClass_06672bd0;
  *(undefined4 *)(this + 0x210) = 0;
  return;
}


/* HotUIWidgetValue::StaticNew() */

HotUIWidgetValue * HotUIWidgetValue::StaticNew(void)

{
  HotUIWidgetValue *this;
  
  this = ::operator_new(0x218);
  HotUIWidgetValue(this);
  return this;
}


/* HotUIWidgetValue::~HotUIWidgetValue() */

void __thiscall HotUIWidgetValue::~HotUIWidgetValue(HotUIWidgetValue *this)

{
  *(undefined ***)this = &PTR_GetWidgetClass_06672bd0;
  HotUIWidget::~HotUIWidget((HotUIWidget *)this);
  return;
}


/* HotUIWidgetValue::~HotUIWidgetValue() */

void __thiscall HotUIWidgetValue::~HotUIWidgetValue(HotUIWidgetValue *this)

{
  ~HotUIWidgetValue(this);
  AK::FreeHook(this);
  return;
}

