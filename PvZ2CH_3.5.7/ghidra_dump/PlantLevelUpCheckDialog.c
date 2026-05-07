// Class: PlantLevelUpCheckDialog


/* PlantLevelUpCheckDialog::LevelUpCancel() */

void PlantLevelUpCheckDialog::LevelUpCancel(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLevelUpCheckDialog::~PlantLevelUpCheckDialog() */

void __thiscall PlantLevelUpCheckDialog::~PlantLevelUpCheckDialog(PlantLevelUpCheckDialog *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  *(undefined **)(this + 0xd8) = &DAT_0683f2b0;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0683ef80;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x110) = 0;
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
  GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)(this + 400));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x108));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x100));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf8));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantLevelUpCheckDialog::~PlantLevelUpCheckDialog() */

void __thiscall PlantLevelUpCheckDialog::~PlantLevelUpCheckDialog(PlantLevelUpCheckDialog *this)

{
  ~PlantLevelUpCheckDialog(this);
  AK::FreeHook(this);
  return;
}


/* PlantLevelUpCheckDialog::LevelUpOkBook() */

void __thiscall PlantLevelUpCheckDialog::LevelUpOkBook(PlantLevelUpCheckDialog *this)

{
  undefined4 uVar1;
  NameMapperBase *this_00;
  long lVar2;
  NetworkMgr *this_01;
  long *plVar3;
  
  this_00 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf8));
  uVar1 = NameMapperBase::GetIdForName(this_00,(string *)(lVar2 + 0x80));
  this_01 = (NetworkMgr *)NetworkMgr::Instance();
  plVar3 = (long *)NetworkMgr::GetNewNetWorkProcess(this_01);
  (**(code **)(*plVar3 + 0x1c0))(plVar3,uVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLevelUpCheckDialog::MouseDown(int, int, int) */

void __thiscall
PlantLevelUpCheckDialog::MouseDown
          (PlantLevelUpCheckDialog *this,int param_1,int param_2,int param_3)

{
  LawnApp *pLVar1;
  char cVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = Sexy::TRect<int>::Contains((TRect<int> *)(this + 0x160),param_1,param_2);
  pLVar1 = gLawnApp;
  if (cVar2 == '\0') {
    if ((*(int *)(this + 0x1c0) < 1) ||
       (cVar2 = Sexy::TRect<int>::Contains((TRect<int> *)(this + 0x170),param_1,param_2),
       pLVar1 = gLawnApp, cVar2 == '\0')) {
      Sexy::Widget::MouseDown((Widget *)this,param_1,param_2,param_3);
    }
    else {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0xf8));
      LawnApp::ShowPlantLevelUpInfoDialog(pLVar1,aRStack_10,0,1,*(undefined4 *)(this + 0x18c));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
  }
  else {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0xf8));
    LawnApp::ShowPlantLevelUpInfoDialog(pLVar1,aRStack_10,0,0,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLevelUpCheckDialog::checkCanLevelupByBook() */

void __thiscall PlantLevelUpCheckDialog::checkCanLevelupByBook(PlantLevelUpCheckDialog *this)

{
  bool bVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  string asStack_10 [8];
  long local_8;
  
  bVar1 = false;
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x184) - 1U < 3) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    std::string::string(asStack_10,"mat_plant_levelup_book");
    iVar2 = PlayerInfo::GetMaterialNum(this_01,asStack_10);
    std::string::~string(asStack_10);
    nop();
    bVar1 = 0 < iVar2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLevelUpCheckDialog::updateLevelupBook() */

void __thiscall PlantLevelUpCheckDialog::updateLevelupBook(PlantLevelUpCheckDialog *this)

