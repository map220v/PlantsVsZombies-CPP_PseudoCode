// Class: UIWorldCupEntrance


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWorldCupEntrance::GetLayoutName() */

void __thiscall UIWorldCupEntrance::GetLayoutName(UIWorldCupEntrance *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIWorldCup");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIWorldCupEntrance::onCancelBackToMap() */

void UIWorldCupEntrance::onCancelBackToMap(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  return;
}


/* UIWorldCupEntrance::ButtonMouseLeave(int) */

void __thiscall UIWorldCupEntrance::ButtonMouseLeave(UIWorldCupEntrance *this,int param_1)

{
  if (7 < param_1 - 4U) {
    return;
  }
  LawnApp::KillPlantSkillTipsUI(gLawnApp);
  return;
}


/* non-virtual thunk to UIWorldCupEntrance::ButtonMouseLeave(int) */

void __thiscall UIWorldCupEntrance::ButtonMouseLeave(UIWorldCupEntrance *this,int param_1)

{
  ButtonMouseLeave(this + -0xd8,param_1);
  return;
}


/* UIWorldCupEntrance::~UIWorldCupEntrance() */

void __thiscall UIWorldCupEntrance::~UIWorldCupEntrance(UIWorldCupEntrance *this)

{
  *(undefined ***)this = &PTR_GetClass_066d1a10;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066d1d68;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UISingletonDialog<UIWorldCupEntrance>::~UISingletonDialog
            ((UISingletonDialog<UIWorldCupEntrance> *)this);
  return;
}


/* UIWorldCupEntrance::~UIWorldCupEntrance() */

void __thiscall UIWorldCupEntrance::~UIWorldCupEntrance(UIWorldCupEntrance *this)

{
  ~UIWorldCupEntrance(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWorldCupEntrance::hideCloseBtn() */

void __thiscall UIWorldCupEntrance::hideCloseBtn(UIWorldCupEntrance *this)

{
  PVZ2UIButton *pPVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIButton_Close");
  pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pPVar1 != (PVZ2UIButton *)0x0) {
    (**(code **)(*(long *)pPVar1 + 0x158))(pPVar1,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIWorldCupEntrance::OnMessageCallbackBuyTicket(UIMessageBox*, int) */

void UIWorldCupEntrance::OnMessageCallbackBuyTicket(UIMessageBox *param_1,int param_2)

{
  if (UISingletonDialog<UIMessageBox>::m_pInstance != (long *)0x0) {
    (**(code **)(*UISingletonDialog<UIMessageBox>::m_pInstance + 0x318))();
    UISingletonDialog<UIMessageBox>::m_pInstance = (long *)0x0;
  }
  return;
}


/* UIWorldCupEntrance::OnGameClearanceMessageCallback(UIMessageBox*, int) */

void UIWorldCupEntrance::OnGameClearanceMessageCallback(UIMessageBox *param_1,int param_2)

{
  if (UISingletonDialog<UIMessageBox>::m_pInstance != (long *)0x0) {
    (**(code **)(*UISingletonDialog<UIMessageBox>::m_pInstance + 0x318))();
    UISingletonDialog<UIMessageBox>::m_pInstance = (long *)0x0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWorldCupEntrance::showClearanceTip() */

void __thiscall UIWorldCupEntrance::showClearanceTip(UIWorldCupEntrance *this)

{
  UIMessageBox *this_00;
  wstring awStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
  if (this_00 != (UIMessageBox *)0x0) {
    TodStringTranslate(L"[REVIVE_TIP]");
    std::string::string(asStack_50,"[PVZ_WORLDCUP_SHOWCLEARANCETIP]");
    StringHelper::ToStringValue(asStack_50);
    std::string::~string(asStack_50);
    nop();
    UIMessageBox::SetMessage(this_00,awStack_58,awStack_60);
    UIMessageBox::SetTextFont(this_00,0x75);
    UIMessageBox::SetTitleFont(this_00,0x75);
    Sexy::Color::Color((Color *)asStack_50,1);
    UIMessageBox::SetTextColor(this_00,asStack_50);
    UIMessageBox::SetShowType(this_00,2);
    std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
    UIMessageBox::SetBackground(this_00,asStack_50);
    std::string::~string(asStack_50);
    nop();
    UIMessageBox::SetBackgroundDarken(this_00,true,0.5);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnGameClearanceMessageCallback);
    Sexy::Delegate2<UIMessageBox*,int>::
    Delegate2<UIWorldCupEntrance,void(UIWorldCupEntrance::*)(UIMessageBox*,int)>
              (aDStack_38,asStack_50);
    UIMessageBox::SetCallback(this_00,aDStack_38);
    FUN_05476c50(awStack_58);
    FUN_05476c50(awStack_60);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIWorldCupEntrance::onConfirmBackToMap() */

void UIWorldCupEntrance::onConfirmBackToMap(void)

{
  WorldCupManager *this;
  
  UISingletonDialog<UIWorldCupEntrance>::CloseDialog();
  LawnApp::KillPVZ2Dialog(gLawnApp);
  this = (WorldCupManager *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
  WorldCupManager::setIsQuit(this,true);
  Board::ClearCursors(*(Board **)(gLawnApp + 0x9f0));
  (**(code **)(**(long **)(gLawnApp + 0x9f0) + 800))(*(long **)(gLawnApp + 0x9f0),0);
  Board::Quit(*(Board **)(gLawnApp + 0x9f0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWorldCupEntrance::OnNotifyBeginGame(bool) */

void __thiscall UIWorldCupEntrance::OnNotifyBeginGame(UIWorldCupEntrance *this,bool param_1)

{
  char cVar1;
  undefined4 uVar2;
  WorldCupManager *pWVar3;
  DVisible *this_00;
  XMLParser *this_01;
  long lVar4;
  ulong uVar5;
  UIMessageBox *this_02;
  wstring awStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    Sexy::OutputDebugStrF((wchar_t *)"UISpringBuyPlant::OnNotifyBuyPlant i_success = %d ",1);
    UISingletonDialog<UIWorldCupEntrance>::CloseDialog();
    pWVar3 = (WorldCupManager *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
    cVar1 = WorldCupManager::isNeedConsumeTickets(pWVar3);
    if (cVar1 != '\0') {
      pWVar3 = (WorldCupManager *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
      WorldCupManager::subscribeWorldCupTickets(pWVar3,1);
    }
    this_00 = (DVisible *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
    DVisible::setVisible(this_00,false);
    this_01 = (XMLParser *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
    uVar2 = Sexy::XMLParser::GetCurrentLineNum(this_01);
    lVar4 = Sexy::LazySingleton<WorldCupMgr>::GetInstance();
    FUN_0394e060(lVar4 + 0x28,uVar2);
    pWVar3 = (WorldCupManager *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
    uVar5 = WorldCupManager::getCurLoopNum(pWVar3);
    Sexy::StrFormat("WorldCup_%d",asStack_50,uVar5 & 0xffffffff);
    pWVar3 = (WorldCupManager *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
    WorldCupManager::setIsQuit(pWVar3,false);
    GameStateMgr::StartLevel(gGameStateMgr,&DAT_06abc4d0,asStack_50,0xffffffff,1,1,0);
    std::string::~string(asStack_50);
  }
  else {
    Sexy::OutputDebugStrF((wchar_t *)"UISpringBuyPlant::OnNotifyBuyPlant i_success = %d ");
    this_02 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (this_02 != (UIMessageBox *)0x0) {
      TodStringTranslate(L"[REVIVE_TIP]");
      std::string::string(asStack_50,"[PVZ_WORLDCUP_NOTICKET_TIPS]");
      StringHelper::ToStringValue(asStack_50);
      std::string::~string(asStack_50);
      nop();
      UIMessageBox::SetMessage(this_02,awStack_58,awStack_60);
      UIMessageBox::SetTextFont(this_02,0x75);
      UIMessageBox::SetTitleFont(this_02,0x75);
      Sexy::Color::Color((Color *)asStack_50,1);
      UIMessageBox::SetTextColor(this_02,asStack_50);
      UIMessageBox::SetShowType(this_02,2);
      std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      UIMessageBox::SetBackground(this_02,asStack_50);
      std::string::~string(asStack_50);
      nop();
      UIMessageBox::SetBackgroundDarken(this_02,true,0.5);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,OnMessageCallbackBuyTicket);
      Sexy::Delegate2<UIMessageBox*,int>::
      Delegate2<UIWorldCupEntrance,void(UIWorldCupEntrance::*)(UIMessageBox*,int)>
                (aDStack_38,asStack_50);
      UIMessageBox::SetCallback(this_02,aDStack_38);
      FUN_05476c50(awStack_58);
      FUN_05476c50(awStack_60);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWorldCupEntrance::updateTicketsUI() */

void __thiscall UIWorldCupEntrance::updateTicketsUI(UIWorldCupEntrance *this)

{
  UIWidgetText *pUVar1;
  PakInterface *this_00;
  ulong uVar2;
  int iVar3;
  long lVar4;
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_Tickets");
  iVar3 = (int)lVar4;
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  this_00 = (PakInterface *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
  uVar2 = PakInterface::GetFileSearchOrder(this_00);
  std::string::string(asStack_10,"[PVZ_WORLDCUP_LEFT_TICKET]");
  StringHelper::ReplaceNumberString
            ((StringHelper *)asStack_10,(string *)&DAT_056fda40,(wchar_t *)(uVar2 & 0xffffffff),
             iVar3);
  std::string::~string(asStack_10);
  nop();
  PuzzleTip::SetTip(pUVar1,auStack_18);
  FUN_05476c50(auStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIWorldCupEntrance::OnContinueGameMessageCallback(UIMessageBox*, int) */

void UIWorldCupEntrance::OnContinueGameMessageCallback(UIMessageBox *param_1,int param_2)

{
  WorldCupManager *this;
  
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    this = (WorldCupManager *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
    WorldCupManager::setIsQuit(this,true);
    Board::ClearCursors(*(Board **)(gLawnApp + 0x9f0));
    (**(code **)(**(long **)(gLawnApp + 0x9f0) + 800))(*(long **)(gLawnApp + 0x9f0),0);
    Board::Quit(*(Board **)(gLawnApp + 0x9f0));
    return;
  }
  return;
}


/* UIWorldCupEntrance::UIWorldCupEntrance() */

void __thiscall UIWorldCupEntrance::UIWorldCupEntrance(UIWorldCupEntrance *this)

{
  undefined *puVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UISingletonDialog<UIWorldCupEntrance>::UISingletonDialog
            ((UISingletonDialog<UIWorldCupEntrance> *)this);
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066d1d68;
  *(undefined ***)this = &PTR_GetClass_066d1a10;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyBuyWCTicket);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<UIWorldCupEntrance,void(UIWorldCupEntrance::*)(bool)>>
            ((MessageRouter *)puVar1,Message::GLBuyWorldCupTicket,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyBeginGame);
  local_40 = local_8;
  local_50 = local_18;
  uStack_48 = uStack_10;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<UIWorldCupEntrance,void(UIWorldCupEntrance::*)(bool)>>
            ((MessageRouter *)puVar1,Message::GLWorldCupBeginGame,&local_50);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWorldCupEntrance::showAwardIcon(int, int, int) */

void __thiscall
UIWorldCupEntrance::showAwardIcon(UIWorldCupEntrance *this,int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  NameMapperBase *pNVar5;
  UIRewardFrame *pUVar6;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  PVZ2UIButton *pPVar7;
  ulong __n;
  undefined8 uVar8;
  code *pcVar9;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n = (ulong)(uint)param_2;
  Set8BytesTo0(asStack_18);
  pNVar5 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  cVar1 = NameMapperBase::ContainsId(pNVar5,param_1);
  if (cVar1 == '\0') {
    pNVar5 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
    cVar1 = NameMapperBase::ContainsId(pNVar5,param_1);
    if (cVar1 == '\0') {
      pNVar5 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
      cVar1 = NameMapperBase::ContainsId(pNVar5,param_1);
      if (cVar1 == '\0') {
        OtherServerNameMapper::GetInstance();
        cVar1 = FUN_0394e050(param_1);
        if (cVar1 != '\0') {
          uVar8 = 1;
          std::string::append(asStack_18,"gem",__n);
          goto LAB_03950ce8;
        }
        OtherServerNameMapper::GetInstance();
        cVar1 = FUN_0394e040(param_1);
        if (cVar1 != '\0') {
          uVar8 = 0;
          std::string::append(asStack_18,"coin",__n);
          goto LAB_03950ce8;
        }
        pNVar5 = (NameMapperBase *)PlantAccessoryInfoMapper::GetInstance();
        cVar1 = NameMapperBase::ContainsId(pNVar5,param_1);
        if (cVar1 == '\0') {
          pNVar5 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
          cVar1 = NameMapperBase::ContainsId(pNVar5,param_1);
          if (cVar1 == '\0') {
            uVar8 = 3;
            goto LAB_03950ce8;
          }
          iVar2 = PlantAccessoryPieceMapper::GetInstance();
        }
        else {
          iVar2 = PlantAccessoryInfoMapper::GetInstance();
        }
        uVar8 = 5;
      }
      else {
        iVar2 = AvatarChipNameMapperServerID::GetInstance();
        uVar8 = 4;
      }
    }
    else {
      iVar2 = PlantChipNameMapperServerID::GetInstance();
      uVar8 = 3;
    }
  }
  else {
    iVar2 = PlantNameMapperServerID::GetInstance();
    uVar8 = 2;
  }
  NameMapperBase::GetNameForId(iVar2);
  FUN_05474278(asStack_18,asStack_10);
  std::string::~string(asStack_10);
LAB_03950ce8:
  pUVar6 = ::operator_new(0x148);
  UIRewardFrame::UIRewardFrame(pUVar6,uVar8,asStack_18,(ulong)(uint)param_2,1);
  pcVar9 = *(code **)(*(long *)pUVar6 + 0x198);
  uVar3 = FUN_0394ebd8(0);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abc508);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abc508);
  iVar4 = SalesProgressBar::GetCurrentLevel(this_01);
  (*pcVar9)(pUVar6,uVar3,uVar3,(int)((float)iVar2 * 0.8),(int)((float)iVar4 * 0.8));
  pUVar6[0x59] = (UIRewardFrame)0x0;
  Sexy::StrFormat("UIButton_round%d",asStack_10,(ulong)(uint)param_3);
  pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  if (pPVar7 != (PVZ2UIButton *)0x0) {
    (**(code **)(*(long *)pPVar7 + 0x60))(pPVar7,pUVar6);
  }
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWorldCupEntrance::ButtonPress(int) */

void __thiscall UIWorldCupEntrance::ButtonPress(UIWorldCupEntrance *this,int param_1)

{
  LawnApp *pLVar1;
  char *pcVar2;
  wstring awStack_58 [8];
  undefined1 auStack_50 [8];
  wstring awStack_48 [8];
  wstring awStack_40 [8];
  wstring awStack_38 [8];
  wstring awStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar2,"Play_UI_Button_Click_Press");
  if (param_1 - 4U < 8) {
    Sexy::StrFormat(L"[PVZ_WORLDCUP_AWARD%d]",awStack_58,(ulong)(param_1 - 3U));
    TodStringTranslate(L"[PVZ_WORLDCUP_AWARD_DES]");
    std::operator+(awStack_48,L"\n");
    TodStringTranslate(awStack_58);
    std::operator+(awStack_40,awStack_38);
    TodStringTranslate(awStack_30);
    FUN_05476c50(awStack_30);
    FUN_05476c50(awStack_38);
    FUN_05476c50(awStack_40);
    FUN_05476c50(awStack_48);
    pLVar1 = gLawnApp;
    FUN_0394eb7c(afStack_28,param_1 - 3U,this);
    LawnApp::ShowPlantSkillTipsUI(pLVar1,auStack_50,0,0,3,afStack_28,1);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    FUN_05476c50(auStack_50);
    FUN_05476c50(awStack_58);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UIWorldCupEntrance::ButtonPress(int) */

void __thiscall UIWorldCupEntrance::ButtonPress(UIWorldCupEntrance *this,int param_1)

{
  ButtonPress(this + -0xd8,param_1);
  return;
}


/* UIWorldCupEntrance::showExitMenu_Internal(std::wstring, std::wstring) */

PVZ2UIDialog * __thiscall
UIWorldCupEntrance::showExitMenu_Internal(undefined8 param_1,wstring *param_2,wstring *param_3)

{
  LawnApp *this;
  int iVar1;
  int iVar2;
  PVZ2UIDialog *this_00;
  char *pcVar3;
  
  this = gLawnApp;
  iVar1 = FUN_0394ebd8(0x1ea);
  iVar2 = FUN_0394ebd8(0x118);
  this_00 = (PVZ2UIDialog *)
            LawnApp::ShowPVZ2Dialog(this,(float)iVar1,(float)iVar2,(PVZ2UIDialog *)0x0);
  PVZ2UIDialog::SetHeaderLabel(this_00,param_2);
  PVZ2UIDialog::SetFooterLabel(this_00,param_3);
  PVZ2UIDialog::SetBackgroundDarken(this_00,true,0.5);
  pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar3,"Play_UI_Menu_PopUp_General");
  return this_00;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWorldCupEntrance::showConfirmBackToMap() */

void __thiscall UIWorldCupEntrance::showConfirmBackToMap(UIWorldCupEntrance *this)

{
  int iVar1;
  PVZ2UIDialog *this_00;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(auStack_60,L"[LEAVE_GAME_HEADER]",aCStack_50);
  nop();
  FUN_05477b24(auStack_58,auStack_60);
  FUN_05478178(aCStack_50,L"[LEAVE_WORLDCUP_GAME_BODY]",auStack_68);
  this_00 = (PVZ2UIDialog *)showExitMenu_Internal(this,auStack_58,aCStack_50);
  FUN_05476c50(aCStack_50);
  nop();
  FUN_05476c50(auStack_58);
  iVar1 = FUN_0394ebd8(0xa0);
  PVZ2UIDialog::SetFooterHeight(this_00,iVar1);
  FUN_05478178(auStack_58,L"[DIALOG_STRING_CANCEL]",auStack_68);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCancelBackToMap);
  Sexy::Delegate0::Delegate0<UIWorldCupEntrance,void(UIWorldCupEntrance::*)()>
            (aDStack_38,aCStack_50);
  PVZ2UIDialog::AddButton(this_00,auStack_58,aDStack_38,1);
  FUN_05476c50(auStack_58);
  nop();
  FUN_05478178(auStack_58,L"[LEAVE_GAME_BUTTON]",auStack_68);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onConfirmBackToMap);
  Sexy::Delegate0::Delegate0<UIWorldCupEntrance,void(UIWorldCupEntrance::*)()>
            (aDStack_38,aCStack_50);
  PVZ2UIDialog::AddButton(this_00,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  FUN_05476c50(auStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWorldCupEntrance::ButtonDepress(int) */

void UIWorldCupEntrance::ButtonDepress(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  ulong uVar6;
  UIMessageBox *this;
  WorldCupManager *pWVar7;
  NetworkMgr *this_00;
  long *plVar8;
  XMLParser *this_01;
  PlantDragonBruit *this_02;
  undefined4 in_w1;
  int in_w3;
  code *pcVar9;
  wstring awStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar5,"Play_UI_Button_Click_Release");
  switch(in_w1) {
  case 0:
    UISingletonDialog<UIWorldCupEntrance>::CloseDialog();
    if ((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
       (iVar2 = Board::GetBoardResult(*(Board **)(gLawnApp + 0x9f0)), iVar2 == 1)) {
      pWVar7 = (WorldCupManager *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
      WorldCupManager::setIsQuit(pWVar7,true);
      Board::ClearCursors(*(Board **)(gLawnApp + 0x9f0));
      (**(code **)(**(long **)(gLawnApp + 0x9f0) + 800))(*(long **)(gLawnApp + 0x9f0),0);
      Board::Quit(*(Board **)(gLawnApp + 0x9f0));
    }
    break;
  case 1:
    pWVar7 = (WorldCupManager *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
    uVar6 = WorldCupManager::getCurTicketPrice(pWVar7);
    FUN_05476574(awStack_60);
    pWVar7 = (WorldCupManager *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
    cVar1 = WorldCupManager::isCanBuyTicketNow(pWVar7);
    if (cVar1 == '\0') {
      std::string::string(asStack_58,"[PVZ_WORLDCUP_CANNOT_BUYTICKETS]");
      StringHelper::ToStringValue(asStack_58);
    }
    else {
      std::string::string(asStack_58,"[PVZ_WORLDCUP_BUYTICKETS]");
      StringHelper::ReplaceNumberString
                ((StringHelper *)asStack_58,(string *)L"{GEM_COUNT}",(wchar_t *)(uVar6 & 0xffffffff)
                 ,in_w3);
    }
    FUN_054766c8(awStack_60,asStack_50);
    FUN_05476c50(asStack_50);
    std::string::~string(asStack_58);
    nop();
    this = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (this == (UIMessageBox *)0x0) {
      FUN_05476c50(awStack_60);
    }
    else {
      TodStringTranslate(L"[REVIVE_TIP]");
      UIMessageBox::SetMessage(this,awStack_60,(wstring *)asStack_58);
      UIMessageBox::SetTextFont(this,0x75);
      UIMessageBox::SetTitleFont(this,0x75);
      Sexy::Color::Color((Color *)asStack_50,1);
      UIMessageBox::SetTextColor(this,asStack_50);
      UIMessageBox::SetShowType(this,6);
      std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      UIMessageBox::SetBackground(this,asStack_50);
      std::string::~string(asStack_50);
      nop();
      UIMessageBox::SetBackgroundDarken(this,true,0.5);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)(ulong)(uint)param_1,OnMessageCallback);
      Sexy::Delegate2<UIMessageBox*,int>::
      Delegate2<UIWorldCupEntrance,void(UIWorldCupEntrance::*)(UIMessageBox*,int)>
                (aDStack_38,asStack_50);
      UIMessageBox::SetCallback(this,aDStack_38);
      FUN_05476c50(asStack_58);
      FUN_05476c50(awStack_60);
    }
    break;
  case 2:
    pWVar7 = (WorldCupManager *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
    iVar2 = WorldCupManager::getCurLoopNum(pWVar7);
    if ((*(Board **)(gLawnApp + 0x9f0) == (Board *)0x0) ||
       (iVar3 = Board::GetBoardResult(*(Board **)(gLawnApp + 0x9f0)), iVar3 != 1)) {
      if (iVar2 < 2) {
        UISingletonDialog<UIWorldCupEntrance>::CloseDialog();
        UISingletonDialog<UIWorldCupSelectTeam>::ShowDialog();
      }
      else {
        this_00 = (NetworkMgr *)NetworkMgr::Instance();
        plVar8 = (long *)NetworkMgr::GetNewNetWorkProcess(this_00);
        pcVar9 = *(code **)(*plVar8 + 0x180);
        this_01 = (XMLParser *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
        uVar4 = Sexy::XMLParser::GetCurrentLineNum(this_01);
        (*pcVar9)(plVar8,uVar4);
      }
    }
    else {
      UISingletonDialog<UIWorldCupEntrance>::CloseDialog();
      this_02 = (PlantDragonBruit *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
      cVar1 = PlantDragonBruit::IsDelayDestroy(this_02);
      if ((cVar1 == '\0') || (iVar2 != 7)) {
        (**(code **)(**(long **)(gLawnApp + 0x9f0) + 800))(*(long **)(gLawnApp + 0x9f0),0);
        Board::NotifyOutroComplete(*(Board **)(gLawnApp + 0x9f0));
      }
      else {
        pWVar7 = (WorldCupManager *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
        WorldCupManager::setIsQuit(pWVar7,true);
        Board::ClearCursors(*(Board **)(gLawnApp + 0x9f0));
        (**(code **)(**(long **)(gLawnApp + 0x9f0) + 800))(*(long **)(gLawnApp + 0x9f0),0);
        Board::Quit(*(Board **)(gLawnApp + 0x9f0));
      }
    }
    break;
  case 3:
    UISingletonDialog<UIWorldCupRule>::ShowDialog();
    break;
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
    LawnApp::KillPlantSkillTipsUI(gLawnApp);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to UIWorldCupEntrance::ButtonDepress(int) */

void __thiscall UIWorldCupEntrance::ButtonDepress(UIWorldCupEntrance *this,int param_1)

{
  ButtonDepress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWorldCupEntrance::onUseGemFinish(bool const&) */

void __thiscall UIWorldCupEntrance::onUseGemFinish(UIWorldCupEntrance *this,bool *param_1)

{
  WorldCupManager *pWVar1;
  UIMessageBox *this_00;
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::OutputDebugStrF
            ((wchar_t *)"UISpringBuyPlant::onUseGemFinish isSuccess = %d ",(ulong)*param_1);
  if (*param_1 == false) {
    LawnApp::ShowGemStoreConfirm(gLawnApp,2,1);
  }
  else {
    pWVar1 = (WorldCupManager *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
    WorldCupManager::UpdateWorldCupTicketLog(pWVar1,*(int *)(this + 0x134));
    *(undefined4 *)(this + 0x134) = 0;
    pWVar1 = (WorldCupManager *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
    WorldCupManager::addWorldCupTikets(pWVar1,1);
    pWVar1 = (WorldCupManager *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
    WorldCupManager::addBuyTicketTimes(pWVar1);
    updateTicketsUI(this);
    this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (this_00 != (UIMessageBox *)0x0) {
      UIMessageBox::SetShowType(this_00,2);
      std::string::string(asStack_20,"[SALES_BUY_SUCCESS_TITLE]");
      std::string::string(asStack_18,"[REVIVE_TIP]");
      UIMessageBox::SetMessage(this_00,asStack_20,asStack_18);
      std::string::~string(asStack_18);
      nop();
      std::string::~string(asStack_20);
      nop();
      UIMessageBox::SetTextFont(this_00,0x75);
      UIMessageBox::SetTitleFont(this_00,0x75);
      Sexy::Color::Color((Color *)asStack_18,1);
      UIMessageBox::SetTextColor(this_00,asStack_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWorldCupEntrance::OnNotifyBuyWCTicket(bool) */

void __thiscall UIWorldCupEntrance::OnNotifyBuyWCTicket(UIWorldCupEntrance *this,bool param_1)

{
  int iVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  WorldCupManager *this_02;
  bool local_9;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    Sexy::OutputDebugStrF((wchar_t *)"UIWorldCupEntrance::OnNotifyBuyWCTicket i_success = %d ",1);
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    this_02 = (WorldCupManager *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
    iVar1 = WorldCupManager::getCurTicketPrice(this_02);
    iVar2 = PlayerInfo::GetNumGems(this_01,false);
    if (iVar1 <= iVar2) {
      *(int *)(this + 0x134) = iVar1;
      iVar1 = PlayerInfo::SubtractGems
                        (this_01,iVar1,-1,(ICloudRequestCallbackFunctionBase *)0x0,1,false);
      if (iVar1 < 0) {
        local_9 = false;
        onUseGemFinish(this,&local_9);
      }
      else {
        local_9 = true;
        onUseGemFinish(this,&local_9);
      }
      goto LAB_03952908;
    }
  }
  else {
    Sexy::OutputDebugStrF((wchar_t *)"UIWorldCupEntrance::OnNotifyBuyWCTicket i_success = %d ");
  }
  LawnApp::ShowGemStoreConfirm(gLawnApp,2,1);
LAB_03952908:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWorldCupEntrance::updateActivityTime() */

void __thiscall UIWorldCupEntrance::updateActivityTime(UIWorldCupEntrance *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  UIWidgetText *pUVar4;
  wstring awStack_a8 [8];
  undefined1 auStack_a0 [8];
  wstring awStack_98 [8];
  wstring awStack_90 [8];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  string asStack_68 [8];
  string asStack_60 [88];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_0394e068(local_80);
  if (cVar1 == '\0') {
    ActiveItem::~ActiveItem(aAStack_88);
  }
  else {
    iVar2 = StringHelper::ToInt(asStack_68);
    iVar3 = StringHelper::ToInt(asStack_60);
    TodStringTranslate(L"[PVZ_WORLDCUP_ACTIVITY_TIME]");
    TodReplaceNumberString(awStack_98,L"{NUM1}",(iVar2 % 10000) / 100);
    TodReplaceNumberString(awStack_90,L"{NUM2}",iVar2 % 100);
    FUN_05476c50(awStack_90);
    FUN_05476c50(awStack_98);
    TodReplaceNumberString(awStack_a8,L"{NUM3}",(iVar3 % 10000) / 100);
    TodReplaceNumberString(awStack_90,L"{NUM4}",iVar3 % 100);
    FUN_05476c50(awStack_90);
    std::string::string((string *)awStack_90,"UIText_0");
    pUVar4 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)awStack_90);
    std::string::~string((string *)awStack_90);
    nop();
    std::operator+(asStack_68,"----");
    std::operator+((string *)awStack_90,asStack_60);
    std::string::~string((string *)awStack_90);
    PuzzleTip::SetTip(pUVar4,auStack_a0);
    std::string::~string((string *)awStack_98);
    FUN_05476c50(auStack_a0);
    FUN_05476c50(awStack_a8);
    ActiveItem::~ActiveItem(aAStack_88);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWorldCupEntrance::OnCreate() */

void UIWorldCupEntrance::OnCreate(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  Dialog *in_x0;
  Widget *pWVar4;
  PVZ2UIButton *pPVar5;
  ProfileMgr *this;
  PlayerInfo *this_00;
  WorldCupManager *pWVar6;
  UIWidgetImage *pUVar7;
  PlantDragonBruit *pPVar8;
  UIWidgetText *pUVar9;
  long *plVar10;
  int in_w3;
  uint uVar11;
  uint uVar12;
  string asStack_20 [8];
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate(in_x0);
  std::string::string(asStack_10,"Background_0");
  pWVar4 = (Widget *)UI::Dialog::GetWidget(in_x0,asStack_10);
  std::string::~string(asStack_10);
  nop();
  UI::Dialog::SetCenter(in_x0,pWVar4,true);
  std::string::string(asStack_10,"UIButton_SelectTeam");
  pPVar5 = UI::Dialog::GetWidget<PVZ2UIButton>(in_x0,asStack_10);
  std::string::~string(asStack_10);
  nop();
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  cVar1 = PlayerInfo::GetHasPlayedWorldCup(this_00);
  if (cVar1 == '\0') {
    TodStringTranslate(L"[PVZ_WORLDCUP_BTNTUTORIAL]");
    FUN_054766c8(pPVar5 + 0xd8,asStack_10);
    FUN_05476c50(asStack_10);
  }
  if ((*(Board **)(gLawnApp + 0x9f0) == (Board *)0x0) ||
     (iVar2 = Board::GetBoardResult(*(Board **)(gLawnApp + 0x9f0)), iVar2 != 1)) {
    pWVar6 = (WorldCupManager *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
    iVar2 = WorldCupManager::getCurLoopNum(pWVar6);
    if (iVar2 < 2) goto LAB_03953e04;
  }
  TodStringTranslate(L"[RESUME_GAME]");
  FUN_054766c8(pPVar5 + 0xd8,asStack_10);
  FUN_05476c50(asStack_10);
LAB_03953e04:
  uVar11 = 0;
  Set8BytesTo0(asStack_20);
  do {
    uVar11 = uVar11 + 1;
    Sexy::StrFormat("UIImage_mark%d",asStack_10,(ulong)uVar11);
    FUN_05474278(asStack_20,asStack_10);
    std::string::~string(asStack_10);
    pUVar7 = UI::Dialog::GetWidget<UIWidgetImage>(in_x0,asStack_20);
    if (pUVar7 != (UIWidgetImage *)0x0) {
      (**(code **)(*(long *)pUVar7 + 0x158))(pUVar7,1);
      pUVar7[0x6d] = (UIWidgetImage)0x0;
    }
    Sexy::StrFormat("UIImage_round_gray%d",asStack_10,(ulong)uVar11);
    FUN_05474278(asStack_20,asStack_10);
    std::string::~string(asStack_10);
    pUVar7 = UI::Dialog::GetWidget<UIWidgetImage>(in_x0,asStack_20);
    if (pUVar7 != (UIWidgetImage *)0x0) {
      (**(code **)(*(long *)pUVar7 + 0x158))(pUVar7,1);
      pUVar7[0x6d] = (UIWidgetImage)0x0;
    }
  } while (uVar11 != 7);
  pWVar6 = (WorldCupManager *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
  uVar3 = WorldCupManager::getCurLoopNum(pWVar6);
  uVar11 = uVar3;
  uVar12 = uVar3;
  if ((int)uVar3 < 8) {
    do {
      uVar12 = uVar12 + 1;
      if (uVar11 != 0) {
        pPVar8 = (PlantDragonBruit *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
        cVar1 = PlantDragonBruit::IsDelayDestroy(pPVar8);
        if ((cVar1 == '\0') || (uVar3 != 7)) {
          Sexy::StrFormat("UIImage_mark%d",asStack_10,(ulong)uVar11);
          FUN_05474278(asStack_20,asStack_10);
          std::string::~string(asStack_10);
          pUVar7 = UI::Dialog::GetWidget<UIWidgetImage>(in_x0,asStack_20);
          if (pUVar7 != (UIWidgetImage *)0x0) {
            (**(code **)(*(long *)pUVar7 + 0x158))(pUVar7,0);
          }
          Sexy::StrFormat("UIImage_round_gray%d",asStack_10,(ulong)uVar11);
          FUN_05474278(asStack_20,asStack_10);
          std::string::~string(asStack_10);
          pUVar7 = UI::Dialog::GetWidget<UIWidgetImage>(in_x0,asStack_20);
          if (pUVar7 != (UIWidgetImage *)0x0) {
            (**(code **)(*(long *)pUVar7 + 0x158))(pUVar7,0);
            if ((int)uVar12 < 8) goto LAB_03953f10;
            break;
          }
        }
        if (7 < (int)uVar12) break;
      }
LAB_03953f10:
      uVar11 = uVar11 + 1;
    } while( true );
  }
  updateActivityTime((UIWorldCupEntrance *)in_x0);
  updateTicketsUI((UIWorldCupEntrance *)in_x0);
  if ((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
     (iVar2 = Board::GetBoardResult(*(Board **)(gLawnApp + 0x9f0)), iVar2 == 1)) {
    std::string::string(asStack_10,"UIImage_ticketBg");
    plVar10 = (long *)UI::Dialog::GetWidget(in_x0,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x158))(plVar10,0);
    }
    std::string::string(asStack_10,"UIButton_buy");
    plVar10 = (long *)UI::Dialog::GetWidget(in_x0,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x158))(plVar10,0);
    }
    std::string::string(asStack_10,"UIText_Tickets");
    plVar10 = (long *)UI::Dialog::GetWidget(in_x0,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x158))(plVar10,0);
    }
    pPVar8 = (PlantDragonBruit *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
    cVar1 = PlantDragonBruit::IsDelayDestroy(pPVar8);
    if (cVar1 != '\0') {
      showClearanceTip((UIWorldCupEntrance *)in_x0);
    }
  }
  pPVar8 = (PlantDragonBruit *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
  uVar11 = 7;
  cVar1 = PlantDragonBruit::IsDelayDestroy(pPVar8);
  if ((cVar1 == '\0') && (uVar11 = uVar3 - 1, (int)uVar11 < 0)) {
    uVar11 = 0;
  }
  std::string::string(asStack_10,"UIText_3");
  pUVar9 = UI::Dialog::GetWidget<UIWidgetText>(in_x0,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"[PVZ_WORLDCUP_CURSTAGE]");
  StringHelper::ReplaceNumberString
            ((StringHelper *)asStack_10,(string *)&DAT_056fda40,(wchar_t *)(ulong)uVar11,in_w3);
  std::string::~string(asStack_10);
  nop();
  PuzzleTip::SetTip(pUVar9,auStack_18);
  FUN_05476c50(auStack_18);
  std::string::~string(asStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWorldCupEntrance::OnMessageCallback(UIMessageBox*, int) */

void __thiscall
UIWorldCupEntrance::OnMessageCallback(UIWorldCupEntrance *this,UIMessageBox *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  WorldCupManager *pWVar5;
  PlayerInfo *this_00;
  NetworkMgr *this_01;
  long *plVar6;
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 == 1) {
    pWVar5 = (WorldCupManager *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
    cVar1 = WorldCupManager::isCanBuyTicketNow(pWVar5);
    pWVar5 = (WorldCupManager *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
    uVar2 = WorldCupManager::getCurTicketPrice(pWVar5);
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar3);
    pWVar5 = (WorldCupManager *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
    iVar3 = WorldCupManager::getCurTicketPrice(pWVar5);
    this_00 = (PlayerInfo *)ProfileUtils::Profile();
    iVar4 = PlayerInfo::GetNumGems(this_00,false);
    if (iVar4 < iVar3) {
      LawnApp::ShowGemStoreConfirm(gLawnApp,2,1);
    }
    else if ((cVar1 != '\0') && (local_70 != '\0')) {
      this_01 = (NetworkMgr *)NetworkMgr::Instance();
      plVar6 = (long *)NetworkMgr::GetNewNetWorkProcess(this_01);
      (**(code **)(*plVar6 + 0x188))(plVar6,uVar2);
    }
    ActiveItem::~ActiveItem(aAStack_88);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

