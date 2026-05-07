// Class: PVZVersionNetworkManager


/* PVZVersionNetworkManager::~PVZVersionNetworkManager() */

void __thiscall PVZVersionNetworkManager::~PVZVersionNetworkManager(PVZVersionNetworkManager *this)

{
  *(undefined ***)this = &PTR_ToString_06847660;
  std::string::~string((string *)(this + 0x18));
  return;
}


/* PVZVersionNetworkManager::PVZVersionNetworkManager() */

void __thiscall PVZVersionNetworkManager::PVZVersionNetworkManager(PVZVersionNetworkManager *this)

{
  Sexy::NetworkServiceListener::NetworkServiceListener((NetworkServiceListener *)this);
  *(undefined ***)this = &PTR_ToString_06847660;
  Set8BytesTo0((string *)(this + 0x18));
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  this[0xc] = (PVZVersionNetworkManager)0x1;
  std::string::append((string *)(this + 0x18),"",1);
  return;
}


/* PVZVersionNetworkManager::IsRvsEnable() */

PVZVersionNetworkManager __thiscall
PVZVersionNetworkManager::IsRvsEnable(PVZVersionNetworkManager *this)

{
  return this[0xc];
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZVersionNetworkManager::SaveVersionInfoToLocal(int) */

void PVZVersionNetworkManager::SaveVersionInfoToLocal(int param_1)

{
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat("%d",asStack_20);
  std::string::string(asStack_18,"versionApp");
  FUN_05475d88(asStack_10,asStack_20);
  UserPrefs::SetString(asStack_18,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  nop();
  nop();
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZVersionNetworkManager::CheckVersionApp() */

void __thiscall PVZVersionNetworkManager::CheckVersionApp(PVZVersionNetworkManager *this)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Android::Info::SysGetProductVersionCode();
  Sexy::StrFormat("%d",asStack_10,uVar2 & 0xffffffff);
  iVar1 = AssetsManagerManifest::getVersionToInt(asStack_10);
  std::string::~string(asStack_10);
  if ((*(int *)(this + 0x10) <= iVar1) || (uVar3 = 2, *(int *)(this + 0x10) == -1)) {
    uVar3 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZVersionNetworkManager::LoadLocalVersionInfo() */

void PVZVersionNetworkManager::LoadLocalVersionInfo(void)

{
  bool bVar1;
  int iVar2;
  char *__nptr;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"versionApp");
  std::string::string(asStack_10,"");
  UserPrefs::GetString((UserPrefs *)asStack_20,asStack_18,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  bVar1 = std::operator==(asStack_20,"");
  if (bVar1) {
    iVar2 = -1;
  }
  else {
    __nptr = (char *)FUN_0547429c(asStack_20);
    iVar2 = atoi(__nptr);
  }
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZVersionNetworkManager::ComparePVZVersion(PVZVersion const&, PVZVersion const&) */

void __thiscall
PVZVersionNetworkManager::ComparePVZVersion
          (PVZVersionNetworkManager *this,PVZVersion *param_1,PVZVersion *param_2)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  FileVersionEntry *pFVar6;
  ulong uVar7;
  string *psVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_48;
  FileVersionEntry aFStack_38 [8];
  string asStack_30 [8];
  int local_28;
  undefined4 local_24;
  FileVersionEntry aFStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<FileVersionEntry,std::allocator<FileVersionEntry>>::vector
            ((vector<FileVersionEntry,std::allocator<FileVersionEntry>> *)&local_68,
             (vector *)(param_2 + 0x58));
  lVar5 = FUN_043f1808(local_68,local_60);
  if (lVar5 == 0) {
    std::vector<FileVersionEntry,std::allocator<FileVersionEntry>>::~vector
              ((vector<FileVersionEntry,std::allocator<FileVersionEntry>> *)&local_68);
  }
  else {
    uVar11 = 0;
    iVar4 = Sexy::AndroidAppDriver::GetProductVersionCode();
    std::vector<FileVersionEntry,std::allocator<FileVersionEntry>>::vector
              ((vector<FileVersionEntry,std::allocator<FileVersionEntry>> *)&local_50,
               (vector *)(param_1 + 0x58));
    uVar9 = local_68;
    lVar5 = FUN_043f1808(local_68,local_60);
    if (lVar5 != 0) {
      do {
        uVar10 = 0;
        pFVar6 = (FileVersionEntry *)FUN_043f181c(uVar9,uVar11);
        bVar3 = false;
        FileVersionEntry::FileVersionEntry(aFStack_38,pFVar6);
        FileVersionEntry::FileVersionEntry(aFStack_20);
        uVar9 = local_50;
        uVar7 = FUN_043f1808(local_50,local_48);
        bVar1 = false;
        if (uVar7 != 0) {
          do {
            bVar3 = bVar1;
            psVar8 = (string *)FUN_043f181c(uVar9,uVar10);
            cVar2 = std::operator==((string *)aFStack_38,psVar8);
            if (cVar2 != '\0') {
              bVar3 = true;
              FileVersionEntry::operator=(aFStack_20,(FileVersionEntry *)psVar8);
              uVar9 = local_50;
              uVar7 = FUN_043f1808(local_50,local_48);
            }
            uVar10 = uVar10 + 1;
            bVar1 = bVar3;
          } while (uVar10 < uVar7);
        }
        if (bVar3) {
          if (((local_28 <= iVar4) && (bVar3 = std::operator!=(asStack_18,asStack_30), bVar3)) &&
             (bVar3 = std::operator==((string *)aFStack_38,"pvz2_ss.txt"), !bVar3)) {
LAB_043f2120:
            PVZCachedNetworkTableManager::Watch
                      ((PVZCachedNetworkTableManager *)(gLawnApp + 0x29a8),aFStack_38,local_24,bVar3
                       ,1);
          }
        }
        else if ((local_28 <= iVar4) &&
                (bVar3 = std::operator==((string *)aFStack_38,"pvz2_ss.txt"), !bVar3)) {
          bVar3 = false;
          goto LAB_043f2120;
        }
        uVar11 = uVar11 + 1;
        Sexy::PACommand::~PACommand((PACommand *)aFStack_20);
        Sexy::PACommand::~PACommand((PACommand *)aFStack_38);
        uVar9 = local_68;
        uVar7 = FUN_043f1808(local_68,local_60);
      } while (uVar11 < uVar7);
    }
    LawnApp::CheckForNetworkContentChanges(gLawnApp);
    std::vector<FileVersionEntry,std::allocator<FileVersionEntry>>::~vector
              ((vector<FileVersionEntry,std::allocator<FileVersionEntry>> *)&local_50);
    std::vector<FileVersionEntry,std::allocator<FileVersionEntry>>::~vector
              ((vector<FileVersionEntry,std::allocator<FileVersionEntry>> *)&local_68);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZVersionNetworkManager::OnRequestFinished(std::string) */

void __thiscall
PVZVersionNetworkManager::OnRequestFinished(PVZVersionNetworkManager *this,string *param_2)

{
  bool bVar1;
  byte bVar2;
  undefined4 uVar3;
  Version *this_00;
  PVZDB *pPVar4;
  undefined8 uVar5;
  long lVar6;
  Version *this_01;
  int extraout_w1;
  string *psVar7;
  string asStack_210 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_208 [8];
  RtId aRStack_200 [8];
  Iterator aIStack_1f8 [32];
  PVZVersion aPStack_1d8 [112];
  undefined1 auStack_168 [120];
  string asStack_f0 [28];
  PVZVersionNetworkManager local_d4;
  string asStack_d0 [8];
  string asStack_c8 [8];
  undefined1 auStack_c0 [184];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,"");
  if (bVar1) {
    MessageRouter::Post((_func_void *)gMessageRouter);
    uVar3 = LoadLocalVersionInfo();
    *(undefined4 *)(this + 0x10) = uVar3;
  }
  else {
    GetFolder(asStack_f0,3);
    std::operator+(asStack_f0,"pvz2_v.txt");
    std::string::~string(asStack_f0);
    Version::LoadedRSB(this_00);
    pPVar4 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    bVar2 = PVZDB::LoadPackageForTableFromJson(pPVar4,2,param_2,0);
    if (bVar2 == 0) {
      PVZVersion::~PVZVersion(aPStack_1d8);
      std::string::~string(asStack_210);
    }
    else {
      Version::LoadedRSB((Version *)(ulong)bVar2);
      Sexy::SexyAppBase::EraseFile(Sexy::gSexyAppBase);
      uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
      PVZDB::GetObjectIteratorForTable(aIStack_1f8,uVar5,2);
      while( true ) {
        bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_1f8);
        if (!bVar1) break;
        Sexy::RtDbTable::Iterator::operator*(aIStack_1f8);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_208,(RtWeakPtrBase *)aRStack_200);
        Sexy::RtId::~RtId(aRStack_200);
        bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_208);
        if (bVar1) {
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_208);
          thunk_FUN_05475e00(lVar6 + 0x70,auStack_168);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_208);
        Sexy::RtDbTable::Iterator::operator++(aIStack_1f8,extraout_w1);
      }
      psVar7 = asStack_c8;
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_1f8);
      pPVar4 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
      PVZDB::SavePackageForTableToFile(pPVar4,2,asStack_210,0,1);
      this_01 = (Version *)PVZVersion::~PVZVersion((PVZVersion *)asStack_f0);
      Version::LoadedRSB(this_01);
      this[0xc] = local_d4;
      bVar1 = std::operator!=(psVar7,"");
      if (!bVar1) {
        psVar7 = asStack_d0;
      }
      FUN_05475d88(aIStack_1f8,psVar7);
      uVar3 = AssetsManagerManifest::getVersionToInt(aIStack_1f8);
      *(undefined4 *)(this + 0x10) = uVar3;
      std::string::~string((string *)aIStack_1f8);
      thunk_FUN_05475e00(this + 0x18,auStack_c0);
      ComparePVZVersion(this,aPStack_1d8,(PVZVersion *)asStack_f0);
      if (*(int *)(this + 0x10) != 0) {
        SaveVersionInfoToLocal((int)this);
      }
      MessageRouter::Post((_func_void *)gMessageRouter);
      PVZVersion::~PVZVersion((PVZVersion *)asStack_f0);
      PVZVersion::~PVZVersion(aPStack_1d8);
      std::string::~string(asStack_210);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZVersionNetworkManager::ServiceRequestCompleted(Sexy::StructuredData const*, void const*) */

void __thiscall
PVZVersionNetworkManager::ServiceRequestCompleted
          (PVZVersionNetworkManager *this,StructuredData *param_1,void *param_2)

{
  long lVar1;
  char *__s;
  size_t sVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == this) {
    lVar1 = Sexy::StructuredData::IntegerForPath(param_1,"$.statusCode",-1);
    if ((lVar1 == 200) || (lVar1 == -1)) {
      Set8BytesTo0(asStack_18);
      __s = (char *)Sexy::StructuredData::StringForPath(param_1,"$.response","");
      sVar2 = strlen(__s);
      DecryptString(__s,asStack_18,(long)(int)sVar2);
      FUN_05475d88(asStack_10,asStack_18);
      OnRequestFinished(param_2,asStack_10);
      std::string::~string(asStack_10);
      std::string::~string(asStack_18);
    }
    else {
      (**(code **)(*(long *)param_2 + 0x38))(param_2,param_1,param_2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZVersionNetworkManager::CheckVersionFiles() */

void PVZVersionNetworkManager::CheckVersionFiles(void)

{
  int iVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  Version *this;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  ulong uVar5;
  FileVersionEntry *pFVar6;
  ObjectTypeDirectory<PlantType> *pOVar7;
  PVZDB *pPVar8;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  PurchaseBroker *this_03;
  ObjectTypeDirectory<ZombieType> *pOVar9;
  ObjectTypeDirectory<PresentType> *pOVar10;
  undefined8 uVar11;
  RtId *pRVar12;
  RtObject *this_04;
  GamePropertySheet *pGVar13;
  ulong uVar14;
  string asStack_120 [8];
  string asStack_118 [8];
  string asStack_110 [8];
  PACommand aPStack_108 [20];
  int local_f4;
  string asStack_f0 [88];
  undefined8 local_98;
  undefined8 local_90;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetFolder(asStack_f0,3);
  std::operator+(asStack_f0,"pvz2_v.txt");
  std::string::~string(asStack_f0);
  bVar3 = Sexy::SexyAppBase::FileExists(gLawnApp,asStack_120);
  this = (Version *)(ulong)bVar3;
  if (bVar3 != 0) {
    if (*(string *)(gLawnApp + 0x929) == (string)0x0) {
      pPVar8 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
      this = (Version *)PVZDB::LoadPackageForTableFromFile(pPVar8,2,asStack_120,0,1);
    }
    else {
      this = (Version *)Sexy::SexyAppBase::EraseFile((string *)gLawnApp);
    }
  }
  uVar14 = 0;
  Version::LoadedRSB(this);
  do {
    uVar11 = local_98;
    uVar5 = FUN_043f1808(local_98,local_90);
    if (uVar5 <= uVar14) {
      uVar11 = Sexy::LazySingleton<PVZDB>::GetInstance();
      Sexy::RtName::RtName((RtName *)aPStack_108,L"DefaultGameProps");
      PVZDB::GetIdByAlias(asStack_110,uVar11,5,aPStack_108);
      Sexy::RtName::~RtName((RtName *)aPStack_108);
      pRVar12 = (RtId *)Sexy::RtDb::GetDb();
      this_04 = (RtObject *)Sexy::RtDb::GetObjectForId(pRVar12);
      pGVar13 = Sexy::RtObject::Cast<GamePropertySheet>(this_04);
      pOVar7 = (ObjectTypeDirectory<PlantType> *)
               Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      ObjectTypeDirectory<PlantType>::SortTypes(pOVar7,(vector *)(pGVar13 + 0x10));
      *(string *)(gLawnApp + 0x929) = (string)0x0;
      Sexy::RtId::~RtId((RtId *)asStack_110);
      PVZVersion::~PVZVersion((PVZVersion *)asStack_f0);
      std::string::~string(asStack_120);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pFVar6 = (FileVersionEntry *)FUN_043f181c(uVar11,uVar14);
    FileVersionEntry::FileVersionEntry((FileVersionEntry *)aPStack_108,pFVar6);
    GetFolder(asStack_110,3);
    std::operator+(asStack_110,(string *)aPStack_108);
    std::string::~string(asStack_110);
    cVar4 = Sexy::SexyAppBase::FileExists(gLawnApp,asStack_118);
    if (cVar4 == '\0') {
LAB_043f2664:
      std::string::~string(asStack_118);
      bVar2 = local_f4 == 9;
      if (!bVar2) goto LAB_043f2678;
LAB_043f26fc:
      iVar1 = local_f4;
      pOVar9 = (ObjectTypeDirectory<ZombieType> *)
               Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
      ObjectTypeDirectory<ZombieType>::Clear(pOVar9);
      pOVar9 = (ObjectTypeDirectory<ZombieType> *)
               Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
      ObjectTypeDirectory<ZombieType>::Init(pOVar9,iVar1);
    }
    else {
      if (*(string *)(gLawnApp + 0x929) != (string)0x0) {
        Sexy::SexyAppBase::EraseFile((string *)gLawnApp);
        goto LAB_043f2664;
      }
      bVar2 = std::operator!=((string *)aPStack_108,"pvz2_ss.txt");
      if (!bVar2) goto LAB_043f2664;
      pPVar8 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
      PVZDB::LoadPackageForTableFromFile(pPVar8,local_f4,asStack_118,0,1);
      if (local_f4 == 0x1a) {
        Magento::InitMagentoDataSign();
        goto LAB_043f2664;
      }
      if (local_f4 != 0x3c) goto LAB_043f2664;
      std::string::~string(asStack_118);
      this_02 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_03 = (PurchaseBroker *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_rightmost(this_02);
      PurchaseBroker::ResetPurchaseAdapter(this_03);
      bVar2 = false;
      if (local_f4 == 9) goto LAB_043f26fc;
LAB_043f2678:
      if (bVar2 || local_f4 < 9) {
        if (local_f4 == 6) {
          pOVar7 = (ObjectTypeDirectory<PlantType> *)
                   Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
          ObjectTypeDirectory<PlantType>::Clear(pOVar7);
          pOVar7 = (ObjectTypeDirectory<PlantType> *)
                   Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
          ObjectTypeDirectory<PlantType>::Init(pOVar7,6);
        }
      }
      else if (local_f4 == 0x11) {
        pOVar10 = (ObjectTypeDirectory<PresentType> *)
                  Sexy::LazySingleton<ObjectTypeDirectory<PresentType>>::GetInstancePtr();
        ObjectTypeDirectory<PresentType>::Clear(pOVar10);
        pOVar10 = (ObjectTypeDirectory<PresentType> *)
                  Sexy::LazySingleton<ObjectTypeDirectory<PresentType>>::GetInstancePtr();
        ObjectTypeDirectory<PresentType>::Init(pOVar10,0x11);
      }
      else if (local_f4 == 0x3e) {
        this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
        PlayerInfo::forceRefreshYetiCount(this_01);
      }
    }
    uVar14 = uVar14 + 1;
    Sexy::PACommand::~PACommand(aPStack_108);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZVersionNetworkManager::TryRequest() */

void __thiscall PVZVersionNetworkManager::TryRequest(PVZVersionNetworkManager *this)

{
  bool bVar1;
  PVZDB *pPVar2;
  RtName *this_00;
  long lVar3;
  byte *pbVar4;
  Util *this_01;
  NetworkServiceManager *this_02;
  string asStack_98 [8];
  string asStack_90 [8];
  RtId aRStack_88 [8];
  RtName aRStack_80 [120];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 8) < 0) {
    std::string::string((string *)aRStack_80,"");
    OnRequestFinished(this,(string *)aRStack_80);
    std::string::~string((string *)aRStack_80);
    nop();
  }
  else {
    pPVar2 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    this_00 = (RtName *)PVZDB::GetTable(pPVar2,0x3b);
    Sexy::RtName::RtName(aRStack_80,L"UpdateServerConfig");
    Sexy::RtDbTable::GetIdForAlias(this_00);
    Sexy::RtDbTable::GetObjectForId((RtDbTable *)this_00,aRStack_88);
    nop();
    Sexy::RtId::~RtId(aRStack_88);
    Sexy::RtName::~RtName(aRStack_80);
    Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
    lVar3 = FUN_05474184(asStack_98);
    pbVar4 = (byte *)FUN_05474ee8(asStack_98,lVar3 + -1);
    this_01 = (Util *)(ulong)*pbVar4;
    if (*pbVar4 != 0x2f) {
      this_01 = (Util *)FUN_05475ad8(asStack_98,&DAT_055a4690);
    }
    Android::Util::GetPackageName(this_01);
    bVar1 = std::operator!=(asStack_90,"");
    if (bVar1) {
      std::operator+(asStack_90,"/");
      thunk_FUN_054757c0(asStack_98,aRStack_80);
      std::string::~string((string *)aRStack_80);
    }
    Sexy::StructuredData::StructuredData((StructuredData *)aRStack_80);
    Sexy::StructuredData::BeginObject((StructuredData *)aRStack_80);
    std::operator+(asStack_98,"pvz2_v.txt");
    Sexy::StructuredData::AddString((StructuredData *)aRStack_80,"url",(string *)aRStack_88);
    std::string::~string((string *)aRStack_88);
    Sexy::StructuredData::AddInteger((StructuredData *)aRStack_80,"timeout",10);
    Sexy::StructuredData::EndObject((StructuredData *)aRStack_80);
    this_02 = (NetworkServiceManager *)Sexy::NetworkServiceManager::DefaultNetworkServiceManager();
    Sexy::NetworkServiceManager::MakeRequest
              (this_02,(StructuredData *)aRStack_80,(NetworkServiceListener *)this,this);
    *(int *)(this + 8) = *(int *)(this + 8) + -1;
    Sexy::StructuredData::~StructuredData((StructuredData *)aRStack_80);
    std::string::~string(asStack_90);
    std::string::~string(asStack_98);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZVersionNetworkManager::CheckForUpdates(int) */

void __thiscall
PVZVersionNetworkManager::CheckForUpdates(PVZVersionNetworkManager *this,int param_1)

{
  *(int *)(this + 8) = param_1;
  TryRequest(this);
  return;
}


/* PVZVersionNetworkManager::ServiceRequestCompleted(Sexy::Buffer const*, void const*) */

void __thiscall
PVZVersionNetworkManager::ServiceRequestCompleted
          (PVZVersionNetworkManager *this,Buffer *param_1,void *param_2)

{
  if (param_2 != this) {
    return;
  }
  TryRequest(this);
  return;
}

