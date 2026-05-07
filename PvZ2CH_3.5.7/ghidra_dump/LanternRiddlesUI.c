// Class: LanternRiddlesUI


/* LanternRiddlesUI::OnCheatSuccess(bool const&) */

void __thiscall LanternRiddlesUI::OnCheatSuccess(LanternRiddlesUI *this,bool *param_1)

{
  if (*param_1 == false) {
    LawnApp::ShowGemStoreConfirm(gLawnApp,2,1);
    return;
  }
  (**(code **)(**(long **)(this + 0x188) + 0x188))(*(long **)(this + 0x188),1);
  this[0x168] = (LanternRiddlesUI)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LanternRiddlesUI::createRiddle(int) */

void __thiscall LanternRiddlesUI::createRiddle(LanternRiddlesUI *this,int param_1)

{
  wstring *pwVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  PVZ2UIButton *pPVar8;
  undefined8 uVar9;
  LanternRiddlesUI *pLVar10;
  wstring *pwVar11;
  long *plVar12;
  long lVar13;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  wstring awStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  wstring awStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat(L"[LANTERN_RIDDLES_%d]",awStack_78,(ulong)(uint)param_1);
  TodStringTranslate(awStack_78);
  FUN_054766c8(this + 0x170,awStack_40);
  FUN_05476c50(awStack_40);
  FUN_05476c50(awStack_78);
  Sexy::StrFormat(L"[LANTERN_RIDDLES_NUM_%d]",awStack_78,(ulong)*(uint *)(this + 0x164));
  TodStringTranslate(awStack_78);
  FUN_054766c8(this + 0x178,awStack_40);
  FUN_05476c50(awStack_40);
  FUN_05476c50(awStack_78);
  Sexy::StrFormat(L"[LANTERN_RIDDLES_ANSWER_%d]",awStack_40,(ulong)(uint)param_1);
  TodStringTranslate(awStack_40);
  FUN_05476c50(awStack_40);
  pLVar10 = this + 400;
  do {
    if (*(long *)pLVar10 != 0) {
      (**(code **)(*(long *)this + 0x68))(this);
      if (*(long **)pLVar10 != (long *)0x0) {
        (**(code **)(**(long **)pLVar10 + 0x18))();
      }
      *(undefined8 *)pLVar10 = 0;
    }
    pLVar10 = pLVar10 + 8;
  } while (pLVar10 != this + 0x1b0);
  pwVar11 = awStack_98;
  do {
    pwVar1 = pwVar11 + 8;
    FUN_05476574(pwVar11);
    pwVar11 = pwVar1;
  } while (pwVar1 != awStack_78);
  iVar3 = 0;
  lVar13 = 0;
  pwVar11 = awStack_98;
  do {
    lVar6 = FUN_054767dc(auStack_a8,&DAT_0570f650,lVar13);
    if (lVar6 == -1) {
      lVar6 = FUN_054765c4(auStack_a8);
      FUN_05477da4(awStack_40,auStack_a8,lVar13,lVar6 - lVar13);
      FUN_054766c8(awStack_98 + (long)iVar3 * 8,awStack_40);
      FUN_05476c50(awStack_40);
      break;
    }
    iVar3 = iVar3 + 1;
    FUN_05477da4(awStack_40,auStack_a8,lVar13,lVar6 - lVar13);
    FUN_054766c8(pwVar11,awStack_40);
    FUN_05476c50(awStack_40);
    lVar13 = lVar6 + 1;
    pwVar11 = pwVar11 + 8;
  } while (iVar3 != 4);
  lVar13 = 0;
  uVar7 = time((time_t *)0x0);
  Sexy::SRand(uVar7);
  iVar2 = Sexy::Rand(4);
  iVar3 = FUN_041b3cec(0x118);
  pLVar10 = this + 400;
  do {
    iVar4 = (int)lVar13;
    FUN_05478178(awStack_78,&DAT_056f11a8,auStack_a0);
    Sexy::Color::Color((Color *)awStack_40,1);
    pPVar8 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar8,iVar4,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)awStack_40);
    *(PVZ2UIButton **)pLVar10 = pPVar8;
    FUN_05476c50(awStack_78);
    nop();
    pwVar11 = awStack_98 + (long)((iVar2 + iVar4) % 4) * 8;
    lVar6 = FUN_054767dc(pwVar11,&DAT_0570f660,0);
    if (lVar6 != -1) {
      *(int *)(this + 0x160) = iVar4;
      uVar9 = FUN_054765c4(pwVar11);
      FUN_05477da4(awStack_40,pwVar11,3,uVar9);
      FUN_054766c8(pwVar11,awStack_40);
      FUN_05476c50(awStack_40);
    }
    lVar13 = lVar13 + 1;
    FUN_05476574(auStack_a0);
    FUN_054779f4(auStack_a0,iVar4 + 0x41);
    FUN_05477888(auStack_a0,&DAT_0570f670);
    thunk_FUN_05477668(auStack_a0,pwVar11);
    plVar12 = *(long **)pLVar10;
    iVar4 = FUN_041b3cec(0xd2);
    uVar5 = FUN_041b3cec(0x2d);
    (**(code **)(*plVar12 + 0x198))(plVar12,(*(int *)(this + 0x50) - iVar4) / 2,iVar3,iVar4,uVar5);
    pPVar8 = *(PVZ2UIButton **)pLVar10;
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06af0470,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_40,&DAT_06af0628,3);
    PVZ2UIButton::SetDialogStates(pPVar8,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)awStack_40);
    pPVar8 = *(PVZ2UIButton **)pLVar10;
    uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline)
    ;
    PVZ2UIButton::AddText(pPVar8,auStack_a0,uVar9,0);
    PVZ2UIButton::SetTextJustification(*(PVZ2UIButton **)pLVar10,0);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)pLVar10);
    iVar4 = FUN_041b3cec(0x32);
    iVar3 = iVar3 + iVar4;
    FUN_05476c50(auStack_a0);
    pLVar10 = pLVar10 + 8;
  } while (lVar13 != 4);
  FUN_05476c50(auStack_80);
  FUN_05476c50(auStack_88);
  FUN_05476c50(auStack_90);
  FUN_05476c50(awStack_98);
  FUN_05476c50(auStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LanternRiddlesUI::OnRefreshLanternUIState() */

void __thiscall LanternRiddlesUI::OnRefreshLanternUIState(LanternRiddlesUI *this)

{
  undefined4 uVar1;
  ProfileMgr *this_00;
  long lVar2;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar2 = ProfileMgr::GetCurrentProfile(this_00);
  uVar1 = FUN_041b3944(*(undefined4 *)(lVar2 + 0xf60));
  *(undefined4 *)(this + 0x124) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LanternRiddlesUI::SetState(LanternUIState) */

void __thiscall LanternRiddlesUI::SetState(LanternRiddlesUI *this,undefined4 param_2)

{
  wstring *pwVar1;
  ProfileMgr *this_00;
  int *piVar2;
  long *plVar3;
  LanternRiddlesUI *pLVar4;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  *(undefined4 *)(this + 0xfc) = *(undefined4 *)(this + 0xf8);
  *(undefined4 *)(this + 0xf8) = param_2;
  switch(param_2) {
  case 0:
    pLVar4 = this + 400;
    do {
      plVar3 = *(long **)pLVar4;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x158))(plVar3,0);
      }
      pLVar4 = pLVar4 + 8;
    } while (pLVar4 != this + 0x1b0);
    (**(code **)(**(long **)(this + 0x140) + 0x158))(*(long **)(this + 0x140),1);
    (**(code **)(**(long **)(this + 0x180) + 0x158))(*(long **)(this + 0x180),0);
    (**(code **)(**(long **)(this + 0x188) + 0x158))(*(long **)(this + 0x188),0);
    (**(code **)(**(long **)(this + 0x1e8) + 0x158))(*(long **)(this + 0x1e8),0);
    (**(code **)(**(long **)(this + 0xe8) + 0x158))(*(long **)(this + 0xe8),1);
    (**(code **)(**(long **)(this + 0x1f8) + 0x158))(*(long **)(this + 0x1f8),0);
    (**(code **)(**(long **)(this + 0xf0) + 0x158))(*(long **)(this + 0xf0),0);
    (**(code **)(**(long **)(this + 0x208) + 0x158))(*(long **)(this + 0x208),1);
    (**(code **)(**(long **)(this + 0x210) + 0x158))(*(long **)(this + 0x210),1);
    (**(code **)(**(long **)(this + 0x218) + 0x158))(*(long **)(this + 0x218),0);
    StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x220),false);
    break;
  case 1:
    (**(code **)(**(long **)(this + 0x140) + 0x158))(*(long **)(this + 0x140),0);
    (**(code **)(**(long **)(this + 0x180) + 0x158))(*(long **)(this + 0x180),1);
    (**(code **)(**(long **)(this + 0x180) + 0x188))(*(long **)(this + 0x180),1);
    (**(code **)(**(long **)(this + 0x188) + 0x158))(*(long **)(this + 0x188),0);
    (**(code **)(**(long **)(this + 0x1e8) + 0x158))(*(long **)(this + 0x1e8),0);
    (**(code **)(**(long **)(this + 0xe8) + 0x158))(*(long **)(this + 0xe8),0);
    (**(code **)(**(long **)(this + 0x1f8) + 0x158))(*(long **)(this + 0x1f8),0);
    (**(code **)(**(long **)(this + 0xf0) + 0x158))(*(long **)(this + 0xf0),0);
    (**(code **)(**(long **)(this + 0x208) + 0x158))(*(long **)(this + 0x208),0);
    (**(code **)(**(long **)(this + 0x210) + 0x158))(*(long **)(this + 0x210),0);
    (**(code **)(**(long **)(this + 0x218) + 0x158))(*(long **)(this + 0x218),0);
    StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x220),false);
    piVar2 = (int *)FUN_041b3b18(*(undefined8 *)(this + 0x148),(long)*(int *)(this + 0x164));
    createRiddle(this,*piVar2);
    break;
  case 2:
    pLVar4 = this + 400;
    (**(code **)(**(long **)(this + 0x140) + 0x158))(*(long **)(this + 0x140),0);
    (**(code **)(**(long **)(this + 0x180) + 0x158))(*(long **)(this + 0x180),0);
    (**(code **)(**(long **)(this + 0x188) + 0x158))(*(long **)(this + 0x188),0);
    (**(code **)(**(long **)(this + 0x1e8) + 0x158))(*(long **)(this + 0x1e8),0);
    (**(code **)(**(long **)(this + 0xe8) + 0x158))(*(long **)(this + 0xe8),1);
    (**(code **)(**(long **)(this + 0x1f8) + 0x158))(*(long **)(this + 0x1f8),0);
    (**(code **)(**(long **)(this + 0xf0) + 0x158))(*(long **)(this + 0xf0),0);
    (**(code **)(**(long **)(this + 0x208) + 0x158))(*(long **)(this + 0x208),1);
    (**(code **)(**(long **)(this + 0x210) + 0x158))(*(long **)(this + 0x210),1);
    (**(code **)(**(long **)(this + 0x218) + 0x158))(*(long **)(this + 0x218),0);
    StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x220),false);
    do {
      if (*(long *)pLVar4 != 0) {
        (**(code **)(*(long *)this + 0x68))(this);
        if (*(long **)pLVar4 != (long *)0x0) {
          (**(code **)(**(long **)pLVar4 + 0x18))();
        }
        *(undefined8 *)pLVar4 = 0;
      }
      pLVar4 = pLVar4 + 8;
    } while (pLVar4 != this + 0x1b0);
    pwVar1 = (wstring *)(this + 0x1d8);
    TodStringTranslate(L"[LANTERN_RIDDLES_RESULT]");
    FUN_054766c8(pwVar1,auStack_10);
    FUN_05476c50(auStack_10);
    TodReplaceNumberString(pwVar1,L"{CORRECT_COUNT}",*(int *)(this + 0x16c));
    FUN_054766c8(pwVar1,auStack_10);
    FUN_05476c50(auStack_10);
    TodReplaceNumberString(pwVar1,L"{WRONG_COUNT}",5 - *(int *)(this + 0x16c));
    FUN_054766c8(pwVar1,auStack_10);
    FUN_05476c50(auStack_10);
    TodReplaceNumberString(pwVar1,L"{REDPACK_COUNT}",*(int *)(this + 0x1e0));
    FUN_054766c8(pwVar1,auStack_10);
    FUN_05476c50(auStack_10);
    break;
  case 3:
    (**(code **)(**(long **)(this + 0x140) + 0x158))(*(long **)(this + 0x140),0);
    (**(code **)(**(long **)(this + 0x180) + 0x158))(*(long **)(this + 0x180),0);
    (**(code **)(**(long **)(this + 0x188) + 0x158))(*(long **)(this + 0x188),0);
    (**(code **)(**(long **)(this + 0x1e8) + 0x158))(*(long **)(this + 0x1e8),0);
    (**(code **)(**(long **)(this + 0xe8) + 0x158))(*(long **)(this + 0xe8),0);
    (**(code **)(**(long **)(this + 0x1f8) + 0x158))(*(long **)(this + 0x1f8),1);
    (**(code **)(**(long **)(this + 0xf0) + 0x158))(*(long **)(this + 0xf0),0);
    (**(code **)(**(long **)(this + 0x208) + 0x158))(*(long **)(this + 0x208),0);
    (**(code **)(**(long **)(this + 0x210) + 0x158))(*(long **)(this + 0x210),0);
    (**(code **)(**(long **)(this + 0x218) + 0x158))(*(long **)(this + 0x218),1);
    StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x220),true);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* LanternRiddlesUI::~LanternRiddlesUI() */

