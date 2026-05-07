// Class: InitialPlantPlacer


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InitialPlantPlacer::StaticClassInit() */

void InitialPlantPlacer::StaticClassInit(void)

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
    std::string::string(asStack_10,"InitialPlantPlacer");
    (*pcVar2)(plVar1,asStack_10,FUN_0435ab14,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* InitialPlantPlacer::StaticGetClass() */

long * InitialPlantPlacer::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"InitialPlantPlacer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* InitialPlantPlacer::InitialPlantPlacer() */

void __thiscall InitialPlantPlacer::InitialPlantPlacer(InitialPlantPlacer *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06834920;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* InitialPlantPlacer::StaticNew() */

InitialPlantPlacer * InitialPlantPlacer::StaticNew(void)

{
  InitialPlantPlacer *this;
  
  this = ::operator_new(0x30);
  InitialPlantPlacer(this);
  return this;
}


/* InitialPlantPlacer::~InitialPlantPlacer() */

void __thiscall InitialPlantPlacer::~InitialPlantPlacer(InitialPlantPlacer *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06834920;
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)(this + 0x18))
  ;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* InitialPlantPlacer::~InitialPlantPlacer() */

void __thiscall InitialPlantPlacer::~InitialPlantPlacer(InitialPlantPlacer *this)

{
  ~InitialPlantPlacer(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InitialPlantPlacer::onGameplayStarted() */

void __thiscall InitialPlantPlacer::onGameplayStarted(InitialPlantPlacer *this)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  ResilienceTutorialIntroProperties *pRVar4;
  RtMixedPtrBase *this_00;
  long *plVar5;
  char *pcVar6;
  undefined8 local_78;
  undefined8 local_70;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar4 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (pRVar4[0x58] != (ResilienceTutorialIntroProperties)0x0) {
    bVar1 = false;
    Board::GetGameSubSystem<IntensiveCarrotRevivalSubsystem>(*(Board **)(gLawnApp + 0x9f0));
    Sexy::Point::Point((Point *)&local_78,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
    DamageInfo::DamageInfo
              ((DamageInfo *)0x0,(undefined4)local_70,local_70._4_4_,aDStack_68,0x400,
               (Point *)&local_78,0);
    local_78 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x18));
    local_70 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x18));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_78,(__normal_iterator *)&local_70), bVar2)
    {
      this_00 = (RtMixedPtrBase *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
      cVar3 = Sexy::RtMixedPtrBase::IsValid(this_00);
      if (cVar3 != '\0') {
        bVar1 = true;
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        (**(code **)(*plVar5 + 0x120))(plVar5,aDStack_68);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_78);
    }
    if (bVar1) {
      pcVar6 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar6,"Play_UI_PowerUp_FlameThrower_Torch");
    }
    DamageInfo::~DamageInfo(aDStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InitialPlantPlacer::onLoadComplete() */

void __thiscall InitialPlantPlacer::onLoadComplete(InitialPlantPlacer *this)

{
  int iVar1;
  bool bVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  ResilienceEntity *pRVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 local_40;
  undefined8 local_38;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  ResilienceEntity aRStack_20 [8];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  local_40 = FUN_0435a1e4(*(undefined8 *)(pRVar3 + 0x40));
  local_38 = FUN_0435a234(*(undefined8 *)(pRVar3 + 0x48));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar2) {
    pRVar4 = (ResilienceEntity *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    ResilienceEntity::ResilienceEntity(aRStack_20,pRVar4);
    uVar5 = Board::AddPlant(*(Board **)(gLawnApp + 0x9f0),local_18,local_14,(string *)aRStack_20,
                            local_c,false,false,false,false);
    iVar1 = local_10;
    if (local_10 != -1) {
      auVar6 = PVZ_EOT();
      Plant::ApplyCondition(auVar6,0,uVar5,iVar1);
    }
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_30);
    std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::push_back
              ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)
               (this + 0x18),(RtWeakPtr *)aRStack_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_20);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InitialPlantPlacer::registerForEvents() */

void __thiscall InitialPlantPlacer::registerForEvents(InitialPlantPlacer *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLoadComplete);
  Sexy::Delegate0::Delegate0<InitialPlantPlacer,void(InitialPlantPlacer::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayStarted);
  Sexy::Delegate0::Delegate0<InitialPlantPlacer,void(InitialPlantPlacer::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

