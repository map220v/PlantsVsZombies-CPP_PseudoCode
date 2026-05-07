// Class: AutoTestPlantsVsZombies


/* AutoTestPlantsVsZombies::AutoConfirmOver() */

void AutoTestPlantsVsZombies::AutoConfirmOver(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  return;
}


/* AutoTestPlantsVsZombies::AutoFinishWinLevel() */

void AutoTestPlantsVsZombies::AutoFinishWinLevel(void)

{
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* AutoTestPlantsVsZombies::AutoTestSkyCityDamage(float) */

void AutoTestPlantsVsZombies::AutoTestSkyCityDamage(float param_1)

{
  if ((param_1 < 90.0) && (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0)) {
    Board::DestroyAllZombies(*(Board **)(gLawnApp + 0x9f0));
    MessageRouter::Post((_func_void *)gMessageRouter);
    return;
  }
  return;
}


/* AutoTestPlantsVsZombies::StaticGetClass() */

long * AutoTestPlantsVsZombies::StaticGetClass(void)

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
  uVar2 = AutoTest::StaticGetClass();
  (*pcVar3)(plVar1,"AutoTestPlantsVsZombies",uVar2,StaticNew);
  return sClass;
}


/* AutoTestPlantsVsZombies::GetClass() const */

long * AutoTestPlantsVsZombies::GetClass(void)

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
  uVar2 = AutoTest::StaticGetClass();
  (*pcVar3)(plVar1,"AutoTestPlantsVsZombies",uVar2,StaticNew);
  return sClass;
}


/* AutoTestPlantsVsZombies::QuitLevel() */

void AutoTestPlantsVsZombies::QuitLevel(void)

{
  LawnApp *this;
  int iVar1;
  CrazyNPCManager *this_00;
  long lVar2;
  
  Sexy::OutputDebugStrF((wchar_t *)"QuitLevel!\n");
  Board::DestroyAllZombies(*(Board **)(gLawnApp + 0x9f0));
  this = gLawnApp;
  lVar2 = *(long *)(gLawnApp + 0x9f0);
  iVar1 = FUN_043dae0c(*(undefined4 *)(lVar2 + 0x104));
  if (1 < iVar1 - 4U) {
    Sexy::OutputDebugStrF((wchar_t *)"*** Can\'t complete level until actual gameplay state!\n");
    return;
  }
  *(undefined4 *)(lVar2 + 0x104) = 10;
  this_00 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(this);
  CrazyNPCManager::ForceEndNarrative(this_00);
  Board::PlayerWon(*(Board **)(gLawnApp + 0x9f0));
  return;
}


/* AutoTestPlantsVsZombies::killZombie(Zombie*) */

void __thiscall AutoTestPlantsVsZombies::killZombie(AutoTestPlantsVsZombies *this,Zombie *param_1)

{
  if (param_1 != (Zombie *)0x0) {
    Zombie::setZombieState(param_1,5,0);
    return;
  }
  return;
}


/* AutoTestPlantsVsZombies::getWorld() */

byte __thiscall AutoTestPlantsVsZombies::getWorld(AutoTestPlantsVsZombies *this)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  lVar2 = LawnApp::GetWorldMapList(gLawnApp);
  uVar5 = *(ulong *)(this + 0x50);
  uVar4 = *(undefined8 *)(lVar2 + 8);
  uVar3 = FUN_043dae2c(uVar4,*(undefined8 *)(lVar2 + 0x10));
  bVar1 = 0;
  if (uVar5 < uVar3) {
    lVar2 = FUN_043dae98(uVar4,uVar5);
    bVar1 = FUN_0547419c(lVar2 + 0x10);
    bVar1 = bVar1 ^ 1;
  }
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutoTestPlantsVsZombies::addZombie(int) */

void __thiscall AutoTestPlantsVsZombies::addZombie(AutoTestPlantsVsZombies *this,int param_1)

