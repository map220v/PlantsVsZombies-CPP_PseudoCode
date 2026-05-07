// Class: UIRenaissanceChallengeNew


/* UIRenaissanceChallengeNew::ScrollTargetReached(Sexy::ScrollWidget*) */

void UIRenaissanceChallengeNew::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIRenaissanceChallengeNew::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
UIRenaissanceChallengeNew::ScrollTargetReached
          (UIRenaissanceChallengeNew *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x140));
  return;
}


/* UIRenaissanceChallengeNew::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UIRenaissanceChallengeNew::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIRenaissanceChallengeNew::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UIRenaissanceChallengeNew::ScrollTargetInterrupted
          (UIRenaissanceChallengeNew *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x140));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRenaissanceChallengeNew::GetLayoutName() */

void __thiscall UIRenaissanceChallengeNew::GetLayoutName(UIRenaissanceChallengeNew *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIRenaissanceChallengeNew");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIRenaissanceChallengeNew::~UIRenaissanceChallengeNew() */

void __thiscall
UIRenaissanceChallengeNew::~UIRenaissanceChallengeNew(UIRenaissanceChallengeNew *this)

{
  *(undefined ***)this = &PTR_GetClass_06713f00;
  *(undefined **)(this + 0x138) = &DAT_067142a8;
  *(undefined **)(this + 0xd8) = &DAT_06714260;
  *(undefined ***)(this + 0x140) = &PTR__UIRenaissanceChallengeNew_067142c0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UISingletonDialog<UIRenaissanceChallengeNew>::~UISingletonDialog
            ((UISingletonDialog<UIRenaissanceChallengeNew> *)this);
  return;
}


/* non-virtual thunk to UIRenaissanceChallengeNew::~UIRenaissanceChallengeNew() */

void __thiscall
UIRenaissanceChallengeNew::~UIRenaissanceChallengeNew(UIRenaissanceChallengeNew *this)

{
  ~UIRenaissanceChallengeNew(this + -0x140);
  return;
}


/* UIRenaissanceChallengeNew::~UIRenaissanceChallengeNew() */

void __thiscall
UIRenaissanceChallengeNew::~UIRenaissanceChallengeNew(UIRenaissanceChallengeNew *this)

{
  ~UIRenaissanceChallengeNew(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIRenaissanceChallengeNew::~UIRenaissanceChallengeNew() */

void __thiscall
UIRenaissanceChallengeNew::~UIRenaissanceChallengeNew(UIRenaissanceChallengeNew *this)

{
  ~UIRenaissanceChallengeNew(this + -0x140);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRenaissanceChallengeNew::Update() */

void __thiscall UIRenaissanceChallengeNew::Update(UIRenaissanceChallengeNew *this)

{
  UIWidgetText *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  std::string::string(asStack_10,"UIText_Timer");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  TimeUtil::GetTimeCountdown(3,0x2a09);
  TimeUtil::GetTimeCountdownFormat((TimeUtil *)asStack_10,0);
  PuzzleTip::SetTip(pUVar1,asStack_10);
  FUN_05476c50(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRenaissanceChallengeNew::ButtonDepress(int) */

void __thiscall
UIRenaissanceChallengeNew::ButtonDepress(UIRenaissanceChallengeNew *this,int param_1)

{
  UITabControl *this_00;
  UITabContent *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x58) {
    UISingletonDialog<UIRenaissanceChallengeNew>::CloseDialog();
  }
  else if (param_1 == 0x7b) {
    std::string::string(asStack_10,"UITabControl_0");
    this_00 = UI::Dialog::GetWidget<UITabControl>((Dialog *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    pUVar1 = (UITabContent *)UITabControl::GetTab(this_00,2);
    UITabControl::SetTabSelected(this_00,pUVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UIRenaissanceChallengeNew::ButtonDepress(int) */

void __thiscall
UIRenaissanceChallengeNew::ButtonDepress(UIRenaissanceChallengeNew *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRenaissanceChallengeNew::updateMaterial() */

void __thiscall UIRenaissanceChallengeNew::updateMaterial(UIRenaissanceChallengeNew *this)

{
  UIWidgetText *this_00;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  undefined4 local_18 [2];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_Material");
  this_00 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this_00 != (UIWidgetText *)0x0) {
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    local_18[0] = PlayerInfo::GetMaterialNum(this_02,DAT_06a884dc);
    std::to_string<ActivityTypeID>((ActivityTypeID *)local_18);
    UIWidgetText::SetString(this_00,asStack_10);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRenaissanceChallengeNew::onBuyGacha(int) */

void UIRenaissanceChallengeNew::onBuyGacha(int param_1)

{
  UIWidgetText *this;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined4 auStack_18 [2];
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_Material");
  this = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)(ulong)(uint)param_1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this != (UIWidgetText *)0x0) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    auStack_18[0] = PlayerInfo::GetMaterialNum(this_01,DAT_06a884dc);
    std::to_string<ActivityTypeID>((ActivityTypeID *)auStack_18);
    UIWidgetText::SetString(this,asStack_10);
    std::string::~string(asStack_10);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIRenaissanceChallengeNew::UIRenaissanceChallengeNew() */

void __thiscall
UIRenaissanceChallengeNew::UIRenaissanceChallengeNew(UIRenaissanceChallengeNew *this)

{
  undefined *puVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UISingletonDialog<UIRenaissanceChallengeNew>::UISingletonDialog
            ((UISingletonDialog<UIRenaissanceChallengeNew> *)this);
  UI::TabControlListener::TabControlListener((TabControlListener *)(this + 0x138));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x140));
  *(undefined ***)this = &PTR_GetClass_06713f00;
  *(undefined ***)(this + 0x140) = &PTR__UIRenaissanceChallengeNew_067142c0;
  *(undefined **)(this + 0xd8) = &DAT_06714260;
  *(undefined **)(this + 0x138) = &DAT_067142a8;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnShopBuyFinish);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<bool,S2C_ShopItemPurchaseInfo_const*,Sexy::CBMemberTranslatorX<UIRenaissanceChallengeNew,void(UIRenaissanceChallengeNew::*)(bool,S2C_ShopItemPurchaseInfo_const*)>>
            ((MessageRouter *)puVar1,Message::NotifyShopBuyFinishDetails,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBuyGacha);
  local_60 = local_8;
  local_70 = local_18;
  uStack_68 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<UIRenaissanceChallengeNew,void(UIRenaissanceChallengeNew::*)(int)>>
            ((MessageRouter *)puVar1,Message::BuyRenaiEgg,&local_70);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRenaissanceChallengeNew::initShop(std::vector<RenaissanceChallengeRewardItemData,
   std::allocator<RenaissanceChallengeRewardItemData> > const&) */

void __thiscall UIRenaissanceChallengeNew::initShop(UIRenaissanceChallengeNew *this,vector *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  RenaissanceChallengeRewardWidget *this_02;
  RenaissanceChallengeRewardItemData *pRVar6;
  ulong uVar7;
  ulong uVar8;
  code *pcVar9;
  int iVar10;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"UIImage_Rewards");
  plVar5 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  (**(code **)(*plVar5 + 0x80))(plVar5,1,1);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x140));
  (**(code **)(*plVar5 + 0x60))(plVar5,this_00);
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,0,0,(int)plVar5[10],*(undefined4 *)((long)plVar5 + 0x54));
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,(int)plVar5[10],*(undefined4 *)((long)plVar5 + 0x54));
  iVar3 = FUN_03aad07c(0x14);
  iVar4 = FUN_03aad07c(10);
  iVar2 = (*(int *)(this_00 + 0x50) + iVar3 * -4) / 3;
  iVar1 = (iVar4 * -3 + *(int *)(this_00 + 0x54)) / 2;
  uVar8 = 0;
  while( true ) {
    iVar10 = (int)uVar8;
    uVar7 = FUN_03aac268(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
    if (uVar7 <= uVar8) break;
    Sexy::Insets::Insets
              ((Insets *)asStack_18,iVar3 + (iVar2 + iVar3) * (iVar10 % 3),
               iVar4 + (iVar1 + iVar4) * (iVar10 / 3),iVar2,iVar1);
    this_02 = ::operator_new(0x130);
    RenaissanceChallengeRewardWidget::RenaissanceChallengeRewardWidget(this_02);
    (**(code **)(*(long *)this_02 + 0x1a0))(this_02,asStack_18);
    pRVar6 = (RenaissanceChallengeRewardItemData *)FUN_03aac298(*(undefined8 *)param_1,uVar8);
    RenaissanceChallengeRewardWidget::setData(this_02,iVar10,pRVar6);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
    uVar8 = uVar8 + 1;
  }
  uVar8 = uVar7 / 3;
  if (uVar7 != uVar8 * 3) {
    uVar8 = uVar8 + 1;
  }
  pcVar9 = *(code **)(*(long *)this_00 + 0x60);
  *(int *)(this_01 + 0x54) = (int)uVar8 * (iVar1 + iVar3);
  (*pcVar9)(this_00,this_01);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRenaissanceChallengeNew::initBundle(std::vector<EggRechargeBundleData,
   std::allocator<EggRechargeBundleData> > const&) */

void __thiscall
UIRenaissanceChallengeNew::initBundle(UIRenaissanceChallengeNew *this,vector *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  UIWidgetImage *pUVar6;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  RenaissanceChallengeBundleWidget *this_02;
  EggRechargeBundleData *pEVar7;
  ulong uVar8;
  code *pcVar9;
  ulong uVar10;
  int iVar11;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"UIImage_Bundle");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  (**(code **)(*(long *)pUVar6 + 0x80))(pUVar6,1,1);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x140));
  (**(code **)(*(long *)pUVar6 + 0x60))(pUVar6,this_00);
  uVar2 = FUN_03aad07c(10);
  iVar3 = FUN_03aad07c(0x14);
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,uVar2,0,*(int *)(pUVar6 + 0x50) - iVar3,*(undefined4 *)(pUVar6 + 0x54));
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,1);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  iVar4 = FUN_03aad07c(0x14);
  iVar5 = FUN_03aad07c(10);
  iVar1 = *(int *)(this_00 + 0x54);
  iVar11 = (int)((double)(iVar5 * -2 + *(int *)(this_00 + 0x50) + iVar4 * -3) * 0.4);
  iVar3 = iVar4 + iVar11;
  uVar10 = 0;
  while( true ) {
    uVar8 = FUN_03aac22c(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
    if (uVar8 <= uVar10) break;
    Sexy::Insets::Insets
              ((Insets *)asStack_18,iVar5 + ((uint)uVar10 & 3) * iVar3,iVar5,iVar11,
               iVar5 * -2 + iVar1);
    this_02 = ::operator_new(0x168);
    RenaissanceChallengeBundleWidget::RenaissanceChallengeBundleWidget(this_02);
    (**(code **)(*(long *)this_02 + 0x1a0))(this_02,asStack_18);
    pEVar7 = (EggRechargeBundleData *)FUN_03aac25c(*(undefined8 *)param_1,uVar10);
    RenaissanceChallengeBundleWidget::initData(this_02,pEVar7);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
    uVar10 = uVar10 + 1;
  }
  pcVar9 = *(code **)(*(long *)this_00 + 0x60);
  *(int *)(this_01 + 0x50) = (iVar5 * 2 - iVar4) + iVar3 * (int)uVar8;
  (*pcVar9)(this_00,this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRenaissanceChallengeNew::InitView() */

void __thiscall UIRenaissanceChallengeNew::InitView(UIRenaissanceChallengeNew *this)

{
  uint uVar1;
  UIWidgetText *pUVar2;
  UITabContent *this_00;
  UITabContent *this_01;
  RenaissanceChallengeNewManager *this_02;
  DNetwork *this_03;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  wstring awStack_d18 [48];
  string asStack_ce8 [1752];
  string asStack_610 [1544];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  updateMaterial(this);
  std::string::string(asStack_ce8,"UIText_Title");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_ce8);
  std::string::~string(asStack_ce8);
  nop();
  std::string::string(asStack_ce8,"UITab_0");
  this_00 = UI::Dialog::GetWidget<UITabContent>((Dialog *)this,asStack_ce8);
  std::string::~string(asStack_ce8);
  nop();
  std::string::string(asStack_ce8,"UITab_1");
  this_01 = UI::Dialog::GetWidget<UITabContent>((Dialog *)this,asStack_ce8);
  std::string::~string(asStack_ce8);
  nop();
  this_02 = (RenaissanceChallengeNewManager *)
            Sexy::LazySingleton<RenaissanceChallengeNewManager>::GetInstancePtr();
  uVar1 = RenaissanceChallengeNewManager::GetResourceId(this_02);
  if (0 < (int)uVar1) {
    Sexy::StrFormat("[CHILDREN_DAY_CHALLENGE_TITLE_%d]",asStack_d40,(ulong)uVar1);
    Sexy::ToWString(asStack_d40);
    TodStringTranslate(awStack_d18);
    PuzzleTip::SetTip(pUVar2,asStack_ce8);
    FUN_05476c50(asStack_ce8);
    FUN_05476c50(awStack_d18);
    std::string::~string(asStack_d40);
    Sexy::StrFormat("[STATUE_SHOP_%d]",asStack_d40,(ulong)uVar1);
    Sexy::ToWString(asStack_d40);
    TodStringTranslate(awStack_d18);
    UITabContent::SetTabName(this_00,(wstring *)asStack_ce8);
    FUN_05476c50(asStack_ce8);
    FUN_05476c50(awStack_d18);
    std::string::~string(asStack_d40);
    Sexy::StrFormat("[STATUE_BUNDLE_%d]",asStack_d40,(ulong)uVar1);
    Sexy::ToWString(asStack_d40);
    TodStringTranslate(awStack_d18);
    UITabContent::SetTabName(this_01,(wstring *)asStack_ce8);
    FUN_05476c50(asStack_ce8);
    FUN_05476c50(awStack_d18);
    std::string::~string(asStack_d40);
  }
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)awStack_d18);
  this_03 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_03aad020(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_03,asStack_610,(map *)awStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)awStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRenaissanceChallengeNew::OnCreate() */

void __thiscall UIRenaissanceChallengeNew::OnCreate(UIRenaissanceChallengeNew *this)

{
  UIWidgetBackground *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(int *)(pUVar1 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar1 + 0x50)) / 2;
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRenaissanceChallengeNew::OnShopBuyFinish(bool, S2C_ShopItemPurchaseInfo const*) */

void __thiscall
UIRenaissanceChallengeNew::OnShopBuyFinish
          (UIRenaissanceChallengeNew *this,bool param_1,S2C_ShopItemPurchaseInfo *param_2)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  DaveTreasureDataManager *this_02;
  TGALogMgr *pTVar2;
  char *pcVar3;
  GAME_ITEM_INFO *__n;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_f0 [24];
  TGASecretStore aTStack_d8 [8];
  string asStack_d0 [8];
  string asStack_c8 [32];
  TGAAnniversaryTreasureData aTStack_a8 [16];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [40];
  GAME_ITEM_INFO aGStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((param_1) && (*(int *)(param_2 + 0x14) == 5)) && (*(int *)(param_2 + 0x20) == DAT_06a884dc))
  {
    ProfileChangeItemAmount(*(int *)(param_2 + 0x18),*(int *)(param_2 + 0x1c),false);
    GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_58);
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    local_104 = PlayerInfo::GetMaterialNum(this_01,DAT_06a884dc);
    iVar1 = PlayerInfo::GetMaterialNum(this_01,DAT_06a884dc);
    iVar1 = iVar1 - *(int *)(param_2 + 0x24);
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    PlayerInfo::SetMaterialNum(this_01,DAT_06a884dc,iVar1);
    InitView(this);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_f0);
    local_f8 = 0;
    local_100 = *(undefined4 *)(param_2 + 0x18);
    local_fc = *(undefined4 *)(param_2 + 0x1c);
    std::vector<LotteryBonus,std::allocator<LotteryBonus>>::push_back
              ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)avStack_f0,
               (LotteryBonus *)&local_100);
    this_02 = (DaveTreasureDataManager *)
              Sexy::LazySingleton<DaveTreasureDataManager>::GetInstancePtr();
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aGStack_58);
    __n = aGStack_58;
    DaveTreasureDataManager::ShowBonus(this_02,(vector *)avStack_f0,(vector *)aGStack_58);
    std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
              ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)aGStack_58);
    TGAAnniversaryTreasureData::TGAAnniversaryTreasureData(aTStack_a8);
    std::string::append((string *)aTStack_a8,"3",(size_t)__n);
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_104);
    FUN_05474278(auStack_98,aGStack_58);
    std::string::~string((string *)aGStack_58);
    std::to_string<ActivityTypeID>((ActivityTypeID *)(param_2 + 0x18));
    FUN_05474278(auStack_90,aGStack_58);
    std::string::~string((string *)aGStack_58);
    std::to_string<ActivityTypeID>((ActivityTypeID *)(param_2 + 0x1c));
    FUN_05474278(auStack_88,aGStack_58);
    std::string::~string((string *)aGStack_58);
    std::to_string<ActivityTypeID>((ActivityTypeID *)(param_2 + 0x24));
    FUN_05474278(auStack_80,aGStack_58);
    std::string::~string((string *)aGStack_58);
    pTVar2 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGAAnniversaryTreasureData::TGAAnniversaryTreasureData
              ((TGAAnniversaryTreasureData *)aGStack_58,aTStack_a8);
    TGALogMgr::LogFoolChallenge(pTVar2,aGStack_58);
    TGAAnniversaryTreasureData::~TGAAnniversaryTreasureData
              ((TGAAnniversaryTreasureData *)aGStack_58);
    TGASecretStore::TGASecretStore(aTStack_d8);
    DString::DString((DString *)aGStack_58,5);
    pcVar3 = (char *)DString::c_str((DString *)aGStack_58);
    std::string::append((string *)aTStack_d8,pcVar3,(size_t)__n);
    DString::~DString((DString *)aGStack_58);
    DString::DString((DString *)aGStack_58,*(int *)(param_2 + 0x18));
    pcVar3 = (char *)DString::c_str((DString *)aGStack_58);
    std::string::append(asStack_d0,pcVar3,(size_t)__n);
    DString::~DString((DString *)aGStack_58);
    DString::DString((DString *)aGStack_58,*(int *)(param_2 + 0x1c));
    pcVar3 = (char *)DString::c_str((DString *)aGStack_58);
    std::string::append(asStack_c8,pcVar3,(size_t)__n);
    DString::~DString((DString *)aGStack_58);
    pTVar2 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGASecretStore::TGASecretStore((TGASecretStore *)aGStack_58,aTStack_d8);
    TGALogMgr::LogRenaissanceChallenge(pTVar2,aGStack_58);
    DropGroupNode::~DropGroupNode((DropGroupNode *)aGStack_58);
    DropGroupNode::~DropGroupNode((DropGroupNode *)aTStack_d8);
    TGAAnniversaryTreasureData::~TGAAnniversaryTreasureData(aTStack_a8);
    std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
              ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)avStack_f0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

