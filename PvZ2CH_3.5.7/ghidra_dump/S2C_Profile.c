// Class: S2C_Profile


/* S2C_Profile::S2C_Profile() */

void __thiscall S2C_Profile::S2C_Profile(S2C_Profile *this)

{
  size_t in_x2;
  
  Set8BytesTo0((string *)(this + 8));
  Set8BytesTo0((string *)(this + 0x10));
  *(undefined4 *)this = 0;
  std::string::append((string *)(this + 8),"",in_x2);
  std::string::append((string *)(this + 0x10),"",in_x2);
  *(undefined4 *)(this + 0x18) = 0;
  return;
}

