// Class: GetNewerBagUI


/* GetNewerBagUI::EditWidgetText(int, std::wstring const&) */

void GetNewerBagUI::EditWidgetText(int param_1,wstring *param_2)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *(long *)((ulong)(uint)param_1 + 0xf0);
  *(undefined1 *)(lVar2 + 0x16c) = 0;
  cVar1 = FUN_054765e8(lVar2 + 0xe8);
  plVar3 = *(long **)((ulong)(uint)param_1 + 0x108);
  if (cVar1 == '\0') {
    (**(code **)(*plVar3 + 0x188))(plVar3);
    return;
  }
  (**(code **)(*plVar3 + 0x188))(plVar3,1);
  return;
}


/* non-virtual thunk to GetNewerBagUI::EditWidgetText(int, std::wstring const&) */

void __thiscall GetNewerBagUI::EditWidgetText(GetNewerBagUI *this,int param_1,wstring *param_2)

{
  EditWidgetText((int)this + -0xe0,(wstring *)(ulong)(uint)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GetNewerBagUI::~GetNewerBagUI() */

void __thiscall GetNewerBagUI::~GetNewerBagUI(GetNewerBagUI *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined **)(this + 0xd8) = &DAT_06845ff0;
  *(undefined ***)(this + 0xe0) = &PTR_EditWidgetText_06846038;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06845c90;
  *(undefined ***)(this + 0xe8) = &PTR_ToString_06846068;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_AwardDialog");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  FUN_05476c50(this + 0x148);
  FUN_05476c50(this + 0x140);
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GetNewerBagUI::~GetNewerBagUI() */

void __thiscall GetNewerBagUI::~GetNewerBagUI(GetNewerBagUI *this)

{
  ~GetNewerBagUI(this);
  AK::FreeHook(this);
  return;
}


/* GetNewerBagUI::onCloseDialog() */

void GetNewerBagUI::onCloseDialog(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  return;
}


/* GetNewerBagUI::AllowChar(int, wchar_t) */

undefined8 __thiscall GetNewerBagUI::AllowChar(GetNewerBagUI *this,int param_1,wchar_t param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = iswalnum(param_2);
  if ((iVar1 == 0) &&
     ((param_2 != L' ' || (lVar3 = FUN_054765c4(*(long *)(this + 0xf0) + 0xe8), lVar3 == 0)))) {
    uVar2 = EA::Text::IsCharAlphabetic((wchar16)param_2);
    return uVar2;
  }
  return 1;
}


/* non-virtual thunk to GetNewerBagUI::AllowChar(int, wchar_t) */

void __thiscall GetNewerBagUI::AllowChar(GetNewerBagUI *this,int param_1,wchar_t param_2)

{
  AllowChar(this + -0xe0,param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GetNewerBagUI::setupScreen() */

void __thiscall GetNewerBagUI::setupScreen(GetNewerBagUI *this)

{
  ButtonListener *pBVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  SalesProgressBar *this_00;
  PVZ2UIEditWidget *this_01;
  PVZ2UIButton *pPVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  code *pcVar11;
  undefined1 auStack_88 [8];
  wstring awStack_80 [8];
  wstring awStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_043c5ae0(0x208);
  iVar3 = FUN_043c5ae0(100);
  iVar4 = FUN_043c5ae0(0x1c2);
  pBVar1 = (ButtonListener *)(this + 0xd8);
  Sexy::Insets::Insets((Insets *)&local_40,(*(int *)(this + 0x50) - iVar2) / 2,iVar3,iVar2,iVar4);
  *(undefined8 *)(this + 0x110) = local_40;
  *(undefined8 *)(this + 0x118) = uStack_38;
  FUN_05478178(awStack_80,&DAT_056f11a8,(Insets *)&local_40);
  nop();
  iVar3 = FUN_043c5ae0(0x121);
  iVar2 = *(int *)(this + 0x50);
  iVar4 = FUN_043c5ae0(0x1c8);
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04808);
  iVar5 = SalesProgressBar::GetCurrentLevel(this_00);
  Sexy::Insets::Insets((Insets *)&local_40,(iVar2 - iVar3) / 2,iVar4,iVar3,iVar5);
  this_01 = ::operator_new(0x1b8);
  PVZ2UIEditWidget::PVZ2UIEditWidget
            (this_01,(TRect *)&local_40,0,(EditListener *)(this + 0xe0),awStack_80,true);
  lVar9 = *(long *)this_01;
  *(PVZ2UIEditWidget **)(this + 0xf0) = this_01;
  (**(code **)(lVar9 + 0x170))(this_01,2,&PrimeText_Game::Color_Description_Brown);
  plVar10 = *(long **)(this + 0xf0);
  pcVar11 = *(code **)(*plVar10 + 0x170);
  Sexy::Color::Color((Color *)&local_40,1);
  (*pcVar11)(plVar10,0,(Insets *)&local_40);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf0));
  FUN_05478178(awStack_78,L"[BUTTON_CANCEL]",auStack_88);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar7 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar7,1000,pBVar1,awStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0xf8) = pPVar7;
  FUN_05476c50(awStack_78);
  nop();
  plVar10 = *(long **)(this + 0xf8);
  pcVar11 = *(code **)(*plVar10 + 0x198);
  iVar3 = FUN_043c5ae0(100);
  iVar4 = FUN_043c5ae0(0x55);
  iVar2 = *(int *)(this + 0x50);
  uVar6 = FUN_043c5ae0(0x208);
  lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04880);
  (*pcVar11)(plVar10,(iVar2 - iVar3) / 2 - iVar4,uVar6,iVar3,*(undefined4 *)(lVar9 + 0x3c));
  pPVar7 = *(PVZ2UIButton **)(this + 0xf8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b04a40,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b04808,3);
  PVZ2UIButton::SetDialogStates(pPVar7,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  plVar10 = *(long **)(this + 0xf8);
  pcVar11 = *(code **)(*plVar10 + 800);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
  (*pcVar11)(plVar10,uVar8);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf8));
  FUN_05478178(awStack_78,L"[PLANT_OBTAIN]",auStack_88);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar7 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar7,0x3e9,pBVar1,awStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0x108) = pPVar7;
  FUN_05476c50(awStack_78);
  nop();
  plVar10 = *(long **)(this + 0x108);
  pcVar11 = *(code **)(*plVar10 + 0x198);
  iVar3 = FUN_043c5ae0(100);
  iVar4 = FUN_043c5ae0(0x55);
  iVar2 = *(int *)(this + 0x50);
  uVar6 = FUN_043c5ae0(0x208);
  lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04880);
  (*pcVar11)(plVar10,iVar4 + (iVar2 - iVar3) / 2,uVar6,iVar3,*(undefined4 *)(lVar9 + 0x3c));
  pPVar7 = *(PVZ2UIButton **)(this + 0x108);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b04a40,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b04808,3);
  PVZ2UIButton::SetDialogStates(pPVar7,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  plVar10 = *(long **)(this + 0x108);
  pcVar11 = *(code **)(*plVar10 + 800);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
  (*pcVar11)(plVar10,uVar8);
  (**(code **)(**(long **)(this + 0x108) + 0x188))(*(long **)(this + 0x108),1);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x108));
  FUN_05478178(awStack_78,L"[BUTTON_OK]",auStack_88);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar7 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar7,0x3ea,pBVar1,awStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0x100) = pPVar7;
  FUN_05476c50(awStack_78);
  nop();
  plVar10 = *(long **)(this + 0x100);
  pcVar11 = *(code **)(*plVar10 + 0x198);
  iVar3 = FUN_043c5ae0(100);
  iVar2 = *(int *)(this + 0x50);
  uVar6 = FUN_043c5ae0(0x208);
  lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04880);
  (*pcVar11)(plVar10,(iVar2 - iVar3) / 2,uVar6,iVar3,*(undefined4 *)(lVar9 + 0x3c));
  pPVar7 = *(PVZ2UIButton **)(this + 0x100);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b04a40,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b04808,3);
  PVZ2UIButton::SetDialogStates(pPVar7,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  plVar10 = *(long **)(this + 0x100);
  pcVar11 = *(code **)(*plVar10 + 800);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
  (*pcVar11)(plVar10,uVar8);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x100));
  (**(code **)(**(long **)(this + 0x100) + 0x158))(*(long **)(this + 0x100),0);
  FUN_05476c50(awStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GetNewerBagUI::drawShadedBox(Sexy::Graphics*, Sexy::TRect<int>) */

void __thiscall
GetNewerBagUI::drawShadedBox(undefined8 param_1_00,Graphics *param_1,Insets *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  Image *pIVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  GraphicsAutoState aGStack_20 [8];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar9 = 0;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
  lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04938);
  iVar1 = *(int *)(lVar5 + 0x38);
  Sexy::Insets::Insets((Insets *)&local_18);
  fVar10 = (float)(iVar1 / 3);
  local_14 = *(int *)(param_3 + 4) + (int)(fVar10 * 0.35);
  local_18 = *(int *)param_3 + (int)(fVar10 * 0.43);
  local_10 = *(int *)(param_3 + 8) + (int)(fVar10 * 0.43) * -2;
  local_c = (*(int *)(param_3 + 0xc) - (int)(fVar10 * 0.35)) - (int)(fVar10 * 0.4);
  Sexy::Graphics::SetClipRect(param_1,(TRect *)&local_18);
  iVar1 = *(int *)(param_3 + 0xc);
  lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04b48);
  iVar8 = *(int *)(param_3 + 8);
  iVar4 = 0;
  if (*(int *)(lVar5 + 0x3c) != 0) {
    iVar4 = iVar1 / *(int *)(lVar5 + 0x3c);
  }
  lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04b48);
  iVar1 = 0;
  if (*(int *)(lVar5 + 0x38) != 0) {
    iVar1 = iVar8 / *(int *)(lVar5 + 0x38);
  }
  if (-1 < iVar1) {
    do {
      if (-2 < iVar4) {
        iVar8 = 0;
        do {
          lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04b48);
          iVar2 = *(int *)(lVar5 + 0x38);
          lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04b48);
          iVar3 = iVar8 * *(int *)(lVar5 + 0x3c);
          iVar8 = iVar8 + 1;
          pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04b48);
          Sexy::Graphics::DrawImage(param_1,pIVar6,iVar9 * iVar2,iVar3);
        } while (iVar8 != iVar4 + 2);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 <= iVar1);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  Sexy::Insets::Insets((Insets *)&local_18,param_3);
  uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04938);
  Draw9SliceImage(param_1,(Insets *)&local_18,uVar7);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GetNewerBagUI::Draw(Sexy::Graphics*) */

