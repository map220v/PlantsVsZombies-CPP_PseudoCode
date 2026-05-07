// Class: Action_NewAvatarTutorial


/* Action_NewAvatarTutorial::~Action_NewAvatarTutorial() */

void __thiscall Action_NewAvatarTutorial::~Action_NewAvatarTutorial(Action_NewAvatarTutorial *this)

{
  *(undefined ***)this = &PTR_GetClass_068597c0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* Action_NewAvatarTutorial::~Action_NewAvatarTutorial() */

void __thiscall Action_NewAvatarTutorial::~Action_NewAvatarTutorial(Action_NewAvatarTutorial *this)

{
  ~Action_NewAvatarTutorial(this);
  AK::FreeHook(this);
  return;
}


/* Action_NewAvatarTutorial::onNarrationFinished() */

void Action_NewAvatarTutorial::onNarrationFinished(void)

{
  long *plVar1;
  
  plVar1 = (long *)LawnApp::GetWorldMap(gLawnApp);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x338))(plVar1,0x36);
  }
  return;
}


/* Action_NewAvatarTutorial::StaticGetClass() */

long * Action_NewAvatarTutorial::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Action_NewAvatarTutorial",uVar2,StaticNew);
  return sClass;
}


/* Action_NewAvatarTutorial::GetClass() const */

long * Action_NewAvatarTutorial::GetClass(void)

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
  (*pcVar3)(plVar1,"Action_NewAvatarTutorial",uVar2,StaticNew);
  return sClass;
}


/* Action_NewAvatarTutorial::Action_NewAvatarTutorial() */

void __thiscall Action_NewAvatarTutorial::Action_NewAvatarTutorial(Action_NewAvatarTutorial *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_068597c0;
  return;
}


/* Action_NewAvatarTutorial::StaticNew() */

Action_NewAvatarTutorial * Action_NewAvatarTutorial::StaticNew(void)

{
  Action_NewAvatarTutorial *this;
  
  this = ::operator_new(0x18);
  Action_NewAvatarTutorial(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Action_NewAvatarTutorial::Start() */

void __thiscall Action_NewAvatarTutorial::Start(Action_NewAvatarTutorial *this)

{
  CrazyNPCManager *pCVar1;
  string asStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
  if (pCVar1 != (CrazyNPCManager *)0x0) {
    std::string::string(asStack_60,"NEWAVATAR_OPEN_TUTORIAL");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onNarrationFinished);
    Sexy::Delegate0::Delegate0<Action_NewAvatarTutorial,void(Action_NewAvatarTutorial::*)()>
              (aDStack_38,aCStack_50);
    std::string::string(asStack_58,"");
    CrazyNPCManager::StartNarrativeID(pCVar1,asStack_60,aDStack_38,asStack_58);
    std::string::~string(asStack_58);
    nop();
    std::string::~string(asStack_60);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

