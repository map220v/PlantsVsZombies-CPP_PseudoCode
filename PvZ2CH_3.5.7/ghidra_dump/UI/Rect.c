// Class: UI::Rect<float>


/* UI::Rect<float>::TEMPNAMEPLACEHOLDERVALUE(UI::Rect<float> const&) */

void __thiscall UI::Rect<float>::operator=(Rect<float> *this,Rect *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = uVar1;
  return;
}


/* UI::Rect<float>::isPointInRect(UI::Vector2<float> const&) const */

bool __thiscall UI::Rect<float>::isPointInRect(Rect<float> *this,Vector2 *param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (((*(float *)this <= *(float *)param_1) && (*(float *)param_1 < *(float *)(this + 8))) &&
     (*(float *)(this + 4) <= *(float *)(param_1 + 4))) {
    bVar1 = *(float *)(param_1 + 4) < *(float *)(this + 0xc);
  }
  return bVar1;
}


/* UI::Rect<float>::Rect(float const&, float const&, float const&, float const&) */

void __thiscall
UI::Rect<float>::Rect(Rect<float> *this,float *param_1,float *param_2,float *param_3,float *param_4)

{
  Sexy::FastCurve::SetOutRange((FastCurve *)this,*param_1,*param_2);
  Sexy::FastCurve::SetOutRange((FastCurve *)(this + 8),*param_3,*param_4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UI::Rect<float>::Rect(UI::Vector2<float> const&, UI::Size<float> const&) */

void __thiscall UI::Rect<float>::Rect(Rect<float> *this,Vector2 *param_1,Size *param_2)

{
  FastCurve aFStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UDim::UDim((UDim *)this,(UDim *)param_1);
  Sexy::FastCurve::SetOutRange(aFStack_10,*(float *)param_2,*(float *)(param_2 + 4));
  UDim::operator+((UDim *)param_1,(UDim *)aFStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UI::Rect<float>::zero() */

void __thiscall UI::Rect<float>::zero(Rect<float> *this)

{
  Size<float> *this_00;
  Rect<float> *in_x8;
  Vector2 aVStack_18 [8];
  Size aSStack_10 [8];
  Vector2<float> *local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Size<float> *)Vector2<float>::zero(___stack_chk_guard);
  Size<float>::zero(this_00);
  Rect(in_x8,aVStack_18,aSStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UI::Rect<UI::UDim>::Rect(UI::Rect<UI::UDim> const&) */

void __thiscall UI::Rect<UI::UDim>::Rect(Rect<UI::UDim> *this,Rect *param_1)

{
  Vector2<UI::UDim>::Vector2((Vector2<UI::UDim> *)this,(Vector2 *)param_1);
  Vector2<UI::UDim>::Vector2((Vector2<UI::UDim> *)(this + 0x10),(Vector2 *)(param_1 + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UI::Rect<UI::UDim>::Rect(UI::Vector2<UI::UDim> const&, UI::Size<UI::UDim> const&) */

void __thiscall UI::Rect<UI::UDim>::Rect(Rect<UI::UDim> *this,Vector2 *param_1,Size *param_2)

{
  UDim aUStack_28 [8];
  UDim aUStack_20 [8];
  Vector2 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Vector2<UI::UDim>::Vector2((Vector2<UI::UDim> *)this,param_1);
  UDim::UDim(aUStack_28,(UDim *)param_2);
  UDim::UDim(aUStack_20,(UDim *)(param_2 + 8));
  Size<UI::UDim>::Size((Size<UI::UDim> *)aVStack_18,aUStack_28,aUStack_20);
  Vector2<UI::UDim>::operator+((Vector2<UI::UDim> *)param_1,aVStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UI::Rect<UI::UDim>::zero() */

void __thiscall UI::Rect<UI::UDim>::zero(Rect<UI::UDim> *this)

{
  Size<UI::UDim> *this_00;
  Rect<UI::UDim> *in_x8;
  Vector2 aVStack_28 [16];
  Size aSStack_18 [16];
  Vector2<UI::UDim> *local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Size<UI::UDim> *)Vector2<UI::UDim>::zero(___stack_chk_guard);
  Size<UI::UDim>::zero(this_00);
  Rect(in_x8,aVStack_28,aSStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