{
  char cVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  ulong uVar2;
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x128) != 0) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    std::string::string(asStack_10,"mat_plant_levelup_book");
    uVar2 = PlayerInfo::GetMaterialNum(this_01,asStack_10);
    std::string::~string(asStack_10);
    nop();
    TodStringTranslate(L"[PLANT_LEVEL_UP_BOOK]");
    Sexy::StrFormat("%d / %d",asStack_18,uVar2 & 0xffffffff,1);
    Sexy::ToWString(asStack_18);
    std::operator+(awStack_20,(wstring *)asStack_10);
    FUN_05476c50(asStack_10);
    std::string::~string(asStack_18);
    FUN_05476c50(awStack_20);
    PVZ2UIButton::SetLabelText(*(PVZ2UIButton **)(this + 0x128),awStack_28);
    cVar1 = checkCanLevelupByBook(this);
    if (cVar1 == '\0') {
      (**(code **)(**(long **)(this + 0x128) + 0x188))(*(long **)(this + 0x128),1);
    }
    FUN_05476c50(awStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantLevelUpCheckDialog::ButtonPress(int) */

void PlantLevelUpCheckDialog::ButtonPress(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Press");
  return;
}


/* non-virtual thunk to PlantLevelUpCheckDialog::ButtonPress(int) */

void __thiscall PlantLevelUpCheckDialog::ButtonPress(PlantLevelUpCheckDialog *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* PlantLevelUpCheckDialog::checkCanLevelup() */

void __thiscall PlantLevelUpCheckDialog::checkCanLevelup(PlantLevelUpCheckDialog *this)

{
  canPlantLevelUp((RtWeakPtr *)(this + 0xf8),true,false);
  return;
}


/* PlantLevelUpCheckDialog::checkCanLevelupWithGeneralChips() */

void __thiscall
PlantLevelUpCheckDialog::checkCanLevelupWithGeneralChips(PlantLevelUpCheckDialog *this)

{
  canPlantLevelUp((RtWeakPtr *)(this + 0xf8),true,true);
  return;
}


/* PlantLevelUpCheckDialog::onCoinStoreClose() */

void __thiscall PlantLevelUpCheckDialog::onCoinStoreClose(PlantLevelUpCheckDialog *this)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long *plVar3;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 == (PlayerInfo *)0x0) {
    return;
  }
  iVar2 = PlayerInfo::GetNumCoins(this_01,false);
  *(int *)(this + 0x1d0) = iVar2;
  this[0x1d7] = (PlantLevelUpCheckDialog)(iVar2 < *(int *)(this + 0x1c4));
  cVar1 = checkCanLevelup(this);
  plVar3 = *(long **)(this + 0x120);
  if (cVar1 == '\0') {
    (**(code **)(*plVar3 + 0x188))(plVar3,1);
    cVar1 = checkCanLevelupByBook(this);
    plVar3 = *(long **)(this + 0x128);
  }
  else {
    (**(code **)(*plVar3 + 0x188))(plVar3,0);
    cVar1 = checkCanLevelupByBook(this);
    plVar3 = *(long **)(this + 0x128);
  }
  if (cVar1 == '\0') {
    (**(code **)(*plVar3 + 0x188))(plVar3,1);
    cVar1 = checkCanLevelupWithGeneralChips(this);
    plVar3 = *(long **)(this + 0x130);
  }
  else {
    (**(code **)(*plVar3 + 0x188))(plVar3,0);
    cVar1 = checkCanLevelupWithGeneralChips(this);
    plVar3 = *(long **)(this + 0x130);
  }
  if (cVar1 != '\0') {
    (**(code **)(*plVar3 + 0x188))(plVar3,0);
    return;
  }
  (**(code **)(*plVar3 + 0x188))(plVar3,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLevelUpCheckDialog::InitDialog() */

void __thiscall PlantLevelUpCheckDialog::InitDialog(PlantLevelUpCheckDialog *this)

{
  ButtonListener *pBVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  long lVar17;
  PVZ2UIButton *pPVar18;
  LotteryResultProgressBar *pLVar19;
  SalesProgressBar *pSVar20;
  undefined8 uVar21;
  string *psVar22;
  PVZ2UIGameObjectCard *pPVar23;
  code *pcVar24;
  long *plVar25;
  undefined1 auStack_80 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  lVar17 = gLawnApp;
  local_8 = ___stack_chk_guard;
  iVar15 = *(int *)(gLawnApp + 0xd4);
  iVar13 = *(int *)(this + 0x180);
  pcVar24 = *(code **)(*(long *)this + 0x198);
  pBVar1 = (ButtonListener *)(this + 0xd8);
  iVar3 = FUN_043924ac(0x140);
  iVar14 = *(int *)(lVar17 + 0xd8);
  lVar17 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00520);
  iVar8 = *(int *)(lVar17 + 0x3c);
  uVar5 = *(undefined4 *)(this + 0x180);
  iVar4 = FUN_043924ac(0x140);
  lVar17 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00520);
  (*pcVar24)(this,(int)(((float)iVar15 - (float)iVar13) * 0.5),
             (int)((((float)iVar14 - (float)iVar3) - (float)iVar8) * 0.38),uVar5,
             iVar4 + *(int *)(lVar17 + 0x3c));
  FUN_05478178(aRStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar18 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar18,0,pBVar1,(wstring *)aRStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0x118) = pPVar18;
  FUN_05476c50(aRStack_78);
  nop();
  pPVar18 = *(PVZ2UIButton **)(this + 0x118);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aRStack_78,&DAT_06b00520,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b00548,1);
  PVZ2UIButton::SetDialogStates(pPVar18,(PVZ2UIImage *)aRStack_78,(PVZ2UIImage *)&local_40);
  iVar15 = *(int *)(this + 0x180);
  plVar25 = *(long **)(this + 0x118);
  pcVar24 = *(code **)(*plVar25 + 0x198);
  lVar17 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00520);
  iVar13 = *(int *)(lVar17 + 0x38);
  uVar5 = FUN_043924ac(0x2a);
  pLVar19 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00520);
  uVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar19);
  pSVar20 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00520);
  uVar7 = SalesProgressBar::GetCurrentLevel(pSVar20);
  (*pcVar24)(plVar25,(int)((float)iVar15 - (float)iVar13 * 0.7),uVar5,uVar6,uVar7);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x118));
  iVar15 = *(int *)(*(long *)(this + 0x118) + 0x54);
  iVar13 = *(int *)(*(long *)(this + 0x118) + 0x4c);
  iVar8 = FUN_043924ac(0x14);
  iVar3 = FUN_043924ac(0x140);
  iVar4 = FUN_043924ac(0);
  pSVar20 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00520);
  iVar9 = SalesProgressBar::GetCurrentLevel(pSVar20);
  iVar10 = FUN_043924ac(4);
  iVar14 = *(int *)(this + 0x180);
  pSVar20 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00520);
  iVar11 = SalesProgressBar::GetCurrentLevel(pSVar20);
  iVar12 = FUN_043924ac(9);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar4,iVar9 + iVar10,iVar14,
             ((iVar13 + iVar15 + iVar8 + iVar3) - iVar11) + iVar12);
  *(undefined8 *)(this + 0x150) = local_40;
  *(undefined8 *)(this + 0x158) = uStack_38;
  FUN_05478178(aRStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar18 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar18,1,pBVar1,(wstring *)aRStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0x120) = pPVar18;
  FUN_05476c50(aRStack_78);
  nop();
  pPVar18 = *(PVZ2UIButton **)(this + 0x120);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aRStack_78,&DAT_06b005e8,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b00098,3);
  PVZ2UIButton::SetDialogStates(pPVar18,(PVZ2UIImage *)aRStack_78,(PVZ2UIImage *)&local_40);
  plVar25 = *(long **)(this + 0x120);
  iVar15 = *(int *)(this + 0x180);
  pcVar24 = *(code **)(*plVar25 + 0x198);
  pLVar19 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affeb8);
  iVar13 = LotteryResultProgressBar::GetCurrentLevel(pLVar19);
  iVar14 = FUN_043924ac(0x1e);
  iVar8 = FUN_043924ac(0x140);
  pSVar20 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00520);
  iVar3 = SalesProgressBar::GetCurrentLevel(pSVar20);
  pSVar20 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affeb8);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar20);
  iVar9 = FUN_043924ac(0x11);
  pLVar19 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affeb8);
  iVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar19);
  pSVar20 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affeb8);
  iVar11 = SalesProgressBar::GetCurrentLevel(pSVar20);
  (*pcVar24)(plVar25,(int)(((float)iVar15 - (float)iVar13 * 1.3) * 0.12 - (float)iVar14),
             (int)(((float)(iVar8 + iVar3) + (float)iVar4 * 0.1) - (float)iVar9),
             (int)((float)iVar10 * 1.4),(int)((double)iVar11 * 1.2));
  pPVar18 = *(PVZ2UIButton **)(this + 0x120);
  TodStringTranslate(L"[PLANT_LEVEL_UP_BUTTON_CONTENT]");
  uVar21 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_24_HardShadow);
  PVZ2UIButton::AddText(pPVar18,(Insets *)&local_40,uVar21,0);
  FUN_05476c50((Insets *)&local_40);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x120));
  FUN_05478178(aRStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar18 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar18,5,pBVar1,(wstring *)aRStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0x130) = pPVar18;
  FUN_05476c50(aRStack_78);
  nop();
  pPVar18 = *(PVZ2UIButton **)(this + 0x130);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aRStack_78,&DAT_06b005e8,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b00098,3);
  PVZ2UIButton::SetDialogStates(pPVar18,(PVZ2UIImage *)aRStack_78,(PVZ2UIImage *)&local_40);
  plVar25 = *(long **)(this + 0x130);
  iVar15 = *(int *)(this + 0x180);
  pcVar24 = *(code **)(*plVar25 + 0x198);
  pLVar19 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affeb8);
  iVar13 = LotteryResultProgressBar::GetCurrentLevel(pLVar19);
  iVar14 = FUN_043924ac(0x14);
  iVar8 = FUN_043924ac(0x140);
  pSVar20 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00520);
  iVar3 = SalesProgressBar::GetCurrentLevel(pSVar20);
  pSVar20 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affeb8);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar20);
  iVar9 = FUN_043924ac(0x11);
  pLVar19 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affeb8);
  iVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar19);
  pSVar20 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affeb8);
  iVar11 = SalesProgressBar::GetCurrentLevel(pSVar20);
  (*pcVar24)(plVar25,(int)(((float)iVar15 - (float)iVar13 * 1.3) * 0.38 - (float)iVar14),
             (int)(((float)(iVar8 + iVar3) + (float)iVar4 * 0.1) - (float)iVar9),
             (int)((float)iVar10 + (float)iVar10),(int)((double)iVar11 * 1.2));
  plVar25 = *(long **)(this + 0x130);
  pcVar24 = *(code **)(*plVar25 + 800);
  uVar21 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_24_HardShadow);
  (*pcVar24)(plVar25,uVar21);
  pPVar18 = *(PVZ2UIButton **)(this + 0x130);
  TodStringTranslate(L"[PLANT_LEVEL_UP_GENERAL_CHIPS]");
  uVar21 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_24_HardShadow);
  PVZ2UIButton::AddText(pPVar18,(Insets *)&local_40,uVar21,0);
  FUN_05476c50((Insets *)&local_40);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x130));
  FUN_05478178(aRStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar18 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar18,4,pBVar1,(wstring *)aRStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0x128) = pPVar18;
  FUN_05476c50(aRStack_78);
  nop();
  pPVar18 = *(PVZ2UIButton **)(this + 0x128);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aRStack_78,&DAT_06b005e8,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b00098,3);
  PVZ2UIButton::SetDialogStates(pPVar18,(PVZ2UIImage *)aRStack_78,(PVZ2UIImage *)&local_40);
  plVar25 = *(long **)(this + 0x128);
  iVar15 = *(int *)(this + 0x180);
  pcVar24 = *(code **)(*plVar25 + 0x198);
  pLVar19 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affeb8);
  iVar13 = LotteryResultProgressBar::GetCurrentLevel(pLVar19);
  iVar14 = FUN_043924ac(0x14);
  iVar8 = FUN_043924ac(0x140);
  pSVar20 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00520);
  iVar3 = SalesProgressBar::GetCurrentLevel(pSVar20);
  pSVar20 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affeb8);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar20);
  iVar9 = FUN_043924ac(0x11);
  pLVar19 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affeb8);
  iVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar19);
  pSVar20 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affeb8);
  iVar11 = SalesProgressBar::GetCurrentLevel(pSVar20);
  (*pcVar24)(plVar25,(int)(((float)iVar15 - (float)iVar13 * 1.3) * 0.8 - (float)iVar14),
             (int)(((float)(iVar8 + iVar3) + (float)iVar4 * 0.1) - (float)iVar9),
             (int)((float)iVar10 * 2.4),(int)((double)iVar11 * 1.2));
  plVar25 = *(long **)(this + 0x128);
  pcVar24 = *(code **)(*plVar25 + 800);
  uVar21 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_24_HardShadow);
  (*pcVar24)(plVar25,uVar21);
  updateLevelupBook(this);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x128));
  FUN_05478178(aRStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar18 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar18,2,pBVar1,(wstring *)aRStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0x138) = pPVar18;
  FUN_05476c50(aRStack_78);
  nop();
  pPVar18 = *(PVZ2UIButton **)(this + 0x138);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aRStack_78,&DAT_06affaa0,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06afff90,1);
  PVZ2UIButton::SetDialogStates(pPVar18,(PVZ2UIImage *)aRStack_78,(PVZ2UIImage *)&local_40);
  plVar25 = *(long **)(this + 0x138);
  pcVar24 = *(code **)(*plVar25 + 0x198);
  uVar5 = FUN_043924ac(400);
  uVar6 = FUN_043924ac(0x12f);
  pLVar19 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affaa0);
  iVar15 = LotteryResultProgressBar::GetCurrentLevel(pLVar19);
  pSVar20 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affaa0);
  iVar13 = SalesProgressBar::GetCurrentLevel(pSVar20);
  (*pcVar24)(plVar25,uVar5,uVar6,(int)((double)iVar15 * 1.2),(int)((double)iVar13 * 1.2));
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x138));
  psVar22 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf8));
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar22);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_78,(RtWeakPtrBase *)&local_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_78);
  if (cVar2 != '\0') {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_78);
    pPVar23 = ::operator_new(0x160);
    PVZ2UIGameObjectCard::PVZ2UIGameObjectCard(pPVar23,(Insets *)&local_40,1,0xffffffff,0,1);
    *(PVZ2UIGameObjectCard **)(this + 0x110) = pPVar23;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    NewYearGoodsSelectItem::SelectItem(*(NewYearGoodsSelectItem **)(this + 0x110),false);
    PVZ2UIGameObjectCard::SetShowLock(*(PVZ2UIGameObjectCard **)(this + 0x110),false);
    PVZ2UIGameObjectCard::SetShowPlantPrice(*(PVZ2UIGameObjectCard **)(this + 0x110),false);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x110));
    plVar25 = *(long **)(this + 0x110);
    uVar5 = FUN_043924ac(0x14);
    uVar6 = FUN_043924ac(0x82);
    uVar7 = FUN_043924ac(0xb4);
    uVar16 = FUN_043924ac(0xdc);
    (**(code **)(*plVar25 + 0x198))(plVar25,uVar5,uVar6,uVar7,uVar16);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLevelUpCheckDialog::InitDataInfo() */

