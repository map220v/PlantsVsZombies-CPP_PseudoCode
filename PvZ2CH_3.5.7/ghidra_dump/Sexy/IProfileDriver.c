// Class: Sexy::IProfileDriver


/* Sexy::IProfileDriver::IProfileDriver() */

void __thiscall Sexy::IProfileDriver::IProfileDriver(IProfileDriver *this)

{
  *(undefined **)this = &DAT_06a355e0;
  return;
}


/* Sexy::IProfileDriver::CreateProfileDriver() */

NullProfileDriver * Sexy::IProfileDriver::CreateProfileDriver(void)

{
  NullProfileDriver *this;
  
  this = ::operator_new(0x38);
  NullProfileDriver::NullProfileDriver(this);
  return this;
}

