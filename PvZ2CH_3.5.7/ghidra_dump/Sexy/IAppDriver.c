// Class: Sexy::IAppDriver


/* Sexy::IAppDriver::IsUIOrientationAllowed(Sexy::UI_ORIENTATION) */

undefined8 Sexy::IAppDriver::IsUIOrientationAllowed(void)

{
  return 1;
}


/* Sexy::IAppDriver::GetUIOrientation() */

undefined8 Sexy::IAppDriver::GetUIOrientation(void)

{
  return 4;
}


/* Sexy::IAppDriver::Vibrate(long long) */

void Sexy::IAppDriver::Vibrate(longlong param_1)

{
  return;
}


/* Sexy::IAppDriver::VibrateWithPattern(long long*, int) */

void Sexy::IAppDriver::VibrateWithPattern(longlong *param_1,int param_2)

{
  return;
}


/* Sexy::IAppDriver::CancelVibrate() */

void Sexy::IAppDriver::CancelVibrate(void)

{
  return;
}


/* Sexy::IAppDriver::ReadFromConfig() */

void Sexy::IAppDriver::ReadFromConfig(void)

{
  return;
}


/* Sexy::IAppDriver::WriteToConfig() */

void Sexy::IAppDriver::WriteToConfig(void)

{
  return;
}


/* Sexy::IAppDriver::IAppDriver() */

void __thiscall Sexy::IAppDriver::IAppDriver(IAppDriver *this)

{
  *(undefined **)this = &DAT_06a328e0;
  Event0::Event0((Event0 *)(this + 8));
  Event0::Event0((Event0 *)(this + 0x28));
  Event0::Event0((Event0 *)(this + 0x48));
  Event0::Event0((Event0 *)(this + 0x68));
  return;
}


/* Sexy::IAppDriver::~IAppDriver() */

void __thiscall Sexy::IAppDriver::~IAppDriver(IAppDriver *this)

{
  *(undefined **)this = &DAT_06a328e0;
  Event0::~Event0((Event0 *)(this + 0x68));
  Event0::~Event0((Event0 *)(this + 0x48));
  Event0::~Event0((Event0 *)(this + 0x28));
  Event0::~Event0((Event0 *)(this + 8));
  return;
}


/* Sexy::IAppDriver::~IAppDriver() */

void __thiscall Sexy::IAppDriver::~IAppDriver(IAppDriver *this)

{
  ~IAppDriver(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::IAppDriver::CreateAppDriver(Sexy::SexyAppBase*) */

AndroidAppDriver * Sexy::IAppDriver::CreateAppDriver(SexyAppBase *param_1)

{
  AndroidAppDriver *this;
  
  this = ::operator_new(0x220);
  AndroidAppDriver::AndroidAppDriver(this,param_1);
  return this;
}

