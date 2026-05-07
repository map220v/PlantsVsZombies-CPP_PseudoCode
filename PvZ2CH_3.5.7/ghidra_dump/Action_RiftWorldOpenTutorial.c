// Class: Action_RiftWorldOpenTutorial


/* Action_RiftWorldOpenTutorial::~Action_RiftWorldOpenTutorial() */

void __thiscall
Action_RiftWorldOpenTutorial::~Action_RiftWorldOpenTutorial(Action_RiftWorldOpenTutorial *this)

{
  *(undefined ***)this = &PTR_GetClass_0685af40;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* Action_RiftWorldOpenTutorial::~Action_RiftWorldOpenTutorial() */

void __thiscall
Action_RiftWorldOpenTutorial::~Action_RiftWorldOpenTutorial(Action_RiftWorldOpenTutorial *this)

{
  ~Action_RiftWorldOpenTutorial(this);
  AK::FreeHook(this);
  return;
}


/* Action_RiftWorldOpenTutorial::onNarrationFinished() */

void Action_RiftWorldOpenTutorial::onNarrationFinished(void)

{
  long *plVar1;
  
  plVar1 = (long *)LawnApp::GetWorldMap(gLawnApp);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x338))(plVar1,0x2a);
    Sexy::OutputDebugStrF((wchar_t *)"Action_RiftWorldOpenTutorial::onNarrationFinished()");
    return;
  }
  return;
}


/* Action_RiftWorldOpenTutorial::StaticGetClass() */

long * Action_RiftWorldOpenTutorial::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Action_RiftWorldOpenTutorial",uVar2,StaticNew);
  return sClass;
}


/* Action_RiftWorldOpenTutorial::GetClass() const */

long * Action_RiftWorldOpenTutorial::GetClass(void)

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
  (*pcVar3)(plVar1,"Action_RiftWorldOpenTutorial",uVar2,StaticNew);
  return sClass;
}


/* Action_RiftWorldOpenTutorial::Action_RiftWorldOpenTutorial() */

void __thiscall
Action_RiftWorldOpenTutorial::Action_RiftWorldOpenTutorial(Action_RiftWorldOpenTutorial *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_0685af40;
  return;
}


/* Action_RiftWorldOpenTutorial::StaticNew() */

Action_RiftWorldOpenTutorial * Action_RiftWorldOpenTutorial::StaticNew(void)

{
  Action_RiftWorldOpenTutorial *this;
  
  this = ::operator_new(0x18);
  Action_RiftWorldOpenTutorial(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Action_RiftWorldOpenTutorial::Start() */

void __thiscall Action_RiftWorldOpenTutorial::Start(Action_RiftWorldOpenTutorial *this)

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
    std::string::string(asStack_60,"RIFT_WORLD_OPEN_TUTORIAL");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onNarrationFinished);
    Sexy::Delegate0::Delegate0<Action_RiftWorldOpenTutorial,void(Action_RiftWorldOpenTutorial::*)()>
              (aDStack_38,aCStack_50);
    std::string::string(asStack_58,"");
    CrazyNPCManager::StartNarrativeID(pCVar1,asStack_60,aDStack_38,asStack_58);
    std::string::~string(asStack_58);
    nop();
    std::string::~string(asStack_60);
    nop();
    s_HasStartTutorial = 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

