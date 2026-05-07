// Class: ActionHardLevelReward


/* ActionHardLevelReward::onHardLevelRewardFinished() */

void __thiscall ActionHardLevelReward::onHardLevelRewardFinished(ActionHardLevelReward *this)

{
  this[9] = (ActionHardLevelReward)0x1;
  return;
}


/* ActionHardLevelReward::~ActionHardLevelReward() */

void __thiscall ActionHardLevelReward::~ActionHardLevelReward(ActionHardLevelReward *this)

{
  *(undefined ***)this = &PTR_GetClass_068595c0;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionHardLevelReward::~ActionHardLevelReward() */

void __thiscall ActionHardLevelReward::~ActionHardLevelReward(ActionHardLevelReward *this)

{
  ~ActionHardLevelReward(this);
  AK::FreeHook(this);
  return;
}


/* ActionHardLevelReward::StaticGetClass() */

long * ActionHardLevelReward::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ActionHardLevelReward",uVar2,StaticNew);
  return sClass;
}


/* ActionHardLevelReward::GetClass() const */

long * ActionHardLevelReward::GetClass(void)

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
  (*pcVar3)(plVar1,"ActionHardLevelReward",uVar2,StaticNew);
  return sClass;
}


/* ActionHardLevelReward::ActionHardLevelReward() */

void __thiscall ActionHardLevelReward::ActionHardLevelReward(ActionHardLevelReward *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_068595c0;
  return;
}


/* ActionHardLevelReward::StaticNew() */

ActionHardLevelReward * ActionHardLevelReward::StaticNew(void)

{
  ActionHardLevelReward *this;
  
  this = ::operator_new(0x18);
  ActionHardLevelReward(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionHardLevelReward::CreateIfNeed(bool&) */

void ActionHardLevelReward::CreateIfNeed(bool *param_1)

{
  long lVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  ActionHardLevelReward *this;
  ProfileMgr *this_00;
  PlayerInfo *pPVar5;
  WorldDataManager *this_01;
  long lVar6;
  string asStack_10 [8];
  long local_8;
  
  lVar1 = gGameStateMgr;
  local_8 = ___stack_chk_guard;
  lVar6 = gGameStateMgr + 0x1eb3;
  cVar2 = FUN_0454b270(*(undefined1 *)(gGameStateMgr + 0x1eb3));
  cVar3 = FUN_0454b26c(*(undefined1 *)(lVar1 + 0x1eb2));
  FUN_0454b368(lVar6);
  FUN_0454b370(gGameStateMgr + 0x1eb2);
  cVar4 = RiftUtils::IsWorldMapButtonsEnabled();
  if (cVar4 == '\0') {
LAB_04554fbc:
    this = (ActionHardLevelReward *)0x0;
  }
  else {
    if (*param_1 != false) {
      MessageRouter::Post((_func_void *)gMessageRouter);
      this = (ActionHardLevelReward *)0x0;
      goto LAB_04554f1c;
    }
    if (cVar2 == '\0') {
joined_r0x04554fb8:
      if (cVar3 == '\0') goto LAB_04554fbc;
    }
    else {
      this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
      if (pPVar5 == (PlayerInfo *)0x0) goto joined_r0x04554fb8;
      this_01 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
      PlantAnimRig_HoyaCordata::getIdleAnimationName();
      lVar6 = WorldDataManager::FindEventByDataName(this_01,asStack_10);
      std::string::~string(asStack_10);
      if (lVar6 == 0) goto joined_r0x04554fb8;
      lVar6 = FUN_0454b260(*(undefined8 *)(lVar6 + 0xe8));
      cVar2 = WorldMapUtils::WorldHasHardModule(*(uchar *)(lVar6 + 0x5c));
      if (cVar2 == '\0') {
        cVar2 = FUN_0454b264(*(undefined1 *)(gGameStateMgr + 0x1eb4));
        if (cVar2 == '\0') goto joined_r0x04554fb8;
      }
      else {
        cVar2 = PlayerInfo::GameFeatureIsUnlocked(pPVar5,0x41);
        if ((cVar2 != '\0') ||
           (cVar2 = PlayerInfo::PlayerHasCompletedTutorial(pPVar5,0x1f), cVar2 == '\0'))
        goto joined_r0x04554fb8;
        PlayerInfo::UnlockGameFeature(pPVar5,0x41);
      }
    }
    this = ::operator_new(0x18);
    *(undefined8 *)this = 0;
    this[8] = (ActionHardLevelReward)0x0;
    this[9] = (ActionHardLevelReward)0x0;
    this[10] = (ActionHardLevelReward)0x0;
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
    ActionHardLevelReward(this);
  }
LAB_04554f1c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionHardLevelReward::Start() */

void __thiscall ActionHardLevelReward::Start(ActionHardLevelReward *this)

{
  undefined *this_00;
  long lVar1;
  char cVar2;
  ProfileMgr *this_01;
  long lVar3;
  undefined8 uVar4;
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar3 = ProfileMgr::GetCurrentProfile(this_01);
  lVar1 = gGameStateMgr;
  if (lVar3 != 0) {
    cVar2 = FUN_0454b264(*(undefined1 *)(gGameStateMgr + 0x1eb4));
    if (cVar2 == '\0') {
      cVar2 = FUN_0454b268(*(undefined1 *)(lVar1 + 0x1eb1));
      if (cVar2 == '\0') {
        uVar4 = LawnApp::GetWorldMap(gLawnApp);
        PlantAnimRig_HoyaCordata::getIdleAnimationName();
        UISelectHardLevelModeWidget::create(uVar4,asStack_50,2);
        std::string::~string(asStack_50);
      }
      else {
        uVar4 = LawnApp::GetWorldMap(gLawnApp);
        PlantAnimRig_HoyaCordata::getIdleAnimationName();
        UISelectHardLevelModeWidget::create(uVar4,asStack_50,1);
        std::string::~string(asStack_50);
      }
    }
    else {
      uVar4 = LawnApp::GetWorldMap(gLawnApp);
      PlantAnimRig_HoyaCordata::getIdleAnimationName();
      UISelectBossLevelModeWidget::create(uVar4,asStack_50,1);
      std::string::~string(asStack_50);
    }
  }
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onHardLevelRewardFinished);
  Sexy::Delegate0::Delegate0<ActionHardLevelReward,void(ActionHardLevelReward::*)()>
            (aDStack_38,asStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::HardLevelRewardClosed,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

