// Class: Action_UnchartedModeTutorial


/* Action_UnchartedModeTutorial::onTutorialFinished() */

void __thiscall Action_UnchartedModeTutorial::onTutorialFinished(Action_UnchartedModeTutorial *this)

{
  (**(code **)(*(long *)this + 0x58))();
  return;
}


/* Action_UnchartedModeTutorial::~Action_UnchartedModeTutorial() */

void __thiscall
Action_UnchartedModeTutorial::~Action_UnchartedModeTutorial(Action_UnchartedModeTutorial *this)

{
  *(undefined ***)this = &PTR_GetClass_0685a040;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* Action_UnchartedModeTutorial::~Action_UnchartedModeTutorial() */

void __thiscall
Action_UnchartedModeTutorial::~Action_UnchartedModeTutorial(Action_UnchartedModeTutorial *this)

{
  ~Action_UnchartedModeTutorial(this);
  AK::FreeHook(this);
  return;
}


/* Action_UnchartedModeTutorial::StaticGetClass() */

long * Action_UnchartedModeTutorial::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Action_UnchartedModeTutorial",uVar2,StaticNew);
  return sClass;
}


/* Action_UnchartedModeTutorial::GetClass() const */

long * Action_UnchartedModeTutorial::GetClass(void)

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
  (*pcVar3)(plVar1,"Action_UnchartedModeTutorial",uVar2,StaticNew);
  return sClass;
}


/* Action_UnchartedModeTutorial::Action_UnchartedModeTutorial() */

void __thiscall
Action_UnchartedModeTutorial::Action_UnchartedModeTutorial(Action_UnchartedModeTutorial *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_0685a040;
  return;
}


/* Action_UnchartedModeTutorial::StaticNew() */

Action_UnchartedModeTutorial * Action_UnchartedModeTutorial::StaticNew(void)

{
  Action_UnchartedModeTutorial *this;
  
  this = ::operator_new(0x18);
  Action_UnchartedModeTutorial(this);
  return this;
}


/* Action_UnchartedModeTutorial::CreateIfNeed(bool&) */

Action_UnchartedModeTutorial * Action_UnchartedModeTutorial::CreateIfNeed(bool *param_1)

{
  char cVar1;
  ProfileMgr *pPVar2;
  PlayerInfo *pPVar3;
  Action_UnchartedModeTutorial *this;
  
  if (*param_1 == false) {
    pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar2);
    if ((pPVar3 != (PlayerInfo *)0x0) &&
       (cVar1 = PlayerInfo::PlayerHasCompletedTutorial(pPVar3,0x3f), cVar1 == '\0')) {
      pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar2);
      cVar1 = ProfileUtils::HasCompletedSecondWorldLevel(2,false,pPVar3);
      if (cVar1 != '\0') {
        this = ::operator_new(0x18);
        *(undefined8 *)this = 0;
        this[8] = (Action_UnchartedModeTutorial)0x0;
        this[9] = (Action_UnchartedModeTutorial)0x0;
        this[10] = (Action_UnchartedModeTutorial)0x0;
        *(undefined4 *)(this + 0xc) = 0;
        *(undefined4 *)(this + 0x10) = 0;
        Action_UnchartedModeTutorial(this);
        return this;
      }
    }
  }
  return (Action_UnchartedModeTutorial *)0x0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Action_UnchartedModeTutorial::Start() */

void __thiscall Action_UnchartedModeTutorial::Start(Action_UnchartedModeTutorial *this)

{
  undefined *this_00;
  long *plVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTutorialFinished);
  Sexy::Delegate0::Delegate0<Action_UnchartedModeTutorial,void(Action_UnchartedModeTutorial::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::WorldMapTutorialFinished,aDStack_38);
  plVar1 = (long *)LawnApp::GetWorldMap(gLawnApp);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x338))(plVar1,0x3f);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

