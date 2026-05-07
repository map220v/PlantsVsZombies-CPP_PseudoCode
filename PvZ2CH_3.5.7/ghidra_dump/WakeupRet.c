// Class: WakeupRet


/* WakeupRet::~WakeupRet() */

void __thiscall WakeupRet::~WakeupRet(WakeupRet *this)

{
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  return;
}


/* WakeupRet::WakeupRet() */

void __thiscall WakeupRet::WakeupRet(WakeupRet *this)

{
  Set8BytesTo0(this + 8);
  Set8BytesTo0(this + 0x10);
  Set8BytesTo0(this + 0x18);
  return;
}


/* WakeupRet::TEMPNAMEPLACEHOLDERVALUE(WakeupRet const&) */

WakeupRet * __thiscall WakeupRet::operator=(WakeupRet *this,WakeupRet *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  thunk_FUN_05475e00(this + 0x10,param_1 + 0x10);
  thunk_FUN_05475e00(this + 0x18,param_1 + 0x18);
  return this;
}

