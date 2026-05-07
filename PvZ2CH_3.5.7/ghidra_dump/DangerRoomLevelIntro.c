// Class: DangerRoomLevelIntro


/* DangerRoomLevelIntro::onUpdate() */

void DangerRoomLevelIntro::onUpdate(void)

{
  return;
}


/* DangerRoomLevelIntro::onLevelEnded() */

void __thiscall DangerRoomLevelIntro::onLevelEnded(DangerRoomLevelIntro *this)

{
  (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c],*(undefined8 *)(this + 0x50))
  ;
  (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x50));
  *(undefined8 *)(this + 0x50) = 0;
  return;
}


/* DangerRoomLevelIntro::onStatScreenClosed() */

void __thiscall DangerRoomLevelIntro::onStatScreenClosed(DangerRoomLevelIntro *this)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x50);
  iVar1 = FUN_03c92154(*(undefined4 *)(lVar2 + 0x114));
  (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c],lVar2);
  (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x50));
  *(undefined8 *)(this + 0x50) = 0;
  if (iVar1 == 1) {
    (**(code **)(*(long *)this + 0x108))(this);
  }
  else if (iVar1 == 2) {
    Board::Quit((Board *)gLawnApp[0x13e]);
    return;
  }
  return;
}


/* DangerRoomLevelIntro::OnDoDangerRoomNext() */

void __thiscall DangerRoomLevelIntro::OnDoDangerRoomNext(DangerRoomLevelIntro *this)

