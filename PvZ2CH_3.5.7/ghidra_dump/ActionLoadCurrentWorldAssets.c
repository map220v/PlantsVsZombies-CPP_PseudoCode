// Class: ActionLoadCurrentWorldAssets


/* ActionLoadCurrentWorldAssets::OnWorldMapStateChange(WorldMapState) */

void __thiscall
ActionLoadCurrentWorldAssets::OnWorldMapStateChange(ActionLoadCurrentWorldAssets *this,int param_2)

{
  if (param_2 != 2) {
    this[9] = (ActionLoadCurrentWorldAssets)0x1;
  }
  return;
}


/* ActionLoadCurrentWorldAssets::~ActionLoadCurrentWorldAssets() */

void __thiscall
ActionLoadCurrentWorldAssets::~ActionLoadCurrentWorldAssets(ActionLoadCurrentWorldAssets *this)

{
  *(undefined ***)this = &PTR_GetClass_06858840;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionLoadCurrentWorldAssets::~ActionLoadCurrentWorldAssets() */

void __thiscall
ActionLoadCurrentWorldAssets::~ActionLoadCurrentWorldAssets(ActionLoadCurrentWorldAssets *this)

{
  ~ActionLoadCurrentWorldAssets(this);
  AK::FreeHook(this);
  return;
}


/* ActionLoadCurrentWorldAssets::ActionLoadCurrentWorldAssets() */

void __thiscall
ActionLoadCurrentWorldAssets::ActionLoadCurrentWorldAssets(ActionLoadCurrentWorldAssets *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_06858840;
  return;
}


/* ActionLoadCurrentWorldAssets::StaticNew() */

ActionLoadCurrentWorldAssets * ActionLoadCurrentWorldAssets::StaticNew(void)

{
  ActionLoadCurrentWorldAssets *this;
  
  this = ::operator_new(0x18);
  ActionLoadCurrentWorldAssets(this);
  return this;
}


/* ActionLoadCurrentWorldAssets::StaticGetClass() */

long * ActionLoadCurrentWorldAssets::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ActionLoadCurrentWorldAssets",uVar2,StaticNew);
  return sClass;
}


/* ActionLoadCurrentWorldAssets::GetClass() const */

long * ActionLoadCurrentWorldAssets::GetClass(void)

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
  (*pcVar3)(plVar1,"ActionLoadCurrentWorldAssets",uVar2,StaticNew);
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionLoadCurrentWorldAssets::Start() */

