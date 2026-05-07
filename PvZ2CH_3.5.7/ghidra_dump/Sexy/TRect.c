// Class: Sexy::TRect<float>


/* Sexy::TRect<float>::Contains(float, float) const */

bool __thiscall Sexy::TRect<float>::Contains(TRect<float> *this,float param_1,float param_2)

{
  if (((*(float *)this <= param_1) && (param_1 < *(float *)this + *(float *)(this + 8))) &&
     (*(float *)(this + 4) <= param_2)) {
    return param_2 < *(float *)(this + 4) + *(float *)(this + 0xc);
  }
  return false;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::TRect<int>::Intersection(Sexy::TRect<int> const&) const */

void Sexy::TRect<int>::Intersection(TRect *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *in_x1;
  Insets *in_x8;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  piVar5 = eastl::max_alt<int>((int *)param_1,in_x1);
  iVar1 = *piVar5;
  local_10 = *(int *)param_1 + *(int *)(param_1 + 8);
  local_c = *in_x1 + in_x1[2];
  piVar5 = eastl::min_alt<int>(&local_10,&local_c);
  iVar2 = *piVar5;
  piVar5 = eastl::max_alt<int>((int *)(param_1 + 4),in_x1 + 1);
  iVar3 = *piVar5;
  local_10 = *(int *)(param_1 + 4) + *(int *)(param_1 + 0xc);
  local_c = in_x1[1] + in_x1[3];
  piVar5 = eastl::min_alt<int>(&local_10,&local_c);
  iVar2 = iVar2 - iVar1;
  if ((iVar2 < 0) || (iVar4 = *piVar5 - iVar3, iVar4 < 0)) {
    Insets::Insets(in_x8,0,0,0,0);
  }
  else {
    Insets::Insets(in_x8,iVar1,iVar3,iVar2,iVar4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::TRect<int>::Contains(int, int) const */

bool __thiscall Sexy::TRect<int>::Contains(TRect<int> *this,int param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (((*(int *)this <= param_1) && (param_1 < *(int *)this + *(int *)(this + 8))) &&
     (*(int *)(this + 4) <= param_2)) {
    bVar1 = param_2 < *(int *)(this + 4) + *(int *)(this + 0xc);
  }
  return bVar1;
}


/* Sexy::TRect<int>::GetCenter() const */

UnchartedModePlantNumData * Sexy::TRect<int>::GetCenter(void)

{
  int *in_x0;
  UnchartedModePlantNumData *in_x8;
  
  UnchartedModePlantNumData::UnchartedModePlantNumData
            (in_x8,*in_x0 + in_x0[2] / 2,in_x0[1] + in_x0[3] / 2);
  return in_x8;
}


/* Sexy::TRect<int>::Contains(Sexy::TPoint<int> const&) const */

bool __thiscall Sexy::TRect<int>::Contains(TRect<int> *this,TPoint *param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if ((*(int *)this <= *(int *)param_1) && (*(int *)param_1 < *(int *)this + *(int *)(this + 8))) {
    if (*(int *)(this + 4) <= *(int *)(param_1 + 4)) {
      bVar1 = *(int *)(param_1 + 4) < *(int *)(this + 4) + *(int *)(this + 0xc);
    }
  }
  return bVar1;
}


/* Sexy::TRect<int>::Offset(int, int) */

void __thiscall Sexy::TRect<int>::Offset(TRect<int> *this,int param_1,int param_2)

{
  *(int *)this = *(int *)this + param_1;
  *(int *)(this + 4) = *(int *)(this + 4) + param_2;
  return;
}


/* Sexy::TRect<int>::Intersects(Sexy::TRect<int> const&) const */

bool __thiscall Sexy::TRect<int>::Intersects(TRect<int> *this,TRect *param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(int *)this < *(int *)param_1 + *(int *)(param_1 + 8)) {
    if ((*(int *)(this + 4) < *(int *)(param_1 + 4) + *(int *)(param_1 + 0xc)) &&
       (*(int *)param_1 < *(int *)this + *(int *)(this + 8))) {
      bVar1 = *(int *)(param_1 + 4) < *(int *)(this + 4) + *(int *)(this + 0xc);
    }
  }
  return bVar1;
}


/* Sexy::TRect<float>::TRect(Sexy::TRect<float> const&) */

void __thiscall Sexy::TRect<float>::TRect(TRect<float> *this,TRect *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 8) = uVar2;
  *(undefined4 *)(this + 0xc) = uVar3;
  return;
}


/* Sexy::TRect<int>::Scale(double, double) */

void __thiscall Sexy::TRect<int>::Scale(TRect<int> *this,double param_1,double param_2)

{
  *(int *)this = (int)(param_1 * (double)*(int *)this);
  *(int *)(this + 8) = (int)(param_1 * (double)*(int *)(this + 8));
  *(int *)(this + 4) = (int)(param_2 * (double)*(int *)(this + 4));
  *(int *)(this + 0xc) = (int)(param_2 * (double)*(int *)(this + 0xc));
  return;
}


/* Sexy::TRect<float>::Scale(double, double) */

void __thiscall Sexy::TRect<float>::Scale(TRect<float> *this,double param_1,double param_2)

{
  *(float *)this = (float)(param_1 * (double)*(float *)this);
  *(float *)(this + 4) = (float)(param_2 * (double)*(float *)(this + 4));
  *(float *)(this + 8) = (float)(param_1 * (double)*(float *)(this + 8));
  *(float *)(this + 0xc) = (float)(param_2 * (double)*(float *)(this + 0xc));
  return;
}


/* Sexy::TRect<float>::TEMPNAMEPLACEHOLDERVALUE(Sexy::TRect<float> const&) const */

bool __thiscall Sexy::TRect<float>::operator!=(TRect<float> *this,TRect *param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if (((*(float *)this == *(float *)param_1) && (*(float *)(this + 4) == *(float *)(param_1 + 4)))
     && (*(float *)(this + 8) == *(float *)(param_1 + 8))) {
    bVar1 = *(float *)(this + 0xc) != *(float *)(param_1 + 0xc);
  }
  return bVar1;
}


/* Sexy::TRect<float>::Contains(Sexy::TPoint<float> const&) const */

bool __thiscall Sexy::TRect<float>::Contains(TRect<float> *this,TPoint *param_1)

{
  if ((*(float *)this <= *(float *)param_1) &&
     (*(float *)param_1 < *(float *)this + *(float *)(this + 8))) {
    if (*(float *)(this + 4) <= *(float *)(param_1 + 4)) {
      return *(float *)(param_1 + 4) < *(float *)(this + 4) + *(float *)(this + 0xc);
    }
  }
  return false;
}


/* Sexy::TRect<int>::Offset(Sexy::TPoint<int> const&) */

void __thiscall Sexy::TRect<int>::Offset(TRect<int> *this,TPoint *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(int *)this = *(int *)this + *(int *)param_1;
  *(int *)(this + 4) = *(int *)(this + 4) + iVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::TRect<float>::Clamp(float&, float&, float, float) */

void __thiscall
Sexy::TRect<float>::Clamp
          (TRect<float> *this,float *param_1,float *param_2,float param_3,float param_4)

{
  byte bVar1;
  byte bVar2;
  float local_c;
  long local_8;
  
  local_c = (*(float *)this + *(float *)(this + 8)) - param_3;
  local_8 = ___stack_chk_guard;
  bVar1 = FUN_03f18b4c(param_3 + *(float *)this,param_1,&local_c);
  local_c = (*(float *)(this + 4) + *(float *)(this + 0xc)) - param_4;
  bVar2 = FUN_03f18b4c(param_4 + *(float *)(this + 4),param_2,&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2 | bVar1);
}


/* Sexy::TRect<float>::Clamp(Sexy::SexyVector2&, float, float) */

void __thiscall
Sexy::TRect<float>::Clamp(TRect<float> *this,SexyVector2 *param_1,float param_2,float param_3)

{
  Clamp(this,(float *)param_1,(float *)(param_1 + 4),param_2,param_3);
  return;
}


/* Sexy::TRect<int>::Inflate(int, int) */

Insets * Sexy::TRect<int>::Inflate(int param_1,int param_2)

{
  Insets *pIVar1;
  int in_w2;
  Insets *in_x8;
  
  pIVar1 = (Insets *)(ulong)(uint)param_1;
  *(int *)pIVar1 = *(int *)pIVar1 - param_2;
  *(int *)(pIVar1 + 8) = *(int *)(pIVar1 + 8) + param_2 * 2;
  *(int *)(pIVar1 + 4) = *(int *)(pIVar1 + 4) - in_w2;
  *(int *)(pIVar1 + 0xc) = *(int *)(pIVar1 + 0xc) + in_w2 * 2;
  Insets::Insets(in_x8,pIVar1);
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::TRect<int>::ExpandToContain(int, int) */

void __thiscall Sexy::TRect<int>::ExpandToContain(TRect<int> *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  int local_18;
  int local_14 [2];
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_2;
  local_14[0] = param_1;
  piVar6 = eastl::min_alt<int>((int *)this,local_14);
  iVar1 = *piVar6;
  local_c = *(int *)this + *(int *)(this + 8);
  piVar6 = eastl::max_alt<int>(&local_c,local_14);
  iVar2 = *piVar6;
  piVar6 = eastl::min_alt<int>((int *)(this + 4),&local_18);
  iVar3 = *piVar6;
  local_c = *(int *)(this + 4) + *(int *)(this + 0xc);
  piVar6 = eastl::max_alt<int>(&local_c,&local_18);
  lVar5 = ___stack_chk_guard;
  iVar4 = *piVar6;
  *(int *)this = iVar1;
  *(int *)(this + 4) = iVar3;
  *(int *)(this + 8) = iVar2 - iVar1;
  *(int *)(this + 0xc) = iVar4 - iVar3;
  if (local_8 == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::TRect<int>::Union(Sexy::TRect<int> const&) */

void Sexy::TRect<int>::Union(TRect *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *in_x1;
  Insets *in_x8;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  piVar4 = eastl::min_alt<int>((int *)param_1,in_x1);
  iVar1 = *piVar4;
  local_10 = *(int *)param_1 + *(int *)(param_1 + 8);
  local_c = *in_x1 + in_x1[2];
  piVar4 = eastl::max_alt<int>(&local_10,&local_c);
  iVar2 = *piVar4;
  piVar4 = eastl::min_alt<int>((int *)(param_1 + 4),in_x1 + 1);
  iVar3 = *piVar4;
  local_10 = *(int *)(param_1 + 4) + *(int *)(param_1 + 0xc);
  local_c = in_x1[1] + in_x1[3];
  piVar4 = eastl::max_alt<int>(&local_10,&local_c);
  Insets::Insets(in_x8,iVar1,iVar3,iVar2 - iVar1,*piVar4 - iVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::TRect<float>::Offset(float, float) */

void __thiscall Sexy::TRect<float>::Offset(TRect<float> *this,float param_1,float param_2)

{
  *(float *)this = *(float *)this + param_1;
  *(float *)(this + 4) = *(float *)(this + 4) + param_2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::TRect<float>::Union(Sexy::TRect<float> const&) */

void Sexy::TRect<float>::Union(TRect *param_1)

{
  float *pfVar1;
  float *in_x1;
  Rectangle *in_x8;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar1 = eastl::min_alt<float>((float *)param_1,in_x1);
  local_c = in_x1[2] + *in_x1;
  local_10 = *(float *)(param_1 + 8) + *(float *)param_1;
  fVar2 = *pfVar1;
  pfVar1 = eastl::max_alt<float>(&local_10,&local_c);
  fVar4 = *pfVar1;
  pfVar1 = eastl::min_alt<float>((float *)(param_1 + 4),in_x1 + 1);
  local_10 = *(float *)(param_1 + 0xc) + *(float *)(param_1 + 4);
  local_c = in_x1[3] + in_x1[1];
  fVar3 = *pfVar1;
  pfVar1 = eastl::max_alt<float>(&local_10,&local_c);
  EA::Text::Rectangle::Rectangle(in_x8,fVar2,fVar3,fVar4 - fVar2,*pfVar1 - fVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::TRect<int>::Scale(double, double, int, int) */

void __thiscall
Sexy::TRect<int>::Scale(TRect<int> *this,double param_1,double param_2,int param_3,int param_4)

{
  Offset(this,-param_3,-param_4);
  Scale(this,param_1,param_2);
  Offset(this,param_3,param_4);
  return;
}


/* Sexy::TRect<double>::TRect(double, double, double, double) */

void __thiscall
Sexy::TRect<double>::TRect
          (TRect<double> *this,double param_1,double param_2,double param_3,double param_4)

{
  *(double *)this = param_1;
  *(double *)(this + 8) = param_2;
  *(double *)(this + 0x10) = param_3;
  *(double *)(this + 0x18) = param_4;
  return;
}


/* Sexy::TRect<int>::TEMPNAMEPLACEHOLDERVALUE(Sexy::TRect<int> const&) const */

bool __thiscall Sexy::TRect<int>::operator!=(TRect<int> *this,TRect *param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if (((*(int *)this == *(int *)param_1) && (*(int *)(this + 4) == *(int *)(param_1 + 4))) &&
     (*(int *)(this + 8) == *(int *)(param_1 + 8))) {
    bVar1 = *(int *)(this + 0xc) != *(int *)(param_1 + 0xc);
  }
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::TRect<float>::Intersection(Sexy::TRect<float> const&) const */

void Sexy::TRect<float>::Intersection(TRect *param_1)

{
  float *pfVar1;
  float *in_x1;
  Rectangle *in_x8;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar1 = eastl::max_alt<float>((float *)param_1,in_x1);
  local_c = in_x1[2] + *in_x1;
  local_10 = *(float *)(param_1 + 8) + *(float *)param_1;
  fVar4 = *pfVar1;
  pfVar1 = eastl::min_alt<float>(&local_10,&local_c);
  fVar3 = *pfVar1;
  pfVar1 = eastl::max_alt<float>((float *)(param_1 + 4),in_x1 + 1);
  local_10 = *(float *)(param_1 + 0xc) + *(float *)(param_1 + 4);
  local_c = in_x1[3] + in_x1[1];
  fVar5 = *pfVar1;
  pfVar1 = eastl::min_alt<float>(&local_10,&local_c);
  fVar3 = fVar3 - fVar4;
  if ((fVar3 < 0.0) || (fVar2 = *pfVar1 - fVar5, fVar2 < 0.0)) {
    EA::Text::Rectangle::Rectangle(in_x8,0.0,0.0,0.0,0.0);
  }
  else {
    EA::Text::Rectangle::Rectangle(in_x8,fVar4,fVar5,fVar3,fVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

