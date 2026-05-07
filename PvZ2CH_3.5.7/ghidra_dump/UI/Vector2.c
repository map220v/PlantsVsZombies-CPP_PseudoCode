// Class: UI::Vector2<UI::UDim>


/* UI::Vector2<UI::UDim>::Vector2(UI::Vector2<UI::UDim> const&) */

void __thiscall UI::Vector2<UI::UDim>::Vector2(Vector2<UI::UDim> *this,Vector2 *param_1)

{
  UDim::UDim((UDim *)this,(UDim *)param_1);
  UDim::UDim((UDim *)(this + 8),(UDim *)(param_1 + 8));
  return;
}


/* UI::Vector2<float>::zero() */

void __thiscall UI::Vector2<float>::zero(Vector2<float> *this)

{
  FastCurve *in_x8;
  float fVar1;
  
  fVar1 = TypeSensitiveZero<float>();
  Sexy::FastCurve::SetOutRange(in_x8,fVar1,fVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UI::Vector2<UI::UDim>::zero() */

void __thiscall UI::Vector2<UI::UDim>::zero(Vector2<UI::UDim> *this)

{
  UI *pUVar1;
  UI *this_00;
  
  pUVar1 = ___stack_chk_guard;
  this_00 = (UI *)TypeSensitiveZero<UI::UDim>(___stack_chk_guard);
  TypeSensitiveZero<UI::UDim>(this_00);
  Size<UI::UDim>::Size();
  if (pUVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UI::Vector2<UI::UDim>::TEMPNAMEPLACEHOLDERVALUE(UI::Vector2<UI::UDim> const&) const */

void __thiscall UI::Vector2<UI::UDim>::operator+(Vector2<UI::UDim> *this,Vector2 *param_1)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  UDim::operator+((UDim *)this,(UDim *)param_1);
  UDim::operator+((UDim *)(this + 8),(UDim *)(param_1 + 8));
  Size<UI::UDim>::Size();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

