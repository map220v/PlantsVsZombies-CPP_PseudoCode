// Class: Sexy::SexyTransform2D


/* Sexy::SexyTransform2D::Scale(float, float) */

void __thiscall Sexy::SexyTransform2D::Scale(SexyTransform2D *this,float param_1,float param_2)

{
  *(float *)this = *(float *)this * param_1;
  *(float *)(this + 4) = *(float *)(this + 4) * param_1;
  *(float *)(this + 8) = *(float *)(this + 8) * param_1;
  *(float *)(this + 0xc) = *(float *)(this + 0xc) * param_2;
  *(float *)(this + 0x10) = *(float *)(this + 0x10) * param_2;
  *(float *)(this + 0x14) = *(float *)(this + 0x14) * param_2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyTransform2D::RotateRad(float) */

void __thiscall Sexy::SexyTransform2D::RotateRad(SexyTransform2D *this,float param_1)

{
  float fVar1;
  float local_58;
  float local_54;
  undefined4 local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  SexyMatrix3 aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar1 = sinf(param_1);
  local_58 = cosf(param_1);
  local_4c = -fVar1;
  local_50 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0x3f800000;
  local_54 = fVar1;
  local_48 = local_58;
  SexyMatrix3::Multiply(aSStack_30,(SexyMatrix3 *)&local_58,(SexyMatrix3 *)this);
  operator=(this,aSStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::SexyTransform2D::RotateDeg(float) */

void __thiscall Sexy::SexyTransform2D::RotateDeg(SexyTransform2D *this,float param_1)

{
  RotateRad(this,param_1 * 0.017453294);
  return;
}


/* Sexy::SexyTransform2D::SexyTransform2D(Sexy::SimpleMatrix const&) */

void __thiscall Sexy::SexyTransform2D::SexyTransform2D(SexyTransform2D *this,SimpleMatrix *param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x14) = uVar1;
  *(undefined4 *)(this + 0x20) = 0x3f800000;
  return;
}


/* Sexy::SexyTransform2D::SexyTransform2D() */

void __thiscall Sexy::SexyTransform2D::SexyTransform2D(SexyTransform2D *this)

{
  *(undefined4 *)(this + 0x20) = 0x3f800000;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0x10) = 0x3f800000;
  *(undefined4 *)this = 0x3f800000;
  return;
}


/* Sexy::SexyTransform2D::SexyTransform2D(bool) */

void __thiscall Sexy::SexyTransform2D::SexyTransform2D(SexyTransform2D *this,bool param_1)

{
  if (!param_1) {
    return;
  }
  SexyMatrix3::LoadIdentity((SexyMatrix3 *)this);
  return;
}


/* Sexy::SexyTransform2D::SexyTransform2D(Sexy::SexyMatrix3 const&) */

void __thiscall Sexy::SexyTransform2D::SexyTransform2D(SexyTransform2D *this,SexyMatrix3 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x18) = uVar1;
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  return;
}


/* Sexy::SexyTransform2D::TEMPNAMEPLACEHOLDERVALUE(Sexy::SexyMatrix3 const&) */

void __thiscall Sexy::SexyTransform2D::operator=(SexyTransform2D *this,SexyMatrix3 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x18) = uVar1;
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyTransform2D::SkewRad(float, float) */

void __thiscall Sexy::SexyTransform2D::SkewRad(SexyTransform2D *this,float param_1,float param_2)