void __thiscall GetNewerBagUI::Draw(GetNewerBagUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  Image *pIVar10;
  LotteryResultProgressBar *pLVar11;
  SalesProgressBar *pSVar12;
  int iVar13;
  float fVar14;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_1,0.5);
  Sexy::Graphics::Translate(param_1,*(int *)(this + 0x110),*(int *)(this + 0x114));
  Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x118),*(int *)(this + 0x11c));
  Sexy::Insets::Insets(aIStack_18,aIStack_28);
  drawShadedBox(this,param_1,aIStack_18);
  Sexy::Graphics::Translate(param_1,-*(int *)(this + 0x110),-*(int *)(this + 0x114));
  lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04938);
  iVar1 = *(int *)(this + 0x110);
  iVar7 = *(int *)(this + 0x11c);
  iVar4 = *(int *)(this + 0x114);
  fVar14 = (float)(*(int *)(lVar8 + 0x38) / 3);
  iVar13 = (int)(fVar14 * 0.43);
  iVar2 = FUN_043c5ae0(0x88);
  iVar3 = FUN_043c5ae0(3);
  Sexy::Insets::Insets
            (aIStack_18,iVar13 + iVar1,(((iVar4 + iVar7) - iVar2) - (int)(fVar14 * 0.4)) - iVar3,
             *(int *)(this + 0x118) + iVar13 * -2,iVar2);
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b048d0);
  Draw3SliceImage(param_1,aIStack_18,uVar9);
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04a98);
  iVar1 = *(int *)(this + 0x50);
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04a98);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  iVar7 = *(int *)(this + 0x54);
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04a98);
  iVar2 = SalesProgressBar::GetCurrentLevel(pSVar12);
  iVar3 = FUN_043c5ae0(0x23);
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04a98);
  iVar13 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04a98);
  iVar5 = SalesProgressBar::GetCurrentLevel(pSVar12);
  Sexy::Graphics::DrawImage
            (param_1,pIVar10,(iVar1 - iVar4) / 2,(iVar7 - iVar2) / 2 - iVar3,iVar13,iVar5);
  if (this[0x121] == (GetNewerBagUI)0x0) {
    pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b048a8);
    iVar1 = *(int *)(this + 0x50);
    pLVar11 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b048a8);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
    iVar7 = *(int *)(this + 0x54);
    pSVar12 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b048a8);
    iVar2 = SalesProgressBar::GetCurrentLevel(pSVar12);
    iVar3 = FUN_043c5ae0(0x23);
    pLVar11 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b048a8);
    iVar13 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
    pSVar12 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b048a8);
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar12);
    Sexy::Graphics::DrawImage
              (param_1,pIVar10,(iVar1 - iVar4) / 2,(iVar7 - iVar2) / 2 - iVar3,iVar13,iVar5);
  }
  else {
    if (*(LotteryResultProgressBar **)(this + 0x138) != (LotteryResultProgressBar *)0x0) {
      iVar1 = *(int *)(this + 0x50);
      iVar4 = LotteryResultProgressBar::GetCurrentLevel
                        (*(LotteryResultProgressBar **)(this + 0x138));
      iVar7 = *(int *)(this + 0x54);
      iVar2 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x130));
      iVar3 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x138));
      iVar13 = FUN_043c5ae0(0x30);
      iVar5 = LotteryResultProgressBar::GetCurrentLevel
                        (*(LotteryResultProgressBar **)(this + 0x138));
      pSVar12 = *(SalesProgressBar **)(this + 0x138);
      iVar6 = SalesProgressBar::GetCurrentLevel(pSVar12);
      Sexy::Graphics::DrawImage
                (param_1,(Image *)pSVar12,(iVar1 - iVar4) / 2,((iVar7 - iVar2) / 2 - iVar3) - iVar13
                 ,iVar5,iVar6);
    }
    iVar1 = *(int *)(this + 0x50);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x130));
    iVar7 = *(int *)(this + 0x54);
    iVar2 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x130));
    iVar3 = FUN_043c5ae0(0x23);
    iVar13 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x130))
    ;
    pSVar12 = *(SalesProgressBar **)(this + 0x130);
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar12);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pSVar12,(iVar1 - iVar4) / 2,(iVar7 - iVar2) / 2 - iVar3,iVar13,iVar5
              );
  }
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04830);
  iVar1 = *(int *)(this + 0x50);
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04830);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  iVar2 = FUN_043c5ae0(0x41);
  iVar7 = *(int *)(this + 0x114);
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04830);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04830);
  iVar13 = SalesProgressBar::GetCurrentLevel(pSVar12);
  Sexy::Graphics::DrawImage(param_1,pIVar10,(iVar1 - iVar4) / 2,iVar7 - iVar2,iVar3,iVar13);
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04b78);
  iVar1 = *(int *)(this + 0x50);
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04b78);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  iVar2 = FUN_043c5ae0(0x12);
  iVar7 = *(int *)(this + 0x114);
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04b78);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04b78);
  iVar13 = SalesProgressBar::GetCurrentLevel(pSVar12);
  Sexy::Graphics::DrawImage(param_1,pIVar10,(iVar1 - iVar4) / 2,iVar7 - iVar2,iVar3,iVar13);
  iVar7 = FUN_043c5ae0(0x12);
  iVar1 = *(int *)(this + 0x114);
  iVar4 = FUN_043c5ae0(100);
  Sexy::Insets::Insets(aIStack_28,*(int *)(this + 0x110),iVar1 - iVar7,*(int *)(this + 0x118),iVar4)
  ;
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x140,aIStack_28,uVar9,aIStack_18,5,1);
  if (this[0x121] == (GetNewerBagUI)0x0) {
    TodStringTranslate(L"[NEWER_BAG_PLANT_GET_TIP]");
    iVar1 = *(int *)(this + 0x114);
    iVar7 = *(int *)(this + 0x11c);
    iVar4 = FUN_043c5ae0(0x88);
    iVar2 = FUN_043c5ae0(0xc);
    iVar3 = FUN_043c5ae0(0x37);
    Sexy::Insets::Insets
              (aIStack_28,*(int *)(this + 0x110),((iVar1 + iVar7) - iVar4) - iVar2,
               *(int *)(this + 0x118),iVar3);
    uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar9,aIStack_18,5,1);
    FUN_05476c50(auStack_30);
  }
  else {
    iVar3 = FUN_043c5ae0(10);
    iVar1 = *(int *)(this + 0x114);
    iVar7 = *(int *)(this + 0x110);
    iVar4 = *(int *)(this + 0x11c);
    iVar13 = FUN_043c5ae0(0x88);
    iVar5 = FUN_043c5ae0(0x18);
    iVar2 = *(int *)(this + 0x118);
    iVar6 = FUN_043c5ae0(0x69);
    Sexy::Insets::Insets(aIStack_28,iVar3 + iVar7,(iVar1 + iVar4) - iVar13,iVar2 - iVar5,iVar6);
    uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,this + 0x148,aIStack_28,uVar9,aIStack_18,2,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GetNewerBagUI::GetBag(int) */

void __thiscall GetNewerBagUI::GetBag(GetNewerBagUI *this,int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  PlayerInfo *this_00;
  PVZDB *pPVar4;
  RtName *this_01;
  CompensatedAwardList *this_02;
  UIWidget *this_03;
  undefined8 uVar5;
  long lVar6;
  string *psVar7;
  string asStack_58 [32];
  RtWeakPtr aRStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::OutputDebugStrF
            ((wchar_t *)"GetNewerBagUI::OnRequestFinished GetBag [%d] %d",(ulong)(uint)param_1,
             (ulong)(byte)this[0x121]);
  if (this[0x121] != (GetNewerBagUI)0x0) goto LAB_043c69e0;
  this[0x121] = (GetNewerBagUI)0x1;
  this_00 = (PlayerInfo *)ProfileUtils::Profile();
  if (param_1 == 0x25) {
    if (this_00 != (PlayerInfo *)0x0) {
      PlayerInfo::AddCoins(this_00,100000);
      PlayerInfo::AddGems(this_00,0x32,false);
      std::string::string(asStack_18,"repeater");
      cVar1 = PlayerInfo::GetIsPlantUnlocked(this_00,asStack_18);
      std::string::~string(asStack_18);
      nop();
      if (cVar1 == '\0') {
        std::string::string(asStack_18,"repeater");
        PlayerInfo::UnlockPlant(this_00,asStack_18,true);
        std::string::~string(asStack_18);
        nop();
      }
      else {
        psVar7 = asStack_58;
        std::string::string(asStack_30,"iOS PvZ2 Plant Store");
        std::string::string(asStack_28,"Plant Pieces");
        std::string::string(asStack_20,"plant");
        std::string::string(asStack_18,"repeater");
        Magento::FindStoreProduct((Magento *)asStack_30,asStack_28,asStack_20,asStack_18,psVar7);
        std::string::~string(asStack_18);
        nop();
        std::string::~string(asStack_20);
        nop();
        std::string::~string(asStack_28);
        nop();
        std::string::~string(asStack_30);
        nop();
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_38);
        if (bVar2) {
          std::string::string(asStack_18,"repeater");
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
          PlayerInfo::AddPlantPieceCount
                    ((string *)this_00,(int)asStack_18,SUB41(*(undefined4 *)(lVar6 + 0x90),0));
          std::string::~string(asStack_18);
          nop();
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38)
        ;
      }
      uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04858);
      *(undefined8 *)(this + 0x130) = uVar5;
      uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04ba0);
      *(undefined8 *)(this + 0x138) = uVar5;
      LawnApp::KillGetNewerBagUI(gLawnApp);
      LawnApp::ShowNewerPresentUI(gLawnApp,0x25);
    }
  }
  else if (param_1 < 0x26) {
    if (param_1 == 0x23) {
      if (this_00 != (PlayerInfo *)0x0) {
        PlayerInfo::AddCoins(this_00,50000);
        PlayerInfo::AddGems(this_00,0xf,false);
        uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04ac0);
        *(undefined8 *)(this + 0x130) = uVar5;
        uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b049b0);
        *(undefined8 *)(this + 0x138) = uVar5;
        LawnApp::KillGetNewerBagUI(gLawnApp);
        LawnApp::ShowNewerPresentUI(gLawnApp,0x23);
      }
    }
    else {
      if (param_1 != 0x24) goto LAB_043c6ce8;
      if (this_00 != (PlayerInfo *)0x0) {
        PlayerInfo::AddCoins(this_00,80000);
        PlayerInfo::AddGems(this_00,0x1e,false);
        std::string::string(asStack_18,"bloomerang");
        cVar1 = PlayerInfo::GetIsPlantUnlocked(this_00,asStack_18);
        std::string::~string(asStack_18);
        nop();
        if (cVar1 == '\0') {
          std::string::string(asStack_18,"bloomerang");
          PlayerInfo::UnlockPlant(this_00,asStack_18,true);
          std::string::~string(asStack_18);
          nop();
        }
        else {
          psVar7 = asStack_58;
          std::string::string(asStack_30,"iOS PvZ2 Plant Store");
          std::string::string(asStack_28,"Plant Pieces");
          std::string::string(asStack_20,"plant");
          std::string::string(asStack_18,"bloomerang");
          Magento::FindStoreProduct((Magento *)asStack_30,asStack_28,asStack_20,asStack_18,psVar7);
          std::string::~string(asStack_18);
          nop();
          std::string::~string(asStack_20);
          nop();
          std::string::~string(asStack_28);
          nop();
          std::string::~string(asStack_30);
          nop();
          bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_38);
          if (bVar2) {
            std::string::string(asStack_18,"bloomerang");
            lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
            PlayerInfo::AddPlantPieceCount
                      ((string *)this_00,(int)asStack_18,SUB41(*(undefined4 *)(lVar6 + 0x90),0));
            std::string::~string(asStack_18);
            nop();
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
        }
        uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04a70);
        *(undefined8 *)(this + 0x130) = uVar5;
        uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b049d8);
        *(undefined8 *)(this + 0x138) = uVar5;
        LawnApp::KillGetNewerBagUI(gLawnApp);
        LawnApp::ShowNewerPresentUI(gLawnApp,0x24);
      }
    }
  }
  else if (param_1 - 1000U < 0xc) {
    pPVar4 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    this_01 = (RtName *)PVZDB::GetTable(pPVar4,0x65);
    Sexy::RtName::RtName((RtName *)asStack_18,L"CompensatedAwardList");
    Sexy::RtDbTable::GetIdForAlias(this_01);
    Sexy::RtDbTable::GetObjectForId((RtDbTable *)this_01,(RtId *)asStack_20);
    nop();
    Sexy::RtId::~RtId((RtId *)asStack_20);
    Sexy::RtName::~RtName((RtName *)asStack_18);
    Set8BytesTo0((RtName *)asStack_18);
    if ((this_02 != (CompensatedAwardList *)0x0) &&
       (cVar1 = CompensatedAwardList::AddCompensatedAward(this_02,param_1,asStack_18), cVar1 != '\0'
       )) {
      LawnApp::KillGetNewerBagUI(gLawnApp);
      LawnApp::ShowNewerPresentUI(gLawnApp,param_1);
    }
    std::string::~string(asStack_18);
  }
  else {
LAB_043c6ce8:
    if (this_00 != (PlayerInfo *)0x0) {
      iVar3 = LawnApp::GetPlatform(gLawnApp);
      if ((iVar3 == 0xc) || (iVar3 = LawnApp::GetPlatform(gLawnApp), iVar3 == 0xd)) {
        PlayerInfo::AddCoins(this_00,0x97e8);
        iVar3 = 8;
      }
      else {
        PlayerInfo::AddCoins(this_00,30000);
        iVar3 = 10;
      }
      PlayerInfo::AddGems(this_00,iVar3,false);
      std::string::string(asStack_18,"egypt");
      PlayerInfo::AddKeys(this_00,asStack_18,3);
      std::string::~string(asStack_18);
      nop();
      std::string::string(asStack_18,"pirate");
      PlayerInfo::AddKeys(this_00,asStack_18,3);
      std::string::~string(asStack_18);
      nop();
      std::string::string(asStack_18,"cowboy");
      PlayerInfo::AddKeys(this_00,asStack_18,3);
      std::string::~string(asStack_18);
      nop();
      PlayerInfo::SetGotNewPlayerPackage(this_00,true);
    }
  }
  std::string::string(asStack_18,"UIWorldMapNewerButton");
  this_03 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_18);
  std::string::~string(asStack_18);
  nop();
  if (this_03 != (UIWidget *)0x0) {
    UIWidget::SetVisible(this_03,false);
  }
  (**(code **)(**(long **)(this + 0x108) + 0x158))(*(long **)(this + 0x108),0);
  (**(code **)(**(long **)(this + 0x100) + 0x158))(*(long **)(this + 0x100),1);
  (**(code **)(**(long **)(this + 0xf8) + 0x158))(*(long **)(this + 0xf8),0);
  (**(code **)(**(long **)(this + 0xf0) + 0x158))(*(long **)(this + 0xf0),0);
