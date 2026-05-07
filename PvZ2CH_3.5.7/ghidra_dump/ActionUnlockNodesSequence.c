// Class: ActionUnlockNodesSequence


/* ActionUnlockNodesSequence::Update() */

void __thiscall ActionUnlockNodesSequence::Update(ActionUnlockNodesSequence *this)

{
  this[9] = (ActionUnlockNodesSequence)(*(int *)(this + 0x14) == 0);
  return;
}


/* ActionUnlockNodesSequence::onMapPathEnded() */

void __thiscall ActionUnlockNodesSequence::onMapPathEnded(ActionUnlockNodesSequence *this)

{
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + -1;
  return;
}


/* ActionUnlockNodesSequence::onMapPathStarted() */

void __thiscall ActionUnlockNodesSequence::onMapPathStarted(ActionUnlockNodesSequence *this)

{
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
  return;
}


/* ActionUnlockNodesSequence::~ActionUnlockNodesSequence() */

void __thiscall
ActionUnlockNodesSequence::~ActionUnlockNodesSequence(ActionUnlockNodesSequence *this)

{
  *(undefined ***)this = &PTR_GetClass_068585c0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::string::~string((string *)(this + 0x18));
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionUnlockNodesSequence::~ActionUnlockNodesSequence() */

void __thiscall
ActionUnlockNodesSequence::~ActionUnlockNodesSequence(ActionUnlockNodesSequence *this)

{
  ~ActionUnlockNodesSequence(this);
  AK::FreeHook(this);
  return;
}


/* ActionUnlockNodesSequence::StaticGetClass() */

long * ActionUnlockNodesSequence::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ActionUnlockNodesSequence",uVar2,StaticNew);
  return sClass;
}


/* ActionUnlockNodesSequence::GetClass() const */

long * ActionUnlockNodesSequence::GetClass(void)

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
  (*pcVar3)(plVar1,"ActionUnlockNodesSequence",uVar2,StaticNew);
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionUnlockNodesSequence::ActionUnlockNodesSequence(std::string const&) */

void __thiscall
ActionUnlockNodesSequence::ActionUnlockNodesSequence
          (ActionUnlockNodesSequence *this,string *param_1)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined ***)this = &PTR_GetClass_068585c0;
  FUN_05475d88(this + 0x18,param_1);
  this[0x20] = (ActionUnlockNodesSequence)0x0;
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyLoadedWorldResources);
  Sexy::Delegate0::Delegate0<ActionUnlockNodesSequence,void(ActionUnlockNodesSequence::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::NotifyLoadedWorldResources,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionUnlockNodesSequence::Start() */

void ActionUnlockNodesSequence::Start(void)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  WorldMapAction *in_x0;
  ProfileMgr *this;
  WorldDataManager *this_00;
  MapEventItem *pMVar5;
  undefined8 uVar6;
  WorldMap *this_01;
  Delegate0 *this_02;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  undefined1 auVar7 [16];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_02 = aDStack_38;
  local_8 = ___stack_chk_guard;
  WorldMapAction::DisableInput(in_x0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)in_x0,onMapPathStarted);
  Sexy::Delegate0::Delegate0<ActionUnlockNodesSequence,void(ActionUnlockNodesSequence::*)()>
            (this_02,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::WorldMapMapPathStarted,this_02);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)in_x0,onMapPathEnded);
  Sexy::Delegate0::Delegate0<ActionUnlockNodesSequence,void(ActionUnlockNodesSequence::*)()>
            (this_02,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::WorldMapMapPathEnded,this_02);
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  auVar7 = ProfileMgr::GetCurrentProfile(this);
  cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (auVar7._0_8_,auVar7._8_8_,(LineBreakCategory *)this_02,in_x3,in_x4);
  if (cVar2 == '\0') {
    cVar2 = FUN_0547419c((string *)(in_x0 + 0x18));
    if (cVar2 == '\0') {
      this_00 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
      bVar3 = (bool)WorldDataManager::FindEvent(this_00,(string *)(in_x0 + 0x18));
      pMVar5 = (MapEventItem *)LawnApp::GetWorldMap(gLawnApp);
      WorldMap::ActivateMapPathGroupWithEvent(pMVar5,bVar3);
      uVar6 = LawnApp::GetLastCompletedLevel(gLawnApp);
      pMVar5 = (MapEventItem *)WorldMapUtils::GetNextWorldEventOfType(uVar6,1,0);
      if ((pMVar5 != (MapEventItem *)0x0) &&
         (iVar4 = FUN_0454b248(*(undefined4 *)(pMVar5 + 0x78)), iVar4 == 3)) {
        this_01 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
        WorldMap::CenterOnMapEvent(this_01,pMVar5,true);
      }
      goto LAB_045565ec;
    }
  }
  in_x0[9] = (WorldMapAction)0x1;