void __thiscall LanternRiddlesUI::~LanternRiddlesUI(LanternRiddlesUI *this)

{
  long *plVar1;
  
  *(undefined ***)this = &PTR_GetClass_067ff2a0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_067ff5d8;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  if (*(long **)(this + 0x1b0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1b0) + 0x18))();
    *(undefined8 *)(this + 0x1b0) = 0;
  }
  if (*(long **)(this + 0x1b8) == (long *)0x0) {
    plVar1 = *(long **)(this + 0x1c0);
  }
  else {
    (**(code **)(**(long **)(this + 0x1b8) + 0x18))();
    *(undefined8 *)(this + 0x1b8) = 0;
    plVar1 = *(long **)(this + 0x1c0);
  }
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
    *(undefined8 *)(this + 0x1c0) = 0;
  }
  if (*(long **)(this + 0x130) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x130) + 0x18))();
    *(undefined8 *)(this + 0x130) = 0;
  }
  if (*(long **)(this + 0x220) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x220) + 0x18))();
    *(undefined8 *)(this + 0x220) = 0;
  }
  FUN_05476c50(this + 0x1d8);
  std::string::~string((string *)(this + 0x1c8));
  FUN_05476c50(this + 0x178);
  FUN_05476c50(this + 0x170);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x148));
  FUN_05476c50(this + 0x138);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LanternRiddlesUI::~LanternRiddlesUI() */

void __thiscall LanternRiddlesUI::~LanternRiddlesUI(LanternRiddlesUI *this)

{
  ~LanternRiddlesUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LanternRiddlesUI::DrawPrizePool(Sexy::Graphics*) */

void __thiscall LanternRiddlesUI::DrawPrizePool(LanternRiddlesUI *this,Graphics *param_1)

{
  long lVar1;
  LanternRiddlesUI LVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ProfileMgr *this_00;
  long lVar10;
  undefined8 uVar11;
  Image *pIVar12;
  long lVar13;
  LotteryResultProgressBar *this_01;
  SalesProgressBar *this_02;
  PrimeTypeface *pPVar14;
  int *piVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  wstring awStack_50 [8];
  wstring awStack_48 [8];
  undefined1 auStack_40 [8];
  int local_38 [2];
  int local_30;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  iVar9 = 0;
  lVar10 = ProfileMgr::GetCurrentProfile(this_00);
  iVar3 = FUN_041b3cec(0x226);
  iVar4 = FUN_041b3cec(0x195);
  iVar5 = FUN_041b3cec(100);
  Sexy::Insets::Insets((Insets *)local_38,(*(int *)(this + 0x50) - iVar3) / 2,iVar4,iVar3,iVar5);
  Sexy::Insets::Insets(aIStack_18,(Insets *)local_38);
  uVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af05d0);
  Draw9SliceImage(param_1,aIStack_18,uVar11);
  iVar3 = local_38[0];
  iVar4 = FUN_041b3cec(10);
  iVar3 = iVar3 + iVar4;
  pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0740);
  iVar4 = FUN_041b3cec(0x1bd);
  Sexy::Graphics::DrawImage(param_1,pIVar12,iVar3,iVar4);
  uVar11 = DAT_06af0700;
  lVar13 = FUN_041b3984(DAT_06af0700,DAT_06af0708);
  lVar17 = 0;
  while (lVar17 != lVar13) {
    lVar1 = lVar17 + 1;
    piVar15 = (int *)FUN_041b3b18(uVar11,lVar17);
    lVar17 = lVar1;
    if (*piVar15 <= *(int *)(this + 0x124)) {
      iVar9 = iVar9 + 1;
    }
  }
  pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af01e8);
  iVar4 = FUN_041b3cec(7);
  iVar5 = FUN_041b3cec(0x1bd);
  iVar6 = FUN_041b3cec(5);
  this_01 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af01e8);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(this_01);
  this_02 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af01e8);
  iVar8 = SalesProgressBar::GetCurrentLevel(this_02);
  Sexy::Graphics::DrawImage(param_1,pIVar12,iVar4 + iVar3,iVar5 + iVar6,(iVar7 / 5) * iVar9,iVar8);
  iVar4 = FUN_041b395c(*(undefined4 *)(lVar10 + 0xf68));
  iVar9 = *(int *)(this + 0x124);
  if (iVar9 < 1) {
    iVar4 = 0;
  }
  else {
    iVar4 = (int)(((float)iVar4 * 100.0) / (float)(iVar9 * 5));
  }
  LVar2 = this[0x100];
  iVar5 = *(int *)(this + 0x128);
  TodStringTranslate(L"[LANTERN_RIDDLES_TOTAL]");
  TodReplaceNumberString(awStack_50,L"{DAY_GUESS}",*(int *)(this + 0x124));
  FUN_054766c8(awStack_50,aIStack_18);
  FUN_05476c50(aIStack_18);
  TodReplaceNumberString(awStack_50,L"{CORRECT_COUNT}",iVar4);
  FUN_054766c8(awStack_50,aIStack_18);
  FUN_05476c50(aIStack_18);
  TodReplaceNumberString
            (awStack_50,L"{DAY_MISSED}",(iVar5 - iVar9) - (uint)(LVar2 != (LanternRiddlesUI)0x0));
  FUN_054766c8(awStack_50,aIStack_18);
  FUN_05476c50(aIStack_18);
  pPVar14 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  iVar9 = FUN_041b3cec(0x3c);
  iVar4 = FUN_041b3cec(0x1db);
  iVar5 = FUN_041b3cec(0x32);
  Sexy::Insets::Insets(aIStack_28,iVar9 + iVar3,iVar4,local_30,iVar5);
  FUN_05477b24(auStack_40,awStack_50);
  Sexy::Color::Color((Color *)aIStack_18,0);
  Sexy::PrimeTypeface::DrawString_Paragraph(pPVar14,param_1,aIStack_28,auStack_40,0,0,aIStack_18,0);
  FUN_05476c50(auStack_40);
  iVar3 = FUN_041b3cec(0x3c);
  iVar3 = local_38[0] + iVar3;
  uVar18 = 0;
  while( true ) {
    uVar16 = FUN_041b3984(DAT_06af0700,DAT_06af0708);
    if (uVar16 <= uVar18) break;
    TodStringTranslate(L"[LANTERN_RIDDLES_DAY]");
    piVar15 = (int *)FUN_041b3b18(DAT_06af0700,uVar18);
    TodReplaceNumberString(awStack_48,L"{DAY}",*piVar15);
    FUN_054766c8(awStack_48,aIStack_18);
    FUN_05476c50(aIStack_18);
    pPVar14 = (PrimeTypeface *)
              PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    iVar9 = FUN_041b3cec(0x1a4);
    iVar4 = FUN_041b3cec(0x4e);
    iVar5 = FUN_041b3cec(0x32);
    Sexy::Insets::Insets(aIStack_28,iVar3,iVar9,iVar4,iVar5);
    FUN_05477b24(auStack_40,awStack_48);
    Sexy::Color::Color((Color *)aIStack_18,0);
    Sexy::PrimeTypeface::DrawString_Paragraph
              (pPVar14,param_1,aIStack_28,auStack_40,0,0,aIStack_18,0);
    FUN_05476c50(auStack_40);
    iVar9 = FUN_041b3cec(0x4e);
    iVar3 = iVar3 + iVar9;
    FUN_05476c50(awStack_48);
    uVar18 = uVar18 + 1;
  }
  FUN_05476c50(awStack_50);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LanternRiddlesUI::DrawMainState(Sexy::Graphics*) */

