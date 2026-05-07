// Class: UILimitGroupBuy


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitGroupBuy::GetLayoutName() */

void __thiscall UILimitGroupBuy::GetLayoutName(UILimitGroupBuy *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UILimitGroupBuy");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UILimitGroupBuy::CloseVotedDisplay() */

void __thiscall UILimitGroupBuy::CloseVotedDisplay(UILimitGroupBuy *this)

{
  if (*(long *)(this + 0x1c0) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0x1c0))
    ;
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x1c0));
    *(undefined8 *)(this + 0x1c0) = 0;
  }
  return;
}


/* UILimitGroupBuy::Refresh(bool) */

void __thiscall UILimitGroupBuy::Refresh(UILimitGroupBuy *this,bool param_1)

{
  long lVar1;
  ActivityManager *this_00;
  
  if (param_1) {
    lVar1 = UISingletonDialog<UILimitGroupBuyNotice>::GetSingletonPtr();
    if (lVar1 != 0) {
      UISingletonDialog<UILimitGroupBuyNotice>::CloseDialog();
    }
    lVar1 = UISingletonDialog<UILimitGroupBuyDiscount>::GetSingletonPtr();
    if (lVar1 != 0) {
      UISingletonDialog<UILimitGroupBuyDiscount>::CloseDialog();
    }
    lVar1 = UISingletonDialog<UILimitGroupBuyConfirm>::GetSingletonPtr();
    if (lVar1 != 0) {
      UISingletonDialog<UILimitGroupBuyConfirm>::CloseDialog();
    }
    lVar1 = UISingletonDialog<UIMessageBox>::ShowDialog();
    if (lVar1 != 0) {
      UISingletonDialog<UIMessageBox>::CloseDialog();
    }
  }
  this_00 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this_00,0x29e8,true,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitGroupBuy::UpdateTicket() */

void __thiscall UILimitGroupBuy::UpdateTicket(UILimitGroupBuy *this)

{
  UIWidgetText *this_00;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  undefined4 local_18 [2];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_Ticket");
  this_00 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this_00 != (UIWidgetText *)0x0) {
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    local_18[0] = PlayerInfo::GetMaterialNum(this_02,0xbc2);
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


/* UILimitGroupBuy::UILimitGroupBuy() */

void __thiscall UILimitGroupBuy::UILimitGroupBuy(UILimitGroupBuy *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UISingletonDialog<UILimitGroupBuy>::UISingletonDialog((UISingletonDialog<UILimitGroupBuy> *)this);
  *(undefined ***)this = &PTR_GetClass_066ed090;
  *(undefined **)(this + 0xd8) = &DAT_066ed3e0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x140));
  LimitGroupBuyInfo::LimitGroupBuyInfo((LimitGroupBuyInfo *)(this + 0x158));
  *(undefined8 *)(this + 0x1c0) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyRefresh);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<UILimitGroupBuy,void(UILimitGroupBuy::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_40);
  std::vector<LimitGroupBuyGridItem*,std::allocator<LimitGroupBuyGridItem*>>::clear
            ((vector<LimitGroupBuyGridItem*,std::allocator<LimitGroupBuyGridItem*>> *)(this + 0x140)
            );
  return;
}


/* UILimitGroupBuy::~UILimitGroupBuy() */

void __thiscall UILimitGroupBuy::~UILimitGroupBuy(UILimitGroupBuy *this)

{
  *(undefined ***)this = &PTR_GetClass_066ed090;
  *(undefined **)(this + 0xd8) = &DAT_066ed3e0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  LimitGroupBuyInfo::~LimitGroupBuyInfo((LimitGroupBuyInfo *)(this + 0x158));
  std::vector<LimitGroupBuyGridItem*,std::allocator<LimitGroupBuyGridItem*>>::~vector
            ((vector<LimitGroupBuyGridItem*,std::allocator<LimitGroupBuyGridItem*>> *)(this + 0x140)
            );
  UISingletonDialog<UILimitGroupBuy>::~UISingletonDialog((UISingletonDialog<UILimitGroupBuy> *)this)
  ;
  return;
}


/* UILimitGroupBuy::~UILimitGroupBuy() */

void __thiscall UILimitGroupBuy::~UILimitGroupBuy(UILimitGroupBuy *this)

