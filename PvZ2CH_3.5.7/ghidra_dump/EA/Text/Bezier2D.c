// Class: EA::Text::Bezier2D


/* EA::Text::Bezier2D::Bezier2D() */

void __thiscall EA::Text::Bezier2D::Bezier2D(Bezier2D *this)

{
  Bezier2D *pBVar1;
  Bezier2D *this_00;
  
  this_00 = this;
  do {
    pBVar1 = this_00 + 8;
    Sexy::FastCurve::SetOutRange((FastCurve *)this_00,0.0,0.0);
    this_00 = pBVar1;
  } while (pBVar1 != this + 0x20);
  return;
}


/* EA::Text::Bezier2D::GetPoint(float, EA::Text::Point&) */

void __thiscall EA::Text::Bezier2D::GetPoint(Bezier2D *this,float param_1,Point *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar2 = 1.0 - param_1;
  fVar6 = *(float *)(this + 0xc);
  fVar8 = *(float *)(this + 4);
  fVar4 = param_1 * 3.0 * fVar2 * fVar2;
  fVar3 = fVar2 * fVar2 * fVar2;
  fVar1 = param_1 * param_1 * param_1;
  fVar7 = *(float *)(this + 0x1c);
  fVar2 = fVar2 * param_1 * param_1 * 3.0;
  fVar5 = *(float *)(this + 0x14);
  *(float *)param_2 =
       fVar4 * *(float *)(this + 8) + *(float *)this * fVar3 + *(float *)(this + 0x18) * fVar1 +
       *(float *)(this + 0x10) * fVar2;
  *(float *)(param_2 + 4) = fVar4 * fVar6 + fVar8 * fVar3 + fVar7 * fVar1 + fVar5 * fVar2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Bezier2D::Set(EA::Text::Point const*) */

void __thiscall EA::Text::Bezier2D::Set(Bezier2D *this,Point *param_1)

{
  undefined8 uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  fVar4 = 0.0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  local_8 = ___stack_chk_guard;
  iVar2 = 0x40;
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x18) = uVar1;
  *(undefined4 *)(this + 0x20) = 0;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,0.0,0.0);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,0.0,0.0);
  GetPoint(this,0.0,(Point *)&local_18);
  fVar6 = 1e+06;
  fVar5 = 0.015625;
  do {
    GetPoint(this,fVar5,(Point *)&local_10);
    fVar3 = (float)Bezier::GetDistance((Point *)&local_18,(Point *)&local_10);
    fVar6 = (float)NEON_fminnm(fVar6,fVar3);
    local_18 = local_10;
    iVar2 = iVar2 + -1;
    if (fVar4 <= fVar3) {
      fVar4 = fVar3;
    }
    *(float *)(this + 0x20) = *(float *)(this + 0x20) + fVar3;
    fVar5 = fVar5 + 0.015625;
  } while (iVar2 != 0);
  this[0x24] = (Bezier2D)(ABS(fVar6 - fVar4) / fVar6 < 0.5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

