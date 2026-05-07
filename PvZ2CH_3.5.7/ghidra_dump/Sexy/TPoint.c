// Class: Sexy::TPoint<int>


/* Sexy::TPoint<int>::TPoint(Sexy::TPoint<int> const&) */

void __thiscall Sexy::TPoint<int>::TPoint(TPoint<int> *this,TPoint *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  return;
}


/* Sexy::TPoint<int>::TEMPNAMEPLACEHOLDERVALUE(Sexy::TPoint<int> const&) const */

bool __thiscall Sexy::TPoint<int>::operator==(TPoint<int> *this,TPoint *param_1)

{
  if (*(int *)param_1 != *(int *)this) {
    return false;
  }
  return *(int *)(param_1 + 4) == *(int *)(this + 4);
}


bool __thiscall Sexy::TPoint<int>::operator==(TPoint<int> *this,TPoint *param_1)

{
  if (*(int *)param_1 != *(int *)this) {
    return false;
  }
  return *(int *)(param_1 + 4) == *(int *)(this + 4);
}


/* Sexy::TPoint<int>::TEMPNAMEPLACEHOLDERVALUE(Sexy::TPoint<int> const&) const */

UnchartedModePlantNumData * __thiscall
Sexy::TPoint<int>::operator+(TPoint<int> *this,TPoint *param_1)

{
  UnchartedModePlantNumData *in_x8;
  
  UnchartedModePlantNumData::UnchartedModePlantNumData
            (in_x8,*(int *)this + *(int *)param_1,*(int *)(this + 4) + *(int *)(param_1 + 4));
  return in_x8;
}


/* Sexy::TPoint<int>::TEMPNAMEPLACEHOLDERVALUE(Sexy::TPoint<int> const&) */

void __thiscall Sexy::TPoint<int>::operator-=(TPoint<int> *this,TPoint *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(int *)this = *(int *)this - *(int *)param_1;
  *(int *)(this + 4) = *(int *)(this + 4) - iVar1;
  return;
}


/* Sexy::TPoint<int>::TEMPNAMEPLACEHOLDERVALUE(Sexy::TPoint<int> const&) const */

bool __thiscall Sexy::TPoint<int>::operator!=(TPoint<int> *this,TPoint *param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if (*(int *)param_1 == *(int *)this) {
    bVar1 = *(int *)(param_1 + 4) != *(int *)(this + 4);
  }
  return bVar1;
}


/* Sexy::TPoint<int>::TEMPNAMEPLACEHOLDERVALUE(Sexy::TPoint<int> const&) const */

UnchartedModePlantNumData * __thiscall
Sexy::TPoint<int>::operator-(TPoint<int> *this,TPoint *param_1)

{
  UnchartedModePlantNumData *in_x8;
  
  UnchartedModePlantNumData::UnchartedModePlantNumData
            (in_x8,*(int *)this - *(int *)param_1,*(int *)(this + 4) - *(int *)(param_1 + 4));
  return in_x8;
}


/* Sexy::TPoint<int>::TEMPNAMEPLACEHOLDERVALUE(Sexy::TPoint<int> const&) */

void __thiscall Sexy::TPoint<int>::operator+=(TPoint<int> *this,TPoint *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(int *)this = *(int *)this + *(int *)param_1;
  *(int *)(this + 4) = *(int *)(this + 4) + iVar1;
  return;
}


/* Sexy::TPoint<float>::TEMPNAMEPLACEHOLDERVALUE(Sexy::TPoint<float> const&) */

void __thiscall Sexy::TPoint<float>::operator+=(TPoint<float> *this,TPoint *param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 4);
  *(float *)this = *(float *)this + *(float *)param_1;
  *(float *)(this + 4) = *(float *)(this + 4) + fVar1;
  return;
}


/* Sexy::TPoint<int>::TEMPNAMEPLACEHOLDERVALUE(float) const */

UnchartedModePlantNumData * __thiscall Sexy::TPoint<int>::operator*(TPoint<int> *this,float param_1)

{
  UnchartedModePlantNumData *in_x8;
  
  UnchartedModePlantNumData::UnchartedModePlantNumData
            (in_x8,(int)(param_1 * (float)*(int *)this),(int)(param_1 * (float)*(int *)(this + 4)));
  return in_x8;
}


/* Sexy::TPoint<int>::Magnitude() const */

int __thiscall Sexy::TPoint<int>::Magnitude(TPoint<int> *this)

{
  return (int)SQRT((double)(*(int *)(this + 4) * *(int *)(this + 4)) +
                   (double)*(int *)this * (double)*(int *)this);
}


/* Sexy::TPoint<float>::TEMPNAMEPLACEHOLDERVALUE(Sexy::TPoint<float> const&) const */

FastCurve * __thiscall Sexy::TPoint<float>::operator-(TPoint<float> *this,TPoint *param_1)

{
  FastCurve *in_x8;
  
  FastCurve::SetOutRange
            (in_x8,*(float *)this - *(float *)param_1,*(float *)(this + 4) - *(float *)(param_1 + 4)
            );
  return in_x8;
}


/* Sexy::TPoint<float>::TEMPNAMEPLACEHOLDERVALUE(float) const */

FastCurve * __thiscall Sexy::TPoint<float>::operator*(TPoint<float> *this,float param_1)

{
  FastCurve *in_x8;
  
  FastCurve::SetOutRange(in_x8,param_1 * *(float *)this,param_1 * *(float *)(this + 4));
  return in_x8;
}


bool __thiscall Sexy::TPoint<int>::operator==(TPoint<int> *this,TPoint *param_1)

{
  if (*(int *)param_1 != *(int *)this) {
    return false;
  }
  return *(int *)(param_1 + 4) == *(int *)(this + 4);
}


/* Sexy::TPoint<float>::TEMPNAMEPLACEHOLDERVALUE(Sexy::TPoint<float> const&) const */

FastCurve * __thiscall Sexy::TPoint<float>::operator*(TPoint<float> *this,TPoint *param_1)

{
  FastCurve *in_x8;
  
  FastCurve::SetOutRange
            (in_x8,*(float *)param_1 * *(float *)this,*(float *)(param_1 + 4) * *(float *)(this + 4)
            );
  return in_x8;
}


/* Sexy::TPoint<float>::TEMPNAMEPLACEHOLDERVALUE(double) const */

FastCurve * __thiscall Sexy::TPoint<float>::operator*(TPoint<float> *this,double param_1)

{
  FastCurve *in_x8;
  
  FastCurve::SetOutRange
            (in_x8,(float)(param_1 * (double)*(float *)this),
             (float)(param_1 * (double)*(float *)(this + 4)));
  return in_x8;
}


/* Sexy::TPoint<float>::Magnitude() const */

float __thiscall Sexy::TPoint<float>::Magnitude(TPoint<float> *this)

{
  return SQRT(*(float *)(this + 4) * *(float *)(this + 4) + *(float *)this * *(float *)this);
}


/* Sexy::TPoint<float>::TEMPNAMEPLACEHOLDERVALUE(float) const */

FastCurve * __thiscall Sexy::TPoint<float>::operator/(TPoint<float> *this,float param_1)

{
  FastCurve *in_x8;
  
  FastCurve::SetOutRange(in_x8,*(float *)this / param_1,*(float *)(this + 4) / param_1);
  return in_x8;
}

