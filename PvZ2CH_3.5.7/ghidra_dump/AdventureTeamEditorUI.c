// Class: AdventureTeamEditorUI


/* AdventureTeamEditorUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void AdventureTeamEditorUI::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to AdventureTeamEditorUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
AdventureTeamEditorUI::ScrollTargetReached(AdventureTeamEditorUI *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xe0));
  return;
}


/* AdventureTeamEditorUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void AdventureTeamEditorUI::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to AdventureTeamEditorUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
AdventureTeamEditorUI::ScrollTargetInterrupted(AdventureTeamEditorUI *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xe0));
  return;
}


/* AdventureTeamEditorUI::OnTutorialClicked() */

void __thiscall AdventureTeamEditorUI::OnTutorialClicked(AdventureTeamEditorUI *this)

{
  LawnApp::KillGameMaskUI(gLawnApp);
  if (*(int *)(this + 0xe8) == 0) {
    *(undefined4 *)(this + 0xe8) = 1;
  }
  return;
}


/* AdventureTeamEditorUI::TriggerTutorial() */

void __thiscall AdventureTeamEditorUI::TriggerTutorial(AdventureTeamEditorUI *this)

{
  int iVar1;
  ProfileMgr *this_00;
  long lVar2;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar2 = ProfileMgr::GetCurrentProfile(this_00);
  if (((lVar2 != 0) && (iVar1 = FUN_042c62b8(*(undefined4 *)(lVar2 + 0x40)), iVar1 == 0x27)) &&
     (*(TeamEditorScrollPanel **)(this + 0x228) != (TeamEditorScrollPanel *)0x0)) {
    TeamEditorScrollPanel::TriggerTutorial(*(TeamEditorScrollPanel **)(this + 0x228));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdventureTeamEditorUI::IsAllReqAchieved() */

void __thiscall AdventureTeamEditorUI::IsAllReqAchieved(AdventureTeamEditorUI *this)

{
  bool bVar1;
  undefined1 uVar2;
  char *pcVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x230));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x230));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    pcVar3 = (char *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    uVar2 = 0;
    if (*pcVar3 == '\0') goto LAB_042c71c0;
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
  }
  uVar2 = 1;
LAB_042c71c0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdventureTeamEditorUI::OnNeedRecoverExplorePlant(int) */

void __thiscall
AdventureTeamEditorUI::OnNeedRecoverExplorePlant(AdventureTeamEditorUI *this,int param_1)

