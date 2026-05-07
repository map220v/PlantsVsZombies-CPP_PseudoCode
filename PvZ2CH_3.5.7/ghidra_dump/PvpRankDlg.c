// Class: PvpRankDlg


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PvpRankDlg::GetLayoutName() */

void __thiscall PvpRankDlg::GetLayoutName(PvpRankDlg *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"PvpRank");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PvpRankDlg::onRowSelected(int, UIScrollControl*, std::vector<RankItemWidget*,
   std::allocator<RankItemWidget*> >&) */

void __thiscall
PvpRankDlg::onRowSelected(PvpRankDlg *this,int param_1,UIScrollControl *param_2,vector *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  int iVar10;
  
  uVar8 = *(undefined8 *)param_3;
  uVar7 = 0;
  lVar4 = FUN_04aeb82c(uVar8,*(undefined8 *)(param_3 + 8));
  iVar10 = 0;
  if (lVar4 != 0) {
    do {
      if (param_1 == (int)uVar7) {
        puVar5 = (undefined8 *)FUN_04aeb858(uVar8,uVar7);
        RankItemWidget::onSelected
                  ((RankItemWidget *)*puVar5,(bool)((byte)((RankItemWidget *)*puVar5)[0xf4] ^ 1));
      }
      else {
        puVar5 = (undefined8 *)FUN_04aeb858(uVar8,uVar7);
        RankItemWidget::onSelected((RankItemWidget *)*puVar5,false);
      }
      puVar5 = (undefined8 *)FUN_04aeb858(*(undefined8 *)param_3,uVar7);
      plVar9 = (long *)*puVar5;
      if ((char)plVar9[0x1c] == '\0') {
        if (*(char *)((long)plVar9 + 0xf4) == '\0') {
          uVar3 = FUN_04aeba90(0x46);
          lVar4 = *plVar9;
          uVar1 = *(undefined4 *)(param_2 + 0x50);
          goto LAB_04aec40c;
        }
        iVar2 = FUN_04aeba90(0x46);
        (**(code **)(*plVar9 + 0x198))(plVar9,0,iVar10,*(undefined4 *)(param_2 + 0x50),iVar2 << 1);
        iVar2 = FUN_04aeba90(0x46);
        iVar2 = iVar2 << 1;
      }
      else {
        uVar3 = FUN_04aeba90(0x46);
        lVar4 = *plVar9;
        uVar1 = *(undefined4 *)(param_2 + 0x50);
LAB_04aec40c:
        (**(code **)(lVar4 + 0x198))(plVar9,0,iVar10,uVar1,uVar3);
        iVar2 = FUN_04aeba90(0x46);
      }
      uVar7 = uVar7 + 1;
      iVar10 = iVar10 + iVar2;
      uVar8 = *(undefined8 *)param_3;
      uVar6 = FUN_04aeb82c(uVar8,*(undefined8 *)(param_3 + 8));
    } while (uVar7 < uVar6);
  }
  return;
}


/* PvpRankDlg::onRowSelected(int, int) */

void __thiscall PvpRankDlg::onRowSelected(PvpRankDlg *this,int param_1,int param_2)

{
  if (param_2 != 1) {
    onRowSelected(this,param_1,*(UIScrollControl **)(this + 0x158),(vector *)(this + 0x160));
    return;
  }
  onRowSelected(this,param_1,*(UIScrollControl **)(this + 400),(vector *)(this + 0x198));
  return;
}


/* PvpRankDlg::ViewUserArmy(S2C_PVP_RankInfo) */

void __thiscall PvpRankDlg::ViewUserArmy(PvpRankDlg *this,S2C_PVP_RankInfo *param_2)

