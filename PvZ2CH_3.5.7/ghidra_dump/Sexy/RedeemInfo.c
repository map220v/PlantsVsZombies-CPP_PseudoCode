// Class: Sexy::RedeemInfo


/* Sexy::RedeemInfo::RedeemInfo() */

void __thiscall Sexy::RedeemInfo::RedeemInfo(RedeemInfo *this)

{
  size_t in_x2;
  
  Set8BytesTo0();
  Set8BytesTo0((string *)(this + 8));
  std::string::append((string *)this,"",in_x2);
  std::string::append((string *)(this + 8),"",in_x2);
  return;
}

