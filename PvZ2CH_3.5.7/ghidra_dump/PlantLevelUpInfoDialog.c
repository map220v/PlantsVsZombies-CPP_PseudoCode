// Class: PlantLevelUpInfoDialog


/* PlantLevelUpInfoDialog::CloseChildDialog() */

void PlantLevelUpInfoDialog::CloseChildDialog(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  return;
}


/* PlantLevelUpInfoDialog::onGetGachaInfo(S2C_GachaInfo*) */

void PlantLevelUpInfoDialog::onGetGachaInfo(S2C_GachaInfo *param_1)

{
  LawnApp::ShowCoinStore(gLawnApp,4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLevelUpInfoDialog::~PlantLevelUpInfoDialog() */

void __thiscall PlantLevelUpInfoDialog::~PlantLevelUpInfoDialog(PlantLevelUpInfoDialog *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  *(undefined **)(this + 0xd8) = &DAT_0683e890;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0683e560;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Material");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)(this + 0x150));
  FUN_05476c50(this + 0x140);
  FUN_05476c50(this + 0x120);
  std::string::~string((string *)(this + 0x118));
  std::string::~string((string *)(this + 0x110));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantLevelUpInfoDialog::~PlantLevelUpInfoDialog() */

void __thiscall PlantLevelUpInfoDialog::~PlantLevelUpInfoDialog(PlantLevelUpInfoDialog *this)

{
  ~PlantLevelUpInfoDialog(this);
  AK::FreeHook(this);
  return;
}


/* PlantLevelUpInfoDialog::CheckPlantIsInActivityLevel(FestivalGameMode&) */

bool __thiscall
PlantLevelUpInfoDialog::CheckPlantIsInActivityLevel
          (PlantLevelUpInfoDialog *this,FestivalGameMode *param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ActivityConfig *this_00;
  
  lVar3 = LawnApp::GetActivityConfig();
  bVar1 = false;
  if (lVar3 != 0) {
    this_00 = (ActivityConfig *)LawnApp::GetActivityConfig();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0))
    ;
    iVar2 = ActivityConfig::GetCurrentPlantPieceComeFrom(this_00,(string *)(lVar3 + 0x80),false);
    bVar1 = iVar2 != -1;
    *(int *)param_1 = iVar2;
  }
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLevelUpInfoDialog::InitDialog() */

void __thiscall PlantLevelUpInfoDialog::InitDialog(PlantLevelUpInfoDialog *this)

{
  ButtonListener *pBVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  PVZ2UIButton *pPVar17;
  LotteryResultProgressBar *pLVar18;
  SalesProgressBar *pSVar19;
  PVZ2UIButton *pPVar20;
  undefined8 uVar21;
  WorldDataManager *this_00;
  wchar_t *pwVar22;
  long *plVar23;
  code *pcVar24;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  lVar16 = gLawnApp;
  local_8 = ___stack_chk_guard;
  pcVar24 = *(code **)(*(long *)this + 0x198);
  iVar4 = FUN_043924ac(0x226);
  iVar2 = *(int *)(lVar16 + 0xd4);
  pBVar1 = (ButtonListener *)(this + 0xd8);
  iVar5 = FUN_043924ac(0x136);
  iVar9 = *(int *)(lVar16 + 0xd8);
  lVar16 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00520);
  iVar12 = *(int *)(lVar16 + 0x3c);
  uVar6 = FUN_043924ac(0x226);
  iVar7 = FUN_043924ac(0x136);
  lVar16 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00520);
  iVar13 = *(int *)(lVar16 + 0x3c);
  iVar8 = FUN_043924ac(100);
  (*pcVar24)(this,(int)(((float)iVar2 - (float)iVar4) * 0.5),
             (int)((((float)iVar9 - (float)iVar5) - (float)iVar12) * 0.38),uVar6,
             iVar7 + iVar13 + iVar8);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar17 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar17,0,pBVar1,awStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0xf0) = pPVar17;
  FUN_05476c50(awStack_78);
  nop();
  pPVar17 = *(PVZ2UIButton **)(this + 0xf0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b00520,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b00548,1);
  PVZ2UIButton::SetDialogStates(pPVar17,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  plVar23 = *(long **)(this + 0xf0);
  pcVar24 = *(code **)(*plVar23 + 0x198);
  iVar9 = FUN_043924ac(0x226);
  lVar16 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00520);
  iVar2 = *(int *)(lVar16 + 0x38);
  uVar6 = FUN_043924ac(0x2a);
  pLVar18 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00520);
  uVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
  pSVar19 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00520);
  uVar11 = SalesProgressBar::GetCurrentLevel(pSVar19);
  (*pcVar24)(plVar23,(int)((float)iVar9 - (float)iVar2 * 0.7),uVar6,uVar10,uVar11);
  iVar2 = *(int *)(*(long *)(this + 0xf0) + 0x54);
  iVar9 = *(int *)(*(long *)(this + 0xf0) + 0x4c);
  iVar12 = FUN_043924ac(0x14);
  iVar13 = FUN_043924ac(0x136);
  iVar4 = FUN_043924ac(0);
  pSVar19 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00520);
  iVar5 = SalesProgressBar::GetCurrentLevel(pSVar19);
  iVar7 = FUN_043924ac(4);
  iVar8 = FUN_043924ac(0x226);
  pSVar19 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00520);
  iVar14 = SalesProgressBar::GetCurrentLevel(pSVar19);
  iVar15 = FUN_043924ac(9);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar4,iVar5 + iVar7,iVar8,
             ((iVar9 + iVar2 + iVar12 + iVar13) - iVar14) + iVar15);
  pcVar24 = *(code **)(*(long *)this + 0x60);
  *(undefined8 *)(this + 0x128) = local_40;
  *(undefined8 *)(this + 0x130) = uStack_38;
  (*pcVar24)(this,*(undefined8 *)(this + 0xf0));
  lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
  if ((*(char *)(lVar16 + 0xe0) != '\0') || (this[0x148] != (PlantLevelUpInfoDialog)0x0)) {
    FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar17 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton(pPVar17,1,pBVar1,awStack_78,(Color *)&local_40);
    *(PVZ2UIButton **)(this + 0xf8) = pPVar17;
    FUN_05476c50(awStack_78);
    nop();
    pPVar17 = *(PVZ2UIButton **)(this + 0xf8);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b00258,1);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b00168,1);
    PVZ2UIButton::SetDialogStates(pPVar17,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
    iVar2 = *(int *)(this + 0x50);
    plVar23 = *(long **)(this + 0xf8);
    pcVar24 = *(code **)(*plVar23 + 0x198);
    iVar12 = FUN_043924ac(0x50);
    iVar9 = *(int *)(this + 0x134);
    pLVar18 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00258);
    uVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
    pSVar19 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00258);
    uVar10 = SalesProgressBar::GetCurrentLevel(pSVar19);
    (*pcVar24)(plVar23,(int)((float)iVar2 * 0.6),(int)((float)iVar12 + (float)iVar9 * 0.5),uVar6,
               uVar10);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf8));
  }
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar17 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar17,3,pBVar1,awStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0x100) = pPVar17;
  FUN_05476c50(awStack_78);
  nop();
  pPVar17 = *(PVZ2UIButton **)(this + 0x100);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b00258,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b00168,1);
  PVZ2UIButton::SetDialogStates(pPVar17,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  plVar23 = *(long **)(this + 0x100);
  iVar2 = *(int *)(this + 0x50);
  pcVar24 = *(code **)(*plVar23 + 0x198);
  iVar12 = FUN_043924ac(0x28);
  iVar9 = *(int *)(this + 0x134);
  pLVar18 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00258);
  uVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
  pSVar19 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00258);
  uVar10 = SalesProgressBar::GetCurrentLevel(pSVar19);
  (*pcVar24)(plVar23,(int)((float)iVar2 * 0.7),(int)((float)iVar12 + (float)iVar9 * 0.5),uVar6,
             uVar10);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x100));
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar17 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar17,4,pBVar1,awStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0x108) = pPVar17;
  FUN_05476c50(awStack_78);
  nop();
  pPVar17 = *(PVZ2UIButton **)(this + 0x108);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b00258,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b00168,1);
  PVZ2UIButton::SetDialogStates(pPVar17,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  plVar23 = *(long **)(this + 0x108);
  iVar2 = *(int *)(this + 0x50);
  pcVar24 = *(code **)(*plVar23 + 0x198);
  iVar12 = FUN_043924ac(0x50);
  iVar9 = *(int *)(this + 0x134);
  pLVar18 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00258);
  uVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
  pSVar19 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00258);
  uVar10 = SalesProgressBar::GetCurrentLevel(pSVar19);
  (*pcVar24)(plVar23,(int)((float)iVar2 * 0.6),(int)((double)iVar12 + (double)iVar9 * 0.5),uVar6,
             uVar10);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x108));
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar17 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar17,5,pBVar1,awStack_78,(Color *)&local_40);
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b00258,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b00168,1);
  PVZ2UIButton::SetDialogStates(pPVar17,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  iVar2 = *(int *)(this + 0x50);
  pcVar24 = *(code **)(*(long *)pPVar17 + 0x198);
  iVar12 = FUN_043924ac(0xa0);
  iVar9 = *(int *)(this + 0x134);
  pLVar18 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00258);
  uVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
  pSVar19 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00258);
  uVar10 = SalesProgressBar::GetCurrentLevel(pSVar19);
  (*pcVar24)(pPVar17,(int)((float)iVar2 * 0.6),(int)((float)iVar12 + (float)iVar9 * 0.5),uVar6,
             uVar10);
  (**(code **)(*(long *)this + 0x60))(this,pPVar17);
  (**(code **)(*(long *)pPVar17 + 0x158))(pPVar17,0);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar20 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar20,2,pBVar1,awStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0xe8) = pPVar20;
  FUN_05476c50(awStack_78);
  nop();
  pPVar20 = *(PVZ2UIButton **)(this + 0xe8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06affc58,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b009e0,3);
  PVZ2UIButton::SetDialogStates(pPVar20,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  plVar23 = *(long **)(this + 0xe8);
  pcVar24 = *(code **)(*plVar23 + 0x198);
  iVar9 = FUN_043924ac(0x226);
  pLVar18 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affeb8);
  iVar12 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
  iVar13 = FUN_043924ac(0x136);
  lVar16 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00520);
  iVar2 = *(int *)(lVar16 + 0x3c);
  pSVar19 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affeb8);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar19);
  iVar5 = FUN_043924ac(0x1e);
  pLVar18 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affeb8);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
  pSVar19 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affeb8);
  uVar6 = SalesProgressBar::GetCurrentLevel(pSVar19);
  (*pcVar24)(plVar23,(int)(((float)iVar9 - (float)iVar12 * 1.3) * 0.5),
             (int)(((float)(iVar13 + iVar2) + (float)iVar4 * 0.1) - (float)iVar5),
             (int)((float)iVar7 * 1.3),uVar6);
  pPVar20 = *(PVZ2UIButton **)(this + 0xe8);
  TodStringTranslate(L"[PLANT_INFO_RETURN]");
  uVar21 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22);
  PVZ2UIButton::AddText(pPVar20,(Insets *)&local_40,uVar21,0);
  FUN_05476c50((Insets *)&local_40);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
  cVar3 = CheckPlantIsInActivityLevel(this,this + 0x180);
  plVar23 = *(long **)(this + 0x108);
  if (cVar3 == '\0') {
    (**(code **)(*plVar23 + 0x158))(plVar23);
  }
  else {
    lVar16 = *plVar23;
    this[0x139] = (PlantLevelUpInfoDialog)0x0;
    (**(code **)(lVar16 + 0x158))(plVar23);
  }
  switch(*(undefined4 *)(this + 0x180)) {
  case 0:
    pwVar22 = L"[WORLDMAP_YETI_EVENT_ALERT_HEADER_2]";
    break;
  case 1:
    pwVar22 = L"[FESTIVALGAMEMODE_GARGANTUARCRISIS_TITLE]";
    break;
  case 2:
    pwVar22 = L"[ZOMBIE_ZOMBOSSMECH_EGYPT]";
    break;
  case 3:
    pwVar22 = L"[FESTIVALGAMEMODE_CAISHEN_TITLE]";
    break;
  default:
    goto switchD_04395514_default;
  }
  TodStringTranslate(pwVar22);
  FUN_054766c8(this + 0x120,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
switchD_04395514_default:
  if (this[0x138] != (PlantLevelUpInfoDialog)0x0) {
    this_00 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
    lVar16 = WorldDataManager::FindEventByLevelName(this_00,(string *)(this + 0x110));
    if (lVar16 == 0) {
      (**(code **)(**(long **)(this + 0x100) + 0x158))(*(long **)(this + 0x100),0);
      goto LAB_04395574;
    }
    cVar3 = FUN_04391b88(*(undefined1 *)(lVar16 + 0xf1));
    if (cVar3 != '\0') goto LAB_04395574;
  }
  (**(code **)(**(long **)(this + 0x100) + 0x158))(*(long **)(this + 0x100));
LAB_04395574:
  if (this[0x13b] != (PlantLevelUpInfoDialog)0x0) {
    lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
    Sexy::ToWString((string *)(lVar16 + 0xe8));
    TodStringTranslate(awStack_78);
    FUN_054766c8(this + 0x140,(Insets *)&local_40);
    FUN_05476c50((Insets *)&local_40);
    FUN_05476c50(awStack_78);
    plVar23 = *(long **)(this + 0xf8);
    if ((plVar23 != (long *)0x0) && (this[0x148] == (PlantLevelUpInfoDialog)0x0)) {
      (**(code **)(*plVar23 + 0x188))(plVar23,1);
      (**(code **)(**(long **)(this + 0xf8) + 0x158))(*(long **)(this + 0xf8),0);
    }
    plVar23 = *(long **)(this + 0x100);
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x188))(plVar23,1);
      (**(code **)(**(long **)(this + 0x100) + 0x158))(*(long **)(this + 0x100),0);
    }
    plVar23 = *(long **)(this + 0x108);
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x188))(plVar23,1);
      (**(code **)(**(long **)(this + 0x108) + 0x158))(*(long **)(this + 0x108),0);
    }
    (**(code **)(*(long *)pPVar17 + 0x188))(pPVar17,1);
    (**(code **)(*(long *)pPVar17 + 0x158))(pPVar17,0);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLevelUpInfoDialog::PlantLevelUpInfoDialog(Sexy::RtWeakPtr<MagentoProductProps>, bool, bool,
   int) */

