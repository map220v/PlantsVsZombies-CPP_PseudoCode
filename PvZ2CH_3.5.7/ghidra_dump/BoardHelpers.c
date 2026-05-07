// Class: BoardHelpers


/* UnchartedBoostModule* BoardHelpers::GetLevelModuleByClass<UnchartedBoostModule>() */

UnchartedBoostModule * BoardHelpers::GetLevelModuleByClass<UnchartedBoostModule>(void)

{
  LevelModuleManager *this;
  UnchartedBoostModule *pUVar1;
  
  this = (LevelModuleManager *)FUN_0340bd78(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this != (LevelModuleManager *)0x0) {
    pUVar1 = LevelModuleManager::GetModuleByClass<UnchartedBoostModule>(this);
    return pUVar1;
  }
  return (UnchartedBoostModule *)0x0;
}


/* bool BoardHelpers::HasGameModuleInLevelDefinition<CustomLevelModuleProperties>() */

bool BoardHelpers::HasGameModuleInLevelDefinition<CustomLevelModuleProperties>(void)

{
  bool bVar1;
  long lVar2;
  LevelDefinition *this;
  
  if ((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
     (lVar2 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)), lVar2 != 0)) {
    this = (LevelDefinition *)Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
    bVar1 = LevelDefinition::HasLevelModule<CustomLevelModuleProperties>(this);
    return bVar1;
  }
  return false;
}


/* BonusChallengeModule* BoardHelpers::GetLevelModuleByClass<BonusChallengeModule>() */

BonusChallengeModule * BoardHelpers::GetLevelModuleByClass<BonusChallengeModule>(void)

{
  LevelModuleManager *this;
  BonusChallengeModule *pBVar1;
  
  this = (LevelModuleManager *)FUN_0368cfec(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this != (LevelModuleManager *)0x0) {
    pBVar1 = LevelModuleManager::GetModuleByClass<BonusChallengeModule>(this);
    return pBVar1;
  }
  return (BonusChallengeModule *)0x0;
}


/* StarChallengeModule* BoardHelpers::GetLevelModuleByClass<StarChallengeModule>() */

StarChallengeModule * BoardHelpers::GetLevelModuleByClass<StarChallengeModule>(void)

{
  LevelModuleManager *this;
  StarChallengeModule *pSVar1;
  
  this = (LevelModuleManager *)FUN_0369ef1c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this != (LevelModuleManager *)0x0) {
    pSVar1 = LevelModuleManager::GetModuleByClass<StarChallengeModule>(this);
    return pSVar1;
  }
  return (StarChallengeModule *)0x0;
}


/* bool BoardHelpers::HasGameModuleInLevelDefinition<PerkHandlerModuleProperties>() */

bool BoardHelpers::HasGameModuleInLevelDefinition<PerkHandlerModuleProperties>(void)

{
  bool bVar1;
  long lVar2;
  LevelDefinition *this;
  
  if ((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
     (lVar2 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)), lVar2 != 0)) {
    this = (LevelDefinition *)Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
    bVar1 = LevelDefinition::HasLevelModule<PerkHandlerModuleProperties>(this);
    return bVar1;
  }
  return false;
}


/* bool BoardHelpers::HasGameModuleInLevelDefinition<ZombossRiftBattleModuleProperties>() */

bool BoardHelpers::HasGameModuleInLevelDefinition<ZombossRiftBattleModuleProperties>(void)

{
  bool bVar1;
  long lVar2;
  LevelDefinition *this;
  
  if ((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
     (lVar2 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)), lVar2 != 0)) {
    this = (LevelDefinition *)Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
    bVar1 = LevelDefinition::HasLevelModule<ZombossRiftBattleModuleProperties>(this);
    return bVar1;
  }
  return false;
}


/* ZombossRiftBattleModule* BoardHelpers::GetLevelModuleByClass<ZombossRiftBattleModule>() */

ZombossRiftBattleModule * BoardHelpers::GetLevelModuleByClass<ZombossRiftBattleModule>(void)