void __thiscall LanternRiddlesUI::DrawMainState(LanternRiddlesUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ProfileMgr *this_00;
  Image *pIVar4;
  undefined8 uVar5;
  LotteryResultProgressBar *this_01;
  undefined1 auStack_58 [8];
  Insets aIStack_50 [16];
  Color aCStack_40 [16];
  Insets aIStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  DrawPrizePool(this,param_1);
  iVar2 = *(int *)(this + 0x110);
  iVar1 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  Sexy::Insets::Insets
            (aIStack_50,*(int *)(this + 0x104),*(int *)(this + 0x108) + (iVar1 >> 2),
             *(int *)(this + 0x10c),iVar2 / 2);
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af04c0);
  Sexy::Graphics::DrawImage
            (param_1,pIVar4,*(int *)(this + 0x104),*(int *)(this + 0x108),*(int *)(this + 0x10c),
             *(int *)(this + 0x110));
  Sexy::Insets::Insets(aIStack_30,aIStack_50);
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af09b0);
  Draw3SliceImage(param_1,aIStack_30,uVar5);
  CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr
            ((CachedUIResourcePtr<Sexy::Image> *)aIStack_30,
             "IMAGE_UI_DIALOG_ASSET_DIALOG_MAIN_TITLE_RED");
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)aIStack_30);
  iVar1 = *(int *)(this + 0x50);
  this_01 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)aIStack_30);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_01);
  iVar3 = FUN_041b3cec(0x14);
  Sexy::Graphics::DrawImage(param_1,pIVar4,(iVar1 - iVar2) / 2,iVar3);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_36_ThickOutline);
  iVar2 = FUN_041b3cec(0x23);
  iVar1 = *(int *)(this + 0x50);
  TodStringTranslate(L"[LANTERN_RIDDLES_TITLE]");
  Sexy::Color::Color(aCStack_40,1);
  Sexy::PrimeTypeface::DrawString_Line
            ((PrimeTypeface *)0x0,(float)iVar2,(float)iVar1,uVar5,param_1,auStack_58,1,aCStack_40,0)
  ;
  FUN_05476c50(auStack_58);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  iVar2 = FUN_041b3cec(0xaa);
  iVar1 = *(int *)(this + 0x50);
  FUN_05477b24(auStack_58,this + 0x138);
  Sexy::Color::Color(aCStack_40,0);
  Sexy::PrimeTypeface::DrawString_Line
            ((PrimeTypeface *)0x0,(float)iVar2,(float)iVar1,uVar5,param_1,auStack_58,1,aCStack_40,0)
  ;
  FUN_05476c50(auStack_58);
  if (*(StandaloneEffect **)(this + 0x130) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0x130),param_1);
  }
  CachedUIResourcePtr<Sexy::Image>::~CachedUIResourcePtr
            ((CachedUIResourcePtr<Sexy::Image> *)aIStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LanternRiddlesUI::DrawEndState(Sexy::Graphics*) */

void __thiscall LanternRiddlesUI::DrawEndState(LanternRiddlesUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ProfileMgr *this_00;
  Image *pIVar4;
  undefined8 uVar5;
  LotteryResultProgressBar *this_01;
  undefined1 auStack_58 [8];
  Insets aIStack_50 [16];
  Color aCStack_40 [16];
  Insets aIStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  DrawPrizePool(this,param_1);
  iVar2 = *(int *)(this + 0x110);
  iVar1 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  Sexy::Insets::Insets
            (aIStack_50,*(int *)(this + 0x104),*(int *)(this + 0x108) + (iVar1 >> 2),
             *(int *)(this + 0x10c),iVar2 / 2);
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af04c0);
  Sexy::Graphics::DrawImage
            (param_1,pIVar4,*(int *)(this + 0x104),*(int *)(this + 0x108),*(int *)(this + 0x10c),
             *(int *)(this + 0x110));
  Sexy::Insets::Insets(aIStack_30,aIStack_50);
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af09b0);
  Draw3SliceImage(param_1,aIStack_30,uVar5);
  CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr
            ((CachedUIResourcePtr<Sexy::Image> *)aIStack_30,
             "IMAGE_UI_DIALOG_ASSET_DIALOG_MAIN_TITLE_RED");
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)aIStack_30);
  iVar1 = *(int *)(this + 0x50);
  this_01 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)aIStack_30);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_01);
  iVar3 = FUN_041b3cec(0x14);
  Sexy::Graphics::DrawImage(param_1,pIVar4,(iVar1 - iVar2) / 2,iVar3);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_36_ThickOutline);
  iVar2 = FUN_041b3cec(0x23);
  iVar1 = *(int *)(this + 0x50);
  TodStringTranslate(L"[LANTERN_RIDDLES_TITLE]");
  Sexy::Color::Color(aCStack_40,1);
  Sexy::PrimeTypeface::DrawString_Line
            ((PrimeTypeface *)0x0,(float)iVar2,(float)iVar1,uVar5,param_1,auStack_58,1,aCStack_40,0)
  ;
  FUN_05476c50(auStack_58);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  iVar2 = FUN_041b3cec(0xaa);
  iVar1 = *(int *)(this + 0x50);
  FUN_05477b24(auStack_58,this + 0x1d8);
  Sexy::Color::Color(aCStack_40,0);
  Sexy::PrimeTypeface::DrawString_Line
            ((PrimeTypeface *)0x0,(float)iVar2,(float)iVar1,uVar5,param_1,auStack_58,1,aCStack_40,0)
  ;
  FUN_05476c50(auStack_58);
  if (*(StandaloneEffect **)(this + 0x130) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0x130),param_1);
  }
  CachedUIResourcePtr<Sexy::Image>::~CachedUIResourcePtr
            ((CachedUIResourcePtr<Sexy::Image> *)aIStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LanternRiddlesUI::DrawPrizeState(Sexy::Graphics*) */

void __thiscall LanternRiddlesUI::DrawPrizeState(LanternRiddlesUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  Image *pIVar3;
  LotteryResultProgressBar *this_00;
  undefined8 uVar4;
  wchar_t *pwVar5;
  int iVar6;
  undefined1 auStack_48 [8];
  Color aCStack_40 [16];
  CachedUIResourcePtr<Sexy::Image> aCStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr
            (aCStack_30,"IMAGE_UI_DIALOG_ASSET_DIALOG_MAIN_TITLE_RED");
  pIVar3 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(aCStack_30);
  iVar6 = *(int *)(this + 0x50);
  this_00 = (LotteryResultProgressBar *)CachedUIResourcePtr<Sexy::Image>::operator->(aCStack_30);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  iVar2 = FUN_041b3cec(0x14);
  Sexy::Graphics::DrawImage(param_1,pIVar3,(iVar6 - iVar1) / 2,iVar2);
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_36_ThickOutline);
  iVar1 = FUN_041b3cec(0x23);
  iVar6 = *(int *)(this + 0x50);
  TodStringTranslate(L"[LANTERN_RIDDLES_TITLE]");
  Sexy::Color::Color(aCStack_40,1);
  Sexy::PrimeTypeface::DrawString_Line
            ((PrimeTypeface *)0x0,(float)iVar1,(float)iVar6,uVar4,param_1,auStack_48,1,aCStack_40,0)
  ;
  FUN_05476c50(auStack_48);
  if (this[0x200] == (LanternRiddlesUI)0x0) {
    uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26_ThickOutline)
    ;
    iVar1 = FUN_041b3cec(0x6e);
    iVar6 = *(int *)(this + 0x50);
    pwVar5 = L"[LANTERN_RIDDLES_SPECIAL_PRIZE_DESC]";
  }
  else {
    uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26_ThickOutline)
    ;
    iVar1 = FUN_041b3cec(0x6e);
    iVar6 = *(int *)(this + 0x50);
    pwVar5 = L"[LANTERN_RIDDLES_SPECIAL_PRIZE_GET]";
  }
  TodStringTranslate(pwVar5);
  Sexy::Color::Color(aCStack_40,1);
  Sexy::PrimeTypeface::DrawString_Line
            ((PrimeTypeface *)0x0,(float)iVar1,(float)iVar6,uVar4,param_1,auStack_48,1,aCStack_40,0)
  ;
  FUN_05476c50(auStack_48);
  if (*(StandaloneEffect **)(this + 0x220) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0x220),param_1);
  }
  CachedUIResourcePtr<Sexy::Image>::~CachedUIResourcePtr(aCStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LanternRiddlesUI::RefreshPrizeGetButton() */

void __thiscall LanternRiddlesUI::RefreshPrizeGetButton(LanternRiddlesUI *this)

{
  wchar_t *pwVar1;
  undefined8 uVar2;
  Effect_PopAnim *pEVar3;
  ResourceInfo *pRVar4;
  long lVar5;
  PVZ2UIButton *pPVar6;
  StandaloneEffect *this_00;
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ2UIButton::ClearButton(*(PVZ2UIButton **)(this + 0x1f8));
  if (this[0x200] == (LanternRiddlesUI)0x0) {
    if (*(long **)(this + 0x130) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x130) + 0x18))();
      *(undefined8 *)(this + 0x130) = 0;
    }
    pwVar1 = L"[LANTERN_RIDDLES_BACK]";
  }
  else {
    if (*(long *)(this + 0x130) == 0) {
      pEVar3 = GameObject::CreateOutsideTable<Effect_PopAnim>();
      *(Effect_PopAnim **)(this + 0x130) = pEVar3;
      std::string::string(asStack_10,"POPANIM_EFFECTS_GOLDCAN_SPRINGGIFTBK");
      GetPAMByName(asStack_10);
      std::string::~string(asStack_10);
      nop();
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
      Effect_PopAnim::CreatePopAnimRig
                (*(Effect_PopAnim **)(this + 0x130),(PopAnim *)pRVar4,(RtClass *)0x0);
      this_00 = *(StandaloneEffect **)(this + 0x130);
      lVar5 = *(long *)(this + 0xe8);
      Sexy::FastCurve::SetOutRange
                ((FastCurve *)asStack_10,
                 (float)(*(int *)(lVar5 + 0x48) + *(int *)(lVar5 + 0x50) / 2),
                 (float)(*(int *)(lVar5 + 0x4c) + *(int *)(lVar5 + 0x54) / 2));
      StandaloneEffect::SetScreenSpaceOrigin(this_00,(SexyVector2 *)asStack_10,900000);
      Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0x130),true);
      StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x130),true);
      pEVar3 = *(Effect_PopAnim **)(this + 0x130);
      std::string::string(asStack_10,"ANIMATION");
      PVZ_EOT();
      Effect_PopAnim::PlayLoopingAnimation(pEVar3,asStack_10,0);
      std::string::~string(asStack_10);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    }
    pwVar1 = L"[LANTERN_RIDDLES_PRIZE]";
  }
  pPVar6 = *(PVZ2UIButton **)(this + 0x1f8);
  TodStringTranslate(pwVar1);
  uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22);
  PVZ2UIButton::AddText(pPVar6,asStack_10,uVar2,0);
  FUN_05476c50(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LanternRiddlesUI::onLanternRiddlesComplete(S2C_LanternRiddlesResult const&) */

void __thiscall
LanternRiddlesUI::onLanternRiddlesComplete(LanternRiddlesUI *this,S2C_LanternRiddlesResult *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  NameMapperBase *this_02;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  PVZ2UIButton *this_03;
  PVZ2UIImage aPStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar10 = 0;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  FUN_041b393c(this_01 + 0xf60,*(undefined4 *)(param_1 + 0x14));
  uVar3 = FUN_041b3944(*(undefined4 *)(this_01 + 0xf60));
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x124) = uVar3;
  this[0x100] = (LanternRiddlesUI)0x0;
  lVar6 = FUN_041b3b20(uVar11,uVar9);
  iVar4 = (int)this_01;
  if (lVar6 != 0) {
    do {
      piVar7 = (int *)FUN_041b3b2c(uVar11,uVar10);
      iVar5 = *piVar7;
      iVar1 = piVar7[1];
      PlayerInfo::AddCommonGachaReward(iVar4,iVar5,SUB41(iVar1,0),false);
      if (iVar5 == 0xfad) {
        FUN_041b397c(*(long *)(this + 0x210) + 0xe8,iVar1);
      }
      else {
        FUN_041b397c(*(long *)(this + 0x208) + 0xe8,iVar1);
      }
      uVar10 = uVar10 + 1;
      uVar11 = *(undefined8 *)(param_1 + 0x18);
      uVar8 = FUN_041b3b20(uVar11,*(undefined8 *)(param_1 + 0x20));
    } while (uVar10 < uVar8);
  }
  if (*(int *)(param_1 + 0x30) < 1) {
    this[0x200] = (LanternRiddlesUI)0x0;
  }
  else {
    iVar5 = PlantNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar5);
    cVar2 = FUN_0547419c(asStack_40);
    if (cVar2 == '\0') {
      cVar2 = PlayerInfo::GetIsPlantUnlocked(this_01,asStack_40);
      if (cVar2 == '\0') {
        PlayerInfo::AddCommonGachaReward(iVar4,*(int *)(param_1 + 0x30),true,false);
      }
      else {
        this_02 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
        iVar5 = NameMapperBase::GetIdForName(this_02,asStack_40);
        PlayerInfo::AddCommonGachaReward(iVar4,iVar5,true,false);
      }
    }
    std::string::~string(asStack_40);
    iVar4 = *(int *)(param_1 + 0x30);
    this[0x200] = (LanternRiddlesUI)(0 < iVar4);
    if (0 < iVar4) {
      puVar12 = &DAT_06af05a8;
      goto LAB_041b5ba8;
    }
  }
  puVar12 = &DAT_06af08e0;
