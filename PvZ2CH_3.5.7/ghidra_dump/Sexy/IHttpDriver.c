// Class: Sexy::IHttpDriver


/* Sexy::IHttpDriver::IHttpDriver() */

void __thiscall Sexy::IHttpDriver::IHttpDriver(IHttpDriver *this)

{
  *(undefined **)this = &DAT_06792480;
  return;
}


/* Sexy::IHttpDriver::CreateHttpDriver(Sexy::SexyAppBase*) */

AndroidHttpDriver * Sexy::IHttpDriver::CreateHttpDriver(SexyAppBase *param_1)

{
  AndroidHttpDriver *this;
  
  this = ::operator_new(0x68);
  AndroidHttpDriver::AndroidHttpDriver(this);
  return this;
}

