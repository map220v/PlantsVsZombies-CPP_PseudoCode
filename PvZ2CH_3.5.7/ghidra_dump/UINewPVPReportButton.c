// Class: UINewPVPReportButton


/* UINewPVPReportButton::OnMouseDown(int, int) */

void UINewPVPReportButton::OnMouseDown(int param_1,int param_2)

{
  (**(code **)(*(long *)(ulong)(uint)param_1 + 0xe8))((long *)(ulong)(uint)param_1,4);
  return;
}


/* UINewPVPReportButton::~UINewPVPReportButton() */

void __thiscall UINewPVPReportButton::~UINewPVPReportButton(UINewPVPReportButton *this)

{
  *(undefined ***)this = &PTR_GetClass_0664f660;
  *(undefined ***)(this + 0x10) = &PTR__UINewPVPReportButton_0664f800;
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to UINewPVPReportButton::~UINewPVPReportButton() */

void __thiscall UINewPVPReportButton::~UINewPVPReportButton(UINewPVPReportButton *this)

{
  ~UINewPVPReportButton(this + -0x10);
  return;
}


/* UINewPVPReportButton::~UINewPVPReportButton() */

void __thiscall UINewPVPReportButton::~UINewPVPReportButton(UINewPVPReportButton *this)

{
  ~UINewPVPReportButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UINewPVPReportButton::~UINewPVPReportButton() */

void __thiscall UINewPVPReportButton::~UINewPVPReportButton(UINewPVPReportButton *this)

{
  ~UINewPVPReportButton(this + -0x10);
  return;
}


/* UINewPVPReportButton::onGameplayRealStarted() */

void __thiscall UINewPVPReportButton::onGameplayRealStarted(UINewPVPReportButton *this)

{
  char cVar1;
  
  cVar1 = NewPVPUtils::IsPlayingNewPVPTutorial();
  if (cVar1 != '\0') {
    return;
  }
  UIWidget::SetVisible((UIWidget *)this,true);
  return;
}


/* UINewPVPReportButton::UINewPVPReportButton() */

void __thiscall UINewPVPReportButton::UINewPVPReportButton(UINewPVPReportButton *this)

{
  UIWidget::UIWidget((UIWidget *)this);
  this[0x163] = (UINewPVPReportButton)0x0;
  *(undefined ***)this = &PTR_GetClass_0664f660;
  *(undefined ***)(this + 0x10) = &PTR__UINewPVPReportButton_0664f800;
  return;
}


/* UINewPVPReportButton::StaticNew() */

UINewPVPReportButton * UINewPVPReportButton::StaticNew(void)

{
  UINewPVPReportButton *this;
  
  this = ::operator_new(0x168);
  UINewPVPReportButton(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPReportButton::StaticClassInit() */

void UINewPVPReportButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"UINewPVPReportButton");
    (*pcVar2)(plVar1,asStack_10,FUN_0351fccc,0x168,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewPVPReportButton::StaticGetClass() */

long * UINewPVPReportButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"UINewPVPReportButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UINewPVPReportButton::GetClass() const */

long * UINewPVPReportButton::GetClass(void)

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
  (*pcVar3)(plVar1,"UINewPVPReportButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UINewPVPReportButton::onConfirmReport() */

void __thiscall UINewPVPReportButton::onConfirmReport(UINewPVPReportButton *this)

{
  NewPVPMgr *this_00;
  
  LawnApp::KillPVZ2Dialog(gLawnApp);
  this_00 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  NewPVPMgr::TryTriggerReport(this_00);
  this[0x163] = (UINewPVPReportButton)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPReportButton::onReportResult(bool) */

void __thiscall UINewPVPReportButton::onReportResult(UINewPVPReportButton *this,bool param_1)

{
  LawnApp *this_00;
  PVZ2UIDialog *pPVar1;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    UIWidget::SetVisible((UIWidget *)this,false);
    this_00 = gLawnApp;
    FUN_05478178(awStack_58,L"[NEW_PVP_MAIN_VIEW_REPORT_TITLE]",auStack_68);
    FUN_05478178(awStack_50,L"[NEW_PVP_MAIN_VIEW_REPORT_SUCCESS]",auStack_60);
    pPVar1 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,0);
    FUN_05476c50(awStack_58);
    nop();
  }
  this[0x163] = (UINewPVPReportButton)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewPVPReportButton::onNewPVPNetworkResponseReceived(int, int) */

void __thiscall
UINewPVPReportButton::onNewPVPNetworkResponseReceived
          (UINewPVPReportButton *this,int param_1,int param_2)

{
  if (param_1 == 10) {
    switch(param_2) {
    case 0:
    case 1:
      break;
    case 2:
      onReportResult(this,true);
      return;
    case 3:
    case 4:
    case 5:
      onReportResult(this,false);
      return;
    default:
      onReportResult(this,false);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPReportButton::registerForEvents() */

void __thiscall UINewPVPReportButton::registerForEvents(UINewPVPReportButton *this)

{
  undefined *puVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayRealStarted);
  Sexy::Delegate0::Delegate0<UINewPVPReportButton,void(UINewPVPReportButton::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NotifyGameplayStarted,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNewPVPNetworkResponseReceived);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<UINewPVPReportButton,void(UINewPVPReportButton::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::NewPVPNetworkResponseReceived,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPReportButton::OnMouseUp(int, int) */

void UINewPVPReportButton::OnMouseUp(int param_1,int param_2)

{
  LawnApp *this;
  ReceivedDataCallback *pRVar1;
  PVZ2UIDialog *pPVar2;
  char *pcVar3;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this = gLawnApp;
  pRVar1 = (ReceivedDataCallback *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  if (pRVar1[0x163] == (ReceivedDataCallback)0x0) {
    FUN_05478178(awStack_58,L"[NEW_PVP_MAIN_VIEW_REPORT_TITLE]",auStack_68);
    FUN_05478178(awStack_50,L"[NEW_PVP_MAIN_VIEW_REPORT_TEXT]",auStack_60);
    pPVar2 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[BUTTON_CANCEL]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar2,awStack_58,aDStack_38,1);
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[NEW_PVP_MAIN_VIEW_REPORT_BTN_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              (pRVar1,onConfirmReport);
    Sexy::Delegate0::Delegate0<UINewPVPReportButton,void(UINewPVPReportButton::*)()>
              (aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar2,awStack_58,aDStack_38,0);
    FUN_05476c50(awStack_58);
    nop();
    pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar3,"Play_Pause");
    (**(code **)(*(long *)pRVar1 + 0xe8))(pRVar1,2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPReportButton::Draw(Sexy::Graphics*) */

void __thiscall UINewPVPReportButton::Draw(UINewPVPReportButton *this,Graphics *param_1)

{
  int iVar1;
  Image *pIVar2;
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  iVar1 = UIWidget::getWidgetStateSerialization((UIWidget *)this);
  if (iVar1 == 4) {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa51d8;
  }
  else {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa5000;
  }
  pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
  Sexy::Graphics::DrawImage(param_1,pIVar2,0,0);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UINewPVPReportButton::Draw(Sexy::Graphics*) */

void __thiscall UINewPVPReportButton::Draw(UINewPVPReportButton *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

