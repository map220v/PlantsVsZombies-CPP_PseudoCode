// Class: HeianWindModule


/* HeianWindModule::onLoadComplete() */

void HeianWindModule::onLoadComplete(void)

{
  return;
}


/* HeianWindModule::gameplayStarted() */

void HeianWindModule::gameplayStarted(void)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeianWindModule::StaticClassInit() */

void HeianWindModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"HeianWindModule");
    (*pcVar2)(plVar1,asStack_10,FUN_03d319e8,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HeianWindModule::StaticGetClass() */

long * HeianWindModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HeianWindModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeianWindModule::HeianWindModule() */

void __thiscall HeianWindModule::HeianWindModule(HeianWindModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06768220;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  return;
}


/* HeianWindModule::StaticNew() */

HeianWindModule * HeianWindModule::StaticNew(void)

{
  HeianWindModule *this;
  
  this = ::operator_new(0x60);
  HeianWindModule(this);
  return this;
}


/* HeianWindModule::~HeianWindModule() */

void __thiscall HeianWindModule::~HeianWindModule(HeianWindModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06768220;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x40));
  std::vector<WindInfo,std::allocator<WindInfo>>::~vector
            ((vector<WindInfo,std::allocator<WindInfo>> *)(this + 0x18));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* HeianWindModule::~HeianWindModule() */

void __thiscall HeianWindModule::~HeianWindModule(HeianWindModule *this)

{
  ~HeianWindModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeianWindModule::SendWarning() */

void HeianWindModule::SendWarning(void)

{
  ResourceInfo *this;
  AnimationController *pAVar1;
  float fVar2;
  RtMixedPtr aRStack_20 [8];
  RtId aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_
                   ((RtWeakPtr *)(*(long *)(gLawnApp + 0x9f0) + 0x898));
  fVar2 = (float)FUN_03d308b4(*(undefined4 *)(this + 0x10));
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_20);
  std::string::string(asStack_10,"onShowWindWarning");
  pAVar1 = (AnimationController *)TimeEvent::Create(aRStack_18,asStack_10);
  AnimationMgr::Add((AnimationMgr *)this,pAVar1,fVar2);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtId::~RtId(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeianWindModule::SetState(HeianWindState) */

void __thiscall HeianWindModule::SetState(HeianWindModule *this,int param_2)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  HeianWindSubsystem *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x34) != param_2) {
    *(int *)(this + 0x34) = param_2;
    if (param_2 == 1) {
      SendWarning();
    }
    else if (param_2 == 2) {
      local_18 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(this + 0x40));
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x40));
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
            bVar2) {
        piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        iVar1 = *piVar3;
        if (iVar1 != -1) {
          this_00 = Board::GetGameSubSystem<HeianWindSubsystem>(*(Board **)(gLawnApp + 0x9f0));
          HeianWindSubsystem::GenerateTornado(this_00,iVar1);
        }
        eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                  ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_18);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeianWindModule::FindWaveWindInfo(int) */

void __thiscall HeianWindModule::FindWaveWindInfo(HeianWindModule *this,int param_1)

