// Class: PickupCollectableTutorialModule


/* PickupCollectableTutorialModule::onEndLevel() */

void __thiscall PickupCollectableTutorialModule::onEndLevel(PickupCollectableTutorialModule *this)

{
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  return;
}


/* PickupCollectableTutorialModule::initializeModule() */

void __thiscall
PickupCollectableTutorialModule::initializeModule(PickupCollectableTutorialModule *this)

{
  undefined4 uVar1;
  
  this[0x18] = (PickupCollectableTutorialModule)0x0;
  this[0x28] = (PickupCollectableTutorialModule)0x0;
  this[0x29] = (PickupCollectableTutorialModule)0x0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x3c) = uVar1;
  *(undefined4 *)(this + 0x38) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PickupCollectableTutorialModule::StaticClassInit() */

void PickupCollectableTutorialModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"PickupCollectableTutorialModule");
    (*pcVar2)(plVar1,asStack_10,FUN_03f1616c,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PickupCollectableTutorialModule::StaticGetClass() */

long * PickupCollectableTutorialModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PickupCollectableTutorialModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PickupCollectableTutorialModule::continueLevel() */

void PickupCollectableTutorialModule::continueLevel(void)

{
  Board::SetSoftPause(*(Board **)(gLawnApp + 0x9f0),false);
  return;
}


/* PickupCollectableTutorialModule::~PickupCollectableTutorialModule() */

void __thiscall
PickupCollectableTutorialModule::~PickupCollectableTutorialModule
          (PickupCollectableTutorialModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_067968d0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* PickupCollectableTutorialModule::~PickupCollectableTutorialModule() */

void __thiscall
PickupCollectableTutorialModule::~PickupCollectableTutorialModule
          (PickupCollectableTutorialModule *this)

{
  ~PickupCollectableTutorialModule(this);
  AK::FreeHook(this);
  return;
}


/* PickupCollectableTutorialModule::PickupCollectableTutorialModule() */

void __thiscall
PickupCollectableTutorialModule::PickupCollectableTutorialModule
          (PickupCollectableTutorialModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_067968d0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x20));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x30));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  return;
}


/* PickupCollectableTutorialModule::StaticNew() */

PickupCollectableTutorialModule * PickupCollectableTutorialModule::StaticNew(void)

{
  PickupCollectableTutorialModule *this;
  
  this = ::operator_new(0x48);
  PickupCollectableTutorialModule(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PickupCollectableTutorialModule::onCoinClicked(Collectable*) */

void PickupCollectableTutorialModule::onCoinClicked(Collectable *param_1)

{
  char cVar1;
  long *plVar2;
  RtWeakPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1[0x28] != (Collectable)0x0) {
    ToolPacketData::GetProps();
    cVar1 = Sexy::RtWeakPtrBase::operator==(aRStack_10,(RtWeakPtrBase *)(param_1 + 0x30));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (cVar1 != '\0') {
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(param_1 + 0x40));
      if (cVar1 != '\0') {
        plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x40));
        (**(code **)(*plVar2 + 0x48))();
      }
      ProfileUtils::TriggerTutorialFunnelEventForCurrentProfile(0x18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PickupCollectableTutorialModule::onZombieSpawned(Zombie*) */

void __thiscall
PickupCollectableTutorialModule::onZombieSpawned
          (PickupCollectableTutorialModule *this,Zombie *param_1)

{
  bool bVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar3;
  WaveGenerator *this_01;
  WaveManager *this_02;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x18] == (PickupCollectableTutorialModule)0x0) {
    pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(param_1);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    bVar1 = std::operator!=((string *)(lVar3 + 8),(string *)(pRVar2 + 0x50));
    if (!bVar1) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x20),(RtWeakPtrBase *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      this[0x18] = (PickupCollectableTutorialModule)0x1;
      this_01 = (WaveGenerator *)Board::GetWaveGenerator(*(Board **)(gLawnApp + 0x9f0));
      if (this_01 != (WaveGenerator *)0x0) {
        WaveGenerator::PauseNextWave(this_01,true);
      }
      this_02 = (WaveManager *)Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
      if (this_02 != (WaveManager *)0x0) {
        WaveManager::SetPause(this_02,true);
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
/* PickupCollectableTutorialModule::onCoinBanked(Collectable*) */

void PickupCollectableTutorialModule::onCoinBanked(Collectable *param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  ResilienceTutorialIntroProperties *pRVar4;
  long *plVar5;
  string *extraout_x1;
  Board *pBVar6;
  undefined4 uVar7;
  float fVar8;
  RtWeakPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1[0x29] == (Collectable)0x0) {
    ToolPacketData::GetProps();
    cVar2 = Sexy::RtWeakPtrBase::operator==(aRStack_10,(RtWeakPtrBase *)(param_1 + 0x30));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (cVar2 != '\0') {
      param_1[0x29] = (Collectable)0x1;
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_10);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(param_1 + 0x30),(RtWeakPtr *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0x40));
      if (bVar3) {
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x40));
        (**(code **)(*plVar5 + 0x48))();
      }
      Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
      uVar7 = PVZ_EOT();
      lVar1 = gLawnApp;
      *(undefined4 *)(param_1 + 0x38) = uVar7;
      pBVar6 = *(Board **)(lVar1 + 0x9f0);
      pRVar4 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)param_1);
      Sexy::UTF8StringToWString((Sexy *)(pRVar4 + 0x48),extraout_x1);
      Board::DisplayAdvice(pBVar6,aRStack_10,7,0);
      FUN_05476c50(aRStack_10);
      fVar8 = (float)PVZ_T();
      *(float *)(param_1 + 0x3c) = fVar8 + 4.0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PickupCollectableTutorialModule::onUpdate() */

