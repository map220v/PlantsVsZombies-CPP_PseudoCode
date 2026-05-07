// Class: PVZ2UIImage


/* PVZ2UIImage::GetWidth() const */

ulong __thiscall PVZ2UIImage::GetWidth(PVZ2UIImage *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  if (*(int *)this != 4) {
    uVar4 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 8));
    return uVar4;
  }
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x10));
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x18));
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x20));
  return (ulong)(uint)(iVar1 + iVar2 + iVar3);
}


/* PVZ2UIImage::GetHeight() const */

void __thiscall PVZ2UIImage::GetHeight(PVZ2UIImage *this)

{
  if (*(int *)this != 4) {
    SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 8));
    return;
  }
  SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x18));
  return;
}


/* PVZ2UIImage::PVZ2UIImage() */

void __thiscall PVZ2UIImage::PVZ2UIImage(PVZ2UIImage *this)

{
  float fVar1;
  
  *(undefined4 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  fVar1 = (float)PVZ_T();
  this[0x2c] = (PVZ2UIImage)0x0;
  *(undefined4 *)(this + 0x30) = 0;
  *(float *)(this + 0x28) = fVar1 + 2.0;
  *(undefined4 *)(this + 0x34) = 0;
  return;
}


/* PVZ2UIImage::PVZ2UIImage(Sexy::Image*, PVZ2UIImageType) */

void __thiscall PVZ2UIImage::PVZ2UIImage(PVZ2UIImage *this,undefined8 param_1,undefined4 param_3)

{
  float fVar1;
  
  *(undefined8 *)(this + 8) = param_1;
  *(undefined4 *)this = param_3;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  fVar1 = (float)PVZ_T();
  this[0x2c] = (PVZ2UIImage)0x0;
  *(undefined4 *)(this + 0x30) = 0;
  *(float *)(this + 0x28) = fVar1 + 2.0;
  *(undefined4 *)(this + 0x34) = 0;
  if (*(long *)(this + 8) != 0) {
    return;
  }
  *(undefined4 *)this = 0;
  return;
}


/* PVZ2UIImage::PVZ2UIImage(Sexy::Image*, Sexy::Image*, Sexy::Image*) */

void __thiscall
PVZ2UIImage::PVZ2UIImage(PVZ2UIImage *this,Image *param_1,Image *param_2,Image *param_3)

{
  float fVar1;
  
  *(undefined4 *)this = 4;
  *(Image **)(this + 0x10) = param_1;
  *(Image **)(this + 0x18) = param_2;
  *(Image **)(this + 0x20) = param_3;
  *(undefined8 *)(this + 8) = 0;
  fVar1 = (float)PVZ_T();
  this[0x2c] = (PVZ2UIImage)0x0;
  *(undefined4 *)(this + 0x30) = 0;
  *(float *)(this + 0x28) = fVar1 + 2.0;
  *(undefined4 *)(this + 0x34) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIImage::ShakeDraw(Sexy::Graphics*, Sexy::TRect<int>&) */

void __thiscall PVZ2UIImage::ShakeDraw(PVZ2UIImage *this,Graphics *param_1,TRect *param_2)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  float local_38 [4];
  undefined4 local_28 [4];
  float local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_38[0] = 0.032;
  local_38[1] = 0.032;
  local_38[2] = 0.032;
  local_28[0] = 0;
  local_28[1] = 0x3db2a190;
  local_28[2] = 0xbdb2a190;
  local_18[0] = 0.08722222;
  local_18[1] = -0.08722222;
  local_18[2] = 0.0;
  dVar4 = 0.0;
  if (this[0x2c] != (PVZ2UIImage)0x0) {
    fVar5 = *(float *)(this + 0x28);
    fVar3 = fVar5 + local_38[*(int *)(this + 0x30)];
    fVar1 = (float)PVZ_T();
    if (fVar1 <= fVar3) {
      uVar2 = PVZ_T();
      fVar1 = CurveLerp<float>(fVar5,fVar3,uVar2,local_28 + *(int *)(this + 0x30),
                               local_18 + *(int *)(this + 0x30),3);
      dVar4 = (double)fVar1;
    }
    else {
      dVar4 = (double)local_18[*(int *)(this + 0x30)];
      if (*(int *)(this + 0x30) < 2) {
        uVar2 = PVZ_T();
        *(undefined4 *)(this + 0x28) = uVar2;
        *(int *)(this + 0x30) = *(int *)(this + 0x30) + 1;
      }
      else {
        this[0x2c] = (PVZ2UIImage)0x0;
        *(undefined4 *)(this + 0x30) = 0;
        fVar1 = (float)PVZ_T();
        *(float *)(this + 0x28) = fVar1 + 2.0;
      }
    }
    if (this[0x2c] != (PVZ2UIImage)0x0) goto LAB_0436df48;
  }
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0x28) < fVar1) {
    this[0x2c] = (PVZ2UIImage)0x1;
  }
