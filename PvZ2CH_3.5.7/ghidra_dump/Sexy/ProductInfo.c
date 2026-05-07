// Class: Sexy::ProductInfo


/* Sexy::ProductInfo::ProductInfo() */

void __thiscall Sexy::ProductInfo::ProductInfo(ProductInfo *this)

{
  size_t in_x2;
  
  Set8BytesTo0();
  Set8BytesTo0((string *)(this + 8));
  Set8BytesTo0(this + 0x10);
  std::string::append((string *)this,"",in_x2);
  std::string::append((string *)(this + 8),"",in_x2);
  return;
}


/* Sexy::ProductInfo::TEMPNAMEPLACEHOLDERVALUE(Sexy::ProductInfo&&) */

ProductInfo * __thiscall Sexy::ProductInfo::operator=(ProductInfo *this,ProductInfo *param_1)

{
  undefined4 uVar1;
  
  FUN_05474278();
  FUN_05474278(this + 8,param_1 + 8);
  FUN_05474278(this + 0x10,param_1 + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = uVar1;
  return this;
}

