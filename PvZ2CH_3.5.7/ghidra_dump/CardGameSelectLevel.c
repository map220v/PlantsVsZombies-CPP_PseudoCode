// Class: CardGameSelectLevel


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameSelectLevel::GetLayoutName() */

void __thiscall CardGameSelectLevel::GetLayoutName(CardGameSelectLevel *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UICardGameSelectLevelNew");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* CardGameSelectLevel::ButtonDepress(int) */

void __thiscall CardGameSelectLevel::ButtonDepress(CardGameSelectLevel *this,int param_1)

{
  if (param_1 != 1000) {
    return;
  }
  UISingletonDialog<CardGameSelectLevel>::CloseDialog();
  return;
}


/* non-virtual thunk to CardGameSelectLevel::ButtonDepress(int) */

void __thiscall CardGameSelectLevel::ButtonDepress(CardGameSelectLevel *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameSelectLevel::PressStartButton() */

void __thiscall CardGameSelectLevel::PressStartButton(CardGameSelectLevel *this)

{
  int iVar1;
  undefined8 uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04e2699c(*(undefined8 *)(this + 0x1b0),*(undefined8 *)(this + 0x1c0));
  if (iVar1 != 0) {
    if (*(FilesystemSaveGameContext **)(this + 0x1a0) == (FilesystemSaveGameContext *)0x0) {
      std::string::string(asStack_10,"cardgame_001_n");
      nop();
    }
    else {
      uVar2 = Sexy::FilesystemSaveGameContext::GetBuffer
                        (*(FilesystemSaveGameContext **)(this + 0x1a0));
      FUN_05475d88(asStack_10,uVar2);
    }
    UISingletonDialog<CardGameSelectLevel>::CloseDialog();
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x1a8),(SexyURL *)asStack_10);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameSelectLevel::showDescriptionWidget() */

void CardGameSelectLevel::showDescriptionWidget(void)

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
    iVar2 = FUN_04e26b78(0x28a);
    iVar3 = FUN_04e26b78(0x1ae);
  }
  else {
    iVar2 = FUN_04e26b78(600);
    iVar3 = FUN_04e26b78(0x1e0);
  }
  this = (PVZ2UIDialog *)
         LawnApp::ShowPVZ2Dialog(gLawnApp,(float)iVar2,(float)iVar3,(PVZ2UIDialog *)0x0);
  FUN_05478178(awStack_50,L"[PVZ2_UNCHARTED_MODE_TIPS_TITLE]",auStack_58);
  PVZ2UIDialog::SetHeaderLabel(this,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05478178(awStack_50,L"[PVZ2_UNCHARTED_MODE_TIPS_DESC]",auStack_58);
  PVZ2UIDialog::SetFooterLabel(this,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  PVZ2UIDialog::SetFooterAlign(this,3);
  iVar2 = FUN_04e26b78(2);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameSelectLevel::InitStartButton() */

void __thiscall CardGameSelectLevel::InitStartButton(CardGameSelectLevel *this)

{
  long lVar1;
  PVZ2UIImageButton *this_00;
  long *plVar2;
  Delegate0 aDStack_a8 [48];
  string asStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"StartButton");
  lVar1 = UI::Dialog::GetWidget((Dialog *)this,asStack_40);
  std::string::~string(asStack_40);
  nop();
  this_00 = ::operator_new(0x368);
  PVZ2UIImageButton::PVZ2UIImageButton(this_00,0x3ea);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06b9e820,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b9e7f0,3);
  PVZ2UIButton::SetDialogStates
            ((PVZ2UIButton *)this_00,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)asStack_40);
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,*(undefined4 *)(lVar1 + 0x48),*(undefined4 *)(lVar1 + 0x4c),
             *(undefined4 *)(lVar1 + 0x50),*(undefined4 *)(lVar1 + 0x54));
  std::string::string(asStack_78,"[MAINMENU_PLAY]");
  StringHelper::ToStringValue(asStack_78);
  PVZ2UIImageButton::SetTitle(this_00,asStack_40);
  FUN_05476c50(asStack_40);
  std::string::~string(asStack_78);
  nop();
  PVZ2UIImageButton::UpdateParams(this_00);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,PressStartButton);
  Sexy::Delegate0::Delegate0<CardGameSelectLevel,void(CardGameSelectLevel::*)()>
            (aDStack_a8,asStack_40);
  CornucopiaShopButton::SetClickCallback((CornucopiaShopButton *)this_00,aDStack_a8);
  std::string::string(asStack_40,"Background_0");
  plVar2 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_40);
  std::string::~string(asStack_40);
  nop();
  (**(code **)(*plVar2 + 0x60))(plVar2,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameSelectLevel::CardGameSelectLevel() */

void __thiscall CardGameSelectLevel::CardGameSelectLevel(CardGameSelectLevel *this)

{
  UISingletonDialog<CardGameSelectLevel>::UISingletonDialog
            ((UISingletonDialog<CardGameSelectLevel> *)this);
  *(undefined ***)this = &PTR_GetClass_069d9970;
  *(undefined **)(this + 0xd8) = &DAT_069d9cc0;
  std::vector<bool,std::allocator<bool>>::vector
            ((vector<bool,std::allocator<bool>> *)(this + 0x138));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x168));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x180));
  Sexy::Delegate1<std::string_const&>::Delegate1((DummyInit *)(this + 0x1a8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1d8));
  std::vector<bool,std::allocator<bool>>::clear((vector<bool,std::allocator<bool>> *)(this + 0x138))
  ;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  std::vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>>::clear
            ((vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>> *)(this + 0x168)
            );
  std::vector<PVZ2UnchartedModeBonusWidget*,std::allocator<PVZ2UnchartedModeBonusWidget*>>::clear
            ((vector<PVZ2UnchartedModeBonusWidget*,std::allocator<PVZ2UnchartedModeBonusWidget*>> *)
             (this + 0x180));
  *(undefined8 *)(this + 0x198) = 0;
  return;
}