{
  char cVar1;
  long *plVar2;
  LawnApp *this_00;
  
  this_00 = gLawnApp;
  plVar2 = *(long **)(this + 0x50);
  if (plVar2 != (long *)0x0) {
    cVar1 = LawnApp::IsBattleStatementUIShow(gLawnApp);
    if (cVar1 != '\0') {
      LawnApp::KillBattleStatementUI(this_00);
      plVar2 = *(long **)(this + 0x50);
      this_00 = gLawnApp;
    }
    cVar1 = LawnApp::GetShouldBackToMapAtDangerRoom(this_00);
    if (cVar1 != '\0') {
      (**(code **)(*plVar2 + 0x318))(plVar2,2);
      LawnApp::SetShouldBackToMapAtDangerRoom(gLawnApp,false);
      return;
    }
    (**(code **)(*plVar2 + 0x318))(plVar2,1);
  }
  LawnApp::SetShouldBackToMapAtDangerRoom(gLawnApp,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomLevelIntro::StaticClassInit() */

void DangerRoomLevelIntro::StaticClassInit(void)

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
    std::string::string(asStack_10,"DangerRoomLevelIntro");
    (*pcVar2)(plVar1,asStack_10,FUN_03c92718,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomLevelIntro::StaticGetClass() */

long * DangerRoomLevelIntro::StaticGetClass(void)

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
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"DangerRoomLevelIntro",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DangerRoomLevelIntro::~DangerRoomLevelIntro() */

void __thiscall DangerRoomLevelIntro::~DangerRoomLevelIntro(DangerRoomLevelIntro *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0675b730;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  if (*(long **)(this + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x50) + 0x18))();
    *(undefined8 *)(this + 0x50) = 0;
  }
  StandardLevelIntro::~StandardLevelIntro((StandardLevelIntro *)this);
  return;
}


/* DangerRoomLevelIntro::~DangerRoomLevelIntro() */

void __thiscall DangerRoomLevelIntro::~DangerRoomLevelIntro(DangerRoomLevelIntro *this)

{
  ~DangerRoomLevelIntro(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomLevelIntro::DangerRoomLevelIntro() */

void __thiscall DangerRoomLevelIntro::DangerRoomLevelIntro(DangerRoomLevelIntro *this)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StandardLevelIntro::StandardLevelIntro((StandardLevelIntro *)this);
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined ***)this = &PTR_GetModuleClass_0675b730;
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnDoDangerRoomNext);
  Sexy::Delegate0::Delegate0<DangerRoomLevelIntro,void(DangerRoomLevelIntro::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::BattleStatementUIMouseDown,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomLevelIntro::StaticNew() */

DangerRoomLevelIntro * DangerRoomLevelIntro::StaticNew(void)

{
  DangerRoomLevelIntro *this;
  
  this = ::operator_new(0x58);
  DangerRoomLevelIntro(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomLevelIntro::initStoredPlants(DangerRoomInfo&) */

void __thiscall
DangerRoomLevelIntro::initStoredPlants(DangerRoomLevelIntro *this,DangerRoomInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  long lVar4;
  undefined4 *puVar5;
  PlantNameMapperServerID *this_00;
  undefined8 uVar6;
  undefined8 local_40;
  undefined8 local_38;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  vector<DangerRoomNewPlantInfo,std::allocator<DangerRoomNewPlantInfo>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  FUN_03c9225c(lVar4 + 0x20);
  std::vector<DangerRoomNewPlantInfo,std::allocator<DangerRoomNewPlantInfo>>::vector
            (avStack_20,(vector *)(param_1 + 0x90));
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar3) {
    puVar5 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    this_00 = (PlantNameMapperServerID *)PlantNameMapperServerID::GetInstance();
    PlantNameMapperServerID::GetTypeForID(this_00,puVar5[3]);
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_30);
    if (bVar3) {
      uVar1 = *puVar5;
      uVar2 = puVar5[1];
      uVar6 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_30);
      Board::AddPlant((Board *)0x0,uVar6,uVar2,uVar1,aRStack_28,1,1,0xffffffff,0,1,1,0,0,0,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_40);
  }
  std::vector<DangerRoomNewPlantInfo,std::allocator<DangerRoomNewPlantInfo>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomLevelIntro::startStandardIntro() */

void __thiscall DangerRoomLevelIntro::startStandardIntro(DangerRoomLevelIntro *this)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  WorldDataManager *this_02;
  DangerRoomInfo *pDVar1;
  string asStack_b8 [8];
  string asStack_b0 [8];
  int local_a8;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  this_02 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
  PlantAnimRig_HoyaCordata::getIdleAnimationName();
  WorldDataManager::FindEventByLevelName(this_02,asStack_b0);
  std::string::~string(asStack_b0);
  LawnApp::GetDangerRoomLevelName(gLawnApp);
  pDVar1 = (DangerRoomInfo *)PlayerInfo::GetDangerRoomInfo(this_01,asStack_b8);
  DangerRoomInfo::DangerRoomInfo((DangerRoomInfo *)asStack_b0,pDVar1);
  if (1 < local_a8) {
    initStoredPlants(this,(DangerRoomInfo *)asStack_b0);
    FUN_03c92268(*(long *)(gLawnApp + 0x9f0) + 0x887);
  }
  MessageRouter::Broadcast((_func_void *)gMessageRouter);
  DangerRoomInfo::~DangerRoomInfo((DangerRoomInfo *)asStack_b0);
  std::string::~string(asStack_b8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomLevelIntro::onLoadComplete() */

void __thiscall DangerRoomLevelIntro::onLoadComplete(DangerRoomLevelIntro *this)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  WorldDataManager *this_02;
  DangerRoomInfo *pDVar1;
  DangerRoomStatScreen *this_03;
  CommonBonusUI *pCVar2;
  string asStack_100 [8];
  CBMemberTranslatorX aCStack_f8 [24];
  Delegate0 aDStack_e0 [48];
  string asStack_b0 [61];
  undefined1 local_73;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  this_02 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
  PlantAnimRig_HoyaCordata::getIdleAnimationName();
  WorldDataManager::FindEventByLevelName(this_02,asStack_b0);
  std::string::~string(asStack_b0);
  LawnApp::GetDangerRoomLevelName(gLawnApp);
  pDVar1 = (DangerRoomInfo *)PlayerInfo::GetDangerRoomInfo(this_01,asStack_100);
  DangerRoomInfo::DangerRoomInfo((DangerRoomInfo *)asStack_b0,pDVar1);
  this_03 = ::operator_new(0x2e0);
  DangerRoomStatScreen::DangerRoomStatScreen(this_03);
  *(DangerRoomStatScreen **)(this + 0x50) = this_03;
  (**(code **)(*(long *)this_03 + 0x158))(this_03,1);
  DangerRoomStatScreen::SetDangerRoomInfo
            (*(DangerRoomStatScreen **)(this + 0x50),(DangerRoomInfo *)asStack_b0);
  FUN_03c9214c(*(long *)(this + 0x50) + 0x100,local_73);
  FUN_03c92880(*(long *)(this + 0x50) + 0x102,*(int *)(gLawnApp + 0x2968) - 2U < 2);
  pCVar2 = *(CommonBonusUI **)(this + 0x50);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x100);
  Sexy::Delegate0::Delegate0<DangerRoomLevelIntro,void(DangerRoomLevelIntro::*)()>
            (aDStack_e0,aCStack_f8);
  CommonBonusUI::SetSubmitDelegate(pCVar2,aDStack_e0);
  DangerRoomStatScreen::Init(*(DangerRoomStatScreen **)(this + 0x50));
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x50));
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x50));
  LawnApp::PushOverlaysToTop(gLawnApp);
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x50));
  DangerRoomStatScreen::startDangerRoom(*(DangerRoomStatScreen **)(this + 0x50));
  DangerRoomInfo::~DangerRoomInfo((DangerRoomInfo *)asStack_b0);
  std::string::~string(asStack_100);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomLevelIntro::registerForEvents() */

void __thiscall DangerRoomLevelIntro::registerForEvents(DangerRoomLevelIntro *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xf0);
  Sexy::Delegate0::Delegate0<DangerRoomLevelIntro,void(DangerRoomLevelIntro::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<DangerRoomLevelIntro,void(DangerRoomLevelIntro::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnUpdate(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLevelEnded);
  Sexy::Delegate0::Delegate0<DangerRoomLevelIntro,void(DangerRoomLevelIntro::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnLevelEnded(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

