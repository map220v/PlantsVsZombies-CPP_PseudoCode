// Class: PurchaseInfo


/* PurchaseInfo::PurchaseInfo() */

void __thiscall PurchaseInfo::PurchaseInfo(PurchaseInfo *this)

{
  size_t in_x2;
  
  Set8BytesTo0();
  Set8BytesTo0((string *)(this + 8));
  Set8BytesTo0((string *)(this + 0x10));
  std::string::append((string *)this,"",in_x2);
  std::string::append((string *)(this + 8),"",in_x2);
  std::string::append((string *)(this + 0x10),"",in_x2);
  *(undefined4 *)(this + 0x18) = 0;
  return;
}


/* PurchaseInfo::TEMPNAMEPLACEHOLDERVALUE(PurchaseInfo const&) */

PurchaseInfo * __thiscall PurchaseInfo::operator=(PurchaseInfo *this,PurchaseInfo *param_1)

{
  thunk_FUN_05475e00();
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  thunk_FUN_05475e00(this + 0x10,param_1 + 0x10);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  return this;
}

