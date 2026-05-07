// Class: WaveManagerModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveManagerModule::StaticClassInit() */

void WaveManagerModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"WaveManagerModule");
    (*pcVar2)(plVar1,asStack_10,FUN_0492845c,0x1400,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WaveManagerModule::StaticGetClass() */

long * WaveManagerModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WaveManagerModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WaveManagerModule::IsDone() const */

void __thiscall WaveManagerModule::IsDone(WaveManagerModule *this)

{
  WaveManager::IsDone((WaveManager *)(this + 0x18));
  return;
}


/* WaveManagerModule::GetDifficultyProps() */

undefined8 WaveManagerModule::GetDifficultyProps(void)

{
  short sVar1;
  LevelModule *in_x0;
  ResilienceTutorialIntroProperties *pRVar2;
  undefined8 uVar3;
  wchar16 *extraout_x1;
  LineBreakCategory *in_x2;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  undefined1 auVar4 [16];
  
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>(in_x0);
  sVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    ((wchar16 *)pRVar2,extraout_x1,in_x2,in_x3,in_x4);
  auVar4 = FUN_049267d0(*(undefined8 *)(pRVar2 + 0x50),*(undefined8 *)(pRVar2 + 0x58));
  if ((wchar16 *)(long)sVar1 < auVar4._0_8_) {
    sVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (auVar4._0_8_,auVar4._8_8_,in_x2,in_x3,in_x4);
    uVar3 = FUN_049267f8(*(undefined8 *)(pRVar2 + 0x50),(long)sVar1);
    return uVar3;
  }
  return 0;
}


/* WaveManagerModule::onGameplayStarted() */

void __thiscall WaveManagerModule::onGameplayStarted(WaveManagerModule *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ResilienceTutorialIntroProperties *pRVar4;
  long lVar5;
  float fVar6;
  
  LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  pRVar4 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (pRVar4[0x48] == (ResilienceTutorialIntroProperties)0x0) {
    lVar5 = Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
    if ((lVar5 == 0) || (iVar3 = FUN_04926764(*(undefined4 *)(lVar5 + 0x19c)), iVar3 != 1)) {
      fVar6 = (float)PVZ_T();
      lVar5 = WaveManager::GetProps((WaveManager *)(this + 0x18));
      iVar3 = BoardHelpers::ApplyLevelOverride_ZombieCountdownFirstWaveSecs
                        ((int)*(float *)(lVar5 + 0x58));
      fVar6 = (float)iVar3 + fVar6;
    }
    else {
      fVar6 = (float)PVZ_T();
      lVar5 = WaveManager::GetProps((WaveManager *)(this + 0x18));
      fVar6 = fVar6 + *(float *)(lVar5 + 0x5c);
    }
    WaveManager::SetNextWaveTime((WaveManager *)(this + 0x18),fVar6);
    WaveManager::SetPause((WaveManager *)(this + 0x18),false);
  }
  lVar5 = WaveManager::GetProps((WaveManager *)(this + 0x18));
  iVar3 = *(int *)(lVar5 + 0x28);
  if (iVar3 < 1) {
    MessageRouter::Broadcast<int,int>
              ((MessageRouter *)gMessageRouter,Message::ProgressMeterSetFlagCount,0);
    return;
  }
  iVar2 = WaveManager::GetWaveCount((WaveManager *)(this + 0x18));
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = iVar2 / iVar3;
  }
  MessageRouter::Broadcast<int,int>
            ((MessageRouter *)gMessageRouter,Message::ProgressMeterSetFlagCount,iVar1);
  return;
}


/* WaveManagerModule::WaveManagerModule() */

void __thiscall WaveManagerModule::WaveManagerModule(WaveManagerModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_069110b0;
  WaveManager::WaveManager((WaveManager *)(this + 0x18));
  return;
}


/* WaveManagerModule::StaticNew() */

WaveManagerModule * WaveManagerModule::StaticNew(void)

{
  WaveManagerModule *this;
  
  this = ::operator_new(0x1400);
  WaveManagerModule(this);
  return this;
}


/* WaveManagerModule::onUpdate() */

void __thiscall WaveManagerModule::onUpdate(WaveManagerModule *this)

{
  WaveManager::Update((WaveManager *)(this + 0x18));
  return;
}


