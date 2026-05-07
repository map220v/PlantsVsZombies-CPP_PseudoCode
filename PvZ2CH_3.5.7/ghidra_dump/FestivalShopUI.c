// Class: FestivalShopUI


/* FestivalShopUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void FestivalShopUI::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to FestivalShopUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall FestivalShopUI::ScrollTargetReached(FestivalShopUI *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xd8));
  return;
}


/* FestivalShopUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void FestivalShopUI::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to FestivalShopUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall FestivalShopUI::ScrollTargetInterrupted(FestivalShopUI *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xd8));
  return;
}


/* FestivalShopUI::HideWidgets(bool) */

void __thiscall FestivalShopUI::HideWidgets(FestivalShopUI *this,bool param_1)

{
  (**(code **)(**(long **)(this + 0xe8) + 0x158))(*(long **)(this + 0xe8),param_1);
  (**(code **)(*(long *)this + 0x158))(this,param_1);
  return;
}


/* FestivalShopUI::RefreshShopData(std::vector<FShopContentData, std::allocator<FShopContentData> >
   const&) */

void __thiscall FestivalShopUI::RefreshShopData(FestivalShopUI *this,vector *param_1)

{
  FestivalShopPanel::RefreshShopData(*(FestivalShopPanel **)(this + 0x110),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalShopUI::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall FestivalShopUI::DrawAll(FestivalShopUI *this,ModalFlags *param_1,Graphics *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Image *pIVar6;
  LotteryResultProgressBar *this_00;
  undefined8 uVar7;
  long lVar8;
  undefined1 auVar9 [12];
  undefined1 auStack_30 [8];
  wstring awStack_28 [16];
  wstring awStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac8988);
  Sexy::Graphics::DrawImage(param_2,pIVar6,*(int *)(this + 0x48),*(int *)(this + 0x4c));
  TodStringTranslate(L"[FESTIVAL_EVENT_LEFT_TIME_SHOP]");
  lVar8 = *(long *)(this + 0x118);
  auVar9 = LawnApp::GetRealServerTime(gLawnApp);
  StringHelper::ToTimeString
            ((StringHelper *)&DAT_00000004,(float)(lVar8 - auVar9._0_8_),auVar9._8_4_);
  TodReplaceString(awStack_28,L"{TIME}",awStack_18);
  FUN_05476c50(awStack_18);
  FUN_05476c50(awStack_28);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac8988);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  iVar3 = FUN_03ac4800(5);
  iVar1 = *(int *)(this + 0x48);
  iVar4 = FUN_03ac4800(0x2a);
  iVar5 = FUN_03ac4800(0x50);
  Sexy::Insets::Insets((Insets *)awStack_28,iVar3 + iVar1,iVar4,iVar2,iVar5);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
  Sexy::Color::Color((Color *)awStack_18,1);
  WriteWordInRect(param_2,auStack_30,awStack_28,uVar7,awStack_18,5,1);
  FUN_05476c50(auStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FestivalShopUI::~FestivalShopUI() */

void __thiscall FestivalShopUI::~FestivalShopUI(FestivalShopUI *this)

{
  *(undefined ***)this = &PTR_GetClass_0671d8f0;
  *(undefined ***)(this + 0xd8) = &PTR__FestivalShopUI_0671dc20;
  *(undefined ***)(this + 0xe0) = &PTR_ButtonPress_0671dc68;
  std::vector<FShopContentData,std::allocator<FShopContentData>>::~vector
            ((vector<FShopContentData,std::allocator<FShopContentData>> *)(this + 0xf8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to FestivalShopUI::~FestivalShopUI() */

void __thiscall FestivalShopUI::~FestivalShopUI(FestivalShopUI *this)

{
  ~FestivalShopUI(this + -0xd8);
  return;
}


/* FestivalShopUI::~FestivalShopUI() */

void __thiscall FestivalShopUI::~FestivalShopUI(FestivalShopUI *this)

{
  ~FestivalShopUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to FestivalShopUI::~FestivalShopUI() */

void __thiscall FestivalShopUI::~FestivalShopUI(FestivalShopUI *this)

{
  ~FestivalShopUI(this + -0xd8);
  return;
}


/* FestivalShopUI::FestivalShopUI(UIWidgetImage*, std::vector<FShopContentData,
   std::allocator<FShopContentData> >&) */

void __thiscall
FestivalShopUI::FestivalShopUI(FestivalShopUI *this,UIWidgetImage *param_1,vector *param_2)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xd8));
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xe0));
  *(UIWidgetImage **)(this + 0xf0) = param_1;
  *(undefined ***)this = &PTR_GetClass_0671d8f0;
  *(undefined ***)(this + 0xd8) = &PTR__FestivalShopUI_0671dc20;
  *(undefined ***)(this + 0xe0) = &PTR_ButtonPress_0671dc68;
  std::vector<FShopContentData,std::allocator<FShopContentData>>::vector
            ((vector<FShopContentData,std::allocator<FShopContentData>> *)(this + 0xf8),param_2);
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalShopUI::InitView() */

void __thiscall FestivalShopUI::InitView(FestivalShopUI *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  SalesProgressBar *pSVar13;
  LotteryResultProgressBar *this_00;
  PVZ2UIScrollingWidget *this_01;
  FestivalShopPanel *this_02;
  ActivityConfig *this_03;
  undefined8 uVar14;
  long lVar15;
  Insets aIStack_98 [16];
  ActiveItem aAStack_88 [24];
  char local_70;
  string asStack_60 [88];
  long local_8;
  
  lVar15 = *(long *)(this + 0xf0);
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_03ac4800(10);
  iVar12 = *(int *)(lVar15 + 0x48);
  iVar3 = FUN_03ac4800(0xf);
  iVar1 = *(int *)(lVar15 + 0x4c);
  pSVar13 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac8be8);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar13);
  iVar5 = FUN_03ac4800(0);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac8380);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  iVar7 = FUN_03ac4800(10);
  pSVar13 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac8380);
  iVar8 = SalesProgressBar::GetCurrentLevel(pSVar13);
  pSVar13 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac8be8);
  iVar9 = SalesProgressBar::GetCurrentLevel(pSVar13);
  iVar10 = FUN_03ac4800(0);
  iVar11 = FUN_03ac4800(0x24);
  Sexy::Insets::Insets
            (aIStack_98,iVar2 + iVar12,iVar3 + iVar1 + iVar4 + iVar5,iVar6 - iVar7,
             ((iVar8 - iVar9) - iVar10) - iVar11);
  this_01 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_01,(ScrollWidgetListener *)(this + 0xd8));
  lVar15 = *(long *)this_01;
  *(PVZ2UIScrollingWidget **)(this + 0xe8) = this_01;
  (**(code **)(lVar15 + 0x1a0))(this_01,aIStack_98);
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0xe8),2);
  this_02 = ::operator_new(0x110);
  FestivalShopPanel::FestivalShopPanel
            (this_02,(TRect *)aIStack_98,6,*(UIWidgetImage **)(this + 0xf0),(vector *)(this + 0xf8))
  ;
  *(FestivalShopPanel **)(this + 0x110) = this_02;
  (**(code **)(**(long **)(this + 0xe8) + 0x60))(*(long **)(this + 0xe8),this_02);
  (**(code **)(**(long **)(this + 0xf0) + 0x60))
            (*(long **)(this + 0xf0),*(undefined8 *)(this + 0xe8));
  iVar12 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar12);
  if (local_70 != '\0') {
    iVar12 = StringHelper::ToInt(asStack_60);
    this_03 = (ActivityConfig *)LawnApp::GetActivityConfig();
    if (this_03 != (ActivityConfig *)0x0) {
      uVar14 = ActivityConfig::DateMKTime(this_03,iVar12);
      *(undefined8 *)(this + 0x118) = uVar14;
    }
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

