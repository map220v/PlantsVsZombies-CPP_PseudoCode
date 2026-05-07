// Class: PlantTrialShowDialog


/* PlantTrialShowDialog::~PlantTrialShowDialog() */

void __thiscall PlantTrialShowDialog::~PlantTrialShowDialog(PlantTrialShowDialog *this)

{
  *(undefined ***)this = &PTR_GetClass_06916140;
  if (*(long **)(this + 0xd8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xd8) + 0x18))();
    *(undefined8 *)(this + 0xd8) = 0;
  }
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,false);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PlantTrialShowDialog::~PlantTrialShowDialog() */

void __thiscall PlantTrialShowDialog::~PlantTrialShowDialog(PlantTrialShowDialog *this)

{
  ~PlantTrialShowDialog(this);
  AK::FreeHook(this);
  return;
}


/* PlantTrialShowDialog::PlantTrialShowDialog() */

void __thiscall PlantTrialShowDialog::PlantTrialShowDialog(PlantTrialShowDialog *this)

{
  int iVar1;
  int iVar2;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  undefined4 uVar3;
  
  Sexy::Widget::Widget((Widget *)this);
  this[0xd1] = (PlantTrialShowDialog)0x1;
  *(undefined ***)this = &PTR_GetClass_06916140;
  uVar3 = PVZ_T();
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xd4) = uVar3;
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b723a8);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b723a8);
  iVar2 = SalesProgressBar::GetCurrentLevel(this_01);
  Sexy::Widget::Resize((Widget *)this,0,0,iVar1,iVar2);
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x049694a4 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PlantTrialShowDialog::DrawShowDialog(Sexy::Graphics*) */

void __thiscall PlantTrialShowDialog::DrawShowDialog(PlantTrialShowDialog *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Image *pIVar5;
  GachaConfig *this_00;
  long lVar6;
  undefined8 uVar7;
  LotteryResultProgressBar *this_01;
  SalesProgressBar *this_02;
  PrimeText_PotentialText *pPVar8;
  string *extraout_x1;
  PrimeTextWidget *pPVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  wstring awStack_28 [8];
  undefined4 local_20 [2];
  undefined4 local_18 [4];
  long local_8;
  
  fVar10 = *(float *)(this + 0xd4);
  local_8 = ___stack_chk_guard;
  fVar11 = (float)PVZ_T();
  if (fVar11 <= fVar10 + 7.0) {
    fVar10 = 1.0;
    if (this[0xd1] != (PlantTrialShowDialog)0x0) {
      fVar10 = *(float *)(this + 0xd4);
      fVar11 = (float)PVZ_T();
      if (fVar11 <= fVar10 + 2.0) {
        auVar12 = PVZ_T();
        local_18[0] = 0x3f800000;
        local_20[0] = 0;
        fVar10 = CurveLerp<float>(auVar12,fVar10 + 2.0,auVar12._0_4_,local_20,local_18,3);
      }
      else {
        this[0xd1] = (PlantTrialShowDialog)0x0;
        fVar10 = 1.0;
      }
    }
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b723a8);
    TodDrawImageCenterScaledF(param_1,pIVar5,0.0,0.0,fVar10,fVar10);
    pPVar9 = *(PrimeTextWidget **)(this + 0xd8);
    if (pPVar9 == (PrimeTextWidget *)0x0) {
      this_00 = (GachaConfig *)LawnApp::GetPlantTrialConfig(gLawnApp);
      lVar6 = GachaConfig::GetGachaPlantRewardList(this_00);
      uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
      iVar1 = FUN_049676e0(10);
      iVar2 = FUN_049676e0(0xfffffff6);
      this_01 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b723a8);
      iVar3 = LotteryResultProgressBar::GetCurrentLevel(this_01);
      this_02 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b723a8);
      iVar4 = SalesProgressBar::GetCurrentLevel(this_02);
      Sexy::UTF8StringToWString((Sexy *)(lVar6 + 0x18),extraout_x1);
      TodStringTranslate(awStack_28);
      Sexy::Color::Color((Color *)local_18,0);
      pPVar8 = (PrimeText_PotentialText *)
               Sexy::BuildPotentialText_Paragraph
                         ((float)iVar1,(float)iVar2,(float)iVar3 * 0.85,(float)iVar4,uVar7,local_20,
                          0,1,(Color *)local_18);
      pPVar9 = ::operator_new(0xf8);
      Sexy::PrimeTextWidget::PrimeTextWidget(pPVar9,pPVar8);
      *(PrimeTextWidget **)(this + 0xd8) = pPVar9;
      FUN_05476c50(local_20);
      FUN_05476c50(awStack_28);
      pPVar9 = *(PrimeTextWidget **)(this + 0xd8);
      if (pPVar9 == (PrimeTextWidget *)0x0) goto LAB_04969420;
    }
    iVar1 = FUN_049676e0(10);
    iVar2 = FUN_049676e0(0x14);
    iVar3 = FUN_049676e0(0xfffffff6);
    Sexy::PrimeTextWidget::SetPosition
              (pPVar9,(int)((float)iVar1 + (1.0 - fVar10) * (float)iVar2),iVar3);
    Sexy::PrimeTextWidget::SetScale(*(PrimeTextWidget **)(this + 0xd8),fVar10,fVar10);
    (**(code **)(**(long **)(this + 0xd8) + 0x128))(*(long **)(this + 0xd8),param_1);
  }
