// Class: ActionRegularTutorial


/* ActionRegularTutorial::~ActionRegularTutorial() */

void __thiscall ActionRegularTutorial::~ActionRegularTutorial(ActionRegularTutorial *this)

{
  *(undefined ***)this = &PTR_GetClass_06859640;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionRegularTutorial::~ActionRegularTutorial() */

void __thiscall ActionRegularTutorial::~ActionRegularTutorial(ActionRegularTutorial *this)

{
  ~ActionRegularTutorial(this);
  AK::FreeHook(this);
  return;
}


/* ActionRegularTutorial::ActionRegularTutorial() */

void __thiscall ActionRegularTutorial::ActionRegularTutorial(ActionRegularTutorial *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined ***)this = &PTR_GetClass_06859640;
  return;
}


/* ActionRegularTutorial::StaticNew() */

ActionRegularTutorial * ActionRegularTutorial::StaticNew(void)

{
  ActionRegularTutorial *this;
  
  this = ::operator_new(0x18);
  ActionRegularTutorial(this);
  return this;
}


/* ActionRegularTutorial::Start() */

void __thiscall ActionRegularTutorial::Start(ActionRegularTutorial *this)

{
  long *plVar1;
  
  plVar1 = (long *)LawnApp::GetWorldMap(gLawnApp);
  (**(code **)(*plVar1 + 0x338))(plVar1,*(undefined4 *)(this + 0x14));
  return;
}


/* ActionRegularTutorial::StaticGetClass() */

long * ActionRegularTutorial::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ActionRegularTutorial",uVar2,StaticNew);
  return sClass;
}


/* ActionRegularTutorial::GetClass() const */

long * ActionRegularTutorial::GetClass(void)

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
  (*pcVar3)(plVar1,"ActionRegularTutorial",uVar2,StaticNew);
  return sClass;
}


/* ActionRegularTutorial::ActionRegularTutorial(MapTutorialState) */

void __thiscall
ActionRegularTutorial::ActionRegularTutorial(ActionRegularTutorial *this,undefined4 param_2)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined4 *)(this + 0x14) = param_2;
  *(undefined ***)this = &PTR_GetClass_06859640;
  return;
}


/* ActionRegularTutorial::Update() */

void __thiscall ActionRegularTutorial::Update(ActionRegularTutorial *this)

{
  ProfileMgr *this_00;
  ActionRegularTutorial AVar1;
  long lVar2;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar2 = ProfileMgr::GetCurrentProfile(this_00);
  if (lVar2 != 0) {
    AVar1 = (ActionRegularTutorial)
            PlayerInfo::PlayerHasCompletedTutorial((PlayerInfo *)lVar2,*(undefined4 *)(this + 0x14))
    ;
    this[9] = AVar1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionRegularTutorial::HasWorldUnlockTutorial() */

void ActionRegularTutorial::HasWorldUnlockTutorial(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ProfileMgr *pPVar4;
  PlayerInfo *pPVar5;
  undefined8 uVar6;
  PlayerInfo *pPVar7;
  StarConvertConfig *pSVar8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar4);
  if ((pPVar5 != (PlayerInfo *)0x0) &&
     (cVar1 = PlayerInfo::PlayerHasCompletedTutorial(pPVar5,0x31), cVar1 == '\0')) {
    pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar7 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar4);
    iVar2 = ProfileUtils::UnlockedWorldCount(pPVar7);
    if (iVar2 < 2) {
      iVar2 = PlayerInfo::GetNumStars((int)pPVar5);
      pSVar8 = (StarConvertConfig *)LawnApp::GetStarConvertConfig(gLawnApp);
      std::string::string(asStack_10,"WorldUnlock");
      iVar3 = StarConvertConfig::GetStarRequire(pSVar8,asStack_10,2);
      std::string::~string(asStack_10);
      nop();
      if (iVar3 <= iVar2) {
        uVar6 = 1;
        goto LAB_04555068;
      }
      cVar1 = WorldMapUtils::UniverseIsOpen();
      if (cVar1 != '\0') {
        uVar6 = 1;
        goto LAB_04555068;
      }
    }
  }
  uVar6 = 0;
LAB_04555068:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionRegularTutorial::HasDangerRoomTutorial() */

void ActionRegularTutorial::HasDangerRoomTutorial(void)

{
  char cVar1;
  undefined1 uVar2;
  ProfileMgr *pPVar3;
  PlayerInfo *pPVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar3);
  if ((pPVar4 == (PlayerInfo *)0x0) ||
     (cVar1 = PlayerInfo::PlayerHasCompletedTutorial(pPVar4,0x35), cVar1 != '\0')) {
    uVar2 = 0;
  }
  else {
    std::string::string(asStack_10,"egypt13");
    pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar3);
    uVar2 = ProfileUtils::HasCompletedLevel(asStack_10,false,pPVar4);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* ActionRegularTutorial::GetTutorial() */

undefined4 ActionRegularTutorial::GetTutorial(void)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = HasWorldUnlockTutorial();
  if (cVar1 != '\0') {
    return 0x31;
  }
  cVar1 = HasDangerRoomTutorial();
  uVar2 = 0x35;
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  return uVar2;
}


/* ActionRegularTutorial::CreateIfNeed(bool&) */

ActionRegularTutorial * ActionRegularTutorial::CreateIfNeed(bool *param_1)

{
  int iVar1;
  ActionRegularTutorial *pAVar2;
  
  if (*param_1 == false) {
    iVar1 = GetTutorial();
    if (iVar1 != 0) {
      *param_1 = true;
      pAVar2 = ::operator_new(0x18);
      ActionRegularTutorial(pAVar2,iVar1);
      return pAVar2;
    }
  }
  return (ActionRegularTutorial *)0x0;
}