void __thiscall PlantLevelUpCheckDialog::InitDataInfo(PlantLevelUpCheckDialog *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  LawnApp *pLVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  string *psVar6;
  PlantType *pPVar7;
  MagentoProductProps *this_03;
  NameMapperBase *this_04;
  ResourceInfo *pRVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  GachaItemInfo aGStack_50 [4];
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  string asStack_38 [48];
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf8);
  local_8 = ___stack_chk_guard;
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  *(undefined4 *)(this + 0x188) = *(undefined4 *)(lVar5 + 0x90);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar6);
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  cVar2 = PlayerInfo::GetIsPlantUnlocked(this_02,(string *)(lVar5 + 0x80));
  if (cVar2 == '\0') {
    cVar2 = '\x01';
  }
  else {
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    iVar3 = PlayerInfo::GetPlantStarLevel(this_02,(string *)(lVar5 + 0x80),false);
    *(int *)(this + 0x184) = iVar3;
    if (iVar3 < 1) {
      pPVar7 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
      lVar5 = PlantType::GetProps(pPVar7);
      iVar3 = *(int *)(lVar5 + 0x28);
      *(int *)(this + 0x184) = iVar3;
    }
    pPVar7 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    lVar5 = PlantType::GetProps(pPVar7);
    if (iVar3 < *(int *)(lVar5 + 0x2c)) {
      GachaItemInfo::GachaItemInfo(aGStack_50);
      this_03 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      MagentoProductProps::GetCurrentLevelPriceData
                (this_03,*(int *)(this + 0x184),(LevelUpPriceData *)aGStack_50);
      *(int *)(this + 0x188) = local_4c;
      this_04 = (NameMapperBase *)MaterialItemMapper::GetInstance();
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
      Sexy::StrFormat("mat_nutrient_%d",asStack_38,(ulong)*(uint *)(lVar5 + 0xd0));
      uVar4 = NameMapperBase::GetIdForName(this_04,asStack_38);
      *(undefined4 *)(this + 0x18c) = uVar4;
      std::string::~string(asStack_38);
      GetGameItemInfo(*(int *)(this + 0x18c),0x100,0);
      GAME_ITEM_INFO::operator=((GAME_ITEM_INFO *)(this + 400),(GAME_ITEM_INFO *)asStack_38);
      GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)asStack_38);
      *(undefined4 *)(this + 0x1c0) = local_48;
      uVar4 = FUN_043924ac(600);
      *(undefined4 *)(this + 0x180) = uVar4;
      *(undefined4 *)(this + 0x1c4) = local_44;
      iVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
      PlantType::GetCurrentLevelSkillType
                (iVar3,(bool)((char)*(undefined4 *)(this + 0x184) + '\x01'));
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(this + 0x100),(RtWeakPtr *)asStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_38);
      iVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
      PlantType::GetCurrentLevelSkillType
                (iVar3,(bool)((char)*(undefined4 *)(this + 0x184) + '\x01'));
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(this + 0x108),(RtWeakPtr *)asStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_38);
      pLVar1 = gLawnApp;
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x100));
      lVar5 = LawnApp::GetUIImageInfoFromStringId(pLVar1,(string *)(lVar5 + 0x20));
      if (lVar5 != 0) {
        Sexy::ResourceInfoTypes::FontRes::GetFont();
        pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_38);
        *(ResourceInfo **)(this + 0x140) = pRVar8;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_38)
        ;
      }
      pLVar1 = gLawnApp;
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x108));
      lVar5 = LawnApp::GetUIImageInfoFromStringId(pLVar1,(string *)(lVar5 + 0x20));
      if (lVar5 != 0) {
        Sexy::ResourceInfoTypes::FontRes::GetFont();
        pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_38);
        *(ResourceInfo **)(this + 0x148) = pRVar8;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_38)
        ;
      }
      iVar3 = PlayerInfo::GetNumCoins(this_02,false);
      *(int *)(this + 0x1d0) = iVar3;
      if (iVar3 < *(int *)(this + 0x1c4)) {
        this[0x1d7] = (PlantLevelUpCheckDialog)0x1;
      }
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      iVar3 = PlayerInfo::GetPlantPieceCount(this_02,(string *)(lVar5 + 0x80),false);
      *(int *)(this + 0x1c8) = iVar3;
      if (iVar3 < local_4c) {
        this[0x1d8] = (PlantLevelUpCheckDialog)0x1;
      }
      if (0 < *(int *)(this + 0x1c0)) {
        iVar3 = PlayerInfo::GetMaterialNum(this_02,*(int *)(this + 0x18c));
        *(int *)(this + 0x1cc) = iVar3;
        if (iVar3 < *(int *)(this + 0x1c0)) {
          this[0x1d9] = (PlantLevelUpCheckDialog)0x1;
        }
      }
    }
    else {
      cVar2 = '\0';
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLevelUpCheckDialog::PlantLevelUpCheckDialog(Sexy::RtWeakPtr<MagentoProductProps>) */

void __thiscall
PlantLevelUpCheckDialog::PlantLevelUpCheckDialog(PlantLevelUpCheckDialog *this,RtWeakPtr *param_2)

{
  undefined *puVar1;
  LawnApp *pLVar2;
  char cVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  CBMemberTranslatorX aCStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_0683ef80;
  *(undefined **)(this + 0xd8) = &DAT_0683f2b0;
  GachaItemInfo::GachaItemInfo((GachaItemInfo *)(this + 0xe0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xf8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x100));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x108));
  Sexy::Insets::Insets((Insets *)(this + 0x150));
  Sexy::Insets::Insets((Insets *)(this + 0x160));
  Sexy::Insets::Insets((Insets *)(this + 0x170));
  GAME_ITEM_INFO::GAME_ITEM_INFO((GAME_ITEM_INFO *)(this + 400));
  *(undefined4 *)(this + 0x1c8) = 0;
  *(undefined4 *)(this + 0x1cc) = 0;
  *(undefined4 *)(this + 0x1d0) = 0;
  this[0x59] = (PlantLevelUpCheckDialog)0x0;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xf8),param_2);
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  this[0x1d4] = (PlantLevelUpCheckDialog)0x0;
  this[0x1d5] = (PlantLevelUpCheckDialog)0x0;
  this[0x1d6] = (PlantLevelUpCheckDialog)0x0;
  this[0x1d7] = (PlantLevelUpCheckDialog)0x0;
  this[0x1d8] = (PlantLevelUpCheckDialog)0x0;
  this[0x1d9] = (PlantLevelUpCheckDialog)0x0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0x184) = 0;
  *(undefined4 *)(this + 0x188) = 0;
  *(undefined4 *)(this + 0x18c) = 0;
  *(undefined4 *)(this + 0x1c0) = 0;
  *(undefined4 *)(this + 0x1c4) = 0;
  uVar4 = FUN_043924ac(600);
  *(undefined4 *)(this + 0x180) = uVar4;
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_50,"UI_Fragment_Pieces");
  LawnApp::LoadGroup(pLVar2,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_50,"UI_Fragment_Material");
  LawnApp::LoadGroup(pLVar2,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  InitDataInfo(this);
  InitDialog(this);
  cVar3 = checkCanLevelup(this);
  plVar5 = *(long **)(this + 0x120);
  if (cVar3 == '\0') {
    (**(code **)(*plVar5 + 0x188))(plVar5,1);
    cVar3 = checkCanLevelupWithGeneralChips(this);
    plVar5 = *(long **)(this + 0x130);
  }
  else {
    (**(code **)(*plVar5 + 0x188))(plVar5,0);
    cVar3 = checkCanLevelupWithGeneralChips(this);
    plVar5 = *(long **)(this + 0x130);
  }
  if (cVar3 == '\0') {
    (**(code **)(*plVar5 + 0x188))(plVar5,1);
  }
  else {
    (**(code **)(*plVar5 + 0x188))(plVar5,0);
  }
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLevelupBook);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<PlantLevelUpCheckDialog,void(PlantLevelUpCheckDialog::*)(bool)>>
            ((MessageRouter *)puVar1,Message::NotifyLevelupBook,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,RefreshData);
  Sexy::Delegate0::Delegate0<PlantLevelUpCheckDialog,void(PlantLevelUpCheckDialog::*)()>
            (aDStack_38,aCStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::PlantLevelUpSuccess,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCoinStoreClose);
  Sexy::Delegate0::Delegate0<PlantLevelUpCheckDialog,void(PlantLevelUpCheckDialog::*)()>
            (aDStack_38,aCStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::CoinStoreClose,aDStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantLevelUpCheckDialog::RefreshData() */

void __thiscall PlantLevelUpCheckDialog::RefreshData(PlantLevelUpCheckDialog *this)

{
  char cVar1;
  long *plVar2;
  
  cVar1 = InitDataInfo(this);
  if (cVar1 == '\0') {
    LawnApp::KillPlantLevelUpCheckDialog(gLawnApp);
    return;
  }
  cVar1 = checkCanLevelup(this);
  plVar2 = *(long **)(this + 0x120);
  if (cVar1 == '\0') {
    (**(code **)(*plVar2 + 0x188))(plVar2,1);
    cVar1 = checkCanLevelupByBook(this);
    plVar2 = *(long **)(this + 0x128);
  }
  else {
    (**(code **)(*plVar2 + 0x188))(plVar2,0);
    cVar1 = checkCanLevelupByBook(this);
    plVar2 = *(long **)(this + 0x128);
  }
  if (cVar1 == '\0') {
    (**(code **)(*plVar2 + 0x188))(plVar2,1);
    cVar1 = checkCanLevelupWithGeneralChips(this);
    plVar2 = *(long **)(this + 0x130);
  }
  else {
    (**(code **)(*plVar2 + 0x188))(plVar2,0);
    cVar1 = checkCanLevelupWithGeneralChips(this);
    plVar2 = *(long **)(this + 0x130);
  }
  if (cVar1 == '\0') {
    (**(code **)(*plVar2 + 0x188))(plVar2,1);
    return;
  }
  (**(code **)(*plVar2 + 0x188))(plVar2,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLevelUpCheckDialog::Draw(Sexy::Graphics*) */

void __thiscall PlantLevelUpCheckDialog::Draw(PlantLevelUpCheckDialog *this,Graphics *param_1)

{
  Insets *pIVar1;
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
  string *psVar12;
  LotteryResultProgressBar *pLVar13;
  SalesProgressBar *pSVar14;
  long lVar15;
  SeedPacketUtils *this_00;
  RtWeakPtr *this_01;
  ResourceInfo *pRVar16;
  string *extraout_x1;
  CachedUIResourcePtr<Sexy::Image> *pCVar17;
  undefined1 auStack_98 [8];
  RtWeakPtr aRStack_90 [8];
  wstring awStack_88 [8];
  undefined1 auStack_80 [8];
  Insets aIStack_78 [16];
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  Insets aIStack_58 [16];
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  Sexy aSStack_28 [16];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  pIVar1 = (Insets *)(this + 0x150);
  local_8 = ___stack_chk_guard;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_1,0.5);
  Sexy::Graphics::ClearClipRect(param_1);
  iVar3 = FUN_043924ac(0xd);
  iVar7 = *(int *)(this + 0x150);
  iVar4 = FUN_043924ac(9);
  iVar8 = *(int *)(this + 0x154);
  iVar5 = FUN_043924ac(0x1a);
  iVar9 = *(int *)(this + 0x158);
  iVar6 = FUN_043924ac(0x17);
  Sexy::Insets::Insets
            (aIStack_78,iVar3 + iVar7,iVar4 + iVar8,iVar9 - iVar5,*(int *)(this + 0x15c) - iVar6);
  Sexy::Insets::Insets((Insets *)&local_18,pIVar1);
  uVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00230);
  Draw9SliceImage(param_1,(Insets *)&local_18,uVar10);
  Sexy::Insets::Insets((Insets *)&local_68,pIVar1);
  iVar7 = FUN_043924ac(0xf);
  local_68 = local_68 + iVar7;
  iVar7 = FUN_043924ac(0xf);
  iVar7 = iVar7 + local_64;
  local_64 = iVar7;
  iVar8 = FUN_043924ac(0x1e);
  iVar8 = local_60 - iVar8;
  local_60 = iVar8;
  iVar9 = FUN_043924ac(0x46);
  local_5c = local_5c - iVar9;
  iVar9 = FUN_043924ac(0);
  iVar3 = FUN_043924ac(0x50);
  Sexy::Insets::Insets(aIStack_58,iVar9,iVar7 - iVar9,iVar8,iVar3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf8));
  MagentoProductProps::GetLocalizedShortDescription();
  Sexy::UTF8StringToWString(aSStack_28,extraout_x1);
  TodStringTranslate((wstring *)&local_18);
  FUN_05476c50((Insets *)&local_18);
  std::string::~string((string *)aSStack_28);
  uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_34_HardShadow);
  Sexy::Color::Color((Color *)&local_18,1);
  WriteWordInRect(param_1,auStack_98,aIStack_58,uVar10,(Insets *)&local_18,2,1);
  iVar7 = FUN_043924ac(0xd4);
  iVar8 = FUN_043924ac(0x82);
  iVar9 = FUN_043924ac(0x175);
  iVar3 = FUN_043924ac(0xdc);
  Sexy::Insets::Insets((Insets *)&local_18,iVar7,iVar8,iVar9,iVar3);
  uVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00688);
  Draw9SliceImage(param_1,(Insets *)&local_18,uVar10);
  pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affcb0);
  iVar7 = FUN_043924ac(0xd4);
  iVar8 = FUN_043924ac(0x1e);
  iVar9 = FUN_043924ac(0x93);
  iVar3 = FUN_043924ac(0x16d);
  iVar4 = FUN_043924ac(0x3c);
  iVar5 = FUN_043924ac(5);
  Sexy::Graphics::DrawImage(param_1,pIVar11,iVar7 + iVar8,iVar9,iVar3 - iVar4,iVar5);
  TodStringTranslate(L"[PLANT_UNLOCK_SKILL]");
  iVar7 = FUN_043924ac(0xd4);
  iVar8 = FUN_043924ac(0x28);
  iVar9 = FUN_043924ac(0x89);
  iVar3 = FUN_043924ac(0x16d);
  iVar4 = FUN_043924ac(0x50);
  iVar5 = FUN_043924ac(0x32);
  Sexy::Insets::Insets((Insets *)&local_18,iVar7 + iVar8,iVar9,iVar3 - iVar4,iVar5);
  uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  Sexy::Color::Color((Color *)aSStack_28,0x26,0x65,7);
  WriteWordInRect(param_1,(string *)&local_38,(Insets *)&local_18,uVar10,aSStack_28,2,1);
  FUN_05476c50((string *)&local_38);
  pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affcb0);
  iVar7 = FUN_043924ac(0xd4);
  iVar8 = FUN_043924ac(0x28);
  iVar9 = FUN_043924ac(0xed);
  iVar3 = FUN_043924ac(0x16d);
  iVar4 = FUN_043924ac(0x50);
  iVar5 = FUN_043924ac(5);
  Sexy::Graphics::DrawImage(param_1,pIVar11,iVar7 + iVar8,iVar9,iVar3 - iVar4,iVar5);
  TodStringTranslate(L"[PLANT_UNLOCK_CONSUME]");
  iVar7 = FUN_043924ac(0xd4);
  iVar8 = FUN_043924ac(0x28);
  iVar9 = FUN_043924ac(0xe3);
  iVar3 = FUN_043924ac(0x16d);
  iVar4 = FUN_043924ac(0x50);
  iVar5 = FUN_043924ac(0x32);
  Sexy::Insets::Insets((Insets *)&local_18,iVar7 + iVar8,iVar9,iVar3 - iVar4,iVar5);
  uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  Sexy::Color::Color((Color *)aSStack_28,0x26,0x65,7);
  WriteWordInRect(param_1,(string *)&local_38,(Insets *)&local_18,uVar10,aSStack_28,2,1);
  FUN_05476c50((string *)&local_38);
  psVar12 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf8));
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar12);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_90);
  if (bVar2) {
    this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
    this_01 = (RtWeakPtr *)
              SeedPacketUtils::GetPlantPiecePacketRenderData(this_00,(string *)(lVar15 + 8));
    iVar8 = FUN_043924ac(0xe6);
    iVar9 = FUN_043924ac(0xff);
    iVar7 = *(int *)(this_01 + 0x14);
    iVar3 = *(int *)(this_01 + 0x10);
    Sexy::Insets::Insets
              ((Insets *)&local_18,(int)((float)iVar8 + (float)*(int *)(this_01 + 0x30) * 0.38),
               (int)((float)iVar9 + (float)*(int *)(this_01 + 0x34) * 0.38),
               (int)((float)*(int *)(this_01 + 0x28) * 0.38),
               (int)((float)*(int *)(this_01 + 0x2c) * 0.38));
    *(undefined8 *)(this + 0x160) = local_18;
    *(undefined8 *)(this + 0x168) = uStack_10;
    pRVar16 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01 + 0x170);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar16,(TRect *)(this + 0x160),(TRect *)(this_01 + 0x20));
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
    if (bVar2) {
      lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      pRVar16 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar15 + 0x48));
      Sexy::Insets::Insets
                ((Insets *)&local_18,(int)((float)iVar8 + (float)*(int *)(this_01 + 0x18) * 0.38),
                 (int)((float)iVar9 + (float)*(int *)(this_01 + 0x1c) * 0.38),
                 (int)((float)iVar3 * 0.38),(int)((float)iVar7 * 0.38));
      Sexy::Graphics::DrawImage(param_1,(Image *)pRVar16,(TRect *)&local_18,(TRect *)(this_01 + 8));
    }
  }
  iVar7 = FUN_043924ac(0xe6);
  pLVar13 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affe18);
  iVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
  iVar9 = FUN_043924ac(0x109);
  iVar3 = FUN_043924ac(0x96);
  iVar4 = FUN_043924ac(0x32);
  Sexy::Insets::Insets
            ((Insets *)&local_48,(int)((float)iVar7 + (float)iVar8 * 0.48),iVar9,iVar3,iVar4);
  if (this[0x1d8] == (PlantLevelUpCheckDialog)0x0) {
    Sexy::StrFormat("%d/%d",(string *)&local_38,(ulong)*(uint *)(this + 0x188),
                    (ulong)*(uint *)(this + 0x1c8));
    Sexy::ToWString((string *)&local_38);
    uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
    Sexy::Color::Color((Color *)&local_18,0x66,0x37,0);
  }
  else {
    Sexy::StrFormat("%d/%d",(string *)&local_38,(ulong)*(uint *)(this + 0x188),
                    (ulong)*(uint *)(this + 0x1c8));
    Sexy::ToWString((string *)&local_38);
    uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
    Sexy::Color::Color((Color *)&local_18,2);
  }
  WriteWordInRect(param_1,aSStack_28,(Insets *)&local_48,uVar10,(Insets *)&local_18,0,1);
  FUN_05476c50(aSStack_28);
  std::string::~string((string *)&local_38);
  if (0 < *(int *)(this + 0x1c0)) {
    iVar7 = FUN_043924ac(0x186);
    iVar8 = FUN_043924ac(0x102);
    pLVar13 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affe18);
    iVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
    pSVar14 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affe18);
    iVar3 = SalesProgressBar::GetCurrentLevel(pSVar14);
    Sexy::Insets::Insets
              ((Insets *)&local_18,iVar7,iVar8,(int)((float)iVar9 * 0.38),(int)((float)iVar3 * 0.38)
              );
    *(undefined8 *)(this + 0x170) = local_18;
    *(undefined8 *)(this + 0x178) = uStack_10;
    pLVar13 = (LotteryResultProgressBar *)StringHelper::ToImage((string *)(this + 0x1b0),false);
    if (pLVar13 != (LotteryResultProgressBar *)0x0) {
      iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
      iVar8 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar13);
      Sexy::Insets::Insets((Insets *)&local_18,0,0,iVar7,iVar8);
      Sexy::Graphics::DrawImage(param_1,(Image *)pLVar13,(TRect *)(this + 0x170),(TRect *)&local_18)
      ;
    }
    iVar7 = FUN_043924ac(0x181);
    pLVar13 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affe18);
    iVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
    local_48 = (int)((float)iVar7 + (float)iVar8 * 0.48);
    local_40 = FUN_043924ac(0x91);
    if (this[0x1d9] == (PlantLevelUpCheckDialog)0x0) {
      Sexy::StrFormat("%d/%d",(string *)&local_38,(ulong)*(uint *)(this + 0x1c0),
                      (ulong)*(uint *)(this + 0x1cc));
      Sexy::ToWString((string *)&local_38);
      uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
      Sexy::Color::Color((Color *)&local_18,0x66,0x37,0);
    }
    else {
      Sexy::StrFormat("%d/%d",(string *)&local_38,(ulong)*(uint *)(this + 0x1c0),
                      (ulong)*(uint *)(this + 0x1cc));
      Sexy::ToWString((string *)&local_38);
      uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
      Sexy::Color::Color((Color *)&local_18,2);
    }
    WriteWordInRect(param_1,aSStack_28,(Insets *)&local_48,uVar10,(Insets *)&local_18,0,1);
    FUN_05476c50(aSStack_28);
    std::string::~string((string *)&local_38);
  }
  pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00610);
  iVar7 = FUN_043924ac(0xe9);
  iVar8 = FUN_043924ac(0x12f);
  pLVar13 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affe18);
  iVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
  pSVar14 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affe18);
  iVar3 = SalesProgressBar::GetCurrentLevel(pSVar14);
  Sexy::Graphics::DrawImage
            (param_1,pIVar11,iVar7,iVar8,(int)((float)iVar9 * 0.33),(int)((float)iVar3 * 0.33));
  iVar7 = 2;
  if (this[0x1d7] == (PlantLevelUpCheckDialog)0x0) {
    iVar7 = 1;
  }
  iVar8 = FUN_043924ac(0xe1);
  pLVar13 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affe18);
  iVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
  local_48 = (int)((float)iVar8 + (float)iVar9 * 0.48);
  local_44 = FUN_043924ac(0x134);
  local_40 = FUN_043924ac(0xaa);
  Sexy::StrFormat("%d",(string *)&local_38,(ulong)*(uint *)(this + 0x1c4));
  Sexy::ToWString((string *)&local_38);
  uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  if (iVar7 == 2) {
    Sexy::Color::Color((Color *)&local_18,2);
  }
  else {
    Sexy::Color::Color((Color *)&local_18,0x66,0x37,0);
  }
  WriteWordInRect(param_1,aSStack_28,(Insets *)&local_48,uVar10,(Insets *)&local_18,0,1);
  FUN_05476c50(aSStack_28);
  std::string::~string((string *)&local_38);
  Sexy::Insets::Insets((Insets *)&local_38,pIVar1);
  iVar7 = local_48;
  local_38 = FUN_043924ac(0x94);
  local_38 = iVar7 + local_38;
  local_34 = local_44;
  local_30 = FUN_043924ac(0xaa);
  local_2c = FUN_043924ac(0x19);
  TodStringTranslate(L"[PLANT_LEVEL_UP_TIP]");
  uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)&local_18,0x66,0x37,0);
  WriteWordInRect(param_1,aSStack_28,(string *)&local_38,uVar10,(Insets *)&local_18,5,1);
  FUN_05476c50(aSStack_28);
  pIVar11 = *(Image **)(this + 0x148);
  if (pIVar11 != (Image *)0x0) {
    if (*(int *)(this + 0x184) == 1) {
      pCVar17 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b008d8;
LAB_0439b4cc:
      pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar17);
      iVar8 = FUN_043924ac(0xe6);
      iVar9 = FUN_043924ac(0xa8);
      lVar15 = CachedUIResourcePtr<Sexy::Image>::operator->(pCVar17);
      iVar7 = *(int *)(lVar15 + 0x38);
      lVar15 = CachedUIResourcePtr<Sexy::Image>::operator->(pCVar17);
      Sexy::Graphics::DrawImage
                (param_1,pIVar11,iVar8,iVar9,(int)((float)iVar7 * 0.85),
                 (int)((float)*(int *)(lVar15 + 0x3c) * 0.85));
      pIVar11 = *(Image **)(this + 0x148);
    }
    else if (*(int *)(this + 0x184) == 2) {
      pCVar17 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06affaf0;
      goto LAB_0439b4cc;
    }
    iVar7 = FUN_043924ac(0xe9);
    iVar8 = FUN_043924ac(0xab);
    Sexy::Graphics::DrawImage
              (param_1,pIVar11,iVar7,iVar8,(int)((float)*(int *)(pIVar11 + 0x38) * 0.85),
               (int)((float)*(int *)(pIVar11 + 0x3c) * 0.85));
    iVar7 = FUN_043924ac(0xf0);
    iVar8 = FUN_043924ac(0xb5);
    iVar9 = FUN_043924ac(0x96);
    iVar3 = FUN_043924ac(0x32);
    Sexy::Insets::Insets
              ((Insets *)aSStack_28,
               (int)((float)iVar7 + (float)*(int *)(*(long *)(this + 0x148) + 0x38) * 0.85),iVar8,
               iVar9,iVar3);
    lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x108));
    Sexy::ToWString((string *)(lVar15 + 0x10));
    TodStringTranslate(awStack_88);
    uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
    Sexy::Color::Color((Color *)&local_18,0x66,0x37,0);
    WriteWordInRect(param_1,auStack_80,aSStack_28,uVar10,(Insets *)&local_18,0,1);
    FUN_05476c50(auStack_80);
    FUN_05476c50(awStack_88);
  }
  pIVar11 = *(Image **)(this + 0x140);
  if (pIVar11 == (Image *)0x0) goto LAB_0439b85c;
  if (*(int *)(this + 0x184) == 1) {
    pCVar17 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b008d8;
LAB_0439b6a8:
    pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar17);
    iVar8 = FUN_043924ac(0x19f);
    iVar9 = FUN_043924ac(0xa8);
    lVar15 = CachedUIResourcePtr<Sexy::Image>::operator->(pCVar17);
    iVar7 = *(int *)(lVar15 + 0x38);
    lVar15 = CachedUIResourcePtr<Sexy::Image>::operator->(pCVar17);
    Sexy::Graphics::DrawImage
              (param_1,pIVar11,iVar8,iVar9,(int)((float)iVar7 * 0.85),
               (int)((float)*(int *)(lVar15 + 0x3c) * 0.85));
    pIVar11 = *(Image **)(this + 0x140);
  }
  else if (*(int *)(this + 0x184) == 2) {
    pCVar17 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06affaf0;
    goto LAB_0439b6a8;
  }
  iVar7 = FUN_043924ac(0x1a2);
  iVar8 = FUN_043924ac(0xab);
  Sexy::Graphics::DrawImage
            (param_1,pIVar11,iVar7,iVar8,(int)((float)*(int *)(pIVar11 + 0x38) * 0.85),
             (int)((float)*(int *)(pIVar11 + 0x3c) * 0.85));
  iVar7 = FUN_043924ac(0x1a9);
  iVar8 = FUN_043924ac(0xb5);
  iVar9 = FUN_043924ac(0x96);
  iVar3 = FUN_043924ac(0x32);
  Sexy::Insets::Insets
            ((Insets *)aSStack_28,
             (int)((float)iVar7 + (float)*(int *)(*(long *)(this + 0x140) + 0x38) * 0.85),iVar8,
             iVar9,iVar3);
  lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x100))
  ;
  Sexy::ToWString((string *)(lVar15 + 0x10));
  TodStringTranslate(awStack_88);
  uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  Sexy::Color::Color((Color *)&local_18,0x66,0x37,0);
  WriteWordInRect(param_1,auStack_80,aSStack_28,uVar10,(Insets *)&local_18,0,1);
  FUN_05476c50(auStack_80);
  FUN_05476c50(awStack_88);
