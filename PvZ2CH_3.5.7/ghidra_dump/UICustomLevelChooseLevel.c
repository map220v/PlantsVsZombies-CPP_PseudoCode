// Class: UICustomLevelChooseLevel


/* UICustomLevelChooseLevel::ScrollTargetReached(Sexy::ScrollWidget*) */

void UICustomLevelChooseLevel::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UICustomLevelChooseLevel::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
UICustomLevelChooseLevel::ScrollTargetReached(UICustomLevelChooseLevel *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UICustomLevelChooseLevel::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UICustomLevelChooseLevel::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UICustomLevelChooseLevel::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UICustomLevelChooseLevel::ScrollTargetInterrupted
          (UICustomLevelChooseLevel *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelChooseLevel::GetLayoutName() */

void __thiscall UICustomLevelChooseLevel::GetLayoutName(UICustomLevelChooseLevel *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UICustomLevelChooseLevel");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UICustomLevelChooseLevel::AllisNum(std::string) */

undefined8 __thiscall UICustomLevelChooseLevel::AllisNum(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = 0;
  do {
    uVar2 = FUN_05474184(param_2);
    if (uVar2 <= uVar3) {
      return 1;
    }
    pbVar1 = (byte *)FUN_05474ee8(param_2,uVar3);
    uVar3 = uVar3 + 1;
  } while (*pbVar1 - 0x30 < 10);
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelChooseLevel::CreateFilterBtn(int, Sexy::Widget*) */

void __thiscall
UICustomLevelChooseLevel::CreateFilterBtn
          (UICustomLevelChooseLevel *this,int param_1,Widget *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  PVZ2UIButton *this_00;
  undefined1 auStack_80 [8];
  PVZ2UIImage aPStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 2) {
    iVar2 = 0x4b0;
  }
  else if (param_1 == 3) {
    iVar2 = 0x578;
  }
  else if (param_1 == 1) {
    iVar2 = 0x640;
  }
  else {
    iVar2 = 0;
    if (param_1 == 7) {
      iVar2 = 0x708;
    }
  }
  FUN_05478178(aPStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,iVar2,(ButtonListener *)(this + 0xd8),(wstring *)aPStack_78,(Color *)aPStack_40
            );
  FUN_05476c50(aPStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06aa7fb0,2);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06aa8400,2);
  PVZ2UIButton::SetDialogStates(this_00,aPStack_78,aPStack_40);
  iVar2 = FUN_035e74e0(0x1e);
  if (param_1 == 7) {
    iVar2 = FUN_035e74e0(0x32);
  }
  iVar3 = FUN_035e74e0(0x14);
  iVar1 = *(int *)(param_2 + 0x50);
  uVar4 = FUN_035e74e0(10);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,iVar1 + (iVar3 + iVar2) * -2,uVar4,iVar2,iVar2);
  (**(code **)(*(long *)param_2 + 0x60))(param_2,this_00);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelChooseLevel::CreateRefreshBtn(int, Sexy::Widget*) */

void __thiscall
UICustomLevelChooseLevel::CreateRefreshBtn
          (UICustomLevelChooseLevel *this,int param_1,Widget *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  PVZ2UIButton *this_00;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,0x3e9,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06aa7cf8,3);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06aa8428,3);
  PVZ2UIButton::SetDialogStates(this_00,(PVZ2UIImage *)awStack_78,aPStack_40);
  iVar2 = FUN_035e74e0(0x1e);
  iVar1 = *(int *)(param_2 + 0x50);
  iVar3 = FUN_035e74e0(0x14);
  uVar4 = FUN_035e74e0(10);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,(iVar1 - iVar2) - iVar3,uVar4,iVar2,iVar2);
  (**(code **)(*(long *)param_2 + 0x60))(param_2,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelChooseLevel::CreateFavorUI(int, Sexy::Widget*) */

void __thiscall
UICustomLevelChooseLevel::CreateFavorUI(UICustomLevelChooseLevel *this,int param_1,Widget *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  UIWidgetText *this_00;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  wstring awStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_2 != (Widget *)0x0) && (*(long *)(this + 0x230) == 0)) {
    iVar2 = FUN_035e74e0(200,param_1);
    uVar3 = FUN_035e74e0(0x28);
    iVar1 = *(int *)(param_2 + 0x50);
    uVar4 = FUN_035e74e0(5);
    TodStringTranslate(L"[CUSTOM_LEVEL_CHOOSE_LEVEL_HAS_FAVOR_NUM]");
    this_00 = ::operator_new(0x108);
    UIWidgetText::UIWidgetText(this_00,awStack_18);
    *(UIWidgetText **)(this + 0x230) = this_00;
    FUN_05476c50(awStack_18);
    (**(code **)(**(long **)(this + 0x230) + 0x198))
              (*(long **)(this + 0x230),iVar1 - iVar2,uVar4,iVar2,uVar3);
    lVar6 = *(long *)(this + 0x230);
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
    FUN_035e5cac(lVar6 + 0xe8,uVar5);
    FUN_035e5cb4(*(long *)(this + 0x230) + 0xe0,5);
    plVar7 = *(long **)(this + 0x230);
    pcVar8 = *(code **)(*plVar7 + 0x170);
    Sexy::Insets::Insets((Insets *)awStack_18,0x5f,0x40,0xb,0xff);
    (*pcVar8)(plVar7,0,awStack_18);
    (**(code **)(*(long *)param_2 + 0x60))(param_2,*(undefined8 *)(this + 0x230));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelChooseLevel::CreateSearchUI(int, Sexy::Widget*) */

void __thiscall
UICustomLevelChooseLevel::CreateSearchUI(UICustomLevelChooseLevel *this,int param_1,Widget *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  EditWidget *this_00;
  undefined8 uVar6;
  PVZ2UIButton *this_01;
  long *plVar7;
  code *pcVar8;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  this[(long)param_1 + 0x150] = (UICustomLevelChooseLevel)0x1;
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_035e74e0(0x32);
  iVar3 = FUN_035e74e0(0x96);
  uVar4 = FUN_035e74e0(10);
  iVar1 = *(int *)(param_2 + 0x50);
  iVar5 = FUN_035e74e0(0x14);
  iVar1 = iVar2 * -3 + iVar1 + iVar5 * -3;
  this_00 = ::operator_new(0x180);
  Sexy::EditWidget::EditWidget(this_00,0,(EditListener *)(this + 0x148));
  *(EditWidget **)(this + 0x250) = this_00;
  pcVar8 = *(code **)(*(long *)this_00 + 0x330);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  (*pcVar8)(this_00,uVar6,0);
  TodStringTranslate(L"[CUSTOM_LEVEL_SEARCH_DEFAULT_DESC]");
  (**(code **)(**(long **)(this + 0x250) + 0x340))(*(long **)(this + 0x250),auStack_80,1);
  plVar7 = *(long **)(this + 0x250);
  *(undefined1 *)((long)plVar7 + 0x16c) = 1;
  iVar5 = FUN_035e74e0(0x14);
  (**(code **)(*plVar7 + 0x198))(plVar7,iVar3 - iVar5,uVar4,iVar1 - iVar3,iVar2);
  (**(code **)(*(long *)param_2 + 0x60))(param_2,*(undefined8 *)(this + 0x250));
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_88);
  Sexy::Color::Color((Color *)aPStack_40,1);
  this_01 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_01,0x3ea,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06aa8450,2);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06aa8450,2);
  PVZ2UIButton::SetDialogStates(this_01,(PVZ2UIImage *)awStack_78,aPStack_40);
  (**(code **)(*(long *)this_01 + 0x198))(this_01,iVar1,uVar4,iVar2,iVar2);
  (**(code **)(*(long *)param_2 + 0x60))(param_2,this_01);
  FUN_05476c50(auStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UICustomLevelChooseLevel::GetCurrentTabID() */

void __thiscall UICustomLevelChooseLevel::GetCurrentTabID(UICustomLevelChooseLevel *this)

{
  if (*(UITabControl **)(this + 0x228) != (UITabControl *)0x0) {
    UITabControl::GetTabSelectedID(*(UITabControl **)(this + 0x228));
    return;
  }
  return;
}


/* UICustomLevelChooseLevel::SetSelectTab(int) */

void __thiscall UICustomLevelChooseLevel::SetSelectTab(UICustomLevelChooseLevel *this,int param_1)

{
  UITabContent *pUVar1;
  UITabControl *this_00;
  
  this_00 = *(UITabControl **)(this + 0x228);
  pUVar1 = (UITabContent *)UITabControl::GetTab(this_00,param_1);
  UITabControl::SetTabSelected(this_00,pUVar1);
  return;
}


/* UICustomLevelChooseLevel::onMostPlayFunc(CustomNetworkPreviewData const&, int) */

void UICustomLevelChooseLevel::onMostPlayFunc(CustomNetworkPreviewData *param_1,int param_2)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  CustomLevelMgr::RequestGetNetworkLevelDetails(this,*(int *)(ulong)(uint)param_2);
  return;
}


