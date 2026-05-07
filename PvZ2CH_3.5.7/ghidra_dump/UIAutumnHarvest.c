// Class: UIAutumnHarvest


/* UIAutumnHarvest::ScrollTargetReached(Sexy::ScrollWidget*) */

void UIAutumnHarvest::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIAutumnHarvest::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall UIAutumnHarvest::ScrollTargetReached(UIAutumnHarvest *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x140));
  return;
}


/* UIAutumnHarvest::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UIAutumnHarvest::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIAutumnHarvest::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UIAutumnHarvest::ScrollTargetInterrupted(UIAutumnHarvest *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x140));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAutumnHarvest::GetLayoutName() */

void __thiscall UIAutumnHarvest::GetLayoutName(UIAutumnHarvest *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIAutumnHarvest");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIAutumnHarvest::CloseProbability() */

void __thiscall UIAutumnHarvest::CloseProbability(UIAutumnHarvest *this)

{
  if (*(long *)(this + 0x148) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0x148))
    ;
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x148));
    *(undefined8 *)(this + 0x148) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAutumnHarvest::OnShopBuyFinish(bool, S2C_ShopItemPurchaseInfo const*) */

void __thiscall
UIAutumnHarvest::OnShopBuyFinish
          (UIAutumnHarvest *this,bool param_1,S2C_ShopItemPurchaseInfo *param_2)