{
  LawnApp *this_00;
  undefined8 uVar1;
  PVZ2UIDialog *pPVar2;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0xec) = param_1;
  if (param_1 < 1) {
    MessageRouter::Post<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::ConfirmStartAdventure,true);
  }
  else {
    TodStringTranslate(L"[PLANT_ADVENTURE_CONFIRM_BUY_PLANT_SPIRIT_DES]");
    TodReplaceNumberString(awStack_50,L"{GEMS}",*(int *)(this + 0xec));
    FUN_05476c50(awStack_50);
    this_00 = gLawnApp;
    FUN_05478178(awStack_58,L"[PLANT_ADVENTURE_CONFIRM_BUY_PLANT_SPIRIT_TILE]",auStack_70);
    uVar1 = FUN_054766ec(auStack_60);
    FUN_05478178(awStack_50,uVar1,auStack_68);
    pPVar2 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[PLANT_ADVENTURE_BUY_PLANT_SPIRIT]",auStack_68);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,ConfirmBuy);
    Sexy::Delegate0::Delegate0<AdventureTeamEditorUI,void(AdventureTeamEditorUI::*)()>
              (aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar2,awStack_58,aDStack_38,1);
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[PLANT_ADVENTURE_NOT_BUTTON]",auStack_68);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,CancelBuy);
    Sexy::Delegate0::Delegate0<AdventureTeamEditorUI,void(AdventureTeamEditorUI::*)()>
              (aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar2,awStack_58,aDStack_38,0);
    FUN_05476c50(awStack_58);
    nop();
    FUN_05476c50(auStack_60);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdventureTeamEditorUI::CancelBuy() */

void AdventureTeamEditorUI::CancelBuy(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  MessageRouter::Post<bool,bool>
            ((MessageRouter *)gMessageRouter,Message::ConfirmStartAdventure,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdventureTeamEditorUI::Update() */

void __thiscall AdventureTeamEditorUI::Update(AdventureTeamEditorUI *this)

{
  int iVar1;
  LawnApp *pLVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  code *pcVar15;
  undefined4 local_18;
  undefined4 local_14;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  iVar9 = *(int *)(this + 0xe8);
  if (iVar9 == 5) {
    iVar9 = TeamEditorScrollPanel::GetPlantTeamCount(*(TeamEditorScrollPanel **)(this + 0x220));
    plVar13 = *(long **)(this + 0x1f8);
    bVar3 = 1;
    pcVar15 = *(code **)(*plVar13 + 0x188);
    if (4 < iVar9) {
      bVar3 = IsAllReqAchieved(this);
      bVar3 = bVar3 ^ 1;
    }
    (*pcVar15)(plVar13,bVar3);
    (**(code **)(**(long **)(this + 0x208) + 0x188))(*(long **)(this + 0x208),4 < iVar9);
    (**(code **)(**(long **)(this + 0x200) + 0x188))(*(long **)(this + 0x200),0);
  }
  else if (iVar9 - 1U < 2) {
    (**(code **)(**(long **)(this + 0x1f8) + 0x188))(*(long **)(this + 0x1f8),1);
    (**(code **)(**(long **)(this + 0x200) + 0x188))(*(long **)(this + 0x200),1);
    (**(code **)(**(long **)(this + 0x208) + 0x188))(*(long **)(this + 0x208),0);
    if (*(int *)(this + 0xe8) == 1) {
      LawnApp::KillGameMaskUI(gLawnApp);
      iVar11 = FUN_042c67a8(0x3c);
      iVar9 = *(int *)(this + 0x174);
      iVar10 = *(int *)(this + 0x170);
      iVar1 = *(int *)(this + 0x17c);
      iVar4 = FUN_042c67a8(0xd);
      iVar5 = FUN_042c67a8(0x14);
      pLVar2 = gLawnApp;
      Sexy::FastCurve::SetOutRange
                ((FastCurve *)&local_18,(float)(iVar11 + iVar10),
                 (float)(iVar9 + iVar1 + iVar4 / 2 + iVar5));
      uVar8 = FUN_042c67a8(0x82);
      uVar14 = *(undefined8 *)(this + 0x208);
      std::string::string(asStack_10,"[INTRO_PLANTADVENTURE_AUTO]");
      LawnApp::ShowGameMaskUI(local_18,local_14,pLVar2,uVar8,uVar14,asStack_10);
      std::string::~string(asStack_10);
      nop();
      lVar12 = LawnApp::GetGameMaskUI(gLawnApp);
      iVar9 = FUN_042c67a8(0x50);
      uVar8 = FUN_042c67a8(0xa0);
      FUN_042c6574(lVar12 + 0xf8,lVar12 + 0x100,-iVar9,uVar8);
      *(undefined4 *)(this + 0xe8) = 2;
    }
  }
  else {
    plVar13 = *(long **)(this + 0x1f8);
    if (iVar9 - 3U < 2) {
      (**(code **)(*plVar13 + 0x188))(plVar13,0);
      (**(code **)(**(long **)(this + 0x200) + 0x188))(*(long **)(this + 0x200),1);
      (**(code **)(**(long **)(this + 0x208) + 0x188))(*(long **)(this + 0x208),1);
      if (*(int *)(this + 0xe8) == 3) {
        LawnApp::KillGameMaskUI(gLawnApp);
        this_00 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6890);
        iVar4 = LotteryResultProgressBar::GetCurrentLevel(this_00);
        this_01 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6890);
        iVar5 = SalesProgressBar::GetCurrentLevel(this_01);
        iVar9 = *(int *)(this + 0x150);
        iVar10 = *(int *)(this + 0x158);
        iVar6 = FUN_042c67a8(0x5a);
        iVar1 = *(int *)(this + 0x15c);
        iVar11 = *(int *)(this + 0x154);
        iVar7 = FUN_042c67a8(0x14);
        pLVar2 = gLawnApp;
        Sexy::FastCurve::SetOutRange
                  ((FastCurve *)&local_18,(float)(iVar9 + (iVar10 + iVar4 * -2) / 2 + iVar6),
                   (float)(((iVar11 + iVar1) - (iVar5 * 6) / 10) + iVar7));
        uVar8 = FUN_042c67a8(0x50);
        uVar14 = *(undefined8 *)(this + 0x1f8);
        std::string::string(asStack_10,"[INTRO_PLANTADVENTURE_BEGIN]");
        LawnApp::ShowGameMaskUI(local_18,local_14,pLVar2,uVar8,uVar14,asStack_10);
        std::string::~string(asStack_10);
        nop();
        lVar12 = LawnApp::GetGameMaskUI(gLawnApp);
        iVar9 = FUN_042c67a8(0x14);
        uVar8 = FUN_042c67a8(0x46);
        FUN_042c6574(lVar12 + 0xf8,lVar12 + 0x100,-iVar9,uVar8);
        lVar12 = LawnApp::GetGameMaskUI(gLawnApp);
        iVar9 = FUN_042c67a8(300);
        iVar10 = FUN_042c67a8(200);
        FUN_042c651c(lVar12 + 0x114,-iVar9,-iVar10);
        *(undefined4 *)(this + 0xe8) = 4;
      }
    }
    else {
      (**(code **)(*plVar13 + 0x188))(plVar13,1);
      (**(code **)(**(long **)(this + 0x200) + 0x188))(*(long **)(this + 0x200),1);
      (**(code **)(**(long **)(this + 0x208) + 0x188))(*(long **)(this + 0x208),1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdventureTeamEditorUI::Draw(Sexy::Graphics*) */

void __thiscall AdventureTeamEditorUI::Draw(AdventureTeamEditorUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  Image *pIVar10;
  LotteryResultProgressBar *pLVar11;
  SalesProgressBar *pSVar12;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x150));
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6ca0);
  Draw9SliceImage(param_1,aIStack_18,uVar9);
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6c40);
  iVar1 = *(int *)(this + 0x158);
  iVar2 = *(int *)(this + 0x150);
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6c40);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  iVar3 = *(int *)(this + 0x154);
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6c40);
  iVar5 = SalesProgressBar::GetCurrentLevel(pSVar12);
  iVar6 = FUN_042c67a8(0x14);
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6c40);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6c40);
  iVar8 = SalesProgressBar::GetCurrentLevel(pSVar12);
  Sexy::Graphics::DrawImage
            (param_1,pIVar10,iVar2 + (iVar1 - iVar4) / 2,(iVar3 - iVar5) + iVar6,iVar7,iVar8);
  TodStringTranslate(L"[PLANT_ADVENTURE]");
  iVar1 = *(int *)(this + 0x158);
  iVar2 = *(int *)(this + 0x150);
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6c40);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  iVar3 = *(int *)(this + 0x154);
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6c40);
  iVar5 = SalesProgressBar::GetCurrentLevel(pSVar12);
  iVar6 = FUN_042c67a8(0x12);
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6c40);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6c40);
  iVar8 = SalesProgressBar::GetCurrentLevel(pSVar12);
  Sexy::Insets::Insets(aIStack_28,iVar2 + (iVar1 - iVar4) / 2,(iVar3 - iVar5) + iVar6,iVar7,iVar8);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_34_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar9,aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6bc8);
  Sexy::Graphics::DrawImage(param_1,pIVar10,*(int *)(this + 0x160),*(int *)(this + 0x164));
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x170));
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6cc8);
  Draw9SliceImage(param_1,aIStack_18,uVar9);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x180));
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6908);
  Draw9SliceImage(param_1,aIStack_18,uVar9);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26_Shaded);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x1d8,this + 0x1a0,uVar9,aIStack_18,5,1);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x1e0,this + 0x1b0,uVar9,aIStack_18,0,1);
  FUN_0342e660(aIStack_28,this + 0x1e8,this + 0x1f0);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,aIStack_28,this + 0x1c0,uVar9,aIStack_18,1,1);
  FUN_05476c50(aIStack_28);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 400));
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af69d8);
  Draw9SliceImage(param_1,aIStack_18,uVar9);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdventureTeamEditorUI::OnStartExplore(bool) */

void __thiscall AdventureTeamEditorUI::OnStartExplore(AdventureTeamEditorUI *this,bool param_1)

