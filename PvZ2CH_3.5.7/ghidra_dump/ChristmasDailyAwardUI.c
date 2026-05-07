// Class: ChristmasDailyAwardUI


/* ChristmasDailyAwardUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void ChristmasDailyAwardUI::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to ChristmasDailyAwardUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
ChristmasDailyAwardUI::ScrollTargetReached(ChristmasDailyAwardUI *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* ChristmasDailyAwardUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void ChristmasDailyAwardUI::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to ChristmasDailyAwardUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
ChristmasDailyAwardUI::ScrollTargetInterrupted(ChristmasDailyAwardUI *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* ChristmasDailyAwardUI::OnCreate() */

undefined8 __thiscall ChristmasDailyAwardUI::OnCreate(ChristmasDailyAwardUI *this)

{
  UI::Dialog::OnCreate((Dialog *)this);
  (**(code **)(*(long *)this + 0x358))(this);
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChristmasDailyAwardUI::GetLayoutName() */

void __thiscall ChristmasDailyAwardUI::GetLayoutName(ChristmasDailyAwardUI *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"ChristmasDailyAwardUI");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* ChristmasDailyAwardUI::ButtonDepress(int) */

void __thiscall ChristmasDailyAwardUI::ButtonDepress(ChristmasDailyAwardUI *this,int param_1)

{
  if (param_1 != 0) {
    return;
  }
  UISingletonDialog<ChristmasDailyAwardUI>::CloseDialog();
  return;
}


/* non-virtual thunk to ChristmasDailyAwardUI::ButtonDepress(int) */

void __thiscall ChristmasDailyAwardUI::ButtonDepress(ChristmasDailyAwardUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChristmasDailyAwardUI::ChristmasDailyAwardUI() */

void __thiscall ChristmasDailyAwardUI::ChristmasDailyAwardUI(ChristmasDailyAwardUI *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  LotteryResultProgressBar *this_00;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<ChristmasDailyAwardUI>::UISingletonDialog
            ((UISingletonDialog<ChristmasDailyAwardUI> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined ***)this = &PTR_GetClass_066c9e10;
  *(undefined **)(this + 0xd8) = &DAT_066ca180;
  *(undefined ***)(this + 0x138) = &PTR__ChristmasDailyAwardUI_066ca1c8;
  *(undefined8 *)(this + 0x148) = 0;
  Sexy::Insets::Insets((Insets *)(this + 0x150));
  Sexy::Insets::Insets((Insets *)(this + 0x160));
  Sexy::Insets::Insets((Insets *)(this + 0x170));
  DailyAwardBonus::DailyAwardBonus((DailyAwardBonus *)(this + 0x180));
  Sexy::Color::Color((Color *)(this + 0x1b0),1);
  FUN_05476574(this + 0x1c0);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1c8));
  std::string::string((string *)&local_18,"IMAGE_UI_PLANTADVENTURE_BG_EGYPT");
  this_00 = (LotteryResultProgressBar *)StringHelper::ToImage((string *)&local_18,false);
  std::string::~string((string *)&local_18);
  nop();
  if (this_00 != (LotteryResultProgressBar *)0x0) {
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_00);
    iVar2 = FUN_03925930(10);
    iVar3 = FUN_03925930(100);
    iVar4 = FUN_03925930(0x156);
    Sexy::Insets::Insets((Insets *)&local_18,iVar2,iVar3,iVar1,iVar4);
    *(undefined8 *)(this + 0x150) = local_18;
    *(undefined8 *)(this + 0x158) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChristmasDailyAwardUI::~ChristmasDailyAwardUI() */

void __thiscall ChristmasDailyAwardUI::~ChristmasDailyAwardUI(ChristmasDailyAwardUI *this)

{
  *(undefined ***)this = &PTR_GetClass_066c9e10;
  *(undefined **)(this + 0xd8) = &DAT_066ca180;
  *(undefined ***)(this + 0x138) = &PTR__ChristmasDailyAwardUI_066ca1c8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c8));
  FUN_05476c50(this + 0x1c0);
  DailySignBonus::~DailySignBonus((DailySignBonus *)(this + 0x180));
  UISingletonDialog<ChristmasDailyAwardUI>::~UISingletonDialog
            ((UISingletonDialog<ChristmasDailyAwardUI> *)this);
  return;
}


/* non-virtual thunk to ChristmasDailyAwardUI::~ChristmasDailyAwardUI() */

void __thiscall ChristmasDailyAwardUI::~ChristmasDailyAwardUI(ChristmasDailyAwardUI *this)

{
  ~ChristmasDailyAwardUI(this + -0x138);
  return;
}


/* ChristmasDailyAwardUI::~ChristmasDailyAwardUI() */

void __thiscall ChristmasDailyAwardUI::~ChristmasDailyAwardUI(ChristmasDailyAwardUI *this)

