// Class: PauseButton


/* PauseButton::onGamePaused() */

void __thiscall PauseButton::onGamePaused(PauseButton *this)

{
  this[0x163] = (PauseButton)0x1;
  return;
}


/* PauseButton::onGameUnpaused() */

void __thiscall PauseButton::onGameUnpaused(PauseButton *this)

{
  this[0x163] = (PauseButton)0x0;
  return;
}


/* PauseButton::~PauseButton() */

void __thiscall PauseButton::~PauseButton(PauseButton *this)

{
  *(undefined ***)this = &PTR_GetClass_06793a60;
  *(undefined ***)(this + 0x10) = &PTR__PauseButton_06793c00;
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to PauseButton::~PauseButton() */

void __thiscall PauseButton::~PauseButton(PauseButton *this)

{
  ~PauseButton(this + -0x10);
  return;
}


/* PauseButton::~PauseButton() */

void __thiscall PauseButton::~PauseButton(PauseButton *this)

{
  ~PauseButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PauseButton::~PauseButton() */

void __thiscall PauseButton::~PauseButton(PauseButton *this)

{
  ~PauseButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PauseButton::StaticClassInit() */

void PauseButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"PauseButton");
    (*pcVar2)(plVar1,asStack_10,FUN_03f0b9d0,0x168,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PauseButton::StaticGetClass() */

long * PauseButton::StaticGetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"PauseButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PauseButton::GetClass() const */

long * PauseButton::GetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"PauseButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PauseButton::PauseButton() */

void __thiscall PauseButton::PauseButton(PauseButton *this)

{
  UIWidget::UIWidget((UIWidget *)this);
  this[0x163] = (PauseButton)0x0;
  *(undefined ***)this = &PTR_GetClass_06793a60;
  *(undefined ***)(this + 0x10) = &PTR__PauseButton_06793c00;
  return;
}


/* PauseButton::StaticNew() */

PauseButton * PauseButton::StaticNew(void)

{
  PauseButton *this;
  
  this = ::operator_new(0x168);
  PauseButton(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PauseButton::GetHitRect() */

void __thiscall PauseButton::GetHitRect(PauseButton *this)

{
  long lVar1;
  int iVar2;
  Insets *in_x8;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  lVar1 = ___stack_chk_guard;
  UIWidget::GetDrawRect();
  iVar2 = FUN_03f0b870();
  Sexy::Insets::Insets
            (in_x8,local_18 - iVar2,local_14 - iVar2,local_10 + iVar2 * 2,local_c + iVar2 * 2);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PauseButton::onGameplayEnded() */

void __thiscall PauseButton::onGameplayEnded(PauseButton *this)

{
  UIWidget::SetClickable((UIWidget *)this,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PauseButton::registerForEvents() */

void __thiscall PauseButton::registerForEvents(PauseButton *this)

{
  undefined *puVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGamePaused);
  Sexy::Delegate0::Delegate0<PauseButton,void(PauseButton::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GamePaused,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameUnpaused);
  Sexy::Delegate0::Delegate0<PauseButton,void(PauseButton::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameUnpaused,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayEnded);
  Sexy::Delegate0::Delegate0<PauseButton,void(PauseButton::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameplayEnded,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PauseButton::Draw(Sexy::Graphics*) */

void __thiscall PauseButton::Draw(PauseButton *this,Graphics *param_1)

{
  Image *pIVar1;
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  if (this[0x163] == (PauseButton)0x0) {
    pIVar1 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae2040);
    Sexy::Graphics::DrawImage(param_1,pIVar1,0,0);
  }
  else {
    pIVar1 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae2010);
    Sexy::Graphics::DrawImage(param_1,pIVar1,0,0);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PauseButton::Draw(Sexy::Graphics*) */

void __thiscall PauseButton::Draw(PauseButton *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

