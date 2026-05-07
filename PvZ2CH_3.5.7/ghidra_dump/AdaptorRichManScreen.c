// Class: AdaptorRichManScreen


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRichManScreen::StaticClassInit() */

void AdaptorRichManScreen::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorRichManScreen");
    (*pcVar2)(plVar1,asStack_10,FUN_038dc408,0x130,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRichManScreen::StaticGetClass() */

long * AdaptorRichManScreen::StaticGetClass(void)

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
  uVar2 = HotUIAdaptor::StaticGetClass();
  (*pcVar3)(plVar1,"AdaptorRichManScreen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorRichManScreen::OnConfirmBackToMap() */

void AdaptorRichManScreen::OnConfirmBackToMap(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  PlantWarsUtils::GoToPlantWarsMainMenu();
  return;
}


/* AdaptorRichManScreen::canHandleInput() */

undefined8 __thiscall AdaptorRichManScreen::canHandleInput(AdaptorRichManScreen *this)

{
  char cVar1;
  long lVar2;
  AdaptorRichManBoard *this_00;
  undefined8 uVar3;
  
  lVar2 = FUN_038db6ec(*(undefined8 *)(this + 0x128));
  if ((lVar2 != 0) && (cVar1 = GameStateMgr::IsTransitioning(gGameStateMgr), cVar1 == '\0')) {
    this_00 = (AdaptorRichManBoard *)FUN_038db6ec(*(undefined8 *)(this + 0x128));
    uVar3 = AdaptorRichManBoard::CanRollDice(this_00);
    return uVar3;
  }
  return 0;
}


/* AdaptorRichManScreen::enterDiceShop() */

UITheaterDiceShop * AdaptorRichManScreen::enterDiceShop(void)

{
  UITheaterDiceShop *pUVar1;
  char cVar2;
  UITheaterDiceShop *pUVar3;
  
  pUVar1 = UISingletonDialog<UITheaterDiceShop>::m_pInstance;
  pUVar3 = pUVar1;
  if (UISingletonDialog<UITheaterDiceShop>::m_pInstance == (UITheaterDiceShop *)0x0) {
    pUVar3 = ::operator_new(0x140);
    UITheaterDiceShop::UITheaterDiceShop(pUVar3);
    UISingletonDialog<UITheaterDiceShop>::m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = UISingletonDialog<UITheaterDiceShop>::m_pInstance;
    if (cVar2 == '\0') {
      if (UISingletonDialog<UITheaterDiceShop>::m_pInstance != (UITheaterDiceShop *)0x0) {
        (**(code **)(*(long *)UISingletonDialog<UITheaterDiceShop>::m_pInstance + 0x18))();
      }
      UISingletonDialog<UITheaterDiceShop>::m_pInstance = (UITheaterDiceShop *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* AdaptorRichManScreen::OnConfirmQuickDiceStore() */

void AdaptorRichManScreen::OnConfirmQuickDiceStore(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  enterDiceShop();
  return;
}


/* AdaptorRichManScreen::enterShop() */

UITheaterShop * AdaptorRichManScreen::enterShop(void)

{
  UITheaterShop *pUVar1;
  char cVar2;
  UITheaterShop *pUVar3;
  
  pUVar1 = UISingletonDialog<UITheaterShop>::m_pInstance;
  pUVar3 = pUVar1;
  if (UISingletonDialog<UITheaterShop>::m_pInstance == (UITheaterShop *)0x0) {
    pUVar3 = ::operator_new(0x150);
    UITheaterShop::UITheaterShop(pUVar3);
    UISingletonDialog<UITheaterShop>::m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = UISingletonDialog<UITheaterShop>::m_pInstance;
    if (cVar2 == '\0') {
      if (UISingletonDialog<UITheaterShop>::m_pInstance != (UITheaterShop *)0x0) {
        (**(code **)(*(long *)UISingletonDialog<UITheaterShop>::m_pInstance + 0x18))();
      }
      UISingletonDialog<UITheaterShop>::m_pInstance = (UITheaterShop *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* AdaptorRichManScreen::~AdaptorRichManScreen() */

void __thiscall AdaptorRichManScreen::~AdaptorRichManScreen(AdaptorRichManScreen *this)

{
  long lVar1;
  long *plVar2;
  
  *(undefined ***)this = &PTR_getHotUIAdaptorClass_066bb460;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066bb7c0;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066bb808;
  if (*(long *)(this + 0x120) != 0) {
    plVar2 = *(long **)(*(long *)(this + 0x120) + 0x20);
    (**(code **)(*plVar2 + 0x68))(plVar2);
    if (*(long **)(this + 0x120) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x120) + 0x18))();
    }
    *(undefined8 *)(this + 0x120) = 0;
  }
  if (*(long *)(this + 0x128) != 0) {
    plVar2 = *(long **)(*(long *)(this + 0x128) + 0x20);
    (**(code **)(*plVar2 + 0x68))(plVar2);
    if (*(long **)(this + 0x128) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x128) + 0x18))();
    }
    *(undefined8 *)(this + 0x128) = 0;
  }
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  lVar1 = Sexy::LazySingleton<RichManUIMgr>::GetInstance();
  FUN_038db6f8(lVar1 + 0x50);
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* AdaptorRichManScreen::~AdaptorRichManScreen() */

void __thiscall AdaptorRichManScreen::~AdaptorRichManScreen(AdaptorRichManScreen *this)

{
  ~AdaptorRichManScreen(this);
  AK::FreeHook(this);
  return;
}


/* AdaptorRichManScreen::canRollDice(int) */

bool __thiscall AdaptorRichManScreen::canRollDice(AdaptorRichManScreen *this,int param_1)

{
  int iVar1;
  RichManUIMgr *this_00;
  
  this_00 = (RichManUIMgr *)Sexy::LazySingleton<RichManUIMgr>::GetInstance();
  iVar1 = RichManUIMgr::GetLeftDice(this_00);
  return param_1 <= iVar1;
}


/* AdaptorRichManScreen::buildMainBoard() */

GachaItemInfo * __thiscall AdaptorRichManScreen::buildMainBoard(AdaptorRichManScreen *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  RichManUIMgr *this_00;
  undefined4 *puVar5;
  GachaItemInfo *in_x8;
  
  GachaItemInfo::GachaItemInfo(in_x8);
  this_00 = (RichManUIMgr *)Sexy::LazySingleton<RichManUIMgr>::GetInstance();
  puVar5 = (undefined4 *)RichManUIMgr::GetEventBoardConfig(this_00);
  uVar1 = *puVar5;
  uVar2 = puVar5[1];
  uVar3 = puVar5[2];
  uVar4 = puVar5[4];
  *(undefined4 *)(in_x8 + 0xc) = puVar5[3];
  *(undefined4 *)(in_x8 + 0x10) = uVar4;
  *(undefined4 *)(in_x8 + 8) = uVar3;
  *(undefined4 *)(in_x8 + 4) = uVar1;
  *(undefined4 *)in_x8 = uVar2;
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRichManScreen::onLoadUIView() */

void __thiscall AdaptorRichManScreen::onLoadUIView(AdaptorRichManScreen *this)

{
  SecretGachaMgr *this_00;
  undefined8 uVar1;
  HotUIManager *this_01;
  HotUIFile *pHVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (SecretGachaMgr *)Sexy::LazySingleton<RichManUIMgr>::GetInstance();
  SecretGachaMgr::GetScreenType(this_00);
  uVar1 = FUN_0547429c(asStack_18);
  Sexy::StrFormat("RichManScreen_%s",asStack_10,uVar1);
  this_01 = (HotUIManager *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  pHVar2 = (HotUIFile *)HotUIManager::LoadUIFile(this_01,asStack_10);
  HotUIAdaptor::addLinkToUIFile((HotUIAdaptor *)this,pHVar2);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRichManScreen::AdaptorRichManScreen() */

void __thiscall AdaptorRichManScreen::AdaptorRichManScreen(AdaptorRichManScreen *this)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066bb7c0;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066bb808;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined ***)this = &PTR_getHotUIAdaptorClass_066bb460;
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifySetDice);
  Sexy::Delegate0::Delegate0<AdaptorRichManScreen,void(AdaptorRichManScreen::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::NotifySetDice,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRichManScreen::StaticNew() */

AdaptorRichManScreen * AdaptorRichManScreen::StaticNew(void)

{
  AdaptorRichManScreen *this;
  
  this = ::operator_new(0x130);
  AdaptorRichManScreen(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRichManScreen::showBonusRollConfirm(bool) */

void __thiscall AdaptorRichManScreen::showBonusRollConfirm(AdaptorRichManScreen *this,bool param_1)

{
  LawnApp *this_00;
  int iVar1;
  int iVar2;
  PVZ2UIDialog *this_01;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_038dbc04(400);
  iVar2 = FUN_038dbc04(0xfa);
  this_01 = (PVZ2UIDialog *)
            LawnApp::ShowPVZ2Dialog(this_00,(float)iVar1,(float)iVar2,(PVZ2UIDialog *)0x0);
  FUN_05478178(awStack_50,L"[BONUS_ROLL_TITLE]",auStack_58);
  PVZ2UIDialog::SetHeaderLabel(this_01,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05478178(awStack_50,L"[BONUS_ROLL_TEXT]",auStack_58);
  PVZ2UIDialog::SetFooterLabel(this_01,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  PVZ2UIDialog::SetBackgroundDarken(this_01,true,0.5);
  FUN_05478178(auStack_58,&DAT_0570b6d8,auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnConfirmRollSmall);
  Sexy::Delegate0::Delegate0<AdaptorRichManScreen,void(AdaptorRichManScreen::*)()>
            (aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(this_01,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  FUN_05478178(auStack_58,&DAT_0570b700,auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnConfirmRollMid);
  Sexy::Delegate0::Delegate0<AdaptorRichManScreen,void(AdaptorRichManScreen::*)()>
            (aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(this_01,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  if (param_1) {
    FUN_05478178(auStack_58,&DAT_0570b728,auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnConfirmRollLarge);
    Sexy::Delegate0::Delegate0<AdaptorRichManScreen,void(AdaptorRichManScreen::*)()>
              (aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(this_01,auStack_58,aDStack_38,0);
    FUN_05476c50(auStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRichManScreen::showOverview() */

void AdaptorRichManScreen::showOverview(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  PVZ2UIDialog *this;
  wchar16 *in_x1;
  LineBreakCategory *in_x2;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  wchar16 *local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (___stack_chk_guard,in_x1,in_x2,in_x3,in_x4);
  if (cVar1 == '\0') {
    iVar2 = FUN_038dbc04(0x352);
    iVar3 = FUN_038dbc04(0x226);
  }
  else {
    iVar2 = FUN_038dbc04(800);
    iVar3 = FUN_038dbc04(0x226);
  }
  this = (PVZ2UIDialog *)
         LawnApp::ShowPVZ2Dialog(gLawnApp,(float)iVar2,(float)iVar3,(PVZ2UIDialog *)0x0);
  FUN_05478178(awStack_50,L"[OVERVIEW_TITLE]",auStack_58);
  PVZ2UIDialog::SetHeaderLabel(this,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05478178(awStack_50,L"[OVERVIEW_CONTENT]",auStack_58);
  PVZ2UIDialog::SetFooterLabel(this,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  PVZ2UIDialog::SetFooterAlign(this,3);
  iVar2 = FUN_038dbc04(2);
  PVZ2UIDialog::SetFooterBottomPadding(this,iVar2);
  PVZ2UIDialog::SetBackgroundDarken(this,true,0.5);
  FUN_05478178(auStack_58,L"[OVERVIEW_CONFIRM]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(this,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRichManScreen::showShopConfirm() */

void __thiscall AdaptorRichManScreen::showShopConfirm(AdaptorRichManScreen *this)

{
  LawnApp *this_00;
  int iVar1;
  int iVar2;
  PVZ2UIDialog *this_01;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_038dbc04(400);
  this_00 = gLawnApp;
  iVar2 = FUN_038dbc04(0xfa);
  this_01 = (PVZ2UIDialog *)
            LawnApp::ShowPVZ2Dialog(this_00,(float)iVar1,(float)iVar2,(PVZ2UIDialog *)0x0);
  FUN_05478178(awStack_50,L"[DICE_NOT_ENOUGH_DIALOG_TITLE]",auStack_58);
  PVZ2UIDialog::SetHeaderLabel(this_01,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05478178(awStack_50,L"[DICE_NOT_ENOUGH_DIALOG_TEXT]",auStack_58);
  PVZ2UIDialog::SetFooterLabel(this_01,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  PVZ2UIDialog::SetBackgroundDarken(this_01,true,0.5);
  FUN_05478178(auStack_58,L"[BUTTON_CANCEL]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(this_01,auStack_58,aDStack_38,1);
  FUN_05476c50(auStack_58);
  nop();
  FUN_05478178(auStack_58,L"[GEM_NOT_ENOUGH_DIALOG_YES]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnConfirmQuickDiceStore);
  Sexy::Delegate0::Delegate0<AdaptorRichManScreen,void(AdaptorRichManScreen::*)()>
            (aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(this_01,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRichManScreen::onHandleRollDice(int) */

void __thiscall AdaptorRichManScreen::onHandleRollDice(AdaptorRichManScreen *this,int param_1)

{
  char cVar1;
  RichManUIMgr *this_00;
  
  cVar1 = canRollDice(this,param_1);
  if (cVar1 == '\0') {
    showShopConfirm(this);
    return;
  }
  this_00 = (RichManUIMgr *)Sexy::LazySingleton<RichManUIMgr>::GetInstance();
  RichManUIMgr::RequestRollDice(this_00,param_1);
  return;
}


/* AdaptorRichManScreen::OnConfirmRollSmall() */

void __thiscall AdaptorRichManScreen::OnConfirmRollSmall(AdaptorRichManScreen *this)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  onHandleRollDice(this,1);
  return;
}


/* AdaptorRichManScreen::OnConfirmRollMid() */

void __thiscall AdaptorRichManScreen::OnConfirmRollMid(AdaptorRichManScreen *this)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  onHandleRollDice(this,10);
  return;
}


/* AdaptorRichManScreen::OnConfirmRollLarge() */

void __thiscall AdaptorRichManScreen::OnConfirmRollLarge(AdaptorRichManScreen *this)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  onHandleRollDice(this,100);
  return;
}


/* AdaptorRichManScreen::handleRollDice() */

void __thiscall AdaptorRichManScreen::handleRollDice(AdaptorRichManScreen *this)

{
  int iVar1;
  RichManUIMgr *this_00;
  
  this_00 = (RichManUIMgr *)Sexy::LazySingleton<RichManUIMgr>::GetInstance();
  iVar1 = RichManUIMgr::GetLeftDice(this_00);
  if (100 < iVar1) {
    showBonusRollConfirm(this,true);
    return;
  }
  if (iVar1 < 0xb) {
    onHandleRollDice(this,1);
    return;
  }
  showBonusRollConfirm(this,false);
  return;
}


/* AdaptorRichManScreen::requestRollDice() */

void __thiscall AdaptorRichManScreen::requestRollDice(AdaptorRichManScreen *this)

{
  int iVar1;
  RichManUIMgr *this_00;
  
  this_00 = (RichManUIMgr *)Sexy::LazySingleton<RichManUIMgr>::GetInstance();
  iVar1 = RichManUIMgr::GetLeftDice(this_00);
  if (100 < iVar1) {
    showBonusRollConfirm(this,true);
    return;
  }
  if (iVar1 < 0xb) {
    onHandleRollDice(this,1);
    return;
  }
  showBonusRollConfirm(this,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRichManScreen::requestBackToMap() */

void AdaptorRichManScreen::requestBackToMap(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ReceivedDataCallback *in_x0;
  RichManUIMgr *this;
  PVZ2UIDialog *this_00;
  int in_w3;
  undefined1 auStack_68 [8];
  wstring awStack_60 [8];
  undefined1 auStack_58 [8];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (RichManUIMgr *)Sexy::LazySingleton<RichManUIMgr>::GetInstance();
  uVar1 = RichManUIMgr::GetLeftDice(this);
  if (uVar1 - 1 < 10) {
    std::string::string(asStack_50,"[DICE_WILL_CLEAR_DIALOG_TEXT]");
    StringHelper::ReplaceNumberString
              ((StringHelper *)asStack_50,(string *)L"{NUMBER}",(wchar_t *)(ulong)uVar1,in_w3);
    std::string::~string(asStack_50);
    nop();
    iVar2 = FUN_038dbc04(400);
    iVar3 = FUN_038dbc04(0xfa);
    this_00 = (PVZ2UIDialog *)
              LawnApp::ShowPVZ2Dialog(gLawnApp,(float)iVar2,(float)iVar3,(PVZ2UIDialog *)0x0);
    FUN_05478178(asStack_50,L"[DICE_WILL_CLEAR_DIALOG_TITLE]",auStack_58);
    PVZ2UIDialog::SetHeaderLabel(this_00,(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    nop();
    PVZ2UIDialog::SetFooterLabel(this_00,awStack_60);
    PVZ2UIDialog::SetBackgroundDarken(this_00,true,0.5);
    FUN_05478178(auStack_58,L"[DICE_WILL_CLEAR_DIALOG_OK]",auStack_68);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              (in_x0,OnConfirmBackToMap);
    Sexy::Delegate0::Delegate0<AdaptorRichManScreen,void(AdaptorRichManScreen::*)()>
              (aDStack_38,asStack_50);
    PVZ2UIDialog::AddButton(this_00,auStack_58,aDStack_38,0);
    FUN_05476c50(auStack_58);
    nop();
    FUN_05478178(auStack_58,L"[DICE_WILL_CLEAR_DIALOG_CANCEL]",auStack_68);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,asStack_50);
    PVZ2UIDialog::AddButton(this_00,auStack_58,aDStack_38,1);
    FUN_05476c50(auStack_58);
    nop();
    FUN_05476c50(awStack_60);
  }
  else {
    PlantWarsUtils::GoToPlantWarsMainMenu();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRichManScreen::ButtonDepress(int) */

void __thiscall AdaptorRichManScreen::ButtonDepress(AdaptorRichManScreen *this,int param_1)

{
  byte bVar1;
  
  bVar1 = canHandleInput(this);
  if ((param_1 != 3) <= bVar1) {
    if (param_1 == 1) {
      requestRollDice(this);
      return;
    }
    if (param_1 == 3) {
      requestBackToMap();
      return;
    }
    if (param_1 == 2) {
      enterShop();
      return;
    }
    if (param_1 == 4) {
      enterDiceShop();
      return;
    }
    if (param_1 == 5) {
      showOverview();
      return;
    }
  }
  return;
}


/* non-virtual thunk to AdaptorRichManScreen::ButtonDepress(int) */

void __thiscall AdaptorRichManScreen::ButtonDepress(AdaptorRichManScreen *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRichManScreen::addEvents(AdaptorRichManEventListConfig&) */

void __thiscall
AdaptorRichManScreen::addEvents(AdaptorRichManScreen *this,AdaptorRichManEventListConfig *param_1)

{
  int iVar1;
  int iVar2;
  RichManUIMgr *pRVar3;
  InvitationPlayerInfo *pIVar4;
  int iVar5;
  InvitationPlayerInfo aIStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  InvitationPlayerInfo aIStack_28 [8];
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = (RichManUIMgr *)Sexy::LazySingleton<RichManUIMgr>::GetInstance();
  iVar2 = RichManUIMgr::GetEventConfigSize(pRVar3);
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      InvitationPlayerInfo::InvitationPlayerInfo(aIStack_48);
      pRVar3 = (RichManUIMgr *)Sexy::LazySingleton<RichManUIMgr>::GetInstance();
      iVar1 = iVar5 + 1;
      pIVar4 = (InvitationPlayerInfo *)RichManUIMgr::GetEventUIEntryConfigByIndex(pRVar3,iVar5);
      InvitationPlayerInfo::InvitationPlayerInfo(aIStack_28,pIVar4);
      thunk_FUN_05475e00(aIStack_48,aIStack_28);
      thunk_FUN_05475e00(auStack_40,auStack_20);
      thunk_FUN_05475e00(auStack_38,auStack_18);
      thunk_FUN_05475e00(auStack_30,auStack_10);
      std::vector<AdaptorRichManEventEntryConfig,std::allocator<AdaptorRichManEventEntryConfig>>::
      push_back((vector<AdaptorRichManEventEntryConfig,std::allocator<AdaptorRichManEventEntryConfig>>
                 *)param_1,(AdaptorRichManEventEntryConfig *)aIStack_48);
      TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)aIStack_28);
      TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)aIStack_48);
      iVar5 = iVar1;
    } while (iVar1 != iVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRichManScreen::buildEventsBoard() */

void AdaptorRichManScreen::buildEventsBoard(void)

{
  AdaptorRichManScreen *in_x0;
  PIInterpolator *in_x8;
  
  Sexy::PIInterpolator::PIInterpolator(in_x8);
  addEvents(in_x0,(AdaptorRichManEventListConfig *)in_x8);
  return;
}


/* AdaptorRichManScreen::TryRollDice() */

void __thiscall AdaptorRichManScreen::TryRollDice(AdaptorRichManScreen *this)

{
  AdaptorRichManBoard *pAVar1;
  
  pAVar1 = (AdaptorRichManBoard *)FUN_038db6ec(*(undefined8 *)(this + 0x128));
  if (pAVar1 != (AdaptorRichManBoard *)0x0) {
    AdaptorRichManBoard::setState(pAVar1,2);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRichManScreen::onNotifySetDice() */

void __thiscall AdaptorRichManScreen::onNotifySetDice(AdaptorRichManScreen *this)

{
  int iVar1;
  HotUIFile *this_00;
  RichManUIMgr *this_01;
  HotUISeedPacketList *pHVar2;
  string *extraout_x1;
  code *pcVar3;
  Sexy aSStack_28 [8];
  undefined1 auStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_038db6b4(*(undefined8 *)(this + 0xf8));
  if (this_00 != (HotUIFile *)0x0) {
    this_01 = (RichManUIMgr *)Sexy::LazySingleton<RichManUIMgr>::GetInstance();
    iVar1 = RichManUIMgr::GetLeftDice(this_01);
    std::string::string(asStack_18,"DiceLabel");
    pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_18);
    std::string::~string(asStack_18);
    nop();
    pcVar3 = *(code **)(*(long *)pHVar2 + 0x360);
    DString::DString((DString *)asStack_18,iVar1);
    DString::operator_cast_to_string((DString *)asStack_18);
    Sexy::UTF8StringToWString(aSStack_28,extraout_x1);
    (*pcVar3)(pHVar2,auStack_20);
    FUN_05476c50(auStack_20);
    std::string::~string((string *)aSStack_28);
    DString::~DString((DString *)asStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRichManScreen::setup() */

void __thiscall AdaptorRichManScreen::setup(AdaptorRichManScreen *this)

{
  ButtonListener *pBVar1;
  int iVar2;
  HotUIFile *this_00;
  WidgetContainer *pWVar3;
  AdaptorRichManEventList *this_01;
  AdaptorRichManBoard *this_02;
  HotUISeedPacketList *pHVar4;
  RichManUIMgr *this_03;
  string *extraout_x1;
  code *pcVar5;
  Sexy aSStack_58 [8];
  undefined1 auStack_50 [8];
  string asStack_48 [16];
  string asStack_38 [24];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_038db6b4(*(undefined8 *)(this + 0xf8));
  if (this_00 != (HotUIFile *)0x0) {
    std::string::string(asStack_20,"EventListHolder");
    pBVar1 = (ButtonListener *)(this + 0xd8);
    pWVar3 = (WidgetContainer *)HotUIFile::GetWidgetByName(this_00,asStack_20);
    std::string::~string(asStack_20);
    nop();
    this_01 = ::operator_new(0x160);
    AdaptorRichManEventList::AdaptorRichManEventList(this_01);
    *(AdaptorRichManEventList **)(this + 0x120) = this_01;
    buildEventsBoard();
    AdaptorRichManEventList::Configure
              (*(AdaptorRichManEventList **)(this + 0x120),pWVar3,
               (AdaptorRichManEventListConfig *)asStack_20);
    HotUIAdaptor::LoadAndAddWidget(*(HotUIAdaptor **)(this + 0x120));
    std::string::string(asStack_38,"BoardHolder");
    pWVar3 = (WidgetContainer *)HotUIFile::GetWidgetByName(this_00,asStack_38);
    std::string::~string(asStack_38);
    nop();
    this_02 = ::operator_new(400);
    AdaptorRichManBoard::AdaptorRichManBoard(this_02);
    *(AdaptorRichManBoard **)(this + 0x128) = this_02;
    buildMainBoard(this);
    AdaptorRichManBoard::Configure
              (*(AdaptorRichManBoard **)(this + 0x128),pWVar3,(AdaptorBoardConfig *)asStack_38);
    HotUIAdaptor::LoadAndAddWidget(*(HotUIAdaptor **)(this + 0x128));
    std::string::string(asStack_48,"DiceButton");
    pHVar4 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_48);
    std::string::~string(asStack_48);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar4,1,pBVar1);
    std::string::string(asStack_48,"CloseButton");
    pHVar4 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_48);
    std::string::~string(asStack_48);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar4,3,pBVar1);
    std::string::string(asStack_48,"ShopButton");
    pHVar4 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_48);
    std::string::~string(asStack_48);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar4,2,pBVar1);
    std::string::string(asStack_48,"DiceBuyButton");
    pHVar4 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_48);
    std::string::~string(asStack_48);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar4,4,pBVar1);
    this_03 = (RichManUIMgr *)Sexy::LazySingleton<RichManUIMgr>::GetInstance();
    iVar2 = RichManUIMgr::GetLeftDice(this_03);
    std::string::string(asStack_48,"DiceLabel");
    pHVar4 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_48);
    std::string::~string(asStack_48);
    nop();
    pcVar5 = *(code **)(*(long *)pHVar4 + 0x360);
    DString::DString((DString *)asStack_48,iVar2);
    DString::operator_cast_to_string((DString *)asStack_48);
    Sexy::UTF8StringToWString(aSStack_58,extraout_x1);
    (*pcVar5)(pHVar4,auStack_50);
    FUN_05476c50(auStack_50);
    std::string::~string((string *)aSStack_58);
    DString::~DString((DString *)asStack_48);
    std::string::string(asStack_48,"OverviewButton");
    pHVar4 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_48);
    std::string::~string(asStack_48);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar4,5,pBVar1);
    std::string::string(asStack_48,"OverviewLabel");
    pHVar4 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_48);
    std::string::~string(asStack_48);
    nop();
    pcVar5 = *(code **)(*(long *)pHVar4 + 0x360);
    TodStringTranslate(L"[OVERVIEW_LABEL]");
    (*pcVar5)(pHVar4,asStack_48);
    FUN_05476c50(asStack_48);
    AdaptorRichManEventListConfig::~AdaptorRichManEventListConfig
              ((AdaptorRichManEventListConfig *)asStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRichManScreen::onLinkToUIViewCreated() */

void __thiscall AdaptorRichManScreen::onLinkToUIViewCreated(AdaptorRichManScreen *this)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<RichManUIMgr>::GetInstance();
  FUN_038db6f0(lVar1 + 0x50,this);
  setup(this);
  return;
}