void ActionLoadCurrentWorldAssets::Start(void)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  long in_x0;
  WorldMap *this;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  MapEventItem *pMVar4;
  long lVar5;
  WorldDataManager *pWVar6;
  WorldMap *this_02;
  WorldMapList *this_03;
  string *psVar7;
  string *extraout_x1;
  wchar16 *extraout_x1_00;
  wchar16 *extraout_x1_01;
  wchar16 *pwVar8;
  wchar16 *extraout_x1_02;
  LineBreakCategory *in_x2;
  Sexy *pSVar9;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  undefined1 auVar10 [16];
  Sexy aSStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  Sexy aSStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
  FUN_0454b290(in_x0 + 9,1);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 == (PlayerInfo *)0x0) goto LAB_04554b6c;
  pMVar4 = (MapEventItem *)GameStateMgr::GetAndClearQueuedWorldMapDestination(gGameStateMgr);
  if (pMVar4 != (MapEventItem *)0x0) {
    WorldMap::CenterOnMapEvent(this,pMVar4,false);
    goto LAB_04554b6c;
  }
  PlantAnimRig_HoyaCordata::getIdleAnimationName();
  Sexy::StringToLower(aSStack_10,extraout_x1);
  std::string::~string((string *)aSStack_10);
  bVar1 = std::operator==(asStack_20,"");
  if (bVar1) {
    std::string::append(asStack_20,"egypt1",(size_t)in_x2);
  }
  bVar1 = std::operator==(asStack_20,"");
  if (bVar1) {
LAB_04554bf8:
    pSVar9 = aSStack_10;
    std::string::string(asStack_18,"");
    nop();
    auVar10 = PlayerInfo::GetLastWorldName(this_01);
    Sexy::StringToLower(auVar10._0_8_,auVar10._8_8_);
    thunk_FUN_054757c0(asStack_18,aSStack_10);
    std::string::~string((string *)aSStack_10);
    lVar5 = FUN_05474184(asStack_18);
    if (lVar5 == 0) {
LAB_04554cc0:
      pWVar6 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
      pSVar9 = aSStack_28;
      std::string::string((string *)aSStack_10,"egypt1");
      pMVar4 = (MapEventItem *)WorldDataManager::FindEventByLevelName(pWVar6,(string *)aSStack_10);
      std::string::~string((string *)aSStack_10);
      nop();
    }
    else {
      FUN_05475ad8(asStack_18,&DAT_05594210);
      pWVar6 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
      pMVar4 = (MapEventItem *)WorldDataManager::FindEventByLevelName(pWVar6,asStack_18);
      if (pMVar4 == (MapEventItem *)0x0) goto LAB_04554cc0;
    }
    std::string::~string(asStack_18);
    bVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      ((wchar16 *)this_01,extraout_x1_00,(LineBreakCategory *)pSVar9,in_x3,in_x4);
    if (bVar2 < (pMVar4 != (MapEventItem *)0x0)) {
LAB_04554c88:
      this_02 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
      WorldMap::CenterOnMapEvent(this_02,pMVar4,false);
      cVar3 = WorldMap::IsInState(this,4);
      if (cVar3 == '\0') {
        FUN_0454b290(in_x0 + 9);
      }
    }
  }
  else {
    pWVar6 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
    pMVar4 = (MapEventItem *)WorldDataManager::FindEventByLevelName(pWVar6,asStack_20);
    if (pMVar4 == (MapEventItem *)0x0) goto LAB_04554bf8;
    this_03 = (WorldMapList *)LawnApp::GetWorldMapList(gLawnApp);
    lVar5 = FUN_0454b260(*(undefined8 *)(pMVar4 + 0xe8));
    lVar5 = WorldMapList::GetMapListNodeByName(this_03,(string *)(lVar5 + 0x38));
    PlayerInfo::GetLastWorldName(this_01);
    cVar3 = FUN_0547419c();
    pwVar8 = extraout_x1_01;
    if (cVar3 == '\0') {
      in_x2 = (LineBreakCategory *)FUN_0454b260(*(undefined8 *)(pMVar4 + 0xe8));
      psVar7 = (string *)PlayerInfo::GetLastWorldName(this_01);
      bVar1 = std::operator!=((string *)(in_x2 + 0x38),psVar7);
      pwVar8 = extraout_x1_02;
      if (bVar1) goto LAB_04554bf8;
    }
    if (*(char *)(lVar5 + 0x32) != '\0') goto LAB_04554bf8;
    cVar3 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      ((wchar16 *)this_01,pwVar8,in_x2,in_x3,in_x4);
    if (cVar3 == '\0') goto LAB_04554c88;
  }
  std::string::~string(asStack_20);
LAB_04554b6c:
  WorldMap::OnLoadingWorldAssets(this);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionLoadCurrentWorldAssets::CreateIfNeed(bool&) */

void ActionLoadCurrentWorldAssets::CreateIfNeed(bool *param_1)

{
  char cVar1;
  wchar16 *pwVar2;
  ActionLoadCurrentWorldAssets *this;
  LineBreakCategory *pLVar3;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  LineBreakCategory aLStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  pLVar3 = aLStack_18;
  local_8 = ___stack_chk_guard;
  pwVar2 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  std::string::string(asStack_10,"AutoCompleteMode");
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar2,(wchar16 *)asStack_10,pLVar3,in_x3,in_x4);
  std::string::~string(asStack_10);
  nop();
  if (cVar1 == '\0') {
    this = ::operator_new(0x18);
    ActionLoadCurrentWorldAssets(this);
  }
  else {
    this = (ActionLoadCurrentWorldAssets *)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}

