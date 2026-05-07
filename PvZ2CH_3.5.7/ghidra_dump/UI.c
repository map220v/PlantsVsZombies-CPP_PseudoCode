// Class: UI


/* float UI::TypeSensitiveZero<float>() */

float UI::TypeSensitiveZero<float>(void)

{
  return 0.0;
}


/* UI::UDim UI::TypeSensitiveZero<UI::UDim>() */

FastCurve * __thiscall UI::TypeSensitiveZero<UI::UDim>(UI *this)

{
  FastCurve *in_x8;
  
  Sexy::FastCurve::SetOutRange(in_x8,0.0,0.0);
  return in_x8;
}

