// Class: Sexy::IResStreamsDriver


/* Sexy::IResStreamsDriver::ValidateGroupTextures(Sexy::ResStreamsGroup*) const */

undefined8 Sexy::IResStreamsDriver::ValidateGroupTextures(ResStreamsGroup *param_1)

{
  return 1;
}


/* Sexy::IResStreamsDriver::CreateResStreamsDriver() */

AndroidResStreamsDriver * Sexy::IResStreamsDriver::CreateResStreamsDriver(void)

{
  AndroidResStreamsDriver *this;
  
  this = ::operator_new(0x1f8);
  AndroidResStreamsDriver::AndroidResStreamsDriver(this);
  return this;
}


/* Sexy::IResStreamsDriver::IResStreamsDriver() */

void __thiscall Sexy::IResStreamsDriver::IResStreamsDriver(IResStreamsDriver *this)

{
  *(undefined **)this = &DAT_06a37280;
  return;
}

