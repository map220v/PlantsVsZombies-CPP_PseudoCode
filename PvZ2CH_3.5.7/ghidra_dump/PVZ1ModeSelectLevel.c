// Class: PVZ1ModeSelectLevel


/* PVZ1ModeSelectLevel::closeDescriptionWidget() */

void __thiscall PVZ1ModeSelectLevel::closeDescriptionWidget(PVZ1ModeSelectLevel *this)

{
  if (*(long *)(this + 0x168) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0x168))
    ;
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x168));
    *(undefined8 *)(this + 0x168) = 0;
  }
  return;
}


/* PVZ1ModeSelectLevel::ScrollTargetReached(Sexy::ScrollWidget*) */

void PVZ1ModeSelectLevel::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to PVZ1ModeSelectLevel::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
PVZ1ModeSelectLevel::ScrollTargetReached(PVZ1ModeSelectLevel *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* PVZ1ModeSelectLevel::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void PVZ1ModeSelectLevel::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to PVZ1ModeSelectLevel::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
PVZ1ModeSelectLevel::ScrollTargetInterrupted(PVZ1ModeSelectLevel *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeSelectLevel::GetLayoutName() */

void __thiscall PVZ1ModeSelectLevel::GetLayoutName(PVZ1ModeSelectLevel *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIPVZ1ModeSelectLevel");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PVZ1ModeSelectLevel::SetEventNode(MapEventItem*) */

void __thiscall PVZ1ModeSelectLevel::SetEventNode(PVZ1ModeSelectLevel *this,MapEventItem *param_1)

{
  *(MapEventItem **)(this + 0x1d0) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeSelectLevel::onSuccessRespond() */

void __thiscall PVZ1ModeSelectLevel::onSuccessRespond(PVZ1ModeSelectLevel *this)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04dde7e4(*(undefined8 *)(this + 0x1e0),*(undefined8 *)(this + 0x1f0));
  if (iVar1 != 0) {
    if (*(FilesystemSaveGameContext **)(this + 0x1d0) == (FilesystemSaveGameContext *)0x0) {
      std::string::string(asStack_10,"pvz1_001_n");
      nop();
    }
    else {
      uVar2 = Sexy::FilesystemSaveGameContext::GetBuffer
                        (*(FilesystemSaveGameContext **)(this + 0x1d0));
      FUN_05475d88(asStack_10,uVar2);
    }
    UISingletonDialog<PVZ1ModeSelectLevel>::CloseDialog();
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x1d8),(SexyURL *)asStack_10);
    lVar3 = Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
    PVZ_T();
    FUN_04dde808(lVar3 + 0x160);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1ModeSelectLevel::onNetworkResponse(int, int) */

void __thiscall
PVZ1ModeSelectLevel::onNetworkResponse(PVZ1ModeSelectLevel *this,int param_1,int param_2)

{
  Sexy::OutputDebugStrF((wchar_t *)"PVZ1ModeSelectLevel::onNetworkResponse context=%d status=%d");
  if ((param_1 == 2) && (param_2 == 2)) {
    onSuccessRespond(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeSelectLevel::showDescriptionWidget() */

void PVZ1ModeSelectLevel::showDescriptionWidget(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  PVZ2UIDialog *this;
  wchar16 *in_x1;
  LineBreakCategory *in_x2;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  wchar16 *local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (___stack_chk_guard,in_x1,in_x2,in_x3,in_x4);
  if (cVar1 == '\0') {
    iVar2 = FUN_04dded90(0x28a);
    iVar3 = FUN_04dded90(300);
  }
  else {
    iVar2 = FUN_04dded90(600);
    iVar3 = FUN_04dded90(0x15e);
  }
  this = (PVZ2UIDialog *)
         LawnApp::ShowPVZ2Dialog(gLawnApp,(float)iVar2,(float)iVar3,(PVZ2UIDialog *)0x0);
  FUN_05478178(awStack_50,L"[PVZ1_MODE_START_LEVEL_TIPS_TITLE]",auStack_58);
  PVZ2UIDialog::SetHeaderLabel(this,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05478178(awStack_50,L"[PVZ1_MODE_START_LEVEL_TIPS_DESC]",auStack_58);
  PVZ2UIDialog::SetFooterLabel(this,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  PVZ2UIDialog::SetFooterAlign(this,3);
  iVar2 = FUN_04dded90(2);
  PVZ2UIDialog::SetFooterBottomPadding(this,iVar2);
  PVZ2UIDialog::SetBackgroundDarken(this,true,0.5);
  FUN_05478178(auStack_58,L"[OVERVIEW_CONFIRM]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(this,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1ModeSelectLevel::ButtonDepress(int) */

void __thiscall PVZ1ModeSelectLevel::ButtonDepress(PVZ1ModeSelectLevel *this,int param_1)

{
  if (param_1 == 1000) {
    UISingletonDialog<PVZ1ModeSelectLevel>::CloseDialog();
    return;
  }
  if (param_1 == 0x3e9) {
    showDescriptionWidget();
    return;
  }
  return;
}


/* non-virtual thunk to PVZ1ModeSelectLevel::ButtonDepress(int) */

void __thiscall PVZ1ModeSelectLevel::ButtonDepress(PVZ1ModeSelectLevel *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeSelectLevel::UpdateSelectChallenge(int, bool) */

void __thiscall
PVZ1ModeSelectLevel::UpdateSelectChallenge(PVZ1ModeSelectLevel *this,int param_1,bool param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 local_18 [16];
  long local_8;
  
  uVar3 = 0;
  local_8 = ___stack_chk_guard;
  lVar1 = std::vector<bool,std::allocator<bool>>::size
                    ((vector<bool,std::allocator<bool>> *)(this + 0x140));
  if (lVar1 != 0) {
    do {
      if (param_1 == (int)uVar3) {
        auVar4 = FUN_04ddeaf4(*(undefined8 *)(this + 0x140),uVar3);
        local_18 = auVar4;
        std::_Bit_reference::operator=((_Bit_reference *)local_18,param_2);
      }
      uVar3 = uVar3 + 1;
      uVar2 = std::vector<bool,std::allocator<bool>>::size
                        ((vector<bool,std::allocator<bool>> *)(this + 0x140));
    } while (uVar3 < uVar2);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PVZ1ModeSelectLevel::PVZ1ModeSelectLevel() */

void __thiscall PVZ1ModeSelectLevel::PVZ1ModeSelectLevel(PVZ1ModeSelectLevel *this)

{
  undefined *puVar1;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UISingletonDialog<PVZ1ModeSelectLevel>::UISingletonDialog
            ((UISingletonDialog<PVZ1ModeSelectLevel> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_069c8e00;
  *(undefined **)(this + 0xd8) = &DAT_069c9160;
  *(undefined ***)(this + 0x138) = &PTR__PVZ1ModeSelectLevel_069c91a8;
  std::vector<bool,std::allocator<bool>>::vector
            ((vector<bool,std::allocator<bool>> *)(this + 0x140));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x178));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 400));
  Sexy::Insets::Insets((Insets *)(this + 0x1b0));
  Sexy::Insets::Insets((Insets *)(this + 0x1c0));
  Sexy::Delegate1<std::string_const&>::Delegate1((DummyInit *)(this + 0x1d8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x208));
  std::vector<bool,std::allocator<bool>>::clear((vector<bool,std::allocator<bool>> *)(this + 0x140))
  ;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x1d0) = 0;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x208));
  std::vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>>::clear
            ((vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>> *)(this + 0x178)
            );
  std::vector<PVZ1ModeSelectLevelBonusWidget*,std::allocator<PVZ1ModeSelectLevelBonusWidget*>>::
  clear((vector<PVZ1ModeSelectLevelBonusWidget*,std::allocator<PVZ1ModeSelectLevelBonusWidget*>> *)
        (this + 400));
  *(undefined8 *)(this + 0x1a8) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,UpdateSelectChallenge);
  local_60 = local_38;
  local_70 = local_48;
  uStack_68 = uStack_40;
  MessageRouter::
  Subscribe<int,bool,Sexy::CBMemberTranslatorX<PVZ1ModeSelectLevel,void(PVZ1ModeSelectLevel::*)(int,bool)>>
            ((MessageRouter *)puVar1,Message::UpdateSelectChallenge,&local_70);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNetworkResponse);
  local_90 = local_30;
  uStack_88 = uStack_28;
  local_80 = local_20;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<PVZ1ModeSelectLevel,void(PVZ1ModeSelectLevel::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::PVZ1ModeNetworkResponseReceived,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,UpdateLevelBonus);
  local_80 = local_8;
  local_90 = local_18;
  uStack_88 = uStack_10;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<PVZ1ModeSelectLevel,void(PVZ1ModeSelectLevel::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::UpdatePVZ1ModeSelectLevelBonus,&local_90);
  return;
}


/* PVZ1ModeSelectLevel::~PVZ1ModeSelectLevel() */

void __thiscall PVZ1ModeSelectLevel::~PVZ1ModeSelectLevel(PVZ1ModeSelectLevel *this)

{
  *(undefined ***)(this + 0x138) = &PTR__PVZ1ModeSelectLevel_069c91a8;
  *(undefined ***)this = &PTR_GetClass_069c8e00;
  *(undefined **)(this + 0xd8) = &DAT_069c9160;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x208));
  std::vector<PVZ1ModeSelectLevelBonusWidget*,std::allocator<PVZ1ModeSelectLevelBonusWidget*>>::
  ~vector((vector<PVZ1ModeSelectLevelBonusWidget*,std::allocator<PVZ1ModeSelectLevelBonusWidget*>> *
          )(this + 400));
  std::vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>>::~vector
            ((vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>> *)(this + 0x178)
            );
  std::vector<bool,std::allocator<bool>>::~vector
            ((vector<bool,std::allocator<bool>> *)(this + 0x140));
  UISingletonDialog<PVZ1ModeSelectLevel>::~UISingletonDialog
            ((UISingletonDialog<PVZ1ModeSelectLevel> *)this);
  return;
}


/* non-virtual thunk to PVZ1ModeSelectLevel::~PVZ1ModeSelectLevel() */

void __thiscall PVZ1ModeSelectLevel::~PVZ1ModeSelectLevel(PVZ1ModeSelectLevel *this)

{
  ~PVZ1ModeSelectLevel(this + -0x138);
  return;
}


/* PVZ1ModeSelectLevel::~PVZ1ModeSelectLevel() */

void __thiscall PVZ1ModeSelectLevel::~PVZ1ModeSelectLevel(PVZ1ModeSelectLevel *this)

{
  ~PVZ1ModeSelectLevel(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PVZ1ModeSelectLevel::~PVZ1ModeSelectLevel() */

void __thiscall PVZ1ModeSelectLevel::~PVZ1ModeSelectLevel(PVZ1ModeSelectLevel *this)

{
  ~PVZ1ModeSelectLevel(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeSelectLevel::InitThemeButtons() */

void __thiscall PVZ1ModeSelectLevel::InitThemeButtons(PVZ1ModeSelectLevel *this)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  long *plVar10;
  PVZ1ModeSelectLevelThemeButton *this_00;
  undefined4 *puVar11;
  UIWidgetText *this_01;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  int iVar17;
  string asStack_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  undefined8 local_18;
  PVZ1ModeUtils *local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ1ModeUtils::GetCurrentThemeList(___stack_chk_guard);
  Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
  PVZ1ModeNetworkMgr::GetCurrentLevel();
  cVar4 = PVZ1ModeUtils::IsThemeDisabled(asStack_48);
  uVar12 = local_20;
  iVar6 = FUN_04dde830(local_20,local_18);
  uVar2 = iVar6 - 1;
  if (-1 < (int)uVar2) {
    lVar13 = (long)(int)uVar2 + -1;
    lVar3 = lVar13;
    lVar16 = (long)(int)uVar2;
    while( true ) {
      lVar14 = lVar3;
      piVar9 = (int *)FUN_04dde888(uVar12,lVar16);
      cVar5 = PVZ1ModeUtils::IsThemeDisabled(*piVar9,asStack_48);
      uVar12 = local_20;
      if (cVar5 != '\0') {
        local_40 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)&local_20);
        local_38 = __gnu_cxx::
                   __normal_iterator<wchar_t*,std::vector<wchar_t,std::allocator<wchar_t>>>::
                   operator+((__normal_iterator<wchar_t*,std::vector<wchar_t,std::allocator<wchar_t>>>
                              *)&local_40,lVar16);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)local_30,(__normal_iterator *)&local_38);
        std::vector<int,std::allocator<int>>::erase
                  ((vector<int,std::allocator<int>> *)&local_20,local_30[0]);
        uVar12 = local_20;
      }
      local_20 = uVar12;
      if (lVar14 == lVar13 - (ulong)uVar2) break;
      lVar3 = lVar14 + -1;
      lVar16 = lVar14;
    }
    iVar6 = FUN_04dde830(uVar12,local_18);
  }
  std::string::string((string *)local_30,"ThemeButtonContainer");
  plVar10 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)local_30);
  std::string::~string((string *)local_30);
  nop();
  lVar3 = plVar10[10];
  iVar1 = *(int *)((long)plVar10 + 0x54);
  if (cVar4 == '\0') {
    iVar7 = FUN_04dded90(10);
    iVar8 = FUN_04dded90(0x50);
    if (0 < iVar6) {
      lVar16 = 0;
      iVar17 = (((int)lVar3 + (1 - iVar6) * iVar7) - iVar8 * iVar6) / 2;
      do {
        this_00 = ::operator_new(800);
        PVZ1ModeSelectLevelThemeButton::PVZ1ModeSelectLevelThemeButton(this_00,(int)lVar16 + 0x3eb);
        lVar3 = lVar16 + 1;
        puVar11 = (undefined4 *)FUN_04dde888(local_20,lVar16);
        FUN_04dde818(this_00 + 0x308,*puVar11);
        (**(code **)(*(long *)this_00 + 0x198))(this_00,iVar17,(iVar1 - iVar8) / 2,iVar8,iVar8);
        PVZ1ModeSelectLevelThemeButton::InitView(this_00);
        (**(code **)(*plVar10 + 0x60))(plVar10,this_00);
        lVar16 = lVar3;
        iVar17 = iVar17 + iVar7 + iVar8;
      } while ((int)lVar3 < iVar6);
    }
  }
  else {
    TodStringTranslate(L"[PVZ1_MODE_SELECT_LEVEL_THEME_NO_USE_DESC]");
    this_01 = ::operator_new(0x108);
    UIWidgetText::UIWidgetText(this_01,(wstring *)local_30);
    FUN_05476c50((string *)local_30);
    (**(code **)(*(long *)this_01 + 0x198))(this_01,0,0,(int)lVar3,iVar1);
    uVar12 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
    FUN_04dde800(this_01 + 0xe8,uVar12);
    FUN_04ddea28(this_01 + 0xe0);
    pcVar15 = *(code **)(*(long *)this_01 + 0x170);
    Sexy::Insets::Insets((Insets *)local_30,0x5f,0x40,0xb,0xff);
    (*pcVar15)(this_01,0,(string *)local_30);
    (**(code **)(*plVar10 + 0x60))(plVar10,this_01);
  }
  std::string::~string(asStack_48);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeSelectLevel::RemoveBonusWidget(PVZ1ModeSelectLevelBonusWidget*) */

void __thiscall
PVZ1ModeSelectLevel::RemoveBonusWidget
          (PVZ1ModeSelectLevel *this,PVZ1ModeSelectLevelBonusWidget *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_01;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;
  PVZ1ModeSelectLevelBonusWidget *pPVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  int iVar14;
  undefined8 uVar15;
  ulong uVar16;
  long *plVar17;
  PVZ1ModeSelectLevelBonusWidget *local_38 [2];
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  long local_8;
  
  plVar17 = *(long **)(this + 0x1a8);
  local_8 = ___stack_chk_guard;
  local_38[0] = param_1;
  if (plVar17 != (long *)0x0) {
    uVar15 = *(undefined8 *)(this + 400);
    lVar8 = FUN_04dde890(uVar15,*(undefined8 *)(this + 0x198));
    pPVar5 = local_38[0];
    lVar6 = 0;
    do {
      lVar13 = lVar6;
      if (lVar13 == lVar8) goto LAB_04de1060;
      puVar9 = (undefined8 *)FUN_04dde89c(uVar15,lVar13);
      lVar6 = lVar13 + 1;
    } while ((PVZ1ModeSelectLevelBonusWidget *)*puVar9 != pPVar5);
    iVar7 = FUN_04dded90(10);
    iVar4 = *(int *)(*(long *)(this + 0x170) + 0x54) + iVar7 * -2;
    (**(code **)(*plVar17 + 0x68))(plVar17,pPVar5);
    uVar16 = (long)((int)lVar13 + 1);
    iVar14 = iVar7 + (iVar7 + iVar4) * (int)lVar13;
    while( true ) {
      uVar15 = *(undefined8 *)(this + 400);
      uVar10 = FUN_04dde890(uVar15,*(undefined8 *)(this + 0x198));
      if (uVar10 <= uVar16) break;
      puVar9 = (undefined8 *)FUN_04dde89c(uVar15,uVar16);
      (**(code **)(*(long *)*puVar9 + 0x198))((long *)*puVar9,iVar14,iVar7,iVar4,iVar4);
      uVar16 = uVar16 + 1;
      iVar14 = iVar14 + iVar7 + iVar4;
    }
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 400);
    this_01 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x178);
    uVar15 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
    uVar11 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
    local_20 = std::
               remove<__gnu_cxx::__normal_iterator<PVZ1ModeSelectLevelBonusWidget**,std::vector<PVZ1ModeSelectLevelBonusWidget*,std::allocator<PVZ1ModeSelectLevelBonusWidget*>>>,PVZ1ModeSelectLevelBonusWidget*>
                         (uVar15,uVar11,local_38);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_18,(__normal_iterator *)&local_20);
    std::vector<PVZ1ModeSelectLevelBonusWidget*,std::allocator<PVZ1ModeSelectLevelBonusWidget*>>::
    erase((vector<PVZ1ModeSelectLevelBonusWidget*,std::allocator<PVZ1ModeSelectLevelBonusWidget*>> *
          )this_00,CONCAT44(uStack_14,local_18));
    puVar9 = (undefined8 *)FUN_04dde850(*(undefined8 *)(this + 0x178),lVar13);
    uVar1 = *(undefined4 *)puVar9;
    uVar2 = *(undefined4 *)((long)puVar9 + 4);
    uVar15 = *puVar9;
    uVar3 = *(undefined1 *)(puVar9 + 1);
    uVar11 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_01);
    uVar12 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_01);
    local_10 = CONCAT31(local_10._1_3_,uVar3);
    local_18 = uVar1;
    uStack_14 = uVar2;
    local_28 = FUN_04de0720(uVar11,uVar12,uVar15,local_10);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_20,(__normal_iterator *)&local_28);
    std::vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>>::erase
              ((vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>> *)this_01,
               local_20);
  }
