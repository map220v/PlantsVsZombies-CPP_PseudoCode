// Class: Sexy::ISaveGameDriver


/* Sexy::ISaveGameDriver::ISaveGameDriver() */

void __thiscall Sexy::ISaveGameDriver::ISaveGameDriver(ISaveGameDriver *this)

{
  *(undefined **)this = &DAT_06a35000;
  return;
}


/* Sexy::ISaveGameDriver::CreateSaveGameDriver() */

FilesystemSaveGameDriver * Sexy::ISaveGameDriver::CreateSaveGameDriver(void)

{
  FilesystemSaveGameDriver *this;
  
  this = ::operator_new(8);
  FilesystemSaveGameDriver::FilesystemSaveGameDriver(this);
  return this;
}

