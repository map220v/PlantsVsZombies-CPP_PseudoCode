// Class: Sexy::EaseFunction


/* Sexy::EaseFunction::setup(float, float, float, float) */

void __thiscall
Sexy::EaseFunction::setup
          (EaseFunction *this,float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *(float *)this = param_1;
  *(float *)(this + 4) = param_2;
  *(float *)(this + 8) = param_3;
  *(float *)(this + 0xc) = param_4;
  fVar1 = (((param_4 + -1.0) * param_2 + 2.0) - param_3 * param_1) / ((param_4 - param_3) + 1.0);
  *(float *)(this + 0x10) = fVar1;
  if (param_3 == 0.0) {
    fVar2 = 0.0;
    fVar3 = 0.0;
  }
  else {
    fVar3 = (fVar1 - param_1) / (param_3 + param_3);
    fVar2 = fVar3 * param_3;
  }
  *(float *)(this + 0x14) = fVar3;
  fVar3 = 0.0;
  if (param_4 != 1.0) {
    fVar3 = (param_2 - fVar1) / ((1.0 - param_4) + (1.0 - param_4));
  }
  *(float *)(this + 0x18) = fVar3;
  fVar2 = (fVar2 + param_1) * param_3;
  *(float *)(this + 0x1c) = fVar2;
  *(float *)(this + 0x20) = fVar2 + (param_4 - param_3) * fVar1;
  return;
}


/* Sexy::EaseFunction::EaseFunction() */

void __thiscall Sexy::EaseFunction::EaseFunction(EaseFunction *this)

{
  setup(this,1.0,1.0,0.5,0.5);
  return;
}


/* Sexy::EaseFunction::EaseFunction(float, float, float, float) */

void __thiscall
Sexy::EaseFunction::EaseFunction
          (EaseFunction *this,float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *(float *)this = param_1;
  *(float *)(this + 4) = param_2;
  *(float *)(this + 8) = param_3;
  *(float *)(this + 0xc) = param_4;
  fVar1 = (((param_4 + -1.0) * param_2 + 2.0) - param_3 * param_1) / ((param_4 - param_3) + 1.0);
  *(float *)(this + 0x10) = fVar1;
  if (param_3 == 0.0) {
    fVar2 = 0.0;
    fVar3 = 0.0;
  }
  else {
    fVar3 = (fVar1 - param_1) / (param_3 + param_3);
    fVar2 = fVar3 * param_3;
  }
  *(float *)(this + 0x14) = fVar3;
  fVar3 = 0.0;
  if (param_4 != 1.0) {
    fVar3 = (param_2 - fVar1) / ((1.0 - param_4) + (1.0 - param_4));
  }
  *(float *)(this + 0x18) = fVar3;
  fVar2 = (fVar2 + param_1) * param_3;
  *(float *)(this + 0x1c) = fVar2;
  *(float *)(this + 0x20) = fVar2 + (param_4 - param_3) * fVar1;
  return;
}


/* Sexy::EaseFunction::TEMPNAMEPLACEHOLDERVALUE(float) const */

float __thiscall Sexy::EaseFunction::operator()(EaseFunction *this,float param_1)

{
  float fVar1;
  
  if (param_1 < *(float *)(this + 8)) {
    return (*(float *)this + *(float *)(this + 0x14) * param_1) * param_1;
  }
  if (*(float *)(this + 0xc) <= param_1) {
    fVar1 = param_1 - *(float *)(this + 0xc);
    return *(float *)(this + 0x20) +
           fVar1 * (*(float *)(this + 0x10) + *(float *)(this + 0x18) * fVar1);
  }
  return *(float *)(this + 0x1c) + *(float *)(this + 0x10) * (param_1 - *(float *)(this + 8));
}


/* Sexy::EaseFunction::TEMPNAMEPLACEHOLDERVALUE(float, float) const */

void __thiscall Sexy::EaseFunction::operator()(EaseFunction *this,float param_1,float param_2)

{
  operator()(this,param_1 / param_2);
  return;
}


/* Sexy::EaseFunction::TEMPNAMEPLACEHOLDERVALUE(float, float, float) const */

void __thiscall
Sexy::EaseFunction::operator()(EaseFunction *this,float param_1,float param_2,float param_3)

{
  operator()(this,param_1 / (param_3 - param_2));
  return;
}

