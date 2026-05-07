// Class: UIUnchartedFestivalReward


/* UIUnchartedFestivalReward::ScrollTargetReached(Sexy::ScrollWidget*) */

void UIUnchartedFestivalReward::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIUnchartedFestivalReward::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
UIUnchartedFestivalReward::ScrollTargetReached
          (UIUnchartedFestivalReward *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UIUnchartedFestivalReward::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UIUnchartedFestivalReward::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIUnchartedFestivalReward::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UIUnchartedFestivalReward::ScrollTargetInterrupted
          (UIUnchartedFestivalReward *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIUnchartedFestivalReward::GetLayoutName() */

void __thiscall UIUnchartedFestivalReward::GetLayoutName(UIUnchartedFestivalReward *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIUnchartedFestivalReward");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIUnchartedFestivalReward::FillPreview(Sexy::Widget*, UnchartedModeFestivalRewardData&, bool) */

void __thiscall
UIUnchartedFestivalReward::FillPreview
          (UIUnchartedFestivalReward *this,Widget *param_1,UnchartedModeFestivalRewardData *param_2,
          bool param_3)

{
  int *piVar1;
  long *plVar2;
  
  (**(code **)(*(long *)param_1 + 0x80))(param_1,1,1);
  if (param_3) {
    piVar1 = (int *)FUN_03dcb86c(*(undefined8 *)(param_2 + 8),0);
  }
  else {
    piVar1 = (int *)FUN_03dcb86c(*(undefined8 *)(param_2 + 0x20),0);
  }
  plVar2 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar1,piVar1[1],true);
  (**(code **)(*plVar2 + 0x198))
            (plVar2,0,0,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
  (**(code **)(*(long *)param_1 + 0x60))(param_1,plVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIUnchartedFestivalReward::UpdateCurrentReward() */

void __thiscall UIUnchartedFestivalReward::UpdateCurrentReward(UIUnchartedFestivalReward *this)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  UnchartedModeFestivalRewardData *pUVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  float local_10 [2];
  long local_8;
  
  iVar1 = *(int *)(*(long *)(this + 0x180) + 0x50);
  local_8 = ___stack_chk_guard;
  Sexy::ScrollWidget::GetScrollOffset();
  uVar7 = *(undefined8 *)(this + 0x1d0);
  iVar5 = 0;
  lVar2 = FUN_03dcb894(uVar7,*(undefined8 *)(this + 0x1d8));
  for (lVar6 = 0; lVar6 != lVar2; lVar6 = lVar6 + 1) {
    piVar3 = (int *)FUN_03dcb8a0(uVar7,lVar6);
    if (*piVar3 < (int)((float)iVar1 - local_10[0])) {
      iVar5 = (int)lVar6;
    }
  }
  if (*(int *)(this + 0x1e8) != iVar5) {
    *(int *)(this + 0x1e8) = iVar5;
    lVar2 = (long)iVar5;
    uVar7 = *(undefined8 *)(this + 0x160);
    FUN_05478178(awStack_20,L"[BATTLE_ORDER_NORMAL_PREVIEW]",auStack_28);
    lVar6 = FUN_03dcb8a0(*(undefined8 *)(this + 0x1d0),lVar2);
    TodReplaceNumberString(awStack_20,L"{NUM}",*(int *)(lVar6 + 4) + 1);
    TodStringTranslate(awStack_18);
    PuzzleTip::SetTip(uVar7,local_10);
    FUN_05476c50(local_10);
    FUN_05476c50(awStack_18);
    FUN_05476c50(awStack_20);
    nop();
    uVar7 = *(undefined8 *)(this + 0x168);
    FUN_05478178(awStack_20,L"[BATTLE_ORDER_PRIVILEGE_PREVIEW]",auStack_28);
    lVar6 = FUN_03dcb8a0(*(undefined8 *)(this + 0x1d0),lVar2);
    TodReplaceNumberString(awStack_20,L"{NUM}",*(int *)(lVar6 + 4) + 1);
    TodStringTranslate(awStack_18);
    PuzzleTip::SetTip(uVar7,local_10);
    FUN_05476c50(local_10);
    FUN_05476c50(awStack_18);
    FUN_05476c50(awStack_20);
    nop();
    lVar6 = FUN_03dcb8a0(*(undefined8 *)(this + 0x1d0),lVar2);
    pUVar4 = (UnchartedModeFestivalRewardData *)
             FUN_03dcb884(*(undefined8 *)(this + 0x1b8),(long)*(int *)(lVar6 + 4));
    FillPreview(this,*(Widget **)(this + 0x170),pUVar4,true);
    lVar6 = FUN_03dcb8a0(*(undefined8 *)(this + 0x1d0),lVar2);
    pUVar4 = (UnchartedModeFestivalRewardData *)
             FUN_03dcb884(*(undefined8 *)(this + 0x1b8),(long)*(int *)(lVar6 + 4));
    FillPreview(this,*(Widget **)(this + 0x178),pUVar4,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIUnchartedFestivalReward::UpdateCountDown() */

void __thiscall UIUnchartedFestivalReward::UpdateCountDown(UIUnchartedFestivalReward *this)

{
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this_00;
  undefined8 uVar1;
  UnchartedModeNetworkMgr *this_01;
  long lVar2;
  UIWidgetText *pUVar3;
  float fVar4;
  undefined1 auVar5 [12];
  undefined1 auStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x140) == 0) {
    std::string::string(asStack_10,"CountDownText");
    pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
    *(UIWidgetText **)(this + 0x140) = pUVar3;
    std::string::~string(asStack_10);
    nop();
  }
  this_00 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
             *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  uVar1 = std::
          _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          ::_M_root(this_00);
  FUN_05475d88(asStack_18,uVar1);
  this_01 = (UnchartedModeNetworkMgr *)
            Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  lVar2 = UnchartedModeNetworkMgr::GetWorldEndTime(this_01,asStack_18);
  auVar5 = LawnApp::GetRealServerTime(gLawnApp);
  fVar4 = (float)(lVar2 - auVar5._0_8_);
  if (fVar4 < 0.0) {
    uVar1 = *(undefined8 *)(this + 0x140);
    FUN_05478178(asStack_10,&DAT_05700290,auStack_20);
    PuzzleTip::SetTip(uVar1,asStack_10);
    FUN_05476c50(asStack_10);
    nop();
  }
  else {
    StringHelper::ToTimeString((StringHelper *)&DAT_00000004,fVar4,auVar5._8_4_);
    PuzzleTip::SetTip(*(undefined8 *)(this + 0x140),asStack_10);
    FUN_05476c50(asStack_10);
  }
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIUnchartedFestivalReward::Update() */

void __thiscall UIUnchartedFestivalReward::Update(UIUnchartedFestivalReward *this)

{
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  UpdateCountDown(this);
  UpdateCurrentReward(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIUnchartedFestivalReward::ShowGetAllRewardsConfirmDialog() */

void __thiscall
UIUnchartedFestivalReward::ShowGetAllRewardsConfirmDialog(UIUnchartedFestivalReward *this)

{
  UIMessageBox *this_00;
  Image *pIVar1;
  long lVar2;
  wstring awStack_68 [8];
  wstring awStack_60 [8];
  undefined1 auStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
  if (this_00 != (UIMessageBox *)0x0) {
    UIMessageBox::SetShowType(this_00,6);
    TodStringTranslate(L"[REVIVE_TIP]");
    TodStringTranslate(L"[BATTLE_ORDER_SELECT_CONFIRM]");
    TodStringTranslate(L"[BUTTON_OK]");
    UIMessageBox::SetMessage(this_00,awStack_60,awStack_68);
    std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
    pIVar1 = (Image *)StringHelper::ToImage(asStack_50,false);
    UIMessageBox::SetBackground(this_00,pIVar1);
    std::string::~string(asStack_50);
    nop();
    lVar2 = UIMessageBox::GetButtonOK(this_00);
    thunk_FUN_05477b9c(lVar2 + 0xd8,auStack_58);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,DetermineSelect);
    Sexy::Delegate2<UIMessageBox*,int>::
    Delegate2<UIUnchartedFestivalReward,void(UIUnchartedFestivalReward::*)(UIMessageBox*,int)>
              (aDStack_38,asStack_50);
    UIMessageBox::SetCallback(this_00,aDStack_38);
    FUN_05476c50(auStack_58);
    FUN_05476c50(awStack_60);
    FUN_05476c50(awStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIUnchartedFestivalReward::ButtonDepress(int) */

void __thiscall
UIUnchartedFestivalReward::ButtonDepress(UIUnchartedFestivalReward *this,int param_1)

{
  if (param_1 == 0x3e9) {
    ShowGetAllRewardsConfirmDialog(this);
    return;
  }
  if (param_1 != 0x3ea) {
    if (param_1 != 1000) {
      return;
    }
    UISingletonDialog<UIUnchartedFestivalReward>::CloseDialog();
    return;
  }
  UISingletonDialog<UIUnchartedFestivalRewardPurchase>::ShowDialog();
  return;
}


/* non-virtual thunk to UIUnchartedFestivalReward::ButtonDepress(int) */

void __thiscall
UIUnchartedFestivalReward::ButtonDepress(UIUnchartedFestivalReward *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* UIUnchartedFestivalReward::UIUnchartedFestivalReward() */

void __thiscall
UIUnchartedFestivalReward::UIUnchartedFestivalReward(UIUnchartedFestivalReward *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UISingletonDialog<UIUnchartedFestivalReward>::UISingletonDialog
            ((UISingletonDialog<UIUnchartedFestivalReward> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_0677cd90;
  *(undefined **)(this + 0xd8) = &DAT_0677d0f0;
  *(undefined ***)(this + 0x138) = &PTR__UIUnchartedFestivalReward_0677d138;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x188));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1a0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1d0));
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x1e8) = 0xffffffff;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  std::vector<UnchartedFestivalRewardItemWidget*,std::allocator<UnchartedFestivalRewardItemWidget*>>
  ::clear((vector<UnchartedFestivalRewardItemWidget*,std::allocator<UnchartedFestivalRewardItemWidget*>>
           *)(this + 0x188));
  std::vector<UnchartedFestivalRewardItemWidget*,std::allocator<UnchartedFestivalRewardItemWidget*>>
  ::clear((vector<UnchartedFestivalRewardItemWidget*,std::allocator<UnchartedFestivalRewardItemWidget*>>
           *)(this + 0x1a0));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<UIUnchartedFestivalReward,void(UIUnchartedFestivalReward::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_40);
  return;
}


/* UIUnchartedFestivalReward::~UIUnchartedFestivalReward() */

void __thiscall
UIUnchartedFestivalReward::~UIUnchartedFestivalReward(UIUnchartedFestivalReward *this)

{
  *(undefined ***)(this + 0x138) = &PTR__UIUnchartedFestivalReward_0677d138;
  *(undefined ***)this = &PTR_GetClass_0677cd90;
  *(undefined **)(this + 0xd8) = &DAT_0677d0f0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x1d0));
  std::vector<UnchartedModeFestivalRewardData,std::allocator<UnchartedModeFestivalRewardData>>::
  ~vector((vector<UnchartedModeFestivalRewardData,std::allocator<UnchartedModeFestivalRewardData>> *
          )(this + 0x1b8));
  std::vector<UnchartedFestivalRewardItemWidget*,std::allocator<UnchartedFestivalRewardItemWidget*>>
  ::~vector((vector<UnchartedFestivalRewardItemWidget*,std::allocator<UnchartedFestivalRewardItemWidget*>>
             *)(this + 0x1a0));
  std::vector<UnchartedFestivalRewardItemWidget*,std::allocator<UnchartedFestivalRewardItemWidget*>>
  ::~vector((vector<UnchartedFestivalRewardItemWidget*,std::allocator<UnchartedFestivalRewardItemWidget*>>
             *)(this + 0x188));
  UISingletonDialog<UIUnchartedFestivalReward>::~UISingletonDialog
            ((UISingletonDialog<UIUnchartedFestivalReward> *)this);
  return;
}


/* non-virtual thunk to UIUnchartedFestivalReward::~UIUnchartedFestivalReward() */

void __thiscall
UIUnchartedFestivalReward::~UIUnchartedFestivalReward(UIUnchartedFestivalReward *this)

{
  ~UIUnchartedFestivalReward(this + -0x138);
  return;
}


/* UIUnchartedFestivalReward::~UIUnchartedFestivalReward() */

void __thiscall
UIUnchartedFestivalReward::~UIUnchartedFestivalReward(UIUnchartedFestivalReward *this)

{
  ~UIUnchartedFestivalReward(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIUnchartedFestivalReward::~UIUnchartedFestivalReward() */

void __thiscall
UIUnchartedFestivalReward::~UIUnchartedFestivalReward(UIUnchartedFestivalReward *this)

{
  ~UIUnchartedFestivalReward(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIUnchartedFestivalReward::GetAllRewards() */

void __thiscall UIUnchartedFestivalReward::GetAllRewards(UIUnchartedFestivalReward *this)

{
  string *psVar1;
  undefined8 uVar2;
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this_00;
  undefined8 uVar3;
  DNetwork *this_01;
  string *psVar4;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2680];
  string asStack_270 [616];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  psVar4 = asStack_d40;
  std::string::string(asStack_ce8,"type");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_ce8);
  std::string::append(psVar1,"2",(size_t)psVar4);
  std::string::~string(asStack_ce8);
  nop();
  std::string::string(asStack_ce8,"world");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_ce8);
  this_00 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
             *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  uVar3 = std::
          _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          ::_M_root(this_00);
  thunk_FUN_05475e00(uVar2,uVar3);
  std::string::~string(asStack_ce8);
  nop();
  psVar4 = asStack_d40;
  std::string::string(asStack_ce8,"index");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_ce8);
  std::string::append(psVar1,"0",(size_t)psVar4);
  std::string::~string(asStack_ce8);
  nop();
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_03dcc20c(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_270,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIUnchartedFestivalReward::DetermineSelect(UIMessageBox*, int) */

void __thiscall
UIUnchartedFestivalReward::DetermineSelect
          (UIUnchartedFestivalReward *this,UIMessageBox *param_1,int param_2)

{
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 != 1) {
    return;
  }
  GetAllRewards(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIUnchartedFestivalReward::AllRewardsGot() */

void UIUnchartedFestivalReward::AllRewardsGot(void)

{
  int iVar1;
  UnchartedModeNetworkMgr *this;
  UnchartedModeWorldData *pUVar2;
  int *piVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 local_138;
  undefined8 local_130;
  UnchartedModeWorldData aUStack_120 [64];
  int local_e0;
  vector avStack_70 [104];
  long local_8;
  
  uVar7 = 0;
  local_8 = ___stack_chk_guard;
  this = (UnchartedModeNetworkMgr *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  pUVar2 = (UnchartedModeWorldData *)UnchartedModeNetworkMgr::GetCurrentWorldData(this);
  UnchartedModeWorldData::UnchartedModeWorldData(aUStack_120,pUVar2);
  std::vector<UnchartedModeFestivalRewardData,std::allocator<UnchartedModeFestivalRewardData>>::
  vector((vector<UnchartedModeFestivalRewardData,std::allocator<UnchartedModeFestivalRewardData>> *)
         &local_138,avStack_70);
  uVar4 = local_138;
  if (local_e0 == 0) {
    for (; uVar5 = FUN_03dcb878(uVar4,local_130), uVar7 < uVar5; uVar7 = uVar7 + 1) {
      iVar1 = PVZ2UnchartedModeUtils::GetCurrentStarCount();
      uVar4 = local_138;
      piVar3 = (int *)FUN_03dcb884(local_138,uVar7);
      if ((*piVar3 <= iVar1) && (piVar3[0xe] == 0)) goto LAB_03dcff04;
    }
  }
  else {
    for (; uVar5 = FUN_03dcb878(uVar4,local_130), uVar7 < uVar5; uVar7 = uVar7 + 1) {
      iVar1 = PVZ2UnchartedModeUtils::GetCurrentStarCount();
      uVar4 = local_138;
      piVar3 = (int *)FUN_03dcb884(local_138,uVar7);
      if ((*piVar3 <= iVar1) && ((piVar3[0xe] == 0 || (piVar3[0xf] == 0)))) goto LAB_03dcff04;
    }
  }
  uVar6 = 1;
LAB_03dcfe78:
  std::vector<UnchartedModeFestivalRewardData,std::allocator<UnchartedModeFestivalRewardData>>::
  ~vector((vector<UnchartedModeFestivalRewardData,std::allocator<UnchartedModeFestivalRewardData>> *
          )&local_138);
  UnchartedModeWorldData::~UnchartedModeWorldData(aUStack_120);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
LAB_03dcff04:
  uVar6 = 0;
  goto LAB_03dcfe78;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIUnchartedFestivalReward::InitView() */

void __thiscall UIUnchartedFestivalReward::InitView(UIUnchartedFestivalReward *this)

{
  int iVar1;
  wchar_t wVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  wchar_t wVar6;
  UnchartedModeNetworkMgr *this_00;
  UnchartedModeWorldData *pUVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  UIWidgetText *pUVar11;
  UIWidgetImage *pUVar12;
  PVZ2UnchartedModeUtils *this_01;
  PVZ2UIButton *pPVar13;
  PVZ2UIScrollingWidget *this_02;
  Widget *this_03;
  UnchartedFestivalRewardItemWidget *pUVar14;
  UnchartedModeFestivalRewardData *pUVar15;
  long *plVar16;
  code *pcVar17;
  wchar_t local_150;
  wchar_t local_14c;
  UnchartedFestivalRewardItemWidget *local_148;
  UnchartedFestivalRewardItemWidget *local_140;
  string asStack_138 [8];
  string asStack_130 [12];
  int local_124;
  UnchartedModeWorldData aUStack_120 [32];
  undefined1 auStack_100 [32];
  int local_e0;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_70 [104];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (UnchartedModeNetworkMgr *)
            Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  pUVar7 = (UnchartedModeWorldData *)UnchartedModeNetworkMgr::GetCurrentWorldData(this_00);
  UnchartedModeWorldData::UnchartedModeWorldData(aUStack_120,pUVar7);
  uVar8 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(avStack_70);
  uVar9 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(avStack_70);
  std::vector<UnchartedModeFestivalRewardData,std::allocator<UnchartedModeFestivalRewardData>>::
  assign<__gnu_cxx::__normal_iterator<UnchartedModeFestivalRewardData*,std::vector<UnchartedModeFestivalRewardData,std::allocator<UnchartedModeFestivalRewardData>>>,void>
            ((vector<UnchartedModeFestivalRewardData,std::allocator<UnchartedModeFestivalRewardData>>
              *)(this + 0x1b8),uVar8,uVar9);
  lVar10 = FUN_05474374(auStack_100,"needforspeed",0);
  if (lVar10 != -1) {
    std::string::string(asStack_130,"UIText_Return_Gem_Tip");
    pUVar11 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_130);
    std::string::~string(asStack_130);
    nop();
    if (pUVar11 != (UIWidgetText *)0x0) {
      FUN_05478178(asStack_130,&DAT_056f11a8,asStack_138);
      PuzzleTip::SetTip(pUVar11,asStack_130);
      FUN_05476c50(asStack_130);
      nop();
    }
  }
  std::string::string(asStack_130,"StarImage");
  pUVar12 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_130);
  std::string::~string(asStack_130);
  nop();
  if (pUVar12 != (UIWidgetImage *)0x0) {
    PVZ2UnchartedModeUtils::GetCurrentWorldResourcePrefix(this_01);
    std::operator+(asStack_138,"_HUD_WORLDMAP_STAR");
    UIWidgetImage::SetImage(pUVar12,asStack_130);
    std::string::~string(asStack_130);
    std::string::~string(asStack_138);
  }
  std::string::string(asStack_130,"StarNumber");
  pUVar11 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_130);
  std::string::~string(asStack_130);
  nop();
  if (pUVar11 != (UIWidgetText *)0x0) {
    FUN_05478178(asStack_130,L"[PVZ2_UNCHARTED_MODE_FESTIVAL_REWARD_STAR_DESC]",&local_140);
    iVar3 = PVZ2UnchartedModeUtils::GetCurrentStarCount();
    TodReplaceNumberString((wstring *)asStack_130,L"{NUMS}",iVar3);
    FUN_05476c50(asStack_130);
    nop();
    iVar3 = PVZ2UnchartedModeUtils::GetCurrentMaxStarNumber();
    TodReplaceNumberString((wstring *)asStack_138,L"{NUMS_MAX}",iVar3);
    PuzzleTip::SetTip(pUVar11,asStack_130);
    FUN_05476c50(asStack_130);
    FUN_05476c50(asStack_138);
  }
  UpdateCountDown(this);
  std::string::string(asStack_130,"UIButton_2");
  pPVar13 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_130);
  *(PVZ2UIButton **)(this + 0x148) = pPVar13;
  std::string::~string(asStack_130);
  nop();
  plVar16 = *(long **)(this + 0x148);
  pcVar17 = *(code **)(*plVar16 + 0x188);
  uVar4 = AllRewardsGot();
  (*pcVar17)(plVar16,uVar4);
  std::string::string(asStack_130,"UIButton_3");
  pPVar13 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_130);
  *(PVZ2UIButton **)(this + 0x150) = pPVar13;
  std::string::~string(asStack_130);
  nop();
  (**(code **)(**(long **)(this + 0x150) + 0x188))(*(long **)(this + 0x150),local_e0 != 0);
  std::string::string(asStack_130,"UIImage_8");
  pUVar12 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_130);
  *(UIWidgetImage **)(this + 0x158) = pUVar12;
  std::string::~string(asStack_130);
  nop();
  (**(code **)(**(long **)(this + 0x158) + 0x158))(*(long **)(this + 0x158),local_e0 == 0);
  std::string::string(asStack_130,"BonusContainer");
  plVar16 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_130);
  std::string::~string(asStack_130);
  nop();
  this_02 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_02,(ScrollWidgetListener *)(this + 0x138));
  *(PVZ2UIScrollingWidget **)(this + 0x180) = this_02;
  iVar3 = FUN_03dcc2c4(0);
  Sexy::Insets::Insets
            ((Insets *)asStack_130,iVar3,iVar3,(int)plVar16[10],*(int *)((long)plVar16 + 0x54));
  (**(code **)(**(long **)(this + 0x180) + 0x1a0))(*(long **)(this + 0x180),asStack_130);
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0x180),1);
  this_03 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_03);
  (**(code **)(*(long *)this_03 + 0x1a0))(this_03,asStack_130);
  local_150 = FUN_03dcc2c4(0);
  iVar5 = FUN_03dcc2c4(0x5f);
  local_148 = (UnchartedFestivalRewardItemWidget *)CONCAT44(local_148._4_4_,0xffffd8f0);
  iVar3 = local_124 / 2;
  local_140 = (UnchartedFestivalRewardItemWidget *)CONCAT44(local_140._4_4_,4);
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>
            ((pair<wchar_t_const,wchar_t> *)asStack_138,(wchar_t *)&local_148,(wchar_t *)&local_140)
  ;
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x1d0),
             (pair *)asStack_138);
  wVar6 = FUN_03dcb878(*(undefined8 *)(this + 0x1b8),*(undefined8 *)(this + 0x1c0));
  if (L'\0' < wVar6) {
    lVar10 = 0;
    do {
      while( true ) {
        pUVar14 = ::operator_new(0x160);
        UnchartedFestivalRewardItemWidget::UnchartedFestivalRewardItemWidget(pUVar14);
        wVar2 = local_150;
        local_148 = pUVar14;
        uVar4 = FUN_03dcc2c4(0);
        (**(code **)(*(long *)pUVar14 + 0x198))(pUVar14,wVar2,uVar4,iVar5,iVar3);
        pUVar14 = local_148;
        pUVar15 = (UnchartedModeFestivalRewardData *)
                  FUN_03dcb884(*(undefined8 *)(this + 0x1b8),lVar10);
        iVar1 = (int)lVar10;
        UnchartedFestivalRewardItemWidget::InitData(pUVar14,pUVar15,iVar1,true);
        (**(code **)(*(long *)this_03 + 0x60))(this_03,local_148);
        std::
        vector<UnchartedFestivalRewardItemWidget*,std::allocator<UnchartedFestivalRewardItemWidget*>>
        ::push_back((vector<UnchartedFestivalRewardItemWidget*,std::allocator<UnchartedFestivalRewardItemWidget*>>
                     *)(this + 0x188),&local_148);
        pUVar14 = ::operator_new(0x160);
        UnchartedFestivalRewardItemWidget::UnchartedFestivalRewardItemWidget(pUVar14);
        local_140 = pUVar14;
        (**(code **)(*(long *)pUVar14 + 0x198))(pUVar14,local_150,iVar3,iVar5,iVar3);
        pUVar14 = local_140;
        pUVar15 = (UnchartedModeFestivalRewardData *)
                  FUN_03dcb884(*(undefined8 *)(this + 0x1b8),lVar10);
        UnchartedFestivalRewardItemWidget::InitData(pUVar14,pUVar15,iVar1,false);
        (**(code **)(*(long *)this_03 + 0x60))(this_03,local_140);
        std::
        vector<UnchartedFestivalRewardItemWidget*,std::allocator<UnchartedFestivalRewardItemWidget*>>
        ::push_back((vector<UnchartedFestivalRewardItemWidget*,std::allocator<UnchartedFestivalRewardItemWidget*>>
                     *)(this + 0x1a0),&local_140);
        local_150 = local_150 + iVar5;
        if ((iVar1 % 5 != 4) || (wVar6 <= iVar1 + L'\x05')) break;
        lVar10 = lVar10 + 1;
        local_14c = iVar1 + L'\x05';
        std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>
                  ((pair<wchar_t_const,wchar_t> *)asStack_138,&local_150,&local_14c);
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                  ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x1d0),
                   (pair *)asStack_138);
        if (wVar6 <= (wchar_t)lVar10) goto LAB_03dd0850;
      }
      lVar10 = lVar10 + 1;
    } while ((wchar_t)lVar10 < wVar6);
  }
