// Class: BattleStatementUI


/* BattleStatementUI::onRewardAdded(int, int) */

void BattleStatementUI::onRewardAdded(int param_1,int param_2)

{
  LawnApp::KillBattleStatementUI(gLawnApp);
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* BattleStatementUI::IsAdvertisementEnable() */

void BattleStatementUI::IsAdvertisementEnable(void)

{
  LawnApp::GetAdsStatus(gLawnApp,4);
  return;
}


/* BattleStatementUI::RemoveAdvertisement() */

void BattleStatementUI::RemoveAdvertisement(void)

{
  char cVar1;
  long *plVar2;
  
  cVar1 = IsAdvertisementEnable();
  if (cVar1 != '\0') {
    Sexy::OutputDebugStrF((wchar_t *)"BattleStatementUI::RemoveAdvertisement");
    plVar2 = (long *)EASquared::Instance();
    (**(code **)(*plVar2 + 0x40))(plVar2,0x3e);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BattleStatementUI::~BattleStatementUI() */

void __thiscall BattleStatementUI::~BattleStatementUI(BattleStatementUI *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined **)(this + 0xd8) = &DAT_06842f90;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06842c60;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_Battlestatement");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  RemoveAdvertisement();
  FUN_05476c50(this + 0x108);
  FUN_05476c50(this + 0x100);
  FUN_05476c50(this + 0xf8);
  FUN_05476c50(this + 0xf0);
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BattleStatementUI::~BattleStatementUI() */

void __thiscall BattleStatementUI::~BattleStatementUI(BattleStatementUI *this)

{
  ~BattleStatementUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BattleStatementUI::Update() */

void __thiscall BattleStatementUI::Update(BattleStatementUI *this)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  undefined4 uVar4;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x118] == (BattleStatementUI)0x0) {
    fVar3 = (float)PVZ_RealDt();
    iVar1 = *(int *)(this + 0x110);
    uVar2 = (uint)((float)*(int *)(this + 0x114) + fVar3 * (float)iVar1 * 0.5);
    if ((int)uVar2 < iVar1) {
      *(uint *)(this + 0x114) = uVar2;
    }
    else {
      *(int *)(this + 0x114) = iVar1;
      this[0x118] = (BattleStatementUI)0x1;
      uVar4 = PVZ_RealT();
      uVar2 = *(uint *)(this + 0x114);
      *(undefined4 *)(this + 0x11c) = uVar4;
    }
    Sexy::StrFormat(L"%d",auStack_10,(ulong)uVar2);
    FUN_054766c8(this + 0xf0,auStack_10);
    FUN_05476c50(auStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BattleStatementUI::CreateButton() */

void __thiscall BattleStatementUI::CreateButton(BattleStatementUI *this)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  ADManager *pAVar10;
  PVZ2UIButton *pPVar11;
  code *pcVar12;
  SalesProgressBar *pSVar13;
  ulong uVar14;
  wstring awStack_80 [8];
  wstring awStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x128) == 0) {
    pAVar10 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
    cVar3 = ADManager::CanWatchAD(pAVar10,0x17);
    FUN_05478178(awStack_78,L"[BUTTON_OK]",awStack_80);
    Sexy::Color::Color((Color *)asStack_40,1);
    pPVar11 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar11,1000,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)asStack_40);
    FUN_05476c50(awStack_78);
    nop();
    pcVar12 = *(code **)(*(long *)pPVar11 + 0x198);
    if (cVar3 == '\0') {
      iVar1 = *(int *)(this + 0xe8);
      iVar2 = *(int *)(this + 0xe0);
      iVar4 = FUN_043b7974(0x5e);
      iVar1 = (iVar2 + iVar1 / 2) - iVar4 / 2;
    }
    else {
      iVar1 = *(int *)(this + 0xe0);
    }
    iVar2 = *(int *)(this + 0xec);
    iVar4 = *(int *)(this + 0xe4);
    pSVar13 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03240);
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar13);
    iVar6 = FUN_043b7974(0x5e);
    pSVar13 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03240);
    uVar7 = SalesProgressBar::GetCurrentLevel(pSVar13);
    (*pcVar12)(pPVar11,iVar1,(iVar4 + iVar2) - iVar5 / 2,iVar6,uVar7);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b03240,1);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b02f68,1);
    PVZ2UIButton::SetDialogStates(pPVar11,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40);
    (**(code **)(*(long *)this + 0x60))(this,pPVar11);
    if (cVar3 != '\0') {
      pAVar10 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
      uVar14 = ADManager::GetLeftADWatchCount(pAVar10,0x17);
      std::string::string(asStack_40,"[ADVERTISEMENT_WATCH_TIMES]");
      StringHelper::ReplaceNumberString
                ((StringHelper *)asStack_40,(string *)L"{NUMBER}",(wchar_t *)(uVar14 & 0xffffffff),
                 iVar6);
      std::string::~string(asStack_40);
      nop();
      Sexy::Color::Color((Color *)asStack_40,1);
      pPVar11 = ::operator_new(0x300);
      PVZ2UIButton::PVZ2UIButton
                (pPVar11,0x3eb,(ButtonListener *)(this + 0xd8),awStack_80,(Color *)asStack_40);
      iVar1 = *(int *)(this + 0xe0);
      iVar2 = *(int *)(this + 0xe8);
      pcVar12 = *(code **)(*(long *)pPVar11 + 0x198);
      iVar6 = FUN_043b7974(0xd2);
      iVar4 = *(int *)(this + 0xe4);
      iVar5 = *(int *)(this + 0xec);
      pSVar13 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b034a0);
      iVar8 = SalesProgressBar::GetCurrentLevel(pSVar13);
      uVar7 = FUN_043b7974(0xd2);
      pSVar13 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b034a0);
      uVar9 = SalesProgressBar::GetCurrentLevel(pSVar13);
      (*pcVar12)(pPVar11,(iVar1 + iVar2) - iVar6,(iVar4 + iVar5) - iVar8 / 2,uVar7,uVar9);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b034a0,2);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b02fa0,2);
      PVZ2UIButton::SetDialogStates(pPVar11,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40);
      (**(code **)(*(long *)this + 0x60))(this,pPVar11);
      FUN_05476c50(awStack_80);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BattleStatementUI::DangerRoomDraw(Sexy::Graphics*) */