/* WaveManagerModule::~WaveManagerModule() */

void __thiscall WaveManagerModule::~WaveManagerModule(WaveManagerModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_069110b0;
  WaveManager::~WaveManager((WaveManager *)(this + 0x18));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* WaveManagerModule::~WaveManagerModule() */

void __thiscall WaveManagerModule::~WaveManagerModule(WaveManagerModule *this)

{
  ~WaveManagerModule(this);
  AK::FreeHook(this);
  return;
}


/* WaveManagerModule::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall WaveManagerModule::AddResourceRequirements(WaveManagerModule *this,set *param_1)

{
  LevelModule::AddResourceRequirements((LevelModule *)this,param_1);
  WaveManager::AddResourceRequirements((WaveManager *)(this + 0x18),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveManagerModule::registerForEvents() */

void __thiscall WaveManagerModule::registerForEvents(WaveManagerModule *this)

{
  char cVar1;
  LevelModuleManager *pLVar2;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayStarted);
  Sexy::Delegate0::Delegate0<WaveManagerModule,void(WaveManagerModule::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<WaveManagerModule,void(WaveManagerModule::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  cVar1 = NewPVPUtils::IsPlayingNewPVP();
  if (cVar1 == '\0') {
    pLVar2 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,IsDone);
    Sexy::Delegate0wRet<bool>::Delegate0wRet<WaveManagerModule,bool(WaveManagerModule::*)()const>
              ((Delegate0wRet<bool> *)aDStack_38,aCStack_50);
    LevelModuleManager::RegisterWinCondition(pLVar2,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveManagerModule::injectDynamicZombies(WaveManagerProperties*) */

void __thiscall
WaveManagerModule::injectDynamicZombies(WaveManagerModule *this,WaveManagerProperties *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  RtWeakPtr *pRVar6;
  undefined4 *puVar7;
  int *piVar8;
  ulong uVar9;
  undefined8 local_80;
  ResourceInfo *local_78;
  undefined4 local_70;
  int local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  vector<DrZomibeLevelData,std::allocator<DrZomibeLevelData>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar2 = (undefined4 *)GetDifficultyProps();
  if (puVar2 != (undefined4 *)0x0) {
    RandomJitteredWaveConfig::RandomJitteredWaveConfig((RandomJitteredWaveConfig *)&local_50);
    local_50 = puVar2[2];
    if (*(int *)(param_1 + 0x2c) == 0) {
      local_4c = FUN_04926794(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
    }
    else {
      local_68 = FUN_04926794(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
      piVar8 = eastl::min_alt<int>((int *)(param_1 + 0x2c),&local_68);
      local_4c = *piVar8;
    }
    local_44 = *puVar2;
    local_40 = puVar2[1];
    local_48 = *(undefined4 *)(param_1 + 0x28);
    uVar9 = 0;
    uVar3 = operator|(2,8);
    operator|(uVar3,0x10);
    local_3c = CalcRandomSeed();
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68);
    lVar4 = RandomJitteredWaveConfig::EnsureInstructionForWave
                      ((RandomJitteredWaveConfig *)&local_50,0);
    while( true ) {
      uVar3 = *(undefined8 *)(puVar2 + 4);
      uVar5 = FUN_04926800(uVar3,*(undefined8 *)(puVar2 + 6));
      if (uVar5 <= uVar9) break;
      pRVar6 = (RtWeakPtr *)FUN_0492680c(uVar3,uVar9);
      local_78 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar6);
      std::vector<ZombieType_const*,std::allocator<ZombieType_const*>>::push_back
                ((vector<ZombieType_const*,std::allocator<ZombieType_const*>> *)(lVar4 + 8),
                 (ZombieType **)&local_78);
      GridItemPoolEntry::GridItemPoolEntry((GridItemPoolEntry *)&local_78);
      pRVar6 = (RtWeakPtr *)FUN_0492680c(*(undefined8 *)(puVar2 + 4),uVar9);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)&local_78,pRVar6);
      uVar3 = *(undefined8 *)(puVar2 + 10);
      uVar5 = FUN_0492676c(uVar3,*(undefined8 *)(puVar2 + 0xc));
      if (uVar9 < uVar5) {
        puVar7 = (undefined4 *)FUN_04926778(uVar3,uVar9);
        local_70 = *puVar7;
        std::vector<DrZomibeLevelData,std::allocator<DrZomibeLevelData>>::push_back
                  ((vector<DrZomibeLevelData,std::allocator<DrZomibeLevelData>> *)&local_68,
                   (DrZomibeLevelData *)&local_78);
      }
      uVar9 = uVar9 + 1;
      std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_78);
    }
    lVar4 = FUN_04926814(CONCAT44(uStack_64,local_68),local_60);
    if (lVar4 != 0) {
      std::vector<DrZomibeLevelData,std::allocator<DrZomibeLevelData>>::operator=
                (avStack_20,(vector *)&local_68);
    }
    local_80 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(param_1 + 0x38));
    local_78 = (ResourceInfo *)
               std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 0x38));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_80,(__normal_iterator *)&local_78), bVar1)
    {
      piVar8 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
      lVar4 = RandomJitteredWaveConfig::EnsureInstructionForWave
                        ((RandomJitteredWaveConfig *)&local_50,*piVar8);
      *(undefined1 *)(lVar4 + 0x3c) = 1;
      eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_80);
    }
    WaveHelpers::GenerateRandomJitteredWaves((RandomJitteredWaveConfig *)&local_50,param_1);
    std::vector<DrZomibeLevelData,std::allocator<DrZomibeLevelData>>::~vector
              ((vector<DrZomibeLevelData,std::allocator<DrZomibeLevelData>> *)&local_68);
    RandomJitteredWaveConfig::~RandomJitteredWaveConfig((RandomJitteredWaveConfig *)&local_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveManagerModule::postInitialize() */

void WaveManagerModule::postInitialize(void)

{
  RtWeakPtr *this;
  char cVar1;
  bool bVar2;
  int iVar3;
  LevelModule *in_x0;
  ResilienceTutorialIntroProperties *pRVar4;
  WaveManagerProperties *extraout_x0;
  long extraout_x0_00;
  RtWeakPtrBase *pRVar5;
  WaveManagerProperties *extraout_x0_01;
  long extraout_x0_02;
  undefined8 uVar6;
  WaveManagerProperties *extraout_x0_03;
  WaveManagerProperties *pWVar7;
  wchar16 *pwVar8;
  ulong uVar9;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar10;
  long lVar11;
  undefined8 *puVar12;
  RtObject *pRVar13;
  undefined8 uVar14;
  long extraout_x0_04;
  ResourceInfo *pRVar15;
  __normal_iterator *p_Var16;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  ulong uVar17;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar4 = LevelModule::getProps<ResilienceTutorialIntroProperties>(in_x0);
  cVar1 = PVZ1ModeUtils::IsPlayingPVZ1Level();
  if (cVar1 == '\0') {
    cVar1 = RiftUtils::IsPlayingZombossLevel();
    if ((cVar1 == '\0') ||
       (cVar1 = std::
                vector<Sexy::RtWeakPtr<WaveManagerProperties>,std::allocator<Sexy::RtWeakPtr<WaveManagerProperties>>>
                ::empty((vector<Sexy::RtWeakPtr<WaveManagerProperties>,std::allocator<Sexy::RtWeakPtr<WaveManagerProperties>>>
                         *)(pRVar4 + 0x68)), cVar1 != '\0')) {
      this = (RtWeakPtr *)(pRVar4 + 0x40);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
      if (bVar2) {
        uVar6 = WaveManagerProperties::StaticGetClass();
        GameObject::Create(uVar6,0x35);
        nop();
        pWVar7 = (WaveManagerProperties *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
        WaveManagerProperties::ShallowCopyInto(pWVar7,extraout_x0);
        injectDynamicZombies((WaveManagerModule *)in_x0,extraout_x0);
        pwVar8 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
        p_Var16 = (__normal_iterator *)&local_18;
        std::string::string((string *)&local_10,"HighlightDynamicZombies");
        cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                          (pwVar8,(wchar16 *)&local_10,(LineBreakCategory *)p_Var16,in_x3,in_x4);
        std::string::~string((string *)&local_10);
        nop();
        if (cVar1 != '\0') {
          uVar17 = 0;
          while( true ) {
            uVar6 = *(undefined8 *)(extraout_x0 + 0x10);
            uVar9 = FUN_04926794(uVar6,*(undefined8 *)(extraout_x0 + 0x18));
            if (uVar9 <= uVar17) break;
            pvVar10 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)FUN_049267c4(uVar6,uVar17);
            lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
            ;
            puVar12 = (undefined8 *)FUN_049267c4(*(undefined8 *)(lVar11 + 0x10),uVar17);
            local_28 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::begin(pvVar10);
            local_20 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::end(pvVar10);
            while (bVar2 = __gnu_cxx::operator!=
                                     ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20)
                  , bVar2) {
              pRVar5 = (RtWeakPtrBase *)
                       std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,pRVar5);
              bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_30);
              if (bVar2) {
                pRVar13 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
                bVar2 = Sexy::RtObject::IsA<SpawnZombiesJitteredWaveActionProps>(pRVar13);
                if (bVar2) {
                  uVar6 = FUN_049286b4(*puVar12);
                  uVar14 = FUN_04928704(puVar12[1]);
                  local_18 = std::
                             find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<WaveActionProperties>const*,std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>>,Sexy::RtWeakPtr<WaveActionProperties>>
                                       (uVar6,uVar14,aRStack_30);
                  local_10 = FUN_04928704(puVar12[1]);
                  bVar2 = __gnu_cxx::operator==
                                    ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
                  if (bVar2) {
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
                    nop();
                    *(undefined1 *)(extraout_x0_00 + 0x78) = 1;
                  }
                }
              }
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
              eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                        ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
            }
            uVar17 = uVar17 + 1;
          }
        }
        MessageRouter::Broadcast<WaveManagerProperties*,WaveManagerProperties*>
                  ((MessageRouter *)gMessageRouter,Message::PreWaveInitialization,extraout_x0);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)&local_18);
        lVar11 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
        pRVar15 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar11 + 0xa0));
        lVar11 = GetDifficultyProps();
        WaveManager::Initialize
                  ((WaveManager *)(in_x0 + 0x18),(string *)&local_10,pRVar15,lVar11 != 0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      }
      goto LAB_04931ee0;
    }
    iVar3 = RiftUtils::GetDifficultyForNextLevel();
    pRVar5 = (RtWeakPtrBase *)FUN_0492678c(*(undefined8 *)(pRVar4 + 0x68),(long)iVar3);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,pRVar5);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar2) {
      uVar6 = WaveManagerProperties::StaticGetClass();
      GameObject::Create(uVar6,0x35);
      nop();
      pWVar7 = (WaveManagerProperties *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38)
      ;
      WaveManagerProperties::ShallowCopyInto(pWVar7,extraout_x0_01);
      injectDynamicZombies((WaveManagerModule *)in_x0,extraout_x0_01);
      pwVar8 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
      p_Var16 = (__normal_iterator *)&local_18;
      std::string::string((string *)&local_10,"HighlightDynamicZombies");
      cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                        (pwVar8,(wchar16 *)&local_10,(LineBreakCategory *)p_Var16,in_x3,in_x4);
      std::string::~string((string *)&local_10);
      nop();
      pWVar7 = extraout_x0_01;
      if (cVar1 != '\0') {
        uVar17 = 0;
        while( true ) {
          uVar6 = *(undefined8 *)(extraout_x0_01 + 0x10);
          uVar9 = FUN_04926794(uVar6,*(undefined8 *)(extraout_x0_01 + 0x18));
          if (uVar9 <= uVar17) break;
          pvVar10 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)FUN_049267c4(uVar6,uVar17);
          lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
          puVar12 = (undefined8 *)FUN_049267c4(*(undefined8 *)(lVar11 + 0x10),uVar17);
          local_28 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin(pvVar10);
          local_20 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end(pvVar10);
          while (bVar2 = __gnu_cxx::operator!=
                                   ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20),
                bVar2) {
            pRVar5 = (RtWeakPtrBase *)
                     std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,pRVar5);
            bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_30);
            if (bVar2) {
              pRVar13 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
              bVar2 = Sexy::RtObject::IsA<SpawnZombiesJitteredWaveActionProps>(pRVar13);
              if (bVar2) {
                uVar6 = FUN_049286b4(*puVar12);
                uVar14 = FUN_04928704(puVar12[1]);
                local_18 = std::
                           find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<WaveActionProperties>const*,std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>>,Sexy::RtWeakPtr<WaveActionProperties>>
                                     (uVar6,uVar14,aRStack_30);
                local_10 = FUN_04928704(puVar12[1]);
                bVar2 = __gnu_cxx::operator==
                                  ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
                if (bVar2) {
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
                  nop();
                  *(undefined1 *)(extraout_x0_02 + 0x78) = 1;
                }
              }
            }
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
            eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                      ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
          }
          uVar17 = uVar17 + 1;
        }
      }
      goto LAB_04932534;
    }
  }
  else {
    cVar1 = std::
            vector<Sexy::RtWeakPtr<WaveManagerProperties>,std::allocator<Sexy::RtWeakPtr<WaveManagerProperties>>>
            ::empty((vector<Sexy::RtWeakPtr<WaveManagerProperties>,std::allocator<Sexy::RtWeakPtr<WaveManagerProperties>>>
                     *)(pRVar4 + 0x68));
    if (cVar1 != '\0') goto LAB_04931ee0;
    iVar3 = PVZ1ModeUtils::GetCurrentWeekIndex();
    pRVar5 = (RtWeakPtrBase *)FUN_0492678c(*(undefined8 *)(pRVar4 + 0x68),(long)iVar3);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,pRVar5);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar2) {
      uVar6 = WaveManagerProperties::StaticGetClass();
      GameObject::Create(uVar6,0x35);
      nop();
      pWVar7 = (WaveManagerProperties *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38)
      ;
      WaveManagerProperties::ShallowCopyInto(pWVar7,extraout_x0_03);
      injectDynamicZombies((WaveManagerModule *)in_x0,extraout_x0_03);
      pwVar8 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
      p_Var16 = (__normal_iterator *)&local_18;
      std::string::string((string *)&local_10,"HighlightDynamicZombies");
      cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                        (pwVar8,(wchar16 *)&local_10,(LineBreakCategory *)p_Var16,in_x3,in_x4);
      std::string::~string((string *)&local_10);
      nop();
      pWVar7 = extraout_x0_03;
      if (cVar1 != '\0') {
        uVar17 = 0;
        while( true ) {
          uVar6 = *(undefined8 *)(extraout_x0_03 + 0x10);
          uVar9 = FUN_04926794(uVar6,*(undefined8 *)(extraout_x0_03 + 0x18));
          if (uVar9 <= uVar17) break;
          pvVar10 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)FUN_049267c4(uVar6,uVar17);
          lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
          puVar12 = (undefined8 *)FUN_049267c4(*(undefined8 *)(lVar11 + 0x10),uVar17);
          local_28 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin(pvVar10);
          local_20 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end(pvVar10);
          while (bVar2 = __gnu_cxx::operator!=
                                   ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20),
                bVar2) {
            pRVar5 = (RtWeakPtrBase *)
                     std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,pRVar5);
            bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_30);
            if (bVar2) {
              pRVar13 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
              bVar2 = Sexy::RtObject::IsA<SpawnZombiesJitteredWaveActionProps>(pRVar13);
              if (bVar2) {
                uVar6 = FUN_049286b4(*puVar12);
                uVar14 = FUN_04928704(puVar12[1]);
                local_18 = std::
                           find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<WaveActionProperties>const*,std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>>,Sexy::RtWeakPtr<WaveActionProperties>>
                                     (uVar6,uVar14,aRStack_30);
                local_10 = FUN_04928704(puVar12[1]);
                bVar2 = __gnu_cxx::operator==
                                  ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
                if (bVar2) {
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
                  nop();
                  *(undefined1 *)(extraout_x0_04 + 0x78) = 1;
                }
              }
            }
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
            eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                      ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
          }
          uVar17 = uVar17 + 1;
        }
      }
LAB_04932534:
      MessageRouter::Broadcast<WaveManagerProperties*,WaveManagerProperties*>
                ((MessageRouter *)gMessageRouter,Message::PreWaveInitialization,pWVar7);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)&local_18);
      lVar11 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
      pRVar15 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar11 + 0xa0));
      lVar11 = GetDifficultyProps();
      WaveManager::Initialize
                ((WaveManager *)(in_x0 + 0x18),(RtWeakPtr<Sexy::SoundResource> *)&local_10,pRVar15,
                 lVar11 != 0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
LAB_04931ee0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

