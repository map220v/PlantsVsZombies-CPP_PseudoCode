// Class: LevelOfTheDay_ProgressBoxWidget


/* LevelOfTheDay_ProgressBoxWidget::~LevelOfTheDay_ProgressBoxWidget() */

void __thiscall
LevelOfTheDay_ProgressBoxWidget::~LevelOfTheDay_ProgressBoxWidget
          (LevelOfTheDay_ProgressBoxWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06925e50;
  FUN_05476c50(this + 0x108);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LevelOfTheDay_ProgressBoxWidget::~LevelOfTheDay_ProgressBoxWidget() */

void __thiscall
LevelOfTheDay_ProgressBoxWidget::~LevelOfTheDay_ProgressBoxWidget
          (LevelOfTheDay_ProgressBoxWidget *this)

{
  ~LevelOfTheDay_ProgressBoxWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDay_ProgressBoxWidget::getProgressImage() */

void LevelOfTheDay_ProgressBoxWidget::getProgressImage(void)

{
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"IMAGE_UI_LEVELOFTHEDAY_IMG_PROGRESS_PINATA");
  uVar1 = StringHelper::ToImage(asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDay_ProgressBoxWidget::layoutWidget() */

void __thiscall LevelOfTheDay_ProgressBoxWidget::layoutWidget(LevelOfTheDay_ProgressBoxWidget *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  lVar3 = *(long *)(this + 0xe0);
  local_8 = ___stack_chk_guard;
  if (lVar3 != 0) {
    iVar1 = FUN_049b9540(0x14);
    iVar2 = FUN_049b9540(0xc);
    Sexy::Insets::Insets
              ((Insets *)&local_18,iVar1,iVar2,*(int *)(lVar3 + 0x38),*(int *)(lVar3 + 0x3c));
    *(undefined8 *)(this + 0xe8) = local_18;
    *(undefined8 *)(this + 0xf0) = uStack_10;
  }
  iVar1 = FUN_049b9540(0);
  Sexy::Insets::Insets((Insets *)&local_18,0,*(int *)(this + 0x54) - iVar1,*(int *)(this + 0x50),0);
  *(undefined8 *)(this + 0xf8) = local_18;
  *(undefined8 *)(this + 0x100) = uStack_10;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDay_ProgressBoxWidget::Draw(Sexy::Graphics*) */

void LevelOfTheDay_ProgressBoxWidget::Draw(Graphics *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  LotteryResultProgressBar *this;
  SalesProgressBar *this_00;
  Image *pIVar8;
  Graphics *in_x1;
  wchar16 *extraout_x1;
  wchar16 *pwVar9;
  wchar16 *extraout_x1_00;
  LineBreakCategory *pLVar10;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  float fVar11;
  GraphicsAutoState aGStack_28 [8];
  undefined4 local_20 [2];
  undefined4 local_18 [4];
  LineBreakCategory *local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar10 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_28,in_x1);
  if (*(int *)(param_1 + 0xd4) == 3) {
    fVar11 = (float)PVZ_RealT();
    local_18[0] = 0;
    local_20[0] = 0xff;
    uVar6 = CurveLerp<int>(0,0x3f000000,fVar11 - *(float *)(param_1 + 0xd8),local_20,
                           (Insets *)local_18,1);
    in_x4 = (LineBreakCategory *)(ulong)uVar6;
    pLVar10 = (LineBreakCategory *)0xff;
    in_x3 = (LineBreakCategory *)0xff;
    Sexy::Insets::Insets((Insets *)local_18,0xff,0xff,0xff,uVar6);
    Sexy::Graphics::SetColor(in_x1,(Color *)local_18);
    Sexy::Graphics::SetColorizeImages(in_x1,true);
    pwVar9 = extraout_x1_00;
  }
  else {
    Sexy::Graphics::SetColorizeImages(in_x1,false);
    pwVar9 = extraout_x1;
  }
  cVar3 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    ((wchar16 *)param_1,pwVar9,pLVar10,in_x3,in_x4);
  if (cVar3 != '\0') {
    iVar1 = *(int *)(param_1 + 0x50);
    this = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b746f8);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(this);
    iVar2 = *(int *)(param_1 + 0x54);
    this_00 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b746f8);
    iVar5 = SalesProgressBar::GetCurrentLevel(this_00);
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b746f8);
    Sexy::Graphics::DrawImage
              (in_x1,pIVar8,(int)(float)((iVar1 - iVar4) / 2),(int)(float)((iVar2 - iVar5) / 2));
  }
  if (*(Image **)(param_1 + 0xe0) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (in_x1,*(Image **)(param_1 + 0xe0),*(int *)(param_1 + 0xe8),*(int *)(param_1 + 0xec));
  }
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_26_Shaded);
  iVar1 = *(int *)(param_1 + 0xfc);
  iVar2 = *(int *)(param_1 + 0xf8);
  iVar4 = *(int *)(param_1 + 0x50);
  fVar11 = (float)Sexy::PrimeTypeface::ParagraphHeightUnlimited;
  FUN_05477b24(local_20,param_1 + 0x108);
  Sexy::Insets::Insets((Insets *)local_18,(Insets *)&PrimeText_Game::Color_Description_Green);
  Sexy::PrimeTypeface::DrawString_Paragraph
            ((PrimeTypeface *)(float)iVar2,(float)iVar1,(float)iVar4,fVar11,uVar7);
  FUN_05476c50(local_20);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelOfTheDay_ProgressBoxWidget::setTransitionState(LODBoxTransitionState) */

