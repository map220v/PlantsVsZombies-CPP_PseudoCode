// Class: WaveDistributorModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveDistributorModule::StaticClassInit() */

void WaveDistributorModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"WaveDistributorModule");
    (*pcVar2)(plVar1,asStack_10,FUN_036cc08c,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WaveDistributorModule::StaticGetClass() */

long * WaveDistributorModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WaveDistributorModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WaveDistributorModule::WaveDistributorModule() */

void __thiscall WaveDistributorModule::WaveDistributorModule(WaveDistributorModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR_GetModuleClass_066824f0;
  return;
}


/* WaveDistributorModule::StaticNew() */

WaveDistributorModule * WaveDistributorModule::StaticNew(void)

{
  WaveDistributorModule *this;
  
  this = ::operator_new(0x20);
  WaveDistributorModule(this);
  return this;
}


/* WaveDistributorModule::~WaveDistributorModule() */

void __thiscall WaveDistributorModule::~WaveDistributorModule(WaveDistributorModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_066824f0;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* WaveDistributorModule::~WaveDistributorModule() */

void __thiscall WaveDistributorModule::~WaveDistributorModule(WaveDistributorModule *this)

{
  ~WaveDistributorModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveDistributorModule::createAction(Sexy::RtWeakPtr<WaveActionProperties>, int) const */

void __thiscall
WaveDistributorModule::createAction
          (undefined8 param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2,undefined4 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  WaveAction *extraout_x0;
  RtWeakPtr<Sexy::SoundResource> aRStack_13a8 [8];
  MTRand aMStack_13a0 [5016];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  uVar2 = (**(code **)(*plVar1 + 0x80))();
  Sexy::MTRand::MTRand(aMStack_13a0);
  GameObject::Create(uVar2,0x35);
  nop();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_13a8,(RtWeakPtrBase *)param_2);
  WaveAction::InitializeAction(extraout_x0,aRStack_13a8,aMStack_13a0,param_3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_13a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(extraout_x0);
}


/* WaveDistributorModule::needsNextAddedWave(int, bool) */

void __thiscall
WaveDistributorModule::needsNextAddedWave(WaveDistributorModule *this,int param_1,bool param_2)

{
  ResilienceTutorialIntroProperties *pRVar1;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  WaveDistributor::ShouldPerformNextDistribution
            (*(undefined4 *)(pRVar1 + 0x58),param_2,*(undefined4 *)(this + 0x18),
             *(undefined4 *)(pRVar1 + 0x5c),*(undefined4 *)(pRVar1 + 0x60));
  return;
}


/* WaveDistributorModule::registerForEvents() */

void __thiscall WaveDistributorModule::registerForEvents(WaveDistributorModule *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onWaveStart);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,WaveType::WaveType,bool,Sexy::CBMemberTranslatorX<WaveDistributorModule,void(WaveDistributorModule::*)(int,WaveType::WaveType,bool)>>
            ((MessageRouter *)puVar1,Message::WaveStarted,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveDistributorModule::addWaveActions(int) */

void __thiscall WaveDistributorModule::addWaveActions(WaveDistributorModule *this,int param_1)

{
  bool bVar1;
  WaveManager *this_00;
  long lVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  RtWeakPtrBase *pRVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (WaveManager *)Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
  if ((this_00 != (WaveManager *)0x0) &&
     (lVar2 = WaveManager::GetCurrentWaveData(this_00), lVar2 != 0)) {
    pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    local_30 = FUN_036cc4e0(*(undefined8 *)(pRVar3 + 0x40));
    local_28 = FUN_036cc530(*(undefined8 *)(pRVar3 + 0x48));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1)
    {
      pRVar4 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,pRVar4);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_38);
      createAction(this,aRStack_20,param_1);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
      std::vector<Sexy::RtWeakPtr<WaveAction>,std::allocator<Sexy::RtWeakPtr<WaveAction>>>::
      push_back((vector<Sexy::RtWeakPtr<WaveAction>,std::allocator<Sexy::RtWeakPtr<WaveAction>>> *)
                (lVar2 + 8),(RtWeakPtr *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WaveDistributorModule::onWaveStart(int, WaveType::WaveType, bool) */

void __thiscall
WaveDistributorModule::onWaveStart
          (WaveDistributorModule *this,int param_1,undefined8 param_3,bool param_4)

{
  char cVar1;
  
  while (cVar1 = needsNextAddedWave(this,param_1,param_4), cVar1 != '\0') {
    *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
    addWaveActions(this,param_1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveDistributorModule::GatherRuntimeResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
WaveDistributorModule::GatherRuntimeResourceRequirements(WaveDistributorModule *this,set *param_1)

{
  bool bVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  RtWeakPtrBase *pRVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  local_20 = FUN_036cc4e0(*(undefined8 *)(pRVar2 + 0x40));
  local_18 = FUN_036cc530(*(undefined8 *)(pRVar2 + 0x48));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,pRVar3);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)(lVar4 + 0x10));
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(lVar4 + 0x10));
    std::set<std::string,std::less<std::string>,std::allocator<std::string>>::
    insert<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>>
              ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,uVar5,
               uVar6);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_28);
    plVar7 = (long *)createAction(this,aRStack_10,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    lVar4 = *plVar7;
    if (*(code **)(lVar4 + 0x90) != WaveAction::AddResourceRequirements) {
      (**(code **)(lVar4 + 0x90))(plVar7,param_1);
      lVar4 = *plVar7;
    }
    (**(code **)(lVar4 + 0x48))(plVar7);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveDistributorModule::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall
WaveDistributorModule::AddResourceRequirements(WaveDistributorModule *this,set *param_1)

{
  bool bVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  RtWeakPtrBase *pRVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::AddResourceRequirements((LevelModule *)this,param_1);
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  local_20 = FUN_036cc4e0(*(undefined8 *)(pRVar2 + 0x40));
  local_18 = FUN_036cc530(*(undefined8 *)(pRVar2 + 0x48));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,pRVar3);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)(lVar4 + 0x10));
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(lVar4 + 0x10));
    std::set<std::string,std::less<std::string>,std::allocator<std::string>>::
    insert<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>>
              ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,uVar5,
               uVar6);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_28);
    plVar7 = (long *)createAction(this,aRStack_10,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    lVar4 = *plVar7;
    if (*(code **)(lVar4 + 0x90) != WaveAction::AddResourceRequirements) {
      (**(code **)(lVar4 + 0x90))(plVar7,param_1);
      lVar4 = *plVar7;
    }
    (**(code **)(lVar4 + 0x48))(plVar7);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

