// Class: HotUIMessageBar


/* HotUIMessageBar::onUpdate() */

void __thiscall HotUIMessageBar::onUpdate(HotUIMessageBar *this)

{
  if (*(MessageWidget **)(this + 0x210) != (MessageWidget *)0x0) {
    MessageWidget::Update(*(MessageWidget **)(this + 0x210));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIMessageBar::onDraw(Sexy::Graphics*) */

void __thiscall HotUIMessageBar::onDraw(HotUIMessageBar *this,Graphics *param_1)

{
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x210) != 0) {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    Sexy::Graphics::ClearClipRect(param_1);
    (**(code **)(**(long **)(this + 0x210) + 0x10))(*(long **)(this + 0x210),param_1);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIMessageBar::StaticClassInit() */

void HotUIMessageBar::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIMessageBar");
    (*pcVar2)(plVar1,asStack_10,FUN_03647d8c,0x218,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIMessageBar::StaticGetClass() */

long * HotUIMessageBar::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HotUIMessageBar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIMessageBar::ShowMessage(std::wstring const&, MessageStyle) */

void __thiscall
HotUIMessageBar::ShowMessage(HotUIMessageBar *this,undefined8 param_1,undefined8 param_3)

{
  MessageWidget *this_00;
  
  if (*(long *)(this + 0x210) != 0) {
    MessageWidget::SetLabel();
    return;
  }
  this_00 = ::operator_new(0x620);
  MessageWidget::MessageWidget(this_00);
  *(MessageWidget **)(this + 0x210) = this_00;
  MessageWidget::SetLabel(this_00,param_1,param_3);
  return;
}


/* HotUIMessageBar::HideMessage() */

void __thiscall HotUIMessageBar::HideMessage(HotUIMessageBar *this)

{
  if (*(MessageWidget **)(this + 0x210) != (MessageWidget *)0x0) {
    MessageWidget::Clear(*(MessageWidget **)(this + 0x210));
    return;
  }
  return;
}


/* HotUIMessageBar::HotUIMessageBar() */

void __thiscall HotUIMessageBar::HotUIMessageBar(HotUIMessageBar *this)

{
  HotUIWidget::HotUIWidget((HotUIWidget *)this);
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined ***)this = &PTR_GetWidgetClass_0666f7b0;
  return;
}


/* HotUIMessageBar::StaticNew() */

HotUIMessageBar * HotUIMessageBar::StaticNew(void)

{
  HotUIMessageBar *this;
  
  this = ::operator_new(0x218);
  HotUIMessageBar(this);
  return this;
}


/* HotUIMessageBar::~HotUIMessageBar() */

void __thiscall HotUIMessageBar::~HotUIMessageBar(HotUIMessageBar *this)

{
  *(undefined ***)this = &PTR_GetWidgetClass_0666f7b0;
  if (*(long **)(this + 0x210) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x210) + 8))();
    *(undefined8 *)(this + 0x210) = 0;
  }
  HotUIWidget::~HotUIWidget((HotUIWidget *)this);
  return;
}


/* HotUIMessageBar::~HotUIMessageBar() */

void __thiscall HotUIMessageBar::~HotUIMessageBar(HotUIMessageBar *this)

{
  ~HotUIMessageBar(this);
  AK::FreeHook(this);
  return;
}