{
  NameMapperBase *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1) && (*(int *)(param_2 + 0x14) == 0xf)) {
    this_00 = (NameMapperBase *)MaterialItemMapper::GetInstance();
    std::string::string(asStack_10,"mat_autumn_harvest_ticket");
    NameMapperBase::GetIdForName(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAutumnHarvest::UpdateTimer() */

void __thiscall UIAutumnHarvest::UpdateTimer(UIAutumnHarvest *this)

{
  long lVar1;
  undefined8 uVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_ActivityTimeLeft");
  UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (*(long *)(this + 0x180) != 0) {
    lVar1 = LawnApp::GetRealServerTime(gLawnApp);
    lVar1 = *(long *)(this + 0x178) - lVar1;
    LawnApp::GetRealBeijingTime(gLawnApp);
    if ((lVar1 < 0x15181) && (lVar1 < 1)) {
      uVar2 = *(undefined8 *)(this + 0x180);
      std::string::string(asStack_18,"[CORNUCOPIA_ACTIVITY_TIME_OVER]");
      StringHelper::ToStringValue(asStack_18);
      PuzzleTip::SetTip(uVar2,asStack_10);
      FUN_05476c50(asStack_10);
      std::string::~string(asStack_18);
      nop();
    }
    else {
      uVar2 = *(undefined8 *)(this + 0x180);
      TimeUtil::GetTimeCountdownFormat((TimeUtil *)asStack_10,(float)lVar1,0);
      PuzzleTip::SetTip(uVar2,asStack_10);
      FUN_05476c50(asStack_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAutumnHarvest::Update() */

void __thiscall UIAutumnHarvest::Update(UIAutumnHarvest *this)

{
  DVec2 aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  UpdateTimer(this);
  if (*(long *)(this + 0x198) != 0) {
    DVec2::DVec2(aDStack_10,0.0,-30.0);
    Sexy::ScrollWidget::SetScrollVelocity(*(ScrollWidget **)(this + 0x198),(FPoint *)aDStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAutumnHarvest::SetExpireTimeType(int) */

void __thiscall UIAutumnHarvest::SetExpireTimeType(UIAutumnHarvest *this,int param_1)

{
  UIWidgetText *pUVar1;
  UIWidgetText *pUVar2;
  string asStack_10 [8];
  long local_8;
  
  *(int *)(this + 0x188) = param_1;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_ActivityTimeLeft");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIText_ShopTimeLeft");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (*(uint *)(this + 0x188) < 2) {
    (**(code **)(*(long *)pUVar1 + 0x158))(pUVar1,1);
    (**(code **)(*(long *)pUVar2 + 0x158))(pUVar2,0);
    *(UIWidgetText **)(this + 0x180) = pUVar1;
  }
  else if (*(uint *)(this + 0x188) == 2) {
    (**(code **)(*(long *)pUVar1 + 0x158))(pUVar1,0);
    (**(code **)(*(long *)pUVar2 + 0x158))(pUVar2,1);
    *(UIWidgetText **)(this + 0x180) = pUVar2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIAutumnHarvest::TabSelectionChanged(int) */

void __thiscall UIAutumnHarvest::TabSelectionChanged(UIAutumnHarvest *this,int param_1)

{
  if (param_1 == 1) {
    SetExpireTimeType(this,0);
    return;
  }
  if (param_1 != 3) {
    if (param_1 != 4) {
      return;
    }
    SetExpireTimeType(this,2);
    return;
  }
  SetExpireTimeType(this,1);
  return;
}


/* non-virtual thunk to UIAutumnHarvest::TabSelectionChanged(int) */

void __thiscall UIAutumnHarvest::TabSelectionChanged(UIAutumnHarvest *this,int param_1)

{
  TabSelectionChanged(this + -0x138,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAutumnHarvest::UpdateMaterial() */

void __thiscall UIAutumnHarvest::UpdateMaterial(UIAutumnHarvest *this)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  UIWidgetText *pUVar1;
  undefined4 local_1c;
  undefined4 local_18 [2];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  std::string::string(asStack_10,"mat_autumn_harvest_ticket");
  local_1c = PlayerInfo::GetMaterialNum(this_01,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"mat_autumn_harvest_supercorn");
  local_18[0] = PlayerInfo::GetMaterialNum(this_01,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIText_Ticket");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidgetText *)0x0) {
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_1c);
    UIWidgetText::SetString(pUVar1,asStack_10);
    std::string::~string(asStack_10);
  }
  std::string::string(asStack_10,"UIText_Currency");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidgetText *)0x0) {
    std::to_string<ActivityTypeID>((ActivityTypeID *)local_18);
    UIWidgetText::SetString(pUVar1,asStack_10);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAutumnHarvest::ShowProbability() */

void __thiscall UIAutumnHarvest::ShowProbability(UIAutumnHarvest *this)

{
  ActivityDescriptionUI *this_00;
  PlantWarsLevelSelectUI *pPVar1;
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x148) == 0) {
    this_00 = ::operator_new(0x128);
    ActivityDescriptionUI::ActivityDescriptionUI(this_00);
    *(ActivityDescriptionUI **)(this + 0x148) = this_00;
    TodStringTranslate(L"[AUTUMN_HARVEST_BONUS_PROBABILITY_DESC]");
    TodStringTranslate(L"[REVIVE_TIP]");
    ActivityDescriptionUI::InitView(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    FUN_05476c50(awStack_58);
    pPVar1 = *(PlantWarsLevelSelectUI **)(this + 0x148);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,CloseProbability);
    Sexy::Delegate0::Delegate0<UIAutumnHarvest,void(UIAutumnHarvest::*)()>(aDStack_38,awStack_50);
    PlantWarsLevelSelectUI::SetStartLevelCallBack(pPVar1,aDStack_38);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x148));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x148));
    LawnApp::PushOverlaysToTop(gLawnApp);
    Sexy::WidgetManager::AddBaseModal
              (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x148));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x148));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAutumnHarvest::ShowTips() */

void UIAutumnHarvest::ShowTips(void)

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
    iVar2 = FUN_04ebda84(0x28a);
    iVar3 = FUN_04ebda84(0x15e);
  }
  else {
    iVar2 = FUN_04ebda84(600);
    iVar3 = FUN_04ebda84(0x15e);
  }
  this = (PVZ2UIDialog *)
         LawnApp::ShowPVZ2Dialog(gLawnApp,(float)iVar2,(float)iVar3,(PVZ2UIDialog *)0x0);
  FUN_05478178(awStack_50,L"[PARTY_ASSIST_BONUS_TITLE]",auStack_58);
  PVZ2UIDialog::SetHeaderLabel(this,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05478178(awStack_50,L"[ACTIVITY_NEW_AUTUMN_HARVEST_MAIN_TIPS]",auStack_58);
  PVZ2UIDialog::SetFooterLabel(this,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  PVZ2UIDialog::SetFooterAlign(this,3);
  iVar2 = FUN_04ebda84(2);
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
/* UIAutumnHarvest::GachaForItems(int) */

void __thiscall UIAutumnHarvest::GachaForItems(UIAutumnHarvest *this,int param_1)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  UIMessageBox *pUVar3;
  long lVar4;
  Image *pIVar5;
  wstring awStack_68 [8];
  wstring awStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  std::string::string(asStack_50,"mat_autumn_harvest_ticket");
  iVar2 = PlayerInfo::GetMaterialNum(this_01,asStack_50);
  std::string::~string(asStack_50);
  nop();
  if (iVar2 < param_1) {
    pUVar3 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (pUVar3 != (UIMessageBox *)0x0) {
      UIMessageBox::SetShowType(pUVar3,4);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[MAT_AUTUMN_HARVEST_TICKET_NOT_ENOUGH]");
      TodStringTranslate(L"[BUTTON_OK]");
      UIMessageBox::SetMessage(pUVar3,awStack_60,awStack_68);
      std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar5 = (Image *)StringHelper::ToImage(asStack_50,false);
      UIMessageBox::SetBackground(pUVar3,pIVar5);
      std::string::~string(asStack_50);
      nop();
      lVar4 = UIMessageBox::GetButtonCancel(pUVar3);
      thunk_FUN_05477b9c(lVar4 + 0xd8,awStack_58);
      FUN_05476c50(awStack_58);
      FUN_05476c50(awStack_60);
      FUN_05476c50(awStack_68);
    }
  }
  else {
    *(int *)(this + 0x150) = param_1;
    pUVar3 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    lVar4 = Sexy::LazySingleton<AutumnHarvestMgr>::GetInstancePtr();
    cVar1 = FUN_04ebbd04(*(undefined1 *)(lVar4 + 0x121));
    if (cVar1 == '\0') {
      if (pUVar3 != (UIMessageBox *)0x0) {
        UIMessageBox::SetShowType(pUVar3,6);
        TodStringTranslate(L"[REVIVE_TIP]");
        Sexy::StrFormat(L"%d",awStack_60,(ulong)(uint)param_1);
        TodStringTranslate(L"[AUTUMN_HARVEST_GACHA_CONFIRM]");
        TodReplaceString((wstring *)asStack_50,L"{NUMS}",awStack_60);
        FUN_05476c50(asStack_50);
        UIMessageBox::SetMessage(pUVar3,awStack_58,awStack_68);
        std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_ROUND_GREEN");
        pIVar5 = (Image *)StringHelper::ToImage(asStack_50,false);
        UIMessageBox::SetBackground(pUVar3,pIVar5);
        std::string::~string(asStack_50);
        nop();
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,GachaConfirm);
        Sexy::Delegate2<UIMessageBox*,int>::
        Delegate2<UIAutumnHarvest,void(UIAutumnHarvest::*)(UIMessageBox*,int)>
                  (aDStack_38,asStack_50);
        UIMessageBox::SetCallback(pUVar3,aDStack_38);
        FUN_05476c50(awStack_58);
        FUN_05476c50(awStack_60);
        FUN_05476c50(awStack_68);
      }
    }
    else {
      UIMessageBox::SetShowType(pUVar3,4);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[AUTUMN_HARVEST_SELECT_BONUS_FIRST_TIPS]");
      TodStringTranslate(L"[BUTTON_OK]");
      UIMessageBox::SetMessage(pUVar3,awStack_60,awStack_68);
      std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar5 = (Image *)StringHelper::ToImage(asStack_50,false);
      UIMessageBox::SetBackground(pUVar3,pIVar5);
      std::string::~string(asStack_50);
      nop();
      lVar4 = UIMessageBox::GetButtonCancel(pUVar3);
      thunk_FUN_05477b9c(lVar4 + 0xd8,awStack_58);
      FUN_05476c50(awStack_58);
      FUN_05476c50(awStack_60);
      FUN_05476c50(awStack_68);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIAutumnHarvest::UIAutumnHarvest() */

void __thiscall UIAutumnHarvest::UIAutumnHarvest(UIAutumnHarvest *this)

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
  
  UISingletonDialog<UIAutumnHarvest>::UISingletonDialog((UISingletonDialog<UIAutumnHarvest> *)this);
  UI::TabControlListener::TabControlListener((TabControlListener *)(this + 0x138));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x140));
  *(undefined ***)this = &PTR_GetClass_069f5880;
  *(undefined **)(this + 0xd8) = &DAT_069f5be8;
  *(undefined **)(this + 0x138) = &DAT_069f5c30;
  *(undefined ***)(this + 0x140) = &PTR__UIAutumnHarvest_069f5c48;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x158));
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnShopBuyFinish);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<bool,S2C_ShopItemPurchaseInfo_const*,Sexy::CBMemberTranslatorX<UIAutumnHarvest,void(UIAutumnHarvest::*)(bool,S2C_ShopItemPurchaseInfo_const*)>>
            ((MessageRouter *)puVar1,Message::NotifyShopBuyFinishDetails,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,NotifyRefreshActivityList);
  local_60 = local_8;
  local_70 = local_18;
  uStack_68 = uStack_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<UIAutumnHarvest,void(UIAutumnHarvest::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_70);
  return;
}


