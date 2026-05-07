// Class: Action_GeneEnhancementTutorial


/* Action_GeneEnhancementTutorial::onNarrationFinished() */

void __thiscall
Action_GeneEnhancementTutorial::onNarrationFinished(Action_GeneEnhancementTutorial *this)

{
  (**(code **)(*(long *)this + 0x58))();
  return;
}


/* Action_GeneEnhancementTutorial::~Action_GeneEnhancementTutorial() */

void __thiscall
Action_GeneEnhancementTutorial::~Action_GeneEnhancementTutorial
          (Action_GeneEnhancementTutorial *this)

{
  *(undefined ***)this = &PTR_GetClass_06859840;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* Action_GeneEnhancementTutorial::~Action_GeneEnhancementTutorial() */

void __thiscall
Action_GeneEnhancementTutorial::~Action_GeneEnhancementTutorial
          (Action_GeneEnhancementTutorial *this)

{
  ~Action_GeneEnhancementTutorial(this);
  AK::FreeHook(this);
  return;
}


/* Action_GeneEnhancementTutorial::StaticGetClass() */

long * Action_GeneEnhancementTutorial::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Action_GeneEnhancementTutorial",uVar2,StaticNew);
  return sClass;
}


/* Action_GeneEnhancementTutorial::GetClass() const */

long * Action_GeneEnhancementTutorial::GetClass(void)

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
  (*pcVar3)(plVar1,"Action_GeneEnhancementTutorial",uVar2,StaticNew);
  return sClass;
}


/* Action_GeneEnhancementTutorial::Action_GeneEnhancementTutorial() */

void __thiscall
Action_GeneEnhancementTutorial::Action_GeneEnhancementTutorial(Action_GeneEnhancementTutorial *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_06859840;
  return;
}


/* Action_GeneEnhancementTutorial::StaticNew() */

Action_GeneEnhancementTutorial * Action_GeneEnhancementTutorial::StaticNew(void)

{
  Action_GeneEnhancementTutorial *this;
  
  this = ::operator_new(0x18);
  Action_GeneEnhancementTutorial(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Action_GeneEnhancementTutorial::CreateIfNeed(bool&) */

void Action_GeneEnhancementTutorial::CreateIfNeed(bool *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ProfileMgr *pPVar4;
  RiftUtils *this;
  PlayerInfo *pPVar5;
  Action_GeneEnhancementTutorial *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*param_1 == false) {
    pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this = (RiftUtils *)ProfileMgr::GetCurrentProfile(pPVar4);
    if (this != (RiftUtils *)0x0) {
      RiftUtils::GetCurrentRiftWorld(this);
      bVar1 = std::operator!=(asStack_10,"");
      std::string::~string(asStack_10);
      if (((!bVar1) && (iVar3 = FUN_0454b274(*(undefined4 *)(this + 0x40)), iVar3 == 0)) &&
         (cVar2 = PlayerInfo::PlayerHasCompletedTutorial((PlayerInfo *)this,0x45), cVar2 == '\0')) {
        pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar4);
        cVar2 = ProfileUtils::HasCompletedSecondWorldLevel(8,false,pPVar5);
        if (cVar2 != '\0') {
          this_00 = ::operator_new(0x18);
          Action_GeneEnhancementTutorial(this_00);
          goto LAB_04555348;
        }
      }
    }
  }
  this_00 = (Action_GeneEnhancementTutorial *)0x0;
LAB_04555348:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Action_GeneEnhancementTutorial::Start() */

void __thiscall Action_GeneEnhancementTutorial::Start(Action_GeneEnhancementTutorial *this)

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
  Sexy::Delegate0::
  Delegate0<Action_GeneEnhancementTutorial,void(Action_GeneEnhancementTutorial::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::WorldMapTutorialFinished,aDStack_38);
  plVar1 = (long *)LawnApp::GetWorldMap(gLawnApp);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x338))(plVar1,0x45);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

