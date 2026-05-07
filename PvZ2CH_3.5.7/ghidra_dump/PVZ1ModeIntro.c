// Class: PVZ1ModeIntro


/* PVZ1ModeIntro::OnGameplayStarted() */

void __thiscall PVZ1ModeIntro::OnGameplayStarted(PVZ1ModeIntro *this)

{
  this[0x107] = (PVZ1ModeIntro)0x1;
  return;
}


/* PVZ1ModeIntro::onLoadComplete() */

void __thiscall PVZ1ModeIntro::onLoadComplete(PVZ1ModeIntro *this)

{
  char cVar1;
  int *piVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  Board *this_00;
  
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  piVar2 = (int *)Board::GetBoardPanLocations(this_00);
  (**(code **)(*(long *)this_00 + 0x1a8))(this_00,-*piVar2,0);
  cVar1 = (**(code **)(*(long *)this + 0xc0))(this);
  if (cVar1 != '\0') {
    return;
  }
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if ((pRVar3 != (ResilienceTutorialIntroProperties *)0x0) &&
     (pRVar3[0x70] != (ResilienceTutorialIntroProperties)0x0)) {
    StandardLevelIntro::startStandardIntro((StandardLevelIntro *)this,7);
    return;
  }
  StandardLevelIntro::startStandardIntro((StandardLevelIntro *)this,0);
  return;
}


/* PVZ1ModeIntro::OnNotifyPVZ1HowToPlayClose() */

void __thiscall PVZ1ModeIntro::OnNotifyPVZ1HowToPlayClose(PVZ1ModeIntro *this)

{
  if (this[0x107] != (PVZ1ModeIntro)0x0) {
    return;
  }
  StandardLevelIntro::startPreview((StandardLevelIntro *)this);
  return;
}


/* PVZ1ModeIntro::isInState(PVZ1IState) const */

bool __thiscall PVZ1ModeIntro::isInState(PVZ1ModeIntro *this,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_03615c40(*(undefined4 *)(this + 0x50));
  return iVar1 == param_2;
}


/* PVZ1ModeIntro::~PVZ1ModeIntro() */

void __thiscall PVZ1ModeIntro::~PVZ1ModeIntro(PVZ1ModeIntro *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06668d50;
  std::_Destroy<StateDefinition<CardGameState>>((StateDefinition *)(this + 0x50));
  StandardLevelIntro::~StandardLevelIntro((StandardLevelIntro *)this);
  return;
}


/* PVZ1ModeIntro::~PVZ1ModeIntro() */

void __thiscall PVZ1ModeIntro::~PVZ1ModeIntro(PVZ1ModeIntro *this)

{
  ~PVZ1ModeIntro(this);
  AK::FreeHook(this);
  return;
}


/* PVZ1ModeIntro::OnUpdate() */

void __thiscall PVZ1ModeIntro::OnUpdate(PVZ1ModeIntro *this)

{
  StateMachine<PVZ1IState>::UpdateState((StateMachine<PVZ1IState> *)(this + 0x50));
  return;
}


/* PVZ1ModeIntro::onEnterState_GAMEINIT(PVZ1IState) */

void PVZ1ModeIntro::onEnterState_GAMEINIT(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(param_1 + 0xf0) = uVar1;
  return;
}


/* PVZ1ModeIntro::onFirstNarrationFinished() */

void __thiscall PVZ1ModeIntro::onFirstNarrationFinished(PVZ1ModeIntro *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (*(int *)(pRVar1 + 0x78) != 2) {
    StandardLevelIntro::startPreview((StandardLevelIntro *)this);
    return;
  }
  PVZ1ModeUtils::ShowHowToPlay(0);
  return;
}


/* PVZ1ModeIntro::OnLevelEnded() */

void __thiscall PVZ1ModeIntro::OnLevelEnded(PVZ1ModeIntro *this)

{
  int iVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if ((*(int *)(pRVar2 + 0x78) == 2) &&
     (iVar1 = Board::GetBoardResult(*(Board **)(gLawnApp + 0x9f0)), iVar1 == 1)) {
    PVZ1ModeUtils::CompleteTutorial();
    return;
  }
  return;
}


/* PVZ1ModeIntro::PVZ1ModeIntro() */

void __thiscall PVZ1ModeIntro::PVZ1ModeIntro(PVZ1ModeIntro *this)