/* UIAutumnHarvest::~UIAutumnHarvest() */

void __thiscall UIAutumnHarvest::~UIAutumnHarvest(UIAutumnHarvest *this)

{
  *(undefined ***)this = &PTR_GetClass_069f5880;
  *(undefined ***)(this + 0x140) = &PTR__UIAutumnHarvest_069f5c48;
  *(undefined **)(this + 0xd8) = &DAT_069f5be8;
  *(undefined **)(this + 0x138) = &DAT_069f5c30;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x158));
  UISingletonDialog<UIAutumnHarvest>::~UISingletonDialog((UISingletonDialog<UIAutumnHarvest> *)this)
  ;
  return;
}


/* non-virtual thunk to UIAutumnHarvest::~UIAutumnHarvest() */

void __thiscall UIAutumnHarvest::~UIAutumnHarvest(UIAutumnHarvest *this)

{
  ~UIAutumnHarvest(this + -0x140);
  return;
}


/* UIAutumnHarvest::~UIAutumnHarvest() */

void __thiscall UIAutumnHarvest::~UIAutumnHarvest(UIAutumnHarvest *this)

{
  ~UIAutumnHarvest(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIAutumnHarvest::~UIAutumnHarvest() */

void __thiscall UIAutumnHarvest::~UIAutumnHarvest(UIAutumnHarvest *this)

{
  ~UIAutumnHarvest(this + -0x140);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAutumnHarvest::InitPresent(AutumnHarvestNetworkData const&) */

void __thiscall
UIAutumnHarvest::InitPresent(UIAutumnHarvest *this,AutumnHarvestNetworkData *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  UIWidgetImage *pUVar6;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  AutumnHarvestBundleWidget *this_02;
  vector *pvVar7;
  int *piVar8;
  ulong uVar9;
  code *pcVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  undefined8 uVar14;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar13 = 0;
  std::string::string(asStack_18,"UIImage_Present_Background");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  (**(code **)(*(long *)pUVar6 + 0x80))(pUVar6,1,1);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x140));
  iVar2 = FUN_04ebda84(10);
  iVar3 = FUN_04ebda84(0x14);
  Sexy::Insets::Insets
            ((Insets *)asStack_18,iVar2,iVar2,*(int *)(pUVar6 + 0x50) - iVar3,
             *(int *)(pUVar6 + 0x54) - iVar3);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,asStack_18);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,1);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  iVar3 = FUN_04ebda84(10);
  iVar4 = FUN_04ebda84(0xb4);
  uVar1 = *(undefined4 *)(this_01 + 0x54);
  iVar5 = FUN_04ebda84(0);
  iVar2 = iVar5;
  while( true ) {
    iVar12 = (int)uVar13;
    uVar9 = FUN_04ebc220(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
    if (uVar9 <= uVar13) break;
    this_02 = ::operator_new(0xf8);
    AutumnHarvestBundleWidget::AutumnHarvestBundleWidget(this_02);
    (**(code **)(*(long *)this_02 + 0x198))(this_02,iVar2,iVar5,iVar4,uVar1);
    pvVar7 = (vector *)FUN_04ebc234(*(undefined8 *)(param_1 + 0x48),uVar13);
    uVar14 = *(undefined8 *)(param_1 + 0x60);
    uVar9 = FUN_04ebbd40(uVar14,*(undefined8 *)(param_1 + 0x68));
    iVar11 = 0;
    if (uVar13 < uVar9) {
      piVar8 = (int *)FUN_04ebbd4c(uVar14,uVar13);
      iVar11 = *piVar8;
    }
    uVar13 = uVar13 + 1;
    iVar2 = iVar2 + iVar3 + iVar4;
    AutumnHarvestBundleWidget::InitView(this_02,iVar12,pvVar7,iVar11);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
  }
  pcVar10 = *(code **)(*(long *)this_00 + 0x60);
  *(int *)(this_01 + 0x50) = (iVar5 * 2 - iVar3) + (iVar3 + iVar4) * (int)uVar9;
  (*pcVar10)(this_00,this_01);
  (**(code **)(*(long *)pUVar6 + 0x60))(pUVar6,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAutumnHarvest::InitShopWidgets(AutumnHarvestNetworkData const&) */

void __thiscall
UIAutumnHarvest::InitShopWidgets(UIAutumnHarvest *this,AutumnHarvestNetworkData *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  AutumnHarvestShopWidget *this_02;
  undefined8 *puVar7;
  undefined4 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined4 uVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  undefined8 uVar15;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"Widget_Shop");
  uVar12 = 0;
  iVar13 = 0;
  plVar6 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  (**(code **)(*plVar6 + 0x80))(plVar6,1,1);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x140));
  iVar1 = FUN_04ebda84(0);
  Sexy::Insets::Insets
            ((Insets *)asStack_18,iVar1,iVar1,(int)plVar6[10] - iVar1,
             *(int *)((long)plVar6 + 0x54) - iVar1);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,asStack_18);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  iVar1 = FUN_04ebda84(0x11);
  iVar2 = FUN_04ebda84(0x14);
  iVar3 = FUN_04ebda84(0x96);
  iVar4 = FUN_04ebda84(0xaf);
  iVar5 = FUN_04ebda84(0);
  while( true ) {
    uVar14 = uVar12 & 0xffffffff;
    uVar9 = FUN_04ebc190(*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80));
    if (uVar9 <= uVar12) break;
    this_02 = ::operator_new(0x110);
    AutumnHarvestShopWidget::AutumnHarvestShopWidget(this_02);
    (**(code **)(*(long *)this_02 + 0x198))
              (this_02,iVar5 + (iVar3 + iVar1) * ((uint)uVar12 & 3),
               iVar5 + (iVar4 + iVar2) * ((int)(uint)uVar12 >> 2),iVar3,iVar4);
    puVar7 = (undefined8 *)FUN_04ebc1c0(*(undefined8 *)(param_1 + 0x78),uVar12);
    uVar15 = *(undefined8 *)(param_1 + 0x90);
    uVar9 = FUN_04ebbd40(uVar15,*(undefined8 *)(param_1 + 0x98));
    uVar11 = 0;
    if (uVar12 < uVar9) {
      puVar8 = (undefined4 *)FUN_04ebbd4c(uVar15,uVar12);
      uVar11 = *puVar8;
    }
    uVar12 = uVar12 + 1;
    AutumnHarvestShopWidget::InitView(this_02,uVar14,*puVar7,*(undefined4 *)(puVar7 + 1),uVar11);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
    iVar13 = *(int *)(this_02 + 0x4c) + *(int *)(this_02 + 0x54);
  }
  lVar10 = *(long *)this_00;
  *(int *)(this_01 + 0x54) = iVar13;
  (**(code **)(lVar10 + 0x60))(this_00,this_01);
  (**(code **)(*plVar6 + 0x60))(plVar6,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAutumnHarvest::InitRewardPlayer() */

void __thiscall UIAutumnHarvest::InitRewardPlayer(UIAutumnHarvest *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  AutumnHarvestNetworkData *pAVar6;
  Widget *this_01;
  UIWidgetText *this_02;
  long lVar7;
  GridItemWaterMist *this_03;
  code *pcVar8;
  PVZ2UIScrollingWidget *this_04;
  long lVar9;
  float fVar10;
  undefined1 auVar11 [16];
  wstring awStack_1a0 [8];
  wstring awStack_198 [8];
  wstring awStack_190 [8];
  Insets aIStack_188 [16];
  Insets aIStack_178 [16];
  Color aCStack_168 [16];
  GAME_ITEM_INFO aGStack_158 [40];
  wstring awStack_130 [8];
  string asStack_128 [216];
  undefined8 local_50;
  undefined8 local_48;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_128,"UIImage_RewardPlayer");
  plVar5 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_128);
  std::string::~string(asStack_128);
  nop();
  this_04 = *(PVZ2UIScrollingWidget **)(this + 0x198);
  if (this_04 == (PVZ2UIScrollingWidget *)0x0) {
    this_04 = ::operator_new(0x248);
    PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_04,(ScrollWidgetListener *)(this + 0x140));
    *(PVZ2UIScrollingWidget **)(this + 0x198) = this_04;
  }
  else {
    (**(code **)(*(long *)this_04 + 0x80))(this_04,1,1);
  }
  iVar1 = FUN_04ebda84(10);
  iVar2 = FUN_04ebda84(0x14);
  iVar3 = FUN_04ebbc10((int)plVar5[10]);
  iVar4 = FUN_04ebbc14(*(undefined4 *)((long)plVar5 + 0x54));
  Sexy::Insets::Insets(aIStack_188,iVar1,iVar2,iVar3 - iVar2,iVar4 - iVar2);
  (**(code **)(*(long *)this_04 + 0x1a0))(this_04,aIStack_188);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_04,2);
  (**(code **)(*plVar5 + 0x60))(plVar5,this_04);
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<AutumnHarvestMgr>::GetInstancePtr();
  pAVar6 = (AutumnHarvestNetworkData *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_00);
  AutumnHarvestNetworkData::AutumnHarvestNetworkData((AutumnHarvestNetworkData *)asStack_128,pAVar6)
  ;
  iVar1 = FUN_04ebc160(local_50,local_48);
  iVar2 = FUN_04ebda84(5);
  iVar3 = FUN_04ebbc10((int)plVar5[10]);
  iVar4 = FUN_04ebda84(0x28);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))(this_01,0,0,iVar3,iVar2 + iVar4 * iVar1);
  (**(code **)(*(long *)this_04 + 0x60))(this_04,this_01);
  if (0 < iVar1) {
    iVar2 = 0;
    lVar9 = 0;
    do {
      Sexy::Insets::Insets(aIStack_178,0,iVar2,iVar3,iVar4);
      auVar11 = FUN_04ebc188(local_50,lVar9);
      Sexy::UTF8StringToWString(auVar11._0_8_,auVar11._8_8_);
      FUN_05478178(awStack_198,&DAT_056f11a8,aGStack_158);
      nop();
      lVar7 = FUN_04ebc188(local_50,lVar9);
      GetGameItemInfo(*(int *)(lVar7 + 8),0x7fffffff,0);
      lVar7 = FUN_04ebc188(local_50,lVar9);
      if (*(int *)(lVar7 + 0xc) < 2) {
        TodStringTranslate(L"[AUTUMN_HARVEST_REWARD_PLAYER_DESC]");
        TodReplaceString(awStack_190,L"{NAME}",awStack_1a0);
        FUN_054766c8(awStack_198,aCStack_168);
        FUN_05476c50(aCStack_168);
        FUN_05476c50(awStack_190);
        TodReplaceString(awStack_198,L"{ITEM}",awStack_130);
        FUN_054766c8(awStack_198,aCStack_168);
        FUN_05476c50(aCStack_168);
      }
      else {
        TodStringTranslate(L"[AUTUMN_HARVEST_REWARD_PLAYER_WITH_ITEMCOUNT_DESC]");
        TodReplaceString(awStack_190,L"{NAME}",awStack_1a0);
        FUN_054766c8(awStack_198,aCStack_168);
        FUN_05476c50(aCStack_168);
        FUN_05476c50(awStack_190);
        TodReplaceString(awStack_198,L"{ITEM}",awStack_130);
        FUN_054766c8(awStack_198,aCStack_168);
        FUN_05476c50(aCStack_168);
        lVar7 = FUN_04ebc188(local_50,lVar9);
        Sexy::StrFormat(L"%d",awStack_190,(ulong)*(uint *)(lVar7 + 0xc));
        TodReplaceString(awStack_198,L"{NUMS}",awStack_190);
        FUN_054766c8(awStack_198,aCStack_168);
        FUN_05476c50(aCStack_168);
        FUN_05476c50(awStack_190);
      }
      lVar9 = lVar9 + 1;
      iVar2 = iVar2 + iVar4;
      this_02 = ::operator_new(0x108);
      UIWidgetText::UIWidgetText(this_02,awStack_198);
      (**(code **)(*(long *)this_02 + 0x1a0))(this_02,aIStack_178);
      pcVar8 = *(code **)(*(long *)this_02 + 0x170);
      Sexy::Color::Color(aCStack_168,1);
      (*pcVar8)(this_02,0,aCStack_168);
      FUN_04ebbd14(this_02 + 0xe8,PrimeText_Game::Typeface_FZCuYuan_20);
      (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
      GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_158);
      FUN_05476c50(awStack_198);
      FUN_05476c50(awStack_1a0);
    } while ((int)lVar9 < iVar1);
  }
  if (*(long *)(this + 0x198) != 0) {
    DVec2::DVec2((DVec2 *)aGStack_158,0.0,-30.0);
    Sexy::ScrollWidget::SetScrollVelocity(*(ScrollWidget **)(this + 0x198),(FPoint *)aGStack_158);
    this_03 = *(GridItemWaterMist **)(this + 0x198);
    fVar10 = (float)PVZ_RealDt();
    GridItemWaterMist::SetExtraAttackRate(this_03,fVar10);
  }
  AutumnHarvestNetworkData::~AutumnHarvestNetworkData((AutumnHarvestNetworkData *)asStack_128);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAutumnHarvest::InitGachaButtons() */