/* CardGameSelectLevel::~CardGameSelectLevel() */

void __thiscall CardGameSelectLevel::~CardGameSelectLevel(CardGameSelectLevel *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069d9cc0;
  *(undefined ***)this = &PTR_GetClass_069d9970;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x1d8));
  std::vector<PVZ2UnchartedModeBonusWidget*,std::allocator<PVZ2UnchartedModeBonusWidget*>>::~vector
            ((vector<PVZ2UnchartedModeBonusWidget*,std::allocator<PVZ2UnchartedModeBonusWidget*>> *)
             (this + 0x180));
  std::vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>>::~vector
            ((vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>> *)(this + 0x168)
            );
  std::vector<bool,std::allocator<bool>>::~vector
            ((vector<bool,std::allocator<bool>> *)(this + 0x138));
  UISingletonDialog<CardGameSelectLevel>::~UISingletonDialog
            ((UISingletonDialog<CardGameSelectLevel> *)this);
  return;
}


/* CardGameSelectLevel::~CardGameSelectLevel() */

void __thiscall CardGameSelectLevel::~CardGameSelectLevel(CardGameSelectLevel *this)

{
  ~CardGameSelectLevel(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameSelectLevel::InitModes() */

void __thiscall CardGameSelectLevel::InitModes(CardGameSelectLevel *this)

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
  RtObject *this_02;
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
  CardGameUtils *local_8;
  
  local_8 = ___stack_chk_guard;
  CardGameUtils::GetCurrentLevel(___stack_chk_guard);
  this_01 = (LevelUtils *)Sexy::LazySingleton<LevelUtils>::GetInstance();
  lVar7 = LevelUtils::GetLevelInfo(this_01,asStack_50);
  this_00 = (RtWeakPtr *)(lVar7 + 0x80);
  if ((lVar7 != -0x10) && (bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00), bVar1)) {
    this_02 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    bVar1 = Sexy::RtObject::IsA<CardGameOutroProperties>(this_02);
    if (bVar1) {
      Sexy::OutputDebugStrF((wchar_t *)"definition->VictoryModule->IsA<CardGameOutroProperties>()");
    }
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_48,(RtWeakPtrBase *)this_00);
  std::string::string((string *)&local_20,"ModeContainer");
  plVar8 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  uVar3 = FUN_04e269b8((int)plVar8[10]);
  iVar4 = FUN_04e269bc(*(undefined4 *)((long)plVar8 + 0x54));
  Sexy::OutputDebugStrF((wchar_t *)"InitModes start");
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_48);
  if (cVar2 != '\0') {
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
    uVar9 = FUN_04e269fc(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x48));
    Sexy::OutputDebugStrF((wchar_t *)"InitModes end Props mode size = %d",uVar9);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
    std::vector<std::string,std::allocator<std::string>>::vector
              ((vector<std::string,std::allocator<std::string>> *)&local_20,(vector *)(lVar7 + 0x40)
              );
    uVar9 = local_20;
    iVar5 = FUN_04e269fc(local_20,local_18);
    if (0 < iVar5) {
      uVar12 = 0;
      iVar4 = iVar4 / 4;
      iVar13 = 0;
      while( true ) {
        uVar6 = FUN_04e26b78(0);
        auVar14 = FUN_04e26a08(uVar9,uVar12);
        Sexy::Upper(auVar14._0_8_,auVar14._8_8_);
        uVar9 = FUN_0547429c(asStack_30);
        Sexy::StrFormat("[CARD_GAME_MODE_TITLE_%s]",asStack_40,uVar9);
        std::string::~string(asStack_30);
        auVar14 = FUN_04e26a08(local_20,uVar12);
        Sexy::Upper(auVar14._0_8_,auVar14._8_8_);
        uVar9 = FUN_0547429c(asStack_30);
        Sexy::StrFormat("[CARD_GAME_MODE_DESC_%s]",asStack_38,uVar9);
        std::string::~string(asStack_30);
        StringHelper::ToStringValue(asStack_40);
        pUVar10 = ::operator_new(0x108);
        UIWidgetText::UIWidgetText(pUVar10,(wstring *)asStack_30);
        FUN_05476c50(asStack_30);
        (**(code **)(*(long *)pUVar10 + 0x198))(pUVar10,uVar6,iVar13,uVar3,iVar4);
        uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
        FUN_04e269c0(pUVar10 + 0xe8,uVar9);
        FUN_04e26aa8(pUVar10 + 0xe0);
        pcVar11 = *(code **)(*(long *)pUVar10 + 0x170);
        Sexy::Insets::Insets((Insets *)asStack_30,0x5f,0x40,0xb,0xff);
        (*pcVar11)(pUVar10,0,asStack_30);
        (**(code **)(*plVar8 + 0x60))(plVar8,pUVar10);
        StringHelper::ToStringValue(asStack_38);
        pUVar10 = ::operator_new(0x108);
        UIWidgetText::UIWidgetText(pUVar10,(wstring *)asStack_30);
        FUN_05476c50(asStack_30);
        (**(code **)(*(long *)pUVar10 + 0x198))(pUVar10,uVar6,iVar13 + iVar4,uVar3,iVar4);
        uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
        FUN_04e269c0(pUVar10 + 0xe8,uVar9);
        FUN_04e26aa8(pUVar10 + 0xe0);
        pcVar11 = *(code **)(*(long *)pUVar10 + 0x170);
        Sexy::Insets::Insets((Insets *)asStack_30,0x5f,0x40,0xb,0xff);
        (*pcVar11)(pUVar10,0,asStack_30);
        (**(code **)(*plVar8 + 0x60))(plVar8,pUVar10);
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
/* CardGameSelectLevel::InitChallengeWidgets() */

void __thiscall CardGameSelectLevel::InitChallengeWidgets(CardGameSelectLevel *this)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  CardGameUtils *this_00;
  LevelUtils *this_01;
  long lVar7;
  vector *pvVar8;
  PVZ2UnchartedModeChallengeWidget *this_02;
  int *piVar9;
  int extraout_w1;
  ulong uVar10;
  int iVar11;
  string asStack_48 [8];
  undefined1 auStack_40 [8];
  undefined8 local_38 [3];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<bool,std::allocator<bool>>::clear((vector<bool,std::allocator<bool>> *)(this + 0x138))
  ;
  std::string::string((string *)&local_20,"ChangeableContainer");
  plVar6 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  iVar4 = FUN_04e26b78(10);
  lVar3 = plVar6[10];
  iVar11 = *(int *)((long)plVar6 + 0x54);
  this_00 = (CardGameUtils *)CardGameUtils::IsHardMode();
  CardGameUtils::GetCurrentLevel(this_00);
  FUN_05475d88((string *)&local_20,asStack_48);
  iVar5 = CardGameUtils::GetWorldIndexOfLevel((string *)&local_20);
  std::string::~string((string *)&local_20);
  CardGameUtils::GetChallengeStatus(iVar5,SUB81(this_00,0));
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x1d8),(vector *)&local_20);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_20);
  this_01 = (LevelUtils *)Sexy::LazySingleton<LevelUtils>::GetInstance();
  lVar7 = LevelUtils::GetLevelInfo(this_01,asStack_48);
  if (lVar7 != 0) {
    std::
    vector<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>,std::allocator<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>>>
    ::vector((vector<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>,std::allocator<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>>>
              *)local_38,(vector *)(lVar7 + 0x1f8));
    pvVar8 = (vector *)FUN_04e26aa4(local_38[0]);
    std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>::vector
              ((vector<ChallengeInfo,std::allocator<ChallengeInfo>> *)&local_20,pvVar8);
    iVar5 = FUN_04e269e8(local_20,local_18);
    std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>::~vector
              ((vector<ChallengeInfo,std::allocator<ChallengeInfo>> *)&local_20);
    std::
    vector<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>,std::allocator<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>>>
    ::~vector((vector<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>,std::allocator<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>>>
               *)local_38);
    if (0 < iVar5) {
      iVar2 = iVar11 + 3;
      if (-1 < iVar11) {
        iVar2 = iVar11;
      }
      uVar10 = 0;
      iVar11 = 0;
      do {
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_38);
        CardGameUtils::GetCurrentLevelChallengeDesc
                  ((CardGameUtils *)(uVar10 & 0xffffffff),extraout_w1);
        std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
                  ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)&local_20,
                   (vector *)local_38);
        this_02 = ::operator_new(0x338);
        PVZ2UnchartedModeChallengeWidget::PVZ2UnchartedModeChallengeWidget
                  (this_02,uVar10 & 0xffffffff,(string *)&local_20);
        std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
                  ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)&local_20);
        (**(code **)(*(long *)this_02 + 0x198))
                  (this_02,iVar4,iVar11,(int)lVar3 + iVar4 * -2,iVar2 >> 2);
        uVar1 = uVar10 + 1;
        piVar9 = (int *)FUN_04e269f4(*(undefined8 *)(this + 0x1d8),uVar10);
        PVZ2UnchartedModeChallengeWidget::SetStarState(this_02,*piVar9 == 1);
        FUN_05477b24((string *)&local_20,auStack_40);
        PVZ1ModeSelectLevelChallengeWidget::SetDescStr(this_02,(string *)&local_20);
        FUN_05476c50((string *)&local_20);
        (**(code **)(*plVar6 + 0x60))(plVar6,this_02);
        FUN_05476c50(auStack_40);
        std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
                  ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)local_38);
        uVar10 = uVar1;
        iVar11 = iVar11 + (iVar2 >> 2);
      } while ((int)uVar1 < iVar5);
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
/* CardGameSelectLevel::InitBonusWidgets() */

