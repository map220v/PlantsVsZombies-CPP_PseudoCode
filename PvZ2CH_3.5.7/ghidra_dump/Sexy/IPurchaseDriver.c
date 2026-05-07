// Class: Sexy::IPurchaseDriver


/* Sexy::IPurchaseDriver::IPurchaseDriver() */

void __thiscall Sexy::IPurchaseDriver::IPurchaseDriver(IPurchaseDriver *this)

{
  *(undefined **)this = &DAT_06a352a0;
  return;
}


/* Sexy::IPurchaseDriver::CreatePurchaseDriver(std::string) */

AndroidPurchaseDriver * Sexy::IPurchaseDriver::CreatePurchaseDriver(void)

{
  AndroidPurchaseDriver *this;
  
  this = ::operator_new(0x80);
  AndroidPurchaseDriver::AndroidPurchaseDriver(this);
  return this;
}

