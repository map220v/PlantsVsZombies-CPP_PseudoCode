// Class: ActionEnterTutorial


/* ActionEnterTutorial::onTutorialFinished() */

void __thiscall ActionEnterTutorial::onTutorialFinished(ActionEnterTutorial *this)

{
  this[9] = (ActionEnterTutorial)0x1;
  return;
}


/* ActionEnterTutorial::~ActionEnterTutorial() */

void __thiscall ActionEnterTutorial::~ActionEnterTutorial(ActionEnterTutorial *this)

{
  *(undefined ***)this = &PTR_GetClass_06858940;
  std::string::~string((string *)(this + 0x18));
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionEnterTutorial::~ActionEnterTutorial() */

void __thiscall ActionEnterTutorial::~ActionEnterTutorial(ActionEnterTutorial *this)

{
  ~ActionEnterTutorial(this);
  AK::FreeHook(this);
  return;
}


/* ActionEnterTutorial::ActionEnterTutorial() */

void __thiscall ActionEnterTutorial::ActionEnterTutorial(ActionEnterTutorial *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_06858940;
  Set8BytesTo0(this + 0x18);
  *(undefined4 *)(this + 0x20) = 0;
  return;
}


/* ActionEnterTutorial::StaticNew() */

ActionEnterTutorial * ActionEnterTutorial::StaticNew(void)

{
  ActionEnterTutorial *this;
  
  this = ::operator_new(0x28);
  ActionEnterTutorial(this);
  return this;
}


/* ActionEnterTutorial::ActionEnterTutorial(std::string const&) */

void __thiscall ActionEnterTutorial::ActionEnterTutorial(ActionEnterTutorial *this,string *param_1)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_06858940;
  Set8BytesTo0(this + 0x18);
  *(undefined4 *)(this + 0x20) = 0;
  thunk_FUN_05475e00(this + 0x18,param_1);
  *(undefined4 *)(this + 0x20) = 0;
  return;
}


/* ActionEnterTutorial::ActionEnterTutorial(MapTutorialState) */

void __thiscall
ActionEnterTutorial::ActionEnterTutorial(ActionEnterTutorial *this,undefined4 param_2)

{
  undefined **__n;
  
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  __n = &PTR_GetClass_06858940;
  *(undefined ***)this = &PTR_GetClass_06858940;
  Set8BytesTo0((string *)(this + 0x18));
  *(undefined4 *)(this + 0x20) = 0;
  std::string::append((string *)(this + 0x18),"",(size_t)__n);
  *(undefined4 *)(this + 0x20) = param_2;
  return;
}


/* ActionEnterTutorial::StaticGetClass() */

long * ActionEnterTutorial::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ActionEnterTutorial",uVar2,StaticNew);
  return sClass;
}


/* ActionEnterTutorial::GetClass() const */

long * ActionEnterTutorial::GetClass(void)

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
  (*pcVar3)(plVar1,"ActionEnterTutorial",uVar2,StaticNew);
  return sClass;
}


/* ActionEnterTutorial::onSkipTutorialOK(UITutorialSkipDialog*, int) */

void ActionEnterTutorial::onSkipTutorialOK(UITutorialSkipDialog *param_1,int param_2)

