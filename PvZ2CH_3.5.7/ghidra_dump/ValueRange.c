// Class: ValueRange


/* ValueRange::GetRandomValue() const */

float __thiscall ValueRange::GetRandomValue(ValueRange *this)

{
  float fVar1;
  
  fVar1 = (float)Sexy::Rand(1.0);
  return *(float *)this + (*(float *)(this + 4) - *(float *)this) * fVar1;
}


/* ValueRange::GetTimeForValue(float) const */

float __thiscall ValueRange::GetTimeForValue(ValueRange *this,float param_1)

{
  return (param_1 - *(float *)this) / (*(float *)(this + 4) - *(float *)this);
}


/* ValueRange::GetInterpValue(float, CurveType) const */

void ValueRange::GetInterpValue(long param_1,undefined4 param_2)

{
  CurveEvaluate<float>(param_1,param_1 + 4,param_2);
  return;
}


/* ValueRange::SetConstant(float) */

void __thiscall ValueRange::SetConstant(ValueRange *this,float param_1)

{
  Sexy::FastCurve::SetOutRange((FastCurve *)this,param_1,param_1);
  return;
}


/* ValueRange::GetRandomValue(Sexy::MTRand*) const */

float ValueRange::GetRandomValue(MTRand *param_1)

{
  float fVar1;
  
  fVar1 = (float)Sexy::MTRand::Next(1.0);
  return *(float *)param_1 + (*(float *)(param_1 + 4) - *(float *)param_1) * fVar1;
}

