// Class: ProfileMgr


/* ProfileMgr::onDialogButtonPressed() */

void ProfileMgr::onDialogButtonPressed(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  return;
}


/* ProfileMgr::Init() */

void __thiscall ProfileMgr::Init(ProfileMgr *this)

{
  PlayerIdentityService::Init(*(PlayerIdentityService **)(this + 0x18));
  return;
}


/* ProfileMgr::SyncProfileFromServer() */

void ProfileMgr::SyncProfileFromServer(void)

{
  char cVar1;
  NetworkMgr *pNVar2;
  long *plVar3;
  androidNetworkMsgProcess *this;
  
  cVar1 = LawnApp::CheckProfileOpen();
  if (cVar1 != '\0') {
    pNVar2 = (NetworkMgr *)NetworkMgr::Instance();
    this = (androidNetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(pNVar2);
    androidNetworkMsgProcess::RequestDownloadPlayerData(this);
    return;
  }
  pNVar2 = (NetworkMgr *)NetworkMgr::Instance();
  plVar3 = (long *)NetworkMgr::GetNewNetWorkProcess(pNVar2);
  if (*(code **)(*plVar3 + 0x2e0) == INetworkMsgProcess::ICloudRequestGetProfile) {
    INetworkMsgProcess::ICloudRequestGetProfile();
    return;
  }
  (**(code **)(*plVar3 + 0x2e0))();
  return;
}


/* ProfileMgr::hasPopulateProfiles() */

ProfileMgr __thiscall ProfileMgr::hasPopulateProfiles(ProfileMgr *this)

{
  return this[0x12a];
}


/* ProfileMgr::IsSaveDataExist() */

void __thiscall ProfileMgr::IsSaveDataExist(ProfileMgr *this)

{
  long *plVar1;
  
  plVar1 = (long *)DataPersistorFactory::GetOfflinePersistor(*(DataPersistorFactory **)(this + 8));
  (**(code **)(*plVar1 + 0x28))();
  return;
}


/* ProfileMgr::GetReadOnlyMode() */

ProfileMgr __thiscall ProfileMgr::GetReadOnlyMode(ProfileMgr *this)

{
  return this[0x10d];
}


/* ProfileMgr::SetLockdownForProfileConversion() */

void __thiscall ProfileMgr::SetLockdownForProfileConversion(ProfileMgr *this)

{
  this[0x128] = (ProfileMgr)0x1;
  return;
}


/* ProfileMgr::HasValidProfile() const */

bool __thiscall ProfileMgr::HasValidProfile(ProfileMgr *this)

{
  return *(int *)(this + 0x100) != 0;
}


/* ProfileMgr::GetAccountName() */

void ProfileMgr::GetAccountName(void)

{
  long in_x0;
  
  (**(code **)(**(long **)(in_x0 + 0x18) + 0x58))(*(long **)(in_x0 + 0x18));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileMgr::ChangeHackDataForAug05(PlayerInfo*) */

void __thiscall ProfileMgr::ChangeHackDataForAug05(ProfileMgr *this,PlayerInfo *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Image *this_00;
  FastCurve *this_01;
  LogServer *pLVar5;
  int iVar6;
  undefined8 uVar7;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Image *)LawnApp::GetRechargeCheckServer(gLawnApp);
  iVar2 = ImageLib::Image::GetWidth(this_00);
  this_01 = (FastCurve *)LawnApp::GetRechargeCheckServer(gLawnApp);
  cVar1 = Sexy::FastCurve::HasBeenTriggered(this_01);
  if ((iVar2 < 0) || (cVar1 == '\0')) {
    if ((iVar2 != -1) || (iVar2 = PlayerInfo::GetNumGems(param_1,false), iVar2 < 5000000)) {
      uVar7 = 0;
      goto LAB_04328dac;
    }
    pLVar5 = (LogServer *)LogServer::Instance();
    GetAccountName();
    iVar2 = PlayerInfo::GetRechargeGems(param_1);
    iVar3 = NewPVPMgr::GetSeasonEndTime((NewPVPMgr *)param_1);
    iVar4 = PlayerInfo::GetNumCoins(param_1,false);
    iVar6 = 0x6c;
  }
  else {
    pLVar5 = (LogServer *)LogServer::Instance();
    GetAccountName();
    iVar2 = PlayerInfo::GetRechargeGems(param_1);
    iVar3 = NewPVPMgr::GetSeasonEndTime((NewPVPMgr *)param_1);
    iVar4 = PlayerInfo::GetNumCoins(param_1,false);
    iVar6 = 0x66;
  }
  uVar7 = 1;
  LogServer::SendFakeInfo(pLVar5,asStack_10,iVar6,iVar2,iVar3,iVar4);
  std::string::~string(asStack_10);
  PlayerInfo::SetRechargeGems(param_1,0);
  PlayerInfo::SetRecharge(param_1,false);
  iVar2 = PlayerInfo::GetNumCoins(param_1,false);
  if (140000 < iVar2) {
    pLVar5 = (LogServer *)LogServer::Instance();
    GetAccountName();
    iVar2 = PlayerInfo::GetRechargeGems(param_1);
    iVar3 = NewPVPMgr::GetSeasonEndTime((NewPVPMgr *)param_1);
    iVar4 = PlayerInfo::GetNumCoins(param_1,false);
    LogServer::SendFakeInfo(pLVar5,asStack_10,0x67,iVar2,iVar3,iVar4);
    std::string::~string(asStack_10);
    PlayerInfo::SetCoins(param_1,140000);
  }
LAB_04328dac:
  iVar2 = PlayerInfo::GetNumCoins(param_1,false);
  if (9999999 < iVar2) {
    pLVar5 = (LogServer *)LogServer::Instance();
    uVar7 = 1;
    GetAccountName();
    iVar2 = PlayerInfo::GetRechargeGems(param_1);
    iVar3 = NewPVPMgr::GetSeasonEndTime((NewPVPMgr *)param_1);
    iVar4 = PlayerInfo::GetNumCoins(param_1,false);
    LogServer::SendFakeInfo(pLVar5,asStack_10,0x68,iVar2,iVar3,iVar4);
    std::string::~string(asStack_10);
    PlayerInfo::SetCoins(param_1,140000);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileMgr::ProfileMgr() */

void __thiscall ProfileMgr::ProfileMgr(ProfileMgr *this)

{
  undefined *this_00;
  Projectile *this_01;
  undefined8 uVar1;
  hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  *this_02;
  long lVar2;
  undefined4 uVar3;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<ProfileMgr>::LazySingleton((LazySingleton<ProfileMgr> *)this);
  *(undefined ***)this = &PTR__ProfileMgr_06833ab0;
  this_01 = (Projectile *)Sexy::LazySingleton<DataPersistorObjectsFactory>::GetInstance();
  uVar1 = Projectile::GetPreviousPosition(this_01);
  *(undefined8 *)(this + 8) = uVar1;
  this_02 = (hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
             *)Sexy::LazySingleton<DataPersistorObjectsFactory>::GetInstance();
  uVar1 = eastl::
          hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
          ::get_allocator(this_02);
  *(undefined8 *)(this + 0x18) = uVar1;
  PurchaseBroker::PurchaseBroker((PurchaseBroker *)(this + 0x20));
  *(undefined4 *)(this + 0x100) = 0;
  lVar2 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
  uVar3 = FUN_04326650(*(undefined4 *)(lVar2 + 0x18));
  *(undefined4 *)(this + 0x104) = uVar3;
  lVar2 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
  uVar3 = FUN_04326650(*(undefined4 *)(lVar2 + 0x18));
  this[0x10c] = (ProfileMgr)0x0;
  this[0x10d] = (ProfileMgr)0x0;
  this[0x10e] = (ProfileMgr)0x0;
  *(undefined4 *)(this + 0x108) = uVar3;
  FUN_05478178(this + 0x110,&DAT_056f11a8,aCStack_50);
  nop();
  *(undefined4 *)(this + 0x118) = 0xffffffff;
  uVar1 = Throttles::GetInstance();
  this[0x128] = (ProfileMgr)0x0;
  this[0x12d] = (ProfileMgr)0x1;
  *(undefined8 *)(this + 0x120) = uVar1;
  this[0x129] = (ProfileMgr)0x0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x134) = 0x42f00000;
  this[0x12a] = (ProfileMgr)0x0;
  this[299] = (ProfileMgr)0x0;
  this[300] = (ProfileMgr)0x0;
  this[0x12e] = (ProfileMgr)0x0;
  this[0x12f] = (ProfileMgr)0x0;
  this[0x130] = (ProfileMgr)0x0;
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,forceReload);
  Sexy::Delegate0::Delegate0<ProfileMgr,void(ProfileMgr::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::ForceReloadData,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileMgr::LoginiCloudServer() */

void ProfileMgr::LoginiCloudServer(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  DefineIDMgr *this;
  TextureInfo *pTVar4;
  NetworkMgr *pNVar5;
  long *plVar6;
  long lVar7;
  EASquaredImpl *this_00;
  IdentifierMgr *pIVar8;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = LawnApp::IsAndroidSDKInitEnd(gLawnApp);
  if (iVar3 == 0) goto LAB_043293f8;
  iVar3 = LawnApp::GetAndroidSDKInitStatus(gLawnApp);
  if (iVar3 == 0) {
    PurchaseBroker::GetUniqueID();
    bVar1 = std::operator!=(asStack_10,"");
    std::string::~string(asStack_10);
    if (!bVar1) goto LAB_043293f8;
  }
  this = (DefineIDMgr *)Sexy::LazySingleton<DefineIDMgr>::GetInstance();
  DefineIDMgr::GetUserDefineID(this);
  pTVar4 = (TextureInfo *)Sexy::LazySingleton<IdentifierMgr>::GetInstance();
  cVar2 = EA::Text::GlyphCache_Memory::EndUpdate(pTVar4);
  if (cVar2 == '\0') {
LAB_0432947c:
    pNVar5 = (NetworkMgr *)NetworkMgr::Instance();
    plVar6 = (long *)NetworkMgr::GetNewNetWorkProcess(pNVar5);
    if (*(code **)(*plVar6 + 0x50) != INetworkMsgProcess::ICloudRequstLogin) {
      (**(code **)(*plVar6 + 0x50))(plVar6,asStack_20);
    }
  }
  else {
    Sexy::LazySingleton<IdentifierMgr>::GetInstance();
    Sexy::IAsyncNetworkTask::GetName();
    lVar7 = FUN_05474184(asStack_18);
    if (lVar7 == 0) {
      std::string::~string(asStack_18);
      goto LAB_0432947c;
    }
    Sexy::LazySingleton<IdentifierMgr>::GetInstance();
    Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
    lVar7 = FUN_05474184(asStack_10);
    if (lVar7 == 0) {
LAB_043294f4:
      std::string::~string(asStack_10);
      std::string::~string(asStack_18);
      goto LAB_0432947c;
    }
    this_00 = (EASquaredImpl *)Sexy::LazySingleton<IdentifierMgr>::GetInstance();
    cVar2 = EASquaredImpl::IsEnabledForUser(this_00);
    if (cVar2 == '\0') goto LAB_043294f4;
    pIVar8 = (IdentifierMgr *)Sexy::LazySingleton<IdentifierMgr>::GetInstance();
    cVar2 = IdentifierMgr::NeedUUIDLogin(pIVar8);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    if (cVar2 == '\0') goto LAB_0432947c;
    pIVar8 = (IdentifierMgr *)Sexy::LazySingleton<IdentifierMgr>::GetInstance();
    cVar2 = IdentifierMgr::IsRequestFinished(pIVar8);
    if (cVar2 == '\0') {
      pIVar8 = (IdentifierMgr *)Sexy::LazySingleton<IdentifierMgr>::GetInstance();
      cVar2 = IdentifierMgr::IsRequestTimeOut(pIVar8);
      if (cVar2 == '\0') goto LAB_0432947c;
    }
    pNVar5 = (NetworkMgr *)NetworkMgr::Instance();
    plVar6 = (long *)NetworkMgr::GetNewNetWorkProcess(pNVar5);
    if (*(code **)(*plVar6 + 0x3c0) != INetworkMsgProcess::RequestUUIDLogin) {
      (**(code **)(*plVar6 + 0x3c0))();
    }
  }
  std::string::~string(asStack_20);
LAB_043293f8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ProfileMgr::RequestSave() */

void __thiscall ProfileMgr::RequestSave(ProfileMgr *this)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = Sexy::LazySingleton<AuthMgr>::GetInstance();
  cVar1 = FUN_04326670(*(undefined1 *)(lVar2 + 0x1d));
  if ((((cVar1 == '\0') && (this[0x128] == (ProfileMgr)0x0)) &&
      (this[0x10c] = (ProfileMgr)0x1, this[0x10d] == (ProfileMgr)0x0)) &&
     (Test::gTestFrameworkIsRunning == '\0')) {
    plVar3 = (long *)DataPersistorFactory::GetOfflinePersistor(*(DataPersistorFactory **)(this + 8))
    ;
    (**(code **)(*plVar3 + 0x20))();
  }
  return;
}


/* ProfileMgr::RemoveLockdownForProfileConversion() */

void __thiscall ProfileMgr::RemoveLockdownForProfileConversion(ProfileMgr *this)

{
  this[0x128] = (ProfileMgr)0x0;
  RequestSave(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileMgr::needCheckFakeFromServer() */

void ProfileMgr::needCheckFakeFromServer(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  PlayerInfo *pPVar6;
  long lVar7;
  PlayerInfo *this;
  int *piVar8;
  int extraout_w1;
  float fVar9;
  int local_3c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  undefined4 local_30 [2];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar5,0x37);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
LAB_0432d7c4:
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(bVar1);
      }
      return;
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)local_30);
    Sexy::RtId::~RtId((RtId *)local_30);
    pPVar6 = (PlayerInfo *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
    iVar3 = PlayerInfo::GetVersion(pPVar6);
    if (iVar3 < 10) {
      pPVar6 = (PlayerInfo *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      PlayerInfo::UpdateLawnKeyField(pPVar6);
      pPVar6 = (PlayerInfo *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      PlayerInfo::ResetALLSign(pPVar6);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      iVar3 = PlayerInfo::GetUnlockBonusGemCount();
      local_3c = iVar3;
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      iVar4 = FUN_04326664(*(undefined4 *)(lVar7 + 0x600));
      lVar7 = DraperHelpers::GetDraperSaveData(iVar4);
      if (lVar7 == 0) {
        pPVar6 = (PlayerInfo *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
        this = (PlayerInfo *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
        local_30[0] = PlayerInfo::GetNumGems(this,false);
        piVar8 = eastl::min_alt<int>(&local_3c,(int *)local_30);
        PlayerInfo::SetGiveGems(pPVar6,*piVar8);
      }
      else {
        fVar9 = (float)FUN_0432666c(*(undefined4 *)(lVar7 + 0x2c));
        pPVar6 = (PlayerInfo *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
        iVar4 = PlayerInfo::GetUnlockPlantGemAndCoinCount(pPVar6);
        iVar4 = (int)(fVar9 - (float)iVar4);
        if (iVar4 < 0) {
          local_3c = -1;
          iVar3 = -1;
        }
        else {
          iVar3 = iVar3 + iVar4 * 0xc;
          local_3c = iVar3;
          pPVar6 = (PlayerInfo *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
          PlayerInfo::SetRecharge(pPVar6,0 < iVar4);
        }
        pPVar6 = (PlayerInfo *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
        PlayerInfo::SetGiveGems(pPVar6,0);
      }
      pPVar6 = (PlayerInfo *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      iVar4 = PlayerInfo::GetNumGems(pPVar6,false);
      pPVar6 = (PlayerInfo *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      iVar2 = PlayerInfo::GetNumCoins(pPVar6,false);
      if (((iVar3 < iVar4) && (iVar4 < 5000000)) || (iVar2 - 0x7a121U < 9499999)) {
        bVar1 = true;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
        goto LAB_0432d7c4;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileMgr::replaceUUID() */

void ProfileMgr::replaceUUID(void)

{
  bool bVar1;
  char cVar2;
  LogServer *this;
  undefined8 uVar3;
  PlayerInfo *this_00;
  int extraout_w1;
  string asStack_48 [8];
  string asStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetAccountName();
  PlayerIdentityService::CreateNewId();
  this = (LogServer *)LogServer::Instance();
  LogServer::SendFakderNewUUI(this,asStack_48,asStack_40);
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x37);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_38);
    if (cVar2 != '\0') {
      this_00 = (PlayerInfo *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      PlayerInfo::ResetALLSign(this_00);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  std::string::~string(asStack_40);
  std::string::~string(asStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileMgr::GetCurrentProfile() */

void __thiscall ProfileMgr::GetCurrentProfile(ProfileMgr *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ResourceInfo *pRVar7;
  int extraout_w1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  string asStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x100) == 0) {
    std::string::string(asStack_28,
                        "[ERROR] ProfileMgr::GetCurrentProfile using static Default profile!");
    nop();
    std::string::~string(asStack_28);
    nop();
    if (((DAT_06afbb60 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_06afbb60), iVar4 != 0)) {
      PlayerInfo::PlayerInfo((PlayerInfo *)&DAT_06afa1e8);
      __cxa_guard_release(&DAT_06afbb60);
      __cxa_atexit(PlayerInfo::~PlayerInfo,&DAT_06afa1e8,&DAT_06a88000);
    }
    pRVar7 = (ResourceInfo *)&DAT_06afa1e8;
    uVar3 = FUN_04326664(DAT_06afa7e8);
    *(undefined4 *)(this + 0x100) = uVar3;
  }
  else {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_40);
    uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable((Iterator *)asStack_28,uVar5,0x37);
    while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)asStack_28), bVar1)
    {
      Sexy::RtDbTable::Iterator::operator*((Iterator *)asStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
      Sexy::RtId::~RtId(aRStack_30);
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_40);
      if (cVar2 != '\0') {
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
        iVar4 = FUN_04326664(*(undefined4 *)(lVar6 + 0x600));
        if (iVar4 != *(int *)(this + 0x100)) goto LAB_0432da44;
LAB_0432dabc:
        pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_38);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
        Sexy::RtDbTable::Iterator::~Iterator((Iterator *)asStack_28);
        goto LAB_0432daec;
      }
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)a_Stack_40,(RtWeakPtr *)aRStack_38);
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      iVar4 = FUN_04326664(*(undefined4 *)(lVar6 + 0x600));
      if (iVar4 == *(int *)(this + 0x100)) goto LAB_0432dabc;
LAB_0432da44:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      Sexy::RtDbTable::Iterator::operator++((Iterator *)asStack_28,extraout_w1);
    }
    Sexy::RtDbTable::Iterator::~Iterator((Iterator *)asStack_28);
    pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)a_Stack_40);
LAB_0432daec:
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pRVar7);
}


/* ProfileMgr::Save(bool, bool) */

void __thiscall ProfileMgr::Save(ProfileMgr *this,bool param_1,bool param_2)

{
  LawnApp *pLVar1;
  char cVar2;
  long lVar3;
  PlayerInfo *this_00;
  NetworkMgr *this_01;
  INetworkMsgProcess *this_02;
  WorldMap *this_03;
  
  lVar3 = Sexy::LazySingleton<AuthMgr>::GetInstance();
  cVar2 = FUN_04326670(*(undefined1 *)(lVar3 + 0x1d));
  if (cVar2 == '\0') {
    cVar2 = LawnApp::CheckProfileOpen();
    if (cVar2 == '\0') {
      this[0x10c] = (ProfileMgr)0x0;
      if ((this[0x10d] != (ProfileMgr)0x0) || (this[0x128] != (ProfileMgr)0x0)) {
        Sexy::OutputDebugStrF((wchar_t *)"Cheat Check - ProfileMgr::Save -1");
        return;
      }
      Sexy::OutputDebugStrF((wchar_t *)"Cheat Check - ProfileMgr::Save 0");
      this_00 = (PlayerInfo *)GetCurrentProfile(this);
      if ((this_00 != (PlayerInfo *)0x0) &&
         (cVar2 = LawnApp::isSyncProfileSuccess(gLawnApp), cVar2 == '\0')) {
        Sexy::OutputDebugStrF((wchar_t *)"Cheat Check - ProfileMgr::Save 1");
        cVar2 = LawnApp::IsNetworkModuleOK();
        if (cVar2 != '\0') {
          Sexy::OutputDebugStrF((wchar_t *)"Cheat Check - ProfileMgr::Save 2");
          cVar2 = LawnApp::getProfileConnected(gLawnApp);
          if (cVar2 == '\0') {
            Sexy::OutputDebugStrF((wchar_t *)"Cheat Check - ProfileMgr::Save 3");
            pLVar1 = gLawnApp;
            cVar2 = LawnApp::canDealProfile(gLawnApp);
            if ((cVar2 != '\0') && (cVar2 = LawnApp::isProfileSyncing(pLVar1), cVar2 == '\0')) {
              Sexy::OutputDebugStrF((wchar_t *)"Cheat Check - ProfileMgr::Save 4");
              LawnApp::setProfileSyncing(gLawnApp,true);
              LawnApp::syncProfileSummaryWithServer();
            }
          }
          else {
            Sexy::OutputDebugStrF((wchar_t *)"Cheat Check - ProfileMgr::Save 6");
            cVar2 = PlayerInfo::IsOlderThanServerData(this_00);
            if (cVar2 != '\0') {
              Sexy::OutputDebugStrF((wchar_t *)"Cheat Check - ProfileMgr::Save 7");
              pLVar1 = gLawnApp;
              cVar2 = LawnApp::isProfileOpened(gLawnApp);
              if ((cVar2 == '\0') && (cVar2 = LawnApp::canDealProfile(pLVar1), cVar2 != '\0')) {
                this_03 = (WorldMap *)LawnApp::GetWorldMap(pLVar1);
                cVar2 = WorldMap::IsUserInputEnabled(this_03);
                if (cVar2 != '\0') {
                  Sexy::OutputDebugStrF((wchar_t *)"Cheat Check - ProfileMgr::Save 8");
                  LawnApp::showDiffProfileSummary(gLawnApp);
                  LawnApp::setProfileOpened(gLawnApp,true);
                }
              }
            }
          }
        }
        if (!param_2) {
          return;
        }
      }
      this[0x12f] = (ProfileMgr)0x1;
    }
    else {
      this_01 = (NetworkMgr *)NetworkMgr::Instance();
      this_02 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_01);
      if (*(code **)(*(long *)this_02 + 0x28) == INetworkMsgProcess::IsLogined) {
        cVar2 = INetworkMsgProcess::IsLogined(this_02);
      }
      else {
        cVar2 = (**(code **)(*(long *)this_02 + 0x28))();
      }
      if (cVar2 == '\0') {
        LoginiCloudServer();
        return;
      }
      if (this[0x10d] != (ProfileMgr)0x0) {
        return;
      }
      if (this[0x128] != (ProfileMgr)0x0) {
        return;
      }
      this[0x12f] = (ProfileMgr)param_2;
    }
    if ((param_1) && (this[0x130] == (ProfileMgr)0x0)) {
      this[0x130] = (ProfileMgr)0x1;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileMgr::RealSave() */

void __thiscall ProfileMgr::RealSave(ProfileMgr *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  PlayerInfo *this_00;
  NetworkMgr *pNVar4;
  string *psVar5;
  androidNetworkMsgProcess *this_01;
  undefined4 uVar6;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = Sexy::LazySingleton<AuthMgr>::GetInstance();
  cVar1 = FUN_04326670(*(undefined1 *)(lVar3 + 0x1d));
  if (cVar1 == '\0') {
    this_00 = (PlayerInfo *)GetCurrentProfile(this);
    if (this_00 != (PlayerInfo *)0x0) {
      PlayerInfo::UpdateDeltaDataForServer(this_00);
      cVar1 = PlayerInfo::IsDiffDeltaDataBetweenServer(this_00);
      if (cVar1 != '\0') {
        Set8BytesTo0(asStack_20);
        Set8BytesTo0(asStack_18);
        Set8BytesTo0(asStack_10);
        PlayerInfo::GetDeltaDataForServer(this_00,asStack_20,asStack_18,asStack_10);
        cVar1 = LawnApp::CheckProfileOpen();
        if (cVar1 == '\0') {
          pNVar4 = (NetworkMgr *)NetworkMgr::Instance();
          psVar5 = (string *)NetworkMgr::GetNewNetWorkProcess(pNVar4);
          if (*(code **)(*(long *)psVar5 + 0x2e8) == INetworkMsgProcess::ICloudRequestUpLoadProfile)
          {
            cVar1 = INetworkMsgProcess::ICloudRequestUpLoadProfile
                              (psVar5,asStack_20,asStack_18,SUB81(asStack_10,0));
          }
          else {
            cVar1 = (**(code **)(*(long *)psVar5 + 0x2e8))();
          }
        }
        else {
          pNVar4 = (NetworkMgr *)NetworkMgr::Instance();
          this_01 = (androidNetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(pNVar4);
          iVar2 = androidNetworkMsgProcess::RequestSyncPlayerData(this_01);
          cVar1 = iVar2 == 0;
        }
        if (cVar1 != '\0') {
          if (this[299] == (ProfileMgr)0x0) {
            lVar3 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
            uVar6 = FUN_04326650(*(undefined4 *)(lVar3 + 0x18));
            *(undefined4 *)(this + 0x108) = uVar6;
          }
          this[299] = (ProfileMgr)0x1;
        }
        std::string::~string(asStack_10);
        std::string::~string(asStack_18);
        std::string::~string(asStack_20);
      }
    }
    lVar3 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
    uVar6 = FUN_04326650(*(undefined4 *)(lVar3 + 0x18));
    this[0x12f] = (ProfileMgr)0x0;
    this[0x130] = (ProfileMgr)0x0;
    *(undefined4 *)(this + 0x104) = uVar6;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileMgr::Update() */

void __thiscall ProfileMgr::Update(ProfileMgr *this)

{
  char cVar1;
  int iVar2;
  PlayerInfo *this_00;
  long lVar3;
  PVZ2UIDialog *pPVar4;
  LawnApp *pLVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_68 [8];
  wstring awStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = LawnApp::CheckProfileOpen();
  if (cVar1 == '\0') {
    pLVar5 = gLawnApp;
    if ((this[299] != (ProfileMgr)0x0) && (this[300] == (ProfileMgr)0x0)) {
      lVar3 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
      fVar7 = (float)FUN_04326650(*(undefined4 *)(lVar3 + 0x18));
      pLVar5 = gLawnApp;
      if ((*(float *)(this + 0x108) + 60.0 < fVar7) &&
         (cVar1 = LawnApp::canDealProfile(gLawnApp), cVar1 != '\0')) {
        FUN_05478178(awStack_50,L"[ICLOUD_PROFILE_ERROR]",auStack_68);
        TodStringTranslate(L"[ICLOUD_PROFILE_ERROR_FOR_UPLOAD]");
        TodReplaceNumberString(awStack_60,L"{NUMBER}",0xd7);
        pPVar4 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(pLVar5,awStack_50,awStack_58);
        FUN_05476c50(awStack_58);
        FUN_05476c50(awStack_60);
        FUN_05476c50(awStack_50);
        nop();
        FUN_05478178(awStack_58,L"[CONTINUE_BUTTON]",awStack_60);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,onDialogButtonPressed);
        Sexy::Delegate0::Delegate0<ProfileMgr,void(ProfileMgr::*)()>(aDStack_38,awStack_50);
        PVZ2UIDialog::AddButton(pPVar4,awStack_58,aDStack_38,0);
        FUN_05476c50(awStack_58);
        nop();
        pLVar5 = gLawnApp;
        this[300] = (ProfileMgr)0x1;
      }
    }
    cVar1 = LawnApp::isSyncProfileSuccess(pLVar5);
    if (cVar1 == '\0') {
      this[0x10c] = (ProfileMgr)0x1;
    }
    this_00 = (PlayerInfo *)GetCurrentProfile(this);
    if ((this_00 != (PlayerInfo *)0x0) &&
       (cVar1 = PlayerInfo::IsNeedDelaySave(this_00), cVar1 != '\0')) {
      PlayerInfo::SAVE_PROFILE(this_00);
    }
    if (this[0x12f] == (ProfileMgr)0x0) {
      if (((this[0x10c] == (ProfileMgr)0x0) || (this[299] != (ProfileMgr)0x0)) ||
         (this[0x129] == (ProfileMgr)0x0)) goto LAB_0432dfa4;
      lVar3 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
      fVar7 = (float)FUN_04326650(*(undefined4 *)(lVar3 + 0x18));
      fVar8 = *(float *)(this + 0x104);
      fVar6 = (float)Throttles::GetDeltaIntervalInS(*(Throttles **)(this + 0x120));
      if (fVar7 <= fVar6 + fVar8) goto LAB_0432dfa4;
    }
  }
  else {
    if (this[299] != (ProfileMgr)0x0) {
      if (this[300] == (ProfileMgr)0x0) {
        lVar3 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
        fVar7 = (float)FUN_04326650(*(undefined4 *)(lVar3 + 0x18));
        pLVar5 = gLawnApp;
        if ((*(float *)(this + 0x108) + 60.0 < fVar7) &&
           (cVar1 = LawnApp::canDealProfile(gLawnApp), cVar1 != '\0')) {
          FUN_05478178(awStack_50,L"[ICLOUD_PROFILE_ERROR]",auStack_68);
          TodStringTranslate(L"[ICLOUD_PROFILE_ERROR_FOR_UPLOAD]");
          TodReplaceNumberString(awStack_60,L"{NUMBER}",0xd7);
          pPVar4 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(pLVar5,awStack_50,awStack_58);
          FUN_05476c50(awStack_58);
          FUN_05476c50(awStack_60);
          FUN_05476c50(awStack_50);
          nop();
          FUN_05478178(awStack_58,L"[CONTINUE_BUTTON]",awStack_60);
          Sexy::
          MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                    ((ReceivedDataCallback *)this,onDialogButtonPressed);
          Sexy::Delegate0::Delegate0<ProfileMgr,void(ProfileMgr::*)()>(aDStack_38,awStack_50);
          PVZ2UIDialog::AddButton(pPVar4,awStack_58,aDStack_38,0);
          FUN_05476c50(awStack_58);
          nop();
          this[300] = (ProfileMgr)0x1;
        }
      }
      goto LAB_0432dfa4;
    }
    if ((this[0x12f] == (ProfileMgr)0x0) ||
       (cVar1 = LawnApp::isSyncProfileSuccess(gLawnApp), cVar1 != '\0')) {
      if (this[0x129] == (ProfileMgr)0x0) goto LAB_0432dfa4;
      lVar3 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
      fVar7 = (float)FUN_04326650(*(undefined4 *)(lVar3 + 0x18));
      if ((fVar7 <= *(float *)(this + 0x134) + *(float *)(this + 0x104)) ||
         (iVar2 = GameStateMgr::GetState(gGameStateMgr), iVar2 == 5)) goto LAB_0432dfa4;
    }
  }
  RealSave(this);
LAB_0432dfa4:
  PurchaseBroker::Update((PurchaseBroker *)(this + 0x20));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ProfileMgr::SaveResult(bool) */

void __thiscall ProfileMgr::SaveResult(ProfileMgr *this,bool param_1)

{
  PlayerInfo *this_00;
  
  Sexy::OutputDebugStrF((wchar_t *)"ProfileMgr::SaveResult i_success= [%d]",(ulong)param_1);
  if ((param_1) && (this_00 = (PlayerInfo *)GetCurrentProfile(this), this_00 != (PlayerInfo *)0x0))
  {
    PlayerInfo::FinishUpdateDeltaDataForServer(this_00);
    this[299] = (ProfileMgr)0x0;
    return;
  }
  this[299] = (ProfileMgr)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileMgr::GetPurchaseProfile(std::string) */

void __thiscall ProfileMgr::GetPurchaseProfile(ProfileMgr *this,string *param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  ResourceInfo *pRVar4;
  int extraout_w1;
  int iVar5;
  int extraout_w1_00;
  int extraout_w1_01;
  int extraout_w1_02;
  int extraout_w1_03;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  Iterator aIStack_48 [32];
  DownloadInfo aDStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,"");
  if (bVar1) {
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(aIStack_48,uVar3,0x37);
    while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_48), bVar1) {
      Sexy::RtDbTable::Iterator::operator*(aIStack_48);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_50,(RtWeakPtrBase *)aDStack_28);
      Sexy::RtId::~RtId((RtId *)aDStack_28);
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_50);
      if (cVar2 == '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
        iVar5 = extraout_w1_00;
      }
      else {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
        PlayerInfo::GetRestorePurchaseInfo();
        bVar1 = std::operator!=(asStack_20,"");
        if (bVar1) goto LAB_0432e558;
        Lua::DownloadInfo::~DownloadInfo(aDStack_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
        iVar5 = extraout_w1;
      }
      Sexy::RtDbTable::Iterator::operator++(aIStack_48,iVar5);
    }
    pRVar4 = (ResourceInfo *)0x0;
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_48);
  }
  else {
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(aIStack_48,uVar3,0x37);
    while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_48), bVar1) {
      Sexy::RtDbTable::Iterator::operator*(aIStack_48);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_50,(RtWeakPtrBase *)aDStack_28);
      Sexy::RtId::~RtId((RtId *)aDStack_28);
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_50);
      if (cVar2 == '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
        iVar5 = extraout_w1_02;
      }
      else {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
        PlayerInfo::GetRestorePurchaseInfo();
        cVar2 = std::operator==(asStack_18,param_2);
        if ((cVar2 != '\0') && (bVar1 = std::operator==(asStack_20,""), bVar1)) goto LAB_0432e558;
        Lua::DownloadInfo::~DownloadInfo(aDStack_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
        iVar5 = extraout_w1_01;
      }
      Sexy::RtDbTable::Iterator::operator++(aIStack_48,iVar5);
    }
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_48);
    cVar2 = HasValidProfile(this);
    if (cVar2 == '\0') {
      uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
      PVZDB::GetObjectIteratorForTable((Iterator *)aDStack_28,uVar3,0x37);
      while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)aDStack_28), bVar1
            ) {
        Sexy::RtDbTable::Iterator::operator*((Iterator *)aDStack_28);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_50,(RtWeakPtrBase *)aIStack_48);
        Sexy::RtId::~RtId((RtId *)aIStack_48);
        cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_50);
        if (cVar2 != '\0') {
          pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_50);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
          Sexy::RtDbTable::Iterator::~Iterator((Iterator *)aDStack_28);
          goto LAB_0432e57c;
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
        Sexy::RtDbTable::Iterator::operator++((Iterator *)aDStack_28,extraout_w1_03);
      }
      pRVar4 = (ResourceInfo *)0x0;
      Sexy::RtDbTable::Iterator::~Iterator((Iterator *)aDStack_28);
    }
    else {
      pRVar4 = (ResourceInfo *)GetCurrentProfile(this);
    }
  }
