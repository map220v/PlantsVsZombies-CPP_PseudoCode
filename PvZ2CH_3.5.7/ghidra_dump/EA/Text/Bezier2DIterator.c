// Class: EA::Text::Bezier2DIterator


/* EA::Text::Bezier2DIterator::SetT(float) */

void __thiscall EA::Text::Bezier2DIterator::SetT(Bezier2DIterator *this,float param_1)

{
  *(float *)(this + 0x30) = param_1;
  *(undefined4 *)(this + 0x40) = 0x4479c000;
  return;
}


/* EA::Text::Bezier2DIterator::MoveDistance(float) */

void __thiscall EA::Text::Bezier2DIterator::MoveDistance(Bezier2DIterator *this,float param_1)

{
  (**(code **)(*(long *)this + 0x28))(param_1 + *(float *)(this + 0x34));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Bezier2DIterator::SetDistance(float) */

void __thiscall EA::Text::Bezier2DIterator::SetDistance(Bezier2DIterator *this,float param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x2c] == (Bezier2DIterator)0x0) {
    iVar1 = 0x280;
    fVar4 = 0.0;
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,0.0,0.0);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,0.0,0.0);
    Bezier2D::GetPoint((Bezier2D *)(this + 8),0.0,(Point *)&local_18);
    fVar2 = 0.0015625;
    fVar5 = 0.0;
    do {
      fVar3 = fVar2;
      Bezier2D::GetPoint((Bezier2D *)(this + 8),fVar5,(Point *)&local_10);
      fVar2 = (float)Bezier::GetDistance((Point *)&local_18,(Point *)&local_10);
      fVar4 = fVar4 + fVar2;
      if (param_1 < fVar4) {
        fVar3 = fVar5 + (fVar3 - fVar5) * 0.5;
        break;
      }
      local_18 = local_10;
      iVar1 = iVar1 + -1;
      fVar2 = fVar3 + 0.0015625;
      fVar5 = fVar3;
    } while (iVar1 != 0);
  }
  else {
    fVar3 = param_1 / *(float *)(this + 0x28);
  }
  (**(code **)(*(long *)this + 0x18))(fVar3,this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Bezier2DIterator::GetPosition(EA::Text::Point&, float&) */

void __thiscall
EA::Text::Bezier2DIterator::GetPosition(Bezier2DIterator *this,Point *param_1,float *param_2)

{
  float fVar1;
  FastCurve aFStack_10 [8];
  long local_8;
  
  fVar1 = *(float *)(this + 0x40);
  local_8 = ___stack_chk_guard;
  if (fVar1 == 999.0) {
    Bezier2D::GetPoint((Bezier2D *)(this + 8),*(float *)(this + 0x30),(Point *)(this + 0x38));
    Sexy::FastCurve::SetOutRange(aFStack_10,0.0,0.0);
    Bezier2D::GetPoint((Bezier2D *)(this + 8),*(float *)(this + 0x30) + 0.02,(Point *)aFStack_10);
    fVar1 = (float)Bezier::GetAngle((Point *)(this + 0x38),(Point *)aFStack_10);
    *(float *)(this + 0x40) = fVar1;
  }
  *(undefined8 *)param_1 = *(undefined8 *)(this + 0x38);
  *param_2 = fVar1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::Text::Bezier2DIterator::Bezier2DIterator() */

void __thiscall EA::Text::Bezier2DIterator::Bezier2DIterator(Bezier2DIterator *this)

{
  BaselineIterator::BaselineIterator((BaselineIterator *)this);
  *(undefined ***)this = &PTR_nop_066b2d10;
  Bezier2D::Bezier2D((Bezier2D *)(this + 8));
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  Sexy::FastCurve::SetOutRange((FastCurve *)(this + 0x38),0.0,0.0);
  *(undefined4 *)(this + 0x40) = 0;
  return;
}


/* EA::Text::Bezier2DIterator::SetBezier(EA::Text::Bezier2D const&) */

void __thiscall EA::Text::Bezier2DIterator::SetBezier(Bezier2DIterator *this,Bezier2D *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 8) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x10) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x20) = uVar1;
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x20);
  this[0x2c] = *(Bezier2DIterator *)(param_1 + 0x24);
  *(undefined8 *)(this + 0x38) = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Bezier2DIterator::MakeLine(EA::Text::Point const&, EA::Text::Point const&) */

void __thiscall
EA::Text::Bezier2DIterator::MakeLine(Bezier2DIterator *this,Point *param_1,Point *param_2)

{
  FastCurve *pFVar1;
  Point *this_00;
  undefined8 local_28;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Point *)&local_28;
  do {
    pFVar1 = (FastCurve *)(this_00 + 8);
    Sexy::FastCurve::SetOutRange((FastCurve *)this_00,0.0,0.0);
    this_00 = (Point *)pFVar1;
  } while (pFVar1 != (FastCurve *)&local_8);
  local_18 = *(float *)param_1;
  local_28 = *(undefined8 *)param_1;
  local_14 = *(float *)(param_1 + 4);
  local_10 = *(undefined8 *)param_2;
  local_20 = local_18 + (*(float *)param_2 - local_18) * 0.333333;
  local_1c = local_14 + (*(float *)(param_2 + 4) - local_14) * 0.333333;
  local_18 = local_18 + (*(float *)param_2 - local_18) * 0.666666;
  local_14 = local_14 + (*(float *)(param_2 + 4) - local_14) * 0.666666;
  Bezier2D::Set((Bezier2D *)(this + 8),(Point *)&local_28);
  this[0x2c] = (Bezier2DIterator)0x1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Bezier2DIterator::MakeSemicircle(EA::Text::Point const&, float, float, bool) */

void __thiscall
EA::Text::Bezier2DIterator::MakeSemicircle
          (Bezier2DIterator *this,Point *param_1,float param_2,float param_3,bool param_4)

{
  FastCurve *pFVar1;
  Point *this_00;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Point *)&local_28;
  do {
    pFVar1 = (FastCurve *)(this_00 + 8);
    Sexy::FastCurve::SetOutRange((FastCurve *)this_00,0.0,0.0);
    this_00 = (Point *)pFVar1;
  } while (pFVar1 != (FastCurve *)&local_8);
  local_18 = param_2;
  if (!param_4) {
    local_18 = -param_2;
  }
  local_24 = *(float *)(param_1 + 4);
  local_1c = local_24 + param_2 * 1.333333;
  local_28 = *(float *)param_1 - local_18;
  local_18 = local_18 + *(float *)param_1;
  local_20 = local_28;
  local_14 = local_1c;
  local_10 = local_18;
  local_c = local_24;
  if (param_3 != 0.0) {
    FUN_038a86dc(param_3,param_1,(Point *)&local_28,(Point *)&local_28);
    FUN_038a86dc(param_3,param_1,&local_20,&local_20);
    FUN_038a86dc(param_3,param_1,&local_18,&local_18);
    FUN_038a86dc(param_3,param_1,&local_10,&local_10);
  }
  Bezier2D::Set((Bezier2D *)(this + 8),(Point *)&local_28);
  this[0x2c] = (Bezier2DIterator)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