LAB_0439b85c:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
  FUN_05476c50(auStack_98);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLevelUpCheckDialog::ButtonDepress(int) */

void __thiscall PlantLevelUpCheckDialog::ButtonDepress(PlantLevelUpCheckDialog *this,int param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  LawnApp *pLVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  PlayerInfo *this_01;
  string *psVar9;
  PlantType *this_02;
  long lVar10;
  MagentoProductProps *this_03;
  AdaptiveMessageBox *this_04;
  PlantLevelUpWithGeneralChipsHit *this_05;
  PVZ2UIDialog *pPVar11;
  undefined8 uVar12;
  undefined1 auStack_80 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  undefined1 auStack_70 [8];
  undefined4 local_68;
  int iStack_64;
  undefined4 uStack_60;
  int local_5c;
  int local_58;
  RtWeakPtr<Sexy::SoundResource> aRStack_50 [24];
  function<bool(Sexy::Touch_const&)> afStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar8 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar8,"Play_UI_Button_Click_Release");
  pLVar1 = gLawnApp;
  switch(param_1) {
  case 0:
    LawnApp::KillPlantLevelUpCheckDialog(gLawnApp);
    break;
  case 1:
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf8);
    GachaItemInfo::GachaItemInfo((GachaItemInfo *)&local_68);
    this_01 = (PlayerInfo *)ProfileUtils::Profile();
    psVar9 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar9);
    this_02 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    lVar10 = PlantType::GetProps(this_02);
    *(undefined4 *)(this + 0x184) = *(undefined4 *)(lVar10 + 0x28);
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    iVar6 = PlayerInfo::GetPlantStarLevel(this_01,(string *)(lVar10 + 0x80),false);
    if (1 < iVar6) {
      lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      uVar3 = PlayerInfo::GetPlantStarLevel(this_01,(string *)(lVar10 + 0x80),false);
      *(undefined4 *)(this + 0x184) = uVar3;
    }
    this_03 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    cVar2 = MagentoProductProps::GetCurrentLevelPriceData
                      (this_03,*(int *)(this + 0x184),(LevelUpPriceData *)&local_68);
    if (cVar2 == '\0') goto LAB_0439d2a4;
    *(ulong *)(this + 0xe0) = CONCAT44(iStack_64,local_68);
    *(ulong *)(this + 0xe8) = CONCAT44(local_5c,uStack_60);
    *(int *)(this + 0xf0) = local_58;
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    iVar6 = PlayerInfo::GetPlantPieceCount(this_01,(string *)(lVar10 + 0x80),false);
    if (iVar6 < iStack_64) {
      LawnApp::KillPlantLevelUpCheckDialog(gLawnApp);
      pLVar1 = gLawnApp;
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,(RtWeakPtrBase *)this_00);
      LawnApp::ShowPlantLevelUpInfoDialog(pLVar1,aRStack_50,1,0,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
      break;
    }
    if (local_58 == 2) {
      iVar6 = PlayerInfo::GetNumCoins(this_01,true);
      pLVar1 = gLawnApp;
      if (iVar6 < local_5c) {
        uVar12 = 0;
LAB_0439d90c:
        LawnApp::ShowGemStoreConfirm(gLawnApp,uVar12,1);
        goto LAB_0439d2a4;
      }
      iVar6 = FUN_043924ac(0x17c);
      iVar7 = FUN_043924ac(0xf0);
      pPVar11 = (PVZ2UIDialog *)
                LawnApp::ShowPVZ2Dialog(pLVar1,(float)iVar6,(float)iVar7,(PVZ2UIDialog *)0x0);
      if (pPVar11 != (PVZ2UIDialog *)0x0) {
        this[0x1d4] = (PlantLevelUpCheckDialog)0x1;
        FUN_05478178(auStack_70,L"[BUTTON_CANCEL]",auStack_80);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,LevelUpCancel);
        Sexy::Delegate0::Delegate0<PlantLevelUpCheckDialog,void(PlantLevelUpCheckDialog::*)()>
                  ((Delegate0 *)afStack_38,(wstring *)aRStack_50);
        PVZ2UIDialog::AddButton(pPVar11,auStack_70,(Delegate0 *)afStack_38,1);
        FUN_05476c50(auStack_70);
        nop();
        FUN_05478178(auStack_70,L"[CONTINUE_BUTTON]",auStack_80);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,LevelUpOk);
        Sexy::Delegate0::Delegate0<PlantLevelUpCheckDialog,void(PlantLevelUpCheckDialog::*)()>
                  ((Delegate0 *)afStack_38,(wstring *)aRStack_50);
        PVZ2UIDialog::AddButton(pPVar11,auStack_70,(Delegate0 *)afStack_38,0);
        FUN_05476c50(auStack_70);
        nop();
        PVZ2UIDialog::SetBackgroundDarken(pPVar11,true,0.5);
        TodStringTranslate(L"[PIECE_LEVEL_UP_NOTICE_TITLE]");
        PVZ2UIDialog::SetHeaderLabel(pPVar11,(wstring *)aRStack_50);
        FUN_05476c50((wstring *)aRStack_50);
        TodStringTranslate(L"[PIECE_LEVEL_UP_NOTICE_TEXT]");
        PVZ2UIDialog::SetFooterLabel(pPVar11,(wstring *)aRStack_50);
        FUN_05476c50((wstring *)aRStack_50);
        goto LAB_0439d2a4;
      }
    }
    else {
      if (local_58 == 0) {
        iVar6 = PlayerInfo::GetNumGems(this_01,true);
        pLVar1 = gLawnApp;
        if (iVar6 < local_5c) {
          uVar12 = 2;
          goto LAB_0439d90c;
        }
        iVar6 = FUN_043924ac(0x17c);
        iVar7 = FUN_043924ac(0xf0);
        pPVar11 = (PVZ2UIDialog *)
                  LawnApp::ShowPVZ2Dialog(pLVar1,(float)iVar6,(float)iVar7,(PVZ2UIDialog *)0x0);
        if (pPVar11 == (PVZ2UIDialog *)0x0) goto LAB_0439d2b4;
        this[0x1d4] = (PlantLevelUpCheckDialog)0x1;
        FUN_05478178(auStack_70,L"[BUTTON_CANCEL]",auStack_80);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,LevelUpCancel);
        Sexy::Delegate0::Delegate0<PlantLevelUpCheckDialog,void(PlantLevelUpCheckDialog::*)()>
                  ((Delegate0 *)afStack_38,(wstring *)aRStack_50);
        PVZ2UIDialog::AddButton(pPVar11,auStack_70,(Delegate0 *)afStack_38,1);
        FUN_05476c50(auStack_70);
        nop();
        FUN_05478178(auStack_70,L"[CONTINUE_BUTTON]",auStack_80);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,LevelUpOk);
        Sexy::Delegate0::Delegate0<PlantLevelUpCheckDialog,void(PlantLevelUpCheckDialog::*)()>
                  ((Delegate0 *)afStack_38,(wstring *)aRStack_50);
        PVZ2UIDialog::AddButton(pPVar11,auStack_70,(Delegate0 *)afStack_38,0);
        FUN_05476c50(auStack_70);
        nop();
        PVZ2UIDialog::SetBackgroundDarken(pPVar11,true,0.5);
        TodStringTranslate(L"[PIECE_LEVEL_UP_NOTICE_TITLE]");
        PVZ2UIDialog::SetHeaderLabel(pPVar11,(wstring *)aRStack_50);
        FUN_05476c50((wstring *)aRStack_50);
        TodStringTranslate(L"[PIECE_LEVEL_UP_NOTICE_TEXT]");
        PVZ2UIDialog::SetFooterLabel(pPVar11,(wstring *)aRStack_50);
        FUN_05476c50((wstring *)aRStack_50);
      }
