// Class: PVPZombieLevelUpDlg


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPZombieLevelUpDlg::~PVPZombieLevelUpDlg() */

void __thiscall PVPZombieLevelUpDlg::~PVPZombieLevelUpDlg(PVPZombieLevelUpDlg *this)

{
  LawnApp *pLVar1;
  PrimeText *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined **)(this + 0xd8) = &DAT_06952fd0;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06952ca0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Almanac");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_ZombieAlmanac");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_ZombieAlmanac_Dynamic");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"PowerUpIcons");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"GameUpgrades");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_PVP");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_PVP_Upgrade");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Card_Plant_BG");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPZombieLevelUpDlg::~PVPZombieLevelUpDlg() */

void __thiscall PVPZombieLevelUpDlg::~PVPZombieLevelUpDlg(PVPZombieLevelUpDlg *this)

{
  ~PVPZombieLevelUpDlg(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPZombieLevelUpDlg::AddCloseButton() */

void __thiscall PVPZombieLevelUpDlg::AddCloseButton(PVPZombieLevelUpDlg *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  PVZ2UIButton *this_00;
  LotteryResultProgressBar *pLVar11;
  SalesProgressBar *pSVar12;
  code *pcVar13;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,0x1231,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
  FUN_05476c50(awStack_78);
  nop();
  pcVar13 = *(code **)(*(long *)this_00 + 0x198);
  iVar5 = FUN_04afce4c(0x30c);
  iVar1 = *(int *)(this + 0x50);
  iVar2 = *(int *)(DAT_06b82c58 + 0x50);
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82ba0);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  iVar7 = FUN_04afce4c(0xf);
  iVar3 = *(int *)(this + 0x54);
  iVar4 = *(int *)(DAT_06b82c58 + 0x54);
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82ba0);
  iVar8 = SalesProgressBar::GetCurrentLevel(pSVar12);
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82ba0);
  uVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82ba0);
  uVar10 = SalesProgressBar::GetCurrentLevel(pSVar12);
  (*pcVar13)(this_00,(iVar5 + (iVar1 - iVar2 >> 1)) - iVar6,(iVar7 + (iVar3 - iVar4 >> 1)) - iVar8,
             uVar9,uVar10);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b82ba0,1);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b82be0,1);
  PVZ2UIButton::SetDialogStates(this_00,(PVZ2UIImage *)awStack_78,aPStack_40);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPZombieLevelUpDlg::ButtonPress(int) */

void PVPZombieLevelUpDlg::ButtonPress(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Press");
  return;
}


/* non-virtual thunk to PVPZombieLevelUpDlg::ButtonPress(int) */

void __thiscall PVPZombieLevelUpDlg::ButtonPress(PVPZombieLevelUpDlg *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* PVPZombieLevelUpDlg::ButtonDepress(int) */

void __thiscall PVPZombieLevelUpDlg::ButtonDepress(PVPZombieLevelUpDlg *this,int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Release");
  if (param_1 != 0x1231) {
    return;
  }
  LawnApp::KillPVPZombieLevelUpDialog(gLawnApp);
  return;
}


/* non-virtual thunk to PVPZombieLevelUpDlg::ButtonDepress(int) */

void __thiscall PVPZombieLevelUpDlg::ButtonDepress(PVPZombieLevelUpDlg *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPZombieLevelUpDlg::InitView() */

void __thiscall PVPZombieLevelUpDlg::InitView(PVPZombieLevelUpDlg *this)

{
  int iVar1;
  PVPZombieLevelUpMain *pPVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  std::string::string(asStack_10,"");
  pPVar2 = ::operator_new(0xf8);
  PVPZombieLevelUpMain::PVPZombieLevelUpMain(pPVar2,asStack_10);
  DAT_06b82c58 = pPVar2;
  std::string::~string(asStack_10);
  nop();
  pPVar2 = DAT_06b82c58;
  iVar1 = FUN_04afce4c(0xf);
  (**(code **)(*(long *)pPVar2 + 0x1a8))
            (pPVar2,*(int *)(this + 0x50) - *(int *)(pPVar2 + 0x50) >> 1,
             iVar1 + (*(int *)(this + 0x54) - *(int *)(pPVar2 + 0x54) >> 1));
  (**(code **)(*(long *)this + 0x60))(this,DAT_06b82c58);
  AddCloseButton(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPZombieLevelUpDlg::PVPZombieLevelUpDlg() */

void __thiscall PVPZombieLevelUpDlg::PVPZombieLevelUpDlg(PVPZombieLevelUpDlg *this)

{
  LawnApp *pLVar1;
  PrimeText *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06952ca0;
  *(undefined **)(this + 0xd8) = &DAT_06952fd0;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Almanac");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_ZombieAlmanac");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_ZombieAlmanac_Dynamic");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"PowerUpIcons");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"GameUpgrades");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_PVP");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_PVP_Upgrade");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Card_Plant_BG");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

