// Class: ArcadeModule


/* ArcadeModule::ArcadeModule() */

void __thiscall ArcadeModule::ArcadeModule(ArcadeModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06917260;
  return;
}


/* ArcadeModule::~ArcadeModule() */

void __thiscall ArcadeModule::~ArcadeModule(ArcadeModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06917260;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* ArcadeModule::~ArcadeModule() */

void __thiscall ArcadeModule::~ArcadeModule(ArcadeModule *this)

{
  ~ArcadeModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadeModule::onFailure() */

void ArcadeModule::onFailure(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  hash_node *phVar4;
  ArcadePropertySheet *this;
  undefined8 uVar5;
  string asStack_28 [8];
  string asStack_20 [8];
  hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
  ahStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_04970bcc(*(undefined4 *)(gGameStateMgr + 0x1ec0));
  if (iVar2 == 0) {
    phVar4 = (hash_node *)ProfileUtils::Profile();
    this = (ArcadePropertySheet *)ArcadePropertySheet::Get();
    eastl::
    hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
    ::hashtable_iterator_base(ahStack_18,phVar4,(hash_node **)this);
    PlantAnimRig_HoyaCordata::getIdleAnimationName();
    uVar5 = ArcadePropertySheet::GetModeByLevelID(this,asStack_28);
    FUN_05475d88(asStack_20,uVar5);
    cVar1 = ArcadePropertySheet::IsLevelEndless(this,asStack_28);
    uVar3 = 0;
    if (cVar1 != '\0') {
      uVar3 = ArcadeProgressDatabase::GetCurrentEndlessWave
                        ((ArcadeProgressDatabase *)ahStack_18,asStack_28);
      ArcadeProgressDatabase::ResetCurrentEndlessWave
                ((ArcadeProgressDatabase *)ahStack_18,asStack_28);
    }
    PlayerInfo::UpdateArcadeLastPlayForMode((PlayerInfo *)phVar4,asStack_20,asStack_28,3,uVar3);
    std::string::~string(asStack_20);
    std::string::~string(asStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadeModule::StaticClassInit() */

void ArcadeModule::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"ArcadeModule");
    (*pcVar2)(plVar1,asStack_10,FUN_0497113c,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArcadeModule::StaticGetClass() */

long * ArcadeModule::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"ArcadeModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadeModule::cacheWhetherLevelWasPreviouslyCompleted() */

void ArcadeModule::cacheWhetherLevelWasPreviouslyCompleted(void)

{
  bool bVar1;
  hash_node *phVar2;
  hash_node **pphVar3;
  Board *this;
  string asStack_20 [8];
  hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
  ahStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  phVar2 = (hash_node *)ProfileUtils::Profile();
  pphVar3 = (hash_node **)ArcadePropertySheet::Get();
  eastl::
  hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
  ::hashtable_iterator_base(ahStack_18,phVar2,pphVar3);
  PlantAnimRig_HoyaCordata::getIdleAnimationName();
  this = *(Board **)(gLawnApp + 0x9f0);
  bVar1 = (bool)ArcadeProgressDatabase::IsLevelComplete
                          ((ArcadeProgressDatabase *)ahStack_18,asStack_20);
  Board::SetHasPlayerPreviouslyCompletedLevel(this,bVar1);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadeModule::GetEndlessWave() const */

void ArcadeModule::GetEndlessWave(void)

{
  char cVar1;
  undefined4 uVar2;
  hash_node *phVar3;
  ArcadePropertySheet *this;
  string asStack_20 [8];
  hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
  ahStack_18 [16];
  long local_8;
  
  uVar2 = 0;
  local_8 = ___stack_chk_guard;
  phVar3 = (hash_node *)ProfileUtils::Profile();
  this = (ArcadePropertySheet *)ArcadePropertySheet::Get();
  eastl::
  hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
  ::hashtable_iterator_base(ahStack_18,phVar3,(hash_node **)this);
  PlantAnimRig_HoyaCordata::getIdleAnimationName();
  cVar1 = ArcadePropertySheet::IsLevelEndless(this,asStack_20);
  if (cVar1 != '\0') {
    uVar2 = ArcadeProgressDatabase::GetCurrentEndlessWave
                      ((ArcadeProgressDatabase *)ahStack_18,asStack_20);
  }
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadeModule::StartEndless() */

void ArcadeModule::StartEndless(void)

{
  char cVar1;
  hash_node *phVar2;
  ArcadePropertySheet *this;
  string asStack_20 [8];
  hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
  ahStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  phVar2 = (hash_node *)ProfileUtils::Profile();
  this = (ArcadePropertySheet *)ArcadePropertySheet::Get();
  eastl::
  hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
  ::hashtable_iterator_base(ahStack_18,phVar2,(hash_node **)this);
  PlantAnimRig_HoyaCordata::getIdleAnimationName();
  cVar1 = ArcadePropertySheet::IsLevelEndless(this,asStack_20);
  if (cVar1 == '\0') {
    std::string::~string(asStack_20);
  }
  else {
    ArcadeProgressDatabase::ResetCurrentEndlessWave((ArcadeProgressDatabase *)ahStack_18,asStack_20)
    ;
    ArcadeProgressDatabase::CompleteCurrentEndlessWave
              ((ArcadeProgressDatabase *)ahStack_18,asStack_20);
    std::string::~string(asStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArcadeModule::StaticNew() */

ArcadeModule * ArcadeModule::StaticNew(void)

{
  ArcadeModule *this;
  
  this = ::operator_new(0x18);
  ArcadeModule(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadeModule::onAnyLoad() */

void ArcadeModule::onAnyLoad(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  PlayerInfo *pPVar4;
  ArcadePropertySheet *this;
  undefined8 uVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  undefined1 local_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = 0;
  cacheWhetherLevelWasPreviouslyCompleted();
  std::string::string(asStack_20,"UIPowerupHolder");
  UIWidget::GetWidgetBySheetName(asStack_20);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  std::string::~string(asStack_20);
  nop();
  pPVar4 = (PlayerInfo *)ProfileUtils::Profile();
  this = (ArcadePropertySheet *)ArcadePropertySheet::Get();
  PlantAnimRig_HoyaCordata::getIdleAnimationName();
  uVar5 = ArcadePropertySheet::GetModeByLevelID(this,asStack_28);
  FUN_05475d88(asStack_20,uVar5);
  cVar1 = ArcadePropertySheet::IsLevelEndless(this,asStack_28);
  if (cVar1 != '\0') {
    local_18 = ArcadeProgressDatabase::Instance();
    uVar3 = ArcadeProgressDatabase::GetCurrentEndlessWave
                      ((ArcadeProgressDatabase *)local_18,asStack_28);
  }
  iVar2 = FUN_04970bcc(*(undefined4 *)(gGameStateMgr + 0x1ec0));
  if (iVar2 == 0) {
    PlayerInfo::UpdateArcadeLastPlayForMode(pPVar4,asStack_20,asStack_28,1,uVar3);
  }
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArcadeModule::onLoadComplete() */

void __thiscall ArcadeModule::onLoadComplete(ArcadeModule *this)

{
  onAnyLoad();
  (**(code **)(*(long *)this + 0xa0))(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadeModule::onPostLoad() */

void ArcadeModule::onPostLoad(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  PlayerInfo *pPVar4;
  ArcadePropertySheet *this;
  undefined8 uVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  undefined1 auStack_18 [16];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  uVar3 = 0;
  cacheWhetherLevelWasPreviouslyCompleted();
  std::string::string(asStack_20,"UIPowerupHolder");
  UIWidget::GetWidgetBySheetName(asStack_20);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)auStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)auStack_18);
  std::string::~string(asStack_20);
  nop();
  pPVar4 = (PlayerInfo *)ProfileUtils::Profile();
  this = (ArcadePropertySheet *)ArcadePropertySheet::Get();
  PlantAnimRig_HoyaCordata::getIdleAnimationName();
  uVar5 = ArcadePropertySheet::GetModeByLevelID(this,asStack_28);
  FUN_05475d88(asStack_20,uVar5);
  cVar1 = ArcadePropertySheet::IsLevelEndless(this,asStack_28);
  if (cVar1 != '\0') {
    auStack_18 = ArcadeProgressDatabase::Instance();
    uVar3 = ArcadeProgressDatabase::GetCurrentEndlessWave
                      ((ArcadeProgressDatabase *)auStack_18,asStack_28);
  }
  iVar2 = FUN_04970bcc(*(undefined4 *)(gGameStateMgr + 0x1ec0));
  if (iVar2 == 0) {
    PlayerInfo::UpdateArcadeLastPlayForMode(pPVar4,asStack_20,asStack_28,1,uVar3);
  }
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadeModule::addPowerUpsToBoard() */

void ArcadeModule::addPowerUpsToBoard(void)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  PowerupManager *pPVar5;
  PlayerInfo *this;
  long lVar6;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar5 = (PowerupManager *)Board::GetPowerupManager(*(Board **)(gLawnApp + 0x9f0));
  PowerupManager::RemoveAllPowerups(pPVar5);
  this = (PlayerInfo *)ProfileUtils::Profile();
  lVar6 = FUN_04971668(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if ((this != (PlayerInfo *)0x0) && (lVar6 != 0)) {
    VaseBreakerModule::GetPowerUpTutorial();
    lVar6 = FUN_05474178(asStack_20);
    if (lVar6 == 0) {
      lVar6 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
      if (*(char *)(lVar6 + 0x16c) == '\0') {
        cVar3 = CustomLevelUtils::IsCustomLevel();
        if (cVar3 == '\0') {
          pPVar5 = (PowerupManager *)Board::GetPowerupManager(*(Board **)(gLawnApp + 0x9f0));
          std::string::string(asStack_10,"powerupvasebreakermove");
          std::string::string(asStack_18,"powerupvasebreakermove");
          bVar2 = PlayerInfo::GetPowerupUnlockState(this,asStack_18);
          PowerupManager::AddPowerup(pPVar5,asStack_10,(bool)(bVar2 ^ 1));
          std::string::~string(asStack_18);
          nop();
          std::string::~string(asStack_10);
          nop();
          pPVar5 = (PowerupManager *)Board::GetPowerupManager(*(Board **)(gLawnApp + 0x9f0));
          std::string::string(asStack_10,"powerupvasebreakerbutter");
          std::string::string(asStack_18,"powerupvasebreakerbutter");
          bVar2 = PlayerInfo::GetPowerupUnlockState(this,asStack_18);
          PowerupManager::AddPowerup(pPVar5,asStack_10,(bool)(bVar2 ^ 1));
          std::string::~string(asStack_18);
          nop();
          std::string::~string(asStack_10);
          nop();
          pPVar5 = (PowerupManager *)Board::GetPowerupManager(*(Board **)(gLawnApp + 0x9f0));
          std::string::string(asStack_10,"powerupvasebreakerreveal");
          std::string::string(asStack_18,"powerupvasebreakerreveal");
          bVar2 = PlayerInfo::GetPowerupUnlockState(this,asStack_18);
          PowerupManager::AddPowerup(pPVar5,asStack_10,(bool)(bVar2 ^ 1));
          std::string::~string(asStack_18);
          nop();
          std::string::~string(asStack_10);
          nop();
        }
      }
      else {
        pPVar5 = (PowerupManager *)Board::GetPowerupManager(*(Board **)(gLawnApp + 0x9f0));
        std::string::string(asStack_10,"powerupvasebreakermove");
        PowerupManager::AddPowerup(pPVar5,asStack_10,false);
        std::string::~string(asStack_10);
        nop();
        pPVar5 = (PowerupManager *)Board::GetPowerupManager(*(Board **)(gLawnApp + 0x9f0));
        std::string::string(asStack_10,"powerupvasebreakerbutter");
        PowerupManager::AddPowerup(pPVar5,asStack_10,false);
        std::string::~string(asStack_10);
        nop();
        pPVar5 = (PowerupManager *)Board::GetPowerupManager(*(Board **)(gLawnApp + 0x9f0));
        std::string::string(asStack_10,"powerupvasebreakerreveal");
        PowerupManager::AddPowerup(pPVar5,asStack_10,false);
        std::string::~string(asStack_10);
        nop();
      }
      std::string::~string(asStack_20);
    }
    else {
      bVar1 = std::operator==(asStack_20,"powerupvasebreakermove");
      if (bVar1) {
        pPVar5 = (PowerupManager *)Board::GetPowerupManager(*(Board **)(gLawnApp + 0x9f0));
        std::string::string(asStack_10,"powerupvasebreakermove");
        PowerupManager::AddPowerup(pPVar5,asStack_10,false);
        std::string::~string(asStack_10);
        nop();
        pPVar5 = (PowerupManager *)Board::GetPowerupManager(*(Board **)(gLawnApp + 0x9f0));
        std::string::string(asStack_10,"powerupvasebreakerbutter");
        std::string::string(asStack_18,"powerupvasebreakerbutter");
        bVar2 = PlayerInfo::GetPowerupUnlockState(this,asStack_18);
        PowerupManager::AddPowerup(pPVar5,asStack_10,(bool)(bVar2 ^ 1));
        std::string::~string(asStack_18);
        nop();
        std::string::~string(asStack_10);
        nop();
        pPVar5 = (PowerupManager *)Board::GetPowerupManager(*(Board **)(gLawnApp + 0x9f0));
        std::string::string(asStack_10,"powerupvasebreakerreveal");
        std::string::string(asStack_18,"powerupvasebreakerreveal");
        bVar2 = PlayerInfo::GetPowerupUnlockState(this,asStack_18);
        PowerupManager::AddPowerup(pPVar5,asStack_10,(bool)(bVar2 ^ 1));
        std::string::~string(asStack_18);
        nop();
        std::string::~string(asStack_10);
        nop();
      }
      else {
        bVar4 = std::operator==(asStack_20,"powerupvasebreakerbutter");
        if (bVar4) {
          pPVar5 = (PowerupManager *)Board::GetPowerupManager(*(Board **)(gLawnApp + 0x9f0));
          std::string::string(asStack_10,"powerupvasebreakermove");
          std::string::string(asStack_18,"powerupvasebreakermove");
          bVar2 = PlayerInfo::GetPowerupUnlockState(this,asStack_18);
          PowerupManager::AddPowerup(pPVar5,asStack_10,(bool)(bVar2 ^ 1));
          std::string::~string(asStack_18);
          nop();
          std::string::~string(asStack_10);
          nop();
          pPVar5 = (PowerupManager *)Board::GetPowerupManager(*(Board **)(gLawnApp + 0x9f0));
          std::string::string(asStack_10,"powerupvasebreakerbutter");
          PowerupManager::AddPowerup(pPVar5,asStack_10,bVar1);
          std::string::~string(asStack_10);
          nop();
          pPVar5 = (PowerupManager *)Board::GetPowerupManager(*(Board **)(gLawnApp + 0x9f0));
          std::string::string(asStack_10,"powerupvasebreakerreveal");
          std::string::string(asStack_18,"powerupvasebreakerreveal");
          bVar2 = PlayerInfo::GetPowerupUnlockState(this,asStack_18);
          PowerupManager::AddPowerup(pPVar5,asStack_10,(bool)(bVar2 ^ 1));
          std::string::~string(asStack_18);
          nop();
          std::string::~string(asStack_10);
          nop();
        }
        else {
          bVar1 = std::operator==(asStack_20,"powerupvasebreakerreveal");
          if (bVar1) {
            pPVar5 = (PowerupManager *)Board::GetPowerupManager(*(Board **)(gLawnApp + 0x9f0));
            std::string::string(asStack_10,"powerupvasebreakermove");
            std::string::string(asStack_18,"powerupvasebreakermove");
            bVar2 = PlayerInfo::GetPowerupUnlockState(this,asStack_18);
            PowerupManager::AddPowerup(pPVar5,asStack_10,(bool)(bVar2 ^ 1));
            std::string::~string(asStack_18);
            nop();
            std::string::~string(asStack_10);
            nop();
            pPVar5 = (PowerupManager *)Board::GetPowerupManager(*(Board **)(gLawnApp + 0x9f0));
            std::string::string(asStack_10,"powerupvasebreakerbutter");
            std::string::string(asStack_18,"powerupvasebreakerbutter");
            bVar2 = PlayerInfo::GetPowerupUnlockState(this,asStack_18);
            PowerupManager::AddPowerup(pPVar5,asStack_10,(bool)(bVar2 ^ 1));
            std::string::~string(asStack_18);
            nop();
            std::string::~string(asStack_10);
            nop();
            pPVar5 = (PowerupManager *)Board::GetPowerupManager(*(Board **)(gLawnApp + 0x9f0));
            std::string::string(asStack_10,"powerupvasebreakerreveal");
            PowerupManager::AddPowerup(pPVar5,asStack_10,false);
            std::string::~string(asStack_10);
            nop();
          }
        }
      }
      PlayerInfo::SetPowerupUnlockState(this,asStack_20,true);
      std::string::~string(asStack_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadeModule::saveCompletedArcadeProgress() */

void ArcadeModule::saveCompletedArcadeProgress(void)

{
  char cVar1;
  hash_node *phVar2;
  ArcadePropertySheet *this;
  undefined8 uVar3;
  ArcadeLevelPack *pAVar4;
  PowerUpCollection *pPVar5;
  string asStack_b0 [8];
  string asStack_a8 [8];
  hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
  ahStack_a0 [16];
  PowerUpCollection aPStack_90 [32];
  ArcadeLevelPack aAStack_70 [88];
  int local_18;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  phVar2 = (hash_node *)ProfileUtils::Profile();
  this = (ArcadePropertySheet *)ArcadePropertySheet::Get();
  eastl::
  hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
  ::hashtable_iterator_base(ahStack_a0,phVar2,(hash_node **)this);
  PlantAnimRig_HoyaCordata::getIdleAnimationName();
  uVar3 = ArcadePropertySheet::GetModeByLevelID(this,asStack_b0);
  FUN_05475d88(asStack_a8,uVar3);
  cVar1 = ArcadeProgressDatabase::IsLevelComplete((ArcadeProgressDatabase *)ahStack_a0,asStack_b0);
  if (cVar1 == '\0') {
    LawnApp::QueueUnlocksFromArcadeLevel(gLawnApp);
  }
  ArcadeProgressDatabase::CompleteLevel((ArcadeProgressDatabase *)ahStack_a0,asStack_b0);
  cVar1 = ArcadePropertySheet::IsLevelEndless(this,asStack_b0);
  if (cVar1 == '\0') {
    pAVar4 = (ArcadeLevelPack *)ArcadePropertySheet::GetLevelPackByLevelID(this,asStack_b0);
    ArcadePropertySheetHelpers::ArcadeLevelPack::ArcadeLevelPack(aAStack_70,pAVar4);
    cVar1 = ArcadePropertySheetHelpers::ArcadeLevelPack::IsLevelLastInPack(aAStack_70,asStack_b0);
    if ((cVar1 != '\0') && (local_18 == 2)) {
      pPVar5 = (PowerUpCollection *)
               ArcadePropertySheet::GetPowerUpCollectionByLevelID(this,asStack_b0);
      ArcadePropertySheetHelpers::PowerUpCollection::PowerUpCollection(aPStack_90,pPVar5);
      ArcadeProgressDatabase::UnlockPowerUp
                ((ArcadeProgressDatabase *)ahStack_a0,asStack_10,(string *)aPStack_90);
      ArcadePropertySheetHelpers::PowerUpCollection::~PowerUpCollection(aPStack_90);
    }
    ArcadePropertySheetHelpers::ArcadeLevelPack::~ArcadeLevelPack(aAStack_70);
  }
  PlayerInfo::UpdateArcadeLastPlayForMode((PlayerInfo *)phVar2,asStack_a8,asStack_b0,2,0);
  std::string::~string(asStack_a8);
  std::string::~string(asStack_b0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArcadeModule::onVictory() */

void ArcadeModule::onVictory(void)

{
  int iVar1;
  
  iVar1 = FUN_04970bcc(*(undefined4 *)(gGameStateMgr + 0x1ec0));
  if (iVar1 != 0) {
    return;
  }
  saveCompletedArcadeProgress();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadeModule::registerForEvents() */

void __thiscall ArcadeModule::registerForEvents(ArcadeModule *this)

{
  undefined *this_00;
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLoadComplete);
  Sexy::Delegate0::Delegate0<ArcadeModule,void(ArcadeModule::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar1,aDStack_38);
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onVictory);
  Sexy::Delegate0::Delegate0<ArcadeModule,void(ArcadeModule::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::GameWon,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onFailure);
  Sexy::Delegate0::Delegate0<ArcadeModule,void(ArcadeModule::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnLossOutroStarted(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadeModule::CompleteCurrentEndlessWave(bool&, std::string&) */

void __thiscall
ArcadeModule::CompleteCurrentEndlessWave(ArcadeModule *this,bool *param_1,string *param_2)

{
  string *psVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  PlayerInfo *this_00;
  ArcadePropertySheet *this_01;
  undefined8 uVar7;
  ArcadeMode *this_02;
  string *psVar8;
  long lVar9;
  string asStack_a8 [8];
  string asStack_a0 [8];
  hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
  ahStack_98 [16];
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PlayerInfo *)ProfileUtils::Profile();
  this_01 = (ArcadePropertySheet *)ArcadePropertySheet::Get();
  eastl::
  hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
  ::hashtable_iterator_base(ahStack_98,(hash_node *)this_00,(hash_node **)this_01);
  PlantAnimRig_HoyaCordata::getIdleAnimationName();
  cVar2 = ArcadePropertySheet::IsLevelEndless(this_01,asStack_a8);
  if (cVar2 == '\0') {
    std::string::~string(asStack_a8);
  }
  else {
    uVar7 = ArcadePropertySheet::GetModeByLevelID(this_01,asStack_a8);
    FUN_05475d88(asStack_a0,uVar7);
    uVar3 = ArcadeProgressDatabase::GetCurrentEndlessWave
                      ((ArcadeProgressDatabase *)ahStack_98,asStack_a8);
    PlayerInfo::UpdateArcadeLastPlayForMode(this_00,asStack_a0,asStack_a8,1,uVar3);
    iVar4 = ArcadeProgressDatabase::GetHighestCompletedEndlessWave
                      ((ArcadeProgressDatabase *)ahStack_98,asStack_a8);
    iVar5 = ArcadeProgressDatabase::GetCurrentEndlessWave
                      ((ArcadeProgressDatabase *)ahStack_98,asStack_a8);
    ArcadeProgressDatabase::CompleteCurrentEndlessWave
              ((ArcadeProgressDatabase *)ahStack_98,asStack_a8);
    iVar6 = ArcadeProgressDatabase::GetHighestCompletedEndlessWave
                      ((ArcadeProgressDatabase *)ahStack_98,asStack_a8);
    *param_1 = iVar6 != iVar4;
    this_02 = (ArcadeMode *)ArcadePropertySheet::GetModeByLevelID(this_01,asStack_a8);
    cVar2 = ArcadePropertySheetHelpers::ArcadeMode::HasPowerUpCollection(this_02);
    if (cVar2 != '\0') {
      psVar1 = (string *)(this_02 + 0x30);
      psVar8 = (string *)
               ArcadePropertySheet::GetPowerUpCollectionByModeID(this_01,(string *)this_02);
      lVar9 = FUN_05474184(psVar1);
      if (((lVar9 != 0) && (*(int *)(this_02 + 0x38) <= iVar5)) &&
         (cVar2 = ArcadeProgressDatabase::IsPowerUpUnlocked
                            ((ArcadeProgressDatabase *)ahStack_98,psVar1,psVar8), cVar2 == '\0')) {
        ArcadeProgressDatabase::UnlockPowerUp((ArcadeProgressDatabase *)ahStack_98,psVar1,psVar8);
        thunk_FUN_05475e00(param_2,psVar1);
      }
    }
    (**(code **)(*(long *)this + 0xa0))(this);
    iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar4);
    if ((local_70 != '\0') && (*param_1 != false)) {
      PlayerInfo::AddDailyAchievementRecord(this_00,0x2a8f,1);
    }
    ActiveItem::~ActiveItem(aAStack_88);
    std::string::~string(asStack_a0);
    std::string::~string(asStack_a8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