{
  LevelModuleManager *this;
  ZombossRiftBattleModule *pZVar1;
  
  this = (LevelModuleManager *)FUN_036b3314(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this != (LevelModuleManager *)0x0) {
    pZVar1 = LevelModuleManager::GetModuleByClass<ZombossRiftBattleModule>(this);
    return pZVar1;
  }
  return (ZombossRiftBattleModule *)0x0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardHelpers::LoadPopanimEffect(std::string const&, int, std::string const&) */

void __thiscall
BoardHelpers::LoadPopanimEffect(BoardHelpers *this,string *param_1,int param_2,string *param_3)

{
  char cVar1;
  Effect_PopAnim *this_00;
  PopAnim *pPVar2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c();
  if (cVar1 == '\0') {
    this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    GetPAMByName((string *)this);
    pPVar2 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    Effect_PopAnim::CreatePopAnimRig(this_00,pPVar2,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,0.0,0.0,0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,-1);
    FUN_036cdc38(this_00 + 0x1c,(ulong)param_1 & 0xffffffff);
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation(this_00,param_2,0);
    StandaloneEffect::SetIsScreenSpaceEffect((StandaloneEffect *)this_00,false);
    StandaloneEffect::SetVisibility((StandaloneEffect *)this_00,false);
    ToolPacketData::GetProps();
  }
  else {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8)
    ;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelMutatorRiftTimedToolModule*
   BoardHelpers::GetLevelModuleByClass<LevelMutatorRiftTimedToolModule>() */

LevelMutatorRiftTimedToolModule *
BoardHelpers::GetLevelModuleByClass<LevelMutatorRiftTimedToolModule>(void)

{
  LevelModuleManager *this;
  LevelMutatorRiftTimedToolModule *pLVar1;
  
  this = (LevelModuleManager *)FUN_036cdc44(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this != (LevelModuleManager *)0x0) {
    pLVar1 = LevelModuleManager::GetModuleByClass<LevelMutatorRiftTimedToolModule>(this);
    return pLVar1;
  }
  return (LevelMutatorRiftTimedToolModule *)0x0;
}


/* BoardHelpers::ApplyLevelOverride_RiftTimedToolSize() */

undefined8 BoardHelpers::ApplyLevelOverride_RiftTimedToolSize(void)

{
  int iVar1;
  LevelMutatorRiftTimedToolModule *this;
  undefined8 uVar2;
  
  this = GetLevelModuleByClass<LevelMutatorRiftTimedToolModule>();
  if ((this != (LevelMutatorRiftTimedToolModule *)0x0) &&
     (iVar1 = LevelMutatorRiftTimedToolModule::GetToolSize(this), 0 < iVar1)) {
    uVar2 = LevelMutatorRiftTimedToolModule::GetToolSize(this);
    return uVar2;
  }
  return 0;
}


/* BoardHelpers::ApplyLevelOverride_RiftTimedToolList(std::vector<std::string,
   std::allocator<std::string > >&) */

void BoardHelpers::ApplyLevelOverride_RiftTimedToolList(vector *param_1)

{
  int iVar1;
  LevelMutatorRiftTimedToolModule *this;
  
  this = GetLevelModuleByClass<LevelMutatorRiftTimedToolModule>();
  if ((this != (LevelMutatorRiftTimedToolModule *)0x0) &&
     (iVar1 = LevelMutatorRiftTimedToolModule::GetToolSize(this), 0 < iVar1)) {
    LevelMutatorRiftTimedToolModule::GetOverrideToolList(this,param_1);
    return;
  }
  return;
}


/* LevelMutatorRiftTimedSunModule*
   BoardHelpers::GetLevelModuleByClass<LevelMutatorRiftTimedSunModule>() */

LevelMutatorRiftTimedSunModule *
BoardHelpers::GetLevelModuleByClass<LevelMutatorRiftTimedSunModule>(void)

{
  LevelModuleManager *this;
  LevelMutatorRiftTimedSunModule *pLVar1;
  
  this = (LevelModuleManager *)FUN_036cdc44(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this != (LevelModuleManager *)0x0) {
    pLVar1 = LevelModuleManager::GetModuleByClass<LevelMutatorRiftTimedSunModule>(this);
    return pLVar1;
  }
  return (LevelMutatorRiftTimedSunModule *)0x0;
}


/* BoardHelpers::CanProduceSun() */

bool BoardHelpers::CanProduceSun(void)

{
  LevelMutatorRiftTimedSunModule *pLVar1;
  
  pLVar1 = GetLevelModuleByClass<LevelMutatorRiftTimedSunModule>();
  return pLVar1 == (LevelMutatorRiftTimedSunModule *)0x0;
}


/* BoardHelpers::ApplyLevelOverride_RiftTimedSunBlackList(std::vector<std::string,
   std::allocator<std::string > >&) */

void BoardHelpers::ApplyLevelOverride_RiftTimedSunBlackList(vector *param_1)

{
  int iVar1;
  LevelMutatorRiftTimedSunModule *this;
  
  this = GetLevelModuleByClass<LevelMutatorRiftTimedSunModule>();
  if ((this != (LevelMutatorRiftTimedSunModule *)0x0) &&
     (iVar1 = LevelMutatorRiftTimedSunModule::GetPlantBannedListSize(this), 0 < iVar1)) {
    LevelMutatorRiftTimedSunModule::GetOverridePlantBannedList(this,param_1);
    return;
  }
  return;
}


/* BoardHelpers::ApplyLevelOverride_SunDrop(int, bool) */

int BoardHelpers::ApplyLevelOverride_SunDrop(int param_1,bool param_2)

{
  LevelMutatorRiftTimedSunModule *pLVar1;
  
  pLVar1 = GetLevelModuleByClass<LevelMutatorRiftTimedSunModule>();
  if ((pLVar1 != (LevelMutatorRiftTimedSunModule *)0x0) && (!param_2)) {
    return 0;
  }
  return param_1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardHelpers::ApplyLevelOverride_SunDropType(std::string) */

void __thiscall BoardHelpers::ApplyLevelOverride_SunDropType(string *param_1,BoardHelpers *this)

{
  long lVar1;
  LevelMutatorRiftTimedSunModule *pLVar2;
  
  lVar1 = ___stack_chk_guard;
  pLVar2 = GetLevelModuleByClass<LevelMutatorRiftTimedSunModule>();
  if (pLVar2 == (LevelMutatorRiftTimedSunModule *)0x0) {
    FUN_05475d88(param_1,this);
  }
  else {
    std::string::string(param_1,"sun_rift");
    nop();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardHelpers::ApplyLevelOverride_SunDropSmallType(std::string) */

void __thiscall
BoardHelpers::ApplyLevelOverride_SunDropSmallType(string *param_1,BoardHelpers *this)

{
  long lVar1;
  LevelMutatorRiftTimedSunModule *pLVar2;
  
  lVar1 = ___stack_chk_guard;
  pLVar2 = GetLevelModuleByClass<LevelMutatorRiftTimedSunModule>();
  if (pLVar2 == (LevelMutatorRiftTimedSunModule *)0x0) {
    FUN_05475d88(param_1,this);
  }
  else {
    std::string::string(param_1,"sun_rift_small");
    nop();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardHelpers::ApplyLevelOverride_SunDropTinyType(std::string) */

void __thiscall BoardHelpers::ApplyLevelOverride_SunDropTinyType(string *param_1,BoardHelpers *this)

{
  long lVar1;
  LevelMutatorRiftTimedSunModule *pLVar2;
  
  lVar1 = ___stack_chk_guard;
  pLVar2 = GetLevelModuleByClass<LevelMutatorRiftTimedSunModule>();
  if (pLVar2 == (LevelMutatorRiftTimedSunModule *)0x0) {
    FUN_05475d88(param_1,this);
  }
  else {
    std::string::string(param_1,"sun_rift_tiny");
    nop();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* LevelMutatorStartingPlantfoodModule*
   BoardHelpers::GetLevelModuleByClass<LevelMutatorStartingPlantfoodModule>() */

LevelMutatorStartingPlantfoodModule *
BoardHelpers::GetLevelModuleByClass<LevelMutatorStartingPlantfoodModule>(void)

{
  LevelModuleManager *this;
  LevelMutatorStartingPlantfoodModule *pLVar1;
  
  this = (LevelModuleManager *)FUN_036cdc44(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this != (LevelModuleManager *)0x0) {
    pLVar1 = LevelModuleManager::GetModuleByClass<LevelMutatorStartingPlantfoodModule>(this);
    return pLVar1;
  }
  return (LevelMutatorStartingPlantfoodModule *)0x0;
}


/* BoardHelpers::ApplyLevelOverride_PlantfoodStart(int) */

ulong BoardHelpers::ApplyLevelOverride_PlantfoodStart(int param_1)

{
  int iVar1;
  LevelMutatorStartingPlantfoodModule *this;
  ulong uVar2;
  
  this = GetLevelModuleByClass<LevelMutatorStartingPlantfoodModule>();
  if ((this != (LevelMutatorStartingPlantfoodModule *)0x0) &&
     (iVar1 = LevelMutatorRiftZombossPhasesModule::GetZombossPhasesOverride
                        ((LevelMutatorRiftZombossPhasesModule *)this), 0 < iVar1)) {
    uVar2 = LevelMutatorRiftZombossPhasesModule::GetZombossPhasesOverride
                      ((LevelMutatorRiftZombossPhasesModule *)this);
    return uVar2;
  }
  return (ulong)(uint)param_1;
}


/* PlantCooldownModifierModule* BoardHelpers::GetLevelModuleByClass<PlantCooldownModifierModule>()
    */

PlantCooldownModifierModule * BoardHelpers::GetLevelModuleByClass<PlantCooldownModifierModule>(void)

{
  LevelModuleManager *this;
  PlantCooldownModifierModule *pPVar1;
  
  this = (LevelModuleManager *)FUN_036cdc44(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this != (LevelModuleManager *)0x0) {
    pPVar1 = LevelModuleManager::GetModuleByClass<PlantCooldownModifierModule>(this);
    return pPVar1;
  }
  return (PlantCooldownModifierModule *)0x0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardHelpers::ApplyLevelOverride_PlantCooldownTime(float, Sexy::RtWeakPtr<PlantType const>) */

void BoardHelpers::ApplyLevelOverride_PlantCooldownTime(float param_1,RtWeakPtrBase *param_2)

{
  PlantCooldownModifierModule *pPVar1;
  float fVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = GetLevelModuleByClass<PlantCooldownModifierModule>();
  if (pPVar1 != (PlantCooldownModifierModule *)0x0) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
    fVar2 = (float)PlantCooldownModifierModule::GetCooldownMultiplier(pPVar1,aRStack_10);
    param_1 = fVar2 * param_1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


/* LevelMutatorSeedSlotCountModule*
   BoardHelpers::GetLevelModuleByClass<LevelMutatorSeedSlotCountModule>() */

LevelMutatorSeedSlotCountModule *
BoardHelpers::GetLevelModuleByClass<LevelMutatorSeedSlotCountModule>(void)

{
  LevelModuleManager *this;
  LevelMutatorSeedSlotCountModule *pLVar1;
  
  this = (LevelModuleManager *)FUN_036cdc44(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this != (LevelModuleManager *)0x0) {
    pLVar1 = LevelModuleManager::GetModuleByClass<LevelMutatorSeedSlotCountModule>(this);
    return pLVar1;
  }
  return (LevelMutatorSeedSlotCountModule *)0x0;
}


/* BoardHelpers::ApplyLevelOverride_SeedSlotCount(int) */

ulong BoardHelpers::ApplyLevelOverride_SeedSlotCount(int param_1)

{
  int iVar1;
  LevelMutatorSeedSlotCountModule *this;
  ulong uVar2;
  
  this = GetLevelModuleByClass<LevelMutatorSeedSlotCountModule>();
  if ((this != (LevelMutatorSeedSlotCountModule *)0x0) &&
     (iVar1 = LevelMutatorRiftZombossPhasesModule::GetZombossPhasesOverride
                        ((LevelMutatorRiftZombossPhasesModule *)this), 0 < iVar1)) {
    uVar2 = LevelMutatorRiftZombossPhasesModule::GetZombossPhasesOverride
                      ((LevelMutatorRiftZombossPhasesModule *)this);
    return uVar2;
  }
  return (ulong)(uint)param_1;
}


/* LevelMutatorPowerupSetModule* BoardHelpers::GetLevelModuleByClass<LevelMutatorPowerupSetModule>()
    */

LevelMutatorPowerupSetModule *
BoardHelpers::GetLevelModuleByClass<LevelMutatorPowerupSetModule>(void)

{
  LevelModuleManager *this;
  LevelMutatorPowerupSetModule *pLVar1;
  
  this = (LevelModuleManager *)FUN_036cdc44(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this != (LevelModuleManager *)0x0) {
    pLVar1 = LevelModuleManager::GetModuleByClass<LevelMutatorPowerupSetModule>(this);
    return pLVar1;
  }
  return (LevelMutatorPowerupSetModule *)0x0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardHelpers::ApplyLevelOverride_PowerupSet(std::string&) */

void __thiscall BoardHelpers::ApplyLevelOverride_PowerupSet(BoardHelpers *this,string *param_1)

{
  char cVar1;
  LevelMutatorPowerupSetModule *pLVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar2 = GetLevelModuleByClass<LevelMutatorPowerupSetModule>();
  if (pLVar2 == (LevelMutatorPowerupSetModule *)0x0) {
    FUN_05475d88();
  }
  else {
    LevelMutatorPowerupSetModule::GetPowerupSetOverride();
    cVar1 = FUN_0547419c(asStack_10);
    if (cVar1 == '\0') {
      LevelMutatorPowerupSetModule::GetPowerupSetOverride();
    }
    else {
      FUN_05475d88();
    }
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelMutatorMaxSunModule* BoardHelpers::GetLevelModuleByClass<LevelMutatorMaxSunModule>() */

LevelMutatorMaxSunModule * BoardHelpers::GetLevelModuleByClass<LevelMutatorMaxSunModule>(void)

{
  LevelModuleManager *this;
  LevelMutatorMaxSunModule *pLVar1;
  
  this = (LevelModuleManager *)FUN_036cdc44(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this != (LevelModuleManager *)0x0) {
    pLVar1 = LevelModuleManager::GetModuleByClass<LevelMutatorMaxSunModule>(this);
    return pLVar1;
  }
  return (LevelMutatorMaxSunModule *)0x0;
}


/* BoardHelpers::ApplyLevelOverride_MaxSun(int) */

ulong BoardHelpers::ApplyLevelOverride_MaxSun(int param_1)

{
  int iVar1;
  LevelMutatorMaxSunModule *this;
  ulong uVar2;
  
  this = GetLevelModuleByClass<LevelMutatorMaxSunModule>();
  if ((this != (LevelMutatorMaxSunModule *)0x0) &&
     (iVar1 = LevelMutatorRiftZombossPhasesModule::GetZombossPhasesOverride
                        ((LevelMutatorRiftZombossPhasesModule *)this), 0 < iVar1)) {
    uVar2 = LevelMutatorRiftZombossPhasesModule::GetZombossPhasesOverride
                      ((LevelMutatorRiftZombossPhasesModule *)this);
    return uVar2;
  }
  return (ulong)(uint)param_1;
}


/* LevelMutatorMowerSpawnModule* BoardHelpers::GetLevelModuleByClass<LevelMutatorMowerSpawnModule>()
    */

LevelMutatorMowerSpawnModule *
BoardHelpers::GetLevelModuleByClass<LevelMutatorMowerSpawnModule>(void)

{
  LevelModuleManager *this;
  LevelMutatorMowerSpawnModule *pLVar1;
  
  this = (LevelModuleManager *)FUN_036cdc44(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this != (LevelModuleManager *)0x0) {
    pLVar1 = LevelModuleManager::GetModuleByClass<LevelMutatorMowerSpawnModule>(this);
    return pLVar1;
  }
  return (LevelMutatorMowerSpawnModule *)0x0;
}


/* BoardHelpers::GetLevelOverride_MowerSpawn() */

void BoardHelpers::GetLevelOverride_MowerSpawn(void)

{
  LevelMutatorMowerSpawnModule *this;
  
  this = GetLevelModuleByClass<LevelMutatorMowerSpawnModule>();
  if (this != (LevelMutatorMowerSpawnModule *)0x0) {
    LevelMutatorRiftZombossPhasesModule::GetZombossPhasesOverride
              ((LevelMutatorRiftZombossPhasesModule *)this);
    return;
  }
  return;
}


/* LevelMutatorZombieCountdownFirstWaveSecsModule*
   BoardHelpers::GetLevelModuleByClass<LevelMutatorZombieCountdownFirstWaveSecsModule>() */

LevelMutatorZombieCountdownFirstWaveSecsModule *
BoardHelpers::GetLevelModuleByClass<LevelMutatorZombieCountdownFirstWaveSecsModule>(void)

{
  LevelModuleManager *this;
  LevelMutatorZombieCountdownFirstWaveSecsModule *pLVar1;
  
  this = (LevelModuleManager *)FUN_036cdc44(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this != (LevelModuleManager *)0x0) {
    pLVar1 = LevelModuleManager::GetModuleByClass<LevelMutatorZombieCountdownFirstWaveSecsModule>
                       (this);
    return pLVar1;
  }
  return (LevelMutatorZombieCountdownFirstWaveSecsModule *)0x0;
}


/* LevelMutatorZombieLevelModule*
   BoardHelpers::GetLevelModuleByClass<LevelMutatorZombieLevelModule>() */

LevelMutatorZombieLevelModule *
BoardHelpers::GetLevelModuleByClass<LevelMutatorZombieLevelModule>(void)

{
  LevelModuleManager *this;
  LevelMutatorZombieLevelModule *pLVar1;
  
  this = (LevelModuleManager *)FUN_036cdc44(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this != (LevelModuleManager *)0x0) {
    pLVar1 = LevelModuleManager::GetModuleByClass<LevelMutatorZombieLevelModule>(this);
    return pLVar1;
  }
  return (LevelMutatorZombieLevelModule *)0x0;
}


/* BoardHelpers::ApplyLevelOverride_ZombieBaseLevel(int) */

ulong BoardHelpers::ApplyLevelOverride_ZombieBaseLevel(int param_1)

{
  int iVar1;
  LevelMutatorZombieLevelModule *this;
  ulong uVar2;
  
  this = GetLevelModuleByClass<LevelMutatorZombieLevelModule>();
  if ((this != (LevelMutatorZombieLevelModule *)0x0) &&
     (iVar1 = LevelMutatorRiftZombossPhasesModule::GetZombossPhasesOverride
                        ((LevelMutatorRiftZombossPhasesModule *)this), 0 < iVar1)) {
    uVar2 = LevelMutatorRiftZombossPhasesModule::GetZombossPhasesOverride
                      ((LevelMutatorRiftZombossPhasesModule *)this);
    return uVar2;
  }
  return (ulong)(uint)param_1;
}


/* LevelMutatorZombieGeneralLevelModule*
   BoardHelpers::GetLevelModuleByClass<LevelMutatorZombieGeneralLevelModule>() */

LevelMutatorZombieGeneralLevelModule *
BoardHelpers::GetLevelModuleByClass<LevelMutatorZombieGeneralLevelModule>(void)

{
  LevelModuleManager *this;
  LevelMutatorZombieGeneralLevelModule *pLVar1;
  
  this = (LevelModuleManager *)FUN_036cdc44(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this != (LevelModuleManager *)0x0) {
    pLVar1 = LevelModuleManager::GetModuleByClass<LevelMutatorZombieGeneralLevelModule>(this);
    return pLVar1;
  }
  return (LevelMutatorZombieGeneralLevelModule *)0x0;
}


/* BoardHelpers::ApplyLevelOverride_ZombieGeneralBaseLevel(int) */

ulong BoardHelpers::ApplyLevelOverride_ZombieGeneralBaseLevel(int param_1)

{
  int iVar1;
  LevelMutatorZombieGeneralLevelModule *this;
  ulong uVar2;
  
  this = GetLevelModuleByClass<LevelMutatorZombieGeneralLevelModule>();
  if ((this != (LevelMutatorZombieGeneralLevelModule *)0x0) &&
     (iVar1 = LevelMutatorRiftZombossPhasesModule::GetZombossPhasesOverride
                        ((LevelMutatorRiftZombossPhasesModule *)this), 0 < iVar1)) {
    uVar2 = LevelMutatorRiftZombossPhasesModule::GetZombossPhasesOverride
                      ((LevelMutatorRiftZombossPhasesModule *)this);
    return uVar2;
  }
  return (ulong)(uint)param_1;
}


/* LevelMutatorSunDropperModule* BoardHelpers::GetLevelModuleByClass<LevelMutatorSunDropperModule>()
    */

LevelMutatorSunDropperModule *
BoardHelpers::GetLevelModuleByClass<LevelMutatorSunDropperModule>(void)

{
  LevelModuleManager *this;
  LevelMutatorSunDropperModule *pLVar1;
  
  this = (LevelModuleManager *)FUN_036cdc44(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this != (LevelModuleManager *)0x0) {
    pLVar1 = LevelModuleManager::GetModuleByClass<LevelMutatorSunDropperModule>(this);
    return pLVar1;
  }
  return (LevelMutatorSunDropperModule *)0x0;
}


/* BoardHelpers::ApplyLevelOverride_SunDropperProperties(SunDropperProperties*) */

SunDropperProperties *
BoardHelpers::ApplyLevelOverride_SunDropperProperties(SunDropperProperties *param_1)

{
  LevelMutatorSunDropperModule *this;
  RtObject *this_00;
  SunDropperProperties *pSVar1;
  
  this = GetLevelModuleByClass<LevelMutatorSunDropperModule>();
  if (((this == (LevelMutatorSunDropperModule *)0x0) ||
      (this_00 = (RtObject *)LevelMutatorSunDropperModule::GetLevelModuleOverride(this),
      this_00 == (RtObject *)0x0)) ||
     (pSVar1 = Sexy::RtObject::Cast<SunDropperProperties>(this_00),
     pSVar1 == (SunDropperProperties *)0x0)) {
    pSVar1 = param_1;
  }
  return pSVar1;
}


/* LevelMutatorStartSunModule* BoardHelpers::GetLevelModuleByClass<LevelMutatorStartSunModule>() */

LevelMutatorStartSunModule * BoardHelpers::GetLevelModuleByClass<LevelMutatorStartSunModule>(void)

{
  LevelModuleManager *this;
  LevelMutatorStartSunModule *pLVar1;
  
  this = (LevelModuleManager *)FUN_036cdc44(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this != (LevelModuleManager *)0x0) {
    pLVar1 = LevelModuleManager::GetModuleByClass<LevelMutatorStartSunModule>(this);
    return pLVar1;
  }
  return (LevelMutatorStartSunModule *)0x0;
}


/* BoardHelpers::ApplyLevelModifier_StartingSun(int) */

int BoardHelpers::ApplyLevelModifier_StartingSun(int param_1)

{
  int iVar1;
  LevelMutatorStartSunModule *this;
  
  this = GetLevelModuleByClass<LevelMutatorStartSunModule>();
  if (this != (LevelMutatorStartSunModule *)0x0) {
    iVar1 = LevelMutatorRiftZombossPhasesModule::GetZombossPhasesOverride
                      ((LevelMutatorRiftZombossPhasesModule *)this);
    param_1 = param_1 + iVar1;
    if (param_1 < 0) {
      param_1 = 0;
    }
  }
  return param_1;
}


/* StarChallengeLevelTimer* BoardHelpers::GetLevelModuleByClass<StarChallengeLevelTimer>() */

StarChallengeLevelTimer * BoardHelpers::GetLevelModuleByClass<StarChallengeLevelTimer>(void)

{
  LevelModuleManager *this;
  StarChallengeLevelTimer *pSVar1;
  
  this = (LevelModuleManager *)FUN_036cdc44(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this != (LevelModuleManager *)0x0) {
    pSVar1 = LevelModuleManager::GetModuleByClass<StarChallengeLevelTimer>(this);
    return pSVar1;
  }
  return (StarChallengeLevelTimer *)0x0;
}


/* BoardHelpers::GetLevelProgressPct() */

undefined1  [16] BoardHelpers::GetLevelProgressPct(void)

{
  int iVar1;
  int iVar2;
  StarChallengeLevelTimer *pSVar3;
  WaveManager *this;
  undefined4 extraout_s0;
  float fVar4;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar5 [16];
  
  pSVar3 = GetLevelModuleByClass<StarChallengeLevelTimer>();
  if (pSVar3 != (StarChallengeLevelTimer *)0x0) {
    StarChallengeLevelTimer::CalcLevelProgress();
    auVar5._4_4_ = extraout_var;
    auVar5._0_4_ = extraout_s0;
    auVar5._8_8_ = extraout_var_00;
    return auVar5;
  }
  this = (WaveManager *)Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
  if ((this == (WaveManager *)0x0) || (iVar1 = WaveManager::GetWaveCount(this), iVar1 < 1)) {
    fVar4 = 1.0;
  }
  else {
    iVar2 = FUN_036cdc40(*(undefined4 *)(this + 0x28));
    fVar4 = (float)(iVar2 + 1) / (float)iVar1;
  }
  return ZEXT416((uint)fVar4);
}


/* LevelMutatorRiftZombossPhasesModule*
   BoardHelpers::GetLevelModuleByClass<LevelMutatorRiftZombossPhasesModule>() */

LevelMutatorRiftZombossPhasesModule *
BoardHelpers::GetLevelModuleByClass<LevelMutatorRiftZombossPhasesModule>(void)

{
  LevelModuleManager *this;
  LevelMutatorRiftZombossPhasesModule *pLVar1;
  
  this = (LevelModuleManager *)FUN_036cdc44(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this != (LevelModuleManager *)0x0) {
    pLVar1 = LevelModuleManager::GetModuleByClass<LevelMutatorRiftZombossPhasesModule>(this);
    return pLVar1;
  }
  return (LevelMutatorRiftZombossPhasesModule *)0x0;
}


/* BoardHelpers::ApplyLevelOverride_ZombossRiftStages(int) */

ulong BoardHelpers::ApplyLevelOverride_ZombossRiftStages(int param_1)

{
  LevelMutatorRiftZombossPhasesModule *this;
  ulong uVar1;
  
  this = GetLevelModuleByClass<LevelMutatorRiftZombossPhasesModule>();
  if (this != (LevelMutatorRiftZombossPhasesModule *)0x0) {
    uVar1 = LevelMutatorRiftZombossPhasesModule::GetZombossPhasesOverride(this);
    return uVar1;
  }
  return (ulong)(uint)param_1;
}


/* bool BoardHelpers::HasGameModuleInLevelDefinition<LastStandMinigameProperties>() */

bool BoardHelpers::HasGameModuleInLevelDefinition<LastStandMinigameProperties>(void)

{
  bool bVar1;
  long lVar2;
  LevelDefinition *this;
  
  if ((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
     (lVar2 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)), lVar2 != 0)) {
    this = (LevelDefinition *)Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
    bVar1 = LevelDefinition::HasLevelModule<LastStandMinigameProperties>(this);
    return bVar1;
  }
  return false;
}


/* BoardHelpers::IsLastStandLevel() */

bool BoardHelpers::IsLastStandLevel(void)

{
  bool bVar1;
  long lVar2;
  LevelDefinition *this;
  
  if ((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
     (lVar2 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)), lVar2 != 0)) {
    this = (LevelDefinition *)Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
    bVar1 = LevelDefinition::HasLevelModule<LastStandMinigameProperties>(this);
    return bVar1;
  }
  return false;
}


/* LevelBasedModifier_ImmunityModule*
   BoardHelpers::GetLevelModuleByClass<LevelBasedModifier_ImmunityModule>() */

LevelBasedModifier_ImmunityModule *
BoardHelpers::GetLevelModuleByClass<LevelBasedModifier_ImmunityModule>(void)

{
  LevelModuleManager *this;
  LevelBasedModifier_ImmunityModule *pLVar1;
  
  this = (LevelModuleManager *)FUN_036cdc44(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this != (LevelModuleManager *)0x0) {
    pLVar1 = LevelModuleManager::GetModuleByClass<LevelBasedModifier_ImmunityModule>(this);
    return pLVar1;
  }
  return (LevelBasedModifier_ImmunityModule *)0x0;
}


/* BoardHelpers::ApplyLevelBasedModifierZombieConditions(std::vector<ZombieConditions,
   std::allocator<ZombieConditions> >&) */

void BoardHelpers::ApplyLevelBasedModifierZombieConditions(vector *param_1)

{
  LevelBasedModifier_ImmunityModule *this;
  
  this = GetLevelModuleByClass<LevelBasedModifier_ImmunityModule>();
  if (this != (LevelBasedModifier_ImmunityModule *)0x0) {
    LevelBasedModifier_ImmunityModule::GetZombieConditionsImmunities(this,param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkTrafficJam* BoardHelpers::GetPerkByClass<PennyPerkTrafficJam>() */

PennyPerkTrafficJam * BoardHelpers::GetPerkByClass<PennyPerkTrafficJam>(void)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  RtObject *this;
  int extraout_w1;
  PennyPerkTrafficJam *pPVar5;
  code *pcVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x74);
  do {
    bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar2) {
      pPVar5 = (PennyPerkTrafficJam *)0x0;
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
LAB_036cf3bc:
      if (local_8 == ___stack_chk_guard) {
        return pPVar5;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    pcVar6 = *(code **)(*plVar4 + 0x20);
    uVar3 = PennyPerkTrafficJam::StaticGetClass();
    cVar1 = (*pcVar6)(plVar4,uVar3);
    if (cVar1 != '\0') {
      this = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      pPVar5 = Sexy::RtObject::Cast<PennyPerkTrafficJam>(this);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      goto LAB_036cf3bc;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* BoardHelpers::ApplyLevelOverride_ZombieCountdownFirstWaveSecs(int) */

int BoardHelpers::ApplyLevelOverride_ZombieCountdownFirstWaveSecs(int param_1)

{
  int iVar1;
  LevelMutatorZombieCountdownFirstWaveSecsModule *this;
  PennyPerkTrafficJam *this_00;
  
  this = GetLevelModuleByClass<LevelMutatorZombieCountdownFirstWaveSecsModule>();
  if ((this != (LevelMutatorZombieCountdownFirstWaveSecsModule *)0x0) &&
     (iVar1 = LevelMutatorRiftZombossPhasesModule::GetZombossPhasesOverride
                        ((LevelMutatorRiftZombossPhasesModule *)this), 0 < iVar1)) {
    param_1 = LevelMutatorRiftZombossPhasesModule::GetZombossPhasesOverride
                        ((LevelMutatorRiftZombossPhasesModule *)this);
  }
  this_00 = GetPerkByClass<PennyPerkTrafficJam>();
  if (this_00 != (PennyPerkTrafficJam *)0x0) {
    iVar1 = PennyPerkTrafficJam::GetDelaySeconds(this_00);
    param_1 = param_1 + iVar1;
  }
  return param_1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkZombieInhibitor* BoardHelpers::GetPerkByClass<PennyPerkZombieInhibitor>() */

PennyPerkZombieInhibitor * BoardHelpers::GetPerkByClass<PennyPerkZombieInhibitor>(void)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  RtObject *this;
  int extraout_w1;
  PennyPerkZombieInhibitor *pPVar5;
  code *pcVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x74);
  do {
    bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar2) {
      pPVar5 = (PennyPerkZombieInhibitor *)0x0;
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
LAB_036cf520:
      if (local_8 == ___stack_chk_guard) {
        return pPVar5;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    pcVar6 = *(code **)(*plVar4 + 0x20);
    uVar3 = PennyPerkZombieInhibitor::StaticGetClass();
    cVar1 = (*pcVar6)(plVar4,uVar3);
    if (cVar1 != '\0') {
      this = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      pPVar5 = Sexy::RtObject::Cast<PennyPerkZombieInhibitor>(this);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      goto LAB_036cf520;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardHelpers::ApplyLevelOverride_ZombieSpawnType(Sexy::RtWeakPtr<ZombieType const>) */

void __thiscall
BoardHelpers::ApplyLevelOverride_ZombieSpawnType
          (RtWeakPtr<Sexy::SoundResource> *param_1,BoardHelpers *this)

{
  PennyPerkZombieInhibitor *pPVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = GetPerkByClass<PennyPerkZombieInhibitor>();
  if (pPVar1 == (PennyPerkZombieInhibitor *)0x0) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(param_1,(RtWeakPtrBase *)this);
  }
  else {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)this);
    PennyPerkZombieInhibitor::TryOverrideZombieType(param_1,pPVar1,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardHelpers::GetCumulativeZombieHealthInWave(int) */

void BoardHelpers::GetCumulativeZombieHealthInWave(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  int extraout_w1;
  int extraout_w1_00;
  float fVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  fVar7 = 0.0;
  local_8 = ___stack_chk_guard;
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar4,0x29);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail((int)fVar7);
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
    cVar2 = (**(code **)(*plVar5 + 0x328))();
    if (cVar2 == '\0') {
      uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      cVar2 = RealObject::IsOnTeam(uVar4,1);
      if (cVar2 != '\0') goto LAB_036cf664;
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      iVar3 = FUN_036cdc48(*(undefined4 *)(lVar6 + 0x2b0));
      if (iVar3 != param_1) goto LAB_036cf664;
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      iVar3 = (**(code **)(*plVar5 + 0x210))();
      fVar7 = fVar7 + (float)iVar3;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      iVar3 = extraout_w1_00;
    }
    else {
LAB_036cf664:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      iVar3 = extraout_w1;
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar3);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardHelpers::ApplyMiniGamePerkBuffValue(float, int, int, PlantType const*) */

void BoardHelpers::ApplyMiniGamePerkBuffValue
               (float param_1,int param_2,int param_3,PlantType *param_4)

{
  bool bVar1;
  undefined8 uVar2;
  PVZDB *pPVar3;
  RtDbTable *this;
  MiniGamePerk *this_00;
  int extraout_w1;
  int extraout_w1_00;
  int iVar4;
  float fVar5;
  float fVar6;
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  fVar6 = 0.0;
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar2,0xae);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    pPVar3 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    this = (RtDbTable *)PVZDB::GetTable(pPVar3,0xae);
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtDbTable::GetObjectForId(this,aRStack_30);
    nop();
    Sexy::RtId::~RtId(aRStack_30);
    iVar4 = extraout_w1;
    if (this_00 != (MiniGamePerk *)0x0) {
      fVar5 = (float)MiniGamePerk::GetBuffValue(this_00,param_2,param_3,param_4);
      fVar6 = fVar6 + fVar5;
      iVar4 = extraout_w1_00;
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar4);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  if (fVar6 <= 0.0) {
    fVar6 = param_1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardHelpers::HasExtraChallenges() */

void BoardHelpers::HasExtraChallenges(void)

{
  long lVar1;
  undefined8 local_90;
  undefined8 local_88;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ProfileUtils::ChallengeStatusHolder::ChallengeStatusHolder((ChallengeStatusHolder *)&local_90);
  MessageRouter::
  Broadcast<ProfileUtils::ChallengeStatusHolder*,ProfileUtils::ChallengeStatusHolder*>
            ((MessageRouter *)gMessageRouter,Message::GatherExtraChallenges,
             (ChallengeStatusHolder *)&local_90);
  lVar1 = FUN_036cdc58(local_90,local_88);
  ProfileUtils::ChallengeStatusHolder::~ChallengeStatusHolder((ChallengeStatusHolder *)&local_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1 != 0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardHelpers::IsOptionalChallenge(Challenge*) */

void BoardHelpers::IsOptionalChallenge(Challenge *param_1)

{
  bool bVar1;
  BonusChallengeModule *pBVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  Challenge *local_38;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_38 = param_1;
  pBVar2 = GetLevelModuleByClass<BonusChallengeModule>();
  bVar1 = false;
  if (pBVar2 != (BonusChallengeModule *)0x0) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    (**(code **)(*(long *)pBVar2 + 0xb0))(pBVar2,avStack_20);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)avStack_20);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
    local_30 = std::
               find<__gnu_cxx::__normal_iterator<Challenge**,std::vector<Challenge*,std::allocator<Challenge*>>>,Challenge*>
                         (uVar3,uVar4,&local_38);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    std::vector<Challenge*,std::allocator<Challenge*>>::~vector
              ((vector<Challenge*,std::allocator<Challenge*>> *)avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardHelpers::ApplyLevelBasedModifierValue(float, int, int, int) */

void BoardHelpers::ApplyLevelBasedModifierValue(float param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  RtClass *pRVar4;
  LevelModuleManager *this;
  vector *pvVar5;
  long lVar6;
  RtWeakPtr *this_00;
  ResourceInfo *this_01;
  LevelBasedModifierModule *pLVar7;
  ulong uVar8;
  RtObject *this_02;
  ulong uVar9;
  undefined8 uVar10;
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelBasedModifierModule::GetModuleClassName((LevelBasedModifierModule *)&local_20,param_2);
  std::operator+((string *)&local_20,"Module");
  std::string::~string((string *)&local_20);
  pcVar3 = (char *)FUN_0547429c(asStack_28);
  pRVar4 = (RtClass *)Sexy::RtClass::StaticGetClassNamed(pcVar3);
  if (((pRVar4 != (RtClass *)0x0) && (*(long *)(gLawnApp + 0x9f0) != 0)) &&
     (this = (LevelModuleManager *)
             FUN_036cdc44(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8)),
     this != (LevelModuleManager *)0x0)) {
    if (param_3 < 1) {
      if (((param_3 != 0) &&
          (this_02 = (RtObject *)LevelModuleManager::GetModuleByClass(this,pRVar4),
          this_02 != (RtObject *)0x0)) &&
         (pLVar7 = Sexy::RtObject::Cast<LevelBasedModifierModule>(this_02),
         pLVar7 != (LevelBasedModifierModule *)0x0)) {
        param_1 = (float)(**(code **)(*(long *)pLVar7 + 0xa0))(pLVar7,param_4);
      }
    }
    else {
      pvVar5 = (vector *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_end((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)this);
      uVar9 = 0;
      std::vector<Sexy::RtWeakPtr<LevelModule>,std::allocator<Sexy::RtWeakPtr<LevelModule>>>::vector
                ((vector<Sexy::RtWeakPtr<LevelModule>,std::allocator<Sexy::RtWeakPtr<LevelModule>>>
                  *)&local_20,pvVar5);
      uVar10 = local_20;
      lVar6 = FUN_036cdc6c(local_20,local_18);
      if (lVar6 != 0) {
        do {
          this_00 = (RtWeakPtr *)FUN_036cdc78(uVar10,uVar9);
          this_01 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
          if (((this_01 != (ResourceInfo *)0x0) &&
              (cVar1 = (**(code **)(*(long *)this_01 + 0x20))(this_01,pRVar4), cVar1 != '\0')) &&
             ((pLVar7 = Sexy::RtObject::Cast<LevelBasedModifierModule>((RtObject *)this_01),
              pLVar7 != (LevelBasedModifierModule *)0x0 &&
              (iVar2 = LevelMutatorRiftZombossPhasesModule::GetZombossPhasesOverride
                                 ((LevelMutatorRiftZombossPhasesModule *)pLVar7), iVar2 == param_3))
             )) {
            param_1 = (float)(**(code **)(*(long *)pLVar7 + 0xa0))(pLVar7,param_4);
            break;
          }
          uVar10 = local_20;
          uVar9 = uVar9 + 1;
          uVar8 = FUN_036cdc6c(local_20,local_18);
        } while (uVar9 < uVar8);
      }
      std::vector<Sexy::RtWeakPtr<LevelModule>,std::allocator<Sexy::RtWeakPtr<LevelModule>>>::
      ~vector((vector<Sexy::RtWeakPtr<LevelModule>,std::allocator<Sexy::RtWeakPtr<LevelModule>>> *)
              &local_20);
    }
  }
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* BoardHelpers::GetLevelBasedZombieTypeIndexByType(Sexy::RtWeakPtr<ZombieType const>) */

undefined4 BoardHelpers::GetLevelBasedZombieTypeIndexByType(RtWeakPtr<Sexy::ResourceInfo> *param_1)

{
  long lVar1;
  undefined4 *puVar2;
  
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
  puVar2 = (undefined4 *)
           std::
           map<std::string,LevelBasedModifierSubTypeZombieType,std::less<std::string>,std::allocator<std::pair<std::string_const,LevelBasedModifierSubTypeZombieType>>>
           ::operator[]((map<std::string,LevelBasedModifierSubTypeZombieType,std::less<std::string>,std::allocator<std::pair<std::string_const,LevelBasedModifierSubTypeZombieType>>>
                         *)&DAT_06aad4f0,(string *)(lVar1 + 8));
  return *puVar2;
}


/* SecurityGourdModule* BoardHelpers::GetLevelModuleByClass<SecurityGourdModule>() */

SecurityGourdModule * BoardHelpers::GetLevelModuleByClass<SecurityGourdModule>(void)

{
  LevelModuleManager *this;
  SecurityGourdModule *pSVar1;
  
  this = (LevelModuleManager *)FUN_036e5974(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this != (LevelModuleManager *)0x0) {
    pSVar1 = LevelModuleManager::GetModuleByClass<SecurityGourdModule>(this);
    return pSVar1;
  }
  return (SecurityGourdModule *)0x0;
}


/* RiftTimedEventModule* BoardHelpers::GetLevelModuleByClass<RiftTimedEventModule>() */

RiftTimedEventModule * BoardHelpers::GetLevelModuleByClass<RiftTimedEventModule>(void)

{
  LevelModuleManager *this;
  RiftTimedEventModule *pRVar1;
  
  this = (LevelModuleManager *)FUN_037195a0(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this != (LevelModuleManager *)0x0) {
    pRVar1 = LevelModuleManager::GetModuleByClass<RiftTimedEventModule>(this);
    return pRVar1;
  }
  return (RiftTimedEventModule *)0x0;
}


/* PVZ1CopycatsModule* BoardHelpers::GetLevelModuleByClass<PVZ1CopycatsModule>() */

PVZ1CopycatsModule * BoardHelpers::GetLevelModuleByClass<PVZ1CopycatsModule>(void)

{
  LevelModuleManager *this;
  PVZ1CopycatsModule *pPVar1;
  
  this = (LevelModuleManager *)FUN_038b3940(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this != (LevelModuleManager *)0x0) {
    pPVar1 = LevelModuleManager::GetModuleByClass<PVZ1CopycatsModule>(this);
    return pPVar1;
  }
  return (PVZ1CopycatsModule *)0x0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkQuickDelivery* BoardHelpers::GetPerkByClass<PennyPerkQuickDelivery>() */

PennyPerkQuickDelivery * BoardHelpers::GetPerkByClass<PennyPerkQuickDelivery>(void)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  RtObject *this;
  int extraout_w1;
  PennyPerkQuickDelivery *pPVar5;
  code *pcVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x74);
  do {
    bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar2) {
      pPVar5 = (PennyPerkQuickDelivery *)0x0;
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
LAB_03c77df4:
      if (local_8 == ___stack_chk_guard) {
        return pPVar5;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    pcVar6 = *(code **)(*plVar4 + 0x20);
    uVar3 = PennyPerkQuickDelivery::StaticGetClass();
    cVar1 = (*pcVar6)(plVar4,uVar3);
    if (cVar1 != '\0') {
      this = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      pPVar5 = Sexy::RtObject::Cast<PennyPerkQuickDelivery>(this);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      goto LAB_03c77df4;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* bool BoardHelpers::HasGameModuleInLevelDefinition<ZombossBattleModuleProperties>() */

bool BoardHelpers::HasGameModuleInLevelDefinition<ZombossBattleModuleProperties>(void)

{
  bool bVar1;
  long lVar2;
  LevelDefinition *this;
  
  if ((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
     (lVar2 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)), lVar2 != 0)) {
    this = (LevelDefinition *)Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
    bVar1 = LevelDefinition::HasLevelModule<ZombossBattleModuleProperties>(this);
    return bVar1;
  }
  return false;
}


/* ZombossBattleModuleProperties*
   BoardHelpers::GetGameModuleInLevelDefinition<ZombossBattleModuleProperties>() */

ZombossBattleModuleProperties *
BoardHelpers::GetGameModuleInLevelDefinition<ZombossBattleModuleProperties>(void)

{
  long lVar1;
  LevelDefinition *this;
  ZombossBattleModuleProperties *pZVar2;
  
  if ((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
     (lVar1 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)), lVar1 != 0)) {
    this = (LevelDefinition *)Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
    pZVar2 = LevelDefinition::GetLevelModule<ZombossBattleModuleProperties>(this);
    return pZVar2;
  }
  return (ZombossBattleModuleProperties *)0x0;
}


/* ZombossBattleModule* BoardHelpers::GetLevelModuleByClass<ZombossBattleModule>() */

ZombossBattleModule * BoardHelpers::GetLevelModuleByClass<ZombossBattleModule>(void)

{
  LevelModuleManager *this;
  ZombossBattleModule *pZVar1;
  
  this = (LevelModuleManager *)FUN_03e5f96c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this != (LevelModuleManager *)0x0) {
    pZVar1 = LevelModuleManager::GetModuleByClass<ZombossBattleModule>(this);
    return pZVar1;
  }
  return (ZombossBattleModule *)0x0;
}


/* BaseChallengeModule* BoardHelpers::GetLevelModuleByClass<BaseChallengeModule>() */

BaseChallengeModule * BoardHelpers::GetLevelModuleByClass<BaseChallengeModule>(void)

{
  LevelModuleManager *this;
  BaseChallengeModule *pBVar1;
  
  this = (LevelModuleManager *)FUN_03f04370(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this != (LevelModuleManager *)0x0) {
    pBVar1 = LevelModuleManager::GetModuleByClass<BaseChallengeModule>(this);
    return pBVar1;
  }
  return (BaseChallengeModule *)0x0;
}


/* LastStandMinigameModule* BoardHelpers::GetLevelModuleByClass<LastStandMinigameModule>() */

LastStandMinigameModule * BoardHelpers::GetLevelModuleByClass<LastStandMinigameModule>(void)

{
  LevelModuleManager *this;
  LastStandMinigameModule *pLVar1;
  
  this = (LevelModuleManager *)FUN_03f0be9c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this != (LevelModuleManager *)0x0) {
    pLVar1 = LevelModuleManager::GetModuleByClass<LastStandMinigameModule>(this);
    return pLVar1;
  }
  return (LastStandMinigameModule *)0x0;
}


/* ZombossLastStandMinigameModule*
   BoardHelpers::GetLevelModuleByClass<ZombossLastStandMinigameModule>() */

ZombossLastStandMinigameModule *
BoardHelpers::GetLevelModuleByClass<ZombossLastStandMinigameModule>(void)

{
  LevelModuleManager *this;
  ZombossLastStandMinigameModule *pZVar1;
  
  this = (LevelModuleManager *)FUN_03f0be9c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this != (LevelModuleManager *)0x0) {
    pZVar1 = LevelModuleManager::GetModuleByClass<ZombossLastStandMinigameModule>(this);
    return pZVar1;
  }
  return (ZombossLastStandMinigameModule *)0x0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkJuggled* BoardHelpers::GetPerkByClassInRift<PennyPerkJuggled>() */

PennyPerkJuggled * BoardHelpers::GetPerkByClassInRift<PennyPerkJuggled>(void)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  RtObject *this;
  int extraout_w1;
  PennyPerkJuggled *pPVar5;
  code *pcVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = RiftUtils::IsPlayingRiftLevel();
  if (cVar1 == '\0') {
    pPVar5 = (PennyPerkJuggled *)0x0;
  }
  else {
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x74);
    while (bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar2) {
      Sexy::RtDbTable::Iterator::operator*(aIStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
      Sexy::RtId::~RtId(aRStack_30);
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      pcVar6 = *(code **)(*plVar4 + 0x20);
      uVar3 = PennyPerkJuggled::StaticGetClass();
      cVar1 = (*pcVar6)(plVar4,uVar3);
      if (cVar1 != '\0') {
        this = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38)
        ;
        pPVar5 = Sexy::RtObject::Cast<PennyPerkJuggled>(this);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38)
        ;
        Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
        goto LAB_03f2d274;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
    }
    pPVar5 = (PennyPerkJuggled *)0x0;
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  }
LAB_03f2d274:
  if (local_8 == ___stack_chk_guard) {
    return pPVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* bool BoardHelpers::HasGameModuleInLevelDefinition<PVZ1ModeIntroProperties>() */

bool BoardHelpers::HasGameModuleInLevelDefinition<PVZ1ModeIntroProperties>(void)

{
  bool bVar1;
  long lVar2;
  LevelDefinition *this;
  
  if ((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
     (lVar2 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)), lVar2 != 0)) {
    this = (LevelDefinition *)Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
    bVar1 = LevelDefinition::HasLevelModule<PVZ1ModeIntroProperties>(this);
    return bVar1;
  }
  return false;
}


/* bool BoardHelpers::HasGameModuleInLevelDefinition<PennyClassroomModuleProperties>() */

bool BoardHelpers::HasGameModuleInLevelDefinition<PennyClassroomModuleProperties>(void)

{
  bool bVar1;
  long lVar2;
  LevelDefinition *this;
  
  if ((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
     (lVar2 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)), lVar2 != 0)) {
    this = (LevelDefinition *)Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
    bVar1 = LevelDefinition::HasLevelModule<PennyClassroomModuleProperties>(this);
    return bVar1;
  }
  return false;
}

