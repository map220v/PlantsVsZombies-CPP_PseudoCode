// Class: StarChallengeKillZombiesInTime


/* StarChallengeKillZombiesInTime::gameplayEnded() */

void __thiscall StarChallengeKillZombiesInTime::gameplayEnded(StarChallengeKillZombiesInTime *this)

{
  char cVar1;
  
  cVar1 = FUN_04474444(*(undefined4 *)(this + 0x1c));
  if (cVar1 == '\0') {
    return;
  }
  Challenge::Fail();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeKillZombiesInTime::StaticClassInit() */

void StarChallengeKillZombiesInTime::StaticClassInit(void)

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
    std::string::string(asStack_10,"StarChallengeKillZombiesInTime");
    (*pcVar2)(plVar1,asStack_10,FUN_04474da8,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengeKillZombiesInTime::StaticGetClass() */

long * StarChallengeKillZombiesInTime::StaticGetClass(void)

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
  uVar2 = Challenge::StaticGetClass();
  (*pcVar3)(plVar1,"StarChallengeKillZombiesInTime",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeKillZombiesInTime::getChallengeUI() */

ChallengeUI * __thiscall
StarChallengeKillZombiesInTime::getChallengeUI(StarChallengeKillZombiesInTime *this)

{
  bool bVar1;
  RtObject *this_00;
  ChallengeUI *pCVar2;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x38));
  if (bVar1) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
    pCVar2 = Sexy::RtObject::Cast<ChallengeUI>(this_00);
    return pCVar2;
  }
  return (ChallengeUI *)0x0;
}


/* StarChallengeKillZombiesInTime::GetProgressDescription() const */

void StarChallengeKillZombiesInTime::GetProgressDescription(void)

{
  LevelModule *in_x0;
  ResilienceTutorialIntroProperties *pRVar1;
  undefined8 uVar2;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>(in_x0);
  uVar2 = FUN_044744dc(*(undefined8 *)(in_x0 + 0x20),*(undefined8 *)(in_x0 + 0x28));
  Sexy::StrFormat(L"[ %d / %d ]",uVar2,(ulong)*(uint *)(pRVar1 + 0x40));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeKillZombiesInTime::gameplayStarted() */

void __thiscall
StarChallengeKillZombiesInTime::gameplayStarted(StarChallengeKillZombiesInTime *this)

{
  GridItemWaterMist *this_00;
  ResilienceTutorialIntroProperties *pRVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtName::RtName(aRStack_18,L"UIChallengeZombieCombo");
  UIWidget::CreateWidget(aRStack_18,1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x38),(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Sexy::RtName::~RtName(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  nop();
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  GridItemWaterMist::SetType(this_00,*(int *)(pRVar1 + 0x40));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengeKillZombiesInTime::StarChallengeKillZombiesInTime() */

void __thiscall
StarChallengeKillZombiesInTime::StarChallengeKillZombiesInTime(StarChallengeKillZombiesInTime *this)

{
  Challenge::Challenge((Challenge *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0684dbf0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x38));
  return;
}


/* StarChallengeKillZombiesInTime::StaticNew() */

StarChallengeKillZombiesInTime * StarChallengeKillZombiesInTime::StaticNew(void)

{
  StarChallengeKillZombiesInTime *this;
  
  this = ::operator_new(0x40);
  StarChallengeKillZombiesInTime(this);
  return this;
}


/* StarChallengeKillZombiesInTime::~StarChallengeKillZombiesInTime() */

void __thiscall
StarChallengeKillZombiesInTime::~StarChallengeKillZombiesInTime
          (StarChallengeKillZombiesInTime *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0684dbf0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x20));
  Challenge::~Challenge((Challenge *)this);
  return;
}


/* StarChallengeKillZombiesInTime::~StarChallengeKillZombiesInTime() */

void __thiscall
StarChallengeKillZombiesInTime::~StarChallengeKillZombiesInTime
          (StarChallengeKillZombiesInTime *this)

{
  ~StarChallengeKillZombiesInTime(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeKillZombiesInTime::onUpdate() */

void __thiscall StarChallengeKillZombiesInTime::onUpdate(StarChallengeKillZombiesInTime *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  int iVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ToxicWaterPerfumeBottleProjectile *this_01;
  float local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_04474444(*(undefined4 *)(this + 0x1c));
  if (cVar1 != '\0') {
    cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)(this + 0x38));
    if (cVar1 == '\0') {
      this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(this + 0x20);
      pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
      local_2c = (float)PVZ_T();
      local_2c = local_2c - *(float *)(pRVar3 + 0x44);
      local_28 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(this_00);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_18,(__normal_iterator *)&local_28);
      uVar4 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(this_00);
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(this_00);
      local_20 = std::
                 lower_bound<__gnu_cxx::__normal_iterator<float*,std::vector<float,std::allocator<float>>>,float>
                           (uVar4,uVar5,&local_2c);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_20);
      std::vector<float,std::allocator<float>>::erase
                ((vector<float,std::allocator<float>> *)this_00,local_18,local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
      nop();
      iVar2 = FUN_044744dc(*(undefined8 *)(this + 0x20),*(undefined8 *)(this + 0x28));
      ToxicWaterPerfumeBottleProjectile::SetType(this_01,iVar2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeKillZombiesInTime::registerForEvents() */

void __thiscall
StarChallengeKillZombiesInTime::registerForEvents(StarChallengeKillZombiesInTime *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Challenge::registerForEvents((Challenge *)this);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayStarted);
  Sexy::Delegate0::
  Delegate0<StarChallengeKillZombiesInTime,void(StarChallengeKillZombiesInTime::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayEnded);
  Sexy::Delegate0::
  Delegate0<StarChallengeKillZombiesInTime,void(StarChallengeKillZombiesInTime::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameplayWinConditionMet,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::
  Delegate0<StarChallengeKillZombiesInTime,void(StarChallengeKillZombiesInTime::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieKilled);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<StarChallengeKillZombiesInTime,void(StarChallengeKillZombiesInTime::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeKillZombiesInTime::onZombieKilled(Zombie*, DamageInfo const*) */

void StarChallengeKillZombiesInTime::onZombieKilled(Zombie *param_1,DamageInfo *param_2)

{
  char cVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  ulong uVar3;
  char *pcVar4;
  ToxicWaterPerfumeBottleProjectile *this;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_04474444(*(undefined4 *)(param_1 + 0x1c));
  if ((cVar1 != '\0') && (cVar1 = Zombie::IsIZombie((Zombie *)param_2), cVar1 == '\0')) {
    local_c = (float)PVZ_T();
    std::vector<float,std::allocator<float>>::push_back
              ((vector<float,std::allocator<float>> *)(param_1 + 0x20),&local_c);
    pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)param_1);
    uVar3 = FUN_044744dc(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
    if ((ulong)(long)*(int *)(pRVar2 + 0x40) <= uVar3) {
      pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar4,"Play_UI_Game_Objective_Success_Flower");
      Challenge::Complete((Challenge *)param_1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x38));
      nop();
      ChallengeUI::SetSuccess();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x38));
      nop();
      pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)param_1);
      ToxicWaterPerfumeBottleProjectile::SetType(this,*(int *)(pRVar2 + 0x40));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

