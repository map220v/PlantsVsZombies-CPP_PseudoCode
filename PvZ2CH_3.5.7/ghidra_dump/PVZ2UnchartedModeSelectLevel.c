// Class: PVZ2UnchartedModeSelectLevel


/* PVZ2UnchartedModeSelectLevel::ScrollTargetReached(Sexy::ScrollWidget*) */

void PVZ2UnchartedModeSelectLevel::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to PVZ2UnchartedModeSelectLevel::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
PVZ2UnchartedModeSelectLevel::ScrollTargetReached
          (PVZ2UnchartedModeSelectLevel *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* PVZ2UnchartedModeSelectLevel::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void PVZ2UnchartedModeSelectLevel::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to PVZ2UnchartedModeSelectLevel::ScrollTargetInterrupted(Sexy::ScrollWidget*)
    */

void __thiscall
PVZ2UnchartedModeSelectLevel::ScrollTargetInterrupted
          (PVZ2UnchartedModeSelectLevel *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeSelectLevel::GetLayoutName() */

void __thiscall PVZ2UnchartedModeSelectLevel::GetLayoutName(PVZ2UnchartedModeSelectLevel *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIPVZ2UnchartedModeSelectLevel");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PVZ2UnchartedModeSelectLevel::SetPlayLevelCallback(Sexy::Delegate1<std::string const&>) */

void __thiscall
PVZ2UnchartedModeSelectLevel::SetPlayLevelCallback
          (PVZ2UnchartedModeSelectLevel *this,Delegate2 *param_2)

{
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x1d0),param_2);
  return;
}


/* PVZ2UnchartedModeSelectLevel::SetEventNode(MapEventItem*) */

void __thiscall
PVZ2UnchartedModeSelectLevel::SetEventNode(PVZ2UnchartedModeSelectLevel *this,MapEventItem *param_1)

{
  *(MapEventItem **)(this + 0x1c8) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeSelectLevel::showDescriptionWidget() */

void PVZ2UnchartedModeSelectLevel::showDescriptionWidget(void)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  PVZ2UIDialog *this;
  PVZ2UnchartedModeUtils *this_00;
  undefined8 uVar5;
  string *extraout_x1;
  LineBreakCategory *in_x2;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  undefined1 auVar6 [16];
  Sexy aSStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  auVar6 = PVZ2UnchartedModeUtils::GetUnchartedWorldType();
  if (auVar6._0_4_ == 3) {
    cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (auVar6._0_8_,auVar6._8_8_,in_x2,in_x3,in_x4);
    if (cVar1 == '\0') {
      iVar3 = FUN_04df99bc(0x28a);
      iVar4 = FUN_04df99bc(0x14a);
    }
    else {
      iVar3 = FUN_04df99bc(600);
      iVar4 = FUN_04df99bc(0x17c);
    }
  }
  else {
    cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (auVar6._0_8_,auVar6._8_8_,in_x2,in_x3,in_x4);
    if (cVar1 == '\0') {
      iVar3 = FUN_04df99bc(0x28a);
      iVar4 = FUN_04df99bc(0x1ae);
    }
    else {
      iVar3 = FUN_04df99bc(600);
      iVar4 = FUN_04df99bc(0x1e0);
    }
  }
  this = (PVZ2UIDialog *)
         LawnApp::ShowPVZ2Dialog(gLawnApp,(float)iVar3,(float)iVar4,(PVZ2UIDialog *)0x0);
  FUN_05478178(asStack_50,L"[PVZ2_UNCHARTED_MODE_TIPS_TITLE]",asStack_58);
  PVZ2UIDialog::SetHeaderLabel(this,(wstring *)asStack_50);
  FUN_05476c50(asStack_50);
  nop();
  bVar2 = PVZ2UnchartedModeUtils::IsNormalSelectLevelWithHardmode();
  this_00 = (PVZ2UnchartedModeUtils *)(ulong)bVar2;
  if ((bVar2 == 0) &&
     (this_00 = (PVZ2UnchartedModeUtils *)PVZ2UnchartedModeUtils::GetUnchartedWorldType(),
     (int)this_00 != 3)) {
    FUN_05478178(asStack_50,L"[PVZ2_UNCHARTED_MODE_TIPS_DESC]",asStack_58);
    PVZ2UIDialog::SetFooterLabel(this,(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    nop();
  }
  else {
    PVZ2UnchartedModeUtils::GetPrefixWorld(this_00);
    Sexy::Upper(aSStack_60,extraout_x1);
    uVar5 = FUN_0547429c(asStack_50);
    Sexy::StrFormat("[PVZ2_UNCHARTED_MODE_TIPS_DESC_%s]",asStack_58,uVar5);
    std::string::~string(asStack_50);
    Sexy::ToWString(asStack_58);
    PVZ2UIDialog::SetFooterLabel(this,(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    std::string::~string(asStack_58);
    std::string::~string((string *)aSStack_60);
  }
  PVZ2UIDialog::SetFooterAlign(this,3);
  iVar3 = FUN_04df99bc(2);
  PVZ2UIDialog::SetFooterBottomPadding(this,iVar3);
  PVZ2UIDialog::SetBackgroundDarken(this,true,0.5);
  FUN_05478178(asStack_58,L"[OVERVIEW_CONFIRM]",aSStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,asStack_50);
  PVZ2UIDialog::AddButton(this,asStack_58,aDStack_38,0);
  FUN_05476c50(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UnchartedModeSelectLevel::ButtonDepress(int) */

void __thiscall
PVZ2UnchartedModeSelectLevel::ButtonDepress(PVZ2UnchartedModeSelectLevel *this,int param_1)

{
  if (param_1 == 1000) {
    UISingletonDialog<PVZ2UnchartedModeSelectLevel>::CloseDialog();
    return;
  }
  if (param_1 == 0x3e9) {
    showDescriptionWidget();
    return;
  }
  return;
}


/* non-virtual thunk to PVZ2UnchartedModeSelectLevel::ButtonDepress(int) */

void __thiscall
PVZ2UnchartedModeSelectLevel::ButtonDepress(PVZ2UnchartedModeSelectLevel *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeSelectLevel::ApplyDifficulty() */

void PVZ2UnchartedModeSelectLevel::ApplyDifficulty(void)

{
  int iVar1;
  int iVar2;
  PVZ2UnchartedModeUtils *this;
  ResourceInfo *pRVar3;
  long lVar4;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar5;
  int iVar6;
  undefined8 uVar7;
  string asStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (PVZ2UnchartedModeUtils *)Sexy::LazySingleton<LevelUtils>::GetInstance();
  PVZ2UnchartedModeUtils::GetCurrentLevel(this);
  LevelUtils::LoadLevelDefinition((string *)this,SUB81(asStack_18,0));
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  std::string::~string(asStack_18);
  if (pRVar3 != (ResourceInfo *)0x0) {
    uVar7 = *(undefined8 *)(pRVar3 + 0x1c8);
    lVar4 = FUN_04df9260(uVar7,*(undefined8 *)(pRVar3 + 0x1d0));
    if (lVar4 != 0) {
      pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04df9554(uVar7);
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
      lVar4 = FUN_04df926c(*(undefined8 *)(lVar4 + 0x18),*(undefined8 *)(lVar4 + 0x20));
      if (lVar4 != 0) {
        pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04df9554(*(undefined8 *)(pRVar3 + 0x1c8));
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
        iVar1 = FUN_04df926c(*(undefined8 *)(lVar4 + 0x18),*(undefined8 *)(lVar4 + 0x20));
        if (0 < iVar1) {
          iVar6 = 0;
          do {
            iVar2 = Sexy::LazySingleton<LevelBasedModifierModuleMgr>::GetInstancePtr();
            iVar6 = iVar6 + 1;
            LevelBasedModifierModuleMgr::AddLevelModifierModuleCollections(iVar2,0);
          } while (iVar6 != iVar1);
        }
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeSelectLevel::PressStartButton() */

void __thiscall PVZ2UnchartedModeSelectLevel::PressStartButton(PVZ2UnchartedModeSelectLevel *this)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04df91a4(*(undefined8 *)(this + 0x1d8),*(undefined8 *)(this + 0x1e8));
  if (iVar1 != 0) {
    if (*(FilesystemSaveGameContext **)(this + 0x1c8) == (FilesystemSaveGameContext *)0x0) {
      std::string::string(asStack_10,"pvz1_001_n");
      nop();
    }
    else {
      uVar2 = Sexy::FilesystemSaveGameContext::GetBuffer
                        (*(FilesystemSaveGameContext **)(this + 0x1c8));
      FUN_05475d88(asStack_10,uVar2);
    }
    UISingletonDialog<PVZ2UnchartedModeSelectLevel>::CloseDialog();
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x1d0),(SexyURL *)asStack_10);
    lVar3 = Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
    FUN_04df955c(lVar3 + 0x194);
    iVar1 = PVZ2UnchartedModeUtils::GetUnchartedWorldType();
    if (iVar1 == 3) {
      ApplyDifficulty();
    }
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeSelectLevel::onSuccessRespond() */

void __thiscall PVZ2UnchartedModeSelectLevel::onSuccessRespond(PVZ2UnchartedModeSelectLevel *this)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04df91a4(*(undefined8 *)(this + 0x1d8),*(undefined8 *)(this + 0x1e8));
  if (iVar1 != 0) {
    if (*(FilesystemSaveGameContext **)(this + 0x1c8) == (FilesystemSaveGameContext *)0x0) {
      std::string::string(asStack_10,"pvz1_001_n");
      nop();
    }
    else {
      uVar2 = Sexy::FilesystemSaveGameContext::GetBuffer
                        (*(FilesystemSaveGameContext **)(this + 0x1c8));
      FUN_05475d88(asStack_10,uVar2);
    }
    UISingletonDialog<PVZ2UnchartedModeSelectLevel>::CloseDialog();
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x1d0),(SexyURL *)asStack_10);
    lVar3 = Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
    PVZ_T();
    FUN_04df91f0(lVar3 + 0x19c);
    iVar1 = PVZ2UnchartedModeUtils::GetUnchartedWorldType();
    if (iVar1 == 3) {
      ApplyDifficulty();
    }
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UnchartedModeSelectLevel::onNetworkResponse(int, int) */

void __thiscall
PVZ2UnchartedModeSelectLevel::onNetworkResponse
          (PVZ2UnchartedModeSelectLevel *this,int param_1,int param_2)

{
  Sexy::OutputDebugStrF((wchar_t *)"PVZ1ModeSelectLevel::onNetworkResponse context=%d status=%d");
  if ((param_1 == 2) && (param_2 == 2)) {
    onSuccessRespond(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeSelectLevel::InitThemeButtons() */

void __thiscall PVZ2UnchartedModeSelectLevel::InitThemeButtons(PVZ2UnchartedModeSelectLevel *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  PVZ2UnchartedModeUtils *this_00;
  UIWidgetText *pUVar7;
  long *plVar8;
  PVZ1ModeSelectLevelThemeButton *this_01;
  undefined4 *puVar9;
  undefined8 uVar10;
  long lVar11;
  code *pcVar12;
  int iVar13;
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  PVZ2UnchartedModeUtils *local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ2UnchartedModeUtils::GetCurrentThemeList(___stack_chk_guard);
  this_00 = (PVZ2UnchartedModeUtils *)FUN_04df920c(local_20,local_18);
  PVZ2UnchartedModeUtils::GetCurrentLevel(this_00);
  cVar4 = PVZ1ModeUtils::IsThemeDisabled(asStack_40);
  std::string::string(asStack_30,"ChallengeTitle");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_30);
  std::string::~string(asStack_30);
  nop();
  std::string::string(asStack_38,"[MAIN_THEME_HARD]");
  StringHelper::ToStringValue(asStack_38);
  PuzzleTip::SetTip(pUVar7,asStack_30);
  FUN_05476c50(asStack_30);
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_30,"ModeContainer");
  plVar8 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_30);
  std::string::~string(asStack_30);
  nop();
  iVar1 = *(int *)((long)plVar8 + 0x54);
  lVar3 = plVar8[10];
  if (cVar4 == '\0') {
    iVar2 = (int)this_00;
    iVar5 = FUN_04df99bc(10);
    iVar6 = FUN_04df99bc(0x50);
    if (0 < iVar2) {
      lVar11 = 0;
      iVar13 = (((int)lVar3 + (1 - iVar2) * iVar5) - iVar6 * iVar2) / 2;
      do {
        this_01 = ::operator_new(800);
        PVZ1ModeSelectLevelThemeButton::PVZ1ModeSelectLevelThemeButton(this_01,(int)lVar11 + 0x3eb);
        lVar3 = lVar11 + 1;
        puVar9 = (undefined4 *)FUN_04df9244(local_20,lVar11);
        FUN_04df91e0(this_01 + 0x308,*puVar9);
        (**(code **)(*(long *)this_01 + 0x198))(this_01,iVar13,(iVar1 - iVar6) / 2,iVar6,iVar6);
        PVZ1ModeSelectLevelThemeButton::InitView(this_01);
        (**(code **)(*plVar8 + 0x60))(plVar8,this_01);
        lVar11 = lVar3;
        iVar13 = iVar13 + iVar5 + iVar6;
      } while ((int)lVar3 < iVar2);
    }
  }
  else {
    TodStringTranslate(L"[PVZ1_MODE_SELECT_LEVEL_THEME_NO_USE_DESC]");
    pUVar7 = ::operator_new(0x108);
    UIWidgetText::UIWidgetText(pUVar7,(wstring *)asStack_30);
    FUN_05476c50(asStack_30);
    (**(code **)(*(long *)pUVar7 + 0x198))(pUVar7,0,0,(int)lVar3,iVar1);
    uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
    FUN_04df91d0(pUVar7 + 0xe8,uVar10);
    FUN_04df91d8(pUVar7 + 0xe0,5);
    pcVar12 = *(code **)(*(long *)pUVar7 + 0x170);
    Sexy::Insets::Insets((Insets *)asStack_30,0x5f,0x40,0xb,0xff);
    (*pcVar12)(pUVar7,0,asStack_30);
    (**(code **)(*plVar8 + 0x60))(plVar8,pUVar7);
  }
  std::string::~string(asStack_40);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UnchartedModeSelectLevel::PVZ2UnchartedModeSelectLevel() */

void __thiscall
PVZ2UnchartedModeSelectLevel::PVZ2UnchartedModeSelectLevel(PVZ2UnchartedModeSelectLevel *this)

{
  UISingletonDialog<PVZ2UnchartedModeSelectLevel>::UISingletonDialog
            ((UISingletonDialog<PVZ2UnchartedModeSelectLevel> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_069d1850;
  *(undefined **)(this + 0xd8) = &DAT_069d1bb0;
  *(undefined ***)(this + 0x138) = &PTR__PVZ2UnchartedModeSelectLevel_069d1bf8;
  std::vector<bool,std::allocator<bool>>::vector
            ((vector<bool,std::allocator<bool>> *)(this + 0x140));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x170));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x188));
  Sexy::Insets::Insets((Insets *)(this + 0x1a8));
  Sexy::Insets::Insets((Insets *)(this + 0x1b8));
  Sexy::Delegate1<std::string_const&>::Delegate1((DummyInit *)(this + 0x1d0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x200));
  std::vector<bool,std::allocator<bool>>::clear((vector<bool,std::allocator<bool>> *)(this + 0x140))
  ;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x1c8) = 0;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x200));
  std::vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>>::clear
            ((vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>> *)
             (this + 0x170));
  std::vector<PVZ2UnchartedModeBonusWidget*,std::allocator<PVZ2UnchartedModeBonusWidget*>>::clear
            ((vector<PVZ2UnchartedModeBonusWidget*,std::allocator<PVZ2UnchartedModeBonusWidget*>> *)
             (this + 0x188));
  *(undefined8 *)(this + 0x1a0) = 0;
  this[0x218] = (PVZ2UnchartedModeSelectLevel)0x0;
  return;
}


/* PVZ2UnchartedModeSelectLevel::~PVZ2UnchartedModeSelectLevel() */

void __thiscall
PVZ2UnchartedModeSelectLevel::~PVZ2UnchartedModeSelectLevel(PVZ2UnchartedModeSelectLevel *this)

{
  *(undefined ***)(this + 0x138) = &PTR__PVZ2UnchartedModeSelectLevel_069d1bf8;
  *(undefined ***)this = &PTR_GetClass_069d1850;
  *(undefined **)(this + 0xd8) = &DAT_069d1bb0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x200));
  std::vector<PVZ2UnchartedModeBonusWidget*,std::allocator<PVZ2UnchartedModeBonusWidget*>>::~vector
            ((vector<PVZ2UnchartedModeBonusWidget*,std::allocator<PVZ2UnchartedModeBonusWidget*>> *)
             (this + 0x188));
  std::vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>>::~vector
            ((vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>> *)
             (this + 0x170));
  std::vector<bool,std::allocator<bool>>::~vector
            ((vector<bool,std::allocator<bool>> *)(this + 0x140));
  UISingletonDialog<PVZ2UnchartedModeSelectLevel>::~UISingletonDialog
            ((UISingletonDialog<PVZ2UnchartedModeSelectLevel> *)this);
  return;
}


/* non-virtual thunk to PVZ2UnchartedModeSelectLevel::~PVZ2UnchartedModeSelectLevel() */

void __thiscall
PVZ2UnchartedModeSelectLevel::~PVZ2UnchartedModeSelectLevel(PVZ2UnchartedModeSelectLevel *this)

{
  ~PVZ2UnchartedModeSelectLevel(this + -0x138);
  return;
}


/* PVZ2UnchartedModeSelectLevel::~PVZ2UnchartedModeSelectLevel() */

void __thiscall
PVZ2UnchartedModeSelectLevel::~PVZ2UnchartedModeSelectLevel(PVZ2UnchartedModeSelectLevel *this)

{
  ~PVZ2UnchartedModeSelectLevel(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PVZ2UnchartedModeSelectLevel::~PVZ2UnchartedModeSelectLevel() */

void __thiscall
PVZ2UnchartedModeSelectLevel::~PVZ2UnchartedModeSelectLevel(PVZ2UnchartedModeSelectLevel *this)

{
  ~PVZ2UnchartedModeSelectLevel(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeSelectLevel::InitModes() */

void __thiscall PVZ2UnchartedModeSelectLevel::InitModes(PVZ2UnchartedModeSelectLevel *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  LevelUtils *this_01;
  long lVar7;
  long *plVar8;
  PVZ2UIScrollingWidget *this_02;
  Widget *this_03;
  RtObject *this_04;
  undefined8 uVar9;
  UIWidgetText *pUVar10;
  code *pcVar11;
  ulong uVar12;
  int iVar13;
  undefined1 auVar14 [16];
  string asStack_50 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  PVZ2UnchartedModeUtils *local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ2UnchartedModeUtils::GetCurrentLevel(___stack_chk_guard);
  this_01 = (LevelUtils *)Sexy::LazySingleton<LevelUtils>::GetInstance();
  lVar7 = LevelUtils::GetLevelInfo(this_01,asStack_50);
  this_00 = (RtWeakPtr *)(lVar7 + 0x80);
  if ((lVar7 != -0x10) && (bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00), bVar1)) {
    this_04 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    bVar1 = Sexy::RtObject::IsA<PVZ2UnchartedModeOutroProperties>(this_04);
    if (bVar1) {
      Sexy::OutputDebugStrF
                ((wchar_t *)"definition->VictoryModule->IsA<PVZ2UnchartedModeOutroProperties>()");
    }
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_48,(RtWeakPtrBase *)this_00);
  std::string::string((string *)&local_20,"ModeContainer");
  plVar8 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  this_02 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_02,(ScrollWidgetListener *)(this + 0x138));
  (**(code **)(*(long *)this_02 + 0x198))
            (this_02,0,0,(int)plVar8[10],*(undefined4 *)((long)plVar8 + 0x54));
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_02,2);
  this_03 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_03);
  (**(code **)(*(long *)this_03 + 0x198))
            (this_03,0,0,*(undefined4 *)(this_02 + 0x50),*(undefined4 *)(this_02 + 0x54));
  (**(code **)(*(long *)this_02 + 0x60))(this_02,this_03);
  (**(code **)(*plVar8 + 0x60))(plVar8,this_02);
  uVar3 = FUN_04df91c0((int)plVar8[10]);
  iVar4 = FUN_04df91c4(*(undefined4 *)((long)plVar8 + 0x54));
  Sexy::OutputDebugStrF((wchar_t *)"InitModes start");
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_48);
  if (cVar2 != '\0') {
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
    uVar9 = FUN_04df924c(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x48));
    Sexy::OutputDebugStrF((wchar_t *)"InitModes end Props mode size = %d",uVar9);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
    std::vector<std::string,std::allocator<std::string>>::vector
              ((vector<std::string,std::allocator<std::string>> *)&local_20,(vector *)(lVar7 + 0x40)
              );
    uVar9 = local_20;
    iVar5 = FUN_04df924c(local_20,local_18);
    if (0 < iVar5) {
      uVar12 = 0;
      iVar4 = iVar4 / 4;
      iVar13 = 0;
      while( true ) {
        uVar6 = FUN_04df99bc(0);
        auVar14 = FUN_04df9258(uVar9,uVar12);
        Sexy::Upper(auVar14._0_8_,auVar14._8_8_);
        uVar9 = FUN_0547429c(asStack_30);
        Sexy::StrFormat("[PVZ2_UNCHARTED_MODE_MODE_TITLE_%s]",asStack_40,uVar9);
        std::string::~string(asStack_30);
        auVar14 = FUN_04df9258(local_20,uVar12);
        Sexy::Upper(auVar14._0_8_,auVar14._8_8_);
        uVar9 = FUN_0547429c(asStack_30);
        Sexy::StrFormat("[PVZ2_UNCHARTED_MODE_MODE_DESC_%s]",asStack_38,uVar9);
        std::string::~string(asStack_30);
        StringHelper::ToStringValue(asStack_40);
        pUVar10 = ::operator_new(0x108);
        UIWidgetText::UIWidgetText(pUVar10,(wstring *)asStack_30);
        FUN_05476c50(asStack_30);
        (**(code **)(*(long *)pUVar10 + 0x198))(pUVar10,uVar6,iVar13,uVar3,iVar4);
        uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
        FUN_04df91d0(pUVar10 + 0xe8,uVar9);
        FUN_04df91d8(pUVar10 + 0xe0,5);
        pcVar11 = *(code **)(*(long *)pUVar10 + 0x170);
        Sexy::Insets::Insets((Insets *)asStack_30,0x5f,0x40,0xb,0xff);
        (*pcVar11)(pUVar10,0,asStack_30);
        (**(code **)(*(long *)this_03 + 0x60))(this_03,pUVar10);
        StringHelper::ToStringValue(asStack_38);
        pUVar10 = ::operator_new(0x108);
        UIWidgetText::UIWidgetText(pUVar10,(wstring *)asStack_30);
        FUN_05476c50(asStack_30);
        (**(code **)(*(long *)pUVar10 + 0x198))(pUVar10,uVar6,iVar13 + iVar4,uVar3,iVar4);
        uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
        FUN_04df91d0(pUVar10 + 0xe8,uVar9);
        UIWidgetText::FormatByWidth(pUVar10);
        FUN_04df91d8(pUVar10 + 0xe0,3);
        pcVar11 = *(code **)(*(long *)pUVar10 + 0x170);
        Sexy::Insets::Insets((Insets *)asStack_30,0x5f,0x40,0xb,0xff);
        (*pcVar11)(pUVar10,0,asStack_30);
        (**(code **)(*(long *)this_03 + 0x60))(this_03,pUVar10);
        std::string::~string(asStack_38);
        std::string::~string(asStack_40);
        if (uVar12 == iVar5 - 1) break;
        uVar12 = uVar12 + 1;
        uVar9 = local_20;
        iVar13 = iVar4 + iVar13 + iVar4;
      }
    }
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)&local_20);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  std::string::~string(asStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeSelectLevel::InitChallengeWidgets() */

void __thiscall
PVZ2UnchartedModeSelectLevel::InitChallengeWidgets(PVZ2UnchartedModeSelectLevel *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  PVZ2UnchartedModeUtils *this_00;
  LevelUtils *this_01;
  long lVar7;
  vector *pvVar8;
  int *piVar9;
  PVZ2UnchartedModeChallengeWidget *this_02;
  ulong uVar10;
  int extraout_w1;
  ulong uVar11;
  int iVar12;
  undefined8 uVar13;
  string asStack_48 [8];
  undefined1 auStack_40 [8];
  undefined8 local_38 [3];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<bool,std::allocator<bool>>::clear((vector<bool,std::allocator<bool>> *)(this + 0x140))
  ;
  std::string::string((string *)&local_20,"ChangeableContainer");
  plVar6 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  iVar4 = FUN_04df99bc(10);
  lVar3 = plVar6[10];
  iVar2 = *(int *)((long)plVar6 + 0x54);
  this_00 = (PVZ2UnchartedModeUtils *)PVZ2UnchartedModeUtils::IsHardMode();
  PVZ2UnchartedModeUtils::GetCurrentLevel(this_00);
  FUN_05475d88((string *)&local_20,asStack_48);
  iVar5 = PVZ2UnchartedModeUtils::GetWorldIndexOfLevel((string *)&local_20);
  std::string::~string((string *)&local_20);
  PVZ2UnchartedModeUtils::GetChallengeStatus(iVar5);
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x200),(vector *)&local_20);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_20);
  this_01 = (LevelUtils *)Sexy::LazySingleton<LevelUtils>::GetInstance();
  lVar7 = LevelUtils::GetLevelInfo(this_01,asStack_48);
  if (lVar7 != 0) {
    std::
    vector<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>,std::allocator<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>>>
    ::vector((vector<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>,std::allocator<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>>>
              *)local_38,(vector *)(lVar7 + 0x1f8));
    pvVar8 = (vector *)FUN_04df9558(local_38[0]);
    std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>::vector
              ((vector<ChallengeInfo,std::allocator<ChallengeInfo>> *)&local_20,pvVar8);
    iVar5 = FUN_04df9238(local_20,local_18);
    std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>::~vector
              ((vector<ChallengeInfo,std::allocator<ChallengeInfo>> *)&local_20);
    std::
    vector<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>,std::allocator<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>>>
    ::~vector((vector<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>,std::allocator<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>>>
               *)local_38);
    if (0 < iVar5) {
      iVar12 = 0;
      iVar1 = iVar2 + 3;
      if (-1 < iVar2) {
        iVar1 = iVar2;
      }
      uVar11 = 0;
      do {
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_38);
        PVZ2UnchartedModeUtils::GetCurrentLevelChallengeDesc
                  ((PVZ2UnchartedModeUtils *)(uVar11 & 0xffffffff),extraout_w1);
        std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
                  ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)&local_20,
                   (vector *)local_38);
        this_02 = ::operator_new(0x338);
        PVZ2UnchartedModeChallengeWidget::PVZ2UnchartedModeChallengeWidget
                  (this_02,uVar11 & 0xffffffff,(string *)&local_20);
        std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
                  ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)&local_20);
        (**(code **)(*(long *)this_02 + 0x198))
                  (this_02,iVar4,iVar12,(int)lVar3 + iVar4 * -2,iVar1 >> 2);
        uVar13 = *(undefined8 *)(this + 0x200);
        uVar10 = FUN_04df920c(uVar13,*(undefined8 *)(this + 0x208));
        if (uVar11 < uVar10) {
          piVar9 = (int *)FUN_04df9244(uVar13,uVar11);
          PVZ2UnchartedModeChallengeWidget::SetStarState(this_02,*piVar9 == 1);
        }
        else {
          PVZ2UnchartedModeChallengeWidget::SetStarState(this_02,false);
        }
        uVar11 = uVar11 + 1;
        iVar12 = iVar12 + (iVar1 >> 2);
        FUN_05477b24((string *)&local_20,auStack_40);
        PVZ1ModeSelectLevelChallengeWidget::SetDescStr(this_02,(string *)&local_20);
        FUN_05476c50((string *)&local_20);
        (**(code **)(*plVar6 + 0x60))(plVar6,this_02);
        FUN_05476c50(auStack_40);
        std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
                  ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)local_38);
      } while ((int)uVar11 < iVar5);
    }
  }
  std::string::~string(asStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeSelectLevel::InitBonusWidgets() */

void __thiscall PVZ2UnchartedModeSelectLevel::InitBonusWidgets(PVZ2UnchartedModeSelectLevel *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  PVZ2UnchartedModeUtils *this_00;
  undefined8 uVar10;
  undefined8 uVar11;
  UIScrollControl *pUVar12;
  long lVar13;
  Widget *this_01;
  uint *puVar14;
  PVZ2UnchartedModeBonusWidget *this_02;
  ulong uVar15;
  bool extraout_w1;
  bool extraout_w1_00;
  ScrollWidget *pSVar16;
  ulong uVar17;
  int iVar18;
  undefined8 local_68;
  PVZ2UnchartedModeBonusWidget *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PVZ2UnchartedModeUtils *)PVZ2UnchartedModeUtils::IsHardMode();
  PVZ2UnchartedModeUtils::GetCurrentLevelBonus(this_00,extraout_w1);
  PVZ2UnchartedModeUtils::GetCurrentLevelFirstRewardBonus
            ((PVZ2UnchartedModeUtils *)((ulong)this_00 & 0xffffffff),extraout_w1_00);
  cVar4 = PVZ2UnchartedModeUtils::IsCurrentLevelFirstReward();
  iVar5 = FUN_04df9218(local_50,local_48);
  iVar6 = FUN_04df9218(local_38,local_30);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  if (cVar4 == '\0') {
    std::vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>>::reserve
              ((vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>> *)
               &local_20,(long)iVar5);
  }
  else {
    std::vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>>::reserve
              ((vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>> *)
               &local_20,(long)(iVar5 + iVar6));
    local_68 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_60,(__normal_iterator *)&local_68);
    uVar10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_38);
    uVar11 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_38);
    std::vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>>::
    insert<__gnu_cxx::__normal_iterator<UnchartedModeLevelBonusData*,std::vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>>>,void>
              ((vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>> *)
               &local_20,local_60,uVar10,uVar11);
  }
  local_68 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_20);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_60,(__normal_iterator *)&local_68);
  uVar10 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_50);
  uVar11 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)&local_50);
  std::vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>>::
  insert<__gnu_cxx::__normal_iterator<UnchartedModeLevelBonusData*,std::vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>>>,void>
            ((vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>> *)
             &local_20,local_60,uVar10,uVar11);
  std::string::string((string *)&local_60,"UIScroll_0");
  pUVar12 = UI::Dialog::GetWidget<UIScrollControl>((Dialog *)this,(string *)&local_60);
  *(UIScrollControl **)(this + 0x168) = pUVar12;
  std::string::~string((string *)&local_60);
  nop();
  lVar13 = AccessoryContent::GetDisplayImage(*(AccessoryContent **)(this + 0x168));
  pSVar16 = *(ScrollWidget **)(this + 0x168);
  *(undefined4 *)(lVar13 + 0x50) = *(undefined4 *)(pSVar16 + 0x50);
  Sexy::ScrollWidget::SetScrollMode(pSVar16,1);
  iVar7 = FUN_04df99bc(10);
  iVar8 = FUN_04df99bc(0x28);
  lVar13 = *(long *)(this + 0x168);
  iVar5 = (*(int *)(lVar13 + 0x54) - iVar8) / 2;
  Sexy::Insets::Insets
            ((Insets *)&local_60,*(int *)(lVar13 + 0x48) - iVar7,iVar5 + *(int *)(lVar13 + 0x4c),
             iVar7,iVar8);
  lVar13 = *(long *)(this + 0x168);
  iVar6 = *(int *)(lVar13 + 0x48);
  iVar18 = *(int *)(lVar13 + 0x50);
  iVar9 = *(int *)(lVar13 + 0x4c);
  *(PVZ2UnchartedModeBonusWidget **)(this + 0x1a8) = local_60;
  *(undefined8 *)(this + 0x1b0) = uStack_58;
  Sexy::Insets::Insets((Insets *)&local_60,iVar6 + iVar18,iVar5 + iVar9,iVar7,iVar8);
  *(PVZ2UnchartedModeBonusWidget **)(this + 0x1b8) = local_60;
  *(undefined8 *)(this + 0x1c0) = uStack_58;
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  iVar9 = FUN_04df99bc(10);
  iVar6 = *(int *)(*(long *)(this + 0x168) + 0x54);
  std::vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>>::clear
            ((vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>> *)
             (this + 0x170));
  iVar6 = iVar6 + iVar9 * -2;
  iVar5 = iVar9 + iVar6;
  std::vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>>::operator=
            ((vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>> *)
             (this + 0x170),(vector *)&local_20);
  std::vector<PVZ2UnchartedModeBonusWidget*,std::allocator<PVZ2UnchartedModeBonusWidget*>>::clear
            ((vector<PVZ2UnchartedModeBonusWidget*,std::allocator<PVZ2UnchartedModeBonusWidget*>> *)
             (this + 0x188));
  uVar17 = 0;
  iVar18 = iVar9;
  while( true ) {
    uVar10 = local_20;
    uVar15 = FUN_04df9218(local_20,local_18);
    if (uVar15 <= uVar17) break;
    puVar14 = (uint *)FUN_04df922c(uVar10,uVar17);
    uVar1 = *puVar14;
    uVar2 = puVar14[1];
    uVar3 = puVar14[2];
    Sexy::OutputDebugStrF
              ((wchar_t *)"finalBonusDataList : %d, id = %d ",uVar17 & 0xffffffff,(ulong)uVar1);
    this_02 = ::operator_new(0x108);
    PVZ2UnchartedModeBonusWidget::PVZ2UnchartedModeBonusWidget(this_02,uVar1,uVar2,SUB41(uVar3,0));
    local_60 = this_02;
    (**(code **)(*(long *)this_02 + 0x198))(this_02,iVar18,iVar9,iVar6,iVar6);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,local_60);
    std::vector<PVZ2UnchartedModeBonusWidget*,std::allocator<PVZ2UnchartedModeBonusWidget*>>::
    push_back((vector<PVZ2UnchartedModeBonusWidget*,std::allocator<PVZ2UnchartedModeBonusWidget*>> *
              )(this + 0x188),&local_60);
    uVar17 = uVar17 + 1;
    iVar18 = iVar18 + iVar5;
  }
  if (uVar15 < 4) {
    (**(code **)(*(long *)this_01 + 0x198))
              (this_01,0,0,iVar5 * 3 + iVar9,*(undefined4 *)(this + 0x54));
  }
  else {
    (**(code **)(*(long *)this_01 + 0x198))
              (this_01,0,0,iVar9 + iVar5 * (int)uVar15,*(undefined4 *)(this + 0x54));
  }
  *(Widget **)(this + 0x1a0) = this_01;
  (**(code **)(**(long **)(this + 0x168) + 0x60))(*(long **)(this + 0x168),this_01);
  std::vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>>::~vector
            ((vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>> *)
             &local_20);
  std::vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>>::~vector
            ((vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>> *)
             &local_38);
  std::vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>>::~vector
            ((vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>> *)
             &local_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeSelectLevel::InitZombies() */

void __thiscall PVZ2UnchartedModeSelectLevel::InitZombies(PVZ2UnchartedModeSelectLevel *this)

{
  long lVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  UIWidgetText *pUVar9;
  PVZ2UnchartedModeUtils *this_00;
  string *psVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  PVZ2UnchartedModeZombieWidget *pPVar14;
  string asStack_50 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  string asStack_30 [8];
  undefined4 local_28;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)local_20,"MainTheme");
  pUVar9 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_20);
  std::string::~string((string *)local_20);
  nop();
  std::string::string(asStack_30,"[PVZ2_UNCHARTED_ZOMBIE_TITLE]");
  StringHelper::ToStringValue(asStack_30);
  PuzzleTip::SetTip(pUVar9,(string *)local_20);
  FUN_05476c50((string *)local_20);
  std::string::~string(asStack_30);
  nop();
  this_00 = (PVZ2UnchartedModeUtils *)PVZ2UnchartedModeUtils::IsHardMode();
  PVZ2UnchartedModeUtils::GetCurrentLevel(this_00);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
  psVar10 = (string *)Sexy::LazySingleton<LevelUtils>::GetInstance();
  LevelUtils::SimpleLoadLevelDefinition(psVar10,SUB81(asStack_50,0));
  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(lVar11 + 0x38));
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(lVar11 + 0x38));
  while( true ) {
    bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
    if (!bVar3) break;
    uVar13 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    PVPSeedZombie::PVPSeedZombie((PVPSeedZombie *)asStack_30);
    thunk_FUN_05475e00(asStack_30,uVar13);
    local_28 = 0;
    std::vector<ZombieInfo,std::allocator<ZombieInfo>>::push_back
              ((vector<ZombieInfo,std::allocator<ZombieInfo>> *)local_20,(ZombieInfo *)asStack_30);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)asStack_30);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  std::string::string(asStack_30,"ChangeableContainer");
  plVar12 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_30);
  std::string::~string(asStack_30);
  nop();
  iVar4 = FUN_04df99bc(0x14);
  iVar5 = FUN_04df99bc(0);
  iVar6 = FUN_04df99bc(2);
  iVar7 = FUN_04df91c0((int)plVar12[10]);
  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
  iVar8 = FUN_04df924c(*(undefined8 *)(lVar11 + 0x38),*(undefined8 *)(lVar11 + 0x40));
  if ((iVar8 != 0) && (0 < iVar8)) {
    iVar7 = (iVar7 + iVar4 * -4) / 3;
    lVar11 = 0;
    do {
      Sexy::Insets::Insets
                ((Insets *)asStack_30,iVar4 + (iVar4 + iVar7) * ((int)lVar11 % 3),
                 iVar5 + ((int)lVar11 / 3) * (iVar6 + iVar7),iVar7,iVar7);
      uVar13 = FUN_04df9278(local_20[0],lVar11);
      FUN_05475d88((string *)&local_38,uVar13);
      lVar1 = lVar11 + 1;
      lVar11 = FUN_04df9278(local_20[0],lVar11);
      uVar2 = *(undefined4 *)(lVar11 + 8);
      pPVar14 = ::operator_new(0xf0);
      PVZ2UnchartedModeZombieWidget::PVZ2UnchartedModeZombieWidget
                (pPVar14,(string *)&local_38,uVar2);
      std::string::~string((string *)&local_38);
      (**(code **)(*(long *)pPVar14 + 0x1a0))(pPVar14,asStack_30);
      (**(code **)(*plVar12 + 0x60))(plVar12,pPVar14);
      lVar11 = lVar1;
    } while ((int)lVar1 < iVar8);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  std::vector<ZombieInfo,std::allocator<ZombieInfo>>::~vector
            ((vector<ZombieInfo,std::allocator<ZombieInfo>> *)local_20);
  std::string::~string(asStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeSelectLevel::InitView() */

void __thiscall PVZ2UnchartedModeSelectLevel::InitView(PVZ2UnchartedModeSelectLevel *this)

{
  undefined4 uVar1;
  bool bVar2;
  PVZ2UnchartedModeSelectLevel PVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  UIWidgetText *pUVar8;
  UIWidgetImage *pUVar9;
  PVZ2UIImageButton *this_00;
  long lVar10;
  long *plVar11;
  UIWidgetText *pUVar12;
  PVZ2UnchartedModeUtils *this_01;
  Image *pIVar13;
  UIWidgetImage *this_02;
  char *pcVar14;
  string asStack_b8 [8];
  string asStack_b0 [8];
  Delegate0 aDStack_a8 [48];
  wstring awStack_78 [56];
  undefined4 local_40 [14];
  PVZ2UnchartedModeUtils *local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ2UnchartedModeUtils::GetCurrentLevel(___stack_chk_guard);
  FUN_05475d88((string *)local_40,asStack_b8);
  iVar5 = PVZ2UnchartedModeUtils::GetWorldIndexOfLevel((string *)local_40);
  std::string::~string((string *)local_40);
  std::string::string((string *)local_40,"Title");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  FUN_05478178(awStack_78,L"[PVZ2_UNCHARTED_MODE_START_LEVEL]",asStack_b0);
  TodReplaceNumberString(awStack_78,L"{NUM}",iVar5 + 1);
  PuzzleTip::SetTip(pUVar8,(string *)local_40);
  FUN_05476c50((string *)local_40);
  FUN_05476c50(awStack_78);
  nop();
  bVar2 = (bool)PVZ2UnchartedModeUtils::IsHardMode();
  std::string::string((string *)local_40,"ModeDesc");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  std::string::string((string *)local_40,"UIImage_0");
  pUVar9 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  PVar3 = (PVZ2UnchartedModeSelectLevel)PVZ2UnchartedModeUtils::IsTimeLimitWorld();
  this[0x218] = PVar3;
  if (PVar3 != (PVZ2UnchartedModeSelectLevel)0x0) {
    std::string::string((string *)local_40,"ModePreview");
    pUVar12 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_40);
    std::string::~string((string *)local_40);
    nop();
    std::string::string((string *)awStack_78,"[PVZ2_UNCHARTED_LEVELPASS_TITLE]");
    StringHelper::ToStringValue((string *)awStack_78);
    PuzzleTip::SetTip(pUVar12,(string *)local_40);
    FUN_05476c50((string *)local_40);
    std::string::~string((string *)awStack_78);
    nop();
    uVar1 = *(undefined4 *)(pUVar8 + 0x4c);
    iVar5 = *(int *)(pUVar8 + 0x48);
    iVar6 = FUN_04df99bc(0x14);
    this_01 = (PVZ2UnchartedModeUtils *)
              (**(code **)(*(long *)pUVar8 + 0x198))
                        (pUVar8,iVar5 + iVar6,uVar1,*(int *)(pUVar8 + 0x50) - iVar6,
                         *(undefined4 *)(pUVar8 + 0x54));
    PVZ2UnchartedModeUtils::GetCurrentWorldResourcePrefix(this_01);
    Set8BytesTo0(awStack_78);
    iVar7 = PVZ2UnchartedModeUtils::GetCurrentLevelFirstReward(bVar2);
    if (iVar7 == 2) {
      pcVar14 = "_HUD_WORLDMAP_STAR";
    }
    else {
      pcVar14 = "_HUD_WORLDMAP_STAR_BG";
    }
    std::operator+(asStack_b0,pcVar14);
    FUN_05474278(awStack_78,(string *)local_40);
    std::string::~string((string *)local_40);
    pIVar13 = (Image *)StringHelper::ToImage((string *)awStack_78,false);
    this_02 = ::operator_new(0x118);
    UIWidgetImage::UIWidgetImage(this_02,pIVar13);
    (**(code **)(*(long *)this_02 + 0x198))(this_02,iVar5,uVar1,iVar6,iVar6);
    local_40[0] = 2;
    UIWidgetImage::SetImageType(this_02,(string *)local_40,0.0);
    (**(code **)(*(long *)pUVar9 + 0x60))(pUVar9,this_02);
    std::string::~string((string *)awStack_78);
    std::string::~string(asStack_b0);
  }
  if (bVar2 == false) {
    cVar4 = PVZ2UnchartedModeSelectLevelAnniversary::isSpecialLevel();
    if (cVar4 == '\0') {
      pcVar14 = "[PVZ2_UNCHARTED_NORMAL_LEVEL_MAIN_GOAL_DESC]";
      goto LAB_04dff074;
    }
  }
  else {
    cVar4 = PVZ2UnchartedModeSelectLevelAnniversary::isSpecialLevel();
    if (cVar4 == '\0') {
      pcVar14 = "[PVZ2_UNCHARTED_HARD_LEVEL_MAIN_GOAL_DESC]";
      goto LAB_04dff074;
    }
  }
  pcVar14 = "[PVZ2_UNCHARTED_SPECIAL_LEVEL_MAIN_GOAL_DESC]";
LAB_04dff074:
  std::string::string((string *)awStack_78,pcVar14);
  StringHelper::ToStringValue((string *)awStack_78);
  PuzzleTip::SetTip(pUVar8,(string *)local_40);
  FUN_05476c50((string *)local_40);
  std::string::~string((string *)awStack_78);
  nop();
  this_00 = ::operator_new(0x368);
  PVZ2UIImageButton::PVZ2UIImageButton(this_00,0x3ea);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b9d368,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06b9d220,3);
  PVZ2UIButton::SetDialogStates
            ((PVZ2UIButton *)this_00,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)local_40);
  std::string::string((string *)local_40,"StartButton");
  lVar10 = UI::Dialog::GetWidget((Dialog *)this,(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,*(undefined4 *)(lVar10 + 0x48),*(undefined4 *)(lVar10 + 0x4c),
             *(undefined4 *)(lVar10 + 0x50),*(undefined4 *)(lVar10 + 0x54));
  std::string::string((string *)awStack_78,"[MAINMENU_PLAY]");
  StringHelper::ToStringValue((string *)awStack_78);
  PVZ2UIImageButton::SetTitle(this_00,(string *)local_40);
  FUN_05476c50((string *)local_40);
  std::string::~string((string *)awStack_78);
  nop();
  PVZ2UIImageButton::UpdateParams(this_00);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,PressStartButton);
  Sexy::Delegate0::Delegate0<PVZ2UnchartedModeSelectLevel,void(PVZ2UnchartedModeSelectLevel::*)()>
            (aDStack_a8,(string *)local_40);
  CornucopiaShopButton::SetClickCallback((CornucopiaShopButton *)this_00,aDStack_a8);
  std::string::string((string *)local_40,"Background_0");
  plVar11 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  (**(code **)(*plVar11 + 0x60))(plVar11,this_00);
  InitBonusWidgets(this);
  iVar5 = PVZ2UnchartedModeUtils::GetUnchartedWorldType();
  if (iVar5 == 3) {
    InitZombies(this);
    InitThemeButtons(this);
  }
  else {
    InitModes(this);
    if ((bVar2 == false) &&
       (cVar4 = PVZ2UnchartedModeUtils::IsNormalSelectLevelWithHardmode(), cVar4 == '\0')) {
      InitZombies(this);
    }
    else {
      InitChallengeWidgets(this);
    }
  }
  std::string::~string(asStack_b8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeSelectLevel::OnCreate() */

void __thiscall PVZ2UnchartedModeSelectLevel::OnCreate(PVZ2UnchartedModeSelectLevel *this)

{
  long lVar1;
  LevelBasedModifierModuleMgr *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  lVar1 = UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(int *)(lVar1 + 0x48) = (*(int *)(gLawnApp + 0x724) - *(int *)(lVar1 + 0x50)) / 2;
  InitView(this);
  this_00 = (LevelBasedModifierModuleMgr *)
            Sexy::LazySingleton<LevelBasedModifierModuleMgr>::GetInstance();
  LevelBasedModifierModuleMgr::ClearSelectedCollections(this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

