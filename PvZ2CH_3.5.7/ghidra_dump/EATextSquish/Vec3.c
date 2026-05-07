// Class: EATextSquish::Vec3


/* EATextSquish::Vec3::Vec3(float, float, float) */

void __thiscall EATextSquish::Vec3::Vec3(Vec3 *this,float param_1,float param_2,float param_3)

{
  *(float *)this = param_1;
  *(float *)(this + 4) = param_2;
  *(float *)(this + 8) = param_3;
  return;
}


/* EATextSquish::Vec3::TEMPNAMEPLACEHOLDERVALUE(EATextSquish::Vec3 const&) */

void __thiscall EATextSquish::Vec3::operator+=(Vec3 *this,Vec3 *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 4);
  fVar1 = *(float *)(param_1 + 8);
  *(float *)this = *(float *)this + *(float *)param_1;
  *(float *)(this + 4) = *(float *)(this + 4) + fVar2;
  *(float *)(this + 8) = *(float *)(this + 8) + fVar1;
  return;
}


/* EATextSquish::Vec3::TEMPNAMEPLACEHOLDERVALUE(float) */

void __thiscall EATextSquish::Vec3::operator*=(Vec3 *this,float param_1)

{
  *(float *)this = *(float *)this * param_1;
  *(float *)(this + 4) = *(float *)(this + 4) * param_1;
  *(float *)(this + 8) = *(float *)(this + 8) * param_1;
  return;
}


/* EATextSquish::Vec3::TEMPNAMEPLACEHOLDERVALUE(float) */

void __thiscall EATextSquish::Vec3::operator/=(Vec3 *this,float param_1)

{
  float fVar1;
  
  fVar1 = 1.0 / param_1;
  *(float *)this = *(float *)this * fVar1;
  *(float *)(this + 4) = *(float *)(this + 4) * fVar1;
  *(float *)(this + 8) = *(float *)(this + 8) * fVar1;
  return;
}


/* EATextSquish::Vec3::TEMPNAMEPLACEHOLDERVALUE(EATextSquish::Vec3 const&) */

void __thiscall EATextSquish::Vec3::operator-=(Vec3 *this,Vec3 *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 4);
  fVar1 = *(float *)(param_1 + 8);
  *(float *)this = *(float *)this - *(float *)param_1;
  *(float *)(this + 4) = *(float *)(this + 4) - fVar2;
  *(float *)(this + 8) = *(float *)(this + 8) - fVar1;
  return;
}


/* EATextSquish::Vec3::Vec3(float) */

void __thiscall EATextSquish::Vec3::Vec3(Vec3 *this,float param_1)

{
  *(float *)this = param_1;
  *(float *)(this + 4) = param_1;
  *(float *)(this + 8) = param_1;
  return;
}


/* EATextSquish::Vec3::TEMPNAMEPLACEHOLDERVALUE(EATextSquish::Vec3 const&) */

void __thiscall EATextSquish::Vec3::operator*=(Vec3 *this,Vec3 *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 4);
  fVar1 = *(float *)(param_1 + 8);
  *(float *)this = *(float *)this * *(float *)param_1;
  *(float *)(this + 4) = *(float *)(this + 4) * fVar2;
  *(float *)(this + 8) = *(float *)(this + 8) * fVar1;
  return;
}

