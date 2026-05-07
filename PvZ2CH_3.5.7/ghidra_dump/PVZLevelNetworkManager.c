// Class: PVZLevelNetworkManager


/* PVZLevelNetworkManager::PVZLevelNetworkManager() */

void __thiscall PVZLevelNetworkManager::PVZLevelNetworkManager(PVZLevelNetworkManager *this)

{
  Sexy::LazySingleton<PVZLevelNetworkManager>::LazySingleton
            ((LazySingleton<PVZLevelNetworkManager> *)this);
  Sexy::NetworkServiceListener::NetworkServiceListener((NetworkServiceListener *)(this + 8));
  *(undefined ***)this = &PTR__PVZLevelNetworkManager_06846b20;
  *(undefined ***)(this + 8) = &PTR_ToString_06846b60;
  Set8BytesTo0(this + 0x10);
  return;
}


/* PVZLevelNetworkManager::ServiceRequestCompleted(ImageLib::Image*&, void const*) */

void PVZLevelNetworkManager::ServiceRequestCompleted(Image **param_1,void *param_2)

{
  return;
}


/* non-virtual thunk to PVZLevelNetworkManager::ServiceRequestCompleted(ImageLib::Image*&, void
   const*) */

void __thiscall
PVZLevelNetworkManager::ServiceRequestCompleted
          (PVZLevelNetworkManager *this,Image **param_1,void *param_2)

{
  ServiceRequestCompleted((Image **)(this + -8),param_1);
  return;
}


/* PVZLevelNetworkManager::ServiceRequestCompleted(Sexy::Buffer const*, void const*) */

void PVZLevelNetworkManager::ServiceRequestCompleted(Buffer *param_1,void *param_2)

{
  return;
}


/* non-virtual thunk to PVZLevelNetworkManager::ServiceRequestCompleted(Sexy::Buffer const*, void
   const*) */

void __thiscall
PVZLevelNetworkManager::ServiceRequestCompleted
          (PVZLevelNetworkManager *this,Buffer *param_1,void *param_2)

{
  ServiceRequestCompleted((Buffer *)(this + -8),param_1);
  return;
}


/* PVZLevelNetworkManager::~PVZLevelNetworkManager() */

void __thiscall PVZLevelNetworkManager::~PVZLevelNetworkManager(PVZLevelNetworkManager *this)

{
  *(undefined ***)this = &PTR__PVZLevelNetworkManager_06846b20;
  *(undefined ***)(this + 8) = &PTR_ToString_06846b60;
  std::string::~string((string *)(this + 0x10));
  Sexy::LazySingleton<PVZLevelNetworkManager>::~LazySingleton
            ((LazySingleton<PVZLevelNetworkManager> *)this);
  return;
}


/* PVZLevelNetworkManager::~PVZLevelNetworkManager() */

void __thiscall PVZLevelNetworkManager::~PVZLevelNetworkManager(PVZLevelNetworkManager *this)

