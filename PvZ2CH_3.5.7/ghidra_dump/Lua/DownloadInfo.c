// Class: Lua::DownloadInfo


/* Lua::DownloadInfo::~DownloadInfo() */

void __thiscall Lua::DownloadInfo::~DownloadInfo(DownloadInfo *this)

{
  std::string::~string((string *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  std::string::~string((string *)this);
  return;
}


/* Lua::DownloadInfo::DownloadInfo() */

void __thiscall Lua::DownloadInfo::DownloadInfo(DownloadInfo *this)

{
  Set8BytesTo0();
  Set8BytesTo0(this + 8);
  Set8BytesTo0(this + 0x10);
  return;
}


/* Lua::DownloadInfo::DownloadInfo(Lua::DownloadInfo const&) */

void __thiscall Lua::DownloadInfo::DownloadInfo(DownloadInfo *this,DownloadInfo *param_1)

{
  undefined4 uVar1;
  
  FUN_05475d88();
  FUN_05475d88(this + 8,param_1 + 8);
  FUN_05475d88(this + 0x10,param_1 + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x18) = uVar1;
  return;
}


/* Lua::DownloadInfo::DownloadInfo(Lua::DownloadInfo&&) */

void __thiscall Lua::DownloadInfo::DownloadInfo(DownloadInfo *this,DownloadInfo *param_1)

{
  undefined4 uVar1;
  
  FUN_05474148();
  FUN_05474148(this + 8,param_1 + 8);
  FUN_05474148(this + 0x10,param_1 + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x18) = uVar1;
  return;
}

