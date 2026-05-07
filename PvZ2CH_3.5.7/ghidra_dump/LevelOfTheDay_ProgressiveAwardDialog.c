// Class: LevelOfTheDay_ProgressiveAwardDialog


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDay_ProgressiveAwardDialog::~LevelOfTheDay_ProgressiveAwardDialog() */

void __thiscall
LevelOfTheDay_ProgressiveAwardDialog::~LevelOfTheDay_ProgressiveAwardDialog
          (LevelOfTheDay_ProgressiveAwardDialog *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069257c8;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_069254a0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,false);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_LevelOfTheDay");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UPDATE_UI_LevelOfTheDay");
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


/* LevelOfTheDay_ProgressiveAwardDialog::~LevelOfTheDay_ProgressiveAwardDialog() */

void __thiscall
LevelOfTheDay_ProgressiveAwardDialog::~LevelOfTheDay_ProgressiveAwardDialog
          (LevelOfTheDay_ProgressiveAwardDialog *this)

{
  ~LevelOfTheDay_ProgressiveAwardDialog(this);
  AK::FreeHook(this);
  return;
}


/* LevelOfTheDay_ProgressiveAwardDialog::ButtonDepress(int) */

void __thiscall
LevelOfTheDay_ProgressiveAwardDialog::ButtonDepress
          (LevelOfTheDay_ProgressiveAwardDialog *this,int param_1)

{
  if ((param_1 == 0) <= *(byte *)(*(long *)(this + 0xe8) + 0x6e)) {
    return;
  }
  Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0xf0));
  return;
}


/* non-virtual thunk to LevelOfTheDay_ProgressiveAwardDialog::ButtonDepress(int) */

void __thiscall
LevelOfTheDay_ProgressiveAwardDialog::ButtonDepress
          (LevelOfTheDay_ProgressiveAwardDialog *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* LevelOfTheDay_ProgressiveAwardDialog::Update() */

void __thiscall
LevelOfTheDay_ProgressiveAwardDialog::Update(LevelOfTheDay_ProgressiveAwardDialog *this)

{
  float fVar1;
  undefined4 uVar2;
  
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0x124) + *(float *)(this + 0x128) < fVar1) {
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0xf0));
    uVar2 = PVZ_EOT();
    *(undefined4 *)(this + 0x128) = uVar2;
    *(undefined4 *)(this + 0x124) = 0;
  }
  return;
}


/* LevelOfTheDay_ProgressiveAwardDialog::DoFinalSequence() */

void __thiscall
LevelOfTheDay_ProgressiveAwardDialog::DoFinalSequence(LevelOfTheDay_ProgressiveAwardDialog *this)