LAB_03dd0850:
  uVar8 = *(undefined8 *)(this + 0x180);
  pcVar17 = *(code **)(*plVar16 + 0x60);
  *(wchar_t *)(this_03 + 0x50) = local_150;
  (*pcVar17)(plVar16,uVar8);
  (**(code **)(**(long **)(this + 0x180) + 0x60))(*(long **)(this + 0x180),this_03);
  std::string::string(asStack_138,"NormalBonusDesc");
  pUVar11 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_138);
  *(UIWidgetText **)(this + 0x160) = pUVar11;
  std::string::~string(asStack_138);
  nop();
  std::string::string(asStack_138,"AdvanceBonusDesc");
  pUVar11 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_138);
  *(UIWidgetText **)(this + 0x168) = pUVar11;
  std::string::~string(asStack_138);
  nop();
  std::string::string(asStack_138,"NormalBonusImage");
  uVar8 = UI::Dialog::GetWidget((Dialog *)this,asStack_138);
  *(undefined8 *)(this + 0x170) = uVar8;
  std::string::~string(asStack_138);
  nop();
  std::string::string(asStack_138,"AdvanceBonusImage");
  uVar8 = UI::Dialog::GetWidget((Dialog *)this,asStack_138);
  *(undefined8 *)(this + 0x178) = uVar8;
  std::string::~string(asStack_138);
  nop();
  UnchartedModeWorldData::~UnchartedModeWorldData(aUStack_120);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIUnchartedFestivalReward::OnCreate() */

