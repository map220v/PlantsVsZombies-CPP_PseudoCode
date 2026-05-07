// Class: PVZ1ModeShop


/* PVZ1ModeShop::ScrollTargetReached(Sexy::ScrollWidget*) */

void PVZ1ModeShop::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to PVZ1ModeShop::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall PVZ1ModeShop::ScrollTargetReached(PVZ1ModeShop *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* PVZ1ModeShop::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void PVZ1ModeShop::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to PVZ1ModeShop::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall PVZ1ModeShop::ScrollTargetInterrupted(PVZ1ModeShop *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeShop::GetLayoutName() */

void __thiscall PVZ1ModeShop::GetLayoutName(PVZ1ModeShop *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIPVZ1ModeShop");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PVZ1ModeShop::refreshShop(int) */

void PVZ1ModeShop::refreshShop(int param_1)

{
  NetworkMgr *this;
  long *plVar1;
  
  this = (NetworkMgr *)NetworkMgr::Instance();
  plVar1 = (long *)NetworkMgr::GetNewNetWorkProcess(this);
  (**(code **)(*plVar1 + 0x390))(plVar1,1,0);
  return;
}


/* PVZ1ModeShop::ConfirmBuy(UIMessageBox*, int) */

void __thiscall PVZ1ModeShop::ConfirmBuy(PVZ1ModeShop *this,UIMessageBox *param_1,int param_2)

{
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 != 1) {
    return;
  }
  refreshShop((int)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeShop::WidgetTouchCallback(CommonRewardItemData const&) */

void __thiscall PVZ1ModeShop::WidgetTouchCallback(PVZ1ModeShop *this,CommonRewardItemData *param_1)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  UIMessageBox *this_02;
  Image *pIVar2;
  long lVar3;
  NetworkMgr *this_03;
  long *plVar4;
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = PlayerInfo::GetMaterialNum(this_01,*(int *)(param_1 + 8));
  if (iVar1 < *(int *)(param_1 + 0xc)) {
    this_02 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (this_02 != (UIMessageBox *)0x0) {
      UIMessageBox::SetShowType(this_02,4);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[MAT_PVZ1MODE_COIN_NOT_ENOUGH]");
      TodStringTranslate(L"[BUTTON_OK]");
      UIMessageBox::SetMessage(this_02,awStack_20,awStack_28);
      std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar2 = (Image *)StringHelper::ToImage(asStack_10,false);
      UIMessageBox::SetBackground(this_02,pIVar2);
      std::string::~string(asStack_10);
      nop();
      lVar3 = UIMessageBox::GetButtonCancel(this_02);
      thunk_FUN_05477b9c(lVar3 + 0xd8,auStack_18);
      FUN_05476c50(auStack_18);
      FUN_05476c50(awStack_20);
      FUN_05476c50(awStack_28);
    }
  }
  else {
    this_03 = (NetworkMgr *)NetworkMgr::Instance();
    plVar4 = (long *)NetworkMgr::GetNewNetWorkProcess(this_03);
    (**(code **)(*plVar4 + 0x370))
              (plVar4,10,*(undefined4 *)param_1,1,*(undefined4 *)(param_1 + 8),
               *(undefined4 *)(param_1 + 0xc));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeShop::IsAdvertisementEnable() */

void PVZ1ModeShop::IsAdvertisementEnable(void)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this;
  string *this_00;
  long lVar3;
  long *plVar4;
  byte bVar5;
  string asStack_28 [8];
  long local_20;
  int local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((DAT_06b9a940 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b9a940), iVar2 != 0)) {
    DAT_06b9a9d0 = LawnApp::IsAdChannel(gLawnApp,3);
    __cxa_guard_release(&DAT_06b9a940);
  }
  if (((DAT_06b9a798 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b9a798), iVar2 != 0)) {
    plVar4 = (long *)EASquared::Instance();
    DAT_06b9aba8 = (**(code **)(*plVar4 + 0xb8))(plVar4,0x2a99);
    __cxa_guard_release(&DAT_06b9a798);
  }
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (string *)ProfileMgr::GetCurrentProfile(this);
  std::string::string(asStack_28,"theater");
  PlayerInfo::GetEventRecordByName(this_00);
  std::string::~string(asStack_28);
  nop();
  cVar1 = TimeUtil::IsToday(local_20);
  if (cVar1 == '\0') {
    lVar3 = LawnApp::GetRealServerTime(gLawnApp);
    std::string::string(asStack_28,"theater");
    PlayerInfo::SetEventRecordByName((PlayerInfo *)this_00,asStack_28,3,lVar3);
    std::string::~string(asStack_28);
    nop();
  }
  bVar5 = 0;
  if (DAT_06b9a9d0 != '\0') {
    bVar5 = (cVar1 == '\0' || 0 < local_18) & DAT_06b9aba8;
  }
  GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData
            ((GridItemCardGameZombieActionData *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar5);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeShop::ShowTipsUI() */

void PVZ1ModeShop::ShowTipsUI(void)

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
    iVar2 = FUN_04dceedc(0x226);
    iVar3 = FUN_04dceedc(0x14a);
  }
  else {
    iVar2 = FUN_04dceedc(500);
    iVar3 = FUN_04dceedc(0x14a);
  }
  this = (PVZ2UIDialog *)
         LawnApp::ShowPVZ2Dialog(gLawnApp,(float)iVar2,(float)iVar3,(PVZ2UIDialog *)0x0);
  FUN_05478178(awStack_50,L"[SEED_CHOOSER_WARNING_TITLE]",auStack_58);
  PVZ2UIDialog::SetHeaderLabel(this,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05478178(awStack_50,L"[PVZ1MODE_SHOP_TIPS_DESC]",auStack_58);
  PVZ2UIDialog::SetFooterLabel(this,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  PVZ2UIDialog::SetFooterAlign(this,3);
  iVar2 = FUN_04dceedc(2);
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


/* PVZ1ModeShop::ButtonDepress(int) */

void __thiscall PVZ1ModeShop::ButtonDepress(PVZ1ModeShop *this,int param_1)

{
  if (param_1 == 0x58) {
    UISingletonDialog<PVZ1ModeShop>::CloseDialog();
    return;
  }
  if (param_1 == 0x59) {
    ShowTipsUI();
    return;
  }
  return;
}


/* non-virtual thunk to PVZ1ModeShop::ButtonDepress(int) */

void __thiscall PVZ1ModeShop::ButtonDepress(PVZ1ModeShop *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeShop::PVZ1ModeShop() */

void __thiscall PVZ1ModeShop::PVZ1ModeShop(PVZ1ModeShop *this)

{
  undefined *puVar1;
  LawnApp *this_00;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<PVZ1ModeShop>::UISingletonDialog((UISingletonDialog<PVZ1ModeShop> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  this[0x140] = (PVZ1ModeShop)0x0;
  *(undefined ***)this = &PTR_GetClass_069c5500;
  *(undefined **)(this + 0xd8) = &DAT_069c5860;
  *(undefined ***)(this + 0x138) = &PTR__PVZ1ModeShop_069c58a8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x148));
  this_00 = gLawnApp;
  std::string::string((string *)&local_20,"UI_Quests");
  LawnApp::LoadGroup(this_00,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnShopBuyFinish);
  local_50 = local_20;
  uStack_48 = uStack_18;
  local_40 = local_10;
  MessageRouter::
  Subscribe<bool,S2C_ShopItemPurchaseInfo_const*,Sexy::CBMemberTranslatorX<PVZ1ModeShop,void(PVZ1ModeShop::*)(bool,S2C_ShopItemPurchaseInfo_const*)>>
            ((MessageRouter *)puVar1,Message::NotifyShopBuyFinishDetails,&local_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeShop::~PVZ1ModeShop() */

void __thiscall PVZ1ModeShop::~PVZ1ModeShop(PVZ1ModeShop *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0x138) = &PTR__PVZ1ModeShop_069c58a8;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_069c5500;
  *(undefined **)(this + 0xd8) = &DAT_069c5860;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_Quests");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::vector<PVZ1ModeShopCommonWidget*,std::allocator<PVZ1ModeShopCommonWidget*>>::~vector
            ((vector<PVZ1ModeShopCommonWidget*,std::allocator<PVZ1ModeShopCommonWidget*>> *)
             (this + 0x148));
  UISingletonDialog<PVZ1ModeShop>::~UISingletonDialog((UISingletonDialog<PVZ1ModeShop> *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PVZ1ModeShop::~PVZ1ModeShop() */

void __thiscall PVZ1ModeShop::~PVZ1ModeShop(PVZ1ModeShop *this)

{
  ~PVZ1ModeShop(this + -0x138);
  return;
}


/* PVZ1ModeShop::~PVZ1ModeShop() */

void __thiscall PVZ1ModeShop::~PVZ1ModeShop(PVZ1ModeShop *this)

{
  ~PVZ1ModeShop(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PVZ1ModeShop::~PVZ1ModeShop() */

void __thiscall PVZ1ModeShop::~PVZ1ModeShop(PVZ1ModeShop *this)

{
  ~PVZ1ModeShop(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeShop::refreshMaterial() */

void __thiscall PVZ1ModeShop::refreshMaterial(PVZ1ModeShop *this)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  PVZ1ModeShopData *pPVar1;
  UIWidgetText *pUVar2;
  string asStack_48 [8];
  PVZ1ModeShopData aPStack_40 [48];
  ActivityTypeID aAStack_10 [4];
  ActivityTypeID aAStack_c [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<PVZ1ModeShopMgr>::GetInstancePtr();
  pPVar1 = (PVZ1ModeShopData *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_00);
  PVZ1ModeShopData::PVZ1ModeShopData(aPStack_40,pPVar1);
  std::string::string(asStack_48,"UIText_Currency");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_48);
  std::string::~string(asStack_48);
  nop();
  if (pUVar2 != (UIWidgetText *)0x0) {
    std::to_string<ActivityTypeID>(aAStack_10);
    UIWidgetText::SetString(pUVar2,asStack_48);
    std::string::~string(asStack_48);
  }
  std::string::string(asStack_48,"UIText_Currency2");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_48);
  std::string::~string(asStack_48);
  nop();
  if (pUVar2 != (UIWidgetText *)0x0) {
    std::to_string<ActivityTypeID>(aAStack_c);
    UIWidgetText::SetString(pUVar2,asStack_48);
    std::string::~string(asStack_48);
  }
  PVZ1ModeShopData::~PVZ1ModeShopData(aPStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeShop::initWidgets(PVZ1ModeShopData const&) */

void __thiscall PVZ1ModeShop::initWidgets(PVZ1ModeShop *this,PVZ1ModeShopData *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  Widget *pWVar12;
  ulong uVar13;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  PVZ1ModeShopCommonWidget *pPVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  NameMapperBase *this_02;
  ProfileMgr *pPVar18;
  PlayerInfo *pPVar19;
  code *pcVar20;
  PVZ1ModeShopCommonWidget *local_48;
  Insets aIStack_40 [16];
  Insets aIStack_30 [16];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<PVZ1ModeShopCommonWidget*,std::allocator<PVZ1ModeShopCommonWidget*>>::clear
            ((vector<PVZ1ModeShopCommonWidget*,std::allocator<PVZ1ModeShopCommonWidget*>> *)
             (this + 0x148));
  std::string::string((string *)&local_20,"Widget_Rewards");
  pWVar12 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  (**(code **)(*(long *)pWVar12 + 0x80))(pWVar12,1,1);
  uVar13 = FUN_04dce710(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  iVar3 = FUN_04dce68c(*(undefined4 *)(pWVar12 + 0x50));
  iVar4 = FUN_04dce690(*(undefined4 *)(pWVar12 + 0x54));
  iVar5 = FUN_04dceedc(6);
  iVar6 = FUN_04dceedc(1);
  iVar7 = FUN_04dceedc(0x14);
  iVar8 = FUN_04dceedc(10);
  iVar1 = (iVar3 + iVar5 * -2 + iVar7 * -2) / 3;
  this_00 = ::operator_new(0x248);
  iVar3 = iVar7 + (iVar4 + iVar6 * -2 + iVar8 * -2) / 2;
  iVar8 = iVar3 + iVar8;
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  iVar4 = FUN_04dce68c(*(undefined4 *)(pWVar12 + 0x50));
  iVar9 = FUN_04dce690(*(undefined4 *)(pWVar12 + 0x54));
  Sexy::Insets::Insets(aIStack_40,0,0,iVar4,iVar9);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_40);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  (**(code **)(*(long *)pWVar12 + 0x60))(pWVar12,this_00);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  uVar10 = FUN_04dce68c(*(undefined4 *)(pWVar12 + 0x50));
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,uVar10,iVar6 + iVar8 * (int)((float)uVar13 * 0.33333334));
  (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
  uVar13 = 0;
  while( true ) {
    iVar4 = (int)uVar13;
    uVar16 = FUN_04dce710(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
    if (uVar16 <= uVar13) break;
    Sexy::Insets::Insets
              (aIStack_30,iVar5 + (iVar1 + iVar7) * (iVar4 % 3),iVar6 + iVar8 * (iVar4 / 3),iVar1,
               iVar3);
    CommonRewardItemData::CommonRewardItemData((CommonRewardItemData *)&local_20);
    piVar17 = (int *)FUN_04dce74c(*(undefined8 *)(param_1 + 0x18),uVar13);
    local_20 = *piVar17;
    local_1c = piVar17[1];
    local_18 = piVar17[5];
    local_14 = piVar17[2];
    this_02 = (NameMapperBase *)ArtifactMapper::GetInstance();
    cVar2 = NameMapperBase::ContainsId(this_02,local_20);
    if (cVar2 == '\0') {
      lVar15 = FUN_04dce74c(*(undefined8 *)(param_1 + 0x18),uVar13);
      local_10 = (uint)(*(int *)(lVar15 + 0xc) != *(int *)(lVar15 + 0x10));
    }
    else {
      pPVar18 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar19 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar18);
      uVar11 = PlayerInfo::IsArtifactUnlocked(pPVar19,local_20);
      local_10 = uVar11 & 0xff ^ 1;
    }
    pPVar14 = ::operator_new(0x1c8);
    PVZ1ModeShopCommonWidget::PVZ1ModeShopCommonWidget(pPVar14,iVar4);
    pcVar20 = *(code **)(*(long *)pPVar14 + 0x1a0);
    pPVar14[0x59] = (PVZ1ModeShopCommonWidget)0x0;
    local_48 = pPVar14;
    (*pcVar20)(pPVar14,aIStack_30);
    FUN_04dce708(local_48 + 0x1b8,-iVar7);
    pPVar14 = local_48;
    lVar15 = FUN_04dce74c(*(undefined8 *)(param_1 + 0x18),uVar13);
    FUN_04dce700(pPVar14 + 0x194,*(undefined4 *)(lVar15 + 0x18));
    pPVar14 = local_48;
    lVar15 = FUN_04dce74c(*(undefined8 *)(param_1 + 0x18),uVar13);
    PVZ1ModeShopCommonWidget::SetLockDescriptionIndex(pPVar14,*(int *)(lVar15 + 0x20));
    pPVar14 = local_48;
    lVar15 = FUN_04dce74c(*(undefined8 *)(param_1 + 0x18),uVar13);
    PVZ1ModeShopCommonWidget::SetBuyTimes(pPVar14,*(int *)(lVar15 + 0xc),*(int *)(lVar15 + 0x10));
    (**(code **)(*(long *)local_48 + 0x310))(local_48,(string *)&local_20);
    FUN_04dced0c(local_48 + 0x170);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,local_48);
    std::vector<PVZ1ModeShopCommonWidget*,std::allocator<PVZ1ModeShopCommonWidget*>>::push_back
              ((vector<PVZ1ModeShopCommonWidget*,std::allocator<PVZ1ModeShopCommonWidget*>> *)
               (this + 0x148),&local_48);
    uVar13 = uVar13 + 1;
  }
  pPVar18 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar19 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar18);
  PlayerInfo::SetMaterialNum(pPVar19,0x5b68,*(int *)(param_1 + 0x30));
  PlayerInfo::SetMaterialNum(pPVar19,0x5b69,*(int *)(param_1 + 0x34));
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PVZ1ModeShop::UpdateShopUI(PVZ1ModeShopData const&) */

void __thiscall PVZ1ModeShop::UpdateShopUI(PVZ1ModeShop *this,PVZ1ModeShopData *param_1)

{
  initWidgets(this,param_1);
  refreshMaterial(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeShop::OnCreate() */

void __thiscall PVZ1ModeShop::OnCreate(PVZ1ModeShop *this)

{
  long lVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  PVZ1ModeShopData *pPVar2;
  char *__s;
  TGALogMgr *this_01;
  PVZ1ModeShopData *__n;
  DString aDStack_a0 [16];
  PVZ1ModeShopData aPStack_90 [56];
  string asStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  __n = aPStack_90;
  std::string::string(asStack_58,"Background_0");
  lVar1 = UI::Dialog::GetWidget((Dialog *)this,asStack_58);
  std::string::~string(asStack_58);
  nop();
  *(int *)(lVar1 + 0x48) = (*(int *)(this + 0x50) - *(int *)(lVar1 + 0x50)) / 2;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<PVZ1ModeShopMgr>::GetInstancePtr();
  pPVar2 = (PVZ1ModeShopData *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_00);
  PVZ1ModeShopData::PVZ1ModeShopData(aPStack_90,pPVar2);
  UpdateShopUI(this,aPStack_90);
  TGAPVZ1ModeData::TGAPVZ1ModeData((TGAPVZ1ModeData *)asStack_58);
  DString::DString(aDStack_a0,4);
  __s = (char *)DString::c_str(aDStack_a0);
  std::string::append(asStack_58,__s,(size_t)__n);
  DString::~DString(aDStack_a0);
  this_01 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogPVZ1Mode(this_01,(TGAPVZ1ModeData *)asStack_58);
  TGAPVZ1ModeData::~TGAPVZ1ModeData((TGAPVZ1ModeData *)asStack_58);
  PVZ1ModeShopData::~PVZ1ModeShopData(aPStack_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeShop::OnShopBuyFinish(bool, S2C_ShopItemPurchaseInfo const*) */

void __thiscall
PVZ1ModeShop::OnShopBuyFinish(PVZ1ModeShop *this,bool param_1,S2C_ShopItemPurchaseInfo *param_2)

{
  char cVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  UIWidgetText *pUVar5;
  DaveTreasureDataManager *this_02;
  char *__s;
  TGALogMgr *this_03;
  GAME_ITEM_INFO *__n;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  int local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f0 [4];
  undefined4 local_1e0 [6];
  string asStack_1c8 [72];
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    if ((*(int *)(param_2 + 0x14) != 10) || (1 < *(int *)(param_2 + 0x20) - 0x5b68U))
    goto LAB_04dd2c40;
    uVar7 = *(undefined8 *)(this + 0x148);
    uVar3 = FUN_04dce758(uVar7,*(undefined8 *)(this + 0x150));
    for (uVar6 = 0; uVar6 < uVar3; uVar6 = uVar6 + 1) {
      puVar4 = (undefined8 *)FUN_04dce764(uVar7,uVar6);
      if ((PVZ1ModeShopCommonWidget *)*puVar4 != (PVZ1ModeShopCommonWidget *)0x0) {
        cVar1 = PVZ1ModeShopCommonWidget::CheckShopItem((PVZ1ModeShopCommonWidget *)*puVar4,param_2)
        ;
        if (cVar1 != '\0') {
          puVar4 = (undefined8 *)FUN_04dce764(*(undefined8 *)(this + 0x148),uVar6);
          PVZ1ModeShopCommonWidget::UpdateShopCommonWidget((S2C_ShopItemPurchaseInfo *)*puVar4);
          break;
        }
        uVar7 = *(undefined8 *)(this + 0x148);
        uVar3 = FUN_04dce758(uVar7,*(undefined8 *)(this + 0x150));
      }
    }
    ProfileChangeItemAmount(*(int *)(param_2 + 0x20),-*(int *)(param_2 + 0x24),false);
    GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)asStack_1c8);
    iVar8 = *(int *)(param_2 + 0x18);
    if (iVar8 - 0x5a4aU < 2) {
      iVar8 = 0x5a48;
    }
    else if (iVar8 - 0x5a4cU < 2) {
      iVar8 = 0x5a49;
    }
    else if (iVar8 - 0x5a4eU < 2) {
      iVar8 = 0x5a36;
    }
    else if (iVar8 - 0x5a50U < 3) {
      iVar8 = 0x5a37;
    }
    ProfileChangeItemAmount(iVar8,*(int *)(param_2 + 0x1c),false);
    GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)asStack_1c8);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_1e0);
    local_1f8 = 0;
    local_1fc = *(undefined4 *)(param_2 + 0x1c);
    local_200 = iVar8;
    std::vector<LotteryBonus,std::allocator<LotteryBonus>>::push_back
              ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)local_1e0,
               (LotteryBonus *)&local_200);
    this_02 = (DaveTreasureDataManager *)
              Sexy::LazySingleton<DaveTreasureDataManager>::GetInstancePtr();
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_1c8);
    __n = (GAME_ITEM_INFO *)asStack_1c8;
    DaveTreasureDataManager::ShowBonus(this_02,(vector *)local_1e0,(vector *)asStack_1c8);
    std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
              ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)asStack_1c8);
    TGAPVZ1ModeData::TGAPVZ1ModeData((TGAPVZ1ModeData *)asStack_1c8);
    DString::DString((DString *)local_1f0,5);
    __s = (char *)DString::c_str((DString *)local_1f0);
    std::string::append(asStack_1c8,__s,(size_t)__n);
    DString::~DString((DString *)local_1f0);
    std::string::string((string *)local_1f0,"");
    uVar2 = operator|(0x10,8);
    FUN_05462618(auStack_178,(DString *)local_1f0,uVar2);
    std::string::~string((string *)local_1f0);
    nop();
    uVar7 = FUN_0546065c(auStack_168,iVar8);
    uVar7 = FUN_054603b8(uVar7,&DAT_05593348);
    uVar7 = FUN_0546065c(uVar7,*(undefined4 *)(param_2 + 0x1c));
    FUN_054603b8(uVar7,&DAT_05594620);
    FUN_05462824((DString *)local_1f0,auStack_178);
    FUN_05474278(auStack_180,(DString *)local_1f0);
    std::string::~string((string *)local_1f0);
    this_03 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::LogPVZ1Mode(this_03,(TGAPVZ1ModeData *)asStack_1c8);
    FUN_054617bc(auStack_178);
    TGAPVZ1ModeData::~TGAPVZ1ModeData((TGAPVZ1ModeData *)asStack_1c8);
    std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
              ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)local_1e0);
  }
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  local_1f0[0] = PlayerInfo::GetMaterialNum(this_01,0x5b68);
  std::string::string(asStack_1c8,"UIText_Currency");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_1c8);
  std::string::~string(asStack_1c8);
  nop();
  if (pUVar5 != (UIWidgetText *)0x0) {
    std::to_string<ActivityTypeID>((ActivityTypeID *)local_1f0);
    UIWidgetText::SetString(pUVar5,asStack_1c8);
    std::string::~string(asStack_1c8);
  }
  local_1e0[0] = PlayerInfo::GetMaterialNum(this_01,0x5b69);
  std::string::string(asStack_1c8,"UIText_Currency2");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_1c8);
  std::string::~string(asStack_1c8);
  nop();
  if (pUVar5 != (UIWidgetText *)0x0) {
    std::to_string<ActivityTypeID>((ActivityTypeID *)local_1e0);
    UIWidgetText::SetString(pUVar5,asStack_1c8);
    std::string::~string(asStack_1c8);
  }
LAB_04dd2c40:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