LAB_041b5ba8:
  this_03 = *(PVZ2UIButton **)(this + 0xe8);
  PVZ2UIImage::PVZ2UIImage(aPStack_78,puVar12,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,puVar12,1);
  PVZ2UIButton::SetDialogStates(this_03,aPStack_78,(PVZ2UIImage *)asStack_40);
  RefreshPrizeGetButton(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LanternRiddlesUI::OnGetPrize() */

void __thiscall LanternRiddlesUI::OnGetPrize(LanternRiddlesUI *this)

{
  undefined *this_00;
  char cVar1;
  int iVar2;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  RedPacketRewardInfo *this_03;
  long lVar3;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  this_03 = (RedPacketRewardInfo *)LawnApp::GetRedPacketRewardInfo(gLawnApp);
  lVar3 = RedPacketRewardInfo::GetCurrentDisplayConfig(this_03);
  FUN_05475d88(asStack_18,lVar3 + 0x60);
  iVar2 = FUN_041b3970(*(undefined4 *)(this_02 + 0xf64));
  switch(iVar2) {
  case 0:
    PlayerInfo::AddGems(this_02,10,true);
    iVar2 = FUN_041b3970(*(undefined4 *)(this_02 + 0xf64));
    break;
  case 1:
    PlayerInfo::AddGems(this_02,0x1e,true);
    iVar2 = FUN_041b3970(*(undefined4 *)(this_02 + 0xf64));
    break;
  case 2:
    cVar1 = PlayerInfo::GetIsPlantUnlocked(this_02,asStack_18);
    if (cVar1 == '\0') {
      PlayerInfo::UnlockPlant(this_02,asStack_18,false);
      iVar2 = FUN_041b3970(*(undefined4 *)(this_02 + 0xf64));
    }
    else {
      PlayerInfo::AddPlantPieceCount((string *)this_02,(int)asStack_18,true);
      iVar2 = FUN_041b3970(*(undefined4 *)(this_02 + 0xf64));
    }
    break;
  case 3:
    PlayerInfo::AddAvatarPiecesCount(this_02,asStack_18,0,10,1);
    iVar2 = FUN_041b3970(*(undefined4 *)(this_02 + 0xf64));
    break;
  case 4:
    std::string::string(asStack_10,"epic_pole");
    PlayerInfo::AddAccessoryPieceCount(this_02,asStack_10,10,true);
    std::string::~string(asStack_10);
    nop();
    iVar2 = FUN_041b3970(*(undefined4 *)(this_02 + 0xf64));
  }
  FUN_041b3968(this_02 + 0xf64,iVar2 + 1);
  OnRefreshLanternUIState(this);
  PlayerInfo::saveCurrentProfile(this_02);
  this_00 = gMessageRouter;
  iVar2 = FUN_041b3970(*(undefined4 *)(this_02 + 0xf64));
  MessageRouter::Post<int,int>((MessageRouter *)this_00,Message::LanternReward,iVar2 + 1);
  std::string::~string(asStack_18);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LanternRiddlesUI::CalcRewardResult() */

void __thiscall LanternRiddlesUI::CalcRewardResult(LanternRiddlesUI *this)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  vector *pvVar4;
  int *piVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar2 = FUN_041b3944(*(undefined4 *)(this_01 + 0xf60));
  FUN_041b393c(this_01 + 0xf60,iVar2 + 1);
  pvVar4 = (vector *)PlayerInfo::GetRiddlesGotToday(this_01);
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)&local_20,pvVar4);
  uVar8 = 0;
  while( true ) {
    uVar1 = local_20;
    uVar6 = FUN_041b3984(local_20,local_18);
    if (uVar6 <= uVar8) break;
    piVar5 = (int *)FUN_041b3b18(uVar1,uVar8);
    PlayerInfo::AddRiddlesHasAnswered(this_01,*piVar5);
    uVar8 = uVar8 + 1;
  }
  iVar2 = *(int *)(this + 0x16c);
  if (iVar2 == 5) {
    iVar7 = 3;
  }
  else {
    iVar7 = iVar2 >> 1;
    if (2 < iVar2 - 2U) {
      iVar7 = 0;
    }
  }
  PlayerInfo::AddRedPacket(this_01,iVar7);
  uVar3 = PlayerInfo::CanRiddleToday();
  FUN_041b3974(this + 0x100,uVar3);
  OnRefreshLanternUIState(this);
  PlayerInfo::saveCurrentProfile(this_01);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LanternRiddlesUI::ButtonDepress(int) */