void __thiscall UIAutumnHarvest::InitGachaButtons(UIAutumnHarvest *this)

{
  bool bVar1;
  PVZ2UIButton *pPVar2;
  PVZ2UIButton *pPVar3;
  undefined8 *puVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  AutumnHarvestNetworkData *pAVar5;
  PVZ2UIButton *pPVar6;
  undefined8 local_130;
  undefined8 local_128 [35];
  undefined1 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)local_128,"UIButton_Gacha_One");
  pPVar2 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)local_128);
  std::string::~string((string *)local_128);
  nop();
  local_130 = FUN_04ebfe60(*(undefined8 *)(pPVar2 + 8));
  local_128[0] = std::
                 __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                           ((TaskResource **)(pPVar2 + 8));
  while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_130,(rbtree_iterator *)local_128),
        bVar1) {
    puVar4 = (undefined8 *)
             std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                       ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_130);
    pPVar3 = (PVZ2UIButton *)*puVar4;
    if (pPVar3 != pPVar2) {
      *(uint *)(pPVar3 + 0x60) = *(uint *)(pPVar3 + 0x60) | 0x10;
    }
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_130);
  }
  std::string::string((string *)local_128,"UIButton_Gacha_Ten");
  pPVar3 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)local_128);
  std::string::~string((string *)local_128);
  nop();
  local_130 = FUN_04ebfe60(*(undefined8 *)(pPVar3 + 8));
  local_128[0] = std::
                 __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                           ((TaskResource **)(pPVar3 + 8));
  while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_130,(rbtree_iterator *)local_128),
        bVar1) {
    puVar4 = (undefined8 *)
             std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                       ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_130);
    pPVar6 = (PVZ2UIButton *)*puVar4;
    if (pPVar6 != pPVar3) {
      *(uint *)(pPVar6 + 0x60) = *(uint *)(pPVar6 + 0x60) | 0x10;
    }
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_130);
  }
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<AutumnHarvestMgr>::GetInstancePtr();
  pAVar5 = (AutumnHarvestNetworkData *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_00);
  AutumnHarvestNetworkData::AutumnHarvestNetworkData((AutumnHarvestNetworkData *)local_128,pAVar5);
  (**(code **)(*(long *)pPVar2 + 0x188))(pPVar2,local_10);
  (**(code **)(*(long *)pPVar3 + 0x188))(pPVar3,local_10);
  AutumnHarvestNetworkData::~AutumnHarvestNetworkData((AutumnHarvestNetworkData *)local_128);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAutumnHarvest::RefreshMaterial() */

