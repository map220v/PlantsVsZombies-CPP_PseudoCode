// Class: UI::UDim


/* UI::UDim::UDim(UI::UDim const&) */

void __thiscall UI::UDim::UDim(UDim *this,UDim *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = uVar1;
  return;
}


/* UI::UDim::TEMPNAMEPLACEHOLDERVALUE(UI::UDim const&) const */

FastCurve * __thiscall UI::UDim::operator+(UDim *this,UDim *param_1)

{
  FastCurve *in_x8;
  
  Sexy::FastCurve::SetOutRange
            (in_x8,*(float *)param_1 + *(float *)this,*(float *)(param_1 + 4) + *(float *)(this + 4)
            );
  return in_x8;
}

