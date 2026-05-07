// Class: AuthInfo


/* AuthInfo::AuthInfo() */

void __thiscall AuthInfo::AuthInfo(AuthInfo *this)

{
  Set8BytesTo0(this + 8);
  Set8BytesTo0(this + 0x10);
  Set8BytesTo0(this + 0x18);
  Set8BytesTo0(this + 0x20);
  Set8BytesTo0(this + 0x28);
  Set8BytesTo0(this + 0x30);
  Set8BytesTo0(this + 0x38);
  this[0x40] = (AuthInfo)0x0;
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* AuthInfo::~AuthInfo() */

void __thiscall AuthInfo::~AuthInfo(AuthInfo *this)

{
  std::string::~string((string *)(this + 0x38));
  std::string::~string((string *)(this + 0x30));
  std::string::~string((string *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  return;
}

