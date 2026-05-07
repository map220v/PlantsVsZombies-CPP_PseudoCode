// Class: ActionPVPTutorial


/* ActionPVPTutorial::onTutorialFinished() */

void __thiscall ActionPVPTutorial::onTutorialFinished(ActionPVPTutorial *this)

{
  this[9] = (ActionPVPTutorial)0x1;
  return;
}


/* ActionPVPTutorial::~ActionPVPTutorial() */

void __thiscall ActionPVPTutorial::~ActionPVPTutorial(ActionPVPTutorial *this)

{
  *(undefined ***)this = &PTR_GetClass_06859540;
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionPVPTutorial::~ActionPVPTutorial() */

void __thiscall ActionPVPTutorial::~ActionPVPTutorial(ActionPVPTutorial *this)

{
  ~ActionPVPTutorial(this);
  AK::FreeHook(this);
  return;
}


/* ActionPVPTutorial::StaticGetClass() */

long * ActionPVPTutorial::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ActionPVPTutorial",uVar2,StaticNew);
  return sClass;
}


/* ActionPVPTutorial::GetClass() const */

long * ActionPVPTutorial::GetClass(void)

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
  (*pcVar3)(plVar1,"ActionPVPTutorial",uVar2,StaticNew);
  return sClass;
}


/* ActionPVPTutorial::ActionPVPTutorial() */

void __thiscall ActionPVPTutorial::ActionPVPTutorial(ActionPVPTutorial *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_06859540;
  Set8BytesTo0(this + 0x18);
  Set8BytesTo0(this + 0x20);
  return;
}


/* ActionPVPTutorial::StaticNew() */

ActionPVPTutorial * ActionPVPTutorial::StaticNew(void)

{
  ActionPVPTutorial *this;
  
  this = ::operator_new(0x30);
  ActionPVPTutorial(this);
  return this;
}


/* ActionPVPTutorial::onNarrationFinished() */

void __thiscall ActionPVPTutorial::onNarrationFinished(ActionPVPTutorial *this)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long *plVar2;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    PlayerInfo::CompleteNarrationEvent(this_01,(string *)(this + 0x20));
  }
  WorldMapAction::RestorePrevInput((WorldMapAction *)this);
  iVar1 = *(int *)(this + 0x28);
  if (iVar1 == 0) {
    this[9] = (ActionPVPTutorial)0x1;
    return;
  }
  plVar2 = (long *)LawnApp::GetWorldMap(gLawnApp);
  (**(code **)(*plVar2 + 0x338))(plVar2,iVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionPVPTutorial::Start() */

void __thiscall ActionPVPTutorial::Start(ActionPVPTutorial *this)

{
  undefined *this_00;
  CrazyNPCManager *pCVar1;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WorldMapAction::DisableInput((WorldMapAction *)this);
  pCVar1 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNarrationFinished);
  Sexy::Delegate0::Delegate0<ActionPVPTutorial,void(ActionPVPTutorial::*)()>(aDStack_38,aCStack_50);
  std::string::string(asStack_58,"");
  CrazyNPCManager::StartNarrativeID(pCVar1,this + 0x18,aDStack_38,asStack_58);
  std::string::~string(asStack_58);
  nop();
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTutorialFinished);
  Sexy::Delegate0::Delegate0<ActionPVPTutorial,void(ActionPVPTutorial::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::WorldMapTutorialFinished,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