void __thiscall LanternRiddlesUI::ButtonDepress(LanternRiddlesUI *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long *plVar5;
  vector *pvVar6;
  time_t tVar7;
  int *piVar8;
  LanternRiddlesUI *pLVar9;
  NetworkMgr *this_02;
  INetworkMsgProcess *this_03;
  Effect_PopAnim *pEVar10;
  long lVar11;
  FastCurve aFStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  switch(param_1) {
  case 100:
    GameStateMgr::ShowWorldMap(gGameStateMgr,5,5);
    break;
  case 0x65:
    PlayerInfo::RandomRiddlesForToday(this_01);
    pvVar6 = (vector *)PlayerInfo::GetRiddlesGotToday(this_01);
    std::vector<int,std::allocator<int>>::operator=
              ((vector<int,std::allocator<int>> *)(this + 0x148),pvVar6);
    tVar7 = time((time_t *)0x0);
    FUN_041b3960(this_01 + 0xf70,tVar7);
    PlayerInfo::saveCurrentProfile(this_01);
    SetState(this,1);
    break;
  case 0x66:
    this[0x168] = (LanternRiddlesUI)0x0;
    pLVar9 = this + 400;
    this[0x169] = (LanternRiddlesUI)0x0;
    do {
      plVar5 = *(long **)pLVar9;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x188))(plVar5,0);
      }
      pLVar9 = pLVar9 + 8;
    } while (pLVar9 != this + 0x1b0);
    (**(code **)(**(long **)(this + 0x180) + 0x188))(*(long **)(this + 0x180),1);
    (**(code **)(**(long **)(this + 0x188) + 0x188))(*(long **)(this + 0x188),0);
    if (*(int *)(this + 0x164) == 5) {
      FUN_041b3948(this_01 + 0xf5c,m_correctAnswerCount);
      iVar4 = FUN_041b395c(*(undefined4 *)(this_01 + 0xf68));
      FUN_041b3954(this_01 + 0xf68,iVar4 + m_correctAnswerCount);
      this_02 = (NetworkMgr *)NetworkMgr::Instance();
      this_03 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_02);
      INetworkMsgProcess::RequestLanternRiddlesCompelete(this_03,m_correctAnswerCount);
      SetState(this,2);
    }
    else {
      piVar8 = (int *)FUN_041b3b18(*(undefined8 *)(this + 0x148),(long)*(int *)(this + 0x164));
      createRiddle(this,*piVar8);
    }
    break;
  case 0x67:
    pLVar9 = ::operator_new(0x28);
    ICloudRequestCallbackFunction<LanternRiddlesUI,bool>::ICloudRequestCallbackFunction
              (pLVar9,(_func_void_bool_ptr *)this);
    PlayerInfo::SubtractGems(this_01,1,0x2775,(ICloudRequestCallbackFunctionBase *)pLVar9,1,false);
    break;
  case 0x68:
    iVar4 = PlayerInfo::GetNumGems(this_01,false);
    if (iVar4 < 0xf) {
      LawnApp::ShowGemStoreConfirm(gLawnApp,2,1);
    }
    else {
      pLVar9 = ::operator_new(0x28);
      ICloudRequestCallbackFunction<LanternRiddlesUI,bool>::ICloudRequestCallbackFunction
                (pLVar9,(_func_void_bool_ptr *)this);
      PlayerInfo::SubtractGems(this_01,1,0x2776,(ICloudRequestCallbackFunctionBase *)pLVar9,1,false)
      ;
    }
    break;
  case 0x69:
    SetState(this,3);
    break;
  case 0x6a:
    SetState(this,*(undefined4 *)(this + 0xfc));
    break;
  case 0x6b:
    break;
  default:
    pLVar9 = this + 400;
    do {
      plVar5 = *(long **)pLVar9;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x188))(plVar5,1);
      }
      pLVar9 = pLVar9 + 8;
    } while (pLVar9 != this + 0x1b0);
    this[0x169] = (LanternRiddlesUI)0x1;
    (**(code **)(**(long **)(this + 0x180) + 0x188))(*(long **)(this + 0x180),0);
    (**(code **)(**(long **)(this + 0x188) + 0x188))(*(long **)(this + 0x188),1);
    *(int *)(this + 0x164) = *(int *)(this + 0x164) + 1;
    m_currentRiddleCount = m_currentRiddleCount + 1;
    if (*(int *)(this + 0x160) == param_1) {
      *(int *)(this + 0x16c) = *(int *)(this + 0x16c) + 1;
      m_correctAnswerCount = m_correctAnswerCount + 1;
      StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x1b8),true);
      StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x1c0),false);
      lVar11 = *(long *)(this + (long)param_1 * 8 + 400);
      iVar1 = FUN_041b3cec(0xd2);
      iVar4 = *(int *)(lVar11 + 0x48);
      iVar2 = FUN_041b3cec(9);
      iVar3 = FUN_041b3cec(100);
      Sexy::FastCurve::SetOutRange
                (aFStack_18,(float)((iVar1 + iVar4) - iVar2),
                 (float)(iVar3 + *(int *)(lVar11 + 0x4c)));
      StandaloneEffect::SetScreenSpaceOrigin
                (*(StandaloneEffect **)(this + 0x1b8),(SexyVector2 *)aFStack_18,900000);
      pEVar10 = *(Effect_PopAnim **)(this + 0x1b8);
    }
    else {
      StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x1b8),false);
      StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x1c0),true);
      lVar11 = *(long *)(this + (long)param_1 * 8 + 400);
      iVar1 = FUN_041b3cec(0xd2);
      iVar4 = *(int *)(lVar11 + 0x48);
      iVar2 = FUN_041b3cec(0xc);
      iVar3 = FUN_041b3cec(0x7d);
      Sexy::FastCurve::SetOutRange
                (aFStack_18,(float)((iVar1 + iVar4) - iVar2),
                 (float)(iVar3 + *(int *)(lVar11 + 0x4c)));
      StandaloneEffect::SetScreenSpaceOrigin
                (*(StandaloneEffect **)(this + 0x1c0),(SexyVector2 *)aFStack_18,900000);
      pEVar10 = *(Effect_PopAnim **)(this + 0x1c0);
    }
    std::string::string(asStack_10,"animation");
    Effect_PopAnim::PlaySingleAnimation(pEVar10,asStack_10,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to LanternRiddlesUI::ButtonDepress(int) */

void __thiscall LanternRiddlesUI::ButtonDepress(LanternRiddlesUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* LanternRiddlesUI::OnExtraRiddleSuccess(bool const&) */

void __thiscall LanternRiddlesUI::OnExtraRiddleSuccess(LanternRiddlesUI *this,bool *param_1)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  time_t tVar1;
  vector *pvVar2;
  
  if (*param_1 == false) {
    return;
  }
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  FUN_041b3bfc(this_01 + 0xf58);
  FUN_041b3948(this_01 + 0xf5c,0);
  PlayerInfo::RandomRiddlesForToday(this_01);
  tVar1 = time((time_t *)0x0);
  FUN_041b3960(this_01 + 0xf70,tVar1);
  *(undefined4 *)(this + 0x16c) = 0;
  *(undefined4 *)(this + 0x164) = 0;
  pvVar2 = (vector *)PlayerInfo::GetRiddlesGotToday(this_01);
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x148),pvVar2);
  this[0x168] = (LanternRiddlesUI)0x0;
  this[0x169] = (LanternRiddlesUI)0x0;
  *(undefined4 *)(this + 0x1e0) = 0;
  SetState(this,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LanternRiddlesUI::DrawRiddleState(Sexy::Graphics*) */

void __thiscall LanternRiddlesUI::DrawRiddleState(LanternRiddlesUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Image *pIVar6;
  LotteryResultProgressBar *pLVar7;
  SalesProgressBar *this_00;
  undefined8 uVar8;
  PrimeTypeface *pPVar9;
  string *psVar10;
  PlantType *this_01;
  long lVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_90 [8];
  Insets aIStack_88 [16];
  Insets aIStack_78 [16];
  Insets aIStack_68 [16];
  SexyTransform2D aSStack_58 [8];
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [20];
  CachedUIResourcePtr<Sexy::Image> aCStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0680);
  iVar5 = *(int *)(this + 0x50);
  pLVar7 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0680);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  iVar2 = FUN_041b3cec(0x7a);
  Sexy::Graphics::DrawImage(param_1,pIVar6,(iVar5 - iVar1) / 2,iVar2);
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0798);
  iVar5 = *(int *)(this + 0x50);
  pLVar7 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0798);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  iVar2 = FUN_041b3cec(0xc3);
  pLVar7 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0798);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0798);
  iVar4 = SalesProgressBar::GetCurrentLevel(this_00);
  Sexy::Graphics::DrawImage
            (param_1,pIVar6,(iVar5 - iVar1) / 2,iVar2,iVar3,(int)((float)iVar4 * 0.9));
  CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr
            (aCStack_30,"IMAGE_UI_DIALOG_ASSET_DIALOG_MAIN_TITLE_RED");
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(aCStack_30);
  iVar5 = *(int *)(this + 0x50);
  pLVar7 = (LotteryResultProgressBar *)CachedUIResourcePtr<Sexy::Image>::operator->(aCStack_30);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  iVar2 = FUN_041b3cec(0x14);
  Sexy::Graphics::DrawImage(param_1,pIVar6,(iVar5 - iVar1) / 2,iVar2);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_36_ThickOutline);
  iVar1 = FUN_041b3cec(0x23);
  iVar5 = *(int *)(this + 0x50);
  TodStringTranslate(L"[LANTERN_RIDDLES_TITLE]");
  Sexy::Color::Color((Color *)aIStack_68,1);
  Sexy::PrimeTypeface::DrawString_Line
            ((PrimeTypeface *)0x0,(float)iVar1,(float)iVar5,uVar8,param_1,aIStack_78,1,aIStack_68,0)
  ;
  FUN_05476c50(aIStack_78);
  iVar5 = FUN_041b3cec(0x1e0);
  iVar1 = FUN_041b3cec(0x8c);
  iVar2 = FUN_041b3cec(200);
  Sexy::Insets::Insets(aIStack_88,(*(int *)(this + 0x50) - iVar5) / 2,iVar1,iVar5,iVar2);
  pPVar9 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets(aIStack_78,aIStack_88);
  FUN_05477b24(auStack_90,this + 0x170);
  Sexy::Insets::Insets(aIStack_68,(Insets *)&PrimeText_Game::Color_Description_Green);
  Sexy::PrimeTypeface::DrawString_Paragraph(pPVar9,param_1,aIStack_78,auStack_90,1,1,aIStack_68,0);
  FUN_05476c50(auStack_90);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline);
  iVar1 = FUN_041b3cec(0x8e);
  iVar5 = *(int *)(this + 0x50);
  FUN_05477b24(aIStack_78,this + 0x178);
  Sexy::Color::Color((Color *)aIStack_68,1);
  Sexy::PrimeTypeface::DrawString_Line
            ((PrimeTypeface *)0x0,(float)iVar1,(float)iVar5,uVar8,param_1,aIStack_78,1,aIStack_68,0)
  ;
  FUN_05476c50(aIStack_78);
  if ((this[0x168] != (LanternRiddlesUI)0x0) && (*(long *)(this + 0x1b0) != 0)) {
    psVar10 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string((string *)aIStack_68,"peashooter");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar10);
    std::string::~string((string *)aIStack_68);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_78);
    nop();
    lVar11 = PlantType::GetProps(this_01);
    Sexy::Insets::Insets(aIStack_68);
    (**(code **)(**(long **)(this + 0x1b0) + 0x90))(*(long **)(this + 0x1b0),aIStack_68);
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_58);
    Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_58);
    fVar12 = (float)FUN_041b3cdc(*(undefined4 *)(lVar11 + 0x9c));
    fVar13 = (float)FUN_041b3cdc(*(undefined4 *)(lVar11 + 0xa0));
    FUN_041b38d0(-fVar12,-fVar13,auStack_50,auStack_44);
    lVar11 = *(long *)(this + ((long)*(int *)(this + 0x160) + 0x32) * 8);
    iVar5 = FUN_041b3cec(0x14);
    iVar1 = FUN_041b3cec(0x59);
    FUN_041b38d0((float)(iVar5 + *(int *)(lVar11 + 0x48)),(float)(iVar1 + *(int *)(lVar11 + 0x4c)),
                 auStack_50,auStack_44);
    PopAnimRig::Draw(*(PopAnimRig **)(this + 0x1b0),param_1,aSStack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_78);
  }
  CachedUIResourcePtr<Sexy::Image>::~CachedUIResourcePtr(aCStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LanternRiddlesUI::InitView() */

void __thiscall LanternRiddlesUI::InitView(LanternRiddlesUI *this)

{
  ButtonListener *pBVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  ProfileMgr *this_00;
  PVZ2UIButton *pPVar11;
  LotteryResultProgressBar *pLVar12;
  SalesProgressBar *pSVar13;
  undefined8 uVar14;
  string *psVar15;
  PopAnimRig *this_01;
  Effect_PopAnim *pEVar16;
  ResourceInfo *pRVar17;
  UIRewardFrame *pUVar18;
  long lVar19;
  PopAnim *pPVar20;
  ulong uVar21;
  int *piVar22;
  long *plVar23;
  ulong uVar24;
  undefined *puVar25;
  StandaloneEffect *pSVar26;
  code *pcVar27;
  Effect_PopAnim *pEVar28;
  RtWeakPtr<Sexy::SoundResource> aRStack_130 [8];
  RtWeakPtr aRStack_128 [8];
  RtWeakPtr aRStack_120 [8];
  string asStack_118 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_110 [8];
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 local_fc;
  string asStack_f8 [56];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_c0 [24];
  undefined8 local_a8;
  undefined8 local_a0;
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  pBVar1 = (ButtonListener *)(this + 0xd8);
  (**(code **)(*(long *)this + 0x198))
            (this,*(undefined4 *)(gLawnApp + 0x71c),*(undefined4 *)(gLawnApp + 0x720),
             *(undefined4 *)(gLawnApp + 0x724),*(undefined4 *)(gLawnApp + 0x728));
  iVar3 = FUN_041b3cec(0x226);
  iVar4 = FUN_041b3cec(0x50);
  iVar5 = FUN_041b3cec(0x140);
  Sexy::Insets::Insets((Insets *)&local_108,(*(int *)(this + 0x50) - iVar3) / 2,iVar4,iVar3,iVar5);
  *(undefined8 *)(this + 0x104) = local_108;
  *(ulong *)(this + 0x10c) = CONCAT44(local_fc,uStack_100);
  local_fc = FUN_041b3cec(0x168);
  *(undefined8 *)(this + 0x114) = local_108;
  *(ulong *)(this + 0x11c) = CONCAT44(local_fc,uStack_100);
  FUN_05478178(asStack_f8,&DAT_056f11a8,aRStack_110);
  Sexy::Color::Color((Color *)aRStack_c0,1);
  pPVar11 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar11,100,pBVar1,(wstring *)asStack_f8,(Color *)aRStack_c0);
  *(PVZ2UIButton **)(this + 0xe0) = pPVar11;
  FUN_05476c50(asStack_f8);
  nop();
  plVar23 = *(long **)(this + 0xe0);
  pcVar27 = *(code **)(*plVar23 + 0x198);
  iVar4 = FUN_041b3cec(700);
  iVar3 = *(int *)(this + 0x50);
  pLVar12 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0770);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
  iVar6 = FUN_041b3cec(0x46);
  pSVar13 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0770);
  iVar7 = SalesProgressBar::GetCurrentLevel(pSVar13);
  pLVar12 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0770);
  uVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
  pSVar13 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0770);
  uVar9 = SalesProgressBar::GetCurrentLevel(pSVar13);
  (*pcVar27)(plVar23,(iVar4 + iVar3) / 2 + (iVar5 / 3) * -2,iVar6 - iVar7 / 3,uVar8,uVar9);
  pPVar11 = *(PVZ2UIButton **)(this + 0xe0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_f8,&DAT_06af0770,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aRStack_c0,&DAT_06af0498,1);
  PVZ2UIButton::SetDialogStates(pPVar11,(PVZ2UIImage *)asStack_f8,(PVZ2UIImage *)aRStack_c0);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe0));
  FUN_05478178(asStack_f8,&DAT_056f11a8,aRStack_110);
  Sexy::Color::Color((Color *)aRStack_c0,1);
  pPVar11 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar11,0x69,pBVar1,(wstring *)asStack_f8,(Color *)aRStack_c0);
  *(PVZ2UIButton **)(this + 0xe8) = pPVar11;
  FUN_05476c50(asStack_f8);
  nop();
  iVar3 = *(int *)(this + 0x104);
  plVar23 = *(long **)(this + 0xe8);
  iVar4 = *(int *)(this + 0x10c);
  pcVar27 = *(code **)(*plVar23 + 0x198);
  iVar5 = FUN_041b3cec(0x78);
  puVar25 = &DAT_06af05a8;
  uVar8 = FUN_041b3cec(0x19c);
  pLVar12 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af05a8);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
  pSVar13 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af05a8);
  iVar7 = SalesProgressBar::GetCurrentLevel(pSVar13);
  (*pcVar27)(plVar23,(iVar3 + iVar4) - iVar5,uVar8,(int)((float)iVar6 * 1.05),
             (int)((float)iVar7 * 1.1));
  if (this[0x200] == (LanternRiddlesUI)0x0) {
    puVar25 = &DAT_06af08e0;
  }
  pPVar11 = *(PVZ2UIButton **)(this + 0xe8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_f8,puVar25,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aRStack_c0,puVar25,1);
  PVZ2UIButton::SetDialogStates(pPVar11,(PVZ2UIImage *)asStack_f8,(PVZ2UIImage *)aRStack_c0);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
  FUN_05478178(asStack_f8,&DAT_056f11a8,aRStack_110);
  Sexy::Color::Color((Color *)aRStack_c0,1);
  pPVar11 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar11,0x6b,pBVar1,(wstring *)asStack_f8,(Color *)aRStack_c0);
  *(PVZ2UIButton **)(this + 0xf0) = pPVar11;
  FUN_05476c50(asStack_f8);
  nop();
  iVar3 = *(int *)(this + 0x104);
  iVar4 = *(int *)(this + 0x10c);
  plVar23 = *(long **)(this + 0xf0);
  iVar6 = FUN_041b3cec(10);
  iVar7 = FUN_041b3cec(100);
  iVar10 = FUN_041b3cec(0xd7);
  iVar5 = *(int *)(this + 0x108);
  uVar8 = FUN_041b3cec(0x28);
  (**(code **)(*plVar23 + 0x198))
            (plVar23,((iVar3 + iVar4) - iVar6) - iVar7,iVar10 + iVar5,iVar7,uVar8);
  pPVar11 = *(PVZ2UIButton **)(this + 0xf0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_f8,&DAT_06af0470,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aRStack_c0,&DAT_06af0628,3);
  PVZ2UIButton::SetDialogStates(pPVar11,(PVZ2UIImage *)asStack_f8,(PVZ2UIImage *)aRStack_c0);
  pPVar11 = *(PVZ2UIButton **)(this + 0xf0);
  FUN_05478178(aRStack_c0,L"[LANTERN_RIDDLES_RED_PACK]",asStack_f8);
  uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22);
  PVZ2UIButton::AddText(pPVar11,aRStack_c0,uVar14,0);
  FUN_05476c50(aRStack_c0);
  nop();
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf0));
  if (this[0x200] == (LanternRiddlesUI)0x0) {
    pEVar28._0_4_ = (Effect_PopAnim *)PVZ_EOT();
  }
  else {
    pEVar16 = GameObject::CreateOutsideTable<Effect_PopAnim>();
    *(Effect_PopAnim **)(this + 0x130) = pEVar16;
    std::string::string((string *)aRStack_c0,"POPANIM_EFFECTS_GOLDCAN_SPRINGGIFTBK");
    GetPAMByName((string *)aRStack_c0);
    std::string::~string((string *)aRStack_c0);
    nop();
    pRVar17 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_f8);
    Effect_PopAnim::CreatePopAnimRig
              (*(Effect_PopAnim **)(this + 0x130),(PopAnim *)pRVar17,(RtClass *)0x0);
    pSVar26 = *(StandaloneEffect **)(this + 0x130);
    lVar19 = *(long *)(this + 0xe8);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)aRStack_c0,
               (float)(*(int *)(lVar19 + 0x48) + *(int *)(lVar19 + 0x50) / 2),
               (float)(*(int *)(lVar19 + 0x4c) + *(int *)(lVar19 + 0x54) / 2));
    StandaloneEffect::SetScreenSpaceOrigin(pSVar26,(SexyVector2 *)aRStack_c0,900000);
    Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0x130),true);
    StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x130),true);
    pEVar16 = *(Effect_PopAnim **)(this + 0x130);
    std::string::string((string *)aRStack_c0,"ANIMATION");
    pEVar28._0_4_ = (Effect_PopAnim *)PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation(pEVar16,aRStack_c0,0);
    std::string::~string((string *)aRStack_c0);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_f8);
  }
  FUN_05478178(asStack_f8,&DAT_056f11a8,aRStack_110);
  Sexy::Color::Color((Color *)aRStack_c0,1);
  pPVar11 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar11,0x65,pBVar1,(wstring *)asStack_f8,(Color *)aRStack_c0);
  *(PVZ2UIButton **)(this + 0x140) = pPVar11;
  FUN_05476c50(asStack_f8);
  nop();
  plVar23 = *(long **)(this + 0x140);
  iVar3 = FUN_041b3cec(0x8c);
  uVar8 = FUN_041b3cec(0x20d);
  uVar9 = FUN_041b3cec(0x32);
  (**(code **)(*plVar23 + 0x198))(plVar23,(*(int *)(this + 0x50) - iVar3) / 2,uVar8,iVar3,uVar9);
  pPVar11 = *(PVZ2UIButton **)(this + 0x140);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_f8,&DAT_06af0a00,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aRStack_c0,&DAT_06af0270,3);
  PVZ2UIButton::SetDialogStates(pPVar11,(PVZ2UIImage *)asStack_f8,(PVZ2UIImage *)aRStack_c0);
  cVar2 = PlayerInfo::CanRiddleToday();
  if (cVar2 == '\0') {
    pPVar11 = *(PVZ2UIButton **)(this + 0x140);
    FUN_05478178(aRStack_c0,L"[LANTERN_RIDDLES_FINISH_TODAY]",asStack_f8);
    uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22);
    PVZ2UIButton::AddText(pPVar11,aRStack_c0,uVar14,0);
    FUN_05476c50(aRStack_c0);
    nop();
    (**(code **)(**(long **)(this + 0x140) + 0x188))(*(long **)(this + 0x140),1);
  }
  else {
    pPVar11 = *(PVZ2UIButton **)(this + 0x140);
    FUN_05478178(aRStack_c0,L"[CLICK_TO_START]",asStack_f8);
    uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22);
    PVZ2UIButton::AddText(pPVar11,aRStack_c0,uVar14,0);
    FUN_05476c50(aRStack_c0);
    nop();
    (**(code **)(**(long **)(this + 0x140) + 0x188))(*(long **)(this + 0x140),0);
  }
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x140));
  FUN_05478178(asStack_f8,&DAT_056f11a8,aRStack_110);
  Sexy::Color::Color((Color *)aRStack_c0,1);
  pPVar11 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar11,0x66,pBVar1,(wstring *)asStack_f8,(Color *)aRStack_c0);
  *(PVZ2UIButton **)(this + 0x180) = pPVar11;
  FUN_05476c50(asStack_f8);
  nop();
  plVar23 = *(long **)(this + 0x180);
  iVar3 = FUN_041b3cec(0xd2);
  uVar8 = FUN_041b3cec(500);
  uVar9 = FUN_041b3cec(0x2d);
  (**(code **)(*plVar23 + 0x198))(plVar23,(*(int *)(this + 0x50) - iVar3) / 2,uVar8,iVar3,uVar9);
  pPVar11 = *(PVZ2UIButton **)(this + 0x180);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_f8,&DAT_06af0a00,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aRStack_c0,&DAT_06af0270,3);
  PVZ2UIButton::SetDialogStates(pPVar11,(PVZ2UIImage *)asStack_f8,(PVZ2UIImage *)aRStack_c0);
  pPVar11 = *(PVZ2UIButton **)(this + 0x180);
  FUN_05478178(aRStack_c0,L"[LANTERN_RIDDLES_NEXT]",asStack_f8);
  uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22);
  PVZ2UIButton::AddText(pPVar11,aRStack_c0,uVar14,0);
  FUN_05476c50(aRStack_c0);
  nop();
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x180));
  FUN_05478178(asStack_f8,&DAT_056f11a8,aRStack_110);
  Sexy::Color::Color((Color *)aRStack_c0,1);
  pPVar11 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar11,0x67,pBVar1,(wstring *)asStack_f8,(Color *)aRStack_c0);
  *(PVZ2UIButton **)(this + 0x188) = pPVar11;
  FUN_05476c50(asStack_f8);
  nop();
  iVar3 = *(int *)(this + 0x10c);
  iVar4 = *(int *)(this + 0x104);
  plVar23 = *(long **)(this + 0x188);
  iVar5 = FUN_041b3cec(0xa0);
  iVar6 = FUN_041b3cec(8);
  uVar8 = FUN_041b3cec(0x1ae);
  uVar9 = FUN_041b3cec(0x28);
  (**(code **)(*plVar23 + 0x198))(plVar23,((iVar4 + iVar3) - iVar5) - iVar6,uVar8,iVar5,uVar9);
  pPVar11 = *(PVZ2UIButton **)(this + 0x188);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_f8,&DAT_06af0a00,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aRStack_c0,&DAT_06af0270,3);
  PVZ2UIButton::SetDialogStates(pPVar11,(PVZ2UIImage *)asStack_f8,(PVZ2UIImage *)aRStack_c0);
  pPVar11 = *(PVZ2UIButton **)(this + 0x188);
  TodStringTranslate(L"[LANTERN_RIDDLES_CHEAT]");
  uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22);
  PVZ2UIButton::AddText(pPVar11,aRStack_c0,uVar14,0);
  FUN_05476c50(aRStack_c0);
  pPVar11 = *(PVZ2UIButton **)(this + 0x188);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aRStack_c0,&DAT_06af0210,1);
  PVZ2UIButton::AddImage(pPVar11,aRStack_c0,0);
  pPVar11 = *(PVZ2UIButton **)(this + 0x188);
  Sexy::StrFormat(L"%d",aRStack_c0,5);
  uVar14 = PrimeText_PotentialTypeface::Typeface
                     (PrimeText_Game::Typeface_CafeteriaBlack_19_ThickOutline);
  PVZ2UIButton::AddText(pPVar11,aRStack_c0,uVar14,0);
  FUN_05476c50(aRStack_c0);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x188));
  psVar15 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_f8,"peashooter");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar15);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_130,(RtWeakPtrBase *)aRStack_c0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_c0);
  std::string::~string(asStack_f8);
  nop();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_c0,(RtWeakPtrBase *)aRStack_130);
  this_01 = (PopAnimRig *)CreateStandalonePlantAnimRig(aRStack_c0,1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_c0);
  (**(code **)(*(long *)this_01 + 0x1a0))(this_01,0);
  *(PopAnimRig **)(this + 0x1b0) = this_01;
  PopAnimRig::SetDrawScale(this_01,0.4);
  pEVar16 = GameObject::CreateOutsideTable<Effect_PopAnim>();
  *(Effect_PopAnim **)(this + 0x1b8) = pEVar16;
  std::string::string((string *)aRStack_c0,"POPANIM_EFFECTS_SIGNREWARD_GET");
  GetPAMByName((string *)aRStack_c0);
  std::string::~string((string *)aRStack_c0);
  nop();
  pRVar17 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_128);
  Effect_PopAnim::CreatePopAnimRig
            (*(Effect_PopAnim **)(this + 0x1b8),(PopAnim *)pRVar17,(RtClass *)0x0);
  Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0x1b8),true);
  (**(code **)(**(long **)(this + 0x1b8) + 0x80))(0x3f19999a,*(long **)(this + 0x1b8));
  StandaloneEffect::SetKeepAlive(*(StandaloneEffect **)(this + 0x1b8),true);
  pEVar16 = GameObject::CreateOutsideTable<Effect_PopAnim>();
  *(Effect_PopAnim **)(this + 0x1c0) = pEVar16;
  std::string::string((string *)aRStack_c0,"POPANIM_EFFECTS_WRONG");
  GetPAMByName((string *)aRStack_c0);
  std::string::~string((string *)aRStack_c0);
  nop();
  pRVar17 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_120);
  Effect_PopAnim::CreatePopAnimRig
            (*(Effect_PopAnim **)(this + 0x1c0),(PopAnim *)pRVar17,(RtClass *)0x0);
  Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0x1c0),true);
  (**(code **)(**(long **)(this + 0x1c0) + 0x80))(0x3f4ccccd,*(long **)(this + 0x1c0));
  StandaloneEffect::SetKeepAlive(*(StandaloneEffect **)(this + 0x1c0),true);
  FUN_05478178(asStack_f8,&DAT_056f11a8,aRStack_110);
  Sexy::Color::Color((Color *)aRStack_c0,1);
  pPVar11 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar11,0x68,pBVar1,(wstring *)asStack_f8,(Color *)aRStack_c0);
  *(PVZ2UIButton **)(this + 0x1e8) = pPVar11;
  FUN_05476c50(asStack_f8);
  nop();
  plVar23 = *(long **)(this + 0x1e8);
  iVar3 = FUN_041b3cec(0x8c);
  uVar8 = FUN_041b3cec(0x20d);
  uVar9 = FUN_041b3cec(0x32);
  (**(code **)(*plVar23 + 0x198))(plVar23,(*(int *)(this + 0x50) - iVar3) / 2,uVar8,iVar3,uVar9);
  pPVar11 = *(PVZ2UIButton **)(this + 0x1e8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_f8,&DAT_06af0a00,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aRStack_c0,&DAT_06af0270,3);
  PVZ2UIButton::SetDialogStates(pPVar11,(PVZ2UIImage *)asStack_f8,(PVZ2UIImage *)aRStack_c0);
  pPVar11 = *(PVZ2UIButton **)(this + 0x1e8);
  TodStringTranslate(L"[LANTERN_RIDDLES_EXTRA]");
  uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22);
  PVZ2UIButton::AddText(pPVar11,aRStack_c0,uVar14,0);
  FUN_05476c50(aRStack_c0);
  pPVar11 = *(PVZ2UIButton **)(this + 0x1e8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aRStack_c0,&DAT_06af0210,1);
  PVZ2UIButton::AddImage(pPVar11,aRStack_c0,0);
  pPVar11 = *(PVZ2UIButton **)(this + 0x1e8);
  Sexy::StrFormat(L"%d",aRStack_c0,0xf);
  uVar14 = PrimeText_PotentialTypeface::Typeface
                     (PrimeText_Game::Typeface_CafeteriaBlack_19_ThickOutline);
  PVZ2UIButton::AddText(pPVar11,aRStack_c0,uVar14,0);
  FUN_05476c50(aRStack_c0);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x1e8));
  FUN_05478178(asStack_f8,&DAT_056f11a8,aRStack_110);
  Sexy::Color::Color((Color *)aRStack_c0,1);
  pPVar11 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar11,0x6a,pBVar1,(wstring *)asStack_f8,(Color *)aRStack_c0);
  *(PVZ2UIButton **)(this + 0x1f8) = pPVar11;
  FUN_05476c50(asStack_f8);
  nop();
  plVar23 = *(long **)(this + 0x1f8);
  iVar3 = FUN_041b3cec(0xd2);
  uVar8 = FUN_041b3cec(0x1fe);
  uVar9 = FUN_041b3cec(0x2d);
  (**(code **)(*plVar23 + 0x198))(plVar23,(*(int *)(this + 0x50) - iVar3) / 2,uVar8,iVar3,uVar9);
  pPVar11 = *(PVZ2UIButton **)(this + 0x1f8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_f8,&DAT_06af0a00,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aRStack_c0,&DAT_06af0270,3);
  PVZ2UIButton::SetDialogStates(pPVar11,(PVZ2UIImage *)asStack_f8,(PVZ2UIImage *)aRStack_c0);
  if (this[0x200] == (LanternRiddlesUI)0x0) {
    pPVar11 = *(PVZ2UIButton **)(this + 0x1f8);
    TodStringTranslate(L"[LANTERN_RIDDLES_BACK]");
    uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22);
    PVZ2UIButton::AddText(pPVar11,aRStack_c0,uVar14,0);
    FUN_05476c50(aRStack_c0);
  }
  else {
    pPVar11 = *(PVZ2UIButton **)(this + 0x1f8);
    TodStringTranslate(L"[LANTERN_RIDDLES_PRIZE]");
    uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22);
    PVZ2UIButton::AddText(pPVar11,aRStack_c0,uVar14,0);
    FUN_05476c50(aRStack_c0);
  }
  Set8BytesTo0(asStack_118);
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  if (local_70 != '\0') {
    LanternRiddlesInfo::LanternRiddlesInfo((LanternRiddlesInfo *)aRStack_c0);
    cVar2 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aRStack_c0);
    uVar14 = local_a8;
    if (cVar2 != '\0') {
      uVar24 = 0;
      uVar21 = FUN_041b3ae8(local_a8,local_a0);
      if (uVar21 != 0) {
        do {
          piVar22 = (int *)FUN_041b3b10(uVar14,uVar24);
          if (*piVar22 == 0xfad) {
            *(int *)(this + 0x1d4) = piVar22[1];
          }
          else {
            iVar3 = PlantChipNameMapperServerID::GetInstance();
            FUN_041b3b10(local_a8,uVar24);
            NameMapperBase::GetNameForId(iVar3);
            FUN_05474278(this + 0x1c8,asStack_f8);
            std::string::~string(asStack_f8);
            uVar14 = local_a8;
            lVar19 = FUN_041b3b10(local_a8,uVar24);
            *(undefined4 *)(this + 0x1d0) = *(undefined4 *)(lVar19 + 4);
            uVar21 = FUN_041b3ae8(uVar14,local_a0);
          }
          uVar24 = uVar24 + 1;
        } while (uVar24 < uVar21);
      }
      iVar3 = PlantNameMapperServerID::GetInstance();
      NameMapperBase::GetNameForId(iVar3);
      FUN_05474278(asStack_118,asStack_f8);
      std::string::~string(asStack_f8);
    }
    LanternRiddlesInfo::~LanternRiddlesInfo((LanternRiddlesInfo *)aRStack_c0);
  }
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x1f8));
  pUVar18 = ::operator_new(0x148);
  UIRewardFrame::UIRewardFrame(pUVar18,3,this + 0x1c8,*(undefined4 *)(this + 0x1d0),1);
  iVar3 = *(int *)(this + 0x10c);
  uVar8 = *(undefined4 *)(pUVar18 + 0x50);
  iVar4 = *(int *)(this + 0x104);
  *(UIRewardFrame **)(this + 0x208) = pUVar18;
  iVar5 = FUN_041b38f8(uVar8);
  iVar6 = FUN_041b3cec(0x82);
  (**(code **)(*(long *)pUVar18 + 0x1a8))
            (pUVar18,(iVar3 / 3 + iVar4) - iVar5 / 2,iVar6 + *(int *)(this + 0x108));
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x208));
  std::string::string((string *)aRStack_c0,"coin");
  pUVar18 = ::operator_new(0x148);
  UIRewardFrame::UIRewardFrame(pUVar18,0,aRStack_c0,*(undefined4 *)(this + 0x1d4),1);
  *(UIRewardFrame **)(this + 0x210) = pUVar18;
  std::string::~string((string *)aRStack_c0);
  nop();
  plVar23 = *(long **)(this + 0x210);
  iVar3 = *(int *)(this + 0x10c);
  iVar4 = *(int *)(this + 0x104);
  iVar5 = FUN_041b38f8((int)plVar23[10]);
  iVar6 = FUN_041b3cec(0x82);
  (**(code **)(*plVar23 + 0x1a8))
            (plVar23,((iVar3 << 1) / 3 + iVar4) - iVar5 / 2,iVar6 + *(int *)(this + 0x108));
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x210));
  psVar15 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar15);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_110,(RtWeakPtrBase *)aRStack_c0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_c0);
  lVar19 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_110);
  pUVar18 = ::operator_new(0x148);
  UIRewardFrame::UIRewardFrame(pUVar18,2,lVar19 + 8,1,1);
  iVar3 = *(int *)(pUVar18 + 0x50);
  lVar19 = *(long *)pUVar18;
  *(UIRewardFrame **)(this + 0x218) = pUVar18;
  (**(code **)(lVar19 + 0x198))
            (pUVar18,*(int *)(this + 0x104) + (*(int *)(this + 0x10c) + iVar3 * -2) / 2,
             *(int *)(this + 0x108) + *(int *)(this + 0x110) / 2,iVar3 << 1,
             *(int *)(pUVar18 + 0x54) << 1);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x218));
  std::string::string((string *)aRStack_c0,"POPANIM_EFFECTS_PLANTBACK_LIGHT_WHITE");
  GetPAMByName((string *)aRStack_c0);
  std::string::~string((string *)aRStack_c0);
  nop();
  pEVar16 = GameObject::CreateOutsideTable<Effect_PopAnim>();
  *(Effect_PopAnim **)(this + 0x220) = pEVar16;
  pPVar20 = (PopAnim *)
            Sexy::RtWeakPtr<Sexy::PopAnim>::GetPtr((RtWeakPtr<Sexy::PopAnim> *)asStack_f8);
  Effect_PopAnim::CreatePopAnimRig(pEVar16,pPVar20,(RtClass *)0x0);
  Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0x220),true);
  pSVar26 = *(StandaloneEffect **)(this + 0x220);
  lVar19 = *(long *)(this + 0x218);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)aRStack_c0,(float)(*(int *)(lVar19 + 0x48) + *(int *)(lVar19 + 0x50) / 2),
             (float)(*(int *)(lVar19 + 0x4c) + *(int *)(lVar19 + 0x54) / 2));
  StandaloneEffect::SetScreenSpaceOrigin(pSVar26,(SexyVector2 *)aRStack_c0,900000);
  StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x220),false);
  (**(code **)(**(long **)(this + 0x220) + 0x80))(0x3e99999a,*(long **)(this + 0x220));
  uVar14 = *(undefined8 *)(this + 0x220);
  std::string::string((string *)aRStack_c0,"anim");
  Effect_PopAnim::PlayLoopingAnimation(pEVar28._0_4_,uVar14,aRStack_c0,0);
  std::string::~string((string *)aRStack_c0);
  nop();
  if ((this[0x100] == (LanternRiddlesUI)0x0) || (*(int *)(this + 0x164) == 5)) {
    SetState(this,2);
  }
  else if (*(int *)(this + 0x164) < 1) {
    SetState(this,0);
  }
  else {
    SetState(this,1);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_f8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_110);
  ActiveItem::~ActiveItem(aAStack_88);
  std::string::~string(asStack_118);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_120);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_128);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_130);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LanternRiddlesUI::LanternRiddlesUI(bool) */

