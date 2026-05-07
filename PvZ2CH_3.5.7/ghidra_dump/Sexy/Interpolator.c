// Class: Sexy::Interpolator


/* Sexy::Interpolator::Interpolator() */

void __thiscall Sexy::Interpolator::Interpolator(Interpolator *this)

{
  EaseFunction::EaseFunction((EaseFunction *)this);
  this[0x24] = (Interpolator)0x0;
  return;
}


/* Sexy::Interpolator::SetupEaseFunc(Sexy::Key&, Sexy::Key&) */

void __thiscall Sexy::Interpolator::SetupEaseFunc(Interpolator *this,Key *param_1,Key *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = 0.0;
  if (param_1[4] == (Key)0x0) {
    fVar1 = 1.0;
  }
  fVar2 = 0.0;
  if (param_2[4] == (Key)0x0) {
    fVar2 = 1.0;
  }
  EaseFunction::setup((EaseFunction *)this,fVar1,fVar2,0.5,0.5);
  this[0x24] = (Interpolator)0x1;
  return;
}