void __thiscall UIAutumnHarvest::RefreshMaterial(UIAutumnHarvest *this)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  AutumnHarvestNetworkData *pAVar1;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  UIWidgetText *pUVar2;
  int *piVar3;
  undefined1 auStack_140 [8];
  wstring awStack_138 [8];
  string asStack_130 [8];
  AutumnHarvestNetworkData aAStack_128 [240];
  int local_38;
  int local_34 [3];
  undefined8 local_28;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<AutumnHarvestMgr>::GetInstancePtr();
  pAVar1 = (AutumnHarvestNetworkData *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_00);
  AutumnHarvestNetworkData::AutumnHarvestNetworkData(aAStack_128,pAVar1);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  std::string::string(asStack_130,"mat_autumn_harvest_ticket");
  PlayerInfo::SetMaterialNum(this_02,asStack_130,local_38);
  std::string::~string(asStack_130);
  nop();
  std::string::string(asStack_130,"mat_autumn_harvest_supercorn");
  PlayerInfo::SetMaterialNum(this_02,asStack_130,local_34[0]);
  std::string::~string(asStack_130);
  nop();
  std::string::string(asStack_130,"UIText_Ticket");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_130);
  std::string::~string(asStack_130);
  nop();
  if (pUVar2 != (UIWidgetText *)0x0) {
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_38);
    UIWidgetText::SetString(pUVar2,asStack_130);
    std::string::~string(asStack_130);
  }
  std::string::string(asStack_130,"UIText_Currency");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_130);
  std::string::~string(asStack_130);
  nop();
  if (pUVar2 != (UIWidgetText *)0x0) {
    std::to_string<ActivityTypeID>((ActivityTypeID *)local_34);
    UIWidgetText::SetString(pUVar2,asStack_130);
    std::string::~string(asStack_130);
  }
  std::string::string(asStack_130,"UIText_HarvestTips");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_130);
  std::string::~string(asStack_130);
  nop();
  if (pUVar2 != (UIWidgetText *)0x0) {
    FUN_05478178(asStack_130,L"[AUTUMN_HARVEST_TIPS_DESC]",auStack_140);
    piVar3 = (int *)FUN_04ebc158(local_28,0);
    TodReplaceNumberString((wstring *)asStack_130,L"{NUMS}",*piVar3);
    FUN_05476c50(asStack_130);
    nop();
    piVar3 = (int *)FUN_04ebc158(local_28,1);
    TodReplaceNumberString(awStack_138,L"{NUMS_2}",*piVar3);
    FUN_054766c8(awStack_138,asStack_130);
    FUN_05476c50(asStack_130);
    PuzzleTip::SetTip(pUVar2,awStack_138);
    FUN_05476c50(awStack_138);
  }
  AutumnHarvestNetworkData::~AutumnHarvestNetworkData(aAStack_128);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIAutumnHarvest::UpdateShopUI(AutumnHarvestNetworkData const&) */

