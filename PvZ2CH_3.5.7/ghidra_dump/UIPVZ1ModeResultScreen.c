// Class: UIPVZ1ModeResultScreen


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPVZ1ModeResultScreen::GetLayoutName() */

void __thiscall UIPVZ1ModeResultScreen::GetLayoutName(UIPVZ1ModeResultScreen *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIPVZ1ModeResultScreen");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIPVZ1ModeResultScreen::ButtonDepress(int) */

void __thiscall UIPVZ1ModeResultScreen::ButtonDepress(UIPVZ1ModeResultScreen *this,int param_1)

{
  int iVar1;
  
  if (param_1 != 0x3e9) {
    if (param_1 == 0x3ea) {
      iVar1 = FUN_04de48d8(*(undefined8 *)(this + 0x170),*(undefined8 *)(this + 0x180));
      if (iVar1 == 0) {
        return;
      }
      Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x168));
      return;
    }
    if (param_1 != 1000) {
      return;
    }
  }
  iVar1 = FUN_04de48d8(*(undefined8 *)(this + 0x140),*(undefined8 *)(this + 0x150));
  if (iVar1 == 0) {
    return;
  }
  Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x138));
  return;
}


/* non-virtual thunk to UIPVZ1ModeResultScreen::ButtonDepress(int) */