void __thiscall BattleStatementUI::DangerRoomDraw(BattleStatementUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  Image *pIVar9;
  long lVar10;
  undefined8 uVar11;
  ProfileMgr *this_00;
  DangerRoomManager *this_01;
  long lVar12;
  int *piVar13;
  string *extraout_x1;
  undefined1 auStack_68 [8];
  GraphicsAutoState aGStack_60 [8];
  string asStack_58 [8];
  wstring awStack_50 [8];
  wstring awStack_48 [8];
  undefined1 auStack_40 [8];
  Insets aIStack_38 [16];
  undefined8 local_28 [2];
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets((Insets *)local_18,0,0,0,0);
  DrawSpaceSpiral(param_1,0xff,(Insets *)local_18);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_60,param_1);
  Sexy::Graphics::ClearClipRect(param_1);
  pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b030c8);
  iVar4 = FUN_043b7974(0);
  iVar1 = *(int *)(this + 0xe4);
  iVar2 = *(int *)(this + 0xe0);
  iVar8 = *(int *)(this + 0xec);
  lVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b030c8);
  iVar6 = *(int *)(lVar10 + 0x3c);
  iVar5 = FUN_043b7974(0);
  Sexy::Graphics::DrawImage(param_1,pIVar9,iVar4 + iVar2,((iVar1 + iVar8) - iVar6) + iVar5);
  iVar6 = FUN_043b7974(0xfffffff3);
  iVar1 = *(int *)(this + 0xe0);
  iVar4 = FUN_043b7974(0xfffffff7);
  iVar2 = *(int *)(this + 0xe4);
  iVar5 = FUN_043b7974(0x1a);
  iVar8 = *(int *)(this + 0xe8);
  iVar7 = FUN_043b7974(0x17);
  Sexy::Insets::Insets
            (aIStack_38,iVar6 + iVar1,iVar4 + iVar2,iVar5 + iVar8,iVar7 + *(int *)(this + 0xec));
  Sexy::Graphics::ClearClipRect(param_1);
  pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03450);
  iVar6 = FUN_043b7974(0);
  iVar1 = *(int *)(this + 0xe4);
  iVar2 = *(int *)(this + 0xe0);
  lVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03450);
  iVar8 = *(int *)(lVar10 + 0x3c);
  iVar4 = FUN_043b7974(0x12);
  Sexy::Graphics::DrawImage(param_1,pIVar9,iVar6 + iVar2,(iVar1 - iVar8) + iVar4);
  iVar1 = *(int *)(this + 0xec);
  iVar2 = *(int *)(this + 0xe0);
  iVar8 = *(int *)(this + 0xe4);
  iVar6 = *(int *)(this + 0xe8);
  lVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b030c8);
  iVar4 = *(int *)(lVar10 + 0x3c);
  iVar5 = FUN_043b7974(0x28);
  Sexy::Insets::Insets((Insets *)local_18,iVar2,iVar8,iVar6,(iVar1 - iVar4) + iVar5);
  uVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b033f8);
  DrawImageTiled(0x3f800000,param_1,(Insets *)local_18,uVar11);
  Sexy::Insets::Insets((Insets *)local_18,aIStack_38);
  uVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b032f0);
  Draw9SliceImage(param_1,(Insets *)local_18,uVar11);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  this_01 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  lVar10 = DangerRoomManager::GetDangerRoomInfo(this_01,false);
  lVar12 = DangerRoomModule::GetDangerRoomPropertySheet();
  std::string::string(asStack_58,"DANGER_ROOM_TITLE_LEVEL_1");
  nop();
  local_28[0] = FUN_043b7e3c(*(undefined8 *)(lVar12 + 0xb0));
  local_18[0] = FUN_043b7e8c(*(undefined8 *)(lVar12 + 0xb8));
  do {
    bVar3 = __gnu_cxx::operator!=((__normal_iterator *)local_28,(__normal_iterator *)local_18);
    if (!bVar3) {
LAB_043b84d0:
      TodStringTranslate(L"[DANGER_ROOM_ACCOUNT_DESC]");
      TodReplaceNumberString(awStack_50,L"{LEVEL_COUNT}",*(int *)(lVar10 + 0x38));
      FUN_054766c8(awStack_50,(Insets *)local_18);
      FUN_05476c50((Insets *)local_18);
      TodReplaceNumberString(awStack_50,L"{SCORE_COUNT}",*(int *)(lVar10 + 0x74));
      FUN_054766c8(awStack_50,(Insets *)local_18);
      FUN_05476c50((Insets *)local_18);
      Sexy::UTF8StringToWString((Sexy *)asStack_58,extraout_x1);
      TodStringTranslate(awStack_48);
      uVar11 = FUN_054766ec(auStack_40);
      FUN_05478178((exception_ptr *)local_28,uVar11,auStack_68);
      TodReplaceString(awStack_50,L"{ACCOUNT_NAME}",(wstring *)local_28);
      FUN_054766c8(awStack_50,(Insets *)local_18);
      FUN_05476c50((Insets *)local_18);
      FUN_05476c50((exception_ptr *)local_28);
      nop();
      FUN_05476c50(auStack_40);
      FUN_05476c50(awStack_48);
      iVar8 = FUN_043b7974(0x46);
      iVar1 = *(int *)(this + 0xe0);
      iVar6 = FUN_043b7974(0x19);
      iVar2 = *(int *)(this + 0xe4);
      iVar4 = FUN_043b7974(0x15e);
      iVar5 = FUN_043b7974(200);
      Sexy::Insets::Insets((Insets *)local_28,iVar8 + iVar1,iVar2 - iVar6,iVar4,iVar5);
      uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
      Sexy::Color::Color((Color *)local_18,1);
      WriteWordInRect(param_1,awStack_50,(exception_ptr *)local_28,uVar11,(Insets *)local_18,3,1);
      pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03078);
      iVar1 = *(int *)(this + 0xe8);
      iVar2 = *(int *)(this + 0xe0);
      lVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03078);
      iVar8 = *(int *)(lVar10 + 0x38);
      iVar6 = *(int *)(this + 0xe4);
      lVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03078);
      iVar4 = *(int *)(lVar10 + 0x3c);
      iVar5 = FUN_043b7974(0x14);
      Sexy::Graphics::DrawImage
                (param_1,pIVar9,(iVar2 + iVar1 / 2) - iVar8 / 2,(iVar6 - iVar4) + iVar5);
      FUN_05476c50(awStack_50);
      std::string::~string(asStack_58);
      Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_60);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    piVar13 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_28);
    if ((piVar13[1] <= *(int *)(lVar10 + 0x84)) && (*(int *)(lVar10 + 0x84) < *piVar13)) {
      thunk_FUN_05475e00(asStack_58,piVar13 + 2);
      goto LAB_043b84d0;
    }
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)local_28);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BattleStatementUI::NormalDraw(Sexy::Graphics*) */

