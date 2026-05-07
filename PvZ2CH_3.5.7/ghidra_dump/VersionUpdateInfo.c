// Class: VersionUpdateInfo


/* VersionUpdateInfo::TEMPNAMEPLACEHOLDERVALUE(VersionUpdateInfo const&) */

VersionUpdateInfo * __thiscall
VersionUpdateInfo::operator=(VersionUpdateInfo *this,VersionUpdateInfo *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  thunk_FUN_05475e00(this + 0x10,param_1 + 0x10);
  thunk_FUN_05475e00(this + 0x18,param_1 + 0x18);
  return this;
}


/* VersionUpdateInfo::VersionUpdateInfo(VersionUpdateInfo const&) */

void __thiscall
VersionUpdateInfo::VersionUpdateInfo(VersionUpdateInfo *this,VersionUpdateInfo *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  FUN_05475d88(this + 8,param_1 + 8);
  FUN_05475d88(this + 0x10,param_1 + 0x10);
  FUN_05475d88(this + 0x18,param_1 + 0x18);
  return;
}


/* VersionUpdateInfo::VersionUpdateInfo() */

void __thiscall VersionUpdateInfo::VersionUpdateInfo(VersionUpdateInfo *this)

{
  size_t in_x2;
  
  Set8BytesTo0((string *)(this + 8));
  Set8BytesTo0((string *)(this + 0x10));
  Set8BytesTo0((string *)(this + 0x18));
  *(undefined4 *)this = 0;
  std::string::append((string *)(this + 8),"",in_x2);
  std::string::append((string *)(this + 0x10),"",in_x2);
  std::string::append((string *)(this + 0x18),"",in_x2);
  return;
}


/* VersionUpdateInfo::TEMPNAMEPLACEHOLDERVALUE(VersionUpdateInfo&&) */

VersionUpdateInfo * __thiscall
VersionUpdateInfo::operator=(VersionUpdateInfo *this,VersionUpdateInfo *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  FUN_05474278(this + 8,param_1 + 8);
  FUN_05474278(this + 0x10,param_1 + 0x10);
  FUN_05474278(this + 0x18,param_1 + 0x18);
  return this;
}

