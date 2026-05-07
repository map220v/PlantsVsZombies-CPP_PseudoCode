// Class: ProfileSummaryComparer


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileSummaryComparer::~ProfileSummaryComparer() */

void __thiscall ProfileSummaryComparer::~ProfileSummaryComparer(ProfileSummaryComparer *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06934b48;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06934820;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_Profile_select");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ProfileSummaryComparer::~ProfileSummaryComparer() */

void __thiscall ProfileSummaryComparer::~ProfileSummaryComparer(ProfileSummaryComparer *this)

{
  ~ProfileSummaryComparer(this);
  AK::FreeHook(this);
  return;
}


/* ProfileSummaryComparer::onCancelUsingOlderData() */

void ProfileSummaryComparer::onCancelUsingOlderData(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  return;
}


/* ProfileSummaryComparer::initUIPositions(bool) */

void __thiscall ProfileSummaryComparer::initUIPositions(ProfileSummaryComparer *this,bool param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  PlayerInfo *this_00;
  uint uVar14;
  
  uVar14 = (uint)param_1;
  iVar6 = FUN_04a4c4d4(8);
  *(int *)(this + 400) = iVar6;
  iVar7 = FUN_04a4c4d4(10);
  *(int *)(this + 0x194) = iVar7;
  iVar8 = FUN_04a4c4d4(0x14);
  *(int *)(this + 0x1a0) = iVar8;
  iVar9 = FUN_04a4c4d4(2);
  *(undefined4 *)(this + 0x148) = 0;
  *(int *)(this + 0x1a4) = iVar9;
  iVar10 = FUN_04a4c4d4(0x28);
  iVar11 = FUN_04a4c4d4(0xf);
  iVar2 = *(int *)(this + 0x50);
  *(int *)(this + 0x14c) = iVar10 + iVar11;
  iVar4 = iVar2 / 0x14;
  *(int *)(this + 0x150) = iVar4;
  iVar12 = FUN_04a4c4d4(0x3c);
  iVar12 = iVar10 + iVar11 + iVar12;
  *(int *)(this + 0x154) = iVar12;
  iVar3 = (iVar2 * 0x11) / 0x28;
  *(int *)(this + 0x158) = iVar3;
  iVar3 = iVar3 + iVar6 * -2;
  *(int *)(this + 0x19c) = iVar3;
  iVar13 = FUN_04a4c4d4(0x1e);
  *(int *)(this + 0x160) = iVar4;
  *(int *)(this + 0x198) = iVar13;
  iVar11 = FUN_04a4c4d4(0x14);
  *(int *)(this + 0x168) = iVar4;
  *(int *)(this + 0x164) = iVar12 + iVar11;
  iVar10 = FUN_04a4c4d4(0x3c);
  iVar10 = iVar12 + iVar11 + iVar10;
  iVar11 = iVar13 + iVar10;
  iVar1 = iVar13 * 5 + iVar9 * 4;
  iVar8 = iVar8 + iVar11 + iVar13 * 2;
  *(int *)(this + 0x16c) = iVar10;
  *(int *)(this + 0x170) = iVar6 + iVar4;
  *(int *)(this + 0x174) = iVar11;
  *(int *)(this + 0x178) = iVar3;
  *(int *)(this + 0x17c) = iVar9 + iVar13 * 2;
  *(int *)(this + 0x180) = iVar6 + iVar4;
  *(int *)(this + 0x184) = iVar8;
  *(int *)(this + 0x188) = iVar3;
  *(int *)(this + 0x18c) = iVar1;
  *(int *)(this + 0x15c) = iVar7 + iVar1 + (iVar8 - iVar12);
  if (param_1) {
    iVar12 = 0;
    uVar14 = (iVar2 * 0x13) / 0x28;
  }
  else {
    iVar12 = (iVar2 * 0x13) / 0x28;
  }
  *(int *)(this + 0x1a8) = iVar12;
  *(uint *)(this + 0x1ac) = uVar14;
  this[0x1b0] = (ProfileSummaryComparer)0x1;
  this_00 = (PlayerInfo *)ProfileUtils::Profile();
  if (this_00 != (PlayerInfo *)0x0) {
    bVar5 = PlayerInfo::IsOlderThanServerData(this_00);
    this[0x1b0] = (ProfileSummaryComparer)(bVar5 ^ 1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileSummaryComparer::setSummaryBtn(PVZ2UIButton*, Sexy::Image*, std::wstring const&,
   std::wstring const&) */

void __thiscall
ProfileSummaryComparer::setSummaryBtn
          (ProfileSummaryComparer *this,PVZ2UIButton *param_1,Image *param_2,wstring *param_3,
          wstring *param_4)

{
  undefined8 uVar1;
  PVZ2UIButton *this_00;
  undefined1 auStack_80 [8];
  PVZ2UIImage aPStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b7bfc0,3);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b7c170,3);
  PVZ2UIButton::SetDialogStates(param_1,aPStack_78,aPStack_40);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,param_2,1);
  PVZ2UIButton::AddImage(param_1,aPStack_40,0);
  uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  PVZ2UIButton::AddText(param_1,param_3,uVar1,0xffffffff);
  FUN_05478178(aPStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,0xd,(ButtonListener *)(this + 0xd8),(wstring *)aPStack_78,(Color *)aPStack_40);
  FUN_05476c50(aPStack_78);
  nop();
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,0,0,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
  uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  PVZ2UIButton::AddText(this_00,param_4,uVar1,1);
  (**(code **)(*(long *)param_1 + 0x60))(param_1,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileSummaryComparer::initCloudUIs() */

void __thiscall ProfileSummaryComparer::initCloudUIs(ProfileSummaryComparer *this)

{
  ButtonListener *pBVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  PlayerInfo *this_00;
  long lVar8;
  ulong uVar9;
  PVZ2UIButton *pPVar10;
  Image *pIVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long *plVar14;
  int iVar15;
  int iVar16;
  undefined1 auStack_88 [8];
  wstring awStack_80 [8];
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x1b8) = 0;
  this_00 = (PlayerInfo *)ProfileUtils::Profile();
  if (this_00 == (PlayerInfo *)0x0) {
    iVar7 = 0;
    iVar16 = 0;
    iVar15 = iVar7;
    iVar4 = iVar7;
    iVar3 = iVar7;
  }
  else {
    lVar8 = PlayerInfo::GetDeltaOnlineSummary(this_00);
    iVar7 = *(int *)(lVar8 + 8);
    if (iVar7 == 0) {
      iVar7 = LawnApp::GetLevelDaysByLevelString(gLawnApp,(string *)(lVar8 + 0x30));
    }
    iVar16 = *(int *)(lVar8 + 0x10);
    iVar15 = *(int *)(lVar8 + 0xc);
    uVar9 = FUN_04a4c464(*(undefined8 *)(this_00 + 0xcd0));
    iVar3 = *(int *)(lVar8 + 0x38);
    iVar4 = *(int *)(lVar8 + 0x3c);
    *(ulong *)(this + 0x1b8) = uVar9 & 0xffffffff;
  }
  FUN_05478178(awStack_78,&DAT_056f11a8,awStack_80);
  pBVar1 = (ButtonListener *)(this + 0xd8);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar10 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar10,1,pBVar1,awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0xe8) = pPVar10;
  FUN_05476c50(awStack_78);
  nop();
  (**(code **)(**(long **)(this + 0xe8) + 0x198))
            (*(long **)(this + 0xe8),*(int *)(this + 0x170) + *(int *)(this + 0x1a8),
             *(int *)(this + 0x198) + *(int *)(this + 0x1a4) + *(int *)(this + 0x174),
             *(undefined4 *)(this + 0x19c),*(int *)(this + 0x198));
  pPVar10 = *(PVZ2UIButton **)(this + 0xe8);
  pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7c2c8);
  FUN_05478178(aPStack_40,L"[SUMMARY_LEVEL]",auStack_88);
  TodStringTranslate(L"[SUMMARY_DAYS]");
  TodReplaceNumberString(awStack_80,L"{DAY_COUNT}",iVar7);
  setSummaryBtn(this,pPVar10,pIVar11,(wstring *)aPStack_40,awStack_78);
  FUN_05476c50(awStack_78);
  FUN_05476c50(awStack_80);
  FUN_05476c50(aPStack_40);
  nop();
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
  FUN_05478178(awStack_78,&DAT_056f11a8,awStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar10 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar10,2,pBVar1,awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0xf0) = pPVar10;
  FUN_05476c50(awStack_78);
  nop();
  (**(code **)(**(long **)(this + 0xf0) + 0x198))
            (*(long **)(this + 0xf0),*(int *)(this + 0x180) + *(int *)(this + 0x1a8),
             *(int *)(this + 0x198) + *(int *)(this + 0x1a4) + *(int *)(this + 0x184),
             *(undefined4 *)(this + 0x19c),*(int *)(this + 0x198));
  pPVar10 = *(PVZ2UIButton **)(this + 0xf0);
  pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7bee8);
  FUN_05478178(aPStack_40,L"[COIN_NUM_TITLE]",auStack_88);
  TodStringTranslate(L"[HOW_MANY_COINS]");
  TodReplaceNumberString(awStack_80,L"{COIN_COUNT}",iVar16);
  setSummaryBtn(this,pPVar10,pIVar11,(wstring *)aPStack_40,awStack_78);
  FUN_05476c50(awStack_78);
  FUN_05476c50(awStack_80);
  FUN_05476c50(aPStack_40);
  nop();
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf0));
  FUN_05478178(awStack_78,&DAT_056f11a8,awStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar10 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar10,3,pBVar1,awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0xf8) = pPVar10;
  FUN_05476c50(awStack_78);
  nop();
  (**(code **)(**(long **)(this + 0xf8) + 0x198))
            (*(long **)(this + 0xf8),*(int *)(this + 0x180) + *(int *)(this + 0x1a8),
             *(int *)(this + 0x184) + (*(int *)(this + 0x198) + *(int *)(this + 0x1a4)) * 2,
             *(undefined4 *)(this + 0x19c),*(int *)(this + 0x198));
  pPVar10 = *(PVZ2UIButton **)(this + 0xf8);
  pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7be40);
  FUN_05478178(aPStack_40,L"[GEM_NUM_TITLE]",auStack_88);
  TodStringTranslate(L"[HOW_MANY_GEMS]");
  TodReplaceNumberString(awStack_80,L"{GEM_COUNT}",iVar15);
  setSummaryBtn(this,pPVar10,pIVar11,(wstring *)aPStack_40,awStack_78);
  FUN_05476c50(awStack_78);
  FUN_05476c50(awStack_80);
  FUN_05476c50(aPStack_40);
  nop();
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf8));
  FUN_05478178(awStack_78,&DAT_056f11a8,awStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar10 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar10,4,pBVar1,awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0x100) = pPVar10;
  FUN_05476c50(awStack_78);
  nop();
  (**(code **)(**(long **)(this + 0x100) + 0x198))
            (*(long **)(this + 0x100),*(int *)(this + 0x180) + *(int *)(this + 0x1a8),
             (*(int *)(this + 0x198) + *(int *)(this + 0x1a4)) * 3 + *(int *)(this + 0x184),
             *(undefined4 *)(this + 0x19c),*(int *)(this + 0x198));
  pPVar10 = *(PVZ2UIButton **)(this + 0x100);
  pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7c010);
  FUN_05478178(aPStack_40,L"[PLANT_NUM_TITLE]",auStack_88);
  TodStringTranslate(L"[SUMMARY_STAR_AMOUNT]");
  TodReplaceNumberString(awStack_80,L"{STAR_COUNT}",iVar3);
  setSummaryBtn(this,pPVar10,pIVar11,(wstring *)aPStack_40,awStack_78);
  FUN_05476c50(awStack_78);
  FUN_05476c50(awStack_80);
  FUN_05476c50(aPStack_40);
  nop();
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x100));
  FUN_05478178(awStack_78,&DAT_056f11a8,awStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar10 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar10,5,pBVar1,awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0x108) = pPVar10;
  FUN_05476c50(awStack_78);
  nop();
  (**(code **)(**(long **)(this + 0x108) + 0x198))
            (*(long **)(this + 0x108),*(int *)(this + 0x180) + *(int *)(this + 0x1a8),
             *(int *)(this + 0x184) + (*(int *)(this + 0x198) + *(int *)(this + 0x1a4)) * 4,
             *(undefined4 *)(this + 0x19c),*(int *)(this + 0x198));
  pPVar10 = *(PVZ2UIButton **)(this + 0x108);
  pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7c198);
  FUN_05478178(aPStack_40,L"[AVATAR_NUM_TITLE]",auStack_88);
  TodStringTranslate(L"[SUMMARY_STAR_AMOUNT]");
  TodReplaceNumberString(awStack_80,L"{STAR_COUNT}",iVar4);
  setSummaryBtn(this,pPVar10,pIVar11,(wstring *)aPStack_40,awStack_78);
  FUN_05476c50(awStack_78);
  FUN_05476c50(awStack_80);
  FUN_05476c50(aPStack_40);
  nop();
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x108));
  FUN_05478178(awStack_78,&DAT_056f11a8,awStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar10 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar10,6,pBVar1,awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0x110) = pPVar10;
  FUN_05476c50(awStack_78);
  nop();
  iVar7 = *(int *)(this + 0x50);
  if (this[0x1b0] == (ProfileSummaryComparer)0x0) {
    iVar16 = iVar7 + 7;
    if (-1 < iVar7) {
      iVar16 = iVar7;
    }
    iVar7 = *(int *)(this + 0x1a8);
    plVar14 = *(long **)(this + 0x110);
    iVar3 = FUN_04a4c4d4(0x5a);
    iVar15 = *(int *)(this + 0x54);
    iVar4 = FUN_04a4c4d4(0x1e);
    uVar5 = FUN_04a4c4d4(0xb4);
    uVar6 = FUN_04a4c4d4(0x37);
    (**(code **)(*plVar14 + 0x198))
              (plVar14,iVar7 + (iVar16 >> 3),(iVar15 - iVar3) - iVar4,uVar5,uVar6);
    pPVar10 = *(PVZ2UIButton **)(this + 0x110);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b7c118,3);
    puVar13 = &DAT_06b7bf10;
  }
  else {
    iVar16 = iVar7 + 7;
    if (-1 < iVar7) {
      iVar16 = iVar7;
    }
    iVar7 = *(int *)(this + 0x1a8);
    plVar14 = *(long **)(this + 0x110);
    iVar3 = FUN_04a4c4d4(0x5a);
    iVar15 = *(int *)(this + 0x54);
    iVar4 = FUN_04a4c4d4(0x1e);
    uVar5 = FUN_04a4c4d4(0xb4);
    uVar6 = FUN_04a4c4d4(0x37);
    (**(code **)(*plVar14 + 0x198))
              (plVar14,iVar7 + (iVar16 >> 3),(iVar15 - iVar3) - iVar4,uVar5,uVar6);
    pPVar10 = *(PVZ2UIButton **)(this + 0x110);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b7be18,3);
    puVar13 = &DAT_06b7bf38;
  }
  PVZ2UIImage::PVZ2UIImage(aPStack_40,puVar13,3);
  PVZ2UIButton::SetDialogStates(pPVar10,(PVZ2UIImage *)awStack_78,aPStack_40);
  pPVar10 = *(PVZ2UIButton **)(this + 0x110);
  FUN_05478178(aPStack_40,L"[SUMMARY_USE_CLOUD]",awStack_78);
  uVar12 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_HardShadow);
  PVZ2UIButton::AddText(pPVar10,aPStack_40,uVar12,0);
  FUN_05476c50(aPStack_40);
  nop();
  (**(code **)(**(long **)(this + 0x110) + 0x158))(*(long **)(this + 0x110),1);
  lVar8 = Sexy::LazySingleton<AuthMgr>::GetInstance();
  cVar2 = FUN_04a4c468(*(undefined1 *)(lVar8 + 0x1d));
  if (cVar2 != '\0') {
    (**(code **)(**(long **)(this + 0x110) + 0x188))(*(long **)(this + 0x110),1);
  }
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x110));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileSummaryComparer::initLocalUIs() */

