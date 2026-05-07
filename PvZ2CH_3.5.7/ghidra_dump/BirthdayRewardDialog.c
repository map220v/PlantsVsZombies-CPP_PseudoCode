// Class: BirthdayRewardDialog


/* BirthdayRewardDialog::ScrollTargetReached(Sexy::ScrollWidget*) */

void BirthdayRewardDialog::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to BirthdayRewardDialog::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
BirthdayRewardDialog::ScrollTargetReached(BirthdayRewardDialog *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xe0));
  return;
}


/* BirthdayRewardDialog::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void BirthdayRewardDialog::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to BirthdayRewardDialog::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
BirthdayRewardDialog::ScrollTargetInterrupted(BirthdayRewardDialog *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xe0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BirthdayRewardDialog::~BirthdayRewardDialog() */

void __thiscall BirthdayRewardDialog::~BirthdayRewardDialog(BirthdayRewardDialog *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06927be0;
  *(undefined **)(this + 0xd8) = &DAT_06927f20;
  *(undefined ***)(this + 0xe0) = &PTR__BirthdayRewardDialog_06927f68;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Consumption_Reward");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Birthz");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to BirthdayRewardDialog::~BirthdayRewardDialog() */

void __thiscall BirthdayRewardDialog::~BirthdayRewardDialog(BirthdayRewardDialog *this)

{
  ~BirthdayRewardDialog(this + -0xe0);
  return;
}


/* BirthdayRewardDialog::~BirthdayRewardDialog() */

void __thiscall BirthdayRewardDialog::~BirthdayRewardDialog(BirthdayRewardDialog *this)

{
  ~BirthdayRewardDialog(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BirthdayRewardDialog::~BirthdayRewardDialog() */

void __thiscall BirthdayRewardDialog::~BirthdayRewardDialog(BirthdayRewardDialog *this)

{
  ~BirthdayRewardDialog(this + -0xe0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BirthdayRewardDialog::AddControlButton() */

void __thiscall BirthdayRewardDialog::AddControlButton(BirthdayRewardDialog *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  LevelOfTheDayMgr *this_02;
  long lVar5;
  PVZ2UIButton *this_03;
  LotteryResultProgressBar *this_04;
  SalesProgressBar *this_05;
  wstring awStack_80 [8];
  PVZ2UIImage aPStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_80,L"[BIRTHZ_DIALOG_START]",aPStack_40);
  nop();
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  this_02 = (LevelOfTheDayMgr *)LevelOfTheDayMgr::GetInstance();
  iVar1 = LevelOfTheDayMgr::GetRealInterval(this_02);
  lVar5 = PlayerInfo::GetBirthZRecord(this_01,iVar1 + -1);
  if ((lVar5 != 0) && (0 < *(int *)(lVar5 + 8))) {
    FUN_054772c4(awStack_80,L"[BIRTHZ_DIALOG_AGAIN]");
  }
  Sexy::Color::Color((Color *)aPStack_40,1);
  this_03 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_03,0x15d,(ButtonListener *)(this + 0xd8),awStack_80,(Color *)aPStack_40);
  this_04 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b75d48);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(this_04);
  iVar2 = FUN_049ce980(0x1e);
  this_05 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b75d48);
  uVar3 = SalesProgressBar::GetCurrentLevel(this_05);
  iVar4 = FUN_049ce980(0x94);
  (**(code **)(*(long *)this_03 + 0x198))
            (this_03,(*(int *)(this + 0x50) - (iVar1 + iVar2)) / 2,*(int *)(this + 0x54) - iVar4,
             iVar1 + iVar2,uVar3);
  PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b75d48,3);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b75bb0,3);
  PVZ2UIButton::SetDialogStates(this_03,aPStack_78,aPStack_40);
  (**(code **)(*(long *)this + 0x60))(this,this_03);
  FUN_05476c50(awStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BirthdayRewardDialog::AddCloseButton() */

void __thiscall BirthdayRewardDialog::AddCloseButton(BirthdayRewardDialog *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  PVZ2UIButton *this_00;
  LotteryResultProgressBar *pLVar7;
  SalesProgressBar *this_01;
  code *pcVar8;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,0x2a7,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
  FUN_05476c50(awStack_78);
  nop();
  pcVar8 = *(code **)(*(long *)this_00 + 0x198);
  iVar2 = FUN_049ce980(0x2ee);
  iVar1 = *(int *)(this + 0x50);
  pLVar7 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b75e18);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  uVar4 = FUN_049ce980(0x32);
  pLVar7 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b75e18);
  uVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b75e18);
  uVar6 = SalesProgressBar::GetCurrentLevel(this_01);
  (*pcVar8)(this_00,(iVar2 + (iVar1 - iVar2) / 2) - iVar3,uVar4,uVar5,uVar6);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b75e18,1);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b75b08,1);
  PVZ2UIButton::SetDialogStates(this_00,(PVZ2UIImage *)awStack_78,aPStack_40);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BirthdayRewardDialog::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
