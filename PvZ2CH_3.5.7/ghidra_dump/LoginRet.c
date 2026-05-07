// Class: LoginRet


/* LoginRet::LoginRet() */

void __thiscall LoginRet::LoginRet(LoginRet *this)

{
  Set8BytesTo0(this + 8);
  Set8BytesTo0(this + 0x18);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  Set8BytesTo0(this + 0x38);
  Set8BytesTo0(this + 0x40);
  Set8BytesTo0(this + 0x48);
  return;
}


/* LoginRet::~LoginRet() */

void __thiscall LoginRet::~LoginRet(LoginRet *this)

{
  std::string::~string((string *)(this + 0x48));
  std::string::~string((string *)(this + 0x40));
  std::string::~string((string *)(this + 0x38));
  std::vector<TokenRet,std::allocator<TokenRet>>::~vector
            ((vector<TokenRet,std::allocator<TokenRet>> *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 8));
  return;
}


/* LoginRet::TEMPNAMEPLACEHOLDERVALUE(LoginRet const&) */

LoginRet * __thiscall LoginRet::operator=(LoginRet *this,LoginRet *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  thunk_FUN_05475e00(this + 0x18,param_1 + 0x18);
  std::vector<TokenRet,std::allocator<TokenRet>>::operator=
            ((vector<TokenRet,std::allocator<TokenRet>> *)(this + 0x20),(vector *)(param_1 + 0x20));
  thunk_FUN_05475e00(this + 0x38,param_1 + 0x38);
  thunk_FUN_05475e00(this + 0x40,param_1 + 0x40);
  thunk_FUN_05475e00(this + 0x48,param_1 + 0x48);
  return this;
}

