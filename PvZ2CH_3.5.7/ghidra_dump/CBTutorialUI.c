// Class: CBTutorialUI


/* CBTutorialUI::HideAllButtonAndAnims() */

void __thiscall CBTutorialUI::HideAllButtonAndAnims(CBTutorialUI *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x160);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,0);
    (**(code **)(**(long **)(this + 0x160) + 0x188))(*(long **)(this + 0x160),1);
  }
  plVar1 = *(long **)(this + 0x168);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,0);
    (**(code **)(**(long **)(this + 0x168) + 0x188))(*(long **)(this + 0x168),1);
  }
  return;
}


/* CBTutorialUI::RecoverAllButtonAndAnims() */

void __thiscall CBTutorialUI::RecoverAllButtonAndAnims(CBTutorialUI *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x160);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,1);
    (**(code **)(**(long **)(this + 0x160) + 0x188))(*(long **)(this + 0x160),0);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CBTutorialUI::~CBTutorialUI() */

void __thiscall CBTutorialUI::~CBTutorialUI(CBTutorialUI *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0x120) = &PTR_ButtonPress_067eebc0;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_067ee880;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_CBTutorial");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  PopingWidget::~PopingWidget((PopingWidget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CBTutorialUI::~CBTutorialUI() */

void __thiscall CBTutorialUI::~CBTutorialUI(CBTutorialUI *this)

{
  ~CBTutorialUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CBTutorialUI::ButtonDepress(int) */

void __thiscall CBTutorialUI::ButtonDepress(CBTutorialUI *this,int param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x65) {
    iVar1 = (*(int *)(this + 300) + 1) % 2;
    *(int *)(this + 300) = iVar1;
    plVar3 = *(long **)(this + 0x168);
    if (iVar1 == 0) {
      (**(code **)(*plVar3 + 0x158))(plVar3);
      (**(code **)(**(long **)(this + 0x168) + 0x188))(*(long **)(this + 0x168),1);
      lVar4 = *(long *)(this + 0x160);
      if (lVar4 == 0) goto LAB_041453c8;
      pwVar2 = L"[NEXT_STEP]";
    }
    else {
      (**(code **)(*plVar3 + 0x158))(plVar3,1);
      (**(code **)(**(long **)(this + 0x168) + 0x188))(*(long **)(this + 0x168),0);
      lVar4 = *(long *)(this + 0x160);
      if (lVar4 == 0) goto LAB_041453c8;
      pwVar2 = L"[PREV_STEP]";
    }
    TodStringTranslate(pwVar2);
    FUN_054766c8(lVar4 + 0xd8,auStack_10);
    FUN_05476c50(auStack_10);
  }
  else if (param_1 == 0x66) {
    LawnApp::KillCBTutorialUI(gLawnApp);
  }
LAB_041453c8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to CBTutorialUI::ButtonDepress(int) */

void __thiscall CBTutorialUI::ButtonDepress(CBTutorialUI *this,int param_1)

{
  ButtonDepress(this + -0x120,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CBTutorialUI::CBTutorialUI() */

void __thiscall CBTutorialUI::CBTutorialUI(CBTutorialUI *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PopingWidget::PopingWidget((PopingWidget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x120));
  this[0x128] = (CBTutorialUI)0x0;
  this[0x129] = (CBTutorialUI)0x0;
  *(undefined ***)this = &PTR_GetClass_067ee880;
  *(undefined ***)(this + 0x120) = &PTR_ButtonPress_067eebc0;
  *(undefined4 *)(this + 300) = 0;
  Sexy::Insets::Insets((Insets *)(this + 0x130));
  Sexy::Insets::Insets((Insets *)(this + 0x140));
  Sexy::Insets::Insets((Insets *)(this + 0x150));
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_CBTutorial");
  LawnApp::LoadGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CBTutorialUI::InitView() */

void __thiscall CBTutorialUI::InitView(CBTutorialUI *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  LotteryResultProgressBar *pLVar9;
  SalesProgressBar *pSVar10;
  PVZ2UIButton *pPVar11;
  undefined8 uVar12;
  long *plVar13;
  code *pcVar14;
  int iVar15;
  int local_98;
  undefined1 auStack_88 [8];
  int local_80;
  wstring awStack_78 [4];
  int local_74;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  this[0x59] = (CBTutorialUI)0x0;
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aeea20);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aeea20);
  iVar2 = SalesProgressBar::GetCurrentLevel(pSVar10);
  iVar15 = (int)((double)iVar2 * 0.8);
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aee9a8);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aee9a8);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar10);
  iVar5 = FUN_04145cb0(0x19);
  iVar2 = iVar5 * 2 + iVar3;
  iVar6 = FUN_04145cb0(5);
  iVar6 = iVar4 + iVar5 * 2 + iVar15 + iVar6;
  iVar5 = *(int *)(this + 0x50) - iVar2 >> 1;
  iVar8 = *(int *)(this + 0x54) - iVar6 >> 1;
  Sexy::Insets::Insets((Insets *)&local_40,iVar5,iVar8,iVar2,iVar6);
  PopingWidget::SetMainRect((PopingWidget *)this,(Insets *)&local_40);
  iVar7 = FUN_04145cb0(0x19);
  Sexy::Insets::Insets((Insets *)&local_40,iVar7 + iVar5,iVar8 + iVar7,iVar3,iVar4);
  *(undefined8 *)(this + 0x130) = local_40;
  *(undefined8 *)(this + 0x138) = uStack_38;
  iVar3 = FUN_04145cb0(0x14);
  Sexy::Insets::Insets
            ((Insets *)&local_40,(iVar5 + iVar2 / 2) - (int)((double)iVar1 * 2.5) / 2,
             ((iVar8 + iVar6) - iVar15) - iVar3,(int)((double)iVar1 * 2.5),iVar15);
  *(undefined8 *)(this + 0x140) = local_40;
  *(undefined8 *)(this + 0x148) = uStack_38;
  FUN_05478178(awStack_78,L"[NEXT_STEP]",auStack_88);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar11 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar11,0x65,(ButtonListener *)(this + 0x120),awStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0x160) = pPVar11;
  FUN_05476c50(awStack_78);
  nop();
  pPVar11 = *(PVZ2UIButton **)(this + 0x160);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06aeea20,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06aeeba0,3);
  PVZ2UIButton::SetDialogStates(pPVar11,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  (**(code **)(**(long **)(this + 0x160) + 0x1a0))(*(long **)(this + 0x160),this + 0x140);
  plVar13 = *(long **)(this + 0x160);
  pcVar14 = *(code **)(*plVar13 + 800);
  uVar12 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
  (*pcVar14)(plVar13,uVar12);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x160));
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aee980);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aee980);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar10);
  PopingWidget::GetMainRect();
  PopingWidget::GetMainRect();
  iVar5 = FUN_04145cb0(0xfffffff1);
  PopingWidget::GetMainRect();
  iVar8 = FUN_04145cb0(10);
  Sexy::Insets::Insets
            ((Insets *)&local_40,((local_98 + local_80) - iVar2 / 2) + iVar5,
             (local_74 - iVar6 / 2) + iVar8,iVar2,iVar6);
  pPVar11 = *(PVZ2UIButton **)(this + 0x168);
  *(undefined8 *)(this + 0x150) = local_40;
  *(undefined8 *)(this + 0x158) = uStack_38;
  if (pPVar11 == (PVZ2UIButton *)0x0) {
    FUN_05478178(awStack_78,&DAT_056f11a8,auStack_88);
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar11 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar11,0x66,(ButtonListener *)(this + 0x120),awStack_78,(Color *)&local_40);
    *(PVZ2UIButton **)(this + 0x168) = pPVar11;
    FUN_05476c50(awStack_78);
    nop();
    pPVar11 = *(PVZ2UIButton **)(this + 0x168);
    if (pPVar11 == (PVZ2UIButton *)0x0) goto LAB_0414900c;
  }
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06aee980,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06aeeae0,3);
  PVZ2UIButton::SetDialogStates(pPVar11,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  (**(code **)(**(long **)(this + 0x168) + 0x1a0))(*(long **)(this + 0x168),this + 0x150);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x168));
  (**(code **)(**(long **)(this + 0x168) + 0x158))(*(long **)(this + 0x168),0);
  (**(code **)(**(long **)(this + 0x168) + 0x188))(*(long **)(this + 0x168),1);