void __thiscall
UIAutumnHarvest::UpdateShopUI(UIAutumnHarvest *this,AutumnHarvestNetworkData *param_1)

{
  InitShopWidgets(this,param_1);
  RefreshMaterial(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAutumnHarvest::RequestGachaItems(int) */

void __thiscall UIAutumnHarvest::RequestGachaItems(UIAutumnHarvest *this,int param_1)

{
  string *psVar1;
  DNetwork *this_00;
  char *__s;
  string *psVar2;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [3240];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  psVar2 = asStack_d40;
  std::string::string(asStack_ce8,"t");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_ce8);
  if (param_1 < 2) {
    __s = "1";
  }
  else {
    __s = "2";
  }
  std::string::append(psVar1,__s,(size_t)psVar2);
  std::string::~string(asStack_ce8);
  nop();
  psVar2 = asStack_d40;
  std::string::string(asStack_ce8,"pk");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_ce8);
  std::string::append(psVar1,"",(size_t)psVar2);
  std::string::~string(asStack_ce8);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_04ebd914(afStack_d38,this,param_1);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_40,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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


/* UIAutumnHarvest::GachaConfirm(UIMessageBox*, int) */

void __thiscall
UIAutumnHarvest::GachaConfirm(UIAutumnHarvest *this,UIMessageBox *param_1,int param_2)

{
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 != 1) {
    return;
  }
  RequestGachaItems(this,*(int *)(this + 0x150));
  return;
}


