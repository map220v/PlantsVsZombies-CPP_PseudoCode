// Class: ApplyZombieConditionsChallenge


/* ApplyZombieConditionsChallenge::gameplayEnded() */

void __thiscall ApplyZombieConditionsChallenge::gameplayEnded(ApplyZombieConditionsChallenge *this)

{
  char cVar1;
  
  cVar1 = FUN_0367f864(*(undefined4 *)(this + 0x1c));
  if (cVar1 != '\0') {
    Challenge::Fail();
  }
  Challenge::HideUI((Challenge *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ApplyZombieConditionsChallenge::StaticClassInit() */

void ApplyZombieConditionsChallenge::StaticClassInit(void)

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
    std::string::string(asStack_10,"ApplyZombieConditionsChallenge");
    (*pcVar2)(plVar1,asStack_10,FUN_03680634,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ApplyZombieConditionsChallenge::StaticGetClass() */

long * ApplyZombieConditionsChallenge::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ApplyZombieConditionsChallenge",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ApplyZombieConditionsChallenge::~ApplyZombieConditionsChallenge() */

void __thiscall
ApplyZombieConditionsChallenge::~ApplyZombieConditionsChallenge
          (ApplyZombieConditionsChallenge *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0667abd0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  Challenge::~Challenge((Challenge *)this);
  return;
}


/* ApplyZombieConditionsChallenge::~ApplyZombieConditionsChallenge() */

void __thiscall
ApplyZombieConditionsChallenge::~ApplyZombieConditionsChallenge
          (ApplyZombieConditionsChallenge *this)

{
  ~ApplyZombieConditionsChallenge(this);
  AK::FreeHook(this);
  return;
}


/* ApplyZombieConditionsChallenge::ApplyZombieConditionsChallenge() */

void __thiscall
ApplyZombieConditionsChallenge::ApplyZombieConditionsChallenge(ApplyZombieConditionsChallenge *this)

{
  Challenge::Challenge((Challenge *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0667abd0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  *(undefined4 *)(this + 0x20) = 0;
  return;
}


/* ApplyZombieConditionsChallenge::StaticNew() */

ApplyZombieConditionsChallenge * ApplyZombieConditionsChallenge::StaticNew(void)

{
  ApplyZombieConditionsChallenge *this;
  
  this = ::operator_new(0x30);
  ApplyZombieConditionsChallenge(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ApplyZombieConditionsChallenge::gameplayStarted() */

void __thiscall
ApplyZombieConditionsChallenge::gameplayStarted(ApplyZombieConditionsChallenge *this)

{
  Effect_Protrusion *extraout_x0;
  ResilienceTutorialIntroProperties *pRVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtName::RtName(aRStack_18,L"UIChallengeApplyConditionCounter");
  UIWidget::CreateWidget(aRStack_18,1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x28),(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Sexy::RtName::~RtName(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  nop();
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  FUN_0367f904(extraout_x0 + 0x1a8,*(undefined4 *)(pRVar1 + 0x40));
  FUN_0367fb1c(extraout_x0 + 0x1ac);
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06aab048);
  Effect_Protrusion::SetInstigator(extraout_x0,aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ApplyZombieConditionsChallenge::incrementNumConditionApplied() */

void __thiscall
ApplyZombieConditionsChallenge::incrementNumConditionApplied(ApplyZombieConditionsChallenge *this)

{
  char cVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  long extraout_x0;
  int *piVar3;
  char *pcVar4;
  int local_10;
  int local_c;
  long local_8;
  
  *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
  local_8 = ___stack_chk_guard;
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (*(int *)(pRVar2 + 0x40) <= *(int *)(this + 0x20)) {
    pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar4,"Play_UI_Game_Objective_Success_Flower");
    Challenge::Complete((Challenge *)this);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  nop();
  local_10 = 0;
  local_c = *(int *)(pRVar2 + 0x40) - *(int *)(this + 0x20);
  piVar3 = eastl::max_alt<int>(&local_10,&local_c);
  FUN_0367f904(extraout_x0 + 0x1a8,*piVar3);
  cVar1 = FUN_0367f8a8(*(undefined4 *)(this + 0x1c));
  if (cVar1 == '\0') {
    if (local_8 == ___stack_chk_guard) {
      return;
    }
  }
  else {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
    nop();
    if (local_8 == ___stack_chk_guard) {
      ChallengeUI::SetSuccess();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ApplyZombieConditionsChallenge::onZombieConditionApplied(Zombie*, int, float) */

void ApplyZombieConditionsChallenge::onZombieConditionApplied
               (Zombie *param_1,int param_2,float param_3)

{
  char cVar1;
  bool bVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_1c [4];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0367f864(*(undefined4 *)(param_1 + 0x1c));
  if (cVar1 != '\0') {
    pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)param_1);
    uVar4 = FUN_0368002c(*(undefined8 *)(pRVar3 + 0x48));
    uVar5 = FUN_0368007c(*(undefined8 *)(pRVar3 + 0x50));
    local_18 = std::
               find<__gnu_cxx::__normal_iterator<ZombieConditions_const*,std::vector<ZombieConditions,std::allocator<ZombieConditions>>>,ZombieConditions>
                         (uVar4,uVar5,local_1c);
    local_10 = FUN_0368007c(*(undefined8 *)(pRVar3 + 0x50));
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (bVar2) {
      incrementNumConditionApplied((ApplyZombieConditionsChallenge *)param_1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ApplyZombieConditionsChallenge::onZombieBurnedToAsh(Zombie*) */

void ApplyZombieConditionsChallenge::onZombieBurnedToAsh(Zombie *param_1)

{
  char cVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  
  cVar1 = FUN_0367f864(*(undefined4 *)(param_1 + 0x1c));
  if ((cVar1 != '\0') &&
     (pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)param_1),
     pRVar2[0x60] != (ResilienceTutorialIntroProperties)0x0)) {
    incrementNumConditionApplied((ApplyZombieConditionsChallenge *)param_1);
    return;
  }
  return;
}


/* ApplyZombieConditionsChallenge::onZombieElectrified(Zombie*) */

void ApplyZombieConditionsChallenge::onZombieElectrified(Zombie *param_1)

{
  char cVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  
  cVar1 = FUN_0367f864(*(undefined4 *)(param_1 + 0x1c));
  if ((cVar1 != '\0') &&
     (pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)param_1),
     pRVar2[0x61] != (ResilienceTutorialIntroProperties)0x0)) {
    incrementNumConditionApplied((ApplyZombieConditionsChallenge *)param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ApplyZombieConditionsChallenge::registerForEvents() */

void __thiscall
ApplyZombieConditionsChallenge::registerForEvents(ApplyZombieConditionsChallenge *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
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
  Challenge::registerForEvents((Challenge *)this);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayStarted);
  Sexy::Delegate0::
  Delegate0<ApplyZombieConditionsChallenge,void(ApplyZombieConditionsChallenge::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayEnded);
  Sexy::Delegate0::
  Delegate0<ApplyZombieConditionsChallenge,void(ApplyZombieConditionsChallenge::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameplayWinConditionMet,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieConditionApplied);
  local_a0 = local_80;
  uStack_98 = uStack_78;
  local_90 = local_70;
  MessageRouter::
  Subscribe<Zombie*,int,float,Sexy::CBMemberTranslatorX<ApplyZombieConditionsChallenge,void(ApplyZombieConditionsChallenge::*)(Zombie*,int,float)>>
            ((MessageRouter *)puVar1,Message::ZombieConditionApplied,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieBurnedToAsh);
  local_b0 = local_58;
  local_c0 = local_68;
  uStack_b8 = uStack_60;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<ApplyZombieConditionsChallenge,void(ApplyZombieConditionsChallenge::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieBurnedToAsh,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieElectrified);
  local_c0 = local_50;
  uStack_b8 = uStack_48;
  local_b0 = local_40;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<ApplyZombieConditionsChallenge,void(ApplyZombieConditionsChallenge::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieElectrified,&local_c0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

