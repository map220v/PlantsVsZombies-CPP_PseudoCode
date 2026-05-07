// Class: Action_NewPvPTutorial


/* Action_NewPvPTutorial::onNarrationFinished() */

void __thiscall Action_NewPvPTutorial::onNarrationFinished(Action_NewPvPTutorial *this)

{
  (**(code **)(*(long *)this + 0x58))();
  return;
}


/* Action_NewPvPTutorial::~Action_NewPvPTutorial() */

void __thiscall Action_NewPvPTutorial::~Action_NewPvPTutorial(Action_NewPvPTutorial *this)

{
  *(undefined ***)this = &PTR_GetClass_068598c0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* Action_NewPvPTutorial::~Action_NewPvPTutorial() */

void __thiscall Action_NewPvPTutorial::~Action_NewPvPTutorial(Action_NewPvPTutorial *this)

{
  ~Action_NewPvPTutorial(this);
  AK::FreeHook(this);
  return;
}


/* Action_NewPvPTutorial::StaticGetClass() */

long * Action_NewPvPTutorial::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Action_NewPvPTutorial",uVar2,StaticNew);
  return sClass;
}


/* Action_NewPvPTutorial::GetClass() const */

long * Action_NewPvPTutorial::GetClass(void)

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
  (*pcVar3)(plVar1,"Action_NewPvPTutorial",uVar2,StaticNew);
  return sClass;
}


/* Action_NewPvPTutorial::Action_NewPvPTutorial() */

void __thiscall Action_NewPvPTutorial::Action_NewPvPTutorial(Action_NewPvPTutorial *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_068598c0;
  return;
}


/* Action_NewPvPTutorial::StaticNew() */

Action_NewPvPTutorial * Action_NewPvPTutorial::StaticNew(void)

{
  Action_NewPvPTutorial *this;
  
  this = ::operator_new(0x18);
  Action_NewPvPTutorial(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Action_NewPvPTutorial::Start() */

void __thiscall Action_NewPvPTutorial::Start(Action_NewPvPTutorial *this)

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
            ((ReceivedDataCallback *)this,onNarrationFinished);
  Sexy::Delegate0::Delegate0<Action_NewPvPTutorial,void(Action_NewPvPTutorial::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::WorldMapTutorialFinished,aDStack_38);
  plVar1 = (long *)LawnApp::GetWorldMap(gLawnApp);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x338))(plVar1,0x44);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Action_NewPvPTutorial::CreateIfNeed(bool&) */

void Action_NewPvPTutorial::CreateIfNeed(bool *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ProfileMgr *pPVar4;
  RiftUtils *this;
  PlayerInfo *pPVar5;
  Action_NewPvPTutorial *this_00;
  string asStack_90 [8];
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*param_1 == false) {
    pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this = (RiftUtils *)ProfileMgr::GetCurrentProfile(pPVar4);
    if (this != (RiftUtils *)0x0) {
      RiftUtils::GetCurrentRiftWorld(this);
      bVar1 = std::operator!=(asStack_90,"");
      std::string::~string(asStack_90);
      if (((!bVar1) && (iVar3 = FUN_0454b274(*(undefined4 *)(this + 0x40)), iVar3 == 0)) &&
         (cVar2 = PlayerInfo::PlayerHasCompletedTutorial((PlayerInfo *)this,0x44), cVar2 == '\0')) {
        pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar4);
        cVar2 = ProfileUtils::HasCompletedSecondWorldLevel(9,false,pPVar5);
        if (cVar2 != '\0') {
          iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
          ActivityManager::GetActiveItem(iVar3);
          ActiveItem::~ActiveItem(aAStack_88);
          if (local_70 != '\0') {
            this_00 = ::operator_new(0x18);
            Action_NewPvPTutorial(this_00);
            goto LAB_0455fe78;
          }
        }
      }
    }
  }
  this_00 = (Action_NewPvPTutorial *)0x0;
LAB_0455fe78:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}