{
  LawnApp *this_00;
  PVZ2UIDialog *pPVar1;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (param_1) {
    MessageRouter::Post<int,bool,bool,int,bool,bool>
              ((MessageRouter *)gMessageRouter,Message::AdventureStart,*(int *)(this + 0xfc),true,
               true);
    LawnApp::KillAdventureTeamEditorUI(gLawnApp);
  }
  else {
    FUN_05478178(awStack_58,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_68);
    FUN_05478178(awStack_50,L"[PLANT_ADVENTURE_FINISHED_FAILED]",auStack_60);
    pPVar1 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,0);
    FUN_05476c50(awStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdventureTeamEditorUI::~AdventureTeamEditorUI() */

void __thiscall AdventureTeamEditorUI::~AdventureTeamEditorUI(AdventureTeamEditorUI *this)

{
  LawnApp *pLVar1;
  PrimeText *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0682dbf8;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0682d8c0;
  *(undefined ***)(this + 0xe0) = &PTR__AdventureTeamEditorUI_0682dc40;
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Activity");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_PlantAdventure");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::vector<PlantRequire,std::allocator<PlantRequire>>::~vector
            ((vector<PlantRequire,std::allocator<PlantRequire>> *)(this + 0x230));
  FUN_05476c50(this + 0x1f0);
  FUN_05476c50(this + 0x1e8);
  FUN_05476c50(this + 0x1e0);
  FUN_05476c50(this + 0x1d8);
  FUN_05476c50(this + 0x1d0);
  WorldDungeonInfo::~WorldDungeonInfo((WorldDungeonInfo *)(this + 0xf0));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to AdventureTeamEditorUI::~AdventureTeamEditorUI() */

void __thiscall AdventureTeamEditorUI::~AdventureTeamEditorUI(AdventureTeamEditorUI *this)

{
  ~AdventureTeamEditorUI(this + -0xe0);
  return;
}


/* AdventureTeamEditorUI::~AdventureTeamEditorUI() */

void __thiscall AdventureTeamEditorUI::~AdventureTeamEditorUI(AdventureTeamEditorUI *this)

{
  ~AdventureTeamEditorUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to AdventureTeamEditorUI::~AdventureTeamEditorUI() */

void __thiscall AdventureTeamEditorUI::~AdventureTeamEditorUI(AdventureTeamEditorUI *this)

{
  ~AdventureTeamEditorUI(this + -0xe0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdventureTeamEditorUI::OnRecoverExplorePlant(bool) */

void __thiscall
AdventureTeamEditorUI::OnRecoverExplorePlant(AdventureTeamEditorUI *this,bool param_1)

{
  LawnApp *pLVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar5;
  undefined8 *puVar6;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::KillPVZ2Dialog(gLawnApp);
  if (param_1) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    if ((((this_01 != (PlayerInfo *)0x0) &&
         (cVar2 = PlayerInfo::CanStartNewPlantAdventure(this_01), pLVar1 = gLawnApp, cVar2 != '\0'))
        && (gLawnApp != (LawnApp *)0x0)) &&
       ((lVar5 = LawnApp::GetAdventureTeamEditorUI(gLawnApp), lVar5 != 0 &&
        (lVar5 = FUN_042c62bc(*(undefined8 *)(lVar5 + 0x220)), lVar5 != 0)))) {
      if (*(int *)(this + 0xec) < 1) {
        LawnApp::ShowGemStoreConfirm(pLVar1,2,1);
      }
      else {
        iVar4 = PlayerInfo::SubtractGems
                          (this_01,*(int *)(this + 0xec),-1,(ICloudRequestCallbackFunctionBase *)0x0
                           ,1,false);
        if (-1 < iVar4) {
          TeamEditorScrollPanel::GetChoosedTeamSeed();
          local_30 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin(avStack_20);
          local_28 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end(avStack_20);
          while (bVar3 = __gnu_cxx::operator!=
                                   ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28),
                bVar3) {
            puVar6 = (undefined8 *)
                     std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
            iVar4 = TeamSeed::GetPlantId((TeamSeed *)*puVar6);
            PlayerInfo::RemoveAdventurePlants(this_01,iVar4);
            eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                      ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
          }
          std::vector<TeamSeed*,std::allocator<TeamSeed*>>::~vector
                    ((vector<TeamSeed*,std::allocator<TeamSeed*>> *)avStack_20);
          MessageRouter::Post<bool,bool>
                    ((MessageRouter *)gMessageRouter,Message::ConfirmStartAdventure,true);
        }
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
/* AdventureTeamEditorUI::AutoTeam() */

void __thiscall AdventureTeamEditorUI::AutoTeam(AdventureTeamEditorUI *this)

{
  LawnApp *pLVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  TeamEditorScrollPanel *this_00;
  ulong uVar6;
  PVZ2UIDialog *pPVar7;
  Param *pPVar8;
  PlantType *pPVar9;
  undefined8 *puVar10;
  int *piVar11;
  wstring *pwVar12;
  TeamSeed *pTVar13;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_98 [24];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_80 [24];
  undefined8 local_68 [3];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48 [2];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_98);
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)avStack_98);
  this_00 = (TeamEditorScrollPanel *)FUN_042c62c0(*(undefined8 *)(this + 0x228));
  cVar2 = IsAllReqAchieved(this);
  if (cVar2 == '\0') {
    local_c0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x230));
    local_b8 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x230));
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_c0,(__normal_iterator *)&local_b8), bVar3)
    {
      pPVar8 = (Param *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c0);
      PTriggerZombieAddParams::Param::Param((Param *)&local_50,pPVar8);
      if (local_50._0_1_ == (vector<TeamSeed*,std::allocator<TeamSeed*>>)0x0) {
        TeamEditorScrollPanel::RemoveLastSelected(this_00);
        TeamEditorScrollPanel::GetTeamChooser();
        local_b0 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin(avStack_80);
        local_a8 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(avStack_80);
        while (bVar3 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_b0,(__normal_iterator *)&local_a8),
              bVar3) {
          puVar10 = (undefined8 *)
                    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
          pTVar13 = (TeamSeed *)*puVar10;
          cVar2 = TeamSeed::IsInAdventure(pTVar13);
          if (cVar2 == '\0') {
            iVar5 = TeamSeed::GetPlantId(pTVar13);
            cVar2 = TeamEditorScrollPanel::HasPlantInTeam(this_00,iVar5);
            if (cVar2 == '\0') {
              WishContent::GetProps();
              pPVar9 = (PlantType *)
                       Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)&local_a0);
              FUN_05475d88((string *)local_68,local_48);
              cVar2 = PlantType::HasPlantAdventureFlag(pPVar9,(string *)local_68);
              std::string::~string((string *)local_68);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_a0);
              if (cVar2 != '\0') {
                cVar2 = LevelEditorVaseBreakerSelect::IsSelected
                                  ((LevelEditorVaseBreakerSelect *)pTVar13);
                if (cVar2 == '\0') {
                  iVar5 = TeamSeed::GetButtonId(pTVar13);
                  TeamEditorScrollPanel::SelectPlant(this_00,iVar5);
                  std::vector<int,std::allocator<int>>::clear
                            ((vector<int,std::allocator<int>> *)avStack_98);
                  std::vector<TeamSeed*,std::allocator<TeamSeed*>>::~vector
                            ((vector<TeamSeed*,std::allocator<TeamSeed*>> *)avStack_80);
                  goto LAB_042ca300;
                }
                uVar4 = TeamSeed::GetButtonId(pTVar13);
                local_68[0] = CONCAT44(local_68[0]._4_4_,uVar4);
                std::vector<int,std::allocator<int>>::push_back
                          ((vector<int,std::allocator<int>> *)avStack_98,(int *)local_68);
              }
            }
          }
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b0);
        }
        std::vector<TeamSeed*,std::allocator<TeamSeed*>>::~vector
                  ((vector<TeamSeed*,std::allocator<TeamSeed*>> *)avStack_80);
        TeamEditorScrollPanel::RemoveLastSelected(this_00);
        local_a0 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)avStack_98);
        local_68[0] = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)avStack_98);
        bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_a0,(__normal_iterator *)local_68);
        if (bVar3) {
          piVar11 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
          TeamEditorScrollPanel::SelectPlant(this_00,*piVar11);
        }
