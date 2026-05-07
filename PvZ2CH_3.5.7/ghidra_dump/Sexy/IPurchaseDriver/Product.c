// Class: Sexy::IPurchaseDriver::Product


/* Sexy::IPurchaseDriver::Product::Product() */

void __thiscall Sexy::IPurchaseDriver::Product::Product(Product *this)

{
  Set8BytesTo0();
  FUN_05476574(this + 8);
  FUN_05476574(this + 0x10);
  FUN_05476574(this + 0x18);
  return;
}


/* Sexy::IPurchaseDriver::Product::~Product() */

void __thiscall Sexy::IPurchaseDriver::Product::~Product(Product *this)

{
  FUN_05476c50(this + 0x18);
  FUN_05476c50(this + 0x10);
  FUN_05476c50(this + 8);
  std::string::~string((string *)this);
  return;
}

