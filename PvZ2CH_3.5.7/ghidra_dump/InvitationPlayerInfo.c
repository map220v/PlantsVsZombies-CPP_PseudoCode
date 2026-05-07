// Class: InvitationPlayerInfo


/* InvitationPlayerInfo::InvitationPlayerInfo(InvitationPlayerInfo const&) */

void __thiscall
InvitationPlayerInfo::InvitationPlayerInfo(InvitationPlayerInfo *this,InvitationPlayerInfo *param_1)

{
  FUN_05475d88();
  FUN_05475d88(this + 8,param_1 + 8);
  FUN_05475d88(this + 0x10,param_1 + 0x10);
  FUN_05475d88(this + 0x18,param_1 + 0x18);
  return;
}


/* InvitationPlayerInfo::InvitationPlayerInfo() */

void __thiscall InvitationPlayerInfo::InvitationPlayerInfo(InvitationPlayerInfo *this)

{
  size_t in_x2;
  
  Set8BytesTo0();
  Set8BytesTo0((string *)(this + 8));
  Set8BytesTo0((string *)(this + 0x10));
  Set8BytesTo0((string *)(this + 0x18));
  std::string::append((string *)this,"",in_x2);
  std::string::append((string *)(this + 8),"",in_x2);
  std::string::append((string *)(this + 0x10),"",in_x2);
  std::string::append((string *)(this + 0x18),"",in_x2);
  return;
}


/* InvitationPlayerInfo::TEMPNAMEPLACEHOLDERVALUE(InvitationPlayerInfo const&) */

InvitationPlayerInfo * __thiscall
InvitationPlayerInfo::operator=(InvitationPlayerInfo *this,InvitationPlayerInfo *param_1)

{
  thunk_FUN_05475e00();
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  thunk_FUN_05475e00(this + 0x10,param_1 + 0x10);
  thunk_FUN_05475e00(this + 0x18,param_1 + 0x18);
  return this;
}


/* InvitationPlayerInfo::InvitationPlayerInfo(InvitationPlayerInfo&&) */

void __thiscall
InvitationPlayerInfo::InvitationPlayerInfo(InvitationPlayerInfo *this,InvitationPlayerInfo *param_1)

{
  FUN_05474148();
  FUN_05474148(this + 8,param_1 + 8);
  FUN_05474148(this + 0x10,param_1 + 0x10);
  FUN_05474148(this + 0x18,param_1 + 0x18);
  return;
}

