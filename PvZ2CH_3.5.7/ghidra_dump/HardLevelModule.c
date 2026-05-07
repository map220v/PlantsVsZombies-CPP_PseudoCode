// Class: HardLevelModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HardLevelModule::StaticClassInit() */

void HardLevelModule::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ZombieLevelCreater");
    (*pcVar3)(plVar2,asStack_10,FUN_0495ffd0,4,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"HardLevelModule");
    (*pcVar3)(plVar2,asStack_10,FUN_04960564,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HardLevelModule::StaticGetClass() */

long * HardLevelModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HardLevelModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HardLevelModule::GetZombieLevel() */

void __thiscall HardLevelModule::GetZombieLevel(HardLevelModule *this)

{
  ZombieLevelCreater::GetZombieLevel((ZombieLevelCreater *)(this + 0x18));
  return;
}


/* HardLevelModule::HardLevelModule() */

void __thiscall HardLevelModule::HardLevelModule(HardLevelModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06915af0;
  GuessRatio::GuessRatio((GuessRatio *)(this + 0x18),4.0);
  return;
}


/* HardLevelModule::StaticNew() */

HardLevelModule * HardLevelModule::StaticNew(void)

{
  HardLevelModule *this;
  
  this = ::operator_new(0x20);
  HardLevelModule(this);
  return this;
}


/* HardLevelModule::~HardLevelModule() */

void __thiscall HardLevelModule::~HardLevelModule(HardLevelModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06915af0;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* HardLevelModule::~HardLevelModule() */

void __thiscall HardLevelModule::~HardLevelModule(HardLevelModule *this)

{
  ~HardLevelModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HardLevelModule::onInit() */

void __thiscall HardLevelModule::onInit(HardLevelModule *this)

{
  uchar uVar1;
  undefined8 uVar2;
  WorldDataManager *this_00;
  long lVar3;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  HardLevelConfig *this_03;
  undefined4 uVar4;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
  FUN_05475d88(asStack_18,uVar2);
  this_00 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
  lVar3 = WorldDataManager::FindEventByLevelName(this_00,asStack_18);
  if ((lVar3 != 0) && (lVar3 = FUN_0495ff9c(*(undefined8 *)(lVar3 + 0xe8)), lVar3 != 0)) {
    uVar1 = *(uchar *)(lVar3 + 0x5c);
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    PlayerInfo::RecordHardWorld(this_02,uVar1,true);
  }
  this_03 = (HardLevelConfig *)HardLevelConfig::GetConfig();
  std::string::string(asStack_10,"");
  uVar4 = HardLevelConfig::GetZombieLevelCreate(this_03,asStack_10);
  *(undefined4 *)(this + 0x18) = uVar4;
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HardLevelModule::registerForEvents() */

void __thiscall HardLevelModule::registerForEvents(HardLevelModule *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onInit);
  Sexy::Delegate0::Delegate0<HardLevelModule,void(HardLevelModule::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnLevelInit(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

