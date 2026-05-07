// Class: NDDailyAwardUI


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NDDailyAwardUI::Update() */

void __thiscall NDDailyAwardUI::Update(NDDailyAwardUI *this)

{
  long *plVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Background_0");
  plVar1 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if ((plVar1 != (long *)0x0) && (*(char *)((long)plVar1 + 0x6c) == '\0')) {
    (**(code **)(*plVar1 + 0x158))(plVar1,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NDDailyAwardUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void NDDailyAwardUI::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to NDDailyAwardUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall NDDailyAwardUI::ScrollTargetReached(NDDailyAwardUI *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* NDDailyAwardUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void NDDailyAwardUI::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to NDDailyAwardUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall NDDailyAwardUI::ScrollTargetInterrupted(NDDailyAwardUI *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NDDailyAwardUI::GetLayoutName() */

void __thiscall NDDailyAwardUI::GetLayoutName(NDDailyAwardUI *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"NDDailyAwardUI");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NDDailyAwardUI::DrawOverlay(Sexy::Graphics*) */

void __thiscall NDDailyAwardUI::DrawOverlay(NDDailyAwardUI *this,Graphics *param_1)

{
  char cVar1;
  undefined8 uVar2;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = LawnApp::IsShowSevenDaysRewardView(gLawnApp);
  if (cVar1 == '\0') {
    uVar2 = PrimeText_PotentialTypeface::Typeface
                      (PrimeText_Game::Typeface_CafeteriaBlack_19_ThickOutline);
    Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x1b0));
    WriteWordInRect(param_1,this + 0x1c0,this + 0x160,uVar2,aIStack_18,5,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NDDailyAwardUI::ButtonDepress(int) */

void __thiscall NDDailyAwardUI::ButtonDepress(NDDailyAwardUI *this,int param_1)

{
  if (param_1 != 0) {
    return;
  }
  UISingletonDialog<NDDailyAwardUI>::CloseDialog();
  return;
}


/* non-virtual thunk to NDDailyAwardUI::ButtonDepress(int) */

void __thiscall NDDailyAwardUI::ButtonDepress(NDDailyAwardUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NDDailyAwardUI::NDDailyAwardUI() */

void __thiscall NDDailyAwardUI::NDDailyAwardUI(NDDailyAwardUI *this)

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
  UISingletonDialog<NDDailyAwardUI>::UISingletonDialog((UISingletonDialog<NDDailyAwardUI> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined ***)this = &PTR_GetClass_066d6d70;
  *(undefined **)(this + 0xd8) = &DAT_066d70d0;
  *(undefined ***)(this + 0x138) = &PTR__NDDailyAwardUI_066d7118;
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
    iVar2 = FUN_0396c5e8(0xf);
    iVar3 = FUN_0396c5e8(0x14);
    iVar4 = FUN_0396c5e8(0x156);
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


/* NDDailyAwardUI::~NDDailyAwardUI() */

void __thiscall NDDailyAwardUI::~NDDailyAwardUI(NDDailyAwardUI *this)

{
  *(undefined ***)this = &PTR_GetClass_066d6d70;
  *(undefined **)(this + 0xd8) = &DAT_066d70d0;
  *(undefined ***)(this + 0x138) = &PTR__NDDailyAwardUI_066d7118;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c8));
  FUN_05476c50(this + 0x1c0);
  DailySignBonus::~DailySignBonus((DailySignBonus *)(this + 0x180));
  UISingletonDialog<NDDailyAwardUI>::~UISingletonDialog((UISingletonDialog<NDDailyAwardUI> *)this);
  return;
}


/* non-virtual thunk to NDDailyAwardUI::~NDDailyAwardUI() */

void __thiscall NDDailyAwardUI::~NDDailyAwardUI(NDDailyAwardUI *this)

{
  ~NDDailyAwardUI(this + -0x138);
  return;
}


/* NDDailyAwardUI::~NDDailyAwardUI() */

void __thiscall NDDailyAwardUI::~NDDailyAwardUI(NDDailyAwardUI *this)

{
  ~NDDailyAwardUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NDDailyAwardUI::~NDDailyAwardUI() */

void __thiscall NDDailyAwardUI::~NDDailyAwardUI(NDDailyAwardUI *this)

{
  ~NDDailyAwardUI(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NDDailyAwardUI::UpdateTimeLabel() */

void __thiscall NDDailyAwardUI::UpdateTimeLabel(NDDailyAwardUI *this)

{
  int iVar1;
  undefined8 local_98;
  undefined8 uStack_90;
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar1);
  iVar1 = ActiveItem::GetLeftTimes(aAStack_88);
  if ((long)iVar1 < 1) {
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
    Sexy::StrFormat(L"%d",(Color *)&local_98,(long)iVar1 / 0x15180);
    FUN_054766c8(this + 0x1c0,(Color *)&local_98);
    FUN_05476c50((Color *)&local_98);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NDDailyAwardUI::loadData() */

void __thiscall NDDailyAwardUI::loadData(NDDailyAwardUI *this)

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
  cVar1 = FUN_0396c1bc(local_80);
  if (cVar1 != '\0') {
    DailyAwardConfig::DailyAwardConfig(aDStack_c0);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aDStack_c0);
    if ((cVar1 == '\0') || (local_70 == '\0')) {
      DailyAwardConfig::~DailyAwardConfig(aDStack_c0);
      ActiveItem::~ActiveItem(aAStack_88);
      goto LAB_039712d4;
    }
    DailyAwardBonus::operator=((DailyAwardBonus *)(this + 0x180),aDStack_b8);
    DailyAwardConfig::~DailyAwardConfig(aDStack_c0);
  }
  ActiveItem::~ActiveItem(aAStack_88);
LAB_039712d4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NDDailyAwardUI::updateUIData() */

void __thiscall NDDailyAwardUI::updateUIData(NDDailyAwardUI *this)

{
  TRect *pTVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  long *plVar6;
  PVZ2UIScrollingWidget *this_02;
  DailyAwardActivityScrollPanel *this_03;
  undefined8 local_18;
  int local_10;
  undefined4 uStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  loadData(this);
  std::string::string((string *)&local_18,"Background_0");
  UI::Dialog::GetWidget((Dialog *)this,(string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd188);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd188);
  iVar3 = SalesProgressBar::GetCurrentLevel(this_01);
  iVar4 = FUN_0396c5e8(0x50);
  Sexy::Insets::Insets((Insets *)&local_18,-iVar2 / 2,iVar4,iVar2,iVar3);
  *(undefined8 *)(this + 0x170) = local_18;
  *(ulong *)(this + 0x178) = CONCAT44(uStack_c,local_10);
  iVar4 = FUN_0396c5e8(0x6e);
  iVar5 = FUN_0396c5e8(0x9b);
  Sexy::Insets::Insets((Insets *)&local_18,-iVar2 / 2 + iVar2 / 2 + iVar4,iVar5,0x14,iVar3);
  *(undefined8 *)(this + 0x160) = local_18;
  *(ulong *)(this + 0x168) = CONCAT44(uStack_c,local_10);
  UpdateTimeLabel(this);
  std::string::string((string *)&local_18,"UIImage_2");
  plVar6 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  if (*(long *)(this + 0x140) != 0) {
    (**(code **)(*plVar6 + 0x68))(plVar6);
    *(undefined8 *)(this + 0x140) = 0;
  }
  pTVar1 = (TRect *)(this + 0x150);
  this_02 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_02,(ScrollWidgetListener *)(this + 0x138));
  *(PVZ2UIScrollingWidget **)(this + 0x140) = this_02;
  Sexy::Insets::Insets((Insets *)&local_18,(Insets *)pTVar1);
  iVar2 = FUN_0396c5e8(0x32);
  local_10 = local_10 + iVar2;
  (**(code **)(**(long **)(this + 0x140) + 0x1a0))(*(long **)(this + 0x140),(string *)&local_18);
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0x140),2);
  (**(code **)(*plVar6 + 0x60))(plVar6,*(undefined8 *)(this + 0x140));
  if (*(long *)(this + 0x148) == 0) {
    this_03 = ::operator_new(0x128);
    DailyAwardActivityScrollPanel::DailyAwardActivityScrollPanel
              (this_03,pTVar1,(DailyAwardBonus *)(this + 0x180));
    *(DailyAwardActivityScrollPanel **)(this + 0x148) = this_03;
    (**(code **)(**(long **)(this + 0x140) + 0x60))(*(long **)(this + 0x140),this_03);
  }
  else {
    (**(code **)(**(long **)(this + 0x140) + 0x60))(*(long **)(this + 0x140));
    DailyAwardActivityScrollPanel::loadData
              (*(DailyAwardActivityScrollPanel **)(this + 0x148),pTVar1,
               (DailyAwardBonus *)(this + 0x180));
    DailyAwardActivityScrollPanel::InitView(*(DailyAwardActivityScrollPanel **)(this + 0x148));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NDDailyAwardUI::OnCreate() */

undefined8 __thiscall NDDailyAwardUI::OnCreate(NDDailyAwardUI *this)

{
  UI::Dialog::OnCreate((Dialog *)this);
  updateUIData(this);
  return 1;
}