LAB_043c69e0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GetNewerBagUI::GetNewerBagUI(bool, bool) */

void __thiscall GetNewerBagUI::GetNewerBagUI(GetNewerBagUI *this,bool param_1,bool param_2)

{
  GetNewerBagUI *pGVar1;
  LawnApp *this_00;
  int iVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar1 = this + 0x140;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  Sexy::EditListener::EditListener((EditListener *)(this + 0xe0));
  Sexy::NetworkServiceListener::NetworkServiceListener((NetworkServiceListener *)(this + 0xe8));
  *(undefined ***)this = &PTR_GetClass_06845c90;
  *(undefined **)(this + 0xd8) = &DAT_06845ff0;
  *(undefined ***)(this + 0xe0) = &PTR_EditWidgetText_06846038;
  *(undefined ***)(this + 0xe8) = &PTR_ToString_06846068;
  Sexy::Insets::Insets((Insets *)(this + 0x110));
  this[0x120] = (GetNewerBagUI)param_2;
  *(undefined8 *)(this + 0x138) = 0;
  FUN_05476574(pGVar1);
  FUN_05476574(this + 0x148);
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined4 *)(this + 0x124) = 0;
  this[0x121] = (GetNewerBagUI)0x0;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_AwardDialog");
  LawnApp::LoadGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this[0x120] == (GetNewerBagUI)0x0) {
    uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04a00);
    *(undefined8 *)(this + 0x130) = uVar3;
    TodStringTranslate(L"[GIFT_GET_TITLE]");
    FUN_054766c8(pGVar1,asStack_10);
    FUN_05476c50(asStack_10);
    pwVar4 = L"[GIFT_GET_DES]";
  }
  else {
    iVar2 = LawnApp::GetPlatform(gLawnApp);
    if ((iVar2 == 0xc) || (iVar2 = LawnApp::GetPlatform(gLawnApp), iVar2 == 0xd)) {
      uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04af8);
      *(undefined8 *)(this + 0x130) = uVar3;
      TodStringTranslate(L"[QQ_BAG_PLANT_GET_TITLE]");
      FUN_054766c8(pGVar1,asStack_10);
      FUN_05476c50(asStack_10);
      pwVar4 = L"[QQ_BAG_PLANT_GET_CONTENT]";
    }
    else {
      uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04a00);
      *(undefined8 *)(this + 0x130) = uVar3;
      TodStringTranslate(L"[NEWER_BAG_PLANT_GET_TITLE]");
      FUN_054766c8(pGVar1,asStack_10);
      FUN_05476c50(asStack_10);
      pwVar4 = L"[NEWER_BAG_PLANT_GET_CONTENT]";
    }
  }
  TodStringTranslate(pwVar4);
  FUN_054766c8(this + 0x148,asStack_10);
  FUN_05476c50(asStack_10);
  Sexy::Widget::Resize((Widget *)this,0,0,*(int *)(gLawnApp + 0xd4),*(int *)(gLawnApp + 0xd8));
  setupScreen(this);
  if (param_1) {
    GetBag(this,-1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GetNewerBagUI::ButtonPress(int) */

void GetNewerBagUI::ButtonPress(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Press");
  return;
}


/* non-virtual thunk to GetNewerBagUI::ButtonPress(int) */

void __thiscall GetNewerBagUI::ButtonPress(GetNewerBagUI *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GetNewerBagUI::OnRequestFinished(std::string) */

void __thiscall GetNewerBagUI::OnRequestFinished(GetNewerBagUI *this,string *param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  Value *this_00;
  char *__s;
  undefined8 uVar5;
  PVZ2UIDialog *pPVar6;
  wchar_t *pwVar7;
  LawnApp *pLVar8;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  string asStack_120 [8];
  string asStack_118 [8];
  wstring awStack_110 [8];
  string asStack_108 [24];
  MD5 aMStack_f0 [112];
  StructuredData aSStack_80 [120];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::KillNetConnectingUI(gLawnApp);
  bVar1 = std::operator==(param_2,"");
  if (bVar1) {
    *(undefined4 *)(this + 0x128) = 0;
    pLVar8 = gLawnApp;
    FUN_05478178((wstring *)asStack_108,L"[NETWORK_NOT_CONNECTED_TITLE]",asStack_118);
    FUN_05478178((wstring *)aSStack_80,L"[NETWORK_NOT_CONNECTED_TEXT]",awStack_110);
    pPVar6 = (PVZ2UIDialog *)
             LawnApp::ShowPVZ2Dialog(pLVar8,(wstring *)asStack_108,(wstring *)aSStack_80);
    FUN_05476c50((wstring *)aSStack_80);
    nop();
    FUN_05476c50((wstring *)asStack_108);
    nop();
    FUN_05478178((wstring *)asStack_108,L"[BUTTON_OK]",awStack_110);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onCloseDialog);
    Sexy::Delegate0::Delegate0<GetNewerBagUI,void(GetNewerBagUI::*)()>
              ((Delegate0 *)aMStack_f0,(wstring *)aSStack_80);
    PVZ2UIDialog::AddButton(pPVar6,(wstring *)asStack_108,(Delegate0 *)aMStack_f0,1);
    FUN_05476c50((wstring *)asStack_108);
    nop();
    goto LAB_043c7668;
  }
  Sexy::StructuredData::StructuredData(aSStack_80);
  StringHelper::ReadJson(param_2,aSStack_80);
  this_00 = (Value *)Sexy::StructuredData::ObjectForPath(aSStack_80,"$.d");
  if (this_00 != (Value *)0x0) {
    uVar3 = Sexy::StructuredData::Value::IntegerForPath(this_00,".r",-1);
    __s = (char *)Sexy::StructuredData::Value::StringForPath(this_00,".s","");
    std::string::string(asStack_120,__s);
    nop();
    iVar4 = Sexy::StructuredData::Value::IntegerForPath(this_00,".t",0);
    Sexy::StrFormat("%d%dEA82E706D5A67",asStack_118,(ulong)uVar3,(ulong)*(uint *)(this + 0x128));
    MD5::MD5(aMStack_f0,asStack_118);
    MD5::toString();
    FUN_05474278(asStack_118,asStack_108);
    std::string::~string(asStack_108);
    uVar5 = FUN_0547429c(param_2);
    Sexy::OutputDebugStrF((wchar_t *)"GetNewerBagUI::OnRequestFinished decodeData [%s]",uVar5);
    bVar1 = std::operator!=(asStack_120,"");
    if ((bVar1) &&
       (cVar2 = std::operator==(asStack_120,asStack_118), pLVar8 = gLawnApp, cVar2 != '\0')) {
      if (this[0x120] != (GetNewerBagUI)0x0) {
        if (uVar3 == 1) goto LAB_043c7858;
        FUN_05478178(awStack_110,L"[NEWER_BAG_CODE_ERROR_TITLE]",auStack_130);
        FUN_05478178(asStack_108,L"[NEWER_BAG_CODE_ERROR_CONTENT]",auStack_128);
        pPVar6 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(pLVar8,awStack_110,(wstring *)asStack_108);
        FUN_05476c50(asStack_108);
        nop();
        FUN_05476c50(awStack_110);
        nop();
        FUN_05478178(awStack_110,L"[BUTTON_OK]",auStack_128);
        goto LAB_043c760c;
      }
      if (iVar4 == 0) {
        FUN_05478178(awStack_110,L"[NEWER_BAG_CODE_ERROR_TITLE]",auStack_130);
        pwVar7 = L"[NEWER_BAG_CODE_ERROR_CONTENT]";
        goto LAB_043c75b0;
      }
LAB_043c7858:
      GetBag(this,iVar4);
    }
    else {
      pLVar8 = gLawnApp;
      FUN_05478178(awStack_110,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_130);
      pwVar7 = L"[NETWORK_NOT_CONNECTED_TEXT]";
LAB_043c75b0:
      FUN_05478178(asStack_108,pwVar7,auStack_128);
      pPVar6 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(pLVar8,awStack_110,(wstring *)asStack_108);
      FUN_05476c50(asStack_108);
      nop();
      FUN_05476c50(awStack_110);
      nop();
      FUN_05478178(awStack_110,L"[BUTTON_OK]",auStack_128);
LAB_043c760c:
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onCloseDialog);
      Sexy::Delegate0::Delegate0<GetNewerBagUI,void(GetNewerBagUI::*)()>
                ((Delegate0 *)aMStack_f0,asStack_108);
      PVZ2UIDialog::AddButton(pPVar6,awStack_110,aMStack_f0,1);
      FUN_05476c50(awStack_110);
      nop();
    }
    std::string::~string(asStack_118);
    std::string::~string(asStack_120);
  }
  *(undefined4 *)(this + 0x128) = 0;
  Sexy::StructuredData::~StructuredData(aSStack_80);
LAB_043c7668:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GetNewerBagUI::ServiceRequestCompleted(Sexy::StructuredData const*, void const*) */

void __thiscall
GetNewerBagUI::ServiceRequestCompleted(GetNewerBagUI *this,StructuredData *param_1,void *param_2)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  string asStack_1a8 [8];
  string asStack_1a0 [8];
  MD5 aMStack_198 [112];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  char acStack_108 [256];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 != this) goto LAB_043c78ac;
  pcVar2 = (char *)Sexy::StructuredData::StringForPath(param_1,"$.i","none");
  std::string::string(asStack_1a8,pcVar2);
  bVar1 = std::operator!=("V2",asStack_1a8);
  if (bVar1) {
    std::string::string(asStack_1a0,pcVar2);
    bVar1 = std::operator!=("V3",asStack_1a0);
    std::string::~string(asStack_1a0);
    nop();
    std::string::~string(asStack_1a8);
    nop();
    if (!bVar1) goto LAB_043c793c;
    pcVar4 = "PVZRechargeCheckServer::ServiceRequestCompleted reqId = [%s]";
  }
  else {
    std::string::~string(asStack_1a8);
    nop();
LAB_043c793c:
    pcVar3 = (char *)Sexy::StructuredData::IntegerForPath(param_1,"$.r",-1);
    if (pcVar3 == (char *)0x0) {
      pcVar4 = (char *)Sexy::StructuredData::StringForPath(param_1,"$.e","none");
      memset(acStack_108,0,0x100);
      std::string::string(asStack_1a0,pcVar4);
      bVar1 = std::operator!=("none",asStack_1a0);
      std::string::~string(asStack_1a0);
      nop();
      if (bVar1) {
        std::string::string(asStack_1a0,pcVar2);
        std::operator+("ila&master",asStack_1a0);
        std::string::~string(asStack_1a0);
        nop();
        MD5::MD5(aMStack_198,asStack_1a8);
        MD5::toString();
        FUN_05474278(asStack_1a8,asStack_1a0);
        std::string::~string(asStack_1a0);
        local_128 = 0;
        uStack_120 = 0;
        local_118 = 0;
        uStack_110 = 0;
        if (*(char *)((long)param_2 + 0x120) == '\0') {
          lVar5 = FUN_0547429c(asStack_1a8);
          local_128 = *(undefined8 *)(lVar5 + 3);
          uStack_120 = *(undefined8 *)(lVar5 + 0xb);
          local_118 = *(undefined8 *)(lVar5 + 0x13);
        }
        else {
          lVar5 = FUN_0547429c(asStack_1a8);
          local_128 = *(undefined8 *)(lVar5 + 2);
          uStack_120 = *(undefined8 *)(lVar5 + 10);
          local_118 = *(undefined8 *)(lVar5 + 0x12);
        }
        pcVar2 = (char *)FUN_0547429c(asStack_1a8);
        PCPDecrypt(pcVar4,acStack_108,0x100,pcVar2,(char *)&local_128);
        std::string::~string(asStack_1a8);
      }
      std::string::string(asStack_1a8,acStack_108);
      nop();
      FUN_05475d88(asStack_1a0,asStack_1a8);
      OnRequestFinished(param_2,asStack_1a0);
      std::string::~string(asStack_1a0);
      std::string::~string(asStack_1a8);
      goto LAB_043c78ac;
    }
    pcVar4 = "PVZRechargeCheckServer::ServiceRequestCompleted result = [%d]";
    pcVar2 = pcVar3;
  }
  Sexy::OutputDebugStrF((wchar_t *)pcVar4,pcVar2);
  (**(code **)(*(long *)param_2 + 0x328))(param_2,param_1,param_2);
LAB_043c78ac:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to GetNewerBagUI::ServiceRequestCompleted(Sexy::StructuredData const*, void
   const*) */

void __thiscall
GetNewerBagUI::ServiceRequestCompleted(GetNewerBagUI *this,StructuredData *param_1,void *param_2)

{
  ServiceRequestCompleted(this + -0xe8,param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GetNewerBagUI::TryRequest() */

void __thiscall GetNewerBagUI::TryRequest(GetNewerBagUI *this)

{
  uint uVar1;
  int iVar2;
  DefineIDMgr *this_00;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  char *pcVar8;
  char *pcVar9;
  PVZDB *pPVar10;
  RtName *this_01;
  long extraout_x0;
  NetworkServiceManager *this_02;
  string *__n;
  size_t __n_00;
  string asStack_160 [8];
  string asStack_158 [8];
  string asStack_150 [8];
  string asStack_148 [8];
  string asStack_140 [8];
  string asStack_138 [8];
  string asStack_130 [8];
  RtId aRStack_128 [8];
  string asStack_120 [16];
  MD5 aMStack_110 [112];
  string asStack_a0 [120];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x124) < 0) {
    std::string::string(asStack_a0,"");
    OnRequestFinished(this,asStack_a0);
    std::string::~string(asStack_a0);
    nop();
  }
  else {
    __n = asStack_a0;
    std::string::string(asStack_160,"V2");
    nop();
    if (this[0x120] == (GetNewerBagUI)0x0) {
      std::string::append(asStack_160,"V3",(size_t)__n);
    }
    Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::GetAccountName();
    this_00 = (DefineIDMgr *)Sexy::LazySingleton<DefineIDMgr>::GetInstance();
    DefineIDMgr::GetNewUserDefineID(this_00);
    FUN_05474278(asStack_158,asStack_a0);
    std::string::~string(asStack_a0);
    Sexy::ToString((wstring *)(*(long *)(this + 0xf0) + 0xe8));
    uVar3 = time((time_t *)0x0);
    Sexy::SRand(uVar3);
    uVar1 = Sexy::Rand();
    __n_00 = (size_t)uVar1;
    *(uint *)(this + 0x128) = uVar1;
    uVar4 = FUN_0547429c(asStack_158);
    uVar5 = FUN_0547429c(asStack_150);
    Sexy::StrFormat("%s%d%sA7198D8B54ABE",asStack_148,uVar4,__n_00,uVar5);
    MD5::MD5(aMStack_110,asStack_148);
    MD5::toString();
    FUN_05474278(asStack_148,asStack_a0);
    std::string::~string(asStack_a0);
    Set8BytesTo0(asStack_140);
    std::string::append(asStack_140,"{",__n_00);
    FUN_031f5e7c(asStack_120," \"uu\" : \"",asStack_158);
    std::operator+(asStack_120,"\",");
    thunk_FUN_054757c0(asStack_140,asStack_a0);
    std::string::~string(asStack_a0);
    std::string::~string(asStack_120);
    FUN_031f5e7c(asStack_120," \"s\" : \"",asStack_148);
    std::operator+(asStack_120,"\",");
    thunk_FUN_054757c0(asStack_140,asStack_a0);
    std::string::~string(asStack_a0);
    std::string::~string(asStack_120);
    Sexy::StrFormat(" \"r\" : %d,",asStack_a0,(ulong)*(uint *)(this + 0x128));
    thunk_FUN_054757c0(asStack_140,asStack_a0);
    std::string::~string(asStack_a0);
    FUN_031f5e7c(asStack_120," \"c\" : \"",asStack_150);
    std::operator+(asStack_120,"\"");
    thunk_FUN_054757c0(asStack_140,asStack_a0);
    std::string::~string(asStack_a0);
    std::string::~string(asStack_120);
    FUN_05475ad8(asStack_140,&DAT_05593340);
    FUN_031f5e7c(asStack_138,"ila&master",asStack_160);
    MD5::MD5(aMStack_110,asStack_138);
    MD5::toString();
    FUN_05474278(asStack_138,asStack_a0);
    std::string::~string(asStack_a0);
    local_28 = 0;
    uStack_20 = 0;
    uStack_10 = 0;
    if (this[0x120] == (GetNewerBagUI)0x0) {
      lVar6 = FUN_0547429c(asStack_138);
      puVar7 = (undefined8 *)(lVar6 + 3);
    }
    else {
      lVar6 = FUN_0547429c(asStack_138);
      puVar7 = (undefined8 *)(lVar6 + 2);
    }
    local_28 = *puVar7;
    uStack_20 = puVar7[1];
    local_18 = puVar7[2];
    uVar4 = FUN_0547429c(asStack_140);
    Sexy::OutputDebugStrF((wchar_t *)"VerifyNewPlayerPackageCode encodeString=[%s]\n",uVar4);
    pcVar8 = (char *)FUN_0547429c(asStack_140);
    iVar2 = FUN_05474184(asStack_140);
    pcVar9 = (char *)FUN_0547429c(asStack_138);
    PCPEncryptStr(pcVar8,iVar2,pcVar9,(char *)&local_28);
    uVar4 = FUN_0547429c(asStack_130);
    Sexy::OutputDebugStrF((wchar_t *)"VerifyNewPlayerPackageCode encodeString=[%s]\n",uVar4);
    Sexy::StructuredData::StructuredData((StructuredData *)asStack_a0);
    Sexy::StructuredData::BeginObject((StructuredData *)asStack_a0);
    pPVar10 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    this_01 = (RtName *)PVZDB::GetTable(pPVar10,0x3b);
    Sexy::RtName::RtName((RtName *)asStack_120,L"RechargeCheckConfig");
    Sexy::RtDbTable::GetIdForAlias(this_01);
    Sexy::RtDbTable::GetObjectForId((RtDbTable *)this_01,aRStack_128);
    nop();
    Sexy::RtId::~RtId(aRStack_128);
    Sexy::RtName::~RtName((RtName *)asStack_120);
    Sexy::StructuredData::AddString
              ((StructuredData *)asStack_a0,"url",(string *)(extraout_x0 + 0x10));
    Sexy::StructuredData::AddInteger((StructuredData *)asStack_a0,"timeout",0x1e);
    Sexy::StructuredData::BeginObject((StructuredData *)asStack_a0,"formData");
    Sexy::StructuredData::AddString((StructuredData *)asStack_a0,"req",asStack_160);
    Sexy::StructuredData::AddString((StructuredData *)asStack_a0,"e",asStack_130);
    Sexy::StructuredData::EndObject((StructuredData *)asStack_a0);
    Sexy::StructuredData::EndObject((StructuredData *)asStack_a0);
    this_02 = (NetworkServiceManager *)Sexy::NetworkServiceManager::DefaultNetworkServiceManager();
    Sexy::NetworkServiceManager::MakeRequest
              (this_02,(StructuredData *)asStack_a0,(NetworkServiceListener *)(this + 0xe8),this);
    *(int *)(this + 0x124) = *(int *)(this + 0x124) + -1;
    Sexy::StructuredData::~StructuredData((StructuredData *)asStack_a0);
    std::string::~string(asStack_130);
    std::string::~string(asStack_138);
    std::string::~string(asStack_140);
    std::string::~string(asStack_148);
    std::string::~string(asStack_150);
    std::string::~string(asStack_158);
    std::string::~string(asStack_160);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GetNewerBagUI::RequestRechargeCheck(int) */

void __thiscall GetNewerBagUI::RequestRechargeCheck(GetNewerBagUI *this,int param_1)

{
  if (*(int *)(this + 0x128) != 0) {
    return;
  }
  *(int *)(this + 0x124) = param_1;
  TryRequest(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GetNewerBagUI::ButtonDepress(int) */

void __thiscall GetNewerBagUI::ButtonDepress(GetNewerBagUI *this,int param_1)

{
  LawnApp *this_00;
  char *pcVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x3e9) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Release");
    this_00 = gLawnApp;
    std::string::string(asStack_10,"[NET_CONNECTING]");
    LawnApp::ShowNetConnectingUI(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    RequestRechargeCheck(this,0);
  }
  else if ((param_1 == 0x3ea) || (param_1 == 1000)) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Release");
    LawnApp::KillGetNewerBagUI(gLawnApp);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to GetNewerBagUI::ButtonDepress(int) */

void __thiscall GetNewerBagUI::ButtonDepress(GetNewerBagUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* GetNewerBagUI::ServiceRequestFailed(Sexy::StructuredData const*, void const*) */

void __thiscall
GetNewerBagUI::ServiceRequestFailed(GetNewerBagUI *this,StructuredData *param_1,void *param_2)

{
  if (param_2 != this) {
    return;
  }
  Sexy::OutputDebugStrF((wchar_t *)"PVZRechargeCheckServer::ServiceRequestFailed error");
  TryRequest(param_2);
  return;
}


/* non-virtual thunk to GetNewerBagUI::ServiceRequestFailed(Sexy::StructuredData const*, void
   const*) */

void __thiscall
GetNewerBagUI::ServiceRequestFailed(GetNewerBagUI *this,StructuredData *param_1,void *param_2)

{
  ServiceRequestFailed(this + -0xe8,param_1,param_2);
  return;
}


/* GetNewerBagUI::ServiceRequestCompleted(ImageLib::Image*&, void const*) */

void __thiscall
GetNewerBagUI::ServiceRequestCompleted(GetNewerBagUI *this,Image **param_1,void *param_2)

{
  if (param_2 != this) {
    return;
  }
  TryRequest(this);
  return;
}


/* non-virtual thunk to GetNewerBagUI::ServiceRequestCompleted(ImageLib::Image*&, void const*) */

void __thiscall
GetNewerBagUI::ServiceRequestCompleted(GetNewerBagUI *this,Image **param_1,void *param_2)

{
  ServiceRequestCompleted(this + -0xe8,param_1,param_2);
  return;
}


/* GetNewerBagUI::ServiceRequestCompleted(Sexy::Buffer const*, void const*) */

void __thiscall
GetNewerBagUI::ServiceRequestCompleted(GetNewerBagUI *this,Buffer *param_1,void *param_2)

{
  if (param_2 != this) {
    return;
  }
  TryRequest(this);
  return;
}


/* non-virtual thunk to GetNewerBagUI::ServiceRequestCompleted(Sexy::Buffer const*, void const*) */

void __thiscall
GetNewerBagUI::ServiceRequestCompleted(GetNewerBagUI *this,Buffer *param_1,void *param_2)

{
  ServiceRequestCompleted(this + -0xe8,param_1,param_2);
  return;
}

