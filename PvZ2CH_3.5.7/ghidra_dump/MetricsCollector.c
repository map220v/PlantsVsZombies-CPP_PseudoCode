// Class: MetricsCollector


/* MetricsCollector::onFestivalEntrance(int, int, std::string const&) */

int MetricsCollector::onFestivalEntrance(int param_1,int param_2,string *param_3)

{
  return param_1;
}


/* MetricsCollector::onSunSpent(int) */

void __thiscall MetricsCollector::onSunSpent(MetricsCollector *this,int param_1)

{
  *(int *)(this + 0x44) = *(int *)(this + 0x44) + param_1;
  return;
}


/* MetricsCollector::onSunProducedByShovel(int) */

void __thiscall MetricsCollector::onSunProducedByShovel(MetricsCollector *this,int param_1)

{
  *(int *)(this + 0x44) = *(int *)(this + 0x44) + param_1;
  *(int *)(this + 0xbc) = *(int *)(this + 0xbc) + 1;
  return;
}


/* MetricsCollector::onPlantfoodGrabbed(CollectablePlantfood*) */

void MetricsCollector::onPlantfoodGrabbed(CollectablePlantfood *param_1)

{
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
  return;
}


/* MetricsCollector::onPlantfoodGrabbedWhenFull(CollectablePlantfood*) */

void MetricsCollector::onPlantfoodGrabbedWhenFull(CollectablePlantfood *param_1)

{
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  return;
}


/* MetricsCollector::onPlantDied(Plant*) */

void MetricsCollector::onPlantDied(Plant *param_1)

{
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
  return;
}


/* MetricsCollector::onPlantDamageTaken(Plant*, DamageInfo&) */

void __thiscall
MetricsCollector::onPlantDamageTaken(MetricsCollector *this,Plant *param_1,DamageInfo *param_2)

{
  *(int *)(this + 0x70) = (int)((float)*(int *)(this + 0x70) + *(float *)(param_2 + 8));
  return;
}


/* MetricsCollector::onYetiSpawned() */

void __thiscall MetricsCollector::onYetiSpawned(MetricsCollector *this)

{
  *(int *)(this + 0xb4) = *(int *)(this + 0xb4) + 1;
  return;
}


/* MetricsCollector::onYetiDefeated() */

void __thiscall MetricsCollector::onYetiDefeated(MetricsCollector *this)

{
  *(int *)(this + 0xb8) = *(int *)(this + 0xb8) + 1;
  return;
}


/* MetricsCollector::onGateUnLock(MapEventItem const*, std::string const&, int) */

void MetricsCollector::onGateUnLock(MapEventItem *param_1,string *param_2,int param_3)

{
  return;
}


/* MetricsCollector::onLineUnlock(MapEventItem const*, std::string&, int) */

void MetricsCollector::onLineUnlock(MapEventItem *param_1,string *param_2,int param_3)

{
  return;
}


/* MetricsCollector::onSNSFlow() */

void MetricsCollector::onSNSFlow(void)

{
  return;
}


/* MetricsCollector::onPlayerStarFlow(int) */

int MetricsCollector::onPlayerStarFlow(int param_1)

{
  return param_1;
}


/* MetricsCollector::onGetGachaUseGems(int, int) */

void __thiscall MetricsCollector::onGetGachaUseGems(MetricsCollector *this,int param_1,int param_2)

{
  *(int *)(this + 0x170) = param_2;
  *(int *)(this + 0x174) = param_1;
  return;
}


/* MetricsCollector::onSunSpawned(CollectableSun*) */

void MetricsCollector::onSunSpawned(CollectableSun *param_1)

{
  int iVar1;
  
  iVar1 = CollectableCure::GetCureValue();
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + iVar1;
  return;
}


/* MetricsCollector::onSunClicked(CollectableSun*, int) */

void MetricsCollector::onSunClicked(CollectableSun *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = CollectableCure::GetCureValue();
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + iVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::OnPinataParty(std::string const&) */

void __thiscall MetricsCollector::OnPinataParty(MetricsCollector *this,string *param_1)

{
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_20,"Pinataparty");
  std::string::string(asStack_18,"");
  std::string::string(asStack_10,"");
  BehaviorLog::missionEvent(asStack_20,param_1,asStack_18,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  std::string::~string(asStack_20);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onGameLoadStart() */

void MetricsCollector::onGameLoadStart(void)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Gameload");
  BehaviorLog::funnelStart(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onAndroidSDKInit(int, int) */

void __thiscall MetricsCollector::onAndroidSDKInit(MetricsCollector *this,int param_1,int param_2)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0) {
    std::string::string(asStack_10,"SDK_Init");
    BehaviorLog::funnelStart(asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  else {
    std::string::string(asStack_10,"SDK_Init");
    BehaviorLog::funnelEnd(asStack_10,param_2 == 0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onAndroidSDKLogin(int, int) */

void __thiscall MetricsCollector::onAndroidSDKLogin(MetricsCollector *this,int param_1,int param_2)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0) {
    std::string::string(asStack_10,"SDK_Login");
    BehaviorLog::funnelStart(asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  else {
    std::string::string(asStack_10,"SDK_Login");
    BehaviorLog::funnelEnd(asStack_10,param_2 == 0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onRealGameStart() */

void MetricsCollector::onRealGameStart(void)

{
  long *plVar1;
  string asStack_30 [8];
  Log_GameStart aLStack_28 [16];
  DValue aDStack_18 [16];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Log_GameStart::Log_GameStart(aLStack_28);
  ::DValue::DValue(aDStack_18);
  plVar1 = (long *)Log_GameStart::getBasicInfo(aLStack_28,aDStack_18);
  (**(code **)(*plVar1 + 8))(plVar1,aDStack_18);
  Log_GameStart::getTableName(aLStack_28);
  BehaviorLog::sendLog(asStack_30,aDStack_18);
  std::string::~string(asStack_30);
  ::DValue::~DValue(aDStack_18);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onGameLoadEnd(std::string const&) */

void MetricsCollector::onGameLoadEnd(string *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Gameload");
  BehaviorLog::funnelEnd(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onNewAccountRegister() */

void MetricsCollector::onNewAccountRegister(void)

{
  long *plVar1;
  string asStack_30 [8];
  Log_Register aLStack_28 [16];
  DValue aDStack_18 [16];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Log_Register::Log_Register(aLStack_28);
  PublicBasicInfo::setNeedUserID((PublicBasicInfo *)aLStack_28,true);
  ::DValue::DValue(aDStack_18);
  plVar1 = (long *)Log_Register::getBasicInfo(aLStack_28,aDStack_18);
  (**(code **)(*plVar1 + 8))(plVar1,aDStack_18);
  Log_Register::getTableName(aLStack_28);
  BehaviorLog::sendLog(asStack_30,aDStack_18);
  std::string::~string(asStack_30);
  ::DValue::~DValue(aDStack_18);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MetricsCollector::onSessionStart() */

void __thiscall MetricsCollector::onSessionStart(MetricsCollector *this)

{
  PlayerInfo *this_00;
  
  if ((this[0xc9] != (MetricsCollector)0x0) && (this[0xca] != (MetricsCollector)0x0)) {
    this[0xca] = (MetricsCollector)0x0;
    this_00 = (PlayerInfo *)ProfileUtils::Profile();
    PlayerInfo::IncrementSessionCount(this_00);
    return;
  }
  return;
}


/* MetricsCollector::onWorldmapLoaded() */

void __thiscall MetricsCollector::onWorldmapLoaded(MetricsCollector *this)

{
  PlayerInfo *this_00;
  
  if ((this[0xc9] != (MetricsCollector)0x0) && (this[0xca] != (MetricsCollector)0x0)) {
    this[0xca] = (MetricsCollector)0x0;
    this_00 = (PlayerInfo *)ProfileUtils::Profile();
    PlayerInfo::IncrementSessionCount(this_00);
    return;
  }
  return;
}


/* MetricsCollector::onPlantfoodSpawned(CollectablePlantfood*) */

void MetricsCollector::onPlantfoodSpawned(CollectablePlantfood *param_1)

{
  char cVar1;
  char cVar2;
  Board *this;
  
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  this = *(Board **)(gLawnApp + 0x9f0);
  cVar1 = Board::GetPlantfoodMax(this);
  cVar2 = Board::GetPlantfoodCount(this);
  if (cVar1 == cVar2) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  }
  return;
}


/* MetricsCollector::SetGameplayMetrics(GameplayMetrics const&) */

void __thiscall
MetricsCollector::SetGameplayMetrics(MetricsCollector *this,GameplayMetrics *param_1)

{
  memcpy(this + 0x38,param_1,0x88);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::setGameID(std::string const&) */

void __thiscall MetricsCollector::setGameID(MetricsCollector *this,string *param_1)

{
  undefined8 uVar1;
  string asStack_170 [8];
  undefined1 auStack_168 [352];
  Sexy *local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = Sexy::SexyTime(___stack_chk_guard);
  *(undefined8 *)(this + 0x18) = uVar1;
  FUN_05462144(auStack_168,0x10);
  uVar1 = FUN_0545ec84(auStack_168,param_1);
  uVar1 = FUN_054603b8(uVar1,&DAT_055a8370);
  thunk_FUN_0546069c(uVar1,*(undefined8 *)(this + 0x18));
  FUN_054622ac(asStack_170,auStack_168);
  FUN_05474278(this + 0x20,asStack_170);
  std::string::~string(asStack_170);
  FUN_054614ac(auStack_168);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MetricsCollector::Term() */

void __thiscall MetricsCollector::Term(MetricsCollector *this)

{
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  nop();
  Sexy::MetricsManager::DeleteSharedMetricsManager();
  return;
}


/* MetricsCollector::resetGameData() */

void __thiscall MetricsCollector::resetGameData(MetricsCollector *this)

{
  *(undefined8 *)(this + 0x18) = 0;
  std::string::append((string *)(this + 0x20),"",(size_t)this);
  return;
}


/* MetricsCollector::onWaveStarted(int, WaveType::WaveType, bool) */

void MetricsCollector::onWaveStarted(long param_1)

{
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}


/* MetricsCollector::onMowerTriggered(LawnMower*) */

void MetricsCollector::onMowerTriggered(LawnMower *param_1)

{
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::resetSession() */

void __thiscall MetricsCollector::resetSession(MetricsCollector *this)

{
  undefined8 uVar1;
  string asStack_170 [8];
  undefined1 auStack_168 [352];
  Sexy *local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = Sexy::SexyTime(___stack_chk_guard);
  *(undefined8 *)(this + 0xd0) = uVar1;
  FUN_05462144(auStack_168,0x10);
  thunk_FUN_0546069c(auStack_168,*(undefined8 *)(this + 0xd0));
  FUN_054622ac(asStack_170,auStack_168);
  FUN_05474278(this + 0x28,asStack_170);
  std::string::~string(asStack_170);
  *(undefined4 *)(this + 0xcc) = 0;
  this[0xca] = (MetricsCollector)0x1;
  FUN_054614ac(auStack_168);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MetricsCollector::ResetPvpBattleLogNumber() */

void __thiscall MetricsCollector::ResetPvpBattleLogNumber(MetricsCollector *this)

{
  *(undefined4 *)(this + 0x128) = 0;
  return;
}


/* MetricsCollector::onPowerupEquipped(std::string const&) */

void __thiscall MetricsCollector::onPowerupEquipped(MetricsCollector *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"powerupwizardfinger");
  if (bVar1) {
    *(undefined4 *)(this + 0x84) = 0;
  }
  else {
    bVar1 = std::operator==(param_1,"powerupflickzombie");
    if (bVar1) {
      *(undefined4 *)(this + 0x80) = 0;
      return;
    }
    bVar1 = std::operator==(param_1,"poweruppinchzombie");
    if (bVar1) {
      *(undefined4 *)(this + 0x7c) = 0;
    }
    else {
      bVar1 = std::operator==(param_1,"poweruptacticalcuke");
      if (bVar1) {
        *(undefined4 *)(this + 0x88) = 0;
      }
      else {
        bVar1 = std::operator==(param_1,"powerupvasebreakerreveal");
        if (bVar1) {
          *(undefined4 *)(this + 0x9c) = 0;
        }
        else {
          bVar1 = std::operator==(param_1,"powerupvasebreakerbutter");
          if (bVar1) {
            *(undefined4 *)(this + 0xa0) = 0;
          }
          else {
            bVar1 = std::operator==(param_1,"powerupvasebreakermove");
            if (bVar1) {
              *(undefined4 *)(this + 0xa4) = 0;
            }
          }
        }
      }
    }
  }
  return;
}


/* MetricsCollector::onCoinSpawned(CollectableCoin*) */

void __thiscall MetricsCollector::onCoinSpawned(MetricsCollector *this,CollectableCoin *param_1)

{
  bool bVar1;
  int iVar2;
  
  if ((param_1 != (CollectableCoin *)0x0) &&
     (bVar1 = Sexy::RtObject::IsA<CollectableCoin>((RtObject *)param_1), bVar1)) {
    nop();
    iVar2 = CollectableCure::GetCureValue();
    *(int *)(this + 0x74) = *(int *)(this + 0x74) + iVar2;
  }
  return;
}


/* MetricsCollector::onCoinClicked(Collectable*) */

void __thiscall MetricsCollector::onCoinClicked(MetricsCollector *this,Collectable *param_1)

{
  bool bVar1;
  int iVar2;
  
  if ((param_1 != (Collectable *)0x0) &&
     (bVar1 = Sexy::RtObject::IsA<CollectableCoin>((RtObject *)param_1), bVar1)) {
    nop();
    iVar2 = CollectableCure::GetCureValue();
    *(int *)(this + 0x78) = *(int *)(this + 0x78) + iVar2;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onKeyClicked(Collectable*) */

void __thiscall MetricsCollector::onKeyClicked(MetricsCollector *this,Collectable *param_1)

{
  bool bVar1;
  RtObject *this_00;
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Collectable *)0x0) {
    TwinsAssistPerson::GetPopAnimRig();
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
    if (bVar1) {
      TwinsAssistPerson::GetPopAnimRig();
      this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      bVar1 = Sexy::RtObject::IsA<CollectableKeyType>(this_00);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      if (bVar1) {
        *(int *)(this + 0xb0) = *(int *)(this + 0xb0) + 1;
      }
    }
    else {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onGameBegin() */

void __thiscall MetricsCollector::onGameBegin(MetricsCollector *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  Util *this_00;
  time_t tVar3;
  LogServer *this_01;
  string asStack_1a0 [8];
  string asStack_198 [8];
  string asStack_190 [8];
  string asStack_188 [8];
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = LogServer::Instance();
  std::string::string(asStack_188,"game_begin");
  uVar2 = LogServer::AppendMsg(uVar2,asStack_188);
  FUN_05475d88(asStack_180,this + 0x120);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::~string(asStack_188);
  nop();
  this_00 = (Util *)LogServer::Instance();
  Android::Util::GetPackageName(this_00);
  LogServer::AppendMsg(this_00,asStack_180);
  std::string::~string(asStack_180);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  thunk_FUN_05460424(auStack_168,0);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  tVar3 = time((time_t *)0x0);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  thunk_FUN_05460424(auStack_168,tVar3);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  Set8BytesTo0(asStack_1a0);
  Set8BytesTo0(asStack_198);
  std::operator+(asStack_1a0,"-");
  std::operator+(asStack_180,asStack_198);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0545ec84(auStack_168,asStack_190);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  LawnApp::GetSessionId();
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0545ec84(auStack_168,asStack_188);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  this_01 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_01);
  std::string::~string(asStack_188);
  std::string::~string(asStack_190);
  std::string::~string(asStack_198);
  std::string::~string(asStack_1a0);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onDecompress(int) */

void __thiscall MetricsCollector::onDecompress(MetricsCollector *this,int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  Util *this_00;
  time_t tVar3;
  LogServer *this_01;
  string asStack_1a0 [8];
  string asStack_198 [8];
  string asStack_190 [8];
  string asStack_188 [8];
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = LogServer::Instance();
  std::string::string(asStack_188,"game_decompress");
  uVar2 = LogServer::AppendMsg(uVar2,asStack_188);
  FUN_05475d88(asStack_180,this + 0x120);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::~string(asStack_188);
  nop();
  this_00 = (Util *)LogServer::Instance();
  Android::Util::GetPackageName(this_00);
  LogServer::AppendMsg(this_00,asStack_180);
  std::string::~string(asStack_180);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  thunk_FUN_05460424(auStack_168,0);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  tVar3 = time((time_t *)0x0);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  thunk_FUN_05460424(auStack_168,tVar3);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  Set8BytesTo0(asStack_1a0);
  Set8BytesTo0(asStack_198);
  std::operator+(asStack_1a0,"-");
  std::operator+(asStack_180,asStack_198);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0545ec84(auStack_168,asStack_190);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  if (param_1 == 1) {
    uVar2 = LawnApp::GetDecompressDuration(gLawnApp);
  }
  else {
    uVar2 = 0;
  }
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  thunk_FUN_05460d54(uVar2,auStack_168);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  LawnApp::GetSessionId();
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0545ec84(auStack_168,asStack_188);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,param_1);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  this_01 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_01);
  if (param_1 == 1) {
    std::string::string(asStack_180,"Decompression");
    BehaviorLog::funnelEnd(asStack_180);
    std::string::~string(asStack_180);
    nop();
  }
  else {
    std::string::string(asStack_180,"Decompression");
    BehaviorLog::funnelStart(asStack_180);
    std::string::~string(asStack_180);
    nop();
  }
  std::string::~string(asStack_188);
  std::string::~string(asStack_190);
  std::string::~string(asStack_198);
  std::string::~string(asStack_1a0);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onGameLoad(int) */

void __thiscall MetricsCollector::onGameLoad(MetricsCollector *this,int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  Util *this_00;
  time_t tVar3;
  LogServer *this_01;
  undefined8 uVar4;
  string asStack_1a0 [8];
  string asStack_198 [8];
  string asStack_190 [8];
  string asStack_188 [8];
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = LogServer::Instance();
  std::string::string(asStack_188,"game_load");
  uVar2 = LogServer::AppendMsg(uVar2,asStack_188);
  FUN_05475d88(asStack_180,this + 0x120);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::~string(asStack_188);
  nop();
  this_00 = (Util *)LogServer::Instance();
  Android::Util::GetPackageName(this_00);
  LogServer::AppendMsg(this_00,asStack_180);
  std::string::~string(asStack_180);
  if (param_1 == 1) {
    uVar2 = LawnApp::GetRealServerTime(gLawnApp);
  }
  else {
    uVar2 = 0;
  }
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  uVar4 = 0;
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  thunk_FUN_05460424(auStack_168,uVar2);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  tVar3 = time((time_t *)0x0);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  thunk_FUN_05460424(auStack_168,tVar3);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  Set8BytesTo0(asStack_1a0);
  Set8BytesTo0(asStack_198);
  std::operator+(asStack_1a0,"-");
  std::operator+(asStack_180,asStack_198);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0545ec84(auStack_168,asStack_190);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  if (param_1 == 1) {
    uVar4 = LawnApp::GetLoadingDuration(gLawnApp);
  }
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  thunk_FUN_05460d54(uVar4,auStack_168);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  LawnApp::GetSessionId();
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0545ec84(auStack_168,asStack_188);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,param_1);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  this_01 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_01);
  std::string::~string(asStack_188);
  std::string::~string(asStack_190);
  std::string::~string(asStack_198);
  std::string::~string(asStack_1a0);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onGameLogin(bool) */

void __thiscall MetricsCollector::onGameLogin(MetricsCollector *this,bool param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  Util *this_00;
  LogServer *this_01;
  char *__s;
  string asStack_1a0 [8];
  string asStack_198 [8];
  string asStack_190 [8];
  string asStack_188 [8];
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = LogServer::Instance();
  std::string::string(asStack_188,"game_login");
  uVar2 = LogServer::AppendMsg(uVar2,asStack_188);
  FUN_05475d88(asStack_180,this + 0x120);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::~string(asStack_188);
  nop();
  this_00 = (Util *)LogServer::Instance();
  Android::Util::GetPackageName(this_00);
  LogServer::AppendMsg(this_00,asStack_180);
  std::string::~string(asStack_180);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  Set8BytesTo0(asStack_1a0);
  Set8BytesTo0(asStack_198);
  std::operator+(asStack_1a0,"-");
  std::operator+(asStack_180,asStack_198);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0545ec84(auStack_168,asStack_190);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,param_1);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  LawnApp::GetSessionId();
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0545ec84(auStack_168,asStack_188);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  this_01 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_01);
  if (param_1) {
    __s = "Login";
  }
  else {
    __s = "Login_Failed";
  }
  std::string::string(asStack_180,__s);
  BehaviorLog::funnel(asStack_180);
  std::string::~string(asStack_180);
  nop();
  std::string::~string(asStack_188);
  std::string::~string(asStack_190);
  std::string::~string(asStack_198);
  std::string::~string(asStack_1a0);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onGameReady() */

void __thiscall MetricsCollector::onGameReady(MetricsCollector *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  Util *this_00;
  time_t tVar3;
  LogServer *this_01;
  string asStack_1a0 [8];
  string asStack_198 [8];
  string asStack_190 [8];
  string asStack_188 [8];
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = LogServer::Instance();
  std::string::string(asStack_188,"game_ready");
  uVar2 = LogServer::AppendMsg(uVar2,asStack_188);
  FUN_05475d88(asStack_180,this + 0x120);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::~string(asStack_188);
  nop();
  this_00 = (Util *)LogServer::Instance();
  Android::Util::GetPackageName(this_00);
  LogServer::AppendMsg(this_00,asStack_180);
  std::string::~string(asStack_180);
  uVar2 = LawnApp::GetRealServerTime(gLawnApp);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  thunk_FUN_05460424(auStack_168,uVar2);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  tVar3 = time((time_t *)0x0);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  thunk_FUN_05460424(auStack_168,tVar3);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  Set8BytesTo0(asStack_1a0);
  Set8BytesTo0(asStack_198);
  std::operator+(asStack_1a0,"-");
  std::operator+(asStack_180,asStack_198);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0545ec84(auStack_168,asStack_190);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  LawnApp::GetSessionId();
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0545ec84(auStack_168,asStack_188);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  this_01 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_01);
  std::string::string(asStack_180,"GameReady");
  BehaviorLog::funnel(asStack_180);
  std::string::~string(asStack_180);
  nop();
  std::string::~string(asStack_188);
  std::string::~string(asStack_190);
  std::string::~string(asStack_198);
  std::string::~string(asStack_1a0);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MetricsCollector::GetPCPID() */

undefined8 MetricsCollector::GetPCPID(void)

{
  PublicBasicInfo *in_x0;
  undefined8 in_x8;
  
  PublicBasicInfo::getPCPID(in_x0);
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::AppendLogHead(std::string const&) */

void __thiscall MetricsCollector::AppendLogHead(MetricsCollector *this,string *param_1)

{
  undefined8 uVar1;
  Util *this_00;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = LogServer::Instance();
  FUN_05475d88(asStack_20,param_1);
  uVar1 = LogServer::AppendMsg(uVar1,asStack_20);
  GetPCPID();
  uVar1 = LogServer::AppendMsg(uVar1,asStack_18);
  FUN_05475d88(asStack_10,this + 0x120);
  LogServer::AppendMsg(uVar1,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  this_00 = (Util *)LogServer::Instance();
  Android::Util::GetPackageName(this_00);
  LogServer::AppendMsg(this_00,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onGetReward(std::string const&, std::string const&) */

void __thiscall
MetricsCollector::onGetReward(MetricsCollector *this,string *param_1,string *param_2)

{
  undefined8 uVar1;
  LogServer *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"getreward");
  AppendLogHead(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  uVar1 = LogServer::Instance();
  FUN_05475d88(asStack_10,param_1);
  LogServer::AppendMsg(uVar1,asStack_10);
  std::string::~string(asStack_10);
  uVar1 = LogServer::Instance();
  FUN_05475d88(asStack_10,param_2);
  LogServer::AppendMsg(uVar1,asStack_10);
  std::string::~string(asStack_10);
  this_00 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onOpenUI(std::string const&) */

void __thiscall MetricsCollector::onOpenUI(MetricsCollector *this,string *param_1)

{
  undefined8 uVar1;
  LogServer *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"openui");
  AppendLogHead(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  uVar1 = LogServer::Instance();
  FUN_05475d88(asStack_10,param_1);
  LogServer::AppendMsg(uVar1,asStack_10);
  std::string::~string(asStack_10);
  this_00 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onGetUpdateReward() */

void __thiscall MetricsCollector::onGetUpdateReward(MetricsCollector *this)

{
  LogServer *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"get_update_reward");
  AppendLogHead(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  this_00 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onTmallClick() */

void __thiscall MetricsCollector::onTmallClick(MetricsCollector *this)

{
  LogServer *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"tmall_click");
  AppendLogHead(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  this_00 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onRiddlesParticipate() */

void __thiscall MetricsCollector::onRiddlesParticipate(MetricsCollector *this)

{
  LogServer *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"riddles_participate");
  AppendLogHead(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  this_00 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onIfengfengClick() */

void __thiscall MetricsCollector::onIfengfengClick(MetricsCollector *this)

{
  LogServer *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"ifengfeng_click");
  AppendLogHead(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  this_00 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onInvalidAccount() */

void __thiscall MetricsCollector::onInvalidAccount(MetricsCollector *this)

{
  LogServer *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"invalid_account");
  AppendLogHead(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  this_00 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onCheckUpdateClick() */

void __thiscall MetricsCollector::onCheckUpdateClick(MetricsCollector *this)

{
  LogServer *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"check_update_click");
  AppendLogHead(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  this_00 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onChargeReward(std::string const&) */

void __thiscall MetricsCollector::onChargeReward(MetricsCollector *this,string *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  LogServer *this_00;
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_180,"charge_reward");
  AppendLogHead(this,asStack_180);
  std::string::~string(asStack_180);
  nop();
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0545ec84(auStack_168,param_1);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  this_00 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_00);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onGemsCostReward(int) */

void __thiscall MetricsCollector::onGemsCostReward(MetricsCollector *this,int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  LogServer *this_00;
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_180,"gemscost_reward");
  AppendLogHead(this,asStack_180);
  std::string::~string(asStack_180);
  nop();
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,param_1);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  this_00 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_00);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onLanternReward(int) */

void __thiscall MetricsCollector::onLanternReward(MetricsCollector *this,int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  LogServer *this_00;
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_180,"lantern_reward");
  AppendLogHead(this,asStack_180);
  std::string::~string(asStack_180);
  nop();
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,param_1);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  this_00 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_00);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onBuyTimeMetrics(std::vector<LogCacheInfo, std::allocator<LogCacheInfo> >&) */

void __thiscall MetricsCollector::onBuyTimeMetrics(MetricsCollector *this,vector *param_1)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  LogServer *this_00;
  ulong uVar4;
  undefined8 uVar5;
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_180,"buytime_metrics");
  AppendLogHead(this,asStack_180);
  std::string::~string(asStack_180);
  nop();
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)param_1;
    uVar3 = FUN_03eaae20(uVar5,*(undefined8 *)(param_1 + 8));
    if (uVar3 <= uVar4) break;
    uVar5 = FUN_03eaae2c(uVar5,uVar4);
    FUN_0545ec84(auStack_168,uVar5);
    FUN_054603b8(auStack_168,&DAT_055b4790);
    lVar2 = FUN_03eaae2c(*(undefined8 *)param_1,uVar4);
    FUN_0545ec84(auStack_168,lVar2 + 8);
    FUN_054603b8(auStack_168,&DAT_05593348);
    uVar4 = uVar4 + 1;
  }
  uVar5 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar5,asStack_180);
  std::string::~string(asStack_180);
  this_00 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_00);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onChooseUpdateResult(int) */

void __thiscall MetricsCollector::onChooseUpdateResult(MetricsCollector *this,int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  LogServer *this_00;
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_180,"update_choose_result");
  AppendLogHead(this,asStack_180);
  std::string::~string(asStack_180);
  nop();
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,param_1);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  this_00 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_00);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onDownloadUpdateVersion(int) */

void __thiscall MetricsCollector::onDownloadUpdateVersion(MetricsCollector *this,int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  LogServer *this_00;
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_180,"update_download");
  AppendLogHead(this,asStack_180);
  std::string::~string(asStack_180);
  nop();
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,param_1);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  this_00 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_00);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onInstallUpdateVersion(int) */

void __thiscall MetricsCollector::onInstallUpdateVersion(MetricsCollector *this,int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  LogServer *this_00;
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_180,"update_install");
  AppendLogHead(this,asStack_180);
  std::string::~string(asStack_180);
  nop();
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,param_1);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  this_00 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_00);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onDangerRoomReward(int) */

void __thiscall MetricsCollector::onDangerRoomReward(MetricsCollector *this,int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  LogServer *this_00;
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_180,"dangerroom_rd");
  AppendLogHead(this,asStack_180);
  std::string::~string(asStack_180);
  nop();
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,param_1);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  this_00 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_00);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onCheckBossFightRate(bool) */

void __thiscall MetricsCollector::onCheckBossFightRate(MetricsCollector *this,bool param_1)

{
  undefined4 uVar1;
  MetricsCollectorNameSpace *this_00;
  undefined8 uVar2;
  MetricsCollectorNameSpace *this_01;
  LogServer *this_02;
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_180,"bossfight_win_or_loss");
  AppendLogHead(this,asStack_180);
  std::string::~string(asStack_180);
  nop();
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  MetricsCollectorNameSpace::GetCurrentWorld(this_00);
  FUN_0545ec84(auStack_168,asStack_180);
  std::string::~string(asStack_180);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  MetricsCollectorNameSpace::GetCurrentLevel(this_01);
  FUN_0545ec84(auStack_168,asStack_180);
  std::string::~string(asStack_180);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  thunk_FUN_054608e4(auStack_168,param_1);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  this_02 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_02);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onTutorialFTUE(int) */

void __thiscall MetricsCollector::onTutorialFTUE(MetricsCollector *this,int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  LogServer *this_00;
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::OutputDebugStrF((wchar_t *)"TutorialFTUE EventID : %d");
  std::string::string(asStack_180,"tutorial_ftue");
  AppendLogHead(this,asStack_180);
  std::string::~string(asStack_180);
  nop();
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  FUN_0546065c(auStack_168,param_1);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  this_00 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_00);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onPlantLevelUp(std::string const&, int) */

void __thiscall MetricsCollector::onPlantLevelUp(MetricsCollector *this,string *param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  LogServer *this_00;
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_180,"plant_levelup");
  AppendLogHead(this,asStack_180);
  std::string::~string(asStack_180);
  nop();
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0545ec84(auStack_168,param_1);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,param_2);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  this_00 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_00);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onGemCompensation(int) */

void __thiscall MetricsCollector::onGemCompensation(MetricsCollector *this,int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  LogServer *this_00;
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_180,"gem_compensation");
  AppendLogHead(this,asStack_180);
  std::string::~string(asStack_180);
  nop();
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,param_1);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  this_00 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_00);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onDangerRoomWaveStart(int, int) */

void __thiscall
MetricsCollector::onDangerRoomWaveStart(MetricsCollector *this,int param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  LogServer *this_00;
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_180,"dangerroomwavestart");
  AppendLogHead(this,asStack_180);
  std::string::~string(asStack_180);
  nop();
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,param_2);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,param_1);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  this_00 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_00);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onDangerRoomWaveFinish(int, int) */

void __thiscall
MetricsCollector::onDangerRoomWaveFinish(MetricsCollector *this,int param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  LogServer *this_00;
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_180,"dangerroomwavefinish");
  AppendLogHead(this,asStack_180);
  std::string::~string(asStack_180);
  nop();
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,param_2);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,param_1);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  this_00 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_00);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onDangerRoomAwardGet(int) */

void __thiscall MetricsCollector::onDangerRoomAwardGet(MetricsCollector *this,int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  LogServer *this_00;
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_180,"dangerroomawardget");
  AppendLogHead(this,asStack_180);
  std::string::~string(asStack_180);
  nop();
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,param_1);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  this_00 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_00);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onRedPackOpen(int) */

void __thiscall MetricsCollector::onRedPackOpen(MetricsCollector *this,int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  LogServer *this_00;
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_180,"red_pack_open");
  AppendLogHead(this,asStack_180);
  std::string::~string(asStack_180);
  nop();
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,param_1);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  this_00 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_00);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onSpecificGoodsObtain(std::string const&, int) */

void __thiscall
MetricsCollector::onSpecificGoodsObtain(MetricsCollector *this,string *param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  LogServer *this_00;
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_180,"specific_goods_obtain");
  AppendLogHead(this,asStack_180);
  std::string::~string(asStack_180);
  nop();
  uVar2 = LogServer::Instance();
  FUN_05475d88(asStack_180,param_1);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,param_2);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  this_00 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_00);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onRiddlesCorrectPercent(int) */

void __thiscall MetricsCollector::onRiddlesCorrectPercent(MetricsCollector *this,int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  LogServer *this_00;
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_180,"riddles_correct_percent");
  AppendLogHead(this,asStack_180);
  std::string::~string(asStack_180);
  nop();
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,param_1);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  this_00 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_00);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onItemExchange(Sexy::RtWeakPtr<MagentoProductProps> const&, int, int) */

void __thiscall
MetricsCollector::onItemExchange(MetricsCollector *this,RtWeakPtr *param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  LogServer *this_00;
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_1);
  if ((bVar1) && ((uint)param_3 < 2)) {
    std::string::string(asStack_180,"exchangeitem");
    AppendLogHead(this,asStack_180);
    std::string::~string(asStack_180);
    nop();
    uVar2 = operator|(0x10,8);
    FUN_05462470(auStack_178,uVar2);
    std::string::string(asStack_180,"");
    FUN_05462980(auStack_178,asStack_180);
    std::string::~string(asStack_180);
    nop();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    FUN_0545ec84(auStack_168,lVar3 + 0x80);
    uVar4 = LogServer::Instance();
    FUN_05462824(asStack_180,auStack_178);
    LogServer::AppendMsg(uVar4,asStack_180);
    std::string::~string(asStack_180);
    std::string::string(asStack_180,"");
    FUN_05462980(auStack_178,asStack_180);
    std::string::~string(asStack_180);
    nop();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    FUN_0546065c(auStack_168,*(undefined4 *)(lVar3 + 0x90));
    uVar4 = LogServer::Instance();
    FUN_05462824(asStack_180,auStack_178);
    LogServer::AppendMsg(uVar4,asStack_180);
    std::string::~string(asStack_180);
    std::string::string(asStack_180,"");
    FUN_05462980(auStack_178,asStack_180);
    std::string::~string(asStack_180);
    nop();
    if (param_2 < 0) {
      param_2 = 0;
    }
    FUN_0546065c(auStack_168,param_2);
    uVar4 = LogServer::Instance();
    FUN_05462824(asStack_180,auStack_178);
    LogServer::AppendMsg(uVar4,asStack_180);
    std::string::~string(asStack_180);
    std::string::string(asStack_180,"");
    FUN_05462980(auStack_178,asStack_180);
    std::string::~string(asStack_180);
    nop();
    if (param_3 == 0) {
      FUN_054603b8(auStack_168,&DAT_05606d40);
    }
    else {
      FUN_054603b8(auStack_168,"stone");
    }
    uVar4 = LogServer::Instance();
    FUN_05462824(asStack_180,auStack_178);
    LogServer::AppendMsg(uVar4,asStack_180);
    std::string::~string(asStack_180);
    FUN_05462824(asStack_180,auStack_178);
    this_00 = (LogServer *)LogServer::Instance();
    LogServer::SendMsg(this_00);
    std::string::~string(asStack_180);
    FUN_054617bc(auStack_178);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onPlantPackageBuy(PlantPackage*) */

void __thiscall MetricsCollector::onPlantPackageBuy(MetricsCollector *this,PlantPackage *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  char *__s;
  LogServer *this_00;
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (PlantPackage *)0x0) {
    uVar1 = operator|(0x10,8);
    FUN_05462470(auStack_178,uVar1);
    std::string::string(asStack_180,"plantpackagebuy");
    AppendLogHead(this,asStack_180);
    std::string::~string(asStack_180);
    nop();
    uVar2 = LogServer::Instance();
    __s = (char *)FUN_0547429c(param_1);
    std::string::string(asStack_180,__s);
    LogServer::AppendMsg(uVar2,asStack_180);
    std::string::~string(asStack_180);
    nop();
    std::string::string(asStack_180,"");
    FUN_05462980(auStack_178,asStack_180);
    std::string::~string(asStack_180);
    nop();
    FUN_0546065c(auStack_168,*(undefined4 *)(param_1 + 8));
    uVar2 = LogServer::Instance();
    FUN_05462824(asStack_180,auStack_178);
    LogServer::AppendMsg(uVar2,asStack_180);
    std::string::~string(asStack_180);
    std::string::string(asStack_180,"");
    FUN_05462980(auStack_178,asStack_180);
    std::string::~string(asStack_180);
    nop();
    FUN_0546065c(auStack_168,*(undefined4 *)(param_1 + 0xc));
    uVar2 = LogServer::Instance();
    FUN_05462824(asStack_180,auStack_178);
    LogServer::AppendMsg(uVar2,asStack_180);
    std::string::~string(asStack_180);
    std::string::string(asStack_180,"");
    FUN_05462980(auStack_178,asStack_180);
    std::string::~string(asStack_180);
    nop();
    FUN_0546065c(auStack_168,*(undefined4 *)(param_1 + 0x14));
    uVar2 = LogServer::Instance();
    FUN_05462824(asStack_180,auStack_178);
    LogServer::AppendMsg(uVar2,asStack_180);
    std::string::~string(asStack_180);
    std::string::string(asStack_180,"");
    FUN_05462980(auStack_178,asStack_180);
    std::string::~string(asStack_180);
    nop();
    FUN_0546065c(auStack_168,*(undefined4 *)(param_1 + 0x10));
    uVar2 = LogServer::Instance();
    FUN_05462824(asStack_180,auStack_178);
    LogServer::AppendMsg(uVar2,asStack_180);
    std::string::~string(asStack_180);
    std::string::string(asStack_180,"");
    FUN_05462980(auStack_178,asStack_180);
    std::string::~string(asStack_180);
    nop();
    FUN_0546065c(auStack_168,*(undefined4 *)(param_1 + 0x1c));
    uVar2 = LogServer::Instance();
    FUN_05462824(asStack_180,auStack_178);
    LogServer::AppendMsg(uVar2,asStack_180);
    std::string::~string(asStack_180);
    std::string::string(asStack_180,"");
    FUN_05462980(auStack_178,asStack_180);
    std::string::~string(asStack_180);
    nop();
    FUN_0546065c(auStack_168,*(undefined4 *)(param_1 + 0x18));
    uVar2 = LogServer::Instance();
    FUN_05462824(asStack_180,auStack_178);
    LogServer::AppendMsg(uVar2,asStack_180);
    std::string::~string(asStack_180);
    this_00 = (LogServer *)LogServer::Instance();
    LogServer::SendMsg(this_00);
    FUN_054617bc(auStack_178);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onPlantTrialBuy(int, std::string const&) */

void __thiscall
MetricsCollector::onPlantTrialBuy(MetricsCollector *this,int param_1,string *param_2)

{
  char cVar1;
  undefined4 uVar2;
  LogServer *this_00;
  MagentoProductProps *this_01;
  undefined1 auVar3 [16];
  RtMixedPtrBase aRStack_188 [8];
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar2);
  auVar3 = LogServer::Instance();
  this_00 = auVar3._0_8_;
  Magento::GetProductPtr((Magento *)param_2,auVar3._8_8_);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_188);
  if (cVar1 == '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_188);
    FUN_054617bc(auStack_178);
  }
  else {
    std::string::string(asStack_180,"planttrial");
    AppendLogHead(this,asStack_180);
    std::string::~string(asStack_180);
    nop();
    std::string::string(asStack_180,"");
    FUN_05462980(auStack_178,asStack_180);
    std::string::~string(asStack_180);
    nop();
    FUN_0546065c(auStack_168,param_1);
    FUN_05462824(asStack_180,auStack_178);
    LogServer::AppendMsg(this_00,asStack_180);
    std::string::~string(asStack_180);
    std::string::string(asStack_180,"");
    FUN_05462980(auStack_178,asStack_180);
    std::string::~string(asStack_180);
    nop();
    this_01 = (MagentoProductProps *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_188)
    ;
    MagentoProductProps::GetPriceInUSD(this_01,false);
    FUN_05460f98(auStack_168);
    FUN_05462824(asStack_180,auStack_178);
    LogServer::AppendMsg(this_00,asStack_180);
    std::string::~string(asStack_180);
    FUN_05475d88(asStack_180,param_2);
    LogServer::AppendMsg(this_00,asStack_180);
    std::string::~string(asStack_180);
    LogServer::SendMsg(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_188);
    FUN_054617bc(auStack_178);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onOldUserBackReward(int) */

void __thiscall MetricsCollector::onOldUserBackReward(MetricsCollector *this,int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  LogServer *this_00;
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_180,"olduserback_rd");
  AppendLogHead(this,asStack_180);
  std::string::~string(asStack_180);
  nop();
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,param_1);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  this_00 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_00);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::LogPvpZombiePlace(std::string const&, std::string const&, int, int, long) */

void __thiscall
MetricsCollector::LogPvpZombiePlace
          (MetricsCollector *this,string *param_1,string *param_2,int param_3,int param_4,
          long param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  char *__s;
  LogServer *this_00;
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_180,"PvpLogZombiePlace");
  AppendLogHead(this,asStack_180);
  std::string::~string(asStack_180);
  nop();
  uVar2 = LogServer::Instance();
  FUN_05475d88(asStack_180,param_1);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  *(int *)(this + 0x128) = *(int *)(this + 0x128) + 1;
  FUN_0546065c(auStack_168);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  uVar2 = LogServer::Instance();
  __s = (char *)FUN_0547429c(param_2);
  std::string::string(asStack_180,__s);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  nop();
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,param_3);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,param_4);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  thunk_FUN_05460424(auStack_168,param_5);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  this_00 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_00);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::LogPvpSkillUse(std::string const&, std::string const&, int, Sexy::Point const&,
   long) */

void __thiscall
MetricsCollector::LogPvpSkillUse
          (MetricsCollector *this,string *param_1,string *param_2,int param_3,Point *param_4,
          long param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  char *__s;
  LogServer *this_00;
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_180,"PvpLogSkillUse");
  AppendLogHead(this,asStack_180);
  std::string::~string(asStack_180);
  nop();
  uVar2 = LogServer::Instance();
  FUN_05475d88(asStack_180,param_1);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  *(int *)(this + 0x128) = *(int *)(this + 0x128) + 1;
  FUN_0546065c(auStack_168);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  uVar2 = LogServer::Instance();
  __s = (char *)FUN_0547429c(param_2);
  std::string::string(asStack_180,__s);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  nop();
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,param_3);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,*(undefined4 *)param_4);
  FUN_054603b8(auStack_168,&DAT_05593348);
  FUN_0546065c(auStack_168,*(undefined4 *)(param_4 + 4));
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  thunk_FUN_05460424(auStack_168,param_5);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  this_00 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_00);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::LogPvpBrainDie(std::string const&, int, long) */

void __thiscall
MetricsCollector::LogPvpBrainDie(MetricsCollector *this,string *param_1,int param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  LogServer *this_00;
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_180,"PvpLogBrainDie");
  AppendLogHead(this,asStack_180);
  std::string::~string(asStack_180);
  nop();
  uVar2 = LogServer::Instance();
  FUN_05475d88(asStack_180,param_1);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  *(int *)(this + 0x128) = *(int *)(this + 0x128) + 1;
  FUN_0546065c(auStack_168);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,param_2);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  thunk_FUN_05460424(auStack_168,param_3);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  this_00 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_00);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::LogPvpRecycleZombie(std::string const&, std::string const&, int, long) */

void __thiscall
MetricsCollector::LogPvpRecycleZombie
          (MetricsCollector *this,string *param_1,string *param_2,int param_3,long param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  char *__s;
  LogServer *this_00;
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_180,"PvpLogRecycleZombie");
  AppendLogHead(this,asStack_180);
  std::string::~string(asStack_180);
  nop();
  uVar2 = LogServer::Instance();
  FUN_05475d88(asStack_180,param_1);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  *(int *)(this + 0x128) = *(int *)(this + 0x128) + 1;
  FUN_0546065c(auStack_168);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  uVar2 = LogServer::Instance();
  __s = (char *)FUN_0547429c(param_2);
  std::string::string(asStack_180,__s);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  nop();
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,param_3);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  thunk_FUN_05460424(auStack_168,param_4);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  this_00 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_00);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::LogPvpPlantfoodZombie(std::string const&, std::string const&, int, bool, long)
    */

void MetricsCollector::LogPvpPlantfoodZombie
               (string *param_1,string *param_2,int param_3,bool param_4,long param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  char *__s;
  LogServer *this;
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_180,"PvpLogPlantfoodZombie");
  AppendLogHead((MetricsCollector *)param_1,asStack_180);
  std::string::~string(asStack_180);
  nop();
  uVar2 = LogServer::Instance();
  FUN_05475d88(asStack_180,param_2);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
  FUN_0546065c(auStack_168);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  uVar2 = LogServer::Instance();
  __s = (char *)FUN_0547429c(param_3);
  std::string::string(asStack_180,__s);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  nop();
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,param_4);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  thunk_FUN_054608e4(auStack_168,param_5 & 0xff);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  thunk_FUN_054608e4(auStack_168,1);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  this = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onLevelStart() */

void __thiscall MetricsCollector::onLevelStart(MetricsCollector *this)

{
  long lVar1;
  undefined4 uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetPCPID();
  setGameID(this,asStack_10);
  std::string::~string(asStack_10);
  uVar2 = PVZ_T();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x38) = uVar2;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::OnLoginReward(int) */

void __thiscall MetricsCollector::OnLoginReward(MetricsCollector *this,int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  Util *this_00;
  LogServer *this_01;
  string asStack_190 [8];
  string asStack_188 [8];
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  uVar2 = LogServer::Instance();
  std::string::string(asStack_190,"loginreward");
  uVar2 = LogServer::AppendMsg(uVar2,asStack_190);
  GetPCPID();
  uVar2 = LogServer::AppendMsg(uVar2,asStack_188);
  FUN_05475d88(asStack_180,this + 0x120);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::~string(asStack_188);
  std::string::~string(asStack_190);
  nop();
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,param_1);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  this_00 = (Util *)LogServer::Instance();
  Android::Util::GetPackageName(this_00);
  LogServer::AppendMsg(this_00,asStack_180);
  std::string::~string(asStack_180);
  this_01 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_01);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::OnEnterBack() */

void __thiscall MetricsCollector::OnEnterBack(MetricsCollector *this)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  Util *this_00;
  LogServer *this_01;
  uint extraout_w1;
  ulong uVar4;
  string asStack_198 [8];
  string asStack_190 [8];
  string asStack_188 [8];
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  Sexy *local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = Sexy::SexyTime(___stack_chk_guard);
  uVar4 = (ulong)(lVar2 - *(long *)(this + 0xd0)) / 1000;
  if (uVar4 != 0) {
    uVar1 = operator|(0x10,8);
    FUN_05462470(auStack_178,uVar1);
    thunk_FUN_0546069c(auStack_168,uVar4);
    uVar3 = LogServer::Instance();
    std::string::string(asStack_198,"userlogout_1");
    uVar3 = LogServer::AppendMsg(uVar3,asStack_198);
    GetPCPID();
    uVar3 = LogServer::AppendMsg(uVar3,asStack_190);
    FUN_05475d88(asStack_188,this + 0x120);
    uVar3 = LogServer::AppendMsg(uVar3,asStack_188);
    FUN_05462824(asStack_180,auStack_178);
    LogServer::AppendMsg(uVar3,asStack_180);
    std::string::~string(asStack_180);
    std::string::~string(asStack_188);
    std::string::~string(asStack_190);
    std::string::~string(asStack_198);
    nop();
    this_00 = (Util *)LogServer::Instance();
    Android::Util::GetPackageName(this_00);
    LogServer::AppendMsg(this_00,asStack_180);
    std::string::~string(asStack_180);
    this_01 = (LogServer *)LogServer::Instance();
    LogServer::SendMsg(this_01);
    Sexy::SexySleep((Sexy *)0xa,extraout_w1);
    FUN_054617bc(auStack_178);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::OnMissionUnlock(std::string const&) */

void __thiscall MetricsCollector::OnMissionUnlock(MetricsCollector *this,string *param_1)

{
  undefined8 uVar1;
  Util *this_00;
  ProfileMgr *this_01;
  PlayerInfo *pPVar2;
  LogServer *this_02;
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = LogServer::Instance();
  std::string::string(asStack_28,"missionunlock_1");
  uVar1 = LogServer::AppendMsg(uVar1,asStack_28);
  Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetAccountName();
  uVar1 = LogServer::AppendMsg(uVar1,asStack_20);
  FUN_05475d88(asStack_18,this + 0x120);
  uVar1 = LogServer::AppendMsg(uVar1,asStack_18);
  FUN_05475d88(asStack_10,param_1);
  LogServer::AppendMsg(uVar1,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  nop();
  this_00 = (Util *)LogServer::Instance();
  Android::Util::GetPackageName(this_00);
  LogServer::AppendMsg(this_00,asStack_10);
  std::string::~string(asStack_10);
  Sexy::LazySingleton<talkingGame>::GetInstancePtr();
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  ProfileUtils::CompletedLevelCount(pPVar2);
  nop();
  this_02 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_02);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onWechatShare() */

void __thiscall MetricsCollector::onWechatShare(MetricsCollector *this)

{
  undefined8 uVar1;
  Util *this_00;
  LogServer *this_01;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = LogServer::Instance();
  std::string::string(asStack_20,"wechat_share");
  uVar1 = LogServer::AppendMsg(uVar1,asStack_20);
  Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetAccountName();
  uVar1 = LogServer::AppendMsg(uVar1,asStack_18);
  FUN_05475d88(asStack_10,this + 0x120);
  LogServer::AppendMsg(uVar1,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  nop();
  this_00 = (Util *)LogServer::Instance();
  Android::Util::GetPackageName(this_00);
  LogServer::AppendMsg(this_00,asStack_10);
  std::string::~string(asStack_10);
  this_01 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::OnGetFreeGems(std::string const&, int) */

void __thiscall MetricsCollector::OnGetFreeGems(MetricsCollector *this,string *param_1,int param_2)

{
  undefined4 uVar1;
  ProfileMgr *this_00;
  NewPVPMgr *this_01;
  undefined8 uVar2;
  MetricsCollectorNameSpace *this_02;
  Util *this_03;
  LogServer *this_04;
  string asStack_1a8 [8];
  string asStack_1a0 [8];
  string asStack_198 [8];
  string asStack_190 [8];
  string asStack_188 [8];
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  FUN_0546065c(auStack_168,param_2);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (NewPVPMgr *)ProfileMgr::GetCurrentProfile(this_00);
  uVar2 = LogServer::Instance();
  std::string::string(asStack_1a8,"getfreegems_1");
  uVar2 = LogServer::AppendMsg(uVar2,asStack_1a8);
  GetPCPID();
  uVar2 = LogServer::AppendMsg(uVar2,asStack_1a0);
  FUN_05475d88(asStack_198,this + 0x120);
  uVar2 = LogServer::AppendMsg(uVar2,asStack_198);
  FUN_05475d88(asStack_190,param_1);
  this_02 = (MetricsCollectorNameSpace *)LogServer::AppendMsg(uVar2,asStack_190);
  MetricsCollectorNameSpace::GetCurrentWorld(this_02);
  uVar2 = LogServer::AppendMsg(this_02,asStack_188);
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::~string(asStack_188);
  std::string::~string(asStack_190);
  std::string::~string(asStack_198);
  std::string::~string(asStack_1a0);
  std::string::~string(asStack_1a8);
  nop();
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  uVar1 = NewPVPMgr::GetSeasonEndTime(this_01);
  FUN_0546065c(auStack_168,uVar1);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  this_03 = (Util *)LogServer::Instance();
  Android::Util::GetPackageName(this_03);
  LogServer::AppendMsg(this_03,asStack_180);
  std::string::~string(asStack_180);
  this_04 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_04);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onGameStart() */

void __thiscall MetricsCollector::onGameStart(MetricsCollector *this)

{
  undefined4 uVar1;
  int *piVar2;
  undefined8 uVar3;
  Sexy *this_00;
  Util *this_01;
  ProfileMgr *this_02;
  NewPVPMgr *this_03;
  LogServer *this_04;
  int local_1b0 [2];
  string asStack_1a8 [8];
  string asStack_1a0 [8];
  string asStack_198 [8];
  string asStack_190 [8];
  string asStack_188 [8];
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  local_1b0[0] = 0;
  local_1b0[1] = 0;
  Android::Graphics::GetScreenSizeInPixels
            (*(AndroidAppDriver **)(Sexy::gSexyAppBase + 0x10),local_1b0,local_1b0 + 1);
  piVar2 = eastl::min_alt<int>(local_1b0,local_1b0 + 1);
  FUN_0546065c(auStack_168,*piVar2);
  uVar3 = LogServer::Instance();
  std::string::string(asStack_1a8,"userlogin_6");
  uVar3 = LogServer::AppendMsg(uVar3,asStack_1a8);
  GetPCPID();
  uVar3 = LogServer::AppendMsg(uVar3,asStack_1a0);
  FUN_05475d88(asStack_198,this + 0x120);
  uVar3 = LogServer::AppendMsg(uVar3,asStack_198);
  LawnApp::GetDeviceType();
  uVar3 = LogServer::AppendMsg(uVar3,asStack_190);
  FUN_05462824(asStack_188,auStack_178);
  this_00 = (Sexy *)LogServer::AppendMsg(uVar3,asStack_188);
  Sexy::SysGetOSVersionString(this_00);
  LogServer::AppendMsg(this_00,asStack_180);
  std::string::~string(asStack_180);
  std::string::~string(asStack_188);
  std::string::~string(asStack_190);
  std::string::~string(asStack_198);
  std::string::~string(asStack_1a0);
  std::string::~string(asStack_1a8);
  nop();
  this_01 = (Util *)LogServer::Instance();
  Android::Util::GetPackageName(this_01);
  LogServer::AppendMsg(this_01,asStack_180);
  std::string::~string(asStack_180);
  Set8BytesTo0(asStack_190);
  uVar3 = LogServer::Instance();
  FUN_05475d88(asStack_180,asStack_190);
  LogServer::AppendMsg(uVar3,asStack_180);
  std::string::~string(asStack_180);
  Set8BytesTo0(asStack_188);
  uVar3 = LogServer::Instance();
  FUN_05475d88(asStack_180,asStack_188);
  LogServer::AppendMsg(uVar3,asStack_180);
  std::string::~string(asStack_180);
  this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_03 = (NewPVPMgr *)ProfileMgr::GetCurrentProfile(this_02);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  uVar1 = NewPVPMgr::GetSeasonEndTime(this_03);
  FUN_0546065c(auStack_168,uVar1);
  uVar3 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar3,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  uVar1 = PlayerInfo::GetRechargeGems((PlayerInfo *)this_03);
  FUN_0546065c(auStack_168,uVar1);
  uVar3 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar3,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  uVar1 = PlayerInfo::GetNumCoins((PlayerInfo *)this_03,false);
  FUN_0546065c(auStack_168,uVar1);
  uVar3 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar3,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,0);
  uVar3 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar3,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  uVar1 = FUN_03eaad74(*(undefined4 *)(this_03 + 0xdc8));
  FUN_0546065c(auStack_168,uVar1);
  uVar3 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar3,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  LawnApp::GetNetworkType(gLawnApp);
  FUN_0545ec84(auStack_168,asStack_180);
  std::string::~string(asStack_180);
  uVar3 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar3,asStack_180);
  std::string::~string(asStack_180);
  this_04 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_04);
  std::string::~string(asStack_188);
  std::string::~string(asStack_190);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onGameEnd() */

void __thiscall MetricsCollector::onGameEnd(MetricsCollector *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  Util *this_00;
  time_t tVar3;
  LogServer *this_01;
  string asStack_1a0 [8];
  string asStack_198 [8];
  string asStack_190 [8];
  string asStack_188 [8];
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = LogServer::Instance();
  std::string::string(asStack_188,"game_end");
  uVar2 = LogServer::AppendMsg(uVar2,asStack_188);
  FUN_05475d88(asStack_180,this + 0x120);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::~string(asStack_188);
  nop();
  this_00 = (Util *)LogServer::Instance();
  Android::Util::GetPackageName(this_00);
  LogServer::AppendMsg(this_00,asStack_180);
  std::string::~string(asStack_180);
  uVar2 = LawnApp::GetRealServerTime(gLawnApp);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  thunk_FUN_05460424(auStack_168,uVar2);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  tVar3 = time((time_t *)0x0);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  thunk_FUN_05460424(auStack_168,tVar3);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  uVar2 = LogServer::Instance();
  Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetAccountName();
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  Set8BytesTo0(asStack_1a0);
  Set8BytesTo0(asStack_198);
  std::operator+(asStack_1a0,"-");
  std::operator+(asStack_180,asStack_198);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0545ec84(auStack_168,asStack_190);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  LawnApp::GetSessionId();
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0545ec84(auStack_168,asStack_188);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  this_01 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_01);
  BehaviorLog::gameEnd();
  std::string::~string(asStack_188);
  std::string::~string(asStack_190);
  std::string::~string(asStack_198);
  std::string::~string(asStack_1a0);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onGameCharge(std::string const&, std::string const&, std::string const&) */

void __thiscall
MetricsCollector::onGameCharge
          (MetricsCollector *this,string *param_1,string *param_2,string *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  Util *this_00;
  long lVar5;
  LogServer *this_01;
  MagentoProductProps *this_02;
  string *extraout_x1;
  undefined4 uVar6;
  string asStack_190 [8];
  string asStack_188 [8];
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  uVar6 = 0;
  local_8 = ___stack_chk_guard;
  uVar4 = LogServer::Instance();
  std::string::string(asStack_190,"game_charge_1");
  uVar4 = LogServer::AppendMsg(uVar4,asStack_190);
  Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetAccountName();
  uVar4 = LogServer::AppendMsg(uVar4,asStack_188);
  FUN_05475d88(asStack_180,this + 0x120);
  LogServer::AppendMsg(uVar4,asStack_180);
  std::string::~string(asStack_180);
  std::string::~string(asStack_188);
  std::string::~string(asStack_190);
  nop();
  this_00 = (Util *)LogServer::Instance();
  Android::Util::GetPackageName(this_00);
  LogServer::AppendMsg(this_00,asStack_180);
  std::string::~string(asStack_180);
  Magento::GetProductPtr((Magento *)param_3,extraout_x1);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_190);
  if (cVar1 != '\0') {
    this_02 = (MagentoProductProps *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_190)
    ;
    uVar6 = MagentoProductProps::GetPriceInUSD(this_02,false);
  }
  std::string::string(asStack_188,"");
  nop();
  lVar5 = ProfileUtils::Profile();
  if (lVar5 != 0) {
    PlantAnimRig_HoyaCordata::getIdleAnimationName();
    FUN_05474278(asStack_188,asStack_180);
    std::string::~string(asStack_180);
  }
  if (*(Board **)(gLawnApp + 0x9f0) == (Board *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = Board::GetCurrentWave(*(Board **)(gLawnApp + 0x9f0));
  }
  uVar3 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar3);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0545ec84(auStack_168,param_1);
  uVar4 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar4,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_05460f98(uVar6,auStack_168);
  uVar4 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar4,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0545ec84(auStack_168,asStack_188);
  uVar4 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar4,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,uVar2);
  uVar4 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar4,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0545ec84(auStack_168,param_2);
  uVar4 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar4,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,*(undefined4 *)(gLawnApp + 0x2a08));
  uVar4 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar4,asStack_180);
  std::string::~string(asStack_180);
  this_01 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_01);
  FUN_054617bc(auStack_178);
  std::string::~string(asStack_188);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_190);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onNationalDayConsumeDimondsInLottery(std::string const&, int) */

void __thiscall
MetricsCollector::onNationalDayConsumeDimondsInLottery
          (MetricsCollector *this,string *param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  Util *this_00;
  LogServer *this_01;
  string asStack_190 [8];
  string asStack_188 [8];
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = LogServer::Instance();
  std::string::string(asStack_190,"nd_lottery");
  uVar2 = LogServer::AppendMsg(uVar2,asStack_190);
  Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetAccountName();
  uVar2 = LogServer::AppendMsg(uVar2,asStack_188);
  FUN_05475d88(asStack_180,this + 0x120);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::~string(asStack_188);
  std::string::~string(asStack_190);
  nop();
  this_00 = (Util *)LogServer::Instance();
  Android::Util::GetPackageName(this_00);
  LogServer::AppendMsg(this_00,asStack_180);
  std::string::~string(asStack_180);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0545ec84(auStack_168,param_1);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,param_2);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  this_01 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_01);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onCharge10Reward(int, int) */

void __thiscall MetricsCollector::onCharge10Reward(MetricsCollector *this,int param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  Util *this_00;
  LogServer *this_01;
  string asStack_190 [8];
  string asStack_188 [8];
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = LogServer::Instance();
  std::string::string(asStack_190,"charge10reward");
  uVar2 = LogServer::AppendMsg(uVar2,asStack_190);
  Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetAccountName();
  uVar2 = LogServer::AppendMsg(uVar2,asStack_188);
  FUN_05475d88(asStack_180,this + 0x120);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::~string(asStack_188);
  std::string::~string(asStack_190);
  nop();
  this_00 = (Util *)LogServer::Instance();
  Android::Util::GetPackageName(this_00);
  LogServer::AppendMsg(this_00,asStack_180);
  std::string::~string(asStack_180);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,param_1);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,param_2);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  this_01 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_01);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onTutoriGuidIgnore(int) */

void __thiscall MetricsCollector::onTutoriGuidIgnore(MetricsCollector *this,int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  Util *this_00;
  LogServer *this_01;
  string asStack_198 [8];
  string asStack_190 [8];
  string asStack_188 [8];
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  FUN_0546065c(auStack_168,param_1);
  uVar2 = LogServer::Instance();
  std::string::string(asStack_198,"guide_1");
  uVar2 = LogServer::AppendMsg(uVar2,asStack_198);
  Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetAccountName();
  uVar2 = LogServer::AppendMsg(uVar2,asStack_190);
  FUN_05475d88(asStack_188,this + 0x120);
  uVar2 = LogServer::AppendMsg(uVar2,asStack_188);
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::~string(asStack_188);
  std::string::~string(asStack_190);
  std::string::~string(asStack_198);
  nop();
  this_00 = (Util *)LogServer::Instance();
  Android::Util::GetPackageName(this_00);
  LogServer::AppendMsg(this_00,asStack_180);
  std::string::~string(asStack_180);
  this_01 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_01);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onCoinsuse(int, std::string const&) */

void __thiscall MetricsCollector::onCoinsuse(MetricsCollector *this,int param_1,string *param_2)

{
  undefined4 uVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined8 uVar2;
  Util *this_02;
  LogServer *this_03;
  string asStack_1a0 [8];
  string asStack_198 [8];
  string asStack_190 [8];
  string asStack_188 [8];
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  FUN_0546065c(auStack_168,param_1);
  uVar2 = LogServer::Instance();
  std::string::string(asStack_1a0,"coinsuse_1");
  uVar2 = LogServer::AppendMsg(uVar2,asStack_1a0);
  Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetAccountName();
  uVar2 = LogServer::AppendMsg(uVar2,asStack_198);
  FUN_05475d88(asStack_190,this + 0x120);
  uVar2 = LogServer::AppendMsg(uVar2,asStack_190);
  FUN_05475d88(asStack_188,param_2);
  uVar2 = LogServer::AppendMsg(uVar2,asStack_188);
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::~string(asStack_188);
  std::string::~string(asStack_190);
  std::string::~string(asStack_198);
  std::string::~string(asStack_1a0);
  nop();
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  uVar1 = PlayerInfo::GetNumCoins(this_01,false);
  FUN_0546065c(auStack_168,uVar1);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  this_02 = (Util *)LogServer::Instance();
  Android::Util::GetPackageName(this_02);
  LogServer::AppendMsg(this_02,asStack_180);
  std::string::~string(asStack_180);
  this_03 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_03);
  Sexy::LazySingleton<talkingGame>::GetInstancePtr();
  FUN_0547429c(param_2);
  nop();
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::OnFake(int) */

void __thiscall MetricsCollector::OnFake(MetricsCollector *this,int param_1)

{
  undefined4 uVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined8 uVar2;
  Util *this_02;
  LogServer *this_03;
  string asStack_198 [8];
  string asStack_190 [8];
  string asStack_188 [8];
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  FUN_0546065c(auStack_168,param_1);
  uVar2 = LogServer::Instance();
  std::string::string(asStack_198,"fake_1");
  uVar2 = LogServer::AppendMsg(uVar2,asStack_198);
  Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetAccountName();
  uVar2 = LogServer::AppendMsg(uVar2,asStack_190);
  FUN_05475d88(asStack_188,this + 0x120);
  uVar2 = LogServer::AppendMsg(uVar2,asStack_188);
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::~string(asStack_188);
  std::string::~string(asStack_190);
  std::string::~string(asStack_198);
  nop();
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  uVar1 = PlayerInfo::GetRechargeGems(this_01);
  FUN_0546065c(auStack_168,uVar1);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  uVar1 = NewPVPMgr::GetSeasonEndTime((NewPVPMgr *)this_01);
  FUN_0546065c(auStack_168,uVar1);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  uVar1 = PlayerInfo::GetNumCoins(this_01,false);
  FUN_0546065c(auStack_168,uVar1);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  this_02 = (Util *)LogServer::Instance();
  Android::Util::GetPackageName(this_02);
  LogServer::AppendMsg(this_02,asStack_180);
  std::string::~string(asStack_180);
  this_03 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_03);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onPlantUnlockFragment(Sexy::RtWeakPtr<MagentoProductProps> const&, int) */

void __thiscall
MetricsCollector::onPlantUnlockFragment(MetricsCollector *this,RtWeakPtr *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  MagentoProductProps *this_02;
  long lVar6;
  ActivityConfig *this_03;
  undefined8 uVar7;
  Util *this_04;
  LogServer *this_05;
  int iVar8;
  float fVar9;
  string asStack_198 [8];
  string asStack_190 [8];
  string asStack_188 [8];
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(param_1);
  if (bVar3) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    this_02 = (MagentoProductProps *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    fVar9 = (float)MagentoProductProps::GetPriceInUSD(this_02,false);
    uVar4 = operator|(0x10,8);
    FUN_05462470(auStack_178,uVar4);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    bVar3 = std::operator==("plant",(string *)(lVar6 + 0x78));
    if (bVar3) {
      iVar8 = (int)fVar9;
      lVar6 = LawnApp::GetActivityConfig();
      if (lVar6 != 0) {
        this_03 = (ActivityConfig *)LawnApp::GetActivityConfig();
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
        iVar8 = ActivityConfig::GetActivityPrice(this_03,(string *)(lVar6 + 0x80),false,iVar8);
      }
      uVar7 = LogServer::Instance();
      std::string::string(asStack_198,"plantunlockfragment_3");
      uVar7 = LogServer::AppendMsg(uVar7,asStack_198);
      Sexy::LazySingleton<ProfileMgr>::GetInstance();
      ProfileMgr::GetAccountName();
      uVar7 = LogServer::AppendMsg(uVar7,asStack_190);
      FUN_05475d88(asStack_188,this + 0x120);
      uVar7 = LogServer::AppendMsg(uVar7,asStack_188);
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
      FUN_05475d88(asStack_180,lVar6 + 0x80);
      LogServer::AppendMsg(uVar7,asStack_180);
      std::string::~string(asStack_180);
      std::string::~string(asStack_188);
      std::string::~string(asStack_190);
      std::string::~string(asStack_198);
      nop();
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
      FUN_0546065c(auStack_168,*(undefined4 *)(lVar6 + 0x90));
      uVar7 = LogServer::Instance();
      FUN_05462824(asStack_180,auStack_178);
      LogServer::AppendMsg(uVar7,asStack_180);
      std::string::~string(asStack_180);
      std::string::string(asStack_180,"");
      FUN_05462980(auStack_178,asStack_180);
      std::string::~string(asStack_180);
      nop();
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
      iVar1 = *(int *)(lVar6 + 0x90);
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
      iVar5 = PlayerInfo::GetPlantPieceCount(this_01,(string *)(lVar6 + 0x80),true);
      FUN_0546065c(auStack_168);
      uVar7 = LogServer::Instance();
      FUN_05462824(asStack_180,auStack_178);
      LogServer::AppendMsg(uVar7,asStack_180);
      std::string::~string(asStack_180);
      std::string::string(asStack_180,"");
      FUN_05462980(auStack_178,asStack_180);
      std::string::~string(asStack_180);
      nop();
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
      iVar2 = 0;
      if (*(int *)(lVar6 + 0x90) != 0) {
        iVar2 = (iVar8 * (iVar1 - iVar5)) / *(int *)(lVar6 + 0x90);
      }
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      FUN_0546065c(auStack_168,iVar2 - param_2);
      uVar7 = LogServer::Instance();
      FUN_05462824(asStack_180,auStack_178);
      LogServer::AppendMsg(uVar7,asStack_180);
      std::string::~string(asStack_180);
      std::string::string(asStack_180,"");
      FUN_05462980(auStack_178,asStack_180);
      std::string::~string(asStack_180);
      nop();
      uVar4 = PlayerInfo::GetRechargeGems(this_01);
      FUN_0546065c(auStack_168,uVar4);
      uVar7 = LogServer::Instance();
      FUN_05462824(asStack_180,auStack_178);
      LogServer::AppendMsg(uVar7,asStack_180);
      std::string::~string(asStack_180);
      std::string::string(asStack_180,"");
      FUN_05462980(auStack_178,asStack_180);
      std::string::~string(asStack_180);
      nop();
      FUN_0546065c(auStack_168,param_2);
      uVar7 = LogServer::Instance();
      FUN_05462824(asStack_180,auStack_178);
      LogServer::AppendMsg(uVar7,asStack_180);
      std::string::~string(asStack_180);
      std::string::string(asStack_180,"");
      FUN_05462980(auStack_178,asStack_180);
      std::string::~string(asStack_180);
      nop();
      uVar4 = NewPVPMgr::GetSeasonEndTime((NewPVPMgr *)this_01);
      FUN_0546065c(auStack_168,uVar4);
      uVar7 = LogServer::Instance();
      FUN_05462824(asStack_180,auStack_178);
      LogServer::AppendMsg(uVar7,asStack_180);
      std::string::~string(asStack_180);
      this_04 = (Util *)LogServer::Instance();
      Android::Util::GetPackageName(this_04);
      LogServer::AppendMsg(this_04,asStack_180);
      std::string::~string(asStack_180);
      this_05 = (LogServer *)LogServer::Instance();
      LogServer::SendMsg(this_05);
      FUN_054617bc(auStack_178);
    }
    else {
      FUN_054617bc(auStack_178);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onItemPurchase(Sexy::RtWeakPtr<MagentoProductProps> const&, int) */

void __thiscall
MetricsCollector::onItemPurchase(MetricsCollector *this,RtWeakPtr *param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  MagentoProductProps *this_02;
  long lVar3;
  undefined8 uVar4;
  Util *this_03;
  LogServer *this_04;
  int iVar5;
  float fVar6;
  string asStack_190 [8];
  string asStack_188 [8];
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_1);
  if (!bVar1) goto LAB_03eb6b10;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  this_02 = (MagentoProductProps *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  fVar6 = (float)MagentoProductProps::GetPriceInUSD(this_02,false);
  iVar5 = (int)fVar6;
  uVar2 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar2);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  bVar1 = std::operator==("coin",(string *)(lVar3 + 0x78));
  if (bVar1) {
LAB_03eb6ba4:
    uVar4 = LogServer::Instance();
    std::string::string(asStack_190,"gemsuse_3");
    uVar4 = LogServer::AppendMsg(uVar4,asStack_190);
    Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::GetAccountName();
    uVar4 = LogServer::AppendMsg(uVar4,asStack_188);
    FUN_05475d88(asStack_180,this + 0x120);
    LogServer::AppendMsg(uVar4,asStack_180);
    std::string::~string(asStack_180);
    std::string::~string(asStack_188);
    std::string::~string(asStack_190);
    nop();
    std::string::string(asStack_180,"");
    FUN_05462980(auStack_178,asStack_180);
    std::string::~string(asStack_180);
    nop();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    FUN_0545ec84(auStack_168,lVar3 + 0x80);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    FUN_0546065c(auStack_168,*(undefined4 *)(lVar3 + 0x90));
    uVar4 = LogServer::Instance();
    FUN_05462824(asStack_180,auStack_178);
    LogServer::AppendMsg(uVar4,asStack_180);
    std::string::~string(asStack_180);
    std::string::string(asStack_180,"");
    FUN_05462980(auStack_178,asStack_180);
    std::string::~string(asStack_180);
    nop();
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    FUN_0546065c(auStack_168,iVar5 - param_2);
    uVar4 = LogServer::Instance();
    FUN_05462824(asStack_180,auStack_178);
    LogServer::AppendMsg(uVar4,asStack_180);
    std::string::~string(asStack_180);
    std::string::string(asStack_180,"");
    FUN_05462980(auStack_178,asStack_180);
    std::string::~string(asStack_180);
    nop();
    uVar2 = PlayerInfo::GetRechargeGems(this_01);
    FUN_0546065c(auStack_168,uVar2);
    uVar4 = LogServer::Instance();
    FUN_05462824(asStack_180,auStack_178);
    LogServer::AppendMsg(uVar4,asStack_180);
    std::string::~string(asStack_180);
    std::string::string(asStack_180,"");
    FUN_05462980(auStack_178,asStack_180);
    std::string::~string(asStack_180);
    nop();
    FUN_0546065c(auStack_168,param_2);
    uVar4 = LogServer::Instance();
    FUN_05462824(asStack_180,auStack_178);
    LogServer::AppendMsg(uVar4,asStack_180);
    std::string::~string(asStack_180);
    std::string::string(asStack_180,"");
    FUN_05462980(auStack_178,asStack_180);
    std::string::~string(asStack_180);
    nop();
    uVar2 = NewPVPMgr::GetSeasonEndTime((NewPVPMgr *)this_01);
    FUN_0546065c(auStack_168,uVar2);
    uVar4 = LogServer::Instance();
    FUN_05462824(asStack_180,auStack_178);
    LogServer::AppendMsg(uVar4,asStack_180);
    std::string::~string(asStack_180);
    this_03 = (Util *)LogServer::Instance();
    Android::Util::GetPackageName(this_03);
    LogServer::AppendMsg(this_03,asStack_180);
    std::string::~string(asStack_180);
    this_04 = (LogServer *)LogServer::Instance();
    LogServer::SendMsg(this_04);
  }
  else {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    bVar1 = std::operator==("stamina",(string *)(lVar3 + 0x78));
    if (bVar1) goto LAB_03eb6ba4;
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    bVar1 = std::operator==("gift",(string *)(lVar3 + 0x78));
    if (bVar1) goto LAB_03eb6ba4;
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    bVar1 = std::operator==("zongzi",(string *)(lVar3 + 0x78));
    if (bVar1) goto LAB_03eb6ba4;
  }
  FUN_054617bc(auStack_178);
LAB_03eb6b10:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onItemCoinPurchase(Sexy::RtWeakPtr<MagentoProductProps> const&) */

void __thiscall MetricsCollector::onItemCoinPurchase(MetricsCollector *this,RtWeakPtr *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  MagentoProductProps *this_02;
  long lVar3;
  undefined8 uVar4;
  Util *this_03;
  LogServer *this_04;
  int iVar5;
  float fVar6;
  string asStack_190 [8];
  string asStack_188 [8];
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_1);
  if (!bVar1) goto LAB_03eb6f50;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  this_02 = (MagentoProductProps *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  fVar6 = (float)MagentoProductProps::GetPriceInUSD(this_02,false);
  iVar5 = (int)fVar6;
  uVar2 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar2);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  bVar1 = std::operator==("coin",(string *)(lVar3 + 0x78));
  if (bVar1) {
LAB_03eb6fe4:
    uVar4 = LogServer::Instance();
    std::string::string(asStack_190,"coinsuse_2");
    uVar4 = LogServer::AppendMsg(uVar4,asStack_190);
    Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::GetAccountName();
    uVar4 = LogServer::AppendMsg(uVar4,asStack_188);
    FUN_05475d88(asStack_180,this + 0x120);
    LogServer::AppendMsg(uVar4,asStack_180);
    std::string::~string(asStack_180);
    std::string::~string(asStack_188);
    std::string::~string(asStack_190);
    nop();
    std::string::string(asStack_180,"");
    FUN_05462980(auStack_178,asStack_180);
    std::string::~string(asStack_180);
    nop();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    FUN_0545ec84(auStack_168,lVar3 + 0x80);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    FUN_0546065c(auStack_168,*(undefined4 *)(lVar3 + 0x90));
    uVar4 = LogServer::Instance();
    FUN_05462824(asStack_180,auStack_178);
    LogServer::AppendMsg(uVar4,asStack_180);
    std::string::~string(asStack_180);
    std::string::string(asStack_180,"");
    FUN_05462980(auStack_178,asStack_180);
    std::string::~string(asStack_180);
    nop();
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    FUN_0546065c(auStack_168,iVar5);
    uVar4 = LogServer::Instance();
    FUN_05462824(asStack_180,auStack_178);
    LogServer::AppendMsg(uVar4,asStack_180);
    std::string::~string(asStack_180);
    std::string::string(asStack_180,"");
    FUN_05462980(auStack_178,asStack_180);
    std::string::~string(asStack_180);
    nop();
    uVar2 = PlayerInfo::GetNumCoins(this_01,false);
    FUN_0546065c(auStack_168,uVar2);
    uVar4 = LogServer::Instance();
    FUN_05462824(asStack_180,auStack_178);
    LogServer::AppendMsg(uVar4,asStack_180);
    std::string::~string(asStack_180);
    this_03 = (Util *)LogServer::Instance();
    Android::Util::GetPackageName(this_03);
    LogServer::AppendMsg(this_03,asStack_180);
    std::string::~string(asStack_180);
    this_04 = (LogServer *)LogServer::Instance();
    LogServer::SendMsg(this_04);
  }
  else {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    bVar1 = std::operator==("stamina",(string *)(lVar3 + 0x78));
    if (bVar1) goto LAB_03eb6fe4;
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    bVar1 = std::operator==("gift",(string *)(lVar3 + 0x78));
    if (bVar1) goto LAB_03eb6fe4;
  }
  FUN_054617bc(auStack_178);
LAB_03eb6f50:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onEventPurchase(EventMetrics*, int) */

void __thiscall
MetricsCollector::onEventPurchase(MetricsCollector *this,EventMetrics *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined8 uVar4;
  Util *this_02;
  LogServer *this_03;
  string asStack_190 [8];
  string asStack_188 [8];
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar2 = std::operator==((string *)param_1,"");
  if (!bVar2) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    iVar1 = *(int *)(param_1 + 0xc);
    uVar3 = operator|(0x10,8);
    FUN_05462470(auStack_178,uVar3);
    uVar4 = LogServer::Instance();
    std::string::string(asStack_190,"gemsuse_3");
    uVar4 = LogServer::AppendMsg(uVar4,asStack_190);
    Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::GetAccountName();
    uVar4 = LogServer::AppendMsg(uVar4,asStack_188);
    FUN_05475d88(asStack_180,this + 0x120);
    LogServer::AppendMsg(uVar4,asStack_180);
    std::string::~string(asStack_180);
    std::string::~string(asStack_188);
    std::string::~string(asStack_190);
    nop();
    std::string::string(asStack_180,"");
    FUN_05462980(auStack_178,asStack_180);
    std::string::~string(asStack_180);
    nop();
    FUN_0545ec84(auStack_168,param_1);
    FUN_0546065c(auStack_168,*(undefined4 *)(param_1 + 8));
    uVar4 = LogServer::Instance();
    FUN_05462824(asStack_180,auStack_178);
    LogServer::AppendMsg(uVar4,asStack_180);
    std::string::~string(asStack_180);
    std::string::string(asStack_180,"");
    FUN_05462980(auStack_178,asStack_180);
    std::string::~string(asStack_180);
    nop();
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    FUN_0546065c(auStack_168,iVar1 - param_2);
    uVar4 = LogServer::Instance();
    FUN_05462824(asStack_180,auStack_178);
    LogServer::AppendMsg(uVar4,asStack_180);
    std::string::~string(asStack_180);
    std::string::string(asStack_180,"");
    FUN_05462980(auStack_178,asStack_180);
    std::string::~string(asStack_180);
    nop();
    uVar3 = PlayerInfo::GetRechargeGems(this_01);
    FUN_0546065c(auStack_168,uVar3);
    uVar4 = LogServer::Instance();
    FUN_05462824(asStack_180,auStack_178);
    LogServer::AppendMsg(uVar4,asStack_180);
    std::string::~string(asStack_180);
    std::string::string(asStack_180,"");
    FUN_05462980(auStack_178,asStack_180);
    std::string::~string(asStack_180);
    nop();
    FUN_0546065c(auStack_168,param_2);
    uVar4 = LogServer::Instance();
    FUN_05462824(asStack_180,auStack_178);
    LogServer::AppendMsg(uVar4,asStack_180);
    std::string::~string(asStack_180);
    std::string::string(asStack_180,"");
    FUN_05462980(auStack_178,asStack_180);
    std::string::~string(asStack_180);
    nop();
    uVar3 = NewPVPMgr::GetSeasonEndTime((NewPVPMgr *)this_01);
    FUN_0546065c(auStack_168,uVar3);
    uVar4 = LogServer::Instance();
    FUN_05462824(asStack_180,auStack_178);
    LogServer::AppendMsg(uVar4,asStack_180);
    std::string::~string(asStack_180);
    this_02 = (Util *)LogServer::Instance();
    Android::Util::GetPackageName(this_02);
    LogServer::AppendMsg(this_02,asStack_180);
    std::string::~string(asStack_180);
    this_03 = (LogServer *)LogServer::Instance();
    LogServer::SendMsg(this_03);
    FUN_054617bc(auStack_178);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onGetDangerRoomLoot(int, int, std::vector<PlantInfo, std::allocator<PlantInfo>
   >&) */

void __thiscall
MetricsCollector::onGetDangerRoomLoot
          (MetricsCollector *this,int param_1,int param_2,vector *param_3)

{
  undefined4 uVar1;
  ProfileMgr *this_00;
  long lVar2;
  undefined4 *puVar3;
  ulong uVar4;
  LogServer *this_01;
  ulong uVar5;
  undefined8 uVar6;
  string asStack_188 [8];
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar2 = ProfileMgr::GetCurrentProfile(this_00);
  if (lVar2 != 0) {
    std::string::string(asStack_180,"dangerroomloot");
    AppendLogHead(this,asStack_180);
    std::string::~string(asStack_180);
    nop();
    uVar1 = operator|(0x10,8);
    FUN_05462470(auStack_178,uVar1);
    std::string::string(asStack_180,"");
    FUN_05462980(auStack_178,asStack_180);
    std::string::~string(asStack_180);
    nop();
    uVar5 = 0;
    while( true ) {
      uVar6 = *(undefined8 *)param_3;
      uVar4 = FUN_03eaaeb0(uVar6,*(undefined8 *)(param_3 + 8));
      if (uVar4 <= uVar5) break;
      puVar3 = (undefined4 *)FUN_03eaaec4(uVar6,uVar5);
      FUN_0546065c(auStack_168,*puVar3);
      FUN_054603b8(auStack_168,&DAT_055b4790);
      lVar2 = FUN_03eaaec4(*(undefined8 *)param_3,uVar5);
      thunk_FUN_054608e4(auStack_168,*(undefined1 *)(lVar2 + 8));
      FUN_054603b8(auStack_168,&DAT_05593348);
      uVar5 = uVar5 + 1;
    }
    uVar6 = LogServer::Instance();
    FUN_05462824(asStack_180,auStack_178);
    LogServer::AppendMsg(uVar6,asStack_180);
    std::string::~string(asStack_180);
    FUN_05462824(asStack_188,auStack_178);
    std::string::string(asStack_180,"");
    FUN_05462980(auStack_178,asStack_180);
    std::string::~string(asStack_180);
    nop();
    FUN_0546065c(auStack_168,param_2);
    uVar6 = LogServer::Instance();
    FUN_05462824(asStack_180,auStack_178);
    LogServer::AppendMsg(uVar6,asStack_180);
    std::string::~string(asStack_180);
    std::string::string(asStack_180,"");
    FUN_05462980(auStack_178,asStack_180);
    std::string::~string(asStack_180);
    nop();
    FUN_0546065c(auStack_168,param_1);
    uVar6 = LogServer::Instance();
    FUN_05462824(asStack_180,auStack_178);
    LogServer::AppendMsg(uVar6,asStack_180);
    std::string::~string(asStack_180);
    this_01 = (LogServer *)LogServer::Instance();
    LogServer::SendMsg(this_01);
    std::string::~string(asStack_188);
    FUN_054617bc(auStack_178);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onDangerRoomFinish(std::vector<PlantInfo, std::allocator<PlantInfo> >&, int,
   int) */

void __thiscall
MetricsCollector::onDangerRoomFinish(MetricsCollector *this,vector *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  ProfileMgr *this_00;
  long lVar2;
  undefined4 *puVar3;
  ulong uVar4;
  LogServer *this_01;
  ulong uVar5;
  undefined8 uVar6;
  string asStack_188 [8];
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar2 = ProfileMgr::GetCurrentProfile(this_00);
  if (lVar2 != 0) {
    std::string::string(asStack_180,"dangerroomfinish");
    AppendLogHead(this,asStack_180);
    std::string::~string(asStack_180);
    nop();
    uVar1 = operator|(0x10,8);
    FUN_05462470(auStack_178,uVar1);
    std::string::string(asStack_180,"");
    FUN_05462980(auStack_178,asStack_180);
    std::string::~string(asStack_180);
    nop();
    uVar5 = 0;
    while( true ) {
      uVar6 = *(undefined8 *)param_1;
      uVar4 = FUN_03eaaeb0(uVar6,*(undefined8 *)(param_1 + 8));
      if (uVar4 <= uVar5) break;
      puVar3 = (undefined4 *)FUN_03eaaec4(uVar6,uVar5);
      FUN_0546065c(auStack_168,*puVar3);
      FUN_054603b8(auStack_168,&DAT_055b4790);
      lVar2 = FUN_03eaaec4(*(undefined8 *)param_1,uVar5);
      FUN_0546065c(auStack_168,*(undefined4 *)(lVar2 + 4));
      FUN_054603b8(auStack_168,&DAT_055b4790);
      lVar2 = FUN_03eaaec4(*(undefined8 *)param_1,uVar5);
      thunk_FUN_054608e4(auStack_168,*(undefined1 *)(lVar2 + 8));
      FUN_054603b8(auStack_168,&DAT_05593348);
      uVar5 = uVar5 + 1;
    }
    uVar6 = LogServer::Instance();
    FUN_05462824(asStack_180,auStack_178);
    LogServer::AppendMsg(uVar6,asStack_180);
    std::string::~string(asStack_180);
    FUN_05462824(asStack_188,auStack_178);
    std::string::string(asStack_180,"");
    FUN_05462980(auStack_178,asStack_180);
    std::string::~string(asStack_180);
    nop();
    FUN_0546065c(auStack_168,param_2);
    uVar6 = LogServer::Instance();
    FUN_05462824(asStack_180,auStack_178);
    LogServer::AppendMsg(uVar6,asStack_180);
    std::string::~string(asStack_180);
    std::string::string(asStack_180,"");
    FUN_05462980(auStack_178,asStack_180);
    std::string::~string(asStack_180);
    nop();
    FUN_0546065c(auStack_168,param_3);
    uVar6 = LogServer::Instance();
    FUN_05462824(asStack_180,auStack_178);
    LogServer::AppendMsg(uVar6,asStack_180);
    std::string::~string(asStack_180);
    this_01 = (LogServer *)LogServer::Instance();
    LogServer::SendMsg(this_01);
    std::string::~string(asStack_188);
    FUN_054617bc(auStack_178);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onAvatarUnlockFragment(Sexy::RtWeakPtr<MagentoProductProps> const&, int) */

void __thiscall
MetricsCollector::onAvatarUnlockFragment(MetricsCollector *this,RtWeakPtr *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  MagentoProductProps *this_02;
  long lVar6;
  ActivityConfig *this_03;
  undefined8 uVar7;
  Util *this_04;
  LogServer *this_05;
  int iVar8;
  float fVar9;
  string asStack_198 [8];
  string asStack_190 [8];
  string asStack_188 [8];
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(param_1);
  if (bVar3) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    this_02 = (MagentoProductProps *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    fVar9 = (float)MagentoProductProps::GetPriceInUSD(this_02,false);
    uVar4 = operator|(0x10,8);
    FUN_05462470(auStack_178,uVar4);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    bVar3 = std::operator==("avatar",(string *)(lVar6 + 0x78));
    if (bVar3) {
      iVar8 = (int)fVar9;
      lVar6 = LawnApp::GetActivityConfig();
      if (lVar6 != 0) {
        this_03 = (ActivityConfig *)LawnApp::GetActivityConfig();
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
        iVar8 = ActivityConfig::GetActivityPrice(this_03,(string *)(lVar6 + 0x80),true,iVar8);
      }
      uVar7 = LogServer::Instance();
      std::string::string(asStack_198,"avatarunlock");
      uVar7 = LogServer::AppendMsg(uVar7,asStack_198);
      Sexy::LazySingleton<ProfileMgr>::GetInstance();
      ProfileMgr::GetAccountName();
      uVar7 = LogServer::AppendMsg(uVar7,asStack_190);
      FUN_05475d88(asStack_188,this + 0x120);
      uVar7 = LogServer::AppendMsg(uVar7,asStack_188);
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
      FUN_05475d88(asStack_180,lVar6 + 0x80);
      LogServer::AppendMsg(uVar7,asStack_180);
      std::string::~string(asStack_180);
      std::string::~string(asStack_188);
      std::string::~string(asStack_190);
      std::string::~string(asStack_198);
      nop();
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
      FUN_0546065c(auStack_168,*(undefined4 *)(lVar6 + 0x90));
      uVar7 = LogServer::Instance();
      FUN_05462824(asStack_180,auStack_178);
      LogServer::AppendMsg(uVar7,asStack_180);
      std::string::~string(asStack_180);
      std::string::string(asStack_180,"");
      FUN_05462980(auStack_178,asStack_180);
      std::string::~string(asStack_180);
      nop();
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
      iVar1 = *(int *)(lVar6 + 0x90);
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
      iVar5 = PlayerInfo::GetAvatarPiecesCount(this_01,lVar6 + 0x80,0,1);
      FUN_0546065c(auStack_168);
      uVar7 = LogServer::Instance();
      FUN_05462824(asStack_180,auStack_178);
      LogServer::AppendMsg(uVar7,asStack_180);
      std::string::~string(asStack_180);
      std::string::string(asStack_180,"");
      FUN_05462980(auStack_178,asStack_180);
      std::string::~string(asStack_180);
      nop();
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
      iVar2 = 0;
      if (*(int *)(lVar6 + 0x90) != 0) {
        iVar2 = (iVar8 * (iVar1 - iVar5)) / *(int *)(lVar6 + 0x90);
      }
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      FUN_0546065c(auStack_168,iVar2 - param_2);
      uVar7 = LogServer::Instance();
      FUN_05462824(asStack_180,auStack_178);
      LogServer::AppendMsg(uVar7,asStack_180);
      std::string::~string(asStack_180);
      std::string::string(asStack_180,"");
      FUN_05462980(auStack_178,asStack_180);
      std::string::~string(asStack_180);
      nop();
      uVar4 = PlayerInfo::GetRechargeGems(this_01);
      FUN_0546065c(auStack_168,uVar4);
      uVar7 = LogServer::Instance();
      FUN_05462824(asStack_180,auStack_178);
      LogServer::AppendMsg(uVar7,asStack_180);
      std::string::~string(asStack_180);
      std::string::string(asStack_180,"");
      FUN_05462980(auStack_178,asStack_180);
      std::string::~string(asStack_180);
      nop();
      FUN_0546065c(auStack_168,param_2);
      uVar7 = LogServer::Instance();
      FUN_05462824(asStack_180,auStack_178);
      LogServer::AppendMsg(uVar7,asStack_180);
      std::string::~string(asStack_180);
      std::string::string(asStack_180,"");
      FUN_05462980(auStack_178,asStack_180);
      std::string::~string(asStack_180);
      nop();
      uVar4 = NewPVPMgr::GetSeasonEndTime((NewPVPMgr *)this_01);
      FUN_0546065c(auStack_168,uVar4);
      uVar7 = LogServer::Instance();
      FUN_05462824(asStack_180,auStack_178);
      LogServer::AppendMsg(uVar7,asStack_180);
      std::string::~string(asStack_180);
      this_04 = (Util *)LogServer::Instance();
      Android::Util::GetPackageName(this_04);
      LogServer::AppendMsg(this_04,asStack_180);
      std::string::~string(asStack_180);
      this_05 = (LogServer *)LogServer::Instance();
      LogServer::SendMsg(this_05);
      FUN_054617bc(auStack_178);
    }
    else {
      FUN_054617bc(auStack_178);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onDLCRecord(int) */

void __thiscall MetricsCollector::onDLCRecord(MetricsCollector *this,int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  Util *this_00;
  LogServer *this_01;
  string asStack_190 [8];
  string asStack_188 [8];
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  FUN_0546065c(auStack_168,param_1);
  uVar2 = LogServer::Instance();
  std::string::string(asStack_190,"dlc_process");
  uVar2 = LogServer::AppendMsg(uVar2,asStack_190);
  Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetAccountName();
  uVar2 = LogServer::AppendMsg(uVar2,asStack_188);
  FUN_05475d88(asStack_180,this + 0x120);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::~string(asStack_188);
  std::string::~string(asStack_190);
  nop();
  this_00 = (Util *)LogServer::Instance();
  Android::Util::GetPackageName(this_00);
  LogServer::AppendMsg(this_00,asStack_180);
  std::string::~string(asStack_180);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  this_01 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_01);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onBirthdayZReward(int) */

void __thiscall MetricsCollector::onBirthdayZReward(MetricsCollector *this,int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  Util *this_00;
  LogServer *this_01;
  string asStack_190 [8];
  string asStack_188 [8];
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = LogServer::Instance();
  std::string::string(asStack_190,"birthdayz_rd");
  uVar2 = LogServer::AppendMsg(uVar2,asStack_190);
  Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetAccountName();
  uVar2 = LogServer::AppendMsg(uVar2,asStack_188);
  FUN_05475d88(asStack_180,this + 0x120);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::~string(asStack_188);
  std::string::~string(asStack_190);
  nop();
  this_00 = (Util *)LogServer::Instance();
  Android::Util::GetPackageName(this_00);
  LogServer::AppendMsg(this_00,asStack_180);
  std::string::~string(asStack_180);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,param_1);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  this_01 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_01);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onBirthdayZFinish(bool) */

void __thiscall MetricsCollector::onBirthdayZFinish(MetricsCollector *this,bool param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  Util *this_00;
  LogServer *this_01;
  string asStack_190 [8];
  string asStack_188 [8];
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = LogServer::Instance();
  std::string::string(asStack_190,"birthdayz_win_or_loss");
  uVar2 = LogServer::AppendMsg(uVar2,asStack_190);
  Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetAccountName();
  uVar2 = LogServer::AppendMsg(uVar2,asStack_188);
  FUN_05475d88(asStack_180,this + 0x120);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::~string(asStack_188);
  std::string::~string(asStack_190);
  nop();
  this_00 = (Util *)LogServer::Instance();
  Android::Util::GetPackageName(this_00);
  LogServer::AppendMsg(this_00,asStack_180);
  std::string::~string(asStack_180);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  thunk_FUN_054608e4(auStack_168,param_1);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  this_01 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_01);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onPlantAdventure(int, PlantAdventureLogInfo const&) */

void __thiscall
MetricsCollector::onPlantAdventure
          (MetricsCollector *this,int param_1,PlantAdventureLogInfo *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  Util *this_00;
  LogServer *this_01;
  string asStack_190 [8];
  string asStack_188 [8];
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = LogServer::Instance();
  std::string::string(asStack_190,"plant_adventure");
  uVar2 = LogServer::AppendMsg(uVar2,asStack_190);
  Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetAccountName();
  uVar2 = LogServer::AppendMsg(uVar2,asStack_188);
  FUN_05475d88(asStack_180,this + 0x120);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::~string(asStack_188);
  std::string::~string(asStack_190);
  nop();
  this_00 = (Util *)LogServer::Instance();
  Android::Util::GetPackageName(this_00);
  LogServer::AppendMsg(this_00,asStack_180);
  std::string::~string(asStack_180);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,param_1);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,*(undefined4 *)param_2);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,*(undefined4 *)(param_2 + 4));
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,*(undefined4 *)(param_2 + 8));
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,*(undefined4 *)(param_2 + 0xc));
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  this_01 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_01);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onActiveProtectFinish(int, int) */

void __thiscall
MetricsCollector::onActiveProtectFinish(MetricsCollector *this,int param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  Util *this_00;
  LogServer *this_01;
  string asStack_190 [8];
  string asStack_188 [8];
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = LogServer::Instance();
  std::string::string(asStack_190,"ActiveProtect");
  uVar2 = LogServer::AppendMsg(uVar2,asStack_190);
  Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetAccountName();
  uVar2 = LogServer::AppendMsg(uVar2,asStack_188);
  FUN_05475d88(asStack_180,this + 0x120);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::~string(asStack_188);
  std::string::~string(asStack_190);
  nop();
  this_00 = (Util *)LogServer::Instance();
  Android::Util::GetPackageName(this_00);
  LogServer::AppendMsg(this_00,asStack_180);
  std::string::~string(asStack_180);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,param_1);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,param_2);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  this_01 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_01);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onActiveNewYearFinish(int, std::string const&) */

void __thiscall
MetricsCollector::onActiveNewYearFinish(MetricsCollector *this,int param_1,string *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  Util *this_00;
  LogServer *this_01;
  string asStack_190 [8];
  string asStack_188 [8];
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = LogServer::Instance();
  std::string::string(asStack_190,"ActiveNewYear");
  uVar2 = LogServer::AppendMsg(uVar2,asStack_190);
  Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetAccountName();
  uVar2 = LogServer::AppendMsg(uVar2,asStack_188);
  FUN_05475d88(asStack_180,this + 0x120);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::~string(asStack_188);
  std::string::~string(asStack_190);
  nop();
  this_00 = (Util *)LogServer::Instance();
  Android::Util::GetPackageName(this_00);
  LogServer::AppendMsg(this_00,asStack_180);
  std::string::~string(asStack_180);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,param_1);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0545ec84(auStack_168,param_2);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  this_01 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_01);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onDailyAccessoryBonusFinish(int) */

void __thiscall MetricsCollector::onDailyAccessoryBonusFinish(MetricsCollector *this,int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  Util *this_00;
  LogServer *this_01;
  string asStack_190 [8];
  string asStack_188 [8];
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = LogServer::Instance();
  std::string::string(asStack_190,"DailyAccessoryBonus");
  uVar2 = LogServer::AppendMsg(uVar2,asStack_190);
  Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetAccountName();
  uVar2 = LogServer::AppendMsg(uVar2,asStack_188);
  FUN_05475d88(asStack_180,this + 0x120);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::~string(asStack_188);
  std::string::~string(asStack_190);
  nop();
  this_00 = (Util *)LogServer::Instance();
  Android::Util::GetPackageName(this_00);
  LogServer::AppendMsg(this_00,asStack_180);
  std::string::~string(asStack_180);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,param_1);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  this_01 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_01);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::LogPvpLogin(long) */

void __thiscall MetricsCollector::LogPvpLogin(MetricsCollector *this,long param_1)

{
  undefined4 uVar1;
  ProfileMgr *this_00;
  NetworkMgr *this_01;
  undefined8 uVar2;
  LogServer *this_02;
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_180,"PvpLogLogin");
  AppendLogHead(this,asStack_180);
  std::string::~string(asStack_180);
  nop();
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  this_01 = (NetworkMgr *)NetworkMgr::Instance();
  NetworkMgr::GetNewNetWorkProcess(this_01);
  Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
  FUN_0545ec84(auStack_168,asStack_180);
  std::string::~string(asStack_180);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  thunk_FUN_05460424(auStack_168,param_1);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  this_02 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_02);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::LogPvpLoadTime(std::string const&, long) */

void __thiscall
MetricsCollector::LogPvpLoadTime(MetricsCollector *this,string *param_1,long param_2)

{
  undefined4 uVar1;
  ProfileMgr *this_00;
  NetworkMgr *this_01;
  undefined8 uVar2;
  LogServer *this_02;
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_180,"PvpLogLoadTime");
  AppendLogHead(this,asStack_180);
  std::string::~string(asStack_180);
  nop();
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  this_01 = (NetworkMgr *)NetworkMgr::Instance();
  NetworkMgr::GetNewNetWorkProcess(this_01);
  Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
  FUN_0545ec84(auStack_168,asStack_180);
  std::string::~string(asStack_180);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  uVar2 = LogServer::Instance();
  FUN_05475d88(asStack_180,param_1);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  thunk_FUN_05460424(auStack_168,param_2);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  this_02 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_02);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::LogPvpGuideComplete(int) */

void __thiscall MetricsCollector::LogPvpGuideComplete(MetricsCollector *this,int param_1)

{
  undefined4 uVar1;
  ProfileMgr *this_00;
  NetworkMgr *this_01;
  undefined8 uVar2;
  LogServer *this_02;
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_180,"PvpGuideComplete");
  AppendLogHead(this,asStack_180);
  std::string::~string(asStack_180);
  nop();
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  this_01 = (NetworkMgr *)NetworkMgr::Instance();
  NetworkMgr::GetNewNetWorkProcess(this_01);
  Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
  FUN_0545ec84(auStack_168,asStack_180);
  std::string::~string(asStack_180);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,param_1);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  this_02 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_02);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::LogPvpNetError(long) */

void __thiscall MetricsCollector::LogPvpNetError(MetricsCollector *this,long param_1)

{
  undefined4 uVar1;
  ProfileMgr *this_00;
  NetworkMgr *this_01;
  undefined8 uVar2;
  LogServer *this_02;
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_180,"PvpNetError");
  AppendLogHead(this,asStack_180);
  std::string::~string(asStack_180);
  nop();
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  this_01 = (NetworkMgr *)NetworkMgr::Instance();
  NetworkMgr::GetNewNetWorkProcess(this_01);
  Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
  FUN_0545ec84(auStack_168,asStack_180);
  std::string::~string(asStack_180);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  thunk_FUN_05460424(auStack_168,param_1);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  this_02 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_02);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::LogPvpBuyItem(int, int) */

void __thiscall MetricsCollector::LogPvpBuyItem(MetricsCollector *this,int param_1,int param_2)

{
  undefined4 uVar1;
  ProfileMgr *this_00;
  NetworkMgr *this_01;
  undefined8 uVar2;
  LogServer *this_02;
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_180,"PvpBuyItem");
  AppendLogHead(this,asStack_180);
  std::string::~string(asStack_180);
  nop();
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  this_01 = (NetworkMgr *)NetworkMgr::Instance();
  NetworkMgr::GetNewNetWorkProcess(this_01);
  Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
  FUN_0545ec84(auStack_168,asStack_180);
  std::string::~string(asStack_180);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,param_1);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,param_2);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  this_02 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_02);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::LogPvpRefreshStore(int) */

void __thiscall MetricsCollector::LogPvpRefreshStore(MetricsCollector *this,int param_1)

{
  undefined4 uVar1;
  ProfileMgr *this_00;
  NetworkMgr *this_01;
  undefined8 uVar2;
  LogServer *this_02;
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_180,"PvpRefreshStore");
  AppendLogHead(this,asStack_180);
  std::string::~string(asStack_180);
  nop();
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  this_01 = (NetworkMgr *)NetworkMgr::Instance();
  NetworkMgr::GetNewNetWorkProcess(this_01);
  Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
  FUN_0545ec84(auStack_168,asStack_180);
  std::string::~string(asStack_180);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,param_1);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  this_02 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_02);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::ClearPlantMetricsUsedTimes() */

void __thiscall MetricsCollector::ClearPlantMetricsUsedTimes(MetricsCollector *this)

{
  bool bVar1;
  long lVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0xd8));
  while( true ) {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0xd8));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    *(undefined4 *)(lVar2 + 0xc) = 0;
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onStartNewVersionGame() */

void __thiscall MetricsCollector::onStartNewVersionGame(MetricsCollector *this)

{
  undefined4 uVar1;
  DefineIDMgr *this_00;
  ulong uVar2;
  undefined8 uVar3;
  LogServer *this_01;
  ulong uVar4;
  string asStack_190 [8];
  string asStack_188 [8];
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_180,"game_start");
  AppendLogHead(this,asStack_180);
  std::string::~string(asStack_180);
  nop();
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  this_00 = (DefineIDMgr *)Sexy::LazySingleton<DefineIDMgr>::GetInstance();
  DefineIDMgr::GetNewUserDefineID(this_00);
  Set8BytesTo0(asStack_188);
  uVar4 = 0;
  while( true ) {
    uVar2 = FUN_05474184(asStack_190);
    if (uVar2 <= uVar4) break;
    FUN_05475884(asStack_188,asStack_190,uVar4,4);
    FUN_05475b0c(asStack_188,1,0x20);
    uVar4 = uVar4 + 4;
  }
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0545ec84(auStack_168,asStack_188);
  uVar3 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar3,asStack_180);
  std::string::~string(asStack_180);
  this_01 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_01);
  std::string::~string(asStack_188);
  std::string::~string(asStack_190);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onLoadingComplete() */

void __thiscall MetricsCollector::onLoadingComplete(MetricsCollector *this)

{
  undefined4 uVar1;
  DefineIDMgr *this_00;
  ulong uVar2;
  undefined8 uVar3;
  time_t tVar4;
  long lVar5;
  LogServer *this_01;
  ulong uVar6;
  string asStack_190 [8];
  string asStack_188 [8];
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_180,"loading_finish");
  AppendLogHead(this,asStack_180);
  std::string::~string(asStack_180);
  nop();
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  this_00 = (DefineIDMgr *)Sexy::LazySingleton<DefineIDMgr>::GetInstance();
  DefineIDMgr::GetNewUserDefineID(this_00);
  Set8BytesTo0(asStack_188);
  uVar6 = 0;
  while( true ) {
    uVar2 = FUN_05474184(asStack_190);
    if (uVar2 <= uVar6) break;
    FUN_05475884(asStack_188,asStack_190,uVar6,4);
    FUN_05475b0c(asStack_188,1,0x20);
    uVar6 = uVar6 + 4;
  }
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0545ec84(auStack_168,asStack_188);
  uVar3 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar3,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  tVar4 = time((time_t *)0x0);
  lVar5 = LawnApp::GetStartLoadingTime(gLawnApp);
  thunk_FUN_05460424(auStack_168,tVar4 - lVar5);
  uVar3 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar3,asStack_180);
  std::string::~string(asStack_180);
  this_01 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_01);
  std::string::~string(asStack_188);
  std::string::~string(asStack_190);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::LogPvpBattleReslut(std::string const&, int, long, bool, bool, bool, int,
   std::vector<ZombieRecord, std::allocator<ZombieRecord> > const&, std::vector<PvpPlantLostRecord,
   std::allocator<PvpPlantLostRecord> > const&, int, int) */

void __thiscall
MetricsCollector::LogPvpBattleReslut
          (MetricsCollector *this,string *param_1,int param_2,long param_3,bool param_4,bool param_5
          ,bool param_6,int param_7,vector *param_8,vector *param_9,int param_10,int param_11)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ProfileMgr *this_00;
  NetworkMgr *this_01;
  ZombieInfo *pZVar5;
  long lVar6;
  GroupInfo *pGVar7;
  LogServer *this_02;
  string asStack_1a8 [8];
  string asStack_1a0 [8];
  undefined8 local_198;
  undefined8 local_190;
  string asStack_188 [8];
  undefined4 local_180;
  undefined4 local_17c;
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_188,"PvpBattleReslut");
  AppendLogHead(this,asStack_188);
  std::string::~string(asStack_188);
  nop();
  uVar4 = LogServer::Instance();
  FUN_05475d88(asStack_188,param_1);
  LogServer::AppendMsg(uVar4,asStack_188);
  std::string::~string(asStack_188);
  uVar3 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar3);
  std::string::string(asStack_188,"");
  FUN_05462980(auStack_178,asStack_188);
  std::string::~string(asStack_188);
  nop();
  *(int *)(this + 0x128) = *(int *)(this + 0x128) + 1;
  FUN_0546065c(auStack_168);
  uVar4 = LogServer::Instance();
  FUN_05462824(asStack_188,auStack_178);
  LogServer::AppendMsg(uVar4,asStack_188);
  std::string::~string(asStack_188);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  std::string::string(asStack_188,"");
  FUN_05462980(auStack_178,asStack_188);
  std::string::~string(asStack_188);
  nop();
  thunk_FUN_05460424(auStack_168,param_3);
  uVar4 = LogServer::Instance();
  FUN_05462824(asStack_188,auStack_178);
  LogServer::AppendMsg(uVar4,asStack_188);
  std::string::~string(asStack_188);
  std::string::string(asStack_188,"");
  FUN_05462980(auStack_178,asStack_188);
  std::string::~string(asStack_188);
  nop();
  this_01 = (NetworkMgr *)NetworkMgr::Instance();
  NetworkMgr::GetNewNetWorkProcess(this_01);
  Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
  FUN_0545ec84(auStack_168,asStack_188);
  std::string::~string(asStack_188);
  uVar4 = LogServer::Instance();
  FUN_05462824(asStack_188,auStack_178);
  LogServer::AppendMsg(uVar4,asStack_188);
  std::string::~string(asStack_188);
  FUN_05462824(asStack_1a8,auStack_178);
  std::string::string(asStack_188,"");
  FUN_05462980(auStack_178,asStack_188);
  std::string::~string(asStack_188);
  nop();
  FUN_0546065c(auStack_168,param_2);
  uVar4 = LogServer::Instance();
  FUN_05462824(asStack_188,auStack_178);
  LogServer::AppendMsg(uVar4,asStack_188);
  std::string::~string(asStack_188);
  std::string::string(asStack_188,"");
  FUN_05462980(auStack_178,asStack_188);
  std::string::~string(asStack_188);
  nop();
  thunk_FUN_054608e4(auStack_168,param_4);
  uVar4 = LogServer::Instance();
  FUN_05462824(asStack_188,auStack_178);
  LogServer::AppendMsg(uVar4,asStack_188);
  std::string::~string(asStack_188);
  std::string::string(asStack_188,"");
  FUN_05462980(auStack_178,asStack_188);
  std::string::~string(asStack_188);
  nop();
  thunk_FUN_054608e4(auStack_168,param_5);
  uVar4 = LogServer::Instance();
  FUN_05462824(asStack_188,auStack_178);
  LogServer::AppendMsg(uVar4,asStack_188);
  std::string::~string(asStack_188);
  std::string::string(asStack_188,"");
  FUN_05462980(auStack_178,asStack_188);
  std::string::~string(asStack_188);
  nop();
  thunk_FUN_054608e4(auStack_168,param_6);
  uVar4 = LogServer::Instance();
  FUN_05462824(asStack_188,auStack_178);
  LogServer::AppendMsg(uVar4,asStack_188);
  std::string::~string(asStack_188);
  std::string::string(asStack_188,"");
  FUN_05462980(auStack_178,asStack_188);
  std::string::~string(asStack_188);
  nop();
  FUN_0546065c(auStack_168,param_7);
  uVar4 = LogServer::Instance();
  FUN_05462824(asStack_188,auStack_178);
  LogServer::AppendMsg(uVar4,asStack_188);
  std::string::~string(asStack_188);
  std::string::string(asStack_188,"");
  FUN_05462980(auStack_178,asStack_188);
  std::string::~string(asStack_188);
  nop();
  local_198 = FUN_03eba488(*(undefined8 *)param_8);
  local_190 = FUN_03eba4d8(*(undefined8 *)(param_8 + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_198,(__normal_iterator *)&local_190), bVar1)
  {
    pZVar5 = (ZombieInfo *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_198);
    FishingModule::ZombieInfo::ZombieInfo((ZombieInfo *)asStack_188,pZVar5);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_188);
    if (cVar2 != '\0') {
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_188)
      ;
      FUN_0545ec84(auStack_168,lVar6 + 8);
      FUN_054603b8(auStack_168,&DAT_05593348);
      FUN_0546065c(auStack_168,local_17c);
      FUN_054603b8(auStack_168,&DAT_05593348);
      FUN_0546065c(auStack_168,local_180);
      FUN_054603b8(auStack_168,&DAT_05594620);
    }
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)asStack_188);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_198);
  }
  uVar4 = LogServer::Instance();
  FUN_05462824(asStack_188,auStack_178);
  LogServer::AppendMsg(uVar4,asStack_188);
  std::string::~string(asStack_188);
  FUN_05462824(asStack_1a0,auStack_178);
  std::string::string(asStack_188,"");
  FUN_05462980(auStack_178,asStack_188);
  std::string::~string(asStack_188);
  nop();
  local_198 = FUN_03eba528(*(undefined8 *)param_9);
  local_190 = FUN_03eba578(*(undefined8 *)(param_9 + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_198,(__normal_iterator *)&local_190), bVar1)
  {
    pGVar7 = (GroupInfo *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_198);
    Sexy::ResStreamsUnpacker::GroupInfo::GroupInfo((GroupInfo *)asStack_188,pGVar7);
    FUN_0545ec84(auStack_168,asStack_188);
    FUN_054603b8(auStack_168,&DAT_05593348);
    FUN_0546065c(auStack_168,local_17c);
    FUN_054603b8(auStack_168,&DAT_05593348);
    FUN_0546065c(auStack_168,local_180);
    FUN_054603b8(auStack_168,&DAT_05594620);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)asStack_188);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_198);
  }
  uVar4 = LogServer::Instance();
  FUN_05462824(asStack_188,auStack_178);
  LogServer::AppendMsg(uVar4,asStack_188);
  std::string::~string(asStack_188);
  FUN_05462824((string *)&local_190,auStack_178);
  std::string::string(asStack_188,"");
  FUN_05462980(auStack_178,asStack_188);
  std::string::~string(asStack_188);
  nop();
  FUN_0546065c(auStack_168,param_10);
  uVar4 = LogServer::Instance();
  FUN_05462824(asStack_188,auStack_178);
  LogServer::AppendMsg(uVar4,asStack_188);
  std::string::~string(asStack_188);
  std::string::string(asStack_188,"");
  FUN_05462980(auStack_178,asStack_188);
  std::string::~string(asStack_188);
  nop();
  FUN_0546065c(auStack_168,param_11);
  uVar4 = LogServer::Instance();
  FUN_05462824(asStack_188,auStack_178);
  LogServer::AppendMsg(uVar4,asStack_188);
  std::string::~string(asStack_188);
  this_02 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_02);
  std::string::~string((string *)&local_190);
  std::string::~string(asStack_1a0);
  std::string::~string(asStack_1a8);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::registerEventsWithLawnApp() */

void __thiscall MetricsCollector::registerEventsWithLawnApp(MetricsCollector *this)

{
  undefined *puVar1;
  undefined8 local_1390;
  undefined8 uStack_1388;
  undefined8 local_1380;
  undefined1 local_1370 [16];
  undefined8 local_1360;
  undefined8 local_1350;
  undefined8 uStack_1348;
  undefined8 local_1340;
  undefined8 local_1330;
  undefined8 uStack_1328;
  undefined8 local_1320;
  undefined8 local_1310;
  undefined8 uStack_1308;
  undefined8 local_1300;
  undefined8 local_12f0;
  undefined8 uStack_12e8;
  undefined8 local_12e0;
  undefined1 local_12d0 [32];
  undefined8 local_12b0;
  undefined8 uStack_12a8;
  undefined8 local_12a0;
  undefined8 local_1290;
  undefined8 uStack_1288;
  undefined8 local_1280;
  undefined8 local_1270;
  undefined8 uStack_1268;
  undefined8 local_1260;
  undefined8 local_1250;
  undefined8 uStack_1248;
  undefined8 local_1240;
  undefined8 local_1230;
  undefined8 uStack_1228;
  undefined8 local_1220;
  undefined8 local_1210;
  undefined8 uStack_1208;
  undefined8 local_1200;
  undefined8 local_11f0;
  undefined8 uStack_11e8;
  undefined8 local_11e0;
  undefined8 local_11d0;
  undefined8 uStack_11c8;
  undefined8 local_11c0;
  undefined8 local_11b0;
  undefined8 uStack_11a8;
  undefined8 local_11a0;
  undefined8 local_1190;
  undefined8 uStack_1188;
  undefined8 local_1180;
  undefined8 local_1170;
  undefined8 uStack_1168;
  undefined8 local_1160;
  undefined8 local_1150;
  undefined8 uStack_1148;
  undefined8 local_1140;
  undefined8 local_1130;
  undefined8 uStack_1128;
  undefined8 local_1120;
  undefined1 local_1110 [32];
  undefined1 local_10f0 [32];
  undefined1 local_10d0 [32];
  undefined1 local_10b0 [32];
  undefined1 local_1090 [32];
  undefined8 local_1070;
  undefined8 uStack_1068;
  undefined8 local_1060;
  undefined1 local_1050 [32];
  undefined8 local_1030;
  undefined8 uStack_1028;
  undefined8 local_1020;
  undefined1 local_1010 [32];
  undefined1 local_ff0 [32];
  undefined1 local_fd0 [32];
  undefined1 local_fb0 [32];
  undefined1 local_f90 [32];
  undefined8 local_f70;
  undefined8 uStack_f68;
  undefined8 local_f60;
  undefined8 local_f50;
  undefined8 uStack_f48;
  undefined8 local_f40;
  undefined1 local_f30 [32];
  undefined1 local_f10 [32];
  undefined8 local_ef0;
  undefined8 uStack_ee8;
  undefined8 local_ee0;
  undefined1 local_ed0 [32];
  undefined1 local_eb0 [32];
  undefined8 local_e90;
  undefined8 uStack_e88;
  undefined8 local_e80;
  undefined1 local_e70 [32];
  undefined1 local_e50 [32];
  undefined8 local_e30;
  undefined8 uStack_e28;
  undefined8 local_e20;
  undefined1 local_e10 [32];
  undefined8 local_df0;
  undefined8 uStack_de8;
  undefined8 local_de0;
  undefined8 local_dd0;
  undefined8 uStack_dc8;
  undefined8 local_dc0;
  undefined8 local_db0;
  undefined8 uStack_da8;
  undefined8 local_da0;
  undefined8 local_d90;
  undefined8 uStack_d88;
  undefined8 local_d80;
  undefined1 local_d70 [32];
  undefined8 local_d50;
  undefined8 uStack_d48;
  undefined8 local_d40;
  undefined8 local_d30;
  undefined8 uStack_d28;
  undefined8 local_d20;
  undefined8 local_d10;
  undefined8 uStack_d08;
  undefined8 local_d00;
  undefined8 local_cf8;
  undefined8 uStack_cf0;
  undefined8 local_ce8;
  undefined8 local_c98;
  undefined8 uStack_c90;
  undefined8 local_c88;
  undefined8 local_c80;
  undefined8 uStack_c78;
  undefined8 local_c70;
  undefined8 local_c68;
  undefined8 uStack_c60;
  undefined8 local_c58;
  undefined8 local_bd8;
  undefined8 uStack_bd0;
  undefined8 local_bc8;
  undefined8 local_bc0;
  undefined8 uStack_bb8;
  undefined8 local_bb0;
  undefined8 local_b78;
  undefined8 uStack_b70;
  undefined8 local_b68;
  undefined8 local_b48;
  undefined8 uStack_b40;
  undefined8 local_b38;
  undefined8 local_a10;
  undefined8 uStack_a08;
  undefined8 local_a00;
  undefined8 local_9f8;
  undefined8 uStack_9f0;
  undefined8 local_9e8;
  undefined8 local_9e0;
  undefined8 uStack_9d8;
  undefined8 local_9d0;
  undefined8 local_980;
  undefined8 uStack_978;
  undefined8 local_970;
  undefined8 local_908;
  undefined8 uStack_900;
  undefined8 local_8f8;
  undefined8 local_680;
  undefined8 uStack_678;
  undefined8 local_670;
  undefined8 local_668;
  undefined8 uStack_660;
  undefined8 local_658;
  undefined8 local_650;
  undefined8 uStack_648;
  undefined8 local_640;
  undefined8 local_638;
  undefined8 uStack_630;
  undefined8 local_628;
  undefined8 local_620;
  undefined8 uStack_618;
  undefined8 local_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined8 local_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined8 local_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined8 local_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 local_530;
  undefined8 uStack_528;
  undefined8 local_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLevelStart);
  Sexy::Delegate0::Delegate0<MetricsCollector,void(MetricsCollector::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::LevelStarting,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLevelStart);
  Sexy::Delegate0::Delegate0<MetricsCollector,void(MetricsCollector::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::StartGameButtonPressed,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLevelEnd);
  Sexy::Delegate0::Delegate0<MetricsCollector,void(MetricsCollector::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::MissionFinish,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onItemLogin);
  Sexy::Delegate0::Delegate0<MetricsCollector,void(MetricsCollector::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ItemLogin,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSunSpawned);
  local_d30 = local_d10;
  uStack_d28 = uStack_d08;
  local_d20 = local_d00;
  MessageRouter::
  Subscribe<CollectableSun*,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(CollectableSun*)>>
            ((MessageRouter *)puVar1,Message::SunSpawnedFromSky,&local_d30);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSunSpawned);
  local_d30 = local_cf8;
  uStack_d28 = uStack_cf0;
  local_d20 = local_ce8;
  MessageRouter::
  Subscribe<CollectableSun*,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(CollectableSun*)>>
            ((MessageRouter *)puVar1,Message::SunProducedByPlant,&local_d30);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSunProducedByShovel);
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int)>>
            ((MessageRouter *)puVar1,Message::SunProducedByShovel,&local_d50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSunClicked);
  MessageRouter::
  Subscribe<CollectableSun*,int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(CollectableSun*,int)>>
            ((MessageRouter *)puVar1,Message::SunClicked,local_d70);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSunSpent);
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int)>>
            ((MessageRouter *)puVar1,Message::SunSpent,&local_d50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantfoodSpawned);
  local_d90 = local_c98;
  uStack_d88 = uStack_c90;
  local_d80 = local_c88;
  MessageRouter::
  Subscribe<CollectablePlantfood*,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(CollectablePlantfood*)>>
            ((MessageRouter *)puVar1,Message::PlantfoodSpawned,&local_d90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantfoodGrabbed);
  local_d90 = local_c80;
  uStack_d88 = uStack_c78;
  local_d80 = local_c70;
  MessageRouter::
  Subscribe<CollectablePlantfood*,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(CollectablePlantfood*)>>
            ((MessageRouter *)puVar1,Message::PlantfoodGrabbed,&local_d90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantfoodGrabbedWhenFull);
  local_d90 = local_c68;
  uStack_d88 = uStack_c60;
  local_d80 = local_c58;
  MessageRouter::
  Subscribe<CollectablePlantfood*,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(CollectablePlantfood*)>>
            ((MessageRouter *)puVar1,Message::PlantfoodGrabbedWhenFull,&local_d90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantfoodPurchased);
  MessageRouter::
  Subscribe<std::string_const&,int,int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(std::string_const&,int,int)>>
            ((MessageRouter *)puVar1,Message::PlantfoodPurchased,&local_db0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onMissinGemUse);
  MessageRouter::
  Subscribe<std::string_const&,int,int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(std::string_const&,int,int)>>
            ((MessageRouter *)puVar1,Message::MissionGemUse,&local_db0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onChargePay);
  MessageRouter::
  Subscribe<std::string_const&,int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(std::string_const&,int)>>
            ((MessageRouter *)puVar1,Message::ChargePay,&local_dd0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onOpenUI);
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(std::string_const&)>>
            ((MessageRouter *)puVar1,Message::OpenUI,&local_df0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGetReward);
  MessageRouter::
  Subscribe<std::string_const&,std::string_const&,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(std::string_const&,std::string_const&)>>
            ((MessageRouter *)puVar1,Message::GetReward,local_e10);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantPlanted);
  local_e20 = local_bc8;
  local_e30 = local_bd8;
  uStack_e28 = uStack_bd0;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantPlanted,&local_e30);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantDied);
  local_e30 = local_bc0;
  uStack_e28 = uStack_bb8;
  local_e20 = local_bb0;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDied,&local_e30);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantDamageTaken);
  MessageRouter::
  Subscribe<Plant*,DamageInfo&,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(Plant*,DamageInfo&)>>
            ((MessageRouter *)puVar1,Message::PlantDamageTaken,local_e50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCoinSpawned);
  MessageRouter::
  Subscribe<CollectableCoin*,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(CollectableCoin*)>>
            ((MessageRouter *)puVar1,Message::CoinCurrencySpawned,local_e70);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCoinClicked);
  local_e80 = local_b68;
  local_e90 = local_b78;
  uStack_e88 = uStack_b70;
  MessageRouter::
  Subscribe<Collectable*,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(Collectable*)>>
            ((MessageRouter *)puVar1,Message::CollectableCollectionStarted,&local_e90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPowerupActivated);
  MessageRouter::
  Subscribe<BasePowerup*,int,int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(BasePowerup*,int,int)>>
            ((MessageRouter *)puVar1,Message::PowerupActivated,local_eb0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onKeyClicked);
  local_e90 = local_b48;
  uStack_e88 = uStack_b40;
  local_e80 = local_b38;
  MessageRouter::
  Subscribe<Collectable*,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(Collectable*)>>
            ((MessageRouter *)puVar1,Message::CollectableCollectionStarted,&local_e90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPowerupEquipped);
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(std::string_const&)>>
            ((MessageRouter *)puVar1,Message::PowerupEquipped,&local_df0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onYetiSpawned);
  Sexy::Delegate0::Delegate0<MetricsCollector,void(MetricsCollector::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::TreasureYetiSpawned,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onYetiSpawned);
  Sexy::Delegate0::Delegate0<MetricsCollector,void(MetricsCollector::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::FirstTreasureYetiSpawned,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onYetiDefeated);
  Sexy::Delegate0::Delegate0<MetricsCollector,void(MetricsCollector::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::TreasureYetiDefeated,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnFake);
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int)>>
            ((MessageRouter *)puVar1,Message::Fake,&local_d50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRechargeLog);
  MessageRouter::
  Subscribe<Sexy::RtWeakPtr<MagentoProductProps>const&,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(Sexy::RtWeakPtr<MagentoProductProps>const&)>>
            ((MessageRouter *)puVar1,Message::RechargeLog,local_ed0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRechargeLogWithSalesUiReward);
  MessageRouter::
  Subscribe<Sexy::RtWeakPtr<MagentoProductProps>const&,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(Sexy::RtWeakPtr<MagentoProductProps>const&)>>
            ((MessageRouter *)puVar1,Message::RechargeLogWithSalesUiReward,local_ed0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRechargeLogWithSalesUiReward2);
  Sexy::Delegate0::Delegate0<MetricsCollector,void(MetricsCollector::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::RechargeLogWithSalesUiReward2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRechargeForCukePackage);
  MessageRouter::
  Subscribe<Sexy::RtWeakPtr<MagentoProductProps>const&,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(Sexy::RtWeakPtr<MagentoProductProps>const&)>>
            ((MessageRouter *)puVar1,Message::RechargeForCukePackage,local_ed0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAndroidSDKInit);
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::AndroidSDKInit,&local_ef0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAndroidSDKLogin);
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::AndroidSDKLogin,&local_ef0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAddPlantSalesUiReward);
  MessageRouter::
  Subscribe<PlantSalesUiReward_const&,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(PlantSalesUiReward_const&)>>
            ((MessageRouter *)puVar1,Message::AddPlantSalesUiReward,local_f10);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGetGachaUseGems);
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::GetGachaUseGems,&local_ef0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onWorldmapLoaded);
  Sexy::Delegate0::Delegate0<MetricsCollector,void(MetricsCollector::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::WorldMapLoadComplete,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSessionStart);
  Sexy::Delegate0::Delegate0<MetricsCollector,void(MetricsCollector::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::StartButtonPressed,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRealGameStart);
  Sexy::Delegate0::Delegate0<MetricsCollector,void(MetricsCollector::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::RealGameStart,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTutori);
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::Toturi,&local_ef0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameStart);
  Sexy::Delegate0::Delegate0<MetricsCollector,void(MetricsCollector::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameStart,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLineUnlock);
  MessageRouter::
  Subscribe<MapEventItem_const*,std::string&,int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(MapEventItem_const*,std::string&,int)>>
            ((MessageRouter *)puVar1,Message::LineUnlock,local_f30);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTutoriGuidIgnore);
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int)>>
            ((MessageRouter *)puVar1,Message::ToturiIgnore,&local_d50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantUnlockFragment);
  local_f40 = local_a00;
  local_f50 = local_a10;
  uStack_f48 = uStack_a08;
  MessageRouter::
  Subscribe<Sexy::RtWeakPtr<MagentoProductProps>const&,int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(Sexy::RtWeakPtr<MagentoProductProps>const&,int)>>
            ((MessageRouter *)puVar1,Message::PlantUnlockFragment,&local_f50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAvatarUnlockFragment);
  local_f40 = local_9e8;
  local_f50 = local_9f8;
  uStack_f48 = uStack_9f0;
  MessageRouter::
  Subscribe<Sexy::RtWeakPtr<MagentoProductProps>const&,int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(Sexy::RtWeakPtr<MagentoProductProps>const&,int)>>
            ((MessageRouter *)puVar1,Message::AvatarPiecesAdd,&local_f50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCoinsuse);
  local_f60 = local_9d0;
  local_f70 = local_9e0;
  uStack_f68 = uStack_9d8;
  MessageRouter::
  Subscribe<int,std::string_const&,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int,std::string_const&)>>
            ((MessageRouter *)puVar1,Message::CoinUse,&local_f70);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onMissionGemsUse);
  MessageRouter::
  Subscribe<Sexy::RtWeakPtr<MagentoProductProps>const&,bool,int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(Sexy::RtWeakPtr<MagentoProductProps>const&,bool,int)>>
            ((MessageRouter *)puVar1,Message::MissionGemsUse,local_f90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGateUnLock);
  MessageRouter::
  Subscribe<MapEventItem_const*,std::string_const&,int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(MapEventItem_const*,std::string_const&,int)>>
            ((MessageRouter *)puVar1,Message::GateUnLock,local_fb0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onWorldMapUnLock);
  MessageRouter::
  Subscribe<int,std::string_const&,int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int,std::string_const&,int)>>
            ((MessageRouter *)puVar1,Message::WorldMapUnLock,local_fd0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantUnlockStar);
  local_f60 = local_970;
  local_f70 = local_980;
  uStack_f68 = uStack_978;
  MessageRouter::
  Subscribe<int,std::string_const&,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int,std::string_const&)>>
            ((MessageRouter *)puVar1,Message::PlantUnLockByStar,&local_f70);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnMissionUnlock);
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(std::string_const&)>>
            ((MessageRouter *)puVar1,Message::MissionUnlock,&local_df0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnGift);
  MessageRouter::
  Subscribe<std::string_const&,int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(std::string_const&,int)>>
            ((MessageRouter *)puVar1,Message::Gift,&local_dd0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnGetFreeGems);
  MessageRouter::
  Subscribe<std::string_const&,int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(std::string_const&,int)>>
            ((MessageRouter *)puVar1,Message::GetFreeGems,&local_dd0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnGetRechargeGems);
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::GetRechargeGems,&local_ef0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onItemPurchase);
  local_f50 = local_908;
  uStack_f48 = uStack_900;
  local_f40 = local_8f8;
  MessageRouter::
  Subscribe<Sexy::RtWeakPtr<MagentoProductProps>const&,int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(Sexy::RtWeakPtr<MagentoProductProps>const&,int)>>
            ((MessageRouter *)puVar1,Message::ItemPurchase,&local_f50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onEventPurchase);
  MessageRouter::
  Subscribe<EventMetrics*,int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(EventMetrics*,int)>>
            ((MessageRouter *)puVar1,Message::EventPurchase,local_ff0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onItemCoinPurchase);
  MessageRouter::
  Subscribe<Sexy::RtWeakPtr<MagentoProductProps>const&,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(Sexy::RtWeakPtr<MagentoProductProps>const&)>>
            ((MessageRouter *)puVar1,Message::ItemCoinPurchase,local_ed0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTmallClick);
  Sexy::Delegate0::Delegate0<MetricsCollector,void(MetricsCollector::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::TmallClick,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCheckUpdateClick);
  Sexy::Delegate0::Delegate0<MetricsCollector,void(MetricsCollector::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::CheckUpdateClick,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGetGachaReward);
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int)>>
            ((MessageRouter *)puVar1,Message::GetGachaReward,&local_d50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGetLimitedGachaReward);
  MessageRouter::
  Subscribe<int,bool,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int,bool)>>
            ((MessageRouter *)puVar1,Message::GetLimitedGachaReward,local_1010);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGetNewGachaReward);
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int)>>
            ((MessageRouter *)puVar1,Message::GetNewGachaReward,&local_d50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantLevelUp);
  MessageRouter::
  Subscribe<std::string_const&,int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(std::string_const&,int)>>
            ((MessageRouter *)puVar1,Message::PlantLevelUp,&local_dd0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantLevelUpOK);
  MessageRouter::
  Subscribe<std::string_const&,int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(std::string_const&,int)>>
            ((MessageRouter *)puVar1,Message::PlantLevelUpOK,&local_dd0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGemCompensation);
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int)>>
            ((MessageRouter *)puVar1,Message::GemCompensation,&local_d50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRechargeRewardGot);
  MessageRouter::
  Subscribe<int,int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>const&,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int,int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>const&)>>
            ((MessageRouter *)puVar1,Message::RechargeRewardGot,&local_1030);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRechargeBundleLog);
  MessageRouter::
  Subscribe<std::string_const&,int,std::string_const&,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(std::string_const&,int,std::string_const&)>>
            ((MessageRouter *)puVar1,Message::RechargeBundleLog,local_1050);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnGLLotteryReward);
  MessageRouter::
  Subscribe<int,int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>const&,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int,int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>const&)>>
            ((MessageRouter *)puVar1,Message::GLLotteryReward,&local_1030);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnTGCraft);
  MessageRouter::
  Subscribe<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>const&,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>const&)>>
            ((MessageRouter *)puVar1,Message::TGCraft,&local_1070);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnTGTutorial);
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int)>>
            ((MessageRouter *)puVar1,Message::TGTutorial,&local_d50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnJump);
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::Jump,&local_ef0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onDailySignReward);
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::DailySignReward,&local_ef0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onStartNewVersionGame);
  Sexy::Delegate0::Delegate0<MetricsCollector,void(MetricsCollector::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::StartNewVersionGame,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameLoadStart);
  Sexy::Delegate0::Delegate0<MetricsCollector,void(MetricsCollector::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameLoadStart,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameLoadEnd);
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(std::string_const&)>>
            ((MessageRouter *)puVar1,Message::GameLoadEnd,&local_df0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameReady);
  Sexy::Delegate0::Delegate0<MetricsCollector,void(MetricsCollector::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameReady,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onStartMission);
  MessageRouter::
  Subscribe<std::string_const&,std::string_const&,int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(std::string_const&,std::string_const&,int)>>
            ((MessageRouter *)puVar1,Message::MissionStart,local_1090);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onItemExchange);
  MessageRouter::
  Subscribe<Sexy::RtWeakPtr<MagentoProductProps>const&,int,int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(Sexy::RtWeakPtr<MagentoProductProps>const&,int,int)>>
            ((MessageRouter *)puVar1,Message::ItemExChange,local_10b0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGoldCanOpen);
  MessageRouter::
  Subscribe<TreasurePool_const*,std::vector<TreasureReward_const*,std::allocator<TreasureReward_const*>>&,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(TreasurePool_const*,std::vector<TreasureReward_const*,std::allocator<TreasureReward_const*>>&)>>
            ((MessageRouter *)puVar1,Message::GoldCanOpen,local_10d0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onDangerRoomFinish);
  MessageRouter::
  Subscribe<std::vector<PlantInfo,std::allocator<PlantInfo>>&,int,int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(std::vector<PlantInfo,std::allocator<PlantInfo>>&,int,int)>>
            ((MessageRouter *)puVar1,Message::DangerRoomFinish,local_10f0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onDangerRoomWaveFinish);
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::DangerRoomWaveFinish,&local_ef0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onDangerRoomWaveStart);
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::DangerRoomWaveStart,&local_ef0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onDangerRoomAwardGet);
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int)>>
            ((MessageRouter *)puVar1,Message::DangerRoomAwardGet,&local_d50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGetDangerRoomLoot);
  MessageRouter::
  Subscribe<int,int,std::vector<PlantInfo,std::allocator<PlantInfo>>&,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int,int,std::vector<PlantInfo,std::allocator<PlantInfo>>&)>>
            ((MessageRouter *)puVar1,Message::GetDangerRoomLootReward,local_1110);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLoadingComplete);
  Sexy::Delegate0::Delegate0<MetricsCollector,void(MetricsCollector::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::MainMenuLoaded,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRedPackOpen);
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int)>>
            ((MessageRouter *)puVar1,Message::RedPackOpen,&local_d50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSpecificGoodsObtain);
  MessageRouter::
  Subscribe<std::string_const&,int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(std::string_const&,int)>>
            ((MessageRouter *)puVar1,Message::SpecificGoodsObtain,&local_dd0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRiddlesCorrectPercent);
  local_d50 = local_680;
  uStack_d48 = uStack_678;
  local_d40 = local_670;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int)>>
            ((MessageRouter *)puVar1,Message::RiddlesCorrectPercent,&local_d50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRiddlesParticipate);
  Sexy::Delegate0::Delegate0<MetricsCollector,void(MetricsCollector::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::RiddlesParticipate,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onIfengfengClick);
  Sexy::Delegate0::Delegate0<MetricsCollector,void(MetricsCollector::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::IfengfengClick,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onInvalidAccount);
  Sexy::Delegate0::Delegate0<MetricsCollector,void(MetricsCollector::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::InValidAccount,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnEnterBack);
  Sexy::Delegate0::Delegate0<MetricsCollector,void(MetricsCollector::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::PlayerLogout,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnLoginReward);
  local_d50 = local_668;
  uStack_d48 = uStack_660;
  local_d40 = local_658;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int)>>
            ((MessageRouter *)puVar1,Message::LoginRewardCollection,&local_d50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onDLCRecord);
  local_d50 = local_650;
  uStack_d48 = uStack_648;
  local_d40 = local_640;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int)>>
            ((MessageRouter *)puVar1,Message::DLCRecord,&local_d50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantPackageBuy);
  local_1120 = local_628;
  local_1130 = local_638;
  uStack_1128 = uStack_630;
  MessageRouter::
  Subscribe<PlantPackage*,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(PlantPackage*)>>
            ((MessageRouter *)puVar1,Message::PlantPackageBuy,&local_1130);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameBegin);
  Sexy::Delegate0::Delegate0<MetricsCollector,void(MetricsCollector::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameBegin,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onDecompress);
  local_d50 = local_620;
  uStack_d48 = uStack_618;
  local_d40 = local_610;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int)>>
            ((MessageRouter *)puVar1,Message::Decompress,&local_d50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameLoad);
  local_d50 = local_608;
  uStack_d48 = uStack_600;
  local_d40 = local_5f8;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int)>>
            ((MessageRouter *)puVar1,Message::GameLoad,&local_d50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameLogin);
  local_1140 = local_5e0;
  local_1150 = local_5f0;
  uStack_1148 = uStack_5e8;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(bool)>>
            ((MessageRouter *)puVar1,Message::LoginiCloudServerFinish,&local_1150);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNewAccountRegister);
  Sexy::Delegate0::Delegate0<MetricsCollector,void(MetricsCollector::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NewAccountRegister,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameEnd);
  Sexy::Delegate0::Delegate0<MetricsCollector,void(MetricsCollector::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameEnd,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRecharge);
  local_da0 = local_5c8;
  local_db0 = local_5d8;
  uStack_da8 = uStack_5d0;
  MessageRouter::
  Subscribe<std::string_const&,int,int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(std::string_const&,int,int)>>
            ((MessageRouter *)puVar1,Message::Recharge,&local_db0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameCharge);
  local_1170 = local_5c0;
  uStack_1168 = uStack_5b8;
  local_1160 = local_5b0;
  MessageRouter::
  Subscribe<std::string_const&,std::string_const&,std::string_const&,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(std::string_const&,std::string_const&,std::string_const&)>>
            ((MessageRouter *)puVar1,Message::GameCharge,&local_1170);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onChargeReward);
  local_df0 = local_5a8;
  uStack_de8 = uStack_5a0;
  local_de0 = local_598;
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(std::string_const&)>>
            ((MessageRouter *)puVar1,Message::ChargeReward,&local_df0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGemsCostReward);
  local_d50 = local_590;
  uStack_d48 = uStack_588;
  local_d40 = local_580;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int)>>
            ((MessageRouter *)puVar1,Message::GemsCostReward,&local_d50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLanternReward);
  local_d50 = local_578;
  uStack_d48 = uStack_570;
  local_d40 = local_568;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int)>>
            ((MessageRouter *)puVar1,Message::LanternReward,&local_d50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBlackPackageCharge);
  local_df0 = local_560;
  uStack_de8 = uStack_558;
  local_de0 = local_550;
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(std::string_const&)>>
            ((MessageRouter *)puVar1,Message::BlackPackageCharge,&local_df0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBuyTimeMetrics);
  local_1190 = local_548;
  uStack_1188 = uStack_540;
  local_1180 = local_538;
  MessageRouter::
  Subscribe<std::vector<LogCacheInfo,std::allocator<LogCacheInfo>>&,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(std::vector<LogCacheInfo,std::allocator<LogCacheInfo>>&)>>
            ((MessageRouter *)puVar1,Message::BuyTimeMetrics,&local_1190);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onChooseUpdateResult);
  local_d50 = local_530;
  uStack_d48 = uStack_528;
  local_d40 = local_520;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int)>>
            ((MessageRouter *)puVar1,Message::ChooseUpdateResult,&local_d50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onDownloadUpdateVersion);
  local_d50 = local_518;
  uStack_d48 = uStack_510;
  local_d40 = local_508;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int)>>
            ((MessageRouter *)puVar1,Message::DownloadUpdateVersion,&local_d50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onInstallUpdateVersion);
  local_d50 = local_500;
  uStack_d48 = uStack_4f8;
  local_d40 = local_4f0;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int)>>
            ((MessageRouter *)puVar1,Message::InstallUpdateVersion,&local_d50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGetUpdateReward);
  Sexy::Delegate0::Delegate0<MetricsCollector,void(MetricsCollector::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GetUpdateReward,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTutorialFTUE);
  local_d50 = local_4e8;
  uStack_d48 = uStack_4e0;
  local_d40 = local_4d8;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int)>>
            ((MessageRouter *)puVar1,Message::TutorialFTUE,&local_d50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLaunchCuke);
  local_11b0 = local_4d0;
  uStack_11a8 = uStack_4c8;
  local_11a0 = local_4c0;
  MessageRouter::
  Subscribe<bool,int,int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(bool,int,int)>>
            ((MessageRouter *)puVar1,Message::LaunchCuke,&local_11b0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLimitedSalesBought);
  local_ee0 = local_4a8;
  local_ef0 = local_4b8;
  uStack_ee8 = uStack_4b0;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::LimitedSalesBought,&local_ef0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLoginRewardInfo);
  local_11c0 = local_490;
  local_11d0 = local_4a0;
  uStack_11c8 = uStack_498;
  MessageRouter::
  Subscribe<int,int,int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int,int,int)>>
            ((MessageRouter *)puVar1,Message::LoginRewardInfo,&local_11d0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSNSFlow);
  Sexy::Delegate0::Delegate0<MetricsCollector,void(MetricsCollector::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::SNSFlow,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlayerStarFlow);
  local_d40 = local_478;
  local_d50 = local_488;
  uStack_d48 = uStack_480;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int)>>
            ((MessageRouter *)puVar1,Message::PlayerStarFlow,&local_d50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onWishItem);
  local_de0 = local_460;
  local_df0 = local_470;
  uStack_de8 = uStack_468;
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(std::string_const&)>>
            ((MessageRouter *)puVar1,Message::WishItem,&local_df0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNewerBagPay);
  local_ef0 = local_458;
  uStack_ee8 = uStack_450;
  local_ee0 = local_448;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::NewerBagPay,&local_ef0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onItemPurchaseInfo2);
  local_11f0 = local_440;
  uStack_11e8 = uStack_438;
  local_11e0 = local_430;
  MessageRouter::
  Subscribe<Sexy::RtWeakPtr<MagentoProductProps>const&,std::string_const&,int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(Sexy::RtWeakPtr<MagentoProductProps>const&,std::string_const&,int)>>
            ((MessageRouter *)puVar1,Message::ItemPurchaseInfo2,&local_11f0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnLuaNotify);
  local_de0 = local_418;
  local_df0 = local_428;
  uStack_de8 = uStack_420;
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(std::string_const&)>>
            ((MessageRouter *)puVar1,Message::OnLuaNotify,&local_df0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantTrialBuy);
  local_f60 = local_400;
  local_f70 = local_410;
  uStack_f68 = uStack_408;
  MessageRouter::
  Subscribe<int,std::string_const&,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int,std::string_const&)>>
            ((MessageRouter *)puVar1,Message::PlantTrialBuy,&local_f70);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onDailyAchievement);
  local_ee0 = local_3e8;
  local_ef0 = local_3f8;
  uStack_ee8 = uStack_3f0;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::DailyAchievement,&local_ef0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onDangerRoomReward);
  local_d50 = local_3e0;
  uStack_d48 = uStack_3d8;
  local_d40 = local_3d0;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int)>>
            ((MessageRouter *)puVar1,Message::DangerRoomReward,&local_d50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNationalDayConsumeDimondsInLottery);
  local_dc0 = local_3b8;
  local_dd0 = local_3c8;
  uStack_dc8 = uStack_3c0;
  MessageRouter::
  Subscribe<std::string_const&,int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(std::string_const&,int)>>
            ((MessageRouter *)puVar1,Message::NationalDayConsumeDimondsInLottery,&local_dd0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCharge10Reward);
  local_ee0 = local_3a0;
  local_ef0 = local_3b0;
  uStack_ee8 = uStack_3a8;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::Charge10Reward,&local_ef0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCheckBossFightRate);
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(bool)>>
            ((MessageRouter *)puVar1,Message::CheckBossFightRate,&local_1150);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onOldUserBackReward);
  local_d40 = local_370;
  local_d50 = local_380;
  uStack_d48 = uStack_378;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int)>>
            ((MessageRouter *)puVar1,Message::OldUserBackReward,&local_d50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onWechatShare);
  Sexy::Delegate0::Delegate0<MetricsCollector,void(MetricsCollector::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::WechatShare,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBirthdayZReward);
  local_d40 = local_358;
  local_d50 = local_368;
  uStack_d48 = uStack_360;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int)>>
            ((MessageRouter *)puVar1,Message::BirthdayZReward,&local_d50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBirthdayZFinish);
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(bool)>>
            ((MessageRouter *)puVar1,Message::BirthdayZFinish,&local_1150);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantAdventure);
  local_1210 = local_338;
  uStack_1208 = uStack_330;
  local_1200 = local_328;
  MessageRouter::
  Subscribe<int,PlantAdventureLogInfo_const&,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int,PlantAdventureLogInfo_const&)>>
            ((MessageRouter *)puVar1,Message::PlantAdventure,&local_1210);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onActiveProtectFinish);
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::ActiveProtectFinish,&local_ef0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onActiveNewYearFinish);
  local_f60 = local_2f8;
  local_f70 = local_308;
  uStack_f68 = uStack_300;
  MessageRouter::
  Subscribe<int,std::string_const&,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int,std::string_const&)>>
            ((MessageRouter *)puVar1,Message::ActiveNewYearFinish,&local_f70);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onDailyAccessoryBonusFinish);
  local_d50 = local_2f0;
  uStack_d48 = uStack_2e8;
  local_d40 = local_2e0;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int)>>
            ((MessageRouter *)puVar1,Message::DailyAccessoryBonusFinish,&local_d50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onFestivalEntrance);
  local_1230 = local_2d8;
  uStack_1228 = uStack_2d0;
  local_1220 = local_2c8;
  MessageRouter::
  Subscribe<int,int,std::string_const&,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int,int,std::string_const&)>>
            ((MessageRouter *)puVar1,Message::FestivalEntrance,&local_1230);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onFestivalBuyTimes);
  local_11c0 = local_2b0;
  local_11d0 = local_2c0;
  uStack_11c8 = uStack_2b8;
  MessageRouter::
  Subscribe<int,int,int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int,int,int)>>
            ((MessageRouter *)puVar1,Message::FestivalGameMode_LeftBuyTimesChange,&local_11d0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnPinataParty);
  local_de0 = local_298;
  local_df0 = local_2a8;
  uStack_de8 = uStack_2a0;
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(std::string_const&)>>
            ((MessageRouter *)puVar1,Message::PinataParty,&local_df0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSummerActivity);
  local_de0 = local_280;
  local_df0 = local_290;
  uStack_de8 = uStack_288;
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(std::string_const&)>>
            ((MessageRouter *)puVar1,Message::SummerActivity,&local_df0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSummerActivity);
  local_de0 = local_268;
  local_df0 = local_278;
  uStack_de8 = uStack_270;
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(std::string_const&)>>
            ((MessageRouter *)puVar1,Message::JoinActivity,&local_df0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAdsOpen);
  local_df0 = local_260;
  uStack_de8 = uStack_258;
  local_de0 = local_250;
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(std::string_const&)>>
            ((MessageRouter *)puVar1,Message::EASquaredOpened,&local_df0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAdsReward);
  local_1240 = local_238;
  local_1250 = local_248;
  uStack_1248 = uStack_240;
  MessageRouter::
  Subscribe<std::string_const&,std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>const&,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(std::string_const&,std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>const&)>>
            ((MessageRouter *)puVar1,Message::EASquareReward,&local_1250);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCodeReward);
  local_1270 = local_230;
  uStack_1268 = uStack_228;
  local_1260 = local_220;
  MessageRouter::
  Subscribe<std::string_const&,std::string_const&,std::vector<S2C_CodeRewardPlantNum,std::allocator<S2C_CodeRewardPlantNum>>const&,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(std::string_const&,std::string_const&,std::vector<S2C_CodeRewardPlantNum,std::allocator<S2C_CodeRewardPlantNum>>const&)>>
            ((MessageRouter *)puVar1,Message::CodeReward,&local_1270);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRedPacketRewardGot);
  local_1020 = local_208;
  local_1030 = local_218;
  uStack_1028 = uStack_210;
  MessageRouter::
  Subscribe<int,int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>const&,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int,int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>const&)>>
            ((MessageRouter *)puVar1,Message::RedPacketRewardGot,&local_1030);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onMissionDiamondUse);
  local_1060 = local_1f0;
  local_1070 = local_200;
  uStack_1068 = uStack_1f8;
  MessageRouter::
  Subscribe<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>const&,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>const&)>>
            ((MessageRouter *)puVar1,Message::MissionDiamondUse,&local_1070);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onFiveYearsRushthrough);
  MessageRouter::
  Subscribe<std::vector<int,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(std::vector<int,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::FiveYearsRushthrough,&local_1290);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onFiveYearsCosmobonus);
  MessageRouter::
  Subscribe<std::vector<int,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(std::vector<int,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::FiveYearsCosmobonus,&local_1290);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onFiveYearsExchange);
  local_12a0 = local_1a8;
  local_12b0 = local_1b8;
  uStack_12a8 = uStack_1b0;
  MessageRouter::
  Subscribe<std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>const&,int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>const&,int)>>
            ((MessageRouter *)puVar1,Message::FiveYearsExchange,&local_12b0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNationalDayStoneLottery);
  local_ee0 = local_190;
  local_ef0 = local_1a0;
  uStack_ee8 = uStack_198;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::NationalDayStoneLottery,&local_ef0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNationalDayDailyReward);
  MessageRouter::
  Subscribe<int,std::vector<int,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int,std::vector<int,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NationalDayDailyReward,local_12d0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNationalDayChargeReward);
  local_12e0 = local_160;
  local_12f0 = local_170;
  uStack_12e8 = uStack_168;
  MessageRouter::
  Subscribe<std::string_const&,std::vector<int,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(std::string_const&,std::vector<int,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NationalDayChargeReward,&local_12f0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBattleShop);
  local_ee0 = local_148;
  local_ef0 = local_158;
  uStack_ee8 = uStack_150;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::BattleShop,&local_ef0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBattleZ);
  local_1300 = local_130;
  local_1310 = local_140;
  uStack_1308 = uStack_138;
  MessageRouter::
  Subscribe<std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::BattleZ,&local_1310);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBattleVictory);
  local_ee0 = local_118;
  local_ef0 = local_128;
  uStack_ee8 = uStack_120;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::BattleVictory,&local_ef0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBattleBuyTimes);
  local_da0 = local_100;
  local_db0 = local_110;
  uStack_da8 = uStack_108;
  MessageRouter::
  Subscribe<std::string_const&,int,int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(std::string_const&,int,int)>>
            ((MessageRouter *)puVar1,Message::BattleBuyTimes,&local_db0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBattleSettlement);
  local_1030 = local_f8;
  uStack_1028 = uStack_f0;
  local_1020 = local_e8;
  MessageRouter::
  Subscribe<int,int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>const&,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int,int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>const&)>>
            ((MessageRouter *)puVar1,Message::BattleSettlement,&local_1030);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLimitLotteryBuyCoin);
  local_ef0 = local_e0;
  uStack_ee8 = uStack_d8;
  local_ee0 = local_d0;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::LimitLotteryBuyCoin,&local_ef0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLimitLotteryDraw);
  local_1320 = local_b8;
  local_1330 = local_c8;
  uStack_1328 = uStack_c0;
  MessageRouter::
  Subscribe<std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::LimitLotteryDraw,&local_1330);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLimitLotteryExchange);
  local_1290 = local_b0;
  uStack_1288 = uStack_a8;
  local_1280 = local_a0;
  MessageRouter::
  Subscribe<std::vector<int,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(std::vector<int,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::LimitLotteryExchange,&local_1290);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onDoubleFestivalDailyReward);
  local_1340 = local_88;
  local_1350 = local_98;
  uStack_1348 = uStack_90;
  MessageRouter::
  Subscribe<int,std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>&,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int,std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>&)>>
            ((MessageRouter *)puVar1,Message::DoubleFestivalDailyReward,&local_1350);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onDoubleFestivalLotteryDraw);
  local_1310 = local_80;
  uStack_1308 = uStack_78;
  local_1300 = local_70;
  MessageRouter::
  Subscribe<std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::DoubleFestivalLotteryDraw,&local_1310);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onDoubleFestivalRechargeReward);
  local_1360 = local_58;
  MessageRouter::
  Subscribe<int,std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int,std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::DoubleFestivalRechargeReward,local_1370);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCommonBuryInterface);
  local_1390 = local_50;
  uStack_1388 = uStack_48;
  local_1380 = local_40;
  MessageRouter::
  Subscribe<int,TrackInfo_const&,bool,Sexy::CBMemberTranslatorX<MetricsCollector,void(MetricsCollector::*)(int,TrackInfo_const&,bool)>>
            ((MessageRouter *)puVar1,Message::CommonBuryInterface,&local_1390);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onMissinGemUse(std::string const&, int, int) */

void __thiscall
MetricsCollector::onMissinGemUse(MetricsCollector *this,string *param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined8 uVar6;
  long *plVar7;
  Util *this_02;
  LogServer *this_03;
  string asStack_1a8 [8];
  string asStack_1a0 [8];
  string asStack_198 [8];
  string asStack_190 [8];
  string asStack_188 [8];
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar4);
  bVar2 = std::operator==(param_1,"SnakeRevive");
  if (bVar2) {
    *(int *)(this + 0x8c) = *(int *)(this + 0x8c) + 1;
    FUN_0546065c(auStack_168);
  }
  else {
    bVar2 = std::operator==(param_1,"SnakeMower");
    if (bVar2) {
      *(int *)(this + 0x90) = *(int *)(this + 0x90) + 1;
      FUN_0546065c(auStack_168);
    }
    else {
      bVar2 = std::operator==(param_1,"OakShooter");
      if (!bVar2) {
        FUN_054617bc(auStack_178);
        goto LAB_03ec1030;
      }
      *(int *)(this + 0x94) = *(int *)(this + 0x94) + 1;
      FUN_0546065c(auStack_168);
    }
  }
  Sexy::LazySingleton<talkingGame>::GetInstancePtr();
  FUN_0547429c(param_1);
  nop();
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  uVar6 = LogServer::Instance();
  std::string::string(asStack_1a8,"missiongemsuse_3");
  uVar6 = LogServer::AppendMsg(uVar6,asStack_1a8);
  Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetAccountName();
  uVar6 = LogServer::AppendMsg(uVar6,asStack_1a0);
  FUN_05475d88(asStack_198,this + 0x120);
  uVar6 = LogServer::AppendMsg(uVar6,asStack_198);
  PlantAnimRig_HoyaCordata::getIdleAnimationName();
  uVar6 = LogServer::AppendMsg(uVar6,asStack_190);
  FUN_05475d88(asStack_188,param_1);
  uVar6 = LogServer::AppendMsg(uVar6,asStack_188);
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar6,asStack_180);
  std::string::~string(asStack_180);
  std::string::~string(asStack_188);
  std::string::~string(asStack_190);
  std::string::~string(asStack_198);
  std::string::~string(asStack_1a0);
  std::string::~string(asStack_1a8);
  nop();
  FUN_05462824(asStack_188,auStack_178);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,param_2 - param_3);
  uVar6 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar6,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  uVar4 = PlayerInfo::GetRechargeGems(this_01);
  FUN_0546065c(auStack_168,uVar4);
  uVar6 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar6,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,param_3);
  uVar6 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar6,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  uVar4 = NewPVPMgr::GetSeasonEndTime((NewPVPMgr *)this_01);
  FUN_0546065c(auStack_168,uVar4);
  uVar6 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar6,asStack_180);
  std::string::~string(asStack_180);
  if (*(long *)(gLawnApp + 0x9f0) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1000,0x3ec10ec);
    (*pcVar1)();
  }
  plVar7 = (long *)FUN_03ec0b88(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  cVar3 = *(char *)(*(long *)(gLawnApp + 0x9f0) + 0x97c);
  if (plVar7 != (long *)0x0) {
    cVar3 = (**(code **)(*plVar7 + 0xa0))();
  }
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  uVar4 = *(undefined4 *)(*(long *)(gLawnApp + 0x9f0) + 0x87c);
  if (cVar3 == '\0') {
    uVar4 = FUN_03eaad84(uVar4);
    FUN_0546065c(auStack_168,uVar4);
  }
  else {
    iVar5 = FUN_03eaad84(uVar4);
    FUN_0546065c(auStack_168,iVar5 + 1);
  }
  uVar6 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar6,asStack_180);
  std::string::~string(asStack_180);
  this_02 = (Util *)LogServer::Instance();
  Android::Util::GetPackageName(this_02);
  LogServer::AppendMsg(this_02,asStack_180);
  std::string::~string(asStack_180);
  this_03 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_03);
  std::string::~string(asStack_188);
  FUN_054617bc(auStack_178);
LAB_03ec1030:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onPowerupActivated(BasePowerup*, int, int) */

void __thiscall
MetricsCollector::onPowerupActivated
          (MetricsCollector *this,BasePowerup *param_1,int param_2,int param_3)

{
  string *psVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  Util *this_02;
  LogServer *this_03;
  string asStack_198 [8];
  string asStack_190 [8];
  string asStack_188 [8];
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  uVar5 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar5);
  lVar7 = BasePowerup::GetType(param_1);
  psVar1 = (string *)(lVar7 + 0x10);
  bVar3 = std::operator==(psVar1,"PowerupWizardFinger");
  if (bVar3) {
    *(int *)(this + 0x84) = *(int *)(this + 0x84) + 1;
    FUN_0546065c(auStack_168);
  }
  else {
    bVar3 = std::operator==(psVar1,"PowerupFlickZombie");
    if (bVar3) {
      *(int *)(this + 0x80) = *(int *)(this + 0x80) + 1;
      FUN_0546065c(auStack_168);
    }
    else {
      bVar3 = std::operator==(psVar1,"PowerupPinchZombie");
      if (bVar3) {
        *(int *)(this + 0x7c) = *(int *)(this + 0x7c) + 1;
        FUN_0546065c(auStack_168);
      }
      else {
        bVar3 = std::operator==(psVar1,"PowerupTacticalCuke");
        if (bVar3) {
          *(int *)(this + 0x88) = *(int *)(this + 0x88) + 1;
          FUN_0546065c(auStack_168);
        }
        else {
          bVar3 = std::operator==(psVar1,"PowerupVaseBreakerReveal");
          if (bVar3) {
            *(int *)(this + 0x9c) = *(int *)(this + 0x9c) + 1;
            FUN_0546065c(auStack_168);
          }
          else {
            bVar3 = std::operator==(psVar1,"PowerupVaseBreakerButter");
            if (bVar3) {
              *(int *)(this + 0xa0) = *(int *)(this + 0xa0) + 1;
              FUN_0546065c(auStack_168);
            }
            else {
              bVar3 = std::operator==(psVar1,"PowerupVaseBreakerMove");
              if (bVar3) {
                *(int *)(this + 0xa4) = *(int *)(this + 0xa4) + 1;
                FUN_0546065c(auStack_168);
              }
            }
          }
        }
      }
    }
  }
  uVar8 = LogServer::Instance();
  std::string::string(asStack_198,"missiongemsuse_3");
  uVar8 = LogServer::AppendMsg(uVar8,asStack_198);
  Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetAccountName();
  uVar8 = LogServer::AppendMsg(uVar8,asStack_190);
  FUN_05475d88(asStack_188,this + 0x120);
  uVar8 = LogServer::AppendMsg(uVar8,asStack_188);
  PlantAnimRig_HoyaCordata::getIdleAnimationName();
  LogServer::AppendMsg(uVar8,asStack_180);
  std::string::~string(asStack_180);
  std::string::~string(asStack_188);
  std::string::~string(asStack_190);
  std::string::~string(asStack_198);
  nop();
  uVar8 = LogServer::Instance();
  FUN_05475d88(asStack_188,psVar1);
  uVar8 = LogServer::AppendMsg(uVar8,asStack_188);
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar8,asStack_180);
  std::string::~string(asStack_180);
  std::string::~string(asStack_188);
  FUN_05462824(asStack_188,auStack_178);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,param_2 - param_3);
  uVar8 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar8,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  uVar5 = PlayerInfo::GetRechargeGems(this_01);
  FUN_0546065c(auStack_168,uVar5);
  uVar8 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar8,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,param_3);
  uVar8 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar8,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  uVar5 = NewPVPMgr::GetSeasonEndTime((NewPVPMgr *)this_01);
  FUN_0546065c(auStack_168,uVar5);
  uVar8 = LogServer::Instance();
  FUN_05462824(asStack_180,auStack_178);
  LogServer::AppendMsg(uVar8,asStack_180);
  std::string::~string(asStack_180);
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    plVar9 = (long *)FUN_03ec0b88(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    cVar4 = *(char *)(*(long *)(gLawnApp + 0x9f0) + 0x97c);
    if (plVar9 != (long *)0x0) {
      cVar4 = (**(code **)(*plVar9 + 0xa0))();
    }
    std::string::string(asStack_180,"");
    FUN_05462980(auStack_178,asStack_180);
    std::string::~string(asStack_180);
    nop();
    uVar5 = *(undefined4 *)(*(long *)(gLawnApp + 0x9f0) + 0x87c);
    if (cVar4 == '\0') {
      uVar5 = FUN_03eaad84(uVar5);
      FUN_0546065c(auStack_168,uVar5);
    }
    else {
      iVar6 = FUN_03eaad84(uVar5);
      FUN_0546065c(auStack_168,iVar6 + 1);
    }
    uVar8 = LogServer::Instance();
    FUN_05462824(asStack_180,auStack_178);
    LogServer::AppendMsg(uVar8,asStack_180);
    std::string::~string(asStack_180);
    this_02 = (Util *)LogServer::Instance();
    Android::Util::GetPackageName(this_02);
    LogServer::AppendMsg(this_02,asStack_180);
    std::string::~string(asStack_180);
    this_03 = (LogServer *)LogServer::Instance();
    LogServer::SendMsg(this_03);
    std::string::~string(asStack_188);
    FUN_054617bc(auStack_178);
    if (local_8 == ___stack_chk_guard) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1000,0x3ec1638);
  (*pcVar2)();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onMissionGemsUse(Sexy::RtWeakPtr<MagentoProductProps> const&, bool, int) */

void __thiscall
MetricsCollector::onMissionGemsUse
          (MetricsCollector *this,RtWeakPtr *param_1,bool param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar6;
  undefined8 uVar7;
  MagentoProductProps *pMVar8;
  long *plVar9;
  Util *this_02;
  LogServer *this_03;
  float fVar10;
  string asStack_198 [8];
  string asStack_190 [8];
  string asStack_188 [8];
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(param_1);
  if (bVar2) {
    uVar4 = operator|(0x10,8);
    FUN_05462470(auStack_178,uVar4);
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    FUN_0546065c(auStack_168,*(undefined4 *)(lVar6 + 0x90));
    uVar7 = LogServer::Instance();
    std::string::string(asStack_198,"missiongemsuse_3");
    uVar7 = LogServer::AppendMsg(uVar7,asStack_198);
    Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::GetAccountName();
    uVar7 = LogServer::AppendMsg(uVar7,asStack_190);
    FUN_05475d88(asStack_188,this + 0x120);
    uVar7 = LogServer::AppendMsg(uVar7,asStack_188);
    PlantAnimRig_HoyaCordata::getIdleAnimationName();
    LogServer::AppendMsg(uVar7,asStack_180);
    std::string::~string(asStack_180);
    std::string::~string(asStack_188);
    std::string::~string(asStack_190);
    std::string::~string(asStack_198);
    nop();
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    FUN_05475d88(asStack_190,lVar6 + 0x80);
    if (param_2) {
      uVar7 = LogServer::Instance();
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
      FUN_05462824(asStack_188,auStack_178);
      std::operator+((string *)(lVar6 + 0x80),asStack_188);
      LogServer::AppendMsg(uVar7,asStack_180);
      std::string::~string(asStack_180);
      std::string::~string(asStack_188);
      FUN_05462824(asStack_188,auStack_178);
      std::operator+(",",asStack_188);
      thunk_FUN_054757c0(asStack_190,asStack_180);
      std::string::~string(asStack_180);
      std::string::~string(asStack_188);
    }
    else {
      uVar7 = LogServer::Instance();
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
      FUN_05475d88(asStack_180,lVar6 + 0x80);
      LogServer::AppendMsg(uVar7,asStack_180);
      std::string::~string(asStack_180);
    }
    Sexy::LazySingleton<talkingGame>::GetInstancePtr();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    MagentoProductProps::GetLocalizedName();
    FUN_0547429c(asStack_180);
    pMVar8 = (MagentoProductProps *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    MagentoProductProps::GetPriceInUSD(pMVar8,false);
    nop();
    std::string::~string(asStack_180);
    std::string::string(asStack_180,"");
    FUN_05462980(auStack_178,asStack_180);
    std::string::~string(asStack_180);
    nop();
    FUN_0546065c(auStack_168,0);
    uVar7 = LogServer::Instance();
    FUN_05462824(asStack_180,auStack_178);
    LogServer::AppendMsg(uVar7,asStack_180);
    std::string::~string(asStack_180);
    std::string::string(asStack_180,"");
    FUN_05462980(auStack_178,asStack_180);
    std::string::~string(asStack_180);
    nop();
    pMVar8 = (MagentoProductProps *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    fVar10 = (float)MagentoProductProps::GetPriceInUSD(pMVar8,false);
    FUN_05460f98(fVar10 - (float)param_3,auStack_168);
    uVar7 = LogServer::Instance();
    FUN_05462824(asStack_180,auStack_178);
    LogServer::AppendMsg(uVar7,asStack_180);
    std::string::~string(asStack_180);
    std::string::string(asStack_180,"");
    FUN_05462980(auStack_178,asStack_180);
    std::string::~string(asStack_180);
    nop();
    uVar4 = PlayerInfo::GetRechargeGems(this_01);
    FUN_0546065c(auStack_168,uVar4);
    uVar7 = LogServer::Instance();
    FUN_05462824(asStack_180,auStack_178);
    LogServer::AppendMsg(uVar7,asStack_180);
    std::string::~string(asStack_180);
    std::string::string(asStack_180,"");
    FUN_05462980(auStack_178,asStack_180);
    std::string::~string(asStack_180);
    nop();
    FUN_0546065c(auStack_168,param_3);
    uVar7 = LogServer::Instance();
    FUN_05462824(asStack_180,auStack_178);
    LogServer::AppendMsg(uVar7,asStack_180);
    std::string::~string(asStack_180);
    std::string::string(asStack_180,"");
    FUN_05462980(auStack_178,asStack_180);
    std::string::~string(asStack_180);
    nop();
    uVar4 = NewPVPMgr::GetSeasonEndTime((NewPVPMgr *)this_01);
    FUN_0546065c(auStack_168,uVar4);
    uVar7 = LogServer::Instance();
    FUN_05462824(asStack_180,auStack_178);
    LogServer::AppendMsg(uVar7,asStack_180);
    std::string::~string(asStack_180);
    if (*(long *)(gLawnApp + 0x9f0) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1000,0x3ec1ccc);
      (*pcVar1)();
    }
    plVar9 = (long *)FUN_03ec0b88(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    cVar3 = *(char *)(*(long *)(gLawnApp + 0x9f0) + 0x97c);
    if (plVar9 != (long *)0x0) {
      cVar3 = (**(code **)(*plVar9 + 0xa0))();
    }
    std::string::string(asStack_180,"");
    FUN_05462980(auStack_178,asStack_180);
    std::string::~string(asStack_180);
    nop();
    uVar4 = *(undefined4 *)(*(long *)(gLawnApp + 0x9f0) + 0x87c);
    if (cVar3 == '\0') {
      uVar4 = FUN_03eaad84(uVar4);
      FUN_0546065c(auStack_168,uVar4);
    }
    else {
      iVar5 = FUN_03eaad84(uVar4);
      FUN_0546065c(auStack_168,iVar5 + 1);
    }
    uVar7 = LogServer::Instance();
    FUN_05462824(asStack_180,auStack_178);
    LogServer::AppendMsg(uVar7,asStack_180);
    std::string::~string(asStack_180);
    this_02 = (Util *)LogServer::Instance();
    Android::Util::GetPackageName(this_02);
    LogServer::AppendMsg(this_02,asStack_180);
    std::string::~string(asStack_180);
    this_03 = (LogServer *)LogServer::Instance();
    LogServer::SendMsg(this_03);
    std::string::~string(asStack_190);
    FUN_054617bc(auStack_178);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::SendBattleResult(std::string const&) */

void __thiscall MetricsCollector::SendBattleResult(MetricsCollector *this,string *param_1)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  ProfileMgr *pPVar6;
  long lVar7;
  undefined8 uVar8;
  MetricsCollectorNameSpace *pMVar9;
  PlayerInfo *pPVar10;
  int *piVar11;
  ulong uVar12;
  Util *this_00;
  long lVar13;
  undefined4 *puVar14;
  LogServer *this_01;
  wchar16 **extraout_x1;
  ulong uVar15;
  undefined1 auStack_1c8 [8];
  undefined8 local_1c0;
  string asStack_1b8 [8];
  string asStack_1b0 [8];
  string asStack_1a8 [8];
  string asStack_1a0 [8];
  string asStack_198 [8];
  undefined4 local_190 [2];
  undefined4 local_188 [2];
  undefined8 local_180;
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar6 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar7 = ProfileMgr::GetCurrentProfile(pPVar6);
  uVar8 = LogServer::Instance();
  FUN_05475d88(asStack_198,param_1);
  uVar8 = LogServer::AppendMsg(uVar8,asStack_198);
  GetPCPID();
  uVar8 = LogServer::AppendMsg(uVar8,(string *)local_190);
  FUN_05475d88((string *)local_188,this + 0x120);
  uVar8 = LogServer::AppendMsg(uVar8,(string *)local_188);
  PlantAnimRig_HoyaCordata::getIdleAnimationName();
  LogServer::AppendMsg(uVar8,(string *)&local_180);
  std::string::~string((string *)&local_180);
  std::string::~string((string *)local_188);
  std::string::~string((string *)local_190);
  std::string::~string(asStack_198);
  uVar4 = operator|(0x10,8);
  pMVar9 = (MetricsCollectorNameSpace *)FUN_05462470(auStack_178,uVar4);
  local_190[0] = 0;
  MetricsCollectorNameSpace::GetCurrentLevel(pMVar9);
  pPVar6 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar10 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar6);
  local_188[0] = ProfileUtils::TotalGamesPlayedForLevel((string *)&local_180,pPVar10);
  piVar11 = eastl::max_alt<int>((int *)local_190,(int *)local_188);
  FUN_0546065c(auStack_168,*piVar11);
  std::string::~string((string *)&local_180);
  uVar8 = LogServer::Instance();
  FUN_05462824((string *)&local_180,auStack_178);
  LogServer::AppendMsg(uVar8,(string *)&local_180);
  std::string::~string((string *)&local_180);
  std::string::string((string *)&local_180,"");
  FUN_05462980(auStack_178,(string *)&local_180);
  std::string::~string((string *)&local_180);
  nop();
  FUN_0546065c(auStack_168,*(undefined4 *)(this + 0x78));
  uVar8 = LogServer::Instance();
  FUN_05462824((string *)&local_180,auStack_178);
  LogServer::AppendMsg(uVar8,(string *)&local_180);
  std::string::~string((string *)&local_180);
  std::string::string((string *)&local_180,"");
  FUN_05462980(auStack_178,(string *)&local_180);
  std::string::~string((string *)&local_180);
  nop();
  FUN_0546065c(auStack_168,*(undefined4 *)(this + 0xb0));
  uVar8 = LogServer::Instance();
  FUN_05462824((string *)&local_180,auStack_178);
  LogServer::AppendMsg(uVar8,(string *)&local_180);
  std::string::~string((string *)&local_180);
  std::string::string((string *)&local_180,"");
  FUN_05462980(auStack_178,(string *)&local_180);
  std::string::~string((string *)&local_180);
  nop();
  Board::GetBoardResult(*(Board **)(gLawnApp + 0x4f8));
  iVar5 = MetricsCollectorNameSpace::TranslateEndOfGame();
  uVar4 = 1;
  if (iVar5 != 1) {
    uVar4 = 2;
  }
  FUN_0546065c(auStack_168,uVar4);
  uVar8 = LogServer::Instance();
  FUN_05462824((string *)&local_180,auStack_178);
  LogServer::AppendMsg(uVar8,(string *)&local_180);
  std::string::~string((string *)&local_180);
  std::string::string((string *)&local_180,"");
  FUN_05462980(auStack_178,(string *)&local_180);
  std::string::~string((string *)&local_180);
  nop();
  pMVar9 = (MetricsCollectorNameSpace *)ProfileUtils::Profile();
  MetricsCollectorNameSpace::GetCurrentWorld(pMVar9);
  uVar4 = PlayerInfo::GetStarsCompletedInWorld((string *)pMVar9,SUB81((string *)&local_180,0));
  FUN_0546065c(auStack_168,uVar4);
  std::string::~string((string *)&local_180);
  uVar8 = LogServer::Instance();
  FUN_05462824((string *)&local_180,auStack_178);
  LogServer::AppendMsg(uVar8,(string *)&local_180);
  std::string::~string((string *)&local_180);
  cVar1 = *(char *)(*(long *)(gLawnApp + 0x4f8) + 0x97c);
  std::string::string((string *)&local_180,"");
  FUN_05462980(auStack_178,(string *)&local_180);
  std::string::~string((string *)&local_180);
  nop();
  if (cVar1 == '\0') {
    iVar5 = FUN_03eaad84(*(undefined4 *)(*(long *)(gLawnApp + 0x4f8) + 0x87c));
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    FUN_0546065c(auStack_168,iVar5);
    uVar8 = LogServer::Instance();
    FUN_05462824((string *)&local_180,auStack_178);
    LogServer::AppendMsg(uVar8,(string *)&local_180);
    std::string::~string((string *)&local_180);
    uVar2 = 0;
  }
  else {
    iVar5 = FUN_03eaad84(*(undefined4 *)(*(long *)(gLawnApp + 0x4f8) + 0x87c));
    iVar5 = iVar5 + 1;
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    FUN_0546065c(auStack_168,iVar5);
    uVar8 = LogServer::Instance();
    FUN_05462824((string *)&local_180,auStack_178);
    LogServer::AppendMsg(uVar8,(string *)&local_180);
    std::string::~string((string *)&local_180);
    uVar2 = Board::GetActiveChallengeAwardedThisPlaythrough(*(Board **)(gLawnApp + 0x4f8));
  }
  std::string::string((string *)&local_180,"");
  FUN_05462980(auStack_178,(string *)&local_180);
  std::string::~string((string *)&local_180);
  nop();
  FUN_0546065c(auStack_168,uVar2);
  uVar8 = LogServer::Instance();
  FUN_05462824((string *)&local_180,auStack_178);
  LogServer::AppendMsg(uVar8,(string *)&local_180);
  std::string::~string((string *)&local_180);
  std::string::string((string *)&local_180,"");
  FUN_05462980(auStack_178,(string *)&local_180);
  std::string::~string((string *)&local_180);
  nop();
  FUN_0546065c(auStack_168,*(undefined4 *)(this + 0x6c));
  uVar8 = LogServer::Instance();
  FUN_05462824((string *)&local_180,auStack_178);
  LogServer::AppendMsg(uVar8,(string *)&local_180);
  std::string::~string((string *)&local_180);
  std::string::string((string *)&local_180,"");
  FUN_05462980(auStack_178,(string *)&local_180);
  std::string::~string((string *)&local_180);
  nop();
  local_1c0 = std::
              map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
              ::begin((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                       *)(this + 0xf0));
  while( true ) {
    local_180 = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)(this + 0xf0));
    bVar3 = eastl::operator!=((rbtree_iterator *)&local_1c0,(rbtree_iterator *)&local_180);
    if (!bVar3) break;
    uVar8 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_1c0);
    uVar8 = FUN_0545ec84(auStack_168,uVar8);
    uVar8 = FUN_054603b8(uVar8,&DAT_05593348);
    lVar13 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                       ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_1c0);
    uVar8 = FUN_0546065c(uVar8,*(undefined4 *)(lVar13 + 8));
    FUN_054603b8(uVar8,&DAT_05594620);
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_1c0);
  }
  uVar8 = LogServer::Instance();
  FUN_05462824((string *)&local_180,auStack_178);
  LogServer::AppendMsg(uVar8,(string *)&local_180);
  std::string::~string((string *)&local_180);
  FUN_05462824(asStack_1b8,auStack_178);
  std::string::string((string *)&local_180,"");
  FUN_05462980(auStack_178,(string *)&local_180);
  std::string::~string((string *)&local_180);
  nop();
  FUN_0546065c(auStack_168,*(undefined4 *)(this + 0xbc));
  uVar8 = LogServer::Instance();
  FUN_05462824((string *)&local_180,auStack_178);
  LogServer::AppendMsg(uVar8,(string *)&local_180);
  std::string::~string((string *)&local_180);
  std::string::string((string *)&local_180,"");
  FUN_05462980(auStack_178,(string *)&local_180);
  std::string::~string((string *)&local_180);
  nop();
  FUN_0546065c(auStack_168,*(undefined4 *)(*(long *)(gLawnApp + 0x4f8) + 0xcb8));
  uVar8 = LogServer::Instance();
  FUN_05462824((string *)&local_180,auStack_178);
  LogServer::AppendMsg(uVar8,(string *)&local_180);
  std::string::~string((string *)&local_180);
  std::string::string((string *)&local_180,"");
  FUN_05462980(auStack_178,(string *)&local_180);
  std::string::~string((string *)&local_180);
  nop();
  FUN_0546065c(auStack_168,*(undefined4 *)(*(long *)(gLawnApp + 0x4f8) + 0xcbc));
  uVar8 = LogServer::Instance();
  FUN_05462824((string *)&local_180,auStack_178);
  LogServer::AppendMsg(uVar8,(string *)&local_180);
  std::string::~string((string *)&local_180);
  std::string::string((string *)&local_180,"");
  FUN_05462980(auStack_178,(string *)&local_180);
  std::string::~string((string *)&local_180);
  nop();
  uVar15 = 0;
  while( true ) {
    uVar8 = *(undefined8 *)(*(long *)(gLawnApp + 0x4f8) + 0xcc0);
    uVar12 = FUN_03eaadc8(uVar8,*(undefined8 *)(*(long *)(gLawnApp + 0x4f8) + 0xcc8));
    if (uVar12 <= uVar15) break;
    uVar8 = FUN_03eaadd4(uVar8,uVar15);
    uVar8 = FUN_0545ec84(auStack_168,uVar8);
    uVar8 = FUN_054603b8(uVar8,&DAT_05593348);
    lVar13 = FUN_03eaadd4(*(undefined8 *)(*(long *)(gLawnApp + 0x4f8) + 0xcc0),uVar15);
    uVar8 = FUN_0546065c(uVar8,*(undefined1 *)(lVar13 + 8));
    FUN_054603b8(uVar8,&DAT_05594620);
    uVar15 = uVar15 + 1;
  }
  uVar8 = LogServer::Instance();
  FUN_05462824((string *)&local_180,auStack_178);
  LogServer::AppendMsg(uVar8,(string *)&local_180);
  std::string::~string((string *)&local_180);
  FUN_05462824(asStack_1b0,auStack_178);
  this_00 = (Util *)LogServer::Instance();
  Android::Util::GetPackageName(this_00);
  LogServer::AppendMsg(this_00,(string *)&local_180);
  std::string::~string((string *)&local_180);
  std::string::string((string *)&local_180,"");
  FUN_05462980(auStack_178,(string *)&local_180);
  std::string::~string((string *)&local_180);
  nop();
  uVar15 = 0;
  while( true ) {
    uVar8 = *(undefined8 *)(*(long *)(gLawnApp + 0x4f8) + 0xcd8);
    uVar12 = FUN_03eaaddc(uVar8,*(undefined8 *)(*(long *)(gLawnApp + 0x4f8) + 0xce0));
    if (uVar12 <= uVar15) break;
    puVar14 = (undefined4 *)FUN_03eaade8(uVar8,uVar15);
    uVar8 = FUN_0546065c(auStack_168,*puVar14);
    uVar8 = FUN_054603b8(uVar8,&DAT_05593348);
    lVar13 = FUN_03eaade8(*(undefined8 *)(*(long *)(gLawnApp + 0x4f8) + 0xcd8),uVar15);
    uVar8 = FUN_0546065c(uVar8,*(undefined4 *)(lVar13 + 4));
    FUN_054603b8(uVar8,&DAT_05594620);
    uVar15 = uVar15 + 1;
  }
  uVar8 = LogServer::Instance();
  FUN_05462824((string *)&local_180,auStack_178);
  LogServer::AppendMsg(uVar8,(string *)&local_180);
  std::string::~string((string *)&local_180);
  FUN_05462824(asStack_1a8,auStack_178);
  std::string::string((string *)&local_180,"");
  FUN_05462980(auStack_178,(string *)&local_180);
  std::string::~string((string *)&local_180);
  nop();
  uVar15 = 0;
  while( true ) {
    uVar8 = *(undefined8 *)(*(long *)(gLawnApp + 0x4f8) + 0xcf0);
    uVar12 = FUN_03eaadb4(uVar8,*(undefined8 *)(*(long *)(gLawnApp + 0x4f8) + 0xcf8));
    if (uVar12 <= uVar15) break;
    puVar14 = (undefined4 *)FUN_03eaadf0(uVar8,uVar15);
    uVar8 = FUN_0546065c(auStack_168,*puVar14);
    FUN_054603b8(uVar8,&DAT_05594620);
    uVar15 = uVar15 + 1;
  }
  uVar8 = LogServer::Instance();
  FUN_05462824((string *)&local_180,auStack_178);
  LogServer::AppendMsg(uVar8,(string *)&local_180);
  std::string::~string((string *)&local_180);
  FUN_05462824(asStack_1a0,auStack_178);
  std::string::string((string *)&local_180,"");
  FUN_05462980(auStack_178,(string *)&local_180);
  std::string::~string((string *)&local_180);
  nop();
  uVar15 = 0;
  while( true ) {
    uVar8 = *(undefined8 *)(*(long *)(gLawnApp + 0x4f8) + 0xd08);
    uVar12 = FUN_03eaadf8(uVar8,*(undefined8 *)(*(long *)(gLawnApp + 0x4f8) + 0xd10));
    if (uVar12 <= uVar15) break;
    puVar14 = (undefined4 *)FUN_03eaae04(uVar8,uVar15);
    uVar8 = FUN_0546065c(auStack_168,*puVar14);
    uVar8 = FUN_054603b8(uVar8,&DAT_05593348);
    lVar13 = FUN_03eaae04(*(undefined8 *)(*(long *)(gLawnApp + 0x4f8) + 0xd08),uVar15);
    uVar8 = FUN_0546065c(uVar8,*(undefined4 *)(lVar13 + 4));
    FUN_054603b8(uVar8,&DAT_05594620);
    uVar15 = uVar15 + 1;
  }
  uVar8 = LogServer::Instance();
  FUN_05462824((string *)&local_180,auStack_178);
  LogServer::AppendMsg(uVar8,(string *)&local_180);
  std::string::~string((string *)&local_180);
  FUN_05462824(asStack_198,auStack_178);
  std::string::string((string *)&local_180,"");
  FUN_05462980(auStack_178,(string *)&local_180);
  std::string::~string((string *)&local_180);
  nop();
  uVar15 = 0;
  while( true ) {
    uVar8 = *(undefined8 *)(*(long *)(gLawnApp + 0x4f8) + 0xd20);
    uVar12 = FUN_03eaadb4(uVar8,*(undefined8 *)(*(long *)(gLawnApp + 0x4f8) + 0xd28));
    if (uVar12 <= uVar15) break;
    puVar14 = (undefined4 *)FUN_03eaadf0(uVar8,uVar15);
    uVar8 = FUN_0546065c(auStack_168,*puVar14);
    FUN_054603b8(uVar8,&DAT_05594620);
    uVar15 = uVar15 + 1;
  }
  uVar8 = LogServer::Instance();
  FUN_05462824((string *)&local_180,auStack_178);
  LogServer::AppendMsg(uVar8,(string *)&local_180);
  std::string::~string((string *)&local_180);
  FUN_05462824((string *)local_190,auStack_178);
  std::string::string((string *)&local_180,"");
  FUN_05462980(auStack_178,(string *)&local_180);
  std::string::~string((string *)&local_180);
  nop();
  uVar15 = 0;
  while( true ) {
    uVar8 = *(undefined8 *)(*(long *)(gLawnApp + 0x4f8) + 0xd38);
    uVar12 = FUN_03eaadb4(uVar8,*(undefined8 *)(*(long *)(gLawnApp + 0x4f8) + 0xd40));
    if (uVar12 <= uVar15) break;
    puVar14 = (undefined4 *)FUN_03eaadf0(uVar8,uVar15);
    uVar8 = FUN_0546065c(auStack_168,*puVar14);
    FUN_054603b8(uVar8,&DAT_05594620);
    uVar15 = uVar15 + 1;
  }
  uVar8 = LogServer::Instance();
  uVar2 = SUB81(auStack_1c8,0);
  FUN_05462824((string *)&local_180,auStack_178);
  LogServer::AppendMsg(uVar8,(string *)&local_180);
  std::string::~string((string *)&local_180);
  FUN_05462824((string *)local_188,auStack_178);
  std::string::string((string *)&local_180,"");
  FUN_05462980(auStack_178,(string *)&local_180);
  std::string::~string((string *)&local_180);
  nop();
  uVar4 = FUN_03eaad74(*(undefined4 *)(lVar7 + 0xdc8));
  FUN_0546065c(auStack_168,uVar4);
  uVar8 = LogServer::Instance();
  FUN_05462824((string *)&local_180,auStack_178);
  LogServer::AppendMsg(uVar8,(string *)&local_180);
  std::string::~string((string *)&local_180);
  iVar5 = EA::StdC::Spawn(gLawnApp,extraout_x1,(bool)uVar2);
  std::string::string((string *)&local_180,"");
  FUN_05462980(auStack_178,(string *)&local_180);
  std::string::~string((string *)&local_180);
  nop();
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  FUN_0546065c(auStack_168,iVar5);
  uVar8 = LogServer::Instance();
  FUN_05462824((string *)&local_180,auStack_178);
  LogServer::AppendMsg(uVar8,(string *)&local_180);
  std::string::~string((string *)&local_180);
  this_01 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_01);
  this[200] = (MetricsCollector)0x0;
  std::string::~string((string *)local_188);
  std::string::~string((string *)local_190);
  std::string::~string(asStack_198);
  std::string::~string(asStack_1a0);
  std::string::~string(asStack_1a8);
  std::string::~string(asStack_1b0);
  std::string::~string(asStack_1b8);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::OnGift(std::string const&, int) */

void __thiscall MetricsCollector::OnGift(MetricsCollector *this,string *param_1,int param_2)

{
  undefined4 uVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined8 uVar2;
  vector *pvVar3;
  undefined4 *puVar4;
  ulong uVar5;
  Util *this_02;
  LogServer *this_03;
  ulong uVar6;
  string asStack_1b0 [8];
  string asStack_1a8 [8];
  string asStack_1a0 [8];
  string asStack_198 [8];
  undefined8 local_190;
  undefined8 local_188;
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  FUN_0546065c(auStack_168,param_2);
  uVar2 = LogServer::Instance();
  std::string::string(asStack_1b0,"rechargegift_1");
  uVar2 = LogServer::AppendMsg(uVar2,asStack_1b0);
  Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetAccountName();
  uVar2 = LogServer::AppendMsg(uVar2,asStack_1a8);
  FUN_05475d88(asStack_1a0,this + 0x120);
  uVar2 = LogServer::AppendMsg(uVar2,asStack_1a0);
  FUN_05462824(asStack_198,auStack_178);
  uVar2 = LogServer::AppendMsg(uVar2,asStack_198);
  FUN_05475d88((string *)&local_190,param_1);
  LogServer::AppendMsg(uVar2,(string *)&local_190);
  std::string::~string((string *)&local_190);
  std::string::~string(asStack_198);
  std::string::~string(asStack_1a0);
  std::string::~string(asStack_1a8);
  std::string::~string(asStack_1b0);
  nop();
  std::string::string((string *)&local_190,"");
  FUN_05462980(auStack_178,(string *)&local_190);
  std::string::~string((string *)&local_190);
  nop();
  uVar1 = PlayerInfo::GetRechargeGems(this_01);
  FUN_0546065c(auStack_168,uVar1);
  uVar2 = LogServer::Instance();
  FUN_05462824((string *)&local_190,auStack_178);
  LogServer::AppendMsg(uVar2,(string *)&local_190);
  std::string::~string((string *)&local_190);
  std::string::string((string *)&local_190,"");
  FUN_05462980(auStack_178,(string *)&local_190);
  std::string::~string((string *)&local_190);
  nop();
  uVar1 = NewPVPMgr::GetSeasonEndTime((NewPVPMgr *)this_01);
  FUN_0546065c(auStack_168,uVar1);
  uVar2 = LogServer::Instance();
  FUN_05462824((string *)&local_190,auStack_178);
  LogServer::AppendMsg(uVar2,(string *)&local_190);
  std::string::~string((string *)&local_190);
  std::string::string((string *)&local_190,"");
  FUN_05462980(auStack_178,(string *)&local_190);
  std::string::~string((string *)&local_190);
  nop();
  uVar1 = PlayerInfo::GetNumCoins(this_01,false);
  FUN_0546065c(auStack_168,uVar1);
  uVar2 = LogServer::Instance();
  FUN_05462824((string *)&local_190,auStack_178);
  LogServer::AppendMsg(uVar2,(string *)&local_190);
  std::string::~string((string *)&local_190);
  std::string::string((string *)&local_190,"");
  FUN_05462980(auStack_178,(string *)&local_190);
  std::string::~string((string *)&local_190);
  nop();
  pvVar3 = (vector *)WorldMap::GetActionsMgr((WorldMap *)this_01);
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)&local_190,pvVar3)
  ;
  uVar6 = 0;
  while( true ) {
    uVar2 = local_190;
    uVar5 = FUN_03eaadb4(local_190,local_188);
    if (uVar5 <= uVar6) break;
    puVar4 = (undefined4 *)FUN_03eaadc0(uVar2,uVar6);
    uVar2 = FUN_0546065c(auStack_168,*puVar4);
    FUN_054603b8(uVar2,&DAT_05593348);
    uVar6 = uVar6 + 1;
  }
  this_02 = (Util *)LogServer::Instance();
  Android::Util::GetPackageName(this_02);
  LogServer::AppendMsg(this_02,asStack_198);
  std::string::~string(asStack_198);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_198,auStack_178);
  this_03 = (LogServer *)LogServer::AppendMsg(uVar2,asStack_198);
  LogServer::SendMsg(this_03);
  std::string::~string(asStack_198);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_190);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MetricsCollector::~MetricsCollector() */

void __thiscall MetricsCollector::~MetricsCollector(MetricsCollector *this)

{
  *(undefined ***)this = &PTR__MetricsCollector_067926d0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  MagentoProductProps::~MagentoProductProps((MagentoProductProps *)(this + 400));
  std::vector<PlantSalesUiReward,std::allocator<PlantSalesUiReward>>::~vector
            ((vector<PlantSalesUiReward,std::allocator<PlantSalesUiReward>> *)(this + 0x178));
  PlantAdventureRewardInfo::~PlantAdventureRewardInfo((PlantAdventureRewardInfo *)(this + 0x130));
  std::string::~string((string *)(this + 0x120));
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::~map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
          *)(this + 0xf0));
  std::vector<PlantMetrics,std::allocator<PlantMetrics>>::~vector
            ((vector<PlantMetrics,std::allocator<PlantMetrics>> *)(this + 0xd8));
  std::string::~string((string *)(this + 0xc0));
  std::string::~string((string *)(this + 0x30));
  std::string::~string((string *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  return;
}


/* MetricsCollector::~MetricsCollector() */

void __thiscall MetricsCollector::~MetricsCollector(MetricsCollector *this)

{
  ~MetricsCollector(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onSummerActivity(std::string const&) */

void __thiscall MetricsCollector::onSummerActivity(MetricsCollector *this,string *param_1)

{
  undefined1 auStack_48 [16];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  vector<std::string,std::allocator<std::string>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_38,"Join");
  FUN_05475d88(asStack_30,param_1);
  std::vector<std::string,std::allocator<std::string>>::vector(avStack_20,asStack_30,1,auStack_48);
  std::string::string(asStack_28,"");
  BehaviorLog::event(asStack_38,(vector *)avStack_20,asStack_28);
  std::string::~string(asStack_28);
  nop();
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_20);
  std::string::~string(asStack_30);
  std::string::~string(asStack_38);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onBlackPackageCharge(std::string const&) */

void __thiscall MetricsCollector::onBlackPackageCharge(MetricsCollector *this,string *param_1)

{
  undefined1 auStack_50 [16];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  vector<std::string,std::allocator<std::string>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"BR");
  std::string::string(asStack_30,"1");
  FUN_05475d88(asStack_28,param_1);
  std::vector<std::string,std::allocator<std::string>>::vector(avStack_20,asStack_30,2,auStack_50);
  std::string::string(asStack_38,"");
  BehaviorLog::inGameBehavior(asStack_40,(vector *)avStack_20,asStack_38);
  std::string::~string(asStack_38);
  nop();
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_20);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  nop();
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onWishItem(std::string const&) */

void __thiscall MetricsCollector::onWishItem(MetricsCollector *this,string *param_1)

{
  undefined8 uVar1;
  LogServer *this_00;
  undefined1 auStack_50 [16];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_20,"wishitem");
  AppendLogHead(this,asStack_20);
  std::string::~string(asStack_20);
  nop();
  uVar1 = LogServer::Instance();
  FUN_05475d88(asStack_20,param_1);
  LogServer::AppendMsg(uVar1,asStack_20);
  std::string::~string(asStack_20);
  this_00 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_00);
  std::string::string(asStack_40,"Daily_Boss");
  std::string::string(asStack_30,"Plant_Desire");
  FUN_05475d88(asStack_28,param_1);
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)asStack_20,asStack_30,2,auStack_50);
  std::string::string(asStack_38,"");
  BehaviorLog::event(asStack_40,(vector *)asStack_20,asStack_38);
  std::string::~string(asStack_38);
  nop();
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)asStack_20);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  nop();
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onFiveYearsCosmobonus(std::vector<int, std::allocator<int> > const&) */

void __thiscall MetricsCollector::onFiveYearsCosmobonus(MetricsCollector *this,vector *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_1b8 [16];
  string asStack_1a8 [8];
  string asStack_1a0 [8];
  undefined8 local_198;
  undefined8 local_190 [3];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar2);
  std::string::string((string *)local_190,"");
  FUN_05462980(auStack_178,(string *)local_190);
  std::string::~string((string *)local_190);
  nop();
  local_198 = FUN_03ebae5c(*(undefined8 *)param_1);
  while( true ) {
    local_190[0] = FUN_03ebaeac(*(undefined8 *)(param_1 + 8));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_198,(__normal_iterator *)local_190);
    if (!bVar1) break;
    puVar3 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_198);
    FUN_0546065c(auStack_168,*puVar3);
    FUN_054603b8(auStack_168,&DAT_05593348);
    FUN_03ebaefc((exception_ptr *)&local_198);
  }
  std::string::string(asStack_1a8,"FiveYears_Cosmobonus");
  FUN_05462824(asStack_1a0,auStack_178);
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)local_190,asStack_1a0,1,auStack_1b8)
  ;
  std::string::string((string *)&local_198,"");
  BehaviorLog::event(asStack_1a8,(vector *)local_190,(string *)&local_198);
  std::string::~string((string *)&local_198);
  nop();
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)local_190);
  std::string::~string(asStack_1a0);
  std::string::~string(asStack_1a8);
  nop();
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onNationalDayStoneLottery(int, int) */

void __thiscall
MetricsCollector::onNationalDayStoneLottery(MetricsCollector *this,int param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 auStack_1b0 [8];
  string asStack_1a8 [8];
  string asStack_1a0 [8];
  string asStack_198 [8];
  string asStack_190 [24];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_190,"");
  FUN_05462980(auStack_178,asStack_190);
  std::string::~string(asStack_190);
  nop();
  FUN_0546065c(auStack_168,param_1);
  FUN_054603b8(auStack_168,&DAT_055933a0);
  FUN_0546065c(auStack_168,param_2);
  std::string::string(asStack_1a0,"2019_SUMMER");
  std::string::string(asStack_198,"USE_DIAMOND_LOTTERY_DRAW");
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)asStack_190,asStack_198,1,
             auStack_1b0);
  FUN_05462824(asStack_1a8,auStack_178);
  BehaviorLog::event(asStack_1a0,(vector *)asStack_190,asStack_1a8);
  std::string::~string(asStack_1a8);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)asStack_190);
  std::string::~string(asStack_198);
  nop();
  std::string::~string(asStack_1a0);
  nop();
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onNationalDayChargeReward(std::string const&, std::vector<int,
   std::allocator<int> > const&) */

void __thiscall
MetricsCollector::onNationalDayChargeReward(MetricsCollector *this,string *param_1,vector *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 auStack_1c0 [16];
  string asStack_1b0 [8];
  undefined8 local_1a8;
  string asStack_1a0 [8];
  string asStack_198 [8];
  undefined8 local_190 [3];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((DAT_06ae1240 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_06ae1240), iVar4 != 0)) {
    Set8BytesTo0(&DAT_06ae1168);
    __cxa_guard_release(&DAT_06ae1240);
    __cxa_atexit(std::string::~string,&DAT_06ae1168,&DAT_06a88000);
  }
  cVar1 = std::vector<int,std::allocator<int>>::empty((vector<int,std::allocator<int>> *)param_2);
  if (cVar1 == '\0') {
    uVar3 = operator|(0x10,8);
    FUN_05462470(auStack_178,uVar3);
    std::string::string((string *)local_190,"");
    FUN_05462980(auStack_178,(string *)local_190);
    std::string::~string((string *)local_190);
    nop();
    local_1a8 = FUN_03ebae5c(*(undefined8 *)param_2);
    local_190[0] = FUN_03ebaeac(*(undefined8 *)(param_2 + 8));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_1a8,(__normal_iterator *)local_190), bVar2
          ) {
      puVar5 = (undefined4 *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_1a8);
      FUN_0546065c(auStack_168,*puVar5);
      FUN_054603b8(auStack_168,&DAT_05593348);
      eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_1a8);
    }
    std::string::string(asStack_1b0,"National_Day_Recharge");
    FUN_05475d88(asStack_1a0,&DAT_06ae1168);
    FUN_05462824(asStack_198,auStack_178);
    std::vector<std::string,std::allocator<std::string>>::vector
              ((vector<std::string,std::allocator<std::string>> *)local_190,asStack_1a0,2,
               auStack_1c0);
    std::string::string((string *)&local_1a8,"");
    BehaviorLog::event(asStack_1b0,(vector *)local_190,(string *)&local_1a8);
    std::string::~string((string *)&local_1a8);
    nop();
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)local_190);
    std::string::~string(asStack_198);
    std::string::~string(asStack_1a0);
    std::string::~string(asStack_1b0);
    nop();
    FUN_054617bc(auStack_178);
  }
  else {
    thunk_FUN_05475e00(&DAT_06ae1168,param_1);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* MetricsCollector::onRechargeLogWithSalesUiReward(Sexy::RtWeakPtr<MagentoProductProps> const&) */

void __thiscall
MetricsCollector::onRechargeLogWithSalesUiReward(MetricsCollector *this,RtWeakPtr *param_1)

{
  MagentoProductProps *pMVar1;
  
  pMVar1 = (MagentoProductProps *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  MagentoProductProps::operator=((MagentoProductProps *)(this + 400),pMVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::NeedPlantTrialLog(std::string const&) */

void __thiscall MetricsCollector::NeedPlantTrialLog(MetricsCollector *this,string *param_1)

{
  bool bVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *pPVar3;
  PlantTrialConfig *this_01;
  long lVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar2 = ProfileUtils::TotalGamesPlayedForLevel(param_1,pPVar3);
  if (iVar2 < 2) {
    iVar2 = Board::GetBoardResult(*(Board **)(gLawnApp + 0x9f0));
    if (iVar2 - 1U < 2) {
      this_01 = (PlantTrialConfig *)LawnApp::GetPlantTrialConfig(gLawnApp);
      lVar4 = PlantTrialConfig::GetLogDataByLevel(this_01,param_1);
      if (lVar4 != 0) {
        local_18 = std::
                   map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                   ::find((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                           *)(this + 0xf0),(string *)(lVar4 + 8));
        local_10 = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)(this + 0xf0));
        bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
        goto LAB_03ec6cb8;
      }
    }
  }
  bVar1 = false;
LAB_03ec6cb8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onCommonBuryInterface(int, TrackInfo const&, bool) */

void __thiscall
MetricsCollector::onCommonBuryInterface
          (MetricsCollector *this,int param_1,TrackInfo *param_2,bool param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  string *psVar4;
  TrackInfo *this_00;
  int local_54;
  undefined1 auStack_50 [8];
  undefined8 local_48;
  undefined8 local_40 [3];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_54 = param_1;
  if (((DAT_06ae1230 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ae1230), iVar2 != 0)) {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
           *)&DAT_06ae1170);
    __cxa_guard_release(&DAT_06ae1230);
    __cxa_atexit(std::
                 map<int,TrackInfo,std::less<int>,std::allocator<std::pair<int_const,TrackInfo>>>::
                 ~map,&DAT_06ae1170,&DAT_06a88000);
  }
  local_48 = std::map<int,TrackInfo,std::less<int>,std::allocator<std::pair<int_const,TrackInfo>>>::
             find((map<int,TrackInfo,std::less<int>,std::allocator<std::pair<int_const,TrackInfo>>>
                   *)&DAT_06ae1170,&local_54);
  local_40[0] = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)&DAT_06ae1170);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_48,(rbtree_iterator *)local_40);
  if (bVar1) {
    lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_48);
    thunk_FUN_054757c0(lVar3 + 8,param_2);
    thunk_FUN_054757c0(lVar3 + 0x10,param_2 + 8);
    thunk_FUN_054757c0(lVar3 + 0x18,param_2 + 0x10);
    thunk_FUN_054757c0(lVar3 + 0x20,param_2 + 0x18);
    thunk_FUN_054757c0(lVar3 + 0x28,param_2 + 0x20);
    thunk_FUN_054757c0(lVar3 + 0x30,param_2 + 0x28);
  }
  else {
    this_00 = (TrackInfo *)
              std::map<int,TrackInfo,std::less<int>,std::allocator<std::pair<int_const,TrackInfo>>>
              ::operator[]((map<int,TrackInfo,std::less<int>,std::allocator<std::pair<int_const,TrackInfo>>>
                            *)&DAT_06ae1170,&local_54);
    TrackInfo::operator=(this_00,param_2);
  }
  if (!param_3) {
    psVar4 = (string *)
             std::map<int,TrackInfo,std::less<int>,std::allocator<std::pair<int_const,TrackInfo>>>::
             operator[]((map<int,TrackInfo,std::less<int>,std::allocator<std::pair<int_const,TrackInfo>>>
                         *)&DAT_06ae1170,&local_54);
    lVar3 = std::map<int,TrackInfo,std::less<int>,std::allocator<std::pair<int_const,TrackInfo>>>::
            operator[]((map<int,TrackInfo,std::less<int>,std::allocator<std::pair<int_const,TrackInfo>>>
                        *)&DAT_06ae1170,&local_54);
    FUN_05475d88(asStack_28,lVar3 + 8);
    lVar3 = std::map<int,TrackInfo,std::less<int>,std::allocator<std::pair<int_const,TrackInfo>>>::
            operator[]((map<int,TrackInfo,std::less<int>,std::allocator<std::pair<int_const,TrackInfo>>>
                        *)&DAT_06ae1170,&local_54);
    FUN_05475d88(asStack_20,lVar3 + 0x10);
    lVar3 = std::map<int,TrackInfo,std::less<int>,std::allocator<std::pair<int_const,TrackInfo>>>::
            operator[]((map<int,TrackInfo,std::less<int>,std::allocator<std::pair<int_const,TrackInfo>>>
                        *)&DAT_06ae1170,&local_54);
    FUN_05475d88(asStack_18,lVar3 + 0x18);
    lVar3 = std::map<int,TrackInfo,std::less<int>,std::allocator<std::pair<int_const,TrackInfo>>>::
            operator[]((map<int,TrackInfo,std::less<int>,std::allocator<std::pair<int_const,TrackInfo>>>
                        *)&DAT_06ae1170,&local_54);
    FUN_05475d88(asStack_10,lVar3 + 0x20);
    std::vector<std::string,std::allocator<std::string>>::vector
              ((vector<std::string,std::allocator<std::string>> *)local_40,asStack_28,4,auStack_50);
    lVar3 = std::map<int,TrackInfo,std::less<int>,std::allocator<std::pair<int_const,TrackInfo>>>::
            operator[]((map<int,TrackInfo,std::less<int>,std::allocator<std::pair<int_const,TrackInfo>>>
                        *)&DAT_06ae1170,&local_54);
    BehaviorLog::inGameBehavior(psVar4,(vector *)local_40,(string *)(lVar3 + 0x28));
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)local_40);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    std::string::~string(asStack_20);
    std::string::~string(asStack_28);
    std::map<int,TrackInfo,std::less<int>,std::allocator<std::pair<int_const,TrackInfo>>>::erase
              ((int *)&DAT_06ae1170);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* MetricsCollector::Init() */

void __thiscall MetricsCollector::Init(MetricsCollector *this)

{
  Sexy::Event0::Connect<MetricsCollector,void(MetricsCollector::*)()>
            ((MetricsCollector *)(*(long *)(Sexy::gSexyAppBase + 0x10) + 0x48),(_func_void *)this,
             true);
  registerEventsWithLawnApp(this);
  return;
}


/* MetricsCollector::MetricsCollector() */

void __thiscall MetricsCollector::MetricsCollector(MetricsCollector *this)

{
  undefined8 uVar1;
  
  *(undefined ***)this = &PTR__MetricsCollector_067926d0;
  uVar1 = FakeHttpDriver::GetInstance();
  *(undefined8 *)(this + 0x10) = uVar1;
  Set8BytesTo0(this + 0x20);
  Set8BytesTo0(this + 0x28);
  Set8BytesTo0(this + 0x30);
  GameplayMetrics::GameplayMetrics((GameplayMetrics *)(this + 0x38));
  Set8BytesTo0(this + 0xc0);
  this[200] = (MetricsCollector)0x0;
  this[0xca] = (MetricsCollector)0x0;
  *(undefined8 *)(this + 0xd0) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xd8));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0xf0));
  Set8BytesTo0(this + 0x120);
  PlantAdventureRewardInfo::PlantAdventureRewardInfo((PlantAdventureRewardInfo *)(this + 0x130));
  *(undefined4 *)(this + 0x170) = 0;
  *(undefined4 *)(this + 0x174) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x178));
  MagentoProductProps::MagentoProductProps((MagentoProductProps *)(this + 400));
  resetGameData(this);
  thunk_FUN_05475e00(this + 0x120,Sexy::gSexyAppBase + 0x3d0);
  *(undefined4 *)(this + 0x128) = 0;
  this[0xc9] = (MetricsCollector)0x1;
  return;
}


/* MetricsCollector::onAddPlantSalesUiReward(PlantSalesUiReward const&) */

void __thiscall
MetricsCollector::onAddPlantSalesUiReward(MetricsCollector *this,PlantSalesUiReward *param_1)

{
  std::vector<PlantSalesUiReward,std::allocator<PlantSalesUiReward>>::push_back
            ((vector<PlantSalesUiReward,std::allocator<PlantSalesUiReward>> *)(this + 0x178),param_1
            );
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::GetOrCreatePlantMetrics(std::string const&) */

void __thiscall MetricsCollector::GetOrCreatePlantMetrics(MetricsCollector *this,string *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  char *__s;
  string *psVar3;
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 local_18 [2];
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0xd8);
  local_8 = ___stack_chk_guard;
  __s = (char *)MetricsCollectorNameSpace::GetMetricsPlantNameForPlantType(param_1);
  std::string::string(asStack_28,__s);
  nop();
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  while( true ) {
    local_18[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(this_00);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)local_18);
    if (!bVar2) break;
    psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    cVar1 = std::operator==(psVar3,asStack_28);
    if (cVar1 != '\0') goto LAB_03ec9d5c;
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_20);
  }
  PvpPlantLostRecord::PvpPlantLostRecord((PvpPlantLostRecord *)local_18);
  std::vector<PlantMetrics,std::allocator<PlantMetrics>>::push_back
            ((vector<PlantMetrics,std::allocator<PlantMetrics>> *)this_00,(PlantMetrics *)local_18);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)local_18);
  psVar3 = (string *)
           std::
           vector<std::pair<FEAST::CPrsCSTNode*,bool>,std::allocator<std::pair<FEAST::CPrsCSTNode*,bool>>>
           ::back((vector<std::pair<FEAST::CPrsCSTNode*,bool>,std::allocator<std::pair<FEAST::CPrsCSTNode*,bool>>>
                   *)this_00);
  thunk_FUN_05475e00(psVar3,asStack_28);
LAB_03ec9d5c:
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(psVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onPlantPlanted(Plant*) */

void __thiscall MetricsCollector::onPlantPlanted(MetricsCollector *this,Plant *param_1)

{
  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  *this_00;
  char cVar1;
  long lVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Plant *)0x0) {
    *(int *)(this + 0x68) = *(int *)(this + 0x68) + 1;
    this_00 = (map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
               *)(this + 0xf0);
    Plant::GetType();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    lVar2 = GetOrCreatePlantMetrics(this,(string *)(lVar2 + 8));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    Plant::GetType();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    local_18 = std::
               map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
               ::find(this_00,(string *)(lVar2 + 8));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_00);
    cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
    if (cVar1 == '\0') {
      Plant::GetType();
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      piVar4 = (int *)std::
                      map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                      ::operator[](this_00,(string *)(lVar2 + 8));
      *piVar4 = *piVar4 + 1;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    }
    else {
      Plant::GetType();
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      puVar3 = (undefined4 *)
               std::
               map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
               ::operator[](this_00,(string *)(lVar2 + 8));
      *puVar3 = 1;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::OnGetRechargeGems(int, int) */

void __thiscall MetricsCollector::OnGetRechargeGems(MetricsCollector *this,int param_1,int param_2)

{
  undefined4 uVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined8 uVar2;
  Util *this_02;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var3;
  long lVar4;
  LogServer *this_03;
  char *__s;
  string *__n;
  string asStack_1d8 [8];
  string asStack_1d0 [16];
  string asStack_1c0 [24];
  string asStack_1a8 [8];
  string asStack_1a0 [8];
  undefined1 auStack_198 [32];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  uVar2 = LogServer::Instance();
  std::string::string(asStack_1d8,"getrechargegems_2");
  uVar2 = LogServer::AppendMsg(uVar2,asStack_1d8);
  GetPCPID();
  uVar2 = LogServer::AppendMsg(uVar2,asStack_1d0);
  FUN_05475d88(asStack_1c0,this + 0x120);
  LogServer::AppendMsg(uVar2,asStack_1c0);
  std::string::~string(asStack_1c0);
  std::string::~string(asStack_1d0);
  std::string::~string(asStack_1d8);
  nop();
  FUN_0546065c(auStack_168,param_1);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_1c0,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_1c0);
  std::string::~string(asStack_1c0);
  std::string::string(asStack_1c0,"");
  FUN_05462980(auStack_178,asStack_1c0);
  std::string::~string(asStack_1c0);
  nop();
  FUN_0546065c(auStack_168,param_2);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_1c0,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_1c0);
  std::string::~string(asStack_1c0);
  std::string::string(asStack_1c0,"");
  FUN_05462980(auStack_178,asStack_1c0);
  std::string::~string(asStack_1c0);
  nop();
  uVar1 = PlayerInfo::GetNumGems(this_01,false);
  FUN_0546065c(auStack_168,uVar1);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_1c0,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_1c0);
  std::string::~string(asStack_1c0);
  std::string::string(asStack_1c0,"");
  FUN_05462980(auStack_178,asStack_1c0);
  std::string::~string(asStack_1c0);
  nop();
  uVar1 = NewPVPMgr::GetSeasonEndTime((NewPVPMgr *)this_01);
  FUN_0546065c(auStack_168,uVar1);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_1c0,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_1c0);
  std::string::~string(asStack_1c0);
  this_02 = (Util *)LogServer::Instance();
  Android::Util::GetPackageName(this_02);
  LogServer::AppendMsg(this_02,asStack_1c0);
  std::string::~string(asStack_1c0);
  std::string::string(asStack_1d8,"unknown");
  nop();
  p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar4 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_rightmost(p_Var3);
  if (lVar4 != 0) {
    p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    std::
    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
    ::_M_rightmost(p_Var3);
    PurchaseBroker::GetPurchasePlatform();
    FUN_05474278(asStack_1d8,asStack_1c0);
    std::string::~string(asStack_1c0);
  }
  uVar2 = LogServer::Instance();
  FUN_05475d88(asStack_1c0,asStack_1d8);
  LogServer::AppendMsg(uVar2,asStack_1c0);
  std::string::~string(asStack_1c0);
  std::string::string(asStack_1c0,"");
  FUN_05462980(auStack_178,asStack_1c0);
  std::string::~string(asStack_1c0);
  nop();
  FUN_0546065c(auStack_168,0);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_1c0,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_1c0);
  std::string::~string(asStack_1c0);
  __n = asStack_1d0;
  std::string::string(asStack_1c0,"");
  FUN_05462980(auStack_178,asStack_1c0);
  std::string::~string(asStack_1c0);
  nop();
  PlantAnimRig_HoyaCordata::getIdleAnimationName();
  FUN_0545ec84(auStack_168,asStack_1c0);
  std::string::~string(asStack_1c0);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_1c0,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_1c0);
  std::string::~string(asStack_1c0);
  this_03 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_03);
  RechargeInfo::RechargeInfo((RechargeInfo *)asStack_1c0);
  thunk_FUN_05475e00(auStack_198,asStack_1d8);
  DString::DString((DString *)asStack_1d0,param_2);
  __s = (char *)DString::c_str((DString *)asStack_1d0);
  std::string::append(asStack_1a8,__s,(size_t)__n);
  DString::~DString((DString *)asStack_1d0);
  std::string::append(asStack_1a0,"Recharge_Gems",(size_t)__n);
  RechargeInfo::~RechargeInfo((RechargeInfo *)asStack_1c0);
  std::string::~string(asStack_1d8);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onFestivalBuyTimes(int, int, int) */

void __thiscall
MetricsCollector::onFestivalBuyTimes(MetricsCollector *this,int param_1,int param_2,int param_3)

{
  string *psVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  int *piVar5;
  KV *pKVar6;
  char *pcVar7;
  TGALogMgr *this_02;
  int extraout_w1;
  int extraout_w1_00;
  PIInterpolator *__n;
  string *psVar8;
  int local_134 [8];
  int local_114;
  string asStack_110 [8];
  string asStack_108 [8];
  string asStack_100 [8];
  DString aDStack_f8 [16];
  DString aDStack_e8 [16];
  DString aDStack_d8 [16];
  string asStack_c8 [16];
  KV aKStack_b8 [24];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  string asStack_88 [8];
  string asStack_80 [8];
  string asStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_134[0] = param_3;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    PlayerInfo::GetRechargeGems(this_01);
    iVar4 = NewPVPMgr::GetSeasonEndTime((NewPVPMgr *)this_01);
    local_114 = iVar4;
    piVar5 = eastl::min_alt<int>(&local_114,local_134);
    iVar2 = *piVar5;
    uVar3 = local_134[0] - iVar4;
    if (local_134[0] <= iVar4) {
      uVar3 = 0;
    }
    MetricsCollectorNameSpace::GetFreeGem
              ((MetricsCollectorNameSpace *)(ulong)(uint)-iVar2,extraout_w1);
    MetricsCollectorNameSpace::GetUsePaidGem
              ((MetricsCollectorNameSpace *)(ulong)uVar3,extraout_w1_00);
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)&local_a0);
    pKVar6 = (KV *)KV::add((KV *)&local_a0,aDStack_f8);
    pKVar6 = (KV *)KV::add(pKVar6,aDStack_e8);
    KV::KV(aKStack_b8,pKVar6);
    KV::~KV((KV *)&local_a0);
    KV::commit();
    pcVar7 = (char *)DString::c_str((DString *)&local_a0);
    DString::DString(aDStack_d8,pcVar7);
    DString::~DString((DString *)&local_a0);
    std::string::string(asStack_100,"Item_Purchase");
    std::string::string(asStack_88,"Store");
    std::string::string(asStack_80,"Daily_Boss");
    std::string::string(asStack_78,"Buy_Times");
    std::vector<std::string,std::allocator<std::string>>::vector
              ((vector<std::string,std::allocator<std::string>> *)&local_a0,asStack_88,3,asStack_108
              );
    DString::operator_cast_to_string(aDStack_d8);
    BehaviorLog::inGameBehavior(asStack_100,(vector *)&local_a0,asStack_c8);
    std::string::~string(asStack_c8);
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)&local_a0);
    std::string::~string(asStack_78);
    std::string::~string(asStack_80);
    std::string::~string(asStack_88);
    nop();
    nop();
    nop();
    std::string::~string(asStack_100);
    nop();
    std::string::string(asStack_110,"");
    nop();
    __n = (PIInterpolator *)&local_a0;
    std::string::string(asStack_108,"");
    nop();
    DString::DString((DString *)&local_a0,iVar2);
    pcVar7 = (char *)DString::c_str((DString *)&local_a0);
    std::string::append(asStack_110,pcVar7,(size_t)__n);
    DString::~DString((DString *)&local_a0);
    DString::DString((DString *)&local_a0,uVar3);
    pcVar7 = (char *)DString::c_str((DString *)&local_a0);
    std::string::append(asStack_108,pcVar7,(size_t)__n);
    DString::~DString((DString *)&local_a0);
    std::string::string(asStack_88,"2");
    nop();
    DString::DString((DString *)&local_a0,param_1);
    pcVar7 = (char *)DString::c_str((DString *)&local_a0);
    std::string::string(asStack_80,pcVar7);
    nop();
    DString::~DString((DString *)&local_a0);
    std::string::string(asStack_78,"");
    nop();
    std::string::string(asStack_70,"");
    nop();
    std::string::string(asStack_68,"");
    nop();
    std::string::string(asStack_60,"");
    nop();
    FUN_05475d88(auStack_58,asStack_110);
    FUN_05475d88(auStack_50,asStack_108);
    std::string::string(asStack_48,"");
    nop();
    std::string::string(asStack_40,"");
    nop();
    std::string::string(asStack_38,"");
    nop();
    std::string::string(asStack_30,"");
    nop();
    std::string::string(asStack_28,"");
    nop();
    std::string::string(asStack_20,"");
    nop();
    std::string::string(asStack_18,"");
    nop();
    std::string::string(asStack_10,"");
    nop();
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_a0);
    psVar8 = asStack_88;
    do {
      psVar1 = psVar8 + 8;
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)&local_a0,psVar8);
      psVar8 = psVar1;
    } while (psVar1 != (string *)&local_8);
    this_02 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    psVar8 = (string *)&local_8;
    DString::DString((DString *)asStack_c8,0x271a);
    pcVar7 = (char *)DString::c_str((DString *)asStack_c8);
    std::string::string(asStack_100,pcVar7);
    TGALogMgr::Log(this_02,asStack_100,(vector *)&local_a0);
    std::string::~string(asStack_100);
    nop();
    DString::~DString((DString *)asStack_c8);
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)&local_a0);
    do {
      psVar8 = psVar8 + -8;
      std::string::~string(psVar8);
    } while (psVar8 != asStack_88);
    std::string::~string(asStack_108);
    std::string::~string(asStack_110);
    DString::~DString(aDStack_d8);
    KV::~KV(aKStack_b8);
    DString::~DString(aDStack_e8);
    DString::~DString(aDStack_f8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onLoginRewardInfo(int, int, int) */

void __thiscall
MetricsCollector::onLoginRewardInfo(MetricsCollector *this,int param_1,int param_2,int param_3)

{
  char *pcVar1;
  int extraout_w1;
  int extraout_w1_00;
  size_t __n;
  undefined1 *__n_00;
  string *this_00;
  undefined1 auStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  DString aDStack_50 [16];
  DString aDStack_40 [16];
  string asStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (string *)(ulong)(uint)param_3;
  DString::DString(aDStack_50,param_1);
  Set8BytesTo0(asStack_68);
  __n = (size_t)(param_2 - 1U);
  if (9 < param_2 - 1U) goto LAB_03ece370;
  switch(__n) {
  case 0:
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)&local_20);
    MetricsCollectorNameSpace::GetCoin((MetricsCollectorNameSpace *)this_00,extraout_w1);
    goto LAB_03ece514;
  case 1:
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)&local_20);
    MetricsCollectorNameSpace::GetFreeGem((MetricsCollectorNameSpace *)this_00,extraout_w1_00);
LAB_03ece514:
    KV::add((KV *)&local_20,aDStack_40);
    KV::commit();
    pcVar1 = (char *)DString::c_str((DString *)asStack_30);
    std::string::append(asStack_68,pcVar1,__n);
    DString::~DString((DString *)asStack_30);
    DString::~DString(aDStack_40);
    KV::~KV((KV *)&local_20);
    goto LAB_03ece370;
  case 2:
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)&local_20);
    pcVar1 = "egypt";
    goto LAB_03ece5c0;
  case 3:
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)&local_20);
    pcVar1 = "pirate";
    goto LAB_03ece5c0;
  case 4:
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)&local_20);
    pcVar1 = "cowboy";
LAB_03ece5c0:
    __n_00 = auStack_70;
    std::string::string(asStack_60,pcVar1);
    MetricsCollectorNameSpace::GetKey((MetricsCollectorNameSpace *)asStack_60,this_00,(int)__n_00);
    goto LAB_03ece490;
  case 5:
    goto LAB_03ece370;
  case 6:
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)&local_20);
    __n_00 = auStack_70;
    std::string::string(asStack_60,"coconutcannon");
    break;
  case 7:
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)&local_20);
    __n_00 = auStack_70;
    std::string::string(asStack_60,"imitater");
    break;
  case 8:
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)&local_20);
    __n_00 = auStack_70;
    std::string::string(asStack_60,"lightningreed");
    break;
  case 9:
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)&local_20);
    __n_00 = auStack_70;
    std::string::string(asStack_60,"threepeater");
    this_00 = (string *)0xa;
  }
  MetricsCollectorNameSpace::GetPlantPiece
            ((MetricsCollectorNameSpace *)asStack_60,this_00,(int)__n_00);
LAB_03ece490:
  KV::add((KV *)&local_20,aDStack_40);
  KV::commit();
  pcVar1 = (char *)DString::c_str((DString *)asStack_30);
  std::string::append(asStack_68,pcVar1,(size_t)__n_00);
  DString::~DString((DString *)asStack_30);
  DString::~DString(aDStack_40);
  std::string::~string(asStack_60);
  nop();
  KV::~KV((KV *)&local_20);
LAB_03ece370:
  std::string::string(asStack_30,"Login_Reward");
  pcVar1 = (char *)DString::c_str(aDStack_50);
  std::string::string(asStack_58,pcVar1);
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)&local_20,asStack_58,1,aDStack_40);
  BehaviorLog::event(asStack_30,(vector *)&local_20,asStack_68);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&local_20);
  std::string::~string(asStack_58);
  nop();
  std::string::~string(asStack_30);
  nop();
  std::string::~string(asStack_68);
  DString::~DString(aDStack_50);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onItemLogin() */

void MetricsCollector::onItemLogin(void)

{
  bool bVar1;
  int iVar2;
  ProfileMgr *this;
  RtDbTable *this_00;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  KV *pKVar8;
  uint *puVar9;
  int *piVar10;
  PlantAccessoryMgr *this_01;
  long lVar11;
  MetricsCollectorNameSpace *this_02;
  char *__s;
  string *extraout_x1;
  string *extraout_x1_00;
  DString *pDVar12;
  DString aDStack_100 [16];
  DString aDStack_f0 [16];
  DString aDStack_e0 [16];
  DString aDStack_d0 [16];
  DString aDStack_c0 [16];
  DString aDStack_b0 [16];
  DString aDStack_a0 [16];
  DString aDStack_90 [16];
  DString aDStack_80 [16];
  DString aDStack_70 [16];
  undefined8 local_60 [2];
  undefined8 local_50 [2];
  undefined8 local_40 [2];
  DString aDStack_30 [16];
  PIInterpolator aPStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (RtDbTable *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 != (RtDbTable *)0x0) {
    puVar3 = (undefined8 *)Sexy::RtDbTable::GetSharedIteratorStorage(this_00);
    puVar4 = (undefined8 *)PlayerInfo::GetPlantAvatarInfo((PlayerInfo *)this_00);
    puVar5 = (undefined8 *)PlayerInfo::GetPlantPiecesInfo((PlayerInfo *)this_00);
    puVar6 = (undefined8 *)PlayerInfo::GetPlantStarsInfo((PlayerInfo *)this_00);
    puVar7 = (undefined8 *)PlayerInfo::GetAccessoryPiecesInfo((PlayerInfo *)this_00);
    Sexy::PIInterpolator::PIInterpolator(aPStack_20);
    DString::DString(aDStack_100,"Coin");
    iVar2 = PlayerInfo::GetNumCoins((PlayerInfo *)this_00,false);
    DString::DString(aDStack_f0,iVar2);
    pKVar8 = (KV *)KV::add((KV *)aPStack_20,aDStack_100,aDStack_f0);
    DString::DString(aDStack_e0,"FreeGem");
    iVar2 = NewPVPMgr::GetSeasonEndTime((NewPVPMgr *)this_00);
    DString::DString(aDStack_d0,iVar2);
    pKVar8 = (KV *)KV::add(pKVar8,aDStack_e0,aDStack_d0);
    DString::DString(aDStack_c0,"PaidGem");
    iVar2 = PlayerInfo::GetRechargeGems((PlayerInfo *)this_00);
    DString::DString(aDStack_b0,iVar2);
    pKVar8 = (KV *)KV::add(pKVar8,aDStack_c0,aDStack_b0);
    DString::DString(aDStack_a0,"Stones");
    iVar2 = PlayerInfo::GetNumStones((PlayerInfo *)this_00,false);
    DString::DString(aDStack_90,iVar2);
    pKVar8 = (KV *)KV::add(pKVar8,aDStack_a0,aDStack_90);
    DString::DString(aDStack_80,"Stars");
    iVar2 = PlayerInfo::GetNumStars((int)this_00);
    DString::DString(aDStack_70,iVar2);
    pKVar8 = (KV *)KV::add(pKVar8,aDStack_80,aDStack_70);
    DString::DString((DString *)local_60,"Leafs");
    iVar2 = PlayerInfo::GetLeafCurrency((PlayerInfo *)this_00);
    DString::DString((DString *)local_50,iVar2);
    pKVar8 = (KV *)KV::add(pKVar8,(DString *)local_60,(DString *)local_50);
    DString::DString((DString *)local_40,"World_Keys");
    iVar2 = PlayerInfo::GetNumWorldKeys((PlayerInfo *)this_00);
    DString::DString(aDStack_30,iVar2);
    pDVar12 = aDStack_30;
    KV::add(pKVar8,(DString *)local_40,aDStack_30);
    DString::~DString(aDStack_30);
    DString::~DString((DString *)local_40);
    DString::~DString((DString *)local_50);
    DString::~DString((DString *)local_60);
    DString::~DString(aDStack_70);
    DString::~DString(aDStack_80);
    DString::~DString(aDStack_90);
    DString::~DString(aDStack_a0);
    DString::~DString(aDStack_b0);
    DString::~DString(aDStack_c0);
    DString::~DString(aDStack_d0);
    DString::~DString(aDStack_e0);
    DString::~DString(aDStack_f0);
    DString::~DString(aDStack_100);
    local_60[0] = FUN_03eb9aa0(*puVar6);
    local_50[0] = FUN_03eb9af0(puVar6[1]);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)local_60,(__normal_iterator *)local_50), bVar1) {
      lVar11 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_60);
      iVar2 = PlantNameMapper::GetInstance();
      NameMapperBase::GetNameForId(iVar2);
      MetricsCollectorNameSpace::PlantNum
                ((MetricsCollectorNameSpace *)local_40,(string *)(ulong)*(uint *)(lVar11 + 4),
                 (int)pDVar12);
      KV::add((KV *)aPStack_20,aDStack_30);
      DString::~DString(aDStack_30);
      std::string::~string((string *)local_40);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)local_60);
    }
    local_60[0] = FUN_03eb9b40(*puVar5);
    local_50[0] = FUN_03eb9b90(puVar5[1]);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)local_60,(__normal_iterator *)local_50), bVar1) {
      lVar11 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_60);
      iVar2 = PlantNameMapper::GetInstance();
      NameMapperBase::GetNameForId(iVar2);
      MetricsCollectorNameSpace::PlantPieceNum
                ((MetricsCollectorNameSpace *)local_40,(string *)(ulong)*(uint *)(lVar11 + 4),
                 (int)pDVar12);
      KV::add((KV *)aPStack_20,aDStack_30);
      DString::~DString(aDStack_30);
      std::string::~string((string *)local_40);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)local_60);
    }
    local_60[0] = FUN_03eb9be0(*puVar4);
    local_50[0] = FUN_03eb9c30(puVar4[1]);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)local_60,(__normal_iterator *)local_50), bVar1) {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_60);
      iVar2 = PlantNameMapper::GetInstance();
      NameMapperBase::GetNameForId(iVar2);
      MetricsCollectorNameSpace::AvatarNum((MetricsCollectorNameSpace *)local_40,extraout_x1);
      KV::add((KV *)aPStack_20,aDStack_30);
      DString::~DString(aDStack_30);
      std::string::~string((string *)local_40);
      std::move_iterator<SexyURL::KeyedValue*>::operator++
                ((move_iterator<SexyURL::KeyedValue*> *)local_60);
    }
    local_60[0] = FUN_03eb9c80(*puVar3);
    local_50[0] = FUN_03eb9cd0(puVar3[1]);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)local_60,(__normal_iterator *)local_50), bVar1) {
      lVar11 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_60);
      iVar2 = PlantNameMapper::GetInstance();
      NameMapperBase::GetNameForId(iVar2);
      puVar9 = (uint *)FUN_03eaadc0(*(undefined8 *)(lVar11 + 8),0);
      MetricsCollectorNameSpace::AvatarPieceNum
                ((MetricsCollectorNameSpace *)local_40,(string *)(ulong)*puVar9,(int)pDVar12);
      KV::add((KV *)aPStack_20,aDStack_30);
      DString::~DString(aDStack_30);
      std::string::~string((string *)local_40);
      std::move_iterator<SexyURL::KeyedValue*>::operator++
                ((move_iterator<SexyURL::KeyedValue*> *)local_60);
    }
    local_60[0] = FUN_03eb9aa0(*puVar6);
    local_50[0] = FUN_03eb9af0(puVar6[1]);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)local_60,(__normal_iterator *)local_50), bVar1) {
      piVar10 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_60);
      this_01 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
      lVar11 = PlantAccessoryMgr::GetAccessoryForPlant(this_01,*piVar10);
      if (lVar11 != 0) {
        iVar2 = PlantNameMapper::GetInstance();
        NameMapperBase::GetNameForId(iVar2);
        MetricsCollectorNameSpace::AccessoryNum
                  ((MetricsCollectorNameSpace *)local_40,extraout_x1_00);
        KV::add((KV *)aPStack_20,aDStack_30);
        DString::~DString(aDStack_30);
        std::string::~string((string *)local_40);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)local_60);
    }
    local_50[0] = FUN_03eb9d20(*puVar7);
    local_40[0] = FUN_03eb9d70(puVar7[1]);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)local_50,(__normal_iterator *)local_40), bVar1) {
      this_02 = (MetricsCollectorNameSpace *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_50);
      MetricsCollectorNameSpace::AccessoryPieceNum
                (this_02,(string *)(ulong)*(uint *)(this_02 + 8),(int)pDVar12);
      KV::add((KV *)aPStack_20,aDStack_30);
      DString::~DString(aDStack_30);
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)local_50);
    }
    KV::commit();
    __s = (char *)DString::c_str(aDStack_30);
    std::string::string((string *)local_40,__s);
    nop();
    DString::~DString(aDStack_30);
    BehaviorLog::itemLogin((string *)local_40);
    std::string::~string((string *)local_40);
    KV::~KV((KV *)aPStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onLimitedSalesBought(int, int) */

void __thiscall
MetricsCollector::onLimitedSalesBought(MetricsCollector *this,int param_1,int param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  uint uVar1;
  bool bVar2;
  int iVar3;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  int *piVar4;
  KV *pKVar5;
  MetricsCollectorNameSpace *this_03;
  char *__s;
  int extraout_w1;
  undefined *puVar6;
  DString *pDVar7;
  int local_f4;
  undefined1 auStack_f0 [4];
  int local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  string asStack_d8 [8];
  string asStack_d0 [8];
  DString aDStack_c8 [16];
  DString aDStack_b8 [16];
  DString aDStack_a8 [16];
  DString aDStack_98 [16];
  DString aDStack_88 [16];
  KV aKStack_78 [24];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  DString aDStack_48 [16];
  DString aDStack_38 [16];
  DString aDStack_28 [16];
  DString local_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_f4 = param_1;
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  if (this_02 != (PlayerInfo *)0x0) {
    PlayerInfo::GetRechargeGems(this_02);
    iVar3 = NewPVPMgr::GetSeasonEndTime((NewPVPMgr *)this_02);
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x178);
    local_ec = iVar3;
    piVar4 = eastl::min_alt<int>(&local_ec,&local_f4);
    uVar1 = local_f4 - iVar3;
    if (local_f4 <= iVar3) {
      uVar1 = 0;
    }
    MetricsCollectorNameSpace::GetFreeGem
              ((MetricsCollectorNameSpace *)(ulong)(uint)-*piVar4,local_f4 - iVar3);
    MetricsCollectorNameSpace::GetUsePaidGem((MetricsCollectorNameSpace *)(ulong)uVar1,extraout_w1);
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)&local_60);
    pKVar5 = (KV *)KV::add((KV *)&local_60,aDStack_c8);
    pKVar5 = (KV *)KV::add(pKVar5,aDStack_b8);
    KV::KV(aKStack_78,pKVar5);
    KV::~KV((KV *)&local_60);
    DString::DString(aDStack_a8);
    DString::DString(aDStack_98);
    DString::DString(aDStack_88);
    local_e8 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    local_e0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_e8,(__normal_iterator *)&local_e0);
    if (bVar2) {
      do {
        pDVar7 = (DString *)&local_8;
        this_03 = (MetricsCollectorNameSpace *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_e8);
        FUN_031f5e7c(asStack_d8,"Plantfragment_",this_03);
        iVar3 = PlayerInfo::GetPlantPieceCount(this_02,(string *)this_03,false);
        DString::DString(aDStack_48,asStack_d8);
        DString::DString(aDStack_38,param_2);
        DString::DString(aDStack_28,iVar3);
        DString::DString(local_18,*(int *)(this_03 + 0xc));
        std::vector<DString,std::allocator<DString>>::vector
                  ((vector<DString,std::allocator<DString>> *)&local_60,aDStack_48,4,asStack_d0);
        puVar6 = &DAT_05593348;
        DString::join(aDStack_a8,(vector *)&local_60,",");
        std::vector<DString,std::allocator<DString>>::~vector
                  ((vector<DString,std::allocator<DString>> *)&local_60);
        do {
          pDVar7 = pDVar7 + -0x10;
          (*(code *)**(undefined8 **)pDVar7)(pDVar7);
          iVar3 = (int)puVar6;
        } while (pDVar7 != aDStack_48);
        pKVar5 = (KV *)KV::add(aKStack_78,aDStack_a8);
        KV::operator=(aKStack_78,pKVar5);
        if (0 < (int)*(uint *)(this_03 + 0x10)) {
          pDVar7 = (DString *)&local_8;
          MetricsCollectorNameSpace::GetPlantName
                    (this_03,(string *)(ulong)*(uint *)(this_03 + 0x10),iVar3);
          DString::operator_cast_to_string((DString *)&local_60);
          DString::~DString((DString *)&local_60);
          DString::DString(aDStack_48,asStack_d0);
          DString::DString(aDStack_38,-1);
          DString::DString(aDStack_28,0);
          DString::DString(local_18,1);
          std::vector<DString,std::allocator<DString>>::vector
                    ((vector<DString,std::allocator<DString>> *)&local_60,aDStack_48,4,auStack_f0);
          puVar6 = &DAT_05593348;
          DString::join(aDStack_98,(vector *)&local_60,",");
          std::vector<DString,std::allocator<DString>>::~vector
                    ((vector<DString,std::allocator<DString>> *)&local_60);
          do {
            pDVar7 = pDVar7 + -0x10;
            (*(code *)**(undefined8 **)pDVar7)(pDVar7);
            iVar3 = (int)puVar6;
          } while (pDVar7 != aDStack_48);
          pKVar5 = (KV *)KV::add(aKStack_78,aDStack_98);
          KV::operator=(aKStack_78,pKVar5);
          std::string::~string(asStack_d0);
        }
        pDVar7 = (DString *)&local_8;
        MetricsCollectorNameSpace::GetPlantName
                  (this_03,(string *)(ulong)*(uint *)(this_03 + 0x14),iVar3);
        DString::operator_cast_to_string((DString *)&local_60);
        DString::~DString((DString *)&local_60);
        DString::DString(aDStack_48,asStack_d0);
        DString::DString(aDStack_38,1);
        DString::DString(aDStack_28,1);
        DString::DString(local_18,0);
        std::vector<DString,std::allocator<DString>>::vector
                  ((vector<DString,std::allocator<DString>> *)&local_60,aDStack_48,4,auStack_f0);
        DString::join(aDStack_88,(vector *)&local_60,",");
        std::vector<DString,std::allocator<DString>>::~vector
                  ((vector<DString,std::allocator<DString>> *)&local_60);
        do {
          pDVar7 = pDVar7 + -0x10;
          (*(code *)**(undefined8 **)pDVar7)(pDVar7);
        } while (pDVar7 != aDStack_48);
        pKVar5 = (KV *)KV::add(aKStack_78,aDStack_88);
        KV::operator=(aKStack_78,pKVar5);
        std::string::~string(asStack_d0);
        std::string::~string(asStack_d8);
        std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                  ((move_iterator<Sexy::LeaderboardEntry*> *)&local_e8);
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_e8,(__normal_iterator *)&local_e0)
        ;
      } while (bVar2);
    }
    KV::commit();
    __s = (char *)DString::c_str((DString *)&local_60);
    std::string::string(asStack_d8,__s);
    nop();
    DString::~DString((DString *)&local_60);
    std::string::string(asStack_d0,"Store");
    std::string::string((string *)&local_60,"TimeLimited_Store");
    BehaviorLog::itemPurchase(asStack_d0,(string *)&local_60,asStack_d8);
    std::string::~string((string *)&local_60);
    nop();
    std::string::~string(asStack_d0);
    nop();
    std::vector<PlantSalesUiReward,std::allocator<PlantSalesUiReward>>::clear
              ((vector<PlantSalesUiReward,std::allocator<PlantSalesUiReward>> *)this_00);
    std::string::~string(asStack_d8);
    DString::~DString(aDStack_88);
    DString::~DString(aDStack_98);
    DString::~DString(aDStack_a8);
    KV::~KV(aKStack_78);
    DString::~DString(aDStack_b8);
    DString::~DString(aDStack_c8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::SendBattleResultNew(std::string const&) */

void __thiscall MetricsCollector::SendBattleResultNew(MetricsCollector *this,string *param_1)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  UINewPVPTopZombieQueue *pUVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  char *pcVar15;
  float *pfVar16;
  NameMapperBase *this_02;
  DString *pDVar17;
  undefined8 uVar18;
  TGALogMgr *pTVar19;
  PVPManager *pPVar20;
  string *psVar21;
  ulong uVar22;
  MetricsCollectorNameSpace *pMVar23;
  int extraout_w1;
  int extraout_w1_00;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  size_t __n;
  vector<std::string,std::allocator<std::string>> *__n_00;
  uint uVar24;
  undefined8 uVar25;
  int iVar26;
  vector<std::string,std::allocator<std::string>> *pvVar27;
  ulong uVar28;
  float fVar29;
  undefined1 auVar30 [12];
  DString *local_478;
  int local_470;
  int local_46c;
  TGALogEndlessData *local_418;
  BehaviorLog aBStack_3c0 [8];
  string asStack_3b8 [8];
  string asStack_3b0 [8];
  string asStack_3a8 [8];
  string asStack_3a0 [8];
  undefined8 local_398;
  undefined8 local_390;
  DString aDStack_388 [16];
  DString aDStack_378 [16];
  DString aDStack_368 [16];
  DString aDStack_358 [16];
  DString aDStack_348 [16];
  DString aDStack_338 [16];
  DString aDStack_328 [16];
  DString aDStack_318 [16];
  undefined8 local_308 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_2f8 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_2e0 [24];
  DString aDStack_2c8 [24];
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_298;
  undefined8 local_290;
  TGALuckyChestData aTStack_280 [8];
  string asStack_278 [8];
  string asStack_270 [40];
  TGALogEndlessData aTStack_248 [16];
  string asStack_238 [32];
  string asStack_218 [8];
  string asStack_210 [8];
  vector<std::string,std::allocator<std::string>> avStack_208 [24];
  string asStack_1f0 [8];
  undefined1 auStack_1e8 [8];
  undefined8 local_1e0;
  int local_1d8 [6];
  string asStack_1c0 [8];
  string asStack_1b8 [56];
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  size_t local_8;
  
  local_8 = ___stack_chk_guard;
  __n = ___stack_chk_guard;
  bVar3 = std::operator==((string *)(this + 0xc0),"activity");
  TGALuckyChestData::TGALuckyChestData(aTStack_280);
  bVar4 = Board::IsDangerRoom(*(Board **)(gLawnApp + 0x9f0));
  lVar10 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
  if (lVar10 == 0) {
LAB_03ecf434:
    bVar6 = false;
    bVar1 = bVar4 | !bVar3;
    TGALogEndlessData::TGALogEndlessData(aTStack_248);
    bVar2 = bVar6;
    if (bVar4 == 0) goto LAB_03ecf460;
LAB_03ecfd00:
    local_418 = aTStack_248;
    std::string::append((string *)local_418,"8",__n);
    fVar29 = (float)PVZ_T();
    DString::DString((DString *)&local_1e0,fVar29 - *(float *)(*(long *)(gLawnApp + 0x9f0) + 0x114))
    ;
    pcVar15 = (char *)DString::c_str((DString *)&local_1e0);
    std::string::append(asStack_1f0,pcVar15,__n);
    DString::~DString((DString *)&local_1e0);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_2f8);
    bVar2 = bVar6;
  }
  else {
    lVar10 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
    bVar1 = *(byte *)(lVar10 + 0x111);
    if (bVar1 == 0) goto LAB_03ecf434;
    __n = 1;
    bVar2 = true;
    bVar6 = true;
    std::string::append((string *)aTStack_280,"1",1);
    TGALogEndlessData::TGALogEndlessData(aTStack_248);
    if (bVar4 != 0) goto LAB_03ecfd00;
LAB_03ecf460:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_2f8);
  }
  if (bVar3) {
    DString::DString((DString *)&local_1e0,1);
    DString::operator_cast_to_string((DString *)&local_1e0);
    std::vector<std::string,std::allocator<std::string>>::push_back
              ((vector<std::string,std::allocator<std::string>> *)avStack_2f8,(string *)&local_298);
    std::string::~string((string *)&local_298);
    DString::~DString((DString *)&local_1e0);
  }
  local_418 = aTStack_248;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  PlantAnimRig_HoyaCordata::getIdleAnimationName();
  DString::DString(aDStack_388,(string *)&local_1e0);
  std::string::~string((string *)&local_1e0);
  DString::operator_cast_to_string(aDStack_388);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_2f8,(string *)&local_1e0);
  std::string::~string((string *)&local_1e0);
  if (bVar4 == 0) {
    if (bVar2) {
      pcVar15 = (char *)DString::c_str(aDStack_388);
      std::string::append(asStack_278,pcVar15,__n);
    }
  }
  else {
    DString::operator_cast_to_string(aDStack_388);
    MetricsCollectorNameSpace::GetMissionName
              ((MetricsCollectorNameSpace *)&local_298,extraout_x1_01);
    pcVar15 = (char *)DString::c_str((DString *)&local_1e0);
    std::string::append(asStack_218,pcVar15,__n);
    DString::~DString((DString *)&local_1e0);
    std::string::~string((string *)&local_298);
  }
  BehaviorLog::getModeString(aBStack_3c0);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_2f8,(string *)aBStack_3c0);
  FUN_05475d88(asStack_3b8,param_1);
  cVar5 = FUN_0547419c(asStack_3b8);
  if (cVar5 != '\0') {
    Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)&local_1e0);
    lVar10 = gGameStateMgr;
    cVar5 = FUN_03eaad80(*(undefined1 *)(gGameStateMgr + 0x1eb3));
    if ((cVar5 != '\0') ||
       (cVar5 = FUN_03eaad7c(*(undefined1 *)(lVar10 + 0x1eb2)), iVar7 = extraout_w1_00,
       cVar5 != '\0')) {
      DString::operator_cast_to_string(aDStack_388);
      auVar30 = PlayerInfo::GetStarCompleted(this_01,(string *)&local_2b0);
      MetricsCollectorNameSpace::GetBeforeStar(auVar30._0_8_,auVar30._8_4_);
      KV::add((KV *)&local_1e0,(DString *)&local_298);
      DString::~DString((DString *)&local_298);
      std::string::~string((string *)&local_2b0);
      iVar7 = extraout_w1;
    }
    MetricsCollectorNameSpace::GetCoin
              ((MetricsCollectorNameSpace *)(ulong)*(uint *)(this + 0x78),iVar7);
    pMVar23 = (MetricsCollectorNameSpace *)KV::add((KV *)&local_1e0,aDStack_2c8);
    MetricsCollectorNameSpace::GetPiece(pMVar23);
    KV::add((KV *)pMVar23,(DString *)&local_2b0);
    KV::commit();
    pcVar15 = (char *)DString::c_str((DString *)&local_298);
    std::string::append(asStack_3b8,pcVar15,__n);
    DString::~DString((DString *)&local_298);
    DString::~DString((DString *)&local_2b0);
    DString::~DString(aDStack_2c8);
    KV::~KV((KV *)&local_1e0);
  }
  DString::DString(aDStack_378);
  DString::DString(aDStack_368,(uint)(byte)this[200]);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_2e0);
  pUVar11 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  if ((pUVar11 != (UINewPVPTopZombieQueue *)0x0) &&
     (iVar7 = FUN_03eaad40(*(undefined4 *)(pUVar11 + 0x19c)), iVar7 == 0)) {
    cVar5 = FUN_03eaad3c(pUVar11[0x199]);
    iVar7 = 0;
    if (0 < cVar5) {
      do {
        iVar9 = iVar7 + 1;
        UINewPVPTopZombieQueue::gettItem(pUVar11,iVar7);
        pPVar20 = (PVPManager *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_298);
        psVar21 = (string *)PVPManager::GetPVPMapDataList(pPVar20);
        iVar7 = 0;
        uVar22 = PlayerInfo::GetPlantStarLevel(this_01,psVar21,false);
        pPVar20 = (PVPManager *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_298);
        pMVar23 = (MetricsCollectorNameSpace *)PVPManager::GetPVPMapDataList(pPVar20);
        MetricsCollectorNameSpace::GetPlantName(pMVar23,(string *)(uVar22 & 0xffffffff),iVar7);
        std::vector<DString,std::allocator<DString>>::push_back
                  ((vector<DString,std::allocator<DString>> *)avStack_2e0,(DString *)&local_1e0);
        DString::~DString((DString *)&local_1e0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_298)
        ;
        iVar7 = iVar9;
      } while (cVar5 != iVar9);
    }
  }
  iVar7 = 0;
  lVar12 = *(long *)(gLawnApp + 0x9f0);
  uVar25 = *(undefined8 *)(lVar12 + 0xcd8);
  lVar13 = FUN_03eaaddc(uVar25,*(undefined8 *)(lVar12 + 0xce0));
  lVar10 = 0;
  while (lVar10 + 1 != lVar13 + 1) {
    piVar14 = (int *)FUN_03eaade8(uVar25,lVar10);
    iVar7 = iVar7 + piVar14[1] + *piVar14;
    lVar10 = lVar10 + 1;
  }
  uVar25 = *(undefined8 *)(lVar12 + 0xcf0);
  iVar9 = 0;
  lVar12 = FUN_03eaadb4(uVar25,*(undefined8 *)(lVar12 + 0xcf8));
  lVar10 = 0;
  while (lVar10 + 1 != lVar12 + 1) {
    piVar14 = (int *)FUN_03eaadf0(uVar25,lVar10);
    iVar9 = iVar9 + *piVar14;
    lVar10 = lVar10 + 1;
  }
  iVar26 = 0;
  DString::DString(aDStack_2c8,iVar7);
  ::operator+(aDStack_2c8,",");
  DString::DString((DString *)&local_298,iVar9);
  ::operator+((DString *)&local_2b0,(DString *)&local_298);
  DString::operator=(aDStack_378,(DString *)&local_1e0);
  DString::~DString((DString *)&local_1e0);
  DString::~DString((DString *)&local_298);
  DString::~DString((DString *)&local_2b0);
  DString::~DString(aDStack_2c8);
  uVar25 = *(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xd20);
  lVar12 = FUN_03eaadb4(uVar25,*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xd28));
  lVar10 = 0;
  while (lVar10 + 1 != lVar12 + 1) {
    piVar14 = (int *)FUN_03eaadf0(uVar25,lVar10);
    iVar26 = iVar26 + *piVar14;
    lVar10 = lVar10 + 1;
  }
  DString::DString(aDStack_358,iVar26);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aDStack_2c8);
  cVar5 = std::vector<DString,std::allocator<DString>>::empty
                    ((vector<DString,std::allocator<DString>> *)avStack_2e0);
  if (cVar5 == '\0') {
    DString::DString((DString *)&local_298);
    pDVar17 = (DString *)DString::join((DString *)&local_298,(vector *)avStack_2e0,",");
    pcVar15 = (char *)DString::c_str(pDVar17);
    DString::DString((DString *)&local_1e0,pcVar15);
    std::vector<DString,std::allocator<DString>>::push_back
              ((vector<DString,std::allocator<DString>> *)aDStack_2c8,(DString *)&local_1e0);
    DString::~DString((DString *)&local_1e0);
    DString::~DString((DString *)&local_298);
  }
  else {
    DString::DString((DString *)&local_1e0," ");
    std::vector<DString,std::allocator<DString>>::push_back
              ((vector<DString,std::allocator<DString>> *)aDStack_2c8,(DString *)&local_1e0);
    DString::~DString((DString *)&local_1e0);
  }
  std::vector<DString,std::allocator<DString>>::push_back
            ((vector<DString,std::allocator<DString>> *)aDStack_2c8,aDStack_358);
  std::vector<DString,std::allocator<DString>>::push_back
            ((vector<DString,std::allocator<DString>> *)aDStack_2c8,aDStack_368);
  DString::DString(aDStack_348);
  DString::join(aDStack_348,(vector *)aDStack_2c8,";");
  DString::DString(aDStack_338);
  bVar6 = std::operator==((string *)(this + 0xc0),"activity");
  if (bVar6) {
    pcVar15 = (char *)DString::c_str(aDStack_388);
    std::string::string((string *)&local_298,pcVar15);
    MetricsCollectorNameSpace::GetActivityMissionName
              ((MetricsCollectorNameSpace *)&local_298,extraout_x1);
  }
  else {
    pcVar15 = (char *)DString::c_str(aDStack_388);
    std::string::string((string *)&local_298,pcVar15);
    MetricsCollectorNameSpace::GetMissionName
              ((MetricsCollectorNameSpace *)&local_298,extraout_x1_00);
  }
  DString::operator=(aDStack_338,(DString *)&local_1e0);
  DString::~DString((DString *)&local_1e0);
  std::string::~string((string *)&local_298);
  nop();
  Board::GetBoardResult(*(Board **)(gLawnApp + 0x9f0));
  iVar7 = MetricsCollectorNameSpace::TranslateEndOfGame();
  if (iVar7 == 4) {
    uVar24 = 2;
    local_46c = 0;
  }
  else {
    uVar24 = (uint)(iVar7 == 1);
    if (iVar7 == 1) {
      local_46c = 1;
    }
    else {
      local_46c = 0;
    }
  }
  DString::DString(aDStack_328,local_46c);
  DString::DString((DString *)&local_1e0,uVar24);
  pcVar15 = (char *)DString::c_str((DString *)&local_1e0);
  pDVar17 = (DString *)&local_2b0;
  std::string::string((string *)&local_298,pcVar15);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_2f8,(string *)&local_298);
  std::string::~string((string *)&local_298);
  nop();
  DString::~DString((DString *)&local_1e0);
  if (bVar4 == 0) {
    if (bVar2) {
      pcVar15 = (char *)DString::c_str(aDStack_328);
      std::string::append(asStack_270,pcVar15,(size_t)pDVar17);
    }
    fVar29 = (float)PVZ_T();
    pfVar16 = (float *)GachaConfig::GetGachaPlantRewardList((GachaConfig *)this);
    DString::DString(aDStack_318,fVar29 - *pfVar16);
    pcVar15 = (char *)DString::c_str(aDStack_318);
    std::string::string((string *)&local_1e0,pcVar15);
    std::vector<std::string,std::allocator<std::string>>::push_back
              ((vector<std::string,std::allocator<std::string>> *)avStack_2f8,(string *)&local_1e0);
    std::string::~string((string *)&local_1e0);
    nop();
  }
  else {
    pcVar15 = (char *)DString::c_str(aDStack_328);
    std::string::append(asStack_210,pcVar15,(size_t)pDVar17);
    fVar29 = (float)PVZ_T();
    pfVar16 = (float *)GachaConfig::GetGachaPlantRewardList((GachaConfig *)this);
    DString::DString(aDStack_318,fVar29 - *pfVar16);
    pcVar15 = (char *)DString::c_str(aDStack_318);
    pDVar17 = (DString *)&local_298;
    std::string::string((string *)&local_1e0,pcVar15);
    std::vector<std::string,std::allocator<std::string>>::push_back
              ((vector<std::string,std::allocator<std::string>> *)avStack_2f8,(string *)&local_1e0);
    std::string::~string((string *)&local_1e0);
    nop();
    pcVar15 = (char *)DString::c_str(aDStack_318);
    std::string::append(asStack_238,pcVar15,(size_t)pDVar17);
  }
  local_478 = aDStack_318;
  std::string::string(asStack_3b0,"");
  nop();
  psVar21 = (string *)&local_1e0;
  std::string::string(asStack_3a8,"");
  nop();
  lVar10 = gGameStateMgr;
  cVar5 = FUN_03eaad80(*(undefined1 *)(gGameStateMgr + 0x1eb3));
  if ((cVar5 != '\0') || (cVar5 = FUN_03eaad7c(*(undefined1 *)(lVar10 + 0x1eb2)), cVar5 != '\0')) {
    DString::operator_cast_to_string(aDStack_388);
    iVar7 = PlayerInfo::GetStarCompleted(this_01,(string *)&local_298);
    DString::DString((DString *)&local_1e0,iVar7);
    pcVar15 = (char *)DString::c_str((DString *)&local_1e0);
    std::string::append(asStack_3a8,pcVar15,(size_t)psVar21);
    DString::~DString((DString *)&local_1e0);
    std::string::~string((string *)&local_298);
    DString::operator_cast_to_string(aDStack_388);
    auVar30 = PlayerInfo::GetStarCompleted(this_01,(string *)&local_298);
    MetricsCollectorNameSpace::GetBeforeStarNum(auVar30._0_8_,auVar30._8_4_);
    pcVar15 = (char *)DString::c_str((DString *)&local_1e0);
    std::string::append(asStack_3b0,pcVar15,(size_t)psVar21);
    DString::~DString((DString *)&local_1e0);
    std::string::~string((string *)&local_298);
  }
  if (bVar3) {
    iVar7 = Sexy::LazySingleton<TGALogMgr>::GetInstance();
    local_470 = 0x271a;
    TGALogMgr::GetSegForId(iVar7,0x271a);
    std::vector<std::string,std::allocator<std::string>>::push_back
              ((vector<std::string,std::allocator<std::string>> *)avStack_2f8,(string *)&local_1e0);
    std::string::~string((string *)&local_1e0);
    std::string::string((string *)&local_1e0,"");
    std::vector<std::string,std::allocator<std::string>>::push_back
              ((vector<std::string,std::allocator<std::string>> *)avStack_2f8,(string *)&local_1e0);
    std::string::~string((string *)&local_1e0);
    nop();
    std::string::string((string *)&local_1e0,"");
    std::vector<std::string,std::allocator<std::string>>::push_back
              ((vector<std::string,std::allocator<std::string>> *)avStack_2f8,(string *)&local_1e0);
    std::string::~string((string *)&local_1e0);
    nop();
  }
  else {
    local_470 = 0x2713;
    std::vector<std::string,std::allocator<std::string>>::push_back
              ((vector<std::string,std::allocator<std::string>> *)avStack_2f8,asStack_3a8);
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_2b0);
  std::string::string(asStack_3a0,"");
  nop();
  uVar8 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar8);
  this_02 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  pUVar11 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  Board::GetBoardPlants();
  uVar25 = local_298;
  if (pUVar11 == (UINewPVPTopZombieQueue *)0x0) {
    uVar22 = FUN_03eaae0c(local_298,local_290);
    if (uVar22 != 0) {
      for (uVar28 = 0; uVar28 < uVar22; uVar28 = uVar28 + 1) {
        psVar21 = (string *)FUN_03eaae18(uVar25,uVar28);
        iVar7 = 0;
        uVar22 = PlayerInfo::GetPlantStarLevel(this_01,psVar21,false);
        pMVar23 = (MetricsCollectorNameSpace *)FUN_03eaae18(local_298,uVar28);
        MetricsCollectorNameSpace::GetPlantName(pMVar23,(string *)(uVar22 & 0xffffffff),iVar7);
        DString::operator_cast_to_string((DString *)&local_1e0);
        std::vector<std::string,std::allocator<std::string>>::push_back
                  ((vector<std::string,std::allocator<std::string>> *)&local_2b0,(string *)local_308
                  );
        std::string::~string((string *)local_308);
        DString::~DString((DString *)&local_1e0);
        psVar21 = (string *)FUN_03eaae18(local_298,uVar28);
        iVar7 = NameMapperBase::GetIdForName(this_02,psVar21);
        cVar5 = PlayerInfo::getIsExperiencePlantById(this_01,iVar7);
        if (cVar5 != '\0') {
          FUN_0546065c(auStack_168,iVar7);
          FUN_05462824((string *)&local_1e0,auStack_178);
          thunk_FUN_054757c0(asStack_3a0,(string *)&local_1e0);
          std::string::~string((string *)&local_1e0);
          std::string::string((string *)&local_1e0,"");
          FUN_05462980(auStack_178,(string *)&local_1e0);
          std::string::~string((string *)&local_1e0);
          nop();
          FUN_05475ad8(asStack_3a0,&DAT_05593348);
        }
        uVar25 = local_298;
        uVar22 = FUN_03eaae0c(local_298,local_290);
      }
    }
  }
  else {
    for (iVar7 = 0; cVar5 = FUN_03eaad3c(pUVar11[0x199]), iVar7 < cVar5; iVar7 = iVar7 + 1) {
      UINewPVPTopZombieQueue::gettItem(pUVar11,iVar7);
      bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_390);
      if ((bVar3) &&
         (cVar5 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_390), cVar5 != '\0')) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_390);
        SeedPacket::GetPlantType();
        bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)local_308);
        if (bVar3) {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_390);
          SeedPacket::GetPlantType();
          cVar5 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_1e0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_1e0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)local_308);
          if (cVar5 != '\0') {
            pPVar20 = (PVPManager *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)&local_390);
            psVar21 = (string *)PVPManager::GetPVPMapDataList(pPVar20);
            iVar9 = 0;
            uVar22 = PlayerInfo::GetPlantStarLevel(this_01,psVar21,false);
            pPVar20 = (PVPManager *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)&local_390);
            pMVar23 = (MetricsCollectorNameSpace *)PVPManager::GetPVPMapDataList(pPVar20);
            MetricsCollectorNameSpace::GetPlantName(pMVar23,(string *)(uVar22 & 0xffffffff),iVar9);
            DString::operator_cast_to_string((DString *)&local_1e0);
            std::vector<std::string,std::allocator<std::string>>::push_back
                      ((vector<std::string,std::allocator<std::string>> *)&local_2b0,
                       (string *)local_308);
            std::string::~string((string *)local_308);
            DString::~DString((DString *)&local_1e0);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_390);
            SeedPacket::GetPlantType();
            lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)&local_1e0);
            iVar9 = NameMapperBase::GetIdForName(this_02,(string *)(lVar10 + 8));
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_1e0);
            cVar5 = PlayerInfo::getIsExperiencePlantById(this_01,iVar9);
            if (cVar5 != '\0') {
              FUN_0546065c(auStack_168,iVar9);
              FUN_05462824((string *)&local_1e0,auStack_178);
              thunk_FUN_054757c0(asStack_3a0,(string *)&local_1e0);
              std::string::~string((string *)&local_1e0);
              std::string::string((string *)&local_1e0,"");
              FUN_05462980(auStack_178,(string *)&local_1e0);
              std::string::~string((string *)&local_1e0);
              nop();
              FUN_05475ad8(asStack_3a0,&DAT_05593348);
            }
          }
        }
        else {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)local_308);
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_390);
    }
  }
  iVar7 = 0;
  uVar25 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_2b0);
  uVar18 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)&local_2b0);
  std::
  sort<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>>
            (uVar25,uVar18);
  uVar25 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_2b0);
  uVar18 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)&local_2b0);
  local_398 = std::
              unique<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>>
                        (uVar25,uVar18);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)local_308,(__normal_iterator *)&local_398);
  local_390 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_2b0);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_1e0,(__normal_iterator *)&local_390);
  std::vector<std::string,std::allocator<std::string>>::erase
            ((vector<std::string,std::allocator<std::string>> *)&local_2b0,local_308[0],local_1e0);
  iVar9 = FUN_03eaae0c(local_2b0,local_2a8);
  if (0 < 8 - iVar9) {
    do {
      iVar7 = iVar7 + 1;
      std::string::string((string *)&local_1e0,"");
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)&local_2b0,(string *)&local_1e0)
      ;
      std::string::~string((string *)&local_1e0);
      nop();
    } while (iVar7 != 8 - iVar9);
  }
  local_308[0] = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_2f8);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_1e0,(__normal_iterator *)local_308);
  uVar25 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_2b0);
  uVar18 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)&local_2b0);
  std::vector<std::string,std::allocator<std::string>>::
  insert<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,void>
            ((vector<std::string,std::allocator<std::string>> *)avStack_2f8,local_1e0,uVar25,uVar18)
  ;
  iVar7 = PlayerInfo::GetCurrentArtifact(this_01);
  DString::DString((DString *)&local_1e0,iVar7);
  pcVar15 = (char *)DString::c_str((DString *)&local_1e0);
  std::string::string((string *)&local_398,pcVar15);
  nop();
  DString::~DString((DString *)&local_1e0);
  PlayerInfo::GetArtifactInfoByID((int)this_01);
  ArtifactInfo::~ArtifactInfo((ArtifactInfo *)&local_1e0);
  FUN_05475ad8((__normal_iterator *)&local_398,&DAT_05593348);
  DString::DString((DString *)&local_1e0,local_1d8[0]);
  uVar25 = DString::c_str((DString *)&local_1e0);
  FUN_05475ad8((__normal_iterator *)&local_398,uVar25);
  DString::~DString((DString *)&local_1e0);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_2f8,(string *)&local_398);
  iVar7 = Sexy::LazySingleton<TGALogMgr>::GetInstance();
  __n_00 = (vector<std::string,std::allocator<std::string>> *)0x0;
  TGALogMgr::GetSegForId(iVar7,0x2713);
  bVar3 = std::operator==((string *)&local_1e0,"true");
  pvVar27 = (vector<std::string,std::allocator<std::string>> *)(ulong)bVar3;
  std::string::~string((string *)&local_1e0);
  if (bVar3) {
    pTVar19 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    bVar3 = false;
    TGALogMgr::clearSegments(pTVar19,0x2713);
  }
  else {
    iVar7 = Sexy::LazySingleton<TGALogMgr>::GetInstance();
    __n_00 = (vector<std::string,std::allocator<std::string>> *)0x0;
    TGALogMgr::GetSegForId(iVar7,0x271a);
    bVar6 = std::operator==((string *)&local_1e0,"true");
    std::string::~string((string *)&local_1e0);
    if (!bVar6) {
      iVar7 = Sexy::LazySingleton<TGALogMgr>::GetInstance();
      bVar3 = true;
      TGALogMgr::GetSegForId(iVar7,0x2720);
      bVar6 = std::operator==((string *)&local_1e0,"true");
      std::string::~string((string *)&local_1e0);
      __n_00 = pvVar27;
      if (bVar6) {
        pTVar19 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
        TGALogMgr::clearSegments(pTVar19,0x2720);
        bVar3 = false;
        __n_00 = pvVar27;
      }
    }
  }
  if (bVar1 == 0) {
    pTVar19 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::clearSegments(pTVar19,0x271a);
  }
  if (bVar2) {
    pTVar19 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGAPlantSpecialOfferData::TGAPlantSpecialOfferData
              ((TGAPlantSpecialOfferData *)&local_1e0,(TGAPlantSpecialOfferData *)aTStack_280);
    TGALogMgr::LogVaseBreaker(pTVar19,(string *)&local_1e0);
    TGALuckyChestData::~TGALuckyChestData((TGALuckyChestData *)&local_1e0);
  }
  else if (bVar4 == 0) {
    if (bVar3 != false) {
      pTVar19 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      DString::DString((DString *)&local_1e0,local_470);
      pcVar15 = (char *)DString::c_str((DString *)&local_1e0);
      std::string::string((string *)local_308,pcVar15);
      __n_00 = (vector<std::string,std::allocator<std::string>> *)avStack_2f8;
      TGALogMgr::Log(pTVar19,(string *)local_308,(vector *)avStack_2f8);
      std::string::~string((string *)local_308);
      nop();
      DString::~DString((DString *)&local_1e0);
      cVar5 = ActiveSummery::IsInBossBattle();
      goto joined_r0x03ed03e4;
    }
  }
  else if (bVar3 != false) {
    std::vector<std::string,std::allocator<std::string>>::operator=
              (avStack_208,(vector *)&local_2b0);
    thunk_FUN_05475e00(auStack_1e8,(__normal_iterator *)&local_398);
    pTVar19 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogEndlessData::TGALogEndlessData((TGALogEndlessData *)&local_1e0,local_418);
    TGALogMgr::LogEndless(pTVar19,(string *)&local_1e0);
    TGALogEndlessData::~TGALogEndlessData((TGALogEndlessData *)&local_1e0);
  }
  cVar5 = ActiveSummery::IsInBossBattle();
joined_r0x03ed03e4:
  if (cVar5 != '\0') {
    TGABossChallengeData::TGABossChallengeData((TGABossChallengeData *)&local_1e0);
    DString::DString((DString *)local_308,3);
    pcVar15 = (char *)DString::c_str((DString *)local_308);
    std::string::append((string *)&local_1e0,pcVar15,(size_t)__n_00);
    DString::~DString((DString *)local_308);
    iVar7 = Board::GetBoardResult(*(Board **)(gLawnApp + 0x9f0));
    if (iVar7 == 1) {
      pcVar15 = "1";
    }
    else {
      pcVar15 = "0";
    }
    std::string::append(asStack_1b8,pcVar15,(size_t)__n_00);
    psVar21 = (string *)&local_390;
    std::string::string((string *)local_308,"mat_BossRush_crystal_blue");
    iVar7 = PlayerInfo::GetMaterialNum(this_01,(string *)local_308);
    std::string::~string((string *)local_308);
    nop();
    DString::DString((DString *)local_308,iVar7);
    pcVar15 = (char *)DString::c_str((DString *)local_308);
    std::string::append((string *)local_1d8,pcVar15,(size_t)psVar21);
    DString::~DString((DString *)local_308);
    pcVar15 = (char *)DString::c_str(aDStack_388);
    std::string::append(asStack_1c0,pcVar15,(size_t)psVar21);
    thunk_FUN_05475e00(auStack_180,(__normal_iterator *)&local_398);
    TGABossChallengeData::~TGABossChallengeData((TGABossChallengeData *)&local_1e0);
  }
  cVar5 = FUN_0547419c(asStack_3a0);
  if (cVar5 == '\0') {
    lVar10 = FUN_05474184(asStack_3a0);
    FUN_05475ffc((string *)&local_1e0,asStack_3a0,0,lVar10 + -1);
    FUN_05474278(asStack_3a0,(string *)&local_1e0);
    std::string::~string((string *)&local_1e0);
  }
  pcVar15 = (char *)DString::c_str(aDStack_338);
  std::string::string((string *)&local_390,pcVar15);
  pcVar15 = (char *)DString::c_str(aDStack_348);
  std::string::string((string *)local_308,pcVar15);
  pcVar15 = (char *)DString::c_str(aDStack_378);
  std::string::string((string *)&local_1e0,pcVar15);
  BehaviorLog::missionEnd
            ((string *)&local_390,local_46c._0_1_,(string *)local_308,(string *)&local_1e0,
             asStack_3b8,asStack_3a0);
  std::string::~string((string *)&local_1e0);
  nop();
  std::string::~string((string *)local_308);
  nop();
  std::string::~string((string *)&local_390);
  nop();
  this[200] = (MetricsCollector)0x0;
  std::string::~string((string *)&local_398);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&local_298);
  FUN_054617bc(auStack_178);
  std::string::~string(asStack_3a0);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&local_2b0);
  std::string::~string(asStack_3a8);
  std::string::~string(asStack_3b0);
  DString::~DString(local_478);
  DString::~DString(aDStack_328);
  DString::~DString(aDStack_338);
  DString::~DString(aDStack_348);
  std::vector<DString,std::allocator<DString>>::~vector
            ((vector<DString,std::allocator<DString>> *)aDStack_2c8);
  DString::~DString(aDStack_358);
  std::vector<DString,std::allocator<DString>>::~vector
            ((vector<DString,std::allocator<DString>> *)avStack_2e0);
  DString::~DString(aDStack_368);
  DString::~DString(aDStack_378);
  std::string::~string(asStack_3b8);
  std::string::~string((string *)aBStack_3c0);
  DString::~DString(aDStack_388);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_2f8);
  TGALogEndlessData::~TGALogEndlessData(local_418);
  TGALuckyChestData::~TGALuckyChestData(aTStack_280);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onLevelEnd() */

void __thiscall MetricsCollector::onLevelEnd(MetricsCollector *this)

{
  char cVar1;
  int iVar2;
  string asStack_90 [136];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xc9] != (MetricsCollector)0x0) {
    *(int *)(this + 0xcc) = *(int *)(this + 0xcc) + 1;
    std::string::string(asStack_90,"missionfinish_6");
    SendBattleResult(this,asStack_90);
    std::string::~string(asStack_90);
    nop();
    cVar1 = DinosaurDangerModule::IsInDinosaurDangerBattle();
    if ((cVar1 == '\0') ||
       (iVar2 = Board::GetBoardResult(*(Board **)(gLawnApp + 0x9f0)), iVar2 != 1)) {
      std::string::string(asStack_90,"");
      SendBattleResultNew(this,asStack_90);
      std::string::~string(asStack_90);
      nop();
    }
    FUN_03eaad88(*(long *)(gLawnApp + 0x9f0) + 0xcb8,*(long *)(gLawnApp + 0x9f0) + 0xcbc);
    GameplayMetrics::GameplayMetrics((GameplayMetrics *)asStack_90);
    memcpy(this + 0x38,asStack_90,0x88);
    std::
    map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>::
    clear((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           *)(this + 0xf0));
    ClearPlantMetricsUsedTimes(this);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::SendBattleResultVolcanoSnow(S2C_VacationLevelEndData*) */

void __thiscall
MetricsCollector::SendBattleResultVolcanoSnow
          (MetricsCollector *this,S2C_VacationLevelEndData *param_1)

{
  bool bVar1;
  int iVar2;
  VacationMaterialItem *pVVar3;
  KV *this_00;
  char *__s;
  int extraout_w1;
  DString *pDVar4;
  string asStack_a0 [8];
  DString aDStack_98 [16];
  undefined8 local_88 [2];
  undefined8 local_78 [2];
  VacationMaterialItem aVStack_68 [20];
  int local_54;
  int local_50;
  DString aDStack_48 [16];
  DString aDStack_38 [16];
  DString aDStack_28 [16];
  DString local_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString::DString(aDStack_98);
  if (param_1 != (S2C_VacationLevelEndData *)0x0) {
    local_88[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(param_1 + 0x38));
    local_78[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(param_1 + 0x38));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)local_88,(__normal_iterator *)local_78), bVar1) {
      pVVar3 = (VacationMaterialItem *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_88);
      VacationMaterialItem::VacationMaterialItem(aVStack_68,pVVar3);
      if (local_54 == *(int *)(param_1 + 0x2c)) {
        VacationMaterialItem::~VacationMaterialItem(aVStack_68);
        goto LAB_03ed0b1c;
      }
      VacationMaterialItem::~VacationMaterialItem(aVStack_68);
      std::move_iterator<SexyURL::KeyedValue*>::operator++
                ((move_iterator<SexyURL::KeyedValue*> *)local_88);
    }
    local_50 = 0;
LAB_03ed0b1c:
    iVar2 = MaterialItemMapper::GetInstance();
    pDVar4 = (DString *)&local_8;
    NameMapperBase::GetNameForId(iVar2);
    DString::DString(aDStack_48,(string *)local_78);
    DString::DString(aDStack_38,*(int *)(param_1 + 0x30));
    DString::DString(aDStack_28,local_50);
    DString::DString(local_18,local_50 - *(int *)(param_1 + 0x30));
    std::vector<DString,std::allocator<DString>>::vector
              ((vector<DString,std::allocator<DString>> *)aVStack_68,aDStack_48,4,
               (exception_ptr *)local_88);
    DString::join(aDStack_98,(vector *)aVStack_68,",");
    std::vector<DString,std::allocator<DString>>::~vector
              ((vector<DString,std::allocator<DString>> *)aVStack_68);
    do {
      pDVar4 = pDVar4 + -0x10;
      (*(code *)**(undefined8 **)pDVar4)(pDVar4);
    } while (pDVar4 != aDStack_48);
    std::string::~string((string *)local_78);
  }
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)aVStack_68);
  MetricsCollectorNameSpace::GetCoin
            ((MetricsCollectorNameSpace *)(ulong)*(uint *)(this + 0x78),extraout_w1);
  this_00 = (KV *)KV::add((KV *)aVStack_68,(DString *)local_88);
  KV::add(this_00,aDStack_98);
  KV::commit();
  __s = (char *)DString::c_str((DString *)local_78);
  std::string::string(asStack_a0,__s);
  nop();
  DString::~DString((DString *)local_78);
  DString::~DString((DString *)local_88);
  SendBattleResultNew(this,asStack_a0);
  std::string::~string(asStack_a0);
  KV::~KV((KV *)aVStack_68);
  DString::~DString(aDStack_98);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::SendBattleResultWithDinosuarDanger(std::vector<S2C_BonusInfo,
   std::allocator<S2C_BonusInfo> > const&) */

void __thiscall
MetricsCollector::SendBattleResultWithDinosuarDanger(MetricsCollector *this,vector *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  KV *this_00;
  char *__s;
  int extraout_w1;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  DString aDStack_70 [16];
  undefined8 local_60 [2];
  string asStack_50 [16];
  vector<DString,std::allocator<DString>> avStack_40 [24];
  undefined8 *local_28 [2];
  undefined8 *local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString::DString(aDStack_70);
  local_78 = FUN_03eb9dc0(*(undefined8 *)param_1);
  local_60[0] = FUN_03eb9e10(*(undefined8 *)(param_1 + 8));
  while (bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_78,(__normal_iterator *)local_60)
        , bVar2) {
    lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
    iVar1 = *(int *)(lVar4 + 4);
    iVar3 = MaterialItemMapper::GetInstance();
    NameMapperBase::GetNameForId(iVar3);
    DString::DString((DString *)local_28,asStack_50);
    DString::DString((DString *)local_18,iVar1);
    std::vector<DString,std::allocator<DString>>::vector
              (avStack_40,(DString *)local_28,2,auStack_80);
    DString::join(aDStack_70,(vector *)avStack_40,",");
    std::vector<DString,std::allocator<DString>>::~vector(avStack_40);
    (*(code *)*local_18[0])((DString *)local_18);
    (*(code *)*local_28[0])((DString *)local_28);
    std::string::~string(asStack_50);
    __gnu_cxx::
    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                  *)&local_78);
  }
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)avStack_40);
  MetricsCollectorNameSpace::GetCoin
            ((MetricsCollectorNameSpace *)(ulong)*(uint *)(this + 0x78),extraout_w1);
  this_00 = (KV *)KV::add((KV *)avStack_40,(DString *)local_60);
  KV::add(this_00,aDStack_70);
  KV::commit();
  __s = (char *)DString::c_str((DString *)asStack_50);
  std::string::string((string *)&local_78,__s);
  nop();
  DString::~DString((DString *)asStack_50);
  DString::~DString((DString *)local_60);
  SendBattleResultNew(this,(string *)&local_78);
  std::string::~string((string *)&local_78);
  KV::~KV((KV *)avStack_40);
  DString::~DString(aDStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onChargePay(std::string const&, int) */

void __thiscall MetricsCollector::onChargePay(MetricsCollector *this,string *param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined8 uVar3;
  Util *this_02;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var4;
  long lVar5;
  LogServer *this_03;
  char *__s;
  string *__n;
  string asStack_1e0 [8];
  string asStack_1d8 [8];
  string asStack_1d0 [16];
  string asStack_1c0 [24];
  string asStack_1a8 [8];
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [32];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar2);
  bVar1 = std::operator==(param_1,"SpringGift");
  if (bVar1) {
    *(int *)(this + 0x98) = *(int *)(this + 0x98) + 1;
    FUN_0546065c(auStack_168);
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    uVar3 = LogServer::Instance();
    std::string::string(asStack_1e0,"chargepay");
    uVar3 = LogServer::AppendMsg(uVar3,asStack_1e0);
    GetPCPID();
    uVar3 = LogServer::AppendMsg(uVar3,asStack_1d8);
    FUN_05475d88(asStack_1d0,this + 0x120);
    uVar3 = LogServer::AppendMsg(uVar3,asStack_1d0);
    FUN_05475d88(asStack_1c0,param_1);
    LogServer::AppendMsg(uVar3,asStack_1c0);
    std::string::~string(asStack_1c0);
    std::string::~string(asStack_1d0);
    std::string::~string(asStack_1d8);
    std::string::~string(asStack_1e0);
    nop();
    std::string::string(asStack_1c0,"");
    FUN_05462980(auStack_178,asStack_1c0);
    std::string::~string(asStack_1c0);
    nop();
    FUN_0546065c(auStack_168,param_2);
    uVar3 = LogServer::Instance();
    FUN_05462824(asStack_1c0,auStack_178);
    LogServer::AppendMsg(uVar3,asStack_1c0);
    std::string::~string(asStack_1c0);
    std::string::string(asStack_1c0,"");
    FUN_05462980(auStack_178,asStack_1c0);
    std::string::~string(asStack_1c0);
    nop();
    uVar2 = PlayerInfo::GetNumGems(this_01,false);
    FUN_0546065c(auStack_168,uVar2);
    uVar3 = LogServer::Instance();
    FUN_05462824(asStack_1c0,auStack_178);
    LogServer::AppendMsg(uVar3,asStack_1c0);
    std::string::~string(asStack_1c0);
    this_02 = (Util *)LogServer::Instance();
    Android::Util::GetPackageName(this_02);
    LogServer::AppendMsg(this_02,asStack_1c0);
    std::string::~string(asStack_1c0);
    __n = asStack_1c0;
    std::string::string(asStack_1d8,"unknown");
    nop();
    p_Var4 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar5 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_rightmost(p_Var4);
    if (lVar5 != 0) {
      p_Var4 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      std::
      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
      ::_M_rightmost(p_Var4);
      PurchaseBroker::GetPurchasePlatform();
      FUN_05474278(asStack_1d8,asStack_1c0);
      std::string::~string(asStack_1c0);
    }
    uVar3 = LogServer::Instance();
    FUN_05475d88(asStack_1c0,asStack_1d8);
    LogServer::AppendMsg(uVar3,asStack_1c0);
    std::string::~string(asStack_1c0);
    this_03 = (LogServer *)LogServer::Instance();
    LogServer::SendMsg(this_03);
    RechargeInfo::RechargeInfo((RechargeInfo *)asStack_1c0);
    thunk_FUN_05475e00(auStack_198,asStack_1d8);
    DString::DString((DString *)asStack_1d0,param_2);
    __s = (char *)DString::c_str((DString *)asStack_1d0);
    std::string::append(asStack_1a8,__s,(size_t)__n);
    DString::~DString((DString *)asStack_1d0);
    thunk_FUN_05475e00(auStack_1a0,param_1);
    RechargeInfo::~RechargeInfo((RechargeInfo *)asStack_1c0);
    std::string::~string(asStack_1d8);
    FUN_054617bc(auStack_178);
  }
  else {
    FUN_054617bc(auStack_178);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onPlantfoodPurchased(std::string const&, int, int) */

void __thiscall
MetricsCollector::onPlantfoodPurchased
          (MetricsCollector *this,string *param_1,int param_2,int param_3)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined8 uVar5;
  long *plVar6;
  Util *this_02;
  LogServer *this_03;
  char *pcVar7;
  int extraout_w1;
  string *extraout_x1;
  string *extraout_x1_00;
  undefined1 auVar8 [12];
  string asStack_200 [8];
  string asStack_1f8 [8];
  DString aDStack_1f0 [16];
  string asStack_1e0 [16];
  string asStack_1d0 [16];
  string asStack_1c0 [16];
  string asStack_1b0 [16];
  string asStack_1a0 [16];
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  *(int *)(this + 0x54) = *(int *)(this + 0x54) + 1;
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<talkingGame>::GetInstancePtr();
  FUN_0547429c(param_1);
  nop();
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  uVar3 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar3);
  FUN_0546065c(auStack_168,*(undefined4 *)(this + 0x54));
  uVar5 = LogServer::Instance();
  std::string::string(asStack_1e0,"missiongemsuse_3");
  uVar5 = LogServer::AppendMsg(uVar5,asStack_1e0);
  Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetAccountName();
  uVar5 = LogServer::AppendMsg(uVar5,asStack_1d0);
  FUN_05475d88(asStack_1c0,this + 0x120);
  uVar5 = LogServer::AppendMsg(uVar5,asStack_1c0);
  PlantAnimRig_HoyaCordata::getIdleAnimationName();
  uVar5 = LogServer::AppendMsg(uVar5,asStack_1b0);
  FUN_05475d88(asStack_1a0,param_1);
  uVar5 = LogServer::AppendMsg(uVar5,asStack_1a0);
  FUN_05462824((string *)&local_190,auStack_178);
  LogServer::AppendMsg(uVar5,(string *)&local_190);
  std::string::~string((string *)&local_190);
  std::string::~string(asStack_1a0);
  std::string::~string(asStack_1b0);
  std::string::~string(asStack_1c0);
  std::string::~string(asStack_1d0);
  std::string::~string(asStack_1e0);
  nop();
  FUN_05462824(asStack_200,auStack_178);
  std::string::string((string *)&local_190,"");
  FUN_05462980(auStack_178,(string *)&local_190);
  std::string::~string((string *)&local_190);
  nop();
  FUN_0546065c(auStack_168,param_2 - param_3);
  uVar5 = LogServer::Instance();
  FUN_05462824((string *)&local_190,auStack_178);
  LogServer::AppendMsg(uVar5,(string *)&local_190);
  std::string::~string((string *)&local_190);
  std::string::string((string *)&local_190,"");
  FUN_05462980(auStack_178,(string *)&local_190);
  std::string::~string((string *)&local_190);
  nop();
  uVar3 = PlayerInfo::GetRechargeGems(this_01);
  FUN_0546065c(auStack_168,uVar3);
  uVar5 = LogServer::Instance();
  FUN_05462824((string *)&local_190,auStack_178);
  LogServer::AppendMsg(uVar5,(string *)&local_190);
  std::string::~string((string *)&local_190);
  std::string::string((string *)&local_190,"");
  FUN_05462980(auStack_178,(string *)&local_190);
  std::string::~string((string *)&local_190);
  nop();
  FUN_0546065c(auStack_168,param_3);
  uVar5 = LogServer::Instance();
  FUN_05462824((string *)&local_190,auStack_178);
  LogServer::AppendMsg(uVar5,(string *)&local_190);
  std::string::~string((string *)&local_190);
  std::string::string((string *)&local_190,"");
  FUN_05462980(auStack_178,(string *)&local_190);
  std::string::~string((string *)&local_190);
  nop();
  uVar3 = NewPVPMgr::GetSeasonEndTime((NewPVPMgr *)this_01);
  FUN_0546065c(auStack_168,uVar3);
  uVar5 = LogServer::Instance();
  FUN_05462824((string *)&local_190,auStack_178);
  LogServer::AppendMsg(uVar5,(string *)&local_190);
  std::string::~string((string *)&local_190);
  if (*(long *)(gLawnApp + 0x9f0) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1000,0x3ed1910);
    (*pcVar1)();
  }
  plVar6 = (long *)FUN_03ec0b88(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  cVar2 = *(char *)(*(long *)(gLawnApp + 0x9f0) + 0x97c);
  if (plVar6 != (long *)0x0) {
    cVar2 = (**(code **)(*plVar6 + 0xa0))();
  }
  std::string::string((string *)&local_190,"");
  FUN_05462980(auStack_178,(string *)&local_190);
  std::string::~string((string *)&local_190);
  nop();
  uVar3 = *(undefined4 *)(*(long *)(gLawnApp + 0x9f0) + 0x87c);
  if (cVar2 == '\0') {
    uVar3 = FUN_03eaad84(uVar3);
    FUN_0546065c(auStack_168,uVar3);
  }
  else {
    iVar4 = FUN_03eaad84(uVar3);
    FUN_0546065c(auStack_168,iVar4 + 1);
  }
  uVar5 = LogServer::Instance();
  FUN_05462824((string *)&local_190,auStack_178);
  LogServer::AppendMsg(uVar5,(string *)&local_190);
  std::string::~string((string *)&local_190);
  this_02 = (Util *)LogServer::Instance();
  Android::Util::GetPackageName(this_02);
  LogServer::AppendMsg(this_02,(string *)&local_190);
  std::string::~string((string *)&local_190);
  this_03 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_03);
  DString::DString(aDStack_1f0);
  DString::DString((DString *)asStack_1e0,(string *)(this + 0xc0));
  DString::DString((DString *)asStack_1d0,"Plantfood");
  PlantAnimRig_HoyaCordata::getIdleAnimationName();
  DString::operator=(aDStack_1f0,(string *)&local_190);
  std::string::~string((string *)&local_190);
  cVar2 = DString::operator==((DString *)asStack_1e0,"activity");
  if (cVar2 == '\0') {
    pcVar7 = (char *)DString::c_str(aDStack_1f0);
    std::string::string(asStack_1a0,pcVar7);
    MetricsCollectorNameSpace::GetMissionName((MetricsCollectorNameSpace *)asStack_1a0,extraout_x1);
  }
  else {
    pcVar7 = (char *)DString::c_str(aDStack_1f0);
    std::string::string(asStack_1a0,pcVar7);
    MetricsCollectorNameSpace::GetActivityMissionName
              ((MetricsCollectorNameSpace *)asStack_1a0,extraout_x1_00);
  }
  DString::operator=(aDStack_1f0,(DString *)&local_190);
  DString::~DString((DString *)&local_190);
  std::string::~string(asStack_1a0);
  nop();
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)&local_190);
  MetricsCollectorNameSpace::GetUsePaidGem
            ((MetricsCollectorNameSpace *)(ulong)(uint)(param_2 - param_3),extraout_w1);
  auVar8 = KV::add((KV *)&local_190,(DString *)asStack_1c0);
  MetricsCollectorNameSpace::GetUseFreeGem
            ((MetricsCollectorNameSpace *)(ulong)(uint)param_3,auVar8._8_4_);
  KV::add(auVar8._0_8_,(DString *)asStack_1b0);
  KV::commit();
  pcVar7 = (char *)DString::c_str((DString *)asStack_1a0);
  std::string::string(asStack_1f8,pcVar7);
  nop();
  DString::~DString((DString *)asStack_1a0);
  DString::~DString((DString *)asStack_1b0);
  DString::~DString((DString *)asStack_1c0);
  KV::~KV((KV *)&local_190);
  std::string::string(asStack_1b0,"PvE_Mission");
  DString::operator_cast_to_string(aDStack_1f0);
  DString::operator_cast_to_string((DString *)asStack_1d0);
  BehaviorLog::missionPurchaseEx(asStack_1b0,asStack_1a0,(string *)&local_190,asStack_1f8);
  std::string::~string((string *)&local_190);
  std::string::~string(asStack_1a0);
  std::string::~string(asStack_1b0);
  nop();
  std::string::~string(asStack_1f8);
  DString::~DString((DString *)asStack_1d0);
  DString::~DString((DString *)asStack_1e0);
  DString::~DString(aDStack_1f0);
  std::string::~string(asStack_200);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onTutori(int, int) */

void __thiscall MetricsCollector::onTutori(MetricsCollector *this,int param_1,int param_2)

{
  char *__s;
  size_t __n;
  undefined1 auStack_58 [16];
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<std::string,std::allocator<std::string>> avStack_20 [24];
  long local_8;
  
  __n = (size_t)(uint)param_2;
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_48);
  if (param_1 == 0) {
    std::string::append(asStack_48,"Tutorial_PvE",__n);
  }
  else {
    if (param_1 != 1) {
      std::string::~string(asStack_48);
      goto LAB_03ed1964;
    }
    std::string::append(asStack_48,"Tutorial_PvP",__n);
  }
  DString::DString(aDStack_30,param_2);
  __s = (char *)DString::c_str(aDStack_30);
  std::string::string(asStack_40,__s);
  std::vector<std::string,std::allocator<std::string>>::vector(avStack_20,asStack_40,1,auStack_58);
  std::string::string(asStack_38,"");
  BehaviorLog::inGameBehavior(asStack_48,(vector *)avStack_20,asStack_38);
  std::string::~string(asStack_38);
  nop();
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_20);
  std::string::~string(asStack_40);
  nop();
  DString::~DString(aDStack_30);
  std::string::~string(asStack_48);
LAB_03ed1964:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onRecharge(std::string const&, int, int) */

void __thiscall
MetricsCollector::onRecharge(MetricsCollector *this,string *param_1,int param_2,int param_3)

{
  long lVar1;
  char *pcVar2;
  int extraout_w1;
  DString *__n;
  string asStack_98 [8];
  string asStack_90 [8];
  DString aDStack_88 [16];
  DString aDStack_78 [16];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  RechargeInfo aRStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RechargeInfo::RechargeInfo(aRStack_50);
  __n = (DString *)&local_68;
  std::string::string(asStack_98,"unknown");
  nop();
  lVar1 = LawnApp::GetPaymentResultInfo(gLawnApp);
  thunk_FUN_05475e00(asStack_98,lVar1 + 0x10);
  thunk_FUN_05475e00(auStack_28,asStack_98);
  thunk_FUN_05475e00(auStack_40,param_1);
  DString::DString((DString *)&local_68,param_3);
  pcVar2 = (char *)DString::c_str((DString *)&local_68);
  std::string::append(asStack_38,pcVar2,(size_t)__n);
  DString::~DString((DString *)&local_68);
  std::string::append(asStack_30,"unknown",(size_t)__n);
  thunk_FUN_05475e00(auStack_48,lVar1 + 8);
  thunk_FUN_05475e00(auStack_20,lVar1);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)&local_68);
  MetricsCollectorNameSpace::GetPaidGem
            ((MetricsCollectorNameSpace *)(ulong)(uint)param_2,extraout_w1);
  KV::add((KV *)&local_68,aDStack_88);
  KV::commit();
  pcVar2 = (char *)DString::c_str(aDStack_78);
  std::string::string(asStack_90,pcVar2);
  nop();
  DString::~DString(aDStack_78);
  DString::~DString(aDStack_88);
  KV::~KV((KV *)&local_68);
  BehaviorLog::recharge(aRStack_50,asStack_90);
  std::string::~string(asStack_90);
  std::string::~string(asStack_98);
  RechargeInfo::~RechargeInfo(aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onDailyAchievement(int, int) */

void __thiscall MetricsCollector::onDailyAchievement(MetricsCollector *this,int param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  LogServer *this_00;
  char *pcVar3;
  undefined1 auStack_1e0 [16];
  string asStack_1d0 [8];
  string asStack_1c8 [8];
  DString aDStack_1c0 [16];
  DString aDStack_1b0 [16];
  string asStack_1a0 [8];
  string asStack_198 [8];
  string asStack_190 [24];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_190,"daily_achi");
  AppendLogHead(this,asStack_190);
  std::string::~string(asStack_190);
  nop();
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_190,"");
  FUN_05462980(auStack_178,asStack_190);
  std::string::~string(asStack_190);
  nop();
  FUN_0546065c(auStack_168,param_1);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_190,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_190);
  std::string::~string(asStack_190);
  std::string::string(asStack_190,"");
  FUN_05462980(auStack_178,asStack_190);
  std::string::~string(asStack_190);
  nop();
  FUN_0546065c(auStack_168,param_2);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_190,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_190);
  std::string::~string(asStack_190);
  this_00 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_00);
  DString::DString(aDStack_1c0,param_1);
  DString::DString(aDStack_1b0,param_2);
  std::string::string(asStack_1d0,"Daily_Quest");
  pcVar3 = (char *)DString::c_str(aDStack_1c0);
  std::string::string(asStack_1a0,pcVar3);
  pcVar3 = (char *)DString::c_str(aDStack_1b0);
  std::string::string(asStack_198,pcVar3);
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)asStack_190,asStack_1a0,2,
             auStack_1e0);
  std::string::string(asStack_1c8,"");
  BehaviorLog::event(asStack_1d0,(vector *)asStack_190,asStack_1c8);
  std::string::~string(asStack_1c8);
  nop();
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)asStack_190);
  std::string::~string(asStack_198);
  std::string::~string(asStack_1a0);
  nop();
  nop();
  std::string::~string(asStack_1d0);
  nop();
  DString::~DString(aDStack_1b0);
  DString::~DString(aDStack_1c0);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onRechargeLogWithSalesUiReward2() */

void __thiscall MetricsCollector::onRechargeLogWithSalesUiReward2(MetricsCollector *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  long lVar3;
  char *pcVar4;
  DString *pDVar5;
  float fVar6;
  undefined1 auStack_100 [8];
  string asStack_f8 [8];
  undefined8 local_f0;
  undefined8 local_e8;
  string asStack_e0 [8];
  string asStack_d8 [8];
  DString aDStack_d0 [16];
  PIInterpolator aPStack_c0 [24];
  DString aDStack_a8 [24];
  DString aDStack_90 [16];
  DString aDStack_80 [16];
  DString aDStack_70 [16];
  DString local_60 [16];
  RechargeInfo aRStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c(this + 0x1a0);
  if (cVar1 == '\0') {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x178);
    RechargeInfo::RechargeInfo(aRStack_50);
    std::string::string(asStack_f8,"unknown");
    nop();
    pDVar5 = aDStack_80;
    lVar3 = LawnApp::GetPaymentResultInfo(gLawnApp);
    thunk_FUN_05475e00(asStack_f8,lVar3 + 0x10);
    thunk_FUN_05475e00(auStack_28,asStack_f8);
    thunk_FUN_05475e00(auStack_40,this + 0x1a0);
    fVar6 = (float)MagentoProductProps::GetPriceInUSD((MagentoProductProps *)(this + 400),false);
    DString::DString(aDStack_a8,fVar6);
    pcVar4 = (char *)DString::c_str(aDStack_a8);
    std::string::append(asStack_38,pcVar4,(size_t)pDVar5);
    DString::~DString(aDStack_a8);
    std::string::append(asStack_30,"unknown",(size_t)pDVar5);
    thunk_FUN_05475e00(auStack_48,lVar3 + 8);
    thunk_FUN_05475e00(auStack_20,lVar3);
    Sexy::PIInterpolator::PIInterpolator(aPStack_c0);
    local_f0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    local_e8 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_f0,(__normal_iterator *)&local_e8);
    if (bVar2) {
      do {
        pDVar5 = (DString *)aRStack_50;
        lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_f0);
        FUN_05475d88(asStack_e0,lVar3);
        DString::DString(aDStack_d0);
        FUN_031f5e7c(asStack_d8,"Plantfragment_",asStack_e0);
        DString::DString(aDStack_90,asStack_d8);
        DString::DString(aDStack_80,*(int *)(lVar3 + 8));
        DString::DString(aDStack_70,*(int *)(lVar3 + 0xc) + *(int *)(lVar3 + 8));
        DString::DString(local_60,*(int *)(lVar3 + 0xc));
        std::vector<DString,std::allocator<DString>>::vector
                  ((vector<DString,std::allocator<DString>> *)aDStack_a8,aDStack_90,4,auStack_100);
        DString::join(aDStack_d0,(vector *)aDStack_a8,",");
        std::vector<DString,std::allocator<DString>>::~vector
                  ((vector<DString,std::allocator<DString>> *)aDStack_a8);
        do {
          pDVar5 = pDVar5 + -0x10;
          (*(code *)**(undefined8 **)pDVar5)(pDVar5);
        } while (pDVar5 != aDStack_90);
        KV::add((KV *)aPStack_c0,aDStack_d0);
        std::string::~string(asStack_d8);
        DString::~DString(aDStack_d0);
        std::string::~string(asStack_e0);
        std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                  ((move_iterator<Sexy::LeaderboardEntry*> *)&local_f0);
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_f0,(__normal_iterator *)&local_e8)
        ;
      } while (bVar2);
    }
    KV::commit();
    pcVar4 = (char *)DString::c_str(aDStack_a8);
    std::string::string((string *)aDStack_d0,pcVar4);
    nop();
    DString::~DString(aDStack_a8);
    BehaviorLog::recharge(aRStack_50,(string *)aDStack_d0);
    std::vector<PlantSalesUiReward,std::allocator<PlantSalesUiReward>>::clear
              ((vector<PlantSalesUiReward,std::allocator<PlantSalesUiReward>> *)this_00);
    std::string::~string((string *)aDStack_d0);
    KV::~KV((KV *)aPStack_c0);
    std::string::~string(asStack_f8);
    RechargeInfo::~RechargeInfo(aRStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onRechargeForCukePackage(Sexy::RtWeakPtr<MagentoProductProps> const&) */

void __thiscall
MetricsCollector::onRechargeForCukePackage(MetricsCollector *this,RtWeakPtr *param_1)

{
  int iVar1;
  MagentoProductProps *this_00;
  long lVar2;
  char *pcVar3;
  DString *__n;
  DString *pDVar4;
  float fVar5;
  string asStack_e8 [8];
  string asStack_e0 [8];
  string asStack_d8 [8];
  DString aDStack_d0 [16];
  PIInterpolator aPStack_c0 [24];
  DString aDStack_a8 [24];
  DString aDStack_90 [16];
  DString aDStack_80 [16];
  DString aDStack_70 [16];
  DString local_60 [16];
  RechargeInfo aRStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (MagentoProductProps *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  RechargeInfo::RechargeInfo(aRStack_50);
  pDVar4 = (DString *)aRStack_50;
  __n = aDStack_a8;
  std::string::string(asStack_e8,"unknown");
  nop();
  lVar2 = LawnApp::GetPaymentResultInfo(gLawnApp);
  thunk_FUN_05475e00(asStack_e8,lVar2 + 0x10);
  thunk_FUN_05475e00(auStack_28,asStack_e8);
  thunk_FUN_05475e00(auStack_40,this_00 + 0x10);
  fVar5 = (float)MagentoProductProps::GetPriceInUSD(this_00,false);
  DString::DString(aDStack_a8,fVar5);
  pcVar3 = (char *)DString::c_str(aDStack_a8);
  std::string::append(asStack_38,pcVar3,(size_t)__n);
  DString::~DString(aDStack_a8);
  std::string::append(asStack_30,"unknown",(size_t)__n);
  thunk_FUN_05475e00(auStack_48,lVar2 + 8);
  thunk_FUN_05475e00(auStack_20,lVar2);
  Sexy::PIInterpolator::PIInterpolator(aPStack_c0);
  DString::DString(aDStack_d0);
  std::string::string(asStack_e0,"PowerupTacticalCuke");
  nop();
  lVar2 = LawnApp::GetActivityConfig();
  iVar1 = FUN_03eaad98(*(undefined4 *)(lVar2 + 0xc));
  DString::DString(aDStack_90,asStack_e0);
  DString::DString(aDStack_80,iVar1);
  DString::DString(aDStack_70,iVar1);
  DString::DString(local_60,0);
  std::vector<DString,std::allocator<DString>>::vector
            ((vector<DString,std::allocator<DString>> *)aDStack_a8,aDStack_90,4,asStack_d8);
  DString::join(aDStack_d0,(vector *)aDStack_a8,",");
  std::vector<DString,std::allocator<DString>>::~vector
            ((vector<DString,std::allocator<DString>> *)aDStack_a8);
  do {
    pDVar4 = pDVar4 + -0x10;
    (*(code *)**(undefined8 **)pDVar4)(pDVar4);
  } while (pDVar4 != aDStack_90);
  KV::add((KV *)aPStack_c0,aDStack_d0);
  KV::commit();
  pcVar3 = (char *)DString::c_str(aDStack_a8);
  std::string::string(asStack_d8,pcVar3);
  nop();
  DString::~DString(aDStack_a8);
  BehaviorLog::recharge(aRStack_50,asStack_d8);
  std::string::~string(asStack_d8);
  std::string::~string(asStack_e0);
  DString::~DString(aDStack_d0);
  KV::~KV((KV *)aPStack_c0);
  std::string::~string(asStack_e8);
  RechargeInfo::~RechargeInfo(aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onRechargeLog(Sexy::RtWeakPtr<MagentoProductProps> const&) */

void __thiscall MetricsCollector::onRechargeLog(MetricsCollector *this,RtWeakPtr *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  MagentoProductProps *this_00;
  char *pcVar4;
  DString *__n;
  float fVar5;
  string asStack_c0 [8];
  string asStack_b8 [8];
  DString aDStack_b0 [16];
  string asStack_a0 [24];
  DString aDStack_88 [56];
  RechargeInfo aRStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RechargeInfo::RechargeInfo(aRStack_50);
  __n = aDStack_88;
  std::string::string(asStack_c0,"unknown");
  nop();
  lVar2 = LawnApp::GetPaymentResultInfo(gLawnApp);
  thunk_FUN_05475e00(asStack_c0,lVar2 + 0x10);
  thunk_FUN_05475e00(auStack_28,asStack_c0);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  thunk_FUN_05475e00(auStack_40,lVar3 + 0x10);
  this_00 = (MagentoProductProps *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  fVar5 = (float)MagentoProductProps::GetPriceInUSD(this_00,false);
  DString::DString(aDStack_88,fVar5);
  pcVar4 = (char *)DString::c_str(aDStack_88);
  std::string::append(asStack_38,pcVar4,(size_t)__n);
  DString::~DString(aDStack_88);
  std::string::append(asStack_30,"unknown",(size_t)__n);
  thunk_FUN_05475e00(auStack_48,lVar2 + 8);
  thunk_FUN_05475e00(auStack_20,lVar2);
  LogPurchaseInfo::LogPurchaseInfo((LogPurchaseInfo *)aDStack_88);
  std::string::string(asStack_a0,"Map|Store");
  cVar1 = GetInfoFromMagento((LogPurchaseInfo *)aDStack_88,param_1,asStack_a0,0);
  std::string::~string(asStack_a0);
  nop();
  if (cVar1 != '\0') {
    GetKVFromInfo((LogPurchaseInfo *)aDStack_88);
    KV::commit();
    pcVar4 = (char *)DString::c_str(aDStack_b0);
    std::string::string(asStack_b8,pcVar4);
    nop();
    DString::~DString(aDStack_b0);
    BehaviorLog::recharge(aRStack_50,asStack_b8);
    std::string::~string(asStack_b8);
    KV::~KV((KV *)asStack_a0);
  }
  LogPurchaseInfo::~LogPurchaseInfo((LogPurchaseInfo *)aDStack_88);
  std::string::~string(asStack_c0);
  RechargeInfo::~RechargeInfo(aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onItemPurchaseInfo(LogPurchaseInfo const&) */

void __thiscall
MetricsCollector::onItemPurchaseInfo(MetricsCollector *this,LogPurchaseInfo *param_1)

{
  int iVar1;
  char *__s;
  ProfileMgr *this_00;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  DString aDStack_30 [16];
  KV aKStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetKVFromInfo(param_1);
  KV::commit();
  __s = (char *)DString::c_str(aDStack_30);
  std::string::string(asStack_48,__s);
  nop();
  DString::~DString(aDStack_30);
  BehaviorLog::itemPurchase((string *)(param_1 + 8),(string *)(param_1 + 0x10),asStack_48);
  iVar1 = GameStateMgr::GetState(gGameStateMgr);
  if (iVar1 == 5) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar2 = ProfileMgr::GetCurrentProfile(this_00);
    if (lVar2 != 0) {
      uVar4 = 0;
      PlantAnimRig_HoyaCordata::getIdleAnimationName();
      std::string::string(asStack_38,"");
      nop();
      while( true ) {
        uVar5 = *(undefined8 *)(param_1 + 0x20);
        uVar3 = FUN_03eaae5c(uVar5,*(undefined8 *)(param_1 + 0x28));
        if (uVar3 <= uVar4) break;
        lVar2 = FUN_03eaae70(uVar5,uVar4);
        FUN_05475d88(aDStack_30,lVar2 + 8);
        thunk_FUN_054757c0(asStack_38,aDStack_30);
        lVar2 = FUN_03eaae5c(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
        if (uVar4 < lVar2 - 1U) {
          FUN_05475ad8(asStack_38,&DAT_05593348);
        }
        uVar4 = uVar4 + 1;
        std::string::~string((string *)aDStack_30);
      }
      BehaviorLog::missionPay(asStack_40,asStack_38,asStack_48);
      std::string::~string(asStack_38);
      std::string::~string(asStack_40);
    }
  }
  std::string::~string(asStack_48);
  KV::~KV(aKStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onItemPurchaseInfo2(Sexy::RtWeakPtr<MagentoProductProps> const&, std::string
   const&, int) */

void __thiscall
MetricsCollector::onItemPurchaseInfo2
          (MetricsCollector *this,RtWeakPtr *param_1,string *param_2,int param_3)

{
  char cVar1;
  LogPurchaseInfo aLStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LogPurchaseInfo::LogPurchaseInfo(aLStack_40);
  cVar1 = GetInfoFromMagento(aLStack_40,param_1,param_2,param_3);
  if (cVar1 != '\0') {
    onItemPurchaseInfo(this,aLStack_40);
  }
  SendVocationBossPurchaseLog(param_1);
  LogPurchaseInfo::~LogPurchaseInfo(aLStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onGetLimitedGachaReward(int, bool) */

void MetricsCollector::onGetLimitedGachaReward(int param_1,bool param_2)

{
  bool bVar1;
  ulong uVar2;
  ProfileMgr *this;
  long lVar3;
  string *psVar4;
  char *pcVar5;
  ulong uVar6;
  TGALogMgr *pTVar7;
  uint uVar8;
  int extraout_w1;
  char in_w2;
  int iVar9;
  int iVar10;
  DString *__n;
  size_t sVar11;
  string *in_x3;
  ulong uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [12];
  string asStack_a8 [8];
  string asStack_a0 [8];
  string asStack_98 [8];
  string asStack_90 [8];
  PIInterpolator aPStack_88 [24];
  PIInterpolator aPStack_70 [24];
  DString aDStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  undefined1 auStack_38 [8];
  DString aDStack_30 [40];
  long local_8;
  
  uVar2 = (ulong)(uint)param_1;
  uVar8 = (uint)param_2;
  local_8 = ___stack_chk_guard;
  Sexy::PIInterpolator::PIInterpolator(aPStack_88);
  uVar12 = 0;
  Sexy::PIInterpolator::PIInterpolator(aPStack_70);
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this);
  uVar13 = *(undefined8 *)(gLawnApp + 0x28e0);
  lVar3 = FUN_03eaae7c(uVar13,*(undefined8 *)(gLawnApp + 0x28e8));
  if (lVar3 != 0) {
    do {
      psVar4 = (string *)FUN_03eaae90(uVar13,uVar12);
      bVar1 = std::operator==(psVar4,"plant");
      if (bVar1) {
        lVar3 = FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar12);
        DString::DString(aDStack_58,(string *)(lVar3 + 8));
        DString::replace((char *)aDStack_58,"plant_");
        DString::operator=(aDStack_58,aDStack_30);
        DString::~DString(aDStack_30);
        pcVar5 = (char *)DString::c_str(aDStack_58);
        std::string::string(asStack_90,pcVar5);
        MetricsCollectorNameSpace::GetPlant
                  ((MetricsCollectorNameSpace *)asStack_90,(string *)0x1,1,(int)in_x3);
        KV::add((KV *)aPStack_88,aDStack_30);
        DString::~DString(aDStack_30);
        std::string::~string(asStack_90);
        nop();
        pcVar5 = (char *)DString::c_str(aDStack_58);
        std::string::string(asStack_90,pcVar5);
        MetricsCollectorNameSpace::GetPlant2
                  ((MetricsCollectorNameSpace *)asStack_90,(string *)0x1,1,(int)in_x3);
        KV::add((KV *)aPStack_70,aDStack_30);
        DString::~DString(aDStack_30);
        std::string::~string(asStack_90);
        nop();
        DString::~DString(aDStack_58);
      }
      else {
        psVar4 = (string *)FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar12);
        bVar1 = std::operator==(psVar4,"plant_piece");
        if (bVar1) {
          iVar10 = (int)asStack_98;
          lVar3 = FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar12);
          DString::DString(aDStack_58,(string *)(lVar3 + 8));
          DString::replace((char *)aDStack_58,"plant_piece_");
          DString::operator=(aDStack_58,aDStack_30);
          DString::~DString(aDStack_30);
          pcVar5 = (char *)DString::c_str(aDStack_58);
          iVar9 = iVar10;
          std::string::string(asStack_90,pcVar5);
          lVar3 = FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar12);
          MetricsCollectorNameSpace::GetPlantPiece
                    ((MetricsCollectorNameSpace *)asStack_90,
                     (string *)(ulong)*(uint *)(lVar3 + 0x10),iVar9);
          KV::add((KV *)aPStack_88,aDStack_30);
          DString::~DString(aDStack_30);
          std::string::~string(asStack_90);
          nop();
          pcVar5 = (char *)DString::c_str(aDStack_58);
          std::string::string(asStack_90,pcVar5);
          lVar3 = FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar12);
          MetricsCollectorNameSpace::GetPlantPiece2
                    ((MetricsCollectorNameSpace *)asStack_90,
                     (string *)(ulong)*(uint *)(lVar3 + 0x10),iVar10);
        }
        else {
          psVar4 = (string *)FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar12);
          bVar1 = std::operator==(psVar4,"avatar_piece");
          if (bVar1) {
            iVar10 = (int)asStack_98;
            lVar3 = FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar12);
            DString::DString(aDStack_58,(string *)(lVar3 + 8));
            DString::replace((char *)aDStack_58,"avatar_piece_");
            DString::operator=(aDStack_58,aDStack_30);
            DString::~DString(aDStack_30);
            pcVar5 = (char *)DString::c_str(aDStack_58);
            iVar9 = iVar10;
            std::string::string(asStack_90,pcVar5);
            lVar3 = FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar12);
            MetricsCollectorNameSpace::GetAvatarPiece
                      ((MetricsCollectorNameSpace *)asStack_90,
                       (string *)(ulong)*(uint *)(lVar3 + 0x10),iVar9);
            KV::add((KV *)aPStack_88,aDStack_30);
            DString::~DString(aDStack_30);
            std::string::~string(asStack_90);
            nop();
            pcVar5 = (char *)DString::c_str(aDStack_58);
            std::string::string(asStack_90,pcVar5);
            lVar3 = FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar12);
            MetricsCollectorNameSpace::GetAvatarPiece2
                      ((MetricsCollectorNameSpace *)asStack_90,
                       (string *)(ulong)*(uint *)(lVar3 + 0x10),iVar10);
          }
          else {
            psVar4 = (string *)FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar12);
            bVar1 = std::operator==(psVar4,"avatar");
            if (bVar1) {
              in_x3 = asStack_98;
              lVar3 = FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar12);
              DString::DString(aDStack_58,(string *)(lVar3 + 8));
              DString::replace((char *)aDStack_58,"avatar_");
              DString::operator=(aDStack_58,aDStack_30);
              DString::~DString(aDStack_30);
              pcVar5 = (char *)DString::c_str(aDStack_58);
              iVar10 = (int)in_x3;
              std::string::string(asStack_90,pcVar5);
              lVar3 = FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar12);
              MetricsCollectorNameSpace::GetAvatar
                        ((MetricsCollectorNameSpace *)asStack_90,
                         (string *)(ulong)*(uint *)(lVar3 + 0x10),iVar10);
              KV::add((KV *)aPStack_88,aDStack_30);
              DString::~DString(aDStack_30);
              std::string::~string(asStack_90);
              nop();
              pcVar5 = (char *)DString::c_str(aDStack_58);
              std::string::string(asStack_90,pcVar5);
              lVar3 = FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar12);
              MetricsCollectorNameSpace::GetAvatar2(asStack_90,*(int *)(lVar3 + 0x10));
            }
            else {
              psVar4 = (string *)FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar12);
              bVar1 = std::operator==(psVar4,"new_avatar");
              if (bVar1) {
                in_x3 = asStack_98;
                lVar3 = FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar12);
                DString::DString(aDStack_58,(string *)(lVar3 + 8));
                DString::replace((char *)aDStack_58,"new_avatar_");
                DString::operator=(aDStack_58,aDStack_30);
                DString::~DString(aDStack_30);
                pcVar5 = (char *)DString::c_str(aDStack_58);
                iVar10 = (int)in_x3;
                std::string::string(asStack_90,pcVar5);
                lVar3 = FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar12);
                MetricsCollectorNameSpace::GetNewAvatar
                          ((MetricsCollectorNameSpace *)asStack_90,
                           (string *)(ulong)*(uint *)(lVar3 + 0x10),iVar10);
                KV::add((KV *)aPStack_88,aDStack_30);
                DString::~DString(aDStack_30);
                std::string::~string(asStack_90);
                nop();
                pcVar5 = (char *)DString::c_str(aDStack_58);
                std::string::string(asStack_90,pcVar5);
                lVar3 = FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar12);
                MetricsCollectorNameSpace::GetNewAvatar2(asStack_90,*(int *)(lVar3 + 0x10));
              }
              else {
                psVar4 = (string *)FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar12);
                bVar1 = std::operator==(psVar4,"new_avatar_piece");
                if (!bVar1) goto LAB_03ed3404;
                in_x3 = asStack_98;
                lVar3 = FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar12);
                DString::DString(aDStack_58,(string *)(lVar3 + 8));
                DString::replace((char *)aDStack_58,"new_avatar_piece_");
                DString::operator=(aDStack_58,aDStack_30);
                DString::~DString(aDStack_30);
                pcVar5 = (char *)DString::c_str(aDStack_58);
                iVar9 = (int)in_x3;
                iVar10 = iVar9;
                std::string::string(asStack_90,pcVar5);
                lVar3 = FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar12);
                MetricsCollectorNameSpace::GetNewAvatarPiece
                          ((MetricsCollectorNameSpace *)asStack_90,
                           (string *)(ulong)*(uint *)(lVar3 + 0x10),iVar10);
                KV::add((KV *)aPStack_88,aDStack_30);
                DString::~DString(aDStack_30);
                std::string::~string(asStack_90);
                nop();
                pcVar5 = (char *)DString::c_str(aDStack_58);
                std::string::string(asStack_90,pcVar5);
                lVar3 = FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar12);
                MetricsCollectorNameSpace::GetNewAvatarPiece2
                          ((MetricsCollectorNameSpace *)asStack_90,
                           (string *)(ulong)*(uint *)(lVar3 + 0x10),iVar9);
              }
            }
          }
        }
        KV::add((KV *)aPStack_70,aDStack_30);
        DString::~DString(aDStack_30);
        std::string::~string(asStack_90);
        nop();
        DString::~DString(aDStack_58);
      }
LAB_03ed3404:
      uVar12 = uVar12 + 1;
      uVar13 = *(undefined8 *)(gLawnApp + 0x28e0);
      uVar6 = FUN_03eaae7c(uVar13,*(undefined8 *)(gLawnApp + 0x28e8));
    } while (uVar12 < uVar6);
  }
  KV::commit();
  pcVar5 = (char *)DString::c_str(aDStack_30);
  __n = aDStack_58;
  std::string::string(asStack_a8,pcVar5);
  nop();
  DString::~DString(aDStack_30);
  Set8BytesTo0(asStack_a0);
  MetricsCollectorNameSpace::GetUsePaidGem
            ((MetricsCollectorNameSpace *)(ulong)*(uint *)(uVar2 + 0x174),extraout_w1);
  auVar14 = KV::add((KV *)aPStack_88,aDStack_58);
  MetricsCollectorNameSpace::GetUseFreeGem
            ((MetricsCollectorNameSpace *)(ulong)*(uint *)(uVar2 + 0x170),auVar14._8_4_);
  KV::add(auVar14._0_8_,aDStack_30);
  DString::~DString(aDStack_30);
  DString::~DString(aDStack_58);
  if (uVar8 < 2) {
    KV::commit();
    pcVar5 = (char *)DString::c_str(aDStack_30);
    std::string::append(asStack_a0,pcVar5,(size_t)__n);
    DString::~DString(aDStack_30);
    std::string::string(asStack_98,"Store");
    std::string::string(asStack_90,"TimeLimited_Gacha");
    if (in_w2 == '\0') {
      pcVar5 = "3";
    }
    else {
      pcVar5 = "1";
    }
    std::string::string((string *)aDStack_58,pcVar5);
    std::string::string((string *)aDStack_30,"");
    __n = aDStack_58;
    BehaviorLog::itemPurchaseEx
              (asStack_98,asStack_90,(string *)aDStack_58,(string *)aDStack_30,asStack_a0);
    std::string::~string((string *)aDStack_30);
    nop();
    std::string::~string((string *)aDStack_58);
    nop();
    std::string::~string(asStack_90);
    nop();
    std::string::~string(asStack_98);
    nop();
LAB_03ed3a7c:
    TGANFSLinkageData::TGANFSLinkageData((TGANFSLinkageData *)aDStack_58);
    std::string::append((string *)aDStack_58,"2",(size_t)__n);
    if (uVar8 == 0) {
      std::string::append(asStack_50,"1",(size_t)__n);
      goto LAB_03ed3aac;
    }
  }
  else {
    if (uVar8 != 10) goto LAB_03ed3a7c;
    KV::commit();
    pcVar5 = (char *)DString::c_str(aDStack_30);
    std::string::append(asStack_a0,pcVar5,(size_t)__n);
    DString::~DString(aDStack_30);
    std::string::string(asStack_98,"Store");
    std::string::string(asStack_90,"TimeLimited_Gacha");
    pcVar5 = "2";
    if (in_w2 == '\0') {
      pcVar5 = "4";
    }
    std::string::string((string *)aDStack_58,pcVar5);
    std::string::string((string *)aDStack_30,"");
    __n = aDStack_58;
    BehaviorLog::itemPurchaseEx
              (asStack_98,asStack_90,(string *)aDStack_58,(string *)aDStack_30,asStack_a0);
    std::string::~string((string *)aDStack_30);
    nop();
    std::string::~string((string *)aDStack_58);
    nop();
    std::string::~string(asStack_90);
    nop();
    std::string::~string(asStack_98);
    nop();
    TGANFSLinkageData::TGANFSLinkageData((TGANFSLinkageData *)aDStack_58);
    std::string::append((string *)aDStack_58,"2",(size_t)__n);
  }
  DString::DString(aDStack_30,uVar8);
  pcVar5 = (char *)DString::c_str(aDStack_30);
  std::string::append(asStack_50,pcVar5,(size_t)__n);
  DString::~DString(aDStack_30);
LAB_03ed3aac:
  iVar10 = *(int *)(uVar2 + 0x170);
  sVar11 = (long)iVar10 ^ (long)iVar10 >> 0x3f;
  DString::DString(aDStack_30,(int)sVar11 - (iVar10 >> 0x1f));
  pcVar5 = (char *)DString::c_str(aDStack_30);
  std::string::append(asStack_48,pcVar5,sVar11);
  DString::~DString(aDStack_30);
  iVar10 = *(int *)(uVar2 + 0x174);
  sVar11 = (long)iVar10 ^ (long)iVar10 >> 0x3f;
  DString::DString(aDStack_30,(int)sVar11 - (iVar10 >> 0x1f));
  pcVar5 = (char *)DString::c_str(aDStack_30);
  std::string::append(asStack_40,pcVar5,sVar11);
  DString::~DString(aDStack_30);
  thunk_FUN_05475e00(auStack_38,asStack_a8);
  pTVar7 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGAArtifactPresentData::TGAArtifactPresentData
            ((TGAArtifactPresentData *)aDStack_30,(TGAArtifactPresentData *)aDStack_58);
  TGALogMgr::LogLimitedGacha(pTVar7,aDStack_30);
  TGANFSLinkageData::~TGANFSLinkageData((TGANFSLinkageData *)aDStack_30);
  TGANFSLinkageData::~TGANFSLinkageData((TGANFSLinkageData *)aDStack_58);
  std::string::~string(asStack_a0);
  std::string::~string(asStack_a8);
  KV::~KV((KV *)aPStack_70);
  KV::~KV((KV *)aPStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onGetNewGachaReward(int) */

void MetricsCollector::onGetNewGachaReward(int param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ProfileMgr *this;
  long lVar6;
  string *psVar7;
  char *pcVar8;
  ulong uVar9;
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *p_Var10;
  int *piVar11;
  GachaMgr *this_00;
  size_t sVar12;
  TGALogMgr *pTVar13;
  int in_w1;
  int extraout_w1;
  int iVar14;
  DString *__n;
  string *in_x3;
  ulong uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [12];
  string *local_d8;
  string asStack_a8 [8];
  string asStack_a0 [8];
  string asStack_98 [8];
  string asStack_90 [8];
  string asStack_88 [8];
  PIInterpolator aPStack_80 [24];
  DString aDStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  undefined1 auStack_40 [8];
  DString aDStack_38 [48];
  long local_8;
  
  uVar5 = (ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  Sexy::PIInterpolator::PIInterpolator(aPStack_80);
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  uVar15 = 0;
  ProfileMgr::GetCurrentProfile(this);
  uVar16 = *(undefined8 *)(gLawnApp + 0x28e0);
  lVar6 = FUN_03eaae7c(uVar16,*(undefined8 *)(gLawnApp + 0x28e8));
  local_d8 = in_x3;
  if (lVar6 != 0) {
    do {
      psVar7 = (string *)FUN_03eaae90(uVar16,uVar15);
      bVar3 = std::operator==(psVar7,"plant");
      if (bVar3) {
        lVar6 = FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar15);
        DString::DString(aDStack_68,(string *)(lVar6 + 8));
        DString::replace((char *)aDStack_68,"plant_");
        DString::operator=(aDStack_68,aDStack_38);
        DString::~DString(aDStack_38);
        pcVar8 = (char *)DString::c_str(aDStack_68);
        std::string::string(asStack_88,pcVar8);
        MetricsCollectorNameSpace::GetPlant
                  ((MetricsCollectorNameSpace *)asStack_88,(string *)0x1,1,(int)local_d8);
        KV::add((KV *)aPStack_80,aDStack_38);
        DString::~DString(aDStack_38);
        std::string::~string(asStack_88);
        nop();
        DString::~DString(aDStack_68);
      }
      else {
        psVar7 = (string *)FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar15);
        bVar3 = std::operator==(psVar7,"plant_piece");
        if (bVar3) {
          iVar14 = (int)asStack_90;
          lVar6 = FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar15);
          DString::DString(aDStack_68,(string *)(lVar6 + 8));
          DString::replace((char *)aDStack_68,"plant_piece_");
          DString::operator=(aDStack_68,aDStack_38);
          DString::~DString(aDStack_38);
          pcVar8 = (char *)DString::c_str(aDStack_68);
          std::string::string(asStack_88,pcVar8);
          lVar6 = FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar15);
          MetricsCollectorNameSpace::GetPlantPiece
                    ((MetricsCollectorNameSpace *)asStack_88,
                     (string *)(ulong)*(uint *)(lVar6 + 0x10),iVar14);
          KV::add((KV *)aPStack_80,aDStack_38);
          DString::~DString(aDStack_38);
          std::string::~string(asStack_88);
          nop();
          DString::~DString(aDStack_68);
        }
        else {
          psVar7 = (string *)FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar15);
          bVar3 = std::operator==(psVar7,"avatar_piece");
          if (bVar3) {
            lVar6 = FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar15);
            DString::DString(aDStack_68,(string *)(lVar6 + 8));
            DString::replace((char *)aDStack_68,"avatar_piece_");
            DString::operator=(aDStack_68,aDStack_38);
            DString::~DString(aDStack_38);
            pcVar8 = (char *)DString::c_str(aDStack_68);
            iVar14 = (int)asStack_90;
            std::string::string(asStack_88,pcVar8);
            lVar6 = FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar15);
            MetricsCollectorNameSpace::GetAvatarPiece
                      ((MetricsCollectorNameSpace *)asStack_88,
                       (string *)(ulong)*(uint *)(lVar6 + 0x10),iVar14);
          }
          else {
            psVar7 = (string *)FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar15);
            bVar3 = std::operator==(psVar7,"avatar");
            if (bVar3) {
              lVar6 = FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar15);
              DString::DString(aDStack_68,(string *)(lVar6 + 8));
              DString::replace((char *)aDStack_68,"avatar_");
              DString::operator=(aDStack_68,aDStack_38);
              DString::~DString(aDStack_38);
              pcVar8 = (char *)DString::c_str(aDStack_68);
              iVar14 = (int)asStack_90;
              std::string::string(asStack_88,pcVar8);
              lVar6 = FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar15);
              MetricsCollectorNameSpace::GetAvatar
                        ((MetricsCollectorNameSpace *)asStack_88,
                         (string *)(ulong)*(uint *)(lVar6 + 0x10),iVar14);
            }
            else {
              psVar7 = (string *)FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar15);
              bVar3 = std::operator==(psVar7,"new_avatar");
              if (bVar3) {
                lVar6 = FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar15);
                DString::DString(aDStack_68,(string *)(lVar6 + 8));
                DString::replace((char *)aDStack_68,"new_avatar_");
                DString::operator=(aDStack_68,aDStack_38);
                DString::~DString(aDStack_38);
                pcVar8 = (char *)DString::c_str(aDStack_68);
                iVar14 = (int)asStack_90;
                std::string::string(asStack_88,pcVar8);
                lVar6 = FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar15);
                MetricsCollectorNameSpace::GetNewAvatar
                          ((MetricsCollectorNameSpace *)asStack_88,
                           (string *)(ulong)*(uint *)(lVar6 + 0x10),iVar14);
              }
              else {
                psVar7 = (string *)FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar15);
                bVar3 = std::operator==(psVar7,"new_avatar_piece");
                if (!bVar3) goto LAB_03ed3f68;
                lVar6 = FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar15);
                DString::DString(aDStack_68,(string *)(lVar6 + 8));
                DString::replace((char *)aDStack_68,"new_avatar_piece_");
                DString::operator=(aDStack_68,aDStack_38);
                DString::~DString(aDStack_38);
                pcVar8 = (char *)DString::c_str(aDStack_68);
                iVar14 = (int)asStack_90;
                std::string::string(asStack_88,pcVar8);
                lVar6 = FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar15);
                MetricsCollectorNameSpace::GetNewAvatarPiece
                          ((MetricsCollectorNameSpace *)asStack_88,
                           (string *)(ulong)*(uint *)(lVar6 + 0x10),iVar14);
              }
            }
          }
          local_d8 = asStack_90;
          KV::add((KV *)aPStack_80,aDStack_38);
          DString::~DString(aDStack_38);
          std::string::~string(asStack_88);
          nop();
          DString::~DString(aDStack_68);
        }
      }
LAB_03ed3f68:
      uVar15 = uVar15 + 1;
      uVar16 = *(undefined8 *)(gLawnApp + 0x28e0);
      uVar9 = FUN_03eaae7c(uVar16,*(undefined8 *)(gLawnApp + 0x28e8));
    } while (uVar15 < uVar9);
  }
  Set8BytesTo0(asStack_a8);
  p_Var10 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
             *)Sexy::LazySingleton<GachaMgr>::GetInstance();
  piVar11 = (int *)std::
                   _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                   ::_M_root(p_Var10);
  iVar14 = *piVar11;
  p_Var10 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
             *)Sexy::LazySingleton<GachaMgr>::GetInstance();
  lVar6 = std::
          _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          ::_M_root(p_Var10);
  iVar1 = *(int *)(lVar6 + 8);
  bVar3 = iVar14 == 0;
  this_00 = (GachaMgr *)Sexy::LazySingleton<GachaMgr>::GetInstance();
  p_Var10 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
             *)Sexy::LazySingleton<GachaMgr>::GetInstance();
  lVar6 = std::
          _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          ::_M_root(p_Var10);
  uVar4 = GachaMgr::IsDrawFirstPaidTemp(this_00,iVar1,*(bool *)(lVar6 + 4));
  uVar4 = (uVar4 & 0xff | (uint)bVar3) ^ 1;
  KV::commit();
  pcVar8 = (char *)DString::c_str(aDStack_38);
  __n = aDStack_68;
  std::string::string(asStack_a0,pcVar8);
  nop();
  DString::~DString(aDStack_38);
  MetricsCollectorNameSpace::GetUsePaidGem
            ((MetricsCollectorNameSpace *)(ulong)*(uint *)(uVar5 + 0x174),extraout_w1);
  auVar17 = KV::add((KV *)aPStack_80,aDStack_68);
  MetricsCollectorNameSpace::GetUseFreeGem
            ((MetricsCollectorNameSpace *)(ulong)*(uint *)(uVar5 + 0x170),auVar17._8_4_);
  KV::add(auVar17._0_8_,aDStack_38);
  DString::~DString(aDStack_38);
  DString::~DString(aDStack_68);
  KV::commit();
  pcVar8 = (char *)DString::c_str(aDStack_38);
  std::string::append(asStack_a8,pcVar8,(size_t)__n);
  DString::~DString(aDStack_38);
  p_Var10 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
             *)Sexy::LazySingleton<GachaMgr>::GetInstance();
  sVar12 = std::
           _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
           ::_M_root(p_Var10);
  iVar14 = *(int *)(sVar12 + 8);
  cVar2 = *(char *)(sVar12 + 4);
  TGASecretStore::TGASecretStore((TGASecretStore *)aDStack_68);
  DString::DString(aDStack_38,iVar14);
  pcVar8 = (char *)DString::c_str(aDStack_38);
  std::string::append((string *)aDStack_68,pcVar8,sVar12);
  DString::~DString(aDStack_38);
  DString::DString(aDStack_38,(uint)bVar3);
  pcVar8 = (char *)DString::c_str(aDStack_38);
  std::string::append(asStack_60,pcVar8,sVar12);
  DString::~DString(aDStack_38);
  iVar14 = 10;
  if (cVar2 == '\0') {
    iVar14 = 1;
  }
  DString::DString(aDStack_38,iVar14);
  pcVar8 = (char *)DString::c_str(aDStack_38);
  std::string::append(asStack_58,pcVar8,sVar12);
  DString::~DString(aDStack_38);
  iVar14 = *(int *)(uVar5 + 0x170);
  sVar12 = (long)iVar14 ^ (long)iVar14 >> 0x3f;
  DString::DString(aDStack_38,(int)sVar12 - (iVar14 >> 0x1f));
  pcVar8 = (char *)DString::c_str(aDStack_38);
  std::string::append(asStack_50,pcVar8,sVar12);
  DString::~DString(aDStack_38);
  iVar14 = *(int *)(uVar5 + 0x174);
  sVar12 = (long)iVar14 ^ (long)iVar14 >> 0x3f;
  DString::DString(aDStack_38,(int)sVar12 - (iVar14 >> 0x1f));
  pcVar8 = (char *)DString::c_str(aDStack_38);
  std::string::append(asStack_48,pcVar8,sVar12);
  DString::~DString(aDStack_38);
  thunk_FUN_05475e00(auStack_40,asStack_a0);
  if (in_w1 < 0) goto LAB_03ed45a8;
  if (in_w1 < 2) {
    std::string::string(asStack_98,"Store");
    std::string::string(asStack_90,"New_Panny_Gacha");
    if (uVar4 == 0) {
      pcVar8 = "3";
    }
    else {
      pcVar8 = "1";
    }
LAB_03ed44f0:
    std::string::string(asStack_88,pcVar8);
    if (bVar3) goto LAB_03ed4214;
LAB_03ed450c:
    pcVar8 = "1";
  }
  else {
    if (in_w1 != 10) goto LAB_03ed45a8;
    std::string::string(asStack_98,"Store");
    std::string::string(asStack_90,"New_Panny_Gacha");
    if (uVar4 == 0) {
      pcVar8 = "4";
      goto LAB_03ed44f0;
    }
    std::string::string(asStack_88,"2");
    if (!bVar3) goto LAB_03ed450c;
LAB_03ed4214:
    pcVar8 = "0";
  }
  std::string::string((string *)aDStack_38,pcVar8);
  BehaviorLog::itemPurchaseEx(asStack_98,asStack_90,asStack_88,(string *)aDStack_38,asStack_a8);
  std::string::~string((string *)aDStack_38);
  nop();
  std::string::~string(asStack_88);
  nop();
  std::string::~string(asStack_90);
  nop();
  std::string::~string(asStack_98);
  nop();
  pTVar13 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGASecretStore::TGASecretStore((TGASecretStore *)aDStack_38,(TGASecretStore *)aDStack_68);
  TGALogMgr::LogPennyTreasure(pTVar13,2,aDStack_38);
  DropGroupNode::~DropGroupNode((DropGroupNode *)aDStack_38);
LAB_03ed45a8:
  DropGroupNode::~DropGroupNode((DropGroupNode *)aDStack_68);
  std::string::~string(asStack_a0);
  std::string::~string(asStack_a8);
  KV::~KV((KV *)aPStack_80);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onGetGachaReward(int) */

void __thiscall MetricsCollector::onGetGachaReward(MetricsCollector *this,int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  LogServer *this_00;
  ProfileMgr *this_01;
  string *psVar5;
  long lVar6;
  char *pcVar7;
  PIInterpolator *__n;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [12];
  PIInterpolator aPStack_1d8 [8];
  string asStack_1d0 [8];
  string asStack_1c8 [8];
  string asStack_1c0 [8];
  DString aDStack_1b8 [16];
  PIInterpolator aPStack_1a8 [24];
  string asStack_190 [24];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_190,"gacha_reward_1");
  AppendLogHead(this,asStack_190);
  std::string::~string(asStack_190);
  nop();
  uVar2 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar2);
  std::string::string(asStack_190,"");
  FUN_05462980(auStack_178,asStack_190);
  std::string::~string(asStack_190);
  nop();
  Set8BytesTo0(asStack_1d0);
  uVar9 = 0;
  while( true ) {
    uVar10 = *(undefined8 *)(gLawnApp + 0x28e0);
    uVar4 = FUN_03eaae7c(uVar10,*(undefined8 *)(gLawnApp + 0x28e8));
    if (uVar4 <= uVar9) break;
    lVar6 = FUN_03eaae90(uVar10,uVar9);
    uVar10 = FUN_0545ec84(auStack_168,lVar6 + 8);
    uVar10 = FUN_054603b8(uVar10,&DAT_05593348);
    uVar3 = FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar9);
    uVar10 = FUN_0545ec84(uVar10,uVar3);
    uVar10 = FUN_054603b8(uVar10,&DAT_05593348);
    lVar6 = FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar9);
    uVar10 = FUN_0546065c(uVar10,*(undefined4 *)(lVar6 + 0x10));
    FUN_054603b8(uVar10,&DAT_05594620);
    uVar9 = uVar9 + 1;
  }
  uVar9 = 0;
  FUN_05462824(asStack_190,auStack_178);
  FUN_05474278(asStack_1d0,asStack_190);
  std::string::~string(asStack_190);
  uVar10 = LogServer::Instance();
  FUN_05462824(asStack_190,auStack_178);
  LogServer::AppendMsg(uVar10,asStack_190);
  std::string::~string(asStack_190);
  __n = aPStack_1a8;
  std::string::string(asStack_190,"");
  FUN_05462980(auStack_178,asStack_190);
  std::string::~string(asStack_190);
  nop();
  FUN_0546065c(auStack_168,param_1);
  uVar10 = LogServer::Instance();
  FUN_05462824(asStack_190,auStack_178);
  LogServer::AppendMsg(uVar10,asStack_190);
  std::string::~string(asStack_190);
  this_00 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_00);
  Sexy::PIInterpolator::PIInterpolator(aPStack_1a8);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_01);
  uVar10 = *(undefined8 *)(gLawnApp + 0x28e0);
  lVar6 = gLawnApp;
  auVar11 = FUN_03eaae7c(uVar10,*(undefined8 *)(gLawnApp + 0x28e8));
  iVar8 = auVar11._8_4_;
  if (auVar11._0_8_ != 0) {
    do {
      iVar8 = (int)lVar6;
      psVar5 = (string *)FUN_03eaae90(uVar10,uVar9);
      bVar1 = std::operator==(psVar5,"plant");
      if (bVar1) {
        lVar6 = FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar9);
        DString::DString(aDStack_1b8,(string *)(lVar6 + 8));
        DString::replace((char *)aDStack_1b8,"plant_");
        DString::operator=(aDStack_1b8,(DString *)asStack_190);
        DString::~DString((DString *)asStack_190);
        pcVar7 = (char *)DString::c_str(aDStack_1b8);
        std::string::string(asStack_1c8,pcVar7);
        __n = (PIInterpolator *)0x1;
        MetricsCollectorNameSpace::GetPlant
                  ((MetricsCollectorNameSpace *)asStack_1c8,(string *)0x1,1,iVar8);
        KV::add((KV *)aPStack_1a8,(DString *)asStack_190);
        DString::~DString((DString *)asStack_190);
        std::string::~string(asStack_1c8);
        nop();
        DString::~DString(aDStack_1b8);
      }
      else {
        psVar5 = (string *)FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar9);
        bVar1 = std::operator==(psVar5,"plant_piece");
        if (bVar1) {
          __n = aPStack_1d8;
          lVar6 = FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar9);
          DString::DString(aDStack_1b8,(string *)(lVar6 + 8));
          DString::replace((char *)aDStack_1b8,"plant_piece_");
          DString::operator=(aDStack_1b8,(DString *)asStack_190);
          DString::~DString((DString *)asStack_190);
          pcVar7 = (char *)DString::c_str(aDStack_1b8);
          std::string::string(asStack_1c8,pcVar7);
          lVar6 = FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar9);
          MetricsCollectorNameSpace::GetPlantPiece
                    ((MetricsCollectorNameSpace *)asStack_1c8,
                     (string *)(ulong)*(uint *)(lVar6 + 0x10),(int)__n);
        }
        else {
          psVar5 = (string *)FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar9);
          bVar1 = std::operator==(psVar5,"avatar_piece");
          if (bVar1) {
            __n = aPStack_1d8;
            lVar6 = FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar9);
            DString::DString(aDStack_1b8,(string *)(lVar6 + 8));
            DString::replace((char *)aDStack_1b8,"avatar_piece_");
            DString::operator=(aDStack_1b8,(DString *)asStack_190);
            DString::~DString((DString *)asStack_190);
            pcVar7 = (char *)DString::c_str(aDStack_1b8);
            std::string::string(asStack_1c8,pcVar7);
            lVar6 = FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar9);
            MetricsCollectorNameSpace::GetAvatarPiece
                      ((MetricsCollectorNameSpace *)asStack_1c8,
                       (string *)(ulong)*(uint *)(lVar6 + 0x10),(int)__n);
          }
          else {
            psVar5 = (string *)FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar9);
            bVar1 = std::operator==(psVar5,"avatar");
            if (bVar1) {
              __n = aPStack_1d8;
              lVar6 = FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar9);
              DString::DString(aDStack_1b8,(string *)(lVar6 + 8));
              DString::replace((char *)aDStack_1b8,"avatar_");
              DString::operator=(aDStack_1b8,(DString *)asStack_190);
              DString::~DString((DString *)asStack_190);
              pcVar7 = (char *)DString::c_str(aDStack_1b8);
              std::string::string(asStack_1c8,pcVar7);
              lVar6 = FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar9);
              MetricsCollectorNameSpace::GetAvatar
                        ((MetricsCollectorNameSpace *)asStack_1c8,
                         (string *)(ulong)*(uint *)(lVar6 + 0x10),(int)__n);
            }
            else {
              psVar5 = (string *)FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar9);
              bVar1 = std::operator==(psVar5,"new_avatar");
              if (bVar1) {
                __n = aPStack_1d8;
                lVar6 = FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar9);
                DString::DString(aDStack_1b8,(string *)(lVar6 + 8));
                DString::replace((char *)aDStack_1b8,"new_avatar_");
                DString::operator=(aDStack_1b8,(DString *)asStack_190);
                DString::~DString((DString *)asStack_190);
                pcVar7 = (char *)DString::c_str(aDStack_1b8);
                std::string::string(asStack_1c8,pcVar7);
                lVar6 = FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar9);
                MetricsCollectorNameSpace::GetNewAvatar
                          ((MetricsCollectorNameSpace *)asStack_1c8,
                           (string *)(ulong)*(uint *)(lVar6 + 0x10),(int)__n);
              }
              else {
                psVar5 = (string *)FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar9);
                bVar1 = std::operator==(psVar5,"new_avatar_piece");
                if (!bVar1) goto LAB_03ed4b0c;
                __n = aPStack_1d8;
                lVar6 = FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar9);
                DString::DString(aDStack_1b8,(string *)(lVar6 + 8));
                DString::replace((char *)aDStack_1b8,"new_avatar_piece_");
                DString::operator=(aDStack_1b8,(DString *)asStack_190);
                DString::~DString((DString *)asStack_190);
                pcVar7 = (char *)DString::c_str(aDStack_1b8);
                std::string::string(asStack_1c8,pcVar7);
                lVar6 = FUN_03eaae90(*(undefined8 *)(gLawnApp + 0x28e0),uVar9);
                MetricsCollectorNameSpace::GetNewAvatarPiece
                          ((MetricsCollectorNameSpace *)asStack_1c8,
                           (string *)(ulong)*(uint *)(lVar6 + 0x10),(int)__n);
              }
            }
          }
        }
        KV::add((KV *)aPStack_1a8,(DString *)asStack_190);
        DString::~DString((DString *)asStack_190);
        std::string::~string(asStack_1c8);
        nop();
        DString::~DString(aDStack_1b8);
      }
LAB_03ed4b0c:
      uVar9 = uVar9 + 1;
      uVar10 = *(undefined8 *)(gLawnApp + 0x28e0);
      lVar6 = gLawnApp;
      auVar11 = FUN_03eaae7c(uVar10,*(undefined8 *)(gLawnApp + 0x28e8));
      iVar8 = auVar11._8_4_;
    } while (uVar9 < auVar11._0_8_);
  }
  if (param_1 == 1) {
    MetricsCollectorNameSpace::GetUsePaidGem((MetricsCollectorNameSpace *)0x23,iVar8);
    KV::add((KV *)aPStack_1a8,(DString *)asStack_190);
    DString::~DString((DString *)asStack_190);
    KV::commit();
    pcVar7 = (char *)DString::c_str((DString *)asStack_190);
    std::string::append(asStack_1d0,pcVar7,(size_t)__n);
    DString::~DString((DString *)asStack_190);
    std::string::string((string *)aDStack_1b8,"Gacha_Penny");
    pcVar7 = "Once";
  }
  else if (param_1 == 10) {
    MetricsCollectorNameSpace::GetUsePaidGem((MetricsCollectorNameSpace *)0x12c,iVar8);
    KV::add((KV *)aPStack_1a8,(DString *)asStack_190);
    DString::~DString((DString *)asStack_190);
    KV::commit();
    pcVar7 = (char *)DString::c_str((DString *)asStack_190);
    std::string::append(asStack_1d0,pcVar7,(size_t)__n);
    DString::~DString((DString *)asStack_190);
    std::string::string((string *)aDStack_1b8,"Gacha_Penny");
    pcVar7 = "Tenth";
  }
  else {
    if (param_1 != 0) goto LAB_03ed4b44;
    KV::commit();
    pcVar7 = (char *)DString::c_str((DString *)asStack_190);
    std::string::append(asStack_1d0,pcVar7,(size_t)__n);
    DString::~DString((DString *)asStack_190);
    std::string::string((string *)aDStack_1b8,"Gacha_Penny");
    pcVar7 = "Free";
  }
  std::string::string(asStack_1c0,pcVar7);
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)asStack_190,asStack_1c0,1,
             asStack_1c8);
  BehaviorLog::event((string *)aDStack_1b8,(vector *)asStack_190,asStack_1d0);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)asStack_190);
  std::string::~string(asStack_1c0);
  nop();
  std::string::~string((string *)aDStack_1b8);
  nop();
  std::string::string((string *)aDStack_1b8,"Event");
  std::string::string(asStack_190,"Gacha_Penny");
  BehaviorLog::itemPurchase((string *)aDStack_1b8,asStack_190,asStack_1d0);
  std::string::~string(asStack_190);
  nop();
  std::string::~string((string *)aDStack_1b8);
  nop();
LAB_03ed4b44:
  KV::~KV((KV *)aPStack_1a8);
  std::string::~string(asStack_1d0);
  FUN_054617bc(auStack_178);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onPlantLevelUpOK(std::string const&, int) */

void MetricsCollector::onPlantLevelUpOK(string *param_1,int param_2)

{
  KV *this;
  char *__s;
  uint in_w2;
  int in_w3;
  string asStack_58 [8];
  DString aDStack_50 [16];
  DString aDStack_40 [16];
  DString aDStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)&local_20);
  MetricsCollectorNameSpace::GetPlant
            ((MetricsCollectorNameSpace *)(ulong)(uint)param_2,(string *)(ulong)(in_w2 - 1),-1,in_w3
            );
  this = (KV *)KV::add((KV *)&local_20,aDStack_50);
  MetricsCollectorNameSpace::GetPlant
            ((MetricsCollectorNameSpace *)(ulong)(uint)param_2,(string *)(ulong)in_w2,1,in_w3);
  KV::add(this,aDStack_40);
  KV::commit();
  __s = (char *)DString::c_str(aDStack_30);
  std::string::string(asStack_58,__s);
  nop();
  DString::~DString(aDStack_30);
  DString::~DString(aDStack_40);
  DString::~DString(aDStack_50);
  KV::~KV((KV *)&local_20);
  std::string::string((string *)aDStack_30,"Plant_Upgrade");
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  BehaviorLog::inGameBehavior((string *)aDStack_30,(vector *)&local_20,asStack_58);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&local_20);
  std::string::~string((string *)aDStack_30);
  nop();
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onRechargeBundleLog(std::string const&, int, std::string const&) */

void __thiscall
MetricsCollector::onRechargeBundleLog
          (MetricsCollector *this,string *param_1,int param_2,string *param_3)

{
  char *__s;
  undefined1 auStack_68 [16];
  string asStack_58 [8];
  string asStack_50 [8];
  DString aDStack_48 [16];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  vector<std::string,std::allocator<std::string>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"Bundle_Event");
  FUN_05475d88(asStack_38,param_1);
  DString::DString(aDStack_48,param_2);
  __s = (char *)DString::c_str(aDStack_48);
  std::string::string(asStack_30,__s);
  FUN_05475d88(asStack_28,param_3);
  std::vector<std::string,std::allocator<std::string>>::vector(avStack_20,asStack_38,3,auStack_68);
  std::string::string(asStack_50,"");
  BehaviorLog::event(asStack_58,(vector *)avStack_20,asStack_50);
  std::string::~string(asStack_50);
  nop();
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_20);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  std::string::~string(asStack_38);
  nop();
  DString::~DString(aDStack_48);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::OnTGTutorial(int) */

void __thiscall MetricsCollector::OnTGTutorial(MetricsCollector *this,int param_1)

{
  char *__s;
  undefined1 auStack_58 [16];
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<std::string,std::allocator<std::string>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_48,"Tutorial_Crafting");
  DString::DString(aDStack_30,param_1);
  __s = (char *)DString::c_str(aDStack_30);
  std::string::string(asStack_40,__s);
  std::vector<std::string,std::allocator<std::string>>::vector(avStack_20,asStack_40,1,auStack_58);
  std::string::string(asStack_38,"");
  BehaviorLog::inGameBehavior(asStack_48,(vector *)avStack_20,asStack_38);
  std::string::~string(asStack_38);
  nop();
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_20);
  std::string::~string(asStack_40);
  nop();
  DString::~DString(aDStack_30);
  std::string::~string(asStack_48);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::OnJump(int, int) */

void __thiscall MetricsCollector::OnJump(MetricsCollector *this,int param_1,int param_2)

{
  char *pcVar1;
  undefined1 auStack_70 [16];
  string asStack_60 [8];
  string asStack_58 [8];
  DString aDStack_50 [16];
  DString aDStack_40 [16];
  string asStack_30 [8];
  string asStack_28 [8];
  vector<std::string,std::allocator<std::string>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_60,"Jump");
  DString::DString(aDStack_50,param_1);
  pcVar1 = (char *)DString::c_str(aDStack_50);
  std::string::string(asStack_30,pcVar1);
  DString::DString(aDStack_40,param_2);
  pcVar1 = (char *)DString::c_str(aDStack_40);
  std::string::string(asStack_28,pcVar1);
  std::vector<std::string,std::allocator<std::string>>::vector(avStack_20,asStack_30,2,auStack_70);
  std::string::string(asStack_58,"");
  BehaviorLog::event(asStack_60,(vector *)avStack_20,asStack_58);
  std::string::~string(asStack_58);
  nop();
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_20);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  nop();
  DString::~DString(aDStack_40);
  nop();
  DString::~DString(aDStack_50);
  std::string::~string(asStack_60);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onDailySignReward(int, int) */

void __thiscall MetricsCollector::onDailySignReward(MetricsCollector *this,int param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  LogServer *this_00;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  vector *pvVar6;
  ulong uVar7;
  long lVar8;
  NameMapperBase *pNVar9;
  char *pcVar10;
  int iVar11;
  undefined1 auStack_218 [16];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_208 [8];
  MetricsCollectorNameSpace aMStack_200 [8];
  string asStack_1f8 [8];
  string asStack_1f0 [8];
  string asStack_1e8 [8];
  DString aDStack_1e0 [16];
  DString aDStack_1d0 [16];
  PIInterpolator aPStack_1c0 [24];
  undefined8 local_1a8;
  undefined8 local_1a0;
  string asStack_190 [24];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar8 = ___stack_chk_guard;
  std::string::string(asStack_190,"daily_sign_reward");
  iVar11 = (int)lVar8;
  AppendLogHead(this,asStack_190);
  std::string::~string(asStack_190);
  nop();
  uVar3 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar3);
  std::string::string(asStack_190,"");
  FUN_05462980(auStack_178,asStack_190);
  std::string::~string(asStack_190);
  nop();
  FUN_0546065c(auStack_168,param_1);
  uVar5 = LogServer::Instance();
  FUN_05462824(asStack_190,auStack_178);
  LogServer::AppendMsg(uVar5,asStack_190);
  std::string::~string(asStack_190);
  std::string::string(asStack_190,"");
  FUN_05462980(auStack_178,asStack_190);
  std::string::~string(asStack_190);
  nop();
  FUN_0546065c(auStack_168,param_2);
  uVar5 = LogServer::Instance();
  FUN_05462824(asStack_190,auStack_178);
  LogServer::AppendMsg(uVar5,asStack_190);
  std::string::~string(asStack_190);
  this_00 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_00);
  Sexy::PIInterpolator::PIInterpolator(aPStack_1c0);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  pvVar6 = (vector *)PlayerInfo::GetDailySignRewardSheet(this_02);
  std::vector<SignRewardContent,std::allocator<SignRewardContent>>::vector
            ((vector<SignRewardContent,std::allocator<SignRewardContent>> *)&local_1a8,pvVar6);
  uVar7 = FUN_03eaae9c(local_1a8,local_1a0);
  if (uVar7 <= (ulong)(long)param_1) goto LAB_03ed5a88;
  lVar8 = FUN_03eaaea8(local_1a8,(long)param_1);
  uVar1 = *(uint *)(lVar8 + 4);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_208);
  Set8BytesTo0(aMStack_200);
  pNVar9 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  cVar2 = NameMapperBase::ContainsId(pNVar9,param_2);
  if (cVar2 == '\0') {
    pNVar9 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
    cVar2 = NameMapperBase::ContainsId(pNVar9,param_2);
    if (cVar2 != '\0') {
      iVar4 = PlantChipNameMapperServerID::GetInstance();
      iVar11 = (int)aDStack_1e0;
      NameMapperBase::GetNameForId(iVar4);
      FUN_05474278(aMStack_200,asStack_190);
      std::string::~string(asStack_190);
      MetricsCollectorNameSpace::GetPlantPiece(aMStack_200,(string *)(ulong)uVar1,iVar11);
      goto LAB_03ed5968;
    }
    pNVar9 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
    cVar2 = NameMapperBase::ContainsId(pNVar9,param_2);
    if (cVar2 != '\0') {
      iVar4 = AvatarNameMapperServerID::GetInstance();
      iVar11 = (int)aDStack_1e0;
      NameMapperBase::GetNameForId(iVar4);
      FUN_05474278(aMStack_200,asStack_190);
      std::string::~string(asStack_190);
      MetricsCollectorNameSpace::GetAvatar(aMStack_200,(string *)(ulong)uVar1,iVar11);
      goto LAB_03ed5968;
    }
    pNVar9 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
    cVar2 = NameMapperBase::ContainsId(pNVar9,param_2);
    if (cVar2 != '\0') {
      iVar4 = AvatarChipNameMapperServerID::GetInstance();
      iVar11 = (int)aDStack_1e0;
      NameMapperBase::GetNameForId(iVar4);
      FUN_05474278(aMStack_200,asStack_190);
      std::string::~string(asStack_190);
      MetricsCollectorNameSpace::GetAvatarPiece(aMStack_200,(string *)(ulong)uVar1,iVar11);
      goto LAB_03ed5968;
    }
    pNVar9 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
    cVar2 = NameMapperBase::ContainsId(pNVar9,param_2);
    if (cVar2 != '\0') {
      iVar4 = PlantAccessoryPieceMapper::GetInstance();
      iVar11 = (int)aDStack_1e0;
      NameMapperBase::GetNameForId(iVar4);
      FUN_05474278(aMStack_200,asStack_190);
      std::string::~string(asStack_190);
      MetricsCollectorNameSpace::GetAccessoryPiece(aMStack_200,(string *)(ulong)uVar1,iVar11);
      goto LAB_03ed5968;
    }
    pNVar9 = (NameMapperBase *)PlantAccessoryInfoMapper::GetInstance();
    cVar2 = NameMapperBase::ContainsId(pNVar9,param_2);
    if (cVar2 != '\0') {
      iVar4 = PlantAccessoryInfoMapper::GetInstance();
      iVar11 = (int)aDStack_1e0;
      NameMapperBase::GetNameForId(iVar4);
      FUN_05474278(aMStack_200,asStack_190);
      std::string::~string(asStack_190);
      MetricsCollectorNameSpace::GetAccessory(aMStack_200,(string *)(ulong)uVar1,iVar11);
      goto LAB_03ed5968;
    }
    OtherServerNameMapper::GetInstance();
    cVar2 = FUN_03eaad54(param_2);
    if (cVar2 != '\0') {
      MetricsCollectorNameSpace::GetFreeGem
                ((MetricsCollectorNameSpace *)(ulong)uVar1,(int)aDStack_1e0);
      goto LAB_03ed5968;
    }
    OtherServerNameMapper::GetInstance();
    cVar2 = FUN_03eaad64(param_2);
    if (cVar2 == '\0') {
      OtherServerNameMapper::GetInstance();
      cVar2 = FUN_03eaad44(param_2);
      if (cVar2 != '\0') {
        MetricsCollectorNameSpace::GetCoin
                  ((MetricsCollectorNameSpace *)(ulong)uVar1,(int)aDStack_1e0);
        goto LAB_03ed5968;
      }
    }
    else {
      if (param_2 == 0x961) {
        pcVar10 = "egypt";
      }
      else if (param_2 == 0x962) {
        pcVar10 = "pirate";
      }
      else if (param_2 == 0x963) {
        pcVar10 = "cowboy";
      }
      else if (param_2 == 0x964) {
        pcVar10 = "kongfu";
      }
      else if (param_2 == 0x965) {
        pcVar10 = "future";
      }
      else if (param_2 == 0x966) {
        pcVar10 = "dark";
      }
      else if (param_2 == 0x967) {
        pcVar10 = "beach";
      }
      else {
        if (param_2 != 0x968) goto LAB_03ed597c;
        pcVar10 = "iceage";
      }
      iVar11 = (int)aDStack_1e0;
      std::string::string((string *)aDStack_1d0,pcVar10);
      MetricsCollectorNameSpace::GetKey
                ((MetricsCollectorNameSpace *)aDStack_1d0,(string *)(ulong)uVar1,iVar11);
      KV::add((KV *)aPStack_1c0,(DString *)asStack_190);
      DString::~DString((DString *)asStack_190);
      std::string::~string((string *)aDStack_1d0);
      nop();
    }
  }
  else {
    iVar4 = PlantNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar4);
    FUN_05474278(aMStack_200,asStack_190);
    std::string::~string(asStack_190);
    MetricsCollectorNameSpace::GetPlant(aMStack_200,(string *)0x1,1,iVar11);
LAB_03ed5968:
    KV::add((KV *)aPStack_1c0,(DString *)asStack_190);
    DString::~DString((DString *)asStack_190);
  }
LAB_03ed597c:
  DString::DString(aDStack_1e0,param_1);
  std::string::string(asStack_1f8,"Accumulated_Login_Reward");
  pcVar10 = (char *)DString::c_str(aDStack_1e0);
  std::string::string(asStack_1f0,pcVar10);
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)asStack_190,asStack_1f0,1,
             auStack_218);
  KV::commit();
  pcVar10 = (char *)DString::c_str(aDStack_1d0);
  std::string::string(asStack_1e8,pcVar10);
  BehaviorLog::event(asStack_1f8,(vector *)asStack_190,asStack_1e8);
  std::string::~string(asStack_1e8);
  nop();
  DString::~DString(aDStack_1d0);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)asStack_190);
  std::string::~string(asStack_1f0);
  nop();
  std::string::~string(asStack_1f8);
  nop();
  DString::~DString(aDStack_1e0);
  std::string::~string((string *)aMStack_200);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_208);
LAB_03ed5a88:
  std::vector<SignRewardContent,std::allocator<SignRewardContent>>::~vector
            ((vector<SignRewardContent,std::allocator<SignRewardContent>> *)&local_1a8);
  KV::~KV((KV *)aPStack_1c0);
  FUN_054617bc(auStack_178);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onGoldCanOpen(TreasurePool const*, std::vector<TreasureReward const*,
   std::allocator<TreasureReward const*> >&) */

void __thiscall
MetricsCollector::onGoldCanOpen(MetricsCollector *this,TreasurePool *param_1,vector *param_2)

{
  string *psVar1;
  bool bVar2;
  undefined4 uVar3;
  LogServer *this_00;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  char *pcVar8;
  DString *this_01;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  string *psVar14;
  undefined1 auStack_1e8 [8];
  string asStack_1e0 [8];
  string asStack_1d8 [8];
  DString aDStack_1d0 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_1c0 [24];
  PIInterpolator aPStack_1a8 [24];
  string asStack_190 [24];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (TreasurePool *)0x0) {
    this_00 = (LogServer *)LogServer::Instance();
    uVar3 = operator|(0x10,8);
    FUN_05462470(auStack_178,uVar3);
    std::string::string(asStack_190,"goldcanopen_1");
    uVar12 = 0;
    AppendLogHead(this,asStack_190);
    std::string::~string(asStack_190);
    nop();
    FUN_05475d88(asStack_190,param_1);
    LogServer::AppendMsg(this_00,asStack_190);
    std::string::~string(asStack_190);
    FUN_05475d88(asStack_190,(string *)(param_1 + 0x10));
    LogServer::AppendMsg(this_00,asStack_190);
    std::string::~string(asStack_190);
    lVar4 = FUN_03eaaed0(*(undefined8 *)param_2,*(undefined8 *)(param_2 + 8));
    uVar10 = lVar4 * *(int *)(param_1 + 8);
    uVar11 = uVar10;
    std::string::string(asStack_190,"");
    FUN_05462980(auStack_178,asStack_190);
    std::string::~string(asStack_190);
    nop();
    thunk_FUN_0546069c(auStack_168,uVar10);
    FUN_05462824(asStack_190,auStack_178);
    LogServer::AppendMsg(this_00,asStack_190);
    std::string::~string(asStack_190);
    std::string::string(asStack_190,"");
    FUN_05462980(auStack_178,asStack_190);
    std::string::~string(asStack_190);
    nop();
    uVar13 = *(undefined8 *)param_2;
    uVar5 = FUN_03eaaed0(uVar13,*(undefined8 *)(param_2 + 8));
    if (uVar5 != 0) {
      do {
        plVar6 = (long *)FUN_03eaaedc(uVar13,uVar12);
        lVar4 = *plVar6;
        if (lVar4 != 0) {
          uVar13 = FUN_0545ec84(auStack_168,lVar4);
          uVar13 = FUN_054603b8(uVar13,&DAT_05593348);
          uVar13 = FUN_0545ec84(uVar13,lVar4 + 8);
          uVar13 = FUN_054603b8(uVar13,&DAT_05593348);
          uVar13 = FUN_0546065c(uVar13,*(undefined4 *)(lVar4 + 0x10));
          FUN_054603b8(uVar13,&DAT_05594620);
          uVar13 = *(undefined8 *)param_2;
          uVar5 = FUN_03eaaed0(uVar13,*(undefined8 *)(param_2 + 8));
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar5);
    }
    uVar12 = 0;
    FUN_05462824(asStack_190,auStack_178);
    LogServer::AppendMsg(this_00,asStack_190);
    std::string::~string(asStack_190);
    LogServer::SendMsg(this_00);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_1c0);
    Sexy::PIInterpolator::PIInterpolator(aPStack_1a8);
    uVar13 = *(undefined8 *)param_2;
    uVar5 = FUN_03eaaed0(uVar13,*(undefined8 *)(param_2 + 8));
    if (uVar5 != 0) {
      do {
        puVar7 = (undefined8 *)FUN_03eaaedc(uVar13,uVar12);
        psVar14 = (string *)*puVar7;
        if (psVar14 != (string *)0x0) {
          psVar1 = psVar14 + 8;
          bVar2 = std::operator==(psVar1,"accessory");
          if (bVar2) {
            DString::DString(aDStack_1d0,psVar14);
            DString::replace((char *)aDStack_1d0,"accessory_");
            DString::operator=(aDStack_1d0,(DString *)asStack_190);
            DString::~DString((DString *)asStack_190);
            pcVar8 = (char *)DString::c_str(aDStack_1d0);
            puVar9 = auStack_1e8;
            std::string::string(asStack_1e0,pcVar8);
            MetricsCollectorNameSpace::GetAccessory
                      ((MetricsCollectorNameSpace *)asStack_1e0,(string *)0x1,(int)puVar9);
LAB_03ed622c:
            KV::add((KV *)aPStack_1a8,(DString *)asStack_190);
            DString::~DString((DString *)asStack_190);
            std::string::~string(asStack_1e0);
            nop();
            this_01 = aDStack_1d0;
LAB_03ed6254:
            DString::~DString(this_01);
          }
          else {
            bVar2 = std::operator==(psVar1,"accessory_piece");
            if (bVar2) {
              DString::DString(aDStack_1d0,psVar14);
              DString::replace((char *)aDStack_1d0,"accessory_piece_");
              DString::operator=(aDStack_1d0,(DString *)asStack_190);
              DString::~DString((DString *)asStack_190);
              pcVar8 = (char *)DString::c_str(aDStack_1d0);
              puVar9 = auStack_1e8;
              std::string::string(asStack_1e0,pcVar8);
              MetricsCollectorNameSpace::GetAccessoryPiece
                        ((MetricsCollectorNameSpace *)asStack_1e0,
                         (string *)(ulong)*(uint *)(psVar14 + 0x10),(int)puVar9);
              goto LAB_03ed622c;
            }
            bVar2 = std::operator==(psVar1,"plant");
            if (bVar2) {
              DString::DString(aDStack_1d0,psVar14);
              DString::replace((char *)aDStack_1d0,"plant_");
              DString::operator=(aDStack_1d0,(DString *)asStack_190);
              DString::~DString((DString *)asStack_190);
              pcVar8 = (char *)DString::c_str(aDStack_1d0);
              std::string::string(asStack_1e0,pcVar8);
              MetricsCollectorNameSpace::GetPlant
                        ((MetricsCollectorNameSpace *)asStack_1e0,(string *)0x1,1,(int)uVar11);
              goto LAB_03ed622c;
            }
            bVar2 = std::operator==(psVar1,"plant_piece");
            if ((bVar2) || (bVar2 = std::operator==(psVar1,"plant_piece"), bVar2)) {
              DString::DString(aDStack_1d0,psVar14);
              DString::replace((char *)aDStack_1d0,"plant_piece_");
              DString::operator=(aDStack_1d0,(DString *)asStack_190);
              DString::~DString((DString *)asStack_190);
              pcVar8 = (char *)DString::c_str(aDStack_1d0);
              puVar9 = auStack_1e8;
              std::string::string(asStack_1e0,pcVar8);
              MetricsCollectorNameSpace::GetPlantPiece
                        ((MetricsCollectorNameSpace *)asStack_1e0,
                         (string *)(ulong)*(uint *)(psVar14 + 0x10),(int)puVar9);
              goto LAB_03ed622c;
            }
            bVar2 = std::operator==(psVar1,"avatar_piece");
            if (bVar2) {
              DString::DString(aDStack_1d0,psVar14);
              DString::replace((char *)aDStack_1d0,"avatar_piece_");
              DString::operator=(aDStack_1d0,(DString *)asStack_190);
              DString::~DString((DString *)asStack_190);
              pcVar8 = (char *)DString::c_str(aDStack_1d0);
              puVar9 = auStack_1e8;
              std::string::string(asStack_1e0,pcVar8);
              MetricsCollectorNameSpace::GetAvatarPiece
                        ((MetricsCollectorNameSpace *)asStack_1e0,
                         (string *)(ulong)*(uint *)(psVar14 + 0x10),(int)puVar9);
              goto LAB_03ed622c;
            }
            bVar2 = std::operator==(psVar1,"avatar");
            if (bVar2) {
              DString::DString(aDStack_1d0,psVar14);
              DString::replace((char *)aDStack_1d0,"avatar_");
              DString::operator=(aDStack_1d0,(DString *)asStack_190);
              DString::~DString((DString *)asStack_190);
              pcVar8 = (char *)DString::c_str(aDStack_1d0);
              puVar9 = auStack_1e8;
              std::string::string(asStack_1e0,pcVar8);
              MetricsCollectorNameSpace::GetAvatar
                        ((MetricsCollectorNameSpace *)asStack_1e0,(string *)0x1,(int)puVar9);
              goto LAB_03ed622c;
            }
            bVar2 = std::operator==(psVar1,"coin");
            if (bVar2) {
              MetricsCollectorNameSpace::GetCoin
                        ((MetricsCollectorNameSpace *)(ulong)*(uint *)(psVar14 + 0x10),
                         extraout_w1_00);
LAB_03ed666c:
              KV::add((KV *)aPStack_1a8,(DString *)asStack_190);
              this_01 = (DString *)asStack_190;
              goto LAB_03ed6254;
            }
            bVar2 = std::operator==(psVar1,"gem");
            if (bVar2) {
              MetricsCollectorNameSpace::GetFreeGem
                        ((MetricsCollectorNameSpace *)(ulong)*(uint *)(psVar14 + 0x10),
                         extraout_w1_01);
              goto LAB_03ed666c;
            }
          }
          uVar13 = *(undefined8 *)param_2;
          uVar5 = FUN_03eaaed0(uVar13,*(undefined8 *)(param_2 + 8));
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar5);
    }
    bVar2 = std::operator==((string *)(param_1 + 0x10),"gem");
    if (bVar2) {
      MetricsCollectorNameSpace::GetUsePaidGem
                ((MetricsCollectorNameSpace *)(uVar10 & 0xffffffff),extraout_w1);
    }
    else {
      MetricsCollectorNameSpace::GetUseCoin
                ((MetricsCollectorNameSpace *)(uVar10 & 0xffffffff),extraout_w1);
    }
    KV::add((KV *)aPStack_1a8,(DString *)asStack_190);
    DString::~DString((DString *)asStack_190);
    KV::commit();
    pcVar8 = (char *)DString::c_str((DString *)asStack_190);
    std::string::string(asStack_1e0,pcVar8);
    nop();
    DString::~DString((DString *)asStack_190);
    std::string::string((string *)aDStack_1d0,"Golden_Vase");
    FUN_05475d88(asStack_1d8,param_1);
    std::vector<std::string,std::allocator<std::string>>::vector
              ((vector<std::string,std::allocator<std::string>> *)asStack_190,asStack_1d8,1,
               auStack_1e8);
    BehaviorLog::event((string *)aDStack_1d0,(vector *)asStack_190,asStack_1e0);
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)asStack_190);
    std::string::~string(asStack_1d8);
    std::string::~string((string *)aDStack_1d0);
    nop();
    std::string::string((string *)aDStack_1d0,"Event");
    std::string::string(asStack_190,"Gacha_Goldenvase");
    BehaviorLog::itemPurchase((string *)aDStack_1d0,asStack_190,asStack_1e0);
    std::string::~string(asStack_190);
    nop();
    std::string::~string((string *)aDStack_1d0);
    nop();
    std::string::~string(asStack_1e0);
    KV::~KV((KV *)aPStack_1a8);
    std::vector<DString,std::allocator<DString>>::~vector
              ((vector<DString,std::allocator<DString>> *)avStack_1c0);
    FUN_054617bc(auStack_178);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onStartMission(std::string const&, std::string const&, int) */

void __thiscall
MetricsCollector::onStartMission(MetricsCollector *this,string *param_1,string *param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  Util *this_00;
  LogServer *this_01;
  KV *pKVar8;
  char *pcVar9;
  ProfileMgr *pPVar10;
  PlayerInfo *pPVar11;
  int *piVar12;
  FestivalManager *pFVar13;
  long lVar14;
  string *extraout_x1;
  string *extraout_x1_00;
  string asStack_208 [8];
  DString aDStack_200 [16];
  DString aDStack_1f0 [16];
  string asStack_1e0 [16];
  string asStack_1d0 [16];
  string asStack_1c0 [16];
  undefined4 local_1b0 [4];
  string asStack_1a0 [16];
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar4);
  std::string::string((string *)&local_190,"");
  FUN_05462980(auStack_178,(string *)&local_190);
  std::string::~string((string *)&local_190);
  nop();
  FUN_0546065c(auStack_168,param_3);
  uVar7 = LogServer::Instance();
  std::string::string(asStack_1e0,"mission_start");
  uVar7 = LogServer::AppendMsg(uVar7,asStack_1e0);
  Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetAccountName();
  uVar7 = LogServer::AppendMsg(uVar7,asStack_1d0);
  FUN_05475d88(asStack_1c0,this + 0x120);
  uVar7 = LogServer::AppendMsg(uVar7,asStack_1c0);
  FUN_05475d88((string *)local_1b0,param_1);
  uVar7 = LogServer::AppendMsg(uVar7,(string *)local_1b0);
  FUN_05475d88(asStack_1a0,param_2);
  uVar7 = LogServer::AppendMsg(uVar7,asStack_1a0);
  FUN_05462824((string *)&local_190,auStack_178);
  LogServer::AppendMsg(uVar7,(string *)&local_190);
  std::string::~string((string *)&local_190);
  std::string::~string(asStack_1a0);
  std::string::~string((string *)local_1b0);
  std::string::~string(asStack_1c0);
  std::string::~string(asStack_1d0);
  std::string::~string(asStack_1e0);
  nop();
  this_00 = (Util *)LogServer::Instance();
  Android::Util::GetPackageName(this_00);
  LogServer::AppendMsg(this_00,(string *)&local_190);
  std::string::~string((string *)&local_190);
  this_01 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_01);
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)&local_190);
  DString::DString(aDStack_200,"worldid");
  DString::DString(aDStack_1f0,param_1);
  pKVar8 = (KV *)KV::add((KV *)&local_190,aDStack_200,aDStack_1f0);
  DString::DString((DString *)asStack_1e0,"missionid");
  DString::DString((DString *)asStack_1d0,param_2);
  pKVar8 = (KV *)KV::add(pKVar8,(DString *)asStack_1e0,(DString *)asStack_1d0);
  DString::DString((DString *)asStack_1c0,"stars");
  DString::DString((DString *)local_1b0,param_3);
  KV::add(pKVar8,(DString *)asStack_1c0,(DString *)local_1b0);
  KV::commit();
  pcVar9 = (char *)DString::c_str((DString *)asStack_1a0);
  std::string::string(asStack_208,pcVar9);
  nop();
  DString::~DString((DString *)asStack_1a0);
  DString::~DString((DString *)local_1b0);
  DString::~DString((DString *)asStack_1c0);
  DString::~DString((DString *)asStack_1d0);
  DString::~DString((DString *)asStack_1e0);
  DString::~DString(aDStack_1f0);
  DString::~DString(aDStack_200);
  KV::~KV((KV *)&local_190);
  DString::DString((DString *)asStack_1a0);
  thunk_FUN_05475e00(this + 0xc0,param_1);
  bVar2 = std::operator==(param_1,"activity");
  if (bVar2) {
    pcVar9 = (char *)FUN_0547429c(param_2);
    std::string::string((string *)local_1b0,pcVar9);
    MetricsCollectorNameSpace::GetActivityMissionName
              ((MetricsCollectorNameSpace *)local_1b0,extraout_x1);
  }
  else {
    pcVar9 = (char *)FUN_0547429c(param_2);
    std::string::string((string *)local_1b0,pcVar9);
    MetricsCollectorNameSpace::GetMissionName((MetricsCollectorNameSpace *)local_1b0,extraout_x1_00)
    ;
  }
  DString::operator=((DString *)asStack_1a0,(DString *)&local_190);
  DString::~DString((DString *)&local_190);
  std::string::~string((string *)local_1b0);
  nop();
  local_1b0[0] = 0;
  pPVar10 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar11 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar10);
  uVar4 = ProfileUtils::TotalGamesPlayedForLevel(param_2,pPVar11);
  local_190 = CONCAT44(local_190._4_4_,uVar4);
  piVar12 = eastl::max_alt<int>((int *)local_1b0,(int *)&local_190);
  iVar1 = *piVar12;
  uVar5 = FUN_03eaad78(*(undefined1 *)(gGameStateMgr + 0x1eb1));
  pPVar10 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar11 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar10);
  cVar3 = PlayerInfo::GetLevelCompleted(pPVar11,param_2);
  uVar5 = uVar5 & 0xff;
  if (cVar3 == '\0') {
    uVar5 = 2;
  }
  pFVar13 = (FestivalManager *)Sexy::LazySingleton<FestivalManager>::GetInstance();
  cVar3 = FestivalManager::IsFestivalLevel(pFVar13,param_2,0xffffffff);
  if (cVar3 == '\0') {
    lVar14 = DString::findString((DString *)asStack_1a0,"vacation_boss");
  }
  else {
    lVar14 = Sexy::LazySingleton<FestivalManager>::GetInstance();
    iVar6 = FUN_03eaad9c(*(undefined4 *)(lVar14 + 0xc));
    uVar5 = MetricsCollectorNameSpace::GetFestivalLevelDifficutly(iVar6);
    lVar14 = DString::findString((DString *)asStack_1a0,"vacation_boss");
  }
  if (lVar14 == -1) {
    lVar14 = DString::findString((DString *)asStack_1a0,"dangerroom");
    if (lVar14 != -1) {
      uVar5 = 4;
    }
  }
  else {
    uVar5 = 0;
  }
  pcVar9 = (char *)DString::c_str((DString *)asStack_1a0);
  std::string::string((string *)&local_190,pcVar9);
  BehaviorLog::missionStart((string *)&local_190,uVar5,iVar1);
  std::string::~string((string *)&local_190);
  nop();
  DString::~DString((DString *)asStack_1a0);
  std::string::~string(asStack_208);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onPlantUnlockStar(int, std::string const&) */

void __thiscall
MetricsCollector::onPlantUnlockStar(MetricsCollector *this,int param_1,string *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  Util *this_00;
  LogServer *this_01;
  char *__s;
  int iVar3;
  undefined1 auVar4 [12];
  string asStack_1c8 [8];
  string asStack_1c0 [16];
  string asStack_1b0 [16];
  string asStack_1a0 [16];
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  FUN_0546065c(auStack_168,param_1);
  uVar2 = LogServer::Instance();
  std::string::string(asStack_1c8,"plantunlockstar_1");
  uVar2 = LogServer::AppendMsg(uVar2,asStack_1c8);
  Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetAccountName();
  uVar2 = LogServer::AppendMsg(uVar2,asStack_1c0);
  FUN_05475d88(asStack_1b0,this + 0x120);
  iVar3 = (int)this;
  uVar2 = LogServer::AppendMsg(uVar2,asStack_1b0);
  FUN_05475d88(asStack_1a0,param_2);
  uVar2 = LogServer::AppendMsg(uVar2,asStack_1a0);
  FUN_05462824((string *)&local_190,auStack_178);
  LogServer::AppendMsg(uVar2,(string *)&local_190);
  std::string::~string((string *)&local_190);
  std::string::~string(asStack_1a0);
  std::string::~string(asStack_1b0);
  std::string::~string(asStack_1c0);
  std::string::~string(asStack_1c8);
  nop();
  this_00 = (Util *)LogServer::Instance();
  Android::Util::GetPackageName(this_00);
  LogServer::AppendMsg(this_00,(string *)&local_190);
  std::string::~string((string *)&local_190);
  this_01 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_01);
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)&local_190);
  MetricsCollectorNameSpace::GetPlant((MetricsCollectorNameSpace *)param_2,(string *)0x1,1,iVar3);
  auVar4 = KV::add((KV *)&local_190,(DString *)asStack_1c0);
  MetricsCollectorNameSpace::GetStar
            ((MetricsCollectorNameSpace *)(ulong)(uint)-param_1,auVar4._8_4_);
  KV::add(auVar4._0_8_,(DString *)asStack_1b0);
  KV::commit();
  __s = (char *)DString::c_str((DString *)asStack_1a0);
  std::string::string(asStack_1c8,__s);
  nop();
  DString::~DString((DString *)asStack_1a0);
  DString::~DString((DString *)asStack_1b0);
  DString::~DString((DString *)asStack_1c0);
  KV::~KV((KV *)&local_190);
  std::string::string(asStack_1a0,"Map");
  std::string::string((string *)&local_190,"PvE_Growth");
  BehaviorLog::itemPurchase(asStack_1a0,(string *)&local_190,asStack_1c8);
  std::string::~string((string *)&local_190);
  nop();
  std::string::~string(asStack_1a0);
  nop();
  std::string::~string(asStack_1c8);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onWorldMapUnLock(int, std::string const&, int) */

void __thiscall
MetricsCollector::onWorldMapUnLock(MetricsCollector *this,int param_1,string *param_2,int param_3)

{
  undefined1 auVar1 [12];
  undefined1 auStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  DString aDStack_48 [16];
  PIInterpolator aPStack_38 [24];
  DString aDStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::PIInterpolator::PIInterpolator(aPStack_38);
  if (0 < param_1) {
    if (param_3 < 1) {
      MetricsCollectorNameSpace::GetUsePaidGem
                ((MetricsCollectorNameSpace *)(ulong)(uint)param_1,param_1);
      KV::add((KV *)aPStack_38,aDStack_20);
      DString::~DString(aDStack_20);
    }
    else {
      MetricsCollectorNameSpace::GetUsePaidGem
                ((MetricsCollectorNameSpace *)(ulong)(uint)(param_1 - param_3),param_1);
      auVar1 = KV::add((KV *)aPStack_38,aDStack_48);
      MetricsCollectorNameSpace::GetUseFreeGem
                ((MetricsCollectorNameSpace *)(ulong)(uint)param_3,auVar1._8_4_);
      KV::add(auVar1._0_8_,aDStack_20);
      DString::~DString(aDStack_20);
      DString::~DString(aDStack_48);
    }
  }
  KV::commit();
  DString::operator_cast_to_string(aDStack_20);
  DString::~DString(aDStack_20);
  std::string::string((string *)aDStack_20,"Map");
  BehaviorLog::itemPurchase((string *)aDStack_20,param_2,asStack_58);
  std::string::~string((string *)aDStack_20);
  nop();
  std::string::string((string *)aDStack_48,"Unlock_World");
  FUN_05475d88(asStack_50,param_2);
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)aDStack_20,asStack_50,1,auStack_60);
  BehaviorLog::inGameBehavior((string *)aDStack_48,(vector *)aDStack_20,asStack_58);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)aDStack_20);
  std::string::~string(asStack_50);
  std::string::~string((string *)aDStack_48);
  nop();
  std::string::~string(asStack_58);
  KV::~KV((KV *)aPStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onNewerBagPay(int, int) */

void __thiscall MetricsCollector::onNewerBagPay(MetricsCollector *this,int param_1,int param_2)

{
  undefined4 uVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined8 uVar2;
  Util *this_02;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var3;
  long lVar4;
  LogServer *this_03;
  string *this_04;
  int extraout_w1;
  int extraout_w1_00;
  char *__s;
  int iVar5;
  string *local_228;
  string *local_220;
  string *local_218;
  undefined1 auStack_1f8 [8];
  string asStack_1f0 [8];
  string asStack_1e8 [8];
  string asStack_1e0 [8];
  string asStack_1d8 [16];
  string asStack_1c8 [24];
  string asStack_1b0 [24];
  string asStack_198 [8];
  string asStack_190 [8];
  string asStack_188 [8];
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  uVar2 = LogServer::Instance();
  std::string::string(asStack_1d8,"rechargenewerbag");
  uVar2 = LogServer::AppendMsg(uVar2,asStack_1d8);
  GetPCPID();
  uVar2 = LogServer::AppendMsg(uVar2,asStack_1c8);
  FUN_05475d88(asStack_1b0,this + 0x120);
  LogServer::AppendMsg(uVar2,asStack_1b0);
  std::string::~string(asStack_1b0);
  std::string::~string(asStack_1c8);
  std::string::~string(asStack_1d8);
  nop();
  std::string::string(asStack_1b0,"");
  FUN_05462980(auStack_178,asStack_1b0);
  std::string::~string(asStack_1b0);
  nop();
  FUN_0546065c(auStack_168,param_1);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_1b0,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_1b0);
  std::string::~string(asStack_1b0);
  std::string::string(asStack_1b0,"");
  FUN_05462980(auStack_178,asStack_1b0);
  std::string::~string(asStack_1b0);
  nop();
  uVar1 = PlayerInfo::GetNumGems(this_01,false);
  FUN_0546065c(auStack_168,uVar1);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_1b0,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_1b0);
  std::string::~string(asStack_1b0);
  std::string::string(asStack_1b0,"");
  FUN_05462980(auStack_178,asStack_1b0);
  std::string::~string(asStack_1b0);
  nop();
  uVar1 = NewPVPMgr::GetSeasonEndTime((NewPVPMgr *)this_01);
  FUN_0546065c(auStack_168,uVar1);
  uVar2 = LogServer::Instance();
  FUN_05462824(asStack_1b0,auStack_178);
  LogServer::AppendMsg(uVar2,asStack_1b0);
  std::string::~string(asStack_1b0);
  this_02 = (Util *)LogServer::Instance();
  Android::Util::GetPackageName(this_02);
  LogServer::AppendMsg(this_02,asStack_1b0);
  std::string::~string(asStack_1b0);
  std::string::string(asStack_1f0,"unknown");
  nop();
  p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar4 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_rightmost(p_Var3);
  if (lVar4 != 0) {
    p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    std::
    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
    ::_M_rightmost(p_Var3);
    PurchaseBroker::GetPurchasePlatform();
    FUN_05474278(asStack_1f0,asStack_1b0);
    std::string::~string(asStack_1b0);
  }
  uVar2 = LogServer::Instance();
  FUN_05475d88(asStack_1b0,asStack_1f0);
  LogServer::AppendMsg(uVar2,asStack_1b0);
  std::string::~string(asStack_1b0);
  this_03 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_03);
  if (param_2 == -1) {
    Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)asStack_1c8);
    MetricsCollectorNameSpace::GetCoin((MetricsCollectorNameSpace *)0x2710,(int)asStack_190);
    iVar5 = (int)asStack_180;
    KV::add((KV *)asStack_1c8,(DString *)asStack_1b0);
    DString::~DString((DString *)asStack_1b0);
    MetricsCollectorNameSpace::GetPaidGem((MetricsCollectorNameSpace *)0x1e,extraout_w1_00);
    KV::add((KV *)asStack_1c8,(DString *)asStack_1b0);
    DString::~DString((DString *)asStack_1b0);
    std::string::string(asStack_1d8,"repeater");
    MetricsCollectorNameSpace::GetPlant
              ((MetricsCollectorNameSpace *)asStack_1d8,(string *)0x1,1,iVar5);
    KV::add((KV *)asStack_1c8,(DString *)asStack_1b0);
    DString::~DString((DString *)asStack_1b0);
    std::string::~string(asStack_1d8);
    nop();
    KV::commit();
    DString::operator_cast_to_string((DString *)asStack_1b0);
    DString::~DString((DString *)asStack_1b0);
    std::string::string(asStack_1e0,"Recharge");
    __s = "Newer_Present";
  }
  else {
    if (param_2 != -2) goto LAB_03ed73fc;
    Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)asStack_1c8);
    MetricsCollectorNameSpace::GetCoin((MetricsCollectorNameSpace *)0xc350,(int)asStack_190);
    iVar5 = (int)asStack_180;
    KV::add((KV *)asStack_1c8,(DString *)asStack_1b0);
    DString::~DString((DString *)asStack_1b0);
    MetricsCollectorNameSpace::GetPaidGem((MetricsCollectorNameSpace *)0x9b,extraout_w1);
    KV::add((KV *)asStack_1c8,(DString *)asStack_1b0);
    DString::~DString((DString *)asStack_1b0);
    std::string::string(asStack_1d8,"snowpea");
    MetricsCollectorNameSpace::GetPlant
              ((MetricsCollectorNameSpace *)asStack_1d8,(string *)0x1,1,iVar5);
    KV::add((KV *)asStack_1c8,(DString *)asStack_1b0);
    DString::~DString((DString *)asStack_1b0);
    std::string::~string(asStack_1d8);
    nop();
    KV::commit();
    DString::operator_cast_to_string((DString *)asStack_1b0);
    DString::~DString((DString *)asStack_1b0);
    std::string::string(asStack_1e0,"Recharge");
    __s = "Advance_Newer_Present";
  }
  local_218 = asStack_190;
  local_220 = asStack_188;
  local_228 = asStack_180;
  this_04 = std::string::string(asStack_198,__s);
  MetricsCollectorNameSpace::GetCurrentLevel((MetricsCollectorNameSpace *)this_04);
  std::string::string(local_220,"NULL");
  DString::DString((DString *)asStack_1d8,param_1);
  DString::operator_cast_to_string((DString *)asStack_1d8);
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)asStack_1b0,asStack_198,4,
             auStack_1f8);
  BehaviorLog::inGameBehavior(asStack_1e0,(vector *)asStack_1b0,asStack_1e8);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)asStack_1b0);
  std::string::~string(local_228);
  std::string::~string(local_220);
  std::string::~string(local_218);
  std::string::~string(asStack_198);
  DString::~DString((DString *)asStack_1d8);
  nop();
  nop();
  std::string::~string(asStack_1e0);
  nop();
  std::string::~string(asStack_1e8);
  KV::~KV((KV *)asStack_1c8);
LAB_03ed73fc:
  std::string::~string(asStack_1f0);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onAdsOpen(std::string const&) */

void __thiscall MetricsCollector::onAdsOpen(MetricsCollector *this,string *param_1)

{
  bool bVar1;
  int *piVar2;
  undefined1 auStack_70 [16];
  string asStack_60 [8];
  string asStack_58 [8];
  undefined8 local_50 [2];
  undefined8 local_40 [3];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_50[0] = std::
                map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                ::find((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                        *)&DAT_06ae1290,param_1);
  local_40[0] = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)&DAT_06ae1290);
  bVar1 = eastl::operator!=((rbtree_iterator *)local_50,(rbtree_iterator *)local_40);
  if (bVar1) {
    std::string::string(asStack_60,"AD");
    std::string::string(asStack_28,"Show_Times");
    piVar2 = (int *)std::
                    map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                    ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                  *)&DAT_06ae1290,param_1);
    DString::DString((DString *)local_50,*piVar2);
    DString::operator_cast_to_string((DString *)local_50);
    std::string::string(asStack_18,"0");
    std::string::string(asStack_10,"0");
    std::vector<std::string,std::allocator<std::string>>::vector
              ((vector<std::string,std::allocator<std::string>> *)local_40,asStack_28,4,auStack_70);
    std::string::string(asStack_58,"");
    BehaviorLog::inGameBehavior(asStack_60,(vector *)local_40,asStack_58);
    std::string::~string(asStack_58);
    nop();
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)local_40);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    std::string::~string(asStack_20);
    std::string::~string(asStack_28);
    nop();
    nop();
    DString::~DString((DString *)local_50);
    nop();
    std::string::~string(asStack_60);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onMissionDiamondUse(int, std::map<int, int, std::less<int>,
   std::allocator<std::pair<int const, int> > > const&) */

void __thiscall
MetricsCollector::onMissionDiamondUse(MetricsCollector *this,int param_1,map *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined1 auStack_1c8 [8];
  undefined8 local_1c0;
  string asStack_1b8 [8];
  string asStack_1b0 [8];
  string asStack_1a8 [8];
  DString aDStack_1a0 [16];
  undefined8 local_190 [3];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar3);
  std::string::string((string *)local_190,"");
  FUN_05462980(auStack_178,(string *)local_190);
  std::string::~string((string *)local_190);
  nop();
  cVar1 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::empty
                    ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)param_2
                    );
  if (cVar1 == '\0') {
    local_1c0 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin
                          ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                           param_2);
    puVar4 = (undefined4 *)
             std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                       ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_1c0);
    FUN_0546065c(auStack_168,*puVar4);
    FUN_054603b8(auStack_168,&DAT_05593348);
    lVar5 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_1c0);
    FUN_0546065c(auStack_168,*(undefined4 *)(lVar5 + 4));
    FUN_03eaaeec((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_1c0);
    while( true ) {
      local_190[0] = std::
                     map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)param_2);
      bVar2 = eastl::operator!=((rbtree_iterator *)&local_1c0,(rbtree_iterator *)local_190);
      if (!bVar2) break;
      FUN_054603b8(auStack_168,&DAT_05594620);
      puVar4 = (undefined4 *)
               std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                         ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_1c0);
      FUN_0546065c(auStack_168,*puVar4);
      FUN_054603b8(auStack_168,&DAT_05593348);
      lVar5 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_1c0);
      FUN_0546065c(auStack_168,*(undefined4 *)(lVar5 + 4));
      FUN_03eaaeec((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_1c0);
    }
    std::string::string(asStack_1b0,"Mission_Diamond_Use");
    DString::DString(aDStack_1a0,param_1);
    DString::operator_cast_to_string(aDStack_1a0);
    std::vector<std::string,std::allocator<std::string>>::vector
              ((vector<std::string,std::allocator<std::string>> *)local_190,asStack_1a8,1,
               auStack_1c8);
    FUN_05462824(asStack_1b8,auStack_178);
    BehaviorLog::event(asStack_1b0,(vector *)local_190,asStack_1b8);
    std::string::~string(asStack_1b8);
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)local_190);
    std::string::~string(asStack_1a8);
    DString::~DString(aDStack_1a0);
    std::string::~string(asStack_1b0);
    nop();
    FUN_054617bc(auStack_178);
  }
  else {
    std::string::string(asStack_1b8,"Mission_Diamond_Use");
    DString::DString(aDStack_1a0,param_1);
    DString::operator_cast_to_string(aDStack_1a0);
    std::vector<std::string,std::allocator<std::string>>::vector
              ((vector<std::string,std::allocator<std::string>> *)local_190,asStack_1a8,1,
               auStack_1c8);
    std::string::string(asStack_1b0,"");
    BehaviorLog::event(asStack_1b8,(vector *)local_190,asStack_1b0);
    std::string::~string(asStack_1b0);
    nop();
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)local_190);
    std::string::~string(asStack_1a8);
    DString::~DString(aDStack_1a0);
    std::string::~string(asStack_1b8);
    nop();
    FUN_054617bc(auStack_178);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onFiveYearsRushthrough(std::vector<int, std::allocator<int> > const&) */

void __thiscall MetricsCollector::onFiveYearsRushthrough(MetricsCollector *this,vector *param_1)

{
  long lVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  string *local_b0;
  undefined1 auStack_90 [8];
  string asStack_88 [8];
  string asStack_80 [8];
  DString aDStack_78 [16];
  DString aDStack_68 [16];
  DString aDStack_58 [16];
  DString aDStack_48 [16];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  vector<std::string,std::allocator<std::string>> avStack_20 [24];
  long local_8;
  
  uVar4 = *(undefined8 *)param_1;
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_03eaadb4(uVar4,*(undefined8 *)(param_1 + 8));
  if (lVar1 == 4) {
    std::string::string(asStack_88,"FiveYears_Rushthrough");
    piVar2 = (int *)FUN_03eaadc0(*(undefined8 *)param_1,0);
    DString::DString(aDStack_78,*piVar2);
    DString::operator_cast_to_string(aDStack_78);
    piVar2 = (int *)FUN_03eaadc0(*(undefined8 *)param_1,1);
    DString::DString(aDStack_68,*piVar2);
    DString::operator_cast_to_string(aDStack_68);
    piVar2 = (int *)FUN_03eaadc0(*(undefined8 *)param_1,2);
    DString::DString(aDStack_58,*piVar2);
    DString::operator_cast_to_string(aDStack_58);
    std::vector<std::string,std::allocator<std::string>>::vector(avStack_20,asStack_38,3,auStack_90)
    ;
    uVar4 = *(undefined8 *)param_1;
    uVar3 = 3;
  }
  else {
    if (lVar1 == 3) {
      piVar2 = (int *)FUN_03eaadc0(uVar4,0);
      DAT_06ae1210 = *piVar2;
      piVar2 = (int *)FUN_03eaadc0(uVar4,1);
      DAT_06ae1220 = *piVar2;
      piVar2 = (int *)FUN_03eaadc0(uVar4,2);
      DAT_06ae11a0 = *piVar2;
      goto LAB_03ed7ccc;
    }
    if (lVar1 != 1) goto LAB_03ed7ccc;
    std::string::string(asStack_88,"FiveYears_Rushthrough");
    DString::DString(aDStack_78,DAT_06ae1210);
    DString::operator_cast_to_string(aDStack_78);
    DString::DString(aDStack_68,DAT_06ae1220);
    DString::operator_cast_to_string(aDStack_68);
    DString::DString(aDStack_58,DAT_06ae11a0);
    DString::operator_cast_to_string(aDStack_58);
    std::vector<std::string,std::allocator<std::string>>::vector(avStack_20,asStack_38,3,auStack_90)
    ;
    uVar4 = *(undefined8 *)param_1;
    uVar3 = 0;
  }
  local_b0 = asStack_80;
  piVar2 = (int *)FUN_03eaadc0(uVar4,uVar3);
  DString::DString(aDStack_48,*piVar2);
  DString::operator_cast_to_string(aDStack_48);
  BehaviorLog::event(asStack_88,(vector *)avStack_20,local_b0);
  std::string::~string(local_b0);
  DString::~DString(aDStack_48);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_20);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_58);
  DString::~DString(aDStack_68);
  DString::~DString(aDStack_78);
  std::string::~string(asStack_88);
  nop();
LAB_03ed7ccc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onFiveYearsExchange(std::map<int, int, std::less<int>,
   std::allocator<std::pair<int const, int> > > const&, int) */

void __thiscall
MetricsCollector::onFiveYearsExchange(MetricsCollector *this,map *param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_1d0 [16];
  string asStack_1c0 [8];
  string asStack_1b8 [8];
  undefined8 local_1b0 [2];
  string asStack_1a0 [8];
  string asStack_198 [8];
  undefined8 local_190 [3];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar2);
  std::string::string((string *)local_190,"");
  FUN_05462980(auStack_178,(string *)local_190);
  std::string::~string((string *)local_190);
  nop();
  local_1b0[0] = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin
                           ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                            param_1);
  while( true ) {
    local_190[0] = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_1);
    bVar1 = eastl::operator!=((rbtree_iterator *)local_1b0,(rbtree_iterator *)local_190);
    if (!bVar1) break;
    puVar3 = (undefined4 *)
             std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                       ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)local_1b0);
    FUN_0546065c(auStack_168,*puVar3);
    FUN_054603b8(auStack_168,&DAT_05593348);
    FUN_03eaaeec((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)local_1b0);
  }
  std::string::string(asStack_1c0,"FiveYears_Exchange");
  FUN_05462824(asStack_1a0,auStack_178);
  DString::DString((DString *)local_1b0,param_2);
  DString::operator_cast_to_string((DString *)local_1b0);
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)local_190,asStack_1a0,2,auStack_1d0)
  ;
  std::string::string(asStack_1b8,"");
  BehaviorLog::event(asStack_1c0,(vector *)local_190,asStack_1b8);
  std::string::~string(asStack_1b8);
  nop();
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)local_190);
  std::string::~string(asStack_198);
  std::string::~string(asStack_1a0);
  DString::~DString((DString *)local_1b0);
  std::string::~string(asStack_1c0);
  nop();
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onNationalDayDailyReward(int, std::vector<int, std::allocator<int> > const&) */

void __thiscall
MetricsCollector::onNationalDayDailyReward(MetricsCollector *this,int param_1,vector *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_1d0 [16];
  string asStack_1c0 [8];
  string asStack_1b8 [8];
  undefined8 local_1b0 [2];
  string asStack_1a0 [8];
  string asStack_198 [8];
  undefined8 local_190 [3];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar2);
  std::string::string((string *)local_190,"");
  FUN_05462980(auStack_178,(string *)local_190);
  std::string::~string((string *)local_190);
  nop();
  local_1b0[0] = FUN_03ebae5c(*(undefined8 *)param_2);
  local_190[0] = FUN_03ebaeac(*(undefined8 *)(param_2 + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)local_1b0,(__normal_iterator *)local_190), bVar1) {
    puVar3 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_1b0);
    FUN_0546065c(auStack_168,*puVar3);
    FUN_054603b8(auStack_168,&DAT_05593348);
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)local_1b0);
  }
  std::string::string(asStack_1c0,"National_Day_Prize");
  DString::DString((DString *)local_1b0,param_1);
  DString::operator_cast_to_string((DString *)local_1b0);
  FUN_05462824(asStack_198,auStack_178);
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)local_190,asStack_1a0,2,auStack_1d0)
  ;
  std::string::string(asStack_1b8,"");
  BehaviorLog::event(asStack_1c0,(vector *)local_190,asStack_1b8);
  std::string::~string(asStack_1b8);
  nop();
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)local_190);
  std::string::~string(asStack_198);
  std::string::~string(asStack_1a0);
  DString::~DString((DString *)local_1b0);
  std::string::~string(asStack_1c0);
  nop();
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onBattleShop(int, int) */

void __thiscall MetricsCollector::onBattleShop(MetricsCollector *this,int param_1,int param_2)

{
  undefined1 auStack_70 [16];
  string asStack_60 [8];
  string asStack_58 [8];
  DString aDStack_50 [16];
  DString aDStack_40 [16];
  string asStack_30 [8];
  string asStack_28 [8];
  vector<std::string,std::allocator<std::string>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_60,"Battle_Shop");
  DString::DString(aDStack_50,param_1);
  DString::operator_cast_to_string(aDStack_50);
  DString::DString(aDStack_40,param_2);
  DString::operator_cast_to_string(aDStack_40);
  std::vector<std::string,std::allocator<std::string>>::vector(avStack_20,asStack_30,2,auStack_70);
  std::string::string(asStack_58,"");
  BehaviorLog::inGameBehavior(asStack_60,(vector *)avStack_20,asStack_58);
  std::string::~string(asStack_58);
  nop();
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_20);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  DString::~DString(aDStack_40);
  DString::~DString(aDStack_50);
  std::string::~string(asStack_60);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onBattleZ(std::vector<int, std::allocator<int> > const&, std::vector<int,
   std::allocator<int> > const&, std::vector<int, std::allocator<int> > const&) */

void __thiscall
MetricsCollector::onBattleZ(MetricsCollector *this,vector *param_1,vector *param_2,vector *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined1 auStack_368 [8];
  string asStack_360 [8];
  string asStack_358 [8];
  DString aDStack_350 [16];
  DString aDStack_340 [16];
  undefined8 local_330 [2];
  undefined8 local_320 [3];
  string asStack_308 [8];
  string asStack_300 [8];
  string asStack_2f8 [8];
  string asStack_2f0 [8];
  undefined1 auStack_2e8 [16];
  undefined1 auStack_2d8 [352];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = operator|(0x10,8);
  FUN_05462470(auStack_2e8,uVar2);
  FUN_05462470(auStack_178,uVar2);
  std::string::string((string *)local_320,"");
  FUN_05462980(auStack_2e8,(string *)local_320);
  std::string::~string((string *)local_320);
  nop();
  std::string::string((string *)local_320,"");
  FUN_05462980(auStack_178,(string *)local_320);
  std::string::~string((string *)local_320);
  nop();
  puVar3 = (undefined4 *)FUN_03eaadc0(*(undefined8 *)param_1,1);
  FUN_0546065c(auStack_2d8,*puVar3);
  puVar3 = (undefined4 *)FUN_03eaadc0(*(undefined8 *)param_1,2);
  FUN_0546065c(auStack_168,*puVar3);
  local_330[0] = FUN_03ebae5c(*(undefined8 *)param_2);
  local_320[0] = FUN_03ebaeac(*(undefined8 *)(param_2 + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)local_330,(__normal_iterator *)local_320), bVar1) {
    puVar3 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_330);
    FUN_054603b8(auStack_2d8,&DAT_05593348);
    FUN_0546065c(auStack_2d8,*puVar3);
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)local_330);
  }
  local_330[0] = FUN_03ebae5c(*(undefined8 *)param_3);
  local_320[0] = FUN_03ebaeac(*(undefined8 *)(param_3 + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)local_330,(__normal_iterator *)local_320), bVar1) {
    puVar3 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_330);
    FUN_054603b8(auStack_168,&DAT_05593348);
    FUN_0546065c(auStack_168,*puVar3);
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)local_330);
  }
  std::string::string(asStack_360,"Battle_Z");
  piVar4 = (int *)FUN_03eaadc0(*(undefined8 *)param_1,0);
  DString::DString(aDStack_350,*piVar4);
  DString::operator_cast_to_string(aDStack_350);
  FUN_05462824(asStack_300,auStack_2e8);
  FUN_05462824(asStack_2f8,auStack_178);
  piVar4 = (int *)FUN_03eaadc0(*(undefined8 *)param_1,3);
  DString::DString(aDStack_340,*piVar4);
  DString::operator_cast_to_string(aDStack_340);
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)local_320,asStack_308,4,auStack_368)
  ;
  piVar4 = (int *)FUN_03eaadc0(*(undefined8 *)param_1,4);
  DString::DString((DString *)local_330,*piVar4);
  DString::operator_cast_to_string((DString *)local_330);
  BehaviorLog::inGameBehavior(asStack_360,(vector *)local_320,asStack_358);
  std::string::~string(asStack_358);
  DString::~DString((DString *)local_330);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)local_320);
  std::string::~string(asStack_2f0);
  std::string::~string(asStack_2f8);
  std::string::~string(asStack_300);
  std::string::~string(asStack_308);
  DString::~DString(aDStack_340);
  DString::~DString(aDStack_350);
  std::string::~string(asStack_360);
  nop();
  FUN_054617bc(auStack_178);
  FUN_054617bc(auStack_2e8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onBattleVictory(int, int) */

void __thiscall MetricsCollector::onBattleVictory(MetricsCollector *this,int param_1,int param_2)

{
  undefined1 auStack_70 [16];
  string asStack_60 [8];
  string asStack_58 [8];
  DString aDStack_50 [16];
  DString aDStack_40 [16];
  string asStack_30 [8];
  string asStack_28 [8];
  vector<std::string,std::allocator<std::string>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_60,"Battle_Victory");
  DString::DString(aDStack_50,param_1);
  DString::operator_cast_to_string(aDStack_50);
  DString::DString(aDStack_40,param_2);
  DString::operator_cast_to_string(aDStack_40);
  std::vector<std::string,std::allocator<std::string>>::vector(avStack_20,asStack_30,2,auStack_70);
  std::string::string(asStack_58,"");
  BehaviorLog::inGameBehavior(asStack_60,(vector *)avStack_20,asStack_58);
  std::string::~string(asStack_58);
  nop();
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_20);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  DString::~DString(aDStack_40);
  DString::~DString(aDStack_50);
  std::string::~string(asStack_60);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onBattleBuyTimes(std::string const&, int, int) */

void __thiscall
MetricsCollector::onBattleBuyTimes(MetricsCollector *this,string *param_1,int param_2,int param_3)

{
  undefined1 auStack_78 [16];
  string asStack_68 [8];
  string asStack_60 [8];
  DString aDStack_58 [16];
  DString aDStack_48 [16];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  vector<std::string,std::allocator<std::string>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_68,"Battle_Buy_Times");
  FUN_05475d88(asStack_38,param_1);
  DString::DString(aDStack_58,param_2);
  DString::operator_cast_to_string(aDStack_58);
  DString::DString(aDStack_48,param_3);
  DString::operator_cast_to_string(aDStack_48);
  std::vector<std::string,std::allocator<std::string>>::vector(avStack_20,asStack_38,3,auStack_78);
  std::string::string(asStack_60,"");
  BehaviorLog::inGameBehavior(asStack_68,(vector *)avStack_20,asStack_60);
  std::string::~string(asStack_60);
  nop();
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_20);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_48);
  DString::~DString(aDStack_58);
  std::string::~string(asStack_68);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onBattleSettlement(int, int, std::map<int, int, std::less<int>,
   std::allocator<std::pair<int const, int> > > const&) */

void __thiscall
MetricsCollector::onBattleSettlement(MetricsCollector *this,int param_1,int param_2,map *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_1e8 [16];
  string asStack_1d8 [8];
  string asStack_1d0 [8];
  DString aDStack_1c8 [16];
  undefined8 local_1b8 [2];
  string asStack_1a8 [8];
  string asStack_1a0 [8];
  string asStack_198 [8];
  undefined8 local_190 [3];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar2);
  std::string::string((string *)local_190,"");
  FUN_05462980(auStack_178,(string *)local_190);
  std::string::~string((string *)local_190);
  nop();
  local_1b8[0] = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin
                           ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                            param_3);
  local_190[0] = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)param_3);
  while (bVar1 = eastl::operator!=((rbtree_iterator *)local_1b8,(rbtree_iterator *)local_190), bVar1
        ) {
    puVar3 = (undefined4 *)
             std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                       ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)local_1b8);
    FUN_0546065c(auStack_168,*puVar3);
    FUN_054603b8(auStack_168,&DAT_05593348);
    std::_Rb_tree_const_iterator<Sexy::PIEffect*>::operator++
              ((_Rb_tree_const_iterator<Sexy::PIEffect*> *)local_1b8);
  }
  std::string::string(asStack_1d8,"Battle_Settlement");
  DString::DString(aDStack_1c8,param_1);
  DString::operator_cast_to_string(aDStack_1c8);
  DString::DString((DString *)local_1b8,param_2);
  DString::operator_cast_to_string((DString *)local_1b8);
  FUN_05462824(asStack_198,auStack_178);
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)local_190,asStack_1a8,3,auStack_1e8)
  ;
  std::string::string(asStack_1d0,"");
  BehaviorLog::inGameBehavior(asStack_1d8,(vector *)local_190,asStack_1d0);
  std::string::~string(asStack_1d0);
  nop();
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)local_190);
  std::string::~string(asStack_198);
  std::string::~string(asStack_1a0);
  std::string::~string(asStack_1a8);
  DString::~DString((DString *)local_1b8);
  DString::~DString(aDStack_1c8);
  std::string::~string(asStack_1d8);
  nop();
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onLimitLotteryBuyCoin(int, int) */

void __thiscall
MetricsCollector::onLimitLotteryBuyCoin(MetricsCollector *this,int param_1,int param_2)

{
  undefined1 auStack_70 [16];
  string asStack_60 [8];
  string asStack_58 [8];
  DString aDStack_50 [16];
  DString aDStack_40 [16];
  string asStack_30 [8];
  string asStack_28 [8];
  vector<std::string,std::allocator<std::string>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_60,"Lucky_Wheel_Coin");
  DString::DString(aDStack_50,param_1);
  DString::operator_cast_to_string(aDStack_50);
  DString::DString(aDStack_40,param_2);
  DString::operator_cast_to_string(aDStack_40);
  std::vector<std::string,std::allocator<std::string>>::vector(avStack_20,asStack_30,2,auStack_70);
  std::string::string(asStack_58,"");
  BehaviorLog::inGameBehavior(asStack_60,(vector *)avStack_20,asStack_58);
  std::string::~string(asStack_58);
  nop();
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_20);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  DString::~DString(aDStack_40);
  DString::~DString(aDStack_50);
  std::string::~string(asStack_60);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onLimitLotteryDraw(std::vector<int, std::allocator<int> > const&,
   std::vector<int, std::allocator<int> > const&) */

void __thiscall
MetricsCollector::onLimitLotteryDraw(MetricsCollector *this,vector *param_1,vector *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined1 auStack_200 [16];
  string asStack_1f0 [8];
  string asStack_1e8 [8];
  DString aDStack_1e0 [16];
  DString aDStack_1d0 [16];
  undefined8 local_1c0 [2];
  undefined8 local_1b0 [3];
  string asStack_198 [8];
  string asStack_190 [8];
  string asStack_188 [8];
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_03eaadb4(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  if (lVar3 == 3) {
    uVar2 = operator|(0x10,8);
    FUN_05462470(auStack_178,uVar2);
    std::string::string((string *)local_1b0,"");
    FUN_05462980(auStack_178,(string *)local_1b0);
    std::string::~string((string *)local_1b0);
    nop();
    local_1c0[0] = FUN_03ebae5c(*(undefined8 *)param_2);
    local_1b0[0] = FUN_03ebaeac(*(undefined8 *)(param_2 + 8));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)local_1c0,(__normal_iterator *)local_1b0), bVar1)
    {
      puVar4 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_1c0)
      ;
      FUN_0546065c(auStack_168,*puVar4);
      FUN_054603b8(auStack_168,&DAT_05593348);
      eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)local_1c0);
    }
    std::string::string(asStack_1f0,"Lucky_Wheel");
    piVar5 = (int *)FUN_03eaadc0(*(undefined8 *)param_1,0);
    DString::DString(aDStack_1e0,*piVar5);
    DString::operator_cast_to_string(aDStack_1e0);
    FUN_05462824(asStack_190,auStack_178);
    piVar5 = (int *)FUN_03eaadc0(*(undefined8 *)param_1,1);
    DString::DString(aDStack_1d0,*piVar5);
    DString::operator_cast_to_string(aDStack_1d0);
    piVar5 = (int *)FUN_03eaadc0(*(undefined8 *)param_1,2);
    DString::DString((DString *)local_1c0,*piVar5);
    DString::operator_cast_to_string((DString *)local_1c0);
    std::vector<std::string,std::allocator<std::string>>::vector
              ((vector<std::string,std::allocator<std::string>> *)local_1b0,asStack_198,4,
               auStack_200);
    std::string::string(asStack_1e8,"");
    BehaviorLog::inGameBehavior(asStack_1f0,(vector *)local_1b0,asStack_1e8);
    std::string::~string(asStack_1e8);
    nop();
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)local_1b0);
    std::string::~string(asStack_180);
    std::string::~string(asStack_188);
    std::string::~string(asStack_190);
    std::string::~string(asStack_198);
    DString::~DString((DString *)local_1c0);
    DString::~DString(aDStack_1d0);
    DString::~DString(aDStack_1e0);
    std::string::~string(asStack_1f0);
    nop();
    FUN_054617bc(auStack_178);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onLimitLotteryExchange(std::vector<int, std::allocator<int> > const&) */

void __thiscall MetricsCollector::onLimitLotteryExchange(MetricsCollector *this,vector *param_1)

{
  long lVar1;
  int *piVar2;
  undefined1 auStack_a0 [16];
  string asStack_90 [8];
  string asStack_88 [8];
  DString aDStack_80 [16];
  DString aDStack_70 [16];
  DString aDStack_60 [16];
  DString aDStack_50 [16];
  vector<std::string,std::allocator<std::string>> avStack_40 [24];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_03eaadb4(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  if (lVar1 == 4) {
    std::string::string(asStack_90,"Lucky_Wheel_Shop");
    piVar2 = (int *)FUN_03eaadc0(*(undefined8 *)param_1,0);
    DString::DString(aDStack_80,*piVar2);
    DString::operator_cast_to_string(aDStack_80);
    piVar2 = (int *)FUN_03eaadc0(*(undefined8 *)param_1,1);
    DString::DString(aDStack_70,*piVar2);
    DString::operator_cast_to_string(aDStack_70);
    piVar2 = (int *)FUN_03eaadc0(*(undefined8 *)param_1,2);
    DString::DString(aDStack_60,*piVar2);
    DString::operator_cast_to_string(aDStack_60);
    piVar2 = (int *)FUN_03eaadc0(*(undefined8 *)param_1,3);
    DString::DString(aDStack_50,*piVar2);
    DString::operator_cast_to_string(aDStack_50);
    std::vector<std::string,std::allocator<std::string>>::vector(avStack_40,asStack_28,4,auStack_a0)
    ;
    std::string::string(asStack_88,"");
    BehaviorLog::inGameBehavior(asStack_90,(vector *)avStack_40,asStack_88);
    std::string::~string(asStack_88);
    nop();
    std::vector<std::string,std::allocator<std::string>>::~vector(avStack_40);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    std::string::~string(asStack_20);
    std::string::~string(asStack_28);
    DString::~DString(aDStack_50);
    DString::~DString(aDStack_60);
    DString::~DString(aDStack_70);
    DString::~DString(aDStack_80);
    std::string::~string(asStack_90);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onDoubleFestivalDailyReward(int, std::vector<int, std::allocator<int> > const&,
   std::vector<int, std::allocator<int> >&) */

void __thiscall
MetricsCollector::onDoubleFestivalDailyReward
          (MetricsCollector *this,int param_1,vector *param_2,vector *param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_340 [8];
  string asStack_338 [8];
  string asStack_330 [8];
  DString aDStack_328 [16];
  string asStack_318 [8];
  string asStack_310 [8];
  string asStack_308 [8];
  string asStack_300 [24];
  undefined1 auStack_2e8 [16];
  undefined1 auStack_2d8 [352];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar5 = 0;
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_2e8,uVar1);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_300,"");
  FUN_05462980(auStack_2e8,asStack_300);
  std::string::~string(asStack_300);
  nop();
  std::string::string(asStack_300,"");
  FUN_05462980(auStack_178,asStack_300);
  std::string::~string(asStack_300);
  nop();
  uVar6 = *(undefined8 *)param_2;
  lVar2 = FUN_03eaadb4(uVar6,*(undefined8 *)(param_2 + 8));
  if (lVar2 != 0) {
    do {
      puVar3 = (undefined4 *)FUN_03eaadc0(uVar6,uVar5);
      FUN_0546065c(auStack_2d8,*puVar3);
      if ((uVar5 & 1) == 0) {
        FUN_054603b8(auStack_2d8,&DAT_05593348);
      }
      else {
        FUN_054603b8(auStack_2d8,&DAT_05594620);
      }
      uVar5 = uVar5 + 1;
      uVar6 = *(undefined8 *)param_2;
      uVar4 = FUN_03eaadb4(uVar6,*(undefined8 *)(param_2 + 8));
    } while (uVar5 < uVar4);
  }
  uVar6 = *(undefined8 *)param_3;
  uVar5 = 0;
  lVar2 = FUN_03eaadb4(uVar6,*(undefined8 *)(param_3 + 8));
  if (lVar2 != 0) {
    do {
      puVar3 = (undefined4 *)FUN_03eaadf0(uVar6,uVar5);
      FUN_0546065c(auStack_168,*puVar3);
      if ((uVar5 & 1) == 0) {
        FUN_054603b8(auStack_168,&DAT_05593348);
      }
      else {
        FUN_054603b8(auStack_168,&DAT_05594620);
      }
      uVar5 = uVar5 + 1;
      uVar6 = *(undefined8 *)param_3;
      uVar4 = FUN_03eaadb4(uVar6,*(undefined8 *)(param_3 + 8));
    } while (uVar5 < uVar4);
  }
  std::string::string(asStack_330,"2018_WINTER");
  std::string::string(asStack_318,"LOGIN_REWARD");
  DString::DString(aDStack_328,param_1);
  DString::operator_cast_to_string(aDStack_328);
  FUN_05462824(asStack_308,auStack_2e8);
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)asStack_300,asStack_318,3,
             auStack_340);
  FUN_05462824(asStack_338,auStack_178);
  BehaviorLog::inGameBehavior(asStack_330,(vector *)asStack_300,asStack_338);
  std::string::~string(asStack_338);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)asStack_300);
  std::string::~string(asStack_308);
  std::string::~string(asStack_310);
  std::string::~string(asStack_318);
  DString::~DString(aDStack_328);
  nop();
  std::string::~string(asStack_330);
  nop();
  FUN_054617bc(auStack_178);
  FUN_054617bc(auStack_2e8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onDoubleFestivalLotteryDraw(std::vector<int, std::allocator<int> > const&,
   std::vector<int, std::allocator<int> > const&, std::vector<int, std::allocator<int> > const&) */

void __thiscall
MetricsCollector::onDoubleFestivalLotteryDraw
          (MetricsCollector *this,vector *param_1,vector *param_2,vector *param_3)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *puVar4;
  int *piVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 auStack_358 [8];
  string asStack_350 [8];
  string asStack_348 [8];
  DString aDStack_340 [16];
  DString aDStack_330 [16];
  string asStack_320 [24];
  string asStack_308 [8];
  string asStack_300 [8];
  string asStack_2f8 [8];
  string asStack_2f0 [8];
  undefined1 auStack_2e8 [16];
  undefined1 auStack_2d8 [352];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_03eaadb4(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  if (lVar2 == 2) {
    uVar1 = operator|(0x10,8);
    FUN_05462470(auStack_2e8,uVar1);
    FUN_05462470(auStack_178,uVar1);
    std::string::string(asStack_320,"");
    FUN_05462980(auStack_2e8,asStack_320);
    std::string::~string(asStack_320);
    nop();
    std::string::string(asStack_320,"");
    FUN_05462980(auStack_178,asStack_320);
    std::string::~string(asStack_320);
    nop();
    uVar6 = 0;
    while( true ) {
      uVar7 = *(undefined8 *)param_2;
      uVar3 = FUN_03eaadb4(uVar7,*(undefined8 *)(param_2 + 8));
      if (uVar3 <= uVar6) break;
      puVar4 = (undefined4 *)FUN_03eaadc0(uVar7,uVar6);
      FUN_0546065c(auStack_2d8,*puVar4);
      FUN_054603b8(auStack_2d8,&DAT_05593348);
      uVar6 = uVar6 + 1;
    }
    uVar7 = *(undefined8 *)param_3;
    uVar6 = 0;
    lVar2 = FUN_03eaadb4(uVar7,*(undefined8 *)(param_3 + 8));
    if (lVar2 != 0) {
      do {
        puVar4 = (undefined4 *)FUN_03eaadc0(uVar7,uVar6);
        FUN_0546065c(auStack_168,*puVar4);
        if ((uVar6 & 1) == 0) {
          FUN_054603b8(auStack_168,&DAT_05593348);
        }
        else {
          FUN_054603b8(auStack_168,&DAT_05594620);
        }
        uVar6 = uVar6 + 1;
        uVar7 = *(undefined8 *)param_3;
        uVar3 = FUN_03eaadb4(uVar7,*(undefined8 *)(param_3 + 8));
      } while (uVar6 < uVar3);
    }
    std::string::string(asStack_348,"2018_WINTER");
    std::string::string(asStack_308,"Lucky_Wheel");
    piVar5 = (int *)FUN_03eaadc0(*(undefined8 *)param_1,0);
    DString::DString(aDStack_340,*piVar5);
    DString::operator_cast_to_string(aDStack_340);
    piVar5 = (int *)FUN_03eaadc0(*(undefined8 *)param_1,1);
    DString::DString(aDStack_330,*piVar5);
    DString::operator_cast_to_string(aDStack_330);
    FUN_05462824(asStack_2f0,auStack_2e8);
    std::vector<std::string,std::allocator<std::string>>::vector
              ((vector<std::string,std::allocator<std::string>> *)asStack_320,asStack_308,4,
               auStack_358);
    FUN_05462824(asStack_350,auStack_178);
    BehaviorLog::inGameBehavior(asStack_348,(vector *)asStack_320,asStack_350);
    std::string::~string(asStack_350);
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)asStack_320);
    std::string::~string(asStack_2f0);
    std::string::~string(asStack_2f8);
    std::string::~string(asStack_300);
    std::string::~string(asStack_308);
    DString::~DString(aDStack_330);
    DString::~DString(aDStack_340);
    nop();
    std::string::~string(asStack_348);
    nop();
    FUN_054617bc(auStack_178);
    FUN_054617bc(auStack_2e8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onDoubleFestivalRechargeReward(int, std::vector<int, std::allocator<int> >
   const&, std::vector<int, std::allocator<int> > const&) */

void __thiscall
MetricsCollector::onDoubleFestivalRechargeReward
          (MetricsCollector *this,int param_1,vector *param_2,vector *param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined4 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_340 [8];
  string asStack_338 [8];
  string asStack_330 [8];
  DString aDStack_328 [16];
  string asStack_318 [8];
  string asStack_310 [8];
  string asStack_308 [8];
  string asStack_300 [24];
  undefined1 auStack_2e8 [16];
  undefined1 auStack_2d8 [352];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_2e8,uVar1);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_300,"");
  FUN_05462980(auStack_2e8,asStack_300);
  std::string::~string(asStack_300);
  nop();
  std::string::string(asStack_300,"");
  FUN_05462980(auStack_178,asStack_300);
  std::string::~string(asStack_300);
  nop();
  uVar5 = 0;
  while( true ) {
    uVar6 = *(undefined8 *)param_2;
    uVar2 = FUN_03eaadb4(uVar6,*(undefined8 *)(param_2 + 8));
    if (uVar2 <= uVar5) break;
    puVar4 = (undefined4 *)FUN_03eaadc0(uVar6,uVar5);
    FUN_0546065c(auStack_2d8,*puVar4);
    FUN_054603b8(auStack_2d8,&DAT_05593348);
    uVar5 = uVar5 + 1;
  }
  uVar6 = *(undefined8 *)param_3;
  uVar5 = 0;
  lVar3 = FUN_03eaadb4(uVar6,*(undefined8 *)(param_3 + 8));
  if (lVar3 != 0) {
    do {
      puVar4 = (undefined4 *)FUN_03eaadc0(uVar6,uVar5);
      FUN_0546065c(auStack_168,*puVar4);
      if ((uVar5 & 1) == 0) {
        FUN_054603b8(auStack_168,&DAT_05593348);
      }
      else {
        FUN_054603b8(auStack_168,&DAT_05594620);
      }
      uVar5 = uVar5 + 1;
      uVar6 = *(undefined8 *)param_3;
      uVar2 = FUN_03eaadb4(uVar6,*(undefined8 *)(param_3 + 8));
    } while (uVar5 < uVar2);
  }
  std::string::string(asStack_330,"2018_WINTER");
  std::string::string(asStack_318,"Recharge");
  DString::DString(aDStack_328,param_1);
  DString::operator_cast_to_string(aDStack_328);
  FUN_05462824(asStack_308,auStack_2e8);
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)asStack_300,asStack_318,3,
             auStack_340);
  FUN_05462824(asStack_338,auStack_178);
  BehaviorLog::inGameBehavior(asStack_330,(vector *)asStack_300,asStack_338);
  std::string::~string(asStack_338);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)asStack_300);
  std::string::~string(asStack_308);
  std::string::~string(asStack_310);
  std::string::~string(asStack_318);
  DString::~DString(aDStack_328);
  nop();
  std::string::~string(asStack_330);
  nop();
  FUN_054617bc(auStack_178);
  FUN_054617bc(auStack_2e8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::GetGameItemChangedLog(std::vector<LogGameItemData,
   std::allocator<LogGameItemData> > const&) */

void MetricsCollector::GetGameItemChangedLog(vector *param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ProfileMgr *this;
  NewPVPMgr *this_00;
  int *piVar6;
  char *pcVar7;
  undefined8 *in_x1;
  string *in_x8;
  DString *pDVar8;
  undefined1 auStack_e0 [8];
  undefined8 local_d8;
  undefined8 local_d0;
  DString aDStack_c8 [16];
  string asStack_b8 [16];
  PIInterpolator aPStack_a8 [24];
  vector<DString,std::allocator<DString>> avStack_90 [24];
  GAME_ITEM_INFO aGStack_78 [4];
  int local_74;
  string asStack_68 [32];
  DString aDStack_48 [16];
  DString aDStack_38 [16];
  DString aDStack_28 [16];
  DString local_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::PIInterpolator::PIInterpolator(aPStack_a8);
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (NewPVPMgr *)ProfileMgr::GetCurrentProfile(this);
  DString::DString(aDStack_c8);
  local_d8 = FUN_03ebaf5c(*in_x1);
  local_d0 = FUN_03ebafac(in_x1[1]);
  bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_d8,(__normal_iterator *)&local_d0);
  if (bVar3) {
    do {
      piVar6 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_d8);
      iVar5 = 0;
      iVar1 = piVar6[1];
      uVar2 = piVar6[2];
      iVar4 = piVar6[3];
      GetGameItemInfo(*piVar6,0x7fffffff,0);
      if (local_74 == 0x10) {
        pDVar8 = (DString *)&local_8;
        FUN_031f5e7c(asStack_b8,"Equipment_",asStack_68);
        DString::DString(aDStack_48,asStack_b8);
        DString::DString(aDStack_38,1);
        DString::DString(aDStack_28,1);
        DString::DString(local_18,0);
        std::vector<DString,std::allocator<DString>>::vector(avStack_90,aDStack_48,4,auStack_e0);
        DString::join(aDStack_c8,(vector *)avStack_90,",");
        std::vector<DString,std::allocator<DString>>::~vector(avStack_90);
        do {
          pDVar8 = pDVar8 + -0x10;
          (*(code *)**(undefined8 **)pDVar8)(pDVar8);
        } while (pDVar8 != aDStack_48);
        KV::add((KV *)aPStack_a8,aDStack_c8);
        std::string::~string(asStack_b8);
      }
      else if (local_74 < 0x11) {
        if (local_74 == 2) {
          pDVar8 = (DString *)&local_8;
          iVar4 = PlayerInfo::GetPlantPieceCount((PlayerInfo *)this_00,asStack_68,false);
          FUN_031f5e7c(asStack_b8,"Plantfragment_",asStack_68);
          DString::DString(aDStack_48,asStack_b8);
          DString::DString(aDStack_38,iVar1);
          DString::DString(aDStack_28,iVar4);
          DString::DString(local_18,iVar4 - iVar1);
          std::vector<DString,std::allocator<DString>>::vector(avStack_90,aDStack_48,4,auStack_e0);
          DString::join(aDStack_c8,(vector *)avStack_90,",");
          std::vector<DString,std::allocator<DString>>::~vector(avStack_90);
          do {
            pDVar8 = pDVar8 + -0x10;
            (*(code *)**(undefined8 **)pDVar8)(pDVar8);
          } while (pDVar8 != aDStack_48);
          KV::add((KV *)aPStack_a8,aDStack_c8);
          std::string::~string(asStack_b8);
        }
        else if (local_74 < 3) {
          if (local_74 == 1) {
            pDVar8 = (DString *)&local_8;
            MetricsCollectorNameSpace::GetPlantName
                      ((MetricsCollectorNameSpace *)asStack_68,(string *)(ulong)uVar2,iVar5);
            pcVar7 = (char *)DString::c_str((DString *)asStack_b8);
            DString::DString(aDStack_48,pcVar7);
            DString::DString(aDStack_38,1);
            DString::DString(aDStack_28,1);
            DString::DString(local_18,0);
            std::vector<DString,std::allocator<DString>>::vector(avStack_90,aDStack_48,4,auStack_e0)
            ;
            DString::join(aDStack_c8,(vector *)avStack_90,",");
            std::vector<DString,std::allocator<DString>>::~vector(avStack_90);
            do {
              pDVar8 = pDVar8 + -0x10;
              (*(code *)**(undefined8 **)pDVar8)(pDVar8);
            } while (pDVar8 != aDStack_48);
            KV::add((KV *)aPStack_a8,aDStack_c8);
            DString::~DString((DString *)asStack_b8);
          }
        }
        else if (local_74 == 4) {
          pDVar8 = (DString *)&local_8;
          FUN_031f5e7c(asStack_b8,"Costume_",asStack_68);
          DString::DString(aDStack_48,asStack_b8);
          DString::DString(aDStack_38,1);
          DString::DString(aDStack_28,1);
          DString::DString(local_18,0);
          std::vector<DString,std::allocator<DString>>::vector(avStack_90,aDStack_48,4,auStack_e0);
          DString::join(aDStack_c8,(vector *)avStack_90,",");
          std::vector<DString,std::allocator<DString>>::~vector(avStack_90);
          do {
            pDVar8 = pDVar8 + -0x10;
            (*(code *)**(undefined8 **)pDVar8)(pDVar8);
          } while (pDVar8 != aDStack_48);
          KV::add((KV *)aPStack_a8,aDStack_c8);
          std::string::~string(asStack_b8);
        }
        else if (local_74 == 8) {
          pDVar8 = (DString *)&local_8;
          iVar4 = PlayerInfo::GetAvatarPiecesCount((PlayerInfo *)this_00,asStack_68,0,0);
          FUN_031f5e7c(asStack_b8,"Costumefragment_",asStack_68);
          DString::DString(aDStack_48,asStack_b8);
          DString::DString(aDStack_38,iVar1);
          DString::DString(aDStack_28,iVar4);
          DString::DString(local_18,iVar4 - iVar1);
          std::vector<DString,std::allocator<DString>>::vector(avStack_90,aDStack_48,4,auStack_e0);
          DString::join(aDStack_c8,(vector *)avStack_90,",");
          std::vector<DString,std::allocator<DString>>::~vector(avStack_90);
          do {
            pDVar8 = pDVar8 + -0x10;
            (*(code *)**(undefined8 **)pDVar8)(pDVar8);
          } while (pDVar8 != aDStack_48);
          KV::add((KV *)aPStack_a8,aDStack_c8);
          std::string::~string(asStack_b8);
        }
      }
      else {
        if (local_74 == 0x80) {
          pDVar8 = (DString *)&local_8;
          iVar4 = PlayerInfo::GetNumCoins((PlayerInfo *)this_00,false);
          DString::DString(aDStack_48,"Coin");
          DString::DString(aDStack_38,iVar1);
          DString::DString(aDStack_28,iVar4);
          DString::DString(local_18,iVar4 - iVar1);
          std::vector<DString,std::allocator<DString>>::vector(avStack_90,aDStack_48,4,asStack_b8);
          DString::join(aDStack_c8,(vector *)avStack_90,",");
          std::vector<DString,std::allocator<DString>>::~vector(avStack_90);
          do {
            pDVar8 = pDVar8 + -0x10;
            (*(code *)**(undefined8 **)pDVar8)(pDVar8);
          } while (pDVar8 != aDStack_48);
        }
        else {
          if (local_74 < 0x81) {
            if (local_74 == 0x20) {
              pDVar8 = (DString *)&local_8;
              iVar4 = PlayerInfo::GetAccessoryPieceCount((PlayerInfo *)this_00,asStack_68,false);
              FUN_031f5e7c(asStack_b8,"Equipmentfragment_",asStack_68);
              DString::DString(aDStack_48,asStack_b8);
              DString::DString(aDStack_38,iVar1);
              DString::DString(aDStack_28,iVar4);
              DString::DString(local_18,iVar4 - iVar1);
              std::vector<DString,std::allocator<DString>>::vector
                        (avStack_90,aDStack_48,4,auStack_e0);
              DString::join(aDStack_c8,(vector *)avStack_90,",");
              std::vector<DString,std::allocator<DString>>::~vector(avStack_90);
              do {
                pDVar8 = pDVar8 + -0x10;
                (*(code *)**(undefined8 **)pDVar8)(pDVar8);
              } while (pDVar8 != aDStack_48);
              KV::add((KV *)aPStack_a8,aDStack_c8);
              std::string::~string(asStack_b8);
            }
            else if (local_74 == 0x40) {
              if (iVar1 < 1) {
                iVar5 = NewPVPMgr::GetSeasonEndTime(this_00);
                pDVar8 = (DString *)&local_8;
                DString::DString(aDStack_48,"FreeGem");
                DString::DString(aDStack_38,iVar4);
                DString::DString(aDStack_28,iVar5);
                DString::DString(local_18,iVar5 - iVar4);
                std::vector<DString,std::allocator<DString>>::vector
                          (avStack_90,aDStack_48,4,asStack_b8);
                DString::join(aDStack_c8,(vector *)avStack_90,",");
                std::vector<DString,std::allocator<DString>>::~vector(avStack_90);
                do {
                  pDVar8 = pDVar8 + -0x10;
                  (*(code *)**(undefined8 **)pDVar8)(pDVar8);
                } while (pDVar8 != aDStack_48);
                pDVar8 = (DString *)&local_8;
                KV::add((KV *)aPStack_a8,aDStack_c8);
                iVar5 = PlayerInfo::GetRechargeGems((PlayerInfo *)this_00);
                DString::DString(aDStack_48,"PaidGem");
                DString::DString(aDStack_38,iVar1 - iVar4);
                DString::DString(aDStack_28,iVar5);
                DString::DString(local_18,iVar5 - (iVar1 - iVar4));
                std::vector<DString,std::allocator<DString>>::vector
                          (avStack_90,aDStack_48,4,asStack_b8);
                DString::join(aDStack_c8,(vector *)avStack_90,",");
                std::vector<DString,std::allocator<DString>>::~vector(avStack_90);
                do {
                  pDVar8 = pDVar8 + -0x10;
                  (*(code *)**(undefined8 **)pDVar8)(pDVar8);
                } while (pDVar8 != aDStack_48);
              }
              else {
                iVar4 = NewPVPMgr::GetSeasonEndTime(this_00);
                pDVar8 = (DString *)&local_8;
                DString::DString(aDStack_48,"FreeGem");
                DString::DString(aDStack_38,iVar1);
                DString::DString(aDStack_28,iVar4);
                DString::DString(local_18,iVar4 - iVar1);
                std::vector<DString,std::allocator<DString>>::vector
                          (avStack_90,aDStack_48,4,asStack_b8);
                DString::join(aDStack_c8,(vector *)avStack_90,",");
                std::vector<DString,std::allocator<DString>>::~vector(avStack_90);
                do {
                  pDVar8 = pDVar8 + -0x10;
                  (*(code *)**(undefined8 **)pDVar8)(pDVar8);
                } while (pDVar8 != aDStack_48);
              }
              goto LAB_03ed9f68;
            }
            goto LAB_03ed9f74;
          }
          if (local_74 == 0x100) {
            pDVar8 = (DString *)&local_8;
            iVar4 = PlayerInfo::GetMaterialNum((PlayerInfo *)this_00,asStack_68);
            DString::DString(aDStack_48,asStack_68);
            DString::DString(aDStack_38,iVar1);
            DString::DString(aDStack_28,iVar4);
            DString::DString(local_18,iVar4 - iVar1);
            std::vector<DString,std::allocator<DString>>::vector(avStack_90,aDStack_48,4,asStack_b8)
            ;
            DString::join(aDStack_c8,(vector *)avStack_90,",");
            std::vector<DString,std::allocator<DString>>::~vector(avStack_90);
            do {
              pDVar8 = pDVar8 + -0x10;
              (*(code *)**(undefined8 **)pDVar8)(pDVar8);
            } while (pDVar8 != aDStack_48);
          }
          else {
            if (local_74 != 0x200) goto LAB_03ed9f74;
            pDVar8 = (DString *)&local_8;
            std::string::string((string *)avStack_90,"poweruptacticalcuke");
            iVar4 = PlayerInfo::GetPowerupUsesLeft((PlayerInfo *)this_00,(string *)avStack_90);
            std::string::~string((string *)avStack_90);
            nop();
            DString::DString(aDStack_48,asStack_68);
            DString::DString(aDStack_38,iVar1);
            DString::DString(aDStack_28,iVar4);
            DString::DString(local_18,iVar4 - iVar1);
            std::vector<DString,std::allocator<DString>>::vector(avStack_90,aDStack_48,4,asStack_b8)
            ;
            DString::join(aDStack_c8,(vector *)avStack_90,",");
            std::vector<DString,std::allocator<DString>>::~vector(avStack_90);
            do {
              pDVar8 = pDVar8 + -0x10;
              (*(code *)**(undefined8 **)pDVar8)(pDVar8);
            } while (pDVar8 != aDStack_48);
          }
        }
LAB_03ed9f68:
        KV::add((KV *)aPStack_a8,aDStack_c8);
      }
LAB_03ed9f74:
      GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_78);
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_d8);
      bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_d8,(__normal_iterator *)&local_d0);
    } while (bVar3);
  }
  KV::commit();
  pcVar7 = (char *)DString::c_str((DString *)aGStack_78);
  std::string::string(in_x8,pcVar7);
  nop();
  DString::~DString((DString *)aGStack_78);
  DString::~DString(aDStack_c8);
  KV::~KV((KV *)aPStack_a8);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::LogItemPurChase3(std::string const&, int, int) */

void __thiscall
MetricsCollector::LogItemPurChase3(MetricsCollector *this,string *param_1,int param_2,int param_3)

{
  char cVar1;
  ProfileMgr *this_00;
  long lVar2;
  char *pcVar3;
  vector *pvVar4;
  string *extraout_x1;
  string *extraout_x1_00;
  string asStack_80 [8];
  string asStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [8];
  DString aDStack_60 [16];
  DString aDStack_50 [16];
  DString aDStack_40 [16];
  string asStack_30 [12];
  int local_24;
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString::DString(aDStack_60);
  DString::DString(aDStack_50,(string *)(this + 0xc0));
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar2 = ProfileMgr::GetCurrentProfile(this_00);
  if (lVar2 == 0) {
    DString::~DString(aDStack_50);
    DString::~DString(aDStack_60);
  }
  else {
    PlantAnimRig_HoyaCordata::getIdleAnimationName();
    DString::operator=(aDStack_60,asStack_20);
    std::string::~string(asStack_20);
    cVar1 = DString::operator==(aDStack_50,"activity");
    if (cVar1 == '\0') {
      pcVar3 = (char *)DString::c_str(aDStack_60);
      std::string::string(asStack_30,pcVar3);
      MetricsCollectorNameSpace::GetMissionName((MetricsCollectorNameSpace *)asStack_30,extraout_x1)
      ;
    }
    else {
      pcVar3 = (char *)DString::c_str(aDStack_60);
      std::string::string(asStack_30,pcVar3);
      MetricsCollectorNameSpace::GetActivityMissionName
                ((MetricsCollectorNameSpace *)asStack_30,extraout_x1_00);
    }
    DString::operator=(aDStack_60,(DString *)asStack_20);
    DString::~DString((DString *)asStack_20);
    std::string::~string(asStack_30);
    nop();
    DString::DString(aDStack_40);
    DString::operator=(aDStack_40,param_1);
    if ((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
       (cVar1 = Board::IsDangerRoom(*(Board **)(gLawnApp + 0x9f0)), cVar1 != '\0')) {
      ::operator+("Endless_",aDStack_40);
      DString::operator=(aDStack_40,(DString *)asStack_20);
      DString::~DString((DString *)asStack_20);
    }
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_20);
    LogGameItemData::LogGameItemData((LogGameItemData *)asStack_30,0xbc0,param_2);
    local_24 = param_3;
    std::vector<LogGameItemData,std::allocator<LogGameItemData>>::push_back
              ((vector<LogGameItemData,std::allocator<LogGameItemData>> *)asStack_20,
               (LogGameItemData *)asStack_30);
    pvVar4 = (vector *)LawnApp::GetMetricsCollector(gLawnApp);
    GetGameItemChangedLog(pvVar4);
    std::string::string(asStack_78,"PvE_Mission");
    DString::operator_cast_to_string(aDStack_60);
    DString::operator_cast_to_string(aDStack_40);
    BehaviorLog::missionPurchaseEx(asStack_78,asStack_70,asStack_68,asStack_80);
    std::string::~string(asStack_68);
    std::string::~string(asStack_70);
    std::string::~string(asStack_78);
    nop();
    std::string::~string(asStack_80);
    std::vector<LogGameItemData,std::allocator<LogGameItemData>>::~vector
              ((vector<LogGameItemData,std::allocator<LogGameItemData>> *)asStack_20);
    DString::~DString(aDStack_40);
    DString::~DString(aDStack_50);
    DString::~DString(aDStack_60);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onLaunchCuke(bool, int, int) */

void __thiscall
MetricsCollector::onLaunchCuke(MetricsCollector *this,bool param_1,int param_2,int param_3)

{
  char cVar1;
  ProfileMgr *this_00;
  long lVar2;
  char *pcVar3;
  int extraout_w1;
  string *extraout_x1;
  string *extraout_x1_00;
  string asStack_80 [8];
  string asStack_78 [8];
  DString aDStack_70 [16];
  DString aDStack_60 [16];
  DString aDStack_50 [16];
  DString aDStack_40 [16];
  string asStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[200] = (MetricsCollector)param_1;
  if (param_1) {
    if (param_2 == 0) {
      DString::DString(aDStack_70);
      DString::DString(aDStack_60,(string *)(this + 0xc0));
      this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      lVar2 = ProfileMgr::GetCurrentProfile(this_00);
      if (lVar2 == 0) {
        DString::~DString(aDStack_60);
        DString::~DString(aDStack_70);
      }
      else {
        PlantAnimRig_HoyaCordata::getIdleAnimationName();
        DString::operator=(aDStack_70,(string *)&local_20);
        std::string::~string((string *)&local_20);
        cVar1 = DString::operator==(aDStack_60,"activity");
        if (cVar1 == '\0') {
          pcVar3 = (char *)DString::c_str(aDStack_70);
          std::string::string(asStack_30,pcVar3);
          MetricsCollectorNameSpace::GetMissionName
                    ((MetricsCollectorNameSpace *)asStack_30,extraout_x1);
        }
        else {
          pcVar3 = (char *)DString::c_str(aDStack_70);
          std::string::string(asStack_30,pcVar3);
          MetricsCollectorNameSpace::GetActivityMissionName
                    ((MetricsCollectorNameSpace *)asStack_30,extraout_x1_00);
        }
        DString::operator=(aDStack_70,(DString *)&local_20);
        DString::~DString((DString *)&local_20);
        std::string::~string(asStack_30);
        nop();
        MetricsCollectorNameSpace::GetUseFreeCuke
                  ((MetricsCollectorNameSpace *)0xffffffff,extraout_w1);
        DString::DString(aDStack_40,"FreeCuke");
        if ((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
           (cVar1 = Board::IsDangerRoom(*(Board **)(gLawnApp + 0x9f0)), cVar1 != '\0')) {
          ::operator+("Endless_",aDStack_40);
          DString::operator=(aDStack_40,(DString *)&local_20);
          DString::~DString((DString *)&local_20);
        }
        local_20 = 0;
        local_18 = 0;
        local_10 = 0;
        Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)&local_20);
        KV::add((KV *)&local_20,aDStack_50);
        KV::commit();
        pcVar3 = (char *)DString::c_str((DString *)asStack_30);
        std::string::string(asStack_80,pcVar3);
        nop();
        DString::~DString((DString *)asStack_30);
        KV::~KV((KV *)&local_20);
        std::string::string(asStack_78,"PvE_Mission");
        DString::operator_cast_to_string(aDStack_70);
        DString::operator_cast_to_string(aDStack_40);
        BehaviorLog::missionPurchaseEx(asStack_78,asStack_30,(string *)&local_20,asStack_80);
        std::string::~string((string *)&local_20);
        std::string::~string(asStack_30);
        std::string::~string(asStack_78);
        nop();
        std::string::~string(asStack_80);
        DString::~DString(aDStack_40);
        DString::~DString(aDStack_50);
        DString::~DString(aDStack_60);
        DString::~DString(aDStack_70);
      }
    }
    else {
      DString::DString((DString *)&local_20,"PaidCuke");
      std::string::string(asStack_30,"PaidCuke");
      LogItemPurChase3(this,asStack_30,param_2,param_3);
      std::string::~string(asStack_30);
      nop();
      DString::~DString((DString *)&local_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onRechargeRewardGot(int, int, std::map<int, int, std::less<int>,
   std::allocator<std::pair<int const, int> > > const&) */

void __thiscall
MetricsCollector::onRechargeRewardGot(MetricsCollector *this,int param_1,int param_2,map *param_3)

{
  bool bVar1;
  int *piVar2;
  char *pcVar3;
  undefined1 auStack_80 [8];
  string asStack_78 [8];
  string asStack_70 [8];
  undefined8 local_68 [2];
  undefined8 local_58 [2];
  string asStack_48 [8];
  string asStack_40 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  LogGameItemData aLStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  local_68[0] = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin
                          ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                           param_3);
  local_58[0] = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)param_3);
  while (bVar1 = eastl::operator!=((rbtree_iterator *)local_68,(rbtree_iterator *)local_58), bVar1)
  {
    piVar2 = (int *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)local_68);
    LogGameItemData::LogGameItemData(aLStack_20,*piVar2,piVar2[1]);
    std::vector<LogGameItemData,std::allocator<LogGameItemData>>::push_back
              ((vector<LogGameItemData,std::allocator<LogGameItemData>> *)avStack_38,aLStack_20);
    std::_Rb_tree_const_iterator<Sexy::PIEffect*>::operator++
              ((_Rb_tree_const_iterator<Sexy::PIEffect*> *)local_68);
  }
  GetGameItemChangedLog((vector *)this);
  std::string::string(asStack_70,"First_Recharge_Event");
  DString::DString((DString *)local_68,param_1);
  pcVar3 = (char *)DString::c_str((DString *)local_68);
  std::string::string(asStack_48,pcVar3);
  DString::DString((DString *)local_58,param_2);
  pcVar3 = (char *)DString::c_str((DString *)local_58);
  std::string::string(asStack_40,pcVar3);
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)aLStack_20,asStack_48,2,auStack_80);
  BehaviorLog::event(asStack_70,(vector *)aLStack_20,asStack_78);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)aLStack_20);
  std::string::~string(asStack_40);
  std::string::~string(asStack_48);
  nop();
  DString::~DString((DString *)local_58);
  nop();
  DString::~DString((DString *)local_68);
  std::string::~string(asStack_70);
  nop();
  std::string::~string(asStack_78);
  std::vector<LogGameItemData,std::allocator<LogGameItemData>>::~vector
            ((vector<LogGameItemData,std::allocator<LogGameItemData>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::OnGLLotteryReward(int, int, std::map<int, int, std::less<int>,
   std::allocator<std::pair<int const, int> > > const&) */

void __thiscall
MetricsCollector::OnGLLotteryReward(MetricsCollector *this,int param_1,int param_2,map *param_3)

{
  bool bVar1;
  int *piVar2;
  char *pcVar3;
  undefined1 auStack_90 [16];
  string asStack_80 [8];
  string asStack_78 [8];
  string asStack_70 [8];
  undefined8 local_68 [2];
  undefined8 local_58 [2];
  string asStack_48 [8];
  string asStack_40 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  LogGameItemData aLStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  local_68[0] = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin
                          ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                           param_3);
  local_58[0] = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)param_3);
  while (bVar1 = eastl::operator!=((rbtree_iterator *)local_68,(rbtree_iterator *)local_58), bVar1)
  {
    piVar2 = (int *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)local_68);
    LogGameItemData::LogGameItemData(aLStack_20,*piVar2,piVar2[1]);
    std::vector<LogGameItemData,std::allocator<LogGameItemData>>::push_back
              ((vector<LogGameItemData,std::allocator<LogGameItemData>> *)avStack_38,aLStack_20);
    std::_Rb_tree_const_iterator<Sexy::PIEffect*>::operator++
              ((_Rb_tree_const_iterator<Sexy::PIEffect*> *)local_68);
  }
  GetGameItemChangedLog((vector *)this);
  std::string::string(asStack_78,"Spend_Gems_Reward");
  DString::DString((DString *)local_68,param_1);
  pcVar3 = (char *)DString::c_str((DString *)local_68);
  std::string::string(asStack_48,pcVar3);
  DString::DString((DString *)local_58,param_2);
  pcVar3 = (char *)DString::c_str((DString *)local_58);
  std::string::string(asStack_40,pcVar3);
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)aLStack_20,asStack_48,2,auStack_90);
  pcVar3 = (char *)FUN_0547429c(asStack_80);
  std::string::string(asStack_70,pcVar3);
  BehaviorLog::event(asStack_78,(vector *)aLStack_20,asStack_70);
  std::string::~string(asStack_70);
  nop();
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)aLStack_20);
  std::string::~string(asStack_40);
  std::string::~string(asStack_48);
  nop();
  DString::~DString((DString *)local_58);
  nop();
  DString::~DString((DString *)local_68);
  std::string::~string(asStack_78);
  nop();
  std::string::~string(asStack_80);
  std::vector<LogGameItemData,std::allocator<LogGameItemData>>::~vector
            ((vector<LogGameItemData,std::allocator<LogGameItemData>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::OnTGCraft(int, std::map<int, int, std::less<int>, std::allocator<std::pair<int
   const, int> > > const&) */

void __thiscall MetricsCollector::OnTGCraft(MetricsCollector *this,int param_1,map *param_2)

{
  bool bVar1;
  int *piVar2;
  char *pcVar3;
  undefined1 auStack_80 [16];
  string asStack_70 [8];
  string asStack_68 [8];
  undefined8 local_60;
  undefined8 local_58 [2];
  string asStack_48 [8];
  string asStack_40 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  LogGameItemData aLStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  local_60 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin
                       ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                        param_2);
  local_58[0] = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)param_2);
  while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_60,(rbtree_iterator *)local_58), bVar1)
  {
    piVar2 = (int *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_60);
    LogGameItemData::LogGameItemData(aLStack_20,*piVar2,piVar2[1]);
    std::vector<LogGameItemData,std::allocator<LogGameItemData>>::push_back
              ((vector<LogGameItemData,std::allocator<LogGameItemData>> *)avStack_38,aLStack_20);
    std::_Rb_tree_const_iterator<Sexy::PIEffect*>::operator++
              ((_Rb_tree_const_iterator<Sexy::PIEffect*> *)&local_60);
  }
  GetGameItemChangedLog((vector *)this);
  std::string::string(asStack_68,"Item_Purchase");
  std::string::string(asStack_48,"Plant_Crafting");
  DString::DString((DString *)local_58,param_1);
  pcVar3 = (char *)DString::c_str((DString *)local_58);
  std::string::string(asStack_40,pcVar3);
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)aLStack_20,asStack_48,2,auStack_80);
  pcVar3 = (char *)FUN_0547429c(asStack_70);
  std::string::string((string *)&local_60,pcVar3);
  BehaviorLog::inGameBehavior(asStack_68,(vector *)aLStack_20,(string *)&local_60);
  std::string::~string((string *)&local_60);
  nop();
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)aLStack_20);
  std::string::~string(asStack_40);
  std::string::~string(asStack_48);
  nop();
  DString::~DString((DString *)local_58);
  nop();
  std::string::~string(asStack_68);
  nop();
  std::string::~string(asStack_70);
  std::vector<LogGameItemData,std::allocator<LogGameItemData>>::~vector
            ((vector<LogGameItemData,std::allocator<LogGameItemData>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onAdsReward(std::string const&, std::vector<S2C_BonusInfo,
   std::allocator<S2C_BonusInfo> > const&) */

void __thiscall
MetricsCollector::onAdsReward(MetricsCollector *this,string *param_1,vector *param_2)

{
  bool bVar1;
  int *piVar2;
  undefined1 auStack_80 [8];
  string asStack_78 [8];
  undefined8 local_70;
  undefined8 local_68 [2];
  undefined8 local_58 [3];
  undefined8 local_40 [3];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_58[0] = std::
                map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                ::find((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                        *)&DAT_06ae1290,param_1);
  local_40[0] = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)&DAT_06ae1290);
  bVar1 = eastl::operator!=((rbtree_iterator *)local_58,(rbtree_iterator *)local_40);
  if (bVar1) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_58);
    local_70 = FUN_03eb9dc0(*(undefined8 *)param_2);
    local_68[0] = FUN_03eb9e10(*(undefined8 *)(param_2 + 8));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_70,(__normal_iterator *)local_68), bVar1)
    {
      piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
      LogGameItemData::LogGameItemData((LogGameItemData *)local_40,*piVar2,piVar2[1]);
      std::vector<LogGameItemData,std::allocator<LogGameItemData>>::push_back
                ((vector<LogGameItemData,std::allocator<LogGameItemData>> *)local_58,
                 (LogGameItemData *)local_40);
      __gnu_cxx::
      __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
      ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                    *)&local_70);
    }
    GetGameItemChangedLog((vector *)this);
    std::string::string((string *)&local_70,"AD");
    std::string::string(asStack_28,"AD_Reward");
    piVar2 = (int *)std::
                    map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                    ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                  *)&DAT_06ae1290,param_1);
    DString::DString((DString *)local_68,*piVar2);
    DString::operator_cast_to_string((DString *)local_68);
    std::string::string(asStack_18,"0");
    std::string::string(asStack_10,"0");
    std::vector<std::string,std::allocator<std::string>>::vector
              ((vector<std::string,std::allocator<std::string>> *)local_40,asStack_28,4,auStack_80);
    BehaviorLog::inGameBehavior((string *)&local_70,(vector *)local_40,asStack_78);
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)local_40);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    std::string::~string(asStack_20);
    std::string::~string(asStack_28);
    nop();
    nop();
    DString::~DString((DString *)local_68);
    nop();
    std::string::~string((string *)&local_70);
    nop();
    std::string::~string(asStack_78);
    std::vector<LogGameItemData,std::allocator<LogGameItemData>>::~vector
              ((vector<LogGameItemData,std::allocator<LogGameItemData>> *)local_58);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onCodeReward(std::string const&, std::string const&,
   std::vector<S2C_CodeRewardPlantNum, std::allocator<S2C_CodeRewardPlantNum> > const&) */

void __thiscall
MetricsCollector::onCodeReward
          (MetricsCollector *this,string *param_1,string *param_2,vector *param_3)

{
  bool bVar1;
  int *piVar2;
  undefined1 auStack_90 [8];
  string asStack_88 [8];
  string asStack_80 [8];
  undefined8 local_78 [2];
  undefined8 local_68 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_58 [24];
  LogGameItemData aLStack_40 [24];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_58);
  local_78[0] = FUN_03ebadbc(*(undefined8 *)param_3);
  local_68[0] = FUN_03ebae0c(*(undefined8 *)(param_3 + 8));
  while (bVar1 = __gnu_cxx::operator!=((__normal_iterator *)local_78,(__normal_iterator *)local_68),
        bVar1) {
    piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_78);
    LogGameItemData::LogGameItemData(aLStack_40,*piVar2,piVar2[1]);
    std::vector<LogGameItemData,std::allocator<LogGameItemData>>::push_back
              ((vector<LogGameItemData,std::allocator<LogGameItemData>> *)avStack_58,aLStack_40);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)local_78);
  }
  GetGameItemChangedLog((vector *)this);
  std::string::string(asStack_80,"Event");
  std::string::string(asStack_28,"Gift_Exchange");
  DString::DString((DString *)local_78,param_1);
  DString::operator_cast_to_string((DString *)local_78);
  DString::DString((DString *)local_68,param_2);
  DString::operator_cast_to_string((DString *)local_68);
  std::string::string(asStack_10,"0");
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)aLStack_40,asStack_28,4,auStack_90);
  BehaviorLog::inGameBehavior(asStack_80,(vector *)aLStack_40,asStack_88);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)aLStack_40);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  nop();
  DString::~DString((DString *)local_68);
  DString::~DString((DString *)local_78);
  nop();
  std::string::~string(asStack_80);
  nop();
  std::string::~string(asStack_88);
  std::vector<LogGameItemData,std::allocator<LogGameItemData>>::~vector
            ((vector<LogGameItemData,std::allocator<LogGameItemData>> *)avStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::onRedPacketRewardGot(int, int, std::map<int, int, std::less<int>,
   std::allocator<std::pair<int const, int> > > const&) */

void __thiscall
MetricsCollector::onRedPacketRewardGot(MetricsCollector *this,int param_1,int param_2,map *param_3)

{
  bool bVar1;
  int *piVar2;
  undefined1 auStack_88 [8];
  string asStack_80 [8];
  string asStack_78 [8];
  undefined8 local_70 [2];
  undefined8 local_60 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_50 [24];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  LogGameItemData aLStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_50);
  local_70[0] = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin
                          ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                           param_3);
  local_60[0] = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)param_3);
  while (bVar1 = eastl::operator!=((rbtree_iterator *)local_70,(rbtree_iterator *)local_60), bVar1)
  {
    piVar2 = (int *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)local_70);
    LogGameItemData::LogGameItemData(aLStack_20,*piVar2,piVar2[1]);
    std::vector<LogGameItemData,std::allocator<LogGameItemData>>::push_back
              ((vector<LogGameItemData,std::allocator<LogGameItemData>> *)avStack_50,aLStack_20);
    std::_Rb_tree_const_iterator<Sexy::PIEffect*>::operator++
              ((_Rb_tree_const_iterator<Sexy::PIEffect*> *)local_70);
  }
  GetGameItemChangedLog((vector *)this);
  std::string::string(asStack_78,"Item_Purchase");
  std::string::string(asStack_38,"HB_Gacha");
  DString::DString((DString *)local_70,param_2);
  DString::operator_cast_to_string((DString *)local_70);
  DString::DString((DString *)local_60,param_1);
  DString::operator_cast_to_string((DString *)local_60);
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)aLStack_20,asStack_38,3,auStack_88);
  BehaviorLog::inGameBehavior(asStack_78,(vector *)aLStack_20,asStack_80);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)aLStack_20);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  std::string::~string(asStack_38);
  DString::~DString((DString *)local_60);
  DString::~DString((DString *)local_70);
  nop();
  std::string::~string(asStack_78);
  nop();
  std::string::~string(asStack_80);
  std::vector<LogGameItemData,std::allocator<LogGameItemData>>::~vector
            ((vector<LogGameItemData,std::allocator<LogGameItemData>> *)avStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::OnLuaNotify(std::string const&) */

void __thiscall MetricsCollector::OnLuaNotify(MetricsCollector *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ProfileMgr *this_00;
  long lVar4;
  Value *this_01;
  char *pcVar5;
  TGALogMgr *this_02;
  long lVar6;
  MagentoProductProps *this_03;
  undefined8 uVar7;
  char *pcVar8;
  string *extraout_x1;
  DString *__n;
  string *this_04;
  string *psVar9;
  float fVar10;
  string asStack_198 [8];
  string asStack_190 [8];
  undefined8 local_188;
  undefined8 local_180;
  string asStack_178 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_170 [24];
  string asStack_158 [8];
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  string asStack_140 [8];
  string asStack_138 [8];
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [24];
  StructuredData aSStack_110 [112];
  string asStack_a0 [8];
  string asStack_98 [8];
  string asStack_90 [8];
  string asStack_88 [8];
  string asStack_80 [8];
  string asStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator!=(param_1,"MetricsCollect");
  if (!bVar1) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar4 = ProfileMgr::GetCurrentProfile(this_00);
    if (lVar4 != 0) {
      PlayerInfo::GetLuaShareJson();
      this_01 = (Value *)Sexy::StructuredData::ObjectForPath(aSStack_110,"$.MetricsCollect");
      if (this_01 != (Value *)0x0) {
        pcVar5 = (char *)Sexy::StructuredData::Value::StringForName(this_01,"TGA_ID",(char *)0x0);
        if (pcVar5 != (char *)0x0) {
          std::string::string(asStack_198,pcVar5);
          nop();
          std::string::string(asStack_158,"10012");
          cVar2 = std::operator==(asStack_198,asStack_158);
          std::string::~string(asStack_158);
          nop();
          if (cVar2 != '\0') {
            pcVar8 = (char *)Sexy::StructuredData::Value::StringForName(this_01,"D4","");
            std::string::string(asStack_158,pcVar8);
            nop();
            bVar1 = std::operator!=(asStack_158,"");
            if (bVar1) {
              pcVar8 = (char *)FUN_0547429c(asStack_158);
              iVar3 = atoi(pcVar8);
              if (0 < iVar3) {
                MessageRouter::Post<int,int>
                          ((MessageRouter *)gMessageRouter,Message::GemsRecharge,iVar3);
              }
            }
            std::string::~string(asStack_158);
          }
          std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_170);
          std::string::string(asStack_98,"D1");
          std::string::string(asStack_90,"D2");
          std::string::string(asStack_88,"D3");
          std::string::string(asStack_80,"D4");
          std::string::string(asStack_78,"D5");
          std::string::string(asStack_70,"D6");
          std::string::string(asStack_68,"D7");
          std::string::string(asStack_60,"D8");
          std::string::string(asStack_58,"D9");
          std::string::string(asStack_50,"D10");
          std::string::string(asStack_48,"D11");
          std::string::string(asStack_40,"D12");
          std::string::string(asStack_38,"D13");
          std::string::string(asStack_30,"D14");
          std::string::string(asStack_28,"D15");
          std::string::string(asStack_20,"D16");
          std::string::string(asStack_18,"D17");
          std::string::string(asStack_10,"D18");
          std::vector<std::string,std::allocator<std::string>>::vector
                    ((vector<std::string,std::allocator<std::string>> *)asStack_158,asStack_98,0x12,
                     asStack_178);
          this_04 = asStack_10;
          do {
            psVar9 = this_04 + -8;
            std::string::~string(this_04);
            this_04 = psVar9;
          } while (psVar9 != asStack_a0);
          nop();
          nop();
          nop();
          nop();
          nop();
          nop();
          nop();
          nop();
          nop();
          nop();
          nop();
          nop();
          nop();
          nop();
          nop();
          nop();
          nop();
          nop();
          local_188 = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                               *)asStack_158);
          local_180 = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)asStack_158);
          while (bVar1 = __gnu_cxx::operator!=
                                   ((__normal_iterator *)&local_188,(__normal_iterator *)&local_180)
                , bVar1) {
            uVar7 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_188);
            FUN_05475d88(asStack_190,uVar7);
            pcVar8 = (char *)FUN_0547429c(asStack_190);
            pcVar8 = (char *)Sexy::StructuredData::Value::StringForName(this_01,pcVar8,(char *)0x0);
            if (pcVar8 != (char *)0x0) {
              std::string::string(asStack_178,pcVar8);
              std::vector<std::string,std::allocator<std::string>>::push_back
                        ((vector<std::string,std::allocator<std::string>> *)avStack_170,asStack_178)
              ;
              std::string::~string(asStack_178);
              nop();
            }
            std::string::~string(asStack_190);
            eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                      ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_188);
          }
          this_02 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
          std::string::string(asStack_178,pcVar5);
          TGALogMgr::Log(this_02,asStack_178,(vector *)avStack_170);
          std::string::~string(asStack_178);
          nop();
          std::vector<std::string,std::allocator<std::string>>::~vector
                    ((vector<std::string,std::allocator<std::string>> *)asStack_158);
          std::vector<std::string,std::allocator<std::string>>::~vector
                    ((vector<std::string,std::allocator<std::string>> *)avStack_170);
          std::string::~string(asStack_198);
        }
        lVar4 = Sexy::StructuredData::Value::StringForName(this_01,"Hero_Plant",(char *)0x0);
        if ((lVar4 != 0) &&
           (pcVar5 = (char *)Sexy::StructuredData::Value::StringForName
                                       (this_01,"CardID",(char *)0x0), pcVar5 != (char *)0x0)) {
          if (pcVar5 == "100021") {
            Sexy::LazySingleton<HeroPlantMgr>::GetInstance();
            std::string::string(asStack_158,"armorflame");
            nop();
            std::string::~string(asStack_158);
            nop();
          }
          else if (pcVar5 == "100023") {
            Sexy::LazySingleton<HeroPlantMgr>::GetInstance();
            std::string::string(asStack_158,"armorflame");
            nop();
            std::string::~string(asStack_158);
            nop();
          }
        }
        pcVar5 = (char *)Sexy::StructuredData::Value::StringForName
                                   (this_01,"Behavior_ID",(char *)0x0);
        if (pcVar5 != (char *)0x0) {
          std::string::string(asStack_158,"Recharge");
          bVar1 = std::operator==(pcVar5,asStack_158);
          std::string::~string(asStack_158);
          nop();
          if (bVar1) {
            pcVar5 = (char *)Sexy::StructuredData::Value::StringForName(this_01,"Sku",(char *)0x0);
            if (pcVar5 != (char *)0x0) {
              std::string::string(asStack_158,pcVar5);
              Magento::GetProduct((Magento *)asStack_158,extraout_x1);
              std::string::~string(asStack_158);
              nop();
              cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_180);
              if (cVar2 == '\0') {
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)&local_180);
              }
              else {
                RechargeInfo::RechargeInfo((RechargeInfo *)asStack_158);
                __n = (DString *)avStack_170;
                std::string::string(asStack_178,"unknown");
                nop();
                lVar4 = LawnApp::GetPaymentResultInfo(gLawnApp);
                thunk_FUN_05475e00(asStack_178,lVar4 + 0x10);
                thunk_FUN_05475e00(auStack_130,asStack_178);
                lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)&local_180);
                thunk_FUN_05475e00(auStack_148,lVar6 + 0x10);
                this_03 = (MagentoProductProps *)
                          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_180);
                fVar10 = (float)MagentoProductProps::GetPriceInUSD(this_03,false);
                DString::DString((DString *)avStack_170,fVar10);
                pcVar5 = (char *)DString::c_str((DString *)avStack_170);
                std::string::append(asStack_140,pcVar5,(size_t)__n);
                DString::~DString((DString *)avStack_170);
                std::string::append(asStack_138,"unknown",(size_t)__n);
                thunk_FUN_05475e00(auStack_150,lVar4 + 8);
                thunk_FUN_05475e00(auStack_128,lVar4);
                pcVar5 = (char *)Sexy::StructuredData::Value::StringForName(this_01,"Result","");
                std::string::string((string *)avStack_170,pcVar5);
                BehaviorLog::recharge((RechargeInfo *)asStack_158,(string *)avStack_170);
                std::string::~string((string *)avStack_170);
                nop();
                std::string::~string(asStack_178);
                RechargeInfo::~RechargeInfo((RechargeInfo *)asStack_158);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)&local_180);
              }
            }
          }
          else {
            std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_170);
            std::string::string(asStack_98,"D1");
            std::string::string(asStack_90,"D2");
            std::string::string(asStack_88,"D3");
            std::string::string(asStack_80,"D4");
            std::vector<std::string,std::allocator<std::string>>::vector
                      ((vector<std::string,std::allocator<std::string>> *)asStack_158,asStack_98,4,
                       asStack_178);
            std::string::~string(asStack_80);
            std::string::~string(asStack_88);
            std::string::~string(asStack_90);
            std::string::~string(asStack_98);
            nop();
            nop();
            nop();
            nop();
            local_188 = std::
                        vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                 *)asStack_158);
            local_180 = std::
                        vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                               *)asStack_158);
            while (bVar1 = __gnu_cxx::operator!=
                                     ((__normal_iterator *)&local_188,
                                      (__normal_iterator *)&local_180), bVar1) {
              uVar7 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_188);
              FUN_05475d88(asStack_190,uVar7);
              pcVar8 = (char *)FUN_0547429c(asStack_190);
              pcVar8 = (char *)Sexy::StructuredData::Value::StringForName(this_01,pcVar8,"");
              std::string::string(asStack_178,pcVar8);
              std::vector<std::string,std::allocator<std::string>>::push_back
                        ((vector<std::string,std::allocator<std::string>> *)avStack_170,asStack_178)
              ;
              std::string::~string(asStack_178);
              nop();
              std::string::~string(asStack_190);
              eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                        ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_188);
            }
            pcVar8 = (char *)Sexy::StructuredData::Value::StringForName(this_01,"Result","");
            std::string::string((string *)&local_180,pcVar5);
            std::string::string(asStack_178,pcVar8);
            BehaviorLog::inGameBehavior((string *)&local_180,(vector *)avStack_170,asStack_178);
            std::string::~string(asStack_178);
            nop();
            std::string::~string((string *)&local_180);
            nop();
            std::vector<std::string,std::allocator<std::string>>::~vector
                      ((vector<std::string,std::allocator<std::string>> *)asStack_158);
            std::vector<std::string,std::allocator<std::string>>::~vector
                      ((vector<std::string,std::allocator<std::string>> *)avStack_170);
          }
        }
      }
      Sexy::StructuredData::~StructuredData(aSStack_110);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollector::LogPvpBattleArray(std::string const&, int, int,
   std::vector<ArenaPlantPositionData, std::allocator<ArenaPlantPositionData> > const&, std::string
   const&) */

void __thiscall
MetricsCollector::LogPvpBattleArray
          (MetricsCollector *this,string *param_1,int param_2,int param_3,vector *param_4,
          string *param_5)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  NetworkMgr *this_02;
  int *piVar6;
  LogServer *this_03;
  undefined8 local_1a0;
  undefined8 local_198;
  string asStack_190 [8];
  string asStack_188 [16];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_188,"PvpLogBattleArray");
  AppendLogHead(this,asStack_188);
  std::string::~string(asStack_188);
  nop();
  uVar5 = LogServer::Instance();
  FUN_05475d88(asStack_188,param_1);
  LogServer::AppendMsg(uVar5,asStack_188);
  std::string::~string(asStack_188);
  uVar4 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar4);
  std::string::string(asStack_188,"");
  FUN_05462980(auStack_178,asStack_188);
  std::string::~string(asStack_188);
  nop();
  *(int *)(this + 0x128) = *(int *)(this + 0x128) + 1;
  FUN_0546065c(auStack_168);
  uVar5 = LogServer::Instance();
  FUN_05462824(asStack_188,auStack_178);
  LogServer::AppendMsg(uVar5,asStack_188);
  std::string::~string(asStack_188);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  std::string::string(asStack_188,"");
  FUN_05462980(auStack_178,asStack_188);
  std::string::~string(asStack_188);
  nop();
  FUN_0546065c(auStack_168,param_2);
  uVar5 = LogServer::Instance();
  FUN_05462824(asStack_188,auStack_178);
  LogServer::AppendMsg(uVar5,asStack_188);
  std::string::~string(asStack_188);
  std::string::string(asStack_188,"");
  FUN_05462980(auStack_178,asStack_188);
  std::string::~string(asStack_188);
  nop();
  this_02 = (NetworkMgr *)NetworkMgr::Instance();
  NetworkMgr::GetNewNetWorkProcess(this_02);
  Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
  FUN_0545ec84(auStack_168,asStack_188);
  std::string::~string(asStack_188);
  uVar5 = LogServer::Instance();
  FUN_05462824(asStack_188,auStack_178);
  LogServer::AppendMsg(uVar5,asStack_188);
  std::string::~string(asStack_188);
  std::string::string(asStack_188,"");
  FUN_05462980(auStack_178,asStack_188);
  std::string::~string(asStack_188);
  nop();
  FUN_0546065c(auStack_168,param_3);
  uVar5 = LogServer::Instance();
  FUN_05462824(asStack_188,auStack_178);
  LogServer::AppendMsg(uVar5,asStack_188);
  std::string::~string(asStack_188);
  std::string::string(asStack_188,"");
  FUN_05462980(auStack_178,asStack_188);
  std::string::~string(asStack_188);
  nop();
  local_1a0 = FUN_03eba3e8(*(undefined8 *)param_4);
  local_198 = FUN_03eba438(*(undefined8 *)(param_4 + 8));
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_1a0,(__normal_iterator *)&local_198), bVar3)
  {
    piVar6 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_1a0);
    iVar1 = piVar6[1];
    iVar2 = piVar6[2];
    ServerPlantID::ServerPlantID((ServerPlantID *)asStack_188,*piVar6);
    ServerPlantID::ToString();
    uVar4 = PlayerInfo::GetPlantStarLevel(this_01,asStack_190,false);
    FUN_0545ec84(auStack_168,asStack_190);
    FUN_054603b8(auStack_168,&DAT_05593348);
    FUN_0546065c(auStack_168,uVar4);
    FUN_054603b8(auStack_168,&DAT_05593348);
    FUN_0546065c(auStack_168,iVar2);
    FUN_054603b8(auStack_168,&DAT_05593348);
    FUN_0546065c(auStack_168,iVar1);
    FUN_054603b8(auStack_168,&DAT_05594620);
    std::string::~string(asStack_190);
    __gnu_cxx::
    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                  *)&local_1a0);
  }
  uVar5 = LogServer::Instance();
  FUN_05462824(asStack_188,auStack_178);
  LogServer::AppendMsg(uVar5,asStack_188);
  std::string::~string(asStack_188);
  uVar5 = LogServer::Instance();
  FUN_05475d88(asStack_188,param_5);
  LogServer::AppendMsg(uVar5,asStack_188);
  std::string::~string(asStack_188);
  this_03 = (LogServer *)LogServer::Instance();
  LogServer::SendMsg(this_03);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