LAB_045565ec:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionUnlockNodesSequence::ActionUnlockNodesSequence() */

void __thiscall
ActionUnlockNodesSequence::ActionUnlockNodesSequence(ActionUnlockNodesSequence *this)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined ***)this = &PTR_GetClass_068585c0;
  Set8BytesTo0(this + 0x18);
  this[0x20] = (ActionUnlockNodesSequence)0x0;
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyLoadedWorldResources);
  Sexy::Delegate0::Delegate0<ActionUnlockNodesSequence,void(ActionUnlockNodesSequence::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::NotifyLoadedWorldResources,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActionUnlockNodesSequence::StaticNew() */

ActionUnlockNodesSequence * ActionUnlockNodesSequence::StaticNew(void)

{
  ActionUnlockNodesSequence *this;
  
  this = ::operator_new(0x28);
  ActionUnlockNodesSequence(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionUnlockNodesSequence::setupMapPathForUnlock(MapPathGroup*) */

void __thiscall
ActionUnlockNodesSequence::setupMapPathForUnlock
          (ActionUnlockNodesSequence *this,MapPathGroup *param_1)

{
  bool bVar1;
  int iVar2;
  WorldMap *pWVar3;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  long lVar4;
  MapPath *pMVar5;
  ulong uVar6;
  MapPathGroup *pMVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pWVar3 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
  uVar9 = 0;
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)WorldMap::GetMapPathGroups(pWVar3);
  uVar8 = *(undefined8 *)param_1;
  lVar4 = FUN_0454b2d8(uVar8,*(undefined8 *)(param_1 + 8));
  if (lVar4 != 0) {
    do {
      pMVar5 = (MapPath *)FUN_0454b2e4(uVar8,uVar9);
      lVar4 = *(long *)(pMVar5 + 0x10);
      iVar2 = FUN_0454b244(*(undefined4 *)(lVar4 + 0x14));
      pWVar3 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
      WorldMap::SetMapPathAnimationState(pWVar3,pMVar5,iVar2 == 0xc && uVar9 == 0);
      if ((iVar2 == 0xc || iVar2 == 9) || (iVar2 - 2U < 4)) {
        local_18 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin(this_00);
        local_10 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(this_00);
        while (bVar1 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
              bVar1) {
          pMVar7 = (MapPathGroup *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
          if (*(long *)(pMVar7 + 0x18) == lVar4) {
            setupMapPathForUnlock(this,pMVar7);
          }
          std::move_iterator<SexyURL::KeyedValue*>::operator++
                    ((move_iterator<SexyURL::KeyedValue*> *)&local_18);
        }
      }
      uVar8 = *(undefined8 *)param_1;
      uVar9 = uVar9 + 1;
      uVar6 = FUN_0454b2d8(uVar8,*(undefined8 *)(param_1 + 8));
    } while (uVar9 < uVar6);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionUnlockNodesSequence::setupNodesForUnlock(MapEventItem const*) */

void __thiscall
ActionUnlockNodesSequence::setupNodesForUnlock
          (ActionUnlockNodesSequence *this,MapEventItem *param_1)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  WorldMap *this_00;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  WorldDataManager *this_01;
  undefined8 uVar9;
  PopAnimRig *this_02;
  string *extraout_x1;
  code *pcVar10;
  MapEventItem *pMVar11;
  PopAnimRig *this_03;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
  pvVar5 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            *)WorldMap::GetMapPathGroups(this_00);
  puVar6 = (undefined8 *)WorldMap::GetPopAnimRigs(this_00);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(pvVar5);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(pvVar5);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    pvVar5 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    if (*(MapEventItem **)(pvVar5 + 0x18) == param_1) {
      sVar3 = FUN_0454b258(*(undefined2 *)(param_1 + 0xe0));
      if (sVar3 != -1) {
        puVar7 = (undefined8 *)FUN_0454b2d0(*puVar6,(long)sVar3);
        this_03 = (PopAnimRig *)*puVar7;
        std::string::string(asStack_20,"finished");
        cVar2 = PopAnimRig::IsAnimStringActive(this_03,asStack_20);
        std::string::~string(asStack_20);
        nop();
        if (cVar2 != '\0') {
          pcVar10 = *(code **)(*(long *)this_03 + 0x78);
          std::string::string((string *)&local_28,"unlocked");
          std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                    ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_20);
          (*pcVar10)(this_03,(string *)&local_28,1,0,asStack_20);
          std::vector<int,std::allocator<int>>::~vector
                    ((vector<int,std::allocator<int>> *)asStack_20);
          std::string::~string((string *)&local_28);
          nop();
        }
      }
      if (this[0x20] == (ActionUnlockNodesSequence)0x0) {
        local_30 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin(pvVar5);
        local_28 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(pvVar5);
        while (bVar1 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28),
              bVar1) {
          lVar8 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
          pMVar11 = *(MapEventItem **)(lVar8 + 0x10);
          iVar4 = FUN_0454b244(*(undefined4 *)(pMVar11 + 0x14));
          if ((iVar4 == 0xc || iVar4 == 9) || (iVar4 - 2U < 4)) {
            if ((iVar4 != 0xc) && (iVar4 != 9)) {
              FUN_0454b378(pMVar11 + 0xf2);
            }
            setupNodesForUnlock(this,pMVar11);
          }
          else if (iVar4 == 1) {
            sVar3 = FUN_0454b258(*(undefined2 *)(pMVar11 + 0xe0));
            if (sVar3 != -1) {
              FUN_0454b2d0(*puVar6,(long)sVar3);
              nop();
              (**(code **)(*(long *)this_02 + 0x150))(asStack_20);
              cVar2 = PopAnimRig::IsAnimStringActive(this_02,asStack_20);
              std::string::~string(asStack_20);
              if (cVar2 != '\0') {
                (**(code **)(*(long *)this_02 + 0x118))(this_02);
              }
            }
          }
          std::move_iterator<SexyURL::KeyedValue*>::operator++
                    ((move_iterator<SexyURL::KeyedValue*> *)&local_30);
        }
      }
    }
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_40);
  }
  Sexy::StringToLower((Sexy *)(*(long *)(param_1 + 0xe8) + 0x38),extraout_x1);
  this_01 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
  uVar9 = FUN_0547429c((string *)&local_28);
  Sexy::StrFormat("%s_stargate_exit",asStack_20,uVar9);
  lVar8 = WorldDataManager::FindEventByName(this_01,asStack_20);
  std::string::~string(asStack_20);
  if ((lVar8 != 0) &&
     (pMVar11 = (MapEventItem *)FUN_0454b24c(*(undefined8 *)(lVar8 + 0xd8)), param_1 == pMVar11)) {
    sVar3 = FUN_0454b258(*(undefined2 *)(lVar8 + 0xe0));
    if ((sVar3 != -1) &&
       ((cVar2 = FUN_0454b250(*(undefined1 *)(lVar8 + 0xf1)), cVar2 != '\0' &&
        (cVar2 = FUN_0454b254(*(undefined1 *)(lVar8 + 0xf2)), cVar2 == '\0')))) {
      puVar6 = (undefined8 *)FUN_0454b2d0(*puVar6,(long)sVar3);
      EffectAnimRig_StarGate::PlayUnavailableIdle((EffectAnimRig_StarGate *)*puVar6);
    }
  }
  std::string::~string((string *)&local_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionUnlockNodesSequence::PerformInstantSetup() */

void __thiscall ActionUnlockNodesSequence::PerformInstantSetup(ActionUnlockNodesSequence *this)

{
  ActionUnlockNodesSequence AVar1;
  bool bVar2;
  WorldDataManager *this_00;
  MapEventItem *pMVar3;
  long lVar4;
  PlayerInfo *pPVar5;
  MapEventItem *pMVar6;
  WorldMap *this_01;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_02;
  MapPathGroup *pMVar7;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
  pMVar3 = (MapEventItem *)WorldDataManager::FindEvent(this_00,(string *)(this + 0x18));
  lVar4 = FUN_0454b260(*(undefined8 *)(pMVar3 + 0xe8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  WorldMapUtils::GetOrderedMainSpinePath((string *)(lVar4 + 0x38),(vector *)avStack_20);
  pPVar5 = (PlayerInfo *)ProfileUtils::Profile();
  pMVar6 = (MapEventItem *)
           WorldMapUtils::GetLastCompletedLevelNodeOnPath((vector *)avStack_20,pPVar5);
  AVar1 = (ActionUnlockNodesSequence)(pMVar3 != pMVar6);
  this[0x20] = AVar1;
  lVar4 = LawnApp::GetWorldMap(gLawnApp);
  FUN_0454b278(lVar4 + 0x378,AVar1);
  setupNodesForUnlock(this,pMVar3);
  if (pMVar3 == pMVar6) {
    this_01 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
    this_02 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)WorldMap::GetMapPathGroups(this_01);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_02);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_02);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar2)
    {
      pMVar7 = (MapPathGroup *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
      if (*(MapEventItem **)(pMVar7 + 0x18) == pMVar3) {
        setupMapPathForUnlock(this,pMVar7);
        break;
      }
      std::move_iterator<SexyURL::KeyedValue*>::operator++
                ((move_iterator<SexyURL::KeyedValue*> *)&local_30);
    }
  }
  std::vector<MapEventItem_const*,std::allocator<MapEventItem_const*>>::~vector
            ((vector<MapEventItem_const*,std::allocator<MapEventItem_const*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionUnlockNodesSequence::CreateIfNeed(bool&) */

void ActionUnlockNodesSequence::CreateIfNeed(bool *param_1)

{
  undefined8 uVar1;
  WorldDataManager *this;
  long lVar2;
  ActionUnlockNodesSequence *this_00;
  ProfileMgr *this_01;
  PlayerInfo *pPVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = LawnApp::GetLastCompletedLevel(gLawnApp);
  FUN_05475d88(asStack_10,uVar1);
  this = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
  lVar2 = WorldDataManager::FindEvent(this,asStack_10);
  if (lVar2 == 0) {
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    PlayerInfo::PlayerHasCompletedTutorial(pPVar3,9);
    this_00 = (ActionUnlockNodesSequence *)0x0;
  }
  else {
    this_00 = ::operator_new(0x28);
    ActionUnlockNodesSequence(this_00,asStack_10);
    PerformInstantSetup(this_00);
  }
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionUnlockNodesSequence::onNotifyLoadedWorldResources() */

void __thiscall
ActionUnlockNodesSequence::onNotifyLoadedWorldResources(ActionUnlockNodesSequence *this)

{
  ActionUnlockNodesSequence AVar1;
  bool bVar2;
  WorldDataManager *this_00;
  MapEventItem *pMVar3;
  long lVar4;
  PlayerInfo *pPVar5;
  MapEventItem *pMVar6;
  WorldMap *this_01;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_02;
  MapPathGroup *pMVar7;
  undefined8 uStack_30;
  undefined8 uStack_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this_00 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
  pMVar3 = (MapEventItem *)WorldDataManager::FindEvent(this_00,(string *)(this + 0x18));
  lVar4 = FUN_0454b260(*(undefined8 *)(pMVar3 + 0xe8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  WorldMapUtils::GetOrderedMainSpinePath((string *)(lVar4 + 0x38),(vector *)avStack_20);
  pPVar5 = (PlayerInfo *)ProfileUtils::Profile();
  pMVar6 = (MapEventItem *)
           WorldMapUtils::GetLastCompletedLevelNodeOnPath((vector *)avStack_20,pPVar5);
  AVar1 = (ActionUnlockNodesSequence)(pMVar3 != pMVar6);
  this[0x20] = AVar1;
  lVar4 = LawnApp::GetWorldMap(gLawnApp);
  FUN_0454b278(lVar4 + 0x378,AVar1);
  setupNodesForUnlock(this,pMVar3);
  if (pMVar3 == pMVar6) {
    this_01 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
    this_02 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)WorldMap::GetMapPathGroups(this_01);
    uStack_30 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(this_02);
    uStack_28 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_02);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&uStack_30,(__normal_iterator *)&uStack_28),
          bVar2) {
      pMVar7 = (MapPathGroup *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_30);
      if (*(MapEventItem **)(pMVar7 + 0x18) == pMVar3) {
        setupMapPathForUnlock(this,pMVar7);
        break;
      }
      std::move_iterator<SexyURL::KeyedValue*>::operator++
                ((move_iterator<SexyURL::KeyedValue*> *)&uStack_30);
    }
  }
  std::vector<MapEventItem_const*,std::allocator<MapEventItem_const*>>::~vector
            ((vector<MapEventItem_const*,std::allocator<MapEventItem_const*>> *)avStack_20);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