LAB_04de1060:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeSelectLevel::InitChallengeWidgets() */

void __thiscall PVZ1ModeSelectLevel::InitChallengeWidgets(PVZ1ModeSelectLevel *this)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  long *plVar9;
  LevelUtils *this_00;
  long lVar10;
  vector *pvVar11;
  PVZ1ModeSelectLevelChallengeWidget *pPVar12;
  int *piVar13;
  bool extraout_w1;
  int iVar14;
  int extraout_w1_00;
  ulong uVar15;
  int iVar16;
  undefined1 auVar17 [12];
  string asStack_68 [8];
  wstring awStack_60 [8];
  wstring awStack_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38 [3];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<bool,std::allocator<bool>>::clear((vector<bool,std::allocator<bool>> *)(this + 0x140))
  ;
  std::string::string((string *)&local_20,"ChallengeBG");
  plVar9 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  iVar6 = FUN_04dded90(10);
  lVar2 = plVar9[10];
  iVar16 = *(int *)((long)plVar9 + 0x54);
  bVar4 = PVZ1ModeUtils::IsHardMode();
  PVZ1ModeUtils::GetCurrentLevel((PVZ1ModeUtils *)(ulong)bVar4);
  FUN_05475d88((string *)&local_20,asStack_68);
  iVar7 = PVZ1ModeUtils::GetWorldIndexOfLevel((string *)&local_20);
  std::string::~string((string *)&local_20);
  if (bVar4 == 0) {
    PVZ1ModeUtils::GetChallengeStatus(iVar7);
    std::vector<int,std::allocator<int>>::operator=
              ((vector<int,std::allocator<int>> *)(this + 0x208),(vector *)&local_20);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_20);
  }
  this_00 = (LevelUtils *)Sexy::LazySingleton<LevelUtils>::GetInstance();
  lVar10 = LevelUtils::GetLevelInfo(this_00,asStack_68);
  if (lVar10 == 0) {
    PVZ1ModeUtils::GetCurrentLevelChallengeBonus((PVZ1ModeUtils *)(ulong)(uint)bVar4,false);
  }
  else {
    std::
    vector<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>,std::allocator<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>>>
    ::vector((vector<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>,std::allocator<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>>>
              *)local_38,(vector *)(lVar10 + 0x1f8));
    pvVar11 = (vector *)FUN_04ddea14(local_38[0]);
    std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>::vector
              ((vector<ChallengeInfo,std::allocator<ChallengeInfo>> *)&local_20,pvVar11);
    iVar7 = FUN_04dde85c(local_20,local_18);
    std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>::~vector
              ((vector<ChallengeInfo,std::allocator<ChallengeInfo>> *)&local_20);
    std::
    vector<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>,std::allocator<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>>>
    ::~vector((vector<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>,std::allocator<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>>>
               *)local_38);
    PVZ1ModeUtils::GetCurrentLevelChallengeBonus((PVZ1ModeUtils *)(ulong)bVar4,extraout_w1);
    if (0 < iVar7) {
      iVar1 = iVar16 + 3;
      if (-1 < iVar16) {
        iVar1 = iVar16;
      }
      iVar16 = 0;
      uVar15 = 0;
      do {
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_38);
        uVar3 = local_50;
        auVar17 = FUN_04dde868(local_50,local_48);
        iVar14 = auVar17._8_4_;
        if (uVar15 < auVar17._0_8_) {
          pvVar11 = (vector *)FUN_04dde87c(uVar3,uVar15);
          std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
                    ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)local_38,pvVar11);
          iVar14 = extraout_w1_00;
        }
        PVZ1ModeUtils::GetCurrentLevelChallengeDesc((PVZ1ModeUtils *)(uVar15 & 0xffffffff),iVar14);
        std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
                  ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)&local_20,
                   (vector *)local_38);
        pPVar12 = ::operator_new(0x338);
        PVZ1ModeSelectLevelChallengeWidget::PVZ1ModeSelectLevelChallengeWidget
                  (pPVar12,(PVZ1ModeUtils *)(uVar15 & 0xffffffff),(string *)&local_20);
        std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
                  ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)&local_20);
        (**(code **)(*(long *)pPVar12 + 0x198))
                  (pPVar12,iVar6,iVar16,(int)lVar2 + iVar6 * -2,iVar1 >> 2);
        uVar8 = PVZ1ModeUtils::IsHardMode();
        FUN_04dde820(pPVar12 + 0x30c,uVar8);
        if (bVar4 == 0) {
          piVar13 = (int *)FUN_04dde888(*(undefined8 *)(this + 0x208),uVar15);
          FUN_04dde828(pPVar12 + 0x330,*piVar13 == 1);
          piVar13 = (int *)FUN_04dde888(*(undefined8 *)(this + 0x208),uVar15);
          if (*piVar13 == 1) {
            TodStringTranslate(L"[PVZ1MODE_SELECT_LEVEL_CHALLENGE_COMPLETE_DESC]");
            TodReplaceString(awStack_58,L"{NAME}",awStack_60);
            FUN_054766c8(awStack_60,(string *)&local_20);
            FUN_05476c50((string *)&local_20);
            FUN_05476c50(awStack_58);
          }
        }
        uVar15 = uVar15 + 1;
        iVar16 = iVar16 + (iVar1 >> 2);
        FUN_05477b24((string *)&local_20,awStack_60);
        PVZ1ModeSelectLevelChallengeWidget::SetDescStr(pPVar12,(string *)&local_20);
        FUN_05476c50((string *)&local_20);
        (**(code **)(*plVar9 + 0x60))(plVar9,pPVar12);
        bVar5 = (bool)PVZ1ModeUtils::IsHardMode();
        std::vector<bool,std::allocator<bool>>::push_back
                  ((vector<bool,std::allocator<bool>> *)(this + 0x140),bVar5);
        FUN_05476c50(awStack_60);
        std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
                  ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)local_38);
      } while ((int)uVar15 < iVar7);
    }
  }
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::~vector((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
             *)&local_50);
  std::string::~string(asStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeSelectLevel::PressStartButton() */

void PVZ1ModeSelectLevel::PressStartButton(void)

{
  bool bVar1;
  uint uVar2;
  PVZ1ModeNetworkMgr *pPVar3;
  vector<bool,std::allocator<bool>> *this;
  ulong uVar4;
  long lVar5;
  PVZ1ModeUtils *this_00;
  ulong uVar6;
  undefined1 auVar7 [16];
  string asStack_40 [8];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar3 = (PVZ1ModeNetworkMgr *)Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
  this = (vector<bool,std::allocator<bool>> *)PVZ1ModeNetworkMgr::GetChooseChallengeList(pPVar3);
  std::vector<bool,std::allocator<bool>>::clear(this);
  local_28 = std::vector<bool,std::allocator<bool>>::begin();
  local_18 = std::vector<bool,std::allocator<bool>>::end();
  std::vector<bool,std::allocator<bool>>::assign<std::_Bit_iterator,void>
            (this,local_28._0_8_,local_28._8_8_,local_18._0_8_,local_18._8_8_);
  for (uVar6 = 0; uVar4 = std::vector<bool,std::allocator<bool>>::size(this), uVar6 < uVar4;
      uVar6 = uVar6 + 1) {
    auVar7 = FUN_04ddeaf4(*(undefined8 *)this,uVar6);
    local_38 = auVar7;
    bVar1 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_38);
    Sexy::OutputDebugStrF((wchar_t *)"chooselist %d : %d",uVar6 & 0xffffffff,(ulong)bVar1);
  }
  lVar5 = Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
  FUN_04ddea20(lVar5 + 0x168);
  lVar5 = Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
  FUN_04ddea18(lVar5 + 0x169);
  bVar1 = (bool)PVZ1ModeUtils::IsHardMode();
  this_00 = (PVZ1ModeUtils *)PVZ1ModeUtils::GetCurrentLevelFuel(bVar1);
  PVZ1ModeUtils::GetCurrentLevel(this_00);
  FUN_05475d88((_Bit_reference *)local_38,asStack_40);
  uVar2 = PVZ1ModeUtils::GetWorldIndexOfLevel((_Bit_reference *)local_38);
  std::string::~string((string *)local_38);
  pPVar3 = (PVZ1ModeNetworkMgr *)Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
  PVZ1ModeNetworkMgr::SetCurrentLevelIndex(pPVar3,uVar2);
  PVZ1ModeUtils::SendPost_Play((ulong)bVar1 | (ulong)uVar2 << 0x20);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeSelectLevel::InitBonusWidgets() */

void __thiscall PVZ1ModeSelectLevel::InitBonusWidgets(PVZ1ModeSelectLevel *this)

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
  PVZ1ModeUtils *this_00;
  undefined8 uVar10;
  undefined8 uVar11;
  UIScrollControl *pUVar12;
  long lVar13;
  Widget *this_01;
  uint *puVar14;
  PVZ1ModeSelectLevelBonusWidget *this_02;
  ulong uVar15;
  bool extraout_w1;
  bool extraout_w1_00;
  ScrollWidget *pSVar16;
  ulong uVar17;
  int iVar18;
  undefined8 local_68;
  PVZ1ModeSelectLevelBonusWidget *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PVZ1ModeUtils *)PVZ1ModeUtils::IsHardMode();
  PVZ1ModeUtils::GetCurrentLevelBonus(this_00,extraout_w1);
  PVZ1ModeUtils::GetCurrentLevelFirstRewardBonus
            ((PVZ1ModeUtils *)((ulong)this_00 & 0xffffffff),extraout_w1_00);
  cVar4 = PVZ1ModeUtils::IsCurrentLevelFirstReward();
  iVar5 = FUN_04dde83c(local_50,local_48);
  iVar6 = FUN_04dde83c(local_38,local_30);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  if (cVar4 == '\0') {
    std::vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>>::reserve
              ((vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>> *)&local_20,
               (long)iVar5);
  }
  else {
    std::vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>>::reserve
              ((vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>> *)&local_20,
               (long)(iVar5 + iVar6));
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
    std::vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>>::
    insert<__gnu_cxx::__normal_iterator<PVZ1ModeLevelBonusData*,std::vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>>>,void>
              ((vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>> *)&local_20,
               local_60,uVar10,uVar11);
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
  std::vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>>::
  insert<__gnu_cxx::__normal_iterator<PVZ1ModeLevelBonusData*,std::vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>>>,void>
            ((vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>> *)&local_20,
             local_60,uVar10,uVar11);
  std::string::string((string *)&local_60,"UIScroll_0");
  pUVar12 = UI::Dialog::GetWidget<UIScrollControl>((Dialog *)this,(string *)&local_60);
  *(UIScrollControl **)(this + 0x170) = pUVar12;
  std::string::~string((string *)&local_60);
  nop();
  lVar13 = AccessoryContent::GetDisplayImage(*(AccessoryContent **)(this + 0x170));
  pSVar16 = *(ScrollWidget **)(this + 0x170);
  *(undefined4 *)(lVar13 + 0x50) = *(undefined4 *)(pSVar16 + 0x50);
  Sexy::ScrollWidget::SetScrollMode(pSVar16,1);
  iVar7 = FUN_04dded90(10);
  iVar8 = FUN_04dded90(0x28);
  lVar13 = *(long *)(this + 0x170);
  iVar5 = (*(int *)(lVar13 + 0x54) - iVar8) / 2;
  Sexy::Insets::Insets
            ((Insets *)&local_60,*(int *)(lVar13 + 0x48) - iVar7,iVar5 + *(int *)(lVar13 + 0x4c),
             iVar7,iVar8);
  lVar13 = *(long *)(this + 0x170);
  iVar6 = *(int *)(lVar13 + 0x48);
  iVar18 = *(int *)(lVar13 + 0x50);
  iVar9 = *(int *)(lVar13 + 0x4c);
  *(PVZ1ModeSelectLevelBonusWidget **)(this + 0x1b0) = local_60;
  *(undefined8 *)(this + 0x1b8) = uStack_58;
  Sexy::Insets::Insets((Insets *)&local_60,iVar6 + iVar18,iVar5 + iVar9,iVar7,iVar8);
  *(PVZ1ModeSelectLevelBonusWidget **)(this + 0x1c0) = local_60;
  *(undefined8 *)(this + 0x1c8) = uStack_58;
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  iVar9 = FUN_04dded90(10);
  iVar6 = *(int *)(*(long *)(this + 0x170) + 0x54);
  std::vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>>::clear
            ((vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>> *)(this + 0x178)
            );
  iVar6 = iVar6 + iVar9 * -2;
  iVar5 = iVar9 + iVar6;
  std::vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>>::operator=
            ((vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>> *)(this + 0x178)
             ,(vector *)&local_20);
  std::vector<PVZ1ModeSelectLevelBonusWidget*,std::allocator<PVZ1ModeSelectLevelBonusWidget*>>::
  clear((vector<PVZ1ModeSelectLevelBonusWidget*,std::allocator<PVZ1ModeSelectLevelBonusWidget*>> *)
        (this + 400));
  uVar17 = 0;
  iVar18 = iVar9;
  while( true ) {
    uVar10 = local_20;
    uVar15 = FUN_04dde83c(local_20,local_18);
    if (uVar15 <= uVar17) break;
    puVar14 = (uint *)FUN_04dde850(uVar10,uVar17);
    uVar1 = *puVar14;
    uVar2 = puVar14[1];
    uVar3 = puVar14[2];
    Sexy::OutputDebugStrF
              ((wchar_t *)"finalBonusDataList : %d, id = %d ",uVar17 & 0xffffffff,(ulong)uVar1);
    this_02 = ::operator_new(0x108);
    PVZ1ModeSelectLevelBonusWidget::PVZ1ModeSelectLevelBonusWidget
              (this_02,uVar1,uVar2,SUB41(uVar3,0));
    local_60 = this_02;
    (**(code **)(*(long *)this_02 + 0x198))(this_02,iVar18,iVar9,iVar6,iVar6);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,local_60);
    std::vector<PVZ1ModeSelectLevelBonusWidget*,std::allocator<PVZ1ModeSelectLevelBonusWidget*>>::
    push_back((vector<PVZ1ModeSelectLevelBonusWidget*,std::allocator<PVZ1ModeSelectLevelBonusWidget*>>
               *)(this + 400),&local_60);
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
  *(Widget **)(this + 0x1a8) = this_01;
  (**(code **)(**(long **)(this + 0x170) + 0x60))(*(long **)(this + 0x170),this_01);
  std::vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>>::~vector
            ((vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>> *)&local_20);
  std::vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>>::~vector
            ((vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>> *)&local_38);
  std::vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>>::~vector
            ((vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>> *)&local_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeSelectLevel::InitView() */

void __thiscall PVZ1ModeSelectLevel::InitView(PVZ1ModeSelectLevel *this)

{
  bool bVar1;
  int iVar2;
  UIWidgetText *pUVar3;
  long lVar4;
  PVZ2UIImageButton *this_00;
  long *plVar5;
  char *__s;
  undefined1 auStack_b8 [8];
  string asStack_b0 [8];
  Delegate0 aDStack_a8 [48];
  wstring awStack_78 [56];
  string asStack_40 [56];
  PVZ1ModeUtils *local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ1ModeUtils::GetCurrentLevel(___stack_chk_guard);
  FUN_05475d88(asStack_40,asStack_b0);
  iVar2 = PVZ1ModeUtils::GetWorldIndexOfLevel(asStack_40);
  std::string::~string(asStack_40);
  std::string::string(asStack_40,"Title");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_40);
  std::string::~string(asStack_40);
  nop();
  FUN_05478178(awStack_78,L"[PVZ1_MODE_START_LEVEL]",auStack_b8);
  TodReplaceNumberString(awStack_78,L"{NUM}",iVar2 + 1);
  PuzzleTip::SetTip(pUVar3,asStack_40);
  FUN_05476c50(asStack_40);
  FUN_05476c50(awStack_78);
  nop();
  iVar2 = PVZ1ModeUtils::GetCurrentWeekIndex();
  bVar1 = (bool)PVZ1ModeUtils::IsHardMode();
  std::string::string(asStack_40,"ModeName");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_40);
  std::string::~string(asStack_40);
  nop();
  PVZ1ModeUtils::GetMainModeText(iVar2,bVar1);
  PuzzleTip::SetTip(pUVar3,asStack_40);
  FUN_05476c50(asStack_40);
  std::string::string(asStack_40,"ModeDesc");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_40);
  std::string::~string(asStack_40);
  nop();
  PVZ1ModeUtils::GetMainModeDesc(iVar2,bVar1);
  PuzzleTip::SetTip(pUVar3,asStack_40);
  FUN_05476c50(asStack_40);
  lVar4 = FUN_05474374(asStack_b0,&DAT_056432c8,0);
  if (lVar4 != -1) {
    std::string::string((string *)awStack_78,"[PVZ1_BOSS_LEVEL_MODE_DESC]");
    StringHelper::ToStringValue((string *)awStack_78);
    PuzzleTip::SetTip(pUVar3,asStack_40);
    FUN_05476c50(asStack_40);
    std::string::~string((string *)awStack_78);
    nop();
  }
  std::string::string(asStack_40,"MainTheme");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_40);
  std::string::~string(asStack_40);
  nop();
  if (bVar1 == false) {
    __s = "[MAIN_THEME]";
  }
  else {
    __s = "[MAIN_THEME_HARD]";
  }
  std::string::string((string *)awStack_78,__s);
  StringHelper::ToStringValue((string *)awStack_78);
  PuzzleTip::SetTip(pUVar3,asStack_40);
  FUN_05476c50(asStack_40);
  std::string::~string((string *)awStack_78);
  nop();
  std::string::string(asStack_40,"ThemeName");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_40);
  std::string::~string(asStack_40);
  nop();
  (**(code **)(*(long *)pUVar3 + 0x158))(pUVar3,0);
  std::string::string(asStack_40,"ThemeDesc");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_40);
  std::string::~string(asStack_40);
  nop();
  (**(code **)(*(long *)pUVar3 + 0x158))(pUVar3,0);
  this_00 = ::operator_new(0x368);
  PVZ2UIImageButton::PVZ2UIImageButton(this_00,0x3ea);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b9ba68,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b9ba38,3);
  PVZ2UIButton::SetDialogStates
            ((PVZ2UIButton *)this_00,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40);
  std::string::string(asStack_40,"StartButton");
  lVar4 = UI::Dialog::GetWidget((Dialog *)this,asStack_40);
  std::string::~string(asStack_40);
  nop();
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,*(undefined4 *)(lVar4 + 0x48),*(undefined4 *)(lVar4 + 0x4c),
             *(undefined4 *)(lVar4 + 0x50),*(undefined4 *)(lVar4 + 0x54));
  std::string::string((string *)awStack_78,"[MAINMENU_PLAY]");
  StringHelper::ToStringValue((string *)awStack_78);
  PVZ2UIImageButton::SetTitle(this_00,asStack_40);
  FUN_05476c50(asStack_40);
  std::string::~string((string *)awStack_78);
  nop();
  PVZ2UIImageButton::UpdateParams(this_00);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,PressStartButton);
  Sexy::Delegate0::Delegate0<PVZ1ModeSelectLevel,void(PVZ1ModeSelectLevel::*)()>
            (aDStack_a8,asStack_40);
  CornucopiaShopButton::SetClickCallback((CornucopiaShopButton *)this_00,aDStack_a8);
  std::string::string(asStack_40,"Background_0");
  plVar5 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_40);
  std::string::~string(asStack_40);
  nop();
  (**(code **)(*plVar5 + 0x60))(plVar5,this_00);
  std::string::string(asStack_40,"UIText_0");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_40);
  std::string::~string(asStack_40);
  nop();
  (**(code **)(*(long *)pUVar3 + 0x158))(pUVar3,bVar1 ^ 1);
  InitBonusWidgets(this);
  InitChallengeWidgets(this);
  InitThemeButtons(this);
  std::string::~string(asStack_b0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeSelectLevel::OnCreate() */

void __thiscall PVZ1ModeSelectLevel::OnCreate(PVZ1ModeSelectLevel *this)

{
  long lVar1;
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
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeSelectLevel::UpdateLevelBonus(int, int) */

void __thiscall
PVZ1ModeSelectLevel::UpdateLevelBonus(PVZ1ModeSelectLevel *this,int param_1,int param_2)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  PVZ1ModeSelectLevelBonusWidget *this_00;
  undefined8 uVar9;
  PVZ1ModeSelectLevelBonusWidget *local_20;
  int local_18;
  int local_14;
  bool local_10;
  long local_8;
  
  uVar9 = *(undefined8 *)(this + 0x178);
  local_8 = ___stack_chk_guard;
  lVar6 = FUN_04dde83c(uVar9,*(undefined8 *)(this + 0x180));
  bVar3 = false;
  lVar8 = 0;
  while (lVar8 != lVar6) {
    lVar1 = lVar8 + 1;
    piVar7 = (int *)FUN_04dde850(uVar9,lVar8);
    lVar8 = lVar1;
    if (*piVar7 == param_1) {
      bVar3 = true;
    }
  }
  if (!bVar3) {
    iVar4 = FUN_04dded90(10);
    iVar2 = *(int *)(*(long *)(this + 0x170) + 0x54);
    PVZ1ModeLevelBonusData::PVZ1ModeLevelBonusData((PVZ1ModeLevelBonusData *)&local_18);
    local_10 = false;
    iVar2 = iVar2 + iVar4 * -2;
    local_18 = param_1;
    local_14 = param_2;
    std::vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>>::push_back
              ((vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>> *)
               (this + 0x178),(PVZ1ModeLevelBonusData *)&local_18);
    lVar8 = FUN_04dde83c(*(undefined8 *)(this + 0x178),*(undefined8 *)(this + 0x180));
    Sexy::OutputDebugStrF
              ((wchar_t *)"_finalBonusDataList : %d, id = %d ",lVar8 + -1,(ulong)(uint)param_1);
    this_00 = ::operator_new(0x108);
    PVZ1ModeSelectLevelBonusWidget::PVZ1ModeSelectLevelBonusWidget
              (this_00,local_18,local_14,local_10);
    local_20 = this_00;
    iVar5 = FUN_04dde83c(*(undefined8 *)(this + 0x178),*(undefined8 *)(this + 0x180));
    (**(code **)(*(long *)this_00 + 0x198))
              (this_00,iVar4 + (iVar4 + iVar2) * (iVar5 + -1),iVar4,iVar2,iVar2);
    std::vector<PVZ1ModeSelectLevelBonusWidget*,std::allocator<PVZ1ModeSelectLevelBonusWidget*>>::
    push_back((vector<PVZ1ModeSelectLevelBonusWidget*,std::allocator<PVZ1ModeSelectLevelBonusWidget*>>
               *)(this + 400),&local_20);
    (**(code **)(**(long **)(this + 0x1a8) + 0x60))(*(long **)(this + 0x1a8),local_20);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

