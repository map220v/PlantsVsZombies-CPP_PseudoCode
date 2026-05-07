// Class: SummerEventEntranceUI


/* SummerEventEntranceUI::updateBtnState() */

void __thiscall SummerEventEntranceUI::updateBtnState(SummerEventEntranceUI *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x188);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x188))(plVar1,*(int *)(this + 0x184) == 0);
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SummerEventEntranceUI::scrollRight() */

void __thiscall SummerEventEntranceUI::scrollRight(SummerEventEntranceUI *this)

{
  TimeLineTrack<float> *this_00;
  float fVar1;
  float local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x180) == 0) {
    *(undefined4 *)(this + 0x180) = 1;
    this_00 = (TimeLineTrack<float> *)(this + 0x160);
    fVar1 = (float)PVZ_RealT();
    local_10[0] = (float)TimeLineTrack<float>::GetValueAt(this_00,fVar1);
    TimeLineTrack<float>::Initialize(this_00,local_10[0]);
    PVZ_RealT();
    TimeLineTrack<float>::AddKeyFrame(this_00,local_10,4);
    fVar1 = (float)PVZ_RealT();
    local_10[1] = -1.0;
    TimeLineTrack<float>::AddKeyFrame((TimeLineTrack<float> *)(fVar1 + 0.2),this_00,local_10 + 1,4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SummerEventEntranceUI::scrollLeft() */

void __thiscall SummerEventEntranceUI::scrollLeft(SummerEventEntranceUI *this)

{
  TimeLineTrack<float> *this_00;
  float fVar1;
  float local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x180) == 1) {
    *(undefined4 *)(this + 0x180) = 0;
    this_00 = (TimeLineTrack<float> *)(this + 0x160);
    fVar1 = (float)PVZ_RealT();
    local_10[0] = (float)TimeLineTrack<float>::GetValueAt(this_00,fVar1);
    TimeLineTrack<float>::Initialize(this_00,local_10[0]);
    PVZ_RealT();
    TimeLineTrack<float>::AddKeyFrame(this_00,local_10,4);
    fVar1 = (float)PVZ_RealT();
    local_10[1] = 0.0;
    TimeLineTrack<float>::AddKeyFrame((TimeLineTrack<float> *)(fVar1 + 0.2),this_00,local_10 + 1,4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SummerEventEntranceUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void SummerEventEntranceUI::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to SummerEventEntranceUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
SummerEventEntranceUI::ScrollTargetReached(SummerEventEntranceUI *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xd8));
  return;
}


/* SummerEventEntranceUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void SummerEventEntranceUI::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to SummerEventEntranceUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
SummerEventEntranceUI::ScrollTargetInterrupted(SummerEventEntranceUI *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xd8));
  return;
}


/* SummerEventEntranceUI::onFinishBuyChallengeCount(bool const&) */

void __thiscall
SummerEventEntranceUI::onFinishBuyChallengeCount(SummerEventEntranceUI *this,bool *param_1)

{
  if (*param_1 != false) {
    return;
  }
  LawnApp::ShowGemStoreConfirm(gLawnApp,2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SummerEventEntranceUI::GetModeType(FestivalGameMode) */

void SummerEventEntranceUI::GetModeType(string *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 *__n;
  undefined1 auStack_10 [8];
  long local_8;
  
  __n = auStack_10;
  local_8 = ___stack_chk_guard;
  std::string::string(param_1,"");
  nop();
  switch(param_3) {
  case 0:
    std::string::append(param_1,"festival_yeti",(size_t)__n);
    break;
  case 1:
    std::string::append(param_1,"festival_gargantuar",(size_t)__n);
    break;
  case 2:
    std::string::append(param_1,"festival_devil",(size_t)__n);
    break;
  case 3:
    std::string::append(param_1,"festival_wealthgod",(size_t)__n);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SummerEventEntranceUI::GetLeveloftheDayLevelName() const */

void __thiscall SummerEventEntranceUI::GetLeveloftheDayLevelName(SummerEventEntranceUI *this)

{
  long lVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  LevelOfTheDayMgr *this_02;
  long lVar3;
  long lVar4;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 == (PlayerInfo *)0x0) {
LAB_043c18b0:
    std::string::string(in_x8,"");
    nop();
  }
  else {
    iVar2 = PlayerInfo::GetLevelOfTheDayInfo(this_01,0x2a0a);
    if (iVar2 < 1) {
      lVar4 = 0;
    }
    else {
      if (7 < iVar2) goto LAB_043c18b0;
      lVar4 = (long)(iVar2 + -1);
    }
    this_02 = (LevelOfTheDayMgr *)LevelOfTheDayMgr::GetInstance();
    lVar3 = LevelOfTheDayMgr::GetCurrentTheDayItem(this_02);
    FUN_043c135c(*(undefined8 *)(lVar3 + 0x80),lVar4);
    FUN_05475d88();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SummerEventEntranceUI::Update() */

void __thiscall SummerEventEntranceUI::Update(SummerEventEntranceUI *this)

{
  char cVar1;
  ulong uVar2;
  long *plVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  float fVar7;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar5 = 0;
  fVar7 = (float)PVZ_RealT();
  fVar7 = (float)TimeLineTrack<float>::GetValueAt((TimeLineTrack<float> *)(this + 0x160),fVar7);
  uVar6 = *(undefined8 *)(this + 0x148);
  uVar2 = FUN_043c1334(uVar6,*(undefined8 *)(this + 0x150));
  if (uVar2 != 0) {
    do {
      iVar4 = (int)((float)(*(int *)(this + 0x50) * (int)uVar5) +
                   (float)*(int *)(this + 0x50) * fVar7);
      plVar3 = (long *)FUN_043c1340(uVar6,uVar5);
      plVar3 = (long *)*plVar3;
      if (iVar4 != (int)plVar3[9]) {
        (**(code **)(*plVar3 + 0x1a8))(plVar3,iVar4,0);
        uVar6 = *(undefined8 *)(this + 0x148);
        uVar2 = FUN_043c1334(uVar6,*(undefined8 *)(this + 0x150));
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  if (*(long *)(this + 0xe8) != 0) {
    Sexy::LazySingleton<FestivalManager>::GetInstance();
    EntityComponent_GroundEffect::GetEffect();
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
    plVar3 = *(long **)(this + 0xe8);
    if (cVar1 == '\0') {
      (**(code **)(*plVar3 + 0x188))(plVar3,1);
    }
    else {
      (**(code **)(*plVar3 + 0x188))(plVar3,0);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SummerEventEntranceUI::SelectGameLevel(int) */

void __thiscall SummerEventEntranceUI::SelectGameLevel(SummerEventEntranceUI *this,int param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x130));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x130));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if ((TitleScreen *)*puVar3 != (TitleScreen *)0x0) {
      TitleScreen::SetSkipIntro((TitleScreen *)*puVar3,false);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (-1 < param_1) {
    uVar4 = *(undefined8 *)(this + 0x130);
    uVar2 = FUN_043c1348(uVar4,*(undefined8 *)(this + 0x138));
    if ((ulong)(long)param_1 < uVar2) {
      puVar3 = (undefined8 *)FUN_043c1354(uVar4,(long)param_1);
      if ((TitleScreen *)*puVar3 != (TitleScreen *)0x0) {
        TitleScreen::SetSkipIntro((TitleScreen *)*puVar3,true);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SummerEventEntranceUI::Draw(Sexy::Graphics*) */

void __thiscall SummerEventEntranceUI::Draw(SummerEventEntranceUI *this,Graphics *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  SalesProgressBar *pSVar10;
  long lVar11;
  string *extraout_x1;
  GraphicsAutoState aGStack_60 [8];
  RtMixedPtrBase aRStack_58 [8];
  undefined1 auStack_50 [8];
  Insets aIStack_48 [16];
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_1,0.5);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_60,param_1);
  Sexy::Graphics::ClearClipRect(param_1);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0xf8));
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b044a0);
  DrawImageTiled(0x3f800000,param_1,aIStack_18,uVar9);
  iVar1 = *(int *)(this + 0xfc);
  iVar5 = *(int *)(this + 0xf8);
  iVar6 = *(int *)(this + 0x104);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04018);
  iVar3 = SalesProgressBar::GetCurrentLevel(pSVar10);
  iVar7 = *(int *)(this + 0x100);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04018);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar10);
  Sexy::Insets::Insets(aIStack_48,iVar5,(iVar1 + iVar6) - iVar3,iVar7,iVar4);
  Sexy::Insets::Insets(aIStack_18,aIStack_48);
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04018);
  Draw3SliceImage(param_1,aIStack_18,uVar9);
  iVar5 = FUN_043c13d4(0x12);
  iVar1 = *(int *)(this + 0xfc);
  iVar6 = FUN_043c13d4(100);
  Sexy::Insets::Insets(aIStack_28,*(int *)(this + 0xf8),iVar1 - iVar5,*(int *)(this + 0x100),iVar6);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x128,aIStack_28,uVar9,aIStack_18,5,1);
  Sexy::Graphics::ClearClipRect(param_1);
  iVar7 = FUN_043c13d4(0xfffffff3);
  iVar1 = *(int *)(this + 0xf8);
  iVar3 = FUN_043c13d4(0xfffffff7);
  iVar5 = *(int *)(this + 0xfc);
  iVar4 = FUN_043c13d4(0x1a);
  iVar6 = *(int *)(this + 0x100);
  iVar8 = FUN_043c13d4(0x17);
  Sexy::Insets::Insets
            (aIStack_38,iVar7 + iVar1,iVar3 + iVar5,iVar4 + iVar6,iVar8 + *(int *)(this + 0x104));
  Sexy::Insets::Insets(aIStack_18,aIStack_38);
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04420);
  Draw9SliceImage(param_1,aIStack_18,uVar9);
  if (*(int *)(this + 0x180) == 0) {
    TodStringTranslate(L"[FESTIVALGAMEMODE_DES]");
    iVar1 = *(int *)(this + 0xfc);
    iVar5 = *(int *)(this + 0xf8);
    iVar6 = *(int *)(this + 0x104);
    lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04018);
    iVar7 = *(int *)(lVar11 + 0x3c);
    iVar3 = *(int *)(this + 0x100);
    lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04018);
    Sexy::Insets::Insets(aIStack_28,iVar5,(iVar1 + iVar6) - iVar7,iVar3,*(int *)(lVar11 + 0x3c));
    uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,auStack_50,aIStack_28,uVar9,aIStack_18,5,1);
    FUN_05476c50(auStack_50);
  }
  else if (*(int *)(this + 0x180) == 1) {
    Sexy::LazySingleton<FestivalManager>::GetInstance();
    EntityComponent_GroundEffect::GetEffect();
    cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_58);
    if (cVar2 != '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
      MagentoProductProps::GetLocalizedDescription();
      Sexy::UTF8StringToWString((Sexy *)aIStack_28,extraout_x1);
      TodStringTranslate((wstring *)aIStack_18);
      FUN_05476c50(aIStack_18);
      std::string::~string((string *)aIStack_28);
      iVar1 = *(int *)(this + 0xfc);
      iVar5 = *(int *)(this + 0x104);
      iVar6 = *(int *)(this + 0xf8);
      lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04018);
      iVar7 = *(int *)(lVar11 + 0x3c);
      iVar3 = *(int *)(this + 0x100);
      lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04018);
      Sexy::Insets::Insets(aIStack_28,iVar6,(iVar1 + iVar5) - iVar7,iVar3,*(int *)(lVar11 + 0x3c));
      uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
      Sexy::Color::Color((Color *)aIStack_18,1);
      WriteWordInRect(param_1,auStack_50,aIStack_28,uVar9,aIStack_18,5,1);
      FUN_05476c50(auStack_50);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SummerEventEntranceUI::~SummerEventEntranceUI() */

