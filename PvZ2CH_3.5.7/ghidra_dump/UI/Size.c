// Class: UI::Size<float>


/* UI::Size<float>::square(float) */

FastCurve * __thiscall UI::Size<float>::square(Size<float> *this,float param_1)

{
  FastCurve *in_x8;
  
  Sexy::FastCurve::SetOutRange(in_x8,param_1,param_1);
  return in_x8;
}


/* UI::Size<float>::zero() */

void __thiscall UI::Size<float>::zero(Size<float> *this)

{
  Size<float> *this_00;
  float fVar1;
  
  fVar1 = TypeSensitiveZero<float>();
  square(this_00,fVar1);
  return;
}


/* UI::Size<UI::UDim>::Size(UI::UDim, UI::UDim) */

void __thiscall UI::Size<UI::UDim>::Size(Size<UI::UDim> *this,UDim *param_2,UDim *param_3)

{
  UDim::UDim((UDim *)this,param_2);
  UDim::UDim((UDim *)(this + 8),param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UI::Size<UI::UDim>::square(UI::UDim) */

void __thiscall UI::Size<UI::UDim>::square(Size<UI::UDim> *param_1,Size<UI::UDim> *this)

{
  UDim aUStack_18 [8];
  UDim aUStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UDim::UDim(aUStack_18,(UDim *)this);
  UDim::UDim(aUStack_10,(UDim *)this);
  Size(param_1,aUStack_18,aUStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UI::Size<UI::UDim>::zero() */

void __thiscall UI::Size<UI::UDim>::zero(Size<UI::UDim> *this)

{
  Size<UI::UDim> aSStack_10 [8];
  UI *local_8;
  
  local_8 = ___stack_chk_guard;
  TypeSensitiveZero<UI::UDim>(___stack_chk_guard);
  square(aSStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

