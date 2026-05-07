// Class: Lua::LuaUpdater


/* Lua::LuaUpdater::GetBlocked() */

LuaUpdater __thiscall Lua::LuaUpdater::GetBlocked(LuaUpdater *this)

{
  return this[0x50];
}


/* Lua::LuaUpdater::~LuaUpdater() */

void __thiscall Lua::LuaUpdater::~LuaUpdater(LuaUpdater *this)

{
  *(undefined ***)this = &PTR_ToString_06a2cea0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  LuaDownloader::~LuaDownloader((LuaDownloader *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::LuaUpdater::OnDownloaderCompleted(std::string const&) */

void __thiscall Lua::LuaUpdater::OnDownloaderCompleted(LuaUpdater *this,string *param_1)

{
  CLuaEngine *this_00;
  undefined8 uVar1;
  char *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = FUN_05474184(this + 0x18);
  FUN_05475ffc(asStack_10,param_1,uVar1,0xffffffffffffffff);
  this_00 = gLuaEngine;
  pcVar2 = (char *)FUN_0547429c(asStack_10);
  CLuaEngine::OnFileDownload(this_00,pcVar2);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::LuaUpdater::Init() */

void __thiscall Lua::LuaUpdater::Init(LuaUpdater *this)

{
  string *this_00;
  string *this_01;
  long lVar1;
  char *pcVar2;
  ulong uVar3;
  size_t in_x2;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (string *)(this + 0x10);
  this_01 = (string *)(this + 8);
  Android::Resources::GetExternalFilesDirectory((AndroidAppDriver *)0x0);
  thunk_FUN_05475e00(this + 0x18,asStack_20);
  std::string::append(this_01,"https://profile.pvz2ios.popcap.com.cn/new_pvz2_ios/",in_x2);
  std::string::append(this_00,"http://download.pvz2ios.popcap.com.cn/",in_x2);
  lVar1 = FUN_05474184(this_01);
  pcVar2 = (char *)FUN_05474ee8(this_01,lVar1 + -1);
  if (*pcVar2 != '/') {
    FUN_05475ad8(this_01,&DAT_055a4690);
  }
  lVar1 = FUN_05474184(this_00);
  pcVar2 = (char *)FUN_05474ee8(this_00,lVar1 + -1);
  if (*pcVar2 != '/') {
    FUN_05475ad8(this_00,&DAT_055a4690);
  }
  std::string::string(asStack_18,"default");
  nop();
  uVar3 = Android::Info::SysGetProductVersionCode();
  Sexy::StrFormat("%d",asStack_10,uVar3 & 0xffffffff);
  FUN_05474278(asStack_18,asStack_10);
  std::string::~string(asStack_10);
  thunk_FUN_054757c0(this_01,asStack_18);
  thunk_FUN_054757c0(this_00,asStack_18);
  FUN_05475ad8(this_01,&DAT_055a4690);
  FUN_05475ad8(this_00,&DAT_055a4690);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Lua::LuaUpdater::Start() */

void __thiscall Lua::LuaUpdater::Start(LuaUpdater *this)

{
  LuaDownloader::Start((LuaDownloader *)(this + 0x20));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::LuaUpdater::SetDLCVersion(std::string&) */

void __thiscall Lua::LuaUpdater::SetDLCVersion(LuaUpdater *this,string *param_1)

{
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"LuaDLCVersion");
  FUN_05475d88(asStack_10,param_1);
  UserPrefs::SetString(asStack_18,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  nop();
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::LuaUpdater::GetDLCVersion() */

void __thiscall Lua::LuaUpdater::GetDLCVersion(LuaUpdater *this)

{
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"LuaDLCVersion");
  std::string::string(asStack_10,"");
  UserPrefs::GetString((UserPrefs *)asStack_18,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Lua::LuaUpdater::StartGame() */

void __thiscall Lua::LuaUpdater::StartGame(LuaUpdater *this)

{
  if (this[0x50] == (LuaUpdater)0x0) {
    return;
  }
  CLuaEngine::OnUpdateFinish(gLuaEngine);
  return;
}


/* Lua::LuaUpdater::ServiceRequestFailed(Sexy::StructuredData const*, void const*) */

void __thiscall
Lua::LuaUpdater::ServiceRequestFailed(LuaUpdater *this,StructuredData *param_1,void *param_2)

{
  if (param_2 != this) {
    return;
  }
  StartGame(this);
  return;
}


/* Lua::LuaUpdater::OnDownloaderCompletedAll() */

void __thiscall Lua::LuaUpdater::OnDownloaderCompletedAll(LuaUpdater *this)

{
  if (this[0x50] == (LuaUpdater)0x0) {
    return;
  }
  CLuaEngine::OnUpdateFinish(gLuaEngine);
  return;
}


/* Lua::LuaUpdater::SetBlocked(bool) */

void __thiscall Lua::LuaUpdater::SetBlocked(LuaUpdater *this,bool param_1)

{
  this[0x50] = (LuaUpdater)param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::LuaUpdater::AddFile(std::string&, std::string&, std::string&, int, int) */

void __thiscall
Lua::LuaUpdater::AddFile
          (LuaUpdater *this,string *param_1,string *param_2,string *param_3,int param_4,int param_5)

{
  string asStack_30 [8];
  DownloadInfo aDStack_28 [8];
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DownloadInfo::DownloadInfo(aDStack_28);
  FUN_031dcc6c(asStack_30,this + 0x10,param_1);
  FUN_05474278(aDStack_28,asStack_30);
  std::string::~string(asStack_30);
  FUN_031dcc6c(asStack_30,this + 0x18,param_2);
  FUN_05474278(auStack_20,asStack_30);
  std::string::~string(asStack_30);
  thunk_FUN_05475e00(auStack_18,param_3);
  local_10 = param_4;
  local_c = param_5;
  LuaDownloader::AddFile((LuaDownloader *)(this + 0x20),aDStack_28);
  DownloadInfo::~DownloadInfo(aDStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::LuaUpdater::AddFileFullURL(std::string&, std::string&, std::string&, int, int) */

void __thiscall
Lua::LuaUpdater::AddFileFullURL
          (LuaUpdater *this,string *param_1,string *param_2,string *param_3,int param_4,int param_5)

{
  string asStack_30 [8];
  DownloadInfo aDStack_28 [8];
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DownloadInfo::DownloadInfo(aDStack_28);
  thunk_FUN_05475e00(aDStack_28,param_1);
  FUN_031dcc6c(asStack_30,this + 0x18,param_2);
  FUN_05474278(auStack_20,asStack_30);
  std::string::~string(asStack_30);
  thunk_FUN_05475e00(auStack_18,param_3);
  local_10 = param_4;
  local_c = param_5;
  LuaDownloader::AddFile((LuaDownloader *)(this + 0x20),aDStack_28);
  DownloadInfo::~DownloadInfo(aDStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::LuaUpdater::OnDownloaderError() */

void __thiscall Lua::LuaUpdater::OnDownloaderError(LuaUpdater *this)

{
  long *plVar1;
  code *pcVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_031dcc6c(asStack_18,this + 0x18,&DAT_06ba8618);
  plVar1 = *(long **)(Sexy::gSexyAppBase + 0x28);
  pcVar2 = *(code **)(*plVar1 + 0x140);
  std::operator+(asStack_18,"lua/updater.lua");
  (*pcVar2)(plVar1,asStack_10);
  std::string::~string(asStack_10);
  StartGame(this);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Lua::LuaUpdater::ServiceResumableRequestCompleted(std::string const&, void const*) */

void __thiscall
Lua::LuaUpdater::ServiceResumableRequestCompleted(LuaUpdater *this,string *param_1,void *param_2)

{
  CLuaEngine *this_00;
  
  if (param_2 != this) {
    return;
  }
  this_00 = (CLuaEngine *)Sexy::LazySingleton<Lua::CLuaEngine>::GetInstance();
  CLuaEngine::ExecuteFile(this_00,"updater.lua");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::LuaUpdater::LuaUpdater() */

void __thiscall Lua::LuaUpdater::LuaUpdater(LuaUpdater *this)

{
  undefined *puVar1;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  CBMemberTranslatorX aCStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::NetworkServiceListener::NetworkServiceListener((NetworkServiceListener *)this);
  *(undefined ***)this = &PTR_ToString_06a2cea0;
  Set8BytesTo0(this + 8);
  Set8BytesTo0(this + 0x10);
  Set8BytesTo0(this + 0x18);
  LuaDownloader::LuaDownloader((LuaDownloader *)(this + 0x20));
  this[0x50] = (LuaUpdater)0x0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnDownloaderCompleted);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<Lua::LuaUpdater,void(Lua::LuaUpdater::*)(std::string_const&)>>
            ((MessageRouter *)puVar1,Message::DownloaderCompleted,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnDownloaderCompletedAll);
  Sexy::Delegate0::Delegate0<Lua::LuaUpdater,void(Lua::LuaUpdater::*)()>(aDStack_38,aCStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::DownloaderCompletedAll,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnDownloaderError);
  Sexy::Delegate0::Delegate0<Lua::LuaUpdater,void(Lua::LuaUpdater::*)()>(aDStack_38,aCStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::DownloaderError,aDStack_38);
  Init(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Lua::LuaUpdater::GetInst() */

undefined * Lua::LuaUpdater::GetInst(void)

{
  int iVar1;
  
  if (((DAT_06ba8690 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06ba8690), iVar1 != 0)) {
    LuaUpdater((LuaUpdater *)&DAT_06ba86d0);
    __cxa_guard_release(&DAT_06ba8690);
    __cxa_atexit(~LuaUpdater,&DAT_06ba86d0,&DAT_06a88000);
    return &DAT_06ba86d0;
  }
  return &DAT_06ba86d0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::LuaUpdater::DownloadUpdater() */

void __thiscall Lua::LuaUpdater::DownloadUpdater(LuaUpdater *this)

{
  NetworkServiceManager *this_00;
  long *plVar1;
  code *pcVar2;
  string asStack_90 [8];
  string asStack_88 [8];
  string asStack_80 [120];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_031dcc6c(asStack_90,this + 0x18,&DAT_06ba8618);
  plVar1 = *(long **)(Sexy::gSexyAppBase + 0x28);
  pcVar2 = *(code **)(*plVar1 + 0x140);
  std::operator+(asStack_90,"lua/updater.lua");
  (*pcVar2)(plVar1,asStack_80);
  std::string::~string(asStack_80);
  std::operator+(asStack_90,"lua/");
  DFinder::createDirectory(asStack_80);
  std::string::~string(asStack_80);
  Sexy::StructuredData::StructuredData((StructuredData *)asStack_80);
  Sexy::StructuredData::BeginObject((StructuredData *)asStack_80);
  std::operator+((string *)(this + 8),"update/lua/updater.lua");
  Sexy::StructuredData::AddString((StructuredData *)asStack_80,"url",asStack_88);
  std::string::~string(asStack_88);
  Sexy::StructuredData::AddBoolean((StructuredData *)asStack_80,"resumable",true);
  std::operator+(asStack_90,"lua/updater.lua");
  Sexy::StructuredData::AddString((StructuredData *)asStack_80,"targetFilePath",asStack_88);
  std::string::~string(asStack_88);
  Sexy::StructuredData::AddInteger((StructuredData *)asStack_80,"timeout",0x1e);
  Sexy::StructuredData::EndObject((StructuredData *)asStack_80);
  this_00 = (NetworkServiceManager *)Sexy::NetworkServiceManager::DefaultNetworkServiceManager();
  Sexy::NetworkServiceManager::MakeRequest
            (this_00,(StructuredData *)asStack_80,(NetworkServiceListener *)this,this);
  Sexy::StructuredData::~StructuredData((StructuredData *)asStack_80);
  std::string::~string(asStack_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Lua::LuaUpdater::CheckUpdater() */

undefined8 __thiscall Lua::LuaUpdater::CheckUpdater(LuaUpdater *this)

{
  char cVar1;
  CLuaEngine *this_00;
  
  this_00 = (CLuaEngine *)Sexy::LazySingleton<Lua::CLuaEngine>::GetInstance();
  cVar1 = CLuaEngine::ExecuteFile(this_00,"updater.lua");
  if (cVar1 == '\0') {
    DownloadUpdater(this);
  }
  return 1;
}

