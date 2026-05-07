// Class: DailySignRewardWithTW


/* DailySignRewardWithTW::getRewardListData() */

DailySignRewardWithTW * __thiscall
DailySignRewardWithTW::getRewardListData(DailySignRewardWithTW *this)

{
  return this + 0x110;
}


/* DailySignRewardWithTW::ScrollTargetReached(Sexy::ScrollWidget*) */

void DailySignRewardWithTW::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to DailySignRewardWithTW::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
DailySignRewardWithTW::ScrollTargetReached(DailySignRewardWithTW *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xd8));
  return;
}


/* DailySignRewardWithTW::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void DailySignRewardWithTW::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to DailySignRewardWithTW::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
DailySignRewardWithTW::ScrollTargetInterrupted(DailySignRewardWithTW *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xd8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignRewardWithTW::getReward(S2C_DailySignWithTW_RewardInfo const&) */

void __thiscall
DailySignRewardWithTW::getReward
          (DailySignRewardWithTW *this,S2C_DailySignWithTW_RewardInfo *param_1)

{
  ProfileMgr *pPVar1;
  GAME_ITEM_INFO aGStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(pPVar1);
  ProfileChangeItemAmount(*(int *)param_1,*(int *)(param_1 + 4),false);
  GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_38);
  pPVar1 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::Save(pPVar1,false,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignRewardWithTW::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
DailySignRewardWithTW::DrawAll(DailySignRewardWithTW *this,ModalFlags *param_1,Graphics *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  LotteryResultProgressBar *pLVar8;
  SalesProgressBar *pSVar9;
  undefined8 uVar10;
  Image *pIVar11;
  undefined8 uVar12;
  string *extraout_x1;
  Sexy aSStack_98 [8];
  undefined1 auStack_90 [8];
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78 [2];
  int local_70;
  Insets aIStack_68 [16];
  Insets aIStack_58 [16];
  Insets aIStack_48 [16];
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_2,0.5);
  iVar1 = FUN_04a45288(0x334);
  iVar2 = FUN_04a45288(0x3c);
  iVar7 = *(int *)(this + 0x54);
  iVar3 = FUN_04a45288(0x32);
  Sexy::Insets::Insets
            ((Insets *)&local_88,(*(int *)(this + 0x50) - iVar1) / 2,iVar2,iVar1,
             (iVar7 - iVar2) - iVar3);
  iVar1 = local_88;
  iVar3 = FUN_04a45288(10);
  iVar2 = local_80;
  iVar7 = iVar3 + local_84;
  iVar4 = FUN_04a45288(0x14);
  Sexy::Insets::Insets((Insets *)local_78,iVar1 + iVar3,iVar7,iVar2 - iVar4,local_7c - iVar4);
  iVar1 = FUN_04a45288(10);
  iVar2 = FUN_04a45288(0x46);
  iVar3 = FUN_04a45288(0x5f);
  iVar4 = FUN_04a45288(0x14);
  iVar7 = *(int *)(this + 0x54);
  iVar5 = FUN_04a45288(0x6e);
  iVar6 = FUN_04a45288(0x96);
  Sexy::Insets::Insets
            (aIStack_68,local_78[0] + iVar1,iVar2 + iVar3,local_70 - iVar4,
             (((iVar7 - iVar2) - iVar1) - iVar5) - iVar6);
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7ba00);
  LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  pSVar9 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7ba00);
  SalesProgressBar::GetCurrentLevel(pSVar9);
  iVar7 = FUN_04a45288(0xf);
  Sexy::Insets::Insets(aIStack_58,local_88,local_84,local_80,local_7c + iVar7);
  Sexy::Insets::Insets(aIStack_18,aIStack_58);
  uVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b6f0);
  Draw9SliceImage(param_2,aIStack_18,uVar10);
  Sexy::Insets::Insets(aIStack_18,aIStack_68);
  uVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b7a0);
  Draw9SliceImage(param_2,aIStack_18,uVar10);
  pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b548);
  iVar7 = *(int *)(this + 0x50);
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b548);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  iVar3 = FUN_04a45288(0x32);
  iVar1 = *(int *)(this + 0x54);
  pSVar9 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b548);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar9);
  iVar5 = FUN_04a45288(0x19);
  Sexy::Graphics::DrawImage(param_2,pIVar11,(iVar7 - iVar2) / 2,((iVar1 - iVar3) - iVar4) - iVar5);
  pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b4c0);
  iVar7 = FUN_04a45288(0x14a);
  iVar1 = FUN_04a45288(0x46);
  Sexy::Graphics::DrawImage(param_2,pIVar11,iVar7,iVar1);
  iVar7 = FUN_04a45288(0);
  iVar1 = FUN_04a45288(0x46);
  iVar2 = FUN_04a45288(100);
  Sexy::Insets::Insets(aIStack_48,iVar7,iVar1,*(int *)(this + 0x50),iVar2);
  TodStringTranslate(L"[DAILYSIGN_TW4399_TITLE]");
  uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_40_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_2,aIStack_28,aIStack_48,uVar10,aIStack_18,2,1);
  FUN_05476c50(aIStack_28);
  iVar7 = FUN_04a45288(0);
  iVar1 = FUN_04a45288(0x82);
  iVar2 = FUN_04a45288(100);
  Sexy::Insets::Insets(aIStack_38,iVar7,iVar1,*(int *)(this + 0x50) / 2 - iVar2,iVar2);
  TodStringTranslate(L"[DAILYSIGN_TW4399_TIME]");
  uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26_Outline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_2,aIStack_28,aIStack_38,uVar10,aIStack_18,1,1);
  FUN_05476c50(aIStack_28);
  iVar1 = FUN_04a45288(0);
  iVar2 = FUN_04a45288(0x82);
  iVar3 = FUN_04a45288(200);
  iVar7 = *(int *)(this + 0x50);
  iVar4 = FUN_04a45288(100);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar3 + iVar7 / 2,iVar4);
  uVar10 = FUN_0547429c(this + 0x130);
  uVar12 = FUN_0547429c(this + 0x138);
  Sexy::StrFormat("%s - %s",aSStack_98,uVar10,uVar12);
  Sexy::ToSexyString(aSStack_98,extraout_x1);
  uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26_Outline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_2,auStack_90,aIStack_28,uVar10,aIStack_18,1,1);
  FUN_05476c50(auStack_90);
  std::string::~string((string *)aSStack_98);
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DailySignRewardWithTW::ButtonDepress(int) */

