// Class: Action_TGTutorial


/* Action_TGTutorial::OnLuaNotify(std::string const&) */

void Action_TGTutorial::OnLuaNotify(string *param_1)

{
  return;
}


/* Action_TGTutorial::~Action_TGTutorial() */

void __thiscall Action_TGTutorial::~Action_TGTutorial(Action_TGTutorial *this)

{
  *(undefined ***)this = &PTR_GetClass_06859740;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* Action_TGTutorial::~Action_TGTutorial() */

void __thiscall Action_TGTutorial::~Action_TGTutorial(Action_TGTutorial *this)

{
  ~Action_TGTutorial(this);
  AK::FreeHook(this);
  return;
}


/* Action_TGTutorial::onNarrationFinished() */

void Action_TGTutorial::onNarrationFinished(void)

{
  long *plVar1;
  
  plVar1 = (long *)LawnApp::GetWorldMap(gLawnApp);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x338))(plVar1,0x29);
  }
  return;
}


/* Action_TGTutorial::StaticGetClass() */

long * Action_TGTutorial::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Action_TGTutorial",uVar2,StaticNew);
  return sClass;
}


/* Action_TGTutorial::GetClass() const */

long * Action_TGTutorial::GetClass(void)

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
  (*pcVar3)(plVar1,"Action_TGTutorial",uVar2,StaticNew);
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Action_TGTutorial::Start() */

void __thiscall Action_TGTutorial::Start(Action_TGTutorial *this)

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
    std::string::string(asStack_60,"TRANS_GENOSIS_OPEN_TUTORIAL");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onNarrationFinished);
    Sexy::Delegate0::Delegate0<Action_TGTutorial,void(Action_TGTutorial::*)()>
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


/* Action_TGTutorial::Action_TGTutorial() */

void __thiscall Action_TGTutorial::Action_TGTutorial(Action_TGTutorial *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_06859740;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnLuaNotify);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<Action_TGTutorial,void(Action_TGTutorial::*)(std::string_const&)>>
            ((MessageRouter *)puVar1,Message::OnLuaNotify,&local_40);
  return;
}


/* Action_TGTutorial::StaticNew() */

Action_TGTutorial * Action_TGTutorial::StaticNew(void)

{
  Action_TGTutorial *this;
  
  this = ::operator_new(0x18);
  Action_TGTutorial(this);
  return this;
}