LAB_0439d2a4:
      iVar6 = FUN_04391b90(*(undefined4 *)(this_01 + 0x40));
      if (iVar6 == 0x1d) {
        MessageRouter::Post((_func_void *)gMessageRouter);
      }
    }
LAB_0439d2b4:
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
    break;
  case 2:
    LawnApp::ShowCoinStore(gLawnApp,0);
    break;
  case 4:
    iVar6 = FUN_043924ac(0x17c);
    iVar7 = FUN_043924ac(0xf0);
    pPVar11 = (PVZ2UIDialog *)
              LawnApp::ShowPVZ2Dialog(pLVar1,(float)iVar6,(float)iVar7,(PVZ2UIDialog *)0x0);
    if (pPVar11 != (PVZ2UIDialog *)0x0) {
      FUN_05478178(&local_68,L"[BUTTON_CANCEL]",auStack_70);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,LevelUpCancel);
      Sexy::Delegate0::Delegate0<PlantLevelUpCheckDialog,void(PlantLevelUpCheckDialog::*)()>
                ((Delegate0 *)afStack_38,(wstring *)aRStack_50);
      PVZ2UIDialog::AddButton(pPVar11,&local_68,(Delegate0 *)afStack_38,1);
      FUN_05476c50(&local_68);
      nop();
      FUN_05478178(&local_68,L"[CONTINUE_BUTTON]",auStack_70);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,LevelUpOkBook);
      Sexy::Delegate0::Delegate0<PlantLevelUpCheckDialog,void(PlantLevelUpCheckDialog::*)()>
                ((Delegate0 *)afStack_38,(wstring *)aRStack_50);
      PVZ2UIDialog::AddButton(pPVar11,&local_68,(Delegate0 *)afStack_38,0);
      FUN_05476c50(&local_68);
      nop();
      PVZ2UIDialog::SetBackgroundDarken(pPVar11,true,0.5);
      TodStringTranslate(L"[PIECE_LEVEL_UP_NOTICE_TITLE]");
      PVZ2UIDialog::SetHeaderLabel(pPVar11,(wstring *)aRStack_50);
      FUN_05476c50((wstring *)aRStack_50);
      TodStringTranslate(L"[BOOK_LEVEL_UP_NOTICE_TEXT]");
      PVZ2UIDialog::SetFooterLabel(pPVar11,(wstring *)aRStack_50);
      FUN_05476c50((wstring *)aRStack_50);
    }
    break;
  case 5:
    this_04 = (AdaptiveMessageBox *)UISingletonDialog<AdaptiveMessageBox>::ShowDialog();
    this_05 = ::operator_new(0xe8);
    PlantLevelUpWithGeneralChipsHit::PlantLevelUpWithGeneralChipsHit(this_05);
    uVar3 = FUN_043924ac(0);
    uVar4 = FUN_043924ac(0x1c2);
    uVar5 = FUN_043924ac(200);
    (**(code **)(*(long *)this_05 + 0x198))(this_05,uVar3,uVar3,uVar4,uVar5);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,(RtWeakPtrBase *)(this + 0xf8));
    PlantLevelUpWithGeneralChipsHit::InitView(this_05,aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
    AdaptiveMessageBox::SetContentWidget(this_04,(Widget *)this_05);
    FUN_043923f0(afStack_38,this,this_05);
    AdaptiveMessageBox::SetConfirmFunction(this_04,afStack_38);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_38);
    FUN_0439244c(afStack_38);
    AdaptiveMessageBox::SetCloseFunction(this_04,afStack_38);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PlantLevelUpCheckDialog::ButtonDepress(int) */

