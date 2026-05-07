// Class: HotUIScrollWidget


/* HotUIScrollWidget::RemoveWidget(Sexy::Widget*) */

void HotUIScrollWidget::RemoveWidget(Widget *param_1)

{
  if (*(long **)(param_1 + 0x218) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x218) + 0x68))();
    (**(code **)(**(long **)(param_1 + 0x218) + 0x198))
              (*(long **)(param_1 + 0x218),0,0,*(undefined4 *)(param_1 + 0x50),
               *(undefined4 *)(param_1 + 0x54));
  }
  return;
}


/* HotUIScrollWidget::ScrollerMoved(Sexy::ScrollWidget*) */

void HotUIScrollWidget::ScrollerMoved(ScrollWidget *param_1)

{
  if (*(long **)(param_1 + 0x220) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x220) + 0x30))();
  }
  return;
}


/* non-virtual thunk to HotUIScrollWidget::ScrollerMoved(Sexy::ScrollWidget*) */

void __thiscall HotUIScrollWidget::ScrollerMoved(HotUIScrollWidget *this,ScrollWidget *param_1)

{
  ScrollerMoved((ScrollWidget *)(this + -0x210));
  return;
}


/* HotUIScrollWidget::ScrollTargetReached(Sexy::ScrollWidget*) */

void HotUIScrollWidget::ScrollTargetReached(ScrollWidget *param_1)

{
  if (*(long **)(param_1 + 0x220) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x220) + 0x10))();
  }
  return;
}


/* non-virtual thunk to HotUIScrollWidget::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
HotUIScrollWidget::ScrollTargetReached(HotUIScrollWidget *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x210));
  return;
}


/* HotUIScrollWidget::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void HotUIScrollWidget::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  if (*(long **)(param_1 + 0x220) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x220) + 0x18))();
  }
  return;
}


/* non-virtual thunk to HotUIScrollWidget::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
HotUIScrollWidget::ScrollTargetInterrupted(HotUIScrollWidget *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x210));
  return;
}


/* HotUIScrollWidget::AddWidget(Sexy::Widget*) */

void __thiscall HotUIScrollWidget::AddWidget(HotUIScrollWidget *this,Widget *param_1)

{
  long *plVar1;
  ScrollWidget *this_00;
  
  plVar1 = *(long **)(this + 0x218);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,param_1);
    return;
  }
  this_00 = ::operator_new(0x210);
  Sexy::ScrollWidget::ScrollWidget(this_00,(ScrollWidgetListener *)(this + 0x210));
  *(ScrollWidget **)(this + 0x218) = this_00;
  HotUIWidget::AddWidget((HotUIWidget *)this,(Widget *)this_00);
  (**(code **)(**(long **)(this + 0x218) + 0x60))(*(long **)(this + 0x218),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIScrollWidget::StaticClassInit() */

void HotUIScrollWidget::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIScrollWidget");
    (*pcVar2)(plVar1,asStack_10,FUN_0364bd74,0x228,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIScrollWidget::StaticGetClass() */

long * HotUIScrollWidget::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HotUIScrollWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIScrollWidget::SetScrollListener(Sexy::ScrollWidgetListener*) */

void __thiscall
HotUIScrollWidget::SetScrollListener(HotUIScrollWidget *this,ScrollWidgetListener *param_1)

{
  *(ScrollWidgetListener **)(this + 0x220) = param_1;
  return;
}


/* HotUIScrollWidget::onUpdate() */

void __thiscall HotUIScrollWidget::onUpdate(HotUIScrollWidget *this)

{
  HotUIZPSMeterProperties *pHVar1;
  GridItemWaterMist *this_00;
  float fVar2;
  
  if ((*(long *)(this + 0x218) != 0) &&
     (pHVar1 = HotUIWidget::getProps<HotUIZPSMeterProperties>((HotUIWidget *)this),
     pHVar1[300] != (HotUIZPSMeterProperties)0x0)) {
    this_00 = *(GridItemWaterMist **)(this + 0x218);
    fVar2 = (float)PVZ_RealDt();
    GridItemWaterMist::SetExtraAttackRate(this_00,fVar2);
    return;
  }
  return;
}


/* HotUIScrollWidget::getScrollMode() */

undefined4 __thiscall HotUIScrollWidget::getScrollMode(HotUIScrollWidget *this)

{
  undefined4 uVar1;
  HotUIZPSMeterProperties *pHVar2;
  
  pHVar2 = HotUIWidget::getProps<HotUIZPSMeterProperties>((HotUIWidget *)this);
  uVar1 = *(undefined4 *)(pHVar2 + 0x128);
  switch(uVar1) {
  case 0:
    return 0;
  case 1:
    return 1;
  case 2:
    return 2;
  case 3:
    uVar1 = 3;
  }
  return uVar1;
}


/* HotUIScrollWidget::onLayoutFinalized() */

void __thiscall HotUIScrollWidget::onLayoutFinalized(HotUIScrollWidget *this)

{
  undefined4 uVar1;
  long *plVar2;
  ScrollWidget *pSVar3;
  
  plVar2 = *(long **)(this + 0x218);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x198))
              (plVar2,0,0,*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x54));
    pSVar3 = *(ScrollWidget **)(this + 0x218);
    uVar1 = getScrollMode(this);
    Sexy::ScrollWidget::SetScrollMode(pSVar3,uVar1);
    return;
  }
  return;
}


/* HotUIScrollWidget::HotUIScrollWidget() */

void __thiscall HotUIScrollWidget::HotUIScrollWidget(HotUIScrollWidget *this)

{
  HotUIWidget::HotUIWidget((HotUIWidget *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x210));
  *(undefined8 *)(this + 0x220) = 0;
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined ***)this = &PTR_GetWidgetClass_06670e60;
  *(undefined ***)(this + 0x210) = &PTR__HotUIScrollWidget_066711e8;
  return;
}


/* HotUIScrollWidget::StaticNew() */

HotUIScrollWidget * HotUIScrollWidget::StaticNew(void)

{
  HotUIScrollWidget *this;
  
  this = ::operator_new(0x228);
  HotUIScrollWidget(this);
  return this;
}


/* HotUIScrollWidget::~HotUIScrollWidget() */

void __thiscall HotUIScrollWidget::~HotUIScrollWidget(HotUIScrollWidget *this)

{
  *(undefined ***)this = &PTR_GetWidgetClass_06670e60;
  *(undefined ***)(this + 0x210) = &PTR__HotUIScrollWidget_066711e8;
  if (*(Widget **)(this + 0x218) != (Widget *)0x0) {
    HotUIWidget::RemoveWidget((HotUIWidget *)this,*(Widget **)(this + 0x218));
    if (*(long **)(this + 0x218) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x218) + 0x18))();
      *(undefined8 *)(this + 0x218) = 0;
    }
  }
  HotUIWidget::~HotUIWidget((HotUIWidget *)this);
  return;
}


/* non-virtual thunk to HotUIScrollWidget::~HotUIScrollWidget() */

void __thiscall HotUIScrollWidget::~HotUIScrollWidget(HotUIScrollWidget *this)

{
  ~HotUIScrollWidget(this + -0x210);
  return;
}


/* HotUIScrollWidget::~HotUIScrollWidget() */

void __thiscall HotUIScrollWidget::~HotUIScrollWidget(HotUIScrollWidget *this)

{
  ~HotUIScrollWidget(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to HotUIScrollWidget::~HotUIScrollWidget() */

void __thiscall HotUIScrollWidget::~HotUIScrollWidget(HotUIScrollWidget *this)

{
  ~HotUIScrollWidget(this + -0x210);
  return;
}

