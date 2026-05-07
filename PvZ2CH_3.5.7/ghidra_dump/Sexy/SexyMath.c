// Class: Sexy::SexyMath


/* Sexy::SexyMath::Fabs(float) */

float Sexy::SexyMath::Fabs(float param_1)

{
  return ABS(param_1);
}


/* Sexy::SexyMath::DegToRad(float) */

float Sexy::SexyMath::DegToRad(float param_1)

{
  return param_1 * 0.017453294;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyVector2 Sexy::SexyMath::Lerp<Sexy::SexyVector2>(Sexy::SexyVector2 const&,
   Sexy::SexyVector2 const&, float) */

void __thiscall
Sexy::SexyMath::Lerp<Sexy::SexyVector2>
          (SexyMath *this,SexyVector2 *param_1,SexyVector2 *param_2,float param_3)

{
  undefined4 uVar1;
  undefined4 in_s1;
  undefined4 local_18 [2];
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18[0] = SexyVector2::operator-(param_1,(SexyVector2 *)this);
  local_10[0] = SexyVector2::operator*((SexyVector2 *)local_18,param_3);
  uVar1 = SexyVector2::operator+((SexyVector2 *)this,(SexyVector2 *)local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1,in_s1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyVector3 Sexy::SexyMath::Lerp<Sexy::SexyVector3>(Sexy::SexyVector3 const&,
   Sexy::SexyVector3 const&, float) */

void Sexy::SexyMath::Lerp<Sexy::SexyVector3>
               (SexyVector3 *param_1,SexyVector3 *param_2,float param_3)

{
  undefined4 local_38 [4];
  undefined4 local_28 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_38[0] = SexyVector3::operator-(param_2,param_1);
  local_28[0] = SexyVector3::operator*((SexyVector3 *)local_38,param_3);
  SexyVector3::operator+(param_1,(SexyVector3 *)local_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Point Sexy::SexyMath::Lerp<Sexy::Point>(Sexy::Point const&, Sexy::Point const&, float) */

void __thiscall
Sexy::SexyMath::Lerp<Sexy::Point>(SexyMath *this,Point *param_1,Point *param_2,float param_3)

{
  Point *in_x8;
  TPoint<int> aTStack_20 [8];
  TPoint aTStack_18 [8];
  TPoint aTStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TPoint<int>::operator-((TPoint<int> *)param_1,(TPoint *)this);
  TPoint<int>::operator*(aTStack_20,param_3);
  TPoint<int>::operator+((TPoint<int> *)this,aTStack_18);
  Point::Point(in_x8,aTStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::SexyMath::RadToDeg(float) */

float Sexy::SexyMath::RadToDeg(float param_1)

{
  return param_1 * 57.295776;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::FPoint Sexy::SexyMath::Lerp<Sexy::FPoint>(Sexy::FPoint const&, Sexy::FPoint const&, float)
    */

void __thiscall
Sexy::SexyMath::Lerp<Sexy::FPoint>(SexyMath *this,FPoint *param_1,FPoint *param_2,float param_3)

{
  FPoint *in_x8;
  TPoint<float> aTStack_20 [8];
  UDim aUStack_18 [8];
  TPoint aTStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TPoint<float>::operator-((TPoint<float> *)param_1,(TPoint *)this);
  TPoint<float>::operator*(aTStack_20,param_3);
  UI::UDim::operator+((UDim *)this,aUStack_18);
  FPoint::FPoint(in_x8,aTStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Color Sexy::SexyMath::Lerp<Sexy::Color>(Sexy::Color const&, Sexy::Color const&, float) */

void __thiscall
Sexy::SexyMath::Lerp<Sexy::Color>(SexyMath *this,Color *param_1,Color *param_2,float param_3)

{
  Color *pCVar1;
  Color aCStack_28 [16];
  Color aCStack_18 [16];
  Color *local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = ___stack_chk_guard;
  Sexy::operator-((Sexy *)param_1,(Color *)this,___stack_chk_guard);
  Color::operator*(aCStack_28,param_3);
  Sexy::operator+((Sexy *)this,aCStack_18,pCVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::SexyMath::QuadraticFormula(float, float, float, float&, float&) */

undefined8
Sexy::SexyMath::QuadraticFormula
          (float param_1,float param_2,float param_3,float *param_4,float *param_5)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = 0;
  if ((param_1 != 0.0) && (fVar2 = param_2 * param_2 - param_3 * 4.0 * param_1, 0.0 <= fVar2)) {
    fVar2 = SQRT(fVar2);
    uVar1 = 1;
    *param_4 = (fVar2 - param_2) / (param_1 + param_1);
    *param_5 = -(fVar2 + param_2) / (param_1 + param_1);
  }
  return uVar1;
}