void __thiscall PickupCollectableTutorialModule::onUpdate(PickupCollectableTutorialModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  string *extraout_x1;
  Board *pBVar2;
  float fVar3;
  undefined4 uVar4;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar3 = (float)PVZ_T();
  if (*(float *)(this + 0x38) < fVar3) {
    pBVar2 = *(Board **)(gLawnApp + 0x9f0);
    pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    Sexy::UTF8StringToWString((Sexy *)(pRVar1 + 0x40),extraout_x1);
    Board::DisplayAdviceAgain(pBVar2,auStack_10,8,0);
    FUN_05476c50(auStack_10);
    uVar4 = PVZ_EOT();
    *(undefined4 *)(this + 0x38) = uVar4;
  }
  fVar3 = (float)PVZ_T();
  if (*(float *)(this + 0x3c) < fVar3) {
    continueLevel();
    uVar4 = PVZ_EOT();
    *(undefined4 *)(this + 0x3c) = uVar4;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PickupCollectableTutorialModule::startFirstCoinTutorial(Zombie*) */

void __thiscall
PickupCollectableTutorialModule::startFirstCoinTutorial
          (PickupCollectableTutorialModule *this,Zombie *param_1)

{
  bool bVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  undefined8 uVar3;
  Collectable *this_00;
  Effect_BouncingArrow *this_01;
  float fVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  uVar3 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_1);
  this_00 = (Collectable *)LootHelpers::Drop(*(undefined4 *)(pRVar2 + 0x58),uVar3);
  this[0x28] = (PickupCollectableTutorialModule)0x1;
  Board::SetSoftPause(*(Board **)(gLawnApp + 0x9f0),true);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x30),(RtWeakPtrBase *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  Collectable::SetNeverExpire(this_00,true);
  this_01 = Board::AddEffect<Effect_BouncingArrow>(*(Board **)(gLawnApp + 0x9f0));
  CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06ae2878);
  Effect_BouncingArrow::SetArrowImage(this_01,aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  Effect_BouncingArrow::SetBounceHeightsBoardSpace(this_01,35.0,55.0);
  DVec3::DVec3((DVec3 *)aRStack_18);
  StandaloneEffect::SetAttached
            ((StandaloneEffect *)this_01,(RealObject *)this_00,(SexyVector3 *)aRStack_18,1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x40),(RtWeakPtrBase *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  fVar4 = (float)PVZ_T();
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(this + 0x38) = fVar4 + 1.5;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PickupCollectableTutorialModule::onZombieDropLoot(Zombie*) */

void __thiscall
PickupCollectableTutorialModule::onZombieDropLoot
          (PickupCollectableTutorialModule *this,Zombie *param_1)

{
  ResourceInfo *pRVar1;
  
  if ((this[0x28] == (PickupCollectableTutorialModule)0x0) &&
     (pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x20)),
     pRVar1 == (ResourceInfo *)param_1)) {
    startFirstCoinTutorial(this,(Zombie *)pRVar1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PickupCollectableTutorialModule::registerForEvents() */

void __thiscall
PickupCollectableTutorialModule::registerForEvents(PickupCollectableTutorialModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
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
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::
  Delegate0<PickupCollectableTutorialModule,void(PickupCollectableTutorialModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onEndLevel);
  Sexy::Delegate0::
  Delegate0<PickupCollectableTutorialModule,void(PickupCollectableTutorialModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLevelEnded(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieSpawned);
  local_b0 = local_88;
  local_c0 = local_98;
  uStack_b8 = uStack_90;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<PickupCollectableTutorialModule,void(PickupCollectableTutorialModule::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieAddedToBoard,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDropLoot);
  local_c0 = local_80;
  uStack_b8 = uStack_78;
  local_b0 = local_70;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<PickupCollectableTutorialModule,void(PickupCollectableTutorialModule::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieDropLoot,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCoinClicked);
  local_d0 = local_58;
  local_e0 = local_68;
  uStack_d8 = uStack_60;
  MessageRouter::
  Subscribe<Collectable*,Sexy::CBMemberTranslatorX<PickupCollectableTutorialModule,void(PickupCollectableTutorialModule::*)(Collectable*)>>
            ((MessageRouter *)puVar1,Message::CollectableCollectionStarted,&local_e0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCoinBanked);
  local_e0 = local_50;
  uStack_d8 = uStack_48;
  local_d0 = local_40;
  MessageRouter::
  Subscribe<Collectable*,Sexy::CBMemberTranslatorX<PickupCollectableTutorialModule,void(PickupCollectableTutorialModule::*)(Collectable*)>>
            ((MessageRouter *)puVar1,Message::CollectableCollectionFinished,&local_e0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