{
  ~PVZLevelNetworkManager(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZLevelNetworkManager::GetLevelLocalPath(std::string) */

void PVZLevelNetworkManager::GetLevelLocalPath
               (undefined8 param_1,undefined8 param_2,string *param_3)

{
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetFolder(asStack_20,3);
  std::operator+(asStack_20,"levels/");
  std::operator+(asStack_18,param_3);
  std::operator+(asStack_10,".json");
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZLevelNetworkManager::ServiceRequestCompleted(Sexy::StructuredData const*, void const*) */

void __thiscall
PVZLevelNetworkManager::ServiceRequestCompleted
          (PVZLevelNetworkManager *this,StructuredData *param_1,void *param_2)

{
  string *psVar1;
  undefined4 uVar2;
  long lVar3;
  Value *pVVar4;
  ulong uVar5;
  undefined8 uVar6;
  string asStack_1b0 [8];
  string asStack_1a8 [8];
  string asStack_1a0 [8];
  string asStack_198 [8];
  JsonWriter aJStack_190 [24];
  undefined1 auStack_178 [16];
  ostream aoStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == this) {
    lVar3 = Sexy::StructuredData::IntegerForPath(param_1,"$.statusCode",-1);
    if ((lVar3 == 200) || (lVar3 == -1)) {
      Sexy::JsonWriter::JsonWriter(aJStack_190,0);
      uVar2 = operator|(0x10,8);
      FUN_05462470(auStack_178,uVar2);
      pVVar4 = (Value *)Sexy::StructuredData::Root(param_1);
      Sexy::JsonWriter::Write(aJStack_190,aoStack_168,pVVar4,true);
      FUN_05462824(asStack_198,auStack_178);
      lVar3 = FUN_05474178(asStack_198);
      std::string::~string(asStack_198);
      psVar1 = Sexy::gSexyAppBase;
      if (lVar3 != 0) {
        FUN_05475d88(asStack_1b0,(long)param_2 + 0x10);
        GetLevelLocalPath(asStack_1a8,param_2,asStack_1b0);
        FUN_05462824(asStack_1a0,auStack_178);
        uVar5 = FUN_0547429c(asStack_1a0);
        FUN_05462824(asStack_198,auStack_178);
        FUN_05474178(asStack_198);
        Sexy::SexyAppBase::WriteBytesToFile(psVar1,asStack_1a8,uVar5);
        std::string::~string(asStack_198);
        std::string::~string(asStack_1a0);
        std::string::~string(asStack_1a8);
        std::string::~string(asStack_1b0);
        Board::RestartLevel(*(Board **)(gLawnApp + 0x9f0));
        uVar6 = FUN_0547429c((long)param_2 + 0x10);
        Sexy::StrFormat("Load %s success!",asStack_198,uVar6);
        std::string::~string(asStack_198);
      }
      FUN_054617bc(auStack_178);
      Lua::DownloadInfo::~DownloadInfo((DownloadInfo *)aJStack_190);
    }
    else {
      (**(code **)(*(long *)param_2 + 0x18))(param_2,param_1,param_2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PVZLevelNetworkManager::ServiceRequestCompleted(Sexy::StructuredData const*,
   void const*) */

void __thiscall
PVZLevelNetworkManager::ServiceRequestCompleted
          (PVZLevelNetworkManager *this,StructuredData *param_1,void *param_2)

{
  ServiceRequestCompleted(this + -8,param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZLevelNetworkManager::LoadLevel(std::string) */

void __thiscall PVZLevelNetworkManager::LoadLevel(PVZLevelNetworkManager *this,undefined8 param_2)

{
  NetworkServiceManager *this_00;
  string asStack_90 [8];
  string asStack_88 [8];
  string asStack_80 [120];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  thunk_FUN_05475e00(this + 0x10);
  std::string::string(asStack_90,
                      "http://sha-vjun-001internal.ditwan.cn:38025/pvz2_designer/pvz2_cheat/packages/"
                     );
  nop();
  FUN_031f5e7c(asStack_88,"levels/",param_2);
  std::operator+(asStack_88,".json");
  thunk_FUN_054757c0(asStack_90,asStack_80);
  std::string::~string(asStack_80);
  std::string::~string(asStack_88);
  Sexy::StructuredData::StructuredData((StructuredData *)asStack_80);
  Sexy::StructuredData::BeginObject((StructuredData *)asStack_80);
  Sexy::StructuredData::AddString((StructuredData *)asStack_80,"url",asStack_90);
  Sexy::StructuredData::EndObject((StructuredData *)asStack_80);
  this_00 = (NetworkServiceManager *)Sexy::NetworkServiceManager::DefaultNetworkServiceManager();
  Sexy::NetworkServiceManager::MakeRequest
            (this_00,(StructuredData *)asStack_80,(NetworkServiceListener *)(this + 8),this);
  Sexy::StructuredData::~StructuredData((StructuredData *)asStack_80);
  std::string::~string(asStack_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZLevelNetworkManager::ServiceRequestFailed(Sexy::StructuredData const*, void const*) */

void PVZLevelNetworkManager::ServiceRequestFailed(StructuredData *param_1,void *param_2)

{
  char cVar1;
  bool bVar2;
  string *psVar3;
  Board *this;
  string asStack_10 [8];
  long local_8;
  
  this = *(Board **)(gLawnApp + 0x9f0);
  local_8 = ___stack_chk_guard;
  psVar3 = (string *)Board::GetLevel(this);
  cVar1 = FUN_043cfeb8(this[0x118]);
  if ((cVar1 != '\0') && (bVar2 = std::operator!=((string *)(param_1 + 0x10),psVar3), bVar2)) {
    FUN_05475d88(asStack_10,psVar3);
    LoadLevel((PVZLevelNetworkManager *)param_1,asStack_10);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PVZLevelNetworkManager::ServiceRequestFailed(Sexy::StructuredData const*,
   void const*) */

void __thiscall
PVZLevelNetworkManager::ServiceRequestFailed
          (PVZLevelNetworkManager *this,StructuredData *param_1,void *param_2)

{
  ServiceRequestFailed((StructuredData *)(this + -8),param_1);
  return;
}