LAB_042ca300:
        std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)avStack_98);
      }
      PakRecord::~PakRecord((PakRecord *)&local_50);
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_c0);
    }
    std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)avStack_98);
  }
  cVar2 = IsAllReqAchieved(this);
  pLVar1 = gLawnApp;
  if (cVar2 == '\0') {
    pwVar12 = (wstring *)local_68;
    FUN_05478178(pwVar12,&DAT_056f11a8,&local_a8);
    FUN_05478178((vector<TeamSeed*,std::allocator<TeamSeed*>> *)&local_50,
                 L"[PLANT_ADVENTURE_AUTO_PLANT_FAILED]",&local_a0);
    pPVar7 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(pLVar1,pwVar12,(wstring *)&local_50);
    FUN_05476c50((vector<TeamSeed*,std::allocator<TeamSeed*>> *)&local_50);
    nop();
    FUN_05476c50(pwVar12);
    nop();
    FUN_05478178(pwVar12,L"[DIALOG_STRING_OK]",&local_a0);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>
              (aDStack_38,(vector<TeamSeed*,std::allocator<TeamSeed*>> *)&local_50);
  }
  else {
    FUN_042c62bc(*(undefined8 *)(this + 0x220));
    TeamEditorScrollPanel::GetChoosedTeamSeed();
    uVar6 = FUN_042c62c4(CONCAT44(uStack_4c,local_50),local_48[0]);
    std::vector<TeamSeed*,std::allocator<TeamSeed*>>::~vector
              ((vector<TeamSeed*,std::allocator<TeamSeed*>> *)&local_50);
    if (uVar6 < 5) {
      TeamEditorScrollPanel::RemoveLastSelected(this_00);
      TeamEditorScrollPanel::GetTeamChooser();
      local_a8 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)local_68);
      local_a0 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)local_68);
      while (bVar3 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_a8,(__normal_iterator *)&local_a0),
            bVar3) {
        puVar10 = (undefined8 *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a8);
        pTVar13 = (TeamSeed *)*puVar10;
        cVar2 = TeamSeed::IsInAdventure(pTVar13);
        if (cVar2 == '\0') {
          iVar5 = TeamSeed::GetPlantId(pTVar13);
          cVar2 = TeamEditorScrollPanel::HasPlantInTeam(this_00,iVar5);
          if (cVar2 == '\0') {
            cVar2 = LevelEditorVaseBreakerSelect::IsSelected
                              ((LevelEditorVaseBreakerSelect *)pTVar13);
            if (cVar2 == '\0') {
              iVar5 = TeamSeed::GetButtonId(pTVar13);
              TeamEditorScrollPanel::SelectPlant(this_00,iVar5);
            }
            else {
              local_50 = TeamSeed::GetButtonId(pTVar13);
              std::vector<int,std::allocator<int>>::push_back
                        ((vector<int,std::allocator<int>> *)avStack_98,(int *)&local_50);
            }
            FUN_042c62bc(*(undefined8 *)(this + 0x220));
            TeamEditorScrollPanel::GetChoosedTeamSeed();
            uVar6 = FUN_042c62c4(CONCAT44(uStack_4c,local_50),local_48[0]);
            std::vector<TeamSeed*,std::allocator<TeamSeed*>>::~vector
                      ((vector<TeamSeed*,std::allocator<TeamSeed*>> *)&local_50);
            if (4 < uVar6) break;
          }
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a8);
      }
      std::vector<TeamSeed*,std::allocator<TeamSeed*>>::~vector
                ((vector<TeamSeed*,std::allocator<TeamSeed*>> *)local_68);
      TeamEditorScrollPanel::RemoveLastSelected(this_00);
      local_a8 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_98);
      local_a0 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_98);
      while (bVar3 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_a8,(__normal_iterator *)&local_a0),
            bVar3) {
        piVar11 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a8);
        TeamEditorScrollPanel::SelectPlant(this_00,*piVar11);
        FUN_042c62bc(*(undefined8 *)(this + 0x220));
        TeamEditorScrollPanel::GetChoosedTeamSeed();
        uVar6 = FUN_042c62c4(CONCAT44(uStack_4c,local_50),local_48[0]);
        std::vector<TeamSeed*,std::allocator<TeamSeed*>>::~vector
                  ((vector<TeamSeed*,std::allocator<TeamSeed*>> *)&local_50);
        if (4 < uVar6) break;
        eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                  ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_a8);
      }
      std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)avStack_98);
    }
    FUN_042c62bc(*(undefined8 *)(this + 0x220));
    TeamEditorScrollPanel::GetChoosedTeamSeed();
    uVar6 = FUN_042c62c4(CONCAT44(uStack_4c,local_50),local_48[0]);
    std::vector<TeamSeed*,std::allocator<TeamSeed*>>::~vector
              ((vector<TeamSeed*,std::allocator<TeamSeed*>> *)&local_50);
    pLVar1 = gLawnApp;
    if (4 < uVar6) goto LAB_042c9f50;
    pwVar12 = (wstring *)&local_a0;
    FUN_05478178(pwVar12,&DAT_056f11a8,&local_b0);
    FUN_05478178((vector<TeamSeed*,std::allocator<TeamSeed*>> *)&local_50,
                 L"[PLANT_ADVENTURE_AUTO_PLANT_FAILED]",&local_a8);
    pPVar7 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(pLVar1,pwVar12,(wstring *)&local_50);
    FUN_05476c50((vector<TeamSeed*,std::allocator<TeamSeed*>> *)&local_50);
    nop();
    FUN_05476c50(pwVar12);
    nop();
    FUN_05478178(pwVar12,L"[DIALOG_STRING_OK]",&local_a8);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>
              (aDStack_38,(vector<TeamSeed*,std::allocator<TeamSeed*>> *)&local_50);
  }
  PVZ2UIDialog::AddButton(pPVar7,pwVar12,aDStack_38,0);
  FUN_05476c50(pwVar12);
  nop();
LAB_042c9f50:
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_98);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdventureTeamEditorUI::ConfirmBuy() */

void __thiscall AdventureTeamEditorUI::ConfirmBuy(AdventureTeamEditorUI *this)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long *plVar4;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)avStack_38);
  FUN_042c62bc(*(undefined8 *)(this + 0x220));
  TeamEditorScrollPanel::GetChoosedTeamSeed();
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_20);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    local_4c = TeamSeed::GetPlantId((TeamSeed *)*puVar3);
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)avStack_38,&local_4c);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
  }
  LawnApp::KillPVZ2Dialog(gLawnApp);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if ((this_01 == (PlayerInfo *)0x0) ||
     (iVar2 = PlayerInfo::GetNumGems(this_01,true), iVar2 < *(int *)(this + 0xec))) {
    LawnApp::ShowGemStoreConfirm(gLawnApp,2,1);
  }
  else {
    plVar4 = (long *)NetworkMgr::GetNewNetWorkProcess(gNetworkMgr);
    (**(code **)(*plVar4 + 0x110))(plVar4,avStack_38,*(undefined4 *)(this + 0xfc),1);
  }
  std::vector<TeamSeed*,std::allocator<TeamSeed*>>::~vector
            ((vector<TeamSeed*,std::allocator<TeamSeed*>> *)avStack_20);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdventureTeamEditorUI::OnConfirmStartAdventure(bool) */

void __thiscall
AdventureTeamEditorUI::OnConfirmStartAdventure(AdventureTeamEditorUI *this,bool param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    if ((this_01 != (PlayerInfo *)0x0) &&
       (cVar2 = PlayerInfo::CanStartNewPlantAdventure(this_01), cVar2 != '\0')) {
      iVar1 = *(int *)(this + 0xfc);
      iVar4 = PlayerInfo::GetPlantAdventureAddChances(this_01,iVar1);
      PlayerInfo::SetPlantAdventureState(this_01,iVar1,2,-1,true,iVar4);
      lVar5 = LawnApp::GetRealServerTime(gLawnApp);
      if (lVar5 == 0) {
        MessageRouter::Post<int,bool,bool,int,bool,bool>
                  ((MessageRouter *)gMessageRouter,Message::AdventureStart,*(int *)(this + 0xfc),
                   true,false);
      }
      else {
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
        std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)avStack_38);
        FUN_042c62bc(*(undefined8 *)(this + 0x220));
        TeamEditorScrollPanel::GetChoosedTeamSeed();
        local_48 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin(avStack_20);
        local_40 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(avStack_20);
        while (bVar3 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40),
              bVar3) {
          puVar6 = (undefined8 *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
          local_4c = TeamSeed::GetPlantId((TeamSeed *)*puVar6);
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)avStack_38,&local_4c);
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
        }
        plVar7 = (long *)NetworkMgr::GetNewNetWorkProcess(gNetworkMgr);
        (**(code **)(*plVar7 + 0x110))(plVar7,avStack_38,*(undefined4 *)(this + 0xfc),1);
        std::vector<TeamSeed*,std::allocator<TeamSeed*>>::~vector
                  ((vector<TeamSeed*,std::allocator<TeamSeed*>> *)avStack_20);
        std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_38)
        ;
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
/* AdventureTeamEditorUI::ButtonDepress(int) */