LAB_0432e57c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pRVar4);
LAB_0432e558:
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_50);
  Lua::DownloadInfo::~DownloadInfo(aDStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_48);
  goto LAB_0432e57c;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileMgr::UpdateCurrentProfile() */

void __thiscall ProfileMgr::UpdateCurrentProfile(ProfileMgr *this)

{
  bool bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = false;
  if ((this[0x12d] != (ProfileMgr)0x0) && (bVar1 = false, *(int *)(this + 0x100) == 0)) {
    this[0x12d] = (ProfileMgr)0x0;
    this[0x12e] = (ProfileMgr)0x1;
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x37);
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (bVar1) {
      Sexy::RtDbTable::Iterator::operator*(aIStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
      Sexy::RtId::~RtId(aRStack_30);
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      uVar2 = FUN_04326664(*(undefined4 *)(lVar4 + 0x600));
      *(undefined4 *)(this + 0x100) = uVar2;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
    }
    else {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* ProfileMgr::GetNumProfiles() const */

void ProfileMgr::GetNumProfiles(void)

{
  PVZDB *pPVar1;
  long lVar2;
  
  pPVar1 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  lVar2 = PVZDB::GetTable(pPVar1,0x37);
  FUN_0432664c(*(undefined4 *)(lVar2 + 0x80));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileMgr::FindProfile(int) */

void ProfileMgr::FindProfile(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int in_w1;
  int extraout_w1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x37);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (in_x8);
LAB_0432e858:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    iVar2 = FUN_04326668(*(undefined4 *)(lVar4 + 0x604));
    if (iVar2 == in_w1) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)in_x8,(RtWeakPtrBase *)aRStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      goto LAB_0432e858;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileMgr::SetCurrentProfile(int) */

void ProfileMgr::SetCurrentProfile(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  PlayerInfo *this;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  uVar3 = (ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  FindProfile(param_1);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  if (bVar1) {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    uVar2 = FUN_04326664(*(undefined4 *)(lVar4 + 0x600));
    *(undefined4 *)(uVar3 + 0x100) = uVar2;
    *(undefined1 *)(uVar3 + 0x12d) = 1;
    this = (PlayerInfo *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    PlayerInfo::SetCrashContext(this);
  }
  else {
    *(undefined1 *)(uVar3 + 0x12d) = 1;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileMgr::FindProfileByIndex(int) */

void ProfileMgr::FindProfileByIndex(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int in_w1;
  int extraout_w1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x37);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (in_x8);
LAB_0432ea10:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    iVar2 = FUN_04326664(*(undefined4 *)(lVar4 + 0x600));
    if (iVar2 == in_w1) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)in_x8,(RtWeakPtrBase *)aRStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      goto LAB_0432ea10;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileMgr::FindProfile(std::wstring const&) */

void ProfileMgr::FindProfile(wstring *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int extraout_w1;
  wstring *in_x1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x37);
  do {
    bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar2) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (in_x8);
LAB_0432eb30:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    PlayerInfo::AM_GetName();
    cVar1 = std::operator==((wstring *)aRStack_30,in_x1);
    FUN_05476c50(aRStack_30);
    if (cVar1 != '\0') {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)in_x8,(RtWeakPtrBase *)aRStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      goto LAB_0432eb30;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileMgr::RenameProfile(std::wstring const&, std::wstring const&) */

void ProfileMgr::RenameProfile(wstring *param_1,wstring *param_2)

{
  bool bVar1;
  wstring *pwVar2;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FindProfile(param_1);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  if (bVar1) {
    pwVar2 = (wstring *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    PlayerInfo::SetName(pwVar2);
    Save((ProfileMgr *)param_1,false,false);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileMgr::SetCurrentProfile(std::wstring const&) */

void ProfileMgr::SetCurrentProfile(wstring *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  PlayerInfo *this;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FindProfile(param_1);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  if (bVar1) {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    uVar2 = FUN_04326664(*(undefined4 *)(lVar3 + 0x600));
    *(undefined4 *)(param_1 + 0x100) = uVar2;
    this = (PlayerInfo *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    PlayerInfo::SetCrashContext(this);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileMgr::setAnyProfileAsCurrent() */

void __thiscall ProfileMgr::setAnyProfileAsCurrent(ProfileMgr *this)

{
  bool bVar1;
  undefined8 uVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar2,0x37);
  bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
  if (bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    PlayerInfo::AM_GetName();
    SetCurrentProfile((wstring *)this);
    FUN_05476c50(aRStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  }
  else {
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileMgr::FindProfileByIndex(long) */

void ProfileMgr::FindProfileByIndex(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int extraout_w1;
  long in_x1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x37);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (in_x8);
LAB_0432ee68:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    iVar2 = FUN_04326664(*(undefined4 *)(lVar4 + 0x600));
    if (in_x1 == iVar2) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)in_x8,(RtWeakPtrBase *)aRStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      goto LAB_0432ee68;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileMgr::InitializeProfile(PlayerInfo*) */

void __thiscall ProfileMgr::InitializeProfile(ProfileMgr *this,PlayerInfo *param_1)

{
  undefined8 uVar1;
  ResourceInfo *pRVar2;
  string *psVar3;
  ulong uVar4;
  ulong uVar5;
  RtId aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlayerInfo::InitializeSavedValues(param_1);
  PlayerInfo::GenerateRandomSeed(param_1);
  uVar1 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::RtName::RtName(aRStack_18,L"DefaultPlayerProfileProps");
  PVZDB::GetIdByAlias(aRStack_20,uVar1,5,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_20);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_18);
  uVar5 = 0;
  if (pRVar2 != (ResourceInfo *)0x0) {
    while( true ) {
      uVar1 = *(undefined8 *)(pRVar2 + 0x10);
      uVar4 = FUN_04326694(uVar1,*(undefined8 *)(pRVar2 + 0x18));
      if (uVar4 <= uVar5) break;
      psVar3 = (string *)FUN_043266a0(uVar1,uVar5);
      PlayerInfo::UnlockPlant(param_1,psVar3,true);
      psVar3 = (string *)FUN_043266a0(*(undefined8 *)(pRVar2 + 0x10),uVar5);
      PlayerInfo::AddPlantStartLevel(param_1,psVar3,0);
      uVar5 = uVar5 + 1;
    }
  }
  PlayerInfo::SetMapConversionState(param_1,3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Sexy::RtId::~RtId(aRStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileMgr::CreateProfileFromServer(std::string) */

void ProfileMgr::CreateProfileFromServer
               (RtWeakPtr<Sexy::SoundResource> *param_1,ProfileMgr *param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  PVZDB *pPVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 extraout_x0;
  long *plVar6;
  PlayerInfo *pPVar7;
  wstring *pwVar8;
  time_t tVar9;
  code *pcVar10;
  undefined1 auStack_20 [8];
  RtId aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar3 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  uVar4 = PVZDB::GetTable(pPVar3,0x37);
  lVar5 = PlayerInfo::StaticGetClass();
  FUN_0432662c(*(undefined8 *)(lVar5 + 0x18));
  nop();
  Sexy::RtDbTable::AllocId(aRStack_18,uVar4,extraout_x0,0,1,0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(param_1,(RtWeakPtrBase *)aRStack_18);
  plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  pcVar10 = *(code **)(*plVar6 + 0x38);
  std::string::string(asStack_10,"sd");
  cVar1 = (*pcVar10)(plVar6,param_3,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (cVar1 == '\0') {
    pwVar8 = (wstring *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    FUN_05478178(asStack_10,L"-invalid-",auStack_20);
    PlayerInfo::SetName(pwVar8);
    FUN_05476c50(asStack_10);
    nop();
    pPVar7 = (PlayerInfo *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    tVar9 = time((time_t *)0x0);
    PlayerInfo::SetProfileIndex(pPVar7,(int)tVar9);
    pPVar7 = (PlayerInfo *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    InitializeProfile(param_2,pPVar7);
  }
  else {
    pPVar7 = (PlayerInfo *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    PlayerInfo::ResetStarTotal(pPVar7);
  }
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  uVar2 = FUN_04326664(*(undefined4 *)(lVar5 + 0x600));
  *(undefined4 *)(param_2 + 0x100) = uVar2;
  param_2[0x12d] = (ProfileMgr)0x1;
  Sexy::RtId::~RtId(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileMgr::DeleteProfile(int) */

void ProfileMgr::DeleteProfile(int param_1)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  ProfileMgr *this;
  PVZDB *pPVar4;
  RtDbTable *this_00;
  undefined8 uVar5;
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  this = (ProfileMgr *)(ulong)(uint)param_1;
  uVar5 = 0;
  local_8 = ___stack_chk_guard;
  pPVar4 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  this_00 = (RtDbTable *)PVZDB::GetTable(pPVar4,0x37);
  FindProfile(param_1);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  puVar1 = gMessageRouter;
  if (bVar2) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    MessageRouter::Post<Sexy::RtWeakPtr<PlayerInfo>const&,Sexy::RtWeakPtr<PlayerInfo>>
              ((MessageRouter *)puVar1,Message::ProfileAboutToBeDeleted,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)aRStack_18);
    Sexy::RtDbTable::ReleaseId(this_00,(RtId *)aRStack_10);
    Sexy::RtId::~RtId((RtId *)aRStack_10);
    iVar3 = FUN_0432664c(*(undefined4 *)(this_00 + 0x80));
    if (iVar3 == 0) {
      *(undefined4 *)(this + 0x100) = 0;
      uVar5 = 2;
      this[0x12d] = (ProfileMgr)0x1;
    }
    else {
      setAnyProfileAsCurrent(this);
      uVar5 = 1;
      Save(this,false,false);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileMgr::ClearAllProfile() */

void __thiscall ProfileMgr::ClearAllProfile(ProfileMgr *this)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  int extraout_w1;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar2,0x37);
  while( true ) {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) break;
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    FUN_04326668(*(undefined4 *)(lVar3 + 0x604));
    DeleteProfile((int)this);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  *(undefined4 *)(this + 0x100) = 0;
  this[0x12d] = (ProfileMgr)0x1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileMgr::DeleteProfile(std::wstring const&) */

void ProfileMgr::DeleteProfile(wstring *param_1)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  PVZDB *pPVar4;
  RtDbTable *this;
  undefined8 uVar5;
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  uVar5 = 0;
  local_8 = ___stack_chk_guard;
  pPVar4 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  this = (RtDbTable *)PVZDB::GetTable(pPVar4,0x37);
  FindProfile(param_1);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  puVar1 = gMessageRouter;
  if (bVar2) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    MessageRouter::Post<Sexy::RtWeakPtr<PlayerInfo>const&,Sexy::RtWeakPtr<PlayerInfo>>
              ((MessageRouter *)puVar1,Message::ProfileAboutToBeDeleted,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)aRStack_18);
    Sexy::RtDbTable::ReleaseId(this,(RtId *)aRStack_10);
    Sexy::RtId::~RtId((RtId *)aRStack_10);
    iVar3 = FUN_0432664c(*(undefined4 *)(this + 0x80));
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0x100) = 0;
      uVar5 = 2;
    }
    else {
      setAnyProfileAsCurrent((ProfileMgr *)param_1);
      uVar5 = 1;
      Save((ProfileMgr *)param_1,false,false);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileMgr::CreateProfile(std::wstring const&) */

void __thiscall ProfileMgr::CreateProfile(ProfileMgr *this,wstring *param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  PVZDB *pPVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 extraout_x0;
  wstring *pwVar7;
  PlayerInfo *pPVar8;
  time_t tVar9;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  RtId aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar4 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  uVar5 = PVZDB::GetTable(pPVar4,0x37);
  lVar6 = PlayerInfo::StaticGetClass();
  FUN_0432662c(*(undefined8 *)(lVar6 + 0x18));
  nop();
  Sexy::RtDbTable::AllocId(aRStack_18,uVar5,extraout_x0,0,1,0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_18);
  pwVar7 = (wstring *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)in_x8);
  PlayerInfo::SetName(pwVar7);
  pPVar8 = (PlayerInfo *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)in_x8);
  tVar9 = time((time_t *)0x0);
  PlayerInfo::SetProfileIndex(pPVar8,(int)tVar9);
  pPVar8 = (PlayerInfo *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)in_x8);
  InitializeProfile(this,pPVar8);
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)in_x8);
  uVar3 = FUN_04326664(*(undefined4 *)(lVar6 + 0x600));
  *(undefined4 *)(this + 0x100) = uVar3;
  this[0x12d] = (ProfileMgr)0x1;
  cVar2 = LawnApp::CheckProfileOpen();
  if (cVar2 != '\0') {
    Save(this,false,true);
  }
  puVar1 = gMessageRouter;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)in_x8);
  MessageRouter::Post<Sexy::RtWeakPtr<PlayerInfo>const&,Sexy::RtWeakPtr<PlayerInfo>>
            ((MessageRouter *)puVar1,Message::ProfileCreated,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtId::~RtId(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileMgr::removeProfileOwnerError(std::vector<int, std::allocator<int> > const&) */

void __thiscall ProfileMgr::removeProfileOwnerError(ProfileMgr *this,vector *param_1)

{
  ProfileMgr PVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  int extraout_w1;
  ulong uVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVar1 = this[0x10d];
  this[0x10d] = (ProfileMgr)0x1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_40);
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar4,0x37);
  do {
    bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar2) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      uVar4 = local_40;
      uVar7 = FUN_04326680(local_40,local_38);
      uVar8 = 0;
      if (uVar7 != 0) {
        while (uVar8 < uVar7) {
          this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0432668c(uVar4);
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
          FUN_04326668(*(undefined4 *)(lVar5 + 0x604));
          DeleteProfile((int)this);
          uVar4 = local_40;
          uVar7 = FUN_04326680(local_40,local_38);
          uVar8 = uVar8 + 1;
        }
      }
      this[0x10d] = PVar1;
      std::vector<Sexy::RtWeakPtr<PlayerInfo>,std::allocator<Sexy::RtWeakPtr<PlayerInfo>>>::~vector
                ((vector<Sexy::RtWeakPtr<PlayerInfo>,std::allocator<Sexy::RtWeakPtr<PlayerInfo>>> *)
                 &local_40);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_58,(RtWeakPtrBase *)&local_48);
    Sexy::RtId::~RtId((RtId *)&local_48);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    iVar3 = FUN_04326668(*(undefined4 *)(lVar5 + 0x604));
    if (iVar3 != 0) {
      local_50 = FUN_04329588(*(undefined8 *)param_1);
      while( true ) {
        local_48 = FUN_04329638(*(undefined8 *)(param_1 + 8));
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)&local_48)
        ;
        if (!bVar2) break;
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
        iVar3 = FUN_04326668(*(undefined4 *)(lVar5 + 0x604));
        piVar6 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
        if (iVar3 == *piVar6) goto LAB_0433cf08;
        FUN_043295d8((exception_ptr *)&local_50);
      }
      std::vector<Sexy::RtWeakPtr<PlayerInfo>,std::allocator<Sexy::RtWeakPtr<PlayerInfo>>>::
      push_back((vector<Sexy::RtWeakPtr<PlayerInfo>,std::allocator<Sexy::RtWeakPtr<PlayerInfo>>> *)
                &local_40,(RtWeakPtr *)aRStack_58);
    }
LAB_0433cf08:
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileMgr::removeInvalidProfile() */

void __thiscall ProfileMgr::removeInvalidProfile(ProfileMgr *this)

{
  ProfileMgr PVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  PlayerInfo *this_00;
  ulong uVar5;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long lVar6;
  int extraout_w1;
  ulong uVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  RtId aRStack_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  Iterator aIStack_28 [32];
  long local_8;
  
  PVar1 = this[0x10d];
  local_8 = ___stack_chk_guard;
  this[0x10d] = (ProfileMgr)0x1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_40);
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar4,0x37);
  while (bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar2) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_50,(RtWeakPtrBase *)aRStack_48);
    Sexy::RtId::~RtId(aRStack_48);
    this_00 = (PlayerInfo *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
    cVar3 = PlayerInfo::IsValid(this_00);
    if (cVar3 == '\0') {
      std::vector<Sexy::RtWeakPtr<PlayerInfo>,std::allocator<Sexy::RtWeakPtr<PlayerInfo>>>::
      push_back((vector<Sexy::RtWeakPtr<PlayerInfo>,std::allocator<Sexy::RtWeakPtr<PlayerInfo>>> *)
                &local_40,(RtWeakPtr *)aRStack_50);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  uVar4 = local_40;
  uVar5 = FUN_04326680(local_40,local_38);
  uVar7 = 0;
  if (uVar5 != 0) {
    while (uVar7 < uVar5) {
      this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0432668c(uVar4);
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
      FUN_04326668(*(undefined4 *)(lVar6 + 0x604));
      DeleteProfile((int)this);
      uVar4 = local_40;
      uVar5 = FUN_04326680(local_40,local_38);
      uVar7 = uVar7 + 1;
    }
  }
  this[0x10d] = PVar1;
  std::vector<Sexy::RtWeakPtr<PlayerInfo>,std::allocator<Sexy::RtWeakPtr<PlayerInfo>>>::~vector
            ((vector<Sexy::RtWeakPtr<PlayerInfo>,std::allocator<Sexy::RtWeakPtr<PlayerInfo>>> *)
             &local_40);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileMgr::UpdateProfileToLatestVersion(PlayerInfo*) */

void __thiscall ProfileMgr::UpdateProfileToLatestVersion(ProfileMgr *this,PlayerInfo *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  DangerRoomInfo *pDVar4;
  string *psVar5;
  string asStack_e8 [8];
  string asStack_e0 [24];
  string asStack_c8 [8];
  string asStack_c0 [8];
  string asStack_b8 [8];
  string local_b0 [18];
  short local_9e;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = PlayerInfo::GetVersion(param_1);
  if (iVar2 < 4) {
    InitializeProfile(this,param_1);
  }
  iVar2 = PlayerInfo::GetVersion(param_1);
  if (iVar2 < 5) {
    PlayerInfo::SetWorldMapZoomData(param_1,1.0,false);
  }
  iVar2 = PlayerInfo::GetVersion(param_1);
  if (iVar2 < 8) {
    iVar2 = 5;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_e0);
    do {
      local_b0[0] = (string)0x1;
      std::vector<unsigned_char,std::allocator<unsigned_char>>::push_back
                ((vector<unsigned_char,std::allocator<unsigned_char>> *)asStack_e0,(uchar *)local_b0
                );
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    DangerRoomInfo::DangerRoomInfo((DangerRoomInfo *)local_b0);
    std::string::string(asStack_c8,"egypt");
    nop();
    std::string::string(asStack_c0,"pirate");
    nop();
    std::string::string(asStack_b8,"cowboy");
    nop();
    psVar5 = asStack_c8;
    do {
      cVar1 = PlayerInfo::HasDangerRoomInfo(param_1,psVar5);
      if (cVar1 != '\0') {
        pDVar4 = (DangerRoomInfo *)PlayerInfo::GetDangerRoomInfo(param_1,psVar5);
        DangerRoomInfo::operator=((DangerRoomInfo *)local_b0,pDVar4);
        if (local_9e != 0) {
          DangerRoomInfo::SetHasLostDangerRoom(SUB81((DangerRoomInfo *)local_b0,0));
          DangerRoomInfo::SetLawnMowerStatusInRows((DangerRoomInfo *)local_b0,(vector *)asStack_e0);
          PlayerInfo::SetDangerRoomInfo(param_1,psVar5,(DangerRoomInfo *)local_b0);
        }
      }
      psVar5 = psVar5 + 8;
    } while (psVar5 != local_b0);
    std::string::~string(asStack_b8);
    std::string::~string(asStack_c0);
    std::string::~string(asStack_c8);
    DangerRoomInfo::~DangerRoomInfo((DangerRoomInfo *)local_b0);
    std::vector<unsigned_char,std::allocator<unsigned_char>>::~vector
              ((vector<unsigned_char,std::allocator<unsigned_char>> *)asStack_e0);
  }
  iVar2 = PlayerInfo::GetVersion(param_1);
  if (iVar2 < 10) {
    PlayerInfo::UpdateLawnKeyField(param_1);
    PlayerInfo::UpdateUUIDAndOSVerson(param_1);
    PlayerInfo::ResetALLSign(param_1);
    iVar2 = CalReturnGoldBetweenVersionJune25AndAug05(param_1);
    PlayerInfo::SetReturnGoldValue(param_1,iVar2);
    ChangeMapDataForAug05(param_1);
    cVar1 = ChangeHackDataForAug05(this,param_1);
    if (cVar1 != '\0') {
      *(undefined1 *)(gLawnApp + 0x299d) = 1;
    }
  }
  iVar2 = PlayerInfo::GetVersion(param_1);
  if (iVar2 < 0xd) {
    PlayerInfo::UpdateTotalRecharge(param_1);
  }
  iVar2 = PlayerInfo::GetVersion(param_1);
  if (iVar2 < 0xe) {
    PlayerInfo::CheckWorldKeyValueWhenUpdate(param_1);
    PlayerInfo::AddFestivalGameLeftCount(param_1,0,3);
    PlayerInfo::AddFestivalGameLeftCount(param_1,1,3);
    PlayerInfo::AddFestivalGameLeftCount(param_1,2,1);
  }
  iVar2 = PlayerInfo::GetVersion(param_1);
  if (iVar2 < 0xf) {
    std::string::string(local_b0,"none");
    PlayerInfo::SetTreasureYetiLocation((string *)param_1);
    std::string::~string(local_b0);
    nop();
    std::string::string(local_b0,"egypt4");
    iVar2 = PlayerInfo::GetWorldMapEventStatus(param_1,local_b0);
    std::string::~string(local_b0);
    nop();
    std::string::string(asStack_e0,"gravebuster");
    cVar1 = PlayerInfo::GetIsPlantUnlocked(param_1,asStack_e0);
    if (cVar1 == '\0') {
      std::string::string(local_b0,"gravebuster");
      iVar3 = PlayerInfo::GetPlantPieceCount(param_1,local_b0,false);
      std::string::~string(local_b0);
      nop();
      std::string::~string(asStack_e0);
      nop();
      if (iVar3 < 1 && iVar2 == 3) {
        PlayerInfo::ResetTutorialProgress(param_1,6);
        PlayerInfo::SetWorldMapEventStatusForEgypt5(param_1,2);
      }
    }
    else {
      std::string::~string(asStack_e0);
      nop();
    }
  }
  iVar2 = PlayerInfo::GetVersion(param_1);
  if (iVar2 < 0x10) {
    PlayerInfo::DoOnlineRefreshEventTime(param_1);
  }
  iVar2 = PlayerInfo::GetVersion(param_1);
  if (iVar2 < 0x11) {
    PlayerInfo::DoUpdatePlantStarRewards();
  }
  PlayerInfo::GetVersion(param_1);
  PlayerInfo::GetVersion(param_1);
  iVar2 = PlayerInfo::GetVersion(param_1);
  if (0x15 < iVar2) {
    PlayerInfo::setGachaCompen(param_1,true);
    PlayerInfo::setAvatarAdvanceCompen(param_1,true);
    PlayerInfo::setAvatarCompen(param_1,true);
    PlayerInfo::setDailyRewardCompen(param_1,true);
  }
  iVar2 = PlayerInfo::GetVersion(param_1);
  if (iVar2 < 0x14) {
    PlayerInfo::FixRepeatData(param_1);
  }
  iVar2 = PlayerInfo::GetVersion(param_1);
  if (iVar2 < 0x15) {
    PlayerInfo::SetNumRechargeCurrency(param_1,0);
    PlayerInfo::SetFirstRechargeRewardStatus(param_1,false);
    std::string::string(local_b0,"poweruptacticalcuke");
    iVar2 = PlayerInfo::GetPowerupUsesLeft(param_1,local_b0);
    std::string::~string(local_b0);
    nop();
    std::string::string(local_b0,"poweruptacticalcuke");
    PlayerInfo::SetupPowerupUses(param_1,local_b0,0);
    std::string::~string(local_b0);
    nop();
    std::string::string(local_b0,"monthlycard_tacticalcuke");
    PlayerInfo::SetPowerupUnlockState(param_1,local_b0,true);
    std::string::~string(local_b0);
    nop();
    std::string::string(local_b0,"monthlycard_tacticalcuke");
    PlayerInfo::SetupPowerupUses(param_1,local_b0,iVar2);
    std::string::~string(local_b0);
    nop();
    PlayerInfo::RemoveAllAdventure(param_1,true,true,true);
  }
  GetFolder(local_b0,3);
  std::operator+(local_b0,"pvz2_m.txt");
  std::string::~string(local_b0);
  Sexy::SexyAppBase::EraseFile(Sexy::gSexyAppBase);
  GetFolder(local_b0,3);
  std::operator+(local_b0,"pvz2_ac.txt");
  std::string::~string(local_b0);
  Sexy::SexyAppBase::EraseFile(Sexy::gSexyAppBase);
  PlayerInfo::UpdateVersion(param_1);
  std::string::~string(asStack_e0);
  std::string::~string(asStack_e8);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ProfileMgr::SetReadOnlyMode(bool) */

void __thiscall ProfileMgr::SetReadOnlyMode(ProfileMgr *this,bool param_1)

{
  PlayerInfo *pPVar1;
  PlayerInfo *this_00;
  
  if (param_1) {
    if (this[0x10d] == (ProfileMgr)0x0) {
      pPVar1 = (PlayerInfo *)GetCurrentProfile(this);
      this_00 = ::operator_new(0x1978);
      PlayerInfo::PlayerInfo(this_00,pPVar1);
      *(PlayerInfo **)(this + 0x10) = this_00;
      this[0x10d] = (ProfileMgr)param_1;
      return;
    }
  }
  else if (this[0x10d] != (ProfileMgr)0x0) {
    if (*(long **)(this + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x10) + 0x18))();
    }
    *(undefined8 *)(this + 0x10) = 0;
    this[0x10d] = (ProfileMgr)param_1;
    return;
  }
  this[0x10d] = (ProfileMgr)param_1;
  return;
}


/* ProfileMgr::forceReload() */

void __thiscall ProfileMgr::forceReload(ProfileMgr *this)

{
  ProfileMgr PVar1;
  long *plVar2;
  
  PVar1 = (ProfileMgr)GetReadOnlyMode(this);
  this[0x10e] = PVar1;
  SetReadOnlyMode(this,false);
  plVar2 = (long *)DataPersistorFactory::GetOfflinePersistor(*(DataPersistorFactory **)(this + 8));
  (**(code **)(*plVar2 + 0x18))();
  return;
}


/* ProfileMgr::LoadAndSetProfile(int) */

void __thiscall ProfileMgr::LoadAndSetProfile(ProfileMgr *this,int param_1)

{
  *(int *)(this + 0x118) = param_1;
  forceReload(this);
  return;
}


/* ProfileMgr::LoadAndSetProfile(std::wstring const&) */

void ProfileMgr::LoadAndSetProfile(wstring *param_1)

{
  thunk_FUN_05477b9c(param_1 + 0x110);
  forceReload((ProfileMgr *)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileMgr::populateProfiles() */

void __thiscall ProfileMgr::populateProfiles(ProfileMgr *this)

{
  LawnApp LVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  PlayerInfo *pPVar7;
  ResourceInfo *pRVar8;
  long lVar9;
  PVZRechargeCheckServer *pPVar10;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  bVar2 = false;
  local_8 = ___stack_chk_guard;
  LVar1 = gLawnApp[0x299e];
  uVar6 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar6,0x37);
  do {
    bVar3 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar3) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      if (gLawnApp[0x299d] != (LawnApp)0x0) {
        replaceUUID();
        pPVar10 = (PVZRechargeCheckServer *)LawnApp::GetRechargeCheckServer(gLawnApp);
        PVZRechargeCheckServer::ResetGemAmount(pPVar10);
      }
      cVar4 = FUN_054765e8(this + 0x110);
      if (((cVar4 == '\0') && (iVar5 = SetCurrentProfile((wstring *)this), iVar5 != 1)) || (!bVar2))
      {
        setAnyProfileAsCurrent(this);
      }
      SetReadOnlyMode(this,(bool)this[0x10e]);
      this[0x10e] = (ProfileMgr)0x0;
      MessageRouter::Post((_func_void *)gMessageRouter);
      uVar6 = 1;
      this[0x12a] = (ProfileMgr)0x1;
LAB_04341658:
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar6);
      }
      return;
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    cVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_38);
    if (cVar4 == '\0') {
LAB_04341580:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      iVar5 = extraout_w1_00;
    }
    else {
      pPVar7 = (PlayerInfo *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      iVar5 = PlayerInfo::GetVersion(pPVar7);
      if (iVar5 < 7) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
        PlayerInfo::AM_GetName();
        DeleteProfile((wstring *)this);
        FUN_05476c50(aRStack_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
        iVar5 = extraout_w1;
      }
      else {
        pPVar7 = (PlayerInfo *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
        iVar5 = PlayerInfo::GetVersion(pPVar7);
        if (iVar5 < 0x15) {
          if (LVar1 != (LawnApp)0x0) {
            pPVar10 = (PVZRechargeCheckServer *)LawnApp::GetRechargeCheckServer(gLawnApp);
            iVar5 = PVZRechargeCheckServer::GetPlayerRechargeAmount(pPVar10);
            if (iVar5 < 0) {
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
              Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
              uVar6 = 0;
              goto LAB_04341658;
            }
          }
          pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_38);
          UpdateProfileToLatestVersion(this,(PlayerInfo *)pRVar8);
          RequestSave(this);
        }
        if (bVar2) goto LAB_04341580;
        lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
        iVar5 = FUN_04326664(*(undefined4 *)(lVar9 + 0x600));
        bVar2 = iVar5 == *(int *)(this + 0x100);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
        iVar5 = extraout_w1_01;
      }
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar5);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileMgr::SaveAs(PlayerInfo*, std::wstring const&) */

void __thiscall ProfileMgr::SaveAs(ProfileMgr *this,PlayerInfo *param_1,wstring *param_2)

{
  ProfileMgr PVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  ResourceInfo *pRVar5;
  PVZDB *pPVar6;
  RtDbTable *this_00;
  PlayerInfo *pPVar7;
  wstring *pwVar8;
  wstring *extraout_x1;
  RtWeakPtrBase aRStack_30 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  RtMixedPtr aRStack_20 [8];
  RtId aRStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlayerInfo::AM_GetName();
  cVar2 = std::operator==(awStack_10,param_2);
  FUN_05476c50(awStack_10);
  if (cVar2 == '\0') {
    FindProfile((wstring *)this);
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)awStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)awStack_10);
    if (pRVar5 == (ResourceInfo *)0x0) {
      pPVar6 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
      this_00 = (RtDbTable *)PVZDB::GetTable(pPVar6,0x37);
      pPVar7 = ::operator_new(0x1978);
      PlayerInfo::PlayerInfo(pPVar7,param_1);
      Sexy::RtDbTable::AllocId(aRStack_30,this_00,pPVar7,0,1,0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,aRStack_30);
      pwVar8 = (wstring *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28)
      ;
      PlayerInfo::SetName(pwVar8);
    }
    else {
      iVar3 = FUN_04326664(*(undefined4 *)(pRVar5 + 0x600));
      Sexy::ToWString((Sexy *)param_2,extraout_x1);
      DeleteProfile((wstring *)this);
      FUN_05476c50(awStack_10);
      pPVar6 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
      this_00 = (RtDbTable *)PVZDB::GetTable(pPVar6,0x37);
      pPVar7 = ::operator_new(0x1978);
      PlayerInfo::PlayerInfo(pPVar7,param_1);
      Sexy::RtDbTable::AllocId(aRStack_30,this_00,pPVar7,0,1,0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,aRStack_30);
      pwVar8 = (wstring *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28)
      ;
      PlayerInfo::SetName(pwVar8);
      if (-1 < iVar3) {
        pPVar7 = (PlayerInfo *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
        PlayerInfo::SetProfileIndex(pPVar7,iVar3);
      }
    }
    if (this[0x10d] == (ProfileMgr)0x0) {
      Save(this,false,false);
    }
    else {
      GetCurrentProfile(this);
      PlayerInfo::AM_GetName();
      FindProfile((wstring *)this);
      FUN_05476c50(awStack_10);
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_20);
      pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_20);
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_20);
      uVar4 = Sexy::RtDbTable::GetObjectDeletionMode(this_00,(RtId *)awStack_10);
      Sexy::RtId::~RtId((RtId *)awStack_10);
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_20);
      Sexy::RtDbTable::SetObjectDeletionMode(this_00,awStack_10,2);
      Sexy::RtId::~RtId((RtId *)awStack_10);
      Sexy::RtDbTable::ReplaceObjectForId(this_00,aRStack_18,*(RtObject **)(this + 0x10));
      this[0x10d] = (ProfileMgr)0x0;
      Save(this,false,false);
      this[0x10d] = (ProfileMgr)0x1;
      Sexy::RtDbTable::ReplaceObjectForId(this_00,aRStack_18,(RtObject *)pRVar5);
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_20);
      Sexy::RtDbTable::SetObjectDeletionMode(this_00,awStack_10,uVar4);
      Sexy::RtId::~RtId((RtId *)awStack_10);
      Sexy::RtId::~RtId(aRStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    Sexy::RtId::~RtId((RtId *)aRStack_30);
  }
  else {
    PVar1 = this[0x10d];
    this[0x10d] = (ProfileMgr)0x0;
    Save(this,false,false);
    this[0x10d] = PVar1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileMgr::SaveAsAutoName() */

void __thiscall ProfileMgr::SaveAsAutoName(ProfileMgr *this)

{
  char cVar1;
  PlayerInfo *pPVar2;
  string *extraout_x1;
  string *extraout_x1_00;
  int iVar3;
  wstring awStack_198 [8];
  wstring awStack_190 [8];
  string asStack_188 [8];
  string asStack_180 [8];
  Sexy aSStack_178 [8];
  string asStack_170 [8];
  undefined1 auStack_168 [88];
  undefined1 auStack_110 [264];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = (PlayerInfo *)GetCurrentProfile(this);
  iVar3 = 1;
  PlayerInfo::AM_GetName();
  FUN_05462144(auStack_168,0x10);
  FUN_0546065c(auStack_168,1);
  FUN_054622ac(asStack_180,auStack_168);
  std::operator+("_",asStack_180);
  Sexy::StringToWString(aSStack_178,extraout_x1);
  std::operator+(awStack_198,(wstring *)asStack_170);
  FUN_05476c50(asStack_170);
  std::string::~string((string *)aSStack_178);
  std::string::~string(asStack_180);
  while( true ) {
    FindProfile((wstring *)this);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_170);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_170);
    if (cVar1 == '\0') break;
    iVar3 = iVar3 + 1;
    std::string::string(asStack_170,"");
    FUN_05462408(auStack_168,asStack_170);
    std::string::~string(asStack_170);
    nop();
    FUN_0544a0a4(auStack_110,0);
    FUN_0546065c(auStack_168,iVar3);
    FUN_054622ac(asStack_188,auStack_168);
    std::operator+("_",asStack_188);
    Sexy::StringToWString((Sexy *)asStack_180,extraout_x1_00);
    std::operator+(awStack_198,(wstring *)aSStack_178);
    FUN_054766c8(awStack_190,asStack_170);
    FUN_05476c50(asStack_170);
    FUN_05476c50(aSStack_178);
    std::string::~string(asStack_180);
    std::string::~string(asStack_188);
  }
  SaveAs(this,pPVar2,awStack_190);
  FUN_05476c50(awStack_190);
  FUN_054614ac(auStack_168);
  FUN_05476c50(awStack_198);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileMgr::DuplicateProfile(PlayerInfo const*, std::wstring const&) */

void ProfileMgr::DuplicateProfile(PlayerInfo *param_1,wstring *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  PlayerInfo *this;
  time_t tVar3;
  wstring *in_x2;
  RtWeakPtr<Sexy::ResourceInfo> *in_x8;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FindProfile((wstring *)param_1);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  if (bVar1) {
    DeleteProfile((wstring *)param_1);
  }
  CreateProfile((ProfileMgr *)param_1,in_x2);
  this = (PlayerInfo *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(in_x8);
  PlayerInfo::operator=(this,(PlayerInfo *)param_2);
  PlayerInfo::SetName((wstring *)this);
  tVar3 = time((time_t *)0x0);
  PlayerInfo::SetProfileIndex(this,(int)tVar3);
  uVar2 = FUN_04326664(*(undefined4 *)(this + 0x600));
  *(undefined4 *)(param_1 + 0x100) = uVar2;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ProfileMgr::~ProfileMgr() */

void __thiscall ProfileMgr::~ProfileMgr(ProfileMgr *this)

{
  *(undefined ***)this = &PTR__ProfileMgr_06833ab0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  if (*(long **)(this + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x10) + 0x18))();
  }
  FUN_05476c50(this + 0x110);
  PurchaseBroker::~PurchaseBroker((PurchaseBroker *)(this + 0x20));
  Sexy::LazySingleton<ProfileMgr>::~LazySingleton((LazySingleton<ProfileMgr> *)this);
  return;
}


/* ProfileMgr::~ProfileMgr() */

void __thiscall ProfileMgr::~ProfileMgr(ProfileMgr *this)

{
  ~ProfileMgr(this);
  AK::FreeHook(this);
  return;
}

