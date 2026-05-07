// Class: S2C_UserInfo


/* S2C_UserInfo::S2C_UserInfo() */

void __thiscall S2C_UserInfo::S2C_UserInfo(S2C_UserInfo *this)

{
  *(undefined4 *)this = 0;
  Set8BytesTo0(this + 8);
  Set8BytesTo0(this + 0x10);
  Set8BytesTo0(this + 0x18);
  Set8BytesTo0(this + 0x20);
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x30) = 1;
  *(undefined4 *)(this + 0x38) = 0;
  return;
}


/* S2C_UserInfo::~S2C_UserInfo() */

void __thiscall S2C_UserInfo::~S2C_UserInfo(S2C_UserInfo *this)

{
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  return;
}

