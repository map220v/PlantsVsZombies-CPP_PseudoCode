// Class: WorldMapCamera


/* WorldMapCamera::SetUseClipViewport(bool) */

void __thiscall WorldMapCamera::SetUseClipViewport(WorldMapCamera *this,bool param_1)

{
  this[0x40] = (WorldMapCamera)param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapCamera::WorldMapCamera(Sexy::Graphics*) */

void __thiscall WorldMapCamera::WorldMapCamera(WorldMapCamera *this,Graphics *param_1)

{
  bool bVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_nop_067238b0;
  PieceConfig::PieceConfig((PieceConfig *)(this + 0x10));
  PieceConfig::PieceConfig((PieceConfig *)(this + 0x18));
  Sexy::Insets::Insets((Insets *)(this + 0x20));
  Sexy::Insets::Insets((Insets *)(this + 0x30));
  SetCameraScale(this,1.0,1.0);
  SetGraphics(this,param_1);
  this[0x40] = (WorldMapCamera)0x0;
  Sexy::Insets::Insets((Insets *)&local_18,0,0,1,1);
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined8 *)(this + 0x20) = local_18;
  *(undefined8 *)(this + 0x28) = uStack_10;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMapCamera::rebuildViewMatrices() */

void __thiscall WorldMapCamera::rebuildViewMatrices(WorldMapCamera *this)

{
  int iVar1;
  
  iVar1 = FUN_04564104(200);
  *(int *)(this + 0x30) = -iVar1;
  iVar1 = FUN_04564104(200);
  *(int *)(this + 0x34) = -iVar1;
  iVar1 = FUN_04564104(400);
  *(int *)(this + 0x38) = *(int *)(this + 0x28) + iVar1;
  iVar1 = FUN_04564104(400);
  *(int *)(this + 0x3c) = *(int *)(this + 0x2c) + iVar1;
  return;
}


/* WorldMapCamera::SetCameraCenter(float, float) */

void __thiscall WorldMapCamera::SetCameraCenter(WorldMapCamera *this,float param_1,float param_2)

{
  *(float *)(this + 0x18) = param_1;
  *(float *)(this + 0x1c) = param_2;
  rebuildViewMatrices(this);
  return;
}


/* WorldMapCamera::SetCameraScale(float, float) */

void __thiscall WorldMapCamera::SetCameraScale(WorldMapCamera *this,float param_1,float param_2)

{
  *(float *)(this + 0x10) = param_1;
  *(float *)(this + 0x14) = param_2;
  rebuildViewMatrices(this);
  return;
}


/* WorldMapCamera::TransformPointToCamera(float, float) */

DVec2 * WorldMapCamera::TransformPointToCamera(float param_1,float param_2)

{
  long in_x0;
  DVec2 *in_x8;
  
  DVec2::DVec2(in_x8,*(float *)(in_x0 + 0x18) +
                     *(float *)(in_x0 + 0x10) * (param_1 - *(float *)(in_x0 + 0x18)),
               *(float *)(in_x0 + 0x1c) +
               *(float *)(in_x0 + 0x14) * (param_2 - *(float *)(in_x0 + 0x1c)));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapCamera::FillPoly(Sexy::Point*, int, bool) */

void __thiscall
WorldMapCamera::FillPoly(WorldMapCamera *this,Point *param_1,int param_2,bool param_3)

{
  Point *pPVar1;
  long lVar2;
  Point *pPVar3;
  float local_10;
  float local_c;
  
  lVar2 = ___stack_chk_guard;
  if (0 < param_2) {
    pPVar3 = param_1;
    do {
      pPVar1 = pPVar3 + 8;
      TransformPointToCamera((float)*(int *)pPVar3,(float)*(int *)(pPVar3 + 4));
      *(int *)pPVar3 = (int)local_10;
      *(int *)(pPVar3 + 4) = (int)local_c;
      pPVar3 = pPVar1;
    } while (pPVar1 != param_1 + ((ulong)(param_2 - 1) + 1) * 8);
  }
  Sexy::Graphics::PolyFill(*(Graphics **)(this + 8),param_1,param_2,param_3);
  if (lVar2 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapCamera::DrawTexturedQuad(Sexy::Image*, Sexy::Point*, int) */

void __thiscall
WorldMapCamera::DrawTexturedQuad(WorldMapCamera *this,Image *param_1,Point *param_2,int param_3)

{
  Point *pPVar1;
  Point *pPVar2;
  float local_d0;
  float local_cc;
  SexyVertex2D aSStack_c8 [32];
  SexyVertex2D aSStack_a8 [32];
  SexyVertex2D aSStack_88 [32];
  SexyVertex2D aSStack_68 [32];
  SexyVertex2D aSStack_48 [32];
  SexyVertex2D aSStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (0 < param_3) {
    pPVar2 = param_2;
    do {
      pPVar1 = pPVar2 + 8;
      TransformPointToCamera((float)*(int *)pPVar2,(float)*(int *)(pPVar2 + 4));
      *(int *)pPVar2 = (int)local_d0;
      *(int *)(pPVar2 + 4) = (int)local_cc;
      pPVar2 = pPVar1;
    } while (pPVar1 != param_2 + ((ulong)(param_3 - 1) + 1) * 8);
  }
  Sexy::SexyVertex2D::SexyVertex2D
            (aSStack_c8,(float)*(int *)param_2,(float)*(int *)(param_2 + 4),0.0,0.0);
  Sexy::SexyVertex2D::SexyVertex2D
            (aSStack_a8,(float)*(int *)(param_2 + 8),(float)*(int *)(param_2 + 0xc),1.0,0.0);
  Sexy::SexyVertex2D::SexyVertex2D
            (aSStack_88,(float)*(int *)(param_2 + 0x10),(float)*(int *)(param_2 + 0x14),1.0,1.0);
  Sexy::SexyVertex2D::SexyVertex2D
            (aSStack_68,(float)*(int *)param_2,(float)*(int *)(param_2 + 4),0.0,0.0);
  Sexy::SexyVertex2D::SexyVertex2D
            (aSStack_48,(float)*(int *)(param_2 + 0x10),(float)*(int *)(param_2 + 0x14),1.0,1.0);
  Sexy::SexyVertex2D::SexyVertex2D
            (aSStack_28,(float)*(int *)(param_2 + 0x18),(float)*(int *)(param_2 + 0x1c),0.0,1.0);
  Sexy::Graphics::DrawTrianglesTex(*(Graphics **)(this + 8),param_1,aSStack_c8,2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapCamera::DrawLine(float, float, float, float) */

void __thiscall
WorldMapCamera::DrawLine
          (WorldMapCamera *this,float param_1,float param_2,float param_3,float param_4)

{
  long lVar1;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  lVar1 = ___stack_chk_guard;
  TransformPointToCamera(param_1,param_2);
  TransformPointToCamera(param_3,param_4);
  Sexy::Graphics::DrawLine(*(Graphics **)(this + 8),local_18,local_14,local_10,local_c);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMapCamera::TransformPointFromCamera(float, float) */

DVec2 * WorldMapCamera::TransformPointFromCamera(float param_1,float param_2)

{
  long in_x0;
  DVec2 *in_x8;
  
  DVec2::DVec2(in_x8,(param_1 - *(float *)(in_x0 + 0x18)) / *(float *)(in_x0 + 0x10) +
                     *(float *)(in_x0 + 0x18),
               (param_2 - *(float *)(in_x0 + 0x1c)) / *(float *)(in_x0 + 0x14) +
               *(float *)(in_x0 + 0x1c));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapCamera::SetGraphics(Sexy::Graphics*) */

void __thiscall WorldMapCamera::SetGraphics(WorldMapCamera *this,Graphics *param_1)

{
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  *(Graphics **)(this + 8) = param_1;
  local_8 = ___stack_chk_guard;
  if (param_1 != (Graphics *)0x0) {
    Sexy::Insets::Insets
              ((Insets *)&local_18,0,0,*(int *)(*(long *)(param_1 + 8) + 0x38),
               *(int *)(*(long *)(param_1 + 8) + 0x3c));
    *(undefined8 *)(this + 0x20) = local_18;
    *(undefined8 *)(this + 0x28) = uStack_10;
    *(undefined8 *)(this + 0x30) = local_18;
    *(undefined8 *)(this + 0x38) = uStack_10;
    SetCameraCenter(this,(float)*(int *)(this + 0x28) * 0.5,(float)*(int *)(this + 0x2c) * 0.5);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapCamera::DrawRect(Sexy::TRect<int> const&) */

void __thiscall WorldMapCamera::DrawRect(WorldMapCamera *this,TRect *param_1)

{
  float local_20;
  float local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TransformPointToCamera((float)*(int *)param_1,(float)*(int *)(param_1 + 4));
  Sexy::Insets::Insets
            (aIStack_18,(int)local_20,(int)local_1c,
             (int)((float)*(int *)(param_1 + 8) * *(float *)(this + 0x10)),
             (int)((float)*(int *)(param_1 + 0xc) * *(float *)(this + 0x14)));
  Sexy::Graphics::DrawRect(*(Graphics **)(this + 8),(TRect *)aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapCamera::FillRect(Sexy::TRect<int> const&) */

void __thiscall WorldMapCamera::FillRect(WorldMapCamera *this,TRect *param_1)

{
  float local_20;
  float local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TransformPointToCamera((float)*(int *)param_1,(float)*(int *)(param_1 + 4));
  Sexy::Insets::Insets
            (aIStack_18,(int)local_20,(int)local_1c,
             (int)((float)*(int *)(param_1 + 8) * *(float *)(this + 0x10)),
             (int)((float)*(int *)(param_1 + 0xc) * *(float *)(this + 0x14)));
  Sexy::Graphics::FillRect(*(Graphics **)(this + 8),(TRect *)aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapCamera::DrawImage(Sexy::Image*, Sexy::TRect<int>, Sexy::TRect<float>, bool) */

void __thiscall
WorldMapCamera::DrawImage
          (WorldMapCamera *this,Image *param_1,TRect *param_3,float *param_4,char param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_48;
  float local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TransformPointToCamera(*param_4,param_4[1]);
  fVar7 = local_48 + param_4[2] * *(float *)(this + 0x10) * 0.5;
  fVar4 = local_44 + param_4[3] * *(float *)(this + 0x14) * 0.5;
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
  fVar5 = (param_4[2] / (float)*(int *)(param_3 + 8)) * *(float *)(this + 0x10);
  fVar6 = (param_4[3] / (float)*(int *)(param_3 + 0xc)) * *(float *)(this + 0x14);
  if (this[0x40] != (WorldMapCamera)0x0) {
    iVar3 = (int)(fVar5 * param_4[2]);
    iVar2 = (int)(fVar6 * param_4[3]);
    Sexy::Insets::Insets((Insets *)&local_40);
    local_40 = (int)((*(float *)(*(long *)(this + 8) + 0x10) + fVar7) - (float)(iVar3 / 2));
    local_3c = (int)((*(float *)(*(long *)(this + 8) + 0x14) + fVar4) - (float)(iVar2 / 2));
    local_38 = iVar3;
    local_34 = iVar2;
    cVar1 = Sexy::TRect<int>::Intersects((TRect<int> *)(this + 0x30),(TRect *)&local_40);
    if (cVar1 == '\0') goto LAB_04564834;
  }
  if (param_5 != '\0') {
    fVar5 = -fVar5;
  }
  Sexy::SexyTransform2D::Scale(aSStack_30,fVar5,fVar6);
  FUN_045640b8(fVar7,fVar4,auStack_28,auStack_1c);
  Sexy::Graphics::DrawImageMatrix
            (*(Graphics **)(this + 8),param_1,(SexyMatrix3 *)aSStack_30,param_3,0.0,0.0);
LAB_04564834:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapCamera::DrawImage(Sexy::Image*, float, float, bool, float, float) */

void __thiscall
WorldMapCamera::DrawImage
          (WorldMapCamera *this,Image *param_1,float param_2,float param_3,bool param_4,
          float param_5,float param_6)

{
  int iVar1;
  int iVar2;
  Rectangle aRStack_48 [16];
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  TRect<float> aTStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_5 < 0.0) {
    iVar1 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)param_1);
    param_5 = (float)iVar1;
  }
  if (param_6 < 0.0) {
    iVar1 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)param_1);
    param_6 = (float)iVar1;
  }
  EA::Text::Rectangle::Rectangle(aRStack_48,param_2,param_3,param_5,param_6);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)param_1);
  iVar2 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)param_1);
  Sexy::Insets::Insets(aIStack_38,0,0,iVar1,iVar2);
  Sexy::Insets::Insets(aIStack_28,aIStack_38);
  Sexy::TRect<float>::TRect(aTStack_18,(TRect *)aRStack_48);
  DrawImage(this,param_1,aIStack_28,aTStack_18,param_4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapCamera::DrawImageRotated(Sexy::Image*, Sexy::TRect<int>, Sexy::TRect<float>, float, bool)
    */

void __thiscall
WorldMapCamera::DrawImageRotated
          (float param_1_00,WorldMapCamera *this,Image *param_1,TRect *param_4,float *param_5,
          char param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_48;
  float local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TransformPointToCamera(*param_5,param_5[1]);
  fVar4 = local_48 + param_5[2] * *(float *)(this + 0x10) * 0.5;
  fVar6 = local_44 + param_5[3] * *(float *)(this + 0x14) * 0.5;
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
  fVar5 = (param_5[2] / (float)*(int *)(param_4 + 8)) * *(float *)(this + 0x10);
  fVar7 = (param_5[3] / (float)*(int *)(param_4 + 0xc)) * *(float *)(this + 0x14);
  if (this[0x40] != (WorldMapCamera)0x0) {
    iVar3 = (int)(fVar5 * param_5[2]);
    iVar2 = (int)(fVar7 * param_5[3]);
    Sexy::Insets::Insets((Insets *)&local_40);
    local_40 = (int)((*(float *)(*(long *)(this + 8) + 0x10) + fVar4) - (float)(iVar3 / 2));
    local_3c = (int)((*(float *)(*(long *)(this + 8) + 0x14) + fVar6) - (float)(iVar2 / 2));
    local_38 = iVar3;
    local_34 = iVar2;
    cVar1 = Sexy::TRect<int>::Intersects((TRect<int> *)(this + 0x30),(TRect *)&local_40);
    if (cVar1 == '\0') goto LAB_04564b60;
  }
  if (param_6 != '\0') {
    fVar5 = -fVar5;
  }
  Sexy::SexyTransform2D::Scale(aSStack_30,fVar5,fVar7);
  Sexy::SexyTransform2D::RotateDeg(aSStack_30,param_1_00);
  FUN_045640b8(fVar4,fVar6,auStack_28,auStack_1c);
  Sexy::Graphics::DrawImageMatrix
            (*(Graphics **)(this + 8),param_1,(SexyMatrix3 *)aSStack_30,param_4,0.0,0.0);
LAB_04564b60:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapCamera::DrawImageRotated(Sexy::Image*, float, float, float, bool, float, float) */

void __thiscall
WorldMapCamera::DrawImageRotated
          (WorldMapCamera *this,Image *param_1,float param_2,float param_3,float param_4,
          bool param_5,float param_6,float param_7)

{
  int iVar1;
  int iVar2;
  Rectangle aRStack_48 [16];
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  TRect<float> aTStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_6 < 0.0) {
    iVar1 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)param_1);
    param_6 = (float)iVar1;
  }
  if (param_7 < 0.0) {
    iVar1 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)param_1);
    param_7 = (float)iVar1;
  }
  EA::Text::Rectangle::Rectangle(aRStack_48,param_2,param_3,param_6,param_7);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)param_1);
  iVar2 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)param_1);
  Sexy::Insets::Insets(aIStack_38,0,0,iVar1,iVar2);
  Sexy::Insets::Insets(aIStack_28,aIStack_38);
  Sexy::TRect<float>::TRect(aTStack_18,(TRect *)aRStack_48);
  DrawImageRotated((WorldMapCamera *)param_4,this,param_1,aIStack_28,aTStack_18,param_5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapCamera::DrawPopAnimRig(PopAnimRig*, float, float, float, float, float) */

void __thiscall
WorldMapCamera::DrawPopAnimRig
          (WorldMapCamera *this,PopAnimRig *param_1,float param_2,float param_3,float param_4,
          float param_5,float param_6)

{
  char cVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  float local_70;
  float local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TransformPointToCamera(param_2,param_3);
  if (this[0x40] != (WorldMapCamera)0x0) {
    lVar2 = FUN_045640d4(*(undefined8 *)(param_1 + 0x20));
    iVar4 = (int)((float)*(int *)(lVar2 + 0x3c) * *(float *)(this + 0x10));
    iVar3 = (int)((float)*(int *)(lVar2 + 0x40) * *(float *)(this + 0x14));
    Sexy::Insets::Insets((Insets *)&local_68);
    local_68 = (int)((*(float *)(*(long *)(this + 8) + 0x10) + local_70) - (float)(iVar4 / 2));
    local_64 = (int)((*(float *)(*(long *)(this + 8) + 0x14) + local_6c) - (float)(iVar3 / 2));
    local_60 = iVar4;
    local_5c = iVar3;
    cVar1 = Sexy::TRect<int>::Intersects((TRect<int> *)(this + 0x30),(TRect *)&local_68);
    if (cVar1 == '\0') goto LAB_04564f2c;
  }
  lVar2 = FUN_045640d4(*(undefined8 *)(param_1 + 0x20));
  local_38 = *(undefined4 *)(lVar2 + 0x8c);
  local_58 = *(undefined8 *)(lVar2 + 0x6c);
  uStack_50 = *(undefined8 *)(lVar2 + 0x74);
  local_48 = *(undefined8 *)(lVar2 + 0x7c);
  uStack_40 = *(undefined8 *)(lVar2 + 0x84);
  local_30 = local_58;
  uStack_28 = uStack_50;
  local_20 = local_48;
  uStack_18 = uStack_40;
  local_10 = local_38;
  Sexy::SexyTransform2D::RotateRad((SexyTransform2D *)&local_30,param_6);
  Sexy::SexyTransform2D::Scale((SexyTransform2D *)&local_30,param_4,param_5);
  Sexy::SexyTransform2D::Scale
            ((SexyTransform2D *)&local_30,*(float *)(this + 0x10),*(float *)(this + 0x14));
  FUN_045640b8(local_70,local_6c,&uStack_28,(long)&local_20 + 4);
  PopAnimRig::SetRenderTransform(param_1,(SexyTransform2D *)&local_30);
  PopAnimRig::Draw(param_1,*(Graphics **)(this + 8));
  PopAnimRig::SetRenderTransform(param_1,(SexyTransform2D *)&local_58);
LAB_04564f2c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapCamera::DrawString(Sexy::PrimeTypeface*, std::wstring const&, int, int, int, int, int,
   int*) */

void WorldMapCamera::DrawString
               (PrimeTypeface *param_1,wstring *param_2,int param_3,int param_4,int param_5,
               int param_6,int param_7,int *param_8)

{
  char cVar1;
  Insets *pIVar2;
  PVPManager *this;
  undefined4 uVar3;
  float fVar4;
  float local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined1 auStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((int)param_8 == 0) {
    uVar3 = 1;
  }
  else {
    uVar3 = 2;
    if ((int)param_8 != 1) {
      uVar3 = 0;
    }
  }
  Sexy::PrimeTextExtraParameters::PrimeTextExtraParameters((PrimeTextExtraParameters *)&local_30);
  fVar4 = *(float *)(param_1 + 0x10);
  local_2c = *(undefined4 *)(param_1 + 0x14);
  local_30 = fVar4;
  TransformPointToCamera((float)param_4,(float)param_5);
  if ((param_1[0x40] == (PrimeTypeface)0x0) ||
     (cVar1 = Sexy::TRect<int>::Contains
                        ((TRect<int> *)(param_1 + 0x30),
                         (int)(((float)(PrimeTypeface *)local_28 +
                               *(float *)(*(long *)(param_1 + 8) + 0x10)) *
                              *(float *)(param_1 + 0x10)),
                         (int)((local_28._4_4_ + *(float *)(*(long *)(param_1 + 8) + 0x14)) *
                              *(float *)(param_1 + 0x14))), cVar1 != '\0')) {
    FUN_05477b24(auStack_20,param_3);
    this = *(PVPManager **)(param_1 + 8);
    pIVar2 = (Insets *)PVPManager::GetSkillDatas(this);
    Sexy::Insets::Insets(aIStack_18,pIVar2);
    Sexy::PrimeTypeface::DrawString_Line
              ((PrimeTypeface *)local_28,local_28._4_4_,(float)(int)((float)param_6 * fVar4),param_2
               ,this,auStack_20,uVar3,aIStack_18,(PrimeTextExtraParameters *)&local_30);
    FUN_05476c50(auStack_20);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

