// Class: SpringDailyAwardUI


/* SpringDailyAwardUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void SpringDailyAwardUI::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to SpringDailyAwardUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
SpringDailyAwardUI::ScrollTargetReached(SpringDailyAwardUI *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* SpringDailyAwardUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void SpringDailyAwardUI::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to SpringDailyAwardUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
SpringDailyAwardUI::ScrollTargetInterrupted(SpringDailyAwardUI *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringDailyAwardUI::GetLayoutName() */

void __thiscall SpringDailyAwardUI::GetLayoutName(SpringDailyAwardUI *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"SpringDailyAwardUI");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringDailyAwardUI::DrawOverlay(Sexy::Graphics*) */

void __thiscall SpringDailyAwardUI::DrawOverlay(SpringDailyAwardUI *this,Graphics *param_1)

{
  char cVar1;
  undefined8 uVar2;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = UIRedPacketResult::isActive();
  if (cVar1 == '\0') {
    uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline)
    ;
    Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 400));
    WriteWordInRect(param_1,this + 0x1a8,this + 0x170,uVar2,aIStack_18,5,1);
    uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline)
    ;
    Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 400));
    WriteWordInRect(param_1,this + 0x1a0,this + 0x160,uVar2,aIStack_18,5,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpringDailyAwardUI::~SpringDailyAwardUI() */

void __thiscall SpringDailyAwardUI::~SpringDailyAwardUI(SpringDailyAwardUI *this)

{
  *(undefined ***)this = &PTR_GetClass_066cf580;
  *(undefined **)(this + 0xd8) = &DAT_066cf8e8;
  *(undefined ***)(this + 0x138) = &PTR__SpringDailyAwardUI_066cf930;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b0));
  FUN_05476c50(this + 0x1a8);
  FUN_05476c50(this + 0x1a0);
  UISingletonDialog<SpringDailyAwardUI>::~UISingletonDialog
            ((UISingletonDialog<SpringDailyAwardUI> *)this);
  return;
}


/* non-virtual thunk to SpringDailyAwardUI::~SpringDailyAwardUI() */

void __thiscall SpringDailyAwardUI::~SpringDailyAwardUI(SpringDailyAwardUI *this)

{
  ~SpringDailyAwardUI(this + -0x138);
  return;
}


/* SpringDailyAwardUI::~SpringDailyAwardUI() */

void __thiscall SpringDailyAwardUI::~SpringDailyAwardUI(SpringDailyAwardUI *this)

{
  ~SpringDailyAwardUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to SpringDailyAwardUI::~SpringDailyAwardUI() */

void __thiscall SpringDailyAwardUI::~SpringDailyAwardUI(SpringDailyAwardUI *this)

{
  ~SpringDailyAwardUI(this + -0x138);
  return;
}


/* SpringDailyAwardUI::SpringDailyAwardUI() */

void __thiscall SpringDailyAwardUI::SpringDailyAwardUI(SpringDailyAwardUI *this)

{
  UISingletonDialog<SpringDailyAwardUI>::UISingletonDialog
            ((UISingletonDialog<SpringDailyAwardUI> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined ***)this = &PTR_GetClass_066cf580;
  *(undefined **)(this + 0xd8) = &DAT_066cf8e8;
  *(undefined ***)(this + 0x138) = &PTR__SpringDailyAwardUI_066cf930;
  *(undefined8 *)(this + 0x148) = 0;
  Sexy::Insets::Insets((Insets *)(this + 0x150));
  Sexy::Insets::Insets((Insets *)(this + 0x160));
  Sexy::Insets::Insets((Insets *)(this + 0x170));
  Sexy::Insets::Insets((Insets *)(this + 0x180));
  Sexy::Color::Color((Color *)(this + 400),1);
  FUN_05476574(this + 0x1a0);
  FUN_05476574(this + 0x1a8);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1b0));
  return;
}


/* SpringDailyAwardUI::ButtonDepress(int) */

void __thiscall SpringDailyAwardUI::ButtonDepress(SpringDailyAwardUI *this,int param_1)

{
  if ((param_1 != 0) && (param_1 != 0x66)) {
    return;
  }
  UISingletonDialog<SpringDailyAwardUI>::CloseDialog();
  return;
}


