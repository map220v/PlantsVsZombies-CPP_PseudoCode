// Class: ActiveRebateTab


/* ActiveRebateTab::ButtonPress(int) */

int ActiveRebateTab::ButtonPress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to ActiveRebateTab::ButtonPress(int) */

void __thiscall ActiveRebateTab::ButtonPress(ActiveRebateTab *this,int param_1)

{
  ButtonPress((int)this + -0x28);
  return;
}


/* ActiveRebateTab::ButtonDepress(int) */

int ActiveRebateTab::ButtonDepress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to ActiveRebateTab::ButtonDepress(int) */

void __thiscall ActiveRebateTab::ButtonDepress(ActiveRebateTab *this,int param_1)

{
  ButtonDepress((int)this + -0x28);
  return;
}


/* ActiveRebateTab::~ActiveRebateTab() */

void __thiscall ActiveRebateTab::~ActiveRebateTab(ActiveRebateTab *this)

{
  *(undefined ***)this = &PTR__ActiveRebateTab_06924fa0;
  *(undefined **)(this + 0x28) = &DAT_06925008;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  nop();
  return;
}


/* ActiveRebateTab::~ActiveRebateTab() */

void __thiscall ActiveRebateTab::~ActiveRebateTab(ActiveRebateTab *this)

{
  ~ActiveRebateTab(this);
  AK::FreeHook(this);
  return;
}


/* ActiveRebateTab::AddContent() */

void __thiscall ActiveRebateTab::AddContent(ActiveRebateTab *this)

{
  RebateContentWidget *this_00;
  
  this_00 = ::operator_new(0xd8);
  RebateContentWidget::RebateContentWidget(this_00);
  (**(code **)(**(long **)(this + 0x20) + 0x60))(*(long **)(this + 0x20),this_00);
  (**(code **)(*(long *)this_00 + 0x1a8))
            (this_00,*(undefined4 *)(*(long *)(this + 0x20) + 0x48),
             *(undefined4 *)(*(long *)(this + 0x20) + 0x4c));
  return;
}


/* ActiveRebateTab::ActiveRebateTab(int, UI::Dialog*) */

void __thiscall ActiveRebateTab::ActiveRebateTab(ActiveRebateTab *this,int param_1,Dialog *param_2)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  RebateDateMgr *this_00;
  UIWidgetImage *this_01;
  long *plVar5;
  
  ActiveCenterTabBase::ActiveCenterTabBase((ActiveCenterTabBase *)this,param_1,param_2);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x28));
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined ***)this = &PTR__ActiveRebateTab_06924fa0;
  *(undefined **)(this + 0x28) = &DAT_06925008;
  this_00 = (RebateDateMgr *)RebateDateMgr::GetInstance();
  cVar3 = RebateDateMgr::IsValidTime(this_00);
  if (cVar3 == '\0') {
    (**(code **)(**(long **)(this + 0x18) + 0x158))(*(long **)(this + 0x18));
    return;
  }
  uVar1 = *(undefined4 *)(*(long *)(this + 0x20) + 0x50);
  iVar2 = *(int *)(*(long *)(this + 0x20) + 0x54);
  this_01 = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(this_01);
  *(UIWidgetImage **)(this + 0x20) = this_01;
  plVar5 = (long *)ActiveCenterTabBase::GetTabContent((ActiveCenterTabBase *)this);
  (**(code **)(*plVar5 + 0x60))(plVar5,*(undefined8 *)(this + 0x20));
  plVar5 = *(long **)(this + 0x20);
  iVar4 = FUN_049ab108(0x3c);
  (**(code **)(*plVar5 + 0x198))(plVar5,0,0,uVar1,iVar4 + iVar2);
  AddContent(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveRebateTab::AddGetRewardButton() */

void __thiscall ActiveRebateTab::AddGetRewardButton(ActiveRebateTab *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  PVZ2UIButton *pPVar9;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *pSVar10;
  long lVar11;
  long *plVar12;
  code *pcVar13;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_78,L"[CONSUMPTION_GETREWARD]",auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar9 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar9,0x12cc,(ButtonListener *)(this + 0x28),awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0x30) = pPVar9;
  FUN_05476c50(awStack_78);
  nop();
  pPVar9 = *(PVZ2UIButton **)(this + 0x30);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b74188,3);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b74298,3);
  PVZ2UIButton::SetDialogStates(pPVar9,(PVZ2UIImage *)awStack_78,aPStack_40);
  (**(code **)(**(long **)(this + 0x20) + 0x60))
            (*(long **)(this + 0x20),*(undefined8 *)(this + 0x30));
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b74188);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  iVar5 = FUN_049ab108(0x1e);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b74188);
  uVar6 = SalesProgressBar::GetCurrentLevel(pSVar10);
  plVar12 = *(long **)(this + 0x30);
  lVar11 = *(long *)(this + 0x20);
  iVar1 = *(int *)(lVar11 + 0x50);
  iVar2 = *(int *)(lVar11 + 0x48);
  iVar3 = *(int *)(lVar11 + 0x4c);
  pcVar13 = *(code **)(*plVar12 + 0x198);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b74270);
  iVar7 = SalesProgressBar::GetCurrentLevel(pSVar10);
  iVar8 = FUN_049ab108(0x19);
  (*pcVar13)(plVar12,iVar2 + (iVar1 - (iVar4 + iVar5)) / 2,(iVar3 + iVar7) - iVar8,iVar4 + iVar5,
             uVar6);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveRebateTab::DrawForeground(Sexy::Graphics*) */

void __thiscall ActiveRebateTab::DrawForeground(ActiveRebateTab *this,Graphics *param_1)

{
  char cVar1;
  GraphicsAutoState aGStack_18 [8];
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ActiveCenterTabBase::DrawForeground((ActiveCenterTabBase *)this,param_1);
  cVar1 = FUN_049ab104(*(undefined1 *)(*(long *)(this + 0x18) + 0x1a8));
  if (cVar1 != '\0') {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_18,param_1);
    (**(code **)(**(long **)(this + 0x20) + 0xd0))(&local_10,*(long **)(this + 0x20));
    Sexy::Graphics::Translate(param_1,local_10,local_c);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