void __thiscall PlantLevelUpCheckDialog::ButtonDepress(PlantLevelUpCheckDialog *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLevelUpCheckDialog::onLevelupBook(bool) */

void __thiscall PlantLevelUpCheckDialog::onLevelupBook(PlantLevelUpCheckDialog *this,bool param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  LawnApp *pLVar1;
  int iVar2;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  long lVar3;
  char *__s;
  TGALogMgr *pTVar4;
  size_t __n;
  TGAPlantWarsData aTStack_88 [8];
  string asStack_80 [56];
  string asStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf8);
    LawnApp::KillPVZ2Dialog(gLawnApp);
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    iVar2 = PlayerInfo::GetMaterialNum(this_02,0x5a06);
    PlayerInfo::SetMaterialNum(this_02,0x5a06,iVar2 + -1);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    PlayerInfo::PlantStarLevelUp(this_02,(string *)(lVar3 + 0x80),false);
    MessageRouter::Post((_func_void *)gMessageRouter);
    pLVar1 = gLawnApp;
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    FUN_05475d88(asStack_48,lVar3 + 0x80);
    LawnApp::ShowPlantStarLevelUpAnimUI(pLVar1,0,asStack_48,*(undefined4 *)(this + 0x184));
    std::string::~string(asStack_48);
    RefreshData(this);
    updateLevelupBook(this);
    MessageRouter::Post((_func_void *)gMessageRouter);
    TGAPlantWarsData::TGAPlantWarsData(aTStack_88);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    thunk_FUN_05475e00(aTStack_88,lVar3 + 0x80);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    __n = 0;
    iVar2 = PlayerInfo::GetPlantStarLevel(this_02,(string *)(lVar3 + 0x80),false);
    DString::DString((DString *)asStack_48,iVar2);
    __s = (char *)DString::c_str((DString *)asStack_48);
    std::string::append(asStack_80,__s,__n);
    DString::~DString((DString *)asStack_48);
    pTVar4 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogPurchaseData::TGALogPurchaseData
              ((TGALogPurchaseData *)asStack_48,(TGALogPurchaseData *)aTStack_88);
    TGALogMgr::LogPlantLevelup(pTVar4,4,asStack_48);
    TGAPlantWarsData::~TGAPlantWarsData((TGAPlantWarsData *)asStack_48);
    TGAPlantWarsData::~TGAPlantWarsData(aTStack_88);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLevelUpCheckDialog::LevelUpOk() */

void __thiscall PlantLevelUpCheckDialog::LevelUpOk(PlantLevelUpCheckDialog *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *pRVar1;
  int iVar2;
  undefined4 uVar3;
  PlayerInfo *this_00;
  NameMapperBase *pNVar4;
  long lVar5;
  NetworkMgr *pNVar6;
  long *plVar7;
  char *pcVar8;
  TGALogMgr *pTVar9;
  size_t __n;
  TGAPlantWarsData aTStack_88 [8];
  string asStack_80 [8];
  string asStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [16];
  DString aDStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1d4] == (PlantLevelUpCheckDialog)0x0) goto LAB_043a0a44;
  this[0x1d4] = (PlantLevelUpCheckDialog)0x0;
  this_00 = (PlayerInfo *)ProfileUtils::Profile();
  iVar2 = FUN_04391b90(*(undefined4 *)(this_00 + 0x40));
  if (iVar2 == 0x1d) {
    LawnApp::KillGameMaskUI(gLawnApp);
  }
  if (*(int *)(this + 0xf0) == 0) {
    pNVar4 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
    pRVar1 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf8);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    uVar3 = NameMapperBase::GetIdForName(pNVar4,(string *)(lVar5 + 0x80));
    pNVar6 = (NetworkMgr *)NetworkMgr::Instance();
    plVar7 = (long *)NetworkMgr::GetNewNetWorkProcess(pNVar6);
    (**(code **)(*plVar7 + 0x448))(plVar7,uVar3);
    TGAPlantWarsData::TGAPlantWarsData(aTStack_88);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    thunk_FUN_05475e00(aTStack_88,lVar5 + 0x80);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    __n = 0;
    iVar2 = PlayerInfo::GetPlantStarLevel(this_00,(string *)(lVar5 + 0x80),false);
    DString::DString(aDStack_48,iVar2);
    pcVar8 = (char *)DString::c_str(aDStack_48);
    std::string::append(asStack_80,pcVar8,__n);
    DString::~DString(aDStack_48);
    DString::DString(aDStack_48,*(int *)(this + 0xe4));
    pcVar8 = (char *)DString::c_str(aDStack_48);
    std::string::append(asStack_78,pcVar8,__n);
    DString::~DString(aDStack_48);
    std::string::append(asStack_60,"0",__n);
    DString::DString(aDStack_48,*(int *)(this + 0xec));
    pcVar8 = (char *)DString::c_str(aDStack_48);
    std::string::append(asStack_58,pcVar8,__n);
    DString::~DString(aDStack_48);
    iVar2 = *(int *)(this + 0x1c0);
    if (0 < iVar2) goto LAB_043a0b9c;
