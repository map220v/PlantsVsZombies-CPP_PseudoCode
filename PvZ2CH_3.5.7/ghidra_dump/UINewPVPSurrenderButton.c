// Class: UINewPVPSurrenderButton


/* UINewPVPSurrenderButton::~UINewPVPSurrenderButton() */

void __thiscall UINewPVPSurrenderButton::~UINewPVPSurrenderButton(UINewPVPSurrenderButton *this)

{
  *(undefined ***)this = &PTR_GetClass_0664f490;
  *(undefined ***)(this + 0x10) = &PTR__UINewPVPSurrenderButton_0664f630;
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to UINewPVPSurrenderButton::~UINewPVPSurrenderButton() */

void __thiscall UINewPVPSurrenderButton::~UINewPVPSurrenderButton(UINewPVPSurrenderButton *this)

{
  ~UINewPVPSurrenderButton(this + -0x10);
  return;
}


/* UINewPVPSurrenderButton::~UINewPVPSurrenderButton() */

void __thiscall UINewPVPSurrenderButton::~UINewPVPSurrenderButton(UINewPVPSurrenderButton *this)

{
  ~UINewPVPSurrenderButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UINewPVPSurrenderButton::~UINewPVPSurrenderButton() */

void __thiscall UINewPVPSurrenderButton::~UINewPVPSurrenderButton(UINewPVPSurrenderButton *this)

{
  ~UINewPVPSurrenderButton(this + -0x10);
  return;
}


/* UINewPVPSurrenderButton::onGameplayRealStarted() */

void __thiscall UINewPVPSurrenderButton::onGameplayRealStarted(UINewPVPSurrenderButton *this)

{
  char cVar1;
  
  cVar1 = NewPVPUtils::IsPlayingNewPVPTutorial();
  if (cVar1 != '\0') {
    return;
  }
  UIWidget::SetVisible((UIWidget *)this,true);
  return;
}


/* UINewPVPSurrenderButton::UINewPVPSurrenderButton() */

void __thiscall UINewPVPSurrenderButton::UINewPVPSurrenderButton(UINewPVPSurrenderButton *this)

{
  UIWidget::UIWidget((UIWidget *)this);
  this[0x163] = (UINewPVPSurrenderButton)0x0;
  *(undefined ***)this = &PTR_GetClass_0664f490;
  *(undefined ***)(this + 0x10) = &PTR__UINewPVPSurrenderButton_0664f630;
  return;
}


/* UINewPVPSurrenderButton::StaticNew() */

UINewPVPSurrenderButton * UINewPVPSurrenderButton::StaticNew(void)

{
  UINewPVPSurrenderButton *this;
  
  this = ::operator_new(0x168);
  UINewPVPSurrenderButton(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPSurrenderButton::StaticClassInit() */

void UINewPVPSurrenderButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"UINewPVPSurrenderButton");
    (*pcVar2)(plVar1,asStack_10,FUN_0351fa50,0x168,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewPVPSurrenderButton::StaticGetClass() */

long * UINewPVPSurrenderButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"UINewPVPSurrenderButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UINewPVPSurrenderButton::GetClass() const */

long * UINewPVPSurrenderButton::GetClass(void)

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
  (*pcVar3)(plVar1,"UINewPVPSurrenderButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UINewPVPSurrenderButton::onConfirmSurrender() */

void __thiscall UINewPVPSurrenderButton::onConfirmSurrender(UINewPVPSurrenderButton *this)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  NewPVPMgr::TryTriggerSurrender();
  this[0x163] = (UINewPVPSurrenderButton)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPSurrenderButton::registerForEvents() */

void __thiscall UINewPVPSurrenderButton::registerForEvents(UINewPVPSurrenderButton *this)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayRealStarted);
  Sexy::Delegate0::Delegate0<UINewPVPSurrenderButton,void(UINewPVPSurrenderButton::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::NotifyGameplayStarted,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPSurrenderButton::OnMouseUp(int, int) */

void UINewPVPSurrenderButton::OnMouseUp(int param_1,int param_2)

{
  LawnApp *this;
  PVZ2UIDialog *pPVar1;
  char *pcVar2;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (((ReceivedDataCallback *)(ulong)(uint)param_1)[0x163] == (ReceivedDataCallback)0x0) {
    FUN_05478178(awStack_58,L"[NEW_PVP_MAIN_VIEW_SURRENDER_TITLE]",auStack_68);
    FUN_05478178(awStack_50,L"[NEW_PVP_MAIN_VIEW_SURRENDER_TEXT]",auStack_60);
    pPVar1 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[BUTTON_CANCEL]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,1);
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[NEW_PVP_MAIN_VIEW_SURRENDER_BTN_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)(ulong)(uint)param_1,onConfirmSurrender);
    Sexy::Delegate0::Delegate0<UINewPVPSurrenderButton,void(UINewPVPSurrenderButton::*)()>
              (aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,0);
    FUN_05476c50(awStack_58);
    nop();
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_Pause");
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPSurrenderButton::Draw(Sexy::Graphics*) */

void __thiscall UINewPVPSurrenderButton::Draw(UINewPVPSurrenderButton *this,Graphics *param_1)

{
  Image *pIVar1;
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  pIVar1 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa52b0);
  Sexy::Graphics::DrawImage(param_1,pIVar1,0,0);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UINewPVPSurrenderButton::Draw(Sexy::Graphics*) */

void __thiscall UINewPVPSurrenderButton::Draw(UINewPVPSurrenderButton *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