void __thiscall
PlantLevelUpInfoDialog::PlantLevelUpInfoDialog
          (PlantLevelUpInfoDialog *this,RtWeakPtr<Sexy::ResourceInfo> *param_2,
          PlantLevelUpInfoDialog param_3,PlantLevelUpInfoDialog param_4,int param_5)

{
  undefined *puVar1;
  LawnApp *pLVar2;
  long lVar3;
  size_t __n;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  string asStack_40 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  long local_8;
  
  __n = (size_t)(byte)param_3;
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_0683e560;
  *(undefined **)(this + 0xd8) = &DAT_0683e890;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xe0));
  Set8BytesTo0((string *)(this + 0x110));
  Set8BytesTo0((string *)(this + 0x118));
  FUN_05476574(this + 0x120);
  Sexy::Insets::Insets((Insets *)(this + 0x128));
  FUN_05476574(this + 0x140);
  GAME_ITEM_INFO::GAME_ITEM_INFO((GAME_ITEM_INFO *)(this + 0x150));
  this[0x59] = (PlantLevelUpInfoDialog)0x0;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xe0),(RtWeakPtr *)param_2);
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  std::string::append((string *)(this + 0x110),"",__n);
  std::string::append((string *)(this + 0x118),"",__n);
  FUN_054772c4(this + 0x120,&DAT_056f11a8);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  this[0x13b] = *(PlantLevelUpInfoDialog *)(lVar3 + 0xe1);
  FUN_054772c4(this + 0x140,&DAT_056f11a8);
  this[0x138] = (PlantLevelUpInfoDialog)0x0;
  this[0x139] = (PlantLevelUpInfoDialog)0x0;
  this[0x13a] = param_3;
  this[0x148] = param_4;
  *(int *)(this + 0x14c) = param_5;
  if (param_4 != (PlantLevelUpInfoDialog)0x0) {
    GetGameItemInfo(param_5,0x100,0);
    GAME_ITEM_INFO::operator=((GAME_ITEM_INFO *)(this + 0x150),(GAME_ITEM_INFO *)&local_38);
    GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_38);
  }
  *(undefined4 *)(this + 0x180) = 0xffffffff;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGetGachaInfo);
  local_60 = local_28;
  local_70 = local_38;
  uStack_68 = uStack_30;
  MessageRouter::
  Subscribe<S2C_GachaInfo*,Sexy::CBMemberTranslatorX<PlantLevelUpInfoDialog,void(PlantLevelUpInfoDialog::*)(S2C_GachaInfo*)>>
            ((MessageRouter *)puVar1,Message::GetGachaInfo,&local_70);
  pLVar2 = gLawnApp;
  std::string::string(asStack_40,"UI_Fragment_Pieces");
  LawnApp::LoadGroup(pLVar2,asStack_40);
  std::string::~string(asStack_40);
  nop();
  pLVar2 = gLawnApp;
  std::string::string(asStack_40,"UI_Fragment_Material");
  LawnApp::LoadGroup(pLVar2,asStack_40);
  std::string::~string(asStack_40);
  nop();
  InitDialog(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLevelUpInfoDialog::GetCurrentPlantPieceLevel(std::string const&) */

void __thiscall
PlantLevelUpInfoDialog::GetCurrentPlantPieceLevel(PlantLevelUpInfoDialog *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  RtObject *this_00;
  PlantPieceLevelData *this_01;
  undefined8 *puVar4;
  long lVar5;
  string *psVar6;
  long lVar7;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x49);
  bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
  if (bVar1) {
    do {
      Sexy::RtDbTable::Iterator::operator*(aIStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
      Sexy::RtId::~RtId(aRStack_30);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
      if (bVar1) {
        this_00 = (RtObject *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
        this_01 = Sexy::RtObject::Cast<PlantPieceLevelData>(this_00);
        if (this_01 != (PlantPieceLevelData *)0x0) {
          puVar4 = (undefined8 *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_end((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this_01);
          uVar3 = *puVar4;
          lVar5 = FUN_04391bec(uVar3,puVar4[1]);
          lVar7 = 0;
          while (lVar7 != lVar5) {
            psVar6 = (string *)FUN_04391c00(uVar3,lVar7);
            cVar2 = std::operator==(psVar6,param_1);
            lVar7 = lVar7 + 1;
            if (cVar2 != '\0') {
              param_1 = psVar6 + 8;
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
              goto LAB_043965f4;
            }
          }
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::operator++(aIStack_28,0);
      bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    } while (bVar1);
  }
LAB_043965f4:
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLevelUpInfoDialog::GetCurrentPlantPieceLevelTextContent(std::string const&) */

void __thiscall
PlantLevelUpInfoDialog::GetCurrentPlantPieceLevelTextContent
          (PlantLevelUpInfoDialog *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  RtObject *this_00;
  PlantPieceLevelData *this_01;
  undefined8 *puVar4;
  long lVar5;
  string *psVar6;
  long lVar7;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x49);
  bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
  if (bVar1) {
    do {
      Sexy::RtDbTable::Iterator::operator*(aIStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
      Sexy::RtId::~RtId(aRStack_30);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
      if (bVar1) {
        this_00 = (RtObject *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
        this_01 = Sexy::RtObject::Cast<PlantPieceLevelData>(this_00);
        if (this_01 != (PlantPieceLevelData *)0x0) {
          puVar4 = (undefined8 *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_end((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this_01);
          uVar3 = *puVar4;
          lVar5 = FUN_04391bec(uVar3,puVar4[1]);
          lVar7 = 0;
          while (lVar7 != lVar5) {
            psVar6 = (string *)FUN_04391c00(uVar3,lVar7);
            cVar2 = std::operator==(psVar6,param_1);
            lVar7 = lVar7 + 1;
            if (cVar2 != '\0') {
              param_1 = psVar6 + 0x10;
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
              goto LAB_04396750;
            }
          }
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::operator++(aIStack_28,0);
      bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    } while (bVar1);
  }
LAB_04396750:
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


/* PlantLevelUpInfoDialog::ButtonPress(int) */

void PlantLevelUpInfoDialog::ButtonPress(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Press");
  return;
}


/* non-virtual thunk to PlantLevelUpInfoDialog::ButtonPress(int) */

void __thiscall PlantLevelUpInfoDialog::ButtonPress(PlantLevelUpInfoDialog *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLevelUpInfoDialog::ButtonDepress(int) */

void __thiscall PlantLevelUpInfoDialog::ButtonDepress(PlantLevelUpInfoDialog *this,int param_1)

{
  GameStateMgr *pGVar1;
  LawnApp *this_00;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  WorldDataManager *pWVar6;
  long lVar7;
  PVZ2UIDialog *this_01;
  undefined1 auStack_68 [8];
  wstring awStack_60 [8];
  undefined1 auStack_58 [8];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar5,"Play_UI_Button_Click_Release");
  switch(param_1) {
  case 0:
  case 2:
    LawnApp::KillPlantLevelUpInfoDialog(gLawnApp);
    break;
  case 1:
    LawnApp::KillPlantLevelUpCheckDialog(gLawnApp);
    LawnApp::KillPlantLevelUpInfoDialog(gLawnApp);
    pGVar1 = gGameStateMgr;
    if (this[0x148] == (PlantLevelUpInfoDialog)0x0) {
      std::string::string(asStack_50,"Gacha");
      GameStateMgr::ShowStore(pGVar1,asStack_50,5,5);
      std::string::~string(asStack_50);
      nop();
    }
    else {
      std::string::string(asStack_50,"OpenEndlessMedalShopUI");
      Cpp2Lua(asStack_50);
      std::string::~string(asStack_50);
      nop();
    }
    break;
  case 3:
    LawnApp::KillPlantLevelUpInfoDialog(gLawnApp);
    LawnApp::KillPlantLevelUpCheckDialog(gLawnApp);
    pWVar6 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
    lVar7 = WorldDataManager::FindEventByLevelName(pWVar6,(string *)(this + 0x110));
    if (lVar7 != 0) {
      GameStateMgr::ShowWorldMapWithDestination(gGameStateMgr,lVar7,5,5);
    }
    break;
  case 4:
    FUN_05476574(awStack_60);
    pWVar6 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
    std::string::string(asStack_50,"egypt5");
    lVar7 = WorldDataManager::FindEventByLevelName(pWVar6,asStack_50);
    std::string::~string(asStack_50);
    nop();
    cVar2 = FUN_04391b8c(*(undefined1 *)(lVar7 + 0xf2));
    if (cVar2 == '\0') {
      TodStringTranslate(L"[SPECIAL_LEVEL_ACITVATED]");
      FUN_054766c8(awStack_60,asStack_50);
      FUN_05476c50(asStack_50);
      LawnApp::IsNetworkModuleOK();
LAB_04396f54:
      iVar3 = FUN_043924ac(0x17c);
      this_00 = gLawnApp;
      iVar4 = FUN_043924ac(0xf0);
      this_01 = (PVZ2UIDialog *)
                LawnApp::ShowPVZ2Dialog(this_00,(float)iVar3,(float)iVar4,(PVZ2UIDialog *)0x0);
      if (this_01 != (PVZ2UIDialog *)0x0) {
        FUN_05478178(auStack_58,L"[CONTINUE_BUTTON]",auStack_68);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,CloseChildDialog);
        Sexy::Delegate0::Delegate0<PlantLevelUpInfoDialog,void(PlantLevelUpInfoDialog::*)()>
                  (aDStack_38,asStack_50);
        PVZ2UIDialog::AddButton(this_01,auStack_58,aDStack_38,0);
        FUN_05476c50(auStack_58);
        nop();
        PVZ2UIDialog::SetBackgroundDarken(this_01,true,0.5);
        PVZ2UIDialog::SetHeaderLabel(this_01,awStack_60);
      }
    }
    else {
      cVar2 = LawnApp::IsNetworkModuleOK();
      if (cVar2 == '\0') {
        TodStringTranslate(L"[NET_WORK_FAILD]");
        FUN_054766c8(awStack_60,asStack_50);
        FUN_05476c50(asStack_50);
        goto LAB_04396f54;
      }
      LawnApp::SetOpenActivityGameUI(gLawnApp,*(undefined4 *)(this + 0x180));
      LawnApp::KillPlantLevelUpCheckDialog(gLawnApp);
      LawnApp::KillPlantLevelUpInfoDialog(gLawnApp);
      GameStateMgr::ShowWorldMap(gGameStateMgr,5,5);
    }
    FUN_05476c50(awStack_60);
    break;
  case 5:
    LawnApp::KillPlantLevelUpCheckDialog(gLawnApp);
    LawnApp::KillPlantLevelUpInfoDialog(gLawnApp);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to PlantLevelUpInfoDialog::ButtonDepress(int) */

void __thiscall PlantLevelUpInfoDialog::ButtonDepress(PlantLevelUpInfoDialog *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLevelUpInfoDialog::Draw(Sexy::Graphics*) */

void __thiscall PlantLevelUpInfoDialog::Draw(PlantLevelUpInfoDialog *this,Graphics *param_1)

{
  PlantLevelUpInfoDialog PVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  Image *pIVar11;
  LotteryResultProgressBar *pLVar12;
  SalesProgressBar *pSVar13;
  string *psVar14;
  SeedPacketUtils *this_00;
  long lVar15;
  RtWeakPtr *this_01;
  ResourceInfo *pRVar16;
  string *extraout_x1;
  undefined1 auStack_60 [8];
  Sexy aSStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  Insets aIStack_48 [16];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_1,0.5);
  Sexy::Graphics::ClearClipRect(param_1);
  iVar3 = FUN_043924ac(0xd);
  iVar7 = *(int *)(this + 0x128);
  iVar4 = FUN_043924ac(9);
  iVar8 = *(int *)(this + 300);
  iVar5 = FUN_043924ac(0x1a);
  iVar9 = *(int *)(this + 0x130);
  iVar6 = FUN_043924ac(0x17);
  Sexy::Insets::Insets
            (aIStack_48,iVar3 + iVar7,iVar4 + iVar8,iVar9 - iVar5,*(int *)(this + 0x134) - iVar6);
  Sexy::Insets::Insets((Insets *)&local_18,(Insets *)(this + 0x128));
  uVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00230);
  Draw9SliceImage(param_1,(Insets *)&local_18,uVar10);
  Sexy::Insets::Insets((Insets *)&local_38,(Insets *)(this + 0x128));
  iVar7 = FUN_043924ac(0xf);
  local_38 = local_38 + iVar7;
  iVar7 = FUN_043924ac(0xf);
  iVar7 = iVar7 + local_34;
  local_34 = iVar7;
  iVar8 = FUN_043924ac(0x1e);
  iVar8 = local_30 - iVar8;
  local_30 = iVar8;
  iVar9 = FUN_043924ac(0x46);
  local_2c = local_2c - iVar9;
  iVar9 = FUN_043924ac(0);
  iVar3 = FUN_043924ac(0x50);
  Sexy::Insets::Insets((Insets *)&local_28,iVar9,iVar7 + iVar9,iVar8,iVar3);
  FUN_05476574(auStack_60);
  if (this[0x148] == (PlantLevelUpInfoDialog)0x0) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
    MagentoProductProps::GetLocalizedShortDescription();
    Sexy::UTF8StringToWString(aSStack_58,extraout_x1);
    TodStringTranslate((wstring *)aRStack_50);
    FUN_054766c8(auStack_60,(Insets *)&local_18);
    FUN_05476c50((Insets *)&local_18);
    FUN_05476c50((wstring *)aRStack_50);
    std::string::~string((string *)aSStack_58);
    TodStringTranslate(L"[PIECE]");
    thunk_FUN_05477668(auStack_60,(Insets *)&local_18);
    FUN_05476c50((Insets *)&local_18);
  }
  else {
    thunk_FUN_05477b9c(auStack_60,this + 0x178);
  }
  uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_34_HardShadow);
  Sexy::Color::Color((Color *)&local_18,1);
  WriteWordInRect(param_1,auStack_60,(Insets *)&local_28,uVar10,(Insets *)&local_18,2,1);
  if (this[0x13a] != (PlantLevelUpInfoDialog)0x0) {
    iVar7 = FUN_043924ac(0x55);
    local_28 = CONCAT44(local_28._4_4_ - iVar7,(int)local_28);
    TodStringTranslate(L"[PIECE_NOTICE_ON_LEVEL_UP]");
    uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_34_HardShadow);
    Sexy::Color::Color((Color *)&local_18,1);
    WriteWordInRect(param_1,aRStack_50,(Insets *)&local_28,uVar10,(Insets *)&local_18,2,1);
    FUN_05476c50(aRStack_50);
  }
  iVar7 = *(int *)(this + 0x50);
  iVar8 = FUN_043924ac(0x50);
  Sexy::Insets::Insets
            ((Insets *)&local_18,(int)((float)iVar7 * 0.33),(int)((float)local_2c * 0.65),
             (int)((float)iVar7 * 0.6),iVar8);
  local_28 = local_18;
  uStack_20 = uStack_10;
  TodStringTranslate(L"[GET_IT_BY_THE_WAY]");
  uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
  Sexy::Color::Color((Color *)&local_18,0);
  WriteWordInRect(param_1,aRStack_50,(Insets *)&local_28,uVar10,(Insets *)&local_18,0,1);
  FUN_05476c50(aRStack_50);
  iVar7 = FUN_043924ac(10);
  local_28 = CONCAT44(local_28._4_4_,(int)local_28 + iVar7);
  if (this[0x148] == (PlantLevelUpInfoDialog)0x0) {
    if (this[0x13b] == (PlantLevelUpInfoDialog)0x0) {
      if (this[0x138] == (PlantLevelUpInfoDialog)0x0) {
        PVar1 = this[0x139];
      }
      else {
        iVar7 = FUN_043924ac(0x28);
        local_28 = CONCAT44((int)((float)iVar7 + (float)*(int *)(this + 0x134) * 0.5),(int)local_28)
        ;
        Sexy::ToWString((string *)(this + 0x118));
        TodStringTranslate((wstring *)aSStack_58);
        uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
        Sexy::Color::Color((Color *)&local_18,0);
        WriteWordInRect(param_1,aRStack_50,(Insets *)&local_28,uVar10,(Insets *)&local_18,0,1);
        FUN_05476c50(aRStack_50);
        FUN_05476c50((wstring *)aSStack_58);
        PVar1 = this[0x139];
      }
      if (PVar1 == (PlantLevelUpInfoDialog)0x0) {
        lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
        if (*(char *)(lVar15 + 0xe0) != '\0') {
          iVar7 = FUN_043924ac(0x50);
          local_28 = CONCAT44((int)((float)iVar7 + (float)*(int *)(this + 0x134) * 0.5),
                              (int)local_28);
          TodStringTranslate(L"[GEM_BOX]");
          uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
          Sexy::Color::Color((Color *)&local_18,0);
          WriteWordInRect(param_1,aRStack_50,(Insets *)&local_28,uVar10,(Insets *)&local_18,0,1);
          FUN_05476c50(aRStack_50);
        }
      }
      else {
        iVar7 = FUN_043924ac(0x50);
        local_28 = CONCAT44((int)((float)iVar7 + (float)*(int *)(this + 0x134) * 0.5),(int)local_28)
        ;
        uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
        Sexy::Color::Color((Color *)&local_18,0);
        WriteWordInRect(param_1,this + 0x120,(Insets *)&local_28,uVar10,(Insets *)&local_18,0,1);
      }
    }
    else {
      iVar7 = FUN_043924ac(0x3c);
      local_28 = CONCAT44((int)((float)iVar7 + (float)*(int *)(this + 0x134) * 0.5),(int)local_28);
      uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
      Sexy::Color::Color((Color *)&local_18,0);
      WriteWordInRect(param_1,this + 0x140,(Insets *)&local_28,uVar10,(Insets *)&local_18,0,1);
    }
    iVar8 = local_38;
    iVar7 = FUN_043924ac(0xf);
    iVar7 = iVar8 + iVar7;
    iVar9 = FUN_043924ac(0x96);
    iVar8 = iVar8 + iVar9;
    pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afff68);
    Sexy::Graphics::DrawImage(param_1,pIVar11,iVar7,iVar8);
    pLVar12 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afff68);
    iVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
    pLVar12 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affe18);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
    iVar7 = iVar7 + (iVar9 - iVar3) / 2;
    pSVar13 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afff68);
    iVar9 = SalesProgressBar::GetCurrentLevel(pSVar13);
    pSVar13 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affe18);
    iVar3 = SalesProgressBar::GetCurrentLevel(pSVar13);
    iVar8 = iVar8 + (iVar9 - iVar3) / 2;
    psVar14 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar14);
    this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
    this_01 = (RtWeakPtr *)
              SeedPacketUtils::GetPlantPiecePacketRenderData(this_00,(string *)(lVar15 + 8));
    pRVar16 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01 + 0x170);
    Sexy::Insets::Insets
              ((Insets *)&local_18,iVar7 + *(int *)(this_01 + 0x30),iVar8 + *(int *)(this_01 + 0x34)
               ,*(int *)(this_01 + 0x28),*(int *)(this_01 + 0x2c));
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar16,(TRect *)&local_18,(TRect *)(this_01 + 0x20))
    ;
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
    if (bVar2) {
      lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      pRVar16 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar15 + 0x48));
      Sexy::Graphics::DrawImage
                (param_1,(Image *)pRVar16,iVar7 + *(int *)(this_01 + 0x18),
                 iVar8 + *(int *)(this_01 + 0x1c),(TRect *)(this_01 + 8));
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  }
  else {
    iVar7 = FUN_043924ac(0x78);
    local_28 = CONCAT44((int)((float)iVar7 + (float)*(int *)(this + 0x134) * 0.5),(int)local_28);
    TodStringTranslate(L"[PLANT_LEVEL_UP_GET_SPECIAL_PIECE]");
    uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
    Sexy::Color::Color((Color *)&local_18,0);
    WriteWordInRect(param_1,aRStack_50,(Insets *)&local_28,uVar10,(Insets *)&local_18,0,1);
    FUN_05476c50(aRStack_50);
    iVar8 = local_38;
    iVar7 = FUN_043924ac(0xf);
    iVar7 = iVar8 + iVar7;
    iVar9 = FUN_043924ac(0x96);
    iVar8 = iVar8 + iVar9;
    pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afff68);
    Sexy::Graphics::DrawImage(param_1,pIVar11,iVar7,iVar8);
    pLVar12 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afff68);
    iVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
    pLVar12 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affe18);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
    pSVar13 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afff68);
    iVar4 = SalesProgressBar::GetCurrentLevel(pSVar13);
    pSVar13 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affe18);
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar13);
    pIVar11 = (Image *)StringHelper::ToImage((string *)(this + 0x170),false);
    if (pIVar11 != (Image *)0x0) {
      Sexy::Graphics::DrawImage
                (param_1,pIVar11,iVar7 + (iVar9 - iVar3) / 2,iVar8 + (iVar4 - iVar5) / 2);
    }
  }
  nop();
  FUN_05476c50(auStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