void __thiscall AdventureTeamEditorUI::ButtonDepress(AdventureTeamEditorUI *this,int param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 1) {
    if (*(int *)(this + 0xe8) == 2) {
      LawnApp::KillGameMaskUI(gLawnApp);
      *(undefined4 *)(this + 0xe8) = 3;
    }
    AutoTeam(this);
  }
  else if (param_1 == 2) {
    if (*(int *)(this + 0xe8) == 4) {
      LawnApp::KillGameMaskUI(gLawnApp);
      MessageRouter::Post<bool,bool>((MessageRouter *)gMessageRouter,Message::StartExplore,true);
      *(undefined4 *)(this + 0xe8) = 5;
    }
    else {
      lVar2 = LawnApp::GetPlantAdventureUI(gLawnApp);
      if (lVar2 != 0) {
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
        std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)avStack_38);
        FUN_042c62bc(*(undefined8 *)(this + 0x220));
        TeamEditorScrollPanel::GetChoosedTeamSeed();
        local_48 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin(avStack_20);
        local_40 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(avStack_20);
        while( true ) {
          bVar1 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40);
          if (!bVar1) break;
          puVar3 = (undefined8 *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
          local_4c = TeamSeed::GetPlantId((TeamSeed *)*puVar3);
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)avStack_38,&local_4c);
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
        }
        plVar4 = (long *)NetworkMgr::GetNewNetWorkProcess(gNetworkMgr);
        (**(code **)(*plVar4 + 0x110))(plVar4,avStack_38,*(undefined4 *)(this + 0xfc),bVar1);
        std::vector<TeamSeed*,std::allocator<TeamSeed*>>::~vector
                  ((vector<TeamSeed*,std::allocator<TeamSeed*>> *)avStack_20);
        std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_38)
        ;
      }
    }
  }
  else if (param_1 == 0) {
    MessageRouter::Post<int,bool,bool,int,bool,bool>
              ((MessageRouter *)gMessageRouter,Message::AdventureStart,*(int *)(this + 0xfc),false,
               false);
    LawnApp::KillAdventureTeamEditorUI(gLawnApp);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to AdventureTeamEditorUI::ButtonDepress(int) */

void __thiscall AdventureTeamEditorUI::ButtonDepress(AdventureTeamEditorUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdventureTeamEditorUI::InitView() */

void __thiscall AdventureTeamEditorUI::InitView(AdventureTeamEditorUI *this)

{
  AdventureTeamEditorUI *pAVar1;
  ButtonListener *pBVar2;
  AdventureTeamEditorUI *pAVar3;
  undefined *puVar4;
  LawnApp *pLVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  int iVar23;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  LotteryResultProgressBar *pLVar24;
  SalesProgressBar *pSVar25;
  PVZ2UIButton *pPVar26;
  undefined8 uVar27;
  PVZ2UIScrollingWidget *pPVar28;
  TeamEditorScrollPanel *pTVar29;
  PlantAdventureConfig *pPVar30;
  wchar_t *pwVar31;
  long *plVar32;
  string *extraout_x1;
  long lVar33;
  code *pcVar34;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  string asStack_150 [8];
  undefined8 local_148;
  undefined8 local_140;
  undefined1 auStack_138 [8];
  wstring awStack_130 [8];
  string asStack_128 [8];
  undefined1 auStack_120 [8];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_118 [24];
  wstring awStack_100 [24];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  Delegate0 aDStack_b8 [48];
  wstring local_88;
  undefined7 uStack_87;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_8;
  
  pLVar5 = gLawnApp;
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_50,"UI_Activity");
  LawnApp::LoadGroup(pLVar5,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  pLVar5 = gLawnApp;
  std::string::string((string *)&local_50,"UI_PlantAdventure");
  LawnApp::LoadGroup(pLVar5,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined8 *)(this + 0x220) = 0;
  *(undefined8 *)(this + 0x228) = 0;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if ((this_01 == (PlayerInfo *)0x0) ||
     (iVar7 = FUN_042c62b8(*(undefined4 *)(this_01 + 0x40)), iVar7 != 0x27)) {
    *(undefined4 *)(this + 0xe8) = 5;
  }
  else {
    PlayerInfo::RemoveAllAdventurePlants(this_01,true);
    *(undefined4 *)(this + 0xe8) = 0;
  }
  pAVar1 = this + 0x170;
  pBVar2 = (ButtonListener *)(this + 0xd8);
  pAVar3 = this + 400;
  pLVar24 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6868);
  LotteryResultProgressBar::GetCurrentLevel(pLVar24);
  pSVar25 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6868);
  iVar8 = SalesProgressBar::GetCurrentLevel(pSVar25);
  iVar9 = FUN_042c67a8(5);
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  iVar7 = FUN_042c67a8(0x6e);
  iVar10 = FUN_042c67a8(5);
  iVar7 = iVar7 + iVar10 * 2;
  iVar11 = FUN_042c67a8(0x2d0);
  iVar12 = FUN_042c67a8(0x1e0);
  iVar23 = (*(int *)(this + 0x50) - iVar11) / 2;
  iVar13 = FUN_042c67a8(0x28);
  iVar13 = iVar13 + (*(int *)(this + 0x54) - iVar12) / 2;
  iVar14 = FUN_042c67a8(0xd);
  iVar15 = FUN_042c67a8(8);
  pSVar25 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6890);
  uVar16 = SalesProgressBar::GetCurrentLevel(pSVar25);
  pSVar25 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6890);
  iVar17 = SalesProgressBar::GetCurrentLevel(pSVar25);
  iVar17 = (iVar17 * 6) / 5;
  iVar18 = FUN_042c67a8(0xd);
  iVar19 = FUN_042c67a8(4);
  pSVar25 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6bc8);
  iVar20 = SalesProgressBar::GetCurrentLevel(pSVar25);
  Sexy::Insets::Insets
            ((Insets *)&local_50,iVar18 + iVar23 + iVar19 * 2,iVar13 + iVar18 * 2 + iVar20,iVar7,
             (iVar8 + iVar9) * 5 + iVar10 * 8);
  *(undefined8 *)pAVar1 = local_50;
  *(undefined8 *)(this + 0x178) = uStack_48;
  Sexy::Insets::Insets((Insets *)&local_50,iVar23,iVar13,iVar11,iVar12);
  iVar8 = *(int *)(this + 0x178);
  iVar9 = *(int *)(this + 0x170);
  *(undefined8 *)(this + 0x150) = local_50;
  *(undefined8 *)(this + 0x158) = uStack_48;
  pLVar24 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6bc8);
  iVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar24);
  iVar11 = FUN_042c67a8(0xd);
  pLVar24 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6bc8);
  iVar12 = LotteryResultProgressBar::GetCurrentLevel(pLVar24);
  pSVar25 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6bc8);
  iVar18 = SalesProgressBar::GetCurrentLevel(pSVar25);
  Sexy::Insets::Insets
            ((Insets *)&local_50,iVar9 + (iVar8 - iVar10) / 2,iVar13 + iVar11 * 2,iVar12,iVar18);
  iVar8 = *(int *)(this + 0x178);
  iVar9 = *(int *)(this + 0x158);
  *(undefined8 *)(this + 0x160) = local_50;
  *(undefined8 *)(this + 0x168) = uStack_48;
  iVar10 = FUN_042c67a8(0xd);
  iVar11 = FUN_042c67a8(0xb4);
  Sexy::Insets::Insets
            ((Insets *)&local_50,iVar23 + iVar14 * 2 + iVar7 + iVar15,*(int *)(this + 0x164),
             (iVar9 - iVar8) + iVar10 * -5,iVar11);
  iVar8 = *(int *)(this + 0x164);
  *(undefined8 *)(this + 0x180) = local_50;
  *(undefined8 *)(this + 0x188) = uStack_48;
  iVar9 = *(int *)(this + 0x18c);
  iVar11 = FUN_042c67a8(0xd);
  iVar10 = -(iVar17 / 2);
  Sexy::Insets::Insets
            ((Insets *)&local_50,*(int *)(this + 0x180),iVar9 + iVar8 + iVar11,
             *(int *)(this + 0x188),(*(int *)(this + 0x15c) - iVar9) + iVar11 * -4 + iVar10);
  *(undefined8 *)pAVar3 = local_50;
  *(undefined8 *)(this + 0x198) = uStack_48;
  FUN_05478178(&local_88,&DAT_056f11a8,(string *)&local_d0);
  Sexy::Color::Color((Color *)&local_50,1);
  pPVar26 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar26,0,pBVar2,&local_88,(Color *)&local_50);
  *(PVZ2UIButton **)(this + 0x200) = pPVar26;
  FUN_05476c50(&local_88);
  nop();
  pPVar26 = *(PVZ2UIButton **)(this + 0x200);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_88,&DAT_06af6ac8,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_50,&DAT_06af6b70,2);
  PVZ2UIButton::SetDialogStates(pPVar26,(PVZ2UIImage *)&local_88,(PVZ2UIImage *)&local_50);
  plVar32 = *(long **)(this + 0x200);
  pcVar34 = *(code **)(*plVar32 + 0x198);
  iVar8 = FUN_042c67a8(0x2b0);
  pSVar25 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af68b8);
  iVar9 = SalesProgressBar::GetCurrentLevel(pSVar25);
  iVar11 = FUN_042c67a8(0x22);
  pLVar24 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6ac8);
  uVar21 = LotteryResultProgressBar::GetCurrentLevel(pLVar24);
  pSVar25 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6ac8);
  uVar22 = SalesProgressBar::GetCurrentLevel(pSVar25);
  (*pcVar34)(plVar32,iVar8 + iVar23,(iVar13 - iVar9) + iVar11,uVar21,uVar22);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x200));
  iVar13 = *(int *)(this + 0x174);
  iVar23 = *(int *)(this + 0x17c);
  uVar21 = *(undefined4 *)(this + 0x170);
  iVar8 = FUN_042c67a8(0xd);
  TodStringTranslate(L"[PLANT_ADVENTURE_TEAMEDITOR_AUTO_BUTTON]");
  Sexy::Color::Color((Color *)&local_50,1);
  pPVar26 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar26,1,pBVar2,&local_88,(Color *)&local_50);
  *(PVZ2UIButton **)(this + 0x208) = pPVar26;
  FUN_05476c50(&local_88);
  (**(code **)(**(long **)(this + 0x208) + 0x198))
            (*(long **)(this + 0x208),uVar21,iVar13 + iVar23 + iVar8 / 2,iVar7,uVar16);
  pPVar26 = *(PVZ2UIButton **)(this + 0x208);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_88,&DAT_06af6840,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_50,&DAT_06af6b20,3);
  PVZ2UIButton::SetDialogStates(pPVar26,(PVZ2UIImage *)&local_88,(PVZ2UIImage *)&local_50);
  plVar32 = *(long **)(this + 0x208);
  *(undefined1 *)((long)plVar32 + 0x59) = 0;
  pcVar34 = *(code **)(*plVar32 + 800);
  uVar27 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
  (*pcVar34)(plVar32,uVar27);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x208));
  pLVar24 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6890);
  iVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar24);
  iVar7 = *(int *)(this + 0x158);
  iVar13 = *(int *)(this + 0x154);
  iVar23 = *(int *)(this + 0x15c);
  iVar8 = *(int *)(this + 0x150);
  iVar11 = FUN_042c67a8(10);
  TodStringTranslate(L"[PLANT_ADVENTURE_TEAMEDITOR_START_BUTTON]");
  Sexy::Color::Color((Color *)&local_50,1);
  pPVar26 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar26,2,pBVar2,&local_88,(Color *)&local_50);
  *(PVZ2UIButton **)(this + 0x1f8) = pPVar26;
  FUN_05476c50(&local_88);
  (**(code **)(**(long **)(this + 0x1f8) + 0x198))
            (*(long **)(this + 0x1f8),iVar8 + (iVar7 + iVar9 * -2) / 2,
             (iVar10 + iVar13 + iVar23) - iVar11,iVar9 * 2,iVar17);
  pPVar26 = *(PVZ2UIButton **)(this + 0x1f8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_88,&DAT_06af6840,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_50,&DAT_06af6b20,3);
  PVZ2UIButton::SetDialogStates(pPVar26,(PVZ2UIImage *)&local_88,(PVZ2UIImage *)&local_50);
  (**(code **)(**(long **)(this + 0x1f8) + 0x188))(*(long **)(this + 0x1f8),0);
  plVar32 = *(long **)(this + 0x1f8);
  pcVar34 = *(code **)(*plVar32 + 800);
  uVar27 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
  (*pcVar34)(plVar32,uVar27);
  lVar33 = *(long *)(this + 0x1f8);
  pcVar34 = *(code **)(*(long *)this + 0x60);
  *(undefined1 *)(lVar33 + 0x59) = 0;
  (*pcVar34)(this,lVar33);
  if (*(long *)(this + 0x210) != 0) {
    (**(code **)(*(long *)this + 0x68))(this);
    (**(code **)(*(long *)gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x210));
    *(undefined8 *)(this + 0x210) = 0;
  }
  pPVar28 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(pPVar28,(ScrollWidgetListener *)(this + 0xe0));
  lVar33 = *(long *)pPVar28;
  *(PVZ2UIScrollingWidget **)(this + 0x210) = pPVar28;
  (**(code **)(lVar33 + 0x1a0))(pPVar28,pAVar1);
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0x210),2);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x210));
  pTVar29 = ::operator_new(0x280);
  TeamEditorScrollPanel::TeamEditorScrollPanel(pTVar29,0,pAVar1);
  *(TeamEditorScrollPanel **)(this + 0x220) = pTVar29;
  (**(code **)(**(long **)(this + 0x210) + 0x60))(*(long **)(this + 0x210),pTVar29);
  if (*(long *)(this + 0x218) != 0) {
    (**(code **)(*(long *)this + 0x68))(this);
    (**(code **)(*(long *)gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x218));
    *(undefined8 *)(this + 0x218) = 0;
  }
  pPVar28 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(pPVar28,(ScrollWidgetListener *)(this + 0xe0));
  lVar33 = *(long *)pPVar28;
  *(PVZ2UIScrollingWidget **)(this + 0x218) = pPVar28;
  (**(code **)(lVar33 + 0x1a0))(pPVar28,pAVar3);
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0x218),2);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x218));
  pTVar29 = ::operator_new(0x280);
  TeamEditorScrollPanel::TeamEditorScrollPanel(pTVar29,1,pAVar3);
  *(TeamEditorScrollPanel **)(this + 0x228) = pTVar29;
  (**(code **)(**(long **)(this + 0x218) + 0x60))(*(long **)(this + 0x218),pTVar29);
  FUN_05475d88((string *)&local_d0,this + 0x110);
  DungeonWidget::GetDungeonNameForShow(&local_88,this,(string *)&local_d0);
  TodStringTranslate(&local_88);
  FUN_054766c8(this + 0x1d8,(string *)&local_50);
  FUN_05476c50((string *)&local_50);
  FUN_05476c50(&local_88);
  std::string::~string((string *)&local_d0);
  TodStringTranslate(L"[PLANT_ADVENTURE_TEAMEDITOR_NEEDPLANTS]");
  TodReplaceNumberString(&local_88,L"{PLANTS}",5);
  FUN_054766c8(this + 0x1e0,(string *)&local_50);
  FUN_05476c50((string *)&local_50);
  FUN_05476c50(&local_88);
  TodStringTranslate(L"[PLANT_ADVENTURE_TEAMEDITOR_PLANTTYPE]");
  FUN_054766c8(this + 0x1e8,(string *)&local_50);
  FUN_05476c50((string *)&local_50);
  iVar7 = FUN_042c67a8(5);
  Sexy::Insets::Insets
            ((Insets *)&local_50,iVar7 + *(int *)(this + 0x180),iVar7 + *(int *)(this + 0x184),
             iVar7 * -2 + *(int *)(this + 0x188),(iVar7 * -2 + *(int *)(this + 0x18c)) / 3);
  *(undefined8 *)(this + 0x1a0) = local_50;
  *(undefined8 *)(this + 0x1a8) = uStack_48;
  iVar7 = FUN_042c67a8(5);
  Sexy::Insets::Insets
            ((Insets *)&local_50,iVar7 + *(int *)(this + 0x180),
             *(int *)(this + 0x1a4) + *(int *)(this + 0x1ac) + iVar7 * 2,*(int *)(this + 0x188) / 3,
             *(int *)(this + 0x18c) + iVar7 * -2);
  iVar7 = *(int *)(this + 0x188);
  iVar13 = *(int *)(this + 0x180);
  *(undefined8 *)(this + 0x1b0) = local_50;
  *(undefined8 *)(this + 0x1b8) = uStack_48;
  iVar23 = FUN_042c67a8(5);
  Sexy::Insets::Insets
            ((Insets *)&local_50,iVar7 / 3 + iVar13 + iVar23,
             *(int *)(this + 0x1a4) + *(int *)(this + 0x1ac) + iVar23 * 2,
             (iVar7 << 1) / 3 + iVar23 * -4,*(int *)(this + 0x18c) + iVar23 * -2);
  *(undefined8 *)(this + 0x1c0) = local_50;
  *(undefined8 *)(this + 0x1c8) = uStack_48;
  FUN_054772c4(this + 0x1f0,&DAT_056f11a8);
  pPVar30 = (PlantAdventureConfig *)LawnApp::GetPlantAdventureConfig(gLawnApp);
  PlantAdventureConfig::PlantAdventureConfig((PlantAdventureConfig *)&local_50,pPVar30);
  PlantAdventureConfig::GetPlantRequire((int)(string *)&local_50);
  local_148 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(avStack_118);
  local_140 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(avStack_118);
  while (bVar6 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_148,(__normal_iterator *)&local_140), bVar6)
  {
    uVar27 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_148);
    FUN_05475d88(asStack_150,uVar27);
    PlantRequire::PlantRequire((PlantRequire *)&local_88);
    local_88 = (wstring)0x0;
    thunk_FUN_05475e00(&uStack_80,asStack_150);
    FUN_05478178(auStack_138,&DAT_056f11a8,(string *)&local_d0);
    nop();
    pwVar31 = L"[ADVENTURE_FLAGS_UNACHIVED_COLOR_PRE]";
    if (local_88 != (wstring)0x0) {
      pwVar31 = L"[ADVENTURE_FLAGS_ACHIVED_COLOR_PRE]";
    }
    TodStringTranslate(pwVar31);
    FUN_054766c8(auStack_138,(string *)&local_d0);
    FUN_05476c50((string *)&local_d0);
    FUN_05477888(auStack_138,&DAT_0570f658);
    TodStringTranslate(L"[ADVENTURE_FLAGS_DESACHIVED_COLOR_END]");
    FUN_05477888(awStack_130,&DAT_0570f658);
    Sexy::Upper((Sexy *)&uStack_80,extraout_x1);
    uVar27 = FUN_0547429c((string *)&local_d0);
    Sexy::StrFormat("[ADVENTURE_FLAGS_DES_%s]",asStack_128,uVar27);
    std::string::~string((string *)&local_d0);
    Sexy::ToWString(asStack_128);
    TodStringTranslate((wstring *)&local_d0);
    FUN_05476c50((string *)&local_d0);
    std::vector<PlantRequire,std::allocator<PlantRequire>>::push_back
              ((vector<PlantRequire,std::allocator<PlantRequire>> *)(this + 0x230),
               (PlantRequire *)&local_88);
    FUN_0342e660(awStack_100,auStack_138,auStack_120);
    std::operator+(awStack_100,awStack_130);
    std::operator+((wstring *)&local_e8,L"\n");
    thunk_FUN_05477668(this + 0x1f0,(string *)&local_d0);
    FUN_05476c50((string *)&local_d0);
    FUN_05476c50((wstring *)&local_e8);
    FUN_05476c50(awStack_100);
    FUN_05476c50(auStack_120);
    std::string::~string(asStack_128);
    FUN_05476c50(awStack_130);
    FUN_05476c50(auStack_138);
    PakRecord::~PakRecord((PakRecord *)&local_88);
    std::string::~string(asStack_150);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_148);
  }
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_118);
  puVar4 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnStartExplore);
  local_160 = local_d8;
  local_170 = local_e8;
  uStack_168 = uStack_e0;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<AdventureTeamEditorUI,void(AdventureTeamEditorUI::*)(bool)>>
            ((MessageRouter *)puVar4,Message::StartExplore,&local_170);
  puVar4 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnConfirmStartAdventure);
  local_170 = local_d0;
  uStack_168 = uStack_c8;
  local_160 = local_c0;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<AdventureTeamEditorUI,void(AdventureTeamEditorUI::*)(bool)>>
            ((MessageRouter *)puVar4,Message::ConfirmStartAdventure,&local_170);
  puVar4 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNeedRecoverExplorePlant);
  local_190 = CONCAT71(uStack_87,local_88);
  local_180 = local_78;
  uStack_188 = uStack_80;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<AdventureTeamEditorUI,void(AdventureTeamEditorUI::*)(int)>>
            ((MessageRouter *)puVar4,Message::NeedRecoverExplorePlant,&local_190);
  puVar4 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnRefreshAll);
  Sexy::Delegate0::Delegate0<AdventureTeamEditorUI,void(AdventureTeamEditorUI::*)()>
            (aDStack_b8,awStack_100);
  MessageRouter::Subscribe((MessageRouter *)puVar4,Message::RefreshAdventureEditorAll,aDStack_b8);
  puVar4 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnTutorialClicked);
  Sexy::Delegate0::Delegate0<AdventureTeamEditorUI,void(AdventureTeamEditorUI::*)()>
            (aDStack_b8,awStack_100);
  MessageRouter::Subscribe((MessageRouter *)puVar4,Message::TutorialClicked,aDStack_b8);
  PlantAdventureConfig::~PlantAdventureConfig((PlantAdventureConfig *)&local_50);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* AdventureTeamEditorUI::AdventureTeamEditorUI(WorldDungeonInfo) */

