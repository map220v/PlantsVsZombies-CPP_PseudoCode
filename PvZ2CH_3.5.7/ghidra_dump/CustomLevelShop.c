// Class: CustomLevelShop


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelShop::updateTimer() */

void __thiscall CustomLevelShop::updateTimer(CustomLevelShop *this)

{
  UIWidgetText *pUVar1;
  int iVar2;
  float fVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_Time");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidgetText *)0x0) {
    fVar3 = (float)TimeUtil::GetTimeCountdown(1,-1);
    iVar2 = (int)fVar3;
    Sexy::StrFormat(L"%02d: %02d: %02d",asStack_10,(ulong)(uint)(iVar2 / 0xe10),
                    (ulong)(uint)((iVar2 / 0x3c) % 0x3c),(ulong)(uint)(iVar2 % 0x3c));
    PuzzleTip::SetTip(pUVar1,asStack_10);
    FUN_05476c50(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelShop::Update() */

void __thiscall CustomLevelShop::Update(CustomLevelShop *this)

{
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  updateTimer(this);
  return;
}


/* CustomLevelShop::ScrollTargetReached(Sexy::ScrollWidget*) */

void CustomLevelShop::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to CustomLevelShop::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall CustomLevelShop::ScrollTargetReached(CustomLevelShop *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* CustomLevelShop::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void CustomLevelShop::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to CustomLevelShop::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
CustomLevelShop::ScrollTargetInterrupted(CustomLevelShop *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelShop::GetLayoutName() */

void __thiscall CustomLevelShop::GetLayoutName(CustomLevelShop *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"CustomLevelShop");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelShop::WidgetTouchCallback(CommonRewardItemData const&) */

void __thiscall
CustomLevelShop::WidgetTouchCallback(CustomLevelShop *this,CommonRewardItemData *param_1)

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
              (plVar4,0xb,*(undefined4 *)param_1,1,*(undefined4 *)(param_1 + 8),
               *(undefined4 *)(param_1 + 0xc));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelShop::IsAdvertisementEnable() */

void CustomLevelShop::IsAdvertisementEnable(void)

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
  if (((DAT_06b9af00 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b9af00), iVar2 != 0)) {
    DAT_06b9ad78 = LawnApp::IsAdChannel(gLawnApp,3);
    __cxa_guard_release(&DAT_06b9af00);
  }
  if (((DAT_06b9b010 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b9b010), iVar2 != 0)) {
    plVar4 = (long *)EASquared::Instance();
    DAT_06b9b0c0 = (**(code **)(*plVar4 + 0xb8))(plVar4,0x2a99);
    __cxa_guard_release(&DAT_06b9b010);
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
  if (DAT_06b9ad78 != '\0') {
    bVar5 = (cVar1 == '\0' || 0 < local_18) & DAT_06b9b0c0;
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
/* CustomLevelShop::ShowTipsUI() */

void CustomLevelShop::ShowTipsUI(void)

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
    iVar2 = FUN_04dd3ea0(0x226);
    iVar3 = FUN_04dd3ea0(0x14a);
  }
  else {
    iVar2 = FUN_04dd3ea0(500);
    iVar3 = FUN_04dd3ea0(0x14a);
  }
  this = (PVZ2UIDialog *)
         LawnApp::ShowPVZ2Dialog(gLawnApp,(float)iVar2,(float)iVar3,(PVZ2UIDialog *)0x0);
  FUN_05478178(awStack_50,L"[SEED_CHOOSER_WARNING_TITLE]",auStack_58);
  PVZ2UIDialog::SetHeaderLabel(this,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05478178(awStack_50,L"[LEVELEDITOR_SHOP_TIPS_DESC]",auStack_58);
  PVZ2UIDialog::SetFooterLabel(this,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  PVZ2UIDialog::SetFooterAlign(this,3);
  iVar2 = FUN_04dd3ea0(2);
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


/* CustomLevelShop::ButtonDepress(int) */

void __thiscall CustomLevelShop::ButtonDepress(CustomLevelShop *this,int param_1)

{
  if (param_1 == 0x58) {
    UISingletonDialog<CustomLevelShop>::CloseDialog();
    return;
  }
  if (param_1 == 0x59) {
    ShowTipsUI();
    return;
  }
  return;
}


/* non-virtual thunk to CustomLevelShop::ButtonDepress(int) */

void __thiscall CustomLevelShop::ButtonDepress(CustomLevelShop *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelShop::CustomLevelShop() */

void __thiscall CustomLevelShop::CustomLevelShop(CustomLevelShop *this)

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
  UISingletonDialog<CustomLevelShop>::UISingletonDialog((UISingletonDialog<CustomLevelShop> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  this[0x140] = (CustomLevelShop)0x0;
  *(undefined ***)this = &PTR_GetClass_069c6490;
  *(undefined **)(this + 0xd8) = &DAT_069c67f0;
  *(undefined ***)(this + 0x138) = &PTR__CustomLevelShop_069c6838;
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
  Subscribe<bool,S2C_ShopItemPurchaseInfo_const*,Sexy::CBMemberTranslatorX<CustomLevelShop,void(CustomLevelShop::*)(bool,S2C_ShopItemPurchaseInfo_const*)>>
            ((MessageRouter *)puVar1,Message::NotifyShopBuyFinishDetails,&local_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelShop::~CustomLevelShop() */

void __thiscall CustomLevelShop::~CustomLevelShop(CustomLevelShop *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0x138) = &PTR__CustomLevelShop_069c6838;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_069c6490;
  *(undefined **)(this + 0xd8) = &DAT_069c67f0;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_Quests");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::vector<CustomLevelShopCommonWidget*,std::allocator<CustomLevelShopCommonWidget*>>::~vector
            ((vector<CustomLevelShopCommonWidget*,std::allocator<CustomLevelShopCommonWidget*>> *)
             (this + 0x148));
  UISingletonDialog<CustomLevelShop>::~UISingletonDialog((UISingletonDialog<CustomLevelShop> *)this)
  ;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to CustomLevelShop::~CustomLevelShop() */

void __thiscall CustomLevelShop::~CustomLevelShop(CustomLevelShop *this)

{
  ~CustomLevelShop(this + -0x138);
  return;
}


/* CustomLevelShop::~CustomLevelShop() */

void __thiscall CustomLevelShop::~CustomLevelShop(CustomLevelShop *this)

{
  ~CustomLevelShop(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CustomLevelShop::~CustomLevelShop() */

void __thiscall CustomLevelShop::~CustomLevelShop(CustomLevelShop *this)

{
  ~CustomLevelShop(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelShop::refreshMaterial() */

void __thiscall CustomLevelShop::refreshMaterial(CustomLevelShop *this)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  CustomLevelShopData *pCVar1;
  UIWidgetText *pUVar2;
  string asStack_c0 [8];
  CustomLevelShopData aCStack_b8 [48];
  ActivityTypeID aAStack_88 [4];
  ActivityTypeID aAStack_84 [124];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<CustomLevelShopMgr>::GetInstancePtr();
  pCVar1 = (CustomLevelShopData *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_00);
  CustomLevelShopData::CustomLevelShopData(aCStack_b8,pCVar1);
  std::string::string(asStack_c0,"UIText_Currency");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_c0);
  std::string::~string(asStack_c0);
  nop();
  if (pUVar2 != (UIWidgetText *)0x0) {
    std::to_string<ActivityTypeID>(aAStack_88);
    UIWidgetText::SetString(pUVar2,asStack_c0);
    std::string::~string(asStack_c0);
  }
  std::string::string(asStack_c0,"UIText_Currency2");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_c0);
  std::string::~string(asStack_c0);
  nop();
  if (pUVar2 != (UIWidgetText *)0x0) {
    std::to_string<ActivityTypeID>(aAStack_84);
    UIWidgetText::SetString(pUVar2,asStack_c0);
    std::string::~string(asStack_c0);
  }
  CustomLevelShopData::~CustomLevelShopData(aCStack_b8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelShop::initWidgets(CustomLevelShopData const&) */

void __thiscall CustomLevelShop::initWidgets(CustomLevelShop *this,CustomLevelShopData *param_1)

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
  CustomLevelShopCommonWidget *pCVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  NameMapperBase *this_02;
  ProfileMgr *pPVar18;
  PlayerInfo *this_03;
  code *pcVar19;
  CustomLevelShopCommonWidget *local_48;
  Insets aIStack_40 [16];
  Insets aIStack_30 [16];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<CustomLevelShopCommonWidget*,std::allocator<CustomLevelShopCommonWidget*>>::clear
            ((vector<CustomLevelShopCommonWidget*,std::allocator<CustomLevelShopCommonWidget*>> *)
             (this + 0x148));
  std::string::string((string *)&local_20,"Widget_Rewards");
  pWVar12 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  (**(code **)(*(long *)pWVar12 + 0x80))(pWVar12,1,1);
  uVar13 = FUN_04dd32a0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  iVar3 = FUN_04dd3218(*(undefined4 *)(pWVar12 + 0x50));
  iVar4 = FUN_04dd321c(*(undefined4 *)(pWVar12 + 0x54));
  iVar5 = FUN_04dd3ea0(6);
  iVar6 = FUN_04dd3ea0(1);
  iVar7 = FUN_04dd3ea0(0x14);
  iVar8 = FUN_04dd3ea0(10);
  iVar1 = (iVar3 + iVar5 * -2 + iVar7 * -2) / 3;
  this_00 = ::operator_new(0x248);
  iVar3 = iVar7 + (iVar4 + iVar6 * -2 + iVar8 * -2) / 2;
  iVar8 = iVar3 + iVar8;
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  iVar4 = FUN_04dd3218(*(undefined4 *)(pWVar12 + 0x50));
  iVar9 = FUN_04dd321c(*(undefined4 *)(pWVar12 + 0x54));
  Sexy::Insets::Insets(aIStack_40,0,0,iVar4,iVar9);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_40);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  (**(code **)(*(long *)pWVar12 + 0x60))(pWVar12,this_00);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  uVar10 = FUN_04dd3218(*(undefined4 *)(pWVar12 + 0x50));
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,uVar10,iVar6 + iVar8 * (int)((float)uVar13 * 0.33333334));
  (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
  uVar13 = 0;
  while( true ) {
    iVar4 = (int)uVar13;
    uVar16 = FUN_04dd32a0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
    if (uVar16 <= uVar13) break;
    Sexy::Insets::Insets
              (aIStack_30,iVar5 + (iVar1 + iVar7) * (iVar4 % 3),iVar6 + iVar8 * (iVar4 / 3),iVar1,
               iVar3);
    CommonRewardItemData::CommonRewardItemData((CommonRewardItemData *)&local_20);
    piVar17 = (int *)FUN_04dd32dc(*(undefined8 *)(param_1 + 0x18),uVar13);
    local_20 = *piVar17;
    local_1c = piVar17[1];
    local_18 = piVar17[5];
    local_14 = piVar17[2];
    this_02 = (NameMapperBase *)ArtifactMapper::GetInstance();
    cVar2 = NameMapperBase::ContainsId(this_02,local_20);
    if (cVar2 == '\0') {
      lVar15 = FUN_04dd32dc(*(undefined8 *)(param_1 + 0x18),uVar13);
      local_10 = (uint)(*(int *)(lVar15 + 0xc) != *(int *)(lVar15 + 0x10));
    }
    else {
      pPVar18 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_03 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar18);
      uVar11 = PlayerInfo::IsArtifactUnlocked(this_03,local_20);
      local_10 = uVar11 & 0xff ^ 1;
    }
    pCVar14 = ::operator_new(0x1d0);
    CustomLevelShopCommonWidget::CustomLevelShopCommonWidget(pCVar14,iVar4);
    pcVar19 = *(code **)(*(long *)pCVar14 + 0x1a0);
    pCVar14[0x59] = (CustomLevelShopCommonWidget)0x0;
    local_48 = pCVar14;
    (*pcVar19)(pCVar14,aIStack_30);
    FUN_04dd3294(local_48 + 0x1c0,-iVar7);
    pCVar14 = local_48;
    lVar15 = FUN_04dd32dc(*(undefined8 *)(param_1 + 0x18),uVar13);
    FUN_04dd328c(pCVar14 + 0x19c,*(undefined4 *)(lVar15 + 0x18));
    pCVar14 = local_48;
    lVar15 = FUN_04dd32dc(*(undefined8 *)(param_1 + 0x18),uVar13);
    CustomLevelShopCommonWidget::SetLockDescriptionIndex(pCVar14,*(int *)(lVar15 + 0x20));
    pCVar14 = local_48;
    lVar15 = FUN_04dd32dc(*(undefined8 *)(param_1 + 0x18),uVar13);
    CustomLevelShopCommonWidget::SetBuyTimes(pCVar14,*(int *)(lVar15 + 0xc),*(int *)(lVar15 + 0x10))
    ;
    (**(code **)(*(long *)local_48 + 0x310))(local_48,(string *)&local_20);
    FUN_04dd3930(local_48 + 0x170);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,local_48);
    std::vector<CustomLevelShopCommonWidget*,std::allocator<CustomLevelShopCommonWidget*>>::
    push_back((vector<CustomLevelShopCommonWidget*,std::allocator<CustomLevelShopCommonWidget*>> *)
              (this + 0x148),&local_48);
    uVar13 = uVar13 + 1;
  }
  pPVar18 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(pPVar18);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* CustomLevelShop::UpdateShopUI(CustomLevelShopData const&) */

void __thiscall CustomLevelShop::UpdateShopUI(CustomLevelShop *this,CustomLevelShopData *param_1)

{
  initWidgets(this,param_1);
  refreshMaterial(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelShop::refreshShop(int) */

void CustomLevelShop::refreshShop(int param_1)

{
  NetworkMgr *this;
  INetworkMsgProcess *this_00;
  wchar_t local_30 [2];
  pair<wchar_t_const,wchar_t> apStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_30[1] = 1;
  local_30[0] = L'⩘';
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_28,local_30,local_30 + 1);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_20,
             (pair *)apStack_28);
  this = (NetworkMgr *)NetworkMgr::Instance();
  this_00 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this);
  INetworkMsgProcess::RequestActivityList(this_00,(vector *)avStack_20,0,true);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelShop::ConfirmBuy(UIMessageBox*, int) */

void __thiscall CustomLevelShop::ConfirmBuy(CustomLevelShop *this,UIMessageBox *param_1,int param_2)

{
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 != 1) {
    return;
  }
  refreshShop((int)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelShop::OnCreate() */

void __thiscall CustomLevelShop::OnCreate(CustomLevelShop *this)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  CustomLevelShopData *pCVar1;
  char *__s;
  TGALogMgr *this_01;
  size_t in_x2;
  DString aDStack_150 [16];
  TGACustomLevelData aTStack_140 [136];
  CustomLevelShopData aCStack_b8 [176];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<CustomLevelShopMgr>::GetInstancePtr();
  pCVar1 = (CustomLevelShopData *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_00);
  CustomLevelShopData::CustomLevelShopData(aCStack_b8,pCVar1);
  UpdateShopUI(this,aCStack_b8);
  TGACustomLevelData::TGACustomLevelData(aTStack_140);
  DString::DString(aDStack_150,0x14);
  __s = (char *)DString::c_str(aDStack_150);
  std::string::append((string *)aTStack_140,__s,in_x2);
  DString::~DString(aDStack_150);
  this_01 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogCustomLevel(this_01,aTStack_140);
  TGACustomLevelData::~TGACustomLevelData(aTStack_140);
  CustomLevelShopData::~CustomLevelShopData(aCStack_b8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelShop::OnShopBuyFinish(bool, S2C_ShopItemPurchaseInfo const*) */

void __thiscall
CustomLevelShop::OnShopBuyFinish
          (CustomLevelShop *this,bool param_1,S2C_ShopItemPurchaseInfo *param_2)

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
  undefined1 *puVar6;
  GAME_ITEM_INFO *__n;
  ulong uVar7;
  undefined8 uVar8;
  int iVar9;
  int local_3a8;
  undefined4 local_3a4;
  undefined4 local_3a0;
  int local_398 [4];
  int local_388 [6];
  string asStack_370 [24];
  undefined1 auStack_358 [8];
  undefined1 auStack_350 [64];
  undefined1 auStack_310 [40];
  undefined1 auStack_2e8 [16];
  undefined1 auStack_2d8 [352];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    if ((*(int *)(param_2 + 0x14) != 0xb) || (1 < *(int *)(param_2 + 0x20) - 0x5b6aU))
    goto LAB_04dd8398;
    uVar8 = *(undefined8 *)(this + 0x148);
    uVar3 = FUN_04dd32e8(uVar8,*(undefined8 *)(this + 0x150));
    for (uVar7 = 0; uVar7 < uVar3; uVar7 = uVar7 + 1) {
      puVar4 = (undefined8 *)FUN_04dd32f4(uVar8,uVar7);
      if ((CustomLevelShopCommonWidget *)*puVar4 != (CustomLevelShopCommonWidget *)0x0) {
        cVar1 = CustomLevelShopCommonWidget::CheckShopItem
                          ((CustomLevelShopCommonWidget *)*puVar4,param_2);
        if (cVar1 != '\0') {
          puVar4 = (undefined8 *)FUN_04dd32f4(*(undefined8 *)(this + 0x148),uVar7);
          CustomLevelShopCommonWidget::UpdateShopCommonWidget
                    ((CustomLevelShopCommonWidget *)*puVar4,param_2);
          break;
        }
        uVar8 = *(undefined8 *)(this + 0x148);
        uVar3 = FUN_04dd32e8(uVar8,*(undefined8 *)(this + 0x150));
      }
    }
    ProfileChangeItemAmount(*(int *)(param_2 + 0x20),-*(int *)(param_2 + 0x24),false);
    GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)asStack_370);
    iVar9 = *(int *)(param_2 + 0x18);
    if (iVar9 - 0x5a4aU < 2) {
      iVar9 = 0x5a48;
    }
    else if (iVar9 - 0x5a4cU < 2) {
      iVar9 = 0x5a49;
    }
    else if (iVar9 - 0x5a4eU < 2) {
      iVar9 = 0x5a36;
    }
    else if (iVar9 - 0x5a50U < 3) {
      iVar9 = 0x5a37;
    }
    ProfileChangeItemAmount(iVar9,*(int *)(param_2 + 0x1c),false);
    GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)asStack_370);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_388);
    local_3a0 = 0;
    local_3a4 = *(undefined4 *)(param_2 + 0x1c);
    local_3a8 = iVar9;
    std::vector<LotteryBonus,std::allocator<LotteryBonus>>::push_back
              ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)local_388,
               (LotteryBonus *)&local_3a8);
    this_02 = (DaveTreasureDataManager *)
              Sexy::LazySingleton<DaveTreasureDataManager>::GetInstancePtr();
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_370);
    __n = (GAME_ITEM_INFO *)asStack_370;
    DaveTreasureDataManager::ShowBonus(this_02,(vector *)local_388,(vector *)asStack_370);
    std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
              ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)asStack_370);
    TGACustomLevelData::TGACustomLevelData((TGACustomLevelData *)asStack_370);
    DString::DString((DString *)local_398,0x15);
    __s = (char *)DString::c_str((DString *)local_398);
    std::string::append(asStack_370,__s,(size_t)__n);
    DString::~DString((DString *)local_398);
    std::string::string((string *)local_398,"");
    uVar2 = operator|(0x10,8);
    FUN_05462618(auStack_2e8,(DString *)local_398,uVar2);
    std::string::~string((string *)local_398);
    nop();
    uVar8 = FUN_0546065c(auStack_2d8,iVar9);
    uVar8 = FUN_054603b8(uVar8,&DAT_05593348);
    uVar8 = FUN_0546065c(uVar8,*(undefined4 *)(param_2 + 0x1c));
    FUN_054603b8(uVar8,&DAT_05594620);
    FUN_05462824((DString *)local_398,auStack_2e8);
    FUN_05474278(auStack_310,(DString *)local_398);
    std::string::~string((string *)local_398);
    if (iVar9 == 0x5b6a) {
      std::string::string((string *)local_398,"");
      FUN_05462618(auStack_178,(DString *)local_398,uVar2);
      std::string::~string((string *)local_398);
      nop();
      uVar8 = FUN_054603b8(auStack_168,&DAT_055b29c0);
      uVar8 = FUN_0546065c(uVar8,*(undefined4 *)(param_2 + 0x1c));
      FUN_054603b8(uVar8,&DAT_05594620);
      FUN_05462824((DString *)local_398,auStack_178);
      FUN_05474278(auStack_358,(DString *)local_398);
      std::string::~string((string *)local_398);
      FUN_054617bc(auStack_178);
    }
    if (*(int *)(param_2 + 0x20) == 0x5b6b) {
      std::string::string((string *)local_398,"");
      FUN_05462618(auStack_178,(DString *)local_398,uVar2);
      std::string::~string((string *)local_398);
      nop();
      uVar8 = FUN_054603b8(auStack_168,&DAT_055cff18);
      uVar8 = FUN_0546065c(uVar8,*(undefined4 *)(param_2 + 0x24));
      FUN_054603b8(uVar8,&DAT_05594620);
      FUN_05462824((DString *)local_398,auStack_178);
      puVar6 = auStack_350;
LAB_04dd8800:
      FUN_05474278(puVar6,(DString *)local_398);
      std::string::~string((string *)local_398);
      FUN_054617bc(auStack_178);
    }
    else if (*(int *)(param_2 + 0x20) == 0x5b6a) {
      std::string::string((string *)local_398,"");
      FUN_05462618(auStack_178,(DString *)local_398,uVar2);
      std::string::~string((string *)local_398);
      nop();
      uVar8 = FUN_054603b8(auStack_168,&DAT_055cff18);
      uVar8 = FUN_0546065c(uVar8,*(undefined4 *)(param_2 + 0x24));
      FUN_054603b8(uVar8,&DAT_05594620);
      FUN_05462824((DString *)local_398,auStack_178);
      puVar6 = auStack_358;
      goto LAB_04dd8800;
    }
    this_03 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::LogCustomLevel(this_03,(TGACustomLevelData *)asStack_370);
    FUN_054617bc(auStack_2e8);
    TGACustomLevelData::~TGACustomLevelData((TGACustomLevelData *)asStack_370);
    std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
              ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)local_388);
  }
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  local_398[0] = PlayerInfo::GetMaterialNum(this_01,0x5b6a);
  std::string::string(asStack_370,"UIText_Currency");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_370);
  std::string::~string(asStack_370);
  nop();
  if (pUVar5 != (UIWidgetText *)0x0) {
    std::to_string<ActivityTypeID>((ActivityTypeID *)local_398);
    UIWidgetText::SetString(pUVar5,asStack_370);
    std::string::~string(asStack_370);
  }
  local_388[0] = PlayerInfo::GetMaterialNum(this_01,0x5b6b);
  std::string::string(asStack_370,"UIText_Currency2");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_370);
  std::string::~string(asStack_370);
  nop();
  if (pUVar5 != (UIWidgetText *)0x0) {
    std::to_string<ActivityTypeID>((ActivityTypeID *)local_388);
    UIWidgetText::SetString(pUVar5,asStack_370);
    std::string::~string(asStack_370);
  }
  MessageRouter::Post<int,int>
            ((MessageRouter *)gMessageRouter,Message::CustomLevelPlayCoinChanged,local_398[0]);
  MessageRouter::Post<int,int>
            ((MessageRouter *)gMessageRouter,Message::CustomLevelCreateCoinChanged,local_388[0]);
LAB_04dd8398:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

