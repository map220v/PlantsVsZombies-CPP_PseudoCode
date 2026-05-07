// Class: ActionActivityLevelsTutorial


/* ActionActivityLevelsTutorial::~ActionActivityLevelsTutorial() */

void __thiscall
ActionActivityLevelsTutorial::~ActionActivityLevelsTutorial(ActionActivityLevelsTutorial *this)

{
  *(undefined ***)this = &PTR_GetClass_06859ac0;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionActivityLevelsTutorial::~ActionActivityLevelsTutorial() */

void __thiscall
ActionActivityLevelsTutorial::~ActionActivityLevelsTutorial(ActionActivityLevelsTutorial *this)

{
  ~ActionActivityLevelsTutorial(this);
  AK::FreeHook(this);
  return;
}


/* ActionActivityLevelsTutorial::StaticGetClass() */

long * ActionActivityLevelsTutorial::StaticGetClass(void)

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
  uVar2 = WorldMapAction::StaticGetClass();
  (*pcVar3)(plVar1,"ActionActivityLevelsTutorial",uVar2,StaticNew);
  return sClass;
}


/* ActionActivityLevelsTutorial::GetClass() const */

long * ActionActivityLevelsTutorial::GetClass(void)

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
  uVar2 = WorldMapAction::StaticGetClass();
  (*pcVar3)(plVar1,"ActionActivityLevelsTutorial",uVar2,StaticNew);
  return sClass;
}


/* ActionActivityLevelsTutorial::ActionActivityLevelsTutorial() */

void __thiscall
ActionActivityLevelsTutorial::ActionActivityLevelsTutorial(ActionActivityLevelsTutorial *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_06859ac0;
  return;
}


/* ActionActivityLevelsTutorial::StaticNew() */

ActionActivityLevelsTutorial * ActionActivityLevelsTutorial::StaticNew(void)

{
  ActionActivityLevelsTutorial *this;
  
  this = ::operator_new(0x18);
  ActionActivityLevelsTutorial(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionActivityLevelsTutorial::CreateIfNeed(bool&) */

void ActionActivityLevelsTutorial::CreateIfNeed(bool *param_1)

{
  char cVar1;
  ProfileMgr *pPVar2;
  PlayerInfo *pPVar3;
  ActionActivityLevelsTutorial *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*param_1 == false) {
    pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar2);
    cVar1 = PlayerInfo::PlayerHasCompletedTutorial(pPVar3,0x2b);
    if (cVar1 == '\0') {
      std::string::string(asStack_10,"egypt7");
      pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar2);
      cVar1 = ProfileUtils::HasCompletedLevel(asStack_10,false,pPVar3);
      std::string::~string(asStack_10);
      nop();
      if (cVar1 != '\0') {
        *param_1 = true;
        this = ::operator_new(0x18);
        *(undefined8 *)this = 0;
        this[8] = (ActionActivityLevelsTutorial)0x0;
        this[9] = (ActionActivityLevelsTutorial)0x0;
        this[10] = (ActionActivityLevelsTutorial)0x0;
        *(undefined4 *)(this + 0xc) = 0;
        *(undefined4 *)(this + 0x10) = 0;
        ActionActivityLevelsTutorial(this);
        goto LAB_045553c0;
      }
    }
  }
  this = (ActionActivityLevelsTutorial *)0x0;
LAB_045553c0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionActivityLevelsTutorial::onLevelsNarrationFinished() */

void __thiscall
ActionActivityLevelsTutorial::onLevelsNarrationFinished(ActionActivityLevelsTutorial *this)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long *plVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    std::string::string(asStack_10,"nar_activity_levels_intro");
    PlayerInfo::CompleteNarrationEvent(this_01,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  WorldMapAction::RestorePrevInput((WorldMapAction *)this);
  plVar1 = (long *)LawnApp::GetWorldMap(gLawnApp);
  (**(code **)(*plVar1 + 0x338))(plVar1,0x2b);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionActivityLevelsTutorial::onBossChallengeNarrationFinished() */

void __thiscall
ActionActivityLevelsTutorial::onBossChallengeNarrationFinished(ActionActivityLevelsTutorial *this)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    std::string::string(asStack_10,"nar_activity_bosschallenge_intro");
    PlayerInfo::CompleteNarrationEvent(this_01,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  WorldMapAction::RestorePrevInput((WorldMapAction *)this);
  this[9] = (ActionActivityLevelsTutorial)0x1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionActivityLevelsTutorial::Start() */

void __thiscall ActionActivityLevelsTutorial::Start(ActionActivityLevelsTutorial *this)

{
  undefined *this_00;
  CrazyNPCManager *pCVar1;
  string asStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WorldMapAction::DisableInput((WorldMapAction *)this);
  pCVar1 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
  std::string::string(asStack_60,"activity_levels_intro");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLevelsNarrationFinished);
  Sexy::Delegate0::Delegate0<ActionActivityLevelsTutorial,void(ActionActivityLevelsTutorial::*)()>
            (aDStack_38,aCStack_50);
  std::string::string(asStack_58,"");
  CrazyNPCManager::StartNarrativeID(pCVar1,asStack_60,aDStack_38,asStack_58);
  std::string::~string(asStack_58);
  nop();
  std::string::~string(asStack_60);
  nop();
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTutorialFinished);
  Sexy::Delegate0::Delegate0<ActionActivityLevelsTutorial,void(ActionActivityLevelsTutorial::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::WorldMapTutorialFinished,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionActivityLevelsTutorial::onTutorialFinished() */

void __thiscall ActionActivityLevelsTutorial::onTutorialFinished(ActionActivityLevelsTutorial *this)

{
  CrazyNPCManager *pCVar1;
  string asStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WorldMapAction::DisableInput((WorldMapAction *)this);
  pCVar1 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
  std::string::string(asStack_60,"activity_bosschallenge_intro");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBossChallengeNarrationFinished);
  Sexy::Delegate0::Delegate0<ActionActivityLevelsTutorial,void(ActionActivityLevelsTutorial::*)()>
            (aDStack_38,aCStack_50);
  std::string::string(asStack_58,"");
  CrazyNPCManager::StartNarrativeID(pCVar1,asStack_60,aDStack_38,asStack_58);
  std::string::~string(asStack_58);
  nop();
  std::string::~string(asStack_60);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