{
  PVPManager *this_00;
  
  S2C_PVP_RankInfo::operator=((S2C_PVP_RankInfo *)(this + 0x1f8),param_2);
  this_00 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  PVPManager::RequestOtherUserZbList(this_00,*(long *)param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PvpRankDlg::setGardenInfo() */

void __thiscall PvpRankDlg::setGardenInfo(PvpRankDlg *this)

{
  int iVar1;
  PVPManager *pPVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  UIWidgetText *pUVar6;
  long lVar7;
  string *extraout_x1;
  PvpRankDlg *pPVar8;
  undefined8 uVar9;
  undefined1 auStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  puVar3 = (undefined8 *)PVPManager::GetPreGardenRankInfoList(pPVar2);
  uVar4 = FUN_04aeb838(*puVar3,puVar3[1]);
  if (uVar4 < 3) {
    pPVar2 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    lVar5 = PVPManager::GetMainRankInfo(pPVar2);
    FUN_05476574(auStack_20);
    iVar1 = *(int *)(lVar5 + 0x10);
  }
  else {
    lVar5 = 0;
    pPVar8 = this + 0x1c0;
    do {
      Sexy::StrFormat(L"[PVP_RANK_GARDEN_LASTNUM%d]",auStack_20,(ulong)((int)lVar5 + 1));
      uVar9 = *(undefined8 *)pPVar8;
      lVar7 = FUN_04aeb84c(*puVar3,lVar5);
      Sexy::ToSexyString((wstring *)(lVar7 + 8));
      PuzzleTip::SetTip(uVar9,asStack_10);
      FUN_05476c50(asStack_10);
      uVar9 = *(undefined8 *)(pPVar8 + 0x18);
      lVar7 = lVar5 + 1;
      lVar5 = FUN_04aeb84c(*puVar3,lVar5);
      Sexy::StrFormat("%d",(Sexy *)asStack_18,(ulong)*(uint *)(lVar5 + 0x14));
      Sexy::ToSexyString((Sexy *)asStack_18,extraout_x1);
      PuzzleTip::SetTip(uVar9,asStack_10);
      FUN_05476c50(asStack_10);
      std::string::~string(asStack_18);
      FUN_05476c50(auStack_20);
      lVar5 = lVar7;
      pPVar8 = pPVar8 + 8;
    } while (lVar7 != 3);
    pPVar2 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    lVar5 = PVPManager::GetMainRankInfo(pPVar2);
    FUN_05476574(auStack_20);
    iVar1 = *(int *)(lVar5 + 0x10);
  }
  if (iVar1 < 0) {
    FUN_054772c4(auStack_20,&DAT_0573e4e0);
  }
  else {
    Sexy::StrFormat(L"%d",asStack_10,(ulong)(iVar1 + 1));
    FUN_054766c8(auStack_20,asStack_10);
    FUN_05476c50(asStack_10);
  }
  std::string::string(asStack_10,"UIText_0");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  PuzzleTip::SetTip(pUVar6,auStack_20);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_18,"UIText_1");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  Sexy::ToSexyString((wstring *)(lVar5 + 8));
  PuzzleTip::SetTip(pUVar6,asStack_10);
  FUN_05476c50(asStack_10);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"UIText_4");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  Sexy::StrFormat(L"%d",asStack_10,(ulong)*(uint *)(lVar5 + 0x14));
  PuzzleTip::SetTip(pUVar6,asStack_10);
  FUN_05476c50(asStack_10);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"UIText_5");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  Sexy::StrFormat(L"%d",asStack_10,(ulong)*(uint *)(lVar5 + 0x18));
  PuzzleTip::SetTip(pUVar6,asStack_10);
  FUN_05476c50(asStack_10);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"UIText_6");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  Sexy::StrFormat(L"%d",asStack_10,(ulong)*(uint *)(lVar5 + 0x1c));
  PuzzleTip::SetTip(pUVar6,asStack_10);
  FUN_05476c50(asStack_10);
  std::string::~string(asStack_18);
  nop();
  FUN_05476c50(auStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PvpRankDlg::onNotifyPreviewModeBegin() */

void PvpRankDlg::onNotifyPreviewModeBegin(void)

{
  if (UISingletonDialog<PvpRankDlg>::m_pInstance != (long *)0x0) {
    (**(code **)(*UISingletonDialog<PvpRankDlg>::m_pInstance + 0x318))();
    UISingletonDialog<PvpRankDlg>::m_pInstance = (long *)0x0;
  }
  return;
}


/* PvpRankDlg::ButtonDepress(int) */

void __thiscall PvpRankDlg::ButtonDepress(PvpRankDlg *this,int param_1)

{
  PVPManager *this_00;
  
  if (param_1 != 0) {
    return;
  }
  UISingletonDialog<PvpRankDlg>::CloseDialog();
  this_00 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  PVPManager::ClearRankList(this_00);
  return;
}


/* non-virtual thunk to PvpRankDlg::ButtonDepress(int) */

void __thiscall PvpRankDlg::ButtonDepress(PvpRankDlg *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PvpRankDlg::setGardenTitleInfo() */

void __thiscall PvpRankDlg::setGardenTitleInfo(PvpRankDlg *this)

{
  int iVar1;
  wstring *pwVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  RankAwardWidget *pRVar10;
  PVPManager *this_00;
  undefined8 *puVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  RankAwardWidget RVar15;
  long local_40;
  wstring awStack_38 [8];
  wstring awStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  string asStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_40 = LawnApp::GetRealBeijingTime(gLawnApp);
  if (local_40 == 0) {
    local_40 = time((time_t *)0x0);
  }
  lVar9 = LawnApp::BeijingTime(gLawnApp,&local_40);
  iVar3 = *(int *)(lVar9 + 0x14);
  iVar14 = *(int *)(lVar9 + 0x10);
  iVar13 = iVar3 + 0x76c;
  iVar1 = iVar14 + 1;
  iVar7 = getMonthDay(iVar13,iVar1);
  iVar4 = *(int *)(lVar9 + 0xc);
  iVar5 = *(int *)(lVar9 + 8);
  TodStringTranslate(L"[PVP_RANK_GARDEN_TITLE]");
  TodReplaceNumberString(awStack_38,L"{YEAR}",iVar13);
  FUN_054766c8(awStack_38,auStack_10);
  FUN_05476c50(auStack_10);
  TodReplaceNumberString(awStack_38,L"{MONTH}",iVar1);
  FUN_054766c8(awStack_38,auStack_10);
  FUN_05476c50(auStack_10);
  TodReplaceNumberString(awStack_38,L"{DAY}",iVar7 - iVar4);
  FUN_054766c8(awStack_38,auStack_10);
  FUN_05476c50(auStack_10);
  TodReplaceNumberString(awStack_38,L"{HOUR}",0x18 - iVar5);
  FUN_054766c8(awStack_38,auStack_10);
  FUN_05476c50(auStack_10);
  uVar8 = FUN_04aeba90(0x1e);
  pRVar10 = ::operator_new(0xe8);
  memset(pRVar10,0,0xe8);
  RankAwardWidget::RankAwardWidget(pRVar10);
  pRVar10[0xd1] = (RankAwardWidget)0x1;
  thunk_FUN_05477b9c(pRVar10 + 0xd8,awStack_38);
  (**(code **)(*(long *)pRVar10 + 0x198))
            (pRVar10,0,0,*(undefined4 *)(*(long *)(this + 0x150) + 0x50),uVar8);
  UIScrollControl::SetAutoArrange(*(UIScrollControl **)(this + 0x150),false);
  (**(code **)(**(long **)(this + 0x150) + 0x60))(*(long **)(this + 0x150),pRVar10);
  if (iVar1 == 1) {
    iVar13 = iVar3 + 0x76b;
    iVar14 = 0xc;
  }
  RVar15 = (RankAwardWidget)0x0;
  TodStringTranslate(L"[PVP_RANK_GARDEN_LAST]");
  FUN_054766c8(awStack_38,auStack_10);
  FUN_05476c50(auStack_10);
  TodReplaceNumberString(awStack_38,L"{YEAR}",iVar13);
  FUN_054766c8(awStack_38,auStack_10);
  FUN_05476c50(auStack_10);
  TodReplaceNumberString(awStack_38,L"{MONTH}",iVar14);
  FUN_054766c8(awStack_38,auStack_10);
  FUN_05476c50(auStack_10);
  PuzzleTip::SetTip(*(undefined8 *)(this + 0x1b8),awStack_38);
  this_00 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  puVar11 = (undefined8 *)PVPManager::GetGardenRewardInfoList(this_00);
  FUN_05476574(awStack_30);
  local_28 = FUN_04aece78(*puVar11);
  local_20 = FUN_04aecec8(puVar11[1]);
  while (bVar6 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar6) {
    piVar12 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    pRVar10 = ::operator_new(0xe8);
    memset(pRVar10,0,0xe8);
    RankAwardWidget::RankAwardWidget(pRVar10);
    lVar9 = *(long *)(this + 0x150);
    pRVar10[0xd1] = RVar15;
    RVar15 = (RankAwardWidget)((byte)RVar15 ^ 1);
    (**(code **)(*(long *)pRVar10 + 0x198))(pRVar10,0,0,*(undefined4 *)(lVar9 + 0x50),uVar8);
    if (*piVar12 - 1U < 3) {
      Sexy::StrFormat("[PVP_RANK_GARDEN_AWARD%d]",asStack_18);
      StringHelper::ToStringValue(asStack_18);
      FUN_054766c8(pRVar10 + 0xd8,auStack_10);
      FUN_05476c50(auStack_10);
      std::string::~string(asStack_18);
    }
    else {
      if (*piVar12 == piVar12[1]) {
        Sexy::StrFormat(L"%d",auStack_10);
      }
      else {
        Sexy::StrFormat(L"%d-%d",auStack_10);
      }
      pwVar2 = (wstring *)(pRVar10 + 0xd8);
      FUN_054766c8(awStack_30,auStack_10);
      FUN_05476c50(auStack_10);
      std::string::string(asStack_18,"[RANK_TEXT]");
      StringHelper::ToStringValue(asStack_18);
      FUN_054766c8(pwVar2,auStack_10);
      FUN_05476c50(auStack_10);
      std::string::~string(asStack_18);
      nop();
      TodReplaceString(pwVar2,L"{RANK_COUNT}",awStack_30);
      FUN_054766c8(pwVar2,auStack_10);
      FUN_05476c50(auStack_10);
      FUN_05477888(pwVar2,&DAT_0573a608);
    }
    Sexy::StrFormat(L"%d",auStack_10,(ulong)(uint)piVar12[3]);
    FUN_054766c8(pRVar10 + 0xe0,auStack_10);
    FUN_05476c50(auStack_10);
    (**(code **)(**(long **)(this + 0x150) + 0x60))(*(long **)(this + 0x150),pRVar10);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_28);
  }
  UIScrollControl::SetAutoArrange(*(UIScrollControl **)(this + 0x150),true);
  FUN_05476c50(awStack_30);
  FUN_05476c50(awStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PvpRankDlg::OnCreate() */

void __thiscall PvpRankDlg::OnCreate(PvpRankDlg *this)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  UITabControl *pUVar7;
  undefined8 uVar8;
  UIScrollControl *pUVar9;
  long lVar10;
  PVPManager *pPVar11;
  vector<S2C_PVP_LeagueInfo,std::allocator<S2C_PVP_LeagueInfo>> *this_00;
  undefined8 *puVar12;
  RankTitleWidget *this_01;
  int *piVar13;
  UIWidgetText *pUVar14;
  long *plVar15;
  ScrollWidget *pSVar16;
  int local_38 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string((string *)&local_20,"UITabControl_main");
  pUVar7 = UI::Dialog::GetWidget<UITabControl>((Dialog *)this,(string *)&local_20);
  *(UITabControl **)(this + 0x138) = pUVar7;
  std::string::~string((string *)&local_20);
  nop();
  uVar8 = UITabControl::GetTab(*(UITabControl **)(this + 0x138),1);
  *(undefined8 *)(this + 0x140) = uVar8;
  std::string::string((string *)&local_20,"UIScroll_0");
  pUVar9 = UI::Dialog::GetWidget<UIScrollControl>((Dialog *)this,(string *)&local_20);
  *(UIScrollControl **)(this + 0x148) = pUVar9;
  std::string::~string((string *)&local_20);
  nop();
  lVar10 = AccessoryContent::GetDisplayImage(*(AccessoryContent **)(this + 0x148));
  pSVar16 = *(ScrollWidget **)(this + 0x148);
  *(undefined4 *)(lVar10 + 0x54) = *(undefined4 *)(pSVar16 + 0x54);
  Sexy::ScrollWidget::SetScrollMode(pSVar16,1);
  iVar2 = FUN_04aeba90(5);
  UIScrollControl::SetPadding(*(UIScrollControl **)(this + 0x148),iVar2);
  UIScrollControl::SetAutoArrange(*(UIScrollControl **)(this + 0x148),true);
  iVar2 = FUN_04aeba90(0xdc);
  uVar3 = FUN_04aeba90(0x96);
  pPVar11 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  this_00 = (vector<S2C_PVP_LeagueInfo,std::allocator<S2C_PVP_LeagueInfo>> *)
            PVPManager::GetLeagueInfoList(pPVar11);
  lVar10 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  iVar4 = FUN_04aeb7d0(*(undefined4 *)(lVar10 + 0x18));
  Sexy::Point::Point((Point *)local_38,0,0);
  local_30 = FUN_04aecd70(*(undefined8 *)this_00);
  local_28 = FUN_04aecdc0(*(undefined8 *)(this_00 + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    puVar12 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    local_20 = *puVar12;
    uStack_18 = puVar12[1];
    local_10 = *(undefined4 *)(puVar12 + 2);
    this_01 = ::operator_new(0x110);
    RankTitleWidget::RankTitleWidget(this_01,this);
    (**(code **)(*(long *)this_01 + 0x198))(this_01,0,0,iVar2,uVar3);
    *(int *)(this_01 + 0x108) = ((int)local_20 - iVar4) + 1;
    RankTitleWidget::SetLeagueInfo(this_01,(S2C_PVP_LeagueInfo *)&local_20);
    (**(code **)(**(long **)(this + 0x148) + 0x60))(*(long **)(this + 0x148),this_01);
    if ((int)local_20 == iVar4) {
      if (iVar4 < 2) {
        local_38[0] = 0;
      }
      else {
        piVar13 = (int *)std::vector<S2C_PVP_LeagueInfo,std::allocator<S2C_PVP_LeagueInfo>>::back
                                   (this_00);
        if (iVar4 < *piVar13) {
          local_38[0] = (*(int *)(this_01 + 0x48) + *(int *)(this_01 + 0x50) / 2) -
                        *(int *)(*(long *)(this + 0x148) + 0x50) / 2;
        }
        else {
          local_38[0] = (iVar2 + *(int *)(this_01 + 0x48)) -
                        *(int *)(*(long *)(this + 0x148) + 0x50);
        }
      }
    }
    __gnu_cxx::
    __normal_iterator<PennyClassroomShopData*,std::vector<PennyClassroomShopData,std::allocator<PennyClassroomShopData>>>
    ::operator++((__normal_iterator<PennyClassroomShopData*,std::vector<PennyClassroomShopData,std::allocator<PennyClassroomShopData>>>
                  *)&local_30);
  }
  Sexy::ScrollWidget::ScrollToPoint(*(ScrollWidget **)(this + 0x148),(Point *)local_38,false);
  std::string::string((string *)&local_20,"UIScroll_RankMain");
  pUVar9 = UI::Dialog::GetWidget<UIScrollControl>((Dialog *)this,(string *)&local_20);
  *(UIScrollControl **)(this + 0x158) = pUVar9;
  std::string::~string((string *)&local_20);
  nop();
  lVar10 = AccessoryContent::GetDisplayImage(*(AccessoryContent **)(this + 0x158));
  pSVar16 = *(ScrollWidget **)(this + 0x158);
  *(undefined4 *)(lVar10 + 0x50) = *(undefined4 *)(pSVar16 + 0x50);
  Sexy::ScrollWidget::SetScrollMode(pSVar16,2);
  UIScrollControl::SetAutoArrange(*(UIScrollControl **)(this + 0x158),false);
  std::string::string((string *)&local_20,"UIText_Desc");
  pUVar14 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_20);
  *(UIWidgetText **)(this + 0x178) = pUVar14;
  std::string::~string((string *)&local_20);
  nop();
  FUN_04aeb8e8(*(long *)(this + 0x178) + 0xe0);
  FUN_04aeb7e4(*(long *)(this + 0x178) + 0xe8,PrimeText_Game::Typeface_FZCuYuan_24);
  (**(code **)(**(long **)(this + 0x178) + 0x158))(*(long **)(this + 0x178),0);
  (**(code **)(**(long **)(this + 0x158) + 0x158))(*(long **)(this + 0x158),0 < iVar4);
  (**(code **)(**(long **)(this + 0x178) + 0x158))(*(long **)(this + 0x178),0 >= iVar4);
  uVar8 = UITabControl::GetTab(*(UITabControl **)(this + 0x138),2);
  *(undefined8 *)(this + 0x188) = uVar8;
  std::string::string((string *)&local_20,"UIScroll_RankCur");
  pUVar9 = UI::Dialog::GetWidget<UIScrollControl>((Dialog *)this,(string *)&local_20);
  *(UIScrollControl **)(this + 400) = pUVar9;
  std::string::~string((string *)&local_20);
  nop();
  lVar10 = AccessoryContent::GetDisplayImage(*(AccessoryContent **)(this + 400));
  pSVar16 = *(ScrollWidget **)(this + 400);
  *(undefined4 *)(lVar10 + 0x50) = *(undefined4 *)(pSVar16 + 0x50);
  Sexy::ScrollWidget::SetScrollMode(pSVar16,2);
  UIScrollControl::SetAutoArrange(*(UIScrollControl **)(this + 400),false);
  std::string::string((string *)&local_20,"UIScroll_1");
  pUVar9 = UI::Dialog::GetWidget<UIScrollControl>((Dialog *)this,(string *)&local_20);
  *(UIScrollControl **)(this + 0x150) = pUVar9;
  std::string::~string((string *)&local_20);
  nop();
  lVar10 = AccessoryContent::GetDisplayImage(*(AccessoryContent **)(this + 0x150));
  pSVar16 = *(ScrollWidget **)(this + 0x150);
  *(undefined4 *)(lVar10 + 0x50) = *(undefined4 *)(pSVar16 + 0x50);
  Sexy::ScrollWidget::SetScrollMode(pSVar16,2);
  std::string::string((string *)&local_20,"UIText_Last");
  pUVar14 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_20);
  *(UIWidgetText **)(this + 0x1b8) = pUVar14;
  std::string::~string((string *)&local_20);
  nop();
  uVar8 = *(undefined8 *)(this + 0x1b8);
  TodStringTranslate(L"[PVP_RANK_GARDEN_LAST]");
  PuzzleTip::SetTip(uVar8,(string *)&local_20);
  FUN_05476c50((string *)&local_20);
  std::string::string((string *)&local_20,"UIText_Last1");
  pUVar14 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_20);
  *(UIWidgetText **)(this + 0x1c0) = pUVar14;
  std::string::~string((string *)&local_20);
  nop();
  std::string::string((string *)&local_20,"UIText_Last2");
  pUVar14 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_20);
  *(UIWidgetText **)(this + 0x1c8) = pUVar14;
  std::string::~string((string *)&local_20);
  nop();
  std::string::string((string *)&local_20,"UIText_Last3");
  pUVar14 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_20);
  *(UIWidgetText **)(this + 0x1d0) = pUVar14;
  std::string::~string((string *)&local_20);
  nop();
  std::string::string((string *)&local_20,"UIText_LastAward1");
  pUVar14 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_20);
  *(UIWidgetText **)(this + 0x1d8) = pUVar14;
  std::string::~string((string *)&local_20);
  nop();
  std::string::string((string *)&local_20,"UIText_LastAward2");
  pUVar14 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_20);
  *(UIWidgetText **)(this + 0x1e0) = pUVar14;
  std::string::~string((string *)&local_20);
  nop();
  std::string::string((string *)&local_20,"UIText_LastAward3");
  pUVar14 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_20);
  *(UIWidgetText **)(this + 0x1e8) = pUVar14;
  std::string::~string((string *)&local_20);
  nop();
  *(undefined4 *)(this + 0x184) = 100;
  *(undefined4 *)(this + 0x1b0) = 100;
  pPVar11 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  puVar12 = (undefined8 *)PVPManager::GetRankList(pPVar11,2);
  lVar10 = FUN_04aeb820(*puVar12,puVar12[1]);
  if (lVar10 == 0) {
    pPVar11 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    PVPManager::RequestRankList(pPVar11,2);
  }
  pPVar11 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  puVar12 = (undefined8 *)PVPManager::GetRankList(pPVar11,1);
  lVar10 = FUN_04aeb820(*puVar12,puVar12[1]);
  if (lVar10 == 0) {
    pPVar11 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    PVPManager::RequestRankList(pPVar11,1);
  }
  this[0x180] = (PvpRankDlg)0x0;
  this[0x1f0] = (PvpRankDlg)0x0;
  setGardenTitleInfo(this);
  UI::Dialog::SetCenter((Dialog *)this,*(Widget **)(this + 0x138),false);
  std::string::string((string *)&local_20,"BtnClose");
  plVar15 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  lVar10 = *(long *)(this + 0x138);
  iVar2 = *(int *)(lVar10 + 0x50);
  iVar4 = *(int *)(lVar10 + 0x48);
  iVar5 = FUN_04aeba90(0x50);
  iVar6 = FUN_04aeba90(0x69);
  (**(code **)(*plVar15 + 0x1a8))(plVar15,(iVar4 + iVar2) - iVar5,*(int *)(lVar10 + 0x4c) - iVar6);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PvpRankDlg::PvpRankDlg() */

