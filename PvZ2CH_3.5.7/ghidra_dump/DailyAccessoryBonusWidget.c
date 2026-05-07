// Class: DailyAccessoryBonusWidget


/* DailyAccessoryBonusWidget::Resize(Sexy::TRect<int> const&) */

void __thiscall DailyAccessoryBonusWidget::Resize(DailyAccessoryBonusWidget *this,TRect *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xf4) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0xe8) = uVar1;
  *(undefined4 *)(this + 0xec) = uVar2;
  *(undefined4 *)(this + 0xf0) = uVar3;
  PlantHeadshot::Resize((PlantHeadshot *)this,param_1);
  return;
}


/* DailyAccessoryBonusWidget::~DailyAccessoryBonusWidget() */

void __thiscall
DailyAccessoryBonusWidget::~DailyAccessoryBonusWidget(DailyAccessoryBonusWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_0697d060;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  FUN_05476c50(this + 0x168);
  FUN_05476c50(this + 0x160);
  FUN_05476c50(this + 0x158);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* DailyAccessoryBonusWidget::~DailyAccessoryBonusWidget() */

void __thiscall
DailyAccessoryBonusWidget::~DailyAccessoryBonusWidget(DailyAccessoryBonusWidget *this)

{
  ~DailyAccessoryBonusWidget(this);
  AK::FreeHook(this);
  return;
}


/* DailyAccessoryBonusWidget::DailyAccessoryBonusWidget() */

void __thiscall
DailyAccessoryBonusWidget::DailyAccessoryBonusWidget(DailyAccessoryBonusWidget *this)

{
  Sexy::Widget::Widget((Widget *)this);
  this[0xd1] = (DailyAccessoryBonusWidget)0x0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined ***)this = &PTR_GetClass_0697d060;
  *(undefined8 *)(this + 0xe0) = 0;
  Sexy::Insets::Insets((Insets *)(this + 0xe8));
  Sexy::Insets::Insets((Insets *)(this + 0xf8));
  Sexy::Insets::Insets((Insets *)(this + 0x108));
  Sexy::Insets::Insets((Insets *)(this + 0x118));
  Sexy::Insets::Insets((Insets *)(this + 0x128));
  Sexy::Insets::Insets((Insets *)(this + 0x138));
  Sexy::Insets::Insets((Insets *)(this + 0x148));
  FUN_05476574(this + 0x158);
  FUN_05476574(this + 0x160);
  FUN_05476574(this + 0x168);
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailyAccessoryBonusWidget::Update() */

void __thiscall DailyAccessoryBonusWidget::Update(DailyAccessoryBonusWidget *this)

{
  DailyAccessoryBonusWidget *pDVar1;
  uint uVar2;
  LawnApp *this_00;
  char cVar3;
  ProfileMgr *this_01;
  long lVar4;
  ulong uVar5;
  PlantSarracenia *this_02;
  NetworkMgr *this_03;
  long *plVar6;
  undefined8 uVar7;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar3 = FUN_04be73e0(this[0xd1]);
  if (cVar3 == '\0') goto LAB_04be7af4;
  pDVar1 = this + 0x158;
  FUN_054772c4(pDVar1,&DAT_056f11a8);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar4 = ProfileMgr::GetCurrentProfile(this_01);
  if (lVar4 == 0) goto LAB_04be7af4;
  uVar5 = LawnApp::GetRealBeijingTime(gLawnApp);
  if (uVar5 == 0) {
    FUN_054772c4(pDVar1,&DAT_05700290);
    TodStringTranslate(L"[PLANT_ADVENTURE_UNCONNECTED]");
    FUN_054766c8(this + 0x160,auStack_10);
    FUN_05476c50(auStack_10);
    FUN_04be73cc(*(long *)(this + 0x178) + 0xf2,0);
    FUN_04be73cc(*(long *)(this + 0x180) + 0xf2,0);
    FUN_04be73cc(*(long *)(this + 0x188) + 0xf2,0);
    goto LAB_04be7af4;
  }
  cVar3 = ActivityConfig::IsChristmasAccessoryActived(*(ActivityConfig **)(this + 0x170));
  if (cVar3 == '\0') {
    lVar4 = *(long *)(this + 0x178);
LAB_04be7d94:
    FUN_04be73d8(lVar4 + 0xf3,1);
    FUN_04be73d8(*(long *)(this + 0x180) + 0xf3,1);
    FUN_04be73d8(*(long *)(this + 0x188) + 0xf3,1);
    TodStringTranslate(L"[ACTIVITY_CLOSED]");
  }
  else {
    FUN_04be73cc(*(long *)(this + 0x178) + 0xf2,1);
    FUN_04be73cc(*(long *)(this + 0x180) + 0xf2,1);
    FUN_04be73cc(*(long *)(this + 0x188) + 0xf2,1);
    uVar7 = *(undefined8 *)(this + 0xd8);
    lVar4 = *(long *)(this + 0x178);
    if ((uint)uVar7 <= (uint)uVar5) goto LAB_04be7d94;
    FUN_04be73d8(lVar4 + 0xf3,0);
    FUN_04be73d8(*(long *)(this + 0x180) + 0xf3,0);
    FUN_04be73d8(*(long *)(this + 0x188) + 0xf3,0);
    this_00 = gLawnApp;
    if ((gLawnApp != (LawnApp *)0x0) &&
       (cVar3 = LawnApp::IsAccessoryBonusUIValid(gLawnApp), cVar3 != '\0')) {
      this_02 = (PlantSarracenia *)LawnApp::GetAccessoryBonusUI(this_00);
      cVar3 = PlantSarracenia::IsInSpecialStatus(this_02);
      if ((cVar3 == '\0') &&
         (*(long *)(this + 0xe0) / 0x15180 < (long)((uVar5 & 0xffffffff) / 0x15180))) {
        this_03 = (NetworkMgr *)NetworkMgr::Instance();
        plVar6 = (long *)NetworkMgr::GetNewNetWorkProcess(this_03);
        if (*(code **)(*plVar6 + 0x298) != INetworkMsgProcess::ICloudRequestGetAccessoryStat) {
          (**(code **)(*plVar6 + 0x298))(plVar6,2);
        }
        goto LAB_04be7af4;
      }
    }
    uVar2 = (uint)uVar7 - (uint)uVar5;
    Sexy::StrFormat(L"%d",auStack_10,(ulong)uVar2 / 0x15180);
    FUN_054766c8(pDVar1,auStack_10);
    FUN_05476c50(auStack_10);
    Sexy::StrFormat(L"%02d:%02d",auStack_10,
                    (ulong)(uint)((int)((ulong)uVar2 / 0xe10) +
                                 (int)(((ulong)uVar2 / 0xe10) / 0x18) * -0x18),
                    (ulong)(uint)((int)((ulong)uVar2 / 0x3c) +
                                 (int)(((ulong)uVar2 / 0x3c) / 0x3c) * -0x3c));
  }
  FUN_054766c8(this + 0x160,auStack_10);
  FUN_05476c50(auStack_10);
LAB_04be7af4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailyAccessoryBonusWidget::InitView() */

void __thiscall DailyAccessoryBonusWidget::InitView(DailyAccessoryBonusWidget *this)

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
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  ulong uVar10;
  SalesProgressBar *pSVar11;
  LotteryResultProgressBar *pLVar12;
  AccessoryContentUI *pAVar13;
  ActivityConfig *this_02;
  long lVar14;
  undefined8 uVar15;
  Insets aIStack_48 [16];
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x80))(this,1,1);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    uVar10 = PlayerInfo::GetChristmasAccessoryLastRefreshTime(this_01);
    *(ulong *)(this + 0xe0) = uVar10 & 0xffffffff;
  }
  iVar2 = FUN_04be7470(0x14);
  iVar9 = *(int *)(this + 0xe8);
  iVar3 = FUN_04be7470(4);
  iVar1 = *(int *)(this + 0xec);
  iVar8 = *(int *)(this + 0xf0);
  iVar4 = FUN_04be7470(0x28);
  Sexy::Insets::Insets
            ((Insets *)&local_18,iVar2 + iVar9,iVar3 * 5 + iVar1,iVar2 * -2 + iVar8,
             iVar2 * -2 + (*(int *)(this + 0xf4) - iVar4));
  *(undefined8 *)(this + 0x100) = local_10;
  iVar9 = *(int *)(this + 0xe8);
  *(undefined8 *)(this + 0xf8) = local_18;
  iVar1 = *(int *)(this + 0x104);
  uVar10 = (ulong)local_18 >> 0x20;
  iVar2 = FUN_04be7470(4);
  iVar8 = *(int *)(this + 0xf0);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8bed8);
  iVar3 = SalesProgressBar::GetCurrentLevel(pSVar11);
  Sexy::Insets::Insets((Insets *)&local_18,iVar9,(int)uVar10 + iVar1 + iVar2,iVar8,iVar3);
  iVar9 = *(int *)(this + 0xe8);
  iVar1 = *(int *)(this + 0xf0);
  *(undefined8 *)(this + 0x108) = local_18;
  *(undefined8 *)(this + 0x110) = local_10;
  iVar3 = FUN_04be7470(0x14);
  pLVar12 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8be60);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
  iVar8 = *(int *)(this + 0x10c);
  iVar2 = *(int *)(this + 0x114);
  iVar5 = FUN_04be7470(4);
  pLVar12 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8be60);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8be60);
  iVar7 = SalesProgressBar::GetCurrentLevel(pSVar11);
  Sexy::Insets::Insets
            ((Insets *)&local_18,((iVar9 + iVar1) - iVar3) - iVar4,iVar8 + iVar2 + iVar5 * 2,iVar6,
             iVar7);
  *(undefined8 *)(this + 0x118) = local_18;
  *(undefined8 *)(this + 0x120) = local_10;
  iVar8 = FUN_04be7470(0x14);
  iVar9 = *(int *)(this + 0xe8);
  iVar1 = *(int *)(this + 0x11c);
  pLVar12 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8be60);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8be60);
  iVar3 = SalesProgressBar::GetCurrentLevel(pSVar11);
  Sexy::Insets::Insets((Insets *)&local_18,iVar8 + iVar9,iVar1,iVar2,iVar3);
  *(undefined8 *)(this + 0x128) = local_18;
  *(undefined8 *)(this + 0x130) = local_10;
  iVar9 = FUN_04be7470(0x14);
  Sexy::Insets::Insets
            ((Insets *)&local_18,iVar9 * 5 + *(int *)(this + 0x118),*(int *)(this + 0x11c),
             iVar9 << 1,*(int *)(this + 0x124));
  *(undefined8 *)(this + 0x138) = local_18;
  *(undefined8 *)(this + 0x140) = local_10;
  iVar9 = FUN_04be7470(0x14);
  Sexy::Insets::Insets
            ((Insets *)&local_18,(int)((double)*(int *)(this + 0x118) + (double)iVar9 * 7.5),
             *(int *)(this + 0x11c),iVar9 << 2,*(int *)(this + 0x124));
  *(undefined8 *)(this + 0x148) = local_18;
  *(undefined8 *)(this + 0x150) = local_10;
  Sexy::Insets::Insets
            (aIStack_48,*(int *)(this + 0xf8),*(int *)(this + 0xfc),*(int *)(this + 0x100),
             *(int *)(this + 0x104) / 3);
  Sexy::Insets::Insets((Insets *)&local_18,aIStack_48);
  pAVar13 = ::operator_new(0x1d8);
  AccessoryContentUI::AccessoryContentUI(pAVar13,(Insets *)&local_18,1);
  *(AccessoryContentUI **)(this + 0x178) = pAVar13;
  (**(code **)(*(long *)this + 0x60))(this,pAVar13);
  Sexy::Insets::Insets
            (aIStack_38,*(int *)(this + 0xf8),*(int *)(this + 0x104) / 3 + *(int *)(this + 0xfc),
             *(int *)(this + 0x100),*(int *)(this + 0x104) / 3);
  Sexy::Insets::Insets((Insets *)&local_18,aIStack_38);
  pAVar13 = ::operator_new(0x1d8);
  AccessoryContentUI::AccessoryContentUI(pAVar13,(Insets *)&local_18,3);
  *(AccessoryContentUI **)(this + 0x180) = pAVar13;
  (**(code **)(*(long *)this + 0x60))(this,pAVar13);
  Sexy::Insets::Insets
            (aIStack_28,*(int *)(this + 0xf8),
             (*(int *)(this + 0x104) << 1) / 3 + *(int *)(this + 0xfc),*(int *)(this + 0x100),
             *(int *)(this + 0x104) / 3);
  Sexy::Insets::Insets((Insets *)&local_18,aIStack_28);
  pAVar13 = ::operator_new(0x1d8);
  AccessoryContentUI::AccessoryContentUI(pAVar13,(Insets *)&local_18,2);
  *(AccessoryContentUI **)(this + 0x188) = pAVar13;
  (**(code **)(*(long *)this + 0x60))(this,pAVar13);
  TodStringTranslate(L"[CHRISTMAS_ACCESSORY_REFRESH_HINT]");
  FUN_054766c8(this + 0x168,(Insets *)&local_18);
  FUN_05476c50((Insets *)&local_18);
  this_02 = (ActivityConfig *)LawnApp::GetActivityConfig();
  *(ActivityConfig **)(this + 0x170) = this_02;
  lVar14 = ActivityConfig::GetChristmasAccessoryData(this_02);
  uVar15 = ActivityConfig::DateMKTime(this_02,*(int *)(lVar14 + 4));
  *(undefined8 *)(this + 0xd8) = uVar15;
  uVar15 = LawnApp::GetActivityConfig();
  this[0x59] = (DailyAccessoryBonusWidget)0x0;
  *(undefined8 *)(this + 0x170) = uVar15;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DailyAccessoryBonusWidget::RefreshContents() */

