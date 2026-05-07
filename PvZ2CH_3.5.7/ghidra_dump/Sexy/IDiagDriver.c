// Class: Sexy::IDiagDriver


/* Sexy::IDiagDriver::CreateDiagDriver() */

AndroidDiagDriver * Sexy::IDiagDriver::CreateDiagDriver(void)

{
  AndroidDiagDriver *this;
  
  this = ::operator_new(0x18);
  AndroidDiagDriver::AndroidDiagDriver(this);
  return this;
}


/* Sexy::IDiagDriver::IDiagDriver() */

void __thiscall Sexy::IDiagDriver::IDiagDriver(IDiagDriver *this)

{
  *(undefined **)this = &DAT_06a37940;
  return;
}