void __thiscall
AdventureTeamEditorUI::AdventureTeamEditorUI(AdventureTeamEditorUI *this,WorldDungeonInfo *param_2)

{
  PrimeText *this_00;
  
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_0682d8c0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0682dbf8;
  *(undefined ***)(this + 0xe0) = &PTR__AdventureTeamEditorUI_0682dc40;
  WorldDungeonInfo::WorldDungeonInfo((WorldDungeonInfo *)(this + 0xf0));
  Sexy::Insets::Insets((Insets *)(this + 0x150));
  Sexy::Insets::Insets((Insets *)(this + 0x160));
  Sexy::Insets::Insets((Insets *)(this + 0x170));
  Sexy::Insets::Insets((Insets *)(this + 0x180));
  Sexy::Insets::Insets((Insets *)(this + 400));
  Sexy::Insets::Insets((Insets *)(this + 0x1a0));
  Sexy::Insets::Insets((Insets *)(this + 0x1b0));
  Sexy::Insets::Insets((Insets *)(this + 0x1c0));
  FUN_05476574(this + 0x1d0);
  FUN_05476574(this + 0x1d8);
  FUN_05476574(this + 0x1e0);
  FUN_05476574(this + 0x1e8);
  FUN_05476574(this + 0x1f0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x230));
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  WorldDungeonInfo::operator=((WorldDungeonInfo *)(this + 0xf0),param_2);
  InitView(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdventureTeamEditorUI::RefreshReq() */

void __thiscall AdventureTeamEditorUI::RefreshReq(AdventureTeamEditorUI *this)

{
  bool bVar1;
  char cVar2;
  PlantAdventureConfig *pPVar3;
  wchar_t *pwVar4;
  undefined8 uVar5;
  char *pcVar6;
  TeamEditorScrollPanel *pTVar7;
  string *extraout_x1;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 auStack_88 [8];
  wstring awStack_80 [8];
  string asStack_78 [8];
  undefined1 auStack_70 [8];
  wstring awStack_68 [8];
  wstring awStack_60 [8];
  string asStack_58 [8];
  PlantAdventureConfig aPStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_054772c4(this + 0x1f0,&DAT_056f11a8);
  pPVar3 = (PlantAdventureConfig *)LawnApp::GetPlantAdventureConfig(gLawnApp);
  PlantAdventureConfig::PlantAdventureConfig(aPStack_50,pPVar3);
  local_98 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x230));
  local_90 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x230));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_98,(__normal_iterator *)&local_90), bVar1) {
    pcVar6 = (char *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_98);
    pTVar7 = (TeamEditorScrollPanel *)FUN_042c62bc(*(undefined8 *)(this + 0x220));
    FUN_05475d88(asStack_58,(Sexy *)(pcVar6 + 8));
    cVar2 = TeamEditorScrollPanel::HasPlantFlag(pTVar7,asStack_58);
    *pcVar6 = cVar2;
    std::string::~string(asStack_58);
    FUN_05478178(auStack_88,&DAT_056f11a8,asStack_58);
    nop();
    pwVar4 = L"[ADVENTURE_FLAGS_UNACHIVED_COLOR_PRE]";
    if (*pcVar6 != '\0') {
      pwVar4 = L"[ADVENTURE_FLAGS_ACHIVED_COLOR_PRE]";
    }
    TodStringTranslate(pwVar4);
    FUN_054766c8(auStack_88,asStack_58);
    FUN_05476c50(asStack_58);
    FUN_05477888(auStack_88,&DAT_0570f658);
    TodStringTranslate(L"[ADVENTURE_FLAGS_DESACHIVED_COLOR_END]");
    FUN_05477888(awStack_80,&DAT_0570f658);
    Sexy::Upper((Sexy *)(pcVar6 + 8),extraout_x1);
    uVar5 = FUN_0547429c(asStack_58);
    Sexy::StrFormat("[ADVENTURE_FLAGS_DES_%s]",asStack_78,uVar5);
    std::string::~string(asStack_58);
    Sexy::ToWString(asStack_78);
    TodStringTranslate((wstring *)asStack_58);
    FUN_05476c50(asStack_58);
    FUN_0342e660(awStack_68,auStack_88,auStack_70);
    std::operator+(awStack_68,awStack_80);
    std::operator+(awStack_60,L"\n");
    thunk_FUN_05477668(this + 0x1f0,asStack_58);
    FUN_05476c50(asStack_58);
    FUN_05476c50(awStack_60);
    FUN_05476c50(awStack_68);
    FUN_05476c50(auStack_70);
    std::string::~string(asStack_78);
    FUN_05476c50(awStack_80);
    FUN_05476c50(auStack_88);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_98);
  }
  PlantAdventureConfig::~PlantAdventureConfig(aPStack_50);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* AdventureTeamEditorUI::OnRefreshAll() */