void __thiscall ProfileSummaryComparer::initLocalUIs(ProfileSummaryComparer *this)

{
  ButtonListener *pBVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  PlayerInfo *this_00;
  long lVar7;
  ulong uVar8;
  PVZ2UIButton *pPVar9;
  Image *pIVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long *plVar13;
  int iVar14;
  int iVar15;
  undefined1 auStack_88 [8];
  wstring awStack_80 [8];
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x1c0) = 0;
  this_00 = (PlayerInfo *)ProfileUtils::Profile();
  if (this_00 == (PlayerInfo *)0x0) {
    iVar6 = 0;
    iVar15 = 0;
    iVar14 = iVar6;
    iVar3 = iVar6;
    iVar2 = iVar6;
  }
  else {
    lVar7 = PlayerInfo::GetDeltaOfflineSummary(this_00);
    iVar6 = *(int *)(lVar7 + 8);
    if (iVar6 == 0) {
      iVar6 = LawnApp::GetLevelDaysByLevelString(gLawnApp,(string *)(lVar7 + 0x30));
    }
    iVar15 = *(int *)(lVar7 + 0x10);
    iVar14 = *(int *)(lVar7 + 0xc);
    uVar8 = FUN_04a4c460(*(undefined8 *)(this_00 + 0xcc8));
    iVar2 = *(int *)(lVar7 + 0x38);
    iVar3 = *(int *)(lVar7 + 0x3c);
    *(ulong *)(this + 0x1c0) = uVar8 & 0xffffffff;
  }
  FUN_05478178(awStack_78,&DAT_056f11a8,awStack_80);
  pBVar1 = (ButtonListener *)(this + 0xd8);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar9 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar9,7,pBVar1,awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0x118) = pPVar9;
  FUN_05476c50(awStack_78);
  nop();
  (**(code **)(**(long **)(this + 0x118) + 0x198))
            (*(long **)(this + 0x118),*(int *)(this + 0x170) + *(int *)(this + 0x1ac),
             *(int *)(this + 0x198) + *(int *)(this + 0x1a4) + *(int *)(this + 0x174),
             *(undefined4 *)(this + 0x19c),*(int *)(this + 0x198));
  pPVar9 = *(PVZ2UIButton **)(this + 0x118);
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7c2c8);
  FUN_05478178(aPStack_40,L"[SUMMARY_LEVEL]",auStack_88);
  TodStringTranslate(L"[SUMMARY_DAYS]");
  TodReplaceNumberString(awStack_80,L"{DAY_COUNT}",iVar6);
  setSummaryBtn(this,pPVar9,pIVar10,(wstring *)aPStack_40,awStack_78);
  FUN_05476c50(awStack_78);
  FUN_05476c50(awStack_80);
  FUN_05476c50(aPStack_40);
  nop();
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x118));
  FUN_05478178(awStack_78,&DAT_056f11a8,awStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar9 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar9,8,pBVar1,awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0x120) = pPVar9;
  FUN_05476c50(awStack_78);
  nop();
  (**(code **)(**(long **)(this + 0x120) + 0x198))
            (*(long **)(this + 0x120),*(int *)(this + 0x180) + *(int *)(this + 0x1ac),
             *(int *)(this + 0x198) + *(int *)(this + 0x1a4) + *(int *)(this + 0x184),
             *(undefined4 *)(this + 0x19c),*(int *)(this + 0x198));
  pPVar9 = *(PVZ2UIButton **)(this + 0x120);
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7bee8);
  FUN_05478178(aPStack_40,L"[COIN_NUM_TITLE]",auStack_88);
  TodStringTranslate(L"[HOW_MANY_COINS]");
  TodReplaceNumberString(awStack_80,L"{COIN_COUNT}",iVar15);
  setSummaryBtn(this,pPVar9,pIVar10,(wstring *)aPStack_40,awStack_78);
  FUN_05476c50(awStack_78);
  FUN_05476c50(awStack_80);
  FUN_05476c50(aPStack_40);
  nop();
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x120));
  FUN_05478178(awStack_78,&DAT_056f11a8,awStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar9 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar9,9,pBVar1,awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0x128) = pPVar9;
  FUN_05476c50(awStack_78);
  nop();
  (**(code **)(**(long **)(this + 0x128) + 0x198))
            (*(long **)(this + 0x128),*(int *)(this + 0x180) + *(int *)(this + 0x1ac),
             *(int *)(this + 0x184) + (*(int *)(this + 0x198) + *(int *)(this + 0x1a4)) * 2,
             *(undefined4 *)(this + 0x19c),*(int *)(this + 0x198));
  pPVar9 = *(PVZ2UIButton **)(this + 0x128);
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7be40);
  FUN_05478178(aPStack_40,L"[GEM_NUM_TITLE]",auStack_88);
  TodStringTranslate(L"[HOW_MANY_GEMS]");
  TodReplaceNumberString(awStack_80,L"{GEM_COUNT}",iVar14);
  setSummaryBtn(this,pPVar9,pIVar10,(wstring *)aPStack_40,awStack_78);
  FUN_05476c50(awStack_78);
  FUN_05476c50(awStack_80);
  FUN_05476c50(aPStack_40);
  nop();
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x128));
  FUN_05478178(awStack_78,&DAT_056f11a8,awStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar9 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar9,10,pBVar1,awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0x130) = pPVar9;
  FUN_05476c50(awStack_78);
  nop();
  (**(code **)(**(long **)(this + 0x130) + 0x198))
            (*(long **)(this + 0x130),*(int *)(this + 0x180) + *(int *)(this + 0x1ac),
             (*(int *)(this + 0x198) + *(int *)(this + 0x1a4)) * 3 + *(int *)(this + 0x184),
             *(undefined4 *)(this + 0x19c),*(int *)(this + 0x198));
  pPVar9 = *(PVZ2UIButton **)(this + 0x130);
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7c010);
  FUN_05478178(aPStack_40,L"[PLANT_NUM_TITLE]",auStack_88);
  TodStringTranslate(L"[SUMMARY_STAR_AMOUNT]");
  TodReplaceNumberString(awStack_80,L"{STAR_COUNT}",iVar2);
  setSummaryBtn(this,pPVar9,pIVar10,(wstring *)aPStack_40,awStack_78);
  FUN_05476c50(awStack_78);
  FUN_05476c50(awStack_80);
  FUN_05476c50(aPStack_40);
  nop();
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x130));
  FUN_05478178(awStack_78,&DAT_056f11a8,awStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar9 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar9,0xb,pBVar1,awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0x138) = pPVar9;
  FUN_05476c50(awStack_78);
  nop();
  (**(code **)(**(long **)(this + 0x138) + 0x198))
            (*(long **)(this + 0x138),*(int *)(this + 0x180) + *(int *)(this + 0x1ac),
             *(int *)(this + 0x184) + (*(int *)(this + 0x198) + *(int *)(this + 0x1a4)) * 4,
             *(undefined4 *)(this + 0x19c),*(int *)(this + 0x198));
  pPVar9 = *(PVZ2UIButton **)(this + 0x138);
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7c198);
  FUN_05478178(aPStack_40,L"[AVATAR_NUM_TITLE]",auStack_88);
  TodStringTranslate(L"[SUMMARY_STAR_AMOUNT]");
  TodReplaceNumberString(awStack_80,L"{STAR_COUNT}",iVar3);
  setSummaryBtn(this,pPVar9,pIVar10,(wstring *)aPStack_40,awStack_78);
  FUN_05476c50(awStack_78);
  FUN_05476c50(awStack_80);
  FUN_05476c50(aPStack_40);
  nop();
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x138));
  FUN_05478178(awStack_78,&DAT_056f11a8,awStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar9 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar9,0xc,pBVar1,awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0x140) = pPVar9;
  FUN_05476c50(awStack_78);
  nop();
  iVar6 = *(int *)(this + 0x50);
  if (this[0x1b0] == (ProfileSummaryComparer)0x0) {
    iVar15 = iVar6 + 7;
    if (-1 < iVar6) {
      iVar15 = iVar6;
    }
    iVar6 = *(int *)(this + 0x1ac);
    plVar13 = *(long **)(this + 0x140);
    iVar2 = FUN_04a4c4d4(0x5a);
    iVar14 = *(int *)(this + 0x54);
    iVar3 = FUN_04a4c4d4(0x1e);
    uVar4 = FUN_04a4c4d4(0xb4);
    uVar5 = FUN_04a4c4d4(0x37);
    (**(code **)(*plVar13 + 0x198))
              (plVar13,iVar6 + (iVar15 >> 3),(iVar14 - iVar2) - iVar3,uVar4,uVar5);
    pPVar9 = *(PVZ2UIButton **)(this + 0x140);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b7be18,3);
    puVar12 = &DAT_06b7bf38;
  }
  else {
    iVar15 = iVar6 + 7;
    if (-1 < iVar6) {
      iVar15 = iVar6;
    }
    iVar6 = *(int *)(this + 0x1ac);
    plVar13 = *(long **)(this + 0x140);
    iVar2 = FUN_04a4c4d4(0x5a);
    iVar14 = *(int *)(this + 0x54);
    iVar3 = FUN_04a4c4d4(0x1e);
    uVar4 = FUN_04a4c4d4(0xb4);
    uVar5 = FUN_04a4c4d4(0x37);
    (**(code **)(*plVar13 + 0x198))
              (plVar13,iVar6 + (iVar15 >> 3),(iVar14 - iVar2) - iVar3,uVar4,uVar5);
    pPVar9 = *(PVZ2UIButton **)(this + 0x140);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b7c118,3);
    puVar12 = &DAT_06b7bf10;
  }
  PVZ2UIImage::PVZ2UIImage(aPStack_40,puVar12,3);
  PVZ2UIButton::SetDialogStates(pPVar9,(PVZ2UIImage *)awStack_78,aPStack_40);
  pPVar9 = *(PVZ2UIButton **)(this + 0x140);
  FUN_05478178(aPStack_40,L"[SUMMARY_USE_LOCAL]",awStack_78);
  uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_HardShadow);
  PVZ2UIButton::AddText(pPVar9,aPStack_40,uVar11,0);
  FUN_05476c50(aPStack_40);
  nop();
  (**(code **)(**(long **)(this + 0x140) + 0x158))(*(long **)(this + 0x140),1);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x140));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileSummaryComparer::initUIs(bool) */