{
  ~UILimitGroupBuy(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitGroupBuy::InitView() */

void __thiscall UILimitGroupBuy::InitView(UILimitGroupBuy *this)

{
  vector<LimitGroupBuyGridItem*,std::allocator<LimitGroupBuyGridItem*>> *this_00;
  long lVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  Widget *pWVar8;
  UIWidgetImage *this_01;
  Image *pIVar9;
  ulong uVar10;
  LimitGroupBuyGridItem *pLVar11;
  LimitGroupBuyItemInfo *pLVar12;
  undefined8 *puVar13;
  PVZ2UIButton *this_02;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  LimitGroupBuyGridItem *local_20;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar5 = FUN_039c2d44(10);
  iVar6 = FUN_039c2d44(5);
  iVar7 = FUN_039c2d44(0);
  std::string::string(asStack_18,"Widget_Panel");
  pWVar8 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  iVar2 = *(int *)(pWVar8 + 0x50) + iVar5 * -2 + iVar6 * -3;
  iVar3 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  iVar3 = iVar3 >> 2;
  iVar2 = (*(int *)(pWVar8 + 0x54) + iVar6 * -3) / 2;
  std::string::string(asStack_18,"UIImage_Banner");
  this_01 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  Sexy::StrFormat("IMAGE_UI_LIMITGROUPBUY_BANNER_1_%d",asStack_18,(ulong)*(uint *)(this + 0x1bc));
  pIVar9 = (Image *)StringHelper::ToImage(asStack_18,false);
  UIWidgetImage::SetImage(this_01,pIVar9);
  std::string::~string(asStack_18);
  cVar4 = std::vector<LimitGroupBuyItemInfo,std::allocator<LimitGroupBuyItemInfo>>::empty
                    ((vector<LimitGroupBuyItemInfo,std::allocator<LimitGroupBuyItemInfo>> *)
                     (this + 0x188));
  if (cVar4 == '\0') {
    std::string::string(asStack_18,"UIButton_Notice");
    this_02 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_18);
    std::string::~string(asStack_18);
    nop();
    if (this_02 != (PVZ2UIButton *)0x0) {
      TodStringTranslate(L"[VOTE_RESULT]");
      PVZ2UIButton::SetLabelText(this_02,(wstring *)asStack_18);
      FUN_05476c50(asStack_18);
    }
  }
  this_00 = (vector<LimitGroupBuyGridItem*,std::allocator<LimitGroupBuyGridItem*>> *)(this + 0x140);
  cVar4 = std::vector<LimitGroupBuyGridItem*,std::allocator<LimitGroupBuyGridItem*>>::empty(this_00)
  ;
  if (cVar4 == '\0') {
    uVar16 = *(undefined8 *)(this + 0x140);
    uVar10 = FUN_039c2630(uVar16,*(undefined8 *)(this + 0x148));
    if (uVar10 != 8) {
      uVar14 = 0;
      while (uVar14 < uVar10) {
        puVar13 = (undefined8 *)FUN_039c263c(uVar16);
        (**(code **)(*(long *)pWVar8 + 0x68))(pWVar8,*puVar13);
        uVar16 = *(undefined8 *)(this + 0x140);
        uVar10 = FUN_039c2630(uVar16,*(undefined8 *)(this + 0x148));
        uVar14 = uVar14 + 1;
      }
      std::vector<LimitGroupBuyGridItem*,std::allocator<LimitGroupBuyGridItem*>>::clear(this_00);
    }
  }
  cVar4 = std::vector<LimitGroupBuyGridItem*,std::allocator<LimitGroupBuyGridItem*>>::empty(this_00)
  ;
  if (cVar4 == '\0') {
    lVar15 = 0;
    do {
      Sexy::Insets::Insets
                ((Insets *)asStack_18,iVar5 + (iVar6 + iVar3) * ((uint)lVar15 & 3),
                 iVar6 + ((int)(uint)lVar15 >> 2) * (iVar7 + iVar2),iVar3,iVar2);
      puVar13 = (undefined8 *)FUN_039c263c(*(undefined8 *)(this + 0x140),lVar15);
      pLVar11 = (LimitGroupBuyGridItem *)*puVar13;
      (**(code **)(*(long *)pLVar11 + 0x1a0))(pLVar11,asStack_18);
      lVar1 = lVar15 + 1;
      pLVar12 = (LimitGroupBuyItemInfo *)FUN_039c2644(*(undefined8 *)(this + 0x1a0),lVar15);
      LimitGroupBuyGridItem::LoadData(pLVar11,pLVar12);
      lVar15 = lVar1;
    } while (lVar1 != 8);
  }
  else {
    lVar15 = 0;
    do {
      Sexy::Insets::Insets
                ((Insets *)asStack_18,iVar5 + ((uint)lVar15 & 3) * (iVar6 + iVar3),
                 iVar6 + ((int)(uint)lVar15 >> 2) * (iVar7 + iVar2),iVar3,iVar2);
      pLVar11 = ::operator_new(0x180);
      LimitGroupBuyGridItem::LimitGroupBuyGridItem(pLVar11);
      local_20 = pLVar11;
      (**(code **)(*(long *)pLVar11 + 0x1a0))(pLVar11,asStack_18);
      pLVar11 = local_20;
      lVar1 = lVar15 + 1;
      pLVar12 = (LimitGroupBuyItemInfo *)FUN_039c2644(*(undefined8 *)(this + 0x1a0),lVar15);
      LimitGroupBuyGridItem::LoadData(pLVar11,pLVar12);
      (**(code **)(*(long *)pWVar8 + 0x60))(pWVar8,local_20);
      std::vector<LimitGroupBuyGridItem*,std::allocator<LimitGroupBuyGridItem*>>::push_back
                (this_00,&local_20);
      lVar15 = lVar1;
    } while (lVar1 != 8);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitGroupBuy::UpdateTimer() */

void __thiscall UILimitGroupBuy::UpdateTimer(UILimitGroupBuy *this)

{
  int iVar1;
  UIWidgetText *pUVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  string asStack_90 [8];
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_90,"UIText_Time");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_90);
  std::string::~string(asStack_90);
  nop();
  FUN_05476574(auStack_a0);
  if (pUVar2 == (UIWidgetText *)0x0) goto LAB_039c7a54;
  iVar1 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar1);
  iVar1 = ActiveItem::GetLeftDays(aAStack_88);
  lVar3 = LawnApp::GetRealBeijingTime(gLawnApp);
  lVar3 = (lVar3 + 0x1c200) % 0x15180;
  lVar4 = 0x15180 - lVar3;
  if (lVar3 < 0x7e92) {
    DAT_06ac0b58 = '\0';
LAB_039c7954:
    if (0 < iVar1) goto LAB_039c795c;
LAB_039c7ab4:
    iVar1 = (int)(lVar4 / 0x3c);
    Sexy::StrFormat(L"%02d: %02d: %02d",asStack_90,lVar4 / 0xe10 & 0xffffffff,
                    (ulong)(uint)(iVar1 + (int)((lVar4 / 0x3c) / 0x3c) * -0x3c),
                    (ulong)(uint)((int)lVar4 + iVar1 * -0x3c));
    FUN_054766c8(auStack_a0,asStack_90);
    FUN_05476c50(asStack_90);
  }
  else {
    if (DAT_06ac0b58 != '\0') goto LAB_039c7954;
    DAT_06ac0b58 = '\x01';
    Refresh(this,true);
    if (iVar1 < 1) goto LAB_039c7ab4;
LAB_039c795c:
    FUN_05478178(asStack_90,L"[TOTAL_LOGIN_DAYS]",auStack_a8);
    TodReplaceNumberString((wstring *)asStack_90,L"{DAY_COUNT}",iVar1);
    FUN_05476c50(asStack_90);
    nop();
    Sexy::StrFormat(L"%02d:%02d",asStack_90,lVar4 / 0xe10 & 0xffffffff,
                    (ulong)(uint)((int)(lVar4 / 0x3c) + (int)((lVar4 / 0x3c) / 0x3c) * -0x3c));
    FUN_054766c8(auStack_a0,asStack_90);
    FUN_05476c50(asStack_90);
    FUN_0342e660(asStack_90,auStack_98,auStack_a0);
    FUN_054766c8(auStack_a0,asStack_90);
    FUN_05476c50(asStack_90);
    FUN_05476c50(auStack_98);
  }
  PuzzleTip::SetTip(pUVar2,auStack_a0);
  ActiveItem::~ActiveItem(aAStack_88);
LAB_039c7a54:
  FUN_05476c50(auStack_a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UILimitGroupBuy::Update() */

void __thiscall UILimitGroupBuy::Update(UILimitGroupBuy *this)

{
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  UpdateTimer(this);
  return;
}


/* UILimitGroupBuy::ShowVotedDisplay() */

void __thiscall UILimitGroupBuy::ShowVotedDisplay(UILimitGroupBuy *this)

{
  VotedDisplayUI *this_00;
  
  if (*(long *)(this + 0x1c0) != 0) {
    return;
  }
  this_00 = ::operator_new(0xf0);
  VotedDisplayUI::VotedDisplayUI(this_00);
  *(VotedDisplayUI **)(this + 0x1c0) = this_00;
  VotedDisplayUI::InitView(this_00);
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x1c0));
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x1c0));
  LawnApp::PushOverlaysToTop(gLawnApp);
  Sexy::WidgetManager::AddBaseModal
            (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x1c0));
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x1c0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitGroupBuy::ButtonDepress(int) */

