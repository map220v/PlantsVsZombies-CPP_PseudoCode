// Class: SupplementarySignPanel


/* SupplementarySignPanel::~SupplementarySignPanel() */

void __thiscall SupplementarySignPanel::~SupplementarySignPanel(SupplementarySignPanel *this)

{
  *(undefined ***)this = &PTR_GetClass_06932810;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06932b40;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,false,false);
  FUN_05476c50(this + 0xe0);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* SupplementarySignPanel::~SupplementarySignPanel() */

void __thiscall SupplementarySignPanel::~SupplementarySignPanel(SupplementarySignPanel *this)

{
  ~SupplementarySignPanel(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SupplementarySignPanel::SupplementarySignPanel(DailySignReward*) */

void __thiscall
SupplementarySignPanel::SupplementarySignPanel
          (SupplementarySignPanel *this,DailySignReward *param_1)

{
  long lVar1;
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06932810;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06932b40;
  FUN_05476574(this + 0xe0);
  *(DailySignReward **)(this + 0x100) = param_1;
  std::string::string(asStack_10,"[DAILYSIGN_SUPPLYMENTARY_DESCRIPTION]");
  StringHelper::ToStringValue(asStack_10);
  FUN_054766c8(this + 0xe0,auStack_18);
  FUN_05476c50(auStack_18);
  std::string::~string(asStack_10);
  nop();
  *(undefined8 *)(this + 0xe8) = 0;
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0x10c) = 0;
  *(undefined4 *)(this + 0x110) = 0;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SupplementarySignPanel::CheckEnoughGem(int) */

bool __thiscall SupplementarySignPanel::CheckEnoughGem(SupplementarySignPanel *this,int param_1)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = PlayerInfo::GetNumGems(this_01,true);
  if (param_1 > iVar1) {
    LawnApp::ShowGemStoreConfirm(gLawnApp,2,1);
  }
  return param_1 <= iVar1;
}


/* SupplementarySignPanel::ButtonDepress(int) */

void __thiscall SupplementarySignPanel::ButtonDepress(SupplementarySignPanel *this,int param_1)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  NetworkMgr *pNVar3;
  long *plVar4;
  long lVar5;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (param_1 == 0x3ea) {
    cVar1 = CheckEnoughGem(this,*(int *)(this + 0x10c));
    if (cVar1 != '\0') {
      pNVar3 = (NetworkMgr *)NetworkMgr::Instance();
      plVar4 = (long *)NetworkMgr::GetNewNetWorkProcess(pNVar3);
      (**(code **)(*plVar4 + 0x360))(plVar4,5);
      iVar2 = PlayerInfo::GetNumGems(this_01,false);
      PlayerInfo::SetGems(this_01,iVar2 - *(int *)(this + 0x10c));
      plVar4 = *(long **)(this + 0x100);
      DAT_06b7ace4 = *(undefined4 *)(this + 0x110);
      DAT_06a88d70 = 0;
      lVar5 = *plVar4;
      goto LAB_04a3b794;
    }
  }
  else {
    if (param_1 == 0x3eb) {
      (**(code **)(**(long **)(this + 0x100) + 0x68))(*(long **)(this + 0x100),this);
      (**(code **)(*(long *)gLawnApp + 0x150))(gLawnApp,this);
      return;
    }
    if ((param_1 == 0x3e9) && (cVar1 = CheckEnoughGem(this,*(int *)(this + 0x108)), cVar1 != '\0'))
    {
      pNVar3 = (NetworkMgr *)NetworkMgr::Instance();
      plVar4 = (long *)NetworkMgr::GetNewNetWorkProcess(pNVar3);
      (**(code **)(*plVar4 + 0x360))(plVar4,4);
      iVar2 = PlayerInfo::GetNumGems(this_01,false);
      PlayerInfo::SetGems(this_01,iVar2 - *(int *)(this + 0x108));
      plVar4 = *(long **)(this + 0x100);
      DAT_06b7ace4 = 0;
      lVar5 = *plVar4;
      DAT_06a88d70 = 1;
LAB_04a3b794:
      (**(code **)(lVar5 + 0x68))(plVar4,this);
      (**(code **)(*(long *)gLawnApp + 0x150))(gLawnApp,this);
      LawnApp::KillDailySignReward(gLawnApp);
      return;
    }
  }
  return;
}


