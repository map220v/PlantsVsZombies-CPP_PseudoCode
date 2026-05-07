// Class: ZombossRiftBattleModule


/* ZombossRiftBattleModule::getPreventSave() */

undefined8 ZombossRiftBattleModule::getPreventSave(void)

{
  return 1;
}


/* ZombossRiftBattleModule::onGameplayEnded() */

void ZombossRiftBattleModule::onGameplayEnded(void)

{
  return;
}


/* ZombossRiftBattleModule::onGameplayUpdate() */

void ZombossRiftBattleModule::onGameplayUpdate(void)

{
  return;
}


/* ZombossRiftBattleModule::onLoadComplete() */

void ZombossRiftBattleModule::onLoadComplete(void)

{
  ZombossBattleModule::onLoadComplete();
  nop();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRiftBattleModule::StaticClassInit() */

void ZombossRiftBattleModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossRiftBattleModule");
    (*pcVar2)(plVar1,asStack_10,FUN_036e5f74,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossRiftBattleModule::StaticGetClass() */

long * ZombossRiftBattleModule::StaticGetClass(void)

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
  uVar2 = ZombossBattleModule::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossRiftBattleModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossRiftBattleModule::CheatForceVictory() */

void __thiscall ZombossRiftBattleModule::CheatForceVictory(ZombossRiftBattleModule *this)

{
  *(undefined4 *)(this + 0x38) = 99;
  return;
}


/* ZombossRiftBattleModule::~ZombossRiftBattleModule() */

void __thiscall ZombossRiftBattleModule::~ZombossRiftBattleModule(ZombossRiftBattleModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06685f20;
  ZombossBattleModule::~ZombossBattleModule((ZombossBattleModule *)this);
  return;
}


/* ZombossRiftBattleModule::~ZombossRiftBattleModule() */

void __thiscall ZombossRiftBattleModule::~ZombossRiftBattleModule(ZombossRiftBattleModule *this)

{
  ~ZombossRiftBattleModule(this);
  AK::FreeHook(this);
  return;
}


/* ZombossRiftBattleModule::ZombossRiftBattleModule() */

void __thiscall ZombossRiftBattleModule::ZombossRiftBattleModule(ZombossRiftBattleModule *this)

{
  ZombossBattleModule::ZombossBattleModule((ZombossBattleModule *)this);
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined ***)this = &PTR_GetModuleClass_06685f20;
  return;
}


/* ZombossRiftBattleModule::StaticNew() */

ZombossRiftBattleModule * ZombossRiftBattleModule::StaticNew(void)

{
  ZombossRiftBattleModule *this;
  
  this = ::operator_new(0x40);
  ZombossRiftBattleModule(this);
  return this;
}


/* ZombossRiftBattleModule::GetTotalZombossStages() const */

void __thiscall ZombossRiftBattleModule::GetTotalZombossStages(ZombossRiftBattleModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  BoardHelpers::ApplyLevelOverride_ZombossRiftStages(*(int *)(pRVar1 + 0x68));
  return;
}


/* ZombossRiftBattleModule::IsVictory() */

bool __thiscall ZombossRiftBattleModule::IsVictory(ZombossRiftBattleModule *this)

{
  int iVar1;
  
  iVar1 = GetTotalZombossStages(this);
  return iVar1 <= *(int *)(this + 0x38);
}


/* ZombossRiftBattleModule::endLevel() */

void __thiscall ZombossRiftBattleModule::endLevel(ZombossRiftBattleModule *this)

{
  char cVar1;
  
  cVar1 = IsVictory(this);
  if (cVar1 == '\0') {
    Board::TryTriggerPlayerLoss();
    return;
  }
  Board::PlayerWon(*(Board **)(gLawnApp + 0x9f0));
  return;
}


/* ZombossRiftBattleModule::AddTime(float) */

void ZombossRiftBattleModule::AddTime(float param_1)

{
  LevelModuleManager *this;
  BoardTimer *this_00;
  
  this = (LevelModuleManager *)FUN_036e5974(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  this_00 = LevelModuleManager::GetModuleByClass<BoardTimer>(this);
  BoardTimer::AddTime(this_00,param_1,true);
  return;
}


/* ZombossRiftBattleModule::onSetCurrentPhase(int, int) */

void ZombossRiftBattleModule::onSetCurrentPhase(int param_1,int param_2)

{
  int iVar1;
  ZombossRiftBattleModule *this;
  LevelModuleManager *this_00;
  BoardTimer *this_01;
  float fVar2;
  
  this = (ZombossRiftBattleModule *)(ulong)(uint)param_1;
  iVar1 = GetTotalZombossStages(this);
  if (iVar1 == param_2) {
    MessageRouter::Broadcast((_func_void *)gMessageRouter);
    this_00 = (LevelModuleManager *)
              FUN_036e5974(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    if ((this_00 != (LevelModuleManager *)0x0) &&
       (this_01 = LevelModuleManager::GetModuleByClass<BoardTimer>(this_00),
       this_01 != (BoardTimer *)0x0)) {
      BoardTimer::RecordFinishRemainingTime(this_01);
      fVar2 = (float)BoardTimer::GetUsedTime(this_01);
      RiftUtils::SetBossLevelTime(fVar2);
      *(int *)(this + 0x38) = iVar1;
      Board::PlayerWon(*(Board **)(gLawnApp + 0x9f0));
      return;
    }
  }
  *(int *)(this + 0x38) = param_2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRiftBattleModule::onGameplayStarted() */

void __thiscall ZombossRiftBattleModule::onGameplayStarted(ZombossRiftBattleModule *this)

{
  LevelModuleManager *this_00;
  BoardTimer *pBVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  BoardTimer *pBVar3;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (LevelModuleManager *)FUN_036e5974(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8))
  ;
  pBVar1 = LevelModuleManager::GetModuleByClass<BoardTimer>(this_00);
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
                    /* WARNING: Load size is inaccurate */
  pBVar3._0_4_ = *(BoardTimer **)(pRVar2 + 0x6c);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,endLevel);
  Sexy::Delegate0::Delegate0<ZombossRiftBattleModule,void(ZombossRiftBattleModule::*)()>
            (aDStack_38,aCStack_50);
  BoardTimer::Initialize(pBVar3._0_4_,pBVar1,1,1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRiftBattleModule::CheatSetTime(float) */

void __thiscall ZombossRiftBattleModule::CheatSetTime(ZombossRiftBattleModule *this,float param_1)

{
  LevelModuleManager *this_00;
  BoardTimer *pBVar1;
  undefined4 in_register_00005004;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (LevelModuleManager *)FUN_036e5974(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8))
  ;
  pBVar1 = LevelModuleManager::GetModuleByClass<BoardTimer>(this_00);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,endLevel);
  Sexy::Delegate0::Delegate0<ZombossRiftBattleModule,void(ZombossRiftBattleModule::*)()>
            (aDStack_38,aCStack_50);
  BoardTimer::Initialize((BoardTimer *)CONCAT44(in_register_00005004,param_1),pBVar1,1,1,aDStack_38)
  ;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRiftBattleModule::onLossImminent() */

void ZombossRiftBattleModule::onLossImminent(void)

{
  SecurityGourdModule *pSVar1;
  LevelModuleManager *pLVar2;
  RtId aRStack_30 [8];
  RtName aRStack_28 [16];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pSVar1 = BoardHelpers::GetLevelModuleByClass<SecurityGourdModule>();
  if (pSVar1 == (SecurityGourdModule *)0x0) {
    Sexy::RtName::RtName(aRStack_28,L"DefaultSecurityGourds");
    Sexy::RtName::RtName(aRStack_18,L"LevelModules");
    Sexy::RtId::RtId(aRStack_30,aRStack_28,aRStack_18);
    Sexy::RtName::~RtName(aRStack_18);
    Sexy::RtName::~RtName(aRStack_28);
    pLVar2 = (LevelModuleManager *)
             FUN_036e5974(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_30);
    LevelModuleManager::AddRuntimeModuleFromProperties(pLVar2,aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    Sexy::RtId::~RtId(aRStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossRiftBattleModule::HandlePointOfLoss(float) */

void ZombossRiftBattleModule::HandlePointOfLoss(float param_1)

{
  SecurityGourdModule *this;
  
  AddTime(param_1);
  this = BoardHelpers::GetLevelModuleByClass<SecurityGourdModule>();
  if (this != (SecurityGourdModule *)0x0) {
    SecurityGourdModule::TriggerEffect(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRiftBattleModule::onShowProgressMeter() */

void __thiscall ZombossRiftBattleModule::onShowProgressMeter(ZombossRiftBattleModule *this)

{
  undefined *this_00;
  bool bVar1;
  int iVar2;
  long *plVar3;
  string asStack_10 [8];
  long local_8;
  
  this_00 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  iVar2 = GetTotalZombossStages(this);
  MessageRouter::Broadcast<int,int>((MessageRouter *)this_00,Message::BossSetPhaseCount,iVar2);
  MessageRouter::Broadcast((_func_void *)gMessageRouter);
  std::string::string(asStack_10,"UIProgressBar");
  plVar3 = (long *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (plVar3 != (long *)0x0) {
    ToolPacketData::GetProps();
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    if (bVar1) {
      (**(code **)(*plVar3 + 0x48))(plVar3);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRiftBattleModule::gatherExtraChallenges(ProfileUtils::ChallengeStatusHolder*) */

void __thiscall
ZombossRiftBattleModule::gatherExtraChallenges
          (ZombossRiftBattleModule *this,ChallengeStatusHolder *param_1)

{
  int iVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  wstring awStack_18 [8];
  float local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(L"[RIFT_ZOMBOSS_CHALLENGE_DESCRIPTION]");
  iVar1 = GetTotalZombossStages(this);
  TodReplaceNumberString(awStack_18,L"{BARS}",iVar1);
  FUN_054766c8(awStack_18,local_10);
  FUN_05476c50(local_10);
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  TodReplaceNumberString(awStack_18,L"{MINUTES}",(int)(*(float *)(pRVar2 + 0x6c) * 0.016666668));
  FUN_054766c8(awStack_18,local_10);
  FUN_05476c50(local_10);
  std::vector<std::wstring,std::allocator<std::wstring>>::push_back
            ((vector<std::wstring,std::allocator<std::wstring>> *)param_1,awStack_18);
  std::vector<bool,std::allocator<bool>>::push_back
            ((vector<bool,std::allocator<bool>> *)(param_1 + 0x58),false);
  std::vector<bool,std::allocator<bool>>::push_back
            ((vector<bool,std::allocator<bool>> *)(param_1 + 0x18),false);
  local_10[0] = (float)PVZ_EOT();
  std::vector<float,std::allocator<float>>::push_back
            ((vector<float,std::allocator<float>> *)(param_1 + 0x40),local_10);
  FUN_05476c50(awStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRiftBattleModule::registerForEvents() */

void __thiscall ZombossRiftBattleModule::registerForEvents(ZombossRiftBattleModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombossBattleModule::registerForEvents((ZombossBattleModule *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onShowProgressMeter);
  Sexy::Delegate0::Delegate0<ZombossRiftBattleModule,void(ZombossRiftBattleModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::BossShowProgressMeter,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSetCurrentPhase);
  local_80 = local_58;
  local_90 = local_68;
  uStack_88 = uStack_60;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<ZombossRiftBattleModule,void(ZombossRiftBattleModule::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::BossSetCurrentPhase,&local_90);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayStarted);
  Sexy::Delegate0::Delegate0<ZombossRiftBattleModule,void(ZombossRiftBattleModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayEnded);
  Sexy::Delegate0::Delegate0<ZombossRiftBattleModule,void(ZombossRiftBattleModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayEnded(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayUpdate);
  Sexy::Delegate0::Delegate0<ZombossRiftBattleModule,void(ZombossRiftBattleModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayUpdate(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,getPreventSave);
  Sexy::Delegate0wRet<bool>::
  Delegate0wRet<ZombossRiftBattleModule,bool(ZombossRiftBattleModule::*)()>
            ((Delegate0wRet<bool> *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterCanPreventSave(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gatherExtraChallenges);
  local_b0 = local_50;
  uStack_a8 = uStack_48;
  local_a0 = local_40;
  MessageRouter::
  Subscribe<ProfileUtils::ChallengeStatusHolder*,Sexy::CBMemberTranslatorX<ZombossRiftBattleModule,void(ZombossRiftBattleModule::*)(ProfileUtils::ChallengeStatusHolder*)>>
            ((MessageRouter *)puVar1,Message::GatherExtraChallenges,&local_b0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

