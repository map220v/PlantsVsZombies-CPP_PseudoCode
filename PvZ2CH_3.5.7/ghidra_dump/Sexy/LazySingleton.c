// Class: Sexy::LazySingleton<TimeMgr>


/* Sexy::LazySingleton<TimeMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<TimeMgr>::~LazySingleton(LazySingleton<TimeMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066082d0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<TimeMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<TimeMgr>::~LazySingleton(LazySingleton<TimeMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<TimeMgr>::LazySingleton() */

void __thiscall Sexy::LazySingleton<TimeMgr>::LazySingleton(LazySingleton<TimeMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066082d0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<TimeMgr>::GetInstancePtr() */

long Sexy::LazySingleton<TimeMgr>::GetInstancePtr(void)

{
  TimeMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x60);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  TimeMgr::TimeMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<NetworkItemMgr>::GetInstancePtr() */

long Sexy::LazySingleton<NetworkItemMgr>::GetInstancePtr(void)

{
  NetworkItemMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x18);
  NetworkItemMgr::NetworkItemMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<NetworkItemMgr>::GetInstance() */

long Sexy::LazySingleton<NetworkItemMgr>::GetInstance(void)

{
  NetworkItemMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x18);
  NetworkItemMgr::NetworkItemMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<PVZDB>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<PVZDB>::~LazySingleton(LazySingleton<PVZDB> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066083d0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<GeneralTaskStateManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<GeneralTaskStateManager>::~LazySingleton
          (LazySingleton<GeneralTaskStateManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066085f0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<AudioMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<AudioMgr>::~LazySingleton(LazySingleton<AudioMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066085b0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<PlantType> >::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::~LazySingleton
          (LazySingleton<ObjectTypeDirectory<PlantType>> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06608410;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<PVZDB>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<PVZDB>::~LazySingleton(LazySingleton<PVZDB> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<PlantType> >::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::~LazySingleton
          (LazySingleton<ObjectTypeDirectory<PlantType>> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<GeneralTaskStateManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<GeneralTaskStateManager>::~LazySingleton
          (LazySingleton<GeneralTaskStateManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<AudioMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<AudioMgr>::~LazySingleton(LazySingleton<AudioMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<PVZDB>::LazySingleton() */

void __thiscall Sexy::LazySingleton<PVZDB>::LazySingleton(LazySingleton<PVZDB> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066083d0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr() */

long Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr(void)

{
  DangerRoomManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x2c0);
  DangerRoomManager::DangerRoomManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<GeneralTaskStateManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<GeneralTaskStateManager>::LazySingleton
          (LazySingleton<GeneralTaskStateManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066085f0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<Lua::CLuaEngine>::GetInstancePtr() */

long Sexy::LazySingleton<Lua::CLuaEngine>::GetInstancePtr(void)

{
  CLuaEngine *this;
  
  if (m_instance == 0) {
    this = ::operator_new(0xe58);
    Lua::CLuaEngine::CLuaEngine(this);
    if (m_instance == 0) {
      return 0;
    }
  }
  return m_instance + -8;
}


/* Sexy::LazySingleton<PVPManager>::GetInstancePtr() */

long Sexy::LazySingleton<PVPManager>::GetInstancePtr(void)

{
  PVPManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x408);
  PVPManager::PVPManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr() */

long Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr(void)

{
  NewPVPMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x520);
  NewPVPMgr::NewPVPMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<LoginSDKMgr>::GetInstancePtr() */

long Sexy::LazySingleton<LoginSDKMgr>::GetInstancePtr(void)

{
  LoginSDKMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x38);
  LoginSDKMgr::LoginSDKMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<DebugLog>::GetInstancePtr() */

long Sexy::LazySingleton<DebugLog>::GetInstancePtr(void)

{
  DebugLog *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x18);
  DebugLog::DebugLog(this);
  return m_instance;
}


/* Sexy::LazySingleton<MonthlyCardMgr>::GetInstancePtr() */

long Sexy::LazySingleton<MonthlyCardMgr>::GetInstancePtr(void)

{
  MonthlyCardMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x28);
  MonthlyCardMgr::MonthlyCardMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<GeneralTaskStateManager>::GetInstancePtr() */

long Sexy::LazySingleton<GeneralTaskStateManager>::GetInstancePtr(void)

{
  GeneralTaskStateManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x10);
  GeneralTaskStateManager::GeneralTaskStateManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<TravelLogManager>::GetInstancePtr() */

long Sexy::LazySingleton<TravelLogManager>::GetInstancePtr(void)

{
  TravelLogManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x48);
  TravelLogManager::TravelLogManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<ActivityManager>::GetInstancePtr() */

long Sexy::LazySingleton<ActivityManager>::GetInstancePtr(void)

{
  ActivityManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x40);
  ActivityManager::ActivityManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<NewYearChargeManager>::GetInstancePtr() */

long Sexy::LazySingleton<NewYearChargeManager>::GetInstancePtr(void)

{
  NewYearChargeManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x18);
  NewYearChargeManager::NewYearChargeManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<ZMatchShopMgr>::GetInstancePtr() */

long Sexy::LazySingleton<ZMatchShopMgr>::GetInstancePtr(void)

{
  ZMatchShopMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x70);
  ZMatchShopMgr::ZMatchShopMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<WorldCupManager>::GetInstancePtr() */

long Sexy::LazySingleton<WorldCupManager>::GetInstancePtr(void)

{
  WorldCupManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x98);
  WorldCupManager::WorldCupManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<ChristmasChargeManager>::GetInstancePtr() */

long Sexy::LazySingleton<ChristmasChargeManager>::GetInstancePtr(void)

{
  ChristmasChargeManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x18);
  ChristmasChargeManager::ChristmasChargeManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<PVPManager>::GetInstance() */

long Sexy::LazySingleton<PVPManager>::GetInstance(void)

{
  PVPManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x408);
  PVPManager::PVPManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<PlaybackManager>::GetInstancePtr() */

long Sexy::LazySingleton<PlaybackManager>::GetInstancePtr(void)

{
  PlaybackManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x50);
  PlaybackManager::PlaybackManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr() */

long Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr(void)

{
  UnchartedModeNetworkMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x1c0);
  UnchartedModeNetworkMgr::UnchartedModeNetworkMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<RiftShopMgr>::GetInstancePtr() */

long Sexy::LazySingleton<RiftShopMgr>::GetInstancePtr(void)

{
  RiftShopMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x68);
  RiftShopMgr::RiftShopMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<PVZ1ModeShopMgr>::GetInstancePtr() */

long Sexy::LazySingleton<PVZ1ModeShopMgr>::GetInstancePtr(void)

{
  PVZ1ModeShopMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x50);
  PVZ1ModeShopMgr::PVZ1ModeShopMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<NewPVPShopMgr>::GetInstancePtr() */

long Sexy::LazySingleton<NewPVPShopMgr>::GetInstancePtr(void)

{
  NewPVPShopMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x40);
  NewPVPShopMgr::NewPVPShopMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<ProfileMgr>::GetInstancePtr() */

long Sexy::LazySingleton<ProfileMgr>::GetInstancePtr(void)

{
  ProfileMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x138);
  ProfileMgr::ProfileMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<ProfileMgr>::GetInstance() */

long Sexy::LazySingleton<ProfileMgr>::GetInstance(void)

{
  ProfileMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x138);
  ProfileMgr::ProfileMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<LevelOfTheDaySystem>::GetInstancePtr() */

long Sexy::LazySingleton<LevelOfTheDaySystem>::GetInstancePtr(void)

{
  LevelOfTheDaySystem *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x20);
  LevelOfTheDaySystem::LevelOfTheDaySystem(this);
  return m_instance;
}


/* Sexy::LazySingleton<LevelOfTheDaySystem>::GetInstance() */

long Sexy::LazySingleton<LevelOfTheDaySystem>::GetInstance(void)

{
  LevelOfTheDaySystem *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x20);
  LevelOfTheDaySystem::LevelOfTheDaySystem(this);
  return m_instance;
}


/* Sexy::LazySingleton<AbtestMgr>::GetInstancePtr() */

long Sexy::LazySingleton<AbtestMgr>::GetInstancePtr(void)

{
  AbtestMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x40);
  AbtestMgr::AbtestMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<AbtestMgr>::GetInstance() */

long Sexy::LazySingleton<AbtestMgr>::GetInstance(void)

{
  AbtestMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x40);
  AbtestMgr::AbtestMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<ADManager>::GetInstancePtr() */

long Sexy::LazySingleton<ADManager>::GetInstancePtr(void)

{
  ADManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x40);
  ADManager::ADManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<ADManager>::GetInstance() */

long Sexy::LazySingleton<ADManager>::GetInstance(void)

{
  ADManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x40);
  ADManager::ADManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<GachaMgr>::GetInstancePtr() */

long Sexy::LazySingleton<GachaMgr>::GetInstancePtr(void)

{
  GachaMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x68);
  GachaMgr::GachaMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<GachaMgr>::GetInstance() */

long Sexy::LazySingleton<GachaMgr>::GetInstance(void)

{
  GachaMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x68);
  GachaMgr::GachaMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<TGALogMgr>::GetInstancePtr() */

long Sexy::LazySingleton<TGALogMgr>::GetInstancePtr(void)

{
  TGALogMgr *this;
  
  if (m_instance == 0) {
    this = ::operator_new(0x68);
    TGALogMgr::TGALogMgr(this);
    if (m_instance == 0) {
      return 0;
    }
  }
  return m_instance + -8;
}


/* Sexy::LazySingleton<TGALogMgr>::GetInstance() */

long Sexy::LazySingleton<TGALogMgr>::GetInstance(void)

{
  TGALogMgr *this;
  
  if (m_instance == 0) {
    this = ::operator_new(0x68);
    TGALogMgr::TGALogMgr(this);
    if (m_instance == 0) {
      return 0;
    }
  }
  return m_instance + -8;
}


/* Sexy::LazySingleton<AuthMgr>::GetInstancePtr() */

long Sexy::LazySingleton<AuthMgr>::GetInstancePtr(void)

{
  AuthMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x40);
  AuthMgr::AuthMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<AuthMgr>::GetInstance() */

long Sexy::LazySingleton<AuthMgr>::GetInstance(void)

{
  AuthMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x40);
  AuthMgr::AuthMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<RenaissanceChallengeNewManager>::GetInstancePtr() */

long Sexy::LazySingleton<RenaissanceChallengeNewManager>::GetInstancePtr(void)

{
  RenaissanceChallengeNewManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x40);
  RenaissanceChallengeNewManager::RenaissanceChallengeNewManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<RenaissanceChallengeNewManager>::GetInstance() */

long Sexy::LazySingleton<RenaissanceChallengeNewManager>::GetInstance(void)

{
  RenaissanceChallengeNewManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x40);
  RenaissanceChallengeNewManager::RenaissanceChallengeNewManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr() */

long Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr(void)

{
  ArtifactMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x68);
  ArtifactMgr::ArtifactMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<ArtifactMgr>::GetInstance() */

long Sexy::LazySingleton<ArtifactMgr>::GetInstance(void)

{
  ArtifactMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x68);
  ArtifactMgr::ArtifactMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<SocialShareMgr>::GetInstancePtr() */

long Sexy::LazySingleton<SocialShareMgr>::GetInstancePtr(void)

{
  SocialShareMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x60);
  SocialShareMgr::SocialShareMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<SocialShareMgr>::GetInstance() */

long Sexy::LazySingleton<SocialShareMgr>::GetInstance(void)

{
  SocialShareMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x60);
  SocialShareMgr::SocialShareMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<TutorialMgr>::GetInstancePtr() */

long Sexy::LazySingleton<TutorialMgr>::GetInstancePtr(void)

{
  TutorialMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x18);
  TutorialMgr::TutorialMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<TutorialMgr>::GetInstance() */

long Sexy::LazySingleton<TutorialMgr>::GetInstance(void)

{
  TutorialMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x18);
  TutorialMgr::TutorialMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<AudioMgr>::LazySingleton() */

void __thiscall Sexy::LazySingleton<AudioMgr>::LazySingleton(LazySingleton<AudioMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066085b0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<FestivalManager>::GetInstancePtr() */

long Sexy::LazySingleton<FestivalManager>::GetInstancePtr(void)

{
  FestivalManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x50);
  FestivalManager::FestivalManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<FestivalManager>::GetInstance() */

long Sexy::LazySingleton<FestivalManager>::GetInstance(void)

{
  FestivalManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x50);
  FestivalManager::FestivalManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<CommonUIManager>::GetInstancePtr() */

long Sexy::LazySingleton<CommonUIManager>::GetInstancePtr(void)

{
  CommonUIManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x10);
  CommonUIManager::CommonUIManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<CommonUIManager>::GetInstance() */

long Sexy::LazySingleton<CommonUIManager>::GetInstance(void)

{
  CommonUIManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x10);
  CommonUIManager::CommonUIManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<IdentifierMgr>::GetInstancePtr() */

long Sexy::LazySingleton<IdentifierMgr>::GetInstancePtr(void)

{
  IdentifierMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x58);
  IdentifierMgr::IdentifierMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<IdentifierMgr>::GetInstance() */

long Sexy::LazySingleton<IdentifierMgr>::GetInstance(void)

{
  IdentifierMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x58);
  IdentifierMgr::IdentifierMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<PlantType> >::LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::LazySingleton
          (LazySingleton<ObjectTypeDirectory<PlantType>> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06608410;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<PVZDB>::GetInstancePtr() */

long Sexy::LazySingleton<PVZDB>::GetInstancePtr(void)

{
  PVZDB *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0xe0);
  PVZDB::PVZDB(this);
  return m_instance;
}


/* Sexy::LazySingleton<PVZDB>::GetInstance() */

long Sexy::LazySingleton<PVZDB>::GetInstance(void)

{
  PVZDB *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0xe0);
  PVZDB::PVZDB(this);
  return m_instance;
}


/* Sexy::LazySingleton<AudioMgr>::GetInstancePtr() */

long Sexy::LazySingleton<AudioMgr>::GetInstancePtr(void)

{
  AudioMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x60);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  AudioMgr::AudioMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<PlantType> >::GetInstancePtr() */

long Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr(void)

{
  ObjectTypeDirectory<PlantType> *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x58);
  ObjectTypeDirectory<PlantType>::ObjectTypeDirectory(this);
  return m_instance;
}


/* Sexy::LazySingleton<SocialMgr>::GetInstancePtr() */

long Sexy::LazySingleton<SocialMgr>::GetInstancePtr(void)

{
  SocialMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x90);
  SocialMgr::SocialMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<SocialMgr>::GetInstance() */

long Sexy::LazySingleton<SocialMgr>::GetInstance(void)

{
  SocialMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x90);
  SocialMgr::SocialMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<DefineIDMgr>::GetInstancePtr() */

long Sexy::LazySingleton<DefineIDMgr>::GetInstancePtr(void)

{
  DefineIDMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(8);
  DefineIDMgr::DefineIDMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<DefineIDMgr>::GetInstance() */

long Sexy::LazySingleton<DefineIDMgr>::GetInstance(void)

{
  DefineIDMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(8);
  DefineIDMgr::DefineIDMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<PurchaseMgr>::GetInstancePtr() */

long Sexy::LazySingleton<PurchaseMgr>::GetInstancePtr(void)

{
  PurchaseMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x48);
  PurchaseMgr::PurchaseMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<PurchaseMgr>::GetInstance() */

long Sexy::LazySingleton<PurchaseMgr>::GetInstance(void)

{
  PurchaseMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x48);
  PurchaseMgr::PurchaseMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<MysteryCrystalMgr>::GetInstancePtr() */

long Sexy::LazySingleton<MysteryCrystalMgr>::GetInstancePtr(void)

{
  MysteryCrystalMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x58);
  MysteryCrystalMgr::MysteryCrystalMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<MysteryCrystalMgr>::GetInstance() */

long Sexy::LazySingleton<MysteryCrystalMgr>::GetInstance(void)

{
  MysteryCrystalMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x58);
  MysteryCrystalMgr::MysteryCrystalMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<PlantAccessoryMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<PlantAccessoryMgr>::~LazySingleton(LazySingleton<PlantAccessoryMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066090f0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<PlantAccessoryMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<PlantAccessoryMgr>::~LazySingleton(LazySingleton<PlantAccessoryMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<PlantAccessoryMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<PlantAccessoryMgr>::LazySingleton(LazySingleton<PlantAccessoryMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066090f0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<PlantAccessoryMgr>::GetInstancePtr() */

long Sexy::LazySingleton<PlantAccessoryMgr>::GetInstancePtr(void)

{
  PlantAccessoryMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x10);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  PlantAccessoryMgr::PlantAccessoryMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance() */

long Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance(void)

{
  PlantAccessoryMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x10);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  PlantAccessoryMgr::PlantAccessoryMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<CheatManager>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<CheatManager>::~LazySingleton(LazySingleton<CheatManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06610200;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<ZombieType> >::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::~LazySingleton
          (LazySingleton<ObjectTypeDirectory<ZombieType>> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0660fe80;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<GridItemType> >::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::~LazySingleton
          (LazySingleton<ObjectTypeDirectory<GridItemType>> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0660fec0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<SaveGameMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<SaveGameMgr>::~LazySingleton(LazySingleton<SaveGameMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06610280;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<PowerPropertySheet> >::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<PowerPropertySheet>>::~LazySingleton
          (LazySingleton<ObjectTypeDirectory<PowerPropertySheet>> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0660fe40;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<CreatureType> >::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<CreatureType>>::~LazySingleton
          (LazySingleton<ObjectTypeDirectory<CreatureType>> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0660ff00;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<EffectObjectType> >::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<EffectObjectType>>::~LazySingleton
          (LazySingleton<ObjectTypeDirectory<EffectObjectType>> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0660ff40;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<CollectableType> >::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::~LazySingleton
          (LazySingleton<ObjectTypeDirectory<CollectableType>> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0660ff80;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<PresentType> >::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<PresentType>>::~LazySingleton
          (LazySingleton<ObjectTypeDirectory<PresentType>> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06610000;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<PresentTable> >::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<PresentTable>>::~LazySingleton
          (LazySingleton<ObjectTypeDirectory<PresentTable>> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0660ffc0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<PowerupType> >::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<PowerupType>>::~LazySingleton
          (LazySingleton<ObjectTypeDirectory<PowerupType>> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06610040;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<GameFeatureType> >::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<GameFeatureType>>::~LazySingleton
          (LazySingleton<ObjectTypeDirectory<GameFeatureType>> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06610080;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<ToolPacketProps> >::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<ToolPacketProps>>::~LazySingleton
          (LazySingleton<ObjectTypeDirectory<ToolPacketProps>> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066102c0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<TrainingType> >::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<TrainingType>>::~LazySingleton
          (LazySingleton<ObjectTypeDirectory<TrainingType>> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06610300;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<HotUIColor> >::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<HotUIColor>>::~LazySingleton
          (LazySingleton<ObjectTypeDirectory<HotUIColor>> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06610100;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<HotUIColorAlias> >::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<HotUIColorAlias>>::~LazySingleton
          (LazySingleton<ObjectTypeDirectory<HotUIColorAlias>> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06610140;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<LevelScoringRules> >::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<LevelScoringRules>>::~LazySingleton
          (LazySingleton<ObjectTypeDirectory<LevelScoringRules>> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06610180;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<PrimeText_PotentialTypeface_Alias> >::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<PrimeText_PotentialTypeface_Alias>>::~LazySingleton
          (LazySingleton<ObjectTypeDirectory<PrimeText_PotentialTypeface_Alias>> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066100c0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<BonusType> >::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<BonusType>>::~LazySingleton
          (LazySingleton<ObjectTypeDirectory<BonusType>> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066101c0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<SaveGameMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<SaveGameMgr>::~LazySingleton(LazySingleton<SaveGameMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<CheatManager>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<CheatManager>::~LazySingleton(LazySingleton<CheatManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<HotUIColor> >::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<HotUIColor>>::~LazySingleton
          (LazySingleton<ObjectTypeDirectory<HotUIColor>> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<HotUIColorAlias> >::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<HotUIColorAlias>>::~LazySingleton
          (LazySingleton<ObjectTypeDirectory<HotUIColorAlias>> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<PrimeText_PotentialTypeface_Alias> >::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<PrimeText_PotentialTypeface_Alias>>::~LazySingleton
          (LazySingleton<ObjectTypeDirectory<PrimeText_PotentialTypeface_Alias>> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<PowerPropertySheet> >::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<PowerPropertySheet>>::~LazySingleton
          (LazySingleton<ObjectTypeDirectory<PowerPropertySheet>> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<ZombieType> >::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::~LazySingleton
          (LazySingleton<ObjectTypeDirectory<ZombieType>> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<CreatureType> >::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<CreatureType>>::~LazySingleton
          (LazySingleton<ObjectTypeDirectory<CreatureType>> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<GridItemType> >::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::~LazySingleton
          (LazySingleton<ObjectTypeDirectory<GridItemType>> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<EffectObjectType> >::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<EffectObjectType>>::~LazySingleton
          (LazySingleton<ObjectTypeDirectory<EffectObjectType>> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<CollectableType> >::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::~LazySingleton
          (LazySingleton<ObjectTypeDirectory<CollectableType>> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<PresentType> >::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<PresentType>>::~LazySingleton
          (LazySingleton<ObjectTypeDirectory<PresentType>> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<PresentTable> >::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<PresentTable>>::~LazySingleton
          (LazySingleton<ObjectTypeDirectory<PresentTable>> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<PowerupType> >::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<PowerupType>>::~LazySingleton
          (LazySingleton<ObjectTypeDirectory<PowerupType>> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<GameFeatureType> >::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<GameFeatureType>>::~LazySingleton
          (LazySingleton<ObjectTypeDirectory<GameFeatureType>> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<ToolPacketProps> >::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<ToolPacketProps>>::~LazySingleton
          (LazySingleton<ObjectTypeDirectory<ToolPacketProps>> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<BonusType> >::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<BonusType>>::~LazySingleton
          (LazySingleton<ObjectTypeDirectory<BonusType>> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<TrainingType> >::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<TrainingType>>::~LazySingleton
          (LazySingleton<ObjectTypeDirectory<TrainingType>> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<LevelScoringRules> >::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<LevelScoringRules>>::~LazySingleton
          (LazySingleton<ObjectTypeDirectory<LevelScoringRules>> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<CheatManager>::LazySingleton() */

void __thiscall Sexy::LazySingleton<CheatManager>::LazySingleton(LazySingleton<CheatManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06610200;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<Lua::CLuaEngine>::GetInstance() */

long Sexy::LazySingleton<Lua::CLuaEngine>::GetInstance(void)

{
  CLuaEngine *this;
  
  if (m_instance == 0) {
    this = ::operator_new(0xe58);
    Lua::CLuaEngine::CLuaEngine(this);
    if (m_instance == 0) {
      return 0;
    }
  }
  return m_instance + -8;
}


/* Sexy::LazySingleton<WorldMapActivityBtnTurnChangeManager>::GetInstancePtr() */

long Sexy::LazySingleton<WorldMapActivityBtnTurnChangeManager>::GetInstancePtr(void)

{
  WorldMapActivityBtnTurnChangeManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0xc0);
  WorldMapActivityBtnTurnChangeManager::WorldMapActivityBtnTurnChangeManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<CheatUIPanel>::GetInstancePtr() */

long Sexy::LazySingleton<CheatUIPanel>::GetInstancePtr(void)

{
  CheatUIPanel *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x88);
  CheatUIPanel::CheatUIPanel(this);
  return m_instance;
}


/* Sexy::LazySingleton<CollectableAdBoxMgr>::GetInstancePtr() */

long Sexy::LazySingleton<CollectableAdBoxMgr>::GetInstancePtr(void)

{
  CollectableAdBoxMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x38);
  CollectableAdBoxMgr::CollectableAdBoxMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<CollectableAdBoxMgr>::GetInstance() */

long Sexy::LazySingleton<CollectableAdBoxMgr>::GetInstance(void)

{
  CollectableAdBoxMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x38);
  CollectableAdBoxMgr::CollectableAdBoxMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<LuaUpdateMgr>::GetInstancePtr() */

long Sexy::LazySingleton<LuaUpdateMgr>::GetInstancePtr(void)

{
  LuaUpdateMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x38);
  LuaUpdateMgr::LuaUpdateMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<LuaUpdateMgr>::GetInstance() */

long Sexy::LazySingleton<LuaUpdateMgr>::GetInstance(void)

{
  LuaUpdateMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x38);
  LuaUpdateMgr::LuaUpdateMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<UIUpdateMgr>::GetInstancePtr() */

long Sexy::LazySingleton<UIUpdateMgr>::GetInstancePtr(void)

{
  UIUpdateMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x48);
  UIUpdateMgr::UIUpdateMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<UIUpdateMgr>::GetInstance() */

long Sexy::LazySingleton<UIUpdateMgr>::GetInstance(void)

{
  UIUpdateMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x48);
  UIUpdateMgr::UIUpdateMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<SeedPacketUtils>::GetInstancePtr() */

long Sexy::LazySingleton<SeedPacketUtils>::GetInstancePtr(void)

{
  SeedPacketUtils *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x38);
  SeedPacketUtils::SeedPacketUtils(this);
  return m_instance;
}


/* Sexy::LazySingleton<SeedPacketUtils>::GetInstance() */

long Sexy::LazySingleton<SeedPacketUtils>::GetInstance(void)

{
  SeedPacketUtils *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x38);
  SeedPacketUtils::SeedPacketUtils(this);
  return m_instance;
}


/* Sexy::LazySingleton<LevelUtils>::GetInstancePtr() */

long Sexy::LazySingleton<LevelUtils>::GetInstancePtr(void)

{
  LevelUtils *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x40);
  LevelUtils::LevelUtils(this);
  return m_instance;
}


/* Sexy::LazySingleton<LevelUtils>::GetInstance() */

long Sexy::LazySingleton<LevelUtils>::GetInstance(void)

{
  LevelUtils *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x40);
  LevelUtils::LevelUtils(this);
  return m_instance;
}


/* Sexy::LazySingleton<WechatMgr>::GetInstancePtr() */

long Sexy::LazySingleton<WechatMgr>::GetInstancePtr(void)

{
  WechatMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x10);
  WechatMgr::WechatMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<WechatMgr>::GetInstance() */

long Sexy::LazySingleton<WechatMgr>::GetInstance(void)

{
  WechatMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x10);
  WechatMgr::WechatMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<ViewContainerMgr>::GetInstancePtr() */

long Sexy::LazySingleton<ViewContainerMgr>::GetInstancePtr(void)

{
  ViewContainerMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x10);
  ViewContainerMgr::ViewContainerMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<ViewContainerMgr>::GetInstance() */

long Sexy::LazySingleton<ViewContainerMgr>::GetInstance(void)

{
  ViewContainerMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x10);
  ViewContainerMgr::ViewContainerMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<AchievementDriverMgr>::GetInstancePtr() */

long Sexy::LazySingleton<AchievementDriverMgr>::GetInstancePtr(void)

{
  AchievementDriverMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x10);
  AchievementDriverMgr::AchievementDriverMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<AchievementDriverMgr>::GetInstance() */

long Sexy::LazySingleton<AchievementDriverMgr>::GetInstance(void)

{
  AchievementDriverMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x10);
  AchievementDriverMgr::AchievementDriverMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<ShareDriverMgr>::GetInstancePtr() */

long Sexy::LazySingleton<ShareDriverMgr>::GetInstancePtr(void)

{
  ShareDriverMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x10);
  ShareDriverMgr::ShareDriverMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<ShareDriverMgr>::GetInstance() */

long Sexy::LazySingleton<ShareDriverMgr>::GetInstance(void)

{
  ShareDriverMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x10);
  ShareDriverMgr::ShareDriverMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<GemOfferMgr>::GetInstancePtr() */

long Sexy::LazySingleton<GemOfferMgr>::GetInstancePtr(void)

{
  GemOfferMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x40);
  GemOfferMgr::GemOfferMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<GemOfferMgr>::GetInstance() */

long Sexy::LazySingleton<GemOfferMgr>::GetInstance(void)

{
  GemOfferMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x40);
  GemOfferMgr::GemOfferMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr() */

long Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr(void)

{
  CustomLevelMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0xa40);
  CustomLevelMgr::CustomLevelMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<CustomLevelMgr>::GetInstance() */

long Sexy::LazySingleton<CustomLevelMgr>::GetInstance(void)

{
  CustomLevelMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0xa40);
  CustomLevelMgr::CustomLevelMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<TutorialEffectMgr>::GetInstancePtr() */

long Sexy::LazySingleton<TutorialEffectMgr>::GetInstancePtr(void)

{
  TutorialEffectMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x78);
  TutorialEffectMgr::TutorialEffectMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<TutorialEffectMgr>::GetInstance() */

long Sexy::LazySingleton<TutorialEffectMgr>::GetInstance(void)

{
  TutorialEffectMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x78);
  TutorialEffectMgr::TutorialEffectMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<ZombieType> >::LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::LazySingleton
          (LazySingleton<ObjectTypeDirectory<ZombieType>> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0660fe80;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<GridItemType> >::LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::LazySingleton
          (LazySingleton<ObjectTypeDirectory<GridItemType>> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0660fec0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<SaveGameMgr>::LazySingleton() */

void __thiscall Sexy::LazySingleton<SaveGameMgr>::LazySingleton(LazySingleton<SaveGameMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06610280;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<SaveGameMgr>::GetInstancePtr() */

long Sexy::LazySingleton<SaveGameMgr>::GetInstancePtr(void)

{
  SaveGameMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(8);
  *(undefined8 *)this = 0;
  SaveGameMgr::SaveGameMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<SaveGameMgr>::GetInstance() */

long Sexy::LazySingleton<SaveGameMgr>::GetInstance(void)

{
  SaveGameMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(8);
  *(undefined8 *)this = 0;
  SaveGameMgr::SaveGameMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<PowerPropertySheet> >::LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<PowerPropertySheet>>::LazySingleton
          (LazySingleton<ObjectTypeDirectory<PowerPropertySheet>> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0660fe40;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<CreatureType> >::LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<CreatureType>>::LazySingleton
          (LazySingleton<ObjectTypeDirectory<CreatureType>> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0660ff00;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<EffectObjectType> >::LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<EffectObjectType>>::LazySingleton
          (LazySingleton<ObjectTypeDirectory<EffectObjectType>> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0660ff40;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<CollectableType> >::LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::LazySingleton
          (LazySingleton<ObjectTypeDirectory<CollectableType>> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0660ff80;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<PresentType> >::LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<PresentType>>::LazySingleton
          (LazySingleton<ObjectTypeDirectory<PresentType>> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06610000;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<PresentTable> >::LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<PresentTable>>::LazySingleton
          (LazySingleton<ObjectTypeDirectory<PresentTable>> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0660ffc0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<PowerupType> >::LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<PowerupType>>::LazySingleton
          (LazySingleton<ObjectTypeDirectory<PowerupType>> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06610040;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<GameFeatureType> >::LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<GameFeatureType>>::LazySingleton
          (LazySingleton<ObjectTypeDirectory<GameFeatureType>> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06610080;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<ToolPacketProps> >::LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<ToolPacketProps>>::LazySingleton
          (LazySingleton<ObjectTypeDirectory<ToolPacketProps>> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066102c0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<TrainingType> >::LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<TrainingType>>::LazySingleton
          (LazySingleton<ObjectTypeDirectory<TrainingType>> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06610300;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<HotUIColor> >::LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<HotUIColor>>::LazySingleton
          (LazySingleton<ObjectTypeDirectory<HotUIColor>> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06610100;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<HotUIColorAlias> >::LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<HotUIColorAlias>>::LazySingleton
          (LazySingleton<ObjectTypeDirectory<HotUIColorAlias>> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06610140;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<LevelScoringRules> >::LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<LevelScoringRules>>::LazySingleton
          (LazySingleton<ObjectTypeDirectory<LevelScoringRules>> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06610180;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<PrimeText_PotentialTypeface_Alias> >::LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<PrimeText_PotentialTypeface_Alias>>::LazySingleton
          (LazySingleton<ObjectTypeDirectory<PrimeText_PotentialTypeface_Alias>> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066100c0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<BonusType> >::LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<BonusType>>::LazySingleton
          (LazySingleton<ObjectTypeDirectory<BonusType>> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066101c0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<CheatManager>::GetInstancePtr() */

long Sexy::LazySingleton<CheatManager>::GetInstancePtr(void)

{
  CheatManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x70);
  CheatManager::CheatManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<ZombieType> >::GetInstancePtr() */

long Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr(void)

{
  ObjectTypeDirectory<ZombieType> *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x58);
  ObjectTypeDirectory<ZombieType>::ObjectTypeDirectory(this);
  return m_instance;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<GridItemType> >::GetInstancePtr() */

long Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr(void)

{
  ObjectTypeDirectory<GridItemType> *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x58);
  ObjectTypeDirectory<GridItemType>::ObjectTypeDirectory(this);
  return m_instance;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<PowerPropertySheet> >::GetInstancePtr() */

long Sexy::LazySingleton<ObjectTypeDirectory<PowerPropertySheet>>::GetInstancePtr(void)

{
  ObjectTypeDirectory<PowerPropertySheet> *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x58);
  ObjectTypeDirectory<PowerPropertySheet>::ObjectTypeDirectory(this);
  return m_instance;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<CreatureType> >::GetInstancePtr() */

long Sexy::LazySingleton<ObjectTypeDirectory<CreatureType>>::GetInstancePtr(void)

{
  ObjectTypeDirectory<CreatureType> *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x58);
  ObjectTypeDirectory<CreatureType>::ObjectTypeDirectory(this);
  return m_instance;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<EffectObjectType> >::GetInstancePtr() */

long Sexy::LazySingleton<ObjectTypeDirectory<EffectObjectType>>::GetInstancePtr(void)

{
  ObjectTypeDirectory<EffectObjectType> *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x58);
  ObjectTypeDirectory<EffectObjectType>::ObjectTypeDirectory(this);
  return m_instance;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<CollectableType> >::GetInstancePtr() */

long Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr(void)

{
  ObjectTypeDirectory<CollectableType> *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x58);
  ObjectTypeDirectory<CollectableType>::ObjectTypeDirectory(this);
  return m_instance;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<PresentType> >::GetInstancePtr() */

long Sexy::LazySingleton<ObjectTypeDirectory<PresentType>>::GetInstancePtr(void)

{
  ObjectTypeDirectory<PresentType> *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x58);
  ObjectTypeDirectory<PresentType>::ObjectTypeDirectory(this);
  return m_instance;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<PresentTable> >::GetInstancePtr() */

long Sexy::LazySingleton<ObjectTypeDirectory<PresentTable>>::GetInstancePtr(void)

{
  ObjectTypeDirectory<PresentTable> *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x58);
  ObjectTypeDirectory<PresentTable>::ObjectTypeDirectory(this);
  return m_instance;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<PowerupType> >::GetInstancePtr() */

long Sexy::LazySingleton<ObjectTypeDirectory<PowerupType>>::GetInstancePtr(void)

{
  ObjectTypeDirectory<PowerupType> *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x58);
  ObjectTypeDirectory<PowerupType>::ObjectTypeDirectory(this);
  return m_instance;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<GameFeatureType> >::GetInstancePtr() */

long Sexy::LazySingleton<ObjectTypeDirectory<GameFeatureType>>::GetInstancePtr(void)

{
  ObjectTypeDirectory<GameFeatureType> *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x58);
  ObjectTypeDirectory<GameFeatureType>::ObjectTypeDirectory(this);
  return m_instance;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<ToolPacketProps> >::GetInstancePtr() */

long Sexy::LazySingleton<ObjectTypeDirectory<ToolPacketProps>>::GetInstancePtr(void)

{
  ObjectTypeDirectory<ToolPacketProps> *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x58);
  ObjectTypeDirectory<ToolPacketProps>::ObjectTypeDirectory(this);
  return m_instance;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<TrainingType> >::GetInstancePtr() */

long Sexy::LazySingleton<ObjectTypeDirectory<TrainingType>>::GetInstancePtr(void)

{
  ObjectTypeDirectory<TrainingType> *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x58);
  ObjectTypeDirectory<TrainingType>::ObjectTypeDirectory(this);
  return m_instance;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<HotUIColor> >::GetInstancePtr() */

long Sexy::LazySingleton<ObjectTypeDirectory<HotUIColor>>::GetInstancePtr(void)

{
  ObjectTypeDirectory<HotUIColor> *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x58);
  ObjectTypeDirectory<HotUIColor>::ObjectTypeDirectory(this);
  return m_instance;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<HotUIColorAlias> >::GetInstancePtr() */

long Sexy::LazySingleton<ObjectTypeDirectory<HotUIColorAlias>>::GetInstancePtr(void)

{
  ObjectTypeDirectory<HotUIColorAlias> *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x58);
  ObjectTypeDirectory<HotUIColorAlias>::ObjectTypeDirectory(this);
  return m_instance;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<LevelScoringRules> >::GetInstancePtr() */

long Sexy::LazySingleton<ObjectTypeDirectory<LevelScoringRules>>::GetInstancePtr(void)

{
  ObjectTypeDirectory<LevelScoringRules> *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x58);
  ObjectTypeDirectory<LevelScoringRules>::ObjectTypeDirectory(this);
  return m_instance;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<PrimeText_PotentialTypeface_Alias> >::GetInstancePtr() */

long Sexy::LazySingleton<ObjectTypeDirectory<PrimeText_PotentialTypeface_Alias>>::GetInstancePtr
               (void)

{
  ObjectTypeDirectory<PrimeText_PotentialTypeface_Alias> *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x58);
  ObjectTypeDirectory<PrimeText_PotentialTypeface_Alias>::ObjectTypeDirectory(this);
  return m_instance;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<BonusType> >::GetInstancePtr() */

long Sexy::LazySingleton<ObjectTypeDirectory<BonusType>>::GetInstancePtr(void)

{
  ObjectTypeDirectory<BonusType> *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x58);
  ObjectTypeDirectory<BonusType>::ObjectTypeDirectory(this);
  return m_instance;
}


/* Sexy::LazySingleton<StateMachineTableBuilder>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<StateMachineTableBuilder>::~LazySingleton
          (LazySingleton<StateMachineTableBuilder> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06611020;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<TrialCardManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<TrialCardManager>::~LazySingleton(LazySingleton<TrialCardManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06611060;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<StateMachineTableBuilder>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<StateMachineTableBuilder>::~LazySingleton
          (LazySingleton<StateMachineTableBuilder> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<TrialCardManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<TrialCardManager>::~LazySingleton(LazySingleton<TrialCardManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<StateMachineTableBuilder>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<StateMachineTableBuilder>::LazySingleton
          (LazySingleton<StateMachineTableBuilder> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06611020;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<PennyClassroomManager>::GetInstancePtr() */

long Sexy::LazySingleton<PennyClassroomManager>::GetInstancePtr(void)

{
  PennyClassroomManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0xe0);
  PennyClassroomManager::PennyClassroomManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<SpringChargeManager>::GetInstancePtr() */

long Sexy::LazySingleton<SpringChargeManager>::GetInstancePtr(void)

{
  SpringChargeManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x120);
  SpringChargeManager::SpringChargeManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<talkingGame>::GetInstancePtr() */

long Sexy::LazySingleton<talkingGame>::GetInstancePtr(void)

{
  talkingGame *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x20);
  talkingGame::talkingGame(this);
  return m_instance;
}


/* Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr() */

long Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr(void)

{
  PlantWarsNetworkMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x128);
  PlantWarsNetworkMgr::PlantWarsNetworkMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr() */

long Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr(void)

{
  PVZ1ModeNetworkMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x188);
  PVZ1ModeNetworkMgr::PVZ1ModeNetworkMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<UnchartedBoostMgr>::GetInstancePtr() */

long Sexy::LazySingleton<UnchartedBoostMgr>::GetInstancePtr(void)

{
  UnchartedBoostMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x20);
  UnchartedBoostMgr::UnchartedBoostMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<RichmanTileEventManager>::GetInstancePtr() */

long Sexy::LazySingleton<RichmanTileEventManager>::GetInstancePtr(void)

{
  RichmanTileEventManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x48);
  RichmanTileEventManager::RichmanTileEventManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<RichmanTileEventManager>::GetInstance() */

long Sexy::LazySingleton<RichmanTileEventManager>::GetInstance(void)

{
  RichmanTileEventManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x48);
  RichmanTileEventManager::RichmanTileEventManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<TrialCardManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<TrialCardManager>::LazySingleton(LazySingleton<TrialCardManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06611060;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<PlantBoostMgr>::GetInstancePtr() */

long Sexy::LazySingleton<PlantBoostMgr>::GetInstancePtr(void)

{
  PlantBoostMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(8);
  PlantBoostMgr::PlantBoostMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<PlantBoostMgr>::GetInstance() */

long Sexy::LazySingleton<PlantBoostMgr>::GetInstance(void)

{
  PlantBoostMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(8);
  PlantBoostMgr::PlantBoostMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<CardTargetCursorEffectMgr>::GetInstancePtr() */

long Sexy::LazySingleton<CardTargetCursorEffectMgr>::GetInstancePtr(void)

{
  CardTargetCursorEffectMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x10);
  CardTargetCursorEffectMgr::CardTargetCursorEffectMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<CardTargetCursorEffectMgr>::GetInstance() */

long Sexy::LazySingleton<CardTargetCursorEffectMgr>::GetInstance(void)

{
  CardTargetCursorEffectMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x10);
  CardTargetCursorEffectMgr::CardTargetCursorEffectMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr() */

long Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr(void)

{
  StateMachineTableBuilder *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x50);
  StateMachineTableBuilder::StateMachineTableBuilder(this);
  return m_instance;
}


/* Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance() */

long Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance(void)

{
  StateMachineTableBuilder *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x50);
  StateMachineTableBuilder::StateMachineTableBuilder(this);
  return m_instance;
}


/* Sexy::LazySingleton<TrialCardManager>::GetInstancePtr() */

long Sexy::LazySingleton<TrialCardManager>::GetInstancePtr(void)

{
  TrialCardManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x80);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  TrialCardManager::TrialCardManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<PlantType> >::GetInstance() */

long Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstance(void)

{
  ObjectTypeDirectory<PlantType> *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x58);
  ObjectTypeDirectory<PlantType>::ObjectTypeDirectory(this);
  return m_instance;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<ZombieType> >::GetInstance() */

long Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstance(void)

{
  ObjectTypeDirectory<ZombieType> *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x58);
  ObjectTypeDirectory<ZombieType>::ObjectTypeDirectory(this);
  return m_instance;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<CreatureType> >::GetInstance() */

long Sexy::LazySingleton<ObjectTypeDirectory<CreatureType>>::GetInstance(void)

{
  ObjectTypeDirectory<CreatureType> *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x58);
  ObjectTypeDirectory<CreatureType>::ObjectTypeDirectory(this);
  return m_instance;
}


/* Sexy::LazySingleton<NewRecallBillingRewardManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<NewRecallBillingRewardManager>::~LazySingleton
          (LazySingleton<NewRecallBillingRewardManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06611ad0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<NewRecallBillingRewardManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<NewRecallBillingRewardManager>::~LazySingleton
          (LazySingleton<NewRecallBillingRewardManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<DangerRoomSpecialOfferExtraManager>::GetInstancePtr() */

long Sexy::LazySingleton<DangerRoomSpecialOfferExtraManager>::GetInstancePtr(void)

{
  DangerRoomSpecialOfferExtraManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x38);
  DangerRoomSpecialOfferExtraManager::DangerRoomSpecialOfferExtraManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<NewerPresentMgr>::GetInstancePtr() */

long Sexy::LazySingleton<NewerPresentMgr>::GetInstancePtr(void)

{
  NewerPresentMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x40);
  NewerPresentMgr::NewerPresentMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<NewerPresentMgr>::GetInstance() */

long Sexy::LazySingleton<NewerPresentMgr>::GetInstance(void)

{
  NewerPresentMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x40);
  NewerPresentMgr::NewerPresentMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<ArtifactPresentMgr>::GetInstancePtr() */

long Sexy::LazySingleton<ArtifactPresentMgr>::GetInstancePtr(void)

{
  ArtifactPresentMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x58);
  ArtifactPresentMgr::ArtifactPresentMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<ArtifactPresentMgr>::GetInstance() */

long Sexy::LazySingleton<ArtifactPresentMgr>::GetInstance(void)

{
  ArtifactPresentMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x58);
  ArtifactPresentMgr::ArtifactPresentMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<SecretStoreMgr>::GetInstancePtr() */

long Sexy::LazySingleton<SecretStoreMgr>::GetInstancePtr(void)

{
  SecretStoreMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x40);
  SecretStoreMgr::SecretStoreMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<SecretStoreMgr>::GetInstance() */

long Sexy::LazySingleton<SecretStoreMgr>::GetInstance(void)

{
  SecretStoreMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x40);
  SecretStoreMgr::SecretStoreMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<MonthlyCardSpecialManager>::GetInstancePtr() */

long Sexy::LazySingleton<MonthlyCardSpecialManager>::GetInstancePtr(void)

{
  MonthlyCardSpecialManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x40);
  MonthlyCardSpecialManager::MonthlyCardSpecialManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<MonthlyCardSpecialManager>::GetInstance() */

long Sexy::LazySingleton<MonthlyCardSpecialManager>::GetInstance(void)

{
  MonthlyCardSpecialManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x40);
  MonthlyCardSpecialManager::MonthlyCardSpecialManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<NewRecallBillingRewardManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<NewRecallBillingRewardManager>::LazySingleton
          (LazySingleton<NewRecallBillingRewardManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06611ad0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<NewRecallBillingRewardManager>::GetInstancePtr() */

long Sexy::LazySingleton<NewRecallBillingRewardManager>::GetInstancePtr(void)

{
  NewRecallBillingRewardManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x10);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  NewRecallBillingRewardManager::NewRecallBillingRewardManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<PlantFamilyMgr>::GetInstancePtr() */

long Sexy::LazySingleton<PlantFamilyMgr>::GetInstancePtr(void)

{
  PlantFamilyMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x40);
  PlantFamilyMgr::PlantFamilyMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<PlantFamilyMgr>::GetInstance() */

long Sexy::LazySingleton<PlantFamilyMgr>::GetInstance(void)

{
  PlantFamilyMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x40);
  PlantFamilyMgr::PlantFamilyMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<SecretGachaMgr>::GetInstancePtr() */

long Sexy::LazySingleton<SecretGachaMgr>::GetInstancePtr(void)

{
  SecretGachaMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x68);
  SecretGachaMgr::SecretGachaMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<SecretGachaMgr>::GetInstance() */

long Sexy::LazySingleton<SecretGachaMgr>::GetInstance(void)

{
  SecretGachaMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x68);
  SecretGachaMgr::SecretGachaMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<ADManager>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<ADManager>::~LazySingleton(LazySingleton<ADManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06615220;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<ADManager>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<ADManager>::~LazySingleton(LazySingleton<ADManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<ADManager>::LazySingleton() */

void __thiscall Sexy::LazySingleton<ADManager>::LazySingleton(LazySingleton<ADManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06615220;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<AccountRemoveMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<AccountRemoveMgr>::~LazySingleton(LazySingleton<AccountRemoveMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06615470;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<AccountRemoveMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<AccountRemoveMgr>::~LazySingleton(LazySingleton<AccountRemoveMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<AccountRemoveMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<AccountRemoveMgr>::LazySingleton(LazySingleton<AccountRemoveMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06615470;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<AccountRemoveMgr>::GetInstancePtr() */

long Sexy::LazySingleton<AccountRemoveMgr>::GetInstancePtr(void)

{
  AccountRemoveMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x20);
  AccountRemoveMgr::AccountRemoveMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<AccountRemoveMgr>::GetInstance() */

long Sexy::LazySingleton<AccountRemoveMgr>::GetInstance(void)

{
  AccountRemoveMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x20);
  AccountRemoveMgr::AccountRemoveMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<SocialShareMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<SocialShareMgr>::~LazySingleton(LazySingleton<SocialShareMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06615a20;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<SocialShareMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<SocialShareMgr>::~LazySingleton(LazySingleton<SocialShareMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<SocialShareMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<SocialShareMgr>::LazySingleton(LazySingleton<SocialShareMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06615a20;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<ShareDriverMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ShareDriverMgr>::~LazySingleton(LazySingleton<ShareDriverMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06615b20;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<ShareDriverMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ShareDriverMgr>::~LazySingleton(LazySingleton<ShareDriverMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<ShareDriverMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<ShareDriverMgr>::LazySingleton(LazySingleton<ShareDriverMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06615b20;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<AchievementDriverMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<AchievementDriverMgr>::~LazySingleton(LazySingleton<AchievementDriverMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06615c70;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<AchievementDriverMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<AchievementDriverMgr>::~LazySingleton(LazySingleton<AchievementDriverMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<AchievementDriverMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<AchievementDriverMgr>::LazySingleton(LazySingleton<AchievementDriverMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06615c70;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<NewPlantUIMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<NewPlantUIMgr>::~LazySingleton(LazySingleton<NewPlantUIMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06615dc0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<PlantPediaManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<PlantPediaManager>::~LazySingleton(LazySingleton<PlantPediaManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066168c0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<PlantPediaManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<PlantPediaManager>::~LazySingleton(LazySingleton<PlantPediaManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<NewPlantUIMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<NewPlantUIMgr>::~LazySingleton(LazySingleton<NewPlantUIMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<NewPlantUIMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<NewPlantUIMgr>::LazySingleton(LazySingleton<NewPlantUIMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06615dc0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<NewPlantUIMgr>::GetInstancePtr() */

long Sexy::LazySingleton<NewPlantUIMgr>::GetInstancePtr(void)

{
  NewPlantUIMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x10);
  NewPlantUIMgr::NewPlantUIMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<HotUIManager>::GetInstancePtr() */

long Sexy::LazySingleton<HotUIManager>::GetInstancePtr(void)

{
  HotUIManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x28);
  HotUIManager::HotUIManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<HotUIManager>::GetInstance() */

long Sexy::LazySingleton<HotUIManager>::GetInstance(void)

{
  HotUIManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x28);
  HotUIManager::HotUIManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<PlantPediaManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<PlantPediaManager>::LazySingleton(LazySingleton<PlantPediaManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066168c0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<PlantPediaManager>::GetInstancePtr() */

long Sexy::LazySingleton<PlantPediaManager>::GetInstancePtr(void)

{
  PlantPediaManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x10);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  PlantPediaManager::PlantPediaManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<LawnStringUpdater>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<LawnStringUpdater>::~LazySingleton(LazySingleton<LawnStringUpdater> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0661da30;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<LawnStringUpdater>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<LawnStringUpdater>::~LazySingleton(LazySingleton<LawnStringUpdater> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<LawnStringUpdater>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<LawnStringUpdater>::LazySingleton(LazySingleton<LawnStringUpdater> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0661da30;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<LevelBasedModifierModuleMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<LevelBasedModifierModuleMgr>::~LazySingleton
          (LazySingleton<LevelBasedModifierModuleMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0661db40;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<LevelBasedModifierModuleMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<LevelBasedModifierModuleMgr>::~LazySingleton
          (LazySingleton<LevelBasedModifierModuleMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<LevelBasedModifierModuleMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<LevelBasedModifierModuleMgr>::LazySingleton
          (LazySingleton<LevelBasedModifierModuleMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0661db40;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<UnchartedBoostMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<UnchartedBoostMgr>::~LazySingleton(LazySingleton<UnchartedBoostMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0661fb30;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<UnchartedBoostMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<UnchartedBoostMgr>::~LazySingleton(LazySingleton<UnchartedBoostMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<UnchartedBoostMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<UnchartedBoostMgr>::LazySingleton(LazySingleton<UnchartedBoostMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0661fb30;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<RechargeDailySignActivityManager>::GetInstancePtr() */

long Sexy::LazySingleton<RechargeDailySignActivityManager>::GetInstancePtr(void)

{
  RechargeDailySignActivityManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x48);
  RechargeDailySignActivityManager::RechargeDailySignActivityManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<DiscountShopActivityManager>::GetInstancePtr() */

long Sexy::LazySingleton<DiscountShopActivityManager>::GetInstancePtr(void)

{
  DiscountShopActivityManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x40);
  DiscountShopActivityManager::DiscountShopActivityManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<UIFutureGiftBoxMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<UIFutureGiftBoxMgr>::~LazySingleton(LazySingleton<UIFutureGiftBoxMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06628330;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<UIFutureGiftBoxMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<UIFutureGiftBoxMgr>::~LazySingleton(LazySingleton<UIFutureGiftBoxMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<UIFutureGiftBoxMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<UIFutureGiftBoxMgr>::LazySingleton(LazySingleton<UIFutureGiftBoxMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06628330;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<PlantCultivateManager>::GetInstancePtr() */

long Sexy::LazySingleton<PlantCultivateManager>::GetInstancePtr(void)

{
  PlantCultivateManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x90);
  PlantCultivateManager::PlantCultivateManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<PartyAssistMgr>::GetInstancePtr() */

long Sexy::LazySingleton<PartyAssistMgr>::GetInstancePtr(void)

{
  PartyAssistMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x108);
  PartyAssistMgr::PartyAssistMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<AutumnHarvestMgr>::GetInstancePtr() */

long Sexy::LazySingleton<AutumnHarvestMgr>::GetInstancePtr(void)

{
  AutumnHarvestMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x128);
  AutumnHarvestMgr::AutumnHarvestMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<MiniGameCollectionNetworkMgr>::GetInstancePtr() */

long Sexy::LazySingleton<MiniGameCollectionNetworkMgr>::GetInstancePtr(void)

{
  MiniGameCollectionNetworkMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x108);
  MiniGameCollectionNetworkMgr::MiniGameCollectionNetworkMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<RichManUIMgr>::GetInstancePtr() */

long Sexy::LazySingleton<RichManUIMgr>::GetInstancePtr(void)

{
  RichManUIMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0xf8);
  RichManUIMgr::RichManUIMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<RichManUIMgr>::GetInstance() */

long Sexy::LazySingleton<RichManUIMgr>::GetInstance(void)

{
  RichManUIMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0xf8);
  RichManUIMgr::RichManUIMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<UIFutureGiftBoxMgr>::GetInstancePtr() */

long Sexy::LazySingleton<UIFutureGiftBoxMgr>::GetInstancePtr(void)

{
  UIFutureGiftBoxMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x58);
  UIFutureGiftBoxMgr::UIFutureGiftBoxMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<UIFutureGiftBoxMgr>::GetInstance() */

long Sexy::LazySingleton<UIFutureGiftBoxMgr>::GetInstance(void)

{
  UIFutureGiftBoxMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x58);
  UIFutureGiftBoxMgr::UIFutureGiftBoxMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<PlantCultivateManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<PlantCultivateManager>::~LazySingleton
          (LazySingleton<PlantCultivateManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0663ed00;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<PlantCultivateTaskManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<PlantCultivateTaskManager>::~LazySingleton
          (LazySingleton<PlantCultivateTaskManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0663ed20;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<PlantCultivateTaskManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<PlantCultivateTaskManager>::~LazySingleton
          (LazySingleton<PlantCultivateTaskManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<PlantCultivateManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<PlantCultivateManager>::~LazySingleton
          (LazySingleton<PlantCultivateManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<PlantCultivateManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<PlantCultivateManager>::LazySingleton
          (LazySingleton<PlantCultivateManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0663ed00;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<PlantCultivateTaskManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<PlantCultivateTaskManager>::LazySingleton
          (LazySingleton<PlantCultivateTaskManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0663ed20;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<PlantCultivateTaskManager>::GetInstancePtr() */

long Sexy::LazySingleton<PlantCultivateTaskManager>::GetInstancePtr(void)

{
  PlantCultivateTaskManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x48);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  PlantCultivateTaskManager::PlantCultivateTaskManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<GiftFoReturnTaskManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<GiftFoReturnTaskManager>::~LazySingleton
          (LazySingleton<GiftFoReturnTaskManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06640580;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<GiftFoReturnTaskManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<GiftFoReturnTaskManager>::~LazySingleton
          (LazySingleton<GiftFoReturnTaskManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<GiftFoReturnTaskManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<GiftFoReturnTaskManager>::LazySingleton
          (LazySingleton<GiftFoReturnTaskManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06640580;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<QuickJumpUtil>::GetInstancePtr() */

long Sexy::LazySingleton<QuickJumpUtil>::GetInstancePtr(void)

{
  QuickJumpUtil *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x10);
  QuickJumpUtil::QuickJumpUtil(this);
  return m_instance;
}


/* Sexy::LazySingleton<QuickJumpUtil>::GetInstance() */

long Sexy::LazySingleton<QuickJumpUtil>::GetInstance(void)

{
  QuickJumpUtil *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x10);
  QuickJumpUtil::QuickJumpUtil(this);
  return m_instance;
}


/* Sexy::LazySingleton<GiftFoReturnTaskManager>::GetInstancePtr() */

long Sexy::LazySingleton<GiftFoReturnTaskManager>::GetInstancePtr(void)

{
  GiftFoReturnTaskManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x48);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  GiftFoReturnTaskManager::GiftFoReturnTaskManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<DaveKitchenTaskManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<DaveKitchenTaskManager>::~LazySingleton
          (LazySingleton<DaveKitchenTaskManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06642040;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<DaveKitchenTaskManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<DaveKitchenTaskManager>::~LazySingleton
          (LazySingleton<DaveKitchenTaskManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<DaveKitchenTaskManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<DaveKitchenTaskManager>::LazySingleton
          (LazySingleton<DaveKitchenTaskManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06642040;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<DaveKitchenTaskManager>::GetInstancePtr() */

long Sexy::LazySingleton<DaveKitchenTaskManager>::GetInstancePtr(void)

{
  DaveKitchenTaskManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x48);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  DaveKitchenTaskManager::DaveKitchenTaskManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<NewPVPMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<NewPVPMgr>::~LazySingleton(LazySingleton<NewPVPMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06646ae0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<NewPVPTaskManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<NewPVPTaskManager>::~LazySingleton(LazySingleton<NewPVPTaskManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06646b00;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<NewPVPTaskManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<NewPVPTaskManager>::~LazySingleton(LazySingleton<NewPVPTaskManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<NewPVPMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<NewPVPMgr>::~LazySingleton(LazySingleton<NewPVPMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<NewPVPMgr>::LazySingleton() */

void __thiscall Sexy::LazySingleton<NewPVPMgr>::LazySingleton(LazySingleton<NewPVPMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06646ae0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<NewPVPTaskManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<NewPVPTaskManager>::LazySingleton(LazySingleton<NewPVPTaskManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06646b00;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<NewPVPTaskManager>::GetInstancePtr() */

long Sexy::LazySingleton<NewPVPTaskManager>::GetInstancePtr(void)

{
  NewPVPTaskManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x48);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  NewPVPTaskManager::NewPVPTaskManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<NewPVPMgr>::GetInstance() */

long Sexy::LazySingleton<NewPVPMgr>::GetInstance(void)

{
  NewPVPMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x520);
  NewPVPMgr::NewPVPMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<NewPVPShopMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<NewPVPShopMgr>::~LazySingleton(LazySingleton<NewPVPShopMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06657500;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<NewPVPShopMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<NewPVPShopMgr>::~LazySingleton(LazySingleton<NewPVPShopMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<NewPVPShopMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<NewPVPShopMgr>::LazySingleton(LazySingleton<NewPVPShopMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06657500;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<CardGameRewardMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<CardGameRewardMgr>::~LazySingleton(LazySingleton<CardGameRewardMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066596c0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<CardGameRewardMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<CardGameRewardMgr>::~LazySingleton(LazySingleton<CardGameRewardMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<CardGameNetworkMgr>::GetInstancePtr() */

long Sexy::LazySingleton<CardGameNetworkMgr>::GetInstancePtr(void)

{
  CardGameNetworkMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x110);
  CardGameNetworkMgr::CardGameNetworkMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<CardGameRewardMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<CardGameRewardMgr>::LazySingleton(LazySingleton<CardGameRewardMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066596c0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<DaveTreasureDataManager>::GetInstancePtr() */

long Sexy::LazySingleton<DaveTreasureDataManager>::GetInstancePtr(void)

{
  DaveTreasureDataManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x10);
  DaveTreasureDataManager::DaveTreasureDataManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<CardGameRewardMgr>::GetInstancePtr() */

long Sexy::LazySingleton<CardGameRewardMgr>::GetInstancePtr(void)

{
  CardGameRewardMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x28);
  CardGameRewardMgr::CardGameRewardMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<CardGameRewardMgr>::GetInstance() */

long Sexy::LazySingleton<CardGameRewardMgr>::GetInstance(void)

{
  CardGameRewardMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x28);
  CardGameRewardMgr::CardGameRewardMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr() */

long Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr(void)

{
  CardBoardMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x50);
  CardBoardMgr::CardBoardMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<CardGameNetworkMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<CardGameNetworkMgr>::~LazySingleton(LazySingleton<CardGameNetworkMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0665b8b0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<CardGameNetworkMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<CardGameNetworkMgr>::~LazySingleton(LazySingleton<CardGameNetworkMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<CardGameNetworkMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<CardGameNetworkMgr>::LazySingleton(LazySingleton<CardGameNetworkMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0665b8b0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<CardBoardMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<CardBoardMgr>::~LazySingleton(LazySingleton<CardBoardMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0665bcc0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<CardBoardMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<CardBoardMgr>::~LazySingleton(LazySingleton<CardBoardMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<CardBoardMgr>::LazySingleton() */

void __thiscall Sexy::LazySingleton<CardBoardMgr>::LazySingleton(LazySingleton<CardBoardMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0665bcc0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<CustomLevelMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<CustomLevelMgr>::~LazySingleton(LazySingleton<CustomLevelMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0665d8c0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<CustomLevelMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<CustomLevelMgr>::~LazySingleton(LazySingleton<CustomLevelMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<CustomLevelMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<CustomLevelMgr>::LazySingleton(LazySingleton<CustomLevelMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0665d8c0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<CustomLevelShopMgr>::GetInstancePtr() */

long Sexy::LazySingleton<CustomLevelShopMgr>::GetInstancePtr(void)

{
  CustomLevelShopMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(200);
  CustomLevelShopMgr::CustomLevelShopMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<CustomLevelSettingManager>::GetInstancePtr() */

long Sexy::LazySingleton<CustomLevelSettingManager>::GetInstancePtr(void)

{
  CustomLevelSettingManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x28);
  CustomLevelSettingManager::CustomLevelSettingManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<CardTargetCursorEffectMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<CardTargetCursorEffectMgr>::~LazySingleton
          (LazySingleton<CardTargetCursorEffectMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066668b0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<CardTargetCursorEffectMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<CardTargetCursorEffectMgr>::~LazySingleton
          (LazySingleton<CardTargetCursorEffectMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<CardTargetCursorEffectMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<CardTargetCursorEffectMgr>::LazySingleton
          (LazySingleton<CardTargetCursorEffectMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066668b0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<CardBoardMgr>::GetInstance() */

long Sexy::LazySingleton<CardBoardMgr>::GetInstance(void)

{
  CardBoardMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x50);
  CardBoardMgr::CardBoardMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<HotUIManager>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<HotUIManager>::~LazySingleton(LazySingleton<HotUIManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0666f770;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<HotUIManager>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<HotUIManager>::~LazySingleton(LazySingleton<HotUIManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<HotUIManager>::LazySingleton() */

void __thiscall Sexy::LazySingleton<HotUIManager>::LazySingleton(LazySingleton<HotUIManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0666f770;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<WhitelistManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<WhitelistManager>::~LazySingleton(LazySingleton<WhitelistManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06673fd0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<WhitelistManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<WhitelistManager>::~LazySingleton(LazySingleton<WhitelistManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<WhitelistManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<WhitelistManager>::LazySingleton(LazySingleton<WhitelistManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06673fd0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<WhitelistManager>::GetInstancePtr() */

long Sexy::LazySingleton<WhitelistManager>::GetInstancePtr(void)

{
  WhitelistManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x28);
  *(undefined8 *)this = 0;
  this[8] = (WhitelistManager)0x0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  WhitelistManager::WhitelistManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<WhitelistManager>::GetInstance() */

long Sexy::LazySingleton<WhitelistManager>::GetInstance(void)

{
  WhitelistManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x28);
  *(undefined8 *)this = 0;
  this[8] = (WhitelistManager)0x0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  WhitelistManager::WhitelistManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<PennyPerkMgr>::GetInstancePtr() */

long Sexy::LazySingleton<PennyPerkMgr>::GetInstancePtr(void)

{
  PennyPerkMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x38);
  PennyPerkMgr::PennyPerkMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<PennyPerkMgr>::GetInstance() */

long Sexy::LazySingleton<PennyPerkMgr>::GetInstance(void)

{
  PennyPerkMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x38);
  PennyPerkMgr::PennyPerkMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr() */

long Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr(void)

{
  RiftNetworkMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x348);
  RiftNetworkMgr::RiftNetworkMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<PennyTaskManager>::GetInstancePtr() */

long Sexy::LazySingleton<PennyTaskManager>::GetInstancePtr(void)

{
  PennyTaskManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x48);
  PennyTaskManager::PennyTaskManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<RiftValidateMgr>::GetInstancePtr() */

long Sexy::LazySingleton<RiftValidateMgr>::GetInstancePtr(void)

{
  RiftValidateMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0xb8);
  RiftValidateMgr::RiftValidateMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<RiftValidateMgr>::GetInstance() */

long Sexy::LazySingleton<RiftValidateMgr>::GetInstance(void)

{
  RiftValidateMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0xb8);
  RiftValidateMgr::RiftValidateMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<RiftStatus>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<RiftStatus>::~LazySingleton(LazySingleton<RiftStatus> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0667eb40;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<RiftStatus>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<RiftStatus>::~LazySingleton(LazySingleton<RiftStatus> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<RiftStatus>::LazySingleton() */

void __thiscall Sexy::LazySingleton<RiftStatus>::LazySingleton(LazySingleton<RiftStatus> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0667eb40;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<RiftStatus>::GetInstancePtr() */

long Sexy::LazySingleton<RiftStatus>::GetInstancePtr(void)

{
  RiftStatus *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x20);
  RiftStatus::RiftStatus(this);
  return m_instance;
}


/* Sexy::LazySingleton<RiftStatus>::GetInstance() */

long Sexy::LazySingleton<RiftStatus>::GetInstance(void)

{
  RiftStatus *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x20);
  RiftStatus::RiftStatus(this);
  return m_instance;
}


/* Sexy::LazySingleton<RiftThemeMgr>::GetInstancePtr() */

long Sexy::LazySingleton<RiftThemeMgr>::GetInstancePtr(void)

{
  RiftThemeMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x20);
  RiftThemeMgr::RiftThemeMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<RiftThemeMgr>::GetInstance() */

long Sexy::LazySingleton<RiftThemeMgr>::GetInstance(void)

{
  RiftThemeMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x20);
  RiftThemeMgr::RiftThemeMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<PennyPerkMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<PennyPerkMgr>::~LazySingleton(LazySingleton<PennyPerkMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06680e70;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<PennyPerkMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<PennyPerkMgr>::~LazySingleton(LazySingleton<PennyPerkMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<PennyPerkMgr>::LazySingleton() */

void __thiscall Sexy::LazySingleton<PennyPerkMgr>::LazySingleton(LazySingleton<PennyPerkMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06680e70;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<RiftNetworkMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<RiftNetworkMgr>::~LazySingleton(LazySingleton<RiftNetworkMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066864a0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<RiftNetworkMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<RiftNetworkMgr>::~LazySingleton(LazySingleton<RiftNetworkMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<RiftNetworkMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<RiftNetworkMgr>::LazySingleton(LazySingleton<RiftNetworkMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066864a0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<RiftThemeMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<RiftThemeMgr>::~LazySingleton(LazySingleton<RiftThemeMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06689870;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<RiftThemeMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<RiftThemeMgr>::~LazySingleton(LazySingleton<RiftThemeMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<RiftThemeMgr>::LazySingleton() */

void __thiscall Sexy::LazySingleton<RiftThemeMgr>::LazySingleton(LazySingleton<RiftThemeMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06689870;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<RiftValidateMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<RiftValidateMgr>::~LazySingleton(LazySingleton<RiftValidateMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0668a380;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<RiftValidateMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<RiftValidateMgr>::~LazySingleton(LazySingleton<RiftValidateMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<RiftValidateMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<RiftValidateMgr>::LazySingleton(LazySingleton<RiftValidateMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0668a380;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<ArtifactMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<ArtifactMgr>::~LazySingleton(LazySingleton<ArtifactMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06696150;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<ArtifactMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<ArtifactMgr>::~LazySingleton(LazySingleton<ArtifactMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<ArtifactMgr>::LazySingleton() */

void __thiscall Sexy::LazySingleton<ArtifactMgr>::LazySingleton(LazySingleton<ArtifactMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06696150;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<LevelBasedModifierModuleMgr>::GetInstancePtr() */

long Sexy::LazySingleton<LevelBasedModifierModuleMgr>::GetInstancePtr(void)

{
  LevelBasedModifierModuleMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x20);
  LevelBasedModifierModuleMgr::LevelBasedModifierModuleMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<LevelBasedModifierModuleMgr>::GetInstance() */

long Sexy::LazySingleton<LevelBasedModifierModuleMgr>::GetInstance(void)

{
  LevelBasedModifierModuleMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x20);
  LevelBasedModifierModuleMgr::LevelBasedModifierModuleMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<ActivityDescriptionManager>::GetInstancePtr() */

long Sexy::LazySingleton<ActivityDescriptionManager>::GetInstancePtr(void)

{
  ActivityDescriptionManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x10);
  ActivityDescriptionManager::ActivityDescriptionManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<UnchartedModeNetworkMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<UnchartedModeNetworkMgr>::~LazySingleton
          (LazySingleton<UnchartedModeNetworkMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066a6720;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<UnchartedModeNetworkMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<UnchartedModeNetworkMgr>::~LazySingleton
          (LazySingleton<UnchartedModeNetworkMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<UnchartedModeNetworkMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<UnchartedModeNetworkMgr>::LazySingleton
          (LazySingleton<UnchartedModeNetworkMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066a6720;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<JoustStatus>::GetInstancePtr() */

long Sexy::LazySingleton<JoustStatus>::GetInstancePtr(void)

{
  JoustStatus *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(400);
  JoustStatus::JoustStatus(this);
  return m_instance;
}


/* Sexy::LazySingleton<JoustStatus>::GetInstance() */

long Sexy::LazySingleton<JoustStatus>::GetInstance(void)

{
  JoustStatus *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(400);
  JoustStatus::JoustStatus(this);
  return m_instance;
}


/* Sexy::LazySingleton<JoustNetworkMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<JoustNetworkMgr>::~LazySingleton(LazySingleton<JoustNetworkMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066ae4d0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<JoustNetworkMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<JoustNetworkMgr>::~LazySingleton(LazySingleton<JoustNetworkMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<JoustNetworkMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<JoustNetworkMgr>::LazySingleton(LazySingleton<JoustNetworkMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066ae4d0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<JoustStatus>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<JoustStatus>::~LazySingleton(LazySingleton<JoustStatus> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066af530;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<JoustStatus>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<JoustStatus>::~LazySingleton(LazySingleton<JoustStatus> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<JoustStatus>::LazySingleton() */

void __thiscall Sexy::LazySingleton<JoustStatus>::LazySingleton(LazySingleton<JoustStatus> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066af530;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<JoustNetworkMgr>::GetInstancePtr() */

long Sexy::LazySingleton<JoustNetworkMgr>::GetInstancePtr(void)

{
  JoustNetworkMgr *this;
  
  if (m_instance == 0) {
    this = ::operator_new(0x148);
    JoustNetworkMgr::JoustNetworkMgr(this);
    if (m_instance == 0) {
      return 0;
    }
  }
  return m_instance + -8;
}


/* Sexy::LazySingleton<DataPersistorObjectsFactory>::GetInstancePtr() */

long Sexy::LazySingleton<DataPersistorObjectsFactory>::GetInstancePtr(void)

{
  DataPersistorObjectsFactory *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x140);
  DataPersistorObjectsFactory::DataPersistorObjectsFactory(this);
  return m_instance;
}


/* Sexy::LazySingleton<DataPersistorObjectsFactory>::GetInstance() */

long Sexy::LazySingleton<DataPersistorObjectsFactory>::GetInstance(void)

{
  DataPersistorObjectsFactory *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x140);
  DataPersistorObjectsFactory::DataPersistorObjectsFactory(this);
  return m_instance;
}


/* Sexy::LazySingleton<MiniGamePerkMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<MiniGamePerkMgr>::~LazySingleton(LazySingleton<MiniGamePerkMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066afcf0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<MiniGamePerkMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<MiniGamePerkMgr>::~LazySingleton(LazySingleton<MiniGamePerkMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<MiniGamePerkMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<MiniGamePerkMgr>::LazySingleton(LazySingleton<MiniGamePerkMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066afcf0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<MiniGamePerkMgr>::GetInstancePtr() */

long Sexy::LazySingleton<MiniGamePerkMgr>::GetInstancePtr(void)

{
  MiniGamePerkMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x38);
  MiniGamePerkMgr::MiniGamePerkMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<MiniGamePerkMgr>::GetInstance() */

long Sexy::LazySingleton<MiniGamePerkMgr>::GetInstance(void)

{
  MiniGamePerkMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x38);
  MiniGamePerkMgr::MiniGamePerkMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<MiniGameCollectionNetworkMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<MiniGameCollectionNetworkMgr>::~LazySingleton
          (LazySingleton<MiniGameCollectionNetworkMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066b4030;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<MiniGameCollectionNetworkMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<MiniGameCollectionNetworkMgr>::~LazySingleton
          (LazySingleton<MiniGameCollectionNetworkMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<MiniGameCollectionNetworkMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<MiniGameCollectionNetworkMgr>::LazySingleton
          (LazySingleton<MiniGameCollectionNetworkMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066b4030;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<ToyNightMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<ToyNightMgr>::~LazySingleton(LazySingleton<ToyNightMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066b71e0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<ToyNightMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<ToyNightMgr>::~LazySingleton(LazySingleton<ToyNightMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<ToyNightMgr>::LazySingleton() */

void __thiscall Sexy::LazySingleton<ToyNightMgr>::LazySingleton(LazySingleton<ToyNightMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066b71e0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<ToyNightMgr>::GetInstancePtr() */

long Sexy::LazySingleton<ToyNightMgr>::GetInstancePtr(void)

{
  ToyNightMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x120);
  ToyNightMgr::ToyNightMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<ToyNightMgr>::GetInstance() */

long Sexy::LazySingleton<ToyNightMgr>::GetInstance(void)

{
  ToyNightMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x120);
  ToyNightMgr::ToyNightMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<RichManUIMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<RichManUIMgr>::~LazySingleton(LazySingleton<RichManUIMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066baa40;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<RichManUIMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<RichManUIMgr>::~LazySingleton(LazySingleton<RichManUIMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<RichManUIMgr>::LazySingleton() */

void __thiscall Sexy::LazySingleton<RichManUIMgr>::LazySingleton(LazySingleton<RichManUIMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066baa40;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<CollectableAdBoxMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<CollectableAdBoxMgr>::~LazySingleton(LazySingleton<CollectableAdBoxMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066bd480;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<CollectableAdBoxMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<CollectableAdBoxMgr>::~LazySingleton(LazySingleton<CollectableAdBoxMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<CollectableAdBoxMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<CollectableAdBoxMgr>::LazySingleton(LazySingleton<CollectableAdBoxMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066bd480;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<OppoNewerRechargeMgr>::GetInstancePtr() */

long Sexy::LazySingleton<OppoNewerRechargeMgr>::GetInstancePtr(void)

{
  OppoNewerRechargeMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x10);
  OppoNewerRechargeMgr::OppoNewerRechargeMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<ZMatchShopMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ZMatchShopMgr>::~LazySingleton(LazySingleton<ZMatchShopMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066c2d60;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<ZMatchShopMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ZMatchShopMgr>::~LazySingleton(LazySingleton<ZMatchShopMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<ZMatchShopMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<ZMatchShopMgr>::LazySingleton(LazySingleton<ZMatchShopMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066c2d60;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<MiniGameManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<MiniGameManager>::~LazySingleton(LazySingleton<MiniGameManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066c70f0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<MiniGameManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<MiniGameManager>::~LazySingleton(LazySingleton<MiniGameManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<MiniGameManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<MiniGameManager>::LazySingleton(LazySingleton<MiniGameManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066c70f0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<MiniGameManager>::GetInstancePtr() */

long Sexy::LazySingleton<MiniGameManager>::GetInstancePtr(void)

{
  MiniGameManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x38);
  MiniGameManager::MiniGameManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<OppoNewerRechargeMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<OppoNewerRechargeMgr>::~LazySingleton(LazySingleton<OppoNewerRechargeMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066c80f0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<ChristmasChargeManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ChristmasChargeManager>::~LazySingleton
          (LazySingleton<ChristmasChargeManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066c8850;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<NewYearChargeManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<NewYearChargeManager>::~LazySingleton(LazySingleton<NewYearChargeManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066c8870;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<OppoNewerRechargeMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<OppoNewerRechargeMgr>::~LazySingleton(LazySingleton<OppoNewerRechargeMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<ChristmasChargeManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ChristmasChargeManager>::~LazySingleton
          (LazySingleton<ChristmasChargeManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<NewYearChargeManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<NewYearChargeManager>::~LazySingleton(LazySingleton<NewYearChargeManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<OppoNewerRechargeMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<OppoNewerRechargeMgr>::LazySingleton(LazySingleton<OppoNewerRechargeMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066c80f0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<ChristmasChargeManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<ChristmasChargeManager>::LazySingleton
          (LazySingleton<ChristmasChargeManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066c8850;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<NewYearChargeManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<NewYearChargeManager>::LazySingleton(LazySingleton<NewYearChargeManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066c8870;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<WorldCupMgr>::GetInstancePtr() */

long Sexy::LazySingleton<WorldCupMgr>::GetInstancePtr(void)

{
  WorldCupMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x30);
  WorldCupMgr::WorldCupMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<WorldCupMgr>::GetInstance() */

long Sexy::LazySingleton<WorldCupMgr>::GetInstance(void)

{
  WorldCupMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x30);
  WorldCupMgr::WorldCupMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<SpringChargeManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<SpringChargeManager>::~LazySingleton(LazySingleton<SpringChargeManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066cea30;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<SpringChargeManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<SpringChargeManager>::~LazySingleton(LazySingleton<SpringChargeManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<SpringChargeManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<SpringChargeManager>::LazySingleton(LazySingleton<SpringChargeManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066cea30;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<WorldCupManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<WorldCupManager>::~LazySingleton(LazySingleton<WorldCupManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066d1970;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<WorldCupManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<WorldCupManager>::~LazySingleton(LazySingleton<WorldCupManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<WorldCupManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<WorldCupManager>::LazySingleton(LazySingleton<WorldCupManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066d1970;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<WorldMapActivityBtnTurnChangeManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<WorldMapActivityBtnTurnChangeManager>::~LazySingleton
          (LazySingleton<WorldMapActivityBtnTurnChangeManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066d2af0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<WorldMapActivityBtnTurnChangeManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<WorldMapActivityBtnTurnChangeManager>::~LazySingleton
          (LazySingleton<WorldMapActivityBtnTurnChangeManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<WorldMapActivityBtnTurnChangeManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<WorldMapActivityBtnTurnChangeManager>::LazySingleton
          (LazySingleton<WorldMapActivityBtnTurnChangeManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066d2af0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<WorldMapActivityBtnTurnChangeManager>::GetInstance() */

long Sexy::LazySingleton<WorldMapActivityBtnTurnChangeManager>::GetInstance(void)

{
  WorldMapActivityBtnTurnChangeManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0xc0);
  WorldMapActivityBtnTurnChangeManager::WorldMapActivityBtnTurnChangeManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<PlantBundleMgr>::GetInstancePtr() */

long Sexy::LazySingleton<PlantBundleMgr>::GetInstancePtr(void)

{
  PlantBundleMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(8);
  PlantBundleMgr::PlantBundleMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<PlantBundleMgr>::GetInstance() */

long Sexy::LazySingleton<PlantBundleMgr>::GetInstance(void)

{
  PlantBundleMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(8);
  PlantBundleMgr::PlantBundleMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<LimitedSummonManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<LimitedSummonManager>::~LazySingleton(LazySingleton<LimitedSummonManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066e03c0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<LimitedSummonManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<LimitedSummonManager>::~LazySingleton(LazySingleton<LimitedSummonManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<LimitedSummonManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<LimitedSummonManager>::LazySingleton(LazySingleton<LimitedSummonManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066e03c0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr() */

long Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr(void)

{
  LimitedSummonManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x120);
  memset(this,0,0x120);
  LimitedSummonManager::LimitedSummonManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<LimitGroupBuyManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<LimitGroupBuyManager>::~LazySingleton(LazySingleton<LimitGroupBuyManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066ec8f0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<LimitGroupBuyManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<LimitGroupBuyManager>::~LazySingleton(LazySingleton<LimitGroupBuyManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<LimitGroupBuyManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<LimitGroupBuyManager>::LazySingleton(LazySingleton<LimitGroupBuyManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066ec8f0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<CallofWishManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<CallofWishManager>::~LazySingleton(LazySingleton<CallofWishManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066f1340;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<CallofWishManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<CallofWishManager>::~LazySingleton(LazySingleton<CallofWishManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<CallofWishTaskManager>::GetInstancePtr() */

long Sexy::LazySingleton<CallofWishTaskManager>::GetInstancePtr(void)

{
  CallofWishTaskManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x48);
  CallofWishTaskManager::CallofWishTaskManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<CallofWishManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<CallofWishManager>::LazySingleton(LazySingleton<CallofWishManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066f1340;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<CallofWishManager>::GetInstancePtr() */

long Sexy::LazySingleton<CallofWishManager>::GetInstancePtr(void)

{
  CallofWishManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0xe0);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  CallofWishManager::CallofWishManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<TravelLogManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<TravelLogManager>::~LazySingleton(LazySingleton<TravelLogManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066f6470;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<TravelLogManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<TravelLogManager>::~LazySingleton(LazySingleton<TravelLogManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<TravelLogManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<TravelLogManager>::LazySingleton(LazySingleton<TravelLogManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066f6470;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<DaveTreasureDataManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<DaveTreasureDataManager>::~LazySingleton
          (LazySingleton<DaveTreasureDataManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066f6f30;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<DaveTreasureDataManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<DaveTreasureDataManager>::~LazySingleton
          (LazySingleton<DaveTreasureDataManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<DaveTaskManager>::GetInstancePtr() */

long Sexy::LazySingleton<DaveTaskManager>::GetInstancePtr(void)

{
  DaveTaskManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x48);
  DaveTaskManager::DaveTaskManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<DaveTreasureDataManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<DaveTreasureDataManager>::LazySingleton
          (LazySingleton<DaveTreasureDataManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066f6f30;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<DaveTaskManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<DaveTaskManager>::~LazySingleton(LazySingleton<DaveTaskManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066fac90;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<PennyTaskManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<PennyTaskManager>::~LazySingleton(LazySingleton<PennyTaskManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066facb0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<DaveTaskManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<DaveTaskManager>::~LazySingleton(LazySingleton<DaveTaskManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<PennyTaskManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<PennyTaskManager>::~LazySingleton(LazySingleton<PennyTaskManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<DaveTaskManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<DaveTaskManager>::LazySingleton(LazySingleton<DaveTaskManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066fac90;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<PennyTaskManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<PennyTaskManager>::LazySingleton(LazySingleton<PennyTaskManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066facb0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<HappyVaseBreakerTaskManager>::GetInstancePtr() */

long Sexy::LazySingleton<HappyVaseBreakerTaskManager>::GetInstancePtr(void)

{
  HappyVaseBreakerTaskManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x40);
  HappyVaseBreakerTaskManager::HappyVaseBreakerTaskManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<FestivalGoldenEggManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<FestivalGoldenEggManager>::~LazySingleton
          (LazySingleton<FestivalGoldenEggManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066fc370;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<GoldenEggTaskManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<GoldenEggTaskManager>::~LazySingleton(LazySingleton<GoldenEggTaskManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066fce90;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<FestivalGoldenEggManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<FestivalGoldenEggManager>::~LazySingleton
          (LazySingleton<FestivalGoldenEggManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<GoldenEggTaskManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<GoldenEggTaskManager>::~LazySingleton(LazySingleton<GoldenEggTaskManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<FestivalGoldenEggManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<FestivalGoldenEggManager>::LazySingleton
          (LazySingleton<FestivalGoldenEggManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066fc370;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<FestivalGoldenEggManager>::GetInstancePtr() */

long Sexy::LazySingleton<FestivalGoldenEggManager>::GetInstancePtr(void)

{
  FestivalGoldenEggManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x10);
  FestivalGoldenEggManager::FestivalGoldenEggManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<FestivalGoldenEggManager>::GetInstance() */

long Sexy::LazySingleton<FestivalGoldenEggManager>::GetInstance(void)

{
  FestivalGoldenEggManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x10);
  FestivalGoldenEggManager::FestivalGoldenEggManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<GoldenEggTaskManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<GoldenEggTaskManager>::LazySingleton(LazySingleton<GoldenEggTaskManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066fce90;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<GoldenEggTaskManager>::GetInstancePtr() */

long Sexy::LazySingleton<GoldenEggTaskManager>::GetInstancePtr(void)

{
  GoldenEggTaskManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x48);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  GoldenEggTaskManager::GoldenEggTaskManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<ArborDayTaskManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ArborDayTaskManager>::~LazySingleton(LazySingleton<ArborDayTaskManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066fe900;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<ArborDayTaskManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ArborDayTaskManager>::~LazySingleton(LazySingleton<ArborDayTaskManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<ArborDayTaskManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<ArborDayTaskManager>::LazySingleton(LazySingleton<ArborDayTaskManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_066fe900;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<ArborDayTaskManager>::GetInstancePtr() */

long Sexy::LazySingleton<ArborDayTaskManager>::GetInstancePtr(void)

{
  ArborDayTaskManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x48);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  ArborDayTaskManager::ArborDayTaskManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<BattleOrderTaskManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<BattleOrderTaskManager>::~LazySingleton
          (LazySingleton<BattleOrderTaskManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_067018c0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<BattleOrderTaskManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<BattleOrderTaskManager>::~LazySingleton
          (LazySingleton<BattleOrderTaskManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<BattleOrderTaskManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<BattleOrderTaskManager>::LazySingleton
          (LazySingleton<BattleOrderTaskManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_067018c0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<BattleOrderTaskManager>::GetInstancePtr() */

long Sexy::LazySingleton<BattleOrderTaskManager>::GetInstancePtr(void)

{
  BattleOrderTaskManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x48);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  BattleOrderTaskManager::BattleOrderTaskManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<NoviceSevenDaysManager>::GetInstancePtr() */

long Sexy::LazySingleton<NoviceSevenDaysManager>::GetInstancePtr(void)

{
  NoviceSevenDaysManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x68);
  NoviceSevenDaysManager::NoviceSevenDaysManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<WorldLevelPackageManager>::GetInstancePtr() */

long Sexy::LazySingleton<WorldLevelPackageManager>::GetInstancePtr(void)

{
  WorldLevelPackageManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x48);
  WorldLevelPackageManager::WorldLevelPackageManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<CornucopiaMgr>::GetInstancePtr() */

long Sexy::LazySingleton<CornucopiaMgr>::GetInstancePtr(void)

{
  CornucopiaMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x150);
  CornucopiaMgr::CornucopiaMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<NostalgiaAchievementDialogManager>::GetInstancePtr() */

long Sexy::LazySingleton<NostalgiaAchievementDialogManager>::GetInstancePtr(void)

{
  NostalgiaAchievementDialogManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x28);
  NostalgiaAchievementDialogManager::NostalgiaAchievementDialogManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<HappyVaseBreakerTaskManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<HappyVaseBreakerTaskManager>::~LazySingleton
          (LazySingleton<HappyVaseBreakerTaskManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06711850;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<HappyVaseCheckBilling>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<HappyVaseCheckBilling>::~LazySingleton
          (LazySingleton<HappyVaseCheckBilling> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06711870;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<NoviceSevenDaysManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<NoviceSevenDaysManager>::~LazySingleton
          (LazySingleton<NoviceSevenDaysManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06711890;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<CallofWishTaskManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<CallofWishTaskManager>::~LazySingleton
          (LazySingleton<CallofWishTaskManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_067118b0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<PvZ1AchievementManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<PvZ1AchievementManager>::~LazySingleton
          (LazySingleton<PvZ1AchievementManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_067118d0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<TourismOctoberGradeTaskManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<TourismOctoberGradeTaskManager>::~LazySingleton
          (LazySingleton<TourismOctoberGradeTaskManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06711990;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<NFSLinkageGradeTaskManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<NFSLinkageGradeTaskManager>::~LazySingleton
          (LazySingleton<NFSLinkageGradeTaskManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06711950;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<LuckyChestGradeTaskManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<LuckyChestGradeTaskManager>::~LazySingleton
          (LazySingleton<LuckyChestGradeTaskManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06711970;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<InvitationGradeTaskManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<InvitationGradeTaskManager>::~LazySingleton
          (LazySingleton<InvitationGradeTaskManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06711930;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<CornucopiaGradeTaskManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<CornucopiaGradeTaskManager>::~LazySingleton
          (LazySingleton<CornucopiaGradeTaskManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06711910;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<UnchartedBirthdayTaskManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<UnchartedBirthdayTaskManager>::~LazySingleton
          (LazySingleton<UnchartedBirthdayTaskManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_067118f0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<HappyVaseBreakerTaskManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<HappyVaseBreakerTaskManager>::~LazySingleton
          (LazySingleton<HappyVaseBreakerTaskManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<HappyVaseCheckBilling>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<HappyVaseCheckBilling>::~LazySingleton
          (LazySingleton<HappyVaseCheckBilling> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<NoviceSevenDaysManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<NoviceSevenDaysManager>::~LazySingleton
          (LazySingleton<NoviceSevenDaysManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<CallofWishTaskManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<CallofWishTaskManager>::~LazySingleton
          (LazySingleton<CallofWishTaskManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<PvZ1AchievementManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<PvZ1AchievementManager>::~LazySingleton
          (LazySingleton<PvZ1AchievementManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<TourismOctoberGradeTaskManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<TourismOctoberGradeTaskManager>::~LazySingleton
          (LazySingleton<TourismOctoberGradeTaskManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<NFSLinkageGradeTaskManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<NFSLinkageGradeTaskManager>::~LazySingleton
          (LazySingleton<NFSLinkageGradeTaskManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<LuckyChestGradeTaskManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<LuckyChestGradeTaskManager>::~LazySingleton
          (LazySingleton<LuckyChestGradeTaskManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<InvitationGradeTaskManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<InvitationGradeTaskManager>::~LazySingleton
          (LazySingleton<InvitationGradeTaskManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<CornucopiaGradeTaskManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<CornucopiaGradeTaskManager>::~LazySingleton
          (LazySingleton<CornucopiaGradeTaskManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<UnchartedBirthdayTaskManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<UnchartedBirthdayTaskManager>::~LazySingleton
          (LazySingleton<UnchartedBirthdayTaskManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<HappyVaseBreakerTaskManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<HappyVaseBreakerTaskManager>::LazySingleton
          (LazySingleton<HappyVaseBreakerTaskManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06711850;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<HappyVaseCheckBilling>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<HappyVaseCheckBilling>::LazySingleton
          (LazySingleton<HappyVaseCheckBilling> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06711870;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<NoviceSevenDaysManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<NoviceSevenDaysManager>::LazySingleton
          (LazySingleton<NoviceSevenDaysManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06711890;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<CallofWishTaskManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<CallofWishTaskManager>::LazySingleton
          (LazySingleton<CallofWishTaskManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_067118b0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<PvZ1AchievementManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<PvZ1AchievementManager>::LazySingleton
          (LazySingleton<PvZ1AchievementManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_067118d0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<RenaissanceChallengeNewManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<RenaissanceChallengeNewManager>::~LazySingleton
          (LazySingleton<RenaissanceChallengeNewManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06712c10;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<RenaissanceChallengeNewManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<RenaissanceChallengeNewManager>::~LazySingleton
          (LazySingleton<RenaissanceChallengeNewManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<RenaissanceChallengeNewManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<RenaissanceChallengeNewManager>::LazySingleton
          (LazySingleton<RenaissanceChallengeNewManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06712c10;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<FirstRechargeExtraManager>::GetInstancePtr() */

long Sexy::LazySingleton<FirstRechargeExtraManager>::GetInstancePtr(void)

{
  FirstRechargeExtraManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x78);
  FirstRechargeExtraManager::FirstRechargeExtraManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<DefineIDMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<DefineIDMgr>::~LazySingleton(LazySingleton<DefineIDMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06733e20;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<DefineIDMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<DefineIDMgr>::~LazySingleton(LazySingleton<DefineIDMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<DefineIDMgr>::LazySingleton() */

void __thiscall Sexy::LazySingleton<DefineIDMgr>::LazySingleton(LazySingleton<DefineIDMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06733e20;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<IdentifierMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<IdentifierMgr>::~LazySingleton(LazySingleton<IdentifierMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06733e60;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<IdentifierMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<IdentifierMgr>::~LazySingleton(LazySingleton<IdentifierMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<IdentifierMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<IdentifierMgr>::LazySingleton(LazySingleton<IdentifierMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06733e60;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<TGALogMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<TGALogMgr>::~LazySingleton(LazySingleton<TGALogMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06733ec0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<TGALogMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<TGALogMgr>::~LazySingleton(LazySingleton<TGALogMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<TGALogMgr>::LazySingleton() */

void __thiscall Sexy::LazySingleton<TGALogMgr>::LazySingleton(LazySingleton<TGALogMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06733ec0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<TipsManager>::GetInstancePtr() */

long Sexy::LazySingleton<TipsManager>::GetInstancePtr(void)

{
  TipsManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x40);
  TipsManager::TipsManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<TipsManager>::GetInstance() */

long Sexy::LazySingleton<TipsManager>::GetInstance(void)

{
  TipsManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x40);
  TipsManager::TipsManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<FestivalManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<FestivalManager>::~LazySingleton(LazySingleton<FestivalManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06737af0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<FestivalManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<FestivalManager>::~LazySingleton(LazySingleton<FestivalManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<FestivalManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<FestivalManager>::LazySingleton(LazySingleton<FestivalManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06737af0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<CheatUIPanel>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<CheatUIPanel>::~LazySingleton(LazySingleton<CheatUIPanel> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_067539b0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<CheatUIPanel>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<CheatUIPanel>::~LazySingleton(LazySingleton<CheatUIPanel> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<CheatUIPanel>::LazySingleton() */

void __thiscall Sexy::LazySingleton<CheatUIPanel>::LazySingleton(LazySingleton<CheatUIPanel> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_067539b0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<DangerRoomManager>::GetInstance() */

long Sexy::LazySingleton<DangerRoomManager>::GetInstance(void)

{
  DangerRoomManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x2c0);
  DangerRoomManager::DangerRoomManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<DataPersistorObjectsFactory>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<DataPersistorObjectsFactory>::~LazySingleton
          (LazySingleton<DataPersistorObjectsFactory> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0675ca30;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<DataPersistorObjectsFactory>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<DataPersistorObjectsFactory>::~LazySingleton
          (LazySingleton<DataPersistorObjectsFactory> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<DataPersistorObjectsFactory>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<DataPersistorObjectsFactory>::LazySingleton
          (LazySingleton<DataPersistorObjectsFactory> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0675ca30;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<PvZ1AchievementManager>::GetInstancePtr() */

long Sexy::LazySingleton<PvZ1AchievementManager>::GetInstancePtr(void)

{
  PvZ1AchievementManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x48);
  PvZ1AchievementManager::PvZ1AchievementManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<NostalgiaAchievementDialogManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<NostalgiaAchievementDialogManager>::~LazySingleton
          (LazySingleton<NostalgiaAchievementDialogManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0676e8f0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<NostalgiaAchievementDialogManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<NostalgiaAchievementDialogManager>::~LazySingleton
          (LazySingleton<NostalgiaAchievementDialogManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<NostalgiaAchievementDialogManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<NostalgiaAchievementDialogManager>::LazySingleton
          (LazySingleton<NostalgiaAchievementDialogManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0676e8f0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<NostalgiaAchievementDialogManager>::GetInstance() */

long Sexy::LazySingleton<NostalgiaAchievementDialogManager>::GetInstance(void)

{
  NostalgiaAchievementDialogManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x28);
  NostalgiaAchievementDialogManager::NostalgiaAchievementDialogManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<MysteryCrystalMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<MysteryCrystalMgr>::~LazySingleton(LazySingleton<MysteryCrystalMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06773c10;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<MysteryCrystalMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<MysteryCrystalMgr>::~LazySingleton(LazySingleton<MysteryCrystalMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<MysteryCrystalMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<MysteryCrystalMgr>::LazySingleton(LazySingleton<MysteryCrystalMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06773c10;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<SecretStoreMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<SecretStoreMgr>::~LazySingleton(LazySingleton<SecretStoreMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06774840;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<SecretStoreMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<SecretStoreMgr>::~LazySingleton(LazySingleton<SecretStoreMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<SecretStoreMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<SecretStoreMgr>::LazySingleton(LazySingleton<SecretStoreMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06774840;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<NewerPresentMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<NewerPresentMgr>::~LazySingleton(LazySingleton<NewerPresentMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06778520;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<NewerPresentMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<NewerPresentMgr>::~LazySingleton(LazySingleton<NewerPresentMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<NewerPresentMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<NewerPresentMgr>::LazySingleton(LazySingleton<NewerPresentMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06778520;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<ArtifactPresentMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ArtifactPresentMgr>::~LazySingleton(LazySingleton<ArtifactPresentMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0677a2e0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<ArtifactPresentMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ArtifactPresentMgr>::~LazySingleton(LazySingleton<ArtifactPresentMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<ArtifactPresentMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<ArtifactPresentMgr>::LazySingleton(LazySingleton<ArtifactPresentMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0677a2e0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<SecretAreaRewardMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<SecretAreaRewardMgr>::~LazySingleton(LazySingleton<SecretAreaRewardMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0677ba80;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<SecretAreaRewardMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<SecretAreaRewardMgr>::~LazySingleton(LazySingleton<SecretAreaRewardMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<SecretAreaRewardMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<SecretAreaRewardMgr>::LazySingleton(LazySingleton<SecretAreaRewardMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0677ba80;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<SecretAreaRewardMgr>::GetInstancePtr() */

long Sexy::LazySingleton<SecretAreaRewardMgr>::GetInstancePtr(void)

{
  SecretAreaRewardMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x28);
  SecretAreaRewardMgr::SecretAreaRewardMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<SecretAreaRewardMgr>::GetInstance() */

long Sexy::LazySingleton<SecretAreaRewardMgr>::GetInstance(void)

{
  SecretAreaRewardMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x28);
  SecretAreaRewardMgr::SecretAreaRewardMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<MonthlyCardMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<MonthlyCardMgr>::~LazySingleton(LazySingleton<MonthlyCardMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0677e690;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<MonthlyCardMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<MonthlyCardMgr>::~LazySingleton(LazySingleton<MonthlyCardMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<MonthlyCardMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<MonthlyCardMgr>::LazySingleton(LazySingleton<MonthlyCardMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0677e690;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<SecretGachaMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<SecretGachaMgr>::~LazySingleton(LazySingleton<SecretGachaMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0677e760;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<SecretGachaMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<SecretGachaMgr>::~LazySingleton(LazySingleton<SecretGachaMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<SecretGachaMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<SecretGachaMgr>::LazySingleton(LazySingleton<SecretGachaMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0677e760;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<GachaMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<GachaMgr>::~LazySingleton(LazySingleton<GachaMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0677fee0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<GachaMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<GachaMgr>::~LazySingleton(LazySingleton<GachaMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<GachaMgr>::LazySingleton() */

void __thiscall Sexy::LazySingleton<GachaMgr>::LazySingleton(LazySingleton<GachaMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0677fee0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<HeroPlantMgr>::GetInstancePtr() */

long Sexy::LazySingleton<HeroPlantMgr>::GetInstancePtr(void)

{
  HeroPlantMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x18);
  HeroPlantMgr::HeroPlantMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<HeroPlantMgr>::GetInstance() */

long Sexy::LazySingleton<HeroPlantMgr>::GetInstance(void)

{
  HeroPlantMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x18);
  HeroPlantMgr::HeroPlantMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<LevelUtils>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<LevelUtils>::~LazySingleton(LazySingleton<LevelUtils> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0678d830;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<PVZLevelNetworkManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<PVZLevelNetworkManager>::~LazySingleton
          (LazySingleton<PVZLevelNetworkManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0678d870;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<LevelUtils>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<LevelUtils>::~LazySingleton(LazySingleton<LevelUtils> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<PVZLevelNetworkManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<PVZLevelNetworkManager>::~LazySingleton
          (LazySingleton<PVZLevelNetworkManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<LevelUtils>::LazySingleton() */

void __thiscall Sexy::LazySingleton<LevelUtils>::LazySingleton(LazySingleton<LevelUtils> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0678d830;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<PVZLevelNetworkManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<PVZLevelNetworkManager>::LazySingleton
          (LazySingleton<PVZLevelNetworkManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0678d870;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<PVZLevelNetworkManager>::GetInstancePtr() */

long Sexy::LazySingleton<PVZLevelNetworkManager>::GetInstancePtr(void)

{
  PVZLevelNetworkManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x18);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  PVZLevelNetworkManager::PVZLevelNetworkManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<PVZLevelNetworkManager>::GetInstance() */

long Sexy::LazySingleton<PVZLevelNetworkManager>::GetInstance(void)

{
  PVZLevelNetworkManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x18);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  PVZLevelNetworkManager::PVZLevelNetworkManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<OfflineBoardMgr>::GetInstancePtr() */

long Sexy::LazySingleton<OfflineBoardMgr>::GetInstancePtr(void)

{
  OfflineBoardMgr *this;
  
  if (m_instance == 0) {
    this = ::operator_new(0x38);
    OfflineBoardMgr::OfflineBoardMgr(this);
    if (m_instance == 0) {
      return 0;
    }
  }
  return m_instance + -8;
}


/* Sexy::LazySingleton<OfflineBoardMgr>::GetInstance() */

long Sexy::LazySingleton<OfflineBoardMgr>::GetInstance(void)

{
  OfflineBoardMgr *this;
  
  if (m_instance == 0) {
    this = ::operator_new(0x38);
    OfflineBoardMgr::OfflineBoardMgr(this);
    if (m_instance == 0) {
      return 0;
    }
  }
  return m_instance + -8;
}


/* Sexy::LazySingleton<LawnStringUpdater>::GetInstancePtr() */

long Sexy::LazySingleton<LawnStringUpdater>::GetInstancePtr(void)

{
  LawnStringUpdater *this;
  
  if (m_instance == 0) {
    this = ::operator_new(0x40);
    LawnStringUpdater::LawnStringUpdater(this);
    if (m_instance == 0) {
      return 0;
    }
  }
  return m_instance + -8;
}


/* Sexy::LazySingleton<LawnStringUpdater>::GetInstance() */

long Sexy::LazySingleton<LawnStringUpdater>::GetInstance(void)

{
  LawnStringUpdater *this;
  
  if (m_instance == 0) {
    this = ::operator_new(0x40);
    LawnStringUpdater::LawnStringUpdater(this);
    if (m_instance == 0) {
      return 0;
    }
  }
  return m_instance + -8;
}


/* Sexy::LazySingleton<ConfigUpdateMgr>::GetInstancePtr() */

long Sexy::LazySingleton<ConfigUpdateMgr>::GetInstancePtr(void)

{
  ConfigUpdateMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x30);
  ConfigUpdateMgr::ConfigUpdateMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<ConfigUpdateMgr>::GetInstance() */

long Sexy::LazySingleton<ConfigUpdateMgr>::GetInstance(void)

{
  ConfigUpdateMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x30);
  ConfigUpdateMgr::ConfigUpdateMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<NetworkProfileMgr>::GetInstancePtr() */

long Sexy::LazySingleton<NetworkProfileMgr>::GetInstancePtr(void)

{
  NetworkProfileMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(8);
  NetworkProfileMgr::NetworkProfileMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<NetworkProfileMgr>::GetInstance() */

long Sexy::LazySingleton<NetworkProfileMgr>::GetInstance(void)

{
  NetworkProfileMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(8);
  NetworkProfileMgr::NetworkProfileMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<CustomLevelSettingManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<CustomLevelSettingManager>::~LazySingleton
          (LazySingleton<CustomLevelSettingManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06795360;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<CustomLevelSettingManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<CustomLevelSettingManager>::~LazySingleton
          (LazySingleton<CustomLevelSettingManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<CustomLevelSettingManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<CustomLevelSettingManager>::LazySingleton
          (LazySingleton<CustomLevelSettingManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06795360;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<PlantBoostMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<PlantBoostMgr>::~LazySingleton(LazySingleton<PlantBoostMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_067afeb0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<PlantBoostMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<PlantBoostMgr>::~LazySingleton(LazySingleton<PlantBoostMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<PlantBoostMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<PlantBoostMgr>::LazySingleton(LazySingleton<PlantBoostMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_067afeb0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<PlantFamilyMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<PlantFamilyMgr>::~LazySingleton(LazySingleton<PlantFamilyMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_067aff80;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<PlantFamilyMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<PlantFamilyMgr>::~LazySingleton(LazySingleton<PlantFamilyMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<PlantFamilyMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<PlantFamilyMgr>::LazySingleton(LazySingleton<PlantFamilyMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_067aff80;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<HeroPlantMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<HeroPlantMgr>::~LazySingleton(LazySingleton<HeroPlantMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0682bdb0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<HeroPlantMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<HeroPlantMgr>::~LazySingleton(LazySingleton<HeroPlantMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<HeroPlantMgr>::LazySingleton() */

void __thiscall Sexy::LazySingleton<HeroPlantMgr>::LazySingleton(LazySingleton<HeroPlantMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0682bdb0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<PrimeText_PotentialTypeface> >::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<PrimeText_PotentialTypeface>>::~LazySingleton
          (LazySingleton<ObjectTypeDirectory<PrimeText_PotentialTypeface>> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06833900;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<PrimeText_PotentialTypeface> >::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<PrimeText_PotentialTypeface>>::~LazySingleton
          (LazySingleton<ObjectTypeDirectory<PrimeText_PotentialTypeface>> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<PrimeText_PotentialTypeface> >::LazySingleton() */

void __thiscall
Sexy::LazySingleton<ObjectTypeDirectory<PrimeText_PotentialTypeface>>::LazySingleton
          (LazySingleton<ObjectTypeDirectory<PrimeText_PotentialTypeface>> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06833900;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<ObjectTypeDirectory<PrimeText_PotentialTypeface> >::GetInstancePtr() */

long Sexy::LazySingleton<ObjectTypeDirectory<PrimeText_PotentialTypeface>>::GetInstancePtr(void)

{
  ObjectTypeDirectory<PrimeText_PotentialTypeface> *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x58);
  ObjectTypeDirectory<PrimeText_PotentialTypeface>::ObjectTypeDirectory(this);
  return m_instance;
}


/* Sexy::LazySingleton<ProfileMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<ProfileMgr>::~LazySingleton(LazySingleton<ProfileMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06833a00;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<ProfileMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<ProfileMgr>::~LazySingleton(LazySingleton<ProfileMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<ProfileMgr>::LazySingleton() */

void __thiscall Sexy::LazySingleton<ProfileMgr>::LazySingleton(LazySingleton<ProfileMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06833a00;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<PurchaseMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<PurchaseMgr>::~LazySingleton(LazySingleton<PurchaseMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06833ad0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<PurchaseMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<PurchaseMgr>::~LazySingleton(LazySingleton<PurchaseMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<PurchaseMgr>::LazySingleton() */

void __thiscall Sexy::LazySingleton<PurchaseMgr>::LazySingleton(LazySingleton<PurchaseMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06833ad0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<AutoTestManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<AutoTestManager>::~LazySingleton(LazySingleton<AutoTestManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06846c20;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<PVZPackageNetworkManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<PVZPackageNetworkManager>::~LazySingleton
          (LazySingleton<PVZPackageNetworkManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06846c60;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<PVZPackageNetworkManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<PVZPackageNetworkManager>::~LazySingleton
          (LazySingleton<PVZPackageNetworkManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<AutoTestManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<AutoTestManager>::~LazySingleton(LazySingleton<AutoTestManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<AutoTestManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<AutoTestManager>::LazySingleton(LazySingleton<AutoTestManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06846c20;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<PVZPackageNetworkManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<PVZPackageNetworkManager>::LazySingleton
          (LazySingleton<PVZPackageNetworkManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06846c60;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<AutoTestManager>::GetInstancePtr() */

long Sexy::LazySingleton<AutoTestManager>::GetInstancePtr(void)

{
  AutoTestManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x38);
  AutoTestManager::AutoTestManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<PVZPackageNetworkManager>::GetInstancePtr() */

long Sexy::LazySingleton<PVZPackageNetworkManager>::GetInstancePtr(void)

{
  PVZPackageNetworkManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x58);
  PVZPackageNetworkManager::PVZPackageNetworkManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<PVZPackageNetworkManager>::GetInstance() */

long Sexy::LazySingleton<PVZPackageNetworkManager>::GetInstance(void)

{
  PVZPackageNetworkManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x58);
  PVZPackageNetworkManager::PVZPackageNetworkManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<ConfigUpdateMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ConfigUpdateMgr>::~LazySingleton(LazySingleton<ConfigUpdateMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06847860;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<ConfigUpdateMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ConfigUpdateMgr>::~LazySingleton(LazySingleton<ConfigUpdateMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<ConfigUpdateMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<ConfigUpdateMgr>::LazySingleton(LazySingleton<ConfigUpdateMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06847860;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<LuaUpdateMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<LuaUpdateMgr>::~LazySingleton(LazySingleton<LuaUpdateMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_068478d0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<LuaUpdateMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<LuaUpdateMgr>::~LazySingleton(LazySingleton<LuaUpdateMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<LuaUpdateMgr>::LazySingleton() */

void __thiscall Sexy::LazySingleton<LuaUpdateMgr>::LazySingleton(LazySingleton<LuaUpdateMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_068478d0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<UIUpdateMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<UIUpdateMgr>::~LazySingleton(LazySingleton<UIUpdateMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06847940;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<UIUpdateMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<UIUpdateMgr>::~LazySingleton(LazySingleton<UIUpdateMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<UIUpdateMgr>::LazySingleton() */

void __thiscall Sexy::LazySingleton<UIUpdateMgr>::LazySingleton(LazySingleton<UIUpdateMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06847940;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<SeedPacketUtils>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<SeedPacketUtils>::~LazySingleton(LazySingleton<SeedPacketUtils> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0684a120;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<SeedPacketUtils>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<SeedPacketUtils>::~LazySingleton(LazySingleton<SeedPacketUtils> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<SeedPacketUtils>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<SeedPacketUtils>::LazySingleton(LazySingleton<SeedPacketUtils> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0684a120;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<TipsManager>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<TipsManager>::~LazySingleton(LazySingleton<TipsManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06852b50;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<TipsManager>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<TipsManager>::~LazySingleton(LazySingleton<TipsManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<TipsManager>::LazySingleton() */

void __thiscall Sexy::LazySingleton<TipsManager>::LazySingleton(LazySingleton<TipsManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06852b50;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<TutorialEffectMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<TutorialEffectMgr>::~LazySingleton(LazySingleton<TutorialEffectMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_068531d0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<TutorialEffectMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<TutorialEffectMgr>::~LazySingleton(LazySingleton<TutorialEffectMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<TutorialEffectMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<TutorialEffectMgr>::LazySingleton(LazySingleton<TutorialEffectMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_068531d0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<TutorialMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<TutorialMgr>::~LazySingleton(LazySingleton<TutorialMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06853860;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<TutorialMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<TutorialMgr>::~LazySingleton(LazySingleton<TutorialMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<TutorialMgr>::LazySingleton() */

void __thiscall Sexy::LazySingleton<TutorialMgr>::LazySingleton(LazySingleton<TutorialMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06853860;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<WorldMapEditorFactory>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<WorldMapEditorFactory>::~LazySingleton
          (LazySingleton<WorldMapEditorFactory> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_068578c0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<WorldMapEditorFactory>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<WorldMapEditorFactory>::~LazySingleton
          (LazySingleton<WorldMapEditorFactory> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<WorldMapEditorFactory>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<WorldMapEditorFactory>::LazySingleton
          (LazySingleton<WorldMapEditorFactory> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_068578c0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<WorldMapEditorFactory>::GetInstancePtr() */

long Sexy::LazySingleton<WorldMapEditorFactory>::GetInstancePtr(void)

{
  WorldMapEditorFactory *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x18);
  WorldMapEditorFactory::WorldMapEditorFactory(this);
  return m_instance;
}


/* Sexy::LazySingleton<WorldMapEditorFactory>::GetInstance() */

long Sexy::LazySingleton<WorldMapEditorFactory>::GetInstance(void)

{
  WorldMapEditorFactory *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x18);
  WorldMapEditorFactory::WorldMapEditorFactory(this);
  return m_instance;
}


/* Sexy::LazySingleton<CornucopiaGradeTaskManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<CornucopiaGradeTaskManager>::LazySingleton
          (LazySingleton<CornucopiaGradeTaskManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06711910;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<DangerRoomOfferMgr>::GetInstancePtr() */

long Sexy::LazySingleton<DangerRoomOfferMgr>::GetInstancePtr(void)

{
  DangerRoomOfferMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x30);
  DangerRoomOfferMgr::DangerRoomOfferMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<DangerRoomOfferMgr>::GetInstance() */

long Sexy::LazySingleton<DangerRoomOfferMgr>::GetInstance(void)

{
  DangerRoomOfferMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x30);
  DangerRoomOfferMgr::DangerRoomOfferMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<NFSLinkageGradeTaskManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<NFSLinkageGradeTaskManager>::LazySingleton
          (LazySingleton<NFSLinkageGradeTaskManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06711950;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<LuckyChestGradeTaskManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<LuckyChestGradeTaskManager>::LazySingleton
          (LazySingleton<LuckyChestGradeTaskManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06711970;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<TourismOctoberGradeTaskManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<TourismOctoberGradeTaskManager>::LazySingleton
          (LazySingleton<TourismOctoberGradeTaskManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06711990;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<CornucopiaGradeTaskManager>::GetInstancePtr() */

long Sexy::LazySingleton<CornucopiaGradeTaskManager>::GetInstancePtr(void)

{
  CornucopiaGradeTaskManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x48);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  CornucopiaGradeTaskManager::CornucopiaGradeTaskManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<NFSLinkageGradeTaskManager>::GetInstancePtr() */

long Sexy::LazySingleton<NFSLinkageGradeTaskManager>::GetInstancePtr(void)

{
  NFSLinkageGradeTaskManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x48);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  NFSLinkageGradeTaskManager::NFSLinkageGradeTaskManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<LuckyChestGradeTaskManager>::GetInstancePtr() */

long Sexy::LazySingleton<LuckyChestGradeTaskManager>::GetInstancePtr(void)

{
  LuckyChestGradeTaskManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x48);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  LuckyChestGradeTaskManager::LuckyChestGradeTaskManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<TourismOctoberGradeTaskManager>::GetInstancePtr() */

long Sexy::LazySingleton<TourismOctoberGradeTaskManager>::GetInstancePtr(void)

{
  TourismOctoberGradeTaskManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x48);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  TourismOctoberGradeTaskManager::TourismOctoberGradeTaskManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<PlantAdventureMgr>::GetInstancePtr() */

long Sexy::LazySingleton<PlantAdventureMgr>::GetInstancePtr(void)

{
  PlantAdventureMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(8);
  PlantAdventureMgr::PlantAdventureMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<TwoYearBirthdayMgr>::GetInstancePtr() */

long Sexy::LazySingleton<TwoYearBirthdayMgr>::GetInstancePtr(void)

{
  TwoYearBirthdayMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(8);
  TwoYearBirthdayMgr::TwoYearBirthdayMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<TwoYearBirthdayMgr>::GetInstance() */

long Sexy::LazySingleton<TwoYearBirthdayMgr>::GetInstance(void)

{
  TwoYearBirthdayMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(8);
  TwoYearBirthdayMgr::TwoYearBirthdayMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<WebViewInteractMgr>::GetInstancePtr() */

long Sexy::LazySingleton<WebViewInteractMgr>::GetInstancePtr(void)

{
  WebViewInteractMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x48);
  WebViewInteractMgr::WebViewInteractMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<WebViewInteractMgr>::GetInstance() */

long Sexy::LazySingleton<WebViewInteractMgr>::GetInstance(void)

{
  WebViewInteractMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x48);
  WebViewInteractMgr::WebViewInteractMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<UIInvitationMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<UIInvitationMgr>::~LazySingleton(LazySingleton<UIInvitationMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06865d80;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<UIInvitationMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<UIInvitationMgr>::~LazySingleton(LazySingleton<UIInvitationMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<UIInvitationMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<UIInvitationMgr>::LazySingleton(LazySingleton<UIInvitationMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06865d80;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<UIInvitationMgr>::GetInstancePtr() */

long Sexy::LazySingleton<UIInvitationMgr>::GetInstancePtr(void)

{
  UIInvitationMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0xc0);
  UIInvitationMgr::UIInvitationMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<UIInvitationMgr>::GetInstance() */

long Sexy::LazySingleton<UIInvitationMgr>::GetInstance(void)

{
  UIInvitationMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0xc0);
  UIInvitationMgr::UIInvitationMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<WorldLevelPackageManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<WorldLevelPackageManager>::~LazySingleton
          (LazySingleton<WorldLevelPackageManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06867a50;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<WorldLevelPackageManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<WorldLevelPackageManager>::~LazySingleton
          (LazySingleton<WorldLevelPackageManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<WorldLevelPackageManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<WorldLevelPackageManager>::LazySingleton
          (LazySingleton<WorldLevelPackageManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06867a50;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<AcFirstRechargeManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<AcFirstRechargeManager>::~LazySingleton
          (LazySingleton<AcFirstRechargeManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0690bf40;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<AcFirstRechargeManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<AcFirstRechargeManager>::~LazySingleton
          (LazySingleton<AcFirstRechargeManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<AcFirstRechargeManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<AcFirstRechargeManager>::LazySingleton
          (LazySingleton<AcFirstRechargeManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0690bf40;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<HappyVaseCheckBilling>::GetInstancePtr() */

long Sexy::LazySingleton<HappyVaseCheckBilling>::GetInstancePtr(void)

{
  HappyVaseCheckBilling *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x38);
  HappyVaseCheckBilling::HappyVaseCheckBilling(this);
  return m_instance;
}


/* Sexy::LazySingleton<LimitGroupBuyManager>::GetInstancePtr() */

long Sexy::LazySingleton<LimitGroupBuyManager>::GetInstancePtr(void)

{
  LimitGroupBuyManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(8);
  LimitGroupBuyManager::LimitGroupBuyManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<AcFirstRechargeManager>::GetInstancePtr() */

long Sexy::LazySingleton<AcFirstRechargeManager>::GetInstancePtr(void)

{
  AcFirstRechargeManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x10);
  AcFirstRechargeManager::AcFirstRechargeManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<LevelOfTheDaySystem>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<LevelOfTheDaySystem>::~LazySingleton(LazySingleton<LevelOfTheDaySystem> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_069252e0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<LevelOfTheDaySystem>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<LevelOfTheDaySystem>::~LazySingleton(LazySingleton<LevelOfTheDaySystem> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<LevelOfTheDaySystem>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<LevelOfTheDaySystem>::LazySingleton(LazySingleton<LevelOfTheDaySystem> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_069252e0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<TimeMgr>::GetInstance() */

long Sexy::LazySingleton<TimeMgr>::GetInstance(void)

{
  TimeMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x60);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  TimeMgr::TimeMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<SocialMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<SocialMgr>::~LazySingleton(LazySingleton<SocialMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06930f60;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<SocialMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<SocialMgr>::~LazySingleton(LazySingleton<SocialMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<SocialMgr>::LazySingleton() */

void __thiscall Sexy::LazySingleton<SocialMgr>::LazySingleton(LazySingleton<SocialMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06930f60;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<LoginSDKMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<LoginSDKMgr>::~LazySingleton(LazySingleton<LoginSDKMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06933370;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<LoginSDKMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<LoginSDKMgr>::~LazySingleton(LazySingleton<LoginSDKMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<LoginSDKMgr>::LazySingleton() */

void __thiscall Sexy::LazySingleton<LoginSDKMgr>::LazySingleton(LazySingleton<LoginSDKMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06933370;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<OfflineBoardMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<OfflineBoardMgr>::~LazySingleton(LazySingleton<OfflineBoardMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06935d20;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<OfflineBoardMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<OfflineBoardMgr>::~LazySingleton(LazySingleton<OfflineBoardMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<OfflineBoardMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<OfflineBoardMgr>::LazySingleton(LazySingleton<OfflineBoardMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06935d20;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<talkingGame>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<talkingGame>::~LazySingleton(LazySingleton<talkingGame> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_069364e0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<talkingGame>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<talkingGame>::~LazySingleton(LazySingleton<talkingGame> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<talkingGame>::LazySingleton() */

void __thiscall Sexy::LazySingleton<talkingGame>::LazySingleton(LazySingleton<talkingGame> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_069364e0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<DangerRoomManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<DangerRoomManager>::~LazySingleton(LazySingleton<DangerRoomManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0693e870;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<DangerRoomManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<DangerRoomManager>::~LazySingleton(LazySingleton<DangerRoomManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<DangerRoomManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<DangerRoomManager>::LazySingleton(LazySingleton<DangerRoomManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0693e870;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<PlaybackManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<PlaybackManager>::~LazySingleton(LazySingleton<PlaybackManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06948f30;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<PlaybackManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<PlaybackManager>::~LazySingleton(LazySingleton<PlaybackManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<PlaybackManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<PlaybackManager>::LazySingleton(LazySingleton<PlaybackManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06948f30;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<PVPManager>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<PVPManager>::~LazySingleton(LazySingleton<PVPManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06949440;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<PVPManager>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<PVPManager>::~LazySingleton(LazySingleton<PVPManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<PVPManager>::LazySingleton() */

void __thiscall Sexy::LazySingleton<PVPManager>::LazySingleton(LazySingleton<PVPManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06949440;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<ActivityManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ActivityManager>::~LazySingleton(LazySingleton<ActivityManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06974830;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<PennyGiftBoxManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<PennyGiftBoxManager>::~LazySingleton(LazySingleton<PennyGiftBoxManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06974850;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<AccumulatedLoginManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<AccumulatedLoginManager>::~LazySingleton
          (LazySingleton<AccumulatedLoginManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06974890;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<ActivityManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ActivityManager>::~LazySingleton(LazySingleton<ActivityManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<PennyGiftBoxManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<PennyGiftBoxManager>::~LazySingleton(LazySingleton<PennyGiftBoxManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<AccumulatedLoginManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<AccumulatedLoginManager>::~LazySingleton
          (LazySingleton<AccumulatedLoginManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<ActivityManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<ActivityManager>::LazySingleton(LazySingleton<ActivityManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06974830;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstance() */

long Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstance(void)

{
  UnchartedModeNetworkMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x1c0);
  UnchartedModeNetworkMgr::UnchartedModeNetworkMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<CardGameNetworkMgr>::GetInstance() */

long Sexy::LazySingleton<CardGameNetworkMgr>::GetInstance(void)

{
  CardGameNetworkMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x110);
  CardGameNetworkMgr::CardGameNetworkMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<PennyGiftBoxManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<PennyGiftBoxManager>::LazySingleton(LazySingleton<PennyGiftBoxManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06974850;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<AccumulatedLoginManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<AccumulatedLoginManager>::LazySingleton
          (LazySingleton<AccumulatedLoginManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06974890;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<AccumulatedLoginManager>::GetInstancePtr() */

long Sexy::LazySingleton<AccumulatedLoginManager>::GetInstancePtr(void)

{
  AccumulatedLoginManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x78);
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  AccumulatedLoginManager::AccumulatedLoginManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr() */

long Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr(void)

{
  PennyGiftBoxManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x138);
  memset(this,0,0x138);
  PennyGiftBoxManager::PennyGiftBoxManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<AbtestMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<AbtestMgr>::~LazySingleton(LazySingleton<AbtestMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06974950;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<AbtestMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<AbtestMgr>::~LazySingleton(LazySingleton<AbtestMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<AbtestMgr>::LazySingleton() */

void __thiscall Sexy::LazySingleton<AbtestMgr>::LazySingleton(LazySingleton<AbtestMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06974950;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<EASquaredImpl>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<EASquaredImpl>::~LazySingleton(LazySingleton<EASquaredImpl> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0697dd60;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<EASquaredNullImpl>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<EASquaredNullImpl>::~LazySingleton(LazySingleton<EASquaredNullImpl> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0697dd80;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<EASquaredNullImpl>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<EASquaredNullImpl>::~LazySingleton(LazySingleton<EASquaredNullImpl> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<EASquaredImpl>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<EASquaredImpl>::~LazySingleton(LazySingleton<EASquaredImpl> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<EASquaredImpl>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<EASquaredImpl>::LazySingleton(LazySingleton<EASquaredImpl> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0697dd60;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<EASquared_Android>::GetInstancePtr() */

long Sexy::LazySingleton<EASquared_Android>::GetInstancePtr(void)

{
  EASquared_Android *this;
  
  if (m_instance == 0) {
    this = ::operator_new(0x58);
    EASquared_Android::EASquared_Android(this);
    if (m_instance == 0) {
      return 0;
    }
  }
  return m_instance + -8;
}


/* Sexy::LazySingleton<EASquared_Android>::GetInstance() */

long Sexy::LazySingleton<EASquared_Android>::GetInstance(void)

{
  EASquared_Android *this;
  
  if (m_instance == 0) {
    this = ::operator_new(0x58);
    EASquared_Android::EASquared_Android(this);
    if (m_instance == 0) {
      return 0;
    }
  }
  return m_instance + -8;
}


/* Sexy::LazySingleton<EASquaredNullImpl>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<EASquaredNullImpl>::LazySingleton(LazySingleton<EASquaredNullImpl> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0697dd80;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<EASquaredNullImpl>::GetInstancePtr() */

long Sexy::LazySingleton<EASquaredNullImpl>::GetInstancePtr(void)

{
  EASquaredNullImpl *this;
  
  if (m_instance == 0) {
    this = ::operator_new(0x10);
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    EASquaredNullImpl::EASquaredNullImpl(this);
    if (m_instance == 0) {
      return 0;
    }
  }
  return m_instance + -8;
}


/* Sexy::LazySingleton<EASquaredNullImpl>::GetInstance() */

long Sexy::LazySingleton<EASquaredNullImpl>::GetInstance(void)

{
  EASquaredNullImpl *this;
  
  if (m_instance == 0) {
    this = ::operator_new(0x10);
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    EASquaredNullImpl::EASquaredNullImpl(this);
    if (m_instance == 0) {
      return 0;
    }
  }
  return m_instance + -8;
}


/* Sexy::LazySingleton<EASquared_Android>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<EASquared_Android>::~LazySingleton(LazySingleton<EASquared_Android> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0697dfc0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<EASquared_Android>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<EASquared_Android>::~LazySingleton(LazySingleton<EASquared_Android> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<EASquared_Android>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<EASquared_Android>::LazySingleton(LazySingleton<EASquared_Android> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0697dfc0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<SuperSonicAdProvider>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<SuperSonicAdProvider>::~LazySingleton(LazySingleton<SuperSonicAdProvider> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0697e530;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<SuperSonicAdProvider>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<SuperSonicAdProvider>::~LazySingleton(LazySingleton<SuperSonicAdProvider> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<SuperSonicAdProvider>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<SuperSonicAdProvider>::LazySingleton(LazySingleton<SuperSonicAdProvider> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0697e530;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<SuperSonicAdProvider>::GetInstancePtr() */

long Sexy::LazySingleton<SuperSonicAdProvider>::GetInstancePtr(void)

{
  SuperSonicAdProvider *this;
  
  if (m_instance == 0) {
    this = ::operator_new(0x20);
    *(undefined8 *)this = 0;
    this[8] = (SuperSonicAdProvider)0x0;
    *(undefined4 *)(this + 0xc) = 0;
    this[0x10] = (SuperSonicAdProvider)0x0;
    *(undefined8 *)(this + 0x18) = 0;
    SuperSonicAdProvider::SuperSonicAdProvider(this);
    if (m_instance == 0) {
      return 0;
    }
  }
  return m_instance + -0x18;
}


/* Sexy::LazySingleton<SuperSonicAdProvider>::GetInstance() */

long Sexy::LazySingleton<SuperSonicAdProvider>::GetInstance(void)

{
  SuperSonicAdProvider *this;
  
  if (m_instance == 0) {
    this = ::operator_new(0x20);
    *(undefined8 *)this = 0;
    this[8] = (SuperSonicAdProvider)0x0;
    *(undefined4 *)(this + 0xc) = 0;
    this[0x10] = (SuperSonicAdProvider)0x0;
    *(undefined8 *)(this + 0x18) = 0;
    SuperSonicAdProvider::SuperSonicAdProvider(this);
    if (m_instance == 0) {
      return 0;
    }
  }
  return m_instance + -0x18;
}


/* Sexy::LazySingleton<MarqueeViewManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<MarqueeViewManager>::~LazySingleton(LazySingleton<MarqueeViewManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0697ed90;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<MarqueeViewManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<MarqueeViewManager>::~LazySingleton(LazySingleton<MarqueeViewManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<MarqueeViewManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<MarqueeViewManager>::LazySingleton(LazySingleton<MarqueeViewManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0697ed90;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<MarqueeViewManager>::GetInstancePtr() */

long Sexy::LazySingleton<MarqueeViewManager>::GetInstancePtr(void)

{
  MarqueeViewManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x60);
  *(undefined8 *)this = 0;
  this[8] = (MarqueeViewManager)0x0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  MarqueeViewManager::MarqueeViewManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<MarqueeViewManager>::GetInstance() */

long Sexy::LazySingleton<MarqueeViewManager>::GetInstance(void)

{
  MarqueeViewManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x60);
  *(undefined8 *)this = 0;
  this[8] = (MarqueeViewManager)0x0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  MarqueeViewManager::MarqueeViewManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<AdProviderNullImpl>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<AdProviderNullImpl>::~LazySingleton(LazySingleton<AdProviderNullImpl> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0697fe30;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<AdProviderNullImpl>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<AdProviderNullImpl>::~LazySingleton(LazySingleton<AdProviderNullImpl> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<AdProviderNullImpl>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<AdProviderNullImpl>::LazySingleton(LazySingleton<AdProviderNullImpl> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0697fe30;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<AdProviderNullImpl>::GetInstancePtr() */

long Sexy::LazySingleton<AdProviderNullImpl>::GetInstancePtr(void)

{
  AdProviderNullImpl *this;
  
  if (m_instance == 0) {
    this = ::operator_new(0x78);
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x68) = 0;
    AdProviderNullImpl::AdProviderNullImpl(this);
    if (m_instance == 0) {
      return 0;
    }
  }
  return m_instance + -0x70;
}


/* Sexy::LazySingleton<AdProviderNullImpl>::GetInstance() */

long Sexy::LazySingleton<AdProviderNullImpl>::GetInstance(void)

{
  AdProviderNullImpl *this;
  
  if (m_instance == 0) {
    this = ::operator_new(0x78);
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x68) = 0;
    AdProviderNullImpl::AdProviderNullImpl(this);
    if (m_instance == 0) {
      return 0;
    }
  }
  return m_instance + -0x70;
}


/* Sexy::LazySingleton<UltraAndroid>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<UltraAndroid>::~LazySingleton(LazySingleton<UltraAndroid> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06980950;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<UltraAndroid>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<UltraAndroid>::~LazySingleton(LazySingleton<UltraAndroid> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<UltraAndroid>::LazySingleton() */

void __thiscall Sexy::LazySingleton<UltraAndroid>::LazySingleton(LazySingleton<UltraAndroid> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06980950;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<UltraAndroid>::GetInstancePtr() */

long Sexy::LazySingleton<UltraAndroid>::GetInstancePtr(void)

{
  UltraAndroid *this;
  
  if (m_instance == 0) {
    this = ::operator_new(0x98);
    *(undefined8 *)(this + 0x90) = 0;
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x68) = 0;
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined8 *)(this + 0x78) = 0;
    *(undefined8 *)(this + 0x80) = 0;
    *(undefined8 *)(this + 0x88) = 0;
    UltraAndroid::UltraAndroid(this);
    if (m_instance == 0) {
      return 0;
    }
  }
  return m_instance + -0x90;
}


/* Sexy::LazySingleton<UltraAndroid>::GetInstance() */

long Sexy::LazySingleton<UltraAndroid>::GetInstance(void)

{
  UltraAndroid *this;
  
  if (m_instance == 0) {
    this = ::operator_new(0x98);
    *(undefined8 *)(this + 0x90) = 0;
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x68) = 0;
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined8 *)(this + 0x78) = 0;
    *(undefined8 *)(this + 0x80) = 0;
    *(undefined8 *)(this + 0x88) = 0;
    UltraAndroid::UltraAndroid(this);
    if (m_instance == 0) {
      return 0;
    }
  }
  return m_instance + -0x90;
}


/* Sexy::LazySingleton<SuperSonicAdProviderAndroid>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<SuperSonicAdProviderAndroid>::~LazySingleton
          (LazySingleton<SuperSonicAdProviderAndroid> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06980a00;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<SuperSonicAdProviderAndroid>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<SuperSonicAdProviderAndroid>::~LazySingleton
          (LazySingleton<SuperSonicAdProviderAndroid> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<SuperSonicAdProviderAndroid>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<SuperSonicAdProviderAndroid>::LazySingleton
          (LazySingleton<SuperSonicAdProviderAndroid> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06980a00;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<SuperSonicAdProviderAndroid>::GetInstancePtr() */

long Sexy::LazySingleton<SuperSonicAdProviderAndroid>::GetInstancePtr(void)

{
  SuperSonicAdProviderAndroid *this;
  
  if (m_instance == 0) {
    this = ::operator_new(0x80);
    SuperSonicAdProviderAndroid::SuperSonicAdProviderAndroid(this);
    if (m_instance == 0) {
      return 0;
    }
  }
  return m_instance + -0x70;
}


/* Sexy::LazySingleton<SuperSonicAdProviderAndroid>::GetInstance() */

long Sexy::LazySingleton<SuperSonicAdProviderAndroid>::GetInstance(void)

{
  SuperSonicAdProviderAndroid *this;
  
  if (m_instance == 0) {
    this = ::operator_new(0x80);
    SuperSonicAdProviderAndroid::SuperSonicAdProviderAndroid(this);
    if (m_instance == 0) {
      return 0;
    }
  }
  return m_instance + -0x70;
}


/* Sexy::LazySingleton<WechatMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<WechatMgr>::~LazySingleton(LazySingleton<WechatMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06981960;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<WechatMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<WechatMgr>::~LazySingleton(LazySingleton<WechatMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<WechatMgr>::LazySingleton() */

void __thiscall Sexy::LazySingleton<WechatMgr>::LazySingleton(LazySingleton<WechatMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06981960;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<ViewContainerMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ViewContainerMgr>::~LazySingleton(LazySingleton<ViewContainerMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06981a80;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<ViewContainerMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ViewContainerMgr>::~LazySingleton(LazySingleton<ViewContainerMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<ViewContainerMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<ViewContainerMgr>::LazySingleton(LazySingleton<ViewContainerMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06981a80;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<WebViewInteractMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<WebViewInteractMgr>::~LazySingleton(LazySingleton<WebViewInteractMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06981bf0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<WebViewInteractMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<WebViewInteractMgr>::~LazySingleton(LazySingleton<WebViewInteractMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<WebViewInteractMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<WebViewInteractMgr>::LazySingleton(LazySingleton<WebViewInteractMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06981bf0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<AuthMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<AuthMgr>::~LazySingleton(LazySingleton<AuthMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06981f60;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<AuthMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<AuthMgr>::~LazySingleton(LazySingleton<AuthMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<AuthMgr>::LazySingleton() */

void __thiscall Sexy::LazySingleton<AuthMgr>::LazySingleton(LazySingleton<AuthMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06981f60;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<NetworkItemMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<NetworkItemMgr>::~LazySingleton(LazySingleton<NetworkItemMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06982030;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<NetworkItemMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<NetworkItemMgr>::~LazySingleton(LazySingleton<NetworkItemMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<NetworkItemMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<NetworkItemMgr>::LazySingleton(LazySingleton<NetworkItemMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06982030;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<NetworkProfileMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<NetworkProfileMgr>::~LazySingleton(LazySingleton<NetworkProfileMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06982070;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<NetworkProfileMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<NetworkProfileMgr>::~LazySingleton(LazySingleton<NetworkProfileMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<NetworkProfileMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<NetworkProfileMgr>::LazySingleton(LazySingleton<NetworkProfileMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06982070;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<TwoYearBirthdayMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<TwoYearBirthdayMgr>::~LazySingleton(LazySingleton<TwoYearBirthdayMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06982140;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<TwoYearBirthdayMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<TwoYearBirthdayMgr>::~LazySingleton(LazySingleton<TwoYearBirthdayMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<TwoYearBirthdayMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<TwoYearBirthdayMgr>::LazySingleton(LazySingleton<TwoYearBirthdayMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06982140;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<GemOfferMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<GemOfferMgr>::~LazySingleton(LazySingleton<GemOfferMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06982fd0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<GemOfferMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<GemOfferMgr>::~LazySingleton(LazySingleton<GemOfferMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<GemOfferMgr>::LazySingleton() */

void __thiscall Sexy::LazySingleton<GemOfferMgr>::LazySingleton(LazySingleton<GemOfferMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06982fd0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<PlantBundleMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<PlantBundleMgr>::~LazySingleton(LazySingleton<PlantBundleMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_069833f0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<PlantBundleMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<PlantBundleMgr>::~LazySingleton(LazySingleton<PlantBundleMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<PlantBundleMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<PlantBundleMgr>::LazySingleton(LazySingleton<PlantBundleMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_069833f0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<DangerRoomOfferMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<DangerRoomOfferMgr>::~LazySingleton(LazySingleton<DangerRoomOfferMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06984ad0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<DangerRoomOfferMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<DangerRoomOfferMgr>::~LazySingleton(LazySingleton<DangerRoomOfferMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<DangerRoomOfferMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<DangerRoomOfferMgr>::LazySingleton(LazySingleton<DangerRoomOfferMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06984ad0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<WorldCupMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<WorldCupMgr>::~LazySingleton(LazySingleton<WorldCupMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06985640;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<WorldCupMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<WorldCupMgr>::~LazySingleton(LazySingleton<WorldCupMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<WorldCupMgr>::LazySingleton() */

void __thiscall Sexy::LazySingleton<WorldCupMgr>::LazySingleton(LazySingleton<WorldCupMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06985640;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<RichmanTileEventManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<RichmanTileEventManager>::~LazySingleton
          (LazySingleton<RichmanTileEventManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06987cf0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<RichmanTileEventManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<RichmanTileEventManager>::~LazySingleton
          (LazySingleton<RichmanTileEventManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<RichmanTileEventManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<RichmanTileEventManager>::LazySingleton
          (LazySingleton<RichmanTileEventManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06987cf0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<RechargeDailySignActivityManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<RechargeDailySignActivityManager>::~LazySingleton
          (LazySingleton<RechargeDailySignActivityManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_069899a0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<RechargeDailySignActivityManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<RechargeDailySignActivityManager>::~LazySingleton
          (LazySingleton<RechargeDailySignActivityManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<RechargeDailySignActivityManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<RechargeDailySignActivityManager>::LazySingleton
          (LazySingleton<RechargeDailySignActivityManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_069899a0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<DiscountShopActivityManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<DiscountShopActivityManager>::~LazySingleton
          (LazySingleton<DiscountShopActivityManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0698a930;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<DiscountShopActivityManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<DiscountShopActivityManager>::~LazySingleton
          (LazySingleton<DiscountShopActivityManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<DiscountShopActivityManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<DiscountShopActivityManager>::LazySingleton
          (LazySingleton<DiscountShopActivityManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0698a930;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<CommonUIManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<CommonUIManager>::~LazySingleton(LazySingleton<CommonUIManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0698c6e0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<CommonUIManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<CommonUIManager>::~LazySingleton(LazySingleton<CommonUIManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<CommonUIManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<CommonUIManager>::LazySingleton(LazySingleton<CommonUIManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0698c6e0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<PlantAdventureMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<PlantAdventureMgr>::~LazySingleton(LazySingleton<PlantAdventureMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0698ce70;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<PlantAdventureMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<PlantAdventureMgr>::~LazySingleton(LazySingleton<PlantAdventureMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<PlantAdventureMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<PlantAdventureMgr>::LazySingleton(LazySingleton<PlantAdventureMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_0698ce70;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<PVZ1ModeNetworkMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<PVZ1ModeNetworkMgr>::~LazySingleton(LazySingleton<PVZ1ModeNetworkMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06991a20;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<PVZ1ModeNetworkMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<PVZ1ModeNetworkMgr>::~LazySingleton(LazySingleton<PVZ1ModeNetworkMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<PVZ1ModeNetworkMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<PVZ1ModeNetworkMgr>::LazySingleton(LazySingleton<PVZ1ModeNetworkMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06991a20;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<RiftShopMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<RiftShopMgr>::~LazySingleton(LazySingleton<RiftShopMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_069b88c0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<RiftShopMgr>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<RiftShopMgr>::~LazySingleton(LazySingleton<RiftShopMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<RiftShopMgr>::LazySingleton() */

void __thiscall Sexy::LazySingleton<RiftShopMgr>::LazySingleton(LazySingleton<RiftShopMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_069b88c0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<PlantWarsNetworkMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<PlantWarsNetworkMgr>::~LazySingleton(LazySingleton<PlantWarsNetworkMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_069ba280;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<PlantWarsNetworkMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<PlantWarsNetworkMgr>::~LazySingleton(LazySingleton<PlantWarsNetworkMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<PlantWarsNetworkMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<PlantWarsNetworkMgr>::LazySingleton(LazySingleton<PlantWarsNetworkMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_069ba280;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<PlantWarsLevelSelectManager>::GetInstancePtr() */

long Sexy::LazySingleton<PlantWarsLevelSelectManager>::GetInstancePtr(void)

{
  PlantWarsLevelSelectManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x38);
  PlantWarsLevelSelectManager::PlantWarsLevelSelectManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<PlantWarsLevelSelectManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<PlantWarsLevelSelectManager>::~LazySingleton
          (LazySingleton<PlantWarsLevelSelectManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_069bb590;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<PlantWarsLevelSelectManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<PlantWarsLevelSelectManager>::~LazySingleton
          (LazySingleton<PlantWarsLevelSelectManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<PlantWarsLevelSelectManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<PlantWarsLevelSelectManager>::LazySingleton
          (LazySingleton<PlantWarsLevelSelectManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_069bb590;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<FirstRechargeExtraManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<FirstRechargeExtraManager>::~LazySingleton
          (LazySingleton<FirstRechargeExtraManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_069bea50;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<FirstRechargeExtraManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<FirstRechargeExtraManager>::~LazySingleton
          (LazySingleton<FirstRechargeExtraManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<FirstRechargeExtraManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<FirstRechargeExtraManager>::LazySingleton
          (LazySingleton<FirstRechargeExtraManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_069bea50;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<MonthlyCardSpecialManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<MonthlyCardSpecialManager>::~LazySingleton
          (LazySingleton<MonthlyCardSpecialManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_069bfa40;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<MonthlyCardSpecialManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<MonthlyCardSpecialManager>::~LazySingleton
          (LazySingleton<MonthlyCardSpecialManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<MonthlyCardSpecialManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<MonthlyCardSpecialManager>::LazySingleton
          (LazySingleton<MonthlyCardSpecialManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_069bfa40;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<DangerRoomSpecialOfferExtraManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<DangerRoomSpecialOfferExtraManager>::~LazySingleton
          (LazySingleton<DangerRoomSpecialOfferExtraManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_069c0990;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<DangerRoomSpecialOfferExtraManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<DangerRoomSpecialOfferExtraManager>::~LazySingleton
          (LazySingleton<DangerRoomSpecialOfferExtraManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<DangerRoomSpecialOfferExtraManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<DangerRoomSpecialOfferExtraManager>::LazySingleton
          (LazySingleton<DangerRoomSpecialOfferExtraManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_069c0990;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<PVZ1ModeShopMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<PVZ1ModeShopMgr>::~LazySingleton(LazySingleton<PVZ1ModeShopMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_069c4dd0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<PVZ1ModeShopMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<PVZ1ModeShopMgr>::~LazySingleton(LazySingleton<PVZ1ModeShopMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<PVZ1ModeShopMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<PVZ1ModeShopMgr>::LazySingleton(LazySingleton<PVZ1ModeShopMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_069c4dd0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<CustomLevelShopMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<CustomLevelShopMgr>::~LazySingleton(LazySingleton<CustomLevelShopMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_069c5d70;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<CustomLevelShopMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<CustomLevelShopMgr>::~LazySingleton(LazySingleton<CustomLevelShopMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<CustomLevelShopMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<CustomLevelShopMgr>::LazySingleton(LazySingleton<CustomLevelShopMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_069c5d70;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<PennyClassroomManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<PennyClassroomManager>::~LazySingleton
          (LazySingleton<PennyClassroomManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_069ccaf0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<PennyClassroomManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<PennyClassroomManager>::~LazySingleton
          (LazySingleton<PennyClassroomManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<PennyClassroomManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<PennyClassroomManager>::LazySingleton
          (LazySingleton<PennyClassroomManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_069ccaf0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<UnchartedBirthdayTaskManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<UnchartedBirthdayTaskManager>::LazySingleton
          (LazySingleton<UnchartedBirthdayTaskManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_067118f0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<UnchartedBirthdayTaskManager>::GetInstancePtr() */

long Sexy::LazySingleton<UnchartedBirthdayTaskManager>::GetInstancePtr(void)

{
  UnchartedBirthdayTaskManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x48);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  UnchartedBirthdayTaskManager::UnchartedBirthdayTaskManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<CornucopiaMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<CornucopiaMgr>::~LazySingleton(LazySingleton<CornucopiaMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_069e1210;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<CornucopiaMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<CornucopiaMgr>::~LazySingleton(LazySingleton<CornucopiaMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<CornucopiaMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<CornucopiaMgr>::LazySingleton(LazySingleton<CornucopiaMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_069e1210;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<InvitationGradeTaskManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<InvitationGradeTaskManager>::LazySingleton
          (LazySingleton<InvitationGradeTaskManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06711930;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<InvitationGradeTaskManager>::GetInstancePtr() */

long Sexy::LazySingleton<InvitationGradeTaskManager>::GetInstancePtr(void)

{
  InvitationGradeTaskManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x48);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  InvitationGradeTaskManager::InvitationGradeTaskManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<PennyGiftBoxManager>::GetInstance() */

long Sexy::LazySingleton<PennyGiftBoxManager>::GetInstance(void)

{
  PennyGiftBoxManager *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x138);
  memset(this,0,0x138);
  PennyGiftBoxManager::PennyGiftBoxManager(this);
  return m_instance;
}


/* Sexy::LazySingleton<UITourismOctoberMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<UITourismOctoberMgr>::~LazySingleton(LazySingleton<UITourismOctoberMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_069edc20;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<UITourismOctoberMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<UITourismOctoberMgr>::~LazySingleton(LazySingleton<UITourismOctoberMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<UITourismOctoberMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<UITourismOctoberMgr>::LazySingleton(LazySingleton<UITourismOctoberMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_069edc20;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<UITourismOctoberMgr>::GetInstancePtr() */

long Sexy::LazySingleton<UITourismOctoberMgr>::GetInstancePtr(void)

{
  UITourismOctoberMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x98);
  UITourismOctoberMgr::UITourismOctoberMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<UITourismOctoberMgr>::GetInstance() */

long Sexy::LazySingleton<UITourismOctoberMgr>::GetInstance(void)

{
  UITourismOctoberMgr *this;
  
  if (m_instance != 0) {
    return m_instance;
  }
  this = ::operator_new(0x98);
  UITourismOctoberMgr::UITourismOctoberMgr(this);
  return m_instance;
}


/* Sexy::LazySingleton<PartyAssistMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<PartyAssistMgr>::~LazySingleton(LazySingleton<PartyAssistMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_069efb20;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<PartyAssistMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<PartyAssistMgr>::~LazySingleton(LazySingleton<PartyAssistMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<PartyAssistMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<PartyAssistMgr>::LazySingleton(LazySingleton<PartyAssistMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_069efb20;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<AutumnHarvestMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<AutumnHarvestMgr>::~LazySingleton(LazySingleton<AutumnHarvestMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_069f5740;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<AutumnHarvestMgr>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<AutumnHarvestMgr>::~LazySingleton(LazySingleton<AutumnHarvestMgr> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<AutumnHarvestMgr>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<AutumnHarvestMgr>::LazySingleton(LazySingleton<AutumnHarvestMgr> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_069f5740;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<DebugLog>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<DebugLog>::~LazySingleton(LazySingleton<DebugLog> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06a26ed0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<DebugLog>::~LazySingleton() */

void __thiscall Sexy::LazySingleton<DebugLog>::~LazySingleton(LazySingleton<DebugLog> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<DebugLog>::LazySingleton() */

void __thiscall Sexy::LazySingleton<DebugLog>::LazySingleton(LazySingleton<DebugLog> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06a26ed0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<ActivityDescriptionManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ActivityDescriptionManager>::~LazySingleton
          (LazySingleton<ActivityDescriptionManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06a26f10;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<ActivityDescriptionManager>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<ActivityDescriptionManager>::~LazySingleton
          (LazySingleton<ActivityDescriptionManager> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<ActivityDescriptionManager>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<ActivityDescriptionManager>::LazySingleton
          (LazySingleton<ActivityDescriptionManager> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06a26f10;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<QuickJumpUtil>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<QuickJumpUtil>::~LazySingleton(LazySingleton<QuickJumpUtil> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06a2a0a0;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<QuickJumpUtil>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<QuickJumpUtil>::~LazySingleton(LazySingleton<QuickJumpUtil> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<QuickJumpUtil>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<QuickJumpUtil>::LazySingleton(LazySingleton<QuickJumpUtil> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06a2a0a0;
  m_instance = this;
  return;
}


/* Sexy::LazySingleton<Lua::CLuaEngine>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<Lua::CLuaEngine>::~LazySingleton(LazySingleton<Lua::CLuaEngine> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06a2c870;
  m_instance = 0;
  return;
}


/* Sexy::LazySingleton<Lua::CLuaEngine>::~LazySingleton() */

void __thiscall
Sexy::LazySingleton<Lua::CLuaEngine>::~LazySingleton(LazySingleton<Lua::CLuaEngine> *this)

{
  ~LazySingleton(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::LazySingleton<Lua::CLuaEngine>::LazySingleton() */

void __thiscall
Sexy::LazySingleton<Lua::CLuaEngine>::LazySingleton(LazySingleton<Lua::CLuaEngine> *this)

{
  *(undefined ***)this = &PTR__LazySingleton_06a2c870;
  m_instance = this;
  return;
}

