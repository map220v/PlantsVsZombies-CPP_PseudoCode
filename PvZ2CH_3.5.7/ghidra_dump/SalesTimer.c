// Class: SalesTimer


/* SalesTimer::SalesTimer() */

void __thiscall SalesTimer::SalesTimer(SalesTimer *this)

{
  *this = (SalesTimer)0x0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}


/* SalesTimer::EndTimer() */

void __thiscall SalesTimer::EndTimer(SalesTimer *this)

{
  *this = (SalesTimer)0x0;
  return;
}


/* SalesTimer::StartTimer(float) */

void __thiscall SalesTimer::StartTimer(SalesTimer *this,float param_1)

{
  float fVar1;
  
  EndTimer(this);
  fVar1 = (float)PVZ_RealT();
  *this = (SalesTimer)0x1;
  *(float *)(this + 8) = param_1;
  *(float *)(this + 4) = fVar1;
  *(float *)(this + 0xc) = fVar1 + param_1;
  return;
}


/* SalesTimer::IsTimeUp() */

byte __thiscall SalesTimer::IsTimeUp(SalesTimer *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_RealT();
  if (*(float *)(this + 0xc) <= fVar1) {
    *this = (SalesTimer)0x0;
    return 1;
  }
  return (byte)*this ^ 1;
}


/* SalesTimer::GetTimerScale() */

float __thiscall SalesTimer::GetTimerScale(SalesTimer *this)

{
  char cVar1;
  float fVar2;
  
  cVar1 = IsTimeUp(this);
  fVar2 = 1.0;
  if (cVar1 == '\0') {
    fVar2 = (float)PVZ_RealT();
    fVar2 = (fVar2 - *(float *)(this + 4)) / *(float *)(this + 8);
  }
  return fVar2;
}

