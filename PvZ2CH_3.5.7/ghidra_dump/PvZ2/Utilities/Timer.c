// Class: PvZ2::Utilities::Timer


/* PvZ2::Utilities::Timer::Timer() */

void __thiscall PvZ2::Utilities::Timer::Timer(Timer *this)

{
  *(undefined4 *)this = 0xbf800000;
  *(undefined4 *)(this + 4) = 0xbf800000;
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 8),(DummyInit *)0x0);
  return;
}


/* PvZ2::Utilities::Timer::Clear() */

void __thiscall PvZ2::Utilities::Timer::Clear(Timer *this)

{
  *(undefined4 *)(this + 4) = 0xbf800000;
  return;
}


/* PvZ2::Utilities::Timer::SetCallback(Sexy::Delegate0 const&) */

void __thiscall PvZ2::Utilities::Timer::SetCallback(Timer *this,Delegate0 *param_1)

{
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 8),(Delegate2 *)param_1);
  return;
}


/* PvZ2::Utilities::Timer::triggerCallback() */

void __thiscall PvZ2::Utilities::Timer::triggerCallback(Timer *this)

{
  int iVar1;
  
  iVar1 = FUN_044ae684(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
  if (iVar1 != 0) {
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 8));
  }
  Clear(this);
  return;
}


/* PvZ2::Utilities::Timer::Update() */

void __thiscall PvZ2::Utilities::Timer::Update(Timer *this)

{
  char cVar1;
  
  if ((0.0 < *(float *)(this + 4)) && (cVar1 = PVZ_IS_IT(*(float *)(this + 4)), cVar1 != '\0')) {
    triggerCallback(this);
    return;
  }
  return;
}


/* PvZ2::Utilities::Timer::Reset() */

void __thiscall PvZ2::Utilities::Timer::Reset(Timer *this)

{
  float fVar1;
  
  if (*(float *)this <= 0.0) {
    *(undefined4 *)(this + 4) = 0xbf800000;
    return;
  }
  fVar1 = (float)PVZ_T();
  *(float *)(this + 4) = fVar1 + *(float *)this;
  return;
}


/* PvZ2::Utilities::Timer::Reset(float) */

void __thiscall PvZ2::Utilities::Timer::Reset(Timer *this,float param_1)

{
  *(float *)this = param_1;
  Reset(this);
  return;
}


/* PvZ2::Utilities::Timer::Timer(float, Sexy::Delegate0 const&) */

void __thiscall PvZ2::Utilities::Timer::Timer(Timer *this,float param_1,Delegate0 *param_2)

{
  *(undefined4 *)this = 0xbf800000;
  *(undefined4 *)(this + 4) = 0xbf800000;
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 8),(DummyInit *)0x0);
  SetCallback(this,param_2);
  Reset(this,param_1);
  return;
}