/* UICustomLevelChooseLevel::onMostLikeFunc(CustomNetworkPreviewData const&, int) */

void UICustomLevelChooseLevel::onMostLikeFunc(CustomNetworkPreviewData *param_1,int param_2)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  CustomLevelMgr::RequestGetNetworkLevelDetails(this,*(int *)(ulong)(uint)param_2);
  return;
}


/* UICustomLevelChooseLevel::onNewestFunc(CustomNetworkPreviewData const&, int) */

void UICustomLevelChooseLevel::onNewestFunc(CustomNetworkPreviewData *param_1,int param_2)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  CustomLevelMgr::RequestGetNetworkLevelDetails(this,*(int *)(ulong)(uint)param_2);
  return;
}


/* UICustomLevelChooseLevel::onFavorFunc(CustomNetworkPreviewData const&, int) */

void UICustomLevelChooseLevel::onFavorFunc(CustomNetworkPreviewData *param_1,int param_2)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  CustomLevelMgr::RequestGetNetworkLevelDetails(this,*(int *)(ulong)(uint)param_2);
  return;
}


/* UICustomLevelChooseLevel::onSearchFunc(CustomNetworkPreviewData const&, int) */

void UICustomLevelChooseLevel::onSearchFunc(CustomNetworkPreviewData *param_1,int param_2)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  CustomLevelMgr::RequestGetNetworkLevelDetails(this,*(int *)(ulong)(uint)param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelChooseLevel::OnSetCustomLevelGuessLikeEnable(bool) */

void __thiscall
UICustomLevelChooseLevel::OnSetCustomLevelGuessLikeEnable
          (UICustomLevelChooseLevel *this,bool param_1)

{
  UIWidgetImage *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Widget_1");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  (**(code **)(*(long *)pUVar1 + 0x158))(pUVar1,!param_1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelChooseLevel::InitView(int) */

void __thiscall UICustomLevelChooseLevel::InitView(UICustomLevelChooseLevel *this,int param_1)

{
  UITabControl *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UITabControl_0");
  pUVar1 = UI::Dialog::GetWidget<UITabControl>((Dialog *)this,asStack_10);
  *(UITabControl **)(this + 0x228) = pUVar1;
  std::string::~string(asStack_10);
  nop();
  UITabControl::SetListener(*(UITabControl **)(this + 0x228),(TabControlListener *)(this + 0x140));
  (**(code **)(*(long *)this + 0x350))(this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelChooseLevel::ShowRefreshCoolDownHint() */

void UICustomLevelChooseLevel::ShowRefreshCoolDownHint(void)

{
  UIMessageBox *this;
  Image *pIVar1;
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
  if (this != (UIMessageBox *)0x0) {
    UIMessageBox::SetShowType(this,2);
    TodStringTranslate(L"[REVIVE_TIP]");
    TodStringTranslate(L"[CUSTOM_LEVEL_CHOOSE_LEVEL_REFRESH_COOL_DOWN_DESC]");
    UIMessageBox::SetMessage(this,awStack_18,awStack_20);
    std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_BG_ROUND_GREEN");
    pIVar1 = (Image *)StringHelper::ToImage(asStack_10,false);
    UIMessageBox::SetBackground(this,pIVar1);
    std::string::~string(asStack_10);
    nop();
    FUN_05476c50(awStack_18);
    FUN_05476c50(awStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelChooseLevel::TriggerTutorial() */

void __thiscall UICustomLevelChooseLevel::TriggerTutorial(UICustomLevelChooseLevel *this)

{
  int iVar1;
  ProfileMgr *this_00;
  long lVar2;
  undefined8 uVar3;
  string asStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar2 = ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = FUN_035e5ca8(*(undefined4 *)(lVar2 + 0x40));
  if (iVar1 == 0x3d) {
    iVar1 = UITabControl::GetTabSelectedID(*(UITabControl **)(this + 0x228));
    if (iVar1 == 2) {
      lVar2 = UITabControl::GetTab(*(UITabControl **)(this + 0x228),3);
      if ((lVar2 != 0) && (lVar2 = FUN_035e5cbc(*(undefined8 *)(lVar2 + 0xd8)), lVar2 != 0)) {
        std::string::string(asStack_20,"[CUSTOM_LEVEL_TUTORIAL_21]");
        Sexy::Insets::Insets(aIStack_18);
        GameMaskUI::ShowMask(lVar2,1,asStack_20,aIStack_18);
        std::string::~string(asStack_20);
        nop();
      }
    }
    else if (*(long *)(this + 0x268) != 0) {
      LawnApp::KillGameMaskUI(gLawnApp);
      uVar3 = *(undefined8 *)(this + 0x268);
      std::string::string(asStack_20,"[CUSTOM_LEVEL_TUTORIAL_22]");
      Sexy::Insets::Insets(aIStack_18);
      GameMaskUI::ShowMask(uVar3,1,asStack_20,aIStack_18);
      std::string::~string(asStack_20);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UICustomLevelChooseLevel::OnCreate() */

undefined4 __thiscall UICustomLevelChooseLevel::OnCreate(UICustomLevelChooseLevel *this)

{
  char cVar1;
  undefined4 uVar2;
  ProfileMgr *this_00;
  PlayerInfo *pPVar3;
  
  uVar2 = UI::Dialog::OnCreate((Dialog *)this);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if ((pPVar3 != (PlayerInfo *)0x0) &&
     (cVar1 = PlayerInfo::PlayerHasCompletedTutorial(pPVar3,0x3d), cVar1 == '\0')) {
    PlayerInfo::SetActiveTutorial(pPVar3,0x3d);
  }
  InitView(this,1);
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelChooseLevel::CreateTabItems(int, Sexy::Widget*, CustomNetworkListData) */

void __thiscall
UICustomLevelChooseLevel::CreateTabItems
          (UICustomLevelChooseLevel *this,int param_1,long *param_2,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  PVZ2UIScrollingWidget *this_00;
  Image *pIVar7;
  Image *pIVar8;
  Widget *this_01;
  ProfileMgr *this_02;
  long lVar9;
  CustomLevelItemWidget *this_03;
  undefined8 uVar10;
  code *pcVar11;
  uint uVar12;
  Insets aIStack_70 [16];
  Insets aIStack_60 [16];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate2<CustomNetworkPreviewData_const&,int_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_035e74e0(5);
  iVar4 = FUN_035e5c60((int)param_2[10]);
  iVar5 = FUN_035e5c64(*(undefined4 *)((long)param_2 + 0x54));
  (**(code **)(*param_2 + 0x80))(param_2,1,1);
  iVar6 = FUN_035e5e44(*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x20));
  if (iVar6 != 0) {
    iVar2 = iVar4 + iVar3 * -5;
    iVar1 = iVar2 + 3;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    iVar1 = iVar1 >> 2;
    iVar2 = iVar3 + iVar1;
    this_00 = ::operator_new(0x248);
    PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
    Sexy::Insets::Insets(aIStack_70,0,0,iVar4,iVar5);
    (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_70);
    Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
    pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa7d20);
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa7e10);
    Sexy::ScrollWidget::EnableIndicators((ScrollWidget *)this_00,pIVar7,pIVar8);
    (**(code **)(*param_2 + 0x60))(param_2,this_00);
    this_01 = ::operator_new(0xd8);
    Sexy::Widget::Widget(this_01);
    (**(code **)(*(long *)this_01 + 0x198))
              (this_01,0,0,iVar4,iVar3 + iVar2 * (int)((float)iVar6 * 0.25));
    (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
    this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar9 = ProfileMgr::GetCurrentProfile(this_02);
    iVar4 = FUN_035e5ca8(*(undefined4 *)(lVar9 + 0x40));
    if (0 < iVar6) {
      lVar9 = 0;
      do {
        uVar12 = (uint)lVar9;
        Sexy::Insets::Insets
                  (aIStack_60,iVar3 + iVar2 * (uVar12 & 3),iVar3 + iVar2 * ((int)uVar12 >> 2),iVar1,
                   iVar1);
        this_03 = ::operator_new(0x2b0);
        CustomLevelItemWidget::CustomLevelItemWidget(this_03,uVar12);
        uVar10 = FUN_035e5e58(*(undefined8 *)(param_4 + 0x18),lVar9);
        (**(code **)(*(long *)this_03 + 0x318))(this_03,uVar10);
        (**(code **)(*(long *)this_03 + 0x1a0))(this_03,aIStack_60);
        (**(code **)(*(long *)this_03 + 0x310))(this_03,0);
        if (param_1 == 2) {
LAB_035ec390:
          pcVar11 = onMostPlayFunc;
LAB_035ec3a4:
          Sexy::
          MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                    ((ReceivedDataCallback *)this,pcVar11);
          Sexy::Delegate2<CustomNetworkPreviewData_const&,int_const&>::
          Delegate2<UICustomLevelChooseLevel,void(UICustomLevelChooseLevel::*)(CustomNetworkPreviewData_const&,int)>
                    (aDStack_38,aCStack_50);
          CustomLevelItemWidget::RegisterTouchCallBackFunc(this_03,aDStack_38);
        }
        else {
          if (param_1 == 3) {
            pcVar11 = onMostLikeFunc;
            goto LAB_035ec3a4;
          }
          if (param_1 == 4) {
            pcVar11 = onNewestFunc;
            goto LAB_035ec3a4;
          }
          if (param_1 == 6) {
            pcVar11 = onFavorFunc;
            goto LAB_035ec3a4;
          }
          if (param_1 == 7) {
            pcVar11 = onSearchFunc;
            goto LAB_035ec3a4;
          }
          if (param_1 == 1) goto LAB_035ec390;
        }
        (**(code **)(*(long *)this_01 + 0x60))(this_01,this_03);
        if ((uVar12 == 0) && (iVar4 == 0x3d)) {
          *(CustomLevelItemWidget **)(this + 0x268) = this_03;
        }
        lVar9 = lVar9 + 1;
      } while ((int)lVar9 < iVar6);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* UICustomLevelChooseLevel::~UICustomLevelChooseLevel() */

void __thiscall UICustomLevelChooseLevel::~UICustomLevelChooseLevel(UICustomLevelChooseLevel *this)

{
  *(undefined ***)this = &PTR_GetClass_06662040;
  *(undefined **)(this + 0xd8) = &DAT_066623a8;
  *(undefined ***)(this + 0x148) = &PTR_EditWidgetText_06662450;
  *(undefined ***)(this + 0x138) = &PTR__UICustomLevelChooseLevel_066623f0;
  *(undefined **)(this + 0x140) = &DAT_06662438;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>::~vector
            ((vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *)
             (this + 0x200));
  std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>::~vector
            ((vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>> *)
             (this + 0x1e8));
  std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>::~vector
            ((vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *)
             (this + 0x1d0));
  std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>::~vector
            ((vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>> *)
             (this + 0x1b8));
  std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>::~vector
            ((vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *)
             (this + 0x1a0));
  std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>::~vector
            ((vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>> *)
             (this + 0x188));
  std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>::~vector
            ((vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *)
             (this + 0x170));
  std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>::~vector
            ((vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>> *)
             (this + 0x158));
  UISingletonDialog<UICustomLevelChooseLevel>::~UISingletonDialog
            ((UISingletonDialog<UICustomLevelChooseLevel> *)this);
  return;
}


/* non-virtual thunk to UICustomLevelChooseLevel::~UICustomLevelChooseLevel() */

void __thiscall UICustomLevelChooseLevel::~UICustomLevelChooseLevel(UICustomLevelChooseLevel *this)

{
  ~UICustomLevelChooseLevel(this + -0x138);
  return;
}


/* UICustomLevelChooseLevel::~UICustomLevelChooseLevel() */

void __thiscall UICustomLevelChooseLevel::~UICustomLevelChooseLevel(UICustomLevelChooseLevel *this)

{
  ~UICustomLevelChooseLevel(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UICustomLevelChooseLevel::~UICustomLevelChooseLevel() */

void __thiscall UICustomLevelChooseLevel::~UICustomLevelChooseLevel(UICustomLevelChooseLevel *this)

{
  ~UICustomLevelChooseLevel(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelChooseLevel::RequestFilter(std::vector<CustomLevelNetworkWorldType,
   std::allocator<CustomLevelNetworkWorldType> >, std::vector<CustomLevelNetworkLevelMode,
   std::allocator<CustomLevelNetworkLevelMode> >) */

void __thiscall
UICustomLevelChooseLevel::RequestFilter
          (UICustomLevelChooseLevel *this,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_2,vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *param_3)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined8 uVar3;
  undefined8 uVar4;
  CustomLevelMgr *pCVar5;
  undefined8 uVar6;
  undefined4 unaff_w27;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_68 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_50 [24];
  vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>> avStack_38 [24];
  vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = UITabControl::GetTabSelectedID(*(UITabControl **)(this + 0x228));
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  cVar1 = PlayerInfo::GetCustomLevelGuessLikeEnable(this_01);
  if ((iVar2 == 1) && (cVar1 != '\0')) goto LAB_035f03b0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_68);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_50);
  if (iVar2 == 2) {
    unaff_w27 = *(undefined4 *)(this + 0x218);
    uVar6 = 0;
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(param_2);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(param_2);
    std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>::
    assign<__gnu_cxx::__normal_iterator<CustomLevelNetworkWorldType*,std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>>,void>
              ((vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>> *)
               (this + 0x158),uVar3,uVar4);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(param_3);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(param_3);
    std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>::
    assign<__gnu_cxx::__normal_iterator<CustomLevelNetworkLevelMode*,std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>>,void>
              ((vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *)
               (this + 0x170),uVar3,uVar4);
LAB_035f041c:
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(param_2);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(param_2);
    std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>::
    assign<__gnu_cxx::__normal_iterator<CustomLevelNetworkWorldType*,std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>>,void>
              ((vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>> *)
               avStack_68,uVar3,uVar4);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(param_3);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(param_3);
    std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>::
    assign<__gnu_cxx::__normal_iterator<CustomLevelNetworkLevelMode*,std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>>,void>
              ((vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *)
               avStack_50,uVar3,uVar4);
LAB_035f0460:
    pCVar5 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>::vector
              (avStack_38,(vector *)avStack_68);
    std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>::vector
              (avStack_20,(vector *)avStack_50);
    CustomLevelMgr::RequestGetViewPreviewList(pCVar5,avStack_38,avStack_20,uVar6,unaff_w27,0,100,0);
  }
  else {
    if (iVar2 == 3) {
      uVar3 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(param_2);
      uVar4 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(param_2);
      std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>::
      assign<__gnu_cxx::__normal_iterator<CustomLevelNetworkWorldType*,std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>>,void>
                ((vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>> *)
                 (this + 0x188),uVar3,uVar4);
      uVar3 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(param_3);
      uVar4 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(param_3);
      std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>::
      assign<__gnu_cxx::__normal_iterator<CustomLevelNetworkLevelMode*,std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>>,void>
                ((vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *)
                 (this + 0x1a0),uVar3,uVar4);
LAB_035f0414:
      uVar6 = 1;
      goto LAB_035f041c;
    }
    if (iVar2 == 1) {
      unaff_w27 = *(undefined4 *)(this + 0x220);
      uVar6 = 3;
      uVar3 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(param_2);
      uVar4 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(param_2);
      std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>::
      assign<__gnu_cxx::__normal_iterator<CustomLevelNetworkWorldType*,std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>>,void>
                ((vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>> *)
                 (this + 0x1b8),uVar3,uVar4);
      uVar3 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(param_3);
      uVar4 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(param_3);
      std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>::
      assign<__gnu_cxx::__normal_iterator<CustomLevelNetworkLevelMode*,std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>>,void>
                ((vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *)
                 (this + 0x1d0),uVar3,uVar4);
      uVar3 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(param_2);
      uVar4 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(param_2);
      std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>::
      assign<__gnu_cxx::__normal_iterator<CustomLevelNetworkWorldType*,std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>>,void>
                ((vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>> *)
                 avStack_68,uVar3,uVar4);
      uVar3 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(param_3);
      uVar4 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(param_3);
      std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>::
      assign<__gnu_cxx::__normal_iterator<CustomLevelNetworkLevelMode*,std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>>,void>
                ((vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *)
                 avStack_50,uVar3,uVar4);
      goto LAB_035f0460;
    }
    if (iVar2 != 7) goto LAB_035f0414;
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(param_2);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(param_2);
    std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>::
    assign<__gnu_cxx::__normal_iterator<CustomLevelNetworkWorldType*,std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>>,void>
              ((vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>> *)
               (this + 0x1e8),uVar3,uVar4);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(param_3);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(param_3);
    std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>::
    assign<__gnu_cxx::__normal_iterator<CustomLevelNetworkLevelMode*,std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>>,void>
              ((vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *)
               (this + 0x200),uVar3,uVar4);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(param_2);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(param_2);
    std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>::
    assign<__gnu_cxx::__normal_iterator<CustomLevelNetworkWorldType*,std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>>,void>
              ((vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>> *)
               avStack_68,uVar3,uVar4);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(param_3);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(param_3);
    std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>::
    assign<__gnu_cxx::__normal_iterator<CustomLevelNetworkLevelMode*,std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>>,void>
              ((vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *)
               avStack_50,uVar3,uVar4);
    pCVar5 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>::vector
              (avStack_38,(vector *)avStack_68);
    std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>::vector
              (avStack_20,(vector *)avStack_50);
    CustomLevelMgr::RequestGetSearchPreviewList(pCVar5,0,avStack_38,avStack_20);
  }
  std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>::~vector
            (avStack_20);
  std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>::~vector
            (avStack_38);
  std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>::~vector
            ((vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *)
             avStack_50);
  std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>::~vector
            ((vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>> *)
             avStack_68);
LAB_035f03b0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelChooseLevel::UICustomLevelChooseLevel() */

void __thiscall UICustomLevelChooseLevel::UICustomLevelChooseLevel(UICustomLevelChooseLevel *this)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  int local_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UICustomLevelChooseLevel>::UISingletonDialog
            ((UISingletonDialog<UICustomLevelChooseLevel> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  UI::TabControlListener::TabControlListener((TabControlListener *)(this + 0x140));
  Sexy::EditListener::EditListener((EditListener *)(this + 0x148));
  *(undefined ***)this = &PTR_GetClass_06662040;
  *(undefined **)(this + 0xd8) = &DAT_066623a8;
  *(undefined ***)(this + 0x138) = &PTR__UICustomLevelChooseLevel_066623f0;
  *(undefined **)(this + 0x140) = &DAT_06662438;
  *(undefined ***)(this + 0x148) = &PTR_EditWidgetText_06662450;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x158));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x170));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x188));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1a0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1d0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1e8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x200));
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined8 *)(this + 0x230) = 0;
  *(undefined8 *)(this + 0x250) = 0;
  *(undefined8 *)(this + 600) = 0;
  *(undefined8 *)(this + 0x238) = 0;
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined8 *)(this + 0x248) = 0;
  *(undefined8 *)(this + 0x260) = 0;
  *(undefined8 *)(this + 0x268) = 0;
  iVar3 = 0;
  do {
    local_20 = iVar3;
    std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>::push_back
              ((vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>> *)
               (this + 0x158),(CustomLevelNetworkWorldType *)&local_20);
    local_20 = iVar3;
    std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>::push_back
              ((vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>> *)
               (this + 0x188),(CustomLevelNetworkWorldType *)&local_20);
    local_20 = iVar3;
    std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>::push_back
              ((vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>> *)
               (this + 0x1b8),(CustomLevelNetworkWorldType *)&local_20);
    iVar1 = iVar3 + 1;
    local_20 = iVar3;
    std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>::push_back
              ((vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>> *)
               (this + 0x1e8),(CustomLevelNetworkWorldType *)&local_20);
    iVar3 = iVar1;
  } while (iVar1 != 0x15);
  iVar3 = 0;
  do {
    local_20 = iVar3;
    std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>::push_back
              ((vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *)
               (this + 0x170),(CustomLevelNetworkLevelMode *)&local_20);
    local_20 = iVar3;
    std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>::push_back
              ((vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *)
               (this + 0x1a0),(CustomLevelNetworkLevelMode *)&local_20);
    local_20 = iVar3;
    std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>::push_back
              ((vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *)
               (this + 0x1d0),(CustomLevelNetworkLevelMode *)&local_20);
    iVar1 = iVar3 + 1;
    local_20 = iVar3;
    std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>::push_back
              ((vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *)
               (this + 0x200),(CustomLevelNetworkLevelMode *)&local_20);
    iVar3 = iVar1;
  } while (iVar1 != 8);
  *(undefined4 *)(this + 0x218) = 0;
  *(undefined4 *)(this + 0x21c) = 0;
  *(undefined4 *)(this + 0x220) = 0;
  *(undefined4 *)(this + 0x224) = 0;
  *(undefined4 *)(this + 0x270) = 0;
  puVar2 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnRefresh);
  local_50 = local_28;
  local_60 = local_38;
  uStack_58 = uStack_30;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<UICustomLevelChooseLevel,void(UICustomLevelChooseLevel::*)(int)>>
            ((MessageRouter *)puVar2,Message::CustomLevelMainMenuRefresh,&local_60);
  puVar2 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,CustomLevelNetworkResponseReceived);
  local_80 = CONCAT44(uStack_1c,local_20);
  local_70 = local_10;
  uStack_78 = uStack_18;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<UICustomLevelChooseLevel,void(UICustomLevelChooseLevel::*)(int,int)>>
            ((MessageRouter *)puVar2,Message::CustomLevelNetworkResponseReceived,&local_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelChooseLevel::ButtonDepress(int) */

void __thiscall UICustomLevelChooseLevel::ButtonDepress(UICustomLevelChooseLevel *this,int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  TGALogMgr *pTVar4;
  long lVar5;
  long lVar6;
  CustomLevelMgr *pCVar7;
  size_t __n;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *__n_00;
  string asStack_b8 [8];
  string asStack_b0 [8];
  DString aDStack_a8 [24];
  TGACustomLevelData aTStack_90 [136];
  size_t local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != 0x4b0) {
    if (param_1 < 0x4b1) {
      if (param_1 == 0x3e9) {
        thunk_FUN_035eb854(gMessageRouter);
      }
      else if (param_1 == 0x3ea) {
        (**(code **)(**(long **)(this + 0x250) + 0x310))(asStack_b8,*(long **)(this + 0x250));
        FUN_035e4e48(asStack_b0);
        __n_00 = (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)0x0;
        lVar5 = FUN_05474368(asStack_b8,asStack_b0);
        if (lVar5 != -1) {
          lVar6 = FUN_05474184(asStack_b0);
          __n_00 = (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)
                   0xffffffffffffffff;
          FUN_05475ffc((string *)aTStack_90,asStack_b8,lVar6 + lVar5);
          FUN_05474278(asStack_b8,(string *)aTStack_90);
          std::string::~string((string *)aTStack_90);
        }
        cVar1 = FUN_0547419c(asStack_b8);
        if (cVar1 == '\0') {
          FUN_05475d88(aTStack_90,asStack_b8);
          cVar1 = AllisNum(this,aTStack_90);
          std::string::~string((string *)aTStack_90);
          if (cVar1 != '\0') {
            pcVar3 = (char *)FUN_0547429c(asStack_b8);
            iVar2 = atoi(pcVar3);
            pCVar7 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
            std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                      ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aDStack_a8);
            std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                      ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aTStack_90);
            __n_00 = (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aDStack_a8;
            CustomLevelMgr::RequestGetSearchPreviewList
                      (pCVar7,iVar2,
                       (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aDStack_a8,
                       aTStack_90);
            std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>::
            ~vector((vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>
                     *)aTStack_90);
            std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>::
            ~vector((vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>
                     *)aDStack_a8);
          }
        }
        TGACustomLevelData::TGACustomLevelData(aTStack_90);
        DString::DString(aDStack_a8,6);
        pcVar3 = (char *)DString::c_str(aDStack_a8);
        std::string::append((string *)aTStack_90,pcVar3,(size_t)__n_00);
        DString::~DString(aDStack_a8);
        pTVar4 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
        TGALogMgr::LogCustomLevel(pTVar4,aTStack_90);
        TGACustomLevelData::~TGACustomLevelData(aTStack_90);
        std::string::~string(asStack_b0);
        std::string::~string(asStack_b8);
      }
      goto LAB_035f4ab0;
    }
    if (((param_1 != 0x640) && (param_1 != 0x708)) && (param_1 != 0x578)) goto LAB_035f4ab0;
  }
  __n = ___stack_chk_guard;
  UISingletonDialog<UICustomLevelFilter>::ShowDialog();
  TGACustomLevelData::TGACustomLevelData(aTStack_90);
  DString::DString(aDStack_a8,7);
  pcVar3 = (char *)DString::c_str(aDStack_a8);
  std::string::append((string *)aTStack_90,pcVar3,__n);
  DString::~DString(aDStack_a8);
  pTVar4 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogCustomLevel(pTVar4,aTStack_90);
  TGACustomLevelData::~TGACustomLevelData(aTStack_90);
LAB_035f4ab0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to UICustomLevelChooseLevel::ButtonDepress(int) */

void __thiscall UICustomLevelChooseLevel::ButtonDepress(UICustomLevelChooseLevel *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelChooseLevel::OnClickComboBox(int) */

void __thiscall
UICustomLevelChooseLevel::OnClickComboBox(UICustomLevelChooseLevel *this,int param_1)

{
  CustomLevelMgr *pCVar1;
  char *__s;
  TGALogMgr *this_00;
  undefined8 uVar2;
  undefined8 uVar3;
  vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *__n;
  UICustomLevelChooseLevel *this_01;
  UICustomLevelChooseLevel *this_02;
  int unaff_w24;
  undefined4 unaff_w26;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_d8 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_c0 [24];
  vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>> avStack_a8 [24];
  vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> avStack_90 [136];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_d8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_c0);
  if (param_1 < 0x6a4) {
    if (param_1 < 0x5dc) {
      if (param_1 < 0x514) {
        if (param_1 < 0x44c) goto LAB_035f4cdc;
        this_02 = this + 0x158;
        unaff_w24 = param_1 + -0x44d;
        *(int *)(this + 0x218) = unaff_w24;
        unaff_w26 = 0;
        this_01 = this + 0x170;
      }
      else {
        this_02 = this + 0x188;
        unaff_w24 = param_1 + -0x515;
        *(int *)(this + 0x21c) = unaff_w24;
        unaff_w26 = 1;
        this_01 = this + 0x1a0;
      }
    }
    else {
      this_02 = this + 0x1b8;
      unaff_w24 = param_1 + -0x5dd;
      *(int *)(this + 0x220) = unaff_w24;
      unaff_w26 = 3;
      this_01 = this + 0x1d0;
    }
  }
  else {
    this_02 = this + 0x1e8;
    unaff_w24 = param_1 + -0x6a5;
    *(int *)(this + 0x224) = unaff_w24;
    unaff_w26 = 4;
    this_01 = this + 0x200;
  }
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)this_02);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)this_02);
  std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>::
  assign<__gnu_cxx::__normal_iterator<CustomLevelNetworkWorldType*,std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>>,void>
            ((vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>> *)
             avStack_d8,uVar2,uVar3);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)this_01);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)this_01);
  std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>::
  assign<__gnu_cxx::__normal_iterator<CustomLevelNetworkLevelMode*,std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>>,void>
            ((vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *)
             avStack_c0,uVar2,uVar3);
