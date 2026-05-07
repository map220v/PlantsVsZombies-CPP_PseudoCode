// Class: PennyGiftBoxRank


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyGiftBoxRank::OnCreate() */

void __thiscall PennyGiftBoxRank::OnCreate(PennyGiftBoxRank *this)

{
  long lVar1;
  UITabControl *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  lVar1 = UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(undefined4 *)(lVar1 + 0x48) = 0;
  *(undefined4 *)(lVar1 + 0x4c) = 0;
  std::string::string(asStack_10,"UITabControl_0");
  this_00 = UI::Dialog::GetWidget<UITabControl>((Dialog *)this,asStack_10);
  UITabControl::SetListener(this_00,(TabControlListener *)(this + 0x140));
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)this + 0x350))(this,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* PennyGiftBoxRank::ScrollTargetReached(Sexy::ScrollWidget*) */

void PennyGiftBoxRank::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to PennyGiftBoxRank::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall PennyGiftBoxRank::ScrollTargetReached(PennyGiftBoxRank *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* PennyGiftBoxRank::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void PennyGiftBoxRank::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to PennyGiftBoxRank::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
PennyGiftBoxRank::ScrollTargetInterrupted(PennyGiftBoxRank *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyGiftBoxRank::GetLayoutName() */

void __thiscall PennyGiftBoxRank::GetLayoutName(PennyGiftBoxRank *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"PennyGiftBoxRank");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PennyGiftBoxRank::~PennyGiftBoxRank() */

void __thiscall PennyGiftBoxRank::~PennyGiftBoxRank(PennyGiftBoxRank *this)

{
  *(undefined ***)this = &PTR_GetClass_069ead10;
  *(undefined ***)(this + 0x138) = &PTR__PennyGiftBoxRank_069eb0c0;
  *(undefined **)(this + 0xd8) = &DAT_069eb078;
  *(undefined **)(this + 0x140) = &DAT_069eb108;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UISingletonDialog<PennyGiftBoxRank>::~UISingletonDialog
            ((UISingletonDialog<PennyGiftBoxRank> *)this);
  return;
}


/* non-virtual thunk to PennyGiftBoxRank::~PennyGiftBoxRank() */

void __thiscall PennyGiftBoxRank::~PennyGiftBoxRank(PennyGiftBoxRank *this)

{
  ~PennyGiftBoxRank(this + -0x138);
  return;
}


/* PennyGiftBoxRank::~PennyGiftBoxRank() */

void __thiscall PennyGiftBoxRank::~PennyGiftBoxRank(PennyGiftBoxRank *this)

{
  ~PennyGiftBoxRank(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PennyGiftBoxRank::~PennyGiftBoxRank() */

void __thiscall PennyGiftBoxRank::~PennyGiftBoxRank(PennyGiftBoxRank *this)

{
  ~PennyGiftBoxRank(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyGiftBoxRank::AddItems(Sexy::Widget*, std::vector<S2C_BonusInfo,
   std::allocator<S2C_BonusInfo> > const&) */

void __thiscall PennyGiftBoxRank::AddItems(PennyGiftBoxRank *this,Widget *param_1,vector *param_2)

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
  iVar3 = FUN_04e790b0(0);
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
    uVar7 = FUN_04e76e98(uVar10,*(undefined8 *)(param_2 + 8));
    if (uVar7 <= uVar9) break;
    piVar5 = (int *)FUN_04e76e4c(uVar10,uVar9);
    plVar6 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar5,piVar5[1],false);
    uVar4 = FUN_04e790b0(0);
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


/* PennyGiftBoxRank::PennyGiftBoxRank() */

void __thiscall PennyGiftBoxRank::PennyGiftBoxRank(PennyGiftBoxRank *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UISingletonDialog<PennyGiftBoxRank>::UISingletonDialog
            ((UISingletonDialog<PennyGiftBoxRank> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  UI::TabControlListener::TabControlListener((TabControlListener *)(this + 0x140));
  this[0x15b] = (PennyGiftBoxRank)0x1;
  *(undefined ***)this = &PTR_GetClass_069ead10;
  this[0x15c] = (PennyGiftBoxRank)0x1;
  *(undefined **)(this + 0x140) = &DAT_069eb108;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined **)(this + 0xd8) = &DAT_069eb078;
  *(undefined ***)(this + 0x138) = &PTR__PennyGiftBoxRank_069eb0c0;
  this[0x158] = (PennyGiftBoxRank)0x0;
  this[0x159] = (PennyGiftBoxRank)0x0;
  this[0x15a] = (PennyGiftBoxRank)0x0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnRefreshPennyGiftBoxRank);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<PennyGiftBoxRank,void(PennyGiftBoxRank::*)(int)>>
            ((MessageRouter *)puVar1,Message::RefreshPennyGiftBoxRank,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyGiftBoxRank::Update() */

void __thiscall PennyGiftBoxRank::Update(PennyGiftBoxRank *this)

{
  long lVar1;
  PennyGiftBoxManager *pPVar2;
  float local_14;
  float local_c;
  
  lVar1 = ___stack_chk_guard;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  if (*(long *)(this + 0x148) != 0) {
    Sexy::ScrollWidget::GetScrollOffset();
    Sexy::ScrollWidget::GetScrollMin();
    if (((local_14 < local_c - 40.0) && (this[0x15a] == (PennyGiftBoxRank)0x0)) &&
       (this[0x15b] != (PennyGiftBoxRank)0x0)) {
      this[0x15b] = (PennyGiftBoxRank)0x0;
      this[0x15a] = (PennyGiftBoxRank)0x1;
      pPVar2 = (PennyGiftBoxManager *)Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
      PennyGiftBoxManager::RequestDailyRank(pPVar2);
    }
  }
  if (*(long *)(this + 0x150) != 0) {
    Sexy::ScrollWidget::GetScrollOffset();
    Sexy::ScrollWidget::GetScrollMin();
    if (((local_14 < local_c - 40.0) && (this[0x15a] == (PennyGiftBoxRank)0x0)) &&
       (this[0x15c] != (PennyGiftBoxRank)0x0)) {
      this[0x15c] = (PennyGiftBoxRank)0x0;
      this[0x15a] = (PennyGiftBoxRank)0x1;
      pPVar2 = (PennyGiftBoxManager *)Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
      PennyGiftBoxManager::RequestTotalyRank(pPVar2);
    }
  }
  if (*(long *)(this + 0x148) != 0) {
    Sexy::ScrollWidget::GetScrollOffset();
    Sexy::ScrollWidget::GetScrollMin();
    if (local_c < local_14) {
      this[0x15b] = (PennyGiftBoxRank)0x1;
    }
  }
  if (*(long *)(this + 0x150) != 0) {
    Sexy::ScrollWidget::GetScrollOffset();
    Sexy::ScrollWidget::GetScrollMin();
    if (local_c < local_14) {
      this[0x15c] = (PennyGiftBoxRank)0x1;
    }
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PennyGiftBoxRank::TabSelectionChanged(int) */

void __thiscall PennyGiftBoxRank::TabSelectionChanged(PennyGiftBoxRank *this,int param_1)

{
  PennyGiftBoxManager *pPVar1;
  
  if (param_1 == 1) {
    if (this[0x158] == (PennyGiftBoxRank)0x0) {
      this[0x158] = (PennyGiftBoxRank)0x1;
      pPVar1 = (PennyGiftBoxManager *)Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
      PennyGiftBoxManager::RequestDailyRank(pPVar1);
      return;
    }
  }
  else if ((param_1 == 2) && (this[0x159] == (PennyGiftBoxRank)0x0)) {
    this[0x159] = (PennyGiftBoxRank)0x1;
    pPVar1 = (PennyGiftBoxManager *)Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
    PennyGiftBoxManager::RequestTotalyRank(pPVar1);
    return;
  }
  return;
}


/* non-virtual thunk to PennyGiftBoxRank::TabSelectionChanged(int) */

void __thiscall PennyGiftBoxRank::TabSelectionChanged(PennyGiftBoxRank *this,int param_1)

{
  TabSelectionChanged(this + -0x140,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyGiftBoxRank::InitDailyInfo() */

void __thiscall PennyGiftBoxRank::InitDailyInfo(PennyGiftBoxRank *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Widget *pWVar5;
  PennyGiftBoxRankItem *pPVar6;
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
    iVar4 = FUN_04e790b0(0);
    Sexy::Insets::Insets
              ((Insets *)asStack_28,iVar4,iVar4,*(int *)(pWVar5 + 0x50),*(int *)(pWVar5 + 0x54));
    (**(code **)(*(long *)this_00 + 0x1a0))(this_00,asStack_28);
    Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
    this_01 = ::operator_new(0xd8);
    Sexy::Widget::Widget(this_01);
    (**(code **)(*(long *)this_01 + 0x198))
              (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
    iVar2 = FUN_04e790b0(10);
    iVar4 = *(int *)(this_01 + 0x50);
    iVar3 = FUN_04e790b0(0x41);
    uVar14 = 0;
    iVar15 = 0;
    while( true ) {
      lVar7 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
      iVar13 = (int)uVar14;
      uVar8 = FUN_04e76dfc(*(undefined8 *)(lVar7 + 0x80),*(undefined8 *)(lVar7 + 0x88));
      bVar1 = uVar8 <= uVar14;
      uVar14 = uVar14 + 1;
      if (bVar1) break;
      pPVar6 = ::operator_new(0xf0);
      PennyGiftBoxRankItem::PennyGiftBoxRankItem(pPVar6);
      Sexy::Insets::Insets((Insets *)asStack_18,0,iVar15,iVar4,iVar3);
      (**(code **)(*(long *)pPVar6 + 0x1a0))(pPVar6,asStack_18);
      (**(code **)(*(long *)this_01 + 0x60))(this_01,pPVar6);
      PennyGiftBoxRankItem::InitView(pPVar6,true,iVar13);
      iVar15 = iVar15 + iVar2 + iVar3;
    }
    lVar7 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
    iVar4 = FUN_04e76dfc(*(undefined8 *)(lVar7 + 0x80),*(undefined8 *)(lVar7 + 0x88));
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
    iVar2 = FUN_04e790b0(10);
    iVar4 = *(int *)(pWVar5 + 0x50);
    iVar3 = FUN_04e790b0(0x41);
    iVar15 = 0;
    while( true ) {
      lVar7 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
      iVar13 = (int)uVar14;
      uVar8 = FUN_04e76dfc(*(undefined8 *)(lVar7 + 0x80),*(undefined8 *)(lVar7 + 0x88));
      bVar1 = uVar8 <= uVar14;
      uVar14 = uVar14 + 1;
      if (bVar1) break;
      pPVar6 = ::operator_new(0xf0);
      PennyGiftBoxRankItem::PennyGiftBoxRankItem(pPVar6);
      Sexy::Insets::Insets((Insets *)asStack_18,0,iVar15,iVar4,iVar3);
      (**(code **)(*(long *)pPVar6 + 0x1a0))(pPVar6,asStack_18);
      (**(code **)(*(long *)pWVar5 + 0x60))(pWVar5,pPVar6);
      PennyGiftBoxRankItem::InitView(pPVar6,true,iVar13);
      iVar15 = iVar15 + iVar2 + iVar3;
    }
    lVar7 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
    iVar4 = FUN_04e76dfc(*(undefined8 *)(lVar7 + 0x80),*(undefined8 *)(lVar7 + 0x88));
    plVar12 = *(long **)(this + 0x148);
    pcVar11 = *(code **)(*plVar12 + 0x60);
    *(int *)(pWVar5 + 0x54) = iVar4 * (iVar2 + iVar3) - iVar2;
    (*pcVar11)(plVar12,pWVar5);
  }
  lVar7 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
  uVar14 = 0;
  lVar7 = FUN_04e76f38(*(undefined8 *)(lVar7 + 0x50),*(undefined8 *)(lVar7 + 0x58));
  if (lVar7 != 0) {
    do {
      Sexy::StrFormat("Widget_Daily_Reward_Priview%d",asStack_18,(ulong)((int)uVar14 + 1));
      pWVar5 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_18);
      std::string::~string(asStack_18);
      if (pWVar5 != (Widget *)0x0) {
        lVar7 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
        lVar7 = FUN_04e76f68(*(undefined8 *)(lVar7 + 0x50),uVar14);
        AddItems(this,pWVar5,(vector *)(lVar7 + 0x10));
      }
      lVar7 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
      uVar14 = uVar14 + 1;
      uVar8 = FUN_04e76f38(*(undefined8 *)(lVar7 + 0x50),*(undefined8 *)(lVar7 + 0x58));
    } while (uVar14 < uVar8);
  }
  lVar7 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
  if (*(char *)(lVar7 + 0xc0) == '\0') {
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
  lVar7 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
  if (*(int *)(lVar7 + 0xb8) < 10000) {
    std::string::string(asStack_28,"UIText_Daily_Ranking_Num");
    pUVar9 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_28);
    lVar7 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
    std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar7 + 0xb8));
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
/* PennyGiftBoxRank::InitTotalyInfo() */

void __thiscall PennyGiftBoxRank::InitTotalyInfo(PennyGiftBoxRank *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Widget *pWVar5;
  PennyGiftBoxRankItem *pPVar6;
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
    iVar4 = FUN_04e790b0(0);
    Sexy::Insets::Insets
              ((Insets *)asStack_28,iVar4,iVar4,*(int *)(pWVar5 + 0x50),*(int *)(pWVar5 + 0x54));
    (**(code **)(*(long *)this_00 + 0x1a0))(this_00,asStack_28);
    Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
    this_01 = ::operator_new(0xd8);
    Sexy::Widget::Widget(this_01);
    (**(code **)(*(long *)this_01 + 0x198))
              (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
    iVar2 = FUN_04e790b0(10);
    iVar4 = *(int *)(this_01 + 0x50);
    iVar3 = FUN_04e790b0(0x41);
    uVar14 = 0;
    iVar15 = 0;
    while( true ) {
      lVar7 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
      iVar13 = (int)uVar14;
      uVar8 = FUN_04e76dfc(*(undefined8 *)(lVar7 + 0x98),*(undefined8 *)(lVar7 + 0xa0));
      bVar1 = uVar8 <= uVar14;
      uVar14 = uVar14 + 1;
      if (bVar1) break;
      pPVar6 = ::operator_new(0xf0);
      PennyGiftBoxRankItem::PennyGiftBoxRankItem(pPVar6);
      Sexy::Insets::Insets((Insets *)asStack_18,0,iVar15,iVar4,iVar3);
      (**(code **)(*(long *)pPVar6 + 0x1a0))(pPVar6,asStack_18);
      (**(code **)(*(long *)this_01 + 0x60))(this_01,pPVar6);
      PennyGiftBoxRankItem::InitView(pPVar6,false,iVar13);
      iVar15 = iVar15 + iVar2 + iVar3;
    }
    lVar7 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
    iVar4 = FUN_04e76dfc(*(undefined8 *)(lVar7 + 0x98),*(undefined8 *)(lVar7 + 0xa0));
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
    iVar2 = FUN_04e790b0(10);
    iVar4 = *(int *)(pWVar5 + 0x50);
    iVar3 = FUN_04e790b0(0x41);
    iVar15 = 0;
    while( true ) {
      lVar7 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
      iVar13 = (int)uVar14;
      uVar8 = FUN_04e76dfc(*(undefined8 *)(lVar7 + 0x98),*(undefined8 *)(lVar7 + 0xa0));
      bVar1 = uVar8 <= uVar14;
      uVar14 = uVar14 + 1;
      if (bVar1) break;
      pPVar6 = ::operator_new(0xf0);
      PennyGiftBoxRankItem::PennyGiftBoxRankItem(pPVar6);
      Sexy::Insets::Insets((Insets *)asStack_18,0,iVar15,iVar4,iVar3);
      (**(code **)(*(long *)pPVar6 + 0x1a0))(pPVar6,asStack_18);
      (**(code **)(*(long *)pWVar5 + 0x60))(pWVar5,pPVar6);
      PennyGiftBoxRankItem::InitView(pPVar6,false,iVar13);
      iVar15 = iVar15 + iVar2 + iVar3;
    }
    lVar7 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
    iVar4 = FUN_04e76dfc(*(undefined8 *)(lVar7 + 0x98),*(undefined8 *)(lVar7 + 0xa0));
    plVar12 = *(long **)(this + 0x150);
    pcVar11 = *(code **)(*plVar12 + 0x60);
    *(int *)(pWVar5 + 0x54) = iVar4 * (iVar2 + iVar3) - iVar2;
    (*pcVar11)(plVar12,pWVar5);
  }
  lVar7 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
  uVar14 = 0;
  lVar7 = FUN_04e76f38(*(undefined8 *)(lVar7 + 0x68),*(undefined8 *)(lVar7 + 0x70));
  if (lVar7 != 0) {
    do {
      Sexy::StrFormat("Widget_Totaly_Reward_Priview%d",asStack_18,(ulong)((int)uVar14 + 1));
      pWVar5 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_18);
      std::string::~string(asStack_18);
      if (pWVar5 != (Widget *)0x0) {
        lVar7 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
        lVar7 = FUN_04e76f68(*(undefined8 *)(lVar7 + 0x68),uVar14);
        AddItems(this,pWVar5,(vector *)(lVar7 + 0x10));
      }
      lVar7 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
      uVar14 = uVar14 + 1;
      uVar8 = FUN_04e76f38(*(undefined8 *)(lVar7 + 0x68),*(undefined8 *)(lVar7 + 0x70));
    } while (uVar14 < uVar8);
  }
  lVar7 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
  if (*(char *)(lVar7 + 0xc1) == '\0') {
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
  lVar7 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
  if (*(int *)(lVar7 + 0xbc) < 10000) {
    std::string::string(asStack_28,"UIText_Totaly_Ranking_Num");
    pUVar9 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_28);
    lVar7 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
    std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar7 + 0xbc));
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


/* PennyGiftBoxRank::OnRefreshPennyGiftBoxRank(int) */

void __thiscall PennyGiftBoxRank::OnRefreshPennyGiftBoxRank(PennyGiftBoxRank *this,int param_1)

{
  this[0x15a] = (PennyGiftBoxRank)0x0;
  if (param_1 != 1) {
    InitTotalyInfo(this);
    return;
  }
  InitDailyInfo(this);
  return;
}


/* PennyGiftBoxRank::InitView() */

void __thiscall PennyGiftBoxRank::InitView(PennyGiftBoxRank *this)

{
  InitDailyInfo(this);
  InitTotalyInfo(this);
  return;
}


/* PennyGiftBoxRank::Refresh() */

void PennyGiftBoxRank::Refresh(void)

{
  PennyGiftBoxRank *in_x0;
  
  InitDailyInfo(in_x0);
  InitTotalyInfo(in_x0);
  return;
}

