// Class: Action_PlantWarsTutorial


/* Action_PlantWarsTutorial::onNarrationFinished() */

void __thiscall Action_PlantWarsTutorial::onNarrationFinished(Action_PlantWarsTutorial *this)

{
  (**(code **)(*(long *)this + 0x58))();
  return;
}


/* Action_PlantWarsTutorial::~Action_PlantWarsTutorial() */

void __thiscall Action_PlantWarsTutorial::~Action_PlantWarsTutorial(Action_PlantWarsTutorial *this)

{
  *(undefined ***)this = &PTR_GetClass_06859940;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* Action_PlantWarsTutorial::~Action_PlantWarsTutorial() */

void __thiscall Action_PlantWarsTutorial::~Action_PlantWarsTutorial(Action_PlantWarsTutorial *this)

{
  ~Action_PlantWarsTutorial(this);
  AK::FreeHook(this);
  return;
}


/* Action_PlantWarsTutorial::StaticGetClass() */

long * Action_PlantWarsTutorial::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Action_PlantWarsTutorial",uVar2,StaticNew);
  return sClass;
}


/* Action_PlantWarsTutorial::GetClass() const */

long * Action_PlantWarsTutorial::GetClass(void)

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
  (*pcVar3)(plVar1,"Action_PlantWarsTutorial",uVar2,StaticNew);
  return sClass;
}


/* Action_PlantWarsTutorial::Action_PlantWarsTutorial() */

void __thiscall Action_PlantWarsTutorial::Action_PlantWarsTutorial(Action_PlantWarsTutorial *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_06859940;
  return;
}


/* Action_PlantWarsTutorial::StaticNew() */

Action_PlantWarsTutorial * Action_PlantWarsTutorial::StaticNew(void)

{
  Action_PlantWarsTutorial *this;
  
  this = ::operator_new(0x18);
  Action_PlantWarsTutorial(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Action_PlantWarsTutorial::Start() */

void __thiscall Action_PlantWarsTutorial::Start(Action_PlantWarsTutorial *this)

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
  Sexy::Delegate0::Delegate0<Action_PlantWarsTutorial,void(Action_PlantWarsTutorial::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::WorldMapTutorialFinished,aDStack_38);
  plVar1 = (long *)LawnApp::GetWorldMap(gLawnApp);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x338))(plVar1,0x52);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Action_PlantWarsTutorial::CreateIfNeed(bool&) */

void Action_PlantWarsTutorial::CreateIfNeed(bool *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ProfileMgr *pPVar4;
  RiftUtils *this;
  PlayerInfo *pPVar5;
  Action_PlantWarsTutorial *this_00;
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
      if ((((!bVar1) && (cVar2 = PlantWarsUtils::IsInPlantWarsWorldMap(), cVar2 == '\0')) &&
          (iVar3 = FUN_0454b274(*(undefined4 *)(this + 0x40)), iVar3 == 0)) &&
         (cVar2 = PlayerInfo::PlayerHasCompletedTutorial((PlayerInfo *)this,0x52), cVar2 == '\0')) {
        pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar4);
        cVar2 = ProfileUtils::HasCompletedSecondWorldLevel(10,false,pPVar5);
        if (cVar2 != '\0') {
          iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
          ActivityManager::GetActiveItem(iVar3);
          ActiveItem::~ActiveItem(aAStack_88);
          if (local_70 != '\0') {
            this_00 = ::operator_new(0x18);
            Action_PlantWarsTutorial(this_00);
            goto LAB_0455ff90;
          }
        }
      }
    }
  }
  this_00 = (Action_PlantWarsTutorial *)0x0;
LAB_0455ff90:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}