LAB_035f4cdc:
  pCVar1 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>::vector
            (avStack_a8,(vector *)avStack_d8);
  std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>::vector
            (avStack_90,(vector *)avStack_c0);
  __n = avStack_90;
  CustomLevelMgr::RequestGetViewPreviewList
            (pCVar1,avStack_a8,avStack_90,unaff_w26,unaff_w24,0,100,0);
  std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>::~vector
            (avStack_90);
  std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>::~vector
            (avStack_a8);
  TGACustomLevelData::TGACustomLevelData((TGACustomLevelData *)avStack_90);
  DString::DString((DString *)avStack_a8,10);
  __s = (char *)DString::c_str((DString *)avStack_a8);
  std::string::append((string *)avStack_90,__s,(size_t)__n);
  DString::~DString((DString *)avStack_a8);
  this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogCustomLevel(this_00,(TGACustomLevelData *)avStack_90);
  TGACustomLevelData::~TGACustomLevelData((TGACustomLevelData *)avStack_90);
  std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>::~vector
            ((vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *)
             avStack_c0);
  std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>::~vector
            ((vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>> *)
             avStack_d8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelChooseLevel::CreateRankSortBtn(int, Sexy::Widget*) */

void __thiscall
UICustomLevelChooseLevel::CreateRankSortBtn
          (UICustomLevelChooseLevel *this,int param_1,Widget *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ComboBox *this_00;
  code *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  wstring awStack_50 [24];
  Delegate1<int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnClickComboBox);
  Sexy::Delegate1<int>::Delegate1<UICustomLevelChooseLevel,void(UICustomLevelChooseLevel::*)(int)>
            (aDStack_38,awStack_50);
  this_00 = ::operator_new(0x138);
  ComboBox::ComboBox(this_00,aDStack_38);
  if (param_1 == 2) {
    iVar6 = 0x44d;
    iVar7 = 0x44e;
    pcVar4 = *(code **)(*(long *)this_00 + 0x318);
    TodStringTranslate(L"[CUSTOM_LEVEL_CHOOSE_LEVEL_RANK_TYPE_2]");
    iVar5 = 0x44f;
    (*pcVar4)(this_00,0x44c,awStack_50);
    FUN_05476c50(awStack_50);
  }
  else if (param_1 == 3) {
    iVar6 = 0x515;
    iVar7 = 0x516;
    pcVar4 = *(code **)(*(long *)this_00 + 0x318);
    TodStringTranslate(L"[CUSTOM_LEVEL_CHOOSE_LEVEL_RANK_TYPE_2]");
    iVar5 = 0x517;
    (*pcVar4)(this_00,0x514,awStack_50);
    FUN_05476c50(awStack_50);
  }
  else if (param_1 == 1) {
    iVar6 = 0x5dd;
    iVar7 = 0x5de;
    pcVar4 = *(code **)(*(long *)this_00 + 0x318);
    TodStringTranslate(L"[CUSTOM_LEVEL_CHOOSE_LEVEL_RANK_TYPE_2]");
    iVar5 = 0x5df;
    (*pcVar4)(this_00,0x5dc,awStack_50);
    FUN_05476c50(awStack_50);
  }
  else if (param_1 == 7) {
    iVar6 = 0x6a5;
    iVar7 = 0x6a6;
    pcVar4 = *(code **)(*(long *)this_00 + 0x318);
    TodStringTranslate(L"[CUSTOM_LEVEL_CHOOSE_LEVEL_RANK_TYPE_2]");
    iVar5 = 0x6a7;
    (*pcVar4)(this_00,0x6a4,awStack_50);
    FUN_05476c50(awStack_50);
  }
  else {
    iVar6 = 1;
    iVar7 = 2;
    iVar5 = 3;
  }
  uVar1 = FUN_035e74e0(0x1e);
  uVar2 = FUN_035e74e0(10);
  uVar3 = FUN_035e74e0(100);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar1,uVar2,uVar3,uVar1);
  TodStringTranslate(L"[CUSTOM_LEVEL_CHOOSE_LEVEL_RANK_TYPE_2]");
  ComboBox::AddSubMenu(this_00,iVar5,awStack_50);
  FUN_05476c50(awStack_50);
  TodStringTranslate(L"[CUSTOM_LEVEL_CHOOSE_LEVEL_RANK_TYPE_1]");
  ComboBox::AddSubMenu(this_00,iVar7,awStack_50);
  FUN_05476c50(awStack_50);
  TodStringTranslate(L"[CUSTOM_LEVEL_CHOOSE_LEVEL_RANK_TYPE_0]");
  ComboBox::AddSubMenu(this_00,iVar6,awStack_50);
  FUN_05476c50(awStack_50);
  OnClickComboBox(this,iVar5);
  (**(code **)(*(long *)param_2 + 0x60))(param_2,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelChooseLevel::TabSelectionChanged(int) */

void __thiscall
UICustomLevelChooseLevel::TabSelectionChanged(UICustomLevelChooseLevel *this,int param_1)

{
  int iVar1;
  UICustomLevelChooseLevel UVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  ProfileMgr *pPVar6;
  PlayerInfo *pPVar7;
  Widget *pWVar8;
  CustomLevelMgr *pCVar9;
  char *pcVar10;
  TGALogMgr *pTVar11;
  int iVar12;
  size_t __n;
  undefined4 uVar13;
  string asStack_f8 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_f0 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_d8 [24];
  vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>> avStack_c0 [24];
  int local_a8 [6];
  TGACustomLevelData aTStack_90 [136];
  size_t local_8;
  
  local_8 = ___stack_chk_guard;
  __n = ___stack_chk_guard;
  Sexy::OutputDebugStrF((wchar_t *)"UICustomLevelChooseLevel::TabSelectionChanged id = %d");
  TGACustomLevelData::TGACustomLevelData(aTStack_90);
  iVar12 = param_1;
  if ((param_1 != 2) && (param_1 != 3)) {
    if (param_1 == 6) {
      iVar12 = 4;
      goto LAB_035f51fc;
    }
    if (param_1 == 7) {
      iVar12 = 5;
      goto LAB_035f51fc;
    }
    if (param_1 != 1) {
      pPVar6 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar7 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar6);
      PlayerInfo::GetCustomLevelGuessLikeEnable(pPVar7);
      UVar2 = this[(long)param_1 + 0x150];
      goto joined_r0x035f51b0;
    }
    DString::DString((DString *)local_a8,0x16);
    pcVar10 = (char *)DString::c_str((DString *)local_a8);
    std::string::append((string *)aTStack_90,pcVar10,__n);
    DString::~DString((DString *)local_a8);
    pTVar11 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::LogCustomLevel(pTVar11,aTStack_90);
    pPVar6 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar7 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar6);
    cVar5 = PlayerInfo::GetCustomLevelGuessLikeEnable(pPVar7);
    if ((cVar5 != '\0') || (this[0x151] != (UICustomLevelChooseLevel)0x0)) goto LAB_035f51bc;
    Sexy::StrFormat("UITab_%d",asStack_f8,1);
    pWVar8 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_f8);
    bVar3 = true;