/* UIAutumnHarvest::ButtonDepress(int) */

void __thiscall UIAutumnHarvest::ButtonDepress(UIAutumnHarvest *this,int param_1)

{
  UIAutumnHarvestTurnPagesList *this_00;
  
  switch(param_1) {
  case 1000:
    UISingletonDialog<UIAutumnHarvest>::CloseDialog();
    return;
  case 0x3e9:
    ShowProbability(this);
    return;
  case 0x3ea:
    this_00 = (UIAutumnHarvestTurnPagesList *)
              UISingletonDialog<UIAutumnHarvestTurnPagesList>::ShowDialog();
    UIAutumnHarvestTurnPagesList::RequestPage(this_00,0);
    return;
  case 0x3eb:
    GachaForItems(this,1);
    return;
  case 0x3ec:
    GachaForItems(this,9);
    return;
  case 0x3ed:
    ShowTips();
    return;
  default:
    return;
  }
}


/* non-virtual thunk to UIAutumnHarvest::ButtonDepress(int) */

void __thiscall UIAutumnHarvest::ButtonDepress(UIAutumnHarvest *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAutumnHarvest::InitRoutelle() */

void __thiscall UIAutumnHarvest::InitRoutelle(UIAutumnHarvest *this)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  AutumnHarvestNetworkData *pAVar4;
  AutumnHarvestLotteryPanel *this_01;
  Insets aIStack_138 [16];
  string asStack_128 [168];
  vector avStack_80 [120];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_128,"UIImage_RoulettePanel");
  plVar3 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_128);
  std::string::~string(asStack_128);
  nop();
  iVar1 = FUN_04ebda84(0x14);
  iVar2 = FUN_04ebda84(0x28);
  Sexy::Insets::Insets
            (aIStack_138,iVar1,iVar1,(int)plVar3[10] - iVar2,*(int *)((long)plVar3 + 0x54) - iVar2);
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<AutumnHarvestMgr>::GetInstancePtr();
  pAVar4 = (AutumnHarvestNetworkData *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_00);
  AutumnHarvestNetworkData::AutumnHarvestNetworkData((AutumnHarvestNetworkData *)asStack_128,pAVar4)
  ;
  this_01 = ::operator_new(0x188);
  AutumnHarvestLotteryPanel::AutumnHarvestLotteryPanel(this_01);
  *(AutumnHarvestLotteryPanel **)(this + 400) = this_01;
  (**(code **)(*(long *)this_01 + 0x1a0))(this_01,aIStack_138);
  AutumnHarvestLotteryPanel::InitView(*(AutumnHarvestLotteryPanel **)(this + 400),avStack_80);
  (**(code **)(*plVar3 + 0x60))(plVar3,*(undefined8 *)(this + 400));
  AutumnHarvestNetworkData::~AutumnHarvestNetworkData((AutumnHarvestNetworkData *)asStack_128);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAutumnHarvest::OnCreate() */