void __thiscall SummerEventEntranceUI::~SummerEventEntranceUI(SummerEventEntranceUI *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_068446f0;
  *(undefined ***)(this + 0xd8) = &PTR__SummerEventEntranceUI_06844a30;
  *(undefined **)(this + 0xe0) = &DAT_06844a78;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Store");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Activity");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  TimeLineTrack<float>::~TimeLineTrack((TimeLineTrack<float> *)(this + 0x160));
  std::vector<SettingsDialogPane*,std::allocator<SettingsDialogPane*>>::~vector
            ((vector<SettingsDialogPane*,std::allocator<SettingsDialogPane*>> *)(this + 0x148));
  std::vector<SummerEventGameWidget*,std::allocator<SummerEventGameWidget*>>::~vector
            ((vector<SummerEventGameWidget*,std::allocator<SummerEventGameWidget*>> *)(this + 0x130)
            );
  FUN_05476c50(this + 0x128);
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to SummerEventEntranceUI::~SummerEventEntranceUI() */

void __thiscall SummerEventEntranceUI::~SummerEventEntranceUI(SummerEventEntranceUI *this)

{
  ~SummerEventEntranceUI(this + -0xd8);
  return;
}


/* SummerEventEntranceUI::~SummerEventEntranceUI() */

void __thiscall SummerEventEntranceUI::~SummerEventEntranceUI(SummerEventEntranceUI *this)