LAB_035f53ec:
    bVar4 = false;
    CreateRefreshBtn(this,1,pWVar8);
    CreateFilterBtn(this,1,pWVar8);
    goto LAB_035f5434;
  }
LAB_035f51fc:
  DString::DString((DString *)local_a8,iVar12);
  pcVar10 = (char *)DString::c_str((DString *)local_a8);
  std::string::append((string *)aTStack_90,pcVar10,__n);
  DString::~DString((DString *)local_a8);
  pTVar11 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogCustomLevel(pTVar11,aTStack_90);
  pPVar6 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar7 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar6);
  PlayerInfo::GetCustomLevelGuessLikeEnable(pPVar7);
  UVar2 = this[(long)param_1 + 0x150];
joined_r0x035f51b0:
  if (UVar2 != (UICustomLevelChooseLevel)0x0) {
    if (param_1 == 6) {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_f0);
      iVar12 = 0;
      do {
        iVar1 = iVar12 + 1;
        local_a8[0] = iVar12;
        std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>::
        push_back((vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>> *
                  )avStack_f0,
                  (vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *
                  )local_a8);
        iVar12 = iVar1;
      } while (iVar1 != 0x15);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_d8);
      iVar12 = 0;
      do {
        iVar1 = iVar12 + 1;
        local_a8[0] = iVar12;
        std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>::
        push_back((vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *
                  )avStack_d8,
                  (vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *
                  )local_a8);
        iVar12 = iVar1;
      } while (iVar1 != 8);
      pCVar9 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
      std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>::vector
                (avStack_c0,(vector *)avStack_f0);
      std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>::vector
                ((vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *)
                 local_a8,(vector *)avStack_d8);
      CustomLevelMgr::RequestGetViewPreviewList
                (pCVar9,avStack_c0,
                 (vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *)
                 local_a8,2,0,0,100,0);
      std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>::~vector
                ((vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *)
                 local_a8);
      std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>::~vector
                (avStack_c0);
      std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>::~vector
                ((vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *)
                 avStack_d8);
      std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>::~vector
                ((vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>> *)
                 avStack_f0);
    }
    goto LAB_035f51bc;
  }
  bVar3 = param_1 == 1;
  Sexy::StrFormat("UITab_%d",asStack_f8,(ulong)(uint)param_1);
  pWVar8 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_f8);
  bVar4 = param_1 == 6;
  if ((param_1 - 2U < 3) || (bVar4)) {
    if (param_1 - 2U < 2) {
      CreateRankSortBtn(this,param_1,pWVar8);
      CreateFilterBtn(this,param_1,pWVar8);
      CreateRefreshBtn(this,param_1,pWVar8);
    }
    else {
      if (!bVar4) goto LAB_035f5420;
      CreateFavorUI(this,6,pWVar8);
    }
LAB_035f5434:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_f0);
    iVar12 = 0;
    do {
      iVar1 = iVar12 + 1;
      local_a8[0] = iVar12;
      std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>::
      push_back((vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>> *)
                avStack_f0,
                (vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *)
                local_a8);
      iVar12 = iVar1;
    } while (iVar1 != 0x15);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_d8);
    iVar12 = 0;
    do {
      iVar1 = iVar12 + 1;
      local_a8[0] = iVar12;
      std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>::
      push_back((vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *)
                avStack_d8,
                (vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *)
                local_a8);
      iVar12 = iVar1;
    } while (iVar1 != 8);
    if (param_1 == 2) {
      uVar13 = 0;
    }
    else if (param_1 == 3) {
      uVar13 = 1;
    }
    else if (bVar4) {
      uVar13 = 2;
    }
    else if (bVar3) {
      uVar13 = 3;
    }
    else {
      uVar13 = 4;
      if (param_1 != 7) {
        uVar13 = 0;
      }
    }
    pCVar9 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>::vector
              (avStack_c0,(vector *)avStack_f0);
    std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>::vector
              ((vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *)
               local_a8,(vector *)avStack_d8);
    CustomLevelMgr::RequestGetViewPreviewList
              (pCVar9,avStack_c0,
               (vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *)
               local_a8,uVar13,0,0,100,0);
    std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>::~vector
              ((vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *)
               local_a8);
    std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>::~vector
              (avStack_c0);
    std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>::~vector
              ((vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *)
               avStack_d8);
    std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>::~vector
              ((vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>> *)
               avStack_f0);
  }
  else if ((bVar3) || (param_1 == 7)) {
LAB_035f5420:
    if (param_1 == 7) {
      bVar4 = false;
      CreateFilterBtn(this,7,pWVar8);
      CreateSearchUI(this,7,pWVar8);
    }
    else {
      bVar4 = false;
      if (bVar3) goto LAB_035f53ec;
    }
    goto LAB_035f5434;
  }
  std::string::~string(asStack_f8);