void __thiscall PvpRankDlg::PvpRankDlg(PvpRankDlg *this)

{
  undefined *puVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<PvpRankDlg>::UISingletonDialog((UISingletonDialog<PvpRankDlg> *)this);
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined ***)this = &PTR_GetClass_0694e520;
  *(undefined **)(this + 0xd8) = &DAT_0694e870;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x160));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x198));
  S2C_PVP_PreGardenRankInfo::S2C_PVP_PreGardenRankInfo((S2C_PVP_PreGardenRankInfo *)(this + 0x1f8));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyPreviewModeBegin);
  Sexy::Delegate0::Delegate0<PvpRankDlg,void(PvpRankDlg::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NotifyPreviewModeBegin,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyAddOtherUserZbList);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::Subscribe<long,Sexy::CBMemberTranslatorX<PvpRankDlg,void(PvpRankDlg::*)(long)>>
            ((MessageRouter *)puVar1,Message::NotifyAddOtherUserZbList,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PvpRankDlg::~PvpRankDlg() */

void __thiscall PvpRankDlg::~PvpRankDlg(PvpRankDlg *this)

{
  *(undefined ***)this = &PTR_GetClass_0694e520;
  *(undefined **)(this + 0xd8) = &DAT_0694e870;
  std::pair<int_const,std::wstring>::~pair((pair<int_const,std::wstring> *)(this + 0x1f8));
  std::vector<RankItemWidget*,std::allocator<RankItemWidget*>>::~vector
            ((vector<RankItemWidget*,std::allocator<RankItemWidget*>> *)(this + 0x198));
  std::vector<RankItemWidget*,std::allocator<RankItemWidget*>>::~vector
            ((vector<RankItemWidget*,std::allocator<RankItemWidget*>> *)(this + 0x160));
  UISingletonDialog<PvpRankDlg>::~UISingletonDialog((UISingletonDialog<PvpRankDlg> *)this);
  return;
}


/* PvpRankDlg::~PvpRankDlg() */

void __thiscall PvpRankDlg::~PvpRankDlg(PvpRankDlg *this)

{
  ~PvpRankDlg(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PvpRankDlg::refreshScroll(int, UIScrollControl*, std::vector<RankItemWidget*,
   std::allocator<RankItemWidget*> >&, std::vector<S2C_PVP_RankInfo,
   std::allocator<S2C_PVP_RankInfo> > const&) */

void __thiscall
PvpRankDlg::refreshScroll
          (PvpRankDlg *this,int param_1,UIScrollControl *param_2,vector *param_3,vector *param_4)

{
  ulong uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  RankItemWidget *pRVar8;
  S2C_PVP_RankInfo *pSVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  RankItemWidget *local_18;
  RankItemWidget *local_10;
  long local_8;
  
  uVar11 = *(undefined8 *)param_3;
  local_8 = ___stack_chk_guard;
  uVar5 = FUN_04aeb82c(uVar11,*(undefined8 *)(param_3 + 8));
  if (uVar5 == 0) {
    lVar10 = FUN_04aeb820(*(undefined8 *)param_4,*(undefined8 *)(param_4 + 8));
    if (lVar10 == 0) goto LAB_04aef41c;
    plVar13 = (long *)AccessoryContent::GetDisplayImage((AccessoryContent *)param_2);
    (**(code **)(*plVar13 + 0x80))(plVar13,1,1);
    std::vector<RankItemWidget*,std::allocator<RankItemWidget*>>::clear
              ((vector<RankItemWidget*,std::allocator<RankItemWidget*>> *)param_3);
    uVar5 = FUN_04aeb820(*(undefined8 *)param_4,*(undefined8 *)(param_4 + 8));
    if (uVar5 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = 0;
      uVar14 = 0;
      do {
        pRVar8 = ::operator_new(0x138);
        RankItemWidget::RankItemWidget(pRVar8,(int)uVar14,param_1,this);
        local_10 = pRVar8;
        (**(code **)(*(long *)param_2 + 0x60))(param_2,pRVar8);
        uVar6 = uVar14 + 1;
        pSVar9 = (S2C_PVP_RankInfo *)FUN_04aeb860(*(undefined8 *)param_4,uVar14);
        S2C_PVP_RankInfo::operator=((S2C_PVP_RankInfo *)(local_10 + 0x118),pSVar9);
        pRVar8 = local_10;
        uVar2 = FUN_04aeba90(0x46);
        (**(code **)(*(long *)pRVar8 + 0x198))(pRVar8,5,iVar3,*(undefined4 *)(param_2 + 0x50),uVar2)
        ;
        std::vector<RankItemWidget*,std::allocator<RankItemWidget*>>::push_back
                  ((vector<RankItemWidget*,std::allocator<RankItemWidget*>> *)param_3,&local_10);
        iVar4 = FUN_04aeba90(0x46);
        iVar3 = iVar3 + iVar4;
        uVar14 = uVar6;
      } while (uVar6 != uVar5);
    }
    pRVar8 = ::operator_new(0x138);
    RankItemWidget::RankItemWidget(pRVar8,this);
    local_10 = pRVar8;
    (**(code **)(*(long *)param_2 + 0x60))(param_2,pRVar8);
    pRVar8 = local_10;
    uVar2 = FUN_04aeba90(0x46);
    (**(code **)(*(long *)pRVar8 + 0x198))(pRVar8,5,iVar3,*(undefined4 *)(param_2 + 0x50),uVar2);
    std::vector<RankItemWidget*,std::allocator<RankItemWidget*>>::push_back
              ((vector<RankItemWidget*,std::allocator<RankItemWidget*>> *)param_3,&local_10);
    iVar4 = FUN_04aeba90(0x46);
    iVar3 = iVar3 + iVar4;
    if (*(UIScrollControl **)(this + 0x158) == param_2) {
      local_10[0xe1] = (RankItemWidget)((ulong)(long)*(int *)(this + 0x184) <= uVar5);
    }
    else {
      local_10[0xe1] = (RankItemWidget)((ulong)(long)*(int *)(this + 0x1b0) <= uVar5);
    }
  }
  else {
    uVar14 = uVar5 - 1;
    uVar6 = FUN_04aeb820(*(undefined8 *)param_4,*(undefined8 *)(param_4 + 8));
    if (uVar6 <= uVar14) goto LAB_04aef41c;
    local_18 = (RankItemWidget *)0x0;
    puVar7 = (undefined8 *)FUN_04aeb858(uVar11,uVar14);
    if (((RankItemWidget *)*puVar7)[0xe0] == (RankItemWidget)0x0) {
      uVar12 = uVar6 & 0xffffffff;
      uVar14 = uVar5;
      if (uVar6 != 0) {
LAB_04aef270:
        uVar12 = 0;
        uVar5 = 0;
        do {
          while (uVar14 <= uVar5) {
            pRVar8 = ::operator_new(0x138);
            RankItemWidget::RankItemWidget(pRVar8,(int)uVar5,param_1,this);
            local_10 = pRVar8;
            uVar2 = FUN_04aeba90(0x46);
            (**(code **)(*(long *)pRVar8 + 0x198))
                      (pRVar8,5,uVar12,*(undefined4 *)(param_2 + 0x50),uVar2);
            (**(code **)(*(long *)param_2 + 0x60))(param_2,local_10);
            uVar1 = uVar5 + 1;
            pSVar9 = (S2C_PVP_RankInfo *)FUN_04aeb860(*(undefined8 *)param_4,uVar5);
            S2C_PVP_RankInfo::operator=((S2C_PVP_RankInfo *)(local_10 + 0x118),pSVar9);
            std::vector<RankItemWidget*,std::allocator<RankItemWidget*>>::push_back
                      ((vector<RankItemWidget*,std::allocator<RankItemWidget*>> *)param_3,&local_10)
            ;
            iVar3 = FUN_04aeba90(0x46);
            uVar12 = (ulong)(uint)((int)uVar12 + iVar3);
            uVar5 = uVar1;
            if (uVar1 == uVar6) goto LAB_04aef390;
          }
          puVar7 = (undefined8 *)FUN_04aeb858(*(undefined8 *)param_3,uVar5);
          RankItemWidget::onSelected((RankItemWidget *)*puVar7,false);
          uVar1 = uVar5 + 1;
          puVar7 = (undefined8 *)FUN_04aeb858(*(undefined8 *)param_3,uVar5);
          plVar13 = (long *)*puVar7;
          uVar2 = FUN_04aeba90(0x46);
          (**(code **)(*plVar13 + 0x198))(plVar13,5,uVar12,*(undefined4 *)(param_2 + 0x50),uVar2);
          iVar3 = FUN_04aeba90(0x46);
          uVar12 = (ulong)(uint)((int)uVar12 + iVar3);
          uVar5 = uVar1;
        } while (uVar1 != uVar6);
        goto LAB_04aef390;
      }
LAB_04aef5f4:
      pRVar8 = ::operator_new(0x138);
      RankItemWidget::RankItemWidget(pRVar8,this);
      local_18 = pRVar8;
      (**(code **)(*(long *)param_2 + 0x60))(param_2,pRVar8);
    }
    else {
      local_18 = (RankItemWidget *)*puVar7;
      FUN_04aeb870(param_3 + 8);
      if (uVar6 != 0) goto LAB_04aef270;
      uVar12 = 0;
LAB_04aef390:
      if (local_18 == (RankItemWidget *)0x0) goto LAB_04aef5f4;
    }
    pRVar8 = local_18;
    uVar2 = FUN_04aeba90(0x46);
    (**(code **)(*(long *)pRVar8 + 0x198))(pRVar8,5,uVar12,*(undefined4 *)(param_2 + 0x50),uVar2);
    std::vector<RankItemWidget*,std::allocator<RankItemWidget*>>::push_back
              ((vector<RankItemWidget*,std::allocator<RankItemWidget*>> *)param_3,&local_18);
    iVar3 = FUN_04aeba90(0x46);
    iVar3 = (int)uVar12 + iVar3;
    if (*(UIScrollControl **)(this + 0x158) == param_2) {
      local_18[0xe1] = (RankItemWidget)((ulong)(long)*(int *)(this + 0x184) <= uVar6);
    }
    else {
      local_18[0xe1] = (RankItemWidget)((ulong)(long)*(int *)(this + 0x1b0) <= uVar6);
    }
  }
  lVar10 = AccessoryContent::GetDisplayImage((AccessoryContent *)param_2);
  *(int *)(lVar10 + 0x54) = iVar3;
  Sexy::ScrollWidget::ClientSizeChanged((ScrollWidget *)param_2);
  if (*(UIScrollControl **)(this + 0x158) == param_2) {
    this[0x180] = (PvpRankDlg)0x0;
  }
  else {
    this[0x1f0] = (PvpRankDlg)0x0;
  }
LAB_04aef41c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PvpRankDlg::Update() */

void __thiscall PvpRankDlg::Update(PvpRankDlg *this)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  PVPManager *pPVar4;
  vector *pvVar5;
  ulong uVar6;
  UIScrollControl *pUVar7;
  float local_14;
  float local_c;
  
  lVar1 = ___stack_chk_guard;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  iVar2 = UITabControl::GetTabSelectedID(*(UITabControl **)(this + 0x138));
  if (iVar2 == 1) {
    pPVar4 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    uVar3 = PVPManager::GetRankMaxCount(pPVar4,2);
    *(undefined4 *)(this + 0x184) = uVar3;
    pUVar7 = *(UIScrollControl **)(this + 0x158);
    pPVar4 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    pvVar5 = (vector *)PVPManager::GetRankList(pPVar4,2);
    refreshScroll(this,2,pUVar7,(vector *)(this + 0x160),pvVar5);
    uVar6 = FUN_04aeb82c(*(undefined8 *)(this + 0x160),*(undefined8 *)(this + 0x168));
    if ((uVar6 < (ulong)(long)*(int *)(this + 0x184)) && (this[0x180] == (PvpRankDlg)0x0)) {
      Sexy::ScrollWidget::GetScrollOffset();
      Sexy::ScrollWidget::GetScrollMin();
      if (local_14 < local_c - 40.0) {
        this[0x180] = (PvpRankDlg)0x1;
        pPVar4 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        PVPManager::RequestRankList(pPVar4,2);
      }
    }
  }
  else {
    pPVar4 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    uVar3 = PVPManager::GetRankMaxCount(pPVar4,1);
    *(undefined4 *)(this + 0x1b0) = uVar3;
    setGardenInfo(this);
    pUVar7 = *(UIScrollControl **)(this + 400);
    pPVar4 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    pvVar5 = (vector *)PVPManager::GetRankList(pPVar4,1);
    refreshScroll(this,1,pUVar7,(vector *)(this + 0x198),pvVar5);
    uVar6 = FUN_04aeb82c(*(undefined8 *)(this + 0x198),*(undefined8 *)(this + 0x1a0));
    if ((uVar6 < (ulong)(long)*(int *)(this + 0x1b0)) && (this[0x1f0] == (PvpRankDlg)0x0)) {
      Sexy::ScrollWidget::GetScrollOffset();
      Sexy::ScrollWidget::GetScrollMin();
      if (local_14 < local_c - 40.0) {
        this[0x1f0] = (PvpRankDlg)0x1;
        pPVar4 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        PVPManager::RequestRankList(pPVar4,1);
      }
    }
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PvpRankDlg::onNotifyAddOtherUserZbList(long) */

void __thiscall PvpRankDlg::onNotifyAddOtherUserZbList(PvpRankDlg *this,long param_1)

{
  PvpArmyDlg *this_00;
  
  if ((*(long *)(this + 0x1f8) == param_1) &&
     (this_00 = (PvpArmyDlg *)UISingletonDialog<PvpArmyDlg>::ShowDialog(),
     this_00 != (PvpArmyDlg *)0x0)) {
    PvpArmyDlg::SetRankInfo(this_00,(S2C_PVP_RankInfo *)(this + 0x1f8));
    return;
  }
  return;
}