BirthdayRewardDialog::DrawAll(BirthdayRewardDialog *this,ModalFlags *param_1,Graphics *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Image *pIVar6;
  LotteryResultProgressBar *pLVar7;
  undefined8 uVar8;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_049ce980(0x19);
  iVar5 = *(int *)(this + 0xe8);
  iVar4 = *(int *)(this + 0xec);
  iVar2 = FUN_049ce980(0x2ee);
  iVar3 = FUN_049ce980(0x18b);
  Sexy::Insets::Insets((Insets *)&local_48,iVar5 - iVar1,iVar4 - iVar1,iVar2,iVar3);
  iVar4 = FUN_049ce980(10);
  iVar5 = local_40;
  iVar1 = FUN_049ce980(0x14);
  Sexy::Insets::Insets(aIStack_38,local_48 + iVar4,iVar4 + local_44,iVar5 - iVar1,local_3c - iVar1);
  iVar5 = FUN_049ce980(0x32);
  iVar4 = FUN_049ce980(0x8c);
  Sexy::Insets::Insets
            (aIStack_28,*(int *)(this + 0xe8),*(int *)(this + 0xec),local_40 - iVar5,iVar4);
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b75ec8);
  iVar5 = *(int *)(this + 0x50);
  pLVar7 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b75ec8);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  iVar1 = FUN_049ce980(0x1e);
  Sexy::Graphics::DrawImage(param_2,pIVar6,(iVar5 - iVar4) / 2,iVar1);
  Sexy::Insets::Insets(aIStack_18,aIStack_38);
  uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b75e98);
  DrawImageTiled(0x3f800000,param_2,aIStack_18,uVar8);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&local_48);
  uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b75c40);
  Draw9SliceImage(param_2,aIStack_18,uVar8);
  Sexy::Insets::Insets(aIStack_18,aIStack_28);
  uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b75c00);
  Draw3SliceImage(param_2,aIStack_18,uVar8);
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b75de8);
  iVar5 = *(int *)(this + 0x50);
  pLVar7 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b75de8);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  iVar1 = FUN_049ce980(0);
  Sexy::Graphics::DrawImage(param_2,pIVar6,(iVar5 - iVar4) / 2,iVar1);
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b75dc0);
  iVar5 = *(int *)(this + 0x50);
  pLVar7 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b75dc0);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  iVar1 = FUN_049ce980(0x19);
  Sexy::Graphics::DrawImage(param_2,pIVar6,(iVar5 - iVar4) / 2,iVar1);
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BirthdayRewardDialog::Draw(Sexy::Graphics*) */

