// Class: UIWorldCupSelectTeam


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWorldCupSelectTeam::GetLayoutName() */

void __thiscall UIWorldCupSelectTeam::GetLayoutName(UIWorldCupSelectTeam *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UISelecteam");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIWorldCupSelectTeam::~UIWorldCupSelectTeam() */

void __thiscall UIWorldCupSelectTeam::~UIWorldCupSelectTeam(UIWorldCupSelectTeam *this)

{
  *(undefined ***)this = &PTR_GetClass_066d1db0;
  *(undefined **)(this + 0xd8) = &DAT_066d2100;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UISingletonDialog<UIWorldCupSelectTeam>::~UISingletonDialog
            ((UISingletonDialog<UIWorldCupSelectTeam> *)this);
  return;
}


/* UIWorldCupSelectTeam::~UIWorldCupSelectTeam() */

void __thiscall UIWorldCupSelectTeam::~UIWorldCupSelectTeam(UIWorldCupSelectTeam *this)

{
  ~UIWorldCupSelectTeam(this);
  AK::FreeHook(this);
  return;
}


/* UIWorldCupSelectTeam::OnMessageCallbackUnLockTeam(UIMessageBox*, int) */

void __thiscall
UIWorldCupSelectTeam::OnMessageCallbackUnLockTeam
          (UIWorldCupSelectTeam *this,UIMessageBox *param_1,int param_2)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  NetworkMgr *this_02;
  long *plVar2;
  
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if ((1 < *(int *)(this + 0x138) - 0x69U) && (param_2 == 1)) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    iVar1 = PlayerInfo::GetNumGems(this_01,false);
    if (iVar1 < 0x96) {
      LawnApp::ShowGemStoreConfirm(gLawnApp,2,1);
      return;
    }
    this_02 = (NetworkMgr *)NetworkMgr::Instance();
    plVar2 = (long *)NetworkMgr::GetNewNetWorkProcess(this_02);
    (**(code **)(*plVar2 + 0x248))(plVar2,*(undefined4 *)(this + 0x138),0x96);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWorldCupSelectTeam::ShowUnlockTeamDialog(int) */

void __thiscall UIWorldCupSelectTeam::ShowUnlockTeamDialog(UIWorldCupSelectTeam *this,int param_1)

{
  UIMessageBox *this_00;
  wstring awStack_68 [8];
  string asStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
  if (this_00 != (UIMessageBox *)0x0) {
    TodStringTranslate(L"[REVIVE_TIP]");
    Sexy::StrFormat("[PVZ_WORLDCUP_NOTICKET_TIPS_%d]",asStack_60,(ulong)(uint)param_1);
    StringHelper::ToStringValue(asStack_60);
    UIMessageBox::SetMessage(this_00,awStack_58,awStack_68);
    UIMessageBox::SetTextFont(this_00,0x75);
    UIMessageBox::SetTitleFont(this_00,0x75);
    Sexy::Color::Color((Color *)asStack_50,1);
    UIMessageBox::SetTextColor(this_00,asStack_50);
    if (param_1 - 0x69U < 2) {
      UIMessageBox::SetShowType(this_00,2);
    }
    else if (param_1 - 0x6bU < 2) {
      UIMessageBox::SetShowType(this_00,6);
    }
    std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
    UIMessageBox::SetBackground(this_00,asStack_50);
    std::string::~string(asStack_50);
    nop();
    UIMessageBox::SetBackgroundDarken(this_00,true,0.5);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnMessageCallbackUnLockTeam);
    Sexy::Delegate2<UIMessageBox*,int>::
    Delegate2<UIWorldCupSelectTeam,void(UIWorldCupSelectTeam::*)(UIMessageBox*,int)>
              (aDStack_38,asStack_50);
    UIMessageBox::SetCallback(this_00,aDStack_38);
    FUN_05476c50(awStack_58);
    std::string::~string(asStack_60);
    FUN_05476c50(awStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWorldCupSelectTeam::OnNotifyBeginGame(bool) */

void __thiscall UIWorldCupSelectTeam::OnNotifyBeginGame(UIWorldCupSelectTeam *this,bool param_1)

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
    UISingletonDialog<UIWorldCupSelectTeam>::CloseDialog();
    pWVar3 = (WorldCupManager *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
    cVar1 = WorldCupManager::isNeedConsumeTickets(pWVar3);
    if (cVar1 != '\0') {
      pWVar3 = (WorldCupManager *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
      WorldCupManager::subscribeWorldCupTickets(pWVar3,1);
    }
    this_00 = (DVisible *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
    DVisible::setVisible(this_00,false);
    pWVar3 = (WorldCupManager *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
    WorldCupManager::setCurTeamID(pWVar3,*(int *)(this + 0x134));
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
                ((ReceivedDataCallback *)this,OnMessageCallback);
      Sexy::Delegate2<UIMessageBox*,int>::
      Delegate2<UIWorldCupSelectTeam,void(UIWorldCupSelectTeam::*)(UIMessageBox*,int)>
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


/* UIWorldCupSelectTeam::OnMessageCallback(UIMessageBox*, int) */

void UIWorldCupSelectTeam::OnMessageCallback(UIMessageBox *param_1,int param_2)

{
  UISingletonDialog<UIMessageBox>::CloseDialog();
  UISingletonDialog<UIWorldCupSelectTeam>::CloseDialog();
  UISingletonDialog<UIWorldCupEntrance>::ShowDialog();
  return;
}


/* UIWorldCupSelectTeam::UIWorldCupSelectTeam() */

void __thiscall UIWorldCupSelectTeam::UIWorldCupSelectTeam(UIWorldCupSelectTeam *this)

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
  
  UISingletonDialog<UIWorldCupSelectTeam>::UISingletonDialog
            ((UISingletonDialog<UIWorldCupSelectTeam> *)this);
  *(undefined4 *)(this + 0x134) = 0x65;
  *(undefined **)(this + 0xd8) = &DAT_066d2100;
  *(undefined ***)this = &PTR_GetClass_066d1db0;
  *(undefined4 *)(this + 0x138) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyBeginGame);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<UIWorldCupSelectTeam,void(UIWorldCupSelectTeam::*)(bool)>>
            ((MessageRouter *)puVar1,Message::GLWorldCupBeginGame,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyUnlockWorldCupTeam);
  local_40 = local_8;
  local_50 = local_18;
  uStack_48 = uStack_10;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<UIWorldCupSelectTeam,void(UIWorldCupSelectTeam::*)(bool)>>
            ((MessageRouter *)puVar1,Message::GLUnlockWorldCupTeam,&local_50);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWorldCupSelectTeam::updatebuttonState() */

void __thiscall UIWorldCupSelectTeam::updatebuttonState(UIWorldCupSelectTeam *this)

{
  char cVar1;
  PVZ2UIButton *pPVar2;
  WorldCupManager *this_00;
  wchar_t *pwVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIButton_begin");
  pPVar2 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  this_00 = (WorldCupManager *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
  cVar1 = WorldCupManager::getIsUnLockByTeamID(this_00,*(int *)(this + 0x134));
  if (cVar1 == '\0') {
    pwVar3 = L"[PVZ_WORLDCUP_UNLOCKTEAM]";
  }
  else {
    pwVar3 = L"[PVZ_WORLDCUP_BEGIN]";
  }
  TodStringTranslate(pwVar3);
  FUN_054766c8(pPVar2 + 0xd8,asStack_10);
  FUN_05476c50(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWorldCupSelectTeam::updateSelectState(int) */

void __thiscall UIWorldCupSelectTeam::updateSelectState(UIWorldCupSelectTeam *this,int param_1)

{
  uint uVar1;
  UIWidgetImage *pUVar2;
  UIWidgetText *pUVar3;
  uint uVar4;
  ulong uVar5;
  string asStack_20 [8];
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = 0;
  do {
    uVar1 = uVar4 + 1;
    Sexy::StrFormat("UIImage_%d",asStack_10,(ulong)uVar1);
    pUVar2 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
    if (uVar4 + 0x65 == param_1) {
      (**(code **)(*(long *)pUVar2 + 0x158))(pUVar2,1);
    }
    else {
      (**(code **)(*(long *)pUVar2 + 0x158))(pUVar2,0);
    }
    std::string::~string(asStack_10);
    uVar4 = uVar1;
  } while (uVar1 != 8);
  Set8BytesTo0(asStack_20);
  FUN_05476574(auStack_18);
  uVar5 = 0;
  do {
    uVar4 = (int)uVar5 + 1;
    Sexy::StrFormat("UIText_%d",asStack_10,uVar5);
    FUN_05474278(asStack_20,asStack_10);
    std::string::~string(asStack_10);
    pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_20);
    Sexy::StrFormat("[PVZ_WORLDCUP_TEAM%d_DES_%d]",asStack_10,(ulong)(param_1 - 100),(ulong)uVar4);
    FUN_05474278(asStack_20,asStack_10);
    std::string::~string(asStack_10);
    StringHelper::ToStringValue(asStack_20);
    FUN_054766c8(auStack_18,asStack_10);
    FUN_05476c50(asStack_10);
    if (pUVar3 != (UIWidgetText *)0x0) {
      PuzzleTip::SetTip(pUVar3,auStack_18);
    }
    uVar5 = (ulong)uVar4;
  } while (uVar4 != 6);
  updatebuttonState(this);
  FUN_05476c50(auStack_18);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIWorldCupSelectTeam::ButtonDepress(int) */

void __thiscall UIWorldCupSelectTeam::ButtonDepress(UIWorldCupSelectTeam *this,int param_1)

{
  char cVar1;
  WorldCupManager *this_00;
  NetworkMgr *this_01;
  long *plVar2;
  
  switch(param_1) {
  case 0:
    UISingletonDialog<UIWorldCupSelectTeam>::CloseDialog();
    UISingletonDialog<UIWorldCupEntrance>::ShowDialog();
    return;
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    *(int *)(this + 0x134) = param_1 + 100;
    updateSelectState(this,param_1 + 100);
    return;
  case 9:
    break;
  default:
    return;
  }
  this_00 = (WorldCupManager *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
  cVar1 = WorldCupManager::getIsUnLockByTeamID(this_00,*(int *)(this + 0x134));
  if (cVar1 == '\0') {
    *(int *)(this + 0x138) = *(int *)(this + 0x134);
    ShowUnlockTeamDialog(this,*(int *)(this + 0x134));
    return;
  }
  this_01 = (NetworkMgr *)NetworkMgr::Instance();
  plVar2 = (long *)NetworkMgr::GetNewNetWorkProcess(this_01);
  (**(code **)(*plVar2 + 0x180))(plVar2,*(undefined4 *)(this + 0x134));
  return;
}


/* non-virtual thunk to UIWorldCupSelectTeam::ButtonDepress(int) */

void __thiscall UIWorldCupSelectTeam::ButtonDepress(UIWorldCupSelectTeam *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWorldCupSelectTeam::updateUI() */

void __thiscall UIWorldCupSelectTeam::updateUI(UIWorldCupSelectTeam *this)

{
  uint uVar1;
  bool bVar2;
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this_00;
  long lVar3;
  worldCupInfo *pwVar4;
  long *plVar5;
  undefined8 local_50;
  undefined8 local_48;
  string asStack_40 [8];
  string asStack_38 [8];
  int local_30 [9];
  char local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
             *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
  lVar3 = std::
          _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          ::_M_root(this_00);
  local_50 = FUN_0394fdd4(*(undefined8 *)(lVar3 + 0x20));
  local_48 = FUN_0394fe24(*(undefined8 *)(lVar3 + 0x28));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar2) {
    pwVar4 = (worldCupInfo *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50)
    ;
    worldCupInfo::worldCupInfo((worldCupInfo *)local_30,pwVar4);
    uVar1 = local_30[0] - 100;
    Sexy::StrFormat("UIImage_lock%d",asStack_40,(ulong)uVar1);
    plVar5 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_40);
    if (plVar5 != (long *)0x0) {
      if (local_c == '\0') {
        (**(code **)(*plVar5 + 0x158))(plVar5,1);
      }
      else {
        (**(code **)(*plVar5 + 0x158))(plVar5,0);
      }
    }
    Sexy::StrFormat("UIImage_gray_Bg%d",asStack_38,(ulong)uVar1);
    FUN_05474278(asStack_40,asStack_38);
    std::string::~string(asStack_38);
    plVar5 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_40);
    if (plVar5 != (long *)0x0) {
      if (*(char *)((long)plVar5 + 0x6d) != '\0') {
        *(undefined1 *)((long)plVar5 + 0x6d) = 0;
      }
      if (local_c == '\0') {
        (**(code **)(*plVar5 + 0x158))(plVar5,1);
      }
      else {
        (**(code **)(*plVar5 + 0x158))(plVar5,0);
      }
    }
    std::string::~string(asStack_40);
    std::pair<void*const,std::vector<int,std::allocator<int>>>::~pair
              ((pair<void*const,std::vector<int,std::allocator<int>>> *)local_30);
    __gnu_cxx::
    __normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
    ::operator++((__normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
                  *)&local_50);
  }
  updatebuttonState(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIWorldCupSelectTeam::OnNotifyUnlockWorldCupTeam(bool) */

void __thiscall
UIWorldCupSelectTeam::OnNotifyUnlockWorldCupTeam(UIWorldCupSelectTeam *this,bool param_1)

{
  if (param_1) {
    Sexy::OutputDebugStrF
              ((wchar_t *)"UIWorldCupEntrance::OnNotifyUnlockWorldCupTeam i_success = %d ",1);
    updateUI(this);
    return;
  }
  Sexy::OutputDebugStrF((wchar_t *)"UIWorldCupEntrance::OnNotifyUnlockWorldCupTeam i_success = %d ")
  ;
  return;
}


/* UIWorldCupSelectTeam::onUseGemFinish(bool) */

void __thiscall UIWorldCupSelectTeam::onUseGemFinish(UIWorldCupSelectTeam *this,bool param_1)

{
  WorldCupManager *this_00;
  
  if (!param_1) {
    return;
  }
  this_00 = (WorldCupManager *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
  WorldCupManager::setIsUnLockByTeamID(this_00,*(int *)(this + 0x138),true);
  updateUI(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWorldCupSelectTeam::OnCreate() */

void __thiscall UIWorldCupSelectTeam::OnCreate(UIWorldCupSelectTeam *this)

{
  int iVar1;
  Widget *pWVar2;
  XMLParser *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  pWVar2 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  UI::Dialog::SetCenter((Dialog *)this,pWVar2,true);
  this_00 = (XMLParser *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
  iVar1 = Sexy::XMLParser::GetCurrentLineNum(this_00);
  *(int *)(this + 0x134) = iVar1;
  updateSelectState(this,iVar1);
  updateUI(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

