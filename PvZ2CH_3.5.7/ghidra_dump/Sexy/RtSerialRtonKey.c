// Class: Sexy::RtSerialRtonKey


/* Sexy::RtSerialRtonKey::RtSerialRtonKey(char const*) */

void __thiscall Sexy::RtSerialRtonKey::RtSerialRtonKey(RtSerialRtonKey *this,char *param_1)

{
  size_t in_x2;
  
  Set8BytesTo0();
  if (param_1 != (char *)0x0) {
    std::string::append((string *)this,param_1,in_x2);
    return;
  }
  return;
}


/* Sexy::RtSerialRtonKey::IsValid() const */

byte Sexy::RtSerialRtonKey::IsValid(void)

{
  byte bVar1;
  
  bVar1 = FUN_0547419c();
  return bVar1 ^ 1;
}