void __thiscall CardGameSelectLevel::InitBonusWidgets(CardGameSelectLevel *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  CardGameUtils *this_00;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  UIScrollControl *pUVar11;
  Widget *this_01;
  uint *puVar12;
  PVZ2UnchartedModeBonusWidget *this_02;
  ulong uVar13;
  CardGameLevelBonusData *pCVar14;
  bool extraout_w1;
  bool extraout_w1_00;
  bool extraout_w1_01;
  ScrollWidget *pSVar15;
  ulong uVar16;
  undefined8 local_78;
  PVZ2UnchartedModeBonusWidget *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (CardGameUtils *)CardGameUtils::IsHardMode();
  CardGameUtils::GetCurrentLevelBonus(this_00,extraout_w1);
  CardGameUtils::GetCurrentLevelFirstRewardBonus
            ((CardGameUtils *)((ulong)this_00 & 0xffffffff),extraout_w1_00);
  CardGameUtils::GetCurrentLevelCardBonus
            ((CardGameUtils *)((ulong)this_00 & 0xffffffff),extraout_w1_01);
  cVar4 = CardGameUtils::IsCurrentLevelFirstReward();
  iVar5 = FUN_04e269c8(local_68,local_60);
  iVar6 = FUN_04e269c8(local_50,local_48);
  lVar8 = FUN_04e269c8(local_38,local_30);
  if (lVar8 == 0) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    if (cVar4 != '\0') {
      std::vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>>::reserve
                ((vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>> *)&local_20,
                 (long)(iVar6 + iVar5));
      goto LAB_04e286e0;
    }
  }
  else {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    if (cVar4 != '\0') {
      std::vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>>::reserve
                ((vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>> *)&local_20,
                 (long)(iVar6 + iVar5 + 1));
      pCVar14 = (CardGameLevelBonusData *)FUN_04e269dc(local_38,0);
      std::vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>>::push_back
                ((vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>> *)&local_20,
                 pCVar14);
LAB_04e286e0:
      local_78 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_70,(__normal_iterator *)&local_78);
      uVar9 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)&local_50);
      uVar10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_50);
      std::vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>>::
      insert<__gnu_cxx::__normal_iterator<CardGameLevelBonusData*,std::vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>>>,void>
                ((vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>> *)&local_20,
                 local_70,uVar9,uVar10);
      goto LAB_04e28420;
    }
  }
  std::vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>>::reserve
            ((vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>> *)&local_20,
             (long)iVar5);
