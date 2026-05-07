// Class: Action_PlantFamilyTutorial


/* Action_PlantFamilyTutorial::OnLuaNotify(std::string const&) */

void Action_PlantFamilyTutorial::OnLuaNotify(string *param_1)

{
  return;
}


/* Action_PlantFamilyTutorial::~Action_PlantFamilyTutorial() */

void __thiscall
Action_PlantFamilyTutorial::~Action_PlantFamilyTutorial(Action_PlantFamilyTutorial *this)

{
  *(undefined ***)this = &PTR_GetClass_068599c0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* Action_PlantFamilyTutorial::~Action_PlantFamilyTutorial() */

void __thiscall
Action_PlantFamilyTutorial::~Action_PlantFamilyTutorial(Action_PlantFamilyTutorial *this)

{
  ~Action_PlantFamilyTutorial(this);
  AK::FreeHook(this);
  return;
}


/* Action_PlantFamilyTutorial::onNarrationFinished() */

void __thiscall Action_PlantFamilyTutorial::onNarrationFinished(Action_PlantFamilyTutorial *this)

{
  long *plVar1;
  
  WorldMapAction::RestorePrevInput((WorldMapAction *)this);
  plVar1 = (long *)LawnApp::GetWorldMap(gLawnApp);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x338))(plVar1,0x21);
  }
  return;
}


/* Action_PlantFamilyTutorial::StaticGetClass() */

long * Action_PlantFamilyTutorial::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Action_PlantFamilyTutorial",uVar2,StaticNew);
  return sClass;
}


/* Action_PlantFamilyTutorial::GetClass() const */

long * Action_PlantFamilyTutorial::GetClass(void)

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
  (*pcVar3)(plVar1,"Action_PlantFamilyTutorial",uVar2,StaticNew);
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Action_PlantFamilyTutorial::Start() */

void __thiscall Action_PlantFamilyTutorial::Start(Action_PlantFamilyTutorial *this)

{
  PlantFamilyMgr *this_00;
  long lVar1;
  CrazyNPCManager *pCVar2;
  string asStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PlantFamilyMgr *)Sexy::LazySingleton<PlantFamilyMgr>::GetInstance();
  PlantFamilyMgr::EnableFamily(this_00);
  lVar1 = LawnApp::GetNarrationSystem(gLawnApp);
  if (lVar1 != 0) {
    WorldMapAction::DisableInput((WorldMapAction *)this);
    pCVar2 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    std::string::string(asStack_60,"PLANT_FAMILY_TUTORIAL_ENABLE");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onNarrationFinished);
    Sexy::Delegate0::Delegate0<Action_PlantFamilyTutorial,void(Action_PlantFamilyTutorial::*)()>
              (aDStack_38,aCStack_50);
    std::string::string(asStack_58,"");
    CrazyNPCManager::StartNarrativeID(pCVar2,asStack_60,aDStack_38,asStack_58);
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


/* Action_PlantFamilyTutorial::Action_PlantFamilyTutorial() */

void __thiscall
Action_PlantFamilyTutorial::Action_PlantFamilyTutorial(Action_PlantFamilyTutorial *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_068599c0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnLuaNotify);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<Action_PlantFamilyTutorial,void(Action_PlantFamilyTutorial::*)(std::string_const&)>>
            ((MessageRouter *)puVar1,Message::OnLuaNotify,&local_40);
  return;
}


/* Action_PlantFamilyTutorial::StaticNew() */

Action_PlantFamilyTutorial * Action_PlantFamilyTutorial::StaticNew(void)

{
  Action_PlantFamilyTutorial *this;
  
  this = ::operator_new(0x18);
  Action_PlantFamilyTutorial(this);
  return this;
}

