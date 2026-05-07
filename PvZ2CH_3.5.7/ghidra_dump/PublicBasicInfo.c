// Class: PublicBasicInfo


/* PublicBasicInfo::setNeedUserID(bool) */

void __thiscall PublicBasicInfo::setNeedUserID(PublicBasicInfo *this,bool param_1)

{
  this[8] = (PublicBasicInfo)param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PublicBasicInfo::getTargetPlatform() */

void __thiscall PublicBasicInfo::getTargetPlatform(PublicBasicInfo *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"Android");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PublicBasicInfo::getPublicIP() */

void __thiscall PublicBasicInfo::getPublicIP(PublicBasicInfo *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"unknown");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PublicBasicInfo::getPCPID() */

void __thiscall PublicBasicInfo::getPCPID(PublicBasicInfo *this)

{
  Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetAccountName();
  return;
}


/* PublicBasicInfo::PublicBasicInfo() */

void __thiscall PublicBasicInfo::PublicBasicInfo(PublicBasicInfo *this)

{
  this[8] = (PublicBasicInfo)0x0;
  *(undefined ***)this = &PTR_getBasicInfo_06a26cc0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PublicBasicInfo::getCharacterID() */

void __thiscall PublicBasicInfo::getCharacterID(PublicBasicInfo *this)

{
  undefined4 uVar1;
  NetworkMgr *this_00;
  long lVar2;
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  lVar2 = NetworkMgr::GetNewNetWorkProcess(this_00);
  if (lVar2 != 0) {
    Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
    FUN_0545ec84(auStack_168,asStack_180);
    std::string::~string(asStack_180);
  }
  FUN_05462824(auStack_178);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PublicBasicInfo::getClientTime() */

void __thiscall PublicBasicInfo::getClientTime(PublicBasicInfo *this)

{
  char *__s;
  string *in_x8;
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  time((time_t *)0x0);
  FUN_04fa570c(aDStack_18);
  __s = (char *)DString::c_str(aDStack_18);
  std::string::string(in_x8,__s);
  nop();
  DString::~DString(aDStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PublicBasicInfo::getProjectCode() */

void __thiscall PublicBasicInfo::getProjectCode(PublicBasicInfo *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"309878");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PublicBasicInfo::getVersionID() */

undefined8 __thiscall PublicBasicInfo::getVersionID(PublicBasicInfo *this)

{
  undefined8 in_x8;
  
  FUN_05475d88();
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PublicBasicInfo::getChannelID() */

void __thiscall PublicBasicInfo::getChannelID(PublicBasicInfo *this)

{
  Util *this_00;
  string *in_x8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(in_x8,"unknown");
  nop();
  Android::Util::GetPackageName(this_00);
  FUN_05474278();
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PublicBasicInfo::getSessionID() */

void __thiscall PublicBasicInfo::getSessionID(PublicBasicInfo *this)

{
  long lVar1;
  DString *this_00;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  this_00 = (DString *)FUN_04fa57a4(0);
  __s = (char *)DString::c_str(this_00);
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PublicBasicInfo::getOSVersion() */

void __thiscall PublicBasicInfo::getOSVersion(PublicBasicInfo *this)

{
  long lVar1;
  long *plVar2;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  plVar2 = *(long **)(Sexy::gSexyAppBase + 0x60);
  if (plVar2 == (long *)0x0) {
    std::string::string(in_x8,"unknown");
    nop();
  }
  else {
    __s = (char *)(**(code **)(*plVar2 + 0x28))(plVar2,0);
    std::string::string(in_x8,__s);
    nop();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PublicBasicInfo::getDeviceModel() */

void __thiscall PublicBasicInfo::getDeviceModel(PublicBasicInfo *this)

{
  LawnApp::GetDeviceType();
  return;
}


/* PublicBasicInfo::getProfileCreatedTime() */

void __thiscall PublicBasicInfo::getProfileCreatedTime(PublicBasicInfo *this)

{
  LawnApp::GetProfileCreatedTime(gLawnApp);
  FUN_05475d88();
  return;
}


/* PublicBasicInfo::getConnectType() */

void __thiscall PublicBasicInfo::getConnectType(PublicBasicInfo *this)

{
  LawnApp::GetNetworkType(gLawnApp);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PublicBasicInfo::getGPUModel() */

void __thiscall PublicBasicInfo::getGPUModel(PublicBasicInfo *this)

{
  long lVar1;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  __s = (char *)glGetString(0x1f01);
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PublicBasicInfo::getResolutionOfScreen() */

void __thiscall PublicBasicInfo::getResolutionOfScreen(PublicBasicInfo *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  uint local_188;
  uint local_184;
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_188 = 0;
  local_184 = 0;
  Android::Graphics::GetScreenSizeInPoints((int *)&local_188,(int *)&local_184);
  local_188 = local_188 - ((int)local_188 >> 0x1f) & 0xfffffffe;
  local_184 = local_184 - ((int)local_184 >> 0x1f) & 0xfffffffe;
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  uVar2 = FUN_0546065c(auStack_168,local_188);
  uVar2 = FUN_054603b8(uVar2,&DAT_0569f3c0);
  FUN_0546065c(uVar2,local_184);
  FUN_05462824(auStack_178);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PublicBasicInfo::getMemory() */

void __thiscall PublicBasicInfo::getMemory(PublicBasicInfo *this)

{
  long *plVar1;
  char *__s;
  string *in_x8;
  double dVar2;
  double dVar3;
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((Sexy::gSexyAppBase == 0) ||
     (plVar1 = *(long **)(Sexy::gSexyAppBase + 0x60), plVar1 == (long *)0x0)) {
    std::string::string(in_x8,"unknown");
    nop();
  }
  else {
    dVar2 = (double)(**(code **)(*plVar1 + 0x30))(plVar1,2);
    dVar3 = (double)(**(code **)(**(long **)(Sexy::gSexyAppBase + 0x60) + 0x30))
                              (*(long **)(Sexy::gSexyAppBase + 0x60),1);
    DString::DString(aDStack_18);
    DString::format((char *)aDStack_18,(dVar3 + dVar2) * 9.5367431640625e-07,"%7.2fMB");
    __s = (char *)DString::c_str(aDStack_18);
    std::string::string(in_x8,__s);
    nop();
    DString::~DString(aDStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PublicBasicInfo::getStorage() */

void __thiscall PublicBasicInfo::getStorage(PublicBasicInfo *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char *__s;
  string *in_x8;
  string asStack_28 [8];
  string asStack_20 [8];
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Android::Resources::GetUserDataFolder(gLawnApp);
  Android::Resources::GetExternalFilesDirectory(gLawnApp);
  lVar1 = Android::Resources::GetFileSystemBlockCount(asStack_28);
  lVar2 = Android::Resources::GetFileSystemBlockCount(asStack_20);
  lVar3 = Android::Resources::GetFileSystemBlockSize(asStack_28);
  lVar4 = Android::Resources::GetFileSystemBlockSize(asStack_20);
  DString::DString(aDStack_18);
  DString::format((char *)aDStack_18,(double)((float)(lVar3 * lVar1) * _FUN_04fa6448),
                  (double)((float)(lVar4 * lVar2) * _FUN_04fa6448),"phone:%7.2fG,sdcard:%7.2fG");
  __s = (char *)DString::c_str(aDStack_18);
  std::string::string(in_x8,__s);
  nop();
  DString::~DString(aDStack_18);
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PublicBasicInfo::getUserID() */

void PublicBasicInfo::getUserID(void)

{
  long in_x0;
  long lVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_05474184(&DAT_06ba76c0);
  if (lVar1 == 0) {
    Sexy::LazySingleton<IdentifierMgr>::GetInstance();
    Sexy::IAsyncNetworkTask::GetName();
    FUN_05474278(&DAT_06ba76c0,asStack_10);
    std::string::~string(asStack_10);
    if ((*(char *)(in_x0 + 8) != '\0') && (lVar1 = FUN_05474184(&DAT_06ba76c0), lVar1 == 0)) {
      Sexy::LazySingleton<IdentifierMgr>::GetInstance();
      IdentifierMgr::GenerateLocalUUID();
      FUN_05474278(&DAT_06ba76c0,asStack_10);
      std::string::~string(asStack_10);
    }
  }
  FUN_05475d88();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PublicBasicInfo::getUniqueCharacterID() */

void __thiscall PublicBasicInfo::getUniqueCharacterID(PublicBasicInfo *this)

{
  char cVar1;
  hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  *this_00;
  string *psVar2;
  string *in_x8;
  
  this_00 = (hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
             *)Sexy::LazySingleton<AuthMgr>::GetInstance();
  eastl::
  hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  ::get_allocator(this_00);
  FUN_05475d88();
  cVar1 = FUN_0547419c();
  if (cVar1 != '\0') {
    Android::Diag::GetUniqueCharacterID(in_x8);
    psVar2 = (string *)Sexy::LazySingleton<AuthMgr>::GetInstance();
    AuthMgr::SetCharacterId(psVar2);
  }
  return;
}


/* PublicBasicInfo::getDefineID() */

void __thiscall PublicBasicInfo::getDefineID(PublicBasicInfo *this)

{
  DefineIDMgr *this_00;
  
  this_00 = (DefineIDMgr *)Sexy::LazySingleton<DefineIDMgr>::GetInstance();
  DefineIDMgr::GetNewUserDefineID(this_00);
  return;
}


/* PublicBasicInfo::getSignature() */

void __thiscall PublicBasicInfo::getSignature(PublicBasicInfo *this)

{
  DefineIDMgr *this_00;
  
  this_00 = (DefineIDMgr *)Sexy::LazySingleton<DefineIDMgr>::GetInstance();
  DefineIDMgr::GetSignature(this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PublicBasicInfo::getCPU() */

void __thiscall PublicBasicInfo::getCPU(PublicBasicInfo *this)

{
  undefined8 uVar1;
  char cVar2;
  char *pcVar3;
  DString *pDVar4;
  ulong uVar5;
  string *in_x8;
  ulong uVar6;
  DString aDStack_80 [16];
  DString aDStack_70 [16];
  DString aDStack_60 [16];
  DString aDStack_50 [16];
  undefined8 local_40;
  undefined8 local_38;
  DOutputStream aDStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString::DString(aDStack_80,"/proc/cpuinfo");
  DString::DString(aDStack_70);
  DOutputStream::DOutputStream(aDStack_28,false);
  DString::DString(aDStack_60);
  pcVar3 = (char *)DString::c_str(aDStack_80);
  std::string::string((string *)&local_40,pcVar3);
  cVar2 = DInputStream::readFromFullPathFile((DInputStream *)aDStack_28,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  if (cVar2 != '\0') {
    DInputStream::readLine();
    DString::operator=(aDStack_70,(string *)&local_40);
    std::string::~string((string *)&local_40);
    DString::split((char *)aDStack_70,0x569f408);
    uVar6 = 2;
    while( true ) {
      uVar1 = local_40;
      uVar5 = FUN_04fa5924(local_40,local_38);
      if (uVar5 <= uVar6) break;
      pDVar4 = (DString *)FUN_04fa5930(uVar1,uVar6);
      ::operator+(pDVar4," ");
      DString::operator+=(aDStack_60,aDStack_50);
      DString::~DString(aDStack_50);
      uVar6 = uVar6 + 1;
    }
    std::vector<DString,std::allocator<DString>>::~vector
              ((vector<DString,std::allocator<DString>> *)&local_40);
  }
  pcVar3 = (char *)DString::c_str(aDStack_60);
  std::string::string(in_x8,pcVar3);
  nop();
  DString::~DString(aDStack_60);
  DOutputStream::~DOutputStream(aDStack_28);
  DString::~DString(aDStack_70);
  DString::~DString(aDStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PublicBasicInfo::getBasicInfo(DValue&) */

void __thiscall PublicBasicInfo::getBasicInfo(PublicBasicInfo *this,DValue *param_1)

{
  DValue *pDVar1;
  equal_to aeStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
  auStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
  ::unordered_map((ulong)auStack_40,(hash *)0xa,aeStack_58,(allocator *)asStack_50);
  std::string::string(asStack_50,"Device_ID");
  pDVar1 = (DValue *)
           std::
           unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
           ::operator[](auStack_40,asStack_50);
  getPCPID(this);
  ::DValue::operator=(pDVar1,asStack_48);
  std::string::~string(asStack_48);
  std::string::~string(asStack_50);
  nop();
  std::string::string(asStack_50,"User_ID");
  pDVar1 = (DValue *)
           std::
           unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
           ::operator[](auStack_40,asStack_50);
  getUserID();
  ::DValue::operator=(pDVar1,asStack_48);
  std::string::~string(asStack_48);
  std::string::~string(asStack_50);
  nop();
  std::string::string(asStack_50,"Character_ID");
  pDVar1 = (DValue *)
           std::
           unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
           ::operator[](auStack_40,asStack_50);
  getCharacterID(this);
  ::DValue::operator=(pDVar1,asStack_48);
  std::string::~string(asStack_48);
  std::string::~string(asStack_50);
  nop();
  std::string::string(asStack_50,"Client_time");
  pDVar1 = (DValue *)
           std::
           unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
           ::operator[](auStack_40,asStack_50);
  getClientTime(this);
  ::DValue::operator=(pDVar1,asStack_48);
  std::string::~string(asStack_48);
  std::string::~string(asStack_50);
  nop();
  std::string::string(asStack_50,"Version_ID");
  pDVar1 = (DValue *)
           std::
           unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
           ::operator[](auStack_40,asStack_50);
  getVersionID(this);
  ::DValue::operator=(pDVar1,asStack_48);
  std::string::~string(asStack_48);
  std::string::~string(asStack_50);
  nop();
  std::string::string(asStack_50,"Channel_ID");
  pDVar1 = (DValue *)
           std::
           unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
           ::operator[](auStack_40,asStack_50);
  getChannelID(this);
  ::DValue::operator=(pDVar1,asStack_48);
  std::string::~string(asStack_48);
  std::string::~string(asStack_50);
  nop();
  std::string::string(asStack_50,"Session_ID");
  pDVar1 = (DValue *)
           std::
           unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
           ::operator[](auStack_40,asStack_50);
  getSessionID(this);
  ::DValue::operator=(pDVar1,asStack_48);
  std::string::~string(asStack_48);
  std::string::~string(asStack_50);
  nop();
  std::string::string(asStack_50,"Project_Code");
  pDVar1 = (DValue *)
           std::
           unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
           ::operator[](auStack_40,asStack_50);
  getProjectCode(this);
  ::DValue::operator=(pDVar1,asStack_48);
  std::string::~string(asStack_48);
  std::string::~string(asStack_50);
  nop();
  ::DValue::operator=(param_1,(unordered_map *)auStack_40);
  std::
  unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
  ::~unordered_map(auStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PublicBasicInfo::getResult(std::string const&, DValue&) */

void __thiscall PublicBasicInfo::getResult(PublicBasicInfo *this,string *param_1,DValue *param_2)

{
  char cVar1;
  unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
  *this_00;
  DValue *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_04fa5918(*(undefined4 *)(param_2 + 8));
  if (cVar1 != '\0') {
    this_00 = (unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
               *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)param_2);
    std::string::string(asStack_10,"Result");
    this_01 = (DValue *)
              std::
              unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
              ::operator[](this_00,asStack_10);
    ::DValue::operator=(this_01,param_1);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}