void __thiscall BattleStatementUI::NormalDraw(BattleStatementUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  Image *pIVar9;
  long lVar10;
  undefined8 uVar11;
  CachedUIResourcePtr<Sexy::Image> *pCVar12;
  undefined4 uVar13;
  float fVar14;
  GraphicsAutoState aGStack_90 [8];
  Insets aIStack_88 [16];
  undefined4 local_78 [4];
  undefined4 local_68 [4];
  SexyTransform2D aSStack_58 [8];
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [20];
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets((Insets *)local_68,0,0,0,0);
  DrawSpaceSpiral(param_1,0xff,(Insets *)local_68);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_90,param_1);
  Sexy::Graphics::ClearClipRect(param_1);
  pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03450);
  iVar1 = FUN_043b7974(0);
  iVar8 = *(int *)(this + 0xe4);
  iVar6 = *(int *)(this + 0xe0);
  lVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03450);
  iVar5 = *(int *)(lVar10 + 0x3c);
  iVar2 = FUN_043b7974(0x12);
  Sexy::Graphics::DrawImage(param_1,pIVar9,iVar1 + iVar6,(iVar8 - iVar5) + iVar2);
  Sexy::Insets::Insets((Insets *)local_68,(Insets *)(this + 0xe0));
  uVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b033f8);
  DrawImageTiled(0x3f800000,param_1,(Insets *)local_68,uVar11);
  Sexy::Graphics::ClearClipRect(param_1);
  pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b030c8);
  iVar2 = FUN_043b7974(0);
  iVar8 = *(int *)(this + 0xe4);
  iVar6 = *(int *)(this + 0xe0);
  iVar5 = *(int *)(this + 0xec);
  lVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b030c8);
  iVar1 = *(int *)(lVar10 + 0x3c);
  iVar3 = FUN_043b7974(0);
  Sexy::Graphics::DrawImage(param_1,pIVar9,iVar2 + iVar6,((iVar8 + iVar5) - iVar1) + iVar3);
  iVar1 = FUN_043b7974(0xfffffff3);
  iVar8 = *(int *)(this + 0xe0);
  iVar2 = FUN_043b7974(0xfffffff7);
  iVar6 = *(int *)(this + 0xe4);
  iVar3 = FUN_043b7974(0x1a);
  iVar5 = *(int *)(this + 0xe8);
  iVar4 = FUN_043b7974(0x17);
  Sexy::Insets::Insets
            (aIStack_88,iVar1 + iVar8,iVar2 + iVar6,iVar3 + iVar5,iVar4 + *(int *)(this + 0xec));
  Sexy::Insets::Insets((Insets *)local_68,aIStack_88);
  uVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b032f0);
  Draw9SliceImage(param_1,(Insets *)local_68,uVar11);
  iVar5 = FUN_043b7974(0xe);
  pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03148);
  iVar8 = *(int *)(this + 0xe0);
  iVar6 = FUN_043b7974(0x8a);
  Sexy::Graphics::DrawImage(param_1,pIVar9,iVar5 + iVar8,iVar6 + *(int *)(this + 0xe4));
  iVar8 = *(int *)(this + 0xe0);
  iVar1 = FUN_043b7974(0x32);
  iVar2 = FUN_043b7974(0x8a);
  iVar6 = *(int *)(this + 0xe4);
  iVar3 = FUN_043b7974(10);
  iVar4 = FUN_043b7974(100);
  iVar7 = FUN_043b7974(0x28);
  Sexy::Insets::Insets((Insets *)local_78,iVar5 + iVar8 + iVar1,iVar2 + iVar6 + iVar3,iVar4,iVar7);
  uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_26_Shaded);
  Sexy::Color::Color((Color *)local_68,1);
  WriteWordInRect(param_1,this + 0xf8,(Insets *)local_78,uVar11,(Insets *)local_68,5,1);
  lVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03148);
  iVar6 = *(int *)(lVar10 + 0x38);
  iVar8 = FUN_043b7974(0xe);
  iVar8 = iVar5 + iVar6 + iVar8;
  pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03370);
  iVar6 = *(int *)(this + 0xe0);
  iVar5 = FUN_043b7974(0x8a);
  Sexy::Graphics::DrawImage(param_1,pIVar9,iVar8 + iVar6,iVar5 + *(int *)(this + 0xe4));
  iVar6 = *(int *)(this + 0xe0);
  iVar1 = FUN_043b7974(0x2a);
  iVar2 = FUN_043b7974(0x8a);
  iVar5 = *(int *)(this + 0xe4);
  iVar3 = FUN_043b7974(10);
  iVar4 = FUN_043b7974(0x78);
  iVar7 = FUN_043b7974(0x28);
  Sexy::Insets::Insets((Insets *)local_78,iVar8 + iVar6 + iVar1,iVar2 + iVar5 + iVar3,iVar4,iVar7);
  uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_26_Shaded);
  Sexy::Color::Color((Color *)local_68,1);
  WriteWordInRect(param_1,this + 0x100,(Insets *)local_78,uVar11,(Insets *)local_68,5,1);
  lVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03370);
  iVar5 = *(int *)(lVar10 + 0x38);
  iVar6 = FUN_043b7974(0xe);
  iVar6 = iVar8 + iVar5 + iVar6;
  lVar10 = Sexy::LazySingleton<FestivalManager>::GetInstance();
  iVar8 = FUN_043b7760(*(undefined4 *)(lVar10 + 8));
  if ((iVar8 == 3) || (iVar8 == 0)) {
    pCVar12 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03398;
LAB_043b8f48:
    pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar12);
    iVar8 = *(int *)(this + 0xe0);
    iVar5 = FUN_043b7974(0x8a);
    Sexy::Graphics::DrawImage(param_1,pIVar9,iVar6 + iVar8,iVar5 + *(int *)(this + 0xe4));
  }
  else if ((iVar8 == 1) || (iVar8 == 2)) {
    pCVar12 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03420;
    goto LAB_043b8f48;
  }
  iVar8 = *(int *)(this + 0xe0);
  iVar1 = FUN_043b7974(0x28);
  iVar2 = FUN_043b7974(0x8a);
  iVar5 = *(int *)(this + 0xe4);
  iVar3 = FUN_043b7974(10);
  iVar4 = FUN_043b7974(0x3c);
  Sexy::Insets::Insets((Insets *)local_78,iVar6 + iVar8 + iVar1,iVar2 + iVar5 + iVar3,iVar4,iVar1);
  uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_26_Shaded);
  Sexy::Color::Color((Color *)local_68,1);
  WriteWordInRect(param_1,this + 0x108,(Insets *)local_78,uVar11,(Insets *)local_68,5,1);
  pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03078);
  iVar8 = *(int *)(this + 0xe0);
  iVar6 = *(int *)(this + 0xe8);
  lVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03078);
  iVar5 = *(int *)(lVar10 + 0x38);
  iVar3 = FUN_043b7974(0);
  iVar1 = *(int *)(this + 0xe4);
  lVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03078);
  iVar2 = *(int *)(lVar10 + 0x3c);
  iVar4 = FUN_043b7974(0x14);
  Sexy::Graphics::DrawImage
            (param_1,pIVar9,((iVar8 + iVar6 / 2) - iVar5 / 2) + iVar3,(iVar1 - iVar2) + iVar4);
  pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03018);
  iVar8 = *(int *)(this + 0xe8);
  iVar6 = *(int *)(this + 0xe0);
  lVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03018);
  iVar5 = *(int *)(lVar10 + 0x38);
  iVar1 = FUN_043b7974(0);
  iVar2 = FUN_043b7974(0x23);
  Sexy::Graphics::DrawImage
            (param_1,pIVar9,((iVar6 + iVar8 / 2) - iVar5 / 2) + iVar1,iVar2 + *(int *)(this + 0xe4))
  ;
  iVar5 = FUN_043b7974(0xaa);
  iVar8 = *(int *)(this + 0xe0);
  iVar1 = FUN_043b7974(0x18);
  iVar6 = *(int *)(this + 0xe4);
  iVar2 = FUN_043b7974(200);
  iVar3 = FUN_043b7974(0x50);
  Sexy::Insets::Insets((Insets *)local_78,iVar5 + iVar8,iVar1 + iVar6,iVar2,iVar3);
  uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_46_HardShadow);
  Sexy::Color::Color((Color *)local_68,1);
  WriteWordInRect(param_1,this + 0xf0,(Insets *)local_78,uVar11,(Insets *)local_68,5,1);
  if (this[0x118] == (BattleStatementUI)0x0) goto LAB_043b8d90;
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_58);
  Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_58);
  fVar14 = *(float *)(this + 0x11c);
  uVar13 = PVZ_RealT();
  local_78[0] = 0x40600000;
  local_68[0] = 0x3f800000;
  fVar14 = CurveLerp<float>(fVar14,fVar14 + 0.6,uVar13,(Insets *)local_78,(Insets *)local_68,2);
  Sexy::SexyTransform2D::Scale(aSStack_58,fVar14,fVar14);
  iVar8 = FUN_043b7974(0x7d);
  iVar6 = FUN_043b7974(0x30);
  FUN_043b7740((float)(iVar8 + *(int *)(this + 0xe0)),(float)(iVar6 + *(int *)(this + 0xe4)),
               auStack_50,auStack_44);
  switch(*(undefined4 *)(this + 0x124)) {
  case 0:
    pCVar12 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b033d0;
    break;
  case 1:
    pCVar12 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03198;
    break;
  case 2:
    pCVar12 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02fc8;
    break;
  case 3:
    pCVar12 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03298;
    break;
  case 4:
    pCVar12 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03318;
    break;
  default:
    goto switchD_043b8f94_default;
  }
  pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar12);
  Sexy::Graphics::DrawImageMatrix(param_1,pIVar9,(SexyMatrix3 *)aSStack_58,0.0,0.0);