{
  SexyMatrix3 aSStack_58 [4];
  float local_54;
  float local_50;
  SexyMatrix3 aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SexyMatrix3::LoadIdentity(aSStack_58);
  local_54 = tanf(param_1);
  local_50 = tanf(param_2);
  SexyMatrix3::operator*(aSStack_58,(SexyMatrix3 *)this);
  operator=(this,aSStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::SexyTransform2D::TEMPNAMEPLACEHOLDERVALUE(Sexy::SexyTransform2D const&) */

bool __thiscall Sexy::SexyTransform2D::operator==(SexyTransform2D *this,SexyTransform2D *param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (((((*(float *)this == *(float *)param_1) && (*(float *)(this + 4) == *(float *)(param_1 + 4)))
       && (*(float *)(this + 8) == *(float *)(param_1 + 8))) &&
      ((*(float *)(this + 0xc) == *(float *)(param_1 + 0xc) &&
       (*(float *)(this + 0x10) == *(float *)(param_1 + 0x10))))) &&
     ((*(float *)(this + 0x14) == *(float *)(param_1 + 0x14) &&
      ((*(float *)(this + 0x18) == *(float *)(param_1 + 0x18) &&
       (*(float *)(this + 0x1c) == *(float *)(param_1 + 0x1c))))))) {
    bVar1 = *(float *)(this + 0x20) == *(float *)(param_1 + 0x20);
  }
  return bVar1;
}


/* Sexy::SexyTransform2D::CreateTranslation(Sexy::SexyVector2 const&) */

void __thiscall Sexy::SexyTransform2D::CreateTranslation(SexyTransform2D *this,SexyVector2 *param_1)

{
  SexyTransform2D *in_x8;
  
  SexyTransform2D(in_x8);
  FUN_051dd4c0(*(undefined4 *)this,*(undefined4 *)(this + 4),in_x8 + 8,in_x8 + 0x14);
  return;
}


/* Sexy::SexyTransform2D::CreateRotation(float) */

void __thiscall Sexy::SexyTransform2D::CreateRotation(SexyTransform2D *this,float param_1)

{
  SexyTransform2D *in_x8;
  
  SexyTransform2D(in_x8);
  RotateRad(in_x8,param_1);
  return;
}


/* Sexy::SexyTransform2D::CreateScale(Sexy::SexyVector2 const&) */

void __thiscall Sexy::SexyTransform2D::CreateScale(SexyTransform2D *this,SexyVector2 *param_1)

{
  SexyTransform2D *in_x8;
  
  SexyTransform2D(in_x8);
  Scale(in_x8,*(float *)this,*(float *)(this + 4));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyTransform2D::CreateScale(float) */

void __thiscall Sexy::SexyTransform2D::CreateScale(SexyTransform2D *this,float param_1)

{
  SexyVector2 *extraout_x1;
  FastCurve aFStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FastCurve::SetOutRange(aFStack_10,param_1,param_1);
  CreateScale((SexyTransform2D *)aFStack_10,extraout_x1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::SexyTransform2D::CreateRotationWithPivot(float, Sexy::SexyVector2 const&, bool) */

void __thiscall
Sexy::SexyTransform2D::CreateRotationWithPivot
          (SexyTransform2D *this,float param_1,SexyVector2 *param_2,bool param_3)

{
  SexyTransform2D *in_x8;
  
  SexyTransform2D(in_x8);
  FUN_051dd4c0(-*(float *)this,-*(float *)(this + 4),in_x8 + 8,in_x8 + 0x14);
  RotateRad(in_x8,param_1);
  if (((ulong)param_2 & 0xff) == 0) {
    FUN_051dd4c0(*(undefined4 *)this,*(undefined4 *)(this + 4),in_x8 + 8,in_x8 + 0x14);
  }
  return;
}


/* Sexy::SexyTransform2D::CreateTransform(Sexy::SexyVector2 const&, float, Sexy::SexyVector2 const&)
    */

void __thiscall
Sexy::SexyTransform2D::CreateTransform
          (SexyTransform2D *this,SexyVector2 *param_1,float param_2,SexyVector2 *param_3)

{
  SexyTransform2D *in_x8;
  
  SexyTransform2D(in_x8);
  Scale(in_x8,*(float *)param_1,*(float *)(param_1 + 4));
  RotateRad(in_x8,param_2);
  FUN_051dd4c0(*(undefined4 *)this,*(undefined4 *)(this + 4),in_x8 + 8,in_x8 + 0x14);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyTransform2D::CreateTransform(Sexy::SexyVector2 const&, float, float) */

void __thiscall
Sexy::SexyTransform2D::CreateTransform
          (SexyTransform2D *this,SexyVector2 *param_1,float param_2,float param_3)

{
  SexyVector2 *pSVar1;
  FastCurve aFStack_10 [8];
  SexyVector2 *local_8;
  
  local_8 = ___stack_chk_guard;
  pSVar1 = ___stack_chk_guard;
  FastCurve::SetOutRange(aFStack_10,param_3,param_3);
  CreateTransform(this,(SexyVector2 *)aFStack_10,param_2,pSVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::SexyTransform2D::CreateTransformWithPivot(Sexy::SexyVector2 const&, float,
   Sexy::SexyVector2 const&, Sexy::SexyVector2 const&, bool) */

void __thiscall
Sexy::SexyTransform2D::CreateTransformWithPivot
          (SexyTransform2D *this,SexyVector2 *param_1,float param_2,SexyVector2 *param_3,
          SexyVector2 *param_4,bool param_5)

{
  SexyTransform2D *pSVar1;
  SexyTransform2D *pSVar2;
  float fVar3;
  SexyTransform2D *in_x8;
  float fVar4;
  float fVar5;
  
  SexyTransform2D(in_x8);
  pSVar1 = in_x8 + 8;
  pSVar2 = in_x8 + 0x14;
  FUN_051dd4c0(-*(float *)param_3,-*(float *)(param_3 + 4),pSVar1,pSVar2);
  Scale(in_x8,*(float *)param_1,*(float *)(param_1 + 4));
  RotateRad(in_x8,param_2);
  FUN_051dd4c0(*(undefined4 *)this,*(undefined4 *)(this + 4),pSVar1,pSVar2);
  if (((ulong)param_4 & 0xff) == 0) {
    fVar3 = ABS(*(float *)param_3);
    if ((long)(double)*(float *)param_1 < 0) {
      fVar5 = *(float *)(param_1 + 4);
      fVar4 = *(float *)(param_3 + 4);
      fVar3 = -fVar3;
    }
    else {
      fVar5 = *(float *)(param_1 + 4);
      fVar4 = *(float *)(param_3 + 4);
    }
    if ((long)(double)fVar5 < 0) {
      FUN_051dd4c0(fVar3,-ABS(fVar4),pSVar1,pSVar2);
    }
    else {
      FUN_051dd4c0(fVar3,ABS(fVar4),pSVar1,pSVar2);
    }
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyTransform2D::CreateTransformWithPivot(Sexy::SexyVector2 const&, float, float,
   Sexy::SexyVector2 const&, bool) */

void Sexy::SexyTransform2D::CreateTransformWithPivot
               (SexyVector2 *param_1,float param_2,float param_3,SexyVector2 *param_4,bool param_5)

{
  undefined1 in_w4;
  FastCurve aFStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FastCurve::SetOutRange(aFStack_10,param_3,param_3);
  CreateTransformWithPivot
            ((SexyTransform2D *)param_1,(SexyVector2 *)aFStack_10,param_2,param_4,
             (SexyVector2 *)(ulong)param_5,(bool)in_w4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