LAB_035f51bc:
  TGACustomLevelData::~TGACustomLevelData(aTStack_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UICustomLevelChooseLevel::TabSelectionChanged(int) */

void __thiscall
UICustomLevelChooseLevel::TabSelectionChanged(UICustomLevelChooseLevel *this,int param_1)

{
  TabSelectionChanged(this + -0x140,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelChooseLevel::OnRefresh(int) */

void __thiscall UICustomLevelChooseLevel::OnRefresh(UICustomLevelChooseLevel *this,int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  ulong uVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *__s;
  TGALogMgr *this_02;
  CustomLevelMgr *pCVar9;
  ulong uVar10;
  UICustomLevelChooseLevel *this_03;
  UICustomLevelChooseLevel *this_04;
  size_t __n;
  undefined4 uVar11;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 local_3b8;
  undefined8 local_3b0;
  vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>> avStack_3a0 [24];
  DString aDStack_388 [24];
  int local_370 [10];
  undefined1 auStack_348 [8];
  undefined1 auStack_340 [88];
  undefined1 auStack_2e8 [16];
  undefined1 auStack_2d8 [352];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = TimeUtil::CheckTimeEclapse(5.0,*(float *)(this + 0x270));
  if (cVar2 == '\0') {
    ShowRefreshCoolDownHint();
  }
  else {
    uVar11 = PVZ_T();
    *(undefined4 *)(this + 0x270) = uVar11;
    if (param_1 == 0) {
      iVar3 = UITabControl::GetTabSelectedID(*(UITabControl **)(this + 0x228));
      switch(iVar3) {
      case 1:
      case 2:
      case 3:
      case 4:
      case 6:
      case 7:
        goto switchD_035f569c_caseD_1;
      default:
        break;
      }
    }
  }
  goto switchD_035f569c_caseD_5;
switchD_035f569c_caseD_1:
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_3d0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_3b8);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  cVar2 = PlayerInfo::GetCustomLevelGuessLikeEnable(this_01);
  if ((cVar2 != '\0') && (iVar3 == 1)) {
    std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>::~vector
              ((vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *)
               &local_3b8);
    std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>::~vector
              ((vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>> *)
               &local_3d0);
    goto switchD_035f569c_caseD_5;
  }
  if (iVar3 == 2) {
    unaff_s9 = *(undefined4 *)(this + 0x218);
    this_04 = this + 0x158;
    unaff_s8 = 0;
    this_03 = this + 0x170;
LAB_035f5820:
    uVar7 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)this_04);
    uVar8 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)this_04);
    std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>::
    assign<__gnu_cxx::__normal_iterator<CustomLevelNetworkWorldType*,std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>>,void>
              ((vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>> *)
               &local_3d0,uVar7,uVar8);
    uVar7 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)this_03);
    uVar8 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)this_03);
    std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>::
    assign<__gnu_cxx::__normal_iterator<CustomLevelNetworkLevelMode*,std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>>,void>
              ((vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *)
               &local_3b8,uVar7,uVar8);
  }
  else {
    if (iVar3 == 3) {
      unaff_s9 = *(undefined4 *)(this + 0x21c);
      this_04 = this + 0x188;
      this_03 = this + 0x1a0;
      unaff_s8 = 1;
      goto LAB_035f5820;
    }
    if (iVar3 == 6) {
      local_370[0] = 0;
      do {
        iVar3 = local_370[0] + 1;
        std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>::
        push_back((vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>> *
                  )&local_3d0,(CustomLevelNetworkWorldType *)local_370);
        local_370[0] = iVar3;
      } while (iVar3 != 0x15);
      iVar3 = 0;
      do {
        iVar1 = iVar3 + 1;
        local_370[0] = iVar3;
        std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>::
        push_back((vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *
                  )&local_3b8,(CustomLevelNetworkLevelMode *)local_370);
        iVar3 = iVar1;
      } while (iVar1 != 8);
      unaff_s8 = 2;
    }
    else if (iVar3 == 1) {
      local_370[0] = 0;
      do {
        iVar3 = local_370[0] + 1;
        std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>::
        push_back((vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>> *
                  )&local_3d0,(CustomLevelNetworkWorldType *)local_370);
        local_370[0] = iVar3;
      } while (iVar3 != 0x15);
      iVar3 = 0;
      do {
        iVar1 = iVar3 + 1;
        local_370[0] = iVar3;
        std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>::
        push_back((vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *
                  )&local_3b8,(CustomLevelNetworkLevelMode *)local_370);
        iVar3 = iVar1;
      } while (iVar1 != 8);
      unaff_s8 = 3;
    }
    else if (iVar3 == 7) {
      local_370[0] = 0;
      do {
        iVar3 = local_370[0] + 1;
        std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>::
        push_back((vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>> *
                  )&local_3d0,(CustomLevelNetworkWorldType *)local_370);
        local_370[0] = iVar3;
      } while (iVar3 != 0x15);
      iVar3 = 0;
      do {
        iVar1 = iVar3 + 1;
        local_370[0] = iVar3;
        std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>::
        push_back((vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *
                  )&local_3b8,(CustomLevelNetworkLevelMode *)local_370);
        iVar3 = iVar1;
      } while (iVar1 != 8);
      unaff_s8 = 4;
    }
  }
  uVar10 = 0;
  std::string::string((string *)local_370,"");
  uVar4 = operator|(0x10,8);
  __n = (size_t)uVar4;
  FUN_05462618(auStack_2e8,(string *)local_370,uVar4);
  std::string::~string((string *)local_370);
  nop();
  std::string::string((string *)local_370,"");
  FUN_05462618(auStack_178,(string *)local_370);
  std::string::~string((string *)local_370);
  nop();
  while (uVar7 = local_3d0, uVar5 = FUN_035e5e64(local_3d0,local_3c8), uVar10 < uVar5) {
    if (uVar10 == uVar5 - 1) {
      puVar6 = (undefined4 *)FUN_035e5e70(uVar7,uVar10);
      uVar10 = uVar10 + 1;
      FUN_0546065c(auStack_2d8,*puVar6);
    }
    else {
      puVar6 = (undefined4 *)FUN_035e5e70(uVar7,uVar10);
      uVar10 = uVar10 + 1;
      uVar7 = FUN_0546065c(auStack_2d8,*puVar6);
      FUN_054603b8(uVar7,&DAT_05593348);
    }
  }
  uVar10 = 0;
  while (uVar7 = local_3b8, uVar5 = FUN_035e5e78(local_3b8,local_3b0), uVar10 < uVar5) {
    if (uVar10 == uVar5 - 1) {
      puVar6 = (undefined4 *)FUN_035e5e84(uVar7,uVar10);
      uVar10 = uVar10 + 1;
      FUN_0546065c(auStack_168,*puVar6);
    }
    else {
      puVar6 = (undefined4 *)FUN_035e5e84(uVar7,uVar10);
      uVar10 = uVar10 + 1;
      uVar7 = FUN_0546065c(auStack_168,*puVar6);
      FUN_054603b8(uVar7,&DAT_05593348);
    }
  }
  TGACustomLevelData::TGACustomLevelData((TGACustomLevelData *)local_370);
  DString::DString(aDStack_388,9);
  __s = (char *)DString::c_str(aDStack_388);
  std::string::append((string *)local_370,__s,__n);
  DString::~DString(aDStack_388);
  FUN_05462824(aDStack_388,auStack_2e8);
  FUN_05474278(auStack_348,aDStack_388);
  std::string::~string((string *)aDStack_388);
  FUN_05462824(aDStack_388,auStack_178);
  FUN_05474278(auStack_340,aDStack_388);
  std::string::~string((string *)aDStack_388);
  this_02 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogCustomLevel(this_02,(TGACustomLevelData *)local_370);
  pCVar9 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>::vector
            (avStack_3a0,(vector *)&local_3d0);
  std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>::vector
            ((vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *)
             aDStack_388,(vector *)&local_3b8);
  CustomLevelMgr::RequestGetViewPreviewList
            (pCVar9,avStack_3a0,aDStack_388,unaff_s8,unaff_s9,0,100,1);
  std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>::~vector
            ((vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *)
             aDStack_388);
  std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>::~vector
            (avStack_3a0);
  TGACustomLevelData::~TGACustomLevelData((TGACustomLevelData *)local_370);
  FUN_054617bc(auStack_178);
  FUN_054617bc(auStack_2e8);
  std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>::~vector
            ((vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *)
             &local_3b8);
  std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>::~vector
            ((vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>> *)
             &local_3d0);