/* non-virtual thunk to SupplementarySignPanel::ButtonDepress(int) */

void __thiscall SupplementarySignPanel::ButtonDepress(SupplementarySignPanel *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SupplementarySignPanel::InitView() */

void __thiscall SupplementarySignPanel::InitView(SupplementarySignPanel *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  PVZ2UIButton *pPVar6;
  long lVar7;
  code *pcVar8;
  SignButton *pSVar9;
  long *plVar10;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04a3aff4(0xbd);
  iVar1 = (*(int *)(this + 0x50) / 2 - iVar1) / 2;
  if (*(long *)(this + 0xe8) == 0) {
    FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
    Sexy::Color::Color((Color *)aPStack_40,1);
    pSVar9 = ::operator_new(0x318);
    SignButton::SignButton
              (pSVar9,0x3e9,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
    *(SignButton **)(this + 0xe8) = pSVar9;
    FUN_05476c50(awStack_78);
    nop();
    plVar10 = *(long **)(this + 0xe8);
    uVar2 = FUN_04a3aff4(0x82);
    uVar3 = FUN_04a3aff4(0xbd);
    uVar4 = FUN_04a3aff4(0x6e);
    (**(code **)(*plVar10 + 0x198))(plVar10,iVar1,uVar2,uVar3,uVar4);
    pPVar6 = *(PVZ2UIButton **)(this + 0xe8);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b7ac08,2);
    PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b7a960,2);
    PVZ2UIButton::SetDialogStates(pPVar6,(PVZ2UIImage *)awStack_78,aPStack_40);
    lVar7 = *(long *)(this + 0xe8);
    pcVar8 = *(code **)(*(long *)this + 0x60);
    *(undefined1 *)(lVar7 + 0x59) = 0;
    (*pcVar8)(this,lVar7);
  }
  if (*(long *)(this + 0xf0) == 0) {
    FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
    Sexy::Color::Color((Color *)aPStack_40,1);
    pSVar9 = ::operator_new(0x318);
    SignButton::SignButton
              (pSVar9,0x3ea,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
    *(SignButton **)(this + 0xf0) = pSVar9;
    FUN_05476c50(awStack_78);
    nop();
    plVar10 = *(long **)(this + 0xf0);
    iVar5 = *(int *)(this + 0x50);
    uVar2 = FUN_04a3aff4(0x82);
    uVar3 = FUN_04a3aff4(0xbd);
    uVar4 = FUN_04a3aff4(0x6e);
    (**(code **)(*plVar10 + 0x198))(plVar10,iVar1 + iVar5 / 2,uVar2,uVar3,uVar4);
    pPVar6 = *(PVZ2UIButton **)(this + 0xf0);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b7ac08,2);
    PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b7a960,2);
    PVZ2UIButton::SetDialogStates(pPVar6,(PVZ2UIImage *)awStack_78,aPStack_40);
    lVar7 = *(long *)(this + 0xf0);
    pcVar8 = *(code **)(*(long *)this + 0x60);
    *(undefined1 *)(lVar7 + 0x59) = 0;
    (*pcVar8)(this,lVar7);
  }
  if (*(long *)(this + 0xf8) == 0) {
    this_00 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7ab10);
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    this_01 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7ab10);
    uVar2 = SalesProgressBar::GetCurrentLevel(this_01);
    if (((DAT_06b7ad18 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_06b7ad18), iVar5 != 0)) {
      DAT_06b7b070 = *(int *)(this + 0x50) - iVar1;
      __cxa_guard_release(&DAT_06b7ad18);
    }
    FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
    Sexy::Color::Color((Color *)aPStack_40,1);
    pPVar6 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar6,0x3eb,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
    *(PVZ2UIButton **)(this + 0xf8) = pPVar6;
    FUN_05476c50(awStack_78);
    nop();
    (**(code **)(**(long **)(this + 0xf8) + 0x198))
              (*(long **)(this + 0xf8),DAT_06b7b070,0,iVar1,uVar2);
    pPVar6 = *(PVZ2UIButton **)(this + 0xf8);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b7ab10,2);
    PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b7af20,2);
    PVZ2UIButton::SetDialogStates(pPVar6,(PVZ2UIImage *)awStack_78,aPStack_40);
    lVar7 = *(long *)(this + 0xf8);
    pcVar8 = *(code **)(*(long *)this + 0x60);
    *(undefined1 *)(lVar7 + 0x59) = 0;
    (*pcVar8)(this,lVar7);
  }
  pSVar9 = *(SignButton **)(this + 0xe8);
  if (pSVar9 != (SignButton *)0x0) {
    FUN_05478178(aPStack_40,L"[DAILYSIGN_SUPPLYMENTARY_ONE_BUTTON]",awStack_78);
    SignButton::SetDescription(pSVar9,aPStack_40);
    FUN_05476c50(aPStack_40);
    nop();
    uVar2 = DailySignReward::GetSupplementarySignGems(*(DailySignReward **)(this + 0x100),1);
    *(undefined4 *)(this + 0x108) = uVar2;
    SignButton::SetDiamondCount((int)*(undefined8 *)(this + 0xe8));
  }
  pSVar9 = *(SignButton **)(this + 0xf0);
  if (pSVar9 != (SignButton *)0x0) {
    FUN_05478178(aPStack_40,L"[DAILYSIGN_SUPPLYMENTARY_ALL_BUTTON]",awStack_78);
    SignButton::SetDescription(pSVar9,aPStack_40);
    FUN_05476c50(aPStack_40);
    nop();
    uVar2 = DailySignReward::GetSupplementarySignGems(*(DailySignReward **)(this + 0x100),0);
    *(undefined4 *)(this + 0x10c) = uVar2;
    SignButton::SetDiamondCount((int)*(undefined8 *)(this + 0xf0));
  }
  uVar2 = DailySignReward::GetSupplementarySignDaysCount(*(DailySignReward **)(this + 0x100));
  *(undefined4 *)(this + 0x110) = uVar2;
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SupplementarySignPanel::Draw(Sexy::Graphics*) */