{
  bool bVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  int local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_24[0] = param_1;
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  uVar3 = FUN_03d31080(*(undefined8 *)(pRVar2 + 0x40));
  uVar4 = FUN_03d310d0(*(undefined8 *)(pRVar2 + 0x48));
  local_18 = FUN_03d32260(uVar3,uVar4,local_24);
  local_10 = FUN_03d310d0(*(undefined8 *)(pRVar2 + 0x48));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    puVar5 = (undefined *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
  }
  else {
    puVar5 = &DAT_06ad6958;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeianWindModule::onShowWindWarning() */

void HeianWindModule::onShowWindWarning(void)

{
  char *pcVar1;
  Board *pBVar2;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  FUN_05478178(auStack_10,L"[WARNING_HEIAN_WIND]",auStack_18);
  Board::DisplayAdviceAgain(pBVar2,auStack_10,0x18,0);
  FUN_05476c50(auStack_10);
  nop();
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Game_Wave_Ready_x1");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeianWindModule::updateStates() */

void __thiscall HeianWindModule::updateStates(HeianWindModule *this)

{
  vector<WindInfo,std::allocator<WindInfo>> *this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  undefined4 *puVar7;
  HeianWindSubsystem *pHVar8;
  float fVar9;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar6 = FUN_03d308b8(*(undefined4 *)(this + 0x34));
  if (((iVar6 == 1) && (fVar9 = (float)PVZ_T(), *(float *)(this + 0x58) <= fVar9)) &&
     (fVar9 = (float)PVZ_T(), *(float *)(this + 0x38) < fVar9)) {
    this_00 = (vector<WindInfo,std::allocator<WindInfo>> *)(this + 0x18);
    cVar5 = std::vector<WindInfo,std::allocator<WindInfo>>::empty(this_00);
    if (cVar5 == '\0') {
      puVar7 = (undefined4 *)FUN_03d30afc(*(undefined8 *)(this + 0x18),0);
      uVar1 = puVar7[2];
      uVar2 = *puVar7;
      uVar3 = puVar7[1];
      uVar4 = puVar7[3];
      HeianWindRecord::HeianWindRecord((HeianWindRecord *)&local_20);
      local_20 = uVar3;
      uStack_1c = uVar1;
      local_18 = uVar2;
      local_14 = uVar4;
      pHVar8 = Board::GetGameSubSystem<HeianWindSubsystem>(*(Board **)(gLawnApp + 0x9f0));
      local_40 = local_10;
      local_50 = CONCAT44(uStack_1c,local_20);
      uStack_48 = CONCAT44(local_14,local_18);
      HeianWindSubsystem::Generate(pHVar8,&local_50);
      local_30 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)this_00);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_28,(__normal_iterator *)&local_30);
      std::vector<WindInfo,std::allocator<WindInfo>>::erase(this_00,local_28);
      fVar9 = (float)PVZ_T();
      *(float *)(this + 0x38) = fVar9 + *(float *)(this + 0x30);
    }
    else {
      SetState(this,2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeianWindModule::onUpdate() */

void __thiscall HeianWindModule::onUpdate(HeianWindModule *this)

{
  vector<WindInfo,std::allocator<WindInfo>> *this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  undefined4 *puVar7;
  HeianWindSubsystem *pHVar8;
  float fVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  iVar6 = FUN_03d308b8(*(undefined4 *)(this + 0x34));
  if (((iVar6 == 1) && (fVar9 = (float)PVZ_T(), *(float *)(this + 0x58) <= fVar9)) &&
     (fVar9 = (float)PVZ_T(), *(float *)(this + 0x38) < fVar9)) {
    this_00 = (vector<WindInfo,std::allocator<WindInfo>> *)(this + 0x18);
    cVar5 = std::vector<WindInfo,std::allocator<WindInfo>>::empty(this_00);
    if (cVar5 == '\0') {
      puVar7 = (undefined4 *)FUN_03d30afc(*(undefined8 *)(this + 0x18),0);
      uVar1 = puVar7[2];
      uVar2 = *puVar7;
      uVar3 = puVar7[1];
      uVar4 = puVar7[3];
      HeianWindRecord::HeianWindRecord((HeianWindRecord *)&uStack_20);
      uStack_20 = uVar3;
      uStack_1c = uVar1;
      uStack_18 = uVar2;
      uStack_14 = uVar4;
      pHVar8 = Board::GetGameSubSystem<HeianWindSubsystem>(*(Board **)(gLawnApp + 0x9f0));
      uStack_40 = uStack_10;
      uStack_50 = CONCAT44(uStack_1c,uStack_20);
      uStack_48 = CONCAT44(uStack_14,uStack_18);
      HeianWindSubsystem::Generate(pHVar8,&uStack_50);
      uStack_30 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)this_00);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&uStack_28,(__normal_iterator *)&uStack_30);
      std::vector<WindInfo,std::allocator<WindInfo>>::erase(this_00,uStack_28);
      fVar9 = (float)PVZ_T();
      *(float *)(this + 0x38) = fVar9 + *(float *)(this + 0x30);
    }
    else {
      SetState(this,2);
    }
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeianWindModule::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall HeianWindModule::AddResourceRequirements(HeianWindModule *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::AddResourceRequirements((LevelModule *)this,param_1);
  std::string::string(asStack_10,"HeianWind");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeianWindModule::registerForEvents() */

void __thiscall HeianWindModule::registerForEvents(HeianWindModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  CBMemberTranslatorX aCStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLoadComplete);
  Sexy::Delegate0::Delegate0<HeianWindModule,void(HeianWindModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayStarted);
  Sexy::Delegate0::Delegate0<HeianWindModule,void(HeianWindModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieSpawned);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<HeianWindModule,void(HeianWindModule::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieAddedToBoard,&local_90);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<HeianWindModule,void(HeianWindModule::*)()>(aDStack_38,aCStack_68);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeianWindModule::setupWinds(WaveWindInfo const&) */

void __thiscall HeianWindModule::setupWinds(HeianWindModule *this,WaveWindInfo *param_1)

{
  vector<WindInfo,std::allocator<WindInfo>> *this_00;
  bool bVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  this_00 = (vector<WindInfo,std::allocator<WindInfo>> *)(this + 0x18);
  local_8 = ___stack_chk_guard;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x40));
  std::vector<WindInfo,std::allocator<WindInfo>>::clear(this_00);
  std::vector<WindInfo,std::allocator<WindInfo>>::operator=(this_00,(vector *)(param_1 + 8));
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 4);
  fVar3 = (float)PVZ_T();
  *(float *)(this + 0x58) = fVar3 + *(float *)(param_1 + 0x20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this_00);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    local_18 = *puVar2;
    uStack_10 = puVar2[1];
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)(this + 0x40),(int *)&local_18);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_28);
  }
  SetState(this,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeianWindModule::onZombieSpawned(Zombie*) */

void HeianWindModule::onZombieSpawned(Zombie *param_1)

{
  char cVar1;
  int iVar2;
  WaveWindInfo *pWVar3;
  int local_30 [10];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)param_1);
  iVar2 = Board::GetCurrentWave(*(Board **)(gLawnApp + 0x9f0));
  pWVar3 = (WaveWindInfo *)FindWaveWindInfo((HeianWindModule *)param_1,iVar2);
  WaveWindInfo::WaveWindInfo((WaveWindInfo *)local_30,pWVar3);
  if ((-1 < local_30[0]) &&
     (cVar1 = std::vector<WindInfo,std::allocator<WindInfo>>::empty
                        ((vector<WindInfo,std::allocator<WindInfo>> *)(param_1 + 0x18)),
     cVar1 != '\0')) {
    setupWinds((HeianWindModule *)param_1,(WaveWindInfo *)local_30);
  }
  WaveWindInfo::~WaveWindInfo((WaveWindInfo *)local_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

