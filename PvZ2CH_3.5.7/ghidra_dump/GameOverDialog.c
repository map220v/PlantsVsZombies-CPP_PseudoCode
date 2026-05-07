// Class: GameOverDialog


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameOverDialog::~GameOverDialog() */

void __thiscall GameOverDialog::~GameOverDialog(GameOverDialog *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined **)(this + 0xd8) = &DAT_0676a978;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0676a630;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_GameOver");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  PVZ2UIDialog::~PVZ2UIDialog((PVZ2UIDialog *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GameOverDialog::~GameOverDialog() */

void __thiscall GameOverDialog::~GameOverDialog(GameOverDialog *this)

{
  ~GameOverDialog(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameOverDialog::GameOverDialog(GameOverDialogType) */

void __thiscall GameOverDialog::GameOverDialog(GameOverDialog *this,int param_2)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ2UIDialog::PVZ2UIDialog((PVZ2UIDialog *)this);
  this[0x209] = (GameOverDialog)0x0;
  this[0x20a] = (GameOverDialog)0x0;
  *(undefined ***)this = &PTR_GetClass_0676a630;
  *(undefined **)(this + 0xd8) = &DAT_0676a978;
  if (param_2 == 2) {
    this[0x208] = (GameOverDialog)0x0;
  }
  else if (param_2 == 3) {
    this[0x208] = (GameOverDialog)0x0;
    this[0x20a] = (GameOverDialog)0x1;
  }
  else {
    this[0x208] = (GameOverDialog)(param_2 == 1);
  }
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_GameOver");
  LawnApp::LoadGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GameOverDialog::SetTaskFailed(bool) */

void __thiscall GameOverDialog::SetTaskFailed(GameOverDialog *this,bool param_1)

{
  this[0x209] = (GameOverDialog)param_1;
  return;
}


/* GameOverDialog::GetButtonRegion() */

Insets * GameOverDialog::GetButtonRegion(void)

{
  int iVar1;
  long in_x0;
  Insets *in_x8;
  
  Sexy::Insets::Insets(in_x8);
  iVar1 = *(int *)(in_x0 + 0x50);
  *(int *)in_x8 = (int)((float)iVar1 * 0.2);
  *(int *)(in_x8 + 8) = (int)((float)iVar1 * 0.6);
  return in_x8;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x03d449d8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* GameOverDialog::UpdateScale() */

void __thiscall GameOverDialog::UpdateScale(GameOverDialog *this)

{
  undefined1 auVar1 [16];
  float fVar2;
  undefined1 extraout_var [12];
  
  fVar2 = (float)PVZ_T();
  if (fVar2 <= *(float *)(this + 0x200)) {
    *(undefined4 *)(this + 0x1f8) = *(undefined4 *)(this + 500);
    return;
  }
  if (*(float *)(this + 0x204) < fVar2) {
    *(undefined4 *)(this + 0x1f8) = *(undefined4 *)(this + 0x1fc);
    return;
  }
  PVZ_T();
  auVar1._4_12_ = extraout_var;
  auVar1._0_4_ = fVar2;
  fVar2 = CurveEvaluate<float>
                    (auVar1,*(float *)(this + 0x204) - *(float *)(this + 0x200),this + 500,
                     this + 0x1fc,1);
  *(float *)(this + 0x1f8) = fVar2;
  return;
}


/* GameOverDialog::UpdateBrainScale() */

void __thiscall GameOverDialog::UpdateBrainScale(GameOverDialog *this)

{
  UpdateScale(this);
  PVZ2UIDialog::SetImageScale((PVZ2UIDialog *)this,*(float *)(this + 0x1f8));
  return;
}


/* GameOverDialog::StartImageScale(float, float, float) */

void __thiscall
GameOverDialog::StartImageScale(GameOverDialog *this,float param_1,float param_2,float param_3)

{
  float fVar1;
  
  *(float *)(this + 500) = param_2;
  *(float *)(this + 0x1fc) = param_3;
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x200) = fVar1;
  *(float *)(this + 0x204) = fVar1 + param_1;
  UpdateBrainScale(this);
  return;
}


/* GameOverDialog::UpdateFade() */

void __thiscall GameOverDialog::UpdateFade(GameOverDialog *this)

{
  GameOverDialog GVar1;
  float fVar2;
  
  fVar2 = (float)PVZ_T();
  if (fVar2 <= *(float *)(this + 0x1ec)) {
    this[0x1ea] = this[0x1e8];
    return;
  }
  if (*(float *)(this + 0x1f0) < fVar2) {
    this[0x1ea] = this[0x1e9];
    return;
  }
  fVar2 = (float)PVZ_T();
  GVar1 = (GameOverDialog)
          CurveEvaluate<unsigned_char>
                    ((fVar2 - *(float *)(this + 0x1ec)) /
                     (*(float *)(this + 0x1f0) - *(float *)(this + 0x1ec)),this + 0x1e8,this + 0x1e9
                     ,4);
  this[0x1ea] = GVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameOverDialog::UpdateBrainFade() */

void __thiscall GameOverDialog::UpdateBrainFade(GameOverDialog *this)

{
  Insets aIStack_28 [12];
  uint local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UpdateFade(this);
  Sexy::Color::Color((Color *)aIStack_28,1);
  local_1c = (uint)(byte)this[0x1ea];
  Sexy::Insets::Insets(aIStack_18,aIStack_28);
  PVZ2UIDialog::SetImageColor((PVZ2UIDialog *)this,aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GameOverDialog::StartImageFade(float, unsigned char, unsigned char) */

void __thiscall
GameOverDialog::StartImageFade(GameOverDialog *this,float param_1,uchar param_2,uchar param_3)

{
  float fVar1;
  
  this[0x1e8] = (GameOverDialog)param_2;
  this[0x1e9] = (GameOverDialog)param_3;
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x1ec) = fVar1;
  *(float *)(this + 0x1f0) = fVar1 + param_1;
  UpdateBrainFade(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameOverDialog::InitBrain() */

void __thiscall GameOverDialog::InitBrain(GameOverDialog *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  LotteryResultProgressBar *pLVar5;
  SalesProgressBar *pSVar6;
  undefined8 uVar7;
  float fVar8;
  Point aPStack_18 [8];
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x209] == (GameOverDialog)0x0) {
    if (this[0x20a] == (GameOverDialog)0x0) {
      if (this[0x208] == (GameOverDialog)0x0) goto LAB_03d44c44;
      iVar1 = *(int *)(this + 0x50);
      pLVar5 = (LotteryResultProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad7148);
      iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
      fVar8 = *(float *)(this + 0x1c4);
      pSVar6 = (SalesProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad7148);
      iVar3 = SalesProgressBar::GetCurrentLevel(pSVar6);
      iVar4 = FUN_03d44808(0x96);
      Sexy::Point::Point(aPStack_18,iVar1 / 2 - iVar2 / 2,(int)(fVar8 - (float)(iVar3 + iVar4)));
      uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad7148);
      Sexy::Point::Point(aPStack_10,(TPoint *)aPStack_18);
      PVZ2UIDialog::SetImage((PVZ2UIDialog *)this,uVar7,aPStack_10);
    }
    else {
      iVar1 = *(int *)(this + 0x50);
      pLVar5 = (LotteryResultProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad7110);
      iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
      fVar8 = *(float *)(this + 0x1c4);
      pSVar6 = (SalesProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad7110);
      iVar3 = SalesProgressBar::GetCurrentLevel(pSVar6);
      iVar4 = FUN_03d44808(0x96);
      Sexy::Point::Point(aPStack_18,iVar1 / 2 - iVar2 / 2,(int)(fVar8 - (float)(iVar3 + iVar4)));
      uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad7110);
      Sexy::Point::Point(aPStack_10,(TPoint *)aPStack_18);
      PVZ2UIDialog::SetImage((PVZ2UIDialog *)this,uVar7,aPStack_10);
    }
  }
  else {
    iVar1 = *(int *)(this + 0x50);
    pLVar5 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad70e8);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
    fVar8 = *(float *)(this + 0x1c4);
    pSVar6 = (SalesProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad70e8);
    iVar3 = SalesProgressBar::GetCurrentLevel(pSVar6);
    iVar4 = FUN_03d44808(0xfa);
    Sexy::Point::Point(aPStack_18,iVar1 / 2 - iVar2 / 2,(int)(fVar8 - (float)(iVar3 + iVar4)));
    uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad70e8);
    Sexy::Point::Point(aPStack_10,(TPoint *)aPStack_18);
    PVZ2UIDialog::SetImage((PVZ2UIDialog *)this,uVar7,aPStack_10);
  }
  StartImageFade(this,1.0,'\0',0xff);
  StartImageScale(this,0.8,0.0,1.0);
LAB_03d44c44:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GameOverDialog::LayoutElements() */

void __thiscall GameOverDialog::LayoutElements(GameOverDialog *this)

{
  PVZ2UIDialog::LayoutElements((PVZ2UIDialog *)this);
  InitBrain(this);
  return;
}


/* GameOverDialog::Draw(Sexy::Graphics*) */

void __thiscall GameOverDialog::Draw(GameOverDialog *this,Graphics *param_1)

{
  UpdateBrainFade(this);
  UpdateBrainScale(this);
  PVZ2UIDialog::Draw((PVZ2UIDialog *)this,param_1);
  return;
}

