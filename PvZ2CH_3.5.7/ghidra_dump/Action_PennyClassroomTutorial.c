// Class: Action_PennyClassroomTutorial


/* Action_PennyClassroomTutorial::onTutorialFinished() */

void __thiscall
Action_PennyClassroomTutorial::onTutorialFinished(Action_PennyClassroomTutorial *this)

{
  (**(code **)(*(long *)this + 0x58))();
  return;
}


/* Action_PennyClassroomTutorial::~Action_PennyClassroomTutorial() */

void __thiscall
Action_PennyClassroomTutorial::~Action_PennyClassroomTutorial(Action_PennyClassroomTutorial *this)

{
  *(undefined ***)this = &PTR_GetClass_06859fc0;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* Action_PennyClassroomTutorial::~Action_PennyClassroomTutorial() */

void __thiscall
Action_PennyClassroomTutorial::~Action_PennyClassroomTutorial(Action_PennyClassroomTutorial *this)

{
  ~Action_PennyClassroomTutorial(this);
  AK::FreeHook(this);
  return;
}


/* Action_PennyClassroomTutorial::StaticGetClass() */

long * Action_PennyClassroomTutorial::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Action_PennyClassroomTutorial",uVar2,StaticNew);
  return sClass;
}


/* Action_PennyClassroomTutorial::GetClass() const */

long * Action_PennyClassroomTutorial::GetClass(void)

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
  (*pcVar3)(plVar1,"Action_PennyClassroomTutorial",uVar2,StaticNew);
  return sClass;
}


/* Action_PennyClassroomTutorial::Action_PennyClassroomTutorial() */

void __thiscall
Action_PennyClassroomTutorial::Action_PennyClassroomTutorial(Action_PennyClassroomTutorial *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_06859fc0;
  return;
}


/* Action_PennyClassroomTutorial::StaticNew() */

Action_PennyClassroomTutorial * Action_PennyClassroomTutorial::StaticNew(void)

{
  Action_PennyClassroomTutorial *this;
  
  this = ::operator_new(0x18);
  Action_PennyClassroomTutorial(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Action_PennyClassroomTutorial::CreateIfNeed(bool&) */

void Action_PennyClassroomTutorial::CreateIfNeed(bool *param_1)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this;
  PlayerInfo *this_00;
  Action_PennyClassroomTutorial *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*param_1 == false) {
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
    if ((this_00 != (PlayerInfo *)0x0) &&
       (cVar1 = PlayerInfo::PlayerHasCompletedTutorial(this_00,0x3e), cVar1 == '\0')) {
      std::string::string(asStack_10,"egypt7");
      iVar2 = PlayerInfo::GetWorldMapEventStatus(this_00,asStack_10);
      std::string::~string(asStack_10);
      nop();
      if (2 < iVar2) {
        this_01 = ::operator_new(0x18);
        *(undefined8 *)this_01 = 0;
        this_01[8] = (Action_PennyClassroomTutorial)0x0;
        this_01[9] = (Action_PennyClassroomTutorial)0x0;
        this_01[10] = (Action_PennyClassroomTutorial)0x0;
        *(undefined4 *)(this_01 + 0xc) = 0;
        *(undefined4 *)(this_01 + 0x10) = 0;
        Action_PennyClassroomTutorial(this_01);
        goto LAB_04555924;
      }
    }
  }
  this_01 = (Action_PennyClassroomTutorial *)0x0;
LAB_04555924:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_01);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Action_PennyClassroomTutorial::Start() */

void __thiscall Action_PennyClassroomTutorial::Start(Action_PennyClassroomTutorial *this)

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
  Sexy::Delegate0::Delegate0<Action_PennyClassroomTutorial,void(Action_PennyClassroomTutorial::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::WorldMapTutorialFinished,aDStack_38);
  plVar1 = (long *)LawnApp::GetWorldMap(gLawnApp);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x338))(plVar1,0x3e);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