LAB_043a0d08:
    std::string::append(asStack_68,"",__n);
  }
  else {
    if (*(int *)(this + 0xf0) != 2) goto LAB_043a0a44;
    pNVar4 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
    pRVar1 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf8);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    uVar3 = NameMapperBase::GetIdForName(pNVar4,(string *)(lVar5 + 0x80));
    pNVar6 = (NetworkMgr *)NetworkMgr::Instance();
    plVar7 = (long *)NetworkMgr::GetNewNetWorkProcess(pNVar6);
    (**(code **)(*plVar7 + 0x448))(plVar7,uVar3);
    TGAPlantWarsData::TGAPlantWarsData(aTStack_88);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    thunk_FUN_05475e00(aTStack_88,lVar5 + 0x80);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    __n = 0;
    iVar2 = PlayerInfo::GetPlantStarLevel(this_00,(string *)(lVar5 + 0x80),false);
    DString::DString(aDStack_48,iVar2);
    pcVar8 = (char *)DString::c_str(aDStack_48);
    std::string::append(asStack_80,pcVar8,__n);
    DString::~DString(aDStack_48);
    DString::DString(aDStack_48,*(int *)(this + 0xe4));
    pcVar8 = (char *)DString::c_str(aDStack_48);
    std::string::append(asStack_78,pcVar8,__n);
    DString::~DString(aDStack_48);
    DString::DString(aDStack_48,*(int *)(this + 0xec));
    pcVar8 = (char *)DString::c_str(aDStack_48);
    std::string::append(asStack_70,pcVar8,__n);
    DString::~DString(aDStack_48);
    iVar2 = *(int *)(this + 0x1c0);
    if (iVar2 < 1) goto LAB_043a0d08;
