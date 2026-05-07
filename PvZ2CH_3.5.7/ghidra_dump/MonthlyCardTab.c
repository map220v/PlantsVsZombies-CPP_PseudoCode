// Class: MonthlyCardTab


/* MonthlyCardTab::~MonthlyCardTab() */

void __thiscall MonthlyCardTab::~MonthlyCardTab(MonthlyCardTab *this)

{
  *(undefined ***)this = &PTR__MonthlyCardTab_0671e890;
  nop();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MonthlyCardTab::GetTabContainerImageName() const */

void __thiscall MonthlyCardTab::GetTabContainerImageName(MonthlyCardTab *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"IMAGE_UI_FESTIVALCENTER_MONTHLY_CARD_BG");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* MonthlyCardTab::~MonthlyCardTab() */

void __thiscall MonthlyCardTab::~MonthlyCardTab(MonthlyCardTab *this)

{
  ~MonthlyCardTab(this);
  AK::FreeHook(this);
  return;
}


/* MonthlyCardTab::MonthlyCardTab(int, UI::Dialog*) */

void __thiscall MonthlyCardTab::MonthlyCardTab(MonthlyCardTab *this,int param_1,Dialog *param_2)

{
  FestivalEventTabBase::FestivalEventTabBase((FestivalEventTabBase *)this,param_1,param_2);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__MonthlyCardTab_0671e890;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MonthlyCardTab::DrawForeground(Sexy::Graphics*) */

void __thiscall MonthlyCardTab::DrawForeground(MonthlyCardTab *this,Graphics *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  RechargeWelfareUI *this_00;
  undefined8 uVar10;
  Image *pIVar11;
  LotteryResultProgressBar *pLVar12;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  string asStack_30 [8];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  if ((*(long *)(this + 0x18) != 0) &&
     (cVar2 = FUN_03ac12b0(*(undefined1 *)(*(long *)(this + 0x18) + 0x1a8)), cVar2 != '\0')) {
    lVar9 = ActiveCenterTabBase::GetTabContent((ActiveCenterTabBase *)this);
    iVar1 = *(int *)(lVar9 + 0x48);
    this_00 = (RechargeWelfareUI *)UISingletonDialog<FestivalEventUI>::GetSingletonPtr();
    iVar3 = RechargeWelfareUI::getMX(this_00);
    iVar1 = iVar1 + iVar3;
    TodStringTranslate(L"[MONTHLY_CARD_FESTIVAL_EVENT_2019]");
    iVar4 = FUN_03ac4800(0x19);
    iVar5 = FUN_03ac4800(0x172);
    lVar9 = ActiveCenterTabBase::GetTabContent((ActiveCenterTabBase *)this);
    iVar6 = FUN_03ac4800(100);
    iVar3 = *(int *)(lVar9 + 0x50);
    iVar7 = FUN_03ac4800(0x32);
    Sexy::Insets::Insets((Insets *)&local_28,iVar4 + iVar1,iVar5,iVar3 - iVar6,iVar7);
    uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_20_Outline);
    Sexy::Color::Color((Color *)&local_18,1);
    WriteWordInRect(param_1,auStack_40,(Insets *)&local_28,uVar10,(Insets *)&local_18,5,1);
    if (0 < *(long *)(this + 0x28)) {
      pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac8560);
      lVar9 = ActiveCenterTabBase::GetTabContent((ActiveCenterTabBase *)this);
      iVar3 = *(int *)(lVar9 + 0x50);
      pLVar12 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac8560);
      iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
      iVar5 = FUN_03ac4800(0x19a);
      Sexy::Graphics::DrawImage(param_1,pIVar11,iVar1 + (iVar3 - iVar4) / 2,iVar5);
      FUN_05476574(auStack_38);
      lVar9 = *(long *)(this + 0x28);
      if (lVar9 < 0x15181) {
        StringHelper::ToTimeString((StringHelper *)0x1,(float)lVar9,(int)lVar9);
        FUN_054766c8(auStack_38,(Insets *)&local_18);
        FUN_05476c50((Insets *)&local_18);
      }
      else {
        std::string::string(asStack_30,"[ZEN_GARDEN_TIMESPAN_D]");
        StringHelper::ReplaceNumberString
                  ((StringHelper *)asStack_30,(string *)&DAT_0570bbc8,
                   (wchar_t *)(*(long *)(this + 0x28) / 0x15180),
                   SUB164(SEXT816(*(long *)(this + 0x28)) * SEXT816(0x1845c8a0ce512957),8));
        FUN_054766c8(auStack_38,(Insets *)&local_18);
        FUN_05476c50((Insets *)&local_18);
        std::string::~string(asStack_30);
        nop();
      }
      lVar9 = ActiveCenterTabBase::GetTabContent((ActiveCenterTabBase *)this);
      iVar3 = *(int *)(lVar9 + 0x50);
      pLVar12 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac8560);
      iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
      iVar5 = FUN_03ac4800(0x8c);
      iVar6 = FUN_03ac4800(0x19a);
      iVar7 = FUN_03ac4800(100);
      iVar8 = FUN_03ac4800(0x1e);
      Sexy::Insets::Insets
                ((Insets *)&local_18,iVar1 + (iVar3 - iVar4) / 2 + iVar5,iVar6,iVar7,iVar8);
      local_28 = local_18;
      uStack_20 = uStack_10;
      uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
      Sexy::Color::Color((Color *)&local_18,1);
      WriteWordInRect(param_1,auStack_38,(Insets *)&local_28,uVar10,(Insets *)&local_18,5,1);
      FUN_05476c50(auStack_38);
    }
    FUN_05476c50(auStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MonthlyCardTab::SyncActivityData(int) */

void MonthlyCardTab::SyncActivityData(int param_1)

{
  char cVar1;
  int iVar2;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_03ac12f8(local_80);
  if (cVar1 != '\0') {
    iVar2 = ActiveItem::GetLeftTimes(aAStack_88);
    *(long *)((ulong)(uint)param_1 + 0x28) = (long)(iVar2 + -0x3f480);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