void __thiscall UILimitGroupBuy::ButtonDepress(UILimitGroupBuy *this,int param_1)

{
  char cVar1;
  UIMessageBox *this_00;
  Image *pIVar2;
  long lVar3;
  UILimitGroupBuy *this_01;
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 2) {
    cVar1 = std::vector<LimitGroupBuyItemInfo,std::allocator<LimitGroupBuyItemInfo>>::empty
                      ((vector<LimitGroupBuyItemInfo,std::allocator<LimitGroupBuyItemInfo>> *)
                       (this + 0x188));
    if (cVar1 == '\0') {
      this_01 = (UILimitGroupBuy *)UISingletonDialog<UILimitGroupBuy>::GetSingletonPtr();
      ShowVotedDisplay(this_01);
    }
    else {
      cVar1 = std::vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>>::empty
                        ((vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>> *)
                         (this + 0x170));
      if (cVar1 == '\0') {
        UISingletonDialog<UILimitGroupBuyNotice>::ShowDialog();
      }
      else {
        this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
        if (this_00 != (UIMessageBox *)0x0) {
          UIMessageBox::SetShowType(this_00,4);
          TodStringTranslate(L"[REVIVE_TIP]");
          TodStringTranslate(L"[GROUP_BUY_NOTICE_END]");
          TodStringTranslate(L"[BUTTON_OK]");
          UIMessageBox::SetMessage(this_00,awStack_20,awStack_28);
          std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
          pIVar2 = (Image *)StringHelper::ToImage(asStack_10,false);
          UIMessageBox::SetBackground(this_00,pIVar2);
          std::string::~string(asStack_10);
          nop();
          lVar3 = UIMessageBox::GetButtonCancel(this_00);
          thunk_FUN_05477b9c(lVar3 + 0xd8,auStack_18);
          FUN_05476c50(auStack_18);
          FUN_05476c50(awStack_20);
          FUN_05476c50(awStack_28);
        }
      }
    }
  }
  else if (param_1 == 0x58) {
    UISingletonDialog<UILimitGroupBuy>::CloseDialog();
  }
  else if (param_1 == 1) {
    LawnApp::ShowCoinStore(gLawnApp,2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UILimitGroupBuy::ButtonDepress(int) */

void __thiscall UILimitGroupBuy::ButtonDepress(UILimitGroupBuy *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitGroupBuy::ShowWindow() */

void __thiscall UILimitGroupBuy::ShowWindow(UILimitGroupBuy *this)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  LimitGroupBuyInfo aLStack_f0 [96];
  int local_90;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_039c2234(local_80);
  if ((cVar1 != '\0') && (local_70 != '\0')) {
    LimitGroupBuyInfo::LimitGroupBuyInfo(aLStack_f0);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aLStack_f0);
    if (cVar1 != '\0') {
      LimitGroupBuyInfo::operator=((LimitGroupBuyInfo *)(this + 0x158),aLStack_f0);
      this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
      PlayerInfo::SetMaterialNum(this_01,0xbc2,local_90);
      InitView(this);
      UpdateTicket(this);
    }
    LimitGroupBuyInfo::~LimitGroupBuyInfo(aLStack_f0);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitGroupBuy::OnCreate() */

void __thiscall UILimitGroupBuy::OnCreate(UILimitGroupBuy *this)

{
  uint uVar1;
  UIWidgetBackground *pUVar2;
  TGALogMgr *pTVar3;
  size_t __n;
  TGAPlantWarsData aTStack_88 [64];
  string asStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_48,"Background_0");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_48);
  std::string::~string(asStack_48);
  nop();
  uVar1 = (*(int *)(this + 0x50) - *(int *)(pUVar2 + 0x50)) / 2;
  __n = (size_t)uVar1;
  *(uint *)(pUVar2 + 0x48) = uVar1;
  ShowWindow(this);
  TGAPlantWarsData::TGAPlantWarsData(aTStack_88);
  std::string::append((string *)aTStack_88,"1",__n);
  pTVar3 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogPurchaseData::TGALogPurchaseData
            ((TGALogPurchaseData *)asStack_48,(TGALogPurchaseData *)aTStack_88);
  TGALogMgr::LogGroupBuy(pTVar3,asStack_48);
  TGAPlantWarsData::~TGAPlantWarsData((TGAPlantWarsData *)asStack_48);
  TGAPlantWarsData::~TGAPlantWarsData(aTStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitGroupBuy::OnNotifyRefresh(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&) */

void __thiscall UILimitGroupBuy::OnNotifyRefresh(UILimitGroupBuy *this,bool param_1,set *param_2)

{
  bool bVar1;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_1c = 0x29e8;
    local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1c);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (bVar1) {
      ShowWindow(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