{
  ulong uVar1;
  RtWeakPtrBase *pRVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  Board *pBVar7;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  uVar5 = *(undefined8 *)(this + 0x28);
  local_8 = ___stack_chk_guard;
  uVar6 = *(ulong *)(this + 0x48);
  uVar1 = FUN_043daec0(uVar5,*(undefined8 *)(this + 0x30));
  if ((uVar6 < uVar1) &&
     (uVar1 = FUN_043dae8c(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18)),
     *(ulong *)(this + 0x40) < uVar1)) {
    pRVar2 = (RtWeakPtrBase *)FUN_043daecc(uVar5,uVar6);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,pRVar2);
    pBVar7 = *(Board **)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    Board::CheatAddZombie(pBVar7,aRStack_10,param_1,1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    uVar4 = *(undefined8 *)(this + 0x48);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    uVar5 = FUN_0547429c(lVar3 + 8);
    Sexy::OutputDebugStrF((wchar_t *)"add zombie:%d,[%s]\n",uVar4,uVar5);
    *(long *)(this + 0x48) = *(long *)(this + 0x48) + 1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutoTestPlantsVsZombies::addPlant(int) */

void __thiscall AutoTestPlantsVsZombies::addPlant(AutoTestPlantsVsZombies *this,int param_1)

{
  ulong uVar1;
  RtWeakPtrBase *pRVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  Board *this_00;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  uVar5 = *(undefined8 *)(this + 0x10);
  uVar6 = *(ulong *)(this + 0x40);
  local_8 = ___stack_chk_guard;
  uVar1 = FUN_043dae8c(uVar5,*(undefined8 *)(this + 0x18));
  if ((uVar6 < uVar1) &&
     (uVar1 = FUN_043daec0(*(undefined8 *)(this + 0x28),*(undefined8 *)(this + 0x30)),
     *(ulong *)(this + 0x48) < uVar1)) {
    pRVar2 = (RtWeakPtrBase *)FUN_043dae84(uVar5,uVar6);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,pRVar2);
    this_00 = *(Board **)(gLawnApp + 0x9f0);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Board::TestSpawnPlant(this_00,(string *)(lVar3 + 8),0,param_1);
    uVar4 = *(undefined8 *)(this + 0x40);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    uVar5 = FUN_0547429c(lVar3 + 8);
    Sexy::OutputDebugStrF((wchar_t *)"add plant:%d,[%s]\n",uVar4,uVar5);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AutoTestPlantsVsZombies::onPlantDied(Plant*) */

void AutoTestPlantsVsZombies::onPlantDied(Plant *param_1)

{
  undefined4 uVar1;
  
  Sexy::OutputDebugStrF((wchar_t *)"onPlantDied\n");
  uVar1 = PVZ_T();
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutoTestPlantsVsZombies::AutoEnterLevel() */

void __thiscall AutoTestPlantsVsZombies::AutoEnterLevel(AutoTestPlantsVsZombies *this)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  LevelUtils *this_00;
  char *__s;
  string *__n;
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = getWorld(this);
  if (cVar1 != '\0') {
    lVar2 = LawnApp::GetWorldMapList(gLawnApp);
    uVar3 = FUN_043dae98(*(undefined8 *)(lVar2 + 8),*(undefined8 *)(this + 0x50));
    FUN_05475d88(asStack_28,uVar3);
    std::operator+(asStack_28,"_Test");
    this_00 = (LevelUtils *)Sexy::LazySingleton<LevelUtils>::GetInstance();
    __s = (char *)FUN_0547429c(asStack_20);
    __n = asStack_18;
    std::string::string(asStack_10,__s);
    lVar2 = LevelUtils::GetLevelInfo(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (lVar2 == 0) {
      std::string::append(asStack_20,"egypt_Test",(size_t)__n);
    }
    GameStateMgr::StartLevel(gGameStateMgr,&DAT_06b05538,asStack_20,0xffffffff,1,1,0);
    uVar3 = FUN_0547429c(asStack_20);
    Sexy::StrFormat("[AutoTest-- AllLevel: %s Level]",asStack_18,uVar3);
    Sexy::LazySingleton<DebugLog>::GetInstancePtr();
    std::string::string(asStack_10,"PvZ2Debug");
    nop();
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
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
/* AutoTestPlantsVsZombies::AutoStartNextLevel() */

void __thiscall AutoTestPlantsVsZombies::AutoStartNextLevel(AutoTestPlantsVsZombies *this)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  LevelUtils *this_00;
  char *__s;
  string *__n;
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  cVar1 = getWorld(this);
  if (cVar1 != '\0') {
    lVar2 = LawnApp::GetWorldMapList(gLawnApp);
    uVar3 = FUN_043dae98(*(undefined8 *)(lVar2 + 8),*(undefined8 *)(this + 0x50));
    FUN_05475d88(asStack_28,uVar3);
    std::operator+(asStack_28,"_Test");
    this_00 = (LevelUtils *)Sexy::LazySingleton<LevelUtils>::GetInstance();
    __s = (char *)FUN_0547429c(asStack_20);
    __n = asStack_18;
    std::string::string(asStack_10,__s);
    lVar2 = LevelUtils::GetLevelInfo(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (lVar2 == 0) {
      std::string::append(asStack_20,"egypt_Test",(size_t)__n);
    }
    GameStateMgr::StartLevel(gGameStateMgr,&DAT_06b05538,asStack_20,0xffffffff,1,1,0);
    uVar3 = FUN_0547429c(asStack_20);
    Sexy::StrFormat("[AutoTest-- AllLevel: %s Level]",asStack_18,uVar3);
    Sexy::LazySingleton<DebugLog>::GetInstancePtr();
    std::string::string(asStack_10,"PvZ2Debug");
    nop();
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    std::string::~string(asStack_20);
    std::string::~string(asStack_28);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AutoTestPlantsVsZombies::AutoTestPlantsVsZombies() */

void __thiscall AutoTestPlantsVsZombies::AutoTestPlantsVsZombies(AutoTestPlantsVsZombies *this)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  AutoTest::AutoTest((AutoTest *)this);
  *(undefined ***)this = &PTR_GetClass_06847320;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  *(undefined8 *)(this + 0x48) = 0;
  this[0x58] = (AutoTestPlantsVsZombies)0x0;
  *(undefined8 *)(this + 0x40) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x50) = 1;
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x5c) = uVar2;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,changeStartWorld);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<AutoTestPlantsVsZombies,void(AutoTestPlantsVsZombies::*)(std::string_const&)>>
            ((MessageRouter *)puVar1,Message::changePlantsVsZombiesStartWorld,&local_40);
  return;
}


/* AutoTestPlantsVsZombies::StaticNew() */

AutoTestPlantsVsZombies * AutoTestPlantsVsZombies::StaticNew(void)

{
  AutoTestPlantsVsZombies *this;
  
  this = ::operator_new(0x60);
  AutoTestPlantsVsZombies(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutoTestPlantsVsZombies::updateState(bool) */

void __thiscall AutoTestPlantsVsZombies::updateState(AutoTestPlantsVsZombies *this,bool param_1)

{
  undefined *puVar1;
  string *psVar2;
  long lVar3;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
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
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    psVar2 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    std::string::string((string *)&local_50,"FastMotion");
    CheatManager::SetToggleValue(psVar2,SUB81((string *)&local_50,0));
    std::string::~string((string *)&local_50);
    nop();
    lVar3 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
    FUN_043daf24(lVar3 + 0x30);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,PlantsVsZombiesStart);
    Sexy::Delegate0::Delegate0<AutoTestPlantsVsZombies,void(AutoTestPlantsVsZombies::*)()>
              (aDStack_38,(string *)&local_50);
    MessageRouter::Subscribe((MessageRouter *)puVar1,Message::LevelStarting,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onPlantDied);
    local_110 = local_e8;
    local_120 = local_f8;
    uStack_118 = uStack_f0;
    MessageRouter::
    Subscribe<Plant*,Sexy::CBMemberTranslatorX<AutoTestPlantsVsZombies,void(AutoTestPlantsVsZombies::*)(Plant*)>>
              ((MessageRouter *)puVar1,Message::PlantDied,&local_120);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onZombieDied);
    local_140 = local_e0;
    uStack_138 = uStack_d8;
    local_130 = local_d0;
    MessageRouter::
    Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<AutoTestPlantsVsZombies,void(AutoTestPlantsVsZombies::*)(Zombie*,DamageInfo_const*)>>
              ((MessageRouter *)puVar1,Message::ZombieDied,&local_140);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnZombieCloseToHouse);
    local_160 = local_c8;
    uStack_158 = uStack_c0;
    local_150 = local_b8;
    MessageRouter::
    Subscribe<Zombie*,Sexy::CBMemberTranslatorX<AutoTestPlantsVsZombies,void(AutoTestPlantsVsZombies::*)(Zombie*)>>
              ((MessageRouter *)puVar1,Message::ZombieCloseToHouse,&local_160);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,AutoFinishWinLevel);
    Sexy::Delegate0::Delegate0<AutoTestPlantsVsZombies,void(AutoTestPlantsVsZombies::*)()>
              (aDStack_38,(string *)&local_50);
    MessageRouter::Subscribe
              ((MessageRouter *)puVar1,Message::AutoTestShowOverWinUINotify,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,AutoStartNextLevel);
    Sexy::Delegate0::Delegate0<AutoTestPlantsVsZombies,void(AutoTestPlantsVsZombies::*)()>
              (aDStack_38,(string *)&local_50);
    MessageRouter::Subscribe((MessageRouter *)puVar1,Message::AutoTestCloseOverUINotify,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,AutoTestSkyCityDamage);
    local_180 = local_b0;
    uStack_178 = uStack_a8;
    local_170 = local_a0;
    MessageRouter::
    Subscribe<float,Sexy::CBMemberTranslatorX<AutoTestPlantsVsZombies,void(AutoTestPlantsVsZombies::*)(float)>>
              ((MessageRouter *)puVar1,Message::AirshipSetPercentage,&local_180);
    if (*(Board **)(gLawnApp + 0x9f0) == (Board *)0x0) {
      lVar3 = LawnApp::GetWorldMap(gLawnApp);
      if ((lVar3 != 0) && (lVar3 = FUN_043dae10(*(undefined8 *)(lVar3 + 0x2f0)), lVar3 != 0)) {
        AutoEnterLevel(this);
      }
    }
    else {
      Board::Quit(*(Board **)(gLawnApp + 0x9f0));
    }
  }
  else {
    if (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) {
      Board::Quit(*(Board **)(gLawnApp + 0x9f0));
    }
    psVar2 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    std::string::string((string *)&local_50,"FastMotion");
    CheatManager::SetToggleValue(psVar2,SUB81((string *)&local_50,0));
    std::string::~string((string *)&local_50);
    nop();
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,PlantsVsZombiesStart);
    Sexy::Delegate0::Delegate0<AutoTestPlantsVsZombies,void(AutoTestPlantsVsZombies::*)()>
              (aDStack_38,(string *)&local_50);
    MessageRouter::Unsubscribe((MessageRouter *)puVar1,Message::LevelStarting,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onPlantDied);
    local_110 = local_88;
    local_120 = local_98;
    uStack_118 = uStack_90;
    MessageRouter::
    Unsubscribe<Plant*,Sexy::CBMemberTranslatorX<AutoTestPlantsVsZombies,void(AutoTestPlantsVsZombies::*)(Plant*)>>
              ((MessageRouter *)puVar1,Message::PlantDied,&local_120);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onZombieDied);
    local_140 = local_80;
    uStack_138 = uStack_78;
    local_130 = local_70;
    MessageRouter::
    Unsubscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<AutoTestPlantsVsZombies,void(AutoTestPlantsVsZombies::*)(Zombie*,DamageInfo_const*)>>
              ((MessageRouter *)puVar1,Message::ZombieDied,&local_140);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnZombieCloseToHouse);
    local_160 = local_68;
    uStack_158 = uStack_60;
    local_150 = local_58;
    MessageRouter::
    Unsubscribe<Zombie*,Sexy::CBMemberTranslatorX<AutoTestPlantsVsZombies,void(AutoTestPlantsVsZombies::*)(Zombie*)>>
              ((MessageRouter *)puVar1,Message::ZombieCloseToHouse,&local_160);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,AutoFinishWinLevel);
    Sexy::Delegate0::Delegate0<AutoTestPlantsVsZombies,void(AutoTestPlantsVsZombies::*)()>
              (aDStack_38,(string *)&local_50);
    MessageRouter::Unsubscribe
              ((MessageRouter *)puVar1,Message::AutoTestShowOverWinUINotify,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,AutoStartNextLevel);
    Sexy::Delegate0::Delegate0<AutoTestPlantsVsZombies,void(AutoTestPlantsVsZombies::*)()>
              (aDStack_38,(string *)&local_50);
    MessageRouter::Unsubscribe
              ((MessageRouter *)puVar1,Message::AutoTestCloseOverUINotify,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,AutoTestSkyCityDamage);
    local_180 = local_50;
    uStack_178 = uStack_48;
    local_170 = local_40;
    MessageRouter::
    Unsubscribe<float,Sexy::CBMemberTranslatorX<AutoTestPlantsVsZombies,void(AutoTestPlantsVsZombies::*)(float)>>
              ((MessageRouter *)puVar1,Message::AirshipSetPercentage,&local_180);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutoTestPlantsVsZombies::changeStartWorld(std::string const&) */