{
  ~SummerEventEntranceUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to SummerEventEntranceUI::~SummerEventEntranceUI() */

void __thiscall SummerEventEntranceUI::~SummerEventEntranceUI(SummerEventEntranceUI *this)

{
  ~SummerEventEntranceUI(this + -0xd8);
  return;
}


/* SummerEventEntranceUI::ButtonPress(int) */

void SummerEventEntranceUI::ButtonPress(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Press");
  return;
}


/* non-virtual thunk to SummerEventEntranceUI::ButtonPress(int) */

void __thiscall SummerEventEntranceUI::ButtonPress(SummerEventEntranceUI *this,int param_1)

{
  ButtonPress((int)this + -0xe0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SummerEventEntranceUI::TranslateLevelForLog(std::string) const */

void SummerEventEntranceUI::TranslateLevelForLog
               (DString *param_1,undefined8 param_2,string *param_3)

{
  long lVar1;
  ulong uVar2;
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString::DString(param_1,param_3);
  lVar1 = DString::findString(param_1,"Birthday");
  if ((lVar1 != -1) && (lVar1 = DString::findNumber(param_1,-1), lVar1 != -1)) {
    DString::subString((long)param_1);
    uVar2 = DString::toInt(aDStack_18);
    DString::format((char *)param_1,"Childrensday_%02d",uVar2 & 0xffffffff);
    DString::~DString(aDStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SummerEventEntranceUI::ButtonDepress(int) */

void __thiscall SummerEventEntranceUI::ButtonDepress(SummerEventEntranceUI *this,int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  ulong uVar5;
  SecretGachaMgr *this_00;
  long lVar6;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  ActivityConfig *this_03;
  int *piVar7;
  SummerEventEntranceUI *pSVar8;
  FestivalManager *this_04;
  undefined8 uVar9;
  undefined8 uVar10;
  string *psVar11;
  AndroidAsyncIOFile *this_05;
  TGALogMgr *pTVar12;
  undefined *puVar13;
  string *__n;
  string asStack_80 [8];
  string asStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [24];
  undefined1 auStack_50 [24];
  string asStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar4,"Play_UI_Button_Click_Release");
  if (99 < param_1) {
    uVar5 = FUN_043c1348(*(undefined8 *)(this + 0x130),*(undefined8 *)(this + 0x138));
    if ((ulong)(long)(param_1 + -100) < uVar5) {
      if (*(int *)(this + 0x180) == 0) {
        SelectGameLevel(this,param_1 + -100);
        *(int *)(this + 0x184) = param_1 + -99;
        updateBtnState(this);
        this_00 = (SecretGachaMgr *)Sexy::LazySingleton<LevelOfTheDaySystem>::GetInstance();
        SecretGachaMgr::SetSelectId(this_00,*(int *)(this + 0x184));
      }
      goto switchD_043c28c8_default;
    }
  }
  switch(param_1) {
  case 1000:
    LawnApp::killSummerEventEntranceUI(gLawnApp);
    break;
  case 0x3e9:
    nop();
    break;
  case 0x3ea:
    this_04 = (FestivalManager *)Sexy::LazySingleton<FestivalManager>::GetInstance();
    FestivalManager::ResetWishProps(this_04);
    scrollLeft(this);
    break;
  case 0x3eb:
    lVar6 = LawnApp::GetActivityConfig();
    if (lVar6 != 0) {
      this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
      this_03 = (ActivityConfig *)LawnApp::GetActivityConfig();
      piVar7 = (int *)ActivityConfig::GetRefreshPlantsPurchaseData(this_03);
      iVar3 = piVar7[1];
      if (*piVar7 == 2) {
        iVar2 = PlayerInfo::GetNumCoins(this_02,true);
        if ((iVar2 < iVar3) || (iVar3 = PlayerInfo::SubtractCoins(this_02,iVar3), iVar3 < 0)) {
          LawnApp::ShowGemStoreConfirm(gLawnApp,0,0);
        }
      }
      else if (*piVar7 == 0) {
        iVar2 = PlayerInfo::GetNumGems(this_02,true);
        if (iVar2 < iVar3) {
          LawnApp::ShowGemStoreConfirm(gLawnApp,2,0);
        }
        else {
          pSVar8 = ::operator_new(0x28);
          ICloudRequestCallbackFunction<SummerEventEntranceUI,bool>::ICloudRequestCallbackFunction
                    (pSVar8,(_func_void_bool_ptr *)this);
          PlayerInfo::SubtractGems
                    (this_02,1,0x3e9,(ICloudRequestCallbackFunctionBase *)pSVar8,1,false);
        }
      }
    }
    break;
  case 0x3ec:
    GetLeveloftheDayLevelName(this);
    bVar1 = std::operator!=("",asStack_80);
    if (bVar1) {
      Set8BytesTo0(asStack_78);
      iVar3 = *(int *)(this + 0x184);
      if (iVar3 == 1) {
        puVar13 = &DAT_06b045f0;
      }
      else if (iVar3 == 2) {
        puVar13 = &DAT_06b04320;
      }
      else {
        if (iVar3 != 3) {
          std::string::~string(asStack_78);
          std::string::~string(asStack_80);
          break;
        }
        puVar13 = &DAT_06b03fc0;
      }
      FUN_031dcc6c(asStack_38,asStack_80,puVar13);
      FUN_05474278(asStack_78,asStack_38);
      std::string::~string(asStack_38);
      uVar9 = FUN_0547429c(asStack_80);
      uVar10 = FUN_0547429c(asStack_78);
      Sexy::OutputDebugStrF
                ((wchar_t *)"showFlag---> SummerEventEntranceUI  level %s, strLevelWitHard %s",uVar9
                 ,uVar10);
      GameStateMgr::StartLevel(gGameStateMgr,&DAT_06b04740,asStack_78,0xffffffff,1,1,0);
      FUN_05475d88(asStack_68,asStack_80);
      TranslateLevelForLog(asStack_38,this,asStack_68);
      pcVar4 = (char *)DString::c_str((DString *)asStack_38);
      std::string::string(asStack_70,pcVar4);
      nop();
      DString::~DString((DString *)asStack_38);
      std::string::~string(asStack_68);
      puVar13 = gMessageRouter;
      FUN_05475d88(asStack_38,asStack_70);
      MessageRouter::Post<std::string_const&,std::string>
                ((MessageRouter *)puVar13,Message::PinataParty,asStack_38);
      std::string::~string(asStack_38);
      psVar11 = (string *)LevelOfTheDayMgr::GetInstance();
      __n = asStack_68;
      std::string::string(asStack_38,"birthzSummerEvent");
      CustomLevelSettingManager::SetLinkPhoneNumber(psVar11);
      std::string::~string(asStack_38);
      nop();
      this_05 = (AndroidAsyncIOFile *)Sexy::LazySingleton<LevelOfTheDaySystem>::GetInstance();
      iVar3 = Sexy::AndroidAsyncIOFile::GetSize(this_05);
      if (iVar3 == 8) {
        TGASecretStore::TGASecretStore((TGASecretStore *)asStack_68);
        DString::DString((DString *)asStack_38,2);
        pcVar4 = (char *)DString::c_str((DString *)asStack_38);
        std::string::append(asStack_68,pcVar4,(size_t)__n);
        DString::~DString((DString *)asStack_38);
        thunk_FUN_05475e00(auStack_50,asStack_70);
        pTVar12 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
        TGASecretStore::TGASecretStore((TGASecretStore *)asStack_38,(TGASecretStore *)asStack_68);
        TGALogMgr::LogRenaissanceChallenge(pTVar12,asStack_38);
        DropGroupNode::~DropGroupNode((DropGroupNode *)asStack_38);
        DropGroupNode::~DropGroupNode((DropGroupNode *)asStack_68);
      }
      std::string::~string(asStack_70);
      std::string::~string(asStack_78);
    }
    LawnApp::killSummerEventEntranceUI(gLawnApp);
    LawnApp::KillActivityCollection(gLawnApp);
    std::string::~string(asStack_80);
  }
switchD_043c28c8_default:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to SummerEventEntranceUI::ButtonDepress(int) */

void __thiscall SummerEventEntranceUI::ButtonDepress(SummerEventEntranceUI *this,int param_1)

{
  ButtonDepress(this + -0xe0,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SummerEventEntranceUI::TranslateLevelForInt() const */

void __thiscall SummerEventEntranceUI::TranslateLevelForInt(SummerEventEntranceUI *this)

{
  undefined4 uVar1;
  long lVar2;
  DString aDStack_28 [16];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetLeveloftheDayLevelName(this);
  DString::DString(aDStack_28,asStack_18);
  std::string::~string(asStack_18);
  lVar2 = DString::findString(aDStack_28,"Birthday");
  if ((lVar2 == -1) || (lVar2 = DString::findNumber(aDStack_28,-1), lVar2 == -1)) {
    uVar1 = 0;
  }
  else {
    DString::subString((long)aDStack_28);
    uVar1 = DString::toInt((DString *)asStack_18);
    DString::~DString((DString *)asStack_18);
  }
  DString::~DString(aDStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* SummerEventEntranceUI::setupGameLevelScreen() */

void __thiscall SummerEventEntranceUI::setupGameLevelScreen(SummerEventEntranceUI *this)

{
  vector<SummerEventGameWidget*,std::allocator<SummerEventGameWidget*>> *this_00;
  wstring *pwVar1;
  ButtonListener *pBVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  PVZ2UIImageWidget *this_01;
  Image *pIVar11;
  long lVar12;
  SettingsDialogPane *pSVar13;
  GameSummerEventPanel *this_02;
  LotteryResultProgressBar *pLVar14;
  SummerEventGameWidget *pSVar15;
  SalesProgressBar *pSVar16;
  PVZ2UIButton *pPVar17;
  undefined8 uVar18;
  long *plVar19;
  code *pcVar20;
  SettingsDialogPane *local_d8;
  SummerEventGameWidget *local_d0;
  SummerEventGameWidget *local_c8;
  SummerEventGameWidget *local_c0;
  wstring awStack_b8 [8];
  SettingsDialogPane *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  Insets aIStack_98 [16];
  Insets aIStack_88 [16];
  PVZ2UIImage aPStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (vector<SummerEventGameWidget*,std::allocator<SummerEventGameWidget*>> *)(this + 0x130);
  this_01 = ::operator_new(0xe8);
  PVZ2UIImageWidget::PVZ2UIImageWidget(this_01);
  pwVar1 = (wstring *)(this + 0x128);
  Sexy::Insets::Insets((Insets *)&local_a8);
  iVar3 = TranslateLevelForInt(this);
  TodStringTranslate(L"[SUMMEREVENTGAMEMODE_DAYS_TITLE]");
  pBVar2 = (ButtonListener *)(this + 0xe0);
  FUN_054766c8(pwVar1,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  TodReplaceNumberString(pwVar1,L"{DAY}",iVar3);
  FUN_054766c8(pwVar1,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b040e8);
  LevelEditorWaveEventPortalPanel::SetBgImage((LevelEditorWaveEventPortalPanel *)this_01,pIVar11);
  iVar3 = *(int *)(this + 0x100);
  iVar5 = *(int *)(this + 0xf8);
  lVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b040e8);
  iVar6 = *(int *)(lVar12 + 0x38);
  iVar4 = FUN_043c13d4(0);
  lVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b040e8);
  iVar9 = *(int *)(lVar12 + 0x38);
  lVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b040e8);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar5 + (iVar3 - iVar6) / 2,iVar4,iVar9,*(int *)(lVar12 + 0x3c));
  local_a8 = local_40;
  uStack_a0 = uStack_38;
  lVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b040e8);
  iVar3 = *(int *)(lVar12 + 0x3c);
  iVar5 = FUN_043c13d4(0x10);
  iVar3 = iVar3 + iVar5;
  (**(code **)(*(long *)this_01 + 0x1a0))(this_01,(Insets *)&local_a8);
  FUN_05478178((Insets *)&local_40,&DAT_056f11a8,aPStack_78);
  pSVar13 = ::operator_new(0xe8);
  SettingsDialogPane::SettingsDialogPane(pSVar13,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  nop();
  (**(code **)(*(long *)pSVar13 + 0x198))
            (pSVar13,0,0,*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x54));
  (**(code **)(*(long *)this + 0x60))(this,pSVar13);
  std::vector<SettingsDialogPane*,std::allocator<SettingsDialogPane*>>::push_back
            ((vector<SettingsDialogPane*,std::allocator<SettingsDialogPane*>> *)(this + 0x148),
             &local_d8);
  this_02 = ::operator_new(0xd8);
  *(undefined8 *)this_02 = 0;
  *(undefined8 *)(this_02 + 8) = 0;
  *(undefined8 *)(this_02 + 0x10) = 0;
  *(undefined8 *)(this_02 + 0x18) = 0;
  *(undefined8 *)(this_02 + 0x20) = 0;
  *(undefined8 *)(this_02 + 0x28) = 0;
  *(undefined8 *)(this_02 + 0x30) = 0;
  *(undefined8 *)(this_02 + 0x38) = 0;
  *(undefined8 *)(this_02 + 0x40) = 0;
  *(undefined8 *)(this_02 + 0x48) = 0;
  *(undefined8 *)(this_02 + 0x50) = 0;
  *(undefined8 *)(this_02 + 0x58) = 0;
  *(undefined8 *)(this_02 + 0x60) = 0;
  *(undefined8 *)(this_02 + 0x68) = 0;
  *(undefined8 *)(this_02 + 0x70) = 0;
  *(undefined8 *)(this_02 + 0x78) = 0;
  *(undefined8 *)(this_02 + 0x80) = 0;
  *(undefined8 *)(this_02 + 0x88) = 0;
  *(undefined8 *)(this_02 + 0x90) = 0;
  *(undefined8 *)(this_02 + 0x98) = 0;
  *(undefined8 *)(this_02 + 0xa0) = 0;
  *(undefined8 *)(this_02 + 0xa8) = 0;
  *(undefined8 *)(this_02 + 0xb0) = 0;
  *(undefined8 *)(this_02 + 0xb8) = 0;
  *(undefined8 *)(this_02 + 0xc0) = 0;
  *(undefined8 *)(this_02 + 200) = 0;
  *(undefined8 *)(this_02 + 0xd0) = 0;
  GameSummerEventPanel::GameSummerEventPanel(this_02);
  (**(code **)(*(long *)this_02 + 0x1a0))(this_02,this + 0x108);
  iVar6 = FUN_043c13d4(10);
  iVar5 = *(int *)(this + 0x110);
  *(int *)(this_02 + 0xd4) = iVar6 + iVar3;
  pLVar14 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b044f0);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
  iVar6 = (iVar5 + iVar6 * -3) / 6;
  pSVar15 = ::operator_new(0xf8);
  SummerEventGameWidget::SummerEventGameWidget(pSVar15,0,100,pBVar2);
  pcVar20 = *(code **)(*(long *)pSVar15 + 0x198);
  iVar5 = FUN_043c13d4(0x1e);
  pLVar14 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b044f0);
  uVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
  pSVar16 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b044f0);
  uVar8 = SalesProgressBar::GetCurrentLevel(pSVar16);
  (*pcVar20)(pSVar15,iVar6,iVar5 + iVar3,uVar7,uVar8);
  (**(code **)(*(long *)this_02 + 0x60))(this_02,pSVar15);
  std::vector<SummerEventGameWidget*,std::allocator<SummerEventGameWidget*>>::push_back
            (this_00,&local_d0);
  pLVar14 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b044f0);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
  iVar5 = iVar5 + iVar6 * 3;
  pSVar15 = ::operator_new(0xf8);
  SummerEventGameWidget::SummerEventGameWidget(pSVar15,1,0x65,pBVar2);
  pcVar20 = *(code **)(*(long *)pSVar15 + 0x198);
  iVar9 = FUN_043c13d4(0x1e);
  pLVar14 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04448);
  uVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
  pSVar16 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04448);
  uVar8 = SalesProgressBar::GetCurrentLevel(pSVar16);
  (*pcVar20)(pSVar15,iVar5,iVar9 + iVar3,uVar7,uVar8);
  (**(code **)(*(long *)this_02 + 0x60))(this_02,pSVar15);
  std::vector<SummerEventGameWidget*,std::allocator<SummerEventGameWidget*>>::push_back
            (this_00,&local_c8);
  pLVar14 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04448);
  iVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
  iVar5 = iVar5 + iVar6 * 2 + iVar9;
  pSVar15 = ::operator_new(0xf8);
  SummerEventGameWidget::SummerEventGameWidget(pSVar15,2,0x66,pBVar2);
  pcVar20 = *(code **)(*(long *)pSVar15 + 0x198);
  iVar6 = FUN_043c13d4(0x1e);
  pLVar14 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03f70);
  uVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
  pSVar16 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03f70);
  uVar8 = SalesProgressBar::GetCurrentLevel(pSVar16);
  (*pcVar20)(pSVar15,iVar5,iVar6 + iVar3,uVar7,uVar8);
  (**(code **)(*(long *)this_02 + 0x60))(this_02,pSVar15);
  std::vector<SummerEventGameWidget*,std::allocator<SummerEventGameWidget*>>::push_back
            (this_00,&local_c0);
  FUN_05478178(awStack_b8,L"[QUEST_PLAY_LABEL]",(Insets *)&local_40);
  nop();
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar17 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar17,0x3ec,pBVar2,awStack_b8,(Color *)&local_40);
  lVar12 = *(long *)pPVar17;
  *(PVZ2UIButton **)(this + 0x188) = pPVar17;
  pcVar20 = *(code **)(lVar12 + 0x198);
  iVar6 = FUN_043c13d4(0xd0);
  iVar9 = FUN_043c13d4(0xb9);
  pLVar14 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b043d0);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
  pSVar16 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b043d0);
  iVar10 = SalesProgressBar::GetCurrentLevel(pSVar16);
  (*pcVar20)(pPVar17,iVar5 - iVar6,iVar9 + iVar3,iVar4 << 1,(iVar10 * 6) / 5);
  pPVar17 = *(PVZ2UIButton **)(this + 0x188);
  PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b043d0,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b04230,3);
  PVZ2UIButton::SetDialogStates(pPVar17,aPStack_78,(PVZ2UIImage *)&local_40);
  updateBtnState(this);
  (**(code **)(*(long *)this_02 + 0x60))(this_02,*(undefined8 *)(this + 0x188));
  SettingsDialogPane::SetContentsWidget(pSVar13,(Widget *)this_02);
  FUN_05478178((Insets *)&local_40,&DAT_056f11a8,aPStack_78);
  pSVar13 = ::operator_new(0xe8);
  SettingsDialogPane::SettingsDialogPane(pSVar13,(Insets *)&local_40);
  local_b0 = pSVar13;
  FUN_05476c50((Insets *)&local_40);
  nop();
  (**(code **)(*(long *)local_b0 + 0x198))
            (local_b0,*(undefined4 *)(this + 0x50),0,*(undefined4 *)(this + 0x50),
             *(undefined4 *)(this + 0x54));
  (**(code **)(*(long *)this + 0x60))(this,local_b0);
  std::vector<SettingsDialogPane*,std::allocator<SettingsDialogPane*>>::push_back
            ((vector<SettingsDialogPane*,std::allocator<SettingsDialogPane*>> *)(this + 0x148),
             &local_b0);
  FUN_05478178(aPStack_78,&DAT_056f11a8,aIStack_88);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar17 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar17,0x3ea,pBVar2,(wstring *)aPStack_78,(Color *)&local_40);
  FUN_05476c50(aPStack_78);
  nop();
  pcVar20 = *(code **)(*(long *)pPVar17 + 0x198);
  iVar5 = FUN_043c13d4(0x50);
  iVar3 = *(int *)(this + 0x50);
  iVar6 = FUN_043c13d4(0x37);
  uVar7 = FUN_043c13d4(0x1e0);
  lVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03f20);
  (*pcVar20)(pPVar17,(iVar3 / 2 - iVar5) - iVar6,uVar7,iVar5,*(undefined4 *)(lVar12 + 0x3c));
  PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b03f20,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b04650,3);
  PVZ2UIButton::SetDialogStates(pPVar17,aPStack_78,(PVZ2UIImage *)&local_40);
  pcVar20 = *(code **)(*(long *)pPVar17 + 800);
  uVar18 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
  (*pcVar20)(pPVar17,uVar18);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b04208,1);
  PVZ2UIButton::AddImage(pPVar17,(Insets *)&local_40,0);
  (**(code **)(*(long *)local_b0 + 0x60))(local_b0,pPVar17);
  FUN_05478178(aPStack_78,L"[MAINMENU_PLAY]",aIStack_88);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar17 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar17,0x3e9,pBVar2,(wstring *)aPStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0xe8) = pPVar17;
  FUN_05476c50(aPStack_78);
  nop();
  plVar19 = *(long **)(this + 0xe8);
  pcVar20 = *(code **)(*plVar19 + 0x198);
  iVar5 = FUN_043c13d4(0x37);
  iVar3 = *(int *)(this + 0x50);
  uVar7 = FUN_043c13d4(0x1e0);
  uVar8 = FUN_043c13d4(0x6c);
  lVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04098);
  (*pcVar20)(plVar19,iVar5 + iVar3 / 2,uVar7,uVar8,*(undefined4 *)(lVar12 + 0x3c));
  pPVar17 = *(PVZ2UIButton **)(this + 0xe8);
  PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b04098,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b042d0,3);
  PVZ2UIButton::SetDialogStates(pPVar17,aPStack_78,(PVZ2UIImage *)&local_40);
  plVar19 = *(long **)(this + 0xe8);
  pcVar20 = *(code **)(*plVar19 + 800);
  uVar18 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22);
  (*pcVar20)(plVar19,uVar18);
  (**(code **)(*(long *)local_b0 + 0x60))(local_b0,*(undefined8 *)(this + 0xe8));
  (**(code **)(**(long **)(this + 0xe8) + 0x188))(*(long **)(this + 0xe8),1);
  *(undefined8 *)(this + 0xf0) = 0;
  FUN_05478178(aPStack_78,&DAT_056f11a8,aIStack_88);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar17 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar17,0x3eb,pBVar2,(wstring *)aPStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0xf0) = pPVar17;
  FUN_05476c50(aPStack_78);
  nop();
  plVar19 = *(long **)(this + 0xf0);
  iVar5 = FUN_043c13d4(0xa0);
  iVar3 = *(int *)(this + 0x50);
  uVar7 = FUN_043c13d4(0x96);
  uVar8 = FUN_043c13d4(0x28);
  (**(code **)(*plVar19 + 0x198))
            (plVar19,iVar3 - iVar5,(int)((float)*(int *)(this + 0x54) * 0.8),uVar7,uVar8);
  iVar5 = FUN_043c13d4(10);
  iVar6 = FUN_043c13d4(5);
  lVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03e20);
  iVar3 = *(int *)(lVar12 + 0x38);
  lVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03e20);
  Sexy::Insets::Insets
            (aIStack_98,iVar5,iVar6,(int)((float)iVar3 * 0.8),
             (int)((float)*(int *)(lVar12 + 0x3c) * 0.8));
  pPVar17 = *(PVZ2UIButton **)(this + 0xf0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b03e20,1);
  PVZ2UIButton::AddImage(pPVar17,(PVZ2UIImage *)&local_40,(TRect *)aIStack_98);
  iVar3 = FUN_043c13d4(0xf);
  lVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03e20);
  iVar5 = FUN_043c13d4(0xfffffffb);
  iVar6 = FUN_043c13d4(100);
  iVar9 = FUN_043c13d4(0x32);
  Sexy::Insets::Insets
            (aIStack_88,(int)((float)iVar3 + (float)*(int *)(lVar12 + 0x38) * 0.8),iVar5,iVar6,iVar9
            );
  pPVar17 = *(PVZ2UIButton **)(this + 0xf0);
  TodStringTranslate(L"[REFRESH_WISH_PANEL_BUTTON_TEXT_CONTENT]");
  Sexy::Insets::Insets((Insets *)&local_40,aIStack_88);
  PVZ2UIButton::AddText(pPVar17,aPStack_78,(Insets *)&local_40,0);
  FUN_05476c50(aPStack_78);
  pPVar17 = *(PVZ2UIButton **)(this + 0xf0);
  PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b03f20,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b04650,3);
  PVZ2UIButton::SetDialogStates(pPVar17,aPStack_78,(PVZ2UIImage *)&local_40);
  plVar19 = *(long **)(this + 0xf0);
  pcVar20 = *(code **)(*plVar19 + 800);
  uVar18 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  (*pcVar20)(plVar19,uVar18);
  (**(code **)(*(long *)local_b0 + 0x60))(local_b0,*(undefined8 *)(this + 0xf0));
  (**(code **)(**(long **)(this + 0xf0) + 0x158))(*(long **)(this + 0xf0),0);
  *(undefined4 *)(this + 0x180) = 0;
  TimeLineTrack<float>::Initialize((TimeLineTrack<float> *)(this + 0x160),0.0);
  FUN_05476c50(awStack_b8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SummerEventEntranceUI::SummerEventEntranceUI() */

void __thiscall SummerEventEntranceUI::SummerEventEntranceUI(SummerEventEntranceUI *this)

{
  LawnApp *pLVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  FestivalManager *this_00;
  SalesProgressBar *pSVar11;
  long lVar12;
  PVZ2UIButton *this_01;
  LotteryResultProgressBar *this_02;
  int iVar13;
  code *pcVar14;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xd8));
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_068446f0;
  *(undefined ***)(this + 0xd8) = &PTR__SummerEventEntranceUI_06844a30;
  *(undefined **)(this + 0xe0) = &DAT_06844a78;
  Sexy::Insets::Insets((Insets *)(this + 0xf8));
  Sexy::Insets::Insets((Insets *)(this + 0x108));
  Sexy::Insets::Insets((Insets *)(this + 0x118));
  FUN_05476574(this + 0x128);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x130));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x148));
  PlantWarsStarRewardData::PlantWarsStarRewardData((PlantWarsStarRewardData *)(this + 0x160));
  *(undefined4 *)(this + 0x184) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  this_00 = (FestivalManager *)Sexy::LazySingleton<FestivalManager>::GetInstance();
  FestivalManager::ResetWishProps(this_00);
  std::vector<SummerEventGameWidget*,std::allocator<SummerEventGameWidget*>>::clear
            ((vector<SummerEventGameWidget*,std::allocator<SummerEventGameWidget*>> *)(this + 0x130)
            );
  pLVar1 = gLawnApp;
  std::string::string((string *)&local_40,"UI_Activity");
  LawnApp::LoadGroup(pLVar1,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)&local_40,"UI_Store");
  LawnApp::LoadGroup(pLVar1,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  iVar2 = FUN_043c13d4(0x2a8);
  iVar3 = FUN_043c13d4(0x16d);
  iVar13 = (int)(float)iVar2;
  iVar4 = FUN_043c13d4(0);
  iVar5 = FUN_043c13d4(0xaa);
  Sexy::Insets::Insets((Insets *)&local_40,iVar4,iVar5,iVar13,(int)(float)iVar3);
  pLVar1 = gLawnApp;
  *(undefined8 *)(this + 0xf8) = local_40;
  *(undefined8 *)(this + 0x100) = uStack_38;
  iVar3 = FUN_043c13d4(0);
  Sexy::Widget::Resize
            ((Widget *)this,(int)(((float)*(int *)(pLVar1 + 0xd4) - (float)iVar2) * 0.5),iVar3,
             iVar13,*(int *)(pLVar1 + 0xd8));
  iVar5 = FUN_043c13d4(0x18);
  iVar2 = *(int *)(this + 0x100);
  iVar13 = FUN_043c13d4(0xc);
  iVar3 = *(int *)(this + 0xf8);
  iVar6 = FUN_043c13d4(0x3e);
  iVar7 = FUN_043c13d4(0x32);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04138);
  iVar8 = SalesProgressBar::GetCurrentLevel(pSVar11);
  lVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b040e8);
  iVar4 = *(int *)(lVar12 + 0x3c);
  lVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b041d8);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar13 + iVar3,iVar6,iVar2 - iVar5,
             iVar7 + iVar8 + iVar4 + *(int *)(lVar12 + 0x3c));
  *(undefined8 *)(this + 0x108) = local_40;
  *(undefined8 *)(this + 0x110) = uStack_38;
  iVar4 = FUN_043c13d4(0xc);
  iVar3 = *(int *)(this + 0xf8);
  iVar13 = FUN_043c13d4(0x88);
  iVar6 = FUN_043c13d4(0x2e);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04138);
  iVar7 = SalesProgressBar::GetCurrentLevel(pSVar11);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04718);
  iVar8 = SalesProgressBar::GetCurrentLevel(pSVar11);
  lVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03e70);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar4 + iVar3,iVar13,iVar2 - iVar5,
             iVar6 + iVar7 + iVar8 + *(int *)(lVar12 + 0x3c));
  *(undefined8 *)(this + 0x118) = local_40;
  *(undefined8 *)(this + 0x120) = uStack_38;
  setupGameLevelScreen(this);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  this_01 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_01,1000,(ButtonListener *)(this + 0xe0),awStack_78,(Color *)&local_40);
  FUN_05476c50(awStack_78);
  nop();
  iVar2 = *(int *)(this + 0xf8);
  iVar3 = *(int *)(this + 0x100);
  pcVar14 = *(code **)(*(long *)this_01 + 0x198);
  iVar5 = FUN_043c13d4(0x4b);
  iVar4 = *(int *)(this + 0xfc);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b041b0);
  iVar13 = SalesProgressBar::GetCurrentLevel(pSVar11);
  iVar6 = FUN_043c13d4(7);
  this_02 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b041b0);
  uVar9 = LotteryResultProgressBar::GetCurrentLevel(this_02);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b041b0);
  uVar10 = SalesProgressBar::GetCurrentLevel(pSVar11);
  (*pcVar14)(this_01,(iVar2 + iVar3) - iVar5,(iVar4 - iVar13) - iVar6,uVar9,uVar10);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b041b0,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b045f8,1);
  PVZ2UIButton::SetDialogStates(this_01,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

