// Class: Sexy::IAntiHackDriver


/* Sexy::IAntiHackDriver::CreateAntiHackDriver() */

AndroidAntiHackDriver * Sexy::IAntiHackDriver::CreateAntiHackDriver(void)

{
  AndroidAntiHackDriver *this;
  
  this = ::operator_new(0x10);
  AndroidAntiHackDriver::AndroidAntiHackDriver(this);
  return this;
}


/* Sexy::IAntiHackDriver::IAntiHackDriver() */

void __thiscall Sexy::IAntiHackDriver::IAntiHackDriver(IAntiHackDriver *this)

{
  *(undefined **)this = &DAT_06a371a0;
  return;
}

