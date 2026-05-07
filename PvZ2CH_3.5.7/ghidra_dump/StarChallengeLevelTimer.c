// Class: StarChallengeLevelTimer


/* StarChallengeLevelTimer::onGameplayEnded() */

void StarChallengeLevelTimer::onGameplayEnded(void)

{
  return;
}


/* StarChallengeLevelTimer::onGameplayUpdate() */

void StarChallengeLevelTimer::onGameplayUpdate(void)

{
  return;
}


/* StarChallengeLevelTimer::endLevel() */

void StarChallengeLevelTimer::endLevel(void)

{
  Board::PlayerWon(*(Board **)(gLawnApp + 0x9f0));
  return;
}


/* StarChallengeLevelTimer::gameplayWinConditionTest() */

void __thiscall StarChallengeLevelTimer::gameplayWinConditionTest(StarChallengeLevelTimer *this)

{
  ChallengeUI *this_00;
  
  this_00 = (ChallengeUI *)(**(code **)(*(long *)this + 0xe8))();
  if (this_00 != (ChallengeUI *)0x0) {
    ChallengeUI::FadeWithoutFailing(this_00);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeLevelTimer::StaticClassInit() */

void StarChallengeLevelTimer::StaticClassInit(void)

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
    std::string::string(asStack_10,"StarChallengeLevelTimer");
    (*pcVar2)(plVar1,asStack_10,FUN_036d1094,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengeLevelTimer::StaticGetClass() */

long * StarChallengeLevelTimer::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengeLevelTimer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeLevelTimer::StarChallengeLevelTimer() */

void __thiscall StarChallengeLevelTimer::StarChallengeLevelTimer(StarChallengeLevelTimer *this)

{
  Challenge::Challenge((Challenge *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06682680;
  return;
}


/* StarChallengeLevelTimer::StaticNew() */

StarChallengeLevelTimer * StarChallengeLevelTimer::StaticNew(void)

{
  StarChallengeLevelTimer *this;
  
  this = ::operator_new(0x20);
  StarChallengeLevelTimer(this);
  return this;
}


/* StarChallengeLevelTimer::~StarChallengeLevelTimer() */

void __thiscall StarChallengeLevelTimer::~StarChallengeLevelTimer(StarChallengeLevelTimer *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06682680;
  Challenge::~Challenge((Challenge *)this);
  return;
}


/* StarChallengeLevelTimer::~StarChallengeLevelTimer() */

void __thiscall StarChallengeLevelTimer::~StarChallengeLevelTimer(StarChallengeLevelTimer *this)

{
  ~StarChallengeLevelTimer(this);
  AK::FreeHook(this);
  return;
}


/* StarChallengeLevelTimer::AddTime(float) */

void StarChallengeLevelTimer::AddTime(float param_1)

{
  LevelModuleManager *this;
  BoardTimer *this_00;
  
  this = (LevelModuleManager *)FUN_036d0c5c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  this_00 = LevelModuleManager::GetModuleByClass<BoardTimer>(this);
  BoardTimer::AddTime(this_00,param_1,true);
  return;
}


/* StarChallengeLevelTimer::CalcLevelProgress() */

void StarChallengeLevelTimer::CalcLevelProgress(void)

{
  LevelModuleManager *this;
  BoardTimer *this_00;
  
  this = (LevelModuleManager *)FUN_036d0c5c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  this_00 = LevelModuleManager::GetModuleByClass<BoardTimer>(this);
  BoardTimer::CalcPercentRemaining(this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeLevelTimer::CheatSetTime(float) */

void __thiscall StarChallengeLevelTimer::CheatSetTime(StarChallengeLevelTimer *this,float param_1)

{
  LevelModuleManager *this_00;
  BoardTimer *pBVar1;
  undefined4 in_register_00005004;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (LevelModuleManager *)FUN_036d0c5c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8))
  ;
  pBVar1 = LevelModuleManager::GetModuleByClass<BoardTimer>(this_00);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,endLevel);
  Sexy::Delegate0::Delegate0<StarChallengeLevelTimer,void(StarChallengeLevelTimer::*)()>
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
/* StarChallengeLevelTimer::initLevelTimer() */

void __thiscall StarChallengeLevelTimer::initLevelTimer(StarChallengeLevelTimer *this)

{
  LevelModuleManager *this_00;
  BoardTimer *pBVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  BoardTimer *pBVar3;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (LevelModuleManager *)FUN_036d0c5c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8))
  ;
  pBVar1 = LevelModuleManager::GetModuleByClass<BoardTimer>(this_00);
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
                    /* WARNING: Load size is inaccurate */
  pBVar3._0_4_ = *(BoardTimer **)(pRVar2 + 0x40);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,endLevel);
  Sexy::Delegate0::Delegate0<StarChallengeLevelTimer,void(StarChallengeLevelTimer::*)()>
            (aDStack_38,aCStack_50);
  BoardTimer::Initialize(pBVar3._0_4_,pBVar1,1,1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeLevelTimer::onGameplayStarted() */

void __thiscall StarChallengeLevelTimer::onGameplayStarted(StarChallengeLevelTimer *this)

{
  bool bVar1;
  long *plVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  initLevelTimer(this);
  std::string::string(asStack_10,"UIProgressBar");
  plVar2 = (long *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (plVar2 != (long *)0x0) {
    ToolPacketData::GetProps();
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    if (bVar1) {
      (**(code **)(*plVar2 + 0x48))(plVar2);
    }
  }
  std::string::string(asStack_10,"UIRenaiProgressBar");
  plVar2 = (long *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (plVar2 != (long *)0x0) {
    ToolPacketData::GetProps();
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    if (bVar1) {
      (**(code **)(*plVar2 + 0x48))(plVar2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeLevelTimer::GetDescription() const */

void StarChallengeLevelTimer::GetDescription(void)

{
  undefined4 uVar1;
  LevelModule *in_x0;
  ResilienceTutorialIntroProperties *pRVar2;
  undefined8 uVar3;
  ulong extraout_x0;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_198 [8];
  string asStack_190 [8];
  wstring awStack_188 [8];
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>(in_x0);
  fVar5 = *(float *)(pRVar2 + 0x40);
  fVar6 = fVar5 * 0.016666668;
  Set8BytesTo0(asStack_190);
  iVar4 = (int)fVar5;
  if (iVar4 == (iVar4 / 0x3c) * 0x3c) {
    Sexy::StrFormat("%d",asStack_180,(ulong)(uint)(int)fVar6);
    FUN_05474278(asStack_190,asStack_180);
    std::string::~string(asStack_180);
  }
  else {
    uVar1 = operator|(0x10,8);
    FUN_05462470(auStack_178,uVar1);
    uVar3 = FUN_0545f9fc(auStack_168,std::fixed);
    nop();
    FUN_0545feec(uVar3,extraout_x0 & 0xffffffff);
    FUN_05460f98(fVar6);
    FUN_05462824(asStack_180,auStack_178);
    FUN_05474278(asStack_190,asStack_180);
    std::string::~string(asStack_180);
    FUN_054617bc(auStack_178);
  }
  Sexy::ToWString(asStack_190);
  FUN_05478178((wstring *)asStack_180,L"[STARCHALLENGE_SURVIVE_LEVEL_TIME]",auStack_198);
  TodReplaceString((wstring *)asStack_180,L"{TIME}",awStack_188);
  FUN_05476c50((wstring *)asStack_180);
  nop();
  FUN_05476c50(awStack_188);
  std::string::~string(asStack_190);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeLevelTimer::registerForEvents() */

void __thiscall StarChallengeLevelTimer::registerForEvents(StarChallengeLevelTimer *this)

{
  undefined *this_00;
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Challenge::registerForEvents((Challenge *)this);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayStarted);
  Sexy::Delegate0::Delegate0<StarChallengeLevelTimer,void(StarChallengeLevelTimer::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayEnded);
  Sexy::Delegate0::Delegate0<StarChallengeLevelTimer,void(StarChallengeLevelTimer::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayEnded(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayUpdate);
  Sexy::Delegate0::Delegate0<StarChallengeLevelTimer,void(StarChallengeLevelTimer::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayUpdate(pLVar1,aDStack_38);
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayWinConditionTest);
  Sexy::Delegate0::Delegate0<StarChallengeLevelTimer,void(StarChallengeLevelTimer::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::GameplayWinConditionMet,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