{
  undefined4 uVar1;
  
  if (this[0x120] != (LevelOfTheDay_ProgressiveAwardDialog)0x0) {
    uVar1 = PVZ_T();
    *(undefined4 *)(this + 0x128) = uVar1;
    return;
  }
  (**(code **)(**(long **)(this + 0xe8) + 0x188))(*(long **)(this + 0xe8));
  (**(code **)(**(long **)(this + 0xe8) + 0x158))(*(long **)(this + 0xe8),1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDay_ProgressiveAwardDialog::layoutFooter() */

void __thiscall
LevelOfTheDay_ProgressiveAwardDialog::layoutFooter(LevelOfTheDay_ProgressiveAwardDialog *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  LevelOfTheDayMgr *this_00;
  long lVar9;
  char *pcVar10;
  LevelOfTheDayRewardFooter *this_01;
  SalesProgressBar *pSVar11;
  RenaissanceChallengeNewManager *this_02;
  code *pcVar12;
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  wstring awStack_48 [8];
  Insets aIStack_40 [16];
  CachedUIResourcePtr<Sexy::Image> aCStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (LevelOfTheDayMgr *)LevelOfTheDayMgr::GetInstance();
  lVar9 = LevelOfTheDayMgr::GetCurrentTheDayItem(this_00);
  if (lVar9 == 0) goto LAB_049b9e44;
  FUN_05475d88(asStack_68,lVar9 + 0x28);
  FUN_05475d88(asStack_60,lVar9 + 0x30);
  FUN_05475d88(asStack_58,lVar9 + 0x38);
  bVar4 = std::operator==(asStack_60,"[CHILDREN_DAY_DZ_FOOT]");
  if (bVar4) {
    this_02 = (RenaissanceChallengeNewManager *)
              Sexy::LazySingleton<RenaissanceChallengeNewManager>::GetInstance();
    uVar8 = RenaissanceChallengeNewManager::GetResourceId(this_02);
    if ((int)uVar8 < 1) goto LAB_049b9e1c;
    Sexy::StrFormat("[CHILDREN_DAY_DZ_FOOT_%d]",(string *)aCStack_30,(ulong)uVar8);
    FUN_05474278(asStack_60,(string *)aCStack_30);
    std::string::~string((string *)aCStack_30);
    cVar5 = FUN_0547419c(asStack_68);
  }
  else {
LAB_049b9e1c:
    cVar5 = FUN_0547419c(asStack_68);
  }
  if (cVar5 == '\0') {
    Sexy::Insets::Insets(aIStack_40,0xb8,0x2b,0x43,0xff);
    pcVar10 = (char *)FUN_0547429c(asStack_68);
    CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr(aCStack_30,pcVar10);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)aCStack_30);
    CachedUIResourcePtr<Sexy::Image>::~CachedUIResourcePtr(aCStack_30);
    this_01 = ::operator_new(0x118);
    LevelOfTheDayRewardFooter::LevelOfTheDayRewardFooter(this_01);
    iVar1 = *(int *)(this + 0x50);
    iVar2 = *(int *)(this + 0x54);
    pcVar12 = *(code **)(*(long *)this_01 + 0x198);
    iVar3 = *(int *)(gLawnApp + 0xd4);
    pSVar11 = (SalesProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
    iVar6 = SalesProgressBar::GetCurrentLevel(pSVar11);
    pSVar11 = (SalesProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
    uVar7 = SalesProgressBar::GetCurrentLevel(pSVar11);
    (*pcVar12)(this_01,(iVar1 - iVar3) / 2,iVar2 - iVar6,iVar3,uVar7);
    Sexy::ToWString(asStack_60);
    Sexy::ToWString(asStack_58);
    LevelOfTheDayRewardFooter::Initialize
              (this_01,(string *)(lVar9 + 8),asStack_68,awStack_48,(wstring *)aCStack_30,
               (Color *)aIStack_40);
    FUN_05476c50(aCStack_30);
    FUN_05476c50(awStack_48);
    (**(code **)(*(long *)this + 0x60))(this,this_01);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  }
  std::string::~string(asStack_58);
  std::string::~string(asStack_60);
  std::string::~string(asStack_68);
LAB_049b9e44:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDay_ProgressiveAwardDialog::layoutButtons() */

void __thiscall
LevelOfTheDay_ProgressiveAwardDialog::layoutButtons(LevelOfTheDay_ProgressiveAwardDialog *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  PVZ2UIButton *this_00;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  code *pcVar11;
  wstring awStack_80 [8];
  PVZ2UIImage aPStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(L"[LOD_BACK_TO_MAP]");
  Sexy::Color::Color((Color *)aPStack_40,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,0,(ButtonListener *)(this + 0xd8),awStack_80,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0xe8) = this_00;
  PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b74918,3);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b74720,3);
  PVZ2UIButton::SetDialogStates(this_00,aPStack_78,aPStack_40);
  uVar9 = *(undefined8 *)(*(long *)(this + 0xe8) + 0x150);
  FUN_05477b24(aPStack_40,awStack_80);
  iVar4 = Sexy::PrimeTypeface::StringWidth(uVar9,aPStack_40);
  iVar5 = FUN_049b9540(0x10);
  FUN_05476c50(aPStack_40);
  plVar10 = *(long **)(this + 0xe8);
  iVar1 = *(int *)(this + 0x50);
  pcVar11 = *(code **)(*plVar10 + 0x198);
  iVar6 = FUN_049b9540(10);
  iVar2 = *(int *)(this + 0x54);
  lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b74918);
  iVar3 = *(int *)(lVar8 + 0x3c);
  iVar7 = FUN_049b9540(10);
  lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b74918);
  (*pcVar11)(plVar10,(iVar1 - (iVar4 + iVar5)) - iVar6,(iVar2 - iVar3) - iVar7,iVar4 + iVar5,
             *(undefined4 *)(lVar8 + 0x3c));
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
  (**(code **)(**(long **)(this + 0xe8) + 0x188))(*(long **)(this + 0xe8),1);
  (**(code **)(**(long **)(this + 0xe8) + 0x158))(*(long **)(this + 0xe8),0);
  FUN_05476c50(awStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelOfTheDay_ProgressiveAwardDialog::OnProgressiveGoalMet() */

void __thiscall
LevelOfTheDay_ProgressiveAwardDialog::OnProgressiveGoalMet
          (LevelOfTheDay_ProgressiveAwardDialog *this)

{
  char *pcVar1;
  
  LevelOfTheDay_ProgressWidget::SlideOut(*(LevelOfTheDay_ProgressWidget **)(this + 0xe0));
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_LOD_Progress_Away");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDay_ProgressiveAwardDialog::layoutHeaderAndBoxes() */

void __thiscall
LevelOfTheDay_ProgressiveAwardDialog::layoutHeaderAndBoxes
          (LevelOfTheDay_ProgressiveAwardDialog *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  LevelOfTheDayMgr *pLVar7;
  long lVar8;
  char *pcVar9;
  LevelOfTheDayRewardBanner *this_00;
  SalesProgressBar *pSVar10;
  LevelOfTheDay_ProgressWidget *pLVar11;
  RenaissanceChallengeNewManager *this_01;
  code *pcVar12;
  string asStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [8];
  wstring awStack_48 [8];
  Insets aIStack_40 [16];
  CachedUIResourcePtr<Sexy::Image> aCStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar7 = (LevelOfTheDayMgr *)LevelOfTheDayMgr::GetInstance();
  lVar8 = LevelOfTheDayMgr::GetCurrentTheDayItem(pLVar7);
  if (lVar8 != 0) {
    pLVar7 = (LevelOfTheDayMgr *)LevelOfTheDayMgr::GetInstance();
    LevelOfTheDayMgr::IsTheLastDay(pLVar7);
    FUN_05475d88(asStack_78,lVar8 + 0x10);
    FUN_05475d88(asStack_70,lVar8 + 0x18);
    FUN_05475d88(asStack_68,lVar8 + 0x20);
    bVar2 = std::operator==(asStack_70,"[CHILDREN_DAY_WIN_HEADER_TITLE]");
    if (bVar2) {
      this_01 = (RenaissanceChallengeNewManager *)
                Sexy::LazySingleton<RenaissanceChallengeNewManager>::GetInstance();
      uVar6 = RenaissanceChallengeNewManager::GetResourceId(this_01);
      if (0 < (int)uVar6) {
        Sexy::StrFormat("[CHILDREN_DAY_WIN_HEADER_TITLE_%d]",(string *)aCStack_30,(ulong)uVar6);
        FUN_05474278(asStack_70,(string *)aCStack_30);
        std::string::~string((string *)aCStack_30);
      }
    }
    Sexy::Insets::Insets(aIStack_40,0xb8,0x2b,0x43,0xff);
    pcVar9 = (char *)FUN_0547429c(asStack_78);
    CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr(aCStack_30,pcVar9);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)aCStack_30);
    CachedUIResourcePtr<Sexy::Image>::~CachedUIResourcePtr(aCStack_30);
    Sexy::ToWString(asStack_70);
    TodStringTranslate((wstring *)aCStack_30);
    FUN_05476c50(aCStack_30);
    Sexy::ToWString(asStack_68);
    TodStringTranslate((wstring *)aCStack_30);
    FUN_05476c50(aCStack_30);
    Sexy::StrFormat(L"%d",awStack_48,7);
    TodReplaceString(awStack_50,L"{LARGE_PINATA_INTERVAL}",awStack_48);
    FUN_054766c8(awStack_50,aCStack_30);
    FUN_05476c50(aCStack_30);
    FUN_05476c50(awStack_48);
    this_00 = ::operator_new(0x110);
    LevelOfTheDayRewardBanner::LevelOfTheDayRewardBanner(this_00);
    pcVar12 = *(code **)(*(long *)this_00 + 0x198);
    iVar3 = FUN_049b9540(0x2f9);
    iVar1 = *(int *)(this + 0x50);
    pSVar10 = (SalesProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
    uVar4 = SalesProgressBar::GetCurrentLevel(pSVar10);
    (*pcVar12)(this_00,(iVar1 - iVar3) / 2,0,iVar3,uVar4);
    LevelOfTheDayRewardBanner::Initialize
              (this_00,asStack_78,awStack_58,awStack_50,(Color *)aIStack_40);
    (**(code **)(*(long *)this + 0x60))(this,this_00);
    pLVar11 = ::operator_new(0x150);
    LevelOfTheDay_ProgressWidget::LevelOfTheDay_ProgressWidget(pLVar11,(Widget *)this);
    *(LevelOfTheDay_ProgressWidget **)(this + 0xe0) = pLVar11;
    (**(code **)(*(long *)this + 0x60))(this,pLVar11);
    iVar1 = *(int *)(this + 0x50);
    iVar3 = FUN_049b9540(0x1b);
    pSVar10 = (SalesProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar10);
    pLVar11 = *(LevelOfTheDay_ProgressWidget **)(this + 0xe0);
    Sexy::Point::Point((Point *)aCStack_30,iVar1 / 2 - *(int *)(pLVar11 + 0x50) / 2,iVar3 + iVar5);
    LevelOfTheDay_ProgressWidget::SetDestinationLocation(pLVar11,aCStack_30);
    LevelOfTheDay_ProgressWidget::SlideIn(*(LevelOfTheDay_ProgressWidget **)(this + 0xe0));
    FUN_05476c50(awStack_50);
    FUN_05476c50(awStack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
    std::string::~string(asStack_68);
    std::string::~string(asStack_70);
    std::string::~string(asStack_78);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* LevelOfTheDay_ProgressiveAwardDialog::layoutWidget() */

void __thiscall
LevelOfTheDay_ProgressiveAwardDialog::layoutWidget(LevelOfTheDay_ProgressiveAwardDialog *this)

{
  layoutHeaderAndBoxes(this);
  layoutFooter(this);
  layoutButtons(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDay_ProgressiveAwardDialog::LevelOfTheDay_ProgressiveAwardDialog() */

void __thiscall
LevelOfTheDay_ProgressiveAwardDialog::LevelOfTheDay_ProgressiveAwardDialog
          (LevelOfTheDay_ProgressiveAwardDialog *this)

{
  LawnApp *pLVar1;
  undefined4 uVar2;
  string asStack_40 [8];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_069254a0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069257c8;
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0xf0),(DummyInit *)0x0);
  PlantHeadshot::Resize((PlantHeadshot *)this,(TRect *)(gLawnApp + 0x71c));
  *(undefined4 *)(this + 0x124) = 0;
  uVar2 = PVZ_EOT();
  this[0x120] = (LevelOfTheDay_ProgressiveAwardDialog)0x0;
  *(undefined4 *)(this + 0x128) = uVar2;
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0xf0),(Delegate2 *)aDStack_38);
  pLVar1 = gLawnApp;
  std::string::string(asStack_40,"UI_LevelOfTheDay");
  LawnApp::LoadGroup(pLVar1,asStack_40);
  std::string::~string(asStack_40);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_40,"UPDATE_UI_LevelOfTheDay");
  LawnApp::LoadGroup(pLVar1,asStack_40);
  std::string::~string(asStack_40);
  nop();
  layoutWidget(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

