// Class: LimitedSummonRank


/* LimitedSummonRank::ScrollTargetReached(Sexy::ScrollWidget*) */

void LimitedSummonRank::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to LimitedSummonRank::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
LimitedSummonRank::ScrollTargetReached(LimitedSummonRank *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* LimitedSummonRank::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void LimitedSummonRank::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to LimitedSummonRank::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
LimitedSummonRank::ScrollTargetInterrupted(LimitedSummonRank *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitedSummonRank::GetLayoutName() */

void __thiscall LimitedSummonRank::GetLayoutName(LimitedSummonRank *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"LimitedSummonRank");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* LimitedSummonRank::~LimitedSummonRank() */

void __thiscall LimitedSummonRank::~LimitedSummonRank(LimitedSummonRank *this)

{
  *(undefined ***)this = &PTR_GetClass_066e34a0;
  *(undefined ***)(this + 0x138) = &PTR__LimitedSummonRank_066e3850;
  *(undefined **)(this + 0xd8) = &DAT_066e3808;
  *(undefined **)(this + 0x140) = &DAT_066e3898;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UISingletonDialog<LimitedSummonRank>::~UISingletonDialog
            ((UISingletonDialog<LimitedSummonRank> *)this);
  return;
}


/* non-virtual thunk to LimitedSummonRank::~LimitedSummonRank() */

void __thiscall LimitedSummonRank::~LimitedSummonRank(LimitedSummonRank *this)

{
  ~LimitedSummonRank(this + -0x138);
  return;
}


/* LimitedSummonRank::~LimitedSummonRank() */

void __thiscall LimitedSummonRank::~LimitedSummonRank(LimitedSummonRank *this)

{
  ~LimitedSummonRank(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to LimitedSummonRank::~LimitedSummonRank() */

void __thiscall LimitedSummonRank::~LimitedSummonRank(LimitedSummonRank *this)

{
  ~LimitedSummonRank(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitedSummonRank::AddItems(Sexy::Widget*, std::vector<S2C_BonusInfo,
   std::allocator<S2C_BonusInfo> > const&) */

void __thiscall LimitedSummonRank::AddItems(LimitedSummonRank *this,Widget *param_1,vector *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  int *piVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 0x80))(param_1,1,1);
  iVar1 = *(int *)(param_1 + 0x54);
  iVar2 = *(int *)(param_1 + 0x50);
  this_00 = ::operator_new(0x248);
  iVar2 = iVar1 + iVar2 + iVar1 * -2;
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  iVar3 = FUN_0399a924(0);
  Sexy::Insets::Insets(aIStack_18,iVar3,iVar3,*(int *)(param_1 + 0x50),*(int *)(param_1 + 0x54));
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_18);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,1);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  uVar9 = 0;
  iVar3 = 0;
  while( true ) {
    uVar10 = *(undefined8 *)param_2;
    uVar7 = FUN_03999550(uVar10,*(undefined8 *)(param_2 + 8));
    if (uVar7 <= uVar9) break;
    piVar5 = (int *)FUN_039995e8(uVar10,uVar9);
    plVar6 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar5,piVar5[1],false);
    uVar4 = FUN_0399a924(0);
    (**(code **)(*plVar6 + 0x198))(plVar6,iVar3,uVar4,iVar1,iVar1);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,plVar6);
    uVar9 = uVar9 + 1;
    iVar3 = iVar3 + iVar2;
  }
  lVar8 = *(long *)this_00;
  *(int *)(this_01 + 0x50) = iVar2 * (int)uVar7;
  (**(code **)(lVar8 + 0x60))(this_00,this_01);
  (**(code **)(*(long *)param_1 + 0x60))(param_1,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LimitedSummonRank::LimitedSummonRank() */

void __thiscall LimitedSummonRank::LimitedSummonRank(LimitedSummonRank *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UISingletonDialog<LimitedSummonRank>::UISingletonDialog
            ((UISingletonDialog<LimitedSummonRank> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  UI::TabControlListener::TabControlListener((TabControlListener *)(this + 0x140));
  this[0x15b] = (LimitedSummonRank)0x1;
  *(undefined ***)this = &PTR_GetClass_066e34a0;
  this[0x15c] = (LimitedSummonRank)0x1;
  *(undefined **)(this + 0x140) = &DAT_066e3898;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined **)(this + 0xd8) = &DAT_066e3808;
  *(undefined ***)(this + 0x138) = &PTR__LimitedSummonRank_066e3850;
  this[0x158] = (LimitedSummonRank)0x0;
  this[0x159] = (LimitedSummonRank)0x0;
  this[0x15a] = (LimitedSummonRank)0x0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnRefreshLimitedSummonRank);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<LimitedSummonRank,void(LimitedSummonRank::*)(int)>>
            ((MessageRouter *)puVar1,Message::RefreshLimitedSummonRank,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitedSummonRank::Update() */

void __thiscall LimitedSummonRank::Update(LimitedSummonRank *this)

{
  long lVar1;
  LimitedSummonManager *pLVar2;
  float local_14;
  float local_c;
  
  lVar1 = ___stack_chk_guard;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  if (*(long *)(this + 0x148) != 0) {
    Sexy::ScrollWidget::GetScrollOffset();
    Sexy::ScrollWidget::GetScrollMin();
    if (((local_14 < local_c - 40.0) && (this[0x15a] == (LimitedSummonRank)0x0)) &&
       (this[0x15b] != (LimitedSummonRank)0x0)) {
      this[0x15b] = (LimitedSummonRank)0x0;
      this[0x15a] = (LimitedSummonRank)0x1;
      pLVar2 = (LimitedSummonManager *)Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
      LimitedSummonManager::RequestDailyRank(pLVar2);
    }
  }
  if (*(long *)(this + 0x150) != 0) {
    Sexy::ScrollWidget::GetScrollOffset();
    Sexy::ScrollWidget::GetScrollMin();
    if (((local_14 < local_c - 40.0) && (this[0x15a] == (LimitedSummonRank)0x0)) &&
       (this[0x15c] != (LimitedSummonRank)0x0)) {
      this[0x15c] = (LimitedSummonRank)0x0;
      this[0x15a] = (LimitedSummonRank)0x1;
      pLVar2 = (LimitedSummonManager *)Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
      LimitedSummonManager::RequestTotalyRank(pLVar2);
    }
  }
  if (*(long *)(this + 0x148) != 0) {
    Sexy::ScrollWidget::GetScrollOffset();
    Sexy::ScrollWidget::GetScrollMin();
    if (local_c < local_14) {
      this[0x15b] = (LimitedSummonRank)0x1;
    }
  }
  if (*(long *)(this + 0x150) != 0) {
    Sexy::ScrollWidget::GetScrollOffset();
    Sexy::ScrollWidget::GetScrollMin();
    if (local_c < local_14) {
      this[0x15c] = (LimitedSummonRank)0x1;
    }
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LimitedSummonRank::TabSelectionChanged(int) */

void __thiscall LimitedSummonRank::TabSelectionChanged(LimitedSummonRank *this,int param_1)

{
  LimitedSummonManager *pLVar1;
  
  if (param_1 == 1) {
    if (this[0x158] == (LimitedSummonRank)0x0) {
      this[0x158] = (LimitedSummonRank)0x1;
      pLVar1 = (LimitedSummonManager *)Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
      LimitedSummonManager::RequestDailyRank(pLVar1);
      return;
    }
  }
  else if ((param_1 == 2) && (this[0x159] == (LimitedSummonRank)0x0)) {
    this[0x159] = (LimitedSummonRank)0x1;
    pLVar1 = (LimitedSummonManager *)Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
    LimitedSummonManager::RequestTotalyRank(pLVar1);
    return;
  }
  return;
}


/* non-virtual thunk to LimitedSummonRank::TabSelectionChanged(int) */

void __thiscall LimitedSummonRank::TabSelectionChanged(LimitedSummonRank *this,int param_1)

{
  TabSelectionChanged(this + -0x140,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitedSummonRank::InitDailyInfo() */

void __thiscall LimitedSummonRank::InitDailyInfo(LimitedSummonRank *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Widget *pWVar5;
  LimitedSummonRankItem *pLVar6;
  long lVar7;
  ulong uVar8;
  UIWidgetText *pUVar9;
  wchar_t *pwVar10;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  code *pcVar11;
  long *plVar12;
  int iVar13;
  ulong uVar14;
  int iVar15;
  string asStack_28 [16];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"Widget_Daily_Panel");
  pWVar5 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  plVar12 = *(long **)(this + 0x148);
  if (plVar12 == (long *)0x0) {
    this_00 = ::operator_new(0x248);
    PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
    iVar4 = FUN_0399a924(0);
    Sexy::Insets::Insets
              ((Insets *)asStack_28,iVar4,iVar4,*(int *)(pWVar5 + 0x50),*(int *)(pWVar5 + 0x54));
    (**(code **)(*(long *)this_00 + 0x1a0))(this_00,asStack_28);
    Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
    this_01 = ::operator_new(0xd8);
    Sexy::Widget::Widget(this_01);
    (**(code **)(*(long *)this_01 + 0x198))
              (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
    iVar2 = FUN_0399a924(10);
    iVar4 = *(int *)(this_01 + 0x50);
    iVar3 = FUN_0399a924(0x41);
    uVar14 = 0;
    iVar15 = 0;
    while( true ) {
      lVar7 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
      iVar13 = (int)uVar14;
      uVar8 = FUN_039994e4(*(undefined8 *)(lVar7 + 0xe0),*(undefined8 *)(lVar7 + 0xe8));
      bVar1 = uVar8 <= uVar14;
      uVar14 = uVar14 + 1;
      if (bVar1) break;
      pLVar6 = ::operator_new(0xf0);
      LimitedSummonRankItem::LimitedSummonRankItem(pLVar6);
      Sexy::Insets::Insets((Insets *)asStack_18,0,iVar15,iVar4,iVar3);
      (**(code **)(*(long *)pLVar6 + 0x1a0))(pLVar6,asStack_18);
      (**(code **)(*(long *)this_01 + 0x60))(this_01,pLVar6);
      LimitedSummonRankItem::InitView(pLVar6,true,iVar13);
      iVar15 = iVar15 + iVar2 + iVar3;
    }
    lVar7 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
    iVar4 = FUN_039994e4(*(undefined8 *)(lVar7 + 0xe0),*(undefined8 *)(lVar7 + 0xe8));
    pcVar11 = *(code **)(*(long *)this_00 + 0x60);
    *(int *)(this_01 + 0x54) = iVar4 * (iVar2 + iVar3) - iVar2;
    (*pcVar11)(this_00,this_01);
    (**(code **)(*(long *)pWVar5 + 0x60))(pWVar5,this_00);
    *(PVZ2UIScrollingWidget **)(this + 0x148) = this_00;
  }
  else {
    uVar14 = 0;
    (**(code **)(*plVar12 + 0x80))(plVar12,1,1);
    pWVar5 = ::operator_new(0xd8);
    Sexy::Widget::Widget(pWVar5);
    (**(code **)(*(long *)pWVar5 + 0x198))
              (pWVar5,0,0,*(undefined4 *)(*(long *)(this + 0x148) + 0x50),
               *(undefined4 *)(*(long *)(this + 0x148) + 0x54));
    iVar2 = FUN_0399a924(10);
    iVar4 = *(int *)(pWVar5 + 0x50);
    iVar3 = FUN_0399a924(0x41);
    iVar15 = 0;
    while( true ) {
      lVar7 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
      iVar13 = (int)uVar14;
      uVar8 = FUN_039994e4(*(undefined8 *)(lVar7 + 0xe0),*(undefined8 *)(lVar7 + 0xe8));
      bVar1 = uVar8 <= uVar14;
      uVar14 = uVar14 + 1;
      if (bVar1) break;
      pLVar6 = ::operator_new(0xf0);
      LimitedSummonRankItem::LimitedSummonRankItem(pLVar6);
      Sexy::Insets::Insets((Insets *)asStack_18,0,iVar15,iVar4,iVar3);
      (**(code **)(*(long *)pLVar6 + 0x1a0))(pLVar6,asStack_18);
      (**(code **)(*(long *)pWVar5 + 0x60))(pWVar5,pLVar6);
      LimitedSummonRankItem::InitView(pLVar6,true,iVar13);
      iVar15 = iVar15 + iVar2 + iVar3;
    }
    lVar7 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
    iVar4 = FUN_039994e4(*(undefined8 *)(lVar7 + 0xe0),*(undefined8 *)(lVar7 + 0xe8));
    plVar12 = *(long **)(this + 0x148);
    pcVar11 = *(code **)(*plVar12 + 0x60);
    *(int *)(pWVar5 + 0x54) = iVar4 * (iVar2 + iVar3) - iVar2;
    (*pcVar11)(plVar12,pWVar5);
  }
  lVar7 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
  uVar14 = 0;
  lVar7 = FUN_039995ac(*(undefined8 *)(lVar7 + 0x98),*(undefined8 *)(lVar7 + 0xa0));
  if (lVar7 != 0) {
    do {
      Sexy::StrFormat("Widget_Daily_Reward_Priview%d",asStack_18,(ulong)((int)uVar14 + 1));
      pWVar5 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_18);
      std::string::~string(asStack_18);
      if (pWVar5 != (Widget *)0x0) {
        lVar7 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
        lVar7 = FUN_039995dc(*(undefined8 *)(lVar7 + 0x98),uVar14);
        AddItems(this,pWVar5,(vector *)(lVar7 + 0x10));
      }
      lVar7 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
      uVar14 = uVar14 + 1;
      uVar8 = FUN_039995ac(*(undefined8 *)(lVar7 + 0x98),*(undefined8 *)(lVar7 + 0xa0));
    } while (uVar14 < uVar8);
  }
  std::string::string(asStack_18,"Widget_Daily_Reward_Priview7");
  pWVar5 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_18);
  lVar7 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
  AddItems(this,pWVar5,(vector *)(lVar7 + 0x80));
  std::string::~string(asStack_18);
  nop();
  lVar7 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
  if (*(char *)(lVar7 + 0x118) == '\0') {
    std::string::string(asStack_28,"UIText_Daily_Ison_Rank");
    pUVar9 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_28);
    pwVar10 = L"[NOT_ON_RANK]";
  }
  else {
    std::string::string(asStack_28,"UIText_Daily_Ison_Rank");
    pUVar9 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_28);
    pwVar10 = L"[ON_RANK]";
  }
  TodStringTranslate(pwVar10);
  PuzzleTip::SetTip(pUVar9,asStack_18);
  FUN_05476c50(asStack_18);
  std::string::~string(asStack_28);
  nop();
  lVar7 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
  if (*(int *)(lVar7 + 0x110) < 10000) {
    std::string::string(asStack_28,"UIText_Daily_Ranking_Num");
    pUVar9 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_28);
    lVar7 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
    std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar7 + 0x110));
    UIWidgetText::SetString(pUVar9,asStack_18);
    std::string::~string(asStack_18);
    std::string::~string(asStack_28);
    nop();
  }
  else {
    std::string::string(asStack_28,"UIText_Daily_Ranking_Num");
    pUVar9 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_28);
    std::string::string(asStack_18,"9999+");
    UIWidgetText::SetString(pUVar9,asStack_18);
    std::string::~string(asStack_18);
    nop();
    std::string::~string(asStack_28);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitedSummonRank::InitTotalyInfo() */

void __thiscall LimitedSummonRank::InitTotalyInfo(LimitedSummonRank *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Widget *pWVar5;
  LimitedSummonRankItem *pLVar6;
  long lVar7;
  ulong uVar8;
  UIWidgetText *pUVar9;
  wchar_t *pwVar10;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  code *pcVar11;
  long *plVar12;
  int iVar13;
  ulong uVar14;
  int iVar15;
  string asStack_28 [16];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"Widget_Totaly_Panel");
  pWVar5 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  plVar12 = *(long **)(this + 0x150);
  if (plVar12 == (long *)0x0) {
    this_00 = ::operator_new(0x248);
    PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
    iVar4 = FUN_0399a924(0);
    Sexy::Insets::Insets
              ((Insets *)asStack_28,iVar4,iVar4,*(int *)(pWVar5 + 0x50),*(int *)(pWVar5 + 0x54));
    (**(code **)(*(long *)this_00 + 0x1a0))(this_00,asStack_28);
    Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
    this_01 = ::operator_new(0xd8);
    Sexy::Widget::Widget(this_01);
    (**(code **)(*(long *)this_01 + 0x198))
              (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
    iVar2 = FUN_0399a924(10);
    iVar4 = *(int *)(this_01 + 0x50);
    iVar3 = FUN_0399a924(0x41);
    uVar14 = 0;
    iVar15 = 0;
    while( true ) {
      lVar7 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
      iVar13 = (int)uVar14;
      uVar8 = FUN_039994e4(*(undefined8 *)(lVar7 + 0xf8),*(undefined8 *)(lVar7 + 0x100));
      bVar1 = uVar8 <= uVar14;
      uVar14 = uVar14 + 1;
      if (bVar1) break;
      pLVar6 = ::operator_new(0xf0);
      LimitedSummonRankItem::LimitedSummonRankItem(pLVar6);
      Sexy::Insets::Insets((Insets *)asStack_18,0,iVar15,iVar4,iVar3);
      (**(code **)(*(long *)pLVar6 + 0x1a0))(pLVar6,asStack_18);
      (**(code **)(*(long *)this_01 + 0x60))(this_01,pLVar6);
      LimitedSummonRankItem::InitView(pLVar6,false,iVar13);
      iVar15 = iVar15 + iVar2 + iVar3;
    }
    lVar7 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
    iVar4 = FUN_039994e4(*(undefined8 *)(lVar7 + 0xf8),*(undefined8 *)(lVar7 + 0x100));
    pcVar11 = *(code **)(*(long *)this_00 + 0x60);
    *(int *)(this_01 + 0x54) = iVar4 * (iVar2 + iVar3) - iVar2;
    (*pcVar11)(this_00,this_01);
    (**(code **)(*(long *)pWVar5 + 0x60))(pWVar5,this_00);
    *(PVZ2UIScrollingWidget **)(this + 0x150) = this_00;
  }
  else {
    uVar14 = 0;
    (**(code **)(*plVar12 + 0x80))(plVar12,1,1);
    pWVar5 = ::operator_new(0xd8);
    Sexy::Widget::Widget(pWVar5);
    (**(code **)(*(long *)pWVar5 + 0x198))
              (pWVar5,0,0,*(undefined4 *)(*(long *)(this + 0x150) + 0x50),
               *(undefined4 *)(*(long *)(this + 0x150) + 0x54));
    iVar2 = FUN_0399a924(10);
    iVar4 = *(int *)(pWVar5 + 0x50);
    iVar3 = FUN_0399a924(0x41);
    iVar15 = 0;
    while( true ) {
      lVar7 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
      iVar13 = (int)uVar14;
      uVar8 = FUN_039994e4(*(undefined8 *)(lVar7 + 0xf8),*(undefined8 *)(lVar7 + 0x100));
      bVar1 = uVar8 <= uVar14;
      uVar14 = uVar14 + 1;
      if (bVar1) break;
      pLVar6 = ::operator_new(0xf0);
      LimitedSummonRankItem::LimitedSummonRankItem(pLVar6);
      Sexy::Insets::Insets((Insets *)asStack_18,0,iVar15,iVar4,iVar3);
      (**(code **)(*(long *)pLVar6 + 0x1a0))(pLVar6,asStack_18);
      (**(code **)(*(long *)pWVar5 + 0x60))(pWVar5,pLVar6);
      LimitedSummonRankItem::InitView(pLVar6,false,iVar13);
      iVar15 = iVar15 + iVar2 + iVar3;
    }
    lVar7 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
    iVar4 = FUN_039994e4(*(undefined8 *)(lVar7 + 0xf8),*(undefined8 *)(lVar7 + 0x100));
    plVar12 = *(long **)(this + 0x150);
    pcVar11 = *(code **)(*plVar12 + 0x60);
    *(int *)(pWVar5 + 0x54) = iVar4 * (iVar2 + iVar3) - iVar2;
    (*pcVar11)(plVar12,pWVar5);
  }
  lVar7 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
  uVar14 = 0;
  lVar7 = FUN_039995ac(*(undefined8 *)(lVar7 + 200),*(undefined8 *)(lVar7 + 0xd0));
  if (lVar7 != 0) {
    do {
      Sexy::StrFormat("Widget_Totaly_Reward_Priview%d",asStack_18,(ulong)((int)uVar14 + 1));
      pWVar5 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_18);
      std::string::~string(asStack_18);
      if (pWVar5 != (Widget *)0x0) {
        lVar7 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
        lVar7 = FUN_039995dc(*(undefined8 *)(lVar7 + 200),uVar14);
        AddItems(this,pWVar5,(vector *)(lVar7 + 0x10));
      }
      lVar7 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
      uVar14 = uVar14 + 1;
      uVar8 = FUN_039995ac(*(undefined8 *)(lVar7 + 200),*(undefined8 *)(lVar7 + 0xd0));
    } while (uVar14 < uVar8);
  }
  std::string::string(asStack_18,"Widget_Totaly_Reward_Priview7");
  pWVar5 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_18);
  lVar7 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
  AddItems(this,pWVar5,(vector *)(lVar7 + 0xb0));
  std::string::~string(asStack_18);
  nop();
  lVar7 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
  if (*(char *)(lVar7 + 0x119) == '\0') {
    std::string::string(asStack_28,"UIText_Totaly_Ison_Rank");
    pUVar9 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_28);
    pwVar10 = L"[NOT_ON_RANK]";
  }
  else {
    std::string::string(asStack_28,"UIText_Totaly_Ison_Rank");
    pUVar9 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_28);
    pwVar10 = L"[ON_RANK]";
  }
  TodStringTranslate(pwVar10);
  PuzzleTip::SetTip(pUVar9,asStack_18);
  FUN_05476c50(asStack_18);
  std::string::~string(asStack_28);
  nop();
  lVar7 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
  if (*(int *)(lVar7 + 0x114) < 10000) {
    std::string::string(asStack_28,"UIText_Totaly_Ranking_Num");
    pUVar9 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_28);
    lVar7 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
    std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar7 + 0x114));
    UIWidgetText::SetString(pUVar9,asStack_18);
    std::string::~string(asStack_18);
    std::string::~string(asStack_28);
    nop();
  }
  else {
    std::string::string(asStack_28,"UIText_Totaly_Ranking_Num");
    pUVar9 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_28);
    std::string::string(asStack_18,"9999+");
    UIWidgetText::SetString(pUVar9,asStack_18);
    std::string::~string(asStack_18);
    nop();
    std::string::~string(asStack_28);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LimitedSummonRank::OnRefreshLimitedSummonRank(int) */

void __thiscall LimitedSummonRank::OnRefreshLimitedSummonRank(LimitedSummonRank *this,int param_1)

{
  this[0x15a] = (LimitedSummonRank)0x0;
  if (param_1 != 1) {
    InitTotalyInfo(this);
    return;
  }
  InitDailyInfo(this);
  return;
}