{
  char cVar1;
  long lVar2;
  TutorialMgr *this;
  
  lVar2 = Sexy::LazySingleton<TutorialMgr>::GetInstance();
  cVar1 = FUN_0454b2b8(*(undefined1 *)(lVar2 + 0x14));
  if (cVar1 != '\0') {
    return;
  }
  this = (TutorialMgr *)Sexy::LazySingleton<TutorialMgr>::GetInstance();
  TutorialMgr::RequestSkipReward(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionEnterTutorial::onSkippedTutorials() */

void __thiscall ActionEnterTutorial::onSkippedTutorials(ActionEnterTutorial *this)

{
  TutorialMgr *this_00;
  CrazyNPCManager *pCVar1;
  string asStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (TutorialMgr *)Sexy::LazySingleton<TutorialMgr>::GetInstance();
  TutorialMgr::SkipTutorials(this_00);
  pCVar1 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
  if (pCVar1 != (CrazyNPCManager *)0x0) {
    std::string::string(asStack_60,"SKIPPED_TUTORIAL");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onNarrationFinished);
    Sexy::Delegate0::Delegate0<ActionEnterTutorial,void(ActionEnterTutorial::*)()>
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionEnterTutorial::onNotifyTutorialReward() */

void __thiscall ActionEnterTutorial::onNotifyTutorialReward(ActionEnterTutorial *this)

{
  TutorialMgr *this_00;
  CrazyNPCManager *pCVar1;
  string asStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this_00 = (TutorialMgr *)Sexy::LazySingleton<TutorialMgr>::GetInstance();
  TutorialMgr::SkipTutorials(this_00);
  pCVar1 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
  if (pCVar1 != (CrazyNPCManager *)0x0) {
    std::string::string(asStack_60,"SKIPPED_TUTORIAL");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onNarrationFinished);
    Sexy::Delegate0::Delegate0<ActionEnterTutorial,void(ActionEnterTutorial::*)()>
              (aDStack_38,aCStack_50);
    std::string::string(asStack_58,"");
    CrazyNPCManager::StartNarrativeID(pCVar1,asStack_60,aDStack_38,asStack_58);
    std::string::~string(asStack_58);
    nop();
    std::string::~string(asStack_60);
    nop();
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionEnterTutorial::isTutorialValid(MapTutorialState) */

void ActionEnterTutorial::isTutorialValid(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  ActiveItem aAStack_88 [24];
  undefined1 local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x3b) {
    iVar1 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar1);
    ActiveItem::~ActiveItem(aAStack_88);
    uVar2 = local_70;
  }
  else if (param_1 == 0x40) {
    iVar1 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar1);
    ActiveItem::~ActiveItem(aAStack_88);
    uVar2 = local_70;
  }
  else {
    uVar2 = 1;
    if (param_1 == 0x3a) {
      iVar1 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar1);
      ActiveItem::~ActiveItem(aAStack_88);
      uVar2 = local_70;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionEnterTutorial::Start() */

void __thiscall ActionEnterTutorial::Start(ActionEnterTutorial *this)

{
  int iVar1;
  undefined *puVar2;
  ActionEnterTutorial AVar3;
  char cVar4;
  WorldMap *this_00;
  long *plVar5;
  WorldDataManager *this_01;
  long lVar6;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
  AVar3 = (ActionEnterTutorial)WorldMap::IsUserInputEnabled(this_00);
  this[10] = AVar3;
  FUN_0454b284(this_00 + 0x356,1);
  iVar1 = *(int *)(this + 0x20);
  if (iVar1 == 0) {
    this_01 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
    lVar6 = WorldDataManager::FindEventByName(this_01,(string *)(this + 0x18));
    if ((lVar6 != 0) && (cVar4 = isTutorialValid(*(undefined4 *)(lVar6 + 0x70)), cVar4 != '\0')) {
      plVar5 = (long *)LawnApp::GetWorldMap(gLawnApp);
      cVar4 = (**(code **)(*plVar5 + 0x340))(plVar5,lVar6);
      if (cVar4 != '\0') {
        if (*(int *)(lVar6 + 0x70) == 0x13) {
          nop();
          puVar2 = gMessageRouter;
          Sexy::
          MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                    ((ReceivedDataCallback *)this,onNotifyTutorialReward);
          Sexy::Delegate0::Delegate0<ActionEnterTutorial,void(ActionEnterTutorial::*)()>
                    (aDStack_38,aCStack_50);
          MessageRouter::Subscribe((MessageRouter *)puVar2,Message::NotifyTutorialReward,aDStack_38)
          ;
        }
        goto LAB_0455ec34;
      }
    }
  }
  else {
    plVar5 = (long *)LawnApp::GetWorldMap(gLawnApp);
    cVar4 = (**(code **)(*plVar5 + 0x338))(plVar5,iVar1);
    if (cVar4 != '\0') {
LAB_0455ec34:
      puVar2 = gMessageRouter;
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onTutorialFinished);
      Sexy::Delegate0::Delegate0<ActionEnterTutorial,void(ActionEnterTutorial::*)()>
                (aDStack_38,aCStack_50);
      MessageRouter::Subscribe((MessageRouter *)puVar2,Message::WorldMapTutorialFinished,aDStack_38)
      ;
      goto LAB_0455ebb0;
    }
  }
  this[9] = (ActionEnterTutorial)0x1;
LAB_0455ebb0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionEnterTutorial::onNarrationFinished() */

void ActionEnterTutorial::onNarrationFinished(void)

{
  char cVar1;
  ProfileMgr *this;
  PlayerInfo *this_00;
  long lVar2;
  WorldDataManager *this_01;
  long lVar3;
  long *plVar4;
  size_t in_x2;
  string asStack_30 [8];
  string asStack_28 [8];
  PakRecord local_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  PlayerInfo::GetCurrentWorldName(this_00);
  cVar1 = FUN_0547419c(asStack_30);
  if (cVar1 != '\0') {
    std::string::append(asStack_30,"egypt",in_x2);
  }
  lVar2 = LawnApp::GetWorldMap(gLawnApp);
  FUN_05475d88(asStack_28,asStack_30);
  WorldMap::GetTutorialToQueue((WorldMap *)local_20,asStack_28);
  std::string::~string(asStack_28);
  if (local_20[0] != (PakRecord)0x0) {
    this_01 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
    lVar3 = WorldDataManager::FindEventByName(this_01,asStack_18);
    if ((lVar3 != 0) && (cVar1 = isTutorialValid(*(undefined4 *)(lVar3 + 0x70)), cVar1 != '\0')) {
      FUN_0454b284(lVar2 + 0x356,1);
      plVar4 = (long *)LawnApp::GetWorldMap(gLawnApp);
      (**(code **)(*plVar4 + 0x340))(plVar4,lVar3);
    }
  }
  PakRecord::~PakRecord(local_20);
  std::string::~string(asStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionEnterTutorial::CreateIfNeed(bool&) */

void ActionEnterTutorial::CreateIfNeed(bool *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  ProfileMgr *this;
  PlayerInfo *this_00;
  WorldDataManager *this_01;
  long lVar5;
  ActionEnterTutorial *this_02;
  TutorialMgr *pTVar6;
  size_t in_x2;
  string asStack_30 [8];
  string asStack_28 [8];
  string local_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*param_1 == false) {
    RiftUtils::GetCurrentRiftWorld((RiftUtils *)0x0);
    bVar1 = std::operator!=(local_20,"");
    std::string::~string(local_20);
    if (!bVar1) {
      this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
      iVar3 = FUN_0454b274(*(undefined4 *)(this_00 + 0x40));
      if (iVar3 != 0) {
        pTVar6 = (TutorialMgr *)Sexy::LazySingleton<TutorialMgr>::GetInstance();
        uVar4 = FUN_0454b274(*(undefined4 *)(this_00 + 0x40));
        cVar2 = TutorialMgr::HasTutorial(pTVar6,uVar4);
        if (cVar2 == '\0') goto LAB_0455ef74;
      }
      PlayerInfo::GetCurrentWorldName(this_00);
      cVar2 = FUN_0547419c(asStack_30);
      if (cVar2 != '\0') {
        std::string::append(asStack_30,"egypt",in_x2);
      }
      FUN_05475d88(asStack_28,asStack_30);
      WorldMap::GetTutorialToQueue((WorldMap *)local_20,asStack_28);
      std::string::~string(asStack_28);
      if (local_20[0] == (string)0x0) {
LAB_0455ef00:
        lVar5 = Sexy::LazySingleton<TutorialMgr>::GetInstance();
        this_02 = (ActionEnterTutorial *)0x0;
        iVar3 = FUN_0454b2b4(*(undefined4 *)(lVar5 + 0x10));
        if (iVar3 != 0) {
          *param_1 = true;
          lVar5 = Sexy::LazySingleton<TutorialMgr>::GetInstance();
          uVar4 = FUN_0454b2b4(*(undefined4 *)(lVar5 + 0x10));
          this_02 = ::operator_new(0x28);
          ActionEnterTutorial(this_02,uVar4);
        }
      }
      else {
        this_01 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
        lVar5 = WorldDataManager::FindEventByName(this_01,asStack_18);
        if ((lVar5 == 0) || (cVar2 = isTutorialValid(*(undefined4 *)(lVar5 + 0x70)), cVar2 == '\0'))
        goto LAB_0455ef00;
        *param_1 = true;
        this_02 = ::operator_new(0x28);
        ActionEnterTutorial(this_02,asStack_18);
      }
      PakRecord::~PakRecord((PakRecord *)local_20);
      std::string::~string(asStack_30);
      goto LAB_0455ef24;
    }
  }
LAB_0455ef74:
  this_02 = (ActionEnterTutorial *)0x0;
LAB_0455ef24:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_02);
}