switchD_043b8f94_default:
  if ((fVar14 == 1.0) && (this[0x120] != (BattleStatementUI)0x0)) {
    fVar14 = *(float *)(this + 0x11c);
    uVar13 = PVZ_RealT();
    local_68[0] = 0x3f800000;
    local_78[0] = 0x40600000;
    fVar14 = CurveLerp<float>(fVar14 + 0.6,fVar14 + 1.2,uVar13,(Insets *)local_78,(Insets *)local_68
                              ,2);
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_30);
    Sexy::SexyTransform2D::Scale(aSStack_30,fVar14,fVar14);
    iVar8 = FUN_043b7974(0x163);
    iVar6 = FUN_043b7974(0xf);
    FUN_043b7740((float)(iVar8 + *(int *)(this + 0xe0)),(float)(iVar6 + *(int *)(this + 0xe4)),
                 auStack_28,auStack_1c);
    pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03268);
    Sexy::Graphics::DrawImageMatrix(param_1,pIVar9,(SexyMatrix3 *)aSStack_30,0.0,0.0);
  }
LAB_043b8d90:
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BattleStatementUI::Draw(Sexy::Graphics*) */

void __thiscall BattleStatementUI::Draw(BattleStatementUI *this,Graphics *param_1)

{
  if (*(int *)(this + 0x128) == 0) {
    NormalDraw(this,param_1);
    return;
  }
  if (*(int *)(this + 0x128) != 1) {
    return;
  }
  DangerRoomDraw(this,param_1);
  return;
}


/* BattleStatementUI::ButtonPress(int) */

void BattleStatementUI::ButtonPress(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Press");
  return;
}


/* non-virtual thunk to BattleStatementUI::ButtonPress(int) */

void __thiscall BattleStatementUI::ButtonPress(BattleStatementUI *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* BattleStatementUI::ButtonDepress(int) */

void __thiscall BattleStatementUI::ButtonDepress(BattleStatementUI *this,int param_1)

{
  char *pcVar1;
  ADManager *pAVar2;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Release");
  if (param_1 == 1000) {
    LawnApp::KillBattleStatementUI(gLawnApp);
    MessageRouter::Post((_func_void *)gMessageRouter);
    return;
  }
  if (param_1 == 0x3eb) {
    pAVar2 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
    ADManager::ShowAD(pAVar2,0x10);
    return;
  }
  return;
}


/* non-virtual thunk to BattleStatementUI::ButtonDepress(int) */

void __thiscall BattleStatementUI::ButtonDepress(BattleStatementUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BattleStatementUI::doublePieceRewards() */

void __thiscall BattleStatementUI::doublePieceRewards(BattleStatementUI *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  string sVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  ProfileMgr *pPVar6;
  PlayerInfo *this_01;
  long lVar7;
  string *psVar8;
  string *psVar9;
  FestivalManager *pFVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  NetworkMgr *pNVar13;
  INetworkMsgProcess *pIVar14;
  long lVar15;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38 [6];
  long local_8;
  
  lVar15 = *(long *)(gLawnApp + 0x9f0);
  local_8 = ___stack_chk_guard;
  if (0 < *(int *)(lVar15 + 0x184)) {
    pPVar6 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar6);
    PlayerInfo::AddCoins(this_01,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0x184));
    lVar15 = *(long *)(gLawnApp + 0x9f0);
  }
  lVar7 = FUN_043b7774(*(undefined8 *)(lVar15 + 0x168),*(undefined8 *)(lVar15 + 0x170));
  if (lVar7 == 0) {
    onRewardAdded((int)this,0);
  }
  else {
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(lVar15 + 0x168));
    local_38[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(lVar15 + 0x168));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)local_38), bVar2)
    {
      lVar15 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
      if (*(uint *)(lVar15 + 8) < 2) {
        *(undefined1 *)(lVar15 + 0x14) = 1;
      }
      std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                ((move_iterator<Sexy::LeaderboardEntry*> *)&local_40);
    }
    pPVar6 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    psVar8 = (string *)ProfileMgr::GetCurrentProfile(pPVar6);
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(*(long *)(gLawnApp + 0x9f0) + 0x168);
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar2)
    {
      psVar9 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
      if (*(int *)(psVar9 + 8) == 0) {
        pFVar10 = (FestivalManager *)Sexy::LazySingleton<FestivalManager>::GetInstance();
        uVar11 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
        cVar3 = FestivalManager::IsFestivalLevel(pFVar10,uVar11,0xffffffff);
        if (cVar3 != '\0') {
          lVar15 = Sexy::LazySingleton<FestivalManager>::GetInstance();
          iVar4 = FUN_043b7760(*(undefined4 *)(lVar15 + 8));
          if (iVar4 - 1U < 2) {
            std::
            map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
            ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
                   *)local_38);
            puVar12 = (undefined4 *)
                      std::
                      map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                      ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                    *)local_38,psVar9);
            sVar1 = psVar9[0x14];
            *puVar12 = *(undefined4 *)(psVar9 + 0x10);
            Sexy::LazySingleton<FestivalManager>::GetInstance();
            uVar5 = FUN_043b7768(iVar4);
            pNVar13 = (NetworkMgr *)NetworkMgr::Instance();
            pIVar14 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(pNVar13);
            INetworkMsgProcess::ICloudRequestInstanceStatus
                      (pIVar14,uVar5,1,
                       (map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
                        *)local_38,2,sVar1);
            cVar3 = LawnApp::IsNetworkModuleOK();
            if (cVar3 != '\0') {
              PlayerInfo::AddPlantPieceCount
                        (psVar8,(int)psVar9,SUB41(*(undefined4 *)(psVar9 + 0x10),0));
            }
