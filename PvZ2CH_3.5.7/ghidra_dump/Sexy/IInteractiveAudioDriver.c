// Class: Sexy::IInteractiveAudioDriver


/* Sexy::IInteractiveAudioDriver::Update() */

void Sexy::IInteractiveAudioDriver::Update(void)

{
  return;
}


/* Sexy::IInteractiveAudioDriver::IInteractiveAudioDriver() */

void __thiscall
Sexy::IInteractiveAudioDriver::IInteractiveAudioDriver(IInteractiveAudioDriver *this)

{
  *(undefined **)this = &DAT_06a341c0;
  return;
}


/* Sexy::IInteractiveAudioDriver::CreateInteractiveAudioDriver(Sexy::SexyAppBase*) */

WwiseInteractiveAudioDriver *
Sexy::IInteractiveAudioDriver::CreateInteractiveAudioDriver(SexyAppBase *param_1)

{
  WwiseInteractiveAudioDriver *this;
  
  this = ::operator_new(0x20);
  WwiseInteractiveAudioDriver::WwiseInteractiveAudioDriver(this);
  return this;
}