void __thiscall SupplementarySignPanel::Draw(SupplementarySignPanel *this,Graphics *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  undefined8 uVar6;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_1,0.5);
  nop();
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7abe0);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7abe0);
  iVar3 = SalesProgressBar::GetCurrentLevel(this_01);
  uVar1 = (uint)DAT_06b7b118;
  if (((DAT_06b7b118 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_06b7b118), iVar4 != 0)) {
    Sexy::Insets::Insets
              ((Insets *)&DAT_06b7ae70,uVar1 & 1,iVar3 / 2,*(int *)(this + 0x50) - iVar2 / 2,
               *(int *)(this + 0x54) - iVar3 / 2);
    __cxa_guard_release(&DAT_06b7b118);
  }
  Sexy::Insets::Insets(aIStack_18,(Insets *)&DAT_06b7ae70);
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a768);
  Draw9SliceImage(param_1,aIStack_18,uVar6);
  iVar3 = DAT_06b7afd0;
  if (((DAT_06b7aad0 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(&DAT_06b7aad0), iVar3 = DAT_06b7afd0, iVar4 != 0)) {
    iVar3 = (*(int *)(this + 0x50) - iVar2 / 2) + -0x28;
    DAT_06b7afd0 = iVar3;
    __cxa_guard_release(&DAT_06b7aad0);
  }
  iVar2 = DAT_06b7a990;
  if (((DAT_06b7ab80 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(&DAT_06b7ab80), iVar2 = DAT_06b7a990, iVar4 != 0)) {
    iVar2 = FUN_04a3aff4(0x96);
    DAT_06b7a990 = iVar2;
    __cxa_guard_release(&DAT_06b7ab80);
  }
  iVar4 = FUN_04a3aff4(0x14);
  iVar5 = FUN_04a3aff4(0x28);
  Sexy::Insets::Insets(aIStack_28,iVar4,iVar5,iVar3,iVar2);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_40_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0xe0,aIStack_28,uVar6,aIStack_18,2,1);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