LAB_043b95d0:
            std::
            map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
            ::~map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                    *)local_38);
          }
        }
      }
      else if (*(int *)(psVar9 + 8) == 1) {
        pFVar10 = (FestivalManager *)Sexy::LazySingleton<FestivalManager>::GetInstance();
        uVar11 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
        cVar3 = FestivalManager::IsFestivalLevel(pFVar10,uVar11,0xffffffff);
        if (cVar3 != '\0') {
          lVar15 = Sexy::LazySingleton<FestivalManager>::GetInstance();
          iVar4 = FUN_043b7760(*(undefined4 *)(lVar15 + 8));
          if ((iVar4 == 3) || (iVar4 == 0)) {
            std::
            map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
            ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
                   *)local_38);
            puVar12 = (undefined4 *)
                      std::
                      map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                      ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                    *)local_38,psVar9);
            sVar1 = psVar9[0x14];
            *puVar12 = *(undefined4 *)(psVar9 + 0x10);
            Sexy::LazySingleton<FestivalManager>::GetInstance();
            uVar5 = FUN_043b7768(iVar4);
            pNVar13 = (NetworkMgr *)NetworkMgr::Instance();
            pIVar14 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(pNVar13);
            INetworkMsgProcess::ICloudRequestInstanceStatus
                      (pIVar14,uVar5,1,
                       (map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
                        *)local_38,3,sVar1);
            cVar3 = LawnApp::IsNetworkModuleOK();
            if (cVar3 != '\0') {
              PlayerInfo::AddAvatarPiecesCount
                        ((PlayerInfo *)psVar8,psVar9,0,*(undefined4 *)(psVar9 + 0x10),1);
            }
            goto LAB_043b95d0;
          }
        }
      }
      std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                ((move_iterator<Sexy::LeaderboardEntry*> *)&local_48);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BattleStatementUI::onADFinished(int) */

void BattleStatementUI::onADFinished(int param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  string sVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  ProfileMgr *pPVar6;
  PlayerInfo *this_00;
  long lVar7;
  string *psVar8;
  string *psVar9;
  FestivalManager *pFVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  NetworkMgr *pNVar13;
  INetworkMsgProcess *pIVar14;
  long lVar15;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 auStack_38 [6];
  long lStack_8;
  
  lVar15 = *(long *)(gLawnApp + 0x9f0);
  lStack_8 = ___stack_chk_guard;
  if (0 < *(int *)(lVar15 + 0x184)) {
    pPVar6 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar6);
    PlayerInfo::AddCoins(this_00,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0x184));
    lVar15 = *(long *)(gLawnApp + 0x9f0);
  }
  lVar7 = FUN_043b7774(*(undefined8 *)(lVar15 + 0x168),*(undefined8 *)(lVar15 + 0x170));
  if (lVar7 == 0) {
    onRewardAdded(param_1,0);
  }
  else {
    uStack_40 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(lVar15 + 0x168));
    auStack_38[0] =
         std::
         vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
         ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                *)(lVar15 + 0x168));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&uStack_40,(__normal_iterator *)auStack_38),
          bVar2) {
      lVar15 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_40);
      if (*(uint *)(lVar15 + 8) < 2) {
        *(undefined1 *)(lVar15 + 0x14) = 1;
      }
      std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                ((move_iterator<Sexy::LeaderboardEntry*> *)&uStack_40);
    }
    pPVar6 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    psVar8 = (string *)ProfileMgr::GetCurrentProfile(pPVar6);
    this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            *)(*(long *)(gLawnApp + 0x9f0) + 0x168);
    uStack_48 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(this);
    uStack_40 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&uStack_48,(__normal_iterator *)&uStack_40),
          bVar2) {
      psVar9 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_48);
      if (*(int *)(psVar9 + 8) == 0) {
        pFVar10 = (FestivalManager *)Sexy::LazySingleton<FestivalManager>::GetInstance();
        uVar11 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
        cVar3 = FestivalManager::IsFestivalLevel(pFVar10,uVar11,0xffffffff);
        if (cVar3 != '\0') {
          lVar15 = Sexy::LazySingleton<FestivalManager>::GetInstance();
          iVar4 = FUN_043b7760(*(undefined4 *)(lVar15 + 8));
          if (iVar4 - 1U < 2) {
            std::
            map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
            ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
                   *)auStack_38);
            puVar12 = (undefined4 *)
                      std::
                      map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                      ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                    *)auStack_38,psVar9);
            sVar1 = psVar9[0x14];
            *puVar12 = *(undefined4 *)(psVar9 + 0x10);
            Sexy::LazySingleton<FestivalManager>::GetInstance();
            uVar5 = FUN_043b7768(iVar4);
            pNVar13 = (NetworkMgr *)NetworkMgr::Instance();
            pIVar14 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(pNVar13);
            INetworkMsgProcess::ICloudRequestInstanceStatus
                      (pIVar14,uVar5,1,
                       (map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
                        *)auStack_38,2,sVar1);
            cVar3 = LawnApp::IsNetworkModuleOK();
            if (cVar3 != '\0') {
              PlayerInfo::AddPlantPieceCount
                        (psVar8,(int)psVar9,SUB41(*(undefined4 *)(psVar9 + 0x10),0));
            }
LAB_043b95d0:
            std::
            map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
            ::~map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                    *)auStack_38);
          }
        }
      }
      else if (*(int *)(psVar9 + 8) == 1) {
        pFVar10 = (FestivalManager *)Sexy::LazySingleton<FestivalManager>::GetInstance();
        uVar11 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
        cVar3 = FestivalManager::IsFestivalLevel(pFVar10,uVar11,0xffffffff);
        if (cVar3 != '\0') {
          lVar15 = Sexy::LazySingleton<FestivalManager>::GetInstance();
          iVar4 = FUN_043b7760(*(undefined4 *)(lVar15 + 8));
          if ((iVar4 == 3) || (iVar4 == 0)) {
            std::
            map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
            ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
                   *)auStack_38);
            puVar12 = (undefined4 *)
                      std::
                      map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                      ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                    *)auStack_38,psVar9);
            sVar1 = psVar9[0x14];
            *puVar12 = *(undefined4 *)(psVar9 + 0x10);
            Sexy::LazySingleton<FestivalManager>::GetInstance();
            uVar5 = FUN_043b7768(iVar4);
            pNVar13 = (NetworkMgr *)NetworkMgr::Instance();
            pIVar14 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(pNVar13);
            INetworkMsgProcess::ICloudRequestInstanceStatus
                      (pIVar14,uVar5,1,
                       (map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
                        *)auStack_38,3,sVar1);
            cVar3 = LawnApp::IsNetworkModuleOK();
            if (cVar3 != '\0') {
              PlayerInfo::AddAvatarPiecesCount
                        ((PlayerInfo *)psVar8,psVar9,0,*(undefined4 *)(psVar9 + 0x10),1);
            }
            goto LAB_043b95d0;
          }
        }
      }
      std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                ((move_iterator<Sexy::LeaderboardEntry*> *)&uStack_48);
    }
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BattleStatementUI::setupNormalDatas() */