void __thiscall DailySignRewardWithTW::ButtonDepress(DailySignRewardWithTW *this,int param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  InputCodeWidget *this_00;
  
  if (param_1 != 0) {
    if (param_1 == 1) {
      plVar3 = *(long **)(this + 0x108);
      if (plVar3 == (long *)0x0) {
        this_00 = ::operator_new(0x100);
        InputCodeWidget::InputCodeWidget(this_00,this);
        *(InputCodeWidget **)(this + 0x108) = this_00;
        iVar1 = FUN_04a45288(600);
        iVar2 = FUN_04a45288(300);
        (**(code **)(*(long *)this_00 + 0x198))
                  (this_00,(*(int *)(this + 0x50) - iVar1) / 2,(*(int *)(this + 0x54) - iVar2) / 2,
                   iVar1);
        (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x108));
        plVar3 = *(long **)(this + 0x108);
      }
      (**(code **)(*plVar3 + 0x158))(plVar3,1);
    }
    return;
  }
  LawnApp::KillDailySignRewardWithTW(gLawnApp);
  return;
}


/* non-virtual thunk to DailySignRewardWithTW::ButtonDepress(int) */

void __thiscall DailySignRewardWithTW::ButtonDepress(DailySignRewardWithTW *this,int param_1)

{
  ButtonDepress(this + -0xe0,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignRewardWithTW::~DailySignRewardWithTW() */

void __thiscall DailySignRewardWithTW::~DailySignRewardWithTW(DailySignRewardWithTW *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR__DailySignRewardWithTW_06934168;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06933e30;
  *(undefined ***)(this + 0xe0) = &PTR_ButtonPress_069341b0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_signReward");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Effects_SignReward");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Effects_SignReward_Dev2");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::~string((string *)(this + 0x138));
  std::string::~string((string *)(this + 0x130));
  TWRewardListData::~TWRewardListData((TWRewardListData *)(this + 0x110));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to DailySignRewardWithTW::~DailySignRewardWithTW() */

void __thiscall DailySignRewardWithTW::~DailySignRewardWithTW(DailySignRewardWithTW *this)

{
  ~DailySignRewardWithTW(this + -0xd8);
  return;
}


/* DailySignRewardWithTW::~DailySignRewardWithTW() */

void __thiscall DailySignRewardWithTW::~DailySignRewardWithTW(DailySignRewardWithTW *this)

{
  ~DailySignRewardWithTW(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DailySignRewardWithTW::~DailySignRewardWithTW() */

void __thiscall DailySignRewardWithTW::~DailySignRewardWithTW(DailySignRewardWithTW *this)

{
  ~DailySignRewardWithTW(this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignRewardWithTW::onProcessSignRewardResult(bool, S2C_DailySignWithTW const*) */

void __thiscall
DailySignRewardWithTW::onProcessSignRewardResult
          (DailySignRewardWithTW *this,bool param_1,S2C_DailySignWithTW *param_2)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  ProfileMgr *this_00;
  PlayerInfo *pPVar6;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  ActiveItem aAStack_88 [16];
  undefined1 auStack_78 [112];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::KillNetConnectingUI(gLawnApp);
  if (param_1) {
    local_98 = FUN_04a459f4(*(undefined8 *)(param_2 + 0x18));
    local_90 = FUN_04a45a44(*(undefined8 *)(param_2 + 0x20));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_98,(__normal_iterator *)&local_90), bVar2)
    {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_98)
      ;
      local_a0 = *puVar5;
      getReward(this,(S2C_DailySignWithTW_RewardInfo *)&local_a0);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_98);
    }
    TWScrollPanel::SetGetReward(*(TWScrollPanel **)(this + 0xe8),*(int *)(param_2 + 0x14) + -1);
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar6 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar3);
    uVar1 = *(undefined4 *)(param_2 + 0x14);
    uVar4 = LawnApp::GetRealBeijingTime(gLawnApp);
    FUN_05475d88((string *)&local_90,auStack_78);
    PlayerInfo::SetTwDailySignDay(pPVar6,uVar1,uVar4,(string *)&local_90);
    std::string::~string((string *)&local_90);
    ActiveItem::~ActiveItem(aAStack_88);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignRewardWithTW::InitView() */

void __thiscall DailySignRewardWithTW::InitView(DailySignRewardWithTW *this)

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
  undefined4 uVar12;
  undefined4 uVar13;
  PVZ2UIScrollingWidget *this_00;
  TWScrollPanel *this_01;
  PVZ2UIButton *pPVar14;
  LotteryResultProgressBar *pLVar15;
  SalesProgressBar *pSVar16;
  long lVar17;
  long *plVar18;
  code *pcVar19;
  undefined1 auStack_a8 [8];
  long local_a0;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  Insets aIStack_88 [16];
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,*(undefined4 *)(gLawnApp + 0x71c),*(undefined4 *)(gLawnApp + 0x720),
             *(undefined4 *)(gLawnApp + 0x724),*(undefined4 *)(gLawnApp + 0x728));
  local_a0 = LawnApp::GetRealBeijingTime(gLawnApp);
  LawnApp::BeijingTime(gLawnApp,&local_a0);
  if (*(long *)(this + 0xf0) != 0) {
    (**(code **)(*(long *)this + 0x68))(this);
    (**(code **)(*(long *)gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0xf0));
    *(undefined8 *)(this + 0xf0) = 0;
  }
  iVar2 = FUN_04a45288(0x41);
  iVar3 = FUN_04a45288(0x1e);
  iVar4 = FUN_04a45288(0x46);
  iVar5 = FUN_04a45288(0x5f);
  iVar6 = FUN_04a45288(0x82);
  iVar1 = *(int *)(this + 0x50);
  iVar7 = FUN_04a45288(0x3c);
  iVar11 = *(int *)(this + 0x54);
  iVar8 = FUN_04a45288(10);
  iVar9 = FUN_04a45288(0x6e);
  iVar10 = FUN_04a45288(0xa0);
  Sexy::Insets::Insets
            ((Insets *)&local_98,iVar2 - iVar3,iVar4 + iVar5,(iVar1 - iVar6) + iVar7,
             (((iVar11 - iVar4) - iVar8) - iVar9) - iVar10);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0xd8));
  lVar17 = *(long *)this_00;
  *(PVZ2UIScrollingWidget **)(this + 0xf0) = this_00;
  (**(code **)(lVar17 + 0x1a0))(this_00,(Insets *)&local_98);
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0xf0),2);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf0));
  Sexy::Insets::Insets(aIStack_88,local_98,local_94,local_90,local_8c);
  this_01 = ::operator_new(0xf8);
  TWScrollPanel::TWScrollPanel(this_01,(TRect *)aIStack_88,this);
  *(TWScrollPanel **)(this + 0xe8) = this_01;
  (**(code **)(**(long **)(this + 0xf0) + 0x60))(*(long **)(this + 0xf0),this_01);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_a8);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar14 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar14,0,(ButtonListener *)(this + 0xe0),awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0xf8) = pPVar14;
  FUN_05476c50(awStack_78);
  nop();
  plVar18 = *(long **)(this + 0xf8);
  pcVar19 = *(code **)(*plVar18 + 0x198);
  iVar11 = FUN_04a45288(0x334);
  iVar2 = FUN_04a45288(0x32);
  iVar1 = *(int *)(this + 0x50);
  pLVar15 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b978);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
  iVar4 = FUN_04a45288(0x3c);
  pSVar16 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b978);
  iVar5 = SalesProgressBar::GetCurrentLevel(pSVar16);
  iVar6 = FUN_04a45288(5);
  pLVar15 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b978);
  uVar12 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
  pSVar16 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b978);
  uVar13 = SalesProgressBar::GetCurrentLevel(pSVar16);
  (*pcVar19)(plVar18,((iVar11 + iVar1) / 2 - iVar2) - iVar3,(iVar4 - iVar5) + iVar6,uVar12,uVar13);
  pPVar14 = *(PVZ2UIButton **)(this + 0xf8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b7b978,1);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b7b678,1);
  PVZ2UIButton::SetDialogStates(pPVar14,(PVZ2UIImage *)awStack_78,aPStack_40);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf8));
  FUN_05478178(awStack_78,L"[DAILYSIGN_TW4399_REQUEST]",auStack_a8);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar14 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar14,1,(ButtonListener *)(this + 0xe0),awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0x100) = pPVar14;
  FUN_05476c50(awStack_78);
  nop();
  plVar18 = *(long **)(this + 0x100);
  pcVar19 = *(code **)(*plVar18 + 0x198);
  iVar2 = FUN_04a45288(100);
  iVar1 = *(int *)(this + 0x50);
  iVar3 = FUN_04a45288(0x46);
  iVar11 = *(int *)(this + 0x54);
  uVar12 = FUN_04a45288(200);
  pSVar16 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b650);
  uVar13 = SalesProgressBar::GetCurrentLevel(pSVar16);
  (*pcVar19)(plVar18,iVar1 / 2 - iVar2,iVar11 - iVar3,uVar12,uVar13);
  pPVar14 = *(PVZ2UIButton **)(this + 0x100);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b7b650,3);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b7b820,3);
  PVZ2UIButton::SetDialogStates(pPVar14,(PVZ2UIImage *)awStack_78,aPStack_40);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x100));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignRewardWithTW::DailySignRewardWithTW() */