void __thiscall DailyAccessoryBonusWidget::RefreshContents(DailyAccessoryBonusWidget *this)

{
  PrimeText *this_00;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  ulong uVar1;
  
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  AccessoryContentUI::RefreshContent(*(AccessoryContentUI **)(this + 0x178));
  AccessoryContentUI::RefreshContent(*(AccessoryContentUI **)(this + 0x180));
  AccessoryContentUI::RefreshContent(*(AccessoryContentUI **)(this + 0x188));
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  if (this_02 != (PlayerInfo *)0x0) {
    uVar1 = PlayerInfo::GetChristmasAccessoryLastRefreshTime(this_02);
    *(ulong *)(this + 0xe0) = uVar1 & 0xffffffff;
  }
  return;
}


/* DailyAccessoryBonusWidget::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
DailyAccessoryBonusWidget::DrawAll
          (DailyAccessoryBonusWidget *this,ModalFlags *param_1,Graphics *param_2)

{
  char cVar1;
  
  cVar1 = FUN_04be73e0(this[0xd1]);
  if (cVar1 == '\0') {
    return;
  }
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailyAccessoryBonusWidget::Draw(Sexy::Graphics*) */

void __thiscall DailyAccessoryBonusWidget::Draw(DailyAccessoryBonusWidget *this,Graphics *param_1)

{
  char cVar1;
  Image *pIVar2;
  undefined8 uVar3;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_04be73e0(this[0xd1]);
  if (cVar1 != '\0') {
    nop();
    pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8bdc0);
    Sexy::Graphics::DrawImage(param_1,pIVar2,0,0);
    Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x108));
    uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8bed8);
    Draw9SliceImage(param_1,aIStack_18,uVar3);
    pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8be60);
    Sexy::Graphics::DrawImage(param_1,pIVar2,*(int *)(this + 0x118),*(int *)(this + 0x11c));
    uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26_Shaded);
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,this + 0x168,this + 0x128,uVar3,aIStack_18,3,1);
    uVar3 = PrimeText_PotentialTypeface::Typeface
                      (PrimeText_Game::Typeface_CafeteriaBlack_28_Outline);
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,this + 0x158,this + 0x138,uVar3,aIStack_18,3,1);
    uVar3 = PrimeText_PotentialTypeface::Typeface
                      (PrimeText_Game::Typeface_CafeteriaBlack_28_Outline);
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,this + 0x160,this + 0x148,uVar3,aIStack_18,3,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