LAB_04e28420:
  local_78 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_20);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_70,(__normal_iterator *)&local_78);
  uVar9 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_68);
  uVar10 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)&local_68);
  std::vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>>::
  insert<__gnu_cxx::__normal_iterator<CardGameLevelBonusData*,std::vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>>>,void>
            ((vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>> *)&local_20,
             local_70,uVar9,uVar10);
  std::string::string((string *)&local_70,"UIScroll_0");
  pUVar11 = UI::Dialog::GetWidget<UIScrollControl>((Dialog *)this,(string *)&local_70);
  *(UIScrollControl **)(this + 0x160) = pUVar11;
  std::string::~string((string *)&local_70);
  nop();
  lVar8 = AccessoryContent::GetDisplayImage(*(AccessoryContent **)(this + 0x160));
  pSVar15 = *(ScrollWidget **)(this + 0x160);
  *(undefined4 *)(lVar8 + 0x50) = *(undefined4 *)(pSVar15 + 0x50);
  Sexy::ScrollWidget::SetScrollMode(pSVar15,1);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  iVar7 = FUN_04e26b78(10);
  iVar5 = *(int *)(*(long *)(this + 0x160) + 0x54);
  std::vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>>::clear
            ((vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>> *)(this + 0x168)
            );
  iVar5 = iVar5 + iVar7 * -2;
  std::vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>>::operator=
            ((vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>> *)(this + 0x168)
             ,(vector *)&local_20);
  std::vector<PVZ2UnchartedModeBonusWidget*,std::allocator<PVZ2UnchartedModeBonusWidget*>>::clear
            ((vector<PVZ2UnchartedModeBonusWidget*,std::allocator<PVZ2UnchartedModeBonusWidget*>> *)
             (this + 0x180));
  uVar16 = 0;
  iVar6 = iVar7;
  while( true ) {
    uVar9 = local_20;
    uVar13 = FUN_04e269c8(local_20,local_18);
    if (uVar13 <= uVar16) break;
    puVar12 = (uint *)FUN_04e269dc(uVar9,uVar16);
    uVar1 = *puVar12;
    uVar2 = puVar12[1];
    uVar3 = puVar12[2];
    Sexy::OutputDebugStrF
              ((wchar_t *)"finalBonusDataList : %d, id = %d ",uVar16 & 0xffffffff,(ulong)uVar1);
    this_02 = ::operator_new(0x108);
    PVZ2UnchartedModeBonusWidget::PVZ2UnchartedModeBonusWidget(this_02,uVar1,uVar2,SUB41(uVar3,0));
    local_70 = this_02;
    (**(code **)(*(long *)this_02 + 0x198))(this_02,iVar6,iVar7,iVar5,iVar5);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,local_70);
    std::vector<PVZ2UnchartedModeBonusWidget*,std::allocator<PVZ2UnchartedModeBonusWidget*>>::
    push_back((vector<PVZ2UnchartedModeBonusWidget*,std::allocator<PVZ2UnchartedModeBonusWidget*>> *
              )(this + 0x180),&local_70);
    uVar16 = uVar16 + 1;
    iVar6 = iVar6 + iVar7 + iVar5;
  }
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,iVar7 + (iVar7 + iVar5) * (int)uVar13,*(undefined4 *)(this + 0x54));
  *(Widget **)(this + 0x198) = this_01;
  (**(code **)(**(long **)(this + 0x160) + 0x60))(*(long **)(this + 0x160),this_01);
  std::vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>>::~vector
            ((vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>> *)&local_20);
  std::vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>>::~vector
            ((vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>> *)&local_38);
  std::vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>>::~vector
            ((vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>> *)&local_50);
  std::vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>>::~vector
            ((vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>> *)&local_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameSelectLevel::InitView() */

void __thiscall CardGameSelectLevel::InitView(CardGameSelectLevel *this)

{
  int iVar1;
  UIWidgetText *pUVar2;
  undefined1 auStack_28 [8];
  string asStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  CardGameUtils *local_8;
  
  local_8 = ___stack_chk_guard;
  CardGameUtils::GetCurrentLevel(___stack_chk_guard);
  FUN_05475d88(asStack_10,asStack_20);
  iVar1 = CardGameUtils::GetWorldIndexOfLevel(asStack_10);
  std::string::~string(asStack_10);
  std::string::string(asStack_10,"Title");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  FUN_05478178(awStack_18,L"[CARD_GAME_START_LEVEL]",auStack_28);
  TodReplaceNumberString(awStack_18,L"{NUM}",iVar1 + 1U);
  PuzzleTip::SetTip(pUVar2,asStack_10);
  FUN_05476c50(asStack_10);
  FUN_05476c50(awStack_18);
  nop();
  std::string::string(asStack_10,"ModeDesc");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::StrFormat("[CARD_GAME_LEVEL_DESC_%d]",awStack_18,(ulong)(iVar1 + 1U));
  StringHelper::ToStringValue((string *)awStack_18);
  PuzzleTip::SetTip(pUVar2,asStack_10);
  FUN_05476c50(asStack_10);
  InitBonusWidgets(this);
  InitChallengeWidgets(this);
  InitModes(this);
  InitStartButton(this);
  std::string::~string((string *)awStack_18);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameSelectLevel::OnCreate() */

void __thiscall CardGameSelectLevel::OnCreate(CardGameSelectLevel *this)

{
  Widget *pWVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  pWVar1 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  UI::Dialog::SetCenter((Dialog *)this,pWVar1,true);
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameSelectLevel::InitZombies() */

void __thiscall CardGameSelectLevel::InitZombies(CardGameSelectLevel *this)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  CardGameUtils *this_00;
  string *psVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  PVZ2UnchartedModeZombieWidget *pPVar15;
  string asStack_50 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  PVPSeedZombie aPStack_30 [8];
  undefined4 local_28;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (CardGameUtils *)CardGameUtils::IsHardMode();
  CardGameUtils::GetCurrentLevel(this_00);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
  psVar11 = (string *)Sexy::LazySingleton<LevelUtils>::GetInstance();
  LevelUtils::SimpleLoadLevelDefinition(psVar11,SUB81(asStack_50,0));
  lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(lVar12 + 0x38));
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(lVar12 + 0x38));
  while( true ) {
    bVar4 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
    if (!bVar4) break;
    uVar14 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    PVPSeedZombie::PVPSeedZombie(aPStack_30);
    thunk_FUN_05475e00(aPStack_30,uVar14);
    local_28 = 0;
    std::vector<ZombieInfo,std::allocator<ZombieInfo>>::push_back
              ((vector<ZombieInfo,std::allocator<ZombieInfo>> *)local_20,(ZombieInfo *)aPStack_30);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)aPStack_30);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  std::string::string((string *)aPStack_30,"TargetContainer");
  plVar13 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)aPStack_30);
  std::string::~string((string *)aPStack_30);
  nop();
  lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
  iVar5 = FUN_04e269fc(*(undefined8 *)(lVar12 + 0x38),*(undefined8 *)(lVar12 + 0x40));
  if (iVar5 != 0) {
    iVar6 = FUN_04e269b8((int)plVar13[10]);
    iVar7 = FUN_04e269bc(*(undefined4 *)((long)plVar13 + 0x54));
    iVar8 = FUN_04e26b78(0x14);
    iVar9 = FUN_04e26b78(2);
    iVar10 = FUN_04e26b78(0);
    if (0 < iVar5) {
      lVar12 = 0;
      do {
        iVar3 = 0;
        if (iVar5 != 0) {
          iVar3 = (int)lVar12 / iVar5;
        }
        Sexy::Insets::Insets
                  ((Insets *)aPStack_30,
                   ((iVar6 - iVar7 * iVar5) + (1 - iVar5) * iVar8) / 2 +
                   ((int)lVar12 - iVar3 * iVar5) * (iVar7 + iVar8),iVar10 + iVar3 * (iVar7 + iVar9),
                   iVar7,iVar7);
        uVar14 = FUN_04e26a10(local_20[0],lVar12);
        FUN_05475d88((string *)&local_38,uVar14);
        lVar1 = lVar12 + 1;
        lVar12 = FUN_04e26a10(local_20[0],lVar12);
        uVar2 = *(undefined4 *)(lVar12 + 8);
        pPVar15 = ::operator_new(0xf0);
        PVZ2UnchartedModeZombieWidget::PVZ2UnchartedModeZombieWidget
                  (pPVar15,(string *)&local_38,uVar2);
        std::string::~string((string *)&local_38);
        (**(code **)(*(long *)pPVar15 + 0x1a0))(pPVar15,aPStack_30);
        (**(code **)(*plVar13 + 0x60))(plVar13,pPVar15);
        lVar12 = lVar1;
      } while ((int)lVar1 < iVar5);
    }
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