void __thiscall DailySignRewardWithTW::DailySignRewardWithTW(DailySignRewardWithTW *this)

{
  undefined *puVar1;
  LawnApp *pLVar2;
  int iVar3;
  PrimeText *this_00;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  uint local_b0;
  uint local_ac;
  uint local_a8 [2];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ActiveItem aAStack_88 [32];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [88];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xd8));
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xe0));
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined ***)this = &PTR_GetClass_06933e30;
  *(undefined ***)(this + 0xd8) = &PTR__DailySignRewardWithTW_06934168;
  *(undefined ***)(this + 0xe0) = &PTR_ButtonPress_069341b0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  TWRewardListData::TWRewardListData((TWRewardListData *)(this + 0x110));
  std::string::string((string *)(this + 0x130),"");
  nop();
  std::string::string((string *)(this + 0x138),"");
  nop();
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_a0,"UI_signReward");
  LawnApp::LoadGroup(pLVar2,(string *)&local_a0);
  std::string::~string((string *)&local_a0);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_a0,"UI_Fragment_Pieces");
  LawnApp::LoadGroup(pLVar2,(string *)&local_a0);
  std::string::~string((string *)&local_a0);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_a0,"UI_Fragment_Avatar");
  LawnApp::LoadGroup(pLVar2,(string *)&local_a0);
  std::string::~string((string *)&local_a0);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_a0,"UI_Accessory_Dev2");
  LawnApp::LoadGroup(pLVar2,(string *)&local_a0);
  std::string::~string((string *)&local_a0);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_a0,"Effects_SignReward");
  LawnApp::LoadGroup(pLVar2,(string *)&local_a0);
  std::string::~string((string *)&local_a0);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_a0,"Effects_SignReward_Dev2");
  LawnApp::LoadGroup(pLVar2,(string *)&local_a0);
  std::string::~string((string *)&local_a0);
  nop();
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)(this + 0x110));
  FUN_05475ffc((string *)&local_a0,auStack_68,0,4);
  Sexy::StringToInt((string *)&local_a0,(int *)&local_b0);
  std::string::~string((string *)&local_a0);
  FUN_05475ffc((string *)&local_a0,auStack_68,4,2);
  Sexy::StringToInt((string *)&local_a0,(int *)&local_ac);
  std::string::~string((string *)&local_a0);
  FUN_05475ffc((string *)&local_a0,auStack_68,6,2);
  Sexy::StringToInt((string *)&local_a0,(int *)local_a8);
  std::string::~string((string *)&local_a0);
  Sexy::StrFormat("%d.%d.%d",(string *)&local_a0,(ulong)local_b0,(ulong)local_ac,(ulong)local_a8[0])
  ;
  FUN_05474278((string *)(this + 0x130),(string *)&local_a0);
  std::string::~string((string *)&local_a0);
  FUN_05475ffc((string *)&local_a0,auStack_60,0,4);
  Sexy::StringToInt((string *)&local_a0,(int *)&local_b0);
  std::string::~string((string *)&local_a0);
  FUN_05475ffc((string *)&local_a0,auStack_60,4,2);
  Sexy::StringToInt((string *)&local_a0,(int *)&local_ac);
  std::string::~string((string *)&local_a0);
  FUN_05475ffc((string *)&local_a0,auStack_60,6,2);
  Sexy::StringToInt((string *)&local_a0,(int *)local_a8);
  std::string::~string((string *)&local_a0);
  Sexy::StrFormat("%d.%d.%d",(string *)&local_a0,(ulong)local_b0,(ulong)local_ac,(ulong)local_a8[0])
  ;
  FUN_05474278((string *)(this + 0x138),(string *)&local_a0);
  std::string::~string((string *)&local_a0);
  InitView(this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onProcessSignRewardResult);
  local_d0 = local_a0;
  uStack_c8 = uStack_98;
  local_c0 = local_90;
  MessageRouter::
  Subscribe<bool,S2C_DailySignWithTW_const*,Sexy::CBMemberTranslatorX<DailySignRewardWithTW,void(DailySignRewardWithTW::*)(bool,S2C_DailySignWithTW_const*)>>
            ((MessageRouter *)puVar1,Message::NotifyDailySignWithTwResult,&local_d0);
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