void __thiscall UIUnchartedFestivalReward::OnCreate(UIUnchartedFestivalReward *this)

{
  undefined4 uVar1;
  Widget *pWVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  pWVar2 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  UI::Dialog::SetCenter((Dialog *)this,pWVar2,true);
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIUnchartedFestivalReward::UpdateFestivalRewardItemData() */

void __thiscall
UIUnchartedFestivalReward::UpdateFestivalRewardItemData(UIUnchartedFestivalReward *this)

{
  int iVar1;
  undefined4 uVar2;
  UnchartedModeNetworkMgr *pUVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  UnchartedModeFestivalRewardData *pUVar8;
  UnchartedModeWorldData *pUVar9;
  long *plVar10;
  code *pcVar11;
  vector<UnchartedModeFestivalRewardData,std::allocator<UnchartedModeFestivalRewardData>>
  avStack_138 [24];
  UnchartedModeWorldData aUStack_120 [64];
  int local_e0;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pUVar3 = (UnchartedModeNetworkMgr *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr()
  ;
  lVar4 = UnchartedModeNetworkMgr::GetCurrentWorldData(pUVar3);
  std::vector<UnchartedModeFestivalRewardData,std::allocator<UnchartedModeFestivalRewardData>>::
  vector(avStack_138,(vector *)(lVar4 + 0xb0));
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_138);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_138);
  std::vector<UnchartedModeFestivalRewardData,std::allocator<UnchartedModeFestivalRewardData>>::
  assign<__gnu_cxx::__normal_iterator<UnchartedModeFestivalRewardData*,std::vector<UnchartedModeFestivalRewardData,std::allocator<UnchartedModeFestivalRewardData>>>,void>
            ((vector<UnchartedModeFestivalRewardData,std::allocator<UnchartedModeFestivalRewardData>>
              *)(this + 0x1b8),uVar5,uVar6);
  uVar5 = *(undefined8 *)(this + 0x1b8);
  iVar1 = FUN_03dcb878(uVar5,*(undefined8 *)(this + 0x1c0));
  if (0 < iVar1) {
    lVar4 = 0;
    while( true ) {
      puVar7 = (undefined8 *)FUN_03dcb88c(*(undefined8 *)(this + 0x188),lVar4);
      pUVar8 = (UnchartedModeFestivalRewardData *)FUN_03dcb884(uVar5,lVar4);
      UnchartedFestivalRewardItemWidget::UpdateData
                ((UnchartedFestivalRewardItemWidget *)*puVar7,pUVar8);
      puVar7 = (undefined8 *)FUN_03dcb88c(*(undefined8 *)(this + 0x1a0),lVar4);
      pUVar8 = (UnchartedModeFestivalRewardData *)FUN_03dcb884(*(undefined8 *)(this + 0x1b8),lVar4);
      UnchartedFestivalRewardItemWidget::UpdateData
                ((UnchartedFestivalRewardItemWidget *)*puVar7,pUVar8);
      if (iVar1 <= (int)(lVar4 + 1)) break;
      uVar5 = *(undefined8 *)(this + 0x1b8);
      lVar4 = lVar4 + 1;
    }
  }
  plVar10 = *(long **)(this + 0x148);
  if (plVar10 != (long *)0x0) {
    pcVar11 = *(code **)(*plVar10 + 0x188);
    uVar2 = AllRewardsGot();
    (*pcVar11)(plVar10,uVar2);
  }
  pUVar3 = (UnchartedModeNetworkMgr *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr()
  ;
  pUVar9 = (UnchartedModeWorldData *)UnchartedModeNetworkMgr::GetCurrentWorldData(pUVar3);
  UnchartedModeWorldData::UnchartedModeWorldData(aUStack_120,pUVar9);
  plVar10 = *(long **)(this + 0x150);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x188))(plVar10,local_e0 != 0);
  }
  UnchartedModeWorldData::~UnchartedModeWorldData(aUStack_120);
  std::vector<UnchartedModeFestivalRewardData,std::allocator<UnchartedModeFestivalRewardData>>::
  ~vector(avStack_138);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIUnchartedFestivalReward::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
UIUnchartedFestivalReward::onNotifyRefreshActivityList
          (UIUnchartedFestivalReward *this,bool param_1,set *param_2)

{
  bool bVar1;
  UnchartedModeNetworkMgr *this_00;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_1c = 0x2a61;
    local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1c);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (bVar1) {
      this_00 = (UnchartedModeNetworkMgr *)
                Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
      UnchartedModeNetworkMgr::syncMainEntryInfo(this_00);
      UpdateFestivalRewardItemData(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