void __thiscall LanternRiddlesUI::LanternRiddlesUI(LanternRiddlesUI *this,bool param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  vector *pvVar5;
  time_t __time1;
  double dVar6;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined1 auStack_a8 [8];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  Delegate0 aDStack_88 [24];
  char local_70;
  time_t local_40;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  this[0x100] = (LanternRiddlesUI)param_1;
  *(undefined ***)this = &PTR_GetClass_067ff2a0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_067ff5d8;
  Sexy::Insets::Insets((Insets *)(this + 0x104));
  Sexy::Insets::Insets((Insets *)(this + 0x114));
  FUN_05476574(this + 0x138);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x148));
  FUN_05476574(this + 0x170);
  FUN_05476574(this + 0x178);
  Set8BytesTo0(this + 0x1c8);
  FUN_05476574(this + 0x1d8);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnRefreshLanternUIState);
  Sexy::Delegate0::Delegate0<LanternRiddlesUI,void(LanternRiddlesUI::*)()>
            (aDStack_88,(CBMemberTranslatorX *)&local_a0);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::RefreshLanternUIState,aDStack_88);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLanternRiddlesComplete);
  local_d0 = local_a0;
  uStack_c8 = uStack_98;
  local_c0 = local_90;
  MessageRouter::
  Subscribe<S2C_LanternRiddlesResult_const&,Sexy::CBMemberTranslatorX<LanternRiddlesUI,void(LanternRiddlesUI::*)(S2C_LanternRiddlesResult_const&)>>
            ((MessageRouter *)puVar1,Message::CompeleteTodayLanternRiddles,&local_d0);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  cVar2 = PlayerInfo::IsTodayRiddleTaskComplete();
  if (cVar2 != '\0') {
    m_currentRiddleCount = 5;
    m_correctAnswerCount = FUN_041b3950(*(undefined4 *)(this_01 + 0xf5c));
  }
  *(undefined4 *)(this + 0xf8) = 0xffffffff;
  *(undefined4 *)(this + 0xfc) = 0xffffffff;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  TodStringTranslate(L"[LANTERN_RIDDLES_DESC]");
  FUN_054766c8(this + 0x138,auStack_a8);
  FUN_05476c50(auStack_a8);
  *(undefined8 *)(this + 0x140) = 0;
  uVar3 = FUN_041b3944(*(undefined4 *)(this_01 + 0xf60));
  *(undefined8 *)(this + 400) = 0;
  *(undefined4 *)(this + 0x160) = 0xffffffff;
  *(undefined4 *)(this + 0x124) = uVar3;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  this[0x168] = (LanternRiddlesUI)0x0;
  this[0x169] = (LanternRiddlesUI)0x0;
  *(undefined4 *)(this + 0x164) = m_currentRiddleCount;
  *(undefined4 *)(this + 0x16c) = m_correctAnswerCount;
  pvVar5 = (vector *)PlayerInfo::GetRiddlesGotToday(this_01);
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x148),pvVar5);
  FUN_054772c4(this + 0x170,&DAT_056f11a8);
  FUN_054772c4(this + 0x178,&DAT_056f11a8);
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined8 *)(this + 0x1e8) = 0;
  FUN_054772c4(this + 0x1d8,&DAT_056f11a8);
  uVar3 = FUN_041b3970(*(undefined4 *)(this_01 + 0xf64));
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined4 *)(this + 0x1f0) = uVar3;
  this[0x200] = (LanternRiddlesUI)0x0;
  *(undefined4 *)(this + 0x1d0) = 0;
  *(undefined4 *)(this + 0x1d4) = 0;
  *(undefined8 *)(this + 0x220) = 0;
  *(undefined4 *)(this + 0x128) = 0;
  iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar4);
  if (local_70 != '\0') {
    __time1 = LawnApp::GetRealBeijingTime(gLawnApp);
    dVar6 = difftime(__time1,local_40);
    *(int *)(this + 0x128) = (int)(dVar6 * 1.1574074074074073e-05);
  }
  InitView(this);
  ActiveItem::~ActiveItem((ActiveItem *)aDStack_88);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* LanternRiddlesUI::Update() */