void __thiscall
AutoTestPlantsVsZombies::changeStartWorld(AutoTestPlantsVsZombies *this,string *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  string *psVar4;
  long lVar5;
  undefined8 uVar6;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = LawnApp::GetWorldMapList(gLawnApp);
  uVar6 = *(undefined8 *)(lVar2 + 8);
  lVar3 = FUN_043dae2c(uVar6,*(undefined8 *)(lVar2 + 0x10));
  lVar2 = 0;
  do {
    lVar5 = lVar2;
    if (lVar5 == lVar3) {
      lVar5 = 1;
      break;
    }
    psVar4 = (string *)FUN_043dae98(uVar6,lVar5);
    cVar1 = std::operator==(psVar4,param_1);
    lVar2 = lVar5 + 1;
  } while (cVar1 == '\0');
  *(long *)(this + 0x50) = lVar5;
  psVar4 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  std::string::string(asStack_10,"PVZTest");
  CheatManager::SetToggleValue(psVar4,SUB81(asStack_10,0));
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AutoTestPlantsVsZombies::~AutoTestPlantsVsZombies() */

void __thiscall AutoTestPlantsVsZombies::~AutoTestPlantsVsZombies(AutoTestPlantsVsZombies *this)

{
  *(undefined ***)this = &PTR_GetClass_06847320;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>::
  ~vector((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
           *)(this + 0x28));
  std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
  ~vector((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
           *)(this + 0x10));
  AutoTest::~AutoTest((AutoTest *)this);
  return;
}


/* AutoTestPlantsVsZombies::~AutoTestPlantsVsZombies() */

void __thiscall AutoTestPlantsVsZombies::~AutoTestPlantsVsZombies(AutoTestPlantsVsZombies *this)

{
  ~AutoTestPlantsVsZombies(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutoTestPlantsVsZombies::initByWorld() */

void __thiscall AutoTestPlantsVsZombies::initByWorld(AutoTestPlantsVsZombies *this)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  ObjectTypeDirectory<PlantType> *this_00;
  ObjectTypeDirectory<ZombieType> *this_01;
  int iVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x40) = 0xffffffffffffffff;
  this[0x58] = (AutoTestPlantsVsZombies)0x0;
  std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
  clear((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>> *
        )(this + 0x10));
  std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>::
  clear((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
         *)(this + 0x28));
  lVar4 = LawnApp::GetWorldMapList(gLawnApp);
  uVar5 = FUN_043dae98(*(undefined8 *)(lVar4 + 8),*(undefined8 *)(this + 0x50));
  this_00 = (ObjectTypeDirectory<PlantType> *)
            Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  iVar2 = ObjectTypeDirectory<PlantType>::GetCount(this_00);
  if (0 < iVar2) {
    iVar6 = 0;
    do {
      while( true ) {
        uVar3 = Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        ObjectTypeDirectory<PlantType>::GetTypeFromIndex(uVar3);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
        cVar1 = FUN_043dbfbc(aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        if (cVar1 == '\0') break;
        iVar6 = iVar6 + 1;
        std::
        vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
        push_back((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
                   *)(this + 0x10),(RtWeakPtr *)aRStack_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
        if (iVar6 == iVar2) goto LAB_043df950;
      }
      iVar6 = iVar6 + 1;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    } while (iVar6 != iVar2);
  }
LAB_043df950:
  this_01 = (ObjectTypeDirectory<ZombieType> *)
            Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  iVar2 = ObjectTypeDirectory<ZombieType>::GetCount(this_01);
  if (0 < iVar2) {
    iVar6 = 0;
    do {
      while( true ) {
        uVar3 = Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
        ObjectTypeDirectory<ZombieType>::GetTypeFromIndex(uVar3);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
        cVar1 = FUN_043dbe30(aRStack_10,uVar5);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        if (cVar1 == '\0') break;
        iVar6 = iVar6 + 1;
        std::
        vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
        ::push_back((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
                     *)(this + 0x28),(RtWeakPtr *)aRStack_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
        if (iVar6 == iVar2) goto LAB_043df9e0;
      }
      iVar6 = iVar6 + 1;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    } while (iVar6 != iVar2);
  }
LAB_043df9e0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutoTestPlantsVsZombies::GetZombies(std::vector<Zombie*, std::allocator<Zombie*> >&,
   std::function<bool (BoardEntity const*)> const&) */

void __thiscall
AutoTestPlantsVsZombies::GetZombies(AutoTestPlantsVsZombies *this,vector *param_1,function *param_2)

{
  bool bVar1;
  char cVar2;
  vector *pvVar3;
  Zombie **ppZVar4;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pvVar3 = (vector *)Board::GetZombies(*(Board **)(gLawnApp + 0x9f0));
  std::vector<Zombie*,std::allocator<Zombie*>>::vector
            ((vector<Zombie*,std::allocator<Zombie*>> *)&local_20,pvVar3);
  local_30 = FUN_043dc748(local_20);
  local_28 = FUN_043dc798(local_18);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    ppZVar4 = (Zombie **)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    cVar2 = GameObject::IsDestroyed((GameObject *)*ppZVar4);
    if (((cVar2 == '\0') &&
        (cVar2 = (**(code **)(*(long *)*ppZVar4 + 0x328))(*ppZVar4), cVar2 == '\0')) &&
       (cVar2 = std::function<bool(BoardEntity_const*)>::operator()
                          ((function<bool(BoardEntity_const*)> *)param_2,(BoardEntity *)*ppZVar4),
       cVar2 != '\0')) {
      std::vector<Zombie*,std::allocator<Zombie*>>::push_back
                ((vector<Zombie*,std::allocator<Zombie*>> *)param_1,ppZVar4);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<Zombie*,std::allocator<Zombie*>>::~vector
            ((vector<Zombie*,std::allocator<Zombie*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutoTestPlantsVsZombies::checkAndAddZombie(int) */

void __thiscall
AutoTestPlantsVsZombies::checkAndAddZombie(AutoTestPlantsVsZombies *this,int param_1)

{
  ulong uVar1;
  int local_64 [3];
  code *local_58;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  undefined8 local_38;
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_64[0] = param_1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_40);
  local_58 = EntityAccept;
  std::bind<bool(*)(BoardEntity_const*,int),std::_Placeholder<1>const&,int&>
            ((_func_bool_BoardEntity_ptr_int *)&local_58,(_Placeholder *)&DAT_0576d300,local_64);
  std::function<bool(BoardEntity_const*)>::
  function<std::_Bind<bool(*(std::_Placeholder<1>,int))(BoardEntity_const*,int)>,void>
            ((function<bool(BoardEntity_const*)> *)afStack_28,auStack_50);
  GetZombies(this,(vector *)&local_40,(function *)afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  uVar1 = FUN_043daeb4(local_40,local_38);
  if (uVar1 < 2) {
    addZombie(this,local_64[0]);
  }
  std::vector<Zombie*,std::allocator<Zombie*>>::~vector
            ((vector<Zombie*,std::allocator<Zombie*>> *)&local_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutoTestPlantsVsZombies::checkAndTestNextPlant(bool) */

void __thiscall
AutoTestPlantsVsZombies::checkAndTestNextPlant(AutoTestPlantsVsZombies *this,bool param_1)

{
  int iVar1;
  LawnApp *this_00;
  char cVar2;
  long lVar3;
  ulong uVar4;
  PVZ2UIDialog *this_01;
  PrimeTypeface *pPVar5;
  string *psVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 auStack_78 [8];
  code *local_70;
  undefined8 local_68;
  undefined8 local_60;
  string asStack_50 [24];
  function<bool(Sexy::Touch_const&)> afStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68);
  local_70 = EntityAllAccept;
  std::bind<bool(*)(BoardEntity_const*),std::_Placeholder<1>const&>
            ((_func_bool_BoardEntity_ptr *)&local_70,(_Placeholder *)&DAT_0576d300);
  std::function<bool(BoardEntity_const*)>::
  function<std::_Bind<bool(*(std::_Placeholder<1>))(BoardEntity_const*)>,void>
            ((function<bool(BoardEntity_const*)> *)afStack_38,asStack_50);
  GetZombies(this,(vector *)&local_68,(function *)afStack_38);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_38);
  if (param_1) {
    Board::DestroyAllPlants();
    Board::DestroyAllZombies(*(Board **)(gLawnApp + 0x9f0));
  }
  else {
    lVar3 = FUN_043daeb4(local_68,local_60);
    if (lVar3 != 0) goto LAB_043e1200;
    Board::DestroyAllPlants();
  }
  lVar3 = *(long *)(this + 0x40);
  *(undefined8 *)(this + 0x48) = 0;
  *(ulong *)(this + 0x40) = lVar3 + 1U;
  uVar4 = FUN_043dae8c(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18));
  if (lVar3 + 1U < uVar4) {
    iVar7 = 0;
    if (0 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc)) {
      do {
        addPlant(this,iVar7);
        iVar1 = iVar7 + 1;
        addZombie(this,iVar7);
        iVar7 = iVar1;
      } while (iVar1 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
    }
    uVar8 = PVZ_T();
    *(undefined4 *)(this + 0x5c) = uVar8;
  }
  else {
    *(long *)(this + 0x50) = *(long *)(this + 0x50) + 1;
    cVar2 = getWorld(this);
    this_00 = gLawnApp;
    if (cVar2 == '\0') {
      FUN_05478178(asStack_50,L"PASS---Plants VS Zombies Test is End!",&local_70);
      this_01 = (PVZ2UIDialog *)LawnApp::ShowPVZ2DialogOneLine(this_00,(wstring *)asStack_50);
      FUN_05476c50(asStack_50);
      nop();
      FUN_05478178(&local_70,L"[BUTTON_OK]",auStack_78);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,AutoConfirmOver);
      Sexy::Delegate0::Delegate0<AutoTestPlantsVsZombies,void(AutoTestPlantsVsZombies::*)()>
                ((Delegate0 *)afStack_38,asStack_50);
      PVZ2UIDialog::AddButton(this_01,&local_70,afStack_38,1);
      FUN_05476c50(&local_70);
      nop();
      pPVar5 = (PrimeTypeface *)
               PrimeText_PotentialTypeface::Typeface
                         (PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
      Sexy::Color::Color((Color *)asStack_50,1);
      PVZ2UIDialog::SetHeaderFont(this_01,pPVar5,(Color *)asStack_50);
      PVZ2UIDialog::SetBackgroundDarken(this_01,true,0.5);
      psVar6 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
      std::string::string(asStack_50,"PVZTest");
      CheatManager::SetToggleValue(psVar6,SUB81(asStack_50,0));
      std::string::~string(asStack_50);
      nop();
    }
    else {
      QuitLevel();
    }
  }
LAB_043e1200:
  std::vector<Zombie*,std::allocator<Zombie*>>::~vector
            ((vector<Zombie*,std::allocator<Zombie*>> *)&local_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutoTestPlantsVsZombies::PlantsVsZombiesStart() */

void __thiscall AutoTestPlantsVsZombies::PlantsVsZombiesStart(AutoTestPlantsVsZombies *this)

{
  char cVar1;
  LevelModuleManager *pLVar2;
  Board *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  local_8 = ___stack_chk_guard;
  if ((this_00 != (Board *)0x0) && (cVar1 = Board::IsPlaying(this_00), cVar1 != '\0')) {
    pLVar2 = (LevelModuleManager *)FUN_043dae08(*(undefined8 *)(this_00 + 0xad8));
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,PlantsVsZombiesUpdate);
    Sexy::Delegate0::Delegate0<AutoTestPlantsVsZombies,void(AutoTestPlantsVsZombies::*)()>
              (aDStack_38,aCStack_50);
    LevelModuleManager::RegisterOnGameplayUpdate(pLVar2,aDStack_38);
    initByWorld(this);
    checkAndTestNextPlant(this,true);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AutoTestPlantsVsZombies::PlantsVsZombiesUpdate() */

void __thiscall AutoTestPlantsVsZombies::PlantsVsZombiesUpdate(AutoTestPlantsVsZombies *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  
  if (this[0x58] == (AutoTestPlantsVsZombies)0x0) {
    cVar2 = Board::IsLevelEnded(*(Board **)(gLawnApp + 0x9f0));
    if ((cVar2 != '\0') || (fVar4 = (float)PVZ_T(), fVar4 - *(float *)(this + 0x5c) <= 180.0)) {
      return;
    }
    uVar5 = PVZ_T();
    *(undefined4 *)(this + 0x5c) = uVar5;
    Board::DestroyAllPlants();
    Board::DestroyAllZombies(*(Board **)(gLawnApp + 0x9f0));
    iVar3 = 0;
    if (0 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc)) {
      do {
        addPlant(this,iVar3);
        iVar1 = iVar3 + 1;
        addZombie(this,iVar3);
        iVar3 = iVar1;
      } while (iVar1 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
    }
  }
  else {
    this[0x58] = (AutoTestPlantsVsZombies)0x0;
  }
  checkAndTestNextPlant(this,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutoTestPlantsVsZombies::GetPlants(std::vector<Plant*, std::allocator<Plant*> >&,
   std::function<bool (BoardEntity const*)> const&) */

void __thiscall
AutoTestPlantsVsZombies::GetPlants(AutoTestPlantsVsZombies *this,vector *param_1,function *param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  PVZDB *pPVar4;
  RtDbTable *this_00;
  BoardEntity *extraout_x0;
  BoardEntity *extraout_x1;
  BoardEntity *extraout_x1_00;
  BoardEntity *local_38;
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x2c);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    pPVar4 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    this_00 = (RtDbTable *)PVZDB::GetTable(pPVar4,0x2c);
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtDbTable::GetObjectForId(this_00,aRStack_30);
    nop();
    local_38 = extraout_x0;
    Sexy::RtId::~RtId(aRStack_30);
    if ((local_38[0x118] != (BoardEntity)0x0) &&
       (cVar2 = std::function<bool(BoardEntity_const*)>::operator()
                          ((function<bool(BoardEntity_const*)> *)param_2,local_38),
       local_38 = extraout_x1, cVar2 != '\0')) {
      std::vector<Plant*,std::allocator<Plant*>>::push_back
                ((vector<Plant*,std::allocator<Plant*>> *)param_1,(Plant **)&local_38);
      local_38 = extraout_x1_00;
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,(int)local_38);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutoTestPlantsVsZombies::checkAndAddPlant(int) */

void __thiscall AutoTestPlantsVsZombies::checkAndAddPlant(AutoTestPlantsVsZombies *this,int param_1)

{
  long lVar1;
  int local_64 [3];
  code *local_58;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  undefined8 local_38;
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_64[0] = param_1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_40);
  local_58 = EntityAccept;
  std::bind<bool(*)(BoardEntity_const*,int),std::_Placeholder<1>const&,int&>
            ((_func_bool_BoardEntity_ptr_int *)&local_58,(_Placeholder *)&DAT_0576d300,local_64);
  std::function<bool(BoardEntity_const*)>::
  function<std::_Bind<bool(*(std::_Placeholder<1>,int))(BoardEntity_const*,int)>,void>
            ((function<bool(BoardEntity_const*)> *)afStack_28,auStack_50);
  GetPlants(this,(vector *)&local_40,(function *)afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  lVar1 = FUN_043daea8(local_40,local_38);
  if (lVar1 == 0) {
    addPlant(this,local_64[0]);
  }
  std::vector<Plant*,std::allocator<Plant*>>::~vector
            ((vector<Plant*,std::allocator<Plant*>> *)&local_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AutoTestPlantsVsZombies::onZombieDied(Zombie*, DamageInfo const*) */

void AutoTestPlantsVsZombies::onZombieDied(Zombie *param_1,DamageInfo *param_2)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  
  Sexy::OutputDebugStrF((wchar_t *)"onZombieDied\n");
  lVar2 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_2);
  iVar1 = BoardTransforms::BoardSpaceToGridY(*(float *)(lVar2 + 4));
  checkAndAddPlant((AutoTestPlantsVsZombies *)param_1,iVar1);
  checkAndAddZombie((AutoTestPlantsVsZombies *)param_1,iVar1);
  param_1[0x58] = (Zombie)0x1;
  uVar3 = PVZ_T();
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  return;
}


/* AutoTestPlantsVsZombies::OnZombieCloseToHouse(Zombie*) */

void __thiscall
AutoTestPlantsVsZombies::OnZombieCloseToHouse(AutoTestPlantsVsZombies *this,Zombie *param_1)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  
  Sexy::OutputDebugStrF((wchar_t *)"OnZombieCloseToHouse\n");
  lVar2 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_1);
  iVar1 = BoardTransforms::BoardSpaceToGridY(*(float *)(lVar2 + 4));
  killZombie(this,param_1);
  checkAndAddPlant(this,iVar1);
  checkAndAddZombie(this,iVar1);
  this[0x58] = (AutoTestPlantsVsZombies)0x1;
  uVar3 = PVZ_T();
  *(undefined4 *)(this + 0x5c) = uVar3;
  return;
}