void __thiscall UIAutumnHarvest::OnCreate(UIAutumnHarvest *this)

{
  int iVar1;
  Widget *pWVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  AutumnHarvestNetworkData *pAVar3;
  UITabControl *this_01;
  char *__s;
  TGALogMgr *this_02;
  DString *__n;
  DString aDStack_1f0 [16];
  string asStack_1e0 [24];
  undefined1 auStack_1c8 [8];
  undefined1 auStack_1c0 [24];
  ActiveItem aAStack_1a8 [80];
  undefined8 local_158;
  string asStack_128 [240];
  uint local_38;
  uint local_34;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_128,"Background_0");
  pWVar2 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_128);
  std::string::~string(asStack_128);
  nop();
  UI::Dialog::SetCenter((Dialog *)this,pWVar2,true);
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<AutumnHarvestMgr>::GetInstancePtr();
  pAVar3 = (AutumnHarvestNetworkData *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_00);
  AutumnHarvestNetworkData::AutumnHarvestNetworkData((AutumnHarvestNetworkData *)asStack_128,pAVar3)
  ;
  InitRoutelle(this);
  InitGachaButtons(this);
  InitRewardPlayer(this);
  InitPresent(this,(AutumnHarvestNetworkData *)asStack_128);
  InitShopWidgets(this,(AutumnHarvestNetworkData *)asStack_128);
  RefreshMaterial(this);
  iVar1 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar1);
  *(undefined8 *)(this + 0x178) = local_158;
  __n = aDStack_1f0;
  std::string::string(asStack_1e0,"UITabControl_0");
  this_01 = UI::Dialog::GetWidget<UITabControl>((Dialog *)this,asStack_1e0);
  std::string::~string(asStack_1e0);
  nop();
  if (this_01 != (UITabControl *)0x0) {
    UITabControl::SetListener(this_01,(TabControlListener *)(this + 0x138));
  }
  SetExpireTimeType(this,0);
  TGALuckyChestData::TGALuckyChestData((TGALuckyChestData *)asStack_1e0);
  DString::DString(aDStack_1f0,1);
  __s = (char *)DString::c_str(aDStack_1f0);
  std::string::append(asStack_1e0,__s,(size_t)__n);
  DString::~DString(aDStack_1f0);
  Sexy::StrFormat("%d, %d, %d",aDStack_1f0,(ulong)local_38,0);
  FUN_05474278(auStack_1c8,aDStack_1f0);
  std::string::~string((string *)aDStack_1f0);
  Sexy::StrFormat("%d, %d, %d",aDStack_1f0,(ulong)local_34,0);
  FUN_05474278(auStack_1c0,aDStack_1f0);
  std::string::~string((string *)aDStack_1f0);
  this_02 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogAutumnHarvest(this_02,(TGAAutumnHarvestData *)asStack_1e0);
  TGALuckyChestData::~TGALuckyChestData((TGALuckyChestData *)asStack_1e0);
  ActiveItem::~ActiveItem(aAStack_1a8);
  AutumnHarvestNetworkData::~AutumnHarvestNetworkData((AutumnHarvestNetworkData *)asStack_128);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* UIAutumnHarvest::UpdateRoutelle(AutumnHarvestNetworkData const&) */

void __thiscall
UIAutumnHarvest::UpdateRoutelle(UIAutumnHarvest *this,AutumnHarvestNetworkData *param_1)

{
  AutumnHarvestLotteryPanel::UpdatePanel(*(AutumnHarvestLotteryPanel **)(this + 400),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAutumnHarvest::NotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
UIAutumnHarvest::NotifyRefreshActivityList(UIAutumnHarvest *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  AutumnHarvestMgr *this_00;
  int local_1b4;
  undefined8 local_1b0;
  ActiveItem aAStack_1a8 [8];
  undefined4 local_1a0;
  char local_190;
  undefined8 local_128 [36];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_1b4 = 0x2a8b;
    local_1b0 = std::set<int,std::less<int>,std::allocator<int>>::find
                          ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1b4);
    local_128[0] = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_1b0,(rbtree_iterator *)local_128);
    if (bVar1) {
      iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar3);
      cVar2 = FUN_04ebbd08(local_1a0);
      if ((cVar2 != '\0') && (local_190 != '\0')) {
        AutumnHarvestNetworkData::AutumnHarvestNetworkData((AutumnHarvestNetworkData *)local_128);
        cVar2 = ActiveItem::GetDataSerialized(aAStack_1a8,(RtObject *)local_128);
        if (cVar2 != '\0') {
          this_00 = (AutumnHarvestMgr *)Sexy::LazySingleton<AutumnHarvestMgr>::GetInstancePtr();
          AutumnHarvestMgr::LoadData(this_00,(AutumnHarvestNetworkData *)local_128);
          UpdateShopUI(this,(AutumnHarvestNetworkData *)local_128);
          UpdateRoutelle(this,(AutumnHarvestNetworkData *)local_128);
        }
        AutumnHarvestNetworkData::~AutumnHarvestNetworkData((AutumnHarvestNetworkData *)local_128);
      }
      ActiveItem::~ActiveItem(aAStack_1a8);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