LAB_043a0b9c:
    DString::DString(aDStack_48,iVar2);
    pcVar8 = (char *)DString::c_str(aDStack_48);
    std::string::append(asStack_68,pcVar8,__n);
    DString::~DString(aDStack_48);
  }
  pTVar9 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogPurchaseData::TGALogPurchaseData
            ((TGALogPurchaseData *)aDStack_48,(TGALogPurchaseData *)aTStack_88);
  TGALogMgr::LogPlantLevelup(pTVar9,3,(TGALogPurchaseData *)aDStack_48);
  TGAPlantWarsData::~TGAPlantWarsData((TGAPlantWarsData *)aDStack_48);
  TGAPlantWarsData::~TGAPlantWarsData(aTStack_88);
LAB_043a0a44:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLevelUpCheckDialog::LevelUpWithGeneralChips(int, int) */

void __thiscall
PlantLevelUpCheckDialog::LevelUpWithGeneralChips
          (PlantLevelUpCheckDialog *this,int param_1,int param_2)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  undefined4 uVar1;
  int iVar2;
  NameMapperBase *pNVar3;
  long lVar4;
  NetworkMgr *this_01;
  long *plVar5;
  PlayerInfo *this_02;
  char *pcVar6;
  TGALogMgr *pTVar7;
  size_t __n;
  TGAPlantWarsData aTStack_1f8 [8];
  string asStack_1f0 [8];
  string asStack_1e8 [16];
  string asStack_1d8 [8];
  string asStack_1d0 [8];
  string asStack_1c8 [8];
  undefined1 auStack_1c0 [8];
  DString aDStack_1b8 [64];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf8);
  local_8 = ___stack_chk_guard;
  pNVar3 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  uVar1 = NameMapperBase::GetIdForName(pNVar3,(string *)(lVar4 + 0x80));
  this_01 = (NetworkMgr *)NetworkMgr::Instance();
  plVar5 = (long *)NetworkMgr::GetNewNetWorkProcess(this_01);
  (**(code **)(*plVar5 + 0x448))(plVar5,uVar1);
  this_02 = (PlayerInfo *)ProfileUtils::Profile();
  TGAPlantWarsData::TGAPlantWarsData(aTStack_1f8);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  thunk_FUN_05475e00(aTStack_1f8,lVar4 + 0x80);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  __n = 0;
  iVar2 = PlayerInfo::GetPlantStarLevel(this_02,(string *)(lVar4 + 0x80),false);
  DString::DString(aDStack_1b8,iVar2 + 1);
  pcVar6 = (char *)DString::c_str(aDStack_1b8);
  std::string::append(asStack_1f0,pcVar6,__n);
  DString::~DString(aDStack_1b8);
  DString::DString(aDStack_1b8,(*(int *)(this + 0xe4) - param_1) - param_2);
  pcVar6 = (char *)DString::c_str(aDStack_1b8);
  std::string::append(asStack_1e8,pcVar6,__n);
  DString::~DString(aDStack_1b8);
  std::string::append(asStack_1d0,"0",__n);
  DString::DString(aDStack_1b8,*(int *)(this + 0xec));
  pcVar6 = (char *)DString::c_str(aDStack_1b8);
  std::string::append(asStack_1c8,pcVar6,__n);
  DString::~DString(aDStack_1b8);
  if (*(int *)(this + 0x1c0) < 1) {
    std::string::append(asStack_1d8,"",__n);
  }
  else {
    DString::DString(aDStack_1b8,*(int *)(this + 0x1c0));
    pcVar6 = (char *)DString::c_str(aDStack_1b8);
    std::string::append(asStack_1d8,pcVar6,__n);
    DString::~DString(aDStack_1b8);
  }
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string((string *)aDStack_1b8,"");
  FUN_05462980(auStack_178,aDStack_1b8);
  std::string::~string((string *)aDStack_1b8);
  nop();
  if (0 < param_1) {
    pNVar3 = (NameMapperBase *)MaterialItemMapper::GetInstance();
    std::string::string((string *)aDStack_1b8,"mat_general_plant_chips");
    uVar1 = NameMapperBase::GetIdForName(pNVar3,(string *)aDStack_1b8);
    FUN_0546065c(auStack_168,uVar1);
    std::string::~string((string *)aDStack_1b8);
    nop();
    FUN_054603b8(auStack_168,&DAT_05593348);
    FUN_0546065c(auStack_168,param_1);
    FUN_054603b8(auStack_168,&DAT_05594620);
  }
  if (0 < param_2) {
    pNVar3 = (NameMapperBase *)MaterialItemMapper::GetInstance();
    std::string::string((string *)aDStack_1b8,"mat_universal_plant_chips");
    uVar1 = NameMapperBase::GetIdForName(pNVar3,(string *)aDStack_1b8);
    FUN_0546065c(auStack_168,uVar1);
    std::string::~string((string *)aDStack_1b8);
    nop();
    FUN_054603b8(auStack_168,&DAT_05593348);
    FUN_0546065c(auStack_168,param_2);
    FUN_054603b8(auStack_168,&DAT_05594620);
  }
  FUN_05462824(aDStack_1b8,auStack_178);
  FUN_05474278(auStack_1c0,aDStack_1b8);
  std::string::~string((string *)aDStack_1b8);
  pTVar7 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogPurchaseData::TGALogPurchaseData
            ((TGALogPurchaseData *)aDStack_1b8,(TGALogPurchaseData *)aTStack_1f8);
  TGALogMgr::LogPlantLevelup(pTVar7,3,aDStack_1b8);
  TGAPlantWarsData::~TGAPlantWarsData((TGAPlantWarsData *)aDStack_1b8);
  FUN_054617bc(auStack_178);
  TGAPlantWarsData::~TGAPlantWarsData(aTStack_1f8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

