// Class: HotUITouchLayer


/* HotUITouchLayer::TouchBegan(Sexy::Touch const&) */

void HotUITouchLayer::TouchBegan(Touch *param_1)

{
  Sexy::Event0::operator()((Event0 *)(param_1 + 0x210));
  return;
}


/* HotUITouchLayer::TouchEnded(Sexy::Touch const&) */

void HotUITouchLayer::TouchEnded(Touch *param_1)

{
  Sexy::Event0::operator()((Event0 *)(param_1 + 0x230));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUITouchLayer::StaticClassInit() */

void HotUITouchLayer::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUITouchLayer");
    (*pcVar2)(plVar1,asStack_10,FUN_03666ee0,0x250,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUITouchLayer::StaticGetClass() */

long * HotUITouchLayer::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HotUITouchLayer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUITouchLayer::HotUITouchLayer() */

void __thiscall HotUITouchLayer::HotUITouchLayer(HotUITouchLayer *this)

{
  HotUIWidget::HotUIWidget((HotUIWidget *)this);
  *(undefined ***)this = &PTR_GetWidgetClass_06675520;
  Sexy::Event0::Event0((Event0 *)(this + 0x210));
  Sexy::Event0::Event0((Event0 *)(this + 0x230));
  return;
}


/* HotUITouchLayer::StaticNew() */

HotUITouchLayer * HotUITouchLayer::StaticNew(void)

{
  HotUITouchLayer *this;
  
  this = ::operator_new(0x250);
  HotUITouchLayer(this);
  return this;
}


/* HotUITouchLayer::~HotUITouchLayer() */

void __thiscall HotUITouchLayer::~HotUITouchLayer(HotUITouchLayer *this)

{
  *(undefined ***)this = &PTR_GetWidgetClass_06675520;
  Sexy::Event0::~Event0((Event0 *)(this + 0x230));
  Sexy::Event0::~Event0((Event0 *)(this + 0x210));
  HotUIWidget::~HotUIWidget((HotUIWidget *)this);
  return;
}


/* HotUITouchLayer::~HotUITouchLayer() */

void __thiscall HotUITouchLayer::~HotUITouchLayer(HotUITouchLayer *this)

{
  ~HotUITouchLayer(this);
  AK::FreeHook(this);
  return;
}


/* HotUITouchLayer::AddTouchBeganListener(Sexy::Delegate0) */

void __thiscall HotUITouchLayer::AddTouchBeganListener(HotUITouchLayer *this,Delegate0 *param_2)

{
  Sexy::Event0::operator+=((Event0 *)(this + 0x210),param_2);
  return;
}

