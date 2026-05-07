// Class: UICustomLevelMainMenu


/* UICustomLevelMainMenu::ScrollTargetReached(Sexy::ScrollWidget*) */

void UICustomLevelMainMenu::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UICustomLevelMainMenu::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
UICustomLevelMainMenu::ScrollTargetReached(UICustomLevelMainMenu *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UICustomLevelMainMenu::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UICustomLevelMainMenu::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UICustomLevelMainMenu::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UICustomLevelMainMenu::ScrollTargetInterrupted(UICustomLevelMainMenu *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* UICustomLevelMainMenu::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

undefined1 UICustomLevelMainMenu::onNotifyRefreshActivityList(bool param_1,set *param_2)

{
  return param_1;
}


/* UICustomLevelMainMenu::ShowRefreshButton(bool) */

void __thiscall UICustomLevelMainMenu::ShowRefreshButton(UICustomLevelMainMenu *this,bool param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x1c8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,param_1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelMainMenu::GetLayoutName() */

void __thiscall UICustomLevelMainMenu::GetLayoutName(UICustomLevelMainMenu *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UICustomLevelMainMenu");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelMainMenu::onPlayCoinChange(int) */

void UICustomLevelMainMenu::onPlayCoinChange(int param_1)

{
  UIWidgetText *this;
  string asStack_10 [8];
  long local_8;
  
  this = *(UIWidgetText **)((ulong)(uint)param_1 + 0x1b0);
  local_8 = ___stack_chk_guard;
  if (this != (UIWidgetText *)0x0) {
    Sexy::StrFormat("%d",asStack_10);
    UIWidgetText::SetString(this,asStack_10);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelMainMenu::onCreateCoinChange(int) */

void UICustomLevelMainMenu::onCreateCoinChange(int param_1)

{
  UIWidgetText *this;
  string asStack_10 [8];
  long local_8;
  
  this = *(UIWidgetText **)((ulong)(uint)param_1 + 0x1b8);
  local_8 = ___stack_chk_guard;
  if (this != (UIWidgetText *)0x0) {
    Sexy::StrFormat("%d",asStack_10);
    UIWidgetText::SetString(this,asStack_10);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelMainMenu::SetTitleType(int) */

void __thiscall UICustomLevelMainMenu::SetTitleType(UICustomLevelMainMenu *this,int param_1)

{
  char *__s;
  undefined8 uVar1;
  string asStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0) {
    __s = "[CUSTOM_LEVEL_MAINMENU_TITLE_CHOOSE_LEVEL]";
  }
  else if (param_1 == 1) {
    __s = "[CUSTOM_LEVEL_MAINMENU_TITLE_CREATE_LEVEL]";
  }
  else if (param_1 == 2) {
    __s = "[CUSTOM_LEVEL_MAINMENU_TITLE_SHOP]";
  }
  else {
    if (param_1 != 3) goto LAB_035e78d8;
    __s = "[CUSTOM_LEVEL_MAINMENU_TITLE_MOTIVATE]";
  }
  uVar1 = *(undefined8 *)(this + 0x1c0);
  std::string::string(asStack_18,__s);
  StringHelper::ToStringValue(asStack_18);
  PuzzleTip::SetTip(uVar1,auStack_10);
  FUN_05476c50(auStack_10);
  std::string::~string(asStack_18);
  nop();
LAB_035e78d8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UICustomLevelMainMenu::CloseMainMenuDialog() */

void UICustomLevelMainMenu::CloseMainMenuDialog(void)

{
  if (UISingletonDialog<UICustomLevelMainMenu>::m_pInstance != (long *)0x0) {
    (**(code **)(*UISingletonDialog<UICustomLevelMainMenu>::m_pInstance + 0x318))();
    UISingletonDialog<UICustomLevelMainMenu>::m_pInstance = (long *)0x0;
  }
  return;
}


/* UICustomLevelMainMenu::ShowLeaderboard() */

UICustomLevelLeaderBoard * UICustomLevelMainMenu::ShowLeaderboard(void)

{
  UICustomLevelLeaderBoard *pUVar1;
  char cVar2;
  UICustomLevelLeaderBoard *pUVar3;
  
  pUVar1 = UISingletonDialog<UICustomLevelLeaderBoard>::m_pInstance;
  pUVar3 = pUVar1;
  if (UISingletonDialog<UICustomLevelLeaderBoard>::m_pInstance == (UICustomLevelLeaderBoard *)0x0) {
    pUVar3 = ::operator_new(0x140);
    UICustomLevelLeaderBoard::UICustomLevelLeaderBoard(pUVar3);
    UISingletonDialog<UICustomLevelLeaderBoard>::m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = UISingletonDialog<UICustomLevelLeaderBoard>::m_pInstance;
    if (cVar2 == '\0') {
      if (UISingletonDialog<UICustomLevelLeaderBoard>::m_pInstance !=
          (UICustomLevelLeaderBoard *)0x0) {
        (**(code **)(*(long *)UISingletonDialog<UICustomLevelLeaderBoard>::m_pInstance + 0x18))();
      }
      UISingletonDialog<UICustomLevelLeaderBoard>::m_pInstance = (UICustomLevelLeaderBoard *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelMainMenu::InitOtherUI() */

void __thiscall UICustomLevelMainMenu::InitOtherUI(UICustomLevelMainMenu *this)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  UIWidgetText *pUVar1;
  ulong uVar2;
  PVZ2UIButton *pPVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  std::string::string(asStack_10,"PlayCoinText");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  *(UIWidgetText **)(this + 0x1b0) = pUVar1;
  std::string::~string(asStack_10);
  nop();
  uVar2 = PlayerInfo::GetMaterialNum(this_01,0x5b6a);
  pUVar1 = *(UIWidgetText **)(this + 0x1b0);
  Sexy::StrFormat("%d",asStack_10,uVar2 & 0xffffffff);
  UIWidgetText::SetString(pUVar1,asStack_10);
  std::string::~string(asStack_10);
  std::string::string(asStack_10,"CreateCoinText");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  *(UIWidgetText **)(this + 0x1b8) = pUVar1;
  std::string::~string(asStack_10);
  nop();
  uVar2 = PlayerInfo::GetMaterialNum(this_01,0x5b6b);
  pUVar1 = *(UIWidgetText **)(this + 0x1b8);
  Sexy::StrFormat("%d",asStack_10,uVar2 & 0xffffffff);
  UIWidgetText::SetString(pUVar1,asStack_10);
  std::string::~string(asStack_10);
  std::string::string(asStack_10,"UIText_0");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  *(UIWidgetText **)(this + 0x1c0) = pUVar1;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"SettingBtn");
  pPVar3 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  *(PVZ2UIButton **)(this + 0x1c8) = pPVar3;
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UICustomLevelMainMenu::ButtonDepress(int) */

void __thiscall UICustomLevelMainMenu::ButtonDepress(UICustomLevelMainMenu *this,int param_1)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *pPVar2;
  
  if (param_1 == 0x3e9) {
    MessageRouter::Post<int,int>
              ((MessageRouter *)gMessageRouter,Message::CustomLevelMainMenuRefresh,
               *(int *)(this + 0x1d4));
    return;
  }
  if (param_1 != 0x3f9) {
    if (param_1 != 1000) {
      return;
    }
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    iVar1 = FUN_035e5ca8(*(undefined4 *)(pPVar2 + 0x40));
    if (iVar1 - 0x3cU < 2) {
      PlayerInfo::SetActiveTutorial(pPVar2,0);
    }
    UISingletonDialog<UICustomLevelMainMenu>::CloseDialog();
    GameStateMgr::ShowWorldMap(gGameStateMgr,5,5);
    return;
  }
  UISingletonDialog<UICustomLevelSetting>::ShowDialog();
  return;
}


/* non-virtual thunk to UICustomLevelMainMenu::ButtonDepress(int) */

void __thiscall UICustomLevelMainMenu::ButtonDepress(UICustomLevelMainMenu *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelMainMenu::~UICustomLevelMainMenu() */

void __thiscall UICustomLevelMainMenu::~UICustomLevelMainMenu(UICustomLevelMainMenu *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0x138) = &PTR__UICustomLevelMainMenu_06661ff8;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06661c50;
  *(undefined **)(this + 0xd8) = &DAT_06661fb0;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_CustomLevel");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::map<int,Sexy::Widget*,std::less<int>,std::allocator<std::pair<int_const,Sexy::Widget*>>>::
  ~map((map<int,Sexy::Widget*,std::less<int>,std::allocator<std::pair<int_const,Sexy::Widget*>>> *)
       (this + 0x170));
  std::map<int,CustomLevelTab*,std::less<int>,std::allocator<std::pair<int_const,CustomLevelTab*>>>
  ::~map((map<int,CustomLevelTab*,std::less<int>,std::allocator<std::pair<int_const,CustomLevelTab*>>>
          *)(this + 0x140));
  UISingletonDialog<UICustomLevelMainMenu>::~UISingletonDialog
            ((UISingletonDialog<UICustomLevelMainMenu> *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UICustomLevelMainMenu::~UICustomLevelMainMenu() */

void __thiscall UICustomLevelMainMenu::~UICustomLevelMainMenu(UICustomLevelMainMenu *this)

{
  ~UICustomLevelMainMenu(this + -0x138);
  return;
}


/* UICustomLevelMainMenu::~UICustomLevelMainMenu() */

void __thiscall UICustomLevelMainMenu::~UICustomLevelMainMenu(UICustomLevelMainMenu *this)

{
  ~UICustomLevelMainMenu(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UICustomLevelMainMenu::~UICustomLevelMainMenu() */

void __thiscall UICustomLevelMainMenu::~UICustomLevelMainMenu(UICustomLevelMainMenu *this)

{
  ~UICustomLevelMainMenu(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelMainMenu::UICustomLevelMainMenu() */

void __thiscall UICustomLevelMainMenu::UICustomLevelMainMenu(UICustomLevelMainMenu *this)

{
  undefined *puVar1;
  LawnApp *this_00;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UICustomLevelMainMenu>::UISingletonDialog
            ((UISingletonDialog<UICustomLevelMainMenu> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_06661c50;
  *(undefined **)(this + 0xd8) = &DAT_06661fb0;
  *(undefined ***)(this + 0x138) = &PTR__UICustomLevelMainMenu_06661ff8;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x140));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x170));
  this_00 = gLawnApp;
  std::string::string((string *)&local_50,"UI_CustomLevel");
  LawnApp::LoadGroup(this_00,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  std::map<int,CustomLevelTab*,std::less<int>,std::allocator<std::pair<int_const,CustomLevelTab*>>>
  ::clear((map<int,CustomLevelTab*,std::less<int>,std::allocator<std::pair<int_const,CustomLevelTab*>>>
           *)(this + 0x140));
  std::map<int,Sexy::Widget*,std::less<int>,std::allocator<std::pair<int_const,Sexy::Widget*>>>::
  clear((map<int,Sexy::Widget*,std::less<int>,std::allocator<std::pair<int_const,Sexy::Widget*>>> *)
        (this + 0x170));
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined4 *)(this + 0x1d4) = 0xffffffff;
  *(undefined4 *)(this + 0x1d0) = 0xffffffff;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  this[0x1d8] = (UICustomLevelMainMenu)0x0;
  this[0x1d9] = (UICustomLevelMainMenu)0x0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlayCoinChange);
  local_d0 = local_b0;
  uStack_c8 = uStack_a8;
  local_c0 = local_a0;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<UICustomLevelMainMenu,void(UICustomLevelMainMenu::*)(int)>>
            ((MessageRouter *)puVar1,Message::CustomLevelPlayCoinChanged,&local_d0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCreateCoinChange);
  local_c0 = local_88;
  local_d0 = local_98;
  uStack_c8 = uStack_90;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<UICustomLevelMainMenu,void(UICustomLevelMainMenu::*)(int)>>
            ((MessageRouter *)puVar1,Message::CustomLevelCreateCoinChanged,&local_d0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,ShowRefreshButton);
  local_f0 = local_80;
  uStack_e8 = uStack_78;
  local_e0 = local_70;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<UICustomLevelMainMenu,void(UICustomLevelMainMenu::*)(bool)>>
            ((MessageRouter *)puVar1,Message::CustomLevelShowRefreshButton,&local_f0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,CloseMainMenuDialog);
  Sexy::Delegate0::Delegate0<UICustomLevelMainMenu,void(UICustomLevelMainMenu::*)()>
            (aDStack_38,(string *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::CloseMainMenuDialog,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,CustomLevelNetworkResponseReceived);
  local_110 = local_68;
  uStack_108 = uStack_60;
  local_100 = local_58;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<UICustomLevelMainMenu,void(UICustomLevelMainMenu::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::CustomLevelNetworkResponseReceived,&local_110);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_130 = local_50;
  uStack_128 = uStack_48;
  local_120 = local_40;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<UICustomLevelMainMenu,void(UICustomLevelMainMenu::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_130);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelMainMenu::DeattachUI(int) */

void __thiscall UICustomLevelMainMenu::DeattachUI(UICustomLevelMainMenu *this,int param_1)

{
  map<int,Sexy::Widget*,std::less<int>,std::allocator<std::pair<int_const,Sexy::Widget*>>> *this_00;
  bool bVar1;
  undefined8 *puVar2;
  int local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (map<int,Sexy::Widget*,std::less<int>,std::allocator<std::pair<int_const,Sexy::Widget*>>>
             *)(this + 0x170);
  local_8 = ___stack_chk_guard;
  local_24[0] = param_1;
  local_18 = std::
             map<int,Sexy::Widget*,std::less<int>,std::allocator<std::pair<int_const,Sexy::Widget*>>>
             ::find(this_00,local_24);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this_00);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    puVar2 = (undefined8 *)
             std::
             map<int,Sexy::Widget*,std::less<int>,std::allocator<std::pair<int_const,Sexy::Widget*>>>
             ::operator[](this_00,local_24);
    (**(code **)(*(long *)*puVar2 + 0x158))((long *)*puVar2,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelMainMenu::InitTab() */

void __thiscall UICustomLevelMainMenu::InitTab(UICustomLevelMainMenu *this)

{
  map<int,CustomLevelTab*,std::less<int>,std::allocator<std::pair<int_const,CustomLevelTab*>>>
  *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  CustomLevelTab *pCVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  int iVar10;
  CustomLevelTab *local_80;
  CustomLevelTab *local_78;
  CustomLevelTab *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_50 [6];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)local_50,"TabContainer");
  this_00 = (map<int,CustomLevelTab*,std::less<int>,std::allocator<std::pair<int_const,CustomLevelTab*>>>
             *)(this + 0x140);
  uVar4 = UI::Dialog::GetWidget((Dialog *)this,(string *)local_50);
  *(undefined8 *)(this + 0x1a0) = uVar4;
  std::string::~string((string *)local_50);
  nop();
  std::string::string((string *)local_50,"MainContainer");
  uVar4 = UI::Dialog::GetWidget((Dialog *)this,(string *)local_50);
  *(undefined8 *)(this + 0x1a8) = uVar4;
  std::string::~string((string *)local_50);
  nop();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68);
  pCVar5 = ::operator_new(0x350);
  CustomLevelTab::CustomLevelTab(pCVar5,0);
  local_80 = pCVar5;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onClickChooseLevel);
  Sexy::Delegate0::Delegate0<UICustomLevelMainMenu,void(UICustomLevelMainMenu::*)()>
            (aDStack_38,(string *)local_50);
  UIUnchartedTab::SetCallback((UIUnchartedTab *)pCVar5,aDStack_38);
  std::vector<CustomLevelTab*,std::allocator<CustomLevelTab*>>::push_back
            ((vector<CustomLevelTab*,std::allocator<CustomLevelTab*>> *)&local_68,&local_80);
  local_50[0] = 0;
  puVar6 = (undefined8 *)
           std::
           map<int,CustomLevelTab*,std::less<int>,std::allocator<std::pair<int_const,CustomLevelTab*>>>
           ::operator[](this_00,(int *)local_50);
  *puVar6 = local_80;
  pCVar5 = ::operator_new(0x350);
  CustomLevelTab::CustomLevelTab(pCVar5,1);
  local_78 = pCVar5;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onClickCreateLevel);
  Sexy::Delegate0::Delegate0<UICustomLevelMainMenu,void(UICustomLevelMainMenu::*)()>
            (aDStack_38,(string *)local_50);
  UIUnchartedTab::SetCallback((UIUnchartedTab *)pCVar5,aDStack_38);
  std::vector<CustomLevelTab*,std::allocator<CustomLevelTab*>>::push_back
            ((vector<CustomLevelTab*,std::allocator<CustomLevelTab*>> *)&local_68,&local_78);
  local_50[0] = 1;
  puVar6 = (undefined8 *)
           std::
           map<int,CustomLevelTab*,std::less<int>,std::allocator<std::pair<int_const,CustomLevelTab*>>>
           ::operator[](this_00,(int *)local_50);
  *puVar6 = local_78;
  pCVar5 = ::operator_new(0x350);
  CustomLevelTab::CustomLevelTab(pCVar5,2);
  local_70 = pCVar5;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onClickShop);
  Sexy::Delegate0::Delegate0<UICustomLevelMainMenu,void(UICustomLevelMainMenu::*)()>
            (aDStack_38,(string *)local_50);
  UIUnchartedTab::SetCallback((UIUnchartedTab *)pCVar5,aDStack_38);
  std::vector<CustomLevelTab*,std::allocator<CustomLevelTab*>>::push_back
            ((vector<CustomLevelTab*,std::allocator<CustomLevelTab*>> *)&local_68,&local_70);
  local_50[0] = 2;
  puVar6 = (undefined8 *)
           std::
           map<int,CustomLevelTab*,std::less<int>,std::allocator<std::pair<int_const,CustomLevelTab*>>>
           ::operator[](this_00,(int *)local_50);
  *puVar6 = local_70;
  iVar2 = FUN_035e74e0(0xf);
  iVar3 = FUN_035e74e0(10);
  iVar1 = *(int *)(*(long *)(this + 0x1a0) + 0x50) + iVar2 * -2;
  uVar8 = 0;
  iVar10 = iVar2;
  while( true ) {
    uVar4 = local_68;
    uVar7 = FUN_035e5e30(local_68,local_60);
    if (uVar7 <= uVar8) break;
    puVar6 = (undefined8 *)FUN_035e5e3c(uVar4,uVar8);
    (**(code **)(*(long *)*puVar6 + 0x198))((long *)*puVar6,iVar2,iVar10,iVar1,iVar1);
    plVar9 = *(long **)(this + 0x1a0);
    puVar6 = (undefined8 *)FUN_035e5e3c(local_68,uVar8);
    (**(code **)(*plVar9 + 0x60))(plVar9,*puVar6);
    uVar8 = uVar8 + 1;
    iVar10 = iVar10 + iVar3 + iVar1;
  }
  std::vector<CustomLevelTab*,std::allocator<CustomLevelTab*>>::~vector
            ((vector<CustomLevelTab*,std::allocator<CustomLevelTab*>> *)&local_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelMainMenu::RequestFavouriteList() */

void UICustomLevelMainMenu::RequestFavouriteList(void)

{
  int iVar1;
  CustomLevelMgr *pCVar2;
  int iVar3;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_68 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_50 [24];
  vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>> avStack_38 [24];
  int local_20 [6];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_68);
  iVar3 = 0;
  do {
    iVar1 = iVar3 + 1;
    local_20[0] = iVar3;
    std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>::push_back
              ((vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>> *)
               avStack_68,
               (vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *)
               local_20);
    iVar3 = iVar1;
  } while (iVar1 != 0x15);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_50);
  iVar3 = 0;
  do {
    iVar1 = iVar3 + 1;
    local_20[0] = iVar3;
    std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>::push_back
              ((vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *)
               avStack_50,
               (vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *)
               local_20);
    iVar3 = iVar1;
  } while (iVar1 != 8);
  pCVar2 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>::vector
            (avStack_38,(vector *)avStack_68);
  std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>::vector
            ((vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *)
             local_20,(vector *)avStack_50);
  CustomLevelMgr::RequestGetViewPreviewList
            (pCVar2,avStack_38,
             (vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *)
             local_20,2,0,0,100,0);
  std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>::~vector
            ((vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *)
             local_20);
  std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>::~vector
            (avStack_38);
  std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>::~vector
            ((vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *)
             avStack_50);
  std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>::~vector
            ((vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>> *)
             avStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelMainMenu::AttachUI(int) */

void __thiscall UICustomLevelMainMenu::AttachUI(UICustomLevelMainMenu *this,int param_1)

{
  map<int,Sexy::Widget*,std::less<int>,std::allocator<std::pair<int_const,Sexy::Widget*>>> *this_00;
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  int local_34 [3];
  undefined8 local_28;
  undefined8 local_20 [3];
  long local_8;
  
  this_00 = (map<int,Sexy::Widget*,std::less<int>,std::allocator<std::pair<int_const,Sexy::Widget*>>>
             *)(this + 0x170);
  local_8 = ___stack_chk_guard;
  local_34[0] = param_1;
  local_28 = std::
             map<int,Sexy::Widget*,std::less<int>,std::allocator<std::pair<int_const,Sexy::Widget*>>>
             ::find(this_00,local_34);
  local_20[0] = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)this_00);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_28,(rbtree_iterator *)local_20);
  if (bVar1) {
    puVar4 = (undefined8 *)
             std::
             map<int,Sexy::Widget*,std::less<int>,std::allocator<std::pair<int_const,Sexy::Widget*>>>
             ::operator[](this_00,local_34);
    (**(code **)(*(long *)*puVar4 + 0x158))((long *)*puVar4,1);
  }
  else if (local_34[0] == 0) {
    plVar5 = (long *)UISingletonDialog<UICustomLevelChooseLevel>::ShowDialog();
    uVar2 = FUN_035e74e0(0x253);
    uVar3 = FUN_035e74e0(0x182);
    (**(code **)(*plVar5 + 0x198))(plVar5,0,0,uVar2,uVar3);
    (**(code **)(**(long **)(this + 0x1a8) + 0x60))(*(long **)(this + 0x1a8),plVar5);
    puVar4 = (undefined8 *)
             std::
             map<int,Sexy::Widget*,std::less<int>,std::allocator<std::pair<int_const,Sexy::Widget*>>>
             ::operator[](this_00,local_34);
    *puVar4 = plVar5;
  }
  else {
    if (local_34[0] == 2) {
      plVar5 = (long *)UISingletonDialog<CustomLevelShop>::ShowDialog();
    }
    else if (local_34[0] == 3) {
      plVar5 = (long *)UISingletonDialog<UICustomLevelMotivate>::ShowDialog();
    }
    else {
      if (local_34[0] != 1) goto LAB_035f30ec;
      plVar5 = (long *)UISingletonDialog<UICustomLevelCreateLevel>::ShowDialog();
    }
    uVar2 = FUN_035e74e0(0x253);
    uVar3 = FUN_035e74e0(0x182);
    (**(code **)(*plVar5 + 0x198))(plVar5,0,0,uVar2,uVar3);
    (**(code **)(**(long **)(this + 0x1a8) + 0x60))(*(long **)(this + 0x1a8),plVar5);
    puVar4 = (undefined8 *)
             std::
             map<int,Sexy::Widget*,std::less<int>,std::allocator<std::pair<int_const,Sexy::Widget*>>>
             ::operator[](this_00,local_34);
    *puVar4 = plVar5;
  }
  if (local_34[0] == 0) {
    CustomLevelUtils::TryLoadLevels((CustomLevelUtils *)0x0);
    std::vector<CustomPreviewData,std::allocator<CustomPreviewData>>::~vector
              ((vector<CustomPreviewData,std::allocator<CustomPreviewData>> *)local_20);
  }
LAB_035f30ec:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UICustomLevelMainMenu::DoClickTab(int) */

void __thiscall UICustomLevelMainMenu::DoClickTab(UICustomLevelMainMenu *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x1d4);
  if (iVar1 != param_1) {
    if (iVar1 != -1) {
      DeattachUI(this,iVar1);
    }
    *(int *)(this + 0x1d4) = param_1;
    SetTitleType(this,param_1);
    AttachUI(this,*(int *)(this + 0x1d4));
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::SelectTab,param_1);
    MessageRouter::Post<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::CustomLevelShowRefreshButton,param_1 == 0);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelMainMenu::InitView(int) */

void __thiscall UICustomLevelMainMenu::InitView(UICustomLevelMainMenu *this,int param_1)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined8 uVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  InitTab(this);
  InitOtherUI(this);
  DoClickTab(this,param_1);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar2 = FUN_035e5ca8(*(undefined4 *)(this_01 + 0x40));
  if (iVar2 == 0x3c) {
    cVar1 = PlayerInfo::HasGotCustomLevelTutorialLevel(this_01);
    if (cVar1 == '\0') {
      uVar3 = CustomLevelUtils::GetTutorialDownloadURL();
      FUN_05475d88(asStack_10,uVar3);
      cVar1 = FUN_0547419c(asStack_10);
      if (cVar1 == '\0') {
        CustomLevelUtils::TryDownloadLevelData(asStack_10,0,true,false);
      }
      std::string::~string(asStack_10);
    }
    else {
      DoClickTab(this,1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UICustomLevelMainMenu::Update() */

void __thiscall UICustomLevelMainMenu::Update(UICustomLevelMainMenu *this)

{
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  if ((this[0x1d8] != (UICustomLevelMainMenu)0x0) && (this[0x1d9] == (UICustomLevelMainMenu)0x0)) {
    this[0x1d9] = (UICustomLevelMainMenu)0x1;
    if (*(int *)(this + 0x1d0) != -1) {
      InitView(this,*(int *)(this + 0x1d0));
      return;
    }
  }
  return;
}


/* UICustomLevelMainMenu::onClickChooseLevel() */

void __thiscall UICustomLevelMainMenu::onClickChooseLevel(UICustomLevelMainMenu *this)

{
  DoClickTab(this,0);
  return;
}


/* UICustomLevelMainMenu::onClickCreateLevel() */

void __thiscall UICustomLevelMainMenu::onClickCreateLevel(UICustomLevelMainMenu *this)

{
  DoClickTab(this,1);
  return;
}


/* UICustomLevelMainMenu::onClickShop() */

void __thiscall UICustomLevelMainMenu::onClickShop(UICustomLevelMainMenu *this)

{
  DoClickTab(this,2);
  return;
}


/* UICustomLevelMainMenu::onCLickWaiting() */

void __thiscall UICustomLevelMainMenu::onCLickWaiting(UICustomLevelMainMenu *this)

{
  DoClickTab(this,4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelMainMenu::CustomLevelNetworkResponseReceived(int, int) */

void __thiscall
UICustomLevelMainMenu::CustomLevelNetworkResponseReceived
          (UICustomLevelMainMenu *this,int param_1,int param_2)

{
  int iVar1;
  CustomLevelMgr *pCVar2;
  CustomNetworkListData *pCVar3;
  ProfileMgr *pPVar4;
  PlayerInfo *this_00;
  long lVar5;
  UICustomLevelCreateLevel *this_01;
  vector<CustomNetworkPreviewData,std::allocator<CustomNetworkPreviewData>> avStack_58 [24];
  CustomNetworkListData aCStack_40 [24];
  vector avStack_28 [24];
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == 2) {
    pCVar2 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    pCVar3 = (CustomNetworkListData *)CustomLevelMgr::GetNetworkPreviewListData(pCVar2);
    CustomNetworkListData::CustomNetworkListData(aCStack_40,pCVar3);
    if (param_1 == 4) {
      if (local_10 == 2) {
        pCVar2 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
        std::vector<CustomNetworkPreviewData,std::allocator<CustomNetworkPreviewData>>::vector
                  (avStack_58,avStack_28);
        CustomLevelMgr::FillFavouriteLevelMap(pCVar2,avStack_58);
        std::vector<CustomNetworkPreviewData,std::allocator<CustomNetworkPreviewData>>::~vector
                  (avStack_58);
        if (this[0x1d8] == (UICustomLevelMainMenu)0x0) {
          this[0x1d8] = (UICustomLevelMainMenu)0x1;
        }
      }
    }
    else if (param_1 == 0xd) {
      pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar4);
      iVar1 = FUN_035e5ca8(*(undefined4 *)(this_00 + 0x40));
      if (iVar1 == 0x3c) {
        PlayerInfo::SetHasGotCustomLevelTutorialLevel(this_00,true);
        pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        lVar5 = ProfileMgr::GetCurrentProfile(pPVar4);
        iVar1 = FUN_035e5ca8(*(undefined4 *)(lVar5 + 0x40));
        if (iVar1 == 0x3c) {
          MessageRouter::Post<bool,bool>
                    ((MessageRouter *)gMessageRouter,Message::CustomLevelCreateLevelRefresh,true);
        }
        this_01 = (UICustomLevelCreateLevel *)
                  UISingletonDialog<UICustomLevelCreateLevel>::GetSingletonPtr();
        if (this_01 != (UICustomLevelCreateLevel *)0x0) {
          UICustomLevelCreateLevel::TriggerTutorial(this_01);
        }
      }
    }
    CustomNetworkListData::~CustomNetworkListData(aCStack_40);
  }
  else {
    Sexy::OutputDebugStrF
              ((wchar_t *)"UICustomLevelMainMenu::CustomLevelNetworkResponseReceived failed");
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelMainMenu::OnCreate() */

void __thiscall UICustomLevelMainMenu::OnCreate(UICustomLevelMainMenu *this)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  UIWidgetImage *pUVar5;
  char *pcVar6;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  CustomLevelShopMgr *this_02;
  TGALogMgr *this_03;
  size_t __n;
  DString aDStack_a0 [16];
  string asStack_90 [8];
  string asStack_88 [8];
  string asStack_80 [16];
  string asStack_70 [64];
  string asStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_90,"Background_0");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_90);
  std::string::~string(asStack_90);
  nop();
  UI::Dialog::SetCenter((Dialog *)this,(Widget *)pUVar5,true);
  __n = 1;
  MessageRouter::Post<bool,bool>((MessageRouter *)gMessageRouter,Message::SwitchToMainMenu,true);
  TGACustomLevelData::TGACustomLevelData((TGACustomLevelData *)asStack_90);
  DString::DString(aDStack_a0,1);
  pcVar6 = (char *)DString::c_str(aDStack_a0);
  std::string::append(asStack_90,pcVar6,__n);
  DString::~DString(aDStack_a0);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar3 = PlayerInfo::GetMaterialNum(this_01,0x5b6a);
  iVar4 = PlayerInfo::GetMaterialNum(this_01,0x5b6b);
  DString::DString(aDStack_a0,iVar3);
  pcVar6 = (char *)DString::c_str(aDStack_a0);
  std::string::append(asStack_88,pcVar6,__n);
  DString::~DString(aDStack_a0);
  DString::DString(aDStack_a0,iVar4);
  pcVar6 = (char *)DString::c_str(aDStack_a0);
  std::string::append(asStack_80,pcVar6,__n);
  DString::~DString(aDStack_a0);
  this_02 = (CustomLevelShopMgr *)Sexy::LazySingleton<CustomLevelShopMgr>::GetInstancePtr();
  iVar3 = CustomLevelShopMgr::GetCointDeltaCount(this_02,0x5b6b);
  DString::DString(aDStack_a0,iVar3);
  pcVar6 = (char *)DString::c_str(aDStack_a0);
  std::string::append(asStack_70,pcVar6,__n);
  DString::~DString(aDStack_a0);
  cVar1 = CustomLevelUtils::IsCertifiedAuthor();
  if (cVar1 == '\0') {
    pcVar6 = "0";
  }
  else {
    pcVar6 = "1";
  }
  std::string::append(asStack_30,pcVar6,__n);
  this_03 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogCustomLevel(this_03,(TGACustomLevelData *)asStack_90);
  RequestFavouriteList();
  TGACustomLevelData::~TGACustomLevelData((TGACustomLevelData *)asStack_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelMainMenu::onClickMotivate() */

void __thiscall UICustomLevelMainMenu::onClickMotivate(UICustomLevelMainMenu *this)

{
  char *__s;
  TGALogMgr *this_00;
  size_t __n;
  DString aDStack_a0 [16];
  TGACustomLevelData aTStack_90 [136];
  size_t local_8;
  
  local_8 = ___stack_chk_guard;
  __n = ___stack_chk_guard;
  DoClickTab(this,3);
  TGACustomLevelData::TGACustomLevelData(aTStack_90);
  DString::DString(aDStack_a0,0x17);
  __s = (char *)DString::c_str(aDStack_a0);
  std::string::append((string *)aTStack_90,__s,__n);
  DString::~DString(aDStack_a0);
  this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogCustomLevel(this_00,aTStack_90);
  TGACustomLevelData::~TGACustomLevelData(aTStack_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

