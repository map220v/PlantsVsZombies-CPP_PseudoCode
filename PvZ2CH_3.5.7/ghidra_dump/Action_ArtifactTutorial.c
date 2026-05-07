// Class: Action_ArtifactTutorial


/* Action_ArtifactTutorial::onTutorialFinished() */

void __thiscall Action_ArtifactTutorial::onTutorialFinished(Action_ArtifactTutorial *this)

{
  (**(code **)(*(long *)this + 0x58))();
  return;
}


/* Action_ArtifactTutorial::~Action_ArtifactTutorial() */

void __thiscall Action_ArtifactTutorial::~Action_ArtifactTutorial(Action_ArtifactTutorial *this)

{
  *(undefined ***)this = &PTR_GetClass_06859f40;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* Action_ArtifactTutorial::~Action_ArtifactTutorial() */

void __thiscall Action_ArtifactTutorial::~Action_ArtifactTutorial(Action_ArtifactTutorial *this)

{
  ~Action_ArtifactTutorial(this);
  AK::FreeHook(this);
  return;
}


/* Action_ArtifactTutorial::StaticGetClass() */

long * Action_ArtifactTutorial::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Action_ArtifactTutorial",uVar2,StaticNew);
  return sClass;
}


/* Action_ArtifactTutorial::GetClass() const */

long * Action_ArtifactTutorial::GetClass(void)

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
  (*pcVar3)(plVar1,"Action_ArtifactTutorial",uVar2,StaticNew);
  return sClass;
}


/* Action_ArtifactTutorial::Action_ArtifactTutorial() */

void __thiscall Action_ArtifactTutorial::Action_ArtifactTutorial(Action_ArtifactTutorial *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_06859f40;
  return;
}


/* Action_ArtifactTutorial::StaticNew() */

Action_ArtifactTutorial * Action_ArtifactTutorial::StaticNew(void)

{
  Action_ArtifactTutorial *this;
  
  this = ::operator_new(0x18);
  Action_ArtifactTutorial(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Action_ArtifactTutorial::CreateIfNeed(bool&) */

void Action_ArtifactTutorial::CreateIfNeed(bool *param_1)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this;
  PlayerInfo *this_00;
  NameMapperBase *this_01;
  Action_ArtifactTutorial *this_02;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*param_1 == false) {
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
    if ((this_00 != (PlayerInfo *)0x0) &&
       (cVar1 = PlayerInfo::PlayerHasCompletedTutorial(this_00,0x39), cVar1 == '\0')) {
      this_01 = (NameMapperBase *)ArtifactMapper::GetInstance();
      std::string::string(asStack_10,"artifact_cure");
      iVar2 = NameMapperBase::GetIdForName(this_01,asStack_10);
      std::string::~string(asStack_10);
      nop();
      cVar1 = PlayerInfo::IsArtifactUnlocked(this_00,iVar2);
      if (cVar1 == '\0') {
        std::string::string(asStack_10,"egypt9");
        iVar2 = PlayerInfo::GetWorldMapEventStatus(this_00,asStack_10);
        std::string::~string(asStack_10);
        nop();
        if (2 < iVar2) {
          this_02 = ::operator_new(0x18);
          *(undefined8 *)this_02 = 0;
          this_02[8] = (Action_ArtifactTutorial)0x0;
          this_02[9] = (Action_ArtifactTutorial)0x0;
          this_02[10] = (Action_ArtifactTutorial)0x0;
          *(undefined4 *)(this_02 + 0xc) = 0;
          *(undefined4 *)(this_02 + 0x10) = 0;
          Action_ArtifactTutorial(this_02);
          goto LAB_04555834;
        }
      }
    }
  }
  this_02 = (Action_ArtifactTutorial *)0x0;
LAB_04555834:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_02);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Action_ArtifactTutorial::Start() */

void __thiscall Action_ArtifactTutorial::Start(Action_ArtifactTutorial *this)

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
  Sexy::Delegate0::Delegate0<Action_ArtifactTutorial,void(Action_ArtifactTutorial::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::WorldMapTutorialFinished,aDStack_38);
  plVar1 = (long *)LawnApp::GetWorldMap(gLawnApp);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x338))(plVar1,0x39);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