void __thiscall AdventureTeamEditorUI::OnRefreshAll(AdventureTeamEditorUI *this)

{
  PVZ2UIScrollingWidget *pPVar1;
  TeamEditorScrollPanel *pTVar2;
  long lVar3;
  
  if (*(long *)(this + 0x210) != 0) {
    (**(code **)(*(long *)this + 0x68))();
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x210));
    *(undefined8 *)(this + 0x210) = 0;
  }
  pPVar1 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(pPVar1,(ScrollWidgetListener *)(this + 0xe0));
  lVar3 = *(long *)pPVar1;
  *(PVZ2UIScrollingWidget **)(this + 0x210) = pPVar1;
  (**(code **)(lVar3 + 0x1a0))(pPVar1,this + 0x170);
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0x210),2);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x210));
  pTVar2 = ::operator_new(0x280);
  TeamEditorScrollPanel::TeamEditorScrollPanel(pTVar2,0,this + 0x170);
  *(TeamEditorScrollPanel **)(this + 0x220) = pTVar2;
  (**(code **)(**(long **)(this + 0x210) + 0x60))(*(long **)(this + 0x210),pTVar2);
  if (*(long *)(this + 0x218) != 0) {
    (**(code **)(*(long *)this + 0x68))(this);
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x218));
    *(undefined8 *)(this + 0x218) = 0;
  }
  pPVar1 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(pPVar1,(ScrollWidgetListener *)(this + 0xe0));
  lVar3 = *(long *)pPVar1;
  *(PVZ2UIScrollingWidget **)(this + 0x218) = pPVar1;
  (**(code **)(lVar3 + 0x1a0))(pPVar1,this + 400);
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0x218),2);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x218));
  pTVar2 = ::operator_new(0x280);
  TeamEditorScrollPanel::TeamEditorScrollPanel(pTVar2,1,this + 400);
  *(TeamEditorScrollPanel **)(this + 0x228) = pTVar2;
  (**(code **)(**(long **)(this + 0x218) + 0x60))(*(long **)(this + 0x218),pTVar2);
  RefreshReq(this);
  return;
}

