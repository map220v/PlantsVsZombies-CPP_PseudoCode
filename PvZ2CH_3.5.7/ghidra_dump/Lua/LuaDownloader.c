// Class: Lua::LuaDownloader


/* Lua::LuaDownloader::Reset() */

void __thiscall Lua::LuaDownloader::Reset(LuaDownloader *this)

{
  if (*(int *)(this + 8) != 0) {
    CLuaEngine::RemoveScriptHandler((int)gLuaEngine);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined4 *)(this + 0x14) = 0xffffffff;
  return;
}


/* Lua::LuaDownloader::LuaDownloader() */

void __thiscall Lua::LuaDownloader::LuaDownloader(LuaDownloader *this)

{
  Sexy::NetworkServiceListener::NetworkServiceListener((NetworkServiceListener *)this);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = &PTR_ToString_06a2c810;
  this[0x10] = (LuaDownloader)0x0;
  *(undefined4 *)(this + 0x14) = 0xffffffff;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* Lua::LuaDownloader::~LuaDownloader() */

void __thiscall Lua::LuaDownloader::~LuaDownloader(LuaDownloader *this)

{
  *(undefined ***)this = &PTR_ToString_06a2c810;
  if (*(int *)(this + 8) != 0) {
    CLuaEngine::RemoveScriptHandler((int)gLuaEngine);
    *(undefined4 *)(this + 8) = 0;
  }
  std::vector<Lua::DownloadInfo,std::allocator<Lua::DownloadInfo>>::~vector
            ((vector<Lua::DownloadInfo,std::allocator<Lua::DownloadInfo>> *)(this + 0x18));
  return;
}


/* Lua::LuaDownloader::OnDownloadFailed() */

void __thiscall Lua::LuaDownloader::OnDownloadFailed(LuaDownloader *this)

{
  Reset(this);
  this[0x10] = (LuaDownloader)0x0;
  std::vector<Lua::DownloadInfo,std::allocator<Lua::DownloadInfo>>::clear
            ((vector<Lua::DownloadInfo,std::allocator<Lua::DownloadInfo>> *)(this + 0x18));
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* Lua::LuaDownloader::ServiceRequestCompleted(Sexy::Buffer const*, void const*) */

void __thiscall
Lua::LuaDownloader::ServiceRequestCompleted(LuaDownloader *this,Buffer *param_1,void *param_2)

{
  if (param_2 != this) {
    return;
  }
  OnDownloadFailed(this);
  return;
}


/* Lua::LuaDownloader::ServiceRequestFailed(Sexy::StructuredData const*, void const*) */

void __thiscall
Lua::LuaDownloader::ServiceRequestFailed(LuaDownloader *this,StructuredData *param_1,void *param_2)

{
  if (param_2 != this) {
    return;
  }
  OnDownloadFailed(this);
  *(undefined4 *)((long)param_2 + 0x14) = 0xffffffff;
  return;
}


/* Lua::LuaDownloader::OnFinished() */

void __thiscall Lua::LuaDownloader::OnFinished(LuaDownloader *this)

{
  Reset(this);
  this[0x10] = (LuaDownloader)0x0;
  std::vector<Lua::DownloadInfo,std::allocator<Lua::DownloadInfo>>::clear
            ((vector<Lua::DownloadInfo,std::allocator<Lua::DownloadInfo>> *)(this + 0x18));
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* Lua::LuaDownloader::AddFile(Lua::DownloadInfo const&) */

void __thiscall Lua::LuaDownloader::AddFile(LuaDownloader *this,DownloadInfo *param_1)

{
  std::vector<Lua::DownloadInfo,std::allocator<Lua::DownloadInfo>>::push_back
            ((vector<Lua::DownloadInfo,std::allocator<Lua::DownloadInfo>> *)(this + 0x18),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::LuaDownloader::DownloadPath(Lua::DownloadInfo const&) */

void __thiscall Lua::LuaDownloader::DownloadPath(LuaDownloader *this,DownloadInfo *param_1)

{
  undefined4 uVar1;
  NetworkServiceManager *this_00;
  StructuredData aSStack_80 [120];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Reset(this);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 0x1c);
  Sexy::StructuredData::StructuredData(aSStack_80);
  Sexy::StructuredData::BeginObject(aSStack_80);
  Sexy::StructuredData::AddString(aSStack_80,"url",(string *)param_1);
  Sexy::StructuredData::AddBoolean(aSStack_80,"resumable",true);
  Sexy::StructuredData::AddString(aSStack_80,"targetFilePath",(string *)(param_1 + 8));
  Sexy::StructuredData::AddBoolean(aSStack_80,"disableIfRangeHeader",true);
  Sexy::StructuredData::AddBoolean(aSStack_80,"slackCerts",true);
  Sexy::StructuredData::EndObject(aSStack_80);
  this_00 = (NetworkServiceManager *)Sexy::NetworkServiceManager::DefaultNetworkServiceManager();
  uVar1 = Sexy::NetworkServiceManager::MakeRequest
                    (this_00,aSStack_80,(NetworkServiceListener *)this,this);
  *(undefined4 *)(this + 0x14) = uVar1;
  Sexy::StructuredData::~StructuredData(aSStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Lua::LuaDownloader::Start() */

void __thiscall Lua::LuaDownloader::Start(LuaDownloader *this)

{
  char cVar1;
  DownloadInfo *pDVar2;
  
  if (this[0x10] != (LuaDownloader)0x0) {
    return;
  }
  cVar1 = std::vector<Lua::DownloadInfo,std::allocator<Lua::DownloadInfo>>::empty
                    ((vector<Lua::DownloadInfo,std::allocator<Lua::DownloadInfo>> *)(this + 0x18));
  if (cVar1 != '\0') {
    OnFinished(this);
    return;
  }
  *(undefined4 *)(this + 0xc) = 0;
  this[0x10] = (LuaDownloader)0x1;
  pDVar2 = (DownloadInfo *)FUN_04fdac88(*(undefined8 *)(this + 0x18),0);
  DownloadPath(this,pDVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::LuaDownloader::OnDownloadCompleted(std::string const&) */

void Lua::LuaDownloader::OnDownloadCompleted(string *param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  DownloadInfo *pDVar4;
  undefined8 uVar5;
  string asStack_10 [8];
  long local_8;
  
  puVar2 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10);
  MessageRouter::Post<std::string_const&,std::string>
            ((MessageRouter *)puVar2,Message::DownloaderCompleted,asStack_10);
  std::string::~string(asStack_10);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(int *)(param_1 + 0xc) + 1;
  *(uint *)(param_1 + 0xc) = uVar1;
  uVar3 = FUN_04fdac90(uVar5,*(undefined8 *)(param_1 + 0x20));
  if (uVar1 < uVar3) {
    pDVar4 = (DownloadInfo *)FUN_04fdac88(uVar5,(ulong)uVar1);
    DownloadPath((LuaDownloader *)param_1,pDVar4);
  }
  else {
    OnFinished((LuaDownloader *)param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Lua::LuaDownloader::ServiceResumableRequestCompleted(std::string const&, void const*) */

void __thiscall
Lua::LuaDownloader::ServiceResumableRequestCompleted
          (LuaDownloader *this,string *param_1,void *param_2)

{
  if (param_2 != this) {
    return;
  }
  OnDownloadCompleted((string *)this);
  return;
}