void __thiscall ProfileSummaryComparer::initUIs(ProfileSummaryComparer *this,bool param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  PVZ2UIButton *pPVar5;
  LotteryResultProgressBar *pLVar6;
  SalesProgressBar *this_00;
  long *plVar7;
  code *pcVar8;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  initUIPositions(this,param_1);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar5 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar5,0,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0xe0) = pPVar5;
  FUN_05476c50(awStack_78);
  nop();
  plVar7 = *(long **)(this + 0xe0);
  iVar1 = *(int *)(this + 0x50);
  pcVar8 = *(code **)(*plVar7 + 0x198);
  pLVar6 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7c0f0);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
  pLVar6 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7c0f0);
  uVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7c0f0);
  uVar4 = SalesProgressBar::GetCurrentLevel(this_00);
  (*pcVar8)(plVar7,iVar1 + iVar2 * -2,0,uVar3,uVar4);
  pPVar5 = *(PVZ2UIButton **)(this + 0xe0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b7c0f0,1);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b7c0f0,1);
  PVZ2UIButton::SetDialogStates(pPVar5,(PVZ2UIImage *)awStack_78,aPStack_40);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe0));
  (**(code **)(**(long **)(this + 0xe0) + 0x158))(*(long **)(this + 0xe0),0);
  initCloudUIs(this);
  initLocalUIs(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileSummaryComparer::ProfileSummaryComparer(bool) */

void __thiscall
ProfileSummaryComparer::ProfileSummaryComparer(ProfileSummaryComparer *this,bool param_1)

{
  LawnApp *pLVar1;
  int iVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06934820;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06934b48;
  Sexy::Point::Point((Point *)(this + 0x148));
  Sexy::Insets::Insets((Insets *)(this + 0x150));
  Sexy::Point::Point((Point *)(this + 0x160));
  Sexy::Point::Point((Point *)(this + 0x168));
  Sexy::Insets::Insets((Insets *)(this + 0x170));
  Sexy::Insets::Insets((Insets *)(this + 0x180));
  iVar2 = FUN_04a4c4d4(0x28a);
  Sexy::Widget::Resize
            ((Widget *)this,(*(int *)(gLawnApp + 0x724) - iVar2) / 2,0,iVar2,
             *(int *)(gLawnApp + 0x728));
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Almanac");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Profile_select");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  initUIs(this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileSummaryComparer::drawCloudSummary(Sexy::Graphics*) */

void __thiscall
ProfileSummaryComparer::drawCloudSummary(ProfileSummaryComparer *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  wstring awStack_70 [8];
  wstring awStack_68 [8];
  wstring awStack_60 [8];
  wstring awStack_58 [8];
  undefined1 auStack_50 [8];
  Insets aIStack_48 [8];
  int local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_28;
  int local_24;
  int local_20;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets
            (aIStack_48,*(int *)(this + 0x150) + *(int *)(this + 0x1a8),*(int *)(this + 0x154),
             *(int *)(this + 0x158),*(int *)(this + 0x15c));
  Sexy::Insets::Insets(aIStack_18,aIStack_48);
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7beb8);
  Draw9SliceImage(param_1,aIStack_18,uVar5);
  Sexy::Insets::Insets
            ((Insets *)&local_38,*(int *)(this + 0x170) + *(int *)(this + 0x1a8),
             *(int *)(this + 0x174),*(int *)(this + 0x178),*(int *)(this + 0x17c));
  Sexy::Insets::Insets(aIStack_18,(Insets *)&local_38);
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7c0b0);
  Draw9SliceImage(param_1,aIStack_18,uVar5);
  Sexy::Insets::Insets
            ((Insets *)&local_28,*(int *)(this + 0x180) + *(int *)(this + 0x1a8),
             *(int *)(this + 0x184),*(int *)(this + 0x188),*(int *)(this + 0x18c));
  Sexy::Insets::Insets(aIStack_18,(Insets *)&local_28);
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7c0b0);
  Draw9SliceImage(param_1,aIStack_18,uVar5);
  FUN_05478178(awStack_70,L"[SUMMARY_CLOUD]",aIStack_18);
  nop();
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_32_ThickOutline);
  iVar3 = *(int *)(this + 0x160);
  iVar4 = *(int *)(this + 0x1a8);
  iVar1 = *(int *)(this + 0x164);
  iVar2 = *(int *)(this + 0x158);
  TodStringTranslate(awStack_70);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Popover_Btn_Label);
  Sexy::PrimeTypeface::DrawString_Line
            ((PrimeTypeface *)(float)(iVar3 + iVar4),(float)iVar1,(float)iVar2,uVar5,param_1,
             auStack_50,1,aIStack_18,0);
  FUN_05476c50(auStack_50);
  lVar6 = LawnApp::BeijingTime(gLawnApp,(long *)(this + 0x1b8));
  TodStringTranslate(L"[SUMMARY_LAST_TIME]");
  TodReplaceNumberString(awStack_68,L"{MONTH}",*(int *)(lVar6 + 0x10) + 1);
  FUN_054766c8(awStack_68,aIStack_18);
  FUN_05476c50(aIStack_18);
  TodReplaceNumberString(awStack_68,L"{DAY}",*(int *)(lVar6 + 0xc));
  FUN_054766c8(awStack_68,aIStack_18);
  FUN_05476c50(aIStack_18);
  TodReplaceNumberString(awStack_68,L"{HOUR}",*(int *)(lVar6 + 8));
  FUN_054766c8(awStack_68,aIStack_18);
  FUN_05476c50(aIStack_18);
  TodReplaceNumberString(awStack_68,L"{MIN}",*(int *)(lVar6 + 4));
  FUN_054766c8(awStack_68,aIStack_18);
  FUN_05476c50(aIStack_18);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  iVar3 = *(int *)(this + 0x168);
  iVar4 = *(int *)(this + 0x1a8);
  iVar1 = *(int *)(this + 0x16c);
  TodStringTranslate(awStack_68);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
  Sexy::PrimeTypeface::DrawString_Line
            ((PrimeTypeface *)(float)(iVar3 + iVar4),(float)iVar1,(float)local_40,uVar5,param_1,
             auStack_50,1,aIStack_18,0);
  FUN_05476c50(auStack_50);
  FUN_05478178(awStack_60,L"[SUMMARY_LEVEL]",aIStack_18);
  nop();
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  iVar3 = FUN_04a4c4d4(10);
  iVar4 = FUN_04a4c4d4(3);
  TodStringTranslate(awStack_60);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
  Sexy::PrimeTypeface::DrawString_Line
            ((PrimeTypeface *)(float)(local_38 + iVar3),(float)(local_34 + iVar4),(float)local_30,
             uVar5,param_1,auStack_50,0,aIStack_18,0);
  FUN_05476c50(auStack_50);
  FUN_05478178(awStack_58,L"[SUMMARY_STAR]",aIStack_18);
  nop();
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  iVar3 = FUN_04a4c4d4(10);
  iVar4 = FUN_04a4c4d4(3);
  TodStringTranslate(awStack_58);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
  Sexy::PrimeTypeface::DrawString_Line
            ((PrimeTypeface *)(float)(local_28 + iVar3),(float)(local_24 + iVar4),(float)local_20,
             uVar5,param_1,auStack_50,0,aIStack_18,0);
  FUN_05476c50(auStack_50);
  FUN_05476c50(awStack_58);
  FUN_05476c50(awStack_60);
  FUN_05476c50(awStack_68);
  FUN_05476c50(awStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileSummaryComparer::drawLocalSummary(Sexy::Graphics*) */

void __thiscall
ProfileSummaryComparer::drawLocalSummary(ProfileSummaryComparer *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  wstring awStack_70 [8];
  wstring awStack_68 [8];
  wstring awStack_60 [8];
  wstring awStack_58 [8];
  undefined1 auStack_50 [8];
  Insets aIStack_48 [8];
  int local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_28;
  int local_24;
  int local_20;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets
            (aIStack_48,*(int *)(this + 0x150) + *(int *)(this + 0x1ac),*(int *)(this + 0x154),
             *(int *)(this + 0x158),*(int *)(this + 0x15c));
  Sexy::Insets::Insets(aIStack_18,aIStack_48);
  uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7c2a0);
  Draw9SliceImage(param_1,aIStack_18,uVar4);
  Sexy::Insets::Insets
            ((Insets *)&local_38,*(int *)(this + 0x170) + *(int *)(this + 0x1ac),
             *(int *)(this + 0x174),*(int *)(this + 0x178),*(int *)(this + 0x17c));
  Sexy::Insets::Insets(aIStack_18,(Insets *)&local_38);
  uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7c0b0);
  Draw9SliceImage(param_1,aIStack_18,uVar4);
  Sexy::Insets::Insets
            ((Insets *)&local_28,*(int *)(this + 0x180) + *(int *)(this + 0x1ac),
             *(int *)(this + 0x184),*(int *)(this + 0x188),*(int *)(this + 0x18c));
  Sexy::Insets::Insets(aIStack_18,(Insets *)&local_28);
  uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7c0b0);
  Draw9SliceImage(param_1,aIStack_18,uVar4);
  FUN_05478178(awStack_70,L"[SUMMARY_LOCAL]",aIStack_18);
  nop();
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_32_ThickOutline);
  iVar2 = *(int *)(this + 0x160);
  iVar3 = *(int *)(this + 0x1ac);
  iVar1 = *(int *)(this + 0x164);
  fVar6 = (float)local_40;
  TodStringTranslate(awStack_70);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Popover_Btn_Label);
  Sexy::PrimeTypeface::DrawString_Line
            ((PrimeTypeface *)(float)(iVar2 + iVar3),(float)iVar1,fVar6,uVar4,param_1,auStack_50,1,
             aIStack_18,0);
  FUN_05476c50(auStack_50);
  lVar5 = LawnApp::BeijingTime(gLawnApp,(long *)(this + 0x1c0));
  TodStringTranslate(L"[SUMMARY_LAST_TIME]");
  TodReplaceNumberString(awStack_68,L"{MONTH}",*(int *)(lVar5 + 0x10) + 1);
  FUN_054766c8(awStack_68,aIStack_18);
  FUN_05476c50(aIStack_18);
  TodReplaceNumberString(awStack_68,L"{DAY}",*(int *)(lVar5 + 0xc));
  FUN_054766c8(awStack_68,aIStack_18);
  FUN_05476c50(aIStack_18);
  TodReplaceNumberString(awStack_68,L"{HOUR}",*(int *)(lVar5 + 8));
  FUN_054766c8(awStack_68,aIStack_18);
  FUN_05476c50(aIStack_18);
  TodReplaceNumberString(awStack_68,L"{MIN}",*(int *)(lVar5 + 4));
  FUN_054766c8(awStack_68,aIStack_18);
  FUN_05476c50(aIStack_18);
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  iVar2 = *(int *)(this + 0x168);
  iVar3 = *(int *)(this + 0x1ac);
  iVar1 = *(int *)(this + 0x16c);
  TodStringTranslate(awStack_68);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
  Sexy::PrimeTypeface::DrawString_Line
            ((PrimeTypeface *)(float)(iVar2 + iVar3),(float)iVar1,(float)local_40,uVar4,param_1,
             auStack_50,1,aIStack_18,0);
  FUN_05476c50(auStack_50);
  FUN_05478178(awStack_60,L"[SUMMARY_LEVEL]",aIStack_18);
  nop();
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  iVar2 = FUN_04a4c4d4(10);
  iVar3 = FUN_04a4c4d4(3);
  TodStringTranslate(awStack_60);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
  Sexy::PrimeTypeface::DrawString_Line
            ((PrimeTypeface *)(float)(local_38 + iVar2),(float)(local_34 + iVar3),(float)local_30,
             uVar4,param_1,auStack_50,0,aIStack_18,0);
  FUN_05476c50(auStack_50);
  FUN_05478178(awStack_58,L"[SUMMARY_STAR]",aIStack_18);
  nop();
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  iVar2 = FUN_04a4c4d4(10);
  iVar3 = FUN_04a4c4d4(3);
  TodStringTranslate(awStack_58);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
  Sexy::PrimeTypeface::DrawString_Line
            ((PrimeTypeface *)(float)(local_28 + iVar2),(float)(local_24 + iVar3),(float)local_20,
             uVar4,param_1,auStack_50,0,aIStack_18,0);
  FUN_05476c50(auStack_50);
  FUN_05476c50(awStack_58);
  FUN_05476c50(awStack_60);
  FUN_05476c50(awStack_68);
  FUN_05476c50(awStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileSummaryComparer::ButtonDepress(int) */

void __thiscall ProfileSummaryComparer::ButtonDepress(ProfileSummaryComparer *this,int param_1)

{
  LawnApp *this_00;
  PVZ2UIDialog *pPVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (param_1 == 6) {
    if (this[0x1b0] != (ProfileSummaryComparer)0x0) {
LAB_04a4e960:
      FUN_05478178(awStack_58,L"[SUMMARY_USE_OLDER_DATA_HEADER]",auStack_68);
      FUN_05478178(awStack_50,L"[SUMMARY_USE_OLDER_DATA_BODY]",auStack_60);
      pPVar1 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
      FUN_05476c50(awStack_50);
      nop();
      FUN_05476c50(awStack_58);
      nop();
      FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onConfirmUsingOlderData);
      Sexy::Delegate0::Delegate0<ProfileSummaryComparer,void(ProfileSummaryComparer::*)()>
                (aDStack_38,awStack_50);
      PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,0);
      FUN_05476c50(awStack_58);
      nop();
      FUN_05478178(awStack_58,L"[BUTTON_CANCEL]",auStack_60);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onCancelUsingOlderData);
      Sexy::Delegate0::Delegate0<ProfileSummaryComparer,void(ProfileSummaryComparer::*)()>
                (aDStack_38,awStack_50);
      PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,0);
      FUN_05476c50(awStack_58);
      nop();
      goto LAB_04a4e900;
    }
    uVar2 = 1;
  }
  else if (param_1 == 0xc) {
    uVar2 = 0;
    if (this[0x1b0] == (ProfileSummaryComparer)0x0) goto LAB_04a4e960;
  }
  else {
    uVar2 = 2;
    if (param_1 != 0) goto LAB_04a4e900;
  }
  MessageRouter::Post<int,summarySelectResult>
            ((MessageRouter *)gMessageRouter,Message::ProfileSummarySelectResult,uVar2);