{
  undefined4 uVar1;
  
  StandardLevelIntro::StandardLevelIntro((StandardLevelIntro *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06668d50;
  StateMachine<PVZ1IState>::StateMachine((StateMachine<PVZ1IState> *)(this + 0x50));
  this[0x104] = (PVZ1ModeIntro)0x0;
  this[0x105] = (PVZ1ModeIntro)0x0;
  this[0x106] = (PVZ1ModeIntro)0x0;
  this[0x107] = (PVZ1ModeIntro)0x0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0xf0) = uVar1;
  *(undefined4 *)(this + 0xf4) = 0x3fc00000;
  *(undefined4 *)(this + 0xf8) = 0x40000000;
  *(undefined4 *)(this + 0x100) = 0x40533333;
  *(undefined4 *)(this + 0xfc) = 0x40200000;
  return;
}


/* PVZ1ModeIntro::StaticNew() */

PVZ1ModeIntro * PVZ1ModeIntro::StaticNew(void)

{
  PVZ1ModeIntro *this;
  
  this = ::operator_new(0x108);
  PVZ1ModeIntro(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeIntro::ShowReady() */

void __thiscall PVZ1ModeIntro::ShowReady(PVZ1ModeIntro *this)

{
  char *pcVar1;
  Board *pBVar2;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  this[0x104] = (PVZ1ModeIntro)0x1;
  local_8 = ___stack_chk_guard;
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  FUN_05478178(auStack_10,L"[WARNING_RIVERCROSSING_1]",auStack_18);
  Board::DisplayAdviceAgain(pBVar2,auStack_10,0x16,0);
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
/* PVZ1ModeIntro::ShowSet() */

void __thiscall PVZ1ModeIntro::ShowSet(PVZ1ModeIntro *this)

{
  char *pcVar1;
  Board *pBVar2;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  this[0x105] = (PVZ1ModeIntro)0x1;
  local_8 = ___stack_chk_guard;
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  FUN_05478178(auStack_10,L"[WARNING_RIVERCROSSING_2]",auStack_18);
  Board::DisplayAdviceAgain(pBVar2,auStack_10,0x16,0);
  FUN_05476c50(auStack_10);
  nop();
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Game_Wave_Set");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeIntro::ShowBreak() */

void __thiscall PVZ1ModeIntro::ShowBreak(PVZ1ModeIntro *this)

{
  char *pcVar1;
  Board *pBVar2;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  this[0x106] = (PVZ1ModeIntro)0x1;
  local_8 = ___stack_chk_guard;
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  FUN_05478178(auStack_10,L"[WARNING_RIVERCROSSING_3]",auStack_18);
  Board::DisplayAdviceAgain(pBVar2,auStack_10,0x17,0);
  FUN_05476c50(auStack_10);
  nop();
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Game_Wave_Plant");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeIntro::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall PVZ1ModeIntro::AddResourceRequirements(PVZ1ModeIntro *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"PowerupTutorial");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"ModernPortalGroup");
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
/* PVZ1ModeIntro::registerForEvents() */

void __thiscall PVZ1ModeIntro::registerForEvents(PVZ1ModeIntro *this)

{
  undefined *this_00;
  long lVar1;
  LevelModuleManager *pLVar2;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = LevelModule::getManager();
  FUN_03615c28(lVar1 + 0x80);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnIntroStarted);
  Sexy::Delegate0::Delegate0<PVZ1ModeIntro,void(PVZ1ModeIntro::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnIntroStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnUpdate);
  Sexy::Delegate0::Delegate0<PVZ1ModeIntro,void(PVZ1ModeIntro::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnLevelEnded);
  Sexy::Delegate0::Delegate0<PVZ1ModeIntro,void(PVZ1ModeIntro::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnLevelEnded(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnGameplayStarted);
  Sexy::Delegate0::Delegate0<PVZ1ModeIntro,void(PVZ1ModeIntro::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xf0);
  Sexy::Delegate0::Delegate0<PVZ1ModeIntro,void(PVZ1ModeIntro::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar2,aDStack_38);
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyPVZ1HowToPlayClose);
  Sexy::Delegate0::Delegate0<PVZ1ModeIntro,void(PVZ1ModeIntro::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::NotifyPVZ1HowToPlayClose,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeIntro::StaticClassInit() */

void PVZ1ModeIntro::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  StateMachineTableBuilder *this_00;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  code *pcVar4;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<PVZ1IState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<PVZ1IState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"PVZ1ModeIntro");
      (*pcVar4)(plVar1,asStack_150,FUN_036181fc,0x108,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<PVZ1IState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x100);
  Sexy::Delegate1<PVZ1IState>::Delegate1<PVZ1ModeIntro,void(PVZ1ModeIntro::*)(PVZ1IState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x108);
  Sexy::Delegate0::Delegate0<PVZ1ModeIntro,void(PVZ1ModeIntro::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x110);
  Sexy::Delegate1<PVZ1IState>::Delegate1<PVZ1ModeIntro,void(PVZ1ModeIntro::*)(PVZ1IState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"PVZ1IState_GAMEINIT");
  StateDefinition<PVZ1IState>::StateDefinition
            (aSStack_a8,0,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03617d08(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x118);
  Sexy::Delegate1<PVZ1IState>::Delegate1<PVZ1ModeIntro,void(PVZ1ModeIntro::*)(PVZ1IState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x120);
  Sexy::Delegate0::Delegate0<PVZ1ModeIntro,void(PVZ1ModeIntro::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x128);
  Sexy::Delegate1<PVZ1IState>::Delegate1<PVZ1ModeIntro,void(PVZ1ModeIntro::*)(PVZ1IState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"PVZ1IState_TUTORIAL");
  StateDefinition<PVZ1IState>::StateDefinition
            (aSStack_a8,1,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03617d08(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x130);
  Sexy::Delegate1<PVZ1IState>::Delegate1<PVZ1ModeIntro,void(PVZ1ModeIntro::*)(PVZ1IState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x138);
  Sexy::Delegate0::Delegate0<PVZ1ModeIntro,void(PVZ1ModeIntro::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x140);
  Sexy::Delegate1<PVZ1IState>::Delegate1<PVZ1ModeIntro,void(PVZ1ModeIntro::*)(PVZ1IState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"PVZ1IState_STARTGAME");
  StateDefinition<PVZ1IState>::StateDefinition
            (aSStack_a8,2,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03617d08(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PVZ1ModeIntro::StaticGetClass() */

long * PVZ1ModeIntro::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PVZ1ModeIntro",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeIntro::setState(PVZ1IState) */

void __thiscall PVZ1ModeIntro::setState(PVZ1ModeIntro *this,undefined4 param_2)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<PVZ1IState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<PVZ1IState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<PVZ1IState>::GetStateDefinition
                     ((StateMachineTable<PVZ1IState> *)pSVar2,param_2);
  StateDefinition<PVZ1IState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<PVZ1IState>::SetContext(aSStack_a8,this);
  StateMachine<PVZ1IState>::SetState
            ((StateMachine<PVZ1IState> *)(this + 0x50),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1ModeIntro::StartGame() */

void __thiscall PVZ1ModeIntro::StartGame(PVZ1ModeIntro *this)

{
  setState(this,2);
  return;
}


/* PVZ1ModeIntro::OnIntroStarted() */

void __thiscall PVZ1ModeIntro::OnIntroStarted(PVZ1ModeIntro *this)

{
  setState(this,2);
  return;
}


/* PVZ1ModeIntro::updateState_GAMEINIT() */

void __thiscall PVZ1ModeIntro::updateState_GAMEINIT(PVZ1ModeIntro *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if ((this[0x104] == (PVZ1ModeIntro)0x0) &&
     (fVar1 = *(float *)(this + 0xf4), fVar3 = *(float *)(this + 0xf0), fVar2 = (float)PVZ_T(),
     fVar1 + fVar3 <= fVar2)) {
    ShowReady(this);
    return;
  }
  if ((this[0x105] == (PVZ1ModeIntro)0x0) &&
     (fVar1 = *(float *)(this + 0xf8), fVar3 = *(float *)(this + 0xf0), fVar2 = (float)PVZ_T(),
     fVar1 + fVar3 <= fVar2)) {
    ShowSet(this);
    return;
  }
  if ((this[0x106] == (PVZ1ModeIntro)0x0) &&
     (fVar1 = *(float *)(this + 0xfc), fVar3 = *(float *)(this + 0xf0), fVar2 = (float)PVZ_T(),
     fVar1 + fVar3 <= fVar2)) {
    ShowBreak(this);
    return;
  }
  if ((this[0x107] == (PVZ1ModeIntro)0x0) &&
     (fVar1 = *(float *)(this + 0x100), fVar3 = *(float *)(this + 0xf0), fVar2 = (float)PVZ_T(),
     fVar1 + fVar3 <= fVar2)) {
    this[0x107] = (PVZ1ModeIntro)0x1;
    StartGame(this);
    return;
  }
  return;
}


/* PVZ1ModeIntro::updateState_TUTORIAL() */

void __thiscall PVZ1ModeIntro::updateState_TUTORIAL(PVZ1ModeIntro *this)

{
  LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  setState(this,0);
  return;
}