LAB_0414900c:
  *(undefined4 *)(this + 300) = 0;
  (**(code **)(*(long *)this + 0x318))(this);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CBTutorialUI::Draw(Sexy::Graphics*) */

void __thiscall CBTutorialUI::Draw(CBTutorialUI *this,Graphics *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  Insets aIStack_50 [16];
  Insets aIStack_40 [8];
  undefined8 local_38;
  long local_8;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  
  local_8 = ___stack_chk_guard;
  bVar1 = CachedUIResourcePtr::operator_cast_to_bool((CachedUIResourcePtr *)&DAT_06aee898);
  if (bVar1) {
    uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aee898);
    PopingWidget::GetMainRect();
    PopingWidget::DrawPoping9SliceImage((PopingWidget *)this,param_1,uVar3,aIStack_40);
  }
  if (*(int *)(this + 300) == 0) {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06aee9a8;
  }
  else {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06aeeab8;
  }
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
  Sexy::Insets::Insets(aIStack_40,(Insets *)(this + 0x130));
  PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar3,aIStack_40);
  cVar2 = FUN_041457ac(this[0x115]);
  if ((cVar2 == '\0') && (*(long *)(this + 0x160) != 0)) {
    PVZ2UIButton::GetImageNormal();
    Sexy::Insets::Insets(aIStack_50,(Insets *)(this + 0x140));
    PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,local_38,aIStack_50);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* CBTutorialUI::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall CBTutorialUI::DrawAll(CBTutorialUI *this,ModalFlags *param_1,Graphics *param_2)

{
  LawnApp::DrawDarkeningLayer(gLawnApp,param_2,75.0);
  TenYearRecordInfoPage::DrawAll((TenYearRecordInfoPage *)this,param_1,param_2);
  return;
}