void __thiscall LanternRiddlesUI::Update(LanternRiddlesUI *this)

{
  PopAnimRig *this_00;
  float fVar1;
  float fVar2;
  
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  this_00 = *(PopAnimRig **)(this + 0x1b0);
  if (this_00 != (PopAnimRig *)0x0) {
    fVar1 = (float)PVZ_RealT();
    fVar2 = (float)PVZ_RealDt();
    PopAnimRig::UpdateAnim(this_00,fVar1,fVar2);
  }
  if (*(StandaloneEffect **)(this + 0x130) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0x130));
  }
  if (*(StandaloneEffect **)(this + 0x1b8) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0x1b8));
  }
  if (*(StandaloneEffect **)(this + 0x1c0) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0x1c0));
  }
  if (*(StandaloneEffect **)(this + 0x220) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0x220));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LanternRiddlesUI::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
LanternRiddlesUI::DrawAll(LanternRiddlesUI *this,ModalFlags *param_1,Graphics *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,0,0);
  DrawSpaceSpiral(param_2,0xff,aIStack_18);
  iVar1 = FUN_041b3cec(700);
  iVar2 = FUN_041b3cec(0x46);
  Sexy::Insets::Insets
            ((Insets *)&local_38,(*(int *)(this + 0x50) - iVar1) / 2,iVar2,iVar1,
             *(int *)(this + 0x54) - iVar2);
  iVar1 = FUN_041b3cec(10);
  iVar2 = FUN_041b3cec(0x14);
  Sexy::Insets::Insets
            (aIStack_28,local_38 + iVar1,iVar1 + local_34,local_30 - iVar2,local_2c - iVar2);
  Sexy::Insets::Insets(aIStack_18,aIStack_28);
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0908);
  DrawImageTiled(0x3f800000,param_2,aIStack_18,uVar3);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&local_38);
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af06d0);
  Draw9SliceImage(param_2,aIStack_18,uVar3);
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  if ((*(int *)(this + 0xf8) == 1) && (this[0x169] != (LanternRiddlesUI)0x0)) {
    if (*(StandaloneEffect **)(this + 0x1b8) != (StandaloneEffect *)0x0) {
      StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0x1b8),param_2);
    }
    if (*(StandaloneEffect **)(this + 0x1c0) != (StandaloneEffect *)0x0) {
      StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0x1c0),param_2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LanternRiddlesUI::Draw(Sexy::Graphics*) */

void __thiscall LanternRiddlesUI::Draw(LanternRiddlesUI *this,Graphics *param_1)

{
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
  switch(*(undefined4 *)(this + 0xf8)) {
  case 0:
    DrawMainState(this,param_1);
    break;
  case 1:
    DrawRiddleState(this,param_1);
    break;
  case 2:
    DrawEndState(this,param_1);
    break;
  case 3:
    DrawPrizeState(this,param_1);
  }
  nop();
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

