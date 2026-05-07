// Class: Action_JoustTutorial


/* Action_JoustTutorial::~Action_JoustTutorial() */

void __thiscall Action_JoustTutorial::~Action_JoustTutorial(Action_JoustTutorial *this)

{
  *(undefined ***)this = &PTR_GetClass_06859ec0;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* Action_JoustTutorial::~Action_JoustTutorial() */

void __thiscall Action_JoustTutorial::~Action_JoustTutorial(Action_JoustTutorial *this)

{
  ~Action_JoustTutorial(this);
  AK::FreeHook(this);
  return;
}


/* Action_JoustTutorial::continueTutorial() */

void Action_JoustTutorial::continueTutorial(void)

{
  long *plVar1;
  
  LawnApp::KillPVZ2Dialog(gLawnApp);
  plVar1 = (long *)LawnApp::GetWorldMap(gLawnApp);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x338))(plVar1,0x23);
  }
  return;
}


/* Action_JoustTutorial::StaticGetClass() */

long * Action_JoustTutorial::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Action_JoustTutorial",uVar2,StaticNew);
  return sClass;
}


/* Action_JoustTutorial::GetClass() const */

long * Action_JoustTutorial::GetClass(void)

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
  (*pcVar3)(plVar1,"Action_JoustTutorial",uVar2,StaticNew);
  return sClass;
}


/* Action_JoustTutorial::Action_JoustTutorial() */

void __thiscall Action_JoustTutorial::Action_JoustTutorial(Action_JoustTutorial *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_06859ec0;
  return;
}


/* Action_JoustTutorial::StaticNew() */

Action_JoustTutorial * Action_JoustTutorial::StaticNew(void)

{
  Action_JoustTutorial *this;
  
  this = ::operator_new(0x18);
  Action_JoustTutorial(this);
  return this;
}


/* Action_JoustTutorial::skipTutorial() */

void Action_JoustTutorial::skipTutorial(void)

{
  ProfileMgr *this;
  PlayerInfo *pPVar1;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar1 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (pPVar1 != (PlayerInfo *)0x0) {
    PlayerInfo::SetActiveTutorial(pPVar1,0x23);
    PlayerInfo::CompleteTutorial(pPVar1,0x23);
  }
  LawnApp::KillPVZ2Dialog(gLawnApp);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Action_JoustTutorial::onNarrationFinished() */

void __thiscall Action_JoustTutorial::onNarrationFinished(Action_JoustTutorial *this)

{
  LawnApp *this_00;
  PVZ2UIDialog *pPVar1;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_58,&DAT_056f11a8,auStack_68);
  FUN_05478178(awStack_50,L"[JOUST_TUTORIAL_SKIP_DES]",auStack_60);
  pPVar1 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05476c50(awStack_58);
  nop();
  FUN_05478178(awStack_58,L"[DIALOG_STRING_NO]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,continueTutorial);
  Sexy::Delegate0::Delegate0<Action_JoustTutorial,void(Action_JoustTutorial::*)()>
            (aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,1);
  FUN_05476c50(awStack_58);
  nop();
  FUN_05478178(awStack_58,L"[DIALOG_STRING_YES]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,skipTutorial);
  Sexy::Delegate0::Delegate0<Action_JoustTutorial,void(Action_JoustTutorial::*)()>
            (aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,0);
  FUN_05476c50(awStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Action_JoustTutorial::Start() */

void __thiscall Action_JoustTutorial::Start(Action_JoustTutorial *this)

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
    std::string::string(asStack_60,"JOUST_OPEN_TUTORIAL");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onNarrationFinished);
    Sexy::Delegate0::Delegate0<Action_JoustTutorial,void(Action_JoustTutorial::*)()>
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