/* non-virtual thunk to SpringDailyAwardUI::ButtonDepress(int) */

void __thiscall SpringDailyAwardUI::ButtonDepress(SpringDailyAwardUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringDailyAwardUI::OnCreate() */

void __thiscall SpringDailyAwardUI::OnCreate(SpringDailyAwardUI *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  LotteryResultProgressBar *this_00;
  SpringChargeManager *this_01;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string((string *)&local_18,"IMAGE_UI_PLANTADVENTURE_BG_EGYPT");
  this_00 = (LotteryResultProgressBar *)StringHelper::ToImage((string *)&local_18,false);
  std::string::~string((string *)&local_18);
  nop();
  if (this_00 != (LotteryResultProgressBar *)0x0) {
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    iVar2 = FUN_03943dd0(1);
    SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_00);
    iVar3 = FUN_03943dd0(0x1e);
    iVar4 = FUN_03943dd0(100);
    iVar5 = FUN_03943dd0(0x140);
    Sexy::Insets::Insets((Insets *)&local_18,iVar3,iVar4,iVar1 + iVar2,iVar5);
    *(undefined8 *)(this + 0x150) = local_18;
    *(undefined8 *)(this + 0x158) = uStack_10;
  }
  (**(code **)(*(long *)this + 0x350))(this);
  this_01 = (SpringChargeManager *)Sexy::LazySingleton<SpringChargeManager>::GetInstancePtr();
  SpringChargeManager::UpdateBehaviorEventLog(this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringDailyAwardUI::Update() */

void __thiscall SpringDailyAwardUI::Update(SpringDailyAwardUI *this)

{
  SpringDailyAwardUI *pSVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  wstring awStack_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  ActiveItem aAStack_88 [128];
  long local_8;
  
  pSVar1 = this + 0x1a0;
  local_8 = ___stack_chk_guard;
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  iVar3 = ActiveItem::GetLeftTimes(aAStack_88);
  lVar4 = (long)iVar3;
  TodStringTranslate(L"[SPRING_TIME_COUNT]");
  FUN_054766c8(pSVar1,(Color *)&local_98);
  FUN_05476c50((Color *)&local_98);
  if (lVar4 < 0) {
    TodStringTranslate(L"[NETWORK_FAILED_UNCONNECTED]");
  }
  else {
    if (lVar4 / 0x15180 != 0) {
      TodStringTranslate(L"[REMAIN_DAYS]");
      TodReplaceNumberString(awStack_a0,L"{DAYS}",(int)(lVar4 / 0x15180));
      thunk_FUN_05477668(pSVar1,(Color *)&local_98);
      FUN_05476c50((Color *)&local_98);
      FUN_05476c50(awStack_a0);
      goto LAB_0394b158;
    }
    Sexy::Color::Color((Color *)&local_98,2);
    iVar2 = (int)(lVar4 / 0x3c);
    *(undefined8 *)(this + 400) = local_98;
    *(undefined8 *)(this + 0x198) = uStack_90;
    Sexy::StrFormat(L"%02d:%02d:%02d",(Color *)&local_98,(ulong)(uint)(iVar3 / 0xe10),
                    (ulong)(uint)(iVar2 + (int)((lVar4 / 0x3c) / 0x3c) * -0x3c),
                    (ulong)(uint)(iVar3 + iVar2 * -0x3c));
  }
  FUN_054766c8(pSVar1,(Color *)&local_98);
  FUN_05476c50((Color *)&local_98);
LAB_0394b158:
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringDailyAwardUI::updateUIData() */

void __thiscall SpringDailyAwardUI::updateUIData(SpringDailyAwardUI *this)

{
  TRect *pTVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  long *plVar8;
  PVZ2UIScrollingWidget *this_02;
  SpringAwardActivityScrollPanel *this_03;
  long lVar9;
  long *plVar10;
  string asStack_150 [8];
  undefined1 auStack_148 [8];
  Insets aIStack_140 [8];
  int local_138;
  ActiveItem aAStack_130 [8];
  undefined4 local_128;
  undefined8 local_b0;
  uint local_a8;
  undefined4 uStack_a4;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abbf08);
  LotteryResultProgressBar::GetCurrentLevel(this_00);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abbf08);
  iVar4 = SalesProgressBar::GetCurrentLevel(this_01);
  iVar5 = FUN_03943dd0(*(int *)(gLawnApp + 0x724) + -0xdc);
  iVar6 = FUN_03943dd0(0x82);
  iVar7 = FUN_03943dd0(0x96);
  Sexy::Insets::Insets((Insets *)&local_b0,iVar6 + iVar5 / 2,iVar7,0xdc,iVar4);
  iVar5 = *(int *)(gLawnApp + 0x724);
  *(undefined8 *)(this + 0x160) = local_b0;
  *(ulong *)(this + 0x168) = CONCAT44(uStack_a4,local_a8);
  iVar5 = FUN_03943dd0(iVar5 + -0xdc);
  iVar6 = FUN_03943dd0(0x50);
  iVar7 = FUN_03943dd0(0x96);
  Sexy::Insets::Insets((Insets *)&local_b0,iVar5 / 2 - iVar6,iVar7,0xdc,iVar4);
  *(undefined8 *)(this + 0x170) = local_b0;
  *(ulong *)(this + 0x178) = CONCAT44(uStack_a4,local_a8);
  std::string::string((string *)&local_b0,"UIImage_2");
  plVar8 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_b0);
  std::string::~string((string *)&local_b0);
  nop();
  if (*(long *)(this + 0x140) != 0) {
    (**(code **)(*plVar8 + 0x68))(plVar8);
    *(undefined8 *)(this + 0x140) = 0;
  }
  pTVar1 = (TRect *)(this + 0x150);
  this_02 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_02,(ScrollWidgetListener *)(this + 0x138));
  *(PVZ2UIScrollingWidget **)(this + 0x140) = this_02;
  Sexy::Insets::Insets(aIStack_140,(Insets *)pTVar1);
  iVar5 = FUN_03943dd0(0x32);
  plVar10 = *(long **)(this + 0x140);
  local_138 = local_138 + iVar5;
  (**(code **)(*plVar10 + 0x1a0))(plVar10,aIStack_140);
  iVar5 = (int)plVar10;
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0x140),2);
  (**(code **)(*plVar8 + 0x60))(plVar8,*(undefined8 *)(this + 0x140));
  SpringDailyLoginConfig::SpringDailyLoginConfig((SpringDailyLoginConfig *)&local_b0);
  iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar4);
  cVar2 = FUN_0394329c(local_128);
  if (cVar2 == '\0') {
    lVar9 = *(long *)(this + 0x148);
  }
  else {
    bVar3 = ActiveItem::GetDataSerialized(aAStack_130,(RtObject *)&local_b0);
    Sexy::OutputDebugStrF((wchar_t *)"SpringDailyAwardUI::loadData suc = %d",(ulong)bVar3);
    lVar9 = *(long *)(this + 0x148);
  }
  if (lVar9 == 0) {
    this_03 = ::operator_new(0x1b0);
    SpringAwardActivityScrollPanel::SpringAwardActivityScrollPanel
              (this_03,pTVar1,(SpringDailyLoginConfig *)&local_b0);
    *(SpringAwardActivityScrollPanel **)(this + 0x148) = this_03;
    (**(code **)(**(long **)(this + 0x140) + 0x60))(*(long **)(this + 0x140),this_03);
  }
  else {
    (**(code **)(**(long **)(this + 0x140) + 0x60))(*(long **)(this + 0x140));
    SpringAwardActivityScrollPanel::loadData
              (*(SpringAwardActivityScrollPanel **)(this + 0x148),pTVar1,
               (SpringDailyLoginConfig *)&local_b0);
    SpringAwardActivityScrollPanel::InitView(*(SpringAwardActivityScrollPanel **)(this + 0x148));
  }
  std::string::string(asStack_150,"[EXP_PLANT_LOGIN_SUM_DAYS]");
  StringHelper::ReplaceNumberString
            ((StringHelper *)asStack_150,(string *)L"{NUMBER}",(wchar_t *)(ulong)local_a8,iVar5);
  FUN_054766c8(this + 0x1a8,auStack_148);
  FUN_05476c50(auStack_148);
  std::string::~string(asStack_150);
  nop();
  ActiveItem::~ActiveItem(aAStack_130);
  SpringDailyLoginConfig::~SpringDailyLoginConfig((SpringDailyLoginConfig *)&local_b0);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