switchD_035f569c_caseD_5:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelChooseLevel::CustomLevelNetworkResponseReceived(int, int) */

void __thiscall
UICustomLevelChooseLevel::CustomLevelNetworkResponseReceived
          (UICustomLevelChooseLevel *this,int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  CustomLevelMgr *pCVar5;
  CustomNetworkListData *pCVar6;
  ProfileMgr *this_00;
  PlayerInfo *pPVar7;
  CustomNetworkUploadData *pCVar8;
  UICustomLevelLevelDetailShare *this_01;
  undefined8 uVar9;
  UIWidgetImage *pUVar10;
  UIMessageBox *this_02;
  Image *pIVar11;
  string asStack_128 [8];
  wstring awStack_120 [8];
  string asStack_118 [8];
  CustomNetworkListData aCStack_110 [24];
  undefined8 local_f8;
  undefined8 local_f0;
  CustomNetworkUploadData aCStack_d8 [208];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = UISingletonDialog<UICustomLevelMainMenu>::GetSingletonPtr();
  iVar2 = FUN_035e5d18(*(undefined4 *)(lVar4 + 0x1d4));
  if (iVar2 != 0) goto LAB_035f75f4;
  if (param_2 != 2) {
    if (param_2 == 3) {
      Sexy::OutputDebugStrF
                ((wchar_t *)
                 "UICustomLevelChooseLevel::CustomLevelNetworkResponseReceived ResponseFailNetwork context=%d"
                 ,(ulong)(uint)param_1);
    }
    else if (param_2 == 4) {
      Sexy::OutputDebugStrF
                ((wchar_t *)
                 "UICustomLevelChooseLevel::CustomLevelNetworkResponseReceived ResponseFailInvalidData context=%d"
                 ,(ulong)(uint)param_1);
    }
    goto LAB_035f75f4;
  }
  pCVar5 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  pCVar6 = (CustomNetworkListData *)CustomLevelMgr::GetNetworkPreviewListData(pCVar5);
  CustomNetworkListData::CustomNetworkListData(aCStack_110,pCVar6);
  uVar3 = UITabControl::GetTabSelectedID(*(UITabControl **)(this + 0x228));
  if (param_1 == 4) {
    if (this[(long)(int)uVar3 + 0x150] == (UICustomLevelChooseLevel)0x0) {
      this[(long)(int)uVar3 + 0x150] = (UICustomLevelChooseLevel)0x1;
    }
    if ((uVar3 == 6) && (*(long *)(this + 0x230) != 0)) {
      FUN_05478178((wstring *)aCStack_d8,L"[CUSTOM_LEVEL_CHOOSE_LEVEL_HAS_FAVOR_NUM]",awStack_120);
      iVar2 = FUN_035e5e44(local_f8,local_f0);
      TodReplaceNumberString((wstring *)aCStack_d8,L"{NUMS}",iVar2);
      FUN_05476c50((wstring *)aCStack_d8);
      nop();
      PuzzleTip::SetTip(*(undefined8 *)(this + 0x230),asStack_118);
      FUN_05476c50(asStack_118);
    }
    Sexy::StrFormat("Widget_%d",asStack_118,(ulong)uVar3);
    uVar9 = FUN_0547429c(asStack_118);
    Sexy::OutputDebugStrF((wchar_t *)"UICustomLevelChooseLevel create tab names : %s",uVar9);
    pUVar10 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_118);
    if (pUVar10 != (UIWidgetImage *)0x0) {
      CustomNetworkListData::CustomNetworkListData((CustomNetworkListData *)aCStack_d8,aCStack_110);
      CreateTabItems(this,uVar3,pUVar10,(CustomNetworkListData *)aCStack_d8);
      CustomNetworkListData::~CustomNetworkListData((CustomNetworkListData *)aCStack_d8);
    }
    std::string::~string(asStack_118);
LAB_035f7674:
    lVar4 = FUN_035e5e44(local_f8,local_f0);
    if (lVar4 == 0) {
      this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar7 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
      iVar2 = FUN_035e5ca8(*(undefined4 *)(pPVar7 + 0x40));
      if (iVar2 == 0x3d) {
        PlayerInfo::SetActiveTutorial(pPVar7,0);
      }
    }
    else {
      TriggerTutorial(this);
    }
  }
  else {
    if (param_1 == 6) {
      Sexy::StrFormat("Widget_%d",asStack_128,(ulong)uVar3);
      uVar9 = FUN_0547429c(asStack_128);
      Sexy::OutputDebugStrF((wchar_t *)"UICustomLevelChooseLevel create tab names : %s",uVar9);
      pUVar10 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_128);
      if (pUVar10 != (UIWidgetImage *)0x0) {
        CustomNetworkListData::CustomNetworkListData
                  ((CustomNetworkListData *)aCStack_d8,aCStack_110);
        CreateTabItems(this,uVar3,pUVar10,(CustomNetworkListData *)aCStack_d8);
        CustomNetworkListData::~CustomNetworkListData((CustomNetworkListData *)aCStack_d8);
        cVar1 = std::vector<CustomNetworkPreviewData,std::allocator<CustomNetworkPreviewData>>::
                empty((vector<CustomNetworkPreviewData,std::allocator<CustomNetworkPreviewData>> *)
                      &local_f8);
        if ((cVar1 != '\0') &&
           (this_02 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog(),
           this_02 != (UIMessageBox *)0x0)) {
          UIMessageBox::SetShowType(this_02,2);
          TodStringTranslate(L"[REVIVE_TIP]");
          TodStringTranslate(L"[CUSTOM_LEVEL_INVALID_LEVEL_ID]");
          UIMessageBox::SetMessage(this_02,(wstring *)asStack_118,awStack_120);
          std::string::string((string *)aCStack_d8,"IMAGE_UI_DIALOG_ASSET_BG_ROUND_GREEN");
          pIVar11 = (Image *)StringHelper::ToImage((string *)aCStack_d8,false);
          UIMessageBox::SetBackground(this_02,pIVar11);
          std::string::~string((string *)aCStack_d8);
          nop();
          FUN_05476c50((wstring *)asStack_118);
          FUN_05476c50(awStack_120);
        }
      }
      std::string::~string(asStack_128);
      goto LAB_035f7674;
    }
    if (param_1 != 3) goto LAB_035f7674;
    pCVar5 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    pCVar8 = (CustomNetworkUploadData *)CustomLevelMgr::GetNetworkLevelDetails(pCVar5);
    CustomNetworkUploadData::CustomNetworkUploadData(aCStack_d8,pCVar8);
    this_01 = (UICustomLevelLevelDetailShare *)
              UISingletonDialog<UICustomLevelLevelDetail>::ShowDialog();
    UICustomLevelLevelDetailShare::LoadData(this_01,aCStack_d8);
    FUN_035e5d1c(this_01 + 0x20c,0);
    UICustomLevelLevelDetail::InitView((UICustomLevelLevelDetail *)this_01,0);
    UICustomLevelLevelDetail::TriggerTutorial((UICustomLevelLevelDetail *)this_01,2);
    CustomNetworkUploadData::~CustomNetworkUploadData(aCStack_d8);
  }
  CustomNetworkListData::~CustomNetworkListData(aCStack_110);
LAB_035f75f4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