LAB_04969420:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x049694a4 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PlantTrialShowDialog::Draw(Sexy::Graphics*) */

void __thiscall PlantTrialShowDialog::Draw(PlantTrialShowDialog *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Image *pIVar5;
  GachaConfig *this_00;
  long lVar6;
  undefined8 uVar7;
  LotteryResultProgressBar *this_01;
  SalesProgressBar *this_02;
  PrimeText_PotentialText *pPVar8;
  string *extraout_x1;
  PrimeTextWidget *pPVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  wstring awStack_28 [8];
  undefined4 auStack_20 [2];
  undefined4 auStack_18 [4];
  long lStack_8;
  
  fVar10 = *(float *)(this + 0xd4);
  lStack_8 = ___stack_chk_guard;
  fVar11 = (float)PVZ_T();
  if (fVar11 <= fVar10 + 7.0) {
    fVar10 = 1.0;
    if (this[0xd1] != (PlantTrialShowDialog)0x0) {
      fVar10 = *(float *)(this + 0xd4);
      fVar11 = (float)PVZ_T();
      if (fVar11 <= fVar10 + 2.0) {
        auVar12 = PVZ_T();
        auStack_18[0] = 0x3f800000;
        auStack_20[0] = 0;
        fVar10 = CurveLerp<float>(auVar12,fVar10 + 2.0,auVar12._0_4_,auStack_20,auStack_18,3);
      }
      else {
        this[0xd1] = (PlantTrialShowDialog)0x0;
        fVar10 = 1.0;
      }
    }
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b723a8);
    TodDrawImageCenterScaledF(param_1,pIVar5,0.0,0.0,fVar10,fVar10);
    pPVar9 = *(PrimeTextWidget **)(this + 0xd8);
    if (pPVar9 == (PrimeTextWidget *)0x0) {
      this_00 = (GachaConfig *)LawnApp::GetPlantTrialConfig(gLawnApp);
      lVar6 = GachaConfig::GetGachaPlantRewardList(this_00);
      uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
      iVar1 = FUN_049676e0(10);
      iVar2 = FUN_049676e0(0xfffffff6);
      this_01 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b723a8);
      iVar3 = LotteryResultProgressBar::GetCurrentLevel(this_01);
      this_02 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b723a8);
      iVar4 = SalesProgressBar::GetCurrentLevel(this_02);
      Sexy::UTF8StringToWString((Sexy *)(lVar6 + 0x18),extraout_x1);
      TodStringTranslate(awStack_28);
      Sexy::Color::Color((Color *)auStack_18,0);
      pPVar8 = (PrimeText_PotentialText *)
               Sexy::BuildPotentialText_Paragraph
                         ((float)iVar1,(float)iVar2,(float)iVar3 * 0.85,(float)iVar4,uVar7,
                          auStack_20,0,1,(Color *)auStack_18);
      pPVar9 = ::operator_new(0xf8);
      Sexy::PrimeTextWidget::PrimeTextWidget(pPVar9,pPVar8);
      *(PrimeTextWidget **)(this + 0xd8) = pPVar9;
      FUN_05476c50(auStack_20);
      FUN_05476c50(awStack_28);
      pPVar9 = *(PrimeTextWidget **)(this + 0xd8);
      if (pPVar9 == (PrimeTextWidget *)0x0) goto LAB_04969420;
    }
    iVar1 = FUN_049676e0(10);
    iVar2 = FUN_049676e0(0x14);
    iVar3 = FUN_049676e0(0xfffffff6);
    Sexy::PrimeTextWidget::SetPosition
              (pPVar9,(int)((float)iVar1 + (1.0 - fVar10) * (float)iVar2),iVar3);
    Sexy::PrimeTextWidget::SetScale(*(PrimeTextWidget **)(this + 0xd8),fVar10,fVar10);
    (**(code **)(**(long **)(this + 0xd8) + 0x128))(*(long **)(this + 0xd8),param_1);
  }
LAB_04969420:
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