void __thiscall BirthdayRewardDialog::Draw(BirthdayRewardDialog *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  Image *pIVar7;
  LotteryResultProgressBar *pLVar8;
  SalesProgressBar *this_00;
  undefined8 uVar9;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b75c68);
  iVar1 = *(int *)(this + 0x50);
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b75c68);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  iVar3 = FUN_049ce980(0xa0);
  iVar6 = *(int *)(this + 0xec);
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b75c68);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b75c68);
  iVar5 = SalesProgressBar::GetCurrentLevel(this_00);
  Sexy::Graphics::DrawImage
            (param_1,pIVar7,(int)(((float)iVar1 - (float)iVar2) * 0.5),iVar3 + iVar6,
             (int)(float)iVar4,(int)(float)iVar5);
  iVar6 = FUN_049ce980(0x2ee);
  iVar2 = FUN_049ce980(0x3c);
  TodStringTranslate(L"[BIRTHZ_DIALOG_CONTENT]");
  iVar3 = FUN_049ce980(0xfffffff6);
  iVar1 = *(int *)(this + 0xec);
  iVar4 = FUN_049ce980(200);
  Sexy::Insets::Insets
            (aIStack_28,(*(int *)(this + 0x50) - (iVar6 - iVar2)) / 2,iVar3 + iVar1,iVar6 - iVar2,
             iVar4);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color(aCStack_18,0);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar9,aCStack_18,5,1);
  FUN_05476c50(auStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BirthdayRewardDialog::AddScrollWidght() */

void __thiscall BirthdayRewardDialog::AddScrollWidght(BirthdayRewardDialog *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  PVZ2UIScrollingWidget *this_00;
  BirthdayScrollPanel *this_01;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_049ce980(0x14);
  iVar7 = *(int *)(this + 0xe8);
  iVar3 = FUN_049ce980(0x78);
  iVar1 = *(int *)(this + 0xec);
  iVar4 = FUN_049ce980(0x2ee);
  iVar5 = FUN_049ce980(0x5a);
  iVar6 = FUN_049ce980(200);
  Sexy::Insets::Insets((Insets *)&local_28,iVar2 + iVar7,iVar3 + iVar1,iVar4 - iVar5,iVar6);
  iVar7 = FUN_049ce980(0x14);
  Sexy::Insets::Insets(aIStack_18,local_28,local_24,local_20,local_1c + iVar7);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0xe0));
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_18);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,1);
  this_01 = ::operator_new(0xd8);
  BirthdayScrollPanel::BirthdayScrollPanel(this_01,(TRect *)aIStack_18);
  (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_18);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BirthdayRewardDialog::InitView() */

void __thiscall BirthdayRewardDialog::InitView(BirthdayRewardDialog *this)

{
  int iVar1;
  int iVar2;
  
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  iVar1 = FUN_049ce980(0x2ee);
  iVar2 = FUN_049ce980(0x19);
  *(int *)(this + 0xe8) = iVar2 + (*(int *)(this + 0x50) - iVar1) / 2;
  iVar1 = FUN_049ce980(0x5f);
  iVar2 = FUN_049ce980(0x19);
  *(int *)(this + 0xec) = iVar1 + iVar2;
  AddScrollWidght(this);
  AddControlButton(this);
  AddCloseButton(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BirthdayRewardDialog::BirthdayRewardDialog() */

void __thiscall BirthdayRewardDialog::BirthdayRewardDialog(BirthdayRewardDialog *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_06927be0;
  *(undefined **)(this + 0xd8) = &DAT_06927f20;
  *(undefined ***)(this + 0xe0) = &PTR__BirthdayRewardDialog_06927f68;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Consumption_Reward");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Birthz");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BirthdayRewardDialog::ButtonPress(int) */

void BirthdayRewardDialog::ButtonPress(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Press");
  return;
}


/* non-virtual thunk to BirthdayRewardDialog::ButtonPress(int) */

void __thiscall BirthdayRewardDialog::ButtonPress(BirthdayRewardDialog *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* BirthdayRewardDialog::ButtonDepress(int) */

void __thiscall BirthdayRewardDialog::ButtonDepress(BirthdayRewardDialog *this,int param_1)

{
  char *pcVar1;
  LevelOfTheDayMgr *this_00;
  undefined8 uVar2;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Release");
  if (param_1 == 0x15d) {
    LawnApp::KillBirthdayRewardDialog(gLawnApp);
    this_00 = (LevelOfTheDayMgr *)LevelOfTheDayMgr::GetInstance();
    uVar2 = LevelOfTheDayMgr::GetCurrentLevelName(this_00);
    GameStateMgr::StartLevel(gGameStateMgr,&DAT_06b75e40,uVar2,0xffffffff,1,1,0);
    return;
  }
  if (param_1 != 0x2a7) {
    return;
  }
  LawnApp::KillBirthdayRewardDialog(gLawnApp);
  return;
}


/* non-virtual thunk to BirthdayRewardDialog::ButtonDepress(int) */

void __thiscall BirthdayRewardDialog::ButtonDepress(BirthdayRewardDialog *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