void LevelOfTheDay_ProgressBoxWidget::setTransitionState
               (wchar16 *param_1,undefined4 param_2,undefined8 param_3,LineBreakCategory *param_4,
               LineBreakCategory *param_5)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  char *pcVar4;
  wchar16 *extraout_x1;
  LineBreakCategory *pLVar5;
  undefined4 uVar6;
  
  iVar1 = *(int *)(param_1 + 0x6a);
  *(undefined4 *)(param_1 + 0x6a) = param_2;
  switch(param_2) {
  case 0:
    uVar3 = getProgressImage();
    *(undefined8 *)(param_1 + 0x70) = uVar3;
    break;
  case 1:
    uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b749d0);
    *(undefined8 *)(param_1 + 0x70) = uVar3;
    pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    pLVar5 = (LineBreakCategory *)0x0;
    AudioMgr::SendEvent(pcVar4,"Play_UI_LOD_Checkbox");
    if (iVar1 == 3) {
      cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                        (param_1,extraout_x1,pLVar5,param_4,param_5);
      if (cVar2 == '\0') {
        LevelOfTheDay_ProgressiveAwardDialog::DoFinalSequence
                  (*(LevelOfTheDay_ProgressiveAwardDialog **)(param_1 + 0x8c));
        return;
      }
      param_1[0x6a] = L'\x04';
      param_1[0x6b] = L'\0';
      goto switchD_049bacf4_caseD_3;
    }
    break;
  case 3:
switchD_049bacf4_caseD_3:
    uVar6 = PVZ_RealT();
    *(undefined4 *)(param_1 + 0x6c) = uVar6;
    return;
  case 5:
    LevelOfTheDay_ProgressiveAwardDialog::OnProgressiveGoalMet
              (*(LevelOfTheDay_ProgressiveAwardDialog **)(param_1 + 0x8c));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDay_ProgressBoxWidget::LevelOfTheDay_ProgressBoxWidget(Sexy::TRect<int>, int,
   Sexy::Widget*) */

void __thiscall
LevelOfTheDay_ProgressBoxWidget::LevelOfTheDay_ProgressBoxWidget
          (LevelOfTheDay_ProgressBoxWidget *this,TRect *param_2,undefined4 param_3,
          undefined8 param_4)

{
  LevelOfTheDay_ProgressBoxWidget *pLVar1;
  undefined8 uVar2;
  wstring awStack_20 [8];
  undefined1 auStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar1 = this + 0x108;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06925e50;
  Sexy::Insets::Insets((Insets *)(this + 0xe8));
  Sexy::Insets::Insets((Insets *)(this + 0xf8));
  FUN_05476574(pLVar1);
  PlantHeadshot::Resize((PlantHeadshot *)this,param_2);
  *(undefined8 *)(this + 0x118) = param_4;
  *(undefined4 *)(this + 0x110) = param_3;
  FUN_054772c4(pLVar1,&DAT_056f11a8);
  uVar2 = getProgressImage();
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined8 *)(this + 0xe0) = uVar2;
  if (*(int *)(this + 0x110) == 0) {
    setTransitionState(this,2);
    TodStringTranslate(L"[LOD_TODAY]");
    FUN_054766c8(pLVar1,awStack_10);
    FUN_05476c50(awStack_10);
  }
  else {
    setTransitionState(this,*(int *)(this + 0x110) < 0);
    TodStringTranslate(L"[LOD_PARTY_NUMBER]");
    Sexy::StrFormat(L"%d",awStack_10,(ulong)*(uint *)(this + 0x110));
    TodReplaceString(awStack_20,L"{NUMBER}",awStack_10);
    FUN_054766c8(pLVar1,auStack_18);
    FUN_05476c50(auStack_18);
    FUN_05476c50(awStack_10);
    FUN_05476c50(awStack_20);
  }
  layoutWidget(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelOfTheDay_ProgressBoxWidget::Update() */

void __thiscall LevelOfTheDay_ProgressBoxWidget::Update(LevelOfTheDay_ProgressBoxWidget *this)

{
  float fVar1;
  
  if (*(int *)(this + 0xd4) == 3) {
    fVar1 = (float)PVZ_RealT();
    if (0.5 < fVar1 - *(float *)(this + 0xd8)) {
      setTransitionState(this,1);
      return;
    }
  }
  else if ((*(int *)(this + 0xd4) == 4) &&
          (fVar1 = (float)PVZ_RealT(), 1.5 < fVar1 - *(float *)(this + 0xd8))) {
    setTransitionState(this,5);
    return;
  }
  return;
}


/* LevelOfTheDay_ProgressBoxWidget::StartCompleteTransition() */

void __thiscall
LevelOfTheDay_ProgressBoxWidget::StartCompleteTransition(LevelOfTheDay_ProgressBoxWidget *this)

{
  setTransitionState(this,3);
  return;
}