{
  ~ChristmasDailyAwardUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ChristmasDailyAwardUI::~ChristmasDailyAwardUI() */

void __thiscall ChristmasDailyAwardUI::~ChristmasDailyAwardUI(ChristmasDailyAwardUI *this)

{
  ~ChristmasDailyAwardUI(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChristmasDailyAwardUI::UpdateTimeLabel() */

void __thiscall ChristmasDailyAwardUI::UpdateTimeLabel(ChristmasDailyAwardUI *this)

{
  char cVar1;
  int iVar2;
  undefined8 local_98;
  undefined8 uStack_90;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_03924b84(local_80);
  if (cVar1 != '\0') {
    iVar2 = ActiveItem::GetLeftTimes(aAStack_88);
    if ((long)iVar2 < 1) {
      Sexy::Color::Color((Color *)&local_98,2);
      *(undefined8 *)(this + 0x1b0) = local_98;
      *(undefined8 *)(this + 0x1b8) = uStack_90;
      Sexy::StrFormat(L"0",(Color *)&local_98);
      FUN_054766c8(this + 0x1c0,(Color *)&local_98);
      FUN_05476c50((Color *)&local_98);
    }
    else {
      Sexy::Color::Color((Color *)&local_98,1);
      *(undefined8 *)(this + 0x1b0) = local_98;
      *(undefined8 *)(this + 0x1b8) = uStack_90;
      Sexy::StrFormat(L"%d",(Color *)&local_98,(long)iVar2 / 0x15180);
      FUN_054766c8(this + 0x1c0,(Color *)&local_98);
      FUN_05476c50((Color *)&local_98);
    }
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChristmasDailyAwardUI::updateUIData() */

void __thiscall ChristmasDailyAwardUI::updateUIData(ChristmasDailyAwardUI *this)

{
  TRect *pTVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  long *plVar8;
  PVZ2UIScrollingWidget *this_02;
  ChristmasAwardActivityScrollPanel *this_03;
  string asStack_20 [8];
  undefined8 local_18;
  int local_10;
  undefined4 uStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x350))();
  std::string::string((string *)&local_18,"Background_0");
  lVar7 = UI::Dialog::GetWidget((Dialog *)this,(string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  *(int *)(lVar7 + 0x4c) = *(int *)(lVar7 + 0x4c) + -10;
  Sexy::StrFormat("IMAGE_UI_NATIONDAYAWARD_IMG_TIME_LEBEL",asStack_20);
  GetImageByNameWithUIFallback(asStack_20);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1c8),(RtWeakPtr *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  std::string::~string(asStack_20);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abb2d8);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abb2d8);
  iVar3 = SalesProgressBar::GetCurrentLevel(this_01);
  iVar6 = (*(int *)(gLawnApp + 0x724) - iVar2) / 2;
  iVar4 = FUN_03925930(0x1fe);
  Sexy::Insets::Insets((Insets *)&local_18,iVar6,iVar4,iVar2,iVar3);
  *(undefined8 *)(this + 0x170) = local_18;
  *(ulong *)(this + 0x178) = CONCAT44(uStack_c,local_10);
  iVar4 = FUN_03925930(0x2f);
  iVar5 = FUN_03925930(0x1fe);
  Sexy::Insets::Insets((Insets *)&local_18,iVar6 + iVar2 / 2 + iVar4,iVar5,0x14,iVar3);
  *(undefined8 *)(this + 0x160) = local_18;
  *(ulong *)(this + 0x168) = CONCAT44(uStack_c,local_10);
  UpdateTimeLabel(this);
  std::string::string((string *)&local_18,"UIImage_2");
  plVar8 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  if (*(long *)(this + 0x140) != 0) {
    (**(code **)(*plVar8 + 0x68))(plVar8);
    *(undefined8 *)(this + 0x140) = 0;
  }
  pTVar1 = (TRect *)(this + 0x150);
  this_02 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_02,(ScrollWidgetListener *)(this + 0x138));
  *(PVZ2UIScrollingWidget **)(this + 0x140) = this_02;
  Sexy::Insets::Insets((Insets *)&local_18,(Insets *)pTVar1);
  iVar6 = FUN_03925930(0x32);
  local_10 = local_10 + iVar6;
  (**(code **)(**(long **)(this + 0x140) + 0x1a0))(*(long **)(this + 0x140),(string *)&local_18);
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0x140),2);
  (**(code **)(*plVar8 + 0x60))(plVar8,*(undefined8 *)(this + 0x140));
  if (*(long *)(this + 0x148) == 0) {
    this_03 = ::operator_new(0x128);
    ChristmasAwardActivityScrollPanel::ChristmasAwardActivityScrollPanel
              (this_03,pTVar1,(DailyAwardBonus *)(this + 0x180));
    *(ChristmasAwardActivityScrollPanel **)(this + 0x148) = this_03;
    (**(code **)(**(long **)(this + 0x140) + 0x60))(*(long **)(this + 0x140),this_03);
  }
  else {
    (**(code **)(**(long **)(this + 0x140) + 0x60))(*(long **)(this + 0x140));
    DailyAwardActivityScrollPanel::loadData
              (*(DailyAwardActivityScrollPanel **)(this + 0x148),pTVar1,
               (DailyAwardBonus *)(this + 0x180));
    ChristmasAwardActivityScrollPanel::InitView
              (*(ChristmasAwardActivityScrollPanel **)(this + 0x148));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChristmasDailyAwardUI::loadData() */

void __thiscall ChristmasDailyAwardUI::loadData(ChristmasDailyAwardUI *this)

{
  char cVar1;
  int iVar2;
  DailyAwardConfig aDStack_c0 [8];
  DailyAwardBonus aDStack_b8 [48];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_03924b84(local_80);
  if (cVar1 == '\0') {
LAB_0392fe90:
    ActiveItem::~ActiveItem(aAStack_88);
  }
  else {
    DailyAwardConfig::DailyAwardConfig(aDStack_c0);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aDStack_c0);
    if (cVar1 == '\0') {
      Sexy::OutputDebugStrF((wchar_t *)"ChristmasDailyAwardUI::loadData suc = %d");
    }
    else {
      Sexy::OutputDebugStrF((wchar_t *)"ChristmasDailyAwardUI::loadData suc = %d",1);
      if (local_70 != '\0') {
        DailyAwardBonus::operator=((DailyAwardBonus *)(this + 0x180),aDStack_b8);
        DailyAwardConfig::~DailyAwardConfig(aDStack_c0);
        goto LAB_0392fe90;
      }
    }
    DailyAwardConfig::~DailyAwardConfig(aDStack_c0);
    ActiveItem::~ActiveItem(aAStack_88);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