LAB_04a4e900:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ProfileSummaryComparer::ButtonDepress(int) */

void __thiscall ProfileSummaryComparer::ButtonDepress(ProfileSummaryComparer *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* ProfileSummaryComparer::onConfirmUsingOlderData() */

void __thiscall ProfileSummaryComparer::onConfirmUsingOlderData(ProfileSummaryComparer *this)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  MessageRouter::Post<int,summarySelectResult>
            ((MessageRouter *)gMessageRouter,Message::ProfileSummarySelectResult,this[0x1b0]);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileSummaryComparer::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
ProfileSummaryComparer::DrawAll(ProfileSummaryComparer *this,ModalFlags *param_1,Graphics *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_04a4c4d4(0x28);
  iVar3 = FUN_04a4c4d4(0x5a);
  iVar1 = *(int *)(this + 0x54);
  iVar4 = FUN_04a4c4d4(10);
  Sexy::Insets::Insets(aIStack_28,0,iVar2,*(int *)(this + 0x50),(iVar1 - iVar3) + iVar4);
  Sexy::Insets::Insets(aIStack_18,aIStack_28);
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7c250);
  Draw9SliceImage(param_2,aIStack_18,uVar5);
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileSummaryComparer::Draw(Sexy::Graphics*) */

void __thiscall ProfileSummaryComparer::Draw(ProfileSummaryComparer *this,Graphics *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  Image *local_40;
  wstring awStack_28 [8];
  undefined1 auStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  FUN_05478178(awStack_28,L"[SUMMARY_TITLE]",aIStack_18);
  nop();
  uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_34_ThickOutline);
  iVar4 = *(int *)(this + 0x148);
  iVar3 = *(int *)(this + 0x14c);
  iVar1 = *(int *)(this + 0x50);
  TodStringTranslate(awStack_28);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_DangerRoom_LargeLabel);
  Sexy::PrimeTypeface::DrawString_Line
            ((PrimeTypeface *)(float)iVar4,(float)iVar3,(float)iVar1,uVar2,param_1,auStack_20,1,
             aIStack_18,0);
  FUN_05476c50(auStack_20);
  drawLocalSummary(this,param_1);
  drawCloudSummary(this,param_1);
  FUN_05478178(aIStack_18,L"[SUMMARY_NEWER_DATA_RECOMMENDATION]",auStack_20);
  nop();
  if (this[0x1b0] == (ProfileSummaryComparer)0x0) {
    local_40 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7c278);
    iVar1 = FUN_04a4c4d4(5);
    iVar4 = *(int *)(this + 0x160);
    iVar3 = *(int *)(this + 0x1a8);
  }
  else {
    local_40 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7c278);
    iVar1 = FUN_04a4c4d4(5);
    iVar4 = *(int *)(this + 0x160);
    iVar3 = *(int *)(this + 0x1ac);
  }
  Sexy::Graphics::DrawImage
            (param_1,local_40,(int)((float)(iVar4 + iVar3) + (float)*(int *)(this + 0x158) * 0.8),
             *(int *)(this + 0x164) - iVar1);
  FUN_05476c50(aIStack_18);
  FUN_05476c50(awStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