void __thiscall UIPVZ1ModeResultScreen::ButtonDepress(UIPVZ1ModeResultScreen *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPVZ1ModeResultScreen::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
UIPVZ1ModeResultScreen::DrawAll(UIPVZ1ModeResultScreen *this,ModalFlags *param_1,Graphics *param_2)

{
  CachedUIResourcePtr<Sexy::Image> *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  Image *pIVar11;
  LotteryResultProgressBar *this_01;
  SalesProgressBar *this_02;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  undefined1 auVar19 [16];
  Insets aIStack_28 [16];
  undefined1 local_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TenYearRecordInfoPage::DrawAll((TenYearRecordInfoPage *)this,param_1,param_2);
  iVar5 = *(int *)(this + 0x134);
  if (iVar5 == 0) {
    uVar14 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_FZCuYuan_32_ThickOutline);
    Sexy::Color::Color((Color *)local_18,1);
    WriteWordInRect(param_2,this + 0x1b0,this + 0x1b8,uVar14,(Color *)local_18,5,1);
  }
  else if (iVar5 == 1) {
    std::string::string((string *)local_18,"Background_0");
    lVar12 = UI::Dialog::GetWidget((Dialog *)this,(string *)local_18);
    std::string::~string((string *)local_18);
    nop();
    std::string::string((string *)local_18,"ChallengeDescBg");
    lVar13 = UI::Dialog::GetWidget((Dialog *)this,(string *)local_18);
    std::string::~string((string *)local_18);
    nop();
    iVar5 = *(int *)(lVar12 + 0x48);
    iVar6 = *(int *)(lVar12 + 0x4c);
    iVar1 = *(int *)(lVar13 + 0x48);
    iVar2 = *(int *)(lVar13 + 0x4c);
    iVar7 = FUN_04de4b00(0x32);
    Sexy::Insets::Insets(aIStack_28,iVar5 + iVar1,iVar6 + iVar2,*(int *)(lVar13 + 0x50),iVar7);
    uVar14 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_FZCuYuan_32_ThickOutline);
    Sexy::Color::Color((Color *)local_18,1);
    WriteWordInRect(param_2,this + 0x1c8,aIStack_28,uVar14,(string *)local_18,5,1);
    uVar18 = 0;
    while( true ) {
      uVar14 = *(undefined8 *)(this + 0x1d0);
      uVar15 = FUN_04de4920(uVar14,*(undefined8 *)(this + 0x1d8));
      if (uVar15 <= uVar18) break;
      iVar5 = (int)uVar18 + 1;
      uVar14 = FUN_04de492c(uVar14,uVar18);
      iVar6 = *(int *)(lVar12 + 0x48);
      iVar1 = *(int *)(lVar13 + 0x48);
      iVar8 = FUN_04de4b00(0x1e);
      iVar2 = *(int *)(lVar13 + 0x4c);
      iVar7 = *(int *)(lVar12 + 0x4c);
      iVar9 = FUN_04de4b00(0x32);
      Sexy::Insets::Insets
                (aIStack_28,iVar6 + iVar1 + iVar8,iVar7 + iVar2 + iVar9 * iVar5,
                 *(int *)(lVar13 + 0x50),iVar9);
      uVar16 = PrimeText_PotentialTypeface::Typeface
                         (PrimeText_Game::Typeface_FZCuYuan_32_ThickOutline);
      Sexy::Color::Color((Color *)local_18,1);
      WriteWordInRect(param_2,uVar14,aIStack_28,uVar16,(string *)local_18,3,1);
      lVar17 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9bcc8);
      iVar6 = *(int *)(lVar17 + 0x38);
      lVar17 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9bcc8);
      iVar1 = *(int *)(lVar17 + 0x3c);
      uVar15 = std::vector<bool,std::allocator<bool>>::size
                         ((vector<bool,std::allocator<bool>> *)(this + 0x1e8));
      if (uVar18 < uVar15) {
        auVar19 = FUN_04de49cc(*(undefined8 *)(this + 0x1e8),uVar18);
        local_18 = auVar19;
        bVar4 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_18);
        this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9bcc8;
        if (!bVar4) {
          this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9bec8;
        }
        pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
        iVar2 = *(int *)(lVar12 + 0x48);
        iVar7 = *(int *)(lVar13 + 0x48);
        iVar8 = *(int *)(lVar13 + 0x50);
        iVar9 = *(int *)(lVar12 + 0x4c);
        iVar3 = *(int *)(lVar13 + 0x4c);
        iVar10 = FUN_04de4b00(0x32);
        Sexy::Graphics::DrawImage
                  (param_2,pIVar11,iVar2 + iVar7 + iVar8,iVar9 + iVar3 + iVar10 * iVar5,
                   (int)((float)iVar6 * 1.5),(int)((float)iVar1 * 1.5));
        uVar18 = uVar18 + 1;
      }
      else {
        uVar18 = uVar18 + 1;
      }
    }
  }
  else if (iVar5 == 2) {
    pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9be78);
    this_01 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9be78);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(this_01);
    this_02 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9be78);
    iVar6 = SalesProgressBar::GetCurrentLevel(this_02);
    Sexy::Insets::Insets((Insets *)local_18,0,0,iVar5,iVar6);
    Sexy::Graphics::DrawImage(param_2,pIVar11,(TRect *)(this + 0x210),(TRect *)local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPVZ1ModeResultScreen::UIPVZ1ModeResultScreen() */

void __thiscall UIPVZ1ModeResultScreen::UIPVZ1ModeResultScreen(UIPVZ1ModeResultScreen *this)

{
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIPVZ1ModeResultScreen>::UISingletonDialog
            ((UISingletonDialog<UIPVZ1ModeResultScreen> *)this);
  *(undefined ***)this = &PTR_GetClass_069cac90;
  *(undefined **)(this + 0xd8) = &DAT_069cafe0;
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x138),(DummyInit *)0x0);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x168),(DummyInit *)0x0);
  FUN_05476574(this + 0x198);
  Sexy::Insets::Insets((Insets *)(this + 0x1a0));
  FUN_05476574(this + 0x1b0);
  Sexy::Insets::Insets((Insets *)(this + 0x1b8));
  FUN_05476574(this + 0x1c8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1d0));
  std::vector<bool,std::allocator<bool>>::vector
            ((vector<bool,std::allocator<bool>> *)(this + 0x1e8));
  Sexy::Insets::Insets((Insets *)(this + 0x210));
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x138),(Delegate2 *)aDStack_38);
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x168),(Delegate2 *)aDStack_38);
  FUN_054772c4(this + 0x198,&DAT_056f11a8);
  *(undefined4 *)(this + 0x134) = 0xffffffff;
  FUN_054772c4(this + 0x1b0,&DAT_056f11a8);
  std::vector<std::wstring,std::allocator<std::wstring>>::clear
            ((vector<std::wstring,std::allocator<std::wstring>> *)(this + 0x1d0));
  std::vector<bool,std::allocator<bool>>::clear((vector<bool,std::allocator<bool>> *)(this + 0x1e8))
  ;
  FUN_054772c4(this + 0x1c8,&DAT_056f11a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIPVZ1ModeResultScreen::~UIPVZ1ModeResultScreen() */

void __thiscall UIPVZ1ModeResultScreen::~UIPVZ1ModeResultScreen(UIPVZ1ModeResultScreen *this)

{
  *(undefined ***)this = &PTR_GetClass_069cac90;
  *(undefined **)(this + 0xd8) = &DAT_069cafe0;
  std::vector<bool,std::allocator<bool>>::~vector
            ((vector<bool,std::allocator<bool>> *)(this + 0x1e8));
  std::vector<std::wstring,std::allocator<std::wstring>>::~vector
            ((vector<std::wstring,std::allocator<std::wstring>> *)(this + 0x1d0));
  FUN_05476c50(this + 0x1c8);
  FUN_05476c50(this + 0x1b0);
  FUN_05476c50(this + 0x198);
  UISingletonDialog<UIPVZ1ModeResultScreen>::~UISingletonDialog
            ((UISingletonDialog<UIPVZ1ModeResultScreen> *)this);
  return;
}


/* UIPVZ1ModeResultScreen::~UIPVZ1ModeResultScreen() */

void __thiscall UIPVZ1ModeResultScreen::~UIPVZ1ModeResultScreen(UIPVZ1ModeResultScreen *this)

{
  ~UIPVZ1ModeResultScreen(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPVZ1ModeResultScreen::getObjectiveData(std::vector<std::wstring, std::allocator<std::wstring >
   >&, std::vector<bool, std::allocator<bool> >&) */

void __thiscall
UIPVZ1ModeResultScreen::getObjectiveData
          (UIPVZ1ModeResultScreen *this,vector *param_1,vector *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  PVZ1ModeUtils *this_00;
  ulong uVar4;
  wstring *pwVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  wstring awStack_58 [8];
  wstring awStack_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_30 [2] [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_04de491c(*(undefined4 *)(*(long *)(gLawnApp + 0x9f0) + 0x87c));
  this_00 = (PVZ1ModeUtils *)
            std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                      ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_48);
  PVZ1ModeUtils::GetLevelChallengeChoose(this_00);
  ProfileUtils::GetChallengeStatusForCurrentLevelByChoose
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_48,
             (vector<bool,std::allocator<bool>> *)local_30,0);
  std::vector<bool,std::allocator<bool>>::~vector((vector<bool,std::allocator<bool>> *)local_30);
  uVar4 = FUN_04de4954(local_48,local_40);
  if (uVar4 < 2) {
    iVar3 = 0;
  }
  cVar1 = std::
          vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>
          ::empty((vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>
                   *)&local_48);
  uVar7 = local_48;
  if (cVar1 == '\0') {
    uVar10 = (ulong)iVar3;
    uVar4 = FUN_04de4954(local_48,local_40);
    if ((uVar4 <= uVar10) || (iVar3 < 0)) {
      uVar10 = 0;
    }
    uVar4 = 0;
    while( true ) {
      puVar8 = (undefined8 *)FUN_04de4968(uVar7,uVar10);
      uVar9 = FUN_04de4920(*puVar8,puVar8[1]);
      if (uVar9 <= uVar4) break;
      TodStringTranslate(L"[STARCHALLENGE_BULLET_SYMBOL]");
      std::operator+(awStack_58,L" ");
      puVar8 = (undefined8 *)FUN_04de4968(local_48,uVar10);
      pwVar5 = (wstring *)FUN_04de492c(*puVar8,uVar4);
      std::operator+(awStack_50,pwVar5);
      std::vector<std::wstring,std::allocator<std::wstring>>::push_back
                ((vector<std::wstring,std::allocator<std::wstring>> *)param_1,(wstring *)local_30);
      FUN_05476c50((vector<bool,std::allocator<bool>> *)local_30);
      FUN_05476c50(awStack_50);
      FUN_05476c50(awStack_58);
      lVar6 = FUN_04de4968(local_48,uVar10);
      auVar11 = FUN_04de49cc(*(undefined8 *)(lVar6 + 0x18),uVar4);
      local_30[0] = auVar11;
      bVar2 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_30);
      std::vector<bool,std::allocator<bool>>::push_back
                ((vector<bool,std::allocator<bool>> *)param_2,bVar2);
      uVar7 = local_48;
      uVar4 = uVar4 + 1;
    }
  }
  std::
  vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>::
  ~vector((vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>
           *)&local_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPVZ1ModeResultScreen::InitView(PVZ1ModeResultType) */

void __thiscall UIPVZ1ModeResultScreen::InitView(UIPVZ1ModeResultScreen *this,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  UIWidgetAnim *pUVar10;
  UIWidgetAnim *pUVar11;
  PVZ1ModeNetworkMgr *this_00;
  PVZ1ModeEndOfPlayData *pPVar12;
  undefined8 uVar13;
  int *piVar14;
  long lVar15;
  LotteryResultProgressBar *this_01;
  SalesProgressBar *this_02;
  PopAnimRig *pPVar16;
  ulong uVar17;
  int iVar18;
  float fVar19;
  undefined1 auStack_c8 [8];
  string asStack_c0 [8];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  DummyInit aDStack_70 [48];
  undefined8 local_40;
  undefined8 uStack_38;
  vector avStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x134) = param_2;
  std::string::string((string *)&local_40,"Background_0");
  lVar5 = UI::Dialog::GetWidget((Dialog *)this,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  std::string::string((string *)&local_40,"BonusBg");
  plVar6 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  std::string::string((string *)&local_40,"DescriptionBg");
  lVar7 = UI::Dialog::GetWidget((Dialog *)this,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  std::string::string((string *)&local_40,"ConfirmBtn");
  UI::Dialog::GetWidget((Dialog *)this,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  std::string::string((string *)&local_40,"BackToMapBtn");
  plVar8 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  std::string::string((string *)&local_40,"PlayAgainBtn");
  plVar9 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  std::string::string((string *)&local_40,"UIAnim_Win");
  pUVar10 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  std::string::string((string *)&local_40,"UIAnim_Lose");
  pUVar11 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  if (param_2 == 0) {
    (**(code **)(*plVar8 + 0x158))(plVar8,0);
    (**(code **)(*plVar9 + 0x158))(plVar9,0);
    (**(code **)(*(long *)pUVar11 + 0x158))(pUVar11,0);
    pPVar16 = (PopAnimRig *)FUN_04de4918(*(undefined8 *)(pUVar10 + 0xd8));
    std::string::string((string *)&local_40,"intro");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_70);
    PopAnimRig::PlayAndStop(pPVar16,(string *)&local_40,0,aDStack_70);
    std::string::~string((string *)&local_40);
    nop();
    this_00 = (PVZ1ModeNetworkMgr *)Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
    pPVar12 = (PVZ1ModeEndOfPlayData *)PVZ1ModeNetworkMgr::GetEndPlayInfo(this_00);
    PVZ1ModeEndOfPlayData::PVZ1ModeEndOfPlayData((PVZ1ModeEndOfPlayData *)&local_40,pPVar12);
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
              ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)&local_b8,avStack_28);
    uVar13 = local_b8;
    iVar3 = FUN_04de4934(local_b8,local_b0);
    iVar4 = FUN_04de4b00(100);
    iVar2 = FUN_04de4b00(0x1e);
    iVar1 = *(int *)((long)plVar6 + 0x54);
    if (0 < iVar3) {
      uVar17 = 0;
      iVar18 = (((int)plVar6[10] - iVar4 * iVar3) + (1 - iVar3) * iVar2) / 2;
      while( true ) {
        piVar14 = (int *)FUN_04de4948(uVar13,uVar17);
        plVar8 = (long *)PVZ1ModeResultBonusWidget::CreateUIRewardFrame(*piVar14,piVar14[1],false);
        (**(code **)(*plVar8 + 0x198))(plVar8,iVar18,(iVar1 - iVar4) / 2,iVar4,iVar4);
        (**(code **)(*plVar6 + 0x60))(plVar6,plVar8);
        piVar14 = (int *)FUN_04de4948(local_b8,uVar17);
        ProfileChangeItemAmount(*piVar14,piVar14[1],false);
        GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_a0);
        if (uVar17 == iVar3 - 1) break;
        uVar17 = uVar17 + 1;
        uVar13 = local_b8;
        iVar18 = iVar18 + iVar4 + iVar2;
      }
    }
    std::string::string(asStack_c0,"[PVZ1MODE_END_PLAY_SUCCESS]");
    StringHelper::ToStringValue(asStack_c0);
    FUN_054766c8(this + 0x198,(GAME_ITEM_INFO *)&local_a0);
    FUN_05476c50((GAME_ITEM_INFO *)&local_a0);
    std::string::~string(asStack_c0);
    nop();
    Sexy::Insets::Insets
              ((Insets *)&local_a0,*(int *)(lVar5 + 0x48) + *(int *)(lVar7 + 0x48),
               *(int *)(lVar5 + 0x4c) + *(int *)(lVar7 + 0x4c),*(int *)(lVar7 + 0x50),
               *(int *)(lVar7 + 0x54) / 2);
    *(undefined8 *)(this + 0x1a0) = local_a0;
    *(undefined8 *)(this + 0x1a8) = uStack_98;
    lVar15 = Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
    fVar19 = (float)FUN_04de4910(*(undefined4 *)(lVar15 + 0x160),*(undefined4 *)(lVar15 + 0x164));
    FUN_05478178(asStack_c0,L"[PVZ1MODE_END_PLAY_FINISH_TIME]",auStack_c8);
    TodReplaceNumberString((wstring *)asStack_c0,L"{NUM}",(int)fVar19);
    FUN_054766c8(this + 0x1b0,(GAME_ITEM_INFO *)&local_a0);
    FUN_05476c50((GAME_ITEM_INFO *)&local_a0);
    FUN_05476c50(asStack_c0);
    nop();
    iVar1 = *(int *)(lVar7 + 0x54) / 2;
    Sexy::Insets::Insets
              ((Insets *)&local_a0,*(int *)(lVar5 + 0x48) + *(int *)(lVar7 + 0x48),
               *(int *)(lVar5 + 0x4c) + *(int *)(lVar7 + 0x4c) + iVar1,*(int *)(lVar7 + 0x50),iVar1)
    ;
    *(undefined8 *)(this + 0x1b8) = local_a0;
    *(undefined8 *)(this + 0x1c0) = uStack_98;
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
              ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)&local_b8);
    PVZ1ModeEndOfPlayData::~PVZ1ModeEndOfPlayData((PVZ1ModeEndOfPlayData *)&local_40);
  }
  else if (param_2 == 1) {
    (**(code **)(*plVar8 + 0x158))(plVar8,0);
    (**(code **)(*plVar9 + 0x158))(plVar9,0);
    (**(code **)(*(long *)pUVar10 + 0x158))(pUVar10,0);
    pPVar16 = (PopAnimRig *)FUN_04de4918(*(undefined8 *)(pUVar11 + 0xd8));
    std::string::string((string *)&local_40,"intro");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_70);
    PopAnimRig::PlayAndStop(pPVar16,(string *)&local_40,0,aDStack_70);
    std::string::~string((string *)&local_40);
    nop();
    std::string::string((string *)&local_a0,"[PVZ1MODE_END_PLAY_LOSS]");
    StringHelper::ToStringValue((string *)&local_a0);
    FUN_054766c8(this + 0x1c8,(string *)&local_40);
    FUN_05476c50((string *)&local_40);
    std::string::~string((string *)&local_a0);
    nop();
    getObjectiveData(this,(vector *)(this + 0x1d0),(vector *)(this + 0x1e8));
  }
  else if (param_2 == 2) {
    (**(code **)(*plVar8 + 0x158))(plVar8,0);
    (**(code **)(*plVar9 + 0x158))(plVar9,0);
    (**(code **)(*(long *)pUVar10 + 0x158))(pUVar10,0);
    (**(code **)(*(long *)pUVar11 + 0x158))(pUVar11,0);
    lVar7 = plVar6[9];
    iVar1 = *(int *)((long)plVar6 + 0x4c);
    lVar15 = plVar6[10];
    this_01 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9be78);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(this_01);
    this_02 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9be78);
    iVar4 = SalesProgressBar::GetCurrentLevel(this_02);
    Sexy::Insets::Insets
              ((Insets *)&local_40,(int)lVar7 + *(int *)(lVar5 + 0x48) + ((int)lVar15 - iVar3) / 2,
               iVar1 + *(int *)(lVar5 + 0x4c),iVar3,iVar4);
    *(undefined8 *)(this + 0x210) = local_40;
    *(undefined8 *)(this + 0x218) = uStack_38;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