void __thiscall BattleStatementUI::setupNormalDatas(BattleStatementUI *this)

{
  undefined4 uVar1;
  LawnApp *pLVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  ProfileMgr *this_00;
  PlayerInfo *pPVar10;
  undefined8 uVar11;
  string *psVar12;
  StatementData *pSVar13;
  StatementContent *pSVar14;
  int iVar15;
  code *pcVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  string asStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  string asStack_48 [8];
  RtWeakPtr aRStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  ResourceInfo *local_20;
  undefined4 local_18;
  undefined1 local_14;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar17 = (float)PVZ_T();
  fVar17 = fVar17 - *(float *)(*(long *)(gLawnApp + 0x9f0) + 0x114);
  lVar9 = Sexy::LazySingleton<FestivalManager>::GetInstance();
  iVar3 = FUN_043b7760(*(undefined4 *)(lVar9 + 8));
  if ((iVar3 == 3) || (iVar3 == 0)) {
    Sexy::StrFormat(L"%d",&local_20,(ulong)*(uint *)(*(long *)(gLawnApp + 0x9f0) + 400));
    FUN_054766c8(this + 0x108,&local_20);
    FUN_05476c50(&local_20);
    lVar9 = Sexy::LazySingleton<FestivalManager>::GetInstance();
    uVar8 = FUN_043b7764(*(undefined4 *)(lVar9 + 0xc));
    if (uVar8 < 3) {
      fVar18 = *(float *)(&DAT_05753830 + (ulong)uVar8 * 4);
      iVar3 = *(int *)(&DAT_05753840 + (ulong)uVar8 * 4);
      dVar20 = (double)iVar3;
      dVar21 = dVar20 * 0.6;
    }
    else {
      dVar21 = 7200.0;
      iVar3 = 12000;
      dVar20 = 12000.0;
      fVar18 = 5000.0;
    }
    iVar15 = (int)(((float)(*(int *)(*(long *)(gLawnApp + 0x9f0) + 400) * 1000) - fVar17 * 5.0) +
                  fVar18);
    *(int *)(this + 0x110) = iVar15;
  }
  else if (iVar3 == 1) {
    Sexy::StrFormat(L"%d",&local_20,(ulong)*(uint *)(*(long *)(gLawnApp + 0x9f0) + 0x194));
    FUN_054766c8(this + 0x108,&local_20);
    FUN_05476c50(&local_20);
    lVar9 = Sexy::LazySingleton<FestivalManager>::GetInstance();
    uVar8 = FUN_043b7764(*(undefined4 *)(lVar9 + 0xc));
    if (uVar8 < 3) {
      fVar18 = *(float *)(&DAT_05753800 + (ulong)uVar8 * 4);
      iVar3 = *(int *)(&DAT_05753810 + (ulong)uVar8 * 4);
      dVar20 = (double)iVar3;
      dVar21 = dVar20 * 0.6;
    }
    else {
      dVar21 = 7200.0;
      iVar3 = 12000;
      dVar20 = 12000.0;
      fVar18 = 5000.0;
    }
    iVar15 = (int)((fVar18 - fVar17 * 5.0) -
                  (float)(*(int *)(*(long *)(gLawnApp + 0x9f0) + 0x194) * 500));
    *(int *)(this + 0x110) = iVar15;
  }
  else if (iVar3 == 2) {
    Sexy::StrFormat(L"%d",&local_20,(ulong)*(uint *)(*(long *)(gLawnApp + 0x9f0) + 0x194));
    FUN_054766c8(this + 0x108,&local_20);
    FUN_05476c50(&local_20);
    lVar9 = Sexy::LazySingleton<FestivalManager>::GetInstance();
    uVar8 = FUN_043b7764(*(undefined4 *)(lVar9 + 0xc));
    if (uVar8 < 3) {
      fVar18 = *(float *)(&DAT_05753820 + (ulong)uVar8 * 4);
      iVar3 = *(int *)(&DAT_05753850 + (ulong)uVar8 * 4);
      dVar20 = (double)iVar3;
      dVar21 = dVar20 * 0.6;
    }
    else {
      dVar21 = 7200.0;
      iVar3 = 12000;
      dVar20 = 12000.0;
      fVar18 = 5000.0;
    }
    iVar15 = (int)((fVar18 - fVar18 * fVar17 * 0.0003) -
                  fVar18 * (float)*(int *)(*(long *)(gLawnApp + 0x9f0) + 0x194) * 0.005);
    *(int *)(this + 0x110) = iVar15;
  }
  else {
    iVar15 = *(int *)(this + 0x110);
    dVar21 = 7200.0;
    dVar20 = 12000.0;
    iVar3 = 12000;
  }
  if (iVar15 < 0) {
    *(undefined4 *)(this + 0x110) = 0;
  }
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar10 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar15 = *(int *)(this + 0x110);
  uVar11 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
  FUN_05475d88((string *)&local_20,uVar11);
  iVar4 = PlayerInfo::GetLevelScore(pPVar10,(string *)&local_20);
  std::string::~string((string *)&local_20);
  pLVar2 = gLawnApp;
  if (iVar4 < iVar15) {
    this[0x120] = (BattleStatementUI)0x1;
    uVar11 = Board::GetLevel(*(Board **)(pLVar2 + 0x9f0));
    FUN_05475d88((string *)&local_20,uVar11);
    PlayerInfo::SetLevelMaxScore(pPVar10,(string *)&local_20,*(undefined4 *)(this + 0x110));
    std::string::~string((string *)&local_20);
  }
  dVar19 = (double)*(int *)(this + 0x110);
  if (dVar21 <= dVar19) {
    if (dVar20 * 0.75 <= dVar19) {
      if (dVar19 < dVar20 * 0.9) {
        *(undefined4 *)(this + 0x124) = 2;
      }
      else if (*(int *)(this + 0x110) < iVar3) {
        *(undefined4 *)(this + 0x124) = 1;
      }
      else {
        *(undefined4 *)(this + 0x124) = 0;
      }
    }
    else {
      *(undefined4 *)(this + 0x124) = 3;
    }
  }
  else {
    *(undefined4 *)(this + 0x124) = 4;
  }
  *(undefined4 *)(this + 0x114) = 0;
  Sexy::StrFormat(L"--",(string *)&local_20);
  FUN_054766c8(this + 0xf8,(string *)&local_20);
  FUN_05476c50((string *)&local_20);
  Sexy::StrFormat(L"%.2d:%.2d:%.2d",(string *)&local_20,(ulong)(uint)(int)(fVar17 * 0.00027777778),
                  (ulong)(uint)(int)(fVar17 * 0.016666668),
                  (ulong)(uint)(int)((fVar17 - (float)((int)(fVar17 * 0.016666668) * 0x3c)) -
                                    (float)((int)(fVar17 * 0.00027777778) * 0xe10)));
  FUN_054766c8(this + 0x100,(string *)&local_20);
  FUN_05476c50((string *)&local_20);
  Sexy::StrFormat(L"%d",(string *)&local_20,(ulong)*(uint *)(this + 0x114));
  FUN_054766c8(this + 0xf0,(string *)&local_20);
  FUN_05476c50((string *)&local_20);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  std::vector<StatementData,std::allocator<StatementData>>::clear
            ((vector<StatementData,std::allocator<StatementData>> *)&local_38);
  lVar9 = *(long *)(gLawnApp + 0x9f0);
  if (0 < *(int *)(lVar9 + 0x184)) {
    StatementData::StatementData((StatementData *)&local_20);
    local_18 = *(undefined4 *)(*(long *)(gLawnApp + 0x9f0) + 0x184);
    local_20 = (ResourceInfo *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b031c0);
    local_14 = 1;
    std::vector<StatementData,std::allocator<StatementData>>::push_back
              ((vector<StatementData,std::allocator<StatementData>> *)&local_38,
               (StatementData *)&local_20);
    GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData
              ((GridItemCardGameZombieActionData *)&local_20);
    lVar9 = *(long *)(gLawnApp + 0x9f0);
  }
  lVar9 = FUN_043b7774(*(undefined8 *)(lVar9 + 0x168),*(undefined8 *)(lVar9 + 0x170));
  if (lVar9 != 0) {
    StatementData::StatementData((StatementData *)&local_20);
    lVar9 = FUN_043b7818(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0x168));
    local_18 = *(undefined4 *)(lVar9 + 0x10);
    local_14 = 0;
    FUN_05475d88(asStack_58,lVar9);
    psVar12 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar12);
    std::string::string(asStack_48,"");
    nop();
    lVar9 = FUN_043b7818(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0x168));
    if (*(int *)(lVar9 + 8) == 0) {
      lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
      thunk_FUN_05475e00(asStack_48,lVar9 + 0x40);
      thunk_FUN_05475e00(auStack_10,asStack_58);
    }
    else if (*(int *)(lVar9 + 8) == 1) {
      lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
      thunk_FUN_05475e00(asStack_48,lVar9 + 0x48);
    }
    lVar9 = FUN_05474178(asStack_48);
    if ((lVar9 != 0) &&
       (lVar9 = LawnApp::GetUIImageInfoFromStringId(gLawnApp,asStack_48), lVar9 != 0)) {
      Sexy::ResourceInfoTypes::FontRes::GetFont();
      local_20 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    }
    std::vector<StatementData,std::allocator<StatementData>>::push_back
              ((vector<StatementData,std::allocator<StatementData>> *)&local_38,
               (StatementData *)&local_20);
    std::string::~string(asStack_48);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
    std::string::~string(asStack_58);
    GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData
              ((GridItemCardGameZombieActionData *)&local_20);
  }
  uVar11 = local_38;
  lVar9 = FUN_043b7788(local_38,local_30);
  if (lVar9 == 1) {
    pSVar13 = (StatementData *)FUN_043b779c(uVar11,0);
    StatementData::StatementData((StatementData *)&local_20,pSVar13);
    pSVar14 = ::operator_new(0xf8);
    StatementContent::StatementContent(pSVar14,(string *)&local_20);
    GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData
              ((GridItemCardGameZombieActionData *)&local_20);
    iVar3 = *(int *)(this + 0xe0);
    iVar15 = *(int *)(this + 0xe8);
    pcVar16 = *(code **)(*(long *)pSVar14 + 0x198);
    lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03170);
    iVar4 = *(int *)(lVar9 + 0x38);
    iVar5 = FUN_043b7974(0xea);
    iVar7 = *(int *)(this + 0xe4);
    lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03170);
    uVar1 = *(undefined4 *)(lVar9 + 0x38);
    lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03170);
    (*pcVar16)(pSVar14,(iVar3 + iVar15 / 2) - iVar4 / 2,iVar5 + iVar7,uVar1,
               *(undefined4 *)(lVar9 + 0x3c));
    (**(code **)(*(long *)this + 0x60))(this,pSVar14);
  }
  else if (lVar9 == 2) {
    pSVar13 = (StatementData *)FUN_043b779c(uVar11,0);
    StatementData::StatementData((StatementData *)&local_20,pSVar13);
    pSVar14 = ::operator_new(0xf8);
    StatementContent::StatementContent(pSVar14,(string *)&local_20);
    GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData
              ((GridItemCardGameZombieActionData *)&local_20);
    iVar3 = *(int *)(this + 0xe0);
    iVar15 = *(int *)(this + 0xe8);
    pcVar16 = *(code **)(*(long *)pSVar14 + 0x198);
    lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03170);
    iVar4 = *(int *)(lVar9 + 0x38);
    iVar5 = FUN_043b7974(10);
    iVar6 = FUN_043b7974(0xea);
    iVar7 = *(int *)(this + 0xe4);
    lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03170);
    uVar1 = *(undefined4 *)(lVar9 + 0x38);
    lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03170);
    (*pcVar16)(pSVar14,((iVar3 + iVar15 / 2) - iVar4) - iVar5,iVar6 + iVar7,uVar1,
               *(undefined4 *)(lVar9 + 0x3c));
    (**(code **)(*(long *)this + 0x60))(this,pSVar14);
    pSVar13 = (StatementData *)FUN_043b779c(local_38,1);
    StatementData::StatementData((StatementData *)&local_20,pSVar13);
    pSVar14 = ::operator_new(0xf8);
    StatementContent::StatementContent(pSVar14,(string *)&local_20);
    GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData
              ((GridItemCardGameZombieActionData *)&local_20);
    iVar3 = *(int *)(this + 0xe0);
    iVar15 = *(int *)(this + 0xe8);
    pcVar16 = *(code **)(*(long *)pSVar14 + 0x198);
    iVar7 = FUN_043b7974(10);
    iVar5 = FUN_043b7974(0xea);
    iVar4 = *(int *)(this + 0xe4);
    lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03170);
    uVar1 = *(undefined4 *)(lVar9 + 0x38);
    lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03170);
    (*pcVar16)(pSVar14,iVar3 + iVar15 / 2 + iVar7,iVar5 + iVar4,uVar1,*(undefined4 *)(lVar9 + 0x3c))
    ;
    (**(code **)(*(long *)this + 0x60))(this,pSVar14);
  }
  std::vector<StatementData,std::allocator<StatementData>>::~vector
            ((vector<StatementData,std::allocator<StatementData>> *)&local_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* BattleStatementUI::SetupDatas() */

void __thiscall BattleStatementUI::SetupDatas(BattleStatementUI *this)

{
  if (*(int *)(this + 0x128) == 0) {
    setupNormalDatas(this);
    return;
  }
  if (*(int *)(this + 0x128) != 1) {
    return;
  }
  nop();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BattleStatementUI::SetupAdvertisement() */

void __thiscall BattleStatementUI::SetupAdvertisement(BattleStatementUI *this)

{
  char cVar1;
  long *plVar2;
  ProfileMgr *this_00;
  TGALogMgr *pTVar3;
  char *__s;
  code *pcVar4;
  undefined1 auStack_80 [8];
  string asStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [16];
  vector<std::string,std::allocator<std::string>> avStack_50 [24];
  Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason> aDStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = IsAdvertisementEnable();
  if (cVar1 != '\0') {
    plVar2 = (long *)EASquared::Instance();
    pcVar4 = *(code **)(*plVar2 + 0x28);
    std::string::string(asStack_60,"BattleStatementUI");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onAdsFinish);
    Sexy::Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason>::
    Delegate1<BattleStatementUI,void(BattleStatementUI::*)(EASquaredAdFinishedReason::EASquaredAdFinishedReason)>
              (aDStack_38,avStack_50);
    (*pcVar4)(plVar2,asStack_60,aDStack_38,1,2,0x3e);
    std::string::~string(asStack_60);
    nop();
    Sexy::OutputDebugStrF((wchar_t *)"ShowBanner(BANNER_AD_BATTLE_STATEMENT)");
    std::string::string(asStack_70,"2019_SUMMER");
    std::string::string((string *)aDStack_38,"AD_SHOW");
    FUN_05475d88(asStack_30,*(long *)(gLawnApp + 0x9f0) + 0x108);
    DString::DString((DString *)asStack_60,0x3e);
    DString::operator_cast_to_string((DString *)asStack_60);
    std::vector<std::string,std::allocator<std::string>>::vector(avStack_50,aDStack_38,3,auStack_80)
    ;
    std::string::string(asStack_68,"");
    BehaviorLog::inGameBehavior(asStack_70,(vector *)avStack_50,asStack_68);
    std::string::~string(asStack_68);
    nop();
    std::vector<std::string,std::allocator<std::string>>::~vector(avStack_50);
    std::string::~string(asStack_28);
    std::string::~string(asStack_30);
    std::string::~string((string *)aDStack_38);
    DString::~DString((DString *)asStack_60);
    nop();
    std::string::~string(asStack_70);
    nop();
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::GetCurrentProfile(this_00);
    PlantAnimRig_HoyaCordata::getIdleAnimationName();
    DString::DString((DString *)avStack_50,asStack_60);
    std::string::~string(asStack_60);
    pTVar3 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    std::string::string(asStack_78,"1");
    __s = (char *)DString::c_str((DString *)avStack_50);
    std::string::string(asStack_70,__s);
    std::string::string(asStack_68,"");
    std::string::string(asStack_60,"");
    TGALogMgr::LogAD(pTVar3,asStack_78,asStack_70,0x3e,asStack_68,asStack_60);
    std::string::~string(asStack_60);
    nop();
    std::string::~string(asStack_68);
    nop();
    std::string::~string(asStack_70);
    nop();
    std::string::~string(asStack_78);
    nop();
    DString::~DString((DString *)avStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BattleStatementUI::BattleStatementUI(BattleStatementUI::AccountUIType) */

void __thiscall BattleStatementUI::BattleStatementUI(BattleStatementUI *this,undefined4 param_2)

{
  undefined *puVar1;
  LawnApp *this_00;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06842c60;
  *(undefined **)(this + 0xd8) = &DAT_06842f90;
  Sexy::Insets::Insets((Insets *)(this + 0xe0));
  FUN_05476574(this + 0xf0);
  FUN_05476574(this + 0xf8);
  FUN_05476574(this + 0x100);
  FUN_05476574(this + 0x108);
  this[0x118] = (BattleStatementUI)0x0;
  *(undefined4 *)(this + 0x128) = param_2;
  *(undefined4 *)(this + 0x124) = 4;
  this[0x120] = (BattleStatementUI)0x0;
  this_00 = gLawnApp;
  std::string::string((string *)&local_20,"UI_Battlestatement");
  LawnApp::LoadGroup(this_00,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  iVar2 = FUN_043b7974(0);
  Sexy::Widget::Resize
            ((Widget *)this,iVar2,iVar2,*(int *)(gLawnApp + 0xd4),*(int *)(gLawnApp + 0xd8));
  lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b030c8);
  iVar2 = *(int *)(lVar5 + 0x38);
  iVar3 = FUN_043b7974(0x172);
  iVar4 = FUN_043b7974(0x78);
  Sexy::Insets::Insets
            ((Insets *)&local_20,(int)(((float)*(int *)(this + 0x50) - (float)iVar2) * 0.5),iVar4,
             (int)(float)iVar2,(int)(float)iVar3);
  *(undefined8 *)(this + 0xe0) = local_20;
  *(undefined8 *)(this + 0xe8) = uStack_18;
  CreateButton(this);
  SetupDatas(this);
  SetupAdvertisement(this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onADFinished);
  local_50 = local_28;
  local_60 = local_38;
  uStack_58 = uStack_30;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<BattleStatementUI,void(BattleStatementUI::*)(int)>>
            ((MessageRouter *)puVar1,Message::NotifyADWatchFinish,&local_60);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRewardAdded);
  local_80 = local_20;
  uStack_78 = uStack_18;
  local_70 = local_10;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<BattleStatementUI,void(BattleStatementUI::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::FestivalGameMode_CountChange,&local_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BattleStatementUI::onAdsFinish(EASquaredAdFinishedReason::EASquaredAdFinishedReason) */

void __thiscall BattleStatementUI::onAdsFinish(undefined8 param_1,int param_2)

{
  long *plVar1;
  ProfileMgr *pPVar2;
  char *pcVar3;
  TGALogMgr *local_70;
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::OutputDebugStrF((wchar_t *)"BattleStatementUI::onAdsFinish %d");
  if (param_2 == 0) {
    plVar1 = (long *)EASquared::Instance();
    (**(code **)(*plVar1 + 0x40))(plVar1,0x3e);
    pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::GetCurrentProfile(pPVar2);
    PlantAnimRig_HoyaCordata::getIdleAnimationName();
    DString::DString(aDStack_18,asStack_20);
    std::string::~string(asStack_20);
    local_70 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    pcVar3 = "2";
  }
  else {
    plVar1 = (long *)EASquared::Instance();
    (**(code **)(*plVar1 + 0x40))(plVar1,0x3e);
    pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::GetCurrentProfile(pPVar2);
    PlantAnimRig_HoyaCordata::getIdleAnimationName();
    DString::DString(aDStack_18,asStack_20);
    std::string::~string(asStack_20);
    local_70 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    pcVar3 = "4";
  }
  std::string::string(asStack_38,pcVar3);
  pcVar3 = (char *)DString::c_str(aDStack_18);
  std::string::string(asStack_30,pcVar3);
  std::string::string(asStack_28,"");
  std::string::string(asStack_20,"");
  TGALogMgr::LogAD(local_70,asStack_38,asStack_30,0x3e,asStack_28,asStack_20);
  std::string::~string(asStack_20);
  nop();
  std::string::~string(asStack_28);
  nop();
  std::string::~string(asStack_30);
  nop();
  std::string::~string(asStack_38);
  nop();
  DString::~DString(aDStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