LAB_0436df48:
  Sexy::Graphics::DrawImageRotated
            (param_1,*(Image **)(this + 8),*(int *)param_2,*(int *)(param_2 + 4),dVar4,(TRect *)0x0)
  ;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIImage::Draw(Sexy::Graphics*, Sexy::TRect<int>) */

void __thiscall PVZ2UIImage::Draw(PVZ2UIImage *this,Graphics *param_1,Insets *param_3)

{
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(*(undefined4 *)this) {
  case 1:
    Sexy::Graphics::DrawImage(param_1,*(Image **)(this + 8),*(int *)param_3,*(int *)(param_3 + 4));
    break;
  case 2:
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 8),*(int *)param_3,*(int *)(param_3 + 4),
               *(int *)(param_3 + 8),*(int *)(param_3 + 0xc));
    break;
  case 3:
    Sexy::Insets::Insets(aIStack_18,param_3);
    Draw3SliceImage(param_1,aIStack_18,*(undefined8 *)(this + 8));
    break;
  case 4:
    Sexy::Insets::Insets(aIStack_18,param_3);
    Draw3SliceImage(param_1,aIStack_18,*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18),
                    *(undefined8 *)(this + 0x20),0);
    break;
  case 5:
    Sexy::Insets::Insets(aIStack_18,param_3);
    Draw9SliceImage(param_1,aIStack_18,*(undefined8 *)(this + 8));
    break;
  case 6:
    ShakeDraw(this,param_1,(TRect *)param_3);
    break;
  case 7:
    Sexy::Graphics::DrawImageMirror
              (param_1,*(Image **)(this + 8),*(int *)param_3,*(int *)(param_3 + 4),true);
    break;
  case 8:
    Sexy::Graphics::DrawImageRotated
              (param_1,*(Image **)(this + 8),*(int *)param_3,*(int *)(param_3 + 4),
               (double)(*(float *)(this + 0x34) * 0.017453294),(TRect *)0x0);
    break;
  case 9:
    Sexy::Insets::Insets(aIStack_18,param_3);
    DrawAdaptiveImage(param_1,aIStack_18,*(undefined8 *)(this + 8));
    break;
  case 10:
    Sexy::Insets::Insets(aIStack_18,param_3);
    DrawAdaptiveInInscribedCircleImage(param_1,aIStack_18,*(undefined8 *)(this + 8));
    break;
  case 0xb:
    Sexy::Insets::Insets(aIStack_18,param_3);
    DrawHorizontalCropImage(param_1,aIStack_18,*(undefined8 *)(this + 8));
    break;
  case 0xc:
    Sexy::Insets::Insets(aIStack_18,param_3);
    DrawVerticalCropImage(param_1,aIStack_18,*(undefined8 *)(this + 8));
    break;
  case 0xd:
    Sexy::Insets::Insets(aIStack_18,param_3);
    DrawAutoCropImage(param_1,aIStack_18,*(undefined8 *)(this + 8));
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PVZ2UIImage::PVZ2UIImage(CachedUIResourcePtr<Sexy::Image>&, PVZ2UIImageType) */

void __thiscall
PVZ2UIImage::PVZ2UIImage
          (PVZ2UIImage *this,CachedUIResourcePtr<Sexy::Image> *param_1,undefined4 param_3)

{
  undefined8 uVar1;
  float fVar2;
  
  *(undefined4 *)this = param_3;
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->(param_1);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = uVar1;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  fVar2 = (float)PVZ_T();
  this[0x2c] = (PVZ2UIImage)0x0;
  *(undefined4 *)(this + 0x30) = 0;
  *(float *)(this + 0x28) = fVar2 + 2.0;
  *(undefined4 *)(this + 0x34) = 0;
  return;
}

