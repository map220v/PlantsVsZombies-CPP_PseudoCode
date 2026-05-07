// Class: WorldMap


/* WorldMap::SetBaseOffset(Sexy::Point) */

void __thiscall WorldMap::SetBaseOffset(WorldMap *this,undefined8 *param_2)

{
  *(undefined8 *)(this + 0x238) = *param_2;
  return;
}


/* WorldMap::ForceTutorialToFinish() */

void __thiscall WorldMap::ForceTutorialToFinish(WorldMap *this)

{
  handleTutorialEnd(this,true);
  return;
}


/* WorldMap::GetPopAnimRigs() */

WorldMap * __thiscall WorldMap::GetPopAnimRigs(WorldMap *this)

{
  return this + 0x1a8;
}


/* WorldMap::GetActionsMgr() */

WorldMap * __thiscall WorldMap::GetActionsMgr(WorldMap *this)

{
  return this + 0x358;
}


/* WorldMap::KillTutorialInput() */

void __thiscall WorldMap::KillTutorialInput(WorldMap *this)

{
  *(undefined8 *)(this + 0x440) = 0;
  this[0x449] = (WorldMap)0x0;
  this[0x448] = (WorldMap)0x0;
  return;
}


/* WorldMap::OnUnlockAllLevels() */

void __thiscall WorldMap::OnUnlockAllLevels(WorldMap *this)

{
  (**(code **)(*(long *)this + 0x378))();
  return;
}


/* WorldMap::onActivateStarGateAnimationFinished() */

void WorldMap::onActivateStarGateAnimationFinished(void)

{
  return;
}


/* WorldMap::onFinalizeStarGateAnimationFinished() */

void WorldMap::onFinalizeStarGateAnimationFinished(void)

{
  return;
}


/* WorldMap::onNewVersionFound() */

void WorldMap::onNewVersionFound(void)

{
  return;
}


/* WorldMap::onEnterState_Ready(WorldMapState) */

void WorldMap::onEnterState_Ready(long param_1)

{
  *(undefined1 *)(param_1 + 0x6c) = 1;
  return;
}


/* WorldMap::onYetiSpawned() */

void WorldMap::onYetiSpawned(void)

{
  return;
}


/* WorldMap::DrawZombossHologram(Sexy::Graphics*, WorldMapCamera*, float, float) */

void __thiscall
WorldMap::DrawZombossHologram
          (WorldMap *this,Graphics *param_1,WorldMapCamera *param_2,float param_3,float param_4)

{
  if (this[0x3d8] == (WorldMap)0x0) {
    return;
  }
  WorldMapCamera::DrawPopAnimRig(param_2,*(PopAnimRig **)(this + 0x3d0),param_3,param_4,1.0,1.0,0.0)
  ;
  return;
}


/* WorldMap::onExitState_BackgroundLoading(WorldMapState) */

void WorldMap::onExitState_BackgroundLoading(void)

{
  BusyAnimationManager::StopBusyIcon(*(BusyAnimationManager **)(gLawnApp + 0x28d0));
  return;
}


/* WorldMap::onRiftOverAcknowledged() */

void WorldMap::onRiftOverAcknowledged(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  GameStateMgr::ShowRiftMap(gGameStateMgr);
  return;
}


/* WorldMap::DrawPopanimRig(Sexy::Graphics*, WorldMapCamera*, short, float, float, float, float,
   float) */

void __thiscall
WorldMap::DrawPopanimRig
          (WorldMap *this,Graphics *param_1,WorldMapCamera *param_2,short param_3,float param_4,
          float param_5,float param_6,float param_7,float param_8)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_04528cb8(*(undefined8 *)(this + 0x1a8),(long)param_3);
  WorldMapCamera::DrawPopAnimRig
            (param_2,(PopAnimRig *)*puVar1,param_4,param_5,param_6,param_7,param_8);
  return;
}


/* WorldMap::DrawWorldPopanimRig(Sexy::Graphics*, WorldMapCamera*, short, WorldData*, float, float,
   float, float, float) */

void __thiscall
WorldMap::DrawWorldPopanimRig
          (WorldMap *this,Graphics *param_1,WorldMapCamera *param_2,short param_3,WorldData *param_4
          ,float param_5,float param_6,float param_7,float param_8,float param_9)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_04528cb8(*(undefined8 *)(param_4 + 0x78),(long)param_3);
  WorldMapCamera::DrawPopAnimRig
            (param_2,(PopAnimRig *)*puVar1,param_5,param_6,param_7,param_8,param_9);
  return;
}


/* WorldMap::SetMouseDownPos(Sexy::Point const&) */

void __thiscall WorldMap::SetMouseDownPos(WorldMap *this,Point *param_1)

{
  *(undefined8 *)(this + 0x200) = *(undefined8 *)param_1;
  return;
}


/* WorldMap::GetMouseDownPos() */

WorldMap * __thiscall WorldMap::GetMouseDownPos(WorldMap *this)

{
  return this + 0x200;
}


/* WorldMap::SetStartingMouseDownPos(Sexy::Point const&) */

void __thiscall WorldMap::SetStartingMouseDownPos(WorldMap *this,Point *param_1)

{
  *(undefined8 *)(this + 0x1f8) = *(undefined8 *)param_1;
  this[0x208] = (WorldMap)0x0;
  SetMouseDownPos(this,param_1);
  FUN_04528bd0(this + 0x209,1);
  FUN_04528bdc(this + 0x20a,0);
  FUN_04528be8(this + 0x20b,0);
  FUN_04528bf8(this + 0x20c,0);
  return;
}


/* WorldMap::GetStartingMouseDownPos() */

WorldMap * __thiscall WorldMap::GetStartingMouseDownPos(WorldMap *this)

{
  return this + 0x1f8;
}


/* WorldMap::StaticGetClass() */

long * WorldMap::StaticGetClass(void)

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
  uVar2 = Sexy::Widget::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap",uVar2,StaticNew);
  return sClass;
}


/* WorldMap::GetClass() const */

long * WorldMap::GetClass(void)

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
  uVar2 = Sexy::Widget::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap",uVar2,StaticNew);
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::handledPopupDialogsMouseDown(int, int) */

void __thiscall WorldMap::handledPopupDialogsMouseDown(WorldMap *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  
  lVar3 = ___stack_chk_guard;
  iVar1 = *(int *)(this + 0x48);
  iVar2 = *(int *)(this + 0x4c);
  cVar4 = (**(code **)(**(long **)(this + 0x2a8) + 0x30))
                    (*(long **)(this + 0x2a8),
                     (int)((float)(param_1 + iVar1) + *(float *)(this + 0x210)),
                     (int)((float)(param_2 + iVar2) + *(float *)(this + 0x214)));
  if (cVar4 == '\0') {
    WorldMapCamera::TransformPointFromCamera
              ((float)((int)*(float *)(this + 0x210) + param_1),
               (float)((int)*(float *)(this + 0x214) + param_2));
  }
  else {
    (**(code **)(**(long **)(this + 0x2a8) + 0x28))
              (*(long **)(this + 0x2a8),(int)((float)(param_1 + iVar1) + *(float *)(this + 0x210)),
               (int)((float)(param_2 + iVar2) + *(float *)(this + 0x214)));
  }
  if (lVar3 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::handledPopupDialogsMouseUp(int, int) */

void __thiscall WorldMap::handledPopupDialogsMouseUp(WorldMap *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  
  lVar3 = ___stack_chk_guard;
  iVar1 = *(int *)(this + 0x48);
  iVar2 = *(int *)(this + 0x4c);
  cVar4 = (**(code **)(**(long **)(this + 0x2a8) + 0x30))
                    (*(long **)(this + 0x2a8),
                     (int)((float)(param_1 + iVar1) + *(float *)(this + 0x210)),
                     (int)((float)(param_2 + iVar2) + *(float *)(this + 0x214)));
  if (cVar4 == '\0') {
    WorldMapCamera::TransformPointFromCamera
              ((float)((int)*(float *)(this + 0x210) + param_1),
               (float)((int)*(float *)(this + 0x214) + param_2));
  }
  else {
    (**(code **)(**(long **)(this + 0x2a8) + 0x20))
              (*(long **)(this + 0x2a8),(int)((float)(param_1 + iVar1) + *(float *)(this + 0x210)),
               (int)((float)(param_2 + iVar2) + *(float *)(this + 0x214)));
  }
  if (lVar3 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::handledPopupDialogsMouseMove(int, int) */

void __thiscall WorldMap::handledPopupDialogsMouseMove(WorldMap *this,int param_1,int param_2)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = ___stack_chk_guard;
  uVar2 = (**(code **)(**(long **)(this + 0x2a8) + 0x30))
                    (*(long **)(this + 0x2a8),
                     (int)((float)(param_1 + *(int *)(this + 0x48)) + *(float *)(this + 0x210)),
                     (int)((float)(param_2 + *(int *)(this + 0x4c)) + *(float *)(this + 0x214)));
  WorldMapCamera::TransformPointFromCamera
            ((float)((int)*(float *)(this + 0x210) + param_1),
             (float)((int)*(float *)(this + 0x214) + param_2));
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WorldMap::prepEditedWorld() */

void __thiscall WorldMap::prepEditedWorld(WorldMap *this)

{
  int iVar1;
  WorldDataManager *this_00;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  
  if (*(long *)(this + 0x4b8) != 0) {
    this_00 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
    iVar8 = 0;
    iVar1 = WorldDataManager::GetWorldDataCount(this_00);
    if (0 < iVar1) {
      do {
        lVar2 = WorldDataManager::GetWorldDataByIdx(this_00,iVar8);
        lVar5 = *(long *)(this + 0x4b8);
        uVar6 = 0;
        while( true ) {
          uVar7 = *(undefined8 *)(lVar2 + 8);
          uVar3 = FUN_04528d68(uVar7,*(undefined8 *)(lVar2 + 0x10));
          if (uVar3 <= uVar6) break;
          lVar4 = FUN_04528dd0(uVar7,uVar6);
          FUN_04528b90(lVar4 + 0x105,lVar5 == lVar2);
          uVar6 = uVar6 + 1;
        }
        uVar6 = 0;
        while( true ) {
          uVar7 = *(undefined8 *)(lVar2 + 0x20);
          uVar3 = FUN_04528d68(uVar7,*(undefined8 *)(lVar2 + 0x28));
          if (uVar3 <= uVar6) break;
          lVar4 = FUN_04528dd0(uVar7,uVar6);
          FUN_04528b90(lVar4 + 0x105,lVar5 == lVar2);
          uVar6 = uVar6 + 1;
        }
        iVar8 = iVar8 + 1;
        iVar1 = WorldDataManager::GetWorldDataCount(this_00);
      } while (iVar8 < iVar1);
    }
  }
  return;
}


/* WorldMap::remapWorldMapEvents() */

void __thiscall WorldMap::remapWorldMapEvents(WorldMap *this)

{
  WorldDataManager *this_00;
  
  this_00 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
  WorldDataManager::RemapWorldMapEvents(this_00);
  prepEditedWorld(this);
  return;
}


/* WorldMap::GetPopAnimRigByID(short) */

undefined8 __thiscall WorldMap::GetPopAnimRigByID(WorldMap *this,short param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_04528cb8(*(undefined8 *)(this + 0x1a8),(long)param_1);
  return *puVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::getPrevLevelOnPath(std::string, bool) */

void WorldMap::getPrevLevelOnPath(string *param_1,undefined8 param_2,string *param_3,char param_4)

{
  char cVar1;
  int iVar2;
  WorldDataManager *pWVar3;
  long lVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  undefined8 uVar5;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(param_1,"");
  nop();
  cVar1 = FUN_0547419c(param_3);
  if (cVar1 == '\0') {
    if (param_4 == '\0') {
      pWVar3 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
      lVar4 = WorldDataManager::FindEventByName(pWVar3,param_3);
    }
    else {
      pWVar3 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
      lVar4 = WorldDataManager::FindEventByLevelName(pWVar3,param_3);
    }
    this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)FUN_04528b60(*(undefined8 *)(lVar4 + 0xb0));
    if (this != (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)0x0) {
      iVar2 = FUN_04528b48(*(undefined4 *)(this + 0x14));
      if (iVar2 == 1) {
        uVar5 = Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)this);
        thunk_FUN_05475e00(param_1,uVar5);
      }
      else if (((iVar2 - 2U < 4) || (iVar2 == 9)) || (iVar2 - 0xcU < 2)) {
        uVar5 = std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_rightmost(this);
        FUN_05475d88(asStack_10,uVar5);
        getPrevLevelOnPath(asStack_18,param_2,asStack_10,0);
        std::string::~string(asStack_10);
        cVar1 = FUN_0547419c(asStack_18);
        if (cVar1 == '\0') {
          thunk_FUN_05475e00(param_1,asStack_18);
        }
        std::string::~string(asStack_18);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WorldMap::IsActionQueued() */

bool __thiscall WorldMap::IsActionQueued(WorldMap *this)

{
  long lVar1;
  
  lVar1 = WorldMapActionManager::Size((WorldMapActionManager *)(this + 0x358));
  return lVar1 != 0;
}


/* WorldMap::PurgeWorldMapActions() */

void __thiscall WorldMap::PurgeWorldMapActions(WorldMap *this)

{
  WorldMapActionManager::ClearActions((WorldMapActionManager *)(this + 0x358));
  return;
}


/* WorldMap::QueueForTransition(GameState) */

void __thiscall WorldMap::QueueForTransition(WorldMap *this,undefined4 param_2)

{
  if (this[0x2f9] == (WorldMap)0x0) {
    *(undefined4 *)(this + 0x2fc) = param_2;
    this[0x2f9] = (WorldMap)0x1;
  }
  return;
}


/* WorldMap::QueueForLoadLevel(std::string const&, LevelSource) */

void __thiscall WorldMap::QueueForLoadLevel(WorldMap *this,undefined8 param_2,undefined4 param_3)

{
  this[0x2f9] = (WorldMap)0x1;
  thunk_FUN_05475e00(this + 0x308);
  *(undefined4 *)(this + 0x310) = param_3;
  return;
}


/* WorldMap::ResetCameraVelocity() */

void __thiscall WorldMap::ResetCameraVelocity(WorldMap *this)

{
  *(undefined4 *)(this + 0x228) = 0;
  *(undefined4 *)(this + 0x22c) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::GetMapSpaceOffsetFromCameraCenter(float, float) */

void __thiscall
WorldMap::GetMapSpaceOffsetFromCameraCenter(WorldMap *this,float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  undefined4 local_18;
  undefined4 local_14;
  FastCurve local_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WorldMapCamera::TransformPointFromCamera
            ((float)(*(int *)(this + 0x48) + *(int *)(gLawnApp + 0x724) / 2 +
                    (int)*(float *)(this + 0x210)),
             (float)(*(int *)(this + 0x4c) + *(int *)(gLawnApp + 0x728) / 2 +
                    (int)*(float *)(this + 0x214)));
  fVar1 = (float)FUN_04529734(local_18);
  fVar2 = (float)FUN_04529734(local_14);
  Sexy::FastCurve::SetOutRange(local_10,param_1 - fVar1,param_2 - fVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10._0_4_,local_10._4_4_);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::getWorldCoordinateFromGrid(float, float) */

void __thiscall WorldMap::getWorldCoordinateFromGrid(WorldMap *this,float param_1,float param_2)

{
  FastCurve local_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::FastCurve::SetOutRange
            (local_10,param_2 * *(float *)(this + 0x430) + *(float *)(this + 0x428) * param_1,
             param_2 * *(float *)(this + 0x434) + *(float *)(this + 0x42c) * param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10._0_4_,local_10._4_4_);
}


/* WorldMap::CalculateMinMaxZoomForWorld(WorldData*) */

void WorldMap::CalculateMinMaxZoomForWorld(WorldData *param_1)

{
  *(undefined4 *)(param_1 + 0x334) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x330) = 0x3f800000;
  return;
}


/* WorldMap::SetCameraBoundsToWorld(WorldData*) */

void __thiscall WorldMap::SetCameraBoundsToWorld(WorldMap *this,WorldData *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)FUN_04529710((float)*(int *)(param_1 + 0x4c));
  fVar3 = (float)FUN_04529710((float)*(int *)(param_1 + 0x54));
  *(int *)(this + 0x218) = (int)fVar2;
  iVar1 = *(int *)(gLawnApp + 0x724);
  *(undefined4 *)(this + 0x21c) = 0;
  *(undefined4 *)(this + 0x224) = 0;
  *(int *)(this + 0x220) = (int)(fVar3 - (float)iVar1);
  CalculateMinMaxZoomForWorld((WorldData *)this);
  return;
}


/* WorldMap::SetAdviceText(std::wstring, MessageStyle) */

void WorldMap::SetAdviceText(long param_1)

{
  ShowAdvice::SetLabel(*(ShowAdvice **)(param_1 + 0x290));
  return;
}


/* WorldMap::IsUserInputEnabled() */

WorldMap __thiscall WorldMap::IsUserInputEnabled(WorldMap *this)

{
  WorldMap WVar1;
  float fVar2;
  
  fVar2 = (float)PVZ_EOT();
  WVar1 = (WorldMap)0x0;
  if (*(float *)(this + 0x460) == fVar2) {
    WVar1 = this[0x356];
  }
  return WVar1;
}


/* WorldMap::PlayRandomZombossTaunts() */

void __thiscall WorldMap::PlayRandomZombossTaunts(WorldMap *this)

{
  *(undefined4 *)(this + 0x3dc) = 0x3f800000;
  return;
}


/* WorldMap::SwitchToLevelUp() */

void __thiscall WorldMap::SwitchToLevelUp(WorldMap *this)

{
  QueueForTransition(this,0xb);
  return;
}


/* WorldMap::SwitchToPlantAvatar() */

void __thiscall WorldMap::SwitchToPlantAvatar(WorldMap *this)

{
  QueueForTransition(this,0xc);
  return;
}


/* WorldMap::SwitchToPlantFamily() */

void __thiscall WorldMap::SwitchToPlantFamily(WorldMap *this)

{
  QueueForTransition(this,0x1b);
  return;
}


/* WorldMap::SwitchToArtifact() */

void __thiscall WorldMap::SwitchToArtifact(WorldMap *this)

{
  QueueForTransition(this,0x26);
  return;
}


/* WorldMap::SwitchToPlantGeneEnhancement() */

void __thiscall WorldMap::SwitchToPlantGeneEnhancement(WorldMap *this)

{
  QueueForTransition(this,0x2a);
  return;
}


/* WorldMap::SwitchToNostalgiaPVZGameView() */

void __thiscall WorldMap::SwitchToNostalgiaPVZGameView(WorldMap *this)

{
  QueueForTransition(this,0x28);
  return;
}


/* WorldMap::SwitchToCustomLevelView() */

void __thiscall WorldMap::SwitchToCustomLevelView(WorldMap *this)

{
  QueueForTransition(this,0x29);
  return;
}


/* WorldMap::SwitchToLottery() */

void __thiscall WorldMap::SwitchToLottery(WorldMap *this)

{
  QueueForTransition(this,10);
  return;
}


/* WorldMap::isTutorialDeprecated(MapTutorialState) */

bool __thiscall WorldMap::isTutorialDeprecated(undefined8 param_1,int param_2)

{
  return param_2 - 1U < 0x12;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::EditorGetEventNamePrefix(unsigned char) */

void WorldMap::EditorGetEventNamePrefix(uchar param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 in_w1;
  string asStack_10 [8];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StringToLower((Sexy *)(*(long *)((ulong)param_1 + 0x4b8) + 0x38),___stack_chk_guard);
  uVar1 = FUN_0547429c(asStack_10);
  FUN_04528df0(*(undefined8 *)((ulong)param_1 + 0x628),in_w1);
  uVar2 = FUN_0547429c();
  Sexy::StrFormat("%s_%s_",uVar1,uVar2);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap::cleanUpCurrentEditEvent() */

void __thiscall WorldMap::cleanUpCurrentEditEvent(WorldMap *this)

{
  MapEventItem::SetParentEventPtr((MapEventItem *)(this + 0x4d0),(MapEventItem *)0x0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::initSpecialWorldResourcesGroupList() */

void __thiscall WorldMap::initSpecialWorldResourcesGroupList(WorldMap *this)

{
  char cVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  code *pcVar5;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = GameStateMgr::GetQueuedWorldMapDestination(gGameStateMgr);
  if (lVar2 == 0) goto LAB_0452a578;
  lVar3 = FUN_04528bb0(*(undefined8 *)(lVar2 + 0xe8));
  cVar1 = WorldMapUtils::IsRiftWorld((string *)(lVar3 + 0x38));
  if (cVar1 == '\0') {
    lVar3 = FUN_04528bb0(*(undefined8 *)(lVar2 + 0xe8));
    cVar1 = WorldMapUtils::IsPVZ1World((string *)(lVar3 + 0x38));
    if (cVar1 == '\0') {
      lVar3 = FUN_04528bb0(*(undefined8 *)(lVar2 + 0xe8));
      cVar1 = WorldMapUtils::IsUnchartedWorld((string *)(lVar3 + 0x38));
      if (cVar1 == '\0') {
        lVar2 = FUN_04528bb0(*(undefined8 *)(lVar2 + 0xe8));
        cVar1 = WorldMapUtils::IsPlantWarsWorld((string *)(lVar2 + 0x38));
        if (cVar1 == '\0') goto LAB_0452a578;
        lVar2 = *(long *)this;
        pcVar4 = "UI_Uncharted";
        goto LAB_0452a554;
      }
      lVar2 = *(long *)this;
      pcVar4 = "UI_Uncharted";
    }
    else {
      lVar2 = *(long *)this;
      pcVar4 = "UI_PVZ1";
    }
    pcVar5 = *(code **)(lVar2 + 0x3a8);
    std::string::string(asStack_10,pcVar4);
    (*pcVar5)(this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    lVar2 = *(long *)this;
    pcVar4 = "UI_PVZ1_Temp";
  }
  else {
    lVar2 = *(long *)this;
    pcVar4 = "UI_Rift_Common";
  }
LAB_0452a554:
  pcVar5 = *(code **)(lVar2 + 0x3a8);
  std::string::string(asStack_10,pcVar4);
  (*pcVar5)(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
LAB_0452a578:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::initLoadingResourcesGroupList() */

void __thiscall WorldMap::initLoadingResourcesGroupList(WorldMap *this)

{
  char cVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  code *pcVar5;
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  lVar2 = GameStateMgr::GetQueuedWorldMapDestination(gGameStateMgr);
  if (lVar2 == 0) goto LAB_0452a578;
  lVar3 = FUN_04528bb0(*(undefined8 *)(lVar2 + 0xe8));
  cVar1 = WorldMapUtils::IsRiftWorld((string *)(lVar3 + 0x38));
  if (cVar1 == '\0') {
    lVar3 = FUN_04528bb0(*(undefined8 *)(lVar2 + 0xe8));
    cVar1 = WorldMapUtils::IsPVZ1World((string *)(lVar3 + 0x38));
    if (cVar1 == '\0') {
      lVar3 = FUN_04528bb0(*(undefined8 *)(lVar2 + 0xe8));
      cVar1 = WorldMapUtils::IsUnchartedWorld((string *)(lVar3 + 0x38));
      if (cVar1 == '\0') {
        lVar2 = FUN_04528bb0(*(undefined8 *)(lVar2 + 0xe8));
        cVar1 = WorldMapUtils::IsPlantWarsWorld((string *)(lVar2 + 0x38));
        if (cVar1 == '\0') goto LAB_0452a578;
        lVar2 = *(long *)this;
        pcVar4 = "UI_Uncharted";
        goto LAB_0452a554;
      }
      lVar2 = *(long *)this;
      pcVar4 = "UI_Uncharted";
    }
    else {
      lVar2 = *(long *)this;
      pcVar4 = "UI_PVZ1";
    }
    pcVar5 = *(code **)(lVar2 + 0x3a8);
    std::string::string(asStack_10,pcVar4);
    (*pcVar5)(this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    lVar2 = *(long *)this;
    pcVar4 = "UI_PVZ1_Temp";
  }
  else {
    lVar2 = *(long *)this;
    pcVar4 = "UI_Rift_Common";
  }
LAB_0452a554:
  pcVar5 = *(code **)(lVar2 + 0x3a8);
  std::string::string(asStack_10,pcVar4);
  (*pcVar5)(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
LAB_0452a578:
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap::PlacePathDestinationAnimationOnEvent(PopAnimRig*, MapEventItem*) */

void __thiscall
WorldMap::PlacePathDestinationAnimationOnEvent
          (WorldMap *this,PopAnimRig *param_1,MapEventItem *param_2)

{
  if (*(long **)(this + 0x3c0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x3c0) + 0x18))();
  }
  *(PopAnimRig **)(this + 0x3c0) = param_1;
  *(MapEventItem **)(this + 0x3c8) = param_2;
  return;
}


/* WorldMap::OnPathDestinationAnimationFinished(std::string const&) */

void WorldMap::OnPathDestinationAnimationFinished(string *param_1)

{
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::hasRequiredResources() */

void __thiscall WorldMap::hasRequiredResources(WorldMap *this)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ResourceManager *pRVar7;
  ulong uVar8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar8 = 0;
  do {
    uVar6 = *(undefined8 *)(this + 0x178);
    uVar1 = FUN_04528e0c(uVar6,*(undefined8 *)(this + 0x180));
    if (uVar1 <= uVar8) {
      uVar8 = 0;
      while( true ) {
        uVar6 = *(undefined8 *)(this + 400);
        uVar1 = FUN_04528df8(uVar6,*(undefined8 *)(this + 0x198));
        if (uVar1 <= uVar8) break;
        lVar2 = FUN_04528e04(uVar6,uVar8);
        uVar1 = 0;
        while( true ) {
          uVar6 = *(undefined8 *)(lVar2 + 8);
          uVar5 = FUN_04528e0c(uVar6,*(undefined8 *)(lVar2 + 0x10));
          if (uVar5 <= uVar1) break;
          pRVar7 = *(ResourceManager **)(gLawnApp + 0x848);
          FUN_04528e5c(uVar6,uVar1);
          pcVar3 = (char *)FUN_0547429c();
          std::string::string(asStack_10,pcVar3);
          lVar4 = Sexy::ResourceManager::GetResourceGroupNamed(pRVar7,asStack_10);
          std::string::~string(asStack_10);
          nop();
          uVar1 = uVar1 + 1;
          if (lVar4 == 0) goto LAB_0452a7d4;
        }
        uVar8 = uVar8 + 1;
      }
      uVar6 = 1;
      goto LAB_0452a7d8;
    }
    pRVar7 = *(ResourceManager **)(gLawnApp + 0x848);
    FUN_04528df0(uVar6,uVar8);
    pcVar3 = (char *)FUN_0547429c();
    std::string::string(asStack_10,pcVar3);
    lVar2 = Sexy::ResourceManager::GetResourceGroupNamed(pRVar7,asStack_10);
    std::string::~string(asStack_10);
    nop();
    uVar8 = uVar8 + 1;
  } while (lVar2 != 0);
LAB_0452a7d4:
  uVar6 = 0;
LAB_0452a7d8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


/* WorldMap::getState() const */

void __thiscall WorldMap::getState(WorldMap *this)

{
  FUN_04528e64(*(undefined4 *)(this + 0xd8));
  return;
}


/* WorldMap::IsLoaded() */

bool __thiscall WorldMap::IsLoaded(WorldMap *this)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = getState(this);
  bVar1 = false;
  if (iVar2 != 0) {
    iVar2 = getState(this);
    bVar1 = iVar2 != 2;
  }
  return bVar1;
}


/* WorldMap::PrepForLoading() */

void __thiscall WorldMap::PrepForLoading(WorldMap *this)

{
  int iVar1;
  
  iVar1 = getState(this);
  if (iVar1 != -1) {
    return;
  }
  (**(code **)(*(long *)this + 0x3a0))(this);
  (**(code **)(*(long *)this + 0x3b8))(this,0);
  return;
}


/* WorldMap::IsInState(unsigned int) const */

bool __thiscall WorldMap::IsInState(WorldMap *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = FUN_04528e64(*(undefined4 *)(this + 0xd8));
  return uVar1 == param_1;
}


/* WorldMap::CanBeClosed() */

char __thiscall WorldMap::CanBeClosed(WorldMap *this)

{
  char cVar1;
  
  if (((this[0x2f9] != (WorldMap)0x0) || (this[0x254] != (WorldMap)0x0)) ||
     (cVar1 = IsInState(this,4), cVar1 == '\0')) {
    cVar1 = '\0';
  }
  return cVar1;
}


/* WorldMap::IsValidStateForInput() */

undefined8 __thiscall WorldMap::IsValidStateForInput(WorldMap *this)

{
  undefined8 uVar1;
  float fVar2;
  
  fVar2 = (float)PVZ_EOT();
  if (*(float *)(this + 0x460) != fVar2) {
    return 0;
  }
  uVar1 = IsInState(this,4);
  return uVar1;
}


/* WorldMap::OnGesturePinch(Sexy::Point, int, float) */

void WorldMap::OnGesturePinch(WorldMap *param_1)

{
  char cVar1;
  
  cVar1 = IsUserInputEnabled(param_1);
  if ((cVar1 != '\0') && (cVar1 = IsValidStateForInput(param_1), cVar1 != '\0')) {
    return;
  }
  *(undefined8 *)(param_1 + 600) = 0;
  return;
}


/* WorldMap::onAdBeginShowing() */

void __thiscall WorldMap::onAdBeginShowing(WorldMap *this)

{
  this[0x255] = (WorldMap)0x1;
  return;
}


/* WorldMap::onAdEnded(std::string const&, int, int) */

void WorldMap::onAdEnded(string *param_1,int param_2,int param_3)

{
  param_1[0x255] = (string)0x0;
  return;
}


/* WorldMap::initializeToUniverseMap() */

void __thiscall WorldMap::initializeToUniverseMap(WorldMap *this)

{
  (**(code **)(**(long **)(this + 0x2b0) + 0x78))(*(long **)(this + 0x2b0),1);
  FUN_045291dc(this + 0x370);
  return;
}


/* WorldMap::SetPreviousState(GameState) */

void __thiscall WorldMap::SetPreviousState(WorldMap *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0xee4) = param_2;
  return;
}


/* WorldMap::StopActions() */

void WorldMap::StopActions(void)

{
  WorldMap *this;
  WorldMapActionManager *this_00;
  
  this = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
  if (this != (WorldMap *)0x0) {
    this_00 = (WorldMapActionManager *)GetActionsMgr(this);
    WorldMapActionManager::StopActions(this_00);
    return;
  }
  return;
}


/* WorldMap::SetupRiftEventBar() */

void WorldMap::SetupRiftEventBar(void)

{
  char cVar1;
  undefined4 uVar2;
  
  WorldMap_EventBar::GetBannerTypeOverride();
  cVar1 = RiftUtils::IsZombossUnlocked();
  uVar2 = 8;
  if (cVar1 == '\0') {
    uVar2 = 7;
  }
  WorldMap_EventBar::SetBannerTypeOverride(uVar2);
  return;
}


/* WorldMap::SetupUnchartedBirthdayEventBar() */

void WorldMap::SetupUnchartedBirthdayEventBar(void)

{
  WorldMap_EventBar::SetBannerTypeOverride(9);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::handleTouchBegan(int, int) */

void __thiscall WorldMap::handleTouchBegan(WorldMap *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar3 = IsUserInputEnabled(this);
  if ((((cVar3 != '\0') && (cVar3 = IsValidStateForInput(this), cVar3 != '\0')) &&
      (this[0x254] == (WorldMap)0x0)) &&
     ((this[0x255] == (WorldMap)0x0 && (cVar3 = FUN_04528bc4(this[0x355]), cVar3 == '\0')))) {
    iVar1 = *(int *)(this + 0x48);
    iVar2 = *(int *)(this + 0x4c);
    cVar3 = handledPopupDialogsMouseDown(this,param_1,param_2);
    if ((cVar3 == '\0') &&
       (cVar3 = UIWidget::ProcessedMouseDown(iVar1 + param_1,iVar2 + param_2,200), cVar3 == '\0')) {
      MessageRouter::Post((_func_void *)gMessageRouter);
      ResetCameraVelocity(this);
      this[0x208] = (WorldMap)0x0;
      if ((this[0x256] == (WorldMap)0x0) && (this[0x43c] == (WorldMap)0x0)) {
        Sexy::Point::Point(aPStack_10,param_1,param_2);
        SetStartingMouseDownPos(this,aPStack_10);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap::TouchBegan(Sexy::Touch const&) */

void __thiscall WorldMap::TouchBegan(WorldMap *this,Touch *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  
  WorldMap_LuaButtonsDelegate::TouchMoved(param_1,*(int *)(this + 0x48),*(int *)(this + 0x4c));
  cVar3 = IsUserInputEnabled(this);
  if ((cVar3 == '\0') || (cVar3 = IsValidStateForInput(this), cVar3 == '\0')) {
    *(undefined8 *)(this + 600) = 0;
  }
  else if (*(long *)(this + 600) == 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    iVar2 = *(int *)(param_1 + 0x14);
    *(undefined8 *)(this + 600) = *(undefined8 *)param_1;
    handleTouchBegan(this,iVar1,iVar2);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::snapWorldToGrid(float, float) */

void WorldMap::snapWorldToGrid(float param_1,float param_2)

{
  long in_x0;
  Point *in_x8;
  float local_30;
  float local_2c;
  DVec2 aDStack_28 [8];
  Tri aTStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::MemoryImage::TriRep::Tri::Tri
            (aTStack_20,*(float *)(in_x0 + 0x428),*(float *)(in_x0 + 0x42c),
             *(float *)(in_x0 + 0x430),*(float *)(in_x0 + 0x434),0.0,0.0);
  Sexy::SimpleMatrix::Invert((SimpleMatrix *)aTStack_20);
  DVec2::DVec2(aDStack_28,param_1,param_2);
  Sexy::SimpleMatrix::TransformPoint((FPoint *)aTStack_20);
  Sexy::Point::Point(in_x8,(int)(local_30 + 0.5),(int)(local_2c + 0.5));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::SetCameraPosition(float, float, bool) */

void __thiscall WorldMap::SetCameraPosition(WorldMap *this,float param_1,float param_2,bool param_3)

{
  float *pfVar1;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_2;
  local_14 = param_1;
  if (param_3) {
    *(float *)(this + 0x210) = param_1;
    *(float *)(this + 0x214) = param_2;
  }
  else {
    local_c = (float)*(int *)(this + 0x218);
    local_10 = (float)(*(int *)(this + 0x218) + *(int *)(this + 0x220));
    pfVar1 = eastl::min_alt<float>(&local_14,&local_10);
    pfVar1 = eastl::max_alt<float>(&local_c,pfVar1);
    local_c = (float)*(int *)(this + 0x21c);
    local_10 = (float)(*(int *)(this + 0x21c) + *(int *)(this + 0x224));
    *(float *)(this + 0x210) = *pfVar1;
    pfVar1 = eastl::min_alt<float>(&local_18,&local_10);
    pfVar1 = eastl::max_alt<float>(&local_c,pfVar1);
    *(float *)(this + 0x214) = *pfVar1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::CenterOnPoint(Sexy::FPoint, bool) */

void __thiscall WorldMap::CenterOnPoint(WorldMap *this,undefined4 *param_2,bool param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float local_10;
  float local_c;
  
  lVar1 = ___stack_chk_guard;
  fVar2 = (float)FUN_04529710(*param_2);
  fVar3 = (float)FUN_04529710(param_2[1]);
  WorldMapCamera::TransformPointToCamera(fVar2,fVar3);
  SetCameraPosition(this,((float)*(int *)(this + 0x48) + local_10) -
                         (float)(*(int *)(gLawnApp + 0x724) / 2),
                    ((float)*(int *)(this + 0x4c) + local_c) -
                    (float)(*(int *)(gLawnApp + 0x728) / 2),param_3);
  ResetCameraVelocity(this);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::recalculateCameraBounds() */

void __thiscall WorldMap::recalculateCameraBounds(WorldMap *this)

{
  long lVar1;
  DVec2 aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(WorldData **)(this + 0x2f0) != (WorldData *)0x0) {
    SetCameraBoundsToWorld(this,*(WorldData **)(this + 0x2f0));
    WorldMapCamera::SetCameraCenter
              (*(WorldMapCamera **)(this + 0x328),
               (float)*(int *)(this + 0x218) +
               (float)(*(int *)(this + 0x220) + *(int *)(gLawnApp + 0x724)) * 0.5,
               (float)*(int *)(this + 0x21c) +
               (float)(*(int *)(this + 0x224) + *(int *)(gLawnApp + 0x728)) * 0.5);
    lVar1 = *(long *)(this + 0x2f0);
    DVec2::DVec2(aDStack_10,(float)(*(int *)(lVar1 + 0x4c) + *(int *)(lVar1 + 0x54) / 2),
                 (float)(*(int *)(lVar1 + 0x50) + *(int *)(lVar1 + 0x58) / 2));
    CenterOnPoint(this,aDStack_10,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::DrawTransitionEffect(Sexy::Graphics*) */

void __thiscall WorldMap::DrawTransitionEffect(WorldMap *this,Graphics *param_1)

{
  long lVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0xee8) != 0) {
    lVar1 = FUN_04528c30(*(undefined8 *)(*(long *)(this + 0xee8) + 0x20));
    fVar3 = (float)*(int *)(lVar1 + 0x40);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_38,(float)*(int *)(lVar1 + 0x3c),fVar3);
    local_38 = (float)Sexy::SexyVector2::operator*
                                ((SexyVector2 *)&local_38,*(float *)(lVar1 + 0x28));
    local_34 = fVar3;
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    fVar3 = local_38;
    local_40 = 1.0;
    local_3c = (float)*(int *)(gLawnApp + 0xd4) / local_38;
    pfVar2 = eastl::max_alt<float>(&local_40,&local_3c);
    fVar4 = *pfVar2;
    FUN_04528af4(-(fVar3 * 0.5),-(local_34 * 0.5),auStack_28,auStack_1c);
    Sexy::SexyTransform2D::Scale(aSStack_30,fVar4,fVar4);
    FUN_04528af4((float)(*(int *)(gLawnApp + 0xd4) / 2),(float)(*(int *)(gLawnApp + 0xd8) / 2),
                 auStack_28,auStack_1c);
    PopAnimRig::Draw(*(PopAnimRig **)(this + 0xee8),param_1,aSStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap::EditorClearSelectionGroup() */

void __thiscall WorldMap::EditorClearSelectionGroup(WorldMap *this)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 0xea8);
  lVar1 = FUN_04528ddc(uVar4,*(undefined8 *)(this + 0xeb0));
  lVar3 = 0;
  while (lVar3 != lVar1) {
    plVar2 = (long *)FUN_04528de8(uVar4,lVar3);
    *(undefined1 *)(*plVar2 + 0x106) = 0;
    lVar3 = lVar3 + 1;
  }
  std::vector<MapEventItem*,std::allocator<MapEventItem*>>::clear
            ((vector<MapEventItem*,std::allocator<MapEventItem*>> *)(this + 0xea8));
  return;
}


/* WorldMap::OnLoadingWorldAssets() */

void __thiscall WorldMap::OnLoadingWorldAssets(WorldMap *this)

{
  char cVar1;
  UnchartedModeNetworkMgr *this_00;
  
  if (*(long *)(this + 0x2f0) != 0) {
    cVar1 = WorldMapUtils::IsRiftWorld((string *)(*(long *)(this + 0x2f0) + 0x38));
    if (cVar1 == '\0') {
      cVar1 = PVZ2UnchartedModeUtils::IsUnchartedBirthday
                        ((string *)(*(long *)(this + 0x2f0) + 0x38));
      if (cVar1 != '\0') {
        this_00 = (UnchartedModeNetworkMgr *)
                  Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
        cVar1 = UnchartedModeNetworkMgr::CheckAnniversaryBonus(this_00);
        if ((cVar1 != '\0') && (this[0xef0] == (WorldMap)0x0)) {
          SetupUnchartedBirthdayEventBar();
          this[0xef0] = (WorldMap)0x1;
        }
      }
    }
    else if (this[0xef0] == (WorldMap)0x0) {
      SetupRiftEventBar();
      this[0xef0] = (WorldMap)0x1;
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::SetMapPathAnimationState(MapPath*, bool) */

void __thiscall WorldMap::SetMapPathAnimationState(WorldMap *this,MapPath *param_1,bool param_2)

{
  PopAnimRig *pPVar1;
  float fVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2) {
    pPVar1 = *(PopAnimRig **)(param_1 + 0x18);
    std::string::string(asStack_40,"beam_path_open");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    pPVar1 = *(PopAnimRig **)(param_1 + 0x18);
    fVar2 = (float)PopAnimRig::GetCurrentFrameInAnimation(*(PopAnimRig **)(this + 0x380));
    PopAnimRig::SetCurrentFrameInAnimation(pPVar1,fVar2);
  }
  else {
    pPVar1 = *(PopAnimRig **)(param_1 + 0x18);
    std::string::string(asStack_40,"beam_path_on");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    PopAnimRig::RandomizeCurrentAnimFrame(*(PopAnimRig **)(param_1 + 0x18));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::updateNormalNodeRenderStatusForEventItem(WorldData*, MapEventItem*) */

void __thiscall
WorldMap::updateNormalNodeRenderStatusForEventItem
          (WorldMap *this,WorldData *param_1,MapEventItem *param_2)

{
  char cVar1;
  short sVar2;
  PopAnimRig *this_00;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  sVar2 = FUN_04528ba0(*(undefined2 *)(param_2 + 0xe0));
  if (sVar2 == -1) goto LAB_0452b48c;
  FUN_04528cb8(*(undefined8 *)(this + 0x1a8),(long)sVar2);
  nop();
  cVar1 = FUN_04528b7c(param_2[0xf2]);
  if (cVar1 == '\0') {
    cVar1 = FUN_04528b70(param_2[0xf1]);
    if (cVar1 == '\0') {
      (**(code **)(*(long *)this_00 + 0x118))(this_00);
      goto LAB_0452b48c;
    }
    (**(code **)(*(long *)this_00 + 0x160))(asStack_18,this_00);
    cVar1 = PopAnimRig::IsAnimStringActive(this_00,asStack_18);
    if (cVar1 == '\0') {
      (**(code **)(*(long *)this_00 + 0x158))(asStack_10,this_00);
      cVar1 = PopAnimRig::IsAnimStringActive(this_00,asStack_10);
      std::string::~string(asStack_10);
      std::string::~string(asStack_18);
      if (cVar1 == '\0') {
        (**(code **)(*(long *)this_00 + 0x128))(this_00);
      }
      goto LAB_0452b48c;
    }
  }
  else {
    (**(code **)(*(long *)this_00 + 0x160))(asStack_18,this_00);
    cVar1 = PopAnimRig::IsAnimStringActive(this_00,asStack_18);
    if (cVar1 == '\0') {
      (**(code **)(*(long *)this_00 + 0x158))(asStack_10,this_00);
      cVar1 = PopAnimRig::IsAnimStringActive(this_00,asStack_10);
      std::string::~string(asStack_10);
      std::string::~string(asStack_18);
      if (cVar1 == '\0') {
        (**(code **)(*(long *)this_00 + 0x138))(this_00);
      }
      goto LAB_0452b48c;
    }
  }
  std::string::~string(asStack_18);
LAB_0452b48c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap::updateZombossNodeRenderStatusForEventItem(WorldData*, MapEventItem*) */

void __thiscall
WorldMap::updateZombossNodeRenderStatusForEventItem
          (WorldMap *this,WorldData *param_1,MapEventItem *param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  MapEventItem *pMVar5;
  DTextField *this_00;
  long *plVar6;
  code *pcVar7;
  
  iVar3 = FUN_04528b58(*(undefined4 *)(param_2 + 0x78));
  if (1 < iVar3 - 3U) {
    WorldMapUtils::FindZombossNodeInWorld((string *)(param_1 + 0x38));
    return;
  }
  pMVar5 = (MapEventItem *)WorldMapUtils::FindZombossNodeInWorld((string *)(param_1 + 0x38));
  if (pMVar5 != (MapEventItem *)0x0) {
    sVar2 = FUN_04528ba0(*(undefined2 *)(pMVar5 + 0xe0));
    if (sVar2 != -1) {
      FUN_04528cb8(*(undefined8 *)(this + 0x1a8),(long)sVar2);
      nop();
      iVar4 = WorldMapUtils::CalculateBossNodeUnlockIndex(pMVar5,-1);
      iVar3 = WorldMapUtils::CalculateBossNodeCompletionIndex(pMVar5,-1);
      if ((iVar4 < 0) || (iVar3 < 0)) {
        iVar3 = 0;
      }
      else {
        iVar3 = iVar3 + 2;
      }
      if (param_2 == pMVar5) {
        cVar1 = FUN_04528b7c(param_2[0xf2]);
        if (cVar1 == '\0') {
          cVar1 = FUN_04528b70(param_2[0xf1]);
          if (cVar1 == '\0') {
            if (iVar4 < 0) {
              FUN_04528c50(this_00 + 0x220,1);
              (**(code **)(*(long *)this_00 + 0x110))(this_00,0xffffffff);
              (**(code **)(*(long *)this_00 + 0x118))(this_00);
            }
          }
          else {
            FUN_04528c50(this_00 + 0x220,1);
            (**(code **)(*(long *)this_00 + 0x110))(this_00,iVar3);
            (**(code **)(*(long *)this_00 + 0x120))(this_00);
          }
        }
        else {
          FUN_04528c50(this_00 + 0x220,1);
          (**(code **)(*(long *)this_00 + 0x110))(this_00,0xffffffff);
          (**(code **)(*(long *)this_00 + 0x138))(this_00);
        }
      }
      else {
        iVar4 = FUN_04528b48(*(undefined4 *)(param_2 + 0x14));
        if (iVar4 == 1) {
          cVar1 = FUN_04528b70(param_2[0xf1]);
          if (cVar1 != '\0') {
            FUN_04528c50(this_00 + 0x220,0);
            (**(code **)(*(long *)this_00 + 0x110))(this_00,iVar3);
            pcVar7 = *(code **)(*(long *)this_00 + 0x120);
            goto LAB_0452b6ac;
          }
        }
        else {
          cVar1 = FUN_04528b70(param_2[0xf1]);
          if (cVar1 != '\0') {
            FUN_04528c50(this_00 + 0x220,0);
            (**(code **)(*(long *)this_00 + 0x110))(this_00,iVar3);
            pcVar7 = *(code **)(*(long *)this_00 + 0x128);
LAB_0452b6ac:
            (*pcVar7)(this_00);
            plVar6 = (long *)DTextField::getCharNum(this_00);
            (**(code **)(*plVar6 + 0x118))();
            return;
          }
        }
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::DoSharedHUDWidgetCreation(std::string) */

void WorldMap::DoSharedHUDWidgetCreation(void)

{
  UIWidget *this;
  UIWidget *this_00;
  UIWidget *this_01;
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtName::RtName(aRStack_18,L"UIWorldMapBackButton");
  UIWidget::CreateWidget(aRStack_18,1);
  nop();
  Sexy::RtName::~RtName(aRStack_18);
  if (this != (UIWidget *)0x0) {
    UIWidget::SetVisible(this,false);
  }
  Sexy::RtName::RtName(aRStack_18,L"UIWorldMapCoinBank");
  UIWidget::CreateWidget(aRStack_18,1);
  nop();
  Sexy::RtName::~RtName(aRStack_18);
  if (this_00 != (UIWidget *)0x0) {
    (**(code **)(*(long *)this_00 + 0x198))(this_00,1);
    UIWidget::SetIgnoreParentVisibility(this_00,true);
  }
  Sexy::RtName::RtName(aRStack_18,L"UIWorldMapGemBank");
  UIWidget::CreateWidget(aRStack_18,1);
  nop();
  Sexy::RtName::~RtName(aRStack_18);
  if (this_01 != (UIWidget *)0x0) {
    UIWidget::SetIgnoreParentVisibility(this_01,true);
    UIWidget::SetVisible(this_01,true);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::setupMapUI() */

void __thiscall WorldMap::setupMapUI(WorldMap *this)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  long *extraout_x0;
  UIWidget *this_00;
  bool bVar5;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIWorldMapCoinBank");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (*(long *)(this + 0x2f0) == 0) {
LAB_0452b9c8:
    bVar5 = true;
  }
  else {
    bVar1 = WorldMapUtils::IsPVZ1World((string *)(*(long *)(this + 0x2f0) + 0x38));
    if (*(long *)(this + 0x2f0) == 0) {
      bVar5 = true;
      if (bVar1 != 0) {
        bVar5 = false;
      }
      goto LAB_0452b9cc;
    }
    bVar2 = WorldMapUtils::IsUnchartedWorld((string *)(*(long *)(this + 0x2f0) + 0x38));
    bVar2 = bVar2 ^ 1;
    if (*(long *)(this + 0x2f0) == 0) {
      bVar5 = true;
      if (bVar1 < bVar2) goto LAB_0452b9cc;
    }
    else {
      cVar3 = WorldMapUtils::IsCardGameWorld((string *)(*(long *)(this + 0x2f0) + 0x38));
      if ((*(long *)(this + 0x2f0) != 0) &&
         (cVar4 = WorldMapUtils::IsPlantWarsWorld((string *)(*(long *)(this + 0x2f0) + 0x38)),
         cVar4 != '\0')) {
        bVar5 = false;
        if (bVar2 <= bVar1) {
          bVar5 = false;
        }
        goto LAB_0452b9cc;
      }
      if ((bVar1 < bVar2) && (cVar3 == '\0')) goto LAB_0452b9c8;
    }
    bVar5 = false;
  }
LAB_0452b9cc:
  if (extraout_x0 != (long *)0x0) {
    (**(code **)(*extraout_x0 + 0x198))(extraout_x0,bVar5);
  }
  std::string::string(asStack_10,"UIWorldMapGemBank");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (this_00 != (UIWidget *)0x0) {
    UIWidget::SetVisible(this_00,bVar5);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::setRiftPlayerBank() */

void WorldMap::setRiftPlayerBank(void)

{
  UIWidget *this;
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtName::RtName(aRStack_18,L"UIRiftPlayerInfoBank");
  UIWidget::CreateWidget(aRStack_18,1);
  nop();
  Sexy::RtName::~RtName(aRStack_18);
  if (this != (UIWidget *)0x0) {
    UIWidget::SetVisible(this,true);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::showFlashingArrow(UIWidget*) */

void __thiscall WorldMap::showFlashingArrow(WorldMap *this,UIWidget *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  TPoint aTStack_20 [8];
  FastCurve aFStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (UIWidget *)0x0) {
    Sexy::Point::Point((Point *)&local_30,0,0x2d);
    UIWidget::GetDrawRect();
    Sexy::TRect<int>::GetCenter();
    Sexy::Point::Point((Point *)&local_28,aTStack_20);
    iVar1 = FUN_045296fc(local_30);
    iVar2 = FUN_045296fc(local_2c);
    Sexy::FastCurve::SetOutRange(aFStack_18,(float)(local_28 + iVar1),(float)(local_24 + iVar2));
    StandaloneEffect::SetScreenSpaceOrigin
              (*(StandaloneEffect **)(this + 0x298),(SexyVector2 *)aFStack_18,900000);
    StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x298),true);
    Effect_BouncingArrow::PointUp(*(Effect_BouncingArrow **)(this + 0x298));
    this[0x2a0] = (WorldMap)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::findBestWorldIntersection(Sexy::TRect<int> const&) */

void __thiscall WorldMap::findBestWorldIntersection(WorldMap *this,TRect *param_1)

{
  long lVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  WorldDataManager *this_00;
  int iVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  int local_10;
  int local_c;
  
  lVar1 = ___stack_chk_guard;
  lVar6 = 0;
  fVar8 = 0.0;
  iVar5 = 0;
  this_00 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
  iVar4 = WorldDataManager::GetWorldDataCount(this_00);
  lVar7 = lVar6;
  if (0 < iVar4) {
    do {
      lVar6 = WorldDataManager::GetWorldDataByIdx(this_00,iVar5);
      cVar3 = Sexy::TRect<int>::Intersects((TRect<int> *)(lVar6 + 0x4c),param_1);
      if (cVar3 == '\0') {
LAB_0452bdac:
        lVar6 = lVar7;
        fVar2 = fVar8;
      }
      else {
        Sexy::TRect<int>::Intersection((TRect *)(lVar6 + 0x4c));
        fVar2 = (float)(local_10 * local_c);
        if ((float)(local_10 * local_c) <= fVar8) goto LAB_0452bdac;
      }
      fVar8 = fVar2;
      iVar5 = iVar5 + 1;
      iVar4 = WorldDataManager::GetWorldDataCount(this_00);
      lVar7 = lVar6;
    } while (iVar5 < iVar4);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar6);
}


/* WorldMap::updateStateMachine() */

void __thiscall WorldMap::updateStateMachine(WorldMap *this)

{
  StateMachine<WorldMapState>::UpdateState((StateMachine<WorldMapState> *)(this + 0xd8));
  return;
}


/* WorldMap::TouchesCanceled() */

void __thiscall WorldMap::TouchesCanceled(WorldMap *this)

{
  float fVar1;
  undefined4 uVar2;
  
  WorldMap_LuaButtonsDelegate::TouchesCanceled();
  *(undefined8 *)(this + 600) = 0;
  UIWidget::ProcessedMouseUp(-100,-100,'\0');
  if ((this[0x33c] != (WorldMap)0x0) &&
     (fVar1 = (float)PVZ_EOT(), *(float *)(this + 0x340) == fVar1)) {
    uVar2 = PVZ_T();
    *(undefined4 *)(this + 0x340) = uVar2;
    *(undefined4 *)(this + 0x344) = *(undefined4 *)(this + 0x338);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::ScrollToPosition(Sexy::FPoint) */

void __thiscall WorldMap::ScrollToPosition(WorldMap *this,TPoint *param_2)

{
  char cVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float local_18;
  float local_14;
  FPoint aFStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar2 = (float)FUN_04529710(*(undefined4 *)param_2);
  fVar3 = (float)FUN_04529710(*(undefined4 *)(param_2 + 4));
  WorldMapCamera::TransformPointToCamera(fVar2,fVar3);
  *(undefined8 *)(this + 0x450) = *(undefined8 *)(this + 0x210);
  fVar2 = ((float)(*(int *)(gLawnApp + 0x724) / 2) - (float)*(int *)(this + 0x48)) +
          *(float *)(this + 0x450);
  fVar3 = ((float)(*(int *)(gLawnApp + 0x728) / 2) - (float)*(int *)(this + 0x4c)) +
          *(float *)(this + 0x454);
  *(float *)(this + 0x450) = fVar2;
  *(float *)(this + 0x454) = fVar3;
  if ((15.0 <= ABS(local_18 - fVar2)) || (15.0 <= ABS(local_14 - fVar3))) {
    cVar1 = FUN_04528c18(*(undefined4 *)(this + 0x334),*(undefined4 *)(this + 0x338));
    if (cVar1 == '\0') {
      Sexy::FPoint::FPoint(aFStack_10,param_2);
      CenterOnPoint(this,aFStack_10,0);
    }
    else {
      *(float *)(this + 0x458) = local_18;
      *(float *)(this + 0x45c) = local_14;
      uVar4 = PVZ_T();
      *(undefined4 *)(this + 0x460) = uVar4;
      fVar2 = (float)PVZ_T();
      *(float *)(this + 0x464) = fVar2 + 0.618034;
    }
  }
  else {
    Sexy::FPoint::FPoint(aFStack_10,param_2);
    CenterOnPoint(this,aFStack_10,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap::snapToCurrentLocation() */

void __thiscall WorldMap::snapToCurrentLocation(WorldMap *this)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = FUN_045296fc(0x1f);
  fVar3 = *(float *)(this + 0x210);
  fVar4 = (float)iVar1 * 21.0;
  uVar2 = PVZ_T();
  *(undefined4 *)(this + 0x240) = uVar2;
  *(undefined8 *)(this + 0x244) = *(undefined8 *)(this + 0x210);
  *(undefined4 *)(this + 0x250) = *(undefined4 *)(this + 0x214);
  *(float *)(this + 0x24c) = (float)(int)((fVar3 + fVar4 * 0.5) / fVar4) * fVar4;
  ResetCameraVelocity(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::scrollScreens(int) */

void __thiscall WorldMap::scrollScreens(WorldMap *this,int param_1)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  float fVar5;
  int local_14;
  int local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_045296fc(0x1f);
  local_10[1] = 0;
  fVar5 = (float)iVar2 * 21.0;
  local_14 = (int)((float)(*(int *)(this + 0x218) + *(int *)(this + 0x220)) / fVar5);
  local_10[0] = (int)((*(float *)(this + 0x210) + fVar5 * 0.5) / fVar5) + param_1;
  piVar3 = eastl::min_alt<int>(local_10,&local_14);
  piVar3 = eastl::max_alt<int>(local_10 + 1,piVar3);
  iVar2 = *piVar3;
  uVar4 = PVZ_T();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x240) = uVar4;
  *(undefined8 *)(this + 0x244) = *(undefined8 *)(this + 0x210);
  *(undefined4 *)(this + 0x250) = *(undefined4 *)(this + 0x214);
  *(float *)(this + 0x24c) = (float)iVar2 * fVar5;
  if (local_8 == lVar1) {
    ResetCameraVelocity(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::ZoomIn(bool) */

void WorldMap::ZoomIn(bool param_1)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 local_10;
  long local_8;
  
  uVar1 = (ulong)param_1;
  lVar2 = *(long *)(uVar1 + 0x2f0);
  local_8 = ___stack_chk_guard;
  DVec2::DVec2((DVec2 *)&local_10,(float)(*(int *)(lVar2 + 0x4c) + *(int *)(lVar2 + 0x54) / 2),
               (float)(*(int *)(lVar2 + 0x50) + *(int *)(lVar2 + 0x58) / 2));
  uVar3 = PVZ_T();
  *(undefined1 *)(uVar1 + 0x350) = 0;
  *(undefined1 *)(uVar1 + 0x351) = 1;
  *(undefined4 *)(uVar1 + 0x340) = uVar3;
  *(undefined4 *)(uVar1 + 0x344) = *(undefined4 *)(uVar1 + 0x338);
  if (*(char *)(uVar1 + 0x352) == '\0') {
    *(undefined8 *)(uVar1 + 0x348) = local_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::ZoomOut() */

void __thiscall WorldMap::ZoomOut(WorldMap *this)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ResetCameraVelocity(this);
  uVar2 = PVZ_T();
  *(undefined4 *)(this + 0x340) = uVar2;
  *(undefined4 *)(this + 0x344) = *(undefined4 *)(this + 0x338);
  WorldMapCamera::TransformPointFromCamera
            ((float)((*(int *)(gLawnApp + 0x724) / 2 - *(int *)(this + 0x48)) +
                    (int)*(float *)(this + 0x210)),
             (float)((*(int *)(gLawnApp + 0x728) / 2 - *(int *)(this + 0x4c)) +
                    (int)*(float *)(this + 0x214)));
  fVar3 = (float)FUN_04529734(local_18);
  fVar4 = (float)FUN_04529734(local_14);
  DVec2::DVec2((DVec2 *)&local_10,(float)(int)fVar3,(float)(int)fVar4);
  this[0x351] = (WorldMap)0x0;
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x348) = local_10;
  this[0x352] = (WorldMap)0x1;
  this[0x350] = (WorldMap)0x1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap::updateState_BackgroundInit() */

void __thiscall WorldMap::updateState_BackgroundInit(WorldMap *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0xd4) <= fVar1) {
    (**(code **)(*(long *)this + 0x3b8))(this,4);
  }
  return;
}


/* WorldMap::updateZombossHologram() */

void __thiscall WorldMap::updateZombossHologram(WorldMap *this)

{
  char cVar1;
  long lVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  PopAnimRig *this_01;
  float *pfVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  lVar4 = *(long *)(this + 0x2f0);
  if ((lVar4 != 0) &&
     (lVar2 = FUN_04528c14(*(undefined8 *)(this + 0x2b0)), *(char *)(lVar2 + 0x7c) == '\0')) {
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)WorldMapUtils::FindZombossNodeInWorld((string *)(lVar4 + 0x38));
    if (((this_00 ==
          (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           *)0x0) ||
        (((cVar1 = FUN_04528b7c(this_00[0xf2]), cVar1 == '\0' &&
          (cVar1 = FUN_04528b70(this_00[0xf1]), cVar1 == '\0')) ||
         (cVar1 = PVZ1ModeUtils::IsInPVZ1WorldMap(), cVar1 != '\0')))) ||
       (cVar1 = PVZ1ModeUtils::IsInQueuedPVZ1WorldMap(), cVar1 != '\0')) {
      FUN_04528bc8(this + 0x3d8,0);
      return;
    }
    FUN_04528bc8(this + 0x3d8,1);
    this_01 = *(PopAnimRig **)(this + 0x3d0);
    fVar5 = (float)PVZ_T();
    fVar6 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(this_01,fVar5,fVar6);
    fVar5 = (float)PVZ_EOT();
    if ((*(float *)(this + 0x3dc) < fVar5) &&
       (cVar1 = PopAnimRig::IsPlayingAnything(*(PopAnimRig **)(this + 0x3d0)), cVar1 == '\0')) {
      pfVar3 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_end(this_00);
      fVar5 = (float)GetMapSpaceOffsetFromCameraCenter(this,*pfVar3,pfVar3[1]);
      if (ABS(fVar5) < 300.0) {
        fVar5 = (float)PVZ_Dt();
        fVar6 = *(float *)(this + 0x3dc);
        *(float *)(this + 0x3dc) = fVar6 - fVar5;
        if (fVar6 - fVar5 < 0.0) {
          EffectAnimRig_ZombossHologram::PlayTauntSequence
                    (*(EffectAnimRig_ZombossHologram **)(this + 0x3d0));
          fVar5 = (float)Sexy::Rand(5.0);
          *(float *)(this + 0x3dc) = fVar5 + 5.0;
        }
      }
    }
  }
  return;
}


/* WorldMap::updateState_WaitingToDie() */

void __thiscall WorldMap::updateState_WaitingToDie(WorldMap *this)

{
  int iVar1;
  WorldDataManager *this_00;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  PopAnimRig *pPVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  
  if (this[0x254] == (WorldMap)0x0) {
    UIWidget::UpdateUI();
  }
  this_00 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
  iVar8 = 0;
  iVar1 = WorldDataManager::GetWorldDataCount(this_00);
  if (0 < iVar1) {
    do {
      lVar2 = WorldDataManager::GetWorldDataByIdx(this_00,iVar8);
      if (*(char *)(*(long *)(lVar2 + 0xb0) + 0x50) != '\0') {
        uVar6 = 0;
        while( true ) {
          uVar7 = *(undefined8 *)(lVar2 + 0x78);
          uVar3 = FUN_04528cac(uVar7,*(undefined8 *)(lVar2 + 0x80));
          if (uVar3 <= uVar6) break;
          puVar4 = (undefined8 *)FUN_04528cb8(uVar7,uVar6);
          pPVar5 = (PopAnimRig *)*puVar4;
          fVar9 = (float)PVZ_T();
          uVar6 = uVar6 + 1;
          fVar10 = (float)PVZ_Dt();
          PopAnimRig::UpdateAnim(pPVar5,fVar9,fVar10);
        }
      }
      iVar8 = iVar8 + 1;
      iVar1 = WorldDataManager::GetWorldDataCount(this_00);
    } while (iVar8 < iVar1);
  }
  uVar6 = 0;
  while( true ) {
    uVar7 = *(undefined8 *)(this + 0x1a8);
    uVar3 = FUN_04528cac(uVar7,*(undefined8 *)(this + 0x1b0));
    if (uVar3 <= uVar6) break;
    puVar4 = (undefined8 *)FUN_04528cb8(uVar7,uVar6);
    pPVar5 = (PopAnimRig *)*puVar4;
    fVar9 = (float)PVZ_T();
    fVar10 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(pPVar5,fVar9,fVar10);
    uVar6 = uVar6 + 1;
  }
  return;
}


/* WorldMap::UpdateTransitionEffect() */

void __thiscall WorldMap::UpdateTransitionEffect(WorldMap *this)

{
  char cVar1;
  PopAnimRig *this_00;
  UniverseMap *this_01;
  float fVar2;
  float fVar3;
  
  this_00 = *(PopAnimRig **)(this + 0xee8);
  if (this_00 != (PopAnimRig *)0x0) {
    fVar2 = (float)PVZ_T();
    fVar3 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(this_00,fVar2,fVar3);
    cVar1 = PopAnimRig::IsPlayingAnything(*(PopAnimRig **)(this + 0xee8));
    if (cVar1 == '\0') {
      if (*(long **)(this + 0xee8) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0xee8) + 0x18))();
        *(undefined8 *)(this + 0xee8) = 0;
      }
      LawnApp::DeleteGroup(gLawnApp,(string *)&DAT_06b0fcc0);
      if (*(int *)(this + 0x44c) == 0x31) {
        FUN_04528c08(this + 0x356,1);
        this_01 = (UniverseMap *)FUN_04528c14(*(undefined8 *)(this + 0x2b0));
        UniverseMap::TransitionToUniverse(this_01,false);
        return;
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::drawMapPaths(Sexy::Graphics*) */

void WorldMap::drawMapPaths(Graphics *param_1)

{
  Insets *pIVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  PopAnimRig *pPVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong *puVar8;
  char *pcVar9;
  long in_x1;
  undefined1 uVar10;
  ulong in_x4;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  double dVar21;
  undefined4 uVar22;
  ulong in_d1;
  undefined4 uVar23;
  undefined8 local_b8;
  undefined8 local_b0;
  float local_a8;
  float local_a4;
  FastCurve aFStack_a0 [8];
  FastCurve aFStack_98 [8];
  undefined4 local_90;
  float local_8c;
  int local_88;
  int iStack_84;
  int local_80;
  int local_7c;
  int local_78;
  int iStack_74;
  int local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  SexyTransform2D aSStack_58 [40];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar13 = 0;
  lVar4 = FUN_04528c30(*(undefined8 *)(*(long *)(param_1 + 0x380) + 0x20));
  iVar2 = *(int *)(lVar4 + 0x3c);
  uVar12 = *(undefined8 *)(param_1 + 0x390);
  lVar4 = FUN_04528da8(uVar12,*(undefined8 *)(param_1 + 0x398));
  if (lVar4 != 0) {
    do {
      uVar11 = 0;
      while( true ) {
        puVar6 = (undefined8 *)FUN_04528db4(uVar12,uVar13);
        uVar14 = *puVar6;
        uVar7 = FUN_04528dbc(uVar14,puVar6[1]);
        fVar20 = (float)in_d1;
        if (uVar7 <= uVar11) break;
        puVar8 = (ulong *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_end((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    *)puVar6[3]);
        local_b8 = *puVar8;
        lVar4 = FUN_04528dc8(uVar14,uVar11);
        puVar6 = (undefined8 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_end(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            **)(lVar4 + 0x10));
        local_b0 = *puVar6;
        fVar16 = (float)Sexy::SexyVector2::operator-
                                  ((SexyVector2 *)&local_b0,(SexyVector2 *)&local_b8);
        local_a8 = fVar16;
        local_a4 = fVar20;
        fVar17 = (float)DVec2::getLength((DVec2 *)&local_a8);
        dVar21 = atan2((double)-fVar20,(double)fVar16);
        fVar18 = (float)FUN_04529710(0x42820000);
        fVar19 = (float)FUN_04529710(0x42bc0000);
        Sexy::FastCurve::SetOutRange(aFStack_a0,fVar18,fVar19);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_78,0.0,0.0);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_68,fVar17 * (1.0 / (float)(iVar2 / 6)),1.0)
        ;
        Sexy::SexyTransform2D::CreateTransformWithPivot
                  ((SexyTransform2D *)&local_78,(SexyVector2 *)&local_68,(float)dVar21,
                   (SexyVector2 *)aFStack_a0,(SexyVector2 *)0x1,SUB81(in_x4,0));
        puVar6 = (undefined8 *)FUN_04528db4(*(undefined8 *)(param_1 + 0x390),uVar13);
        pcVar9 = (char *)FUN_04528dc8(*puVar6,uVar11);
        uVar10 = (undefined1)in_x4;
        if (*pcVar9 == '\0') {
          PopAnimRig::SetRenderTransform(*(PopAnimRig **)(pcVar9 + 0x18),aSStack_58);
          puVar6 = (undefined8 *)FUN_04528db4(*(undefined8 *)(param_1 + 0x390),uVar13);
          lVar4 = FUN_04528dc8(*puVar6,uVar11);
          fVar20 = (float)FUN_04529710(local_b8 & 0xffffffff);
          fVar16 = (float)FUN_04529710(local_b8._4_4_);
          in_d1 = (ulong)(uint)fVar16;
          WorldMapCamera::DrawPopAnimRig
                    (*(WorldMapCamera **)(param_1 + 0x328),*(PopAnimRig **)(lVar4 + 0x18),fVar20,
                     fVar16,1.0,1.0,0.0);
        }
        else {
          fVar17 = (float)FUN_04529710(0x42c20000);
          Sexy::FastCurve::SetOutRange(aFStack_98,fVar17,fVar17);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_78,0.0,0.0);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_68,1.0,1.0);
          Sexy::SexyTransform2D::CreateTransformWithPivot
                    ((SexyTransform2D *)&local_78,(SexyVector2 *)&local_68,(float)dVar21,
                     (SexyVector2 *)aFStack_98,(SexyVector2 *)0x1,(bool)uVar10);
          puVar6 = (undefined8 *)FUN_04528db4(*(undefined8 *)(param_1 + 0x390),uVar13);
          lVar4 = FUN_04528dc8(*puVar6,uVar11);
          uVar23 = *(undefined4 *)(lVar4 + 4);
          uVar22 = *(undefined4 *)(lVar4 + 8);
          uVar15 = PVZ_T();
          local_78 = 0;
          local_68 = 0x3f800000;
          fVar17 = CurveLerp<float>(uVar23,uVar22,uVar15,(FastCurve *)&local_78,
                                    (FastCurve *)&local_68,1);
          Sexy::FastCurve::SetOutRange
                    ((FastCurve *)&local_90,(float)local_b8 + fVar16 * fVar17,
                     local_b8._4_4_ + fVar20 * fVar17);
          in_x4 = (ulong)*(uint *)(gLawnApp + 0x728);
          Sexy::Insets::Insets
                    ((Insets *)&local_88,0,0,*(int *)(gLawnApp + 0x724),*(uint *)(gLawnApp + 0x728))
          ;
          Sexy::Insets::Insets((Insets *)&local_78,(Insets *)&local_88);
          if (fVar16 < fVar20) {
            if (fVar20 < 0.0) {
              iStack_74 = (int)local_8c;
              local_7c = (int)(local_8c - *(float *)(in_x1 + 0x14));
              local_6c = (int)(((float)local_6c - local_8c) + *(float *)(in_x1 + 0x14));
            }
            else {
              iStack_84 = (int)local_8c;
              local_6c = (int)(local_8c - *(float *)(in_x1 + 0x14));
              local_7c = (int)(((float)local_7c - local_8c) + *(float *)(in_x1 + 0x14));
            }
          }
          else {
            fVar20 = (float)FUN_04529710(local_90);
            iVar3 = (int)(fVar20 - *(float *)(param_1 + 0x210));
            if (fVar16 < 0.0) {
              local_88 = 0;
              local_70 = local_70 - iVar3;
              local_80 = iVar3;
              local_78 = iVar3;
            }
            else {
              local_78 = 0;
              local_88 = iVar3;
              local_80 = local_80 - iVar3;
              local_70 = iVar3;
            }
          }
          pIVar1 = (Insets *)(in_x1 + 0x28);
          Sexy::Insets::Insets((Insets *)&local_68,pIVar1);
          pPVar5 = *(PopAnimRig **)(param_1 + 0x380);
          *(ulong *)pIVar1 = CONCAT44(iStack_74,local_78);
          *(ulong *)(in_x1 + 0x30) = CONCAT44(local_6c,local_70);
          PopAnimRig::SetRenderTransform(pPVar5,aSStack_58);
          fVar20 = (float)FUN_04529710(local_b8 & 0xffffffff);
          fVar16 = (float)FUN_04529710(local_b8._4_4_);
          WorldMapCamera::DrawPopAnimRig
                    (*(WorldMapCamera **)(param_1 + 0x328),*(PopAnimRig **)(param_1 + 0x380),fVar20,
                     fVar16,1.0,1.0,0.0);
          uVar12 = *(undefined8 *)(param_1 + 0x390);
          *(ulong *)pIVar1 = CONCAT44(iStack_84,local_88);
          *(ulong *)(in_x1 + 0x30) = CONCAT44(local_7c,local_80);
          puVar6 = (undefined8 *)FUN_04528db4(uVar12,uVar13);
          lVar4 = FUN_04528dc8(*puVar6,uVar11);
          PopAnimRig::SetRenderTransform(*(PopAnimRig **)(lVar4 + 0x18),aSStack_58);
          puVar6 = (undefined8 *)FUN_04528db4(*(undefined8 *)(param_1 + 0x390),uVar13);
          lVar4 = FUN_04528dc8(*puVar6,uVar11);
          fVar20 = (float)FUN_04529710(local_b8 & 0xffffffff);
          fVar16 = (float)FUN_04529710(local_b8._4_4_);
          WorldMapCamera::DrawPopAnimRig
                    (*(WorldMapCamera **)(param_1 + 0x328),*(PopAnimRig **)(lVar4 + 0x18),fVar20,
                     fVar16,1.0,1.0,0.0);
          pPVar5 = *(PopAnimRig **)(param_1 + 0x388);
          *(ulong *)pIVar1 = CONCAT44(uStack_64,local_68);
          *(undefined8 *)(in_x1 + 0x30) = uStack_60;
          PopAnimRig::SetRenderTransform(pPVar5,aSStack_30);
          fVar20 = (float)FUN_04529710(local_90);
          fVar16 = (float)FUN_04529710(local_8c);
          in_d1 = (ulong)(uint)fVar16;
          WorldMapCamera::DrawPopAnimRig
                    (*(WorldMapCamera **)(param_1 + 0x328),*(PopAnimRig **)(param_1 + 0x388),fVar20,
                     fVar16,1.0,1.0,0.0);
        }
        uVar12 = *(undefined8 *)(param_1 + 0x390);
        uVar11 = uVar11 + 1;
      }
      uVar13 = uVar13 + 1;
      uVar11 = FUN_04528da8(uVar12,*(undefined8 *)(param_1 + 0x398));
    } while (uVar13 < uVar11);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x0452cef4 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WorldMap::updateZoomBounce() */

void __thiscall WorldMap::updateZoomBounce(WorldMap *this)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  undefined4 local_1c;
  float local_18;
  float local_14;
  FPoint aFStack_10 [4];
  undefined1 auStack_c [4];
  long local_8;
  
  fVar5 = *(float *)(this + 0x340);
  local_8 = ___stack_chk_guard;
  fVar2 = (float)PVZ_EOT();
  if (fVar5 != fVar2) {
    fVar5 = fVar5 + 0.2;
    if ((this[0x351] != (WorldMap)0x0) ||
       ((*(float *)(this + 0x330) + (*(float *)(this + 0x334) - *(float *)(this + 0x330)) * 0.3 <=
         *(float *)(this + 0x344) && (this[0x350] == (WorldMap)0x0)))) {
      if (this[0x33c] == (WorldMap)0x0) {
        Sexy::FPoint::FPoint((FPoint *)&local_18,(TPoint *)(this + 0x348));
      }
      else {
        this[0x33c] = (WorldMap)0x0;
        Sexy::FPoint::FPoint((FPoint *)&local_18,(TPoint *)(this + 0x348));
      }
      local_1c = *(undefined4 *)(this + 0x334);
      if (this[0x351] != (WorldMap)0x0) {
        lVar1 = *(long *)(this + 0x2f0);
        DVec2::DVec2((DVec2 *)aFStack_10,
                     (float)(*(int *)(lVar1 + 0x4c) + *(int *)(lVar1 + 0x54) / 2),
                     (float)(*(int *)(lVar1 + 0x50) + *(int *)(lVar1 + 0x58) / 2));
        auVar4 = PVZ_T();
        local_18 = CurveLerp<float>(auVar4,fVar5,auVar4._0_4_,(DVec2 *)aFStack_10,&local_18,3);
        auVar4 = PVZ_T();
        local_14 = CurveLerp<float>(auVar4,fVar5,auVar4._0_4_,auStack_c,&local_14,3);
      }
    }
    else {
      if (this[0x33c] == (WorldMap)0x0) {
        Sexy::FPoint::FPoint((FPoint *)&local_18,(TPoint *)(this + 0x348));
        local_1c = *(undefined4 *)(this + 0x330);
      }
      else {
        this[0x33c] = (WorldMap)0x0;
        Sexy::FPoint::FPoint((FPoint *)&local_18,(TPoint *)(this + 0x348));
        local_1c = *(undefined4 *)(this + 0x330);
      }
      lVar1 = *(long *)(this + 0x2f0);
      DVec2::DVec2((DVec2 *)aFStack_10,(float)(*(int *)(lVar1 + 0x4c) + *(int *)(lVar1 + 0x54) / 2),
                   (float)(*(int *)(lVar1 + 0x50) + *(int *)(lVar1 + 0x58) / 2));
      auVar4 = PVZ_T();
      local_18 = CurveLerp<float>(auVar4,fVar5,auVar4._0_4_,&local_18,(DVec2 *)aFStack_10,3);
      auVar4 = PVZ_T();
      local_14 = CurveLerp<float>(auVar4,fVar5,auVar4._0_4_,&local_14,auStack_c,3);
    }
    auVar4 = PVZ_T();
    fVar3 = CurveLerp<float>(auVar4,fVar5,auVar4._0_4_,this + 0x344,&local_1c,3);
    *(float *)(this + 0x338) = fVar3;
    WorldMapCamera::SetCameraScale(*(WorldMapCamera **)(this + 0x328),fVar3,fVar3);
    recalculateCameraBounds(this);
    Sexy::FPoint::FPoint(aFStack_10,(TPoint *)&local_18);
    CenterOnPoint(this,aFStack_10,1);
    fVar3 = (float)PVZ_T();
    if (fVar5 <= fVar3) {
      this[0x351] = (WorldMap)0x0;
      this[0x350] = (WorldMap)0x0;
      *(float *)(this + 0x340) = fVar2;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap::ZoomOutNoAnimation() */

void __thiscall WorldMap::ZoomOutNoAnimation(WorldMap *this)

{
  float fVar1;
  
  ZoomOut(this);
  this[0x33c] = (WorldMap)0x1;
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x340) = fVar1 - 0.2;
  updateZoomBounce(this);
  this[0x352] = (WorldMap)0x0;
  return;
}


/* WorldMap::onAppEnteredBackground() */

void __thiscall WorldMap::onAppEnteredBackground(WorldMap *this)

{
  float fVar1;
  
  if ((this[0x33c] == (WorldMap)0x0) &&
     (fVar1 = (float)PVZ_EOT(), *(float *)(this + 0x340) == fVar1)) {
    return;
  }
  this[0x33c] = (WorldMap)0x1;
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x340) = fVar1 - 0.2;
  updateZoomBounce(this);
  return;
}


/* WorldMap::showZenGardenReminder(std::wstring const&, std::string const&) */

void __thiscall WorldMap::showZenGardenReminder(WorldMap *this,wstring *param_1,string *param_2)

{
  char cVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  float fVar2;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  cVar1 = PlayerInfo::GetNarrationEventCompleted(this_01,param_2);
  if (cVar1 == '\0') {
    PlayerInfo::CompleteNarrationEvent(this_01,param_2);
    ShowAdvice::SetLabel(*(ShowAdvice **)(this + 0x290),param_1,0x14);
    fVar2 = (float)PVZ_T();
    *(float *)(this + 0x438) = fVar2 + 5.0;
  }
  *(undefined4 *)(this + 0x44c) = 0;
  return;
}


/* WorldMap::onServerTimeReceived() */

void WorldMap::onServerTimeReceived(void)

{
  ProfileMgr *this;
  PlayerInfo *this_00;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 != (PlayerInfo *)0x0) {
    PlayerInfo::RefreshEvent(this_00);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::OnBackButtonPressed() */

void __thiscall WorldMap::OnBackButtonPressed(WorldMap *this)

{
  char cVar1;
  long lVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  PurchaseBroker *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = IsUserInputEnabled(this);
  if (cVar1 != '\0') {
    this[0x357] = (WorldMap)0x0;
    cVar1 = FUN_04528c64(*(undefined1 *)(*(long *)(this + 0x2a8) + 0x50));
    if (cVar1 == '\0') {
      lVar2 = *(long *)(this + 0x2b0);
      if ((*(char *)(lVar2 + 0x7c) == '\0') ||
         (cVar1 = (**(code **)(*(long *)(lVar2 + 0x10) + 0x148))(lVar2 + 0x10), cVar1 == '\0')) {
        std::string::string(asStack_10,"UIWorldMapBackButton");
        UIWidget::GetWidgetBySheetName(asStack_10);
        std::string::~string(asStack_10);
        nop();
      }
    }
    else {
      this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_01 = (PurchaseBroker *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_rightmost(this_00);
      PurchaseBroker::EndCartInstance(this_01);
      WorldMapEventAlert::HideBadge(*(WorldMapEventAlert **)(this + 0x2a8));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::CheckTutorialFinished(MapTutorialState) */

void __thiscall WorldMap::CheckTutorialFinished(undefined8 param_1,int param_2)

{
  undefined1 uVar1;
  ProfileMgr *this;
  PlayerInfo *this_00;
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (param_2 == 0x13) {
    __s = "egypt2";
  }
  else {
    if (param_2 != 0x15) {
      uVar1 = 0;
      goto LAB_0452d260;
    }
    __s = "egypt3";
  }
  std::string::string(asStack_10,__s);
  uVar1 = PlayerInfo::GetLevelCompleted(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
LAB_0452d260:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::RefreshUIs() */

void WorldMap::RefreshUIs(void)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  UIWidget *pUVar4;
  ProfileMgr *pPVar5;
  PlayerInfo *pPVar6;
  long lVar7;
  WorldMap_PlantAdventureButton *this;
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"UIWorldMapPlantLevelUpButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_18);
  std::string::~string(asStack_18);
  nop();
  if (pUVar4 == (UIWidget *)0x0) {
    Sexy::RtName::RtName((RtName *)asStack_18,L"UIWorldMapDailyActivityButton");
    std::string::string(asStack_20,"egypt4");
    pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar6 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar5);
    uVar3 = ProfileUtils::HasCompletedLevel(asStack_20,false,pPVar6);
    UIWidget::CreateWidget(asStack_18,uVar3);
    std::string::~string(asStack_20);
    nop();
    Sexy::RtName::~RtName((RtName *)asStack_18);
  }
  else {
    std::string::string(asStack_18,"egypt4");
    pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar6 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar5);
    bVar1 = (bool)ProfileUtils::HasCompletedLevel(asStack_18,false,pPVar6);
    UIWidget::SetVisible(pUVar4,bVar1);
    std::string::~string(asStack_18);
    nop();
  }
  std::string::string(asStack_18,"UIWorldMapPlantAdventure");
  lVar7 = UIWidget::GetWidgetBySheetName(asStack_18);
  std::string::~string(asStack_18);
  nop();
  if (lVar7 == 0) {
    Sexy::RtName::RtName((RtName *)asStack_18,L"UIWorldMapPlantAdventure");
    UIWidget::CreateWidget(asStack_18,1);
    Sexy::RtName::~RtName((RtName *)asStack_18);
  }
  else {
    nop();
    WorldMap_PlantAdventureButton::CheckActivated(this);
  }
  std::string::string(asStack_18,"egypt6");
  pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar6 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar5);
  cVar2 = ProfileUtils::HasCompletedLevel(asStack_18,false,pPVar6);
  std::string::~string(asStack_18);
  nop();
  if (cVar2 != '\0') {
    std::string::string(asStack_18,"UIWorldMapDailyActivityButton");
    pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_18);
    std::string::~string(asStack_18);
    nop();
    if (pUVar4 == (UIWidget *)0x0) {
      Sexy::RtName::RtName((RtName *)asStack_18,L"UIWorldMapDailyActivityButton");
      UIWidget::CreateWidget(asStack_18,1);
      Sexy::RtName::~RtName((RtName *)asStack_18);
    }
    else {
      UIWidget::SetVisible(pUVar4,true);
    }
  }
  std::string::string(asStack_18,"egypt12");
  pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar6 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar5);
  cVar2 = ProfileUtils::HasCompletedLevel(asStack_18,false,pPVar6);
  std::string::~string(asStack_18);
  nop();
  if (cVar2 != '\0') {
    std::string::string(asStack_18,"UIWorldMapChallengeButton");
    pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_18);
    std::string::~string(asStack_18);
    nop();
    if (pUVar4 == (UIWidget *)0x0) {
      Sexy::RtName::RtName((RtName *)asStack_18,L"UIWorldMapChallengeButton");
      UIWidget::CreateWidget(asStack_18,1);
      Sexy::RtName::~RtName((RtName *)asStack_18);
    }
    else {
      UIWidget::SetVisible(pUVar4,true);
    }
  }
  std::string::string(asStack_18,"egypt3");
  pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar6 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar5);
  cVar2 = ProfileUtils::HasCompletedLevel(asStack_18,false,pPVar6);
  std::string::~string(asStack_18);
  nop();
  if (cVar2 != '\0') {
    std::string::string(asStack_18,"UIWorldMapShopButton");
    pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_18);
    std::string::~string(asStack_18);
    nop();
    if (pUVar4 == (UIWidget *)0x0) {
      Sexy::RtName::RtName((RtName *)asStack_18,L"UIWorldMapShopButton");
      UIWidget::CreateWidget(asStack_18,1);
      Sexy::RtName::~RtName((RtName *)asStack_18);
    }
    else {
      UIWidget::SetVisible(pUVar4,true);
    }
  }
  std::string::string(asStack_18,"egypt2");
  pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar6 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar5);
  cVar2 = ProfileUtils::HasCompletedLevel(asStack_18,false,pPVar6);
  std::string::~string(asStack_18);
  nop();
  if (cVar2 != '\0') {
    std::string::string(asStack_18,"UIWorldMapWelfareButtonExtra");
    pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_18);
    std::string::~string(asStack_18);
    nop();
    if (pUVar4 == (UIWidget *)0x0) {
      Sexy::RtName::RtName((RtName *)asStack_18,L"UIWorldMapWelfareButtonExtra");
      UIWidget::CreateWidget(asStack_18,1);
      Sexy::RtName::~RtName((RtName *)asStack_18);
    }
    else {
      UIWidget::SetVisible(pUVar4,true);
    }
  }
  std::string::string(asStack_18,"egypt2");
  pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar6 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar5);
  cVar2 = ProfileUtils::HasCompletedLevel(asStack_18,false,pPVar6);
  std::string::~string(asStack_18);
  nop();
  if (cVar2 != '\0') {
    LawnApp::ShowScrollBanner(gLawnApp);
    LawnApp::SetScrollBannerVisible(gLawnApp,true);
    std::string::string(asStack_18,"UIWorldMapScrollBannerSwitchButton");
    pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_18);
    std::string::~string(asStack_18);
    nop();
    if (pUVar4 == (UIWidget *)0x0) {
      Sexy::RtName::RtName((RtName *)asStack_18,L"UIWorldMapScrollBannerSwitchButton");
      UIWidget::CreateWidget(asStack_18,1);
      Sexy::RtName::~RtName((RtName *)asStack_18);
    }
    else {
      UIWidget::SetVisible(pUVar4,true);
    }
    LawnApp::ShowMarqueeView(gLawnApp);
    LawnApp::SetMarqueeViewVisible(gLawnApp,true);
  }
  std::string::string(asStack_18,"UIWorldMapLoginRewardButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_18);
  std::string::~string(asStack_18);
  nop();
  if (pUVar4 == (UIWidget *)0x0) {
    Sexy::RtName::RtName((RtName *)asStack_18,L"UIWorldMapLoginRewardButton");
    std::string::string(asStack_20,"egypt1");
    pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar6 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar5);
    uVar3 = ProfileUtils::HasCompletedLevel(asStack_20,false,pPVar6);
    UIWidget::CreateWidget(asStack_18,uVar3);
    std::string::~string(asStack_20);
    nop();
    Sexy::RtName::~RtName((RtName *)asStack_18);
  }
  else {
    std::string::string(asStack_18,"egypt1");
    pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar6 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar5);
    bVar1 = (bool)ProfileUtils::HasCompletedLevel(asStack_18,false,pPVar6);
    UIWidget::SetVisible(pUVar4,bVar1);
    std::string::~string(asStack_18);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::onFirstYetiSpawned() */

void WorldMap::onFirstYetiSpawned(void)

{
  ProfileMgr *this;
  PlayerInfo *this_00;
  undefined8 uVar1;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  std::string::string(asStack_18,"yeti_intro");
  nop();
  uVar1 = FUN_0547429c(asStack_18);
  Sexy::StrFormat("nar_%s",asStack_10,uVar1);
  PlayerInfo::GetNarrationEventCompleted(this_00,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::GetTutorialToQueue(std::string) */

void __thiscall WorldMap::GetTutorialToQueue(MapTutorialInfo *param_1,WorldMap *this)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ProfileMgr *this_00;
  PlayerInfo *pPVar5;
  WorldDataManager *this_01;
  long lVar6;
  long lVar7;
  long lVar8;
  MapEventItem *this_02;
  ulong uVar9;
  WorldMap *pWVar10;
  ulong uVar11;
  undefined8 uVar12;
  int iVar13;
  MapTutorialInfo local_20 [8];
  undefined1 auStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  MapTutorialInfo::MapTutorialInfo(param_1);
  MapTutorialInfo::MapTutorialInfo(local_20);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (pPVar5 != (PlayerInfo *)0x0) {
    this_01 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
    lVar6 = WorldDataManager::GetWorldDataByWorldName(this_01,(string *)this);
    if (*param_1 == (MapTutorialInfo)0x0) {
      iVar3 = WorldDataManager::GetWorldDataCount(this_01);
      iVar13 = 0;
      if (0 < iVar3) {
        do {
          uVar11 = 0;
          lVar7 = WorldDataManager::GetWorldDataByIdx(this_01,iVar13);
          uVar12 = *(undefined8 *)(lVar7 + 0x20);
          lVar8 = FUN_04528d68(uVar12,*(undefined8 *)(lVar7 + 0x28));
          if (lVar8 != 0) {
            do {
              this_02 = (MapEventItem *)FUN_04528dd0(uVar12,uVar11);
              iVar3 = WorldMapUtils::GetVisualMapEventStatus(this_02,pPVar5);
              uVar1 = *(undefined4 *)(this_02 + 0x70);
              iVar4 = FUN_04528b54(uVar1);
              if (((iVar4 != 0) && (*(int *)(this_02 + 0x74) <= iVar3)) &&
                 (cVar2 = PlayerInfo::PlayerHasCompletedTutorial(pPVar5,uVar1), cVar2 == '\0')) {
                pWVar10 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
                cVar2 = isTutorialDeprecated(pWVar10,*(undefined4 *)(this_02 + 0x70));
                if (cVar2 == '\0') {
                  if (lVar6 == lVar7) {
                    uVar12 = std::
                             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             ::_M_rightmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                             *)this_02);
                    thunk_FUN_05475e00(auStack_18,uVar12);
                    local_20[0] = (MapTutorialInfo)0x1;
                  }
                  else {
                    uVar12 = std::
                             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             ::_M_rightmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                             *)this_02);
                    thunk_FUN_05475e00(param_1 + 8,uVar12);
                    *param_1 = (MapTutorialInfo)0x1;
                  }
                }
              }
              uVar11 = uVar11 + 1;
              uVar12 = *(undefined8 *)(lVar7 + 0x20);
              uVar9 = FUN_04528d68(uVar12,*(undefined8 *)(lVar7 + 0x28));
            } while (uVar11 < uVar9);
          }
          iVar13 = iVar13 + 1;
          iVar3 = WorldDataManager::GetWorldDataCount(this_01);
        } while (iVar13 < iVar3);
      }
      if (local_20[0] != (MapTutorialInfo)0x0) {
        MapTutorialInfo::operator=(param_1,local_20);
      }
    }
  }
  PakRecord::~PakRecord((PakRecord *)local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::DrawSeedPacket(Sexy::Graphics*, WorldMapCamera*, Sexy::RtWeakPtr<PlantType const>,
   float, float) */

void __thiscall
WorldMap::DrawSeedPacket
          (float param_1,float param_2_00,undefined8 param_3,undefined8 param_4,
          WorldMapCamera *param_2,RtWeakPtr<Sexy::ResourceInfo> *param_6)

{
  RtWeakPtr<Sexy::ResourceInfo> *this;
  SeedPacketUtils *this_00;
  long lVar1;
  undefined8 uVar2;
  Rectangle aRStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_6);
  lVar1 = SeedPacketUtils::GetPlantPacketRenderData(this_00,(string *)(lVar1 + 8),-1,-1,-1);
  this = (RtWeakPtr<Sexy::ResourceInfo> *)(lVar1 + 0x170);
  param_1 = param_1 - (float)*(int *)(lVar1 + 0x70) * 0.375;
  param_2_00 = param_2_00 - (float)*(int *)(lVar1 + 0x74) * 0.75;
  uVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(lVar1 + 0x20));
  EA::Text::Rectangle::Rectangle
            (aRStack_28,param_1 + (float)*(int *)(lVar1 + 0x30) * 0.75,
             param_2_00 + (float)*(int *)(lVar1 + 0x34) * 0.75,(float)*(int *)(lVar1 + 0x28) * 0.75,
             (float)*(int *)(lVar1 + 0x2c) * 0.75);
  WorldMapCamera::DrawImage(param_2,uVar2,aIStack_18,aRStack_28,0);
  uVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(lVar1 + 8));
  EA::Text::Rectangle::Rectangle
            (aRStack_28,param_1 + (float)*(int *)(lVar1 + 0x18) * 0.75,
             param_2_00 + (float)*(int *)(lVar1 + 0x1c) * 0.75,(float)*(int *)(lVar1 + 0x10) * 0.75,
             (float)*(int *)(lVar1 + 0x14) * 0.75);
  WorldMapCamera::DrawImage(param_2,uVar2,aIStack_18,aRStack_28,0);
  uVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(lVar1 + 0xb0));
  EA::Text::Rectangle::Rectangle
            (aRStack_28,param_1 + (float)*(int *)(lVar1 + 0xc0) * 0.75,
             param_2_00 + (float)*(int *)(lVar1 + 0xc4) * 0.75,(float)*(int *)(lVar1 + 0xb8) * 0.75,
             (float)*(int *)(lVar1 + 0xbc) * 0.75);
  WorldMapCamera::DrawImage(param_2,uVar2,aIStack_18,aRStack_28,0);
  uVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(lVar1 + 0xe0));
  EA::Text::Rectangle::Rectangle
            (aRStack_28,param_1 + (float)*(int *)(lVar1 + 0xf0) * 0.75,
             param_2_00 + (float)*(int *)(lVar1 + 0xf4) * 0.75,(float)*(int *)(lVar1 + 0xe8) * 0.75,
             (float)*(int *)(lVar1 + 0xec) * 0.75);
  WorldMapCamera::DrawImage(param_2,uVar2,aIStack_18,aRStack_28,0);
  uVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(lVar1 + 200));
  EA::Text::Rectangle::Rectangle
            (aRStack_28,param_1 + (float)*(int *)(lVar1 + 0xd8) * 0.75,
             param_2_00 + (float)*(int *)(lVar1 + 0xdc) * 0.75,(float)*(int *)(lVar1 + 0xd0) * 0.75,
             (float)*(int *)(lVar1 + 0xd4) * 0.75);
  WorldMapCamera::DrawImage(param_2,uVar2,aIStack_18,aRStack_28,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::activateStarGateAnimation() */

void __thiscall WorldMap::activateStarGateAnimation(WorldMap *this)

{
  short sVar1;
  WorldDataManager *this_00;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  EffectAnimRig_StarGate *pEVar5;
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x2f0) != 0) {
    Sexy::StringToLower((Sexy *)(*(long *)(this + 0x2f0) + 0x38),___stack_chk_guard);
    this_00 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
    uVar2 = FUN_0547429c(asStack_58);
    Sexy::StrFormat("%s_stargate_exit",asStack_50,uVar2);
    lVar3 = WorldDataManager::FindEventByName(this_00,asStack_50);
    std::string::~string(asStack_50);
    sVar1 = FUN_04528ba0(*(undefined2 *)(lVar3 + 0xe0));
    puVar4 = (undefined8 *)FUN_04528cb8(*(undefined8 *)(this + 0x1a8),(long)sVar1);
    pEVar5 = (EffectAnimRig_StarGate *)*puVar4;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onActivateStarGateAnimationFinished);
    Sexy::Delegate0::Delegate0<WorldMap,void(WorldMap::*)()>(aDStack_38,asStack_50);
    EffectAnimRig_StarGate::PlayInteractableSequence(pEVar5,aDStack_38);
    std::string::~string(asStack_58);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::finalizeStarGateAnimation() */

void __thiscall WorldMap::finalizeStarGateAnimation(WorldMap *this)

{
  short sVar1;
  WorldDataManager *this_00;
  undefined8 uVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  undefined8 *puVar3;
  ProfileMgr *this_02;
  PlayerInfo *pPVar4;
  EffectAnimRig_StarGate *pEVar5;
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x2f0) != 0) {
    Sexy::StringToLower((Sexy *)(*(long *)(this + 0x2f0) + 0x38),___stack_chk_guard);
    this_00 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
    uVar2 = FUN_0547429c(asStack_58);
    Sexy::StrFormat("%s_stargate_exit",asStack_50,uVar2);
    this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)WorldDataManager::FindEventByName(this_00,asStack_50);
    std::string::~string(asStack_50);
    sVar1 = FUN_04528ba0(*(undefined2 *)(this_01 + 0xe0));
    puVar3 = (undefined8 *)FUN_04528cb8(*(undefined8 *)(this + 0x1a8),(long)sVar1);
    pEVar5 = (EffectAnimRig_StarGate *)*puVar3;
    *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
      **)(this + 0x230) = this_01;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onFinalizeStarGateAnimationFinished);
    Sexy::Delegate0::Delegate0<WorldMap,void(WorldMap::*)()>(aDStack_38,asStack_50);
    EffectAnimRig_StarGate::PlayUnlockingSequence(pEVar5,aDStack_38);
    this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
    uVar2 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_rightmost(this_01);
    PlayerInfo::SetWorldMapEventStatus(pPVar4,uVar2,uVar2,3,1);
    std::string::~string(asStack_58);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::lastLevelCompletedIsMinibossEvent() */

void WorldMap::lastLevelCompletedIsMinibossEvent(void)

{
  bool bVar1;
  int iVar2;
  WorldDataManager *this;
  long lVar3;
  undefined1 auVar4 [16];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  auVar4 = LawnApp::GetLastCompletedLevel(gLawnApp);
  Sexy::StringToLower(auVar4._0_8_,auVar4._8_8_);
  bVar1 = std::operator!=("",asStack_10);
  if (bVar1) {
    this = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
    lVar3 = WorldDataManager::FindEventByLevelName(this,asStack_10);
    if (lVar3 != 0) {
      iVar2 = FUN_04528b58(*(undefined4 *)(lVar3 + 0x78));
      bVar1 = iVar2 == 2;
      goto LAB_0452e3c8;
    }
  }
  bVar1 = false;
LAB_0452e3c8:
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::GetWorldBoundingRect() */

void WorldMap::GetWorldBoundingRect(void)

{
  int iVar1;
  int iVar2;
  long in_x0;
  long lVar3;
  RtObject *this;
  WorldMap_EventBar *pWVar4;
  Insets *in_x8;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIWorldMapTopBar");
  lVar3 = UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  iVar1 = 0;
  if (lVar3 != 0) {
    iVar1 = FUN_04528bb4(*(undefined4 *)(lVar3 + 0x3c));
    iVar2 = FUN_045296fc(4);
    iVar1 = iVar1 + iVar2;
  }
  std::string::string(asStack_18,"UIWorldMapEventBar");
  lVar3 = UIWidget::GetWidgetBySheetName(asStack_18);
  if (lVar3 == 0) {
    std::string::~string(asStack_18);
    nop();
    iVar2 = 0;
  }
  else {
    std::string::string(asStack_10,"UIWorldMapEventBar");
    this = (RtObject *)UIWidget::GetWidgetBySheetName(asStack_10);
    pWVar4 = Sexy::RtObject::Cast<WorldMap_EventBar>(this);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
    iVar2 = 0;
    if (pWVar4 != (WorldMap_EventBar *)0x0) {
      iVar2 = FUN_04528bb4(*(undefined4 *)(pWVar4 + 0x3c));
    }
  }
  Sexy::Insets::Insets
            (in_x8,(int)*(float *)(in_x0 + 0x210) - *(int *)(in_x0 + 0x48),
             ((int)*(float *)(in_x0 + 0x214) + iVar1) - *(int *)(in_x0 + 0x4c),
             *(int *)(gLawnApp + 0x724),*(int *)(gLawnApp + 0x728) - (iVar1 + iVar2));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::PlayTransitionEffect() */

void __thiscall WorldMap::PlayTransitionEffect(WorldMap *this)

{
  ResourceInfo *pRVar1;
  RtClass *pRVar2;
  PopAnimRig *pPVar3;
  string *psVar4;
  RtWeakPtr aRStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::LoadGroup(gLawnApp,(string *)&DAT_06b0fcc0);
  psVar4 = *(string **)(gLawnApp + 0x848);
  std::string::string(asStack_40,"POPANIM_EFFECTS_TIME_TUNNEL");
  Sexy::ResourceManager::GetResourceForStringIdT<Sexy::PopAnim>(psVar4,SUB81(asStack_40,0));
  std::string::~string(asStack_40);
  nop();
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_48);
  pRVar2 = (RtClass *)PopAnimRig::StaticGetClass();
  pPVar3 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable((PopAnim *)pRVar1,pRVar2);
  *(PopAnimRig **)(this + 0xee8) = pPVar3;
  std::string::string(asStack_40,"animation");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  PopAnimRig::PlayAndStop(pPVar3,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::createZombossHologram() */

void __thiscall WorldMap::createZombossHologram(WorldMap *this)

{
  PopAnim *pPVar1;
  EffectAnimRig_ZombossHologram *pEVar2;
  string *psVar3;
  float fVar4;
  float fVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  string asStack_38 [8];
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x3d0) == 0) {
    psVar3 = *(string **)(gLawnApp + 0x848);
    std::string::string(asStack_38,"POPANIM_WORLDMAP_ZOMBOSS_NODE_HOLOGRAM");
    Sexy::ResourceManager::GetResourceForStringIdT<Sexy::PopAnim>(psVar3,SUB81(asStack_38,0));
    std::string::~string(asStack_38);
    nop();
    pPVar1 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
    pEVar2 = PopAnimRig::CreateRigOutsideTable<EffectAnimRig_ZombossHologram>(pPVar1);
    *(EffectAnimRig_ZombossHologram **)(this + 0x3d0) = pEVar2;
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    Sexy::SexyTransform2D::Scale(aSStack_30,1.0,1.0);
    fVar4 = (float)FUN_04529710(0x42980000);
    fVar5 = (float)FUN_04529710(0x43340000);
    FUN_04528af4(-fVar4,-fVar5,auStack_28,auStack_1c);
    PopAnimRig::SetRenderTransform(*(PopAnimRig **)(this + 0x3d0),aSStack_30);
    PopAnimRig::SetDrawScale
              (*(PopAnimRig **)(this + 0x3d0),*(float *)(gLawnApp + 0x28dc) * 0.0006510417);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap::cleanupAudioRTPC(MapEventItem const*) */

void __thiscall WorldMap::cleanupAudioRTPC(WorldMap *this,MapEventItem *param_1)

{
  short sVar1;
  long lVar2;
  undefined8 *puVar3;
  EffectAnimRig_IslandNode *this_00;
  long extraout_x0;
  RtObject *this_01;
  
  sVar1 = FUN_04528bac(*(undefined2 *)(param_1 + 0xe2));
  if (sVar1 != -1) {
    lVar2 = FUN_04528bb0(*(undefined8 *)(param_1 + 0xe8));
    puVar3 = (undefined8 *)FUN_04528cb8(*(undefined8 *)(lVar2 + 0x78),(long)sVar1);
    this_01 = (RtObject *)*puVar3;
    if (this_01 != (RtObject *)0x0) {
      this_00 = Sexy::RtObject::Cast<EffectAnimRig_IslandNode>(this_01);
      if (this_00 == (EffectAnimRig_IslandNode *)0x0) {
        Sexy::RtObject::Cast<PlantAnimRig>(this_01);
        return;
      }
      nop();
      if (extraout_x0 != 0) {
        EffectAnimRig_IslandNode::UnregisterAudioID(this_00);
        return;
      }
    }
  }
  return;
}


/* WorldMap::cleanupAllAudioRTPCs() */

void __thiscall WorldMap::cleanupAllAudioRTPCs(WorldMap *this)

{
  int iVar1;
  WorldDataManager *this_00;
  long lVar2;
  ulong uVar3;
  MapEventItem *pMVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  
  this_00 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
  iVar7 = 0;
  iVar1 = WorldDataManager::GetWorldDataCount(this_00);
  if (0 < iVar1) {
    do {
      lVar2 = WorldDataManager::GetWorldDataByIdx(this_00,iVar7);
      if (*(char *)(*(long *)(lVar2 + 0xb0) + 0x50) != '\0') {
        uVar5 = 0;
        while( true ) {
          uVar6 = *(undefined8 *)(lVar2 + 8);
          uVar3 = FUN_04528d68(uVar6,*(undefined8 *)(lVar2 + 0x10));
          if (uVar3 <= uVar5) break;
          pMVar4 = (MapEventItem *)FUN_04528d88(uVar6,uVar5);
          uVar5 = uVar5 + 1;
          cleanupAudioRTPC(this,pMVar4);
        }
        uVar5 = 0;
        while( true ) {
          uVar6 = *(undefined8 *)(lVar2 + 0x20);
          uVar3 = FUN_04528d68(uVar6,*(undefined8 *)(lVar2 + 0x28));
          if (uVar3 <= uVar5) break;
          pMVar4 = (MapEventItem *)FUN_04528d88(uVar6,uVar5);
          cleanupAudioRTPC(this,pMVar4);
          uVar5 = uVar5 + 1;
        }
      }
      iVar7 = iVar7 + 1;
      iVar1 = WorldDataManager::GetWorldDataCount(this_00);
    } while (iVar7 < iVar1);
  }
  return;
}


/* WorldMap::SetupTutorial(MapEventItem const*) */

undefined1 __thiscall WorldMap::SetupTutorial(WorldMap *this,MapEventItem *param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  ProfileMgr *this_00;
  PlayerInfo *pPVar5;
  long lVar6;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (*(int *)(param_1 + 0x70) != 0) {
    cVar1 = PlayerInfo::PlayerHasCompletedTutorial();
    if (cVar1 != '\0') {
      return 0;
    }
  }
  iVar3 = FUN_04528bb8(*(undefined4 *)(pPVar5 + 0x3f8));
LAB_0452ea98:
  do {
    iVar3 = iVar3 + 1;
    cVar1 = isTutorialDeprecated(this,iVar3);
  } while (cVar1 != '\0');
  cVar1 = CheckTutorialFinished(this,iVar3);
  if (cVar1 == '\0') goto code_r0x0452eac8;
  goto LAB_0452eb20;
code_r0x0452eac8:
  cVar1 = PlayerInfo::PlayerHasCompletedTutorial(pPVar5,iVar3);
  if (cVar1 == '\0') {
    if (*(int *)(param_1 + 0x70) <= iVar3) {
LAB_0452eae0:
      uVar2 = (**(code **)(*(long *)this + 0x338))(this,iVar3);
      return uVar2;
    }
    lVar6 = Sexy::LazySingleton<TutorialMgr>::GetInstance();
    iVar4 = FUN_04528c74(*(undefined4 *)(lVar6 + 0x10));
    if (iVar4 != 0) goto LAB_0452eae0;
LAB_0452eb20:
    PlayerInfo::CompleteTutorial(pPVar5,iVar3);
  }
  goto LAB_0452ea98;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::setStateHelper(StateDefinition<WorldMapState> const&) */

void __thiscall WorldMap::setStateHelper(WorldMap *this,StateDefinition *param_1)

{
  int iVar1;
  char cVar2;
  long *plVar3;
  undefined4 uVar4;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = StateMachine<WorldMapState>::SetState
                    ((StateMachine<WorldMapState> *)(this + 0xd8),param_1);
  std::string::string(asStack_10,"WorldMap State");
  nop();
  StateDefinition<WorldMapState>::GetDisplayName();
  nop();
  std::string::~string(asStack_18);
  std::string::~string(asStack_10);
  nop();
  if (cVar2 != '\0') {
    uVar4 = PVZ_T();
    iVar1 = *(int *)param_1;
    *(undefined4 *)(this + 0xd4) = uVar4;
    if (iVar1 == 4) {
      uVar4 = PVZ_T();
      *(undefined4 *)(this + 0xee0) = uVar4;
    }
    plVar3 = (long *)WorldMapActionManager::GetCurrentAction
                               ((WorldMapActionManager *)(this + 0x358));
    if (plVar3 != (long *)0x0) {
      uVar4 = FUN_04528e64(*(undefined4 *)(this + 0xd8));
      (**(code **)(*plVar3 + 0x60))(plVar3,uVar4);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::setState(WorldMapState) */

void __thiscall WorldMap::setState(WorldMap *this,uint param_2)

{
  undefined8 uVar1;
  string asStack_228 [8];
  CBMemberTranslatorX aCStack_220 [24];
  CBMemberTranslatorX aCStack_208 [24];
  CBMemberTranslatorX aCStack_1f0 [24];
  Delegate1<WorldMapState> aDStack_1d8 [48];
  Delegate0 aDStack_1a8 [48];
  Delegate1<WorldMapState> aDStack_178 [48];
  StateDefinition<WorldMapState> aSStack_148 [160];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StateDefinition<WorldMapState>::StateDefinition(aSStack_148);
  if (param_2 < 6) {
    switch(param_2) {
    case 0:
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x3c0);
      Sexy::Delegate1<WorldMapState>::Delegate1<WorldMap,void(WorldMap::*)(WorldMapState)>
                (aDStack_1d8,aCStack_220);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x3c8);
      Sexy::Delegate0::Delegate0<WorldMap,void(WorldMap::*)()>(aDStack_1a8,aCStack_208);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x3d0);
      Sexy::Delegate1<WorldMapState>::Delegate1<WorldMap,void(WorldMap::*)(WorldMapState)>
                (aDStack_178,aCStack_1f0);
      std::string::string(asStack_228,"WM_Loading");
      uVar1 = 0;
      break;
    case 1:
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x3d8);
      Sexy::Delegate1<WorldMapState>::Delegate1<WorldMap,void(WorldMap::*)(WorldMapState)>
                (aDStack_1d8,aCStack_220);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x3e0);
      Sexy::Delegate0::Delegate0<WorldMap,void(WorldMap::*)()>(aDStack_1a8,aCStack_208);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x3e8);
      Sexy::Delegate1<WorldMapState>::Delegate1<WorldMap,void(WorldMap::*)(WorldMapState)>
                (aDStack_178,aCStack_1f0);
      std::string::string(asStack_228,"WM_Initializing");
      uVar1 = 1;
      break;
    case 2:
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x3f0);
      Sexy::Delegate1<WorldMapState>::Delegate1<WorldMap,void(WorldMap::*)(WorldMapState)>
                (aDStack_1d8,aCStack_220);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x3f8);
      Sexy::Delegate0::Delegate0<WorldMap,void(WorldMap::*)()>(aDStack_1a8,aCStack_208);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x400);
      Sexy::Delegate1<WorldMapState>::Delegate1<WorldMap,void(WorldMap::*)(WorldMapState)>
                (aDStack_178,aCStack_1f0);
      std::string::string(asStack_228,"WM_BackgroundLoading");
      uVar1 = 2;
      break;
    case 3:
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x408);
      Sexy::Delegate1<WorldMapState>::Delegate1<WorldMap,void(WorldMap::*)(WorldMapState)>
                (aDStack_1d8,aCStack_220);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x410);
      Sexy::Delegate0::Delegate0<WorldMap,void(WorldMap::*)()>(aDStack_1a8,aCStack_208);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x418);
      Sexy::Delegate1<WorldMapState>::Delegate1<WorldMap,void(WorldMap::*)(WorldMapState)>
                (aDStack_178,aCStack_1f0);
      std::string::string(asStack_228,"WM_BackgroundInit");
      uVar1 = 3;
      break;
    case 4:
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x420);
      Sexy::Delegate1<WorldMapState>::Delegate1<WorldMap,void(WorldMap::*)(WorldMapState)>
                (aDStack_1d8,aCStack_220);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x428);
      Sexy::Delegate0::Delegate0<WorldMap,void(WorldMap::*)()>(aDStack_1a8,aCStack_208);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x430);
      Sexy::Delegate1<WorldMapState>::Delegate1<WorldMap,void(WorldMap::*)(WorldMapState)>
                (aDStack_178,aCStack_1f0);
      std::string::string(asStack_228,"WM_Ready");
      uVar1 = 4;
      break;
    case 5:
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x438);
      Sexy::Delegate1<WorldMapState>::Delegate1<WorldMap,void(WorldMap::*)(WorldMapState)>
                (aDStack_1d8,aCStack_220);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x440);
      Sexy::Delegate0::Delegate0<WorldMap,void(WorldMap::*)()>(aDStack_1a8,aCStack_208);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x448);
      Sexy::Delegate1<WorldMapState>::Delegate1<WorldMap,void(WorldMap::*)(WorldMapState)>
                (aDStack_178,aCStack_1f0);
      std::string::string(asStack_228,"WM_WaitingToDie");
      uVar1 = 5;
    }
    StateDefinition<WorldMapState>::StateDefinition
              (aSStack_a8,uVar1,aDStack_1d8,aDStack_1a8,aDStack_178,asStack_228);
    StateDefinition<WorldMapState>::operator=(aSStack_148,(StateDefinition *)aSStack_a8);
    StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
    std::string::~string(asStack_228);
    nop();
  }
  setStateHelper(this,(StateDefinition *)aSStack_148);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_148);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::onStartCardGameLevel(std::string const&) */

void __thiscall WorldMap::onStartCardGameLevel(WorldMap *this,string *param_1)

{
  TGALogMgr *pTVar1;
  undefined8 uVar2;
  PrimeText *this_00;
  size_t in_x2;
  TGASecretStore aTStack_68 [8];
  undefined1 auStack_60 [40];
  TGASecretStore aTStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TGASecretStore::TGASecretStore(aTStack_68);
  std::string::append((string *)aTStack_68,"3",in_x2);
  thunk_FUN_05475e00(auStack_60,param_1);
  pTVar1 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGASecretStore::TGASecretStore(aTStack_38,aTStack_68);
  TGALogMgr::LogCardGame(pTVar1,aTStack_38);
  DropGroupNode::~DropGroupNode((DropGroupNode *)aTStack_38);
  uVar2 = FUN_0547429c(param_1);
  Sexy::StrFormat("WorldMap::onStartCardGameLevel - Starting level from pvz1mode dialog callback: %s"
                  ,aTStack_38,uVar2);
  nop();
  std::string::~string((string *)aTStack_38);
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  FUN_045291e8(gGameStateMgr + 0x1eb1);
  GameStateMgr::StartLevel(gGameStateMgr,&DAT_06b0ffd8,param_1,0xffffffff,1,1,0xb);
  DropGroupNode::~DropGroupNode((DropGroupNode *)aTStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::onLevelNodeUnlockAnimFinished(std::string const&) */

void WorldMap::onLevelNodeUnlockAnimFinished(string *param_1)

{
  char cVar1;
  short sVar2;
  long lVar3;
  undefined8 *puVar4;
  WorldDataManager *this;
  long *plVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  string asStack_30 [8];
  string asStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  auVar7 = LawnApp::GetLastCompletedLevel(gLawnApp);
  WorldMapUtils::GetNextLevelOnPath(auVar7._0_8_,auVar7._8_8_);
  cVar1 = FUN_0547419c(asStack_30);
  if (cVar1 == '\0') {
    this = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
    lVar3 = WorldDataManager::FindEventByLevelName(this,asStack_30);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x230);
  }
  if (lVar3 != 0) {
    sVar2 = FUN_04528ba0(*(undefined2 *)(lVar3 + 0xe0));
    if (sVar2 != -1) {
      puVar4 = (undefined8 *)FUN_04528cb8(*(undefined8 *)(param_1 + 0x1a8),(long)sVar2);
      plVar5 = (long *)*puVar4;
      pcVar6 = *(code **)(*plVar5 + 0x78);
      std::string::string(asStack_28,"unlocked");
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
      (*pcVar6)(plVar5,asStack_28,1,0,avStack_20);
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_20);
      std::string::~string(asStack_28);
      nop();
    }
  }
  param_1[0x355] = (string)0x0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  std::string::~string(asStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap::checkLoadComplete() */

int __thiscall WorldMap::checkLoadComplete(WorldMap *this)

{
  LawnApp *this_00;
  bool bVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  string *psVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  cVar2 = std::vector<std::string,std::allocator<std::string>>::empty
                    ((vector<std::string,std::allocator<std::string>> *)(this + 0x178));
  if ((cVar2 == '\0') &&
     (cVar2 = LawnApp::IsGroupLoadComplete(gLawnApp,(vector *)(this + 0x178)), cVar2 == '\0')) {
    return 0;
  }
  iVar6 = 1;
  cVar2 = std::vector<WorldResourceLoadState,std::allocator<WorldResourceLoadState>>::empty
                    ((vector<WorldResourceLoadState,std::allocator<WorldResourceLoadState>> *)
                     (this + 400));
  if (cVar2 == '\0') {
    uVar8 = *(undefined8 *)(this + 400);
    uVar3 = FUN_04528df8(uVar8,*(undefined8 *)(this + 0x198));
    uVar9 = 1;
    if (uVar3 != 0) {
      do {
        if (iVar6 == 0) {
          return 0;
        }
        lVar4 = FUN_04528e04(uVar8);
        uVar7 = 0;
        if (*(int *)(lVar4 + 4) == 4) {
          iVar6 = 1;
        }
        else {
          do {
            uVar8 = *(undefined8 *)(lVar4 + 8);
            uVar3 = FUN_04528e0c(uVar8,*(undefined8 *)(lVar4 + 0x10));
            this_00 = gLawnApp;
            if (uVar3 <= uVar7) {
              uVar8 = *(undefined8 *)(this + 400);
              iVar6 = 1;
              uVar3 = FUN_04528df8(uVar8,*(undefined8 *)(this + 0x198));
              goto LAB_0452fd24;
            }
            psVar5 = (string *)FUN_04528e5c(uVar8,uVar7);
            cVar2 = LawnApp::IsGroupLoadComplete(this_00,psVar5);
            uVar7 = uVar7 + 1;
          } while (cVar2 != '\0');
          uVar8 = *(undefined8 *)(this + 400);
          uVar3 = FUN_04528df8(uVar8,*(undefined8 *)(this + 0x198));
          iVar6 = 0;
        }
LAB_0452fd24:
        bVar1 = uVar9 < uVar3;
        uVar9 = uVar9 + 1;
      } while (bVar1);
    }
  }
  return iVar6;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::OnGotActActivityStates(bool) */

void __thiscall WorldMap::OnGotActActivityStates(WorldMap *this,bool param_1)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  string asStack_40 [8];
  CurrentSalesInfo CStack_38;
  char local_37;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    if (this_01 == (PlayerInfo *)0x0) {
      LawnApp::TestCanPopWorldmapActive(gLawnApp);
    }
    else {
      iVar2 = FUN_04528bbc(*(undefined4 *)(this_01 + 0x1100));
      if (9 < iVar2 - 1U) {
        cVar1 = LawnApp::TestCanPopWorldmapActive(gLawnApp);
        if (cVar1 != '\0') {
          PlayerInfo::GetCurrentSalesInfo();
          if (local_37 == '\0') {
            CurrentSalesInfo::~CurrentSalesInfo(&CStack_38);
          }
          else {
            cVar1 = PlayerInfo::HasValidSales(this_01);
            CurrentSalesInfo::~CurrentSalesInfo(&CStack_38);
            if (cVar1 != '\0') {
              PlayerInfo::GetCurrentSalesInfo();
              CurrentSalesInfo::~CurrentSalesInfo(&CStack_38);
              iVar2 = PlantChipNameMapperServerID::GetInstance();
              NameMapperBase::GetNameForId(iVar2);
              FUN_05475d88(&CStack_38,asStack_40);
              cVar1 = PlayerInfo::HasRealLevelUpTo(this_01,&CStack_38,0xffffffff);
              std::string::~string((string *)&CStack_38);
              if (cVar1 == '\0') {
                LawnApp::ShowSalesUI(gLawnApp);
                std::string::~string(asStack_40);
                goto LAB_04530370;
              }
              std::string::~string(asStack_40);
            }
          }
        }
      }
    }
  }
  MessageRouter::Post((_func_void *)gMessageRouter);
LAB_04530370:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::onMonthlyCardQueryOrder(std::string const&, int) */

void __thiscall WorldMap::onMonthlyCardQueryOrder(WorldMap *this,string *param_1,int param_2)

{
  LawnApp *this_00;
  bool bVar1;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  char *__s;
  string asStack_28 [8];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"40010960");
  this_00 = gLawnApp;
  if (!bVar1) goto switchD_045304f0_caseD_1;
  switch(param_2) {
  case 0:
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    std::string::string(asStack_28,"com.popcap.android.chs.PVZ2.MonthlySubs30");
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_20);
    PlayerInfo::HandlePurchase(this_02,asStack_28,(vector *)asStack_20);
    std::vector<PaymentBundleInfo,std::allocator<PaymentBundleInfo>>::~vector
              ((vector<PaymentBundleInfo,std::allocator<PaymentBundleInfo>> *)asStack_20);
    std::string::~string(asStack_28);
    nop();
  default:
    goto switchD_045304f0_caseD_1;
  case 2:
    std::string::string(asStack_28,"[MONTHLY_CARD_QUERY_FAILED]");
    __s = "[MONTHLY_CARD_QUERY_FAILED_REASON_1]";
    break;
  case 3:
    std::string::string(asStack_28,"[MONTHLY_CARD_QUERY_FAILED]");
    __s = "[MONTHLY_CARD_QUERY_FAILED_REASON_2]";
    break;
  case 4:
    std::string::string(asStack_28,"[MONTHLY_CARD_QUERY_FAILED]");
    __s = "[MONTHLY_CARD_QUERY_FAILED_REASON_3]";
  }
  std::string::string(asStack_20,__s);
  LawnApp::ShowMessageDialogNoCallback(this_00,asStack_28,asStack_20);
  std::string::~string(asStack_20);
  nop();
  std::string::~string(asStack_28);
  nop();
switchD_045304f0_caseD_1:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::GetNarrativeToQueue(std::string) */

void WorldMap::GetNarrativeToQueue
               (MapNarrativeInfo *param_1,string *param_2,undefined8 param_3,undefined8 param_4,
               LineBreakCategory *param_5,LineBreakCategory *param_6)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  ProfileMgr *this;
  PlayerInfo *this_00;
  WorldDataManager *this_01;
  long lVar5;
  long lVar6;
  long lVar7;
  MapEventItem *pMVar8;
  ulong uVar9;
  wchar16 *pwVar10;
  char *__s1;
  wchar16 *extraout_x1;
  wchar16 *extraout_x1_00;
  string *extraout_x1_01;
  string *psVar11;
  size_t __n;
  ulong uVar12;
  undefined8 uVar13;
  string asStack_30 [8];
  string asStack_28 [8];
  MapNarrativeInfo local_20 [8];
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  MapNarrativeInfo::MapNarrativeInfo(local_20);
  MapNarrativeInfo::MapNarrativeInfo(param_1);
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 != (PlayerInfo *)0x0) {
    this_01 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
    iVar4 = 0;
    lVar5 = WorldDataManager::GetWorldDataByWorldName(this_01,param_2);
    iVar3 = WorldDataManager::GetWorldDataCount(this_01);
    if (0 < iVar3) {
      do {
        uVar12 = 0;
        lVar6 = WorldDataManager::GetWorldDataByIdx(this_01,iVar4);
        uVar13 = *(undefined8 *)(lVar6 + 0x20);
        lVar7 = FUN_04528d68(uVar13,*(undefined8 *)(lVar6 + 0x28));
        if (lVar7 != 0) {
          do {
            pMVar8 = (MapEventItem *)FUN_04528dd0(uVar13,uVar12);
            iVar3 = WorldMapUtils::GetVisualMapEventStatus(pMVar8,this_00);
            if (iVar3 < 3) {
              if (iVar3 == 2) {
                pMVar8 = pMVar8 + 0x60;
                lVar7 = FUN_05474184(pMVar8);
                goto joined_r0x0453089c;
              }
            }
            else {
              pMVar8 = pMVar8 + 0x68;
              lVar7 = FUN_05474184(pMVar8);
joined_r0x0453089c:
              if (lVar7 != 0) {
                uVar13 = FUN_0547429c(pMVar8);
                Sexy::StrFormat("nar_%s",asStack_28,uVar13);
                cVar1 = PlayerInfo::GetNarrationEventCompleted(this_00,asStack_28);
                if (cVar1 == '\0') {
                  if (lVar5 == lVar6) {
                    local_20[0] = (MapNarrativeInfo)0x1;
                    thunk_FUN_05475e00(auStack_18,pMVar8);
                    thunk_FUN_05475e00(auStack_10,asStack_28);
                  }
                  else {
                    *param_1 = (MapNarrativeInfo)0x1;
                    thunk_FUN_05475e00(param_1 + 8,pMVar8);
                    thunk_FUN_05475e00(param_1 + 0x10,asStack_28);
                  }
                }
                std::string::~string(asStack_28);
              }
            }
            uVar12 = uVar12 + 1;
            uVar13 = *(undefined8 *)(lVar6 + 0x20);
            uVar9 = FUN_04528d68(uVar13,*(undefined8 *)(lVar6 + 0x28));
          } while (uVar12 < uVar9);
        }
        if (local_20[0] != (MapNarrativeInfo)0x0) {
          MapNarrativeInfo::operator=(param_1,local_20);
        }
        iVar4 = iVar4 + 1;
        iVar3 = WorldDataManager::GetWorldDataCount(this_01);
      } while (iVar4 < iVar3);
    }
    pwVar10 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    psVar11 = asStack_30;
    std::string::string(asStack_28,"LoDNarratives");
    cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (pwVar10,(wchar16 *)asStack_28,(LineBreakCategory *)psVar11,param_5,param_6);
    std::string::~string(asStack_28);
    nop();
    if ((cVar1 != '\0') && (*param_1 == (MapNarrativeInfo)0x0)) {
      bVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                        ((wchar16 *)0x0,extraout_x1,(LineBreakCategory *)psVar11,param_5,param_6);
      if ((bVar2 != 0) &&
         (cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                            ((wchar16 *)(ulong)bVar2,extraout_x1_00,(LineBreakCategory *)psVar11,
                             param_5,param_6), cVar1 != '\0')) {
        PlantAnimRig_HoyaCordata::getIdleAnimationName();
        Sexy::StringToLower((Sexy *)asStack_28,extraout_x1_01);
        std::string::~string(asStack_28);
        __s1 = (char *)FUN_0547429c(asStack_30);
        iVar4 = strncmp(__s1,"lod_",4);
        if (iVar4 == 0) {
          std::string::string(asStack_28,"nar_lod_map_outro");
          cVar1 = PlayerInfo::GetNarrationEventCompleted(this_00,asStack_28);
          std::string::~string(asStack_28);
          nop();
          if (cVar1 == '\0') {
            __n = 1;
            *param_1 = (MapNarrativeInfo)0x1;
            std::string::append((string *)(param_1 + 8),"LOD_MAP_OUTRO",1);
            std::string::append((string *)(param_1 + 0x10),"nar_lod_map_outro",__n);
          }
        }
        std::string::~string(asStack_30);
      }
    }
  }
  RiverEntityProperties::~RiverEntityProperties((RiverEntityProperties *)local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::placeArrowOnLevelToPlayIfMultipleUnlockedLevelsExist() */

void __thiscall WorldMap::placeArrowOnLevelToPlayIfMultipleUnlockedLevelsExist(WorldMap *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  undefined4 *puVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var6;
  StandaloneEffect *this_00;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var7;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  float fVar8;
  float fVar9;
  undefined8 local_38;
  undefined8 local_30;
  FastCurve aFStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((((*(long *)(this + 0x2f0) != 0) &&
        (cVar1 = WorldMapUtils::IsRiftWorld((string *)(*(long *)(this + 0x2f0) + 0x38)),
        cVar1 == '\0')) &&
       (cVar1 = WorldMapUtils::IsPVZ1World((string *)(*(long *)(this + 0x2f0) + 0x38)),
       cVar1 == '\0')) &&
      ((cVar1 = WorldMapUtils::IsUnchartedWorld((string *)(*(long *)(this + 0x2f0) + 0x38)),
       cVar1 == '\0' &&
       (cVar1 = WorldMapUtils::IsCardGameWorld((string *)(*(long *)(this + 0x2f0) + 0x38)),
       cVar1 == '\0')))) &&
     (cVar1 = WorldMapUtils::IsPlantWarsWorld((string *)(*(long *)(this + 0x2f0) + 0x38)),
     cVar1 == '\0')) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    cVar1 = WorldMapUtils::GetOrderedMainSpinePath
                      ((string *)(*(long *)(this + 0x2f0) + 0x38),(vector *)avStack_20);
    if (cVar1 != '\0') {
      local_38 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_20);
      local_30 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
      this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)0x0;
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30),
            bVar2) {
        plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
        p_Var6 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)*plVar4;
        iVar3 = FUN_04528b48(*(undefined4 *)(p_Var6 + 0x14));
        p_Var7 = this_01;
        if (((iVar3 == 1) && (cVar1 = FUN_04528b70(p_Var6[0xf1]), cVar1 != '\0')) &&
           ((cVar1 = FUN_04528b7c(p_Var6[0xf2]), cVar1 == '\0' &&
            (p_Var7 = p_Var6,
            this_01 !=
            (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)0x0)))) {
          StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x298),true);
          this_00 = *(StandaloneEffect **)(this + 0x298);
          puVar5 = (undefined4 *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_end(this_01);
          fVar8 = (float)FUN_04529710(*puVar5);
          fVar9 = (float)FUN_04529710((float)puVar5[1] - 70.0);
          Sexy::FastCurve::SetOutRange(aFStack_28,fVar8,fVar9);
          StandaloneEffect::SetScreenSpaceOrigin(this_00,(SexyVector2 *)aFStack_28,900000);
          goto LAB_04530bfc;
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
        this_01 = p_Var7;
      }
      StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x298),false);
    }
LAB_04530bfc:
    std::vector<MapEventItem_const*,std::allocator<MapEventItem_const*>>::~vector
              ((vector<MapEventItem_const*,std::allocator<MapEventItem_const*>> *)avStack_20);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::updateMapEventsArt() */

void __thiscall WorldMap::updateMapEventsArt(WorldMap *this)

{
  string *psVar1;
  MapEventItem *pMVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  WorldDataManager *this_02;
  WorldData *pWVar12;
  long lVar13;
  MapEventItem *this_03;
  string *psVar14;
  ulong uVar15;
  UnchartedModeNetworkMgr *this_04;
  FilesystemSaveGameContext *pFVar16;
  undefined8 *puVar17;
  PopAnimRig *this_05;
  CardGameNetworkMgr *pCVar18;
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *p_Var19;
  PlantWarsNetworkMgr *this_06;
  PlantWarsNetworkMgr *this_07;
  undefined1 uVar20;
  ulong uVar21;
  PopAnimRig *pPVar22;
  int iVar23;
  string asStack_48 [16];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    this_02 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
    iVar23 = 0;
    iVar9 = WorldDataManager::GetWorldDataCount(this_02);
    if (0 < iVar9) {
      do {
        uVar21 = 0;
        pWVar12 = (WorldData *)WorldDataManager::GetWorldDataByIdx(this_02,iVar23);
        lVar13 = FUN_04528d68(*(undefined8 *)(pWVar12 + 0x20),*(undefined8 *)(pWVar12 + 0x28));
        if (lVar13 != 0) {
          do {
            psVar1 = (string *)(pWVar12 + 0x38);
            cVar3 = WorldMapUtils::IsUnchartedWorld(psVar1);
            cVar4 = WorldMapUtils::IsCardGameWorld(psVar1);
            cVar5 = WorldMapUtils::IsPlantWarsWorld(psVar1);
            this_03 = (MapEventItem *)FUN_04528dd0(*(undefined8 *)(pWVar12 + 0x20),uVar21);
            iVar9 = WorldMapUtils::GetVisualMapEventStatus(this_03,this_01);
            if (iVar9 < 3) {
              FUN_04528b74(this_03 + 0xf2,0);
              if (cVar4 == '\0') {
                FUN_04528b88(this_03 + 0xf8,0);
              }
              else {
                pCVar18 = (CardGameNetworkMgr *)
                          Sexy::LazySingleton<CardGameNetworkMgr>::GetInstancePtr();
                p_Var19 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                           *)Sexy::LazySingleton<CardGameNetworkMgr>::GetInstancePtr();
                psVar14 = (string *)
                          std::
                          _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                          ::_M_root(p_Var19);
                lVar13 = Sexy::LazySingleton<CardGameNetworkMgr>::GetInstancePtr();
                bVar7 = (bool)FUN_04528c78(*(undefined1 *)(lVar13 + 8));
                uVar11 = CardGameNetworkMgr::GetLevelStarNumber(pCVar18,psVar14,bVar7,this_03);
                FUN_04528b88(this_03 + 0xf8,uVar11);
              }
              MapEventItem::SetAdventurePlantLockStatus(this_03,true);
              if (iVar9 == 2) goto LAB_04530dd4;
              FUN_04528b68(this_03 + 0xf1,0);
              if (iVar9 == 1) goto LAB_04530df0;
            }
            else {
              pMVar2 = this_03 + 0xf8;
              FUN_04528b74(this_03 + 0xf2,1);
              psVar14 = (string *)
                        Sexy::FilesystemSaveGameContext::GetBuffer
                                  ((FilesystemSaveGameContext *)this_03);
              iVar10 = PlayerInfo::GetStarCompleted(this_01,psVar14);
              FUN_04528b88(pMVar2,iVar10);
              if (iVar10 == 3) {
                std::string::string(asStack_48,"");
                NetworkCacheQueue::setWechatUserID((string *)this_03);
                std::string::~string(asStack_48);
                nop();
                MapEventItem::SetAdventurePlantLockStatus(this_03,false);
LAB_04530dc8:
                if (cVar3 == '\0') goto LAB_04530dcc;
LAB_04530f98:
                this_04 = (UnchartedModeNetworkMgr *)
                          Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
                p_Var19 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                           *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
                psVar14 = (string *)
                          std::
                          _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                          ::_M_root(p_Var19);
                pFVar16 = (FilesystemSaveGameContext *)
                          Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
                bVar7 = (bool)Sexy::FilesystemSaveGameContext::HasError(pFVar16);
                uVar11 = UnchartedModeNetworkMgr::GetLevelStarNumber(this_04,psVar14,bVar7,this_03);
                FUN_04528b88(pMVar2,uVar11);
                FUN_04528b68(this_03 + 0xf1,1);
                cVar4 = WorldMapUtils::WorldHasHardModule(psVar1);
                if (cVar4 != '\0') goto LAB_04530df0;
LAB_04530ff0:
                MapEventItem::SetAdventurePlantLockStatus(this_03,false);
              }
              else {
                if (iVar10 != 1) goto LAB_04530dc8;
                cVar6 = WorldMapUtils::WorldHasHardModule(psVar1);
                if (cVar6 != '\0') {
                  MapEventItem::SetAdventurePlantLockStatus(this_03,false);
                  goto LAB_04530dc8;
                }
                std::string::string(asStack_48,"");
                NetworkCacheQueue::setWechatUserID((string *)this_03);
                std::string::~string(asStack_48);
                nop();
                MapEventItem::SetAdventurePlantLockStatus(this_03,false);
                if (cVar3 != '\0') goto LAB_04530f98;
LAB_04530dcc:
                if (cVar4 == '\0') {
                  if (cVar5 != '\0') {
                    this_06 = (PlantWarsNetworkMgr *)
                              Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
                    this_07 = (PlantWarsNetworkMgr *)
                              Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
                    psVar14 = (string *)PlantWarsNetworkMgr::GetPrefixWorld(this_07);
                    uVar11 = PlantWarsNetworkMgr::GetLevelStarNumber(this_06,psVar14,this_03);
                    FUN_04528b88(pMVar2,uVar11);
                  }
                }
                else {
                  pCVar18 = (CardGameNetworkMgr *)
                            Sexy::LazySingleton<CardGameNetworkMgr>::GetInstancePtr();
                  p_Var19 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                             *)Sexy::LazySingleton<CardGameNetworkMgr>::GetInstancePtr();
                  psVar14 = (string *)
                            std::
                            _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                            ::_M_root(p_Var19);
                  lVar13 = Sexy::LazySingleton<CardGameNetworkMgr>::GetInstancePtr();
                  bVar7 = (bool)FUN_04528c78(*(undefined1 *)(lVar13 + 8));
                  uVar11 = CardGameNetworkMgr::GetLevelStarNumber(pCVar18,psVar14,bVar7,this_03);
                  FUN_04528b88(pMVar2,uVar11);
                }
LAB_04530dd4:
                FUN_04528b68(this_03 + 0xf1,1);
                cVar4 = WorldMapUtils::WorldHasHardModule(psVar1);
                if (cVar4 == '\0') goto LAB_04530ff0;
              }
LAB_04530df0:
              FUN_045291f0(this_03 + 0xf0);
            }
            uVar11 = *(undefined4 *)(this_03 + 0x14);
            if (*(char *)(*(long *)(pWVar12 + 0xb0) + 0x50) == '\0') {
LAB_045310ac:
              iVar10 = FUN_04528b48(uVar11);
            }
            else {
              iVar10 = FUN_04528b48(uVar11);
              if (iVar10 - 2U < 2) {
                sVar8 = FUN_04528bac(*(undefined2 *)(this_03 + 0xe2));
                FUN_04528cb8(*(undefined8 *)(pWVar12 + 0x78),(long)sVar8);
                nop();
                if (2 < iVar9) {
                  Sexy::Color::Color((Color *)asStack_48,1);
                  PopAnimRig::SetPAMColor(this_05,(Color *)asStack_48);
                  sVar8 = FUN_04528ba0(*(undefined2 *)(this_03 + 0xe0));
                  puVar17 = (undefined8 *)FUN_04528cb8(*(undefined8 *)(this + 0x1a8),(long)sVar8);
                  pPVar22 = (PopAnimRig *)*puVar17;
                  std::string::string(asStack_48,"idle2");
                  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
                  PopAnimRig::PlayAndContinue(pPVar22,asStack_48,0,aDStack_38);
                  std::string::~string(asStack_48);
                  nop();
                  uVar11 = *(undefined4 *)(this_03 + 0x14);
                  goto LAB_045310ac;
                }
                Sexy::Color::Color((Color *)asStack_48,1);
                PopAnimRig::SetPAMColor(this_05,(Color *)asStack_48);
                iVar10 = FUN_04528b48(*(undefined4 *)(this_03 + 0x14));
              }
            }
            if (iVar10 == 1) {
              iVar9 = FUN_04528b58(*(undefined4 *)(this_03 + 0x78));
              if (iVar9 == 3) {
                updateZombossNodeRenderStatusForEventItem(this,pWVar12,this_03);
              }
              else {
                updateNormalNodeRenderStatusForEventItem(this,pWVar12,this_03);
                updateZombossNodeRenderStatusForEventItem(this,pWVar12,this_03);
              }
              lVar13 = FUN_04528c10(*(undefined8 *)(this + 0x2f0));
              uVar20 = 0;
              if (lVar13 != 0) {
                std::operator==((string *)(lVar13 + 0x38),"egypt");
                if (cVar3 == '\0') {
LAB_04530f14:
                  uVar20 = 3;
                }
                else {
                  cVar3 = PVZ2UnchartedModeUtils::IsTimeLimitWorld();
                  pFVar16 = (FilesystemSaveGameContext *)
                            Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
                  cVar4 = Sexy::FilesystemSaveGameContext::HasError(pFVar16);
                  if (cVar3 == '\0') {
                    uVar20 = 0;
                    if (cVar4 != '\0') goto LAB_04530f14;
                  }
                  else {
                    uVar20 = 4;
                    if (cVar4 == '\0') {
                      uVar20 = 1;
                    }
                  }
                }
              }
              FUN_04528b80(this_03 + 0xf4,uVar20);
            }
            uVar21 = uVar21 + 1;
            uVar15 = FUN_04528d68(*(undefined8 *)(pWVar12 + 0x20),*(undefined8 *)(pWVar12 + 0x28));
          } while (uVar21 < uVar15);
        }
        iVar23 = iVar23 + 1;
        iVar9 = WorldDataManager::GetWorldDataCount(this_02);
      } while (iVar23 < iVar9);
    }
  }
  if (*(int *)(this + 0x44c) == 0) {
    placeArrowOnLevelToPlayIfMultipleUnlockedLevelsExist(this);
  }
  (**(code **)(*(long *)this + 0x380))();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WorldMap::purgeMapPathGroups() */

void __thiscall WorldMap::purgeMapPathGroups(WorldMap *this)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  uVar7 = *(undefined8 *)(this + 0x390);
  uVar8 = 0;
  lVar1 = FUN_04528da8(uVar7,*(undefined8 *)(this + 0x398));
  if (lVar1 != 0) {
    do {
      uVar5 = 0;
      puVar2 = (undefined8 *)FUN_04528db4(uVar7,uVar8);
      uVar6 = *puVar2;
      uVar3 = FUN_04528dbc(uVar6,puVar2[1]);
      if (uVar3 != 0) {
        do {
          lVar1 = FUN_04528dc8(uVar6,uVar5);
          plVar4 = *(long **)(lVar1 + 0x18);
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x18))(plVar4);
            puVar2 = (undefined8 *)FUN_04528db4(*(undefined8 *)(this + 0x390),uVar8);
            lVar1 = FUN_04528dc8(*puVar2,uVar5);
            *(undefined8 *)(lVar1 + 0x18) = 0;
            uVar7 = *(undefined8 *)(this + 0x390);
            puVar2 = (undefined8 *)FUN_04528db4(uVar7,uVar8);
            uVar6 = *puVar2;
            uVar3 = FUN_04528dbc(uVar6,puVar2[1]);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar3);
      }
      uVar8 = uVar8 + 1;
      uVar5 = FUN_04528da8(uVar7,*(undefined8 *)(this + 0x398));
    } while (uVar8 < uVar5);
  }
  std::vector<MapPathGroup,std::allocator<MapPathGroup>>::clear
            ((vector<MapPathGroup,std::allocator<MapPathGroup>> *)(this + 0x390));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::showPopup(int, int) */

void __thiscall WorldMap::showPopup(WorldMap *this,int param_1,int param_2)

{
  int iVar1;
  PrimeText *this_00;
  long lVar2;
  char *pcVar3;
  MapPopupDialog *pMVar4;
  float fVar5;
  float fVar6;
  Insets aIStack_28 [16];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  fVar6 = *(float *)(this + 0x210);
  fVar5 = *(float *)(this + 0x214);
  std::string::string(asStack_18,"UIWorldMapTopBar");
  lVar2 = UIWidget::GetWidgetBySheetName(asStack_18);
  std::string::~string(asStack_18);
  nop();
  iVar1 = 0;
  if (lVar2 != 0) {
    iVar1 = FUN_04528bb4(*(undefined4 *)(lVar2 + 0x3c));
  }
  pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar3,"Play_UI_Menu_PopUp_General");
  Sexy::Insets::Insets
            (aIStack_28,(int)*(float *)(this + 0x210),(int)*(float *)(this + 0x214) + iVar1,
             *(int *)(gLawnApp + 0x724),*(int *)(gLawnApp + 0x728) - iVar1);
  pMVar4 = *(MapPopupDialog **)(this + 0x2a8);
  Sexy::Insets::Insets((Insets *)asStack_18,aIStack_28);
  MapPopupDialog::SetPositionBounds(pMVar4,asStack_18);
  pMVar4 = *(MapPopupDialog **)(this + 0x2a8);
  Sexy::Point::Point((Point *)asStack_18,(int)fVar6 + param_1,(int)fVar5 + param_2);
  MapPopupDialog::SetAnchorLocation(pMVar4,asStack_18);
  MapPopupDialog::PopIn(*(MapPopupDialog **)(this + 0x2a8));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap::updateMapPaths() */

void __thiscall WorldMap::updateMapPaths(WorldMap *this)

{
  WorldMap WVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  MapPath *pMVar6;
  char *pcVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  PopAnimRig *this_00;
  long *plVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  
  uVar10 = *(undefined8 *)(this + 0x390);
  uVar12 = 0;
  WVar1 = (WorldMap)0x0;
  lVar3 = FUN_04528da8(uVar10,*(undefined8 *)(this + 0x398));
  if (lVar3 != 0) {
    do {
      uVar8 = 0;
      while( true ) {
        puVar4 = (undefined8 *)FUN_04528db4(uVar10,uVar12);
        uVar9 = *puVar4;
        uVar5 = FUN_04528dbc(uVar9,puVar4[1]);
        if (uVar5 <= uVar8) break;
        pMVar6 = (MapPath *)FUN_04528dc8(uVar9,uVar8);
        this_00 = *(PopAnimRig **)(pMVar6 + 0x18);
        fVar13 = (float)PVZ_T();
        fVar14 = (float)PVZ_Dt();
        PopAnimRig::UpdateAnim(this_00,fVar13,fVar14);
        if (*pMVar6 != (MapPath)0x0) {
          fVar13 = (float)PVZ_T();
          WVar1 = (WorldMap)0x1;
          if (*(float *)(pMVar6 + 8) <= fVar13) {
            plVar11 = *(long **)(pMVar6 + 0x10);
            WVar1 = (WorldMap)0x0;
            *pMVar6 = (MapPath)0x0;
            bVar2 = (bool)FUN_04528b70(*(undefined1 *)((long)plVar11 + 0xf1));
            SetMapPathAnimationState(this,pMVar6,bVar2);
            (**(code **)(*plVar11 + 0x28))(plVar11,this);
          }
        }
        uVar10 = *(undefined8 *)(this + 0x390);
        uVar8 = uVar8 + 1;
      }
      uVar12 = uVar12 + 1;
      uVar8 = FUN_04528da8(uVar10,*(undefined8 *)(this + 0x398));
    } while (uVar12 < uVar8);
  }
  if ((bool)WVar1) {
    if (this[0x3a8] == (WorldMap)0x0) {
      pcVar7 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar7,"Play_UI_Map_LightBeam_Loop");
      this[0x3a8] = WVar1;
      return;
    }
  }
  else if (this[0x3a8] != (WorldMap)0x0) {
    pcVar7 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar7,"Play_UI_Map_LightBeam_Stop");
    this[0x3a8] = WVar1;
    return;
  }
  this[0x3a8] = WVar1;
  return;
}


/* WorldMap::initializeAudioRTPC(MapEventItem const*) */

void __thiscall WorldMap::initializeAudioRTPC(WorldMap *this,MapEventItem *param_1)

{
  short sVar1;
  long lVar2;
  undefined8 *puVar3;
  EffectAnimRig_IslandNode *this_00;
  long extraout_x0;
  char *pcVar4;
  void *pvVar5;
  RtObject *this_01;
  
  sVar1 = FUN_04528bac(*(undefined2 *)(param_1 + 0xe2));
  if (sVar1 != -1) {
    lVar2 = FUN_04528bb0(*(undefined8 *)(param_1 + 0xe8));
    puVar3 = (undefined8 *)FUN_04528cb8(*(undefined8 *)(lVar2 + 0x78),(long)sVar1);
    this_01 = (RtObject *)*puVar3;
    if (this_01 != (RtObject *)0x0) {
      this_00 = Sexy::RtObject::Cast<EffectAnimRig_IslandNode>(this_01);
      if (this_00 == (EffectAnimRig_IslandNode *)0x0) {
        Sexy::RtObject::Cast<PlantAnimRig>(this_01);
        return;
      }
      nop();
      EffectAnimRig_IslandNode::RegisterAudioID(this_00);
      if (extraout_x0 != 0) {
        pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        pvVar5 = (void *)FUN_0547429c(&DAT_06b0fc50);
        AudioMgr::SetRTPCValue(pcVar4,0.0,pvVar5);
        pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        pvVar5 = (void *)FUN_0547429c(&DAT_06b0ff78);
        AudioMgr::SetRTPCValue(pcVar4,50.0,pvVar5);
        return;
      }
    }
  }
  return;
}


/* WorldMap::updateAudioRTPC(MapEventItem const*) */

void __thiscall WorldMap::updateAudioRTPC(WorldMap *this,MapEventItem *param_1)

{
  short sVar1;
  long lVar2;
  undefined8 *puVar3;
  EffectAnimRig_IslandNode *pEVar4;
  long extraout_x0;
  float *pfVar5;
  char *pcVar6;
  void *pvVar7;
  RtObject *this_00;
  float fVar8;
  float fVar9;
  
  sVar1 = FUN_04528bac(*(undefined2 *)(param_1 + 0xe2));
  if (sVar1 != -1) {
    lVar2 = FUN_04528bb0(*(undefined8 *)(param_1 + 0xe8));
    puVar3 = (undefined8 *)FUN_04528cb8(*(undefined8 *)(lVar2 + 0x78),(long)sVar1);
    this_00 = (RtObject *)*puVar3;
    if (this_00 != (RtObject *)0x0) {
      pEVar4 = Sexy::RtObject::Cast<EffectAnimRig_IslandNode>(this_00);
      if (pEVar4 == (EffectAnimRig_IslandNode *)0x0) {
        Sexy::RtObject::Cast<PlantAnimRig>(this_00);
        return;
      }
      nop();
      if (extraout_x0 != 0) {
        pfVar5 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_end((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    *)param_1);
        fVar8 = (float)GetMapSpaceOffsetFromCameraCenter(this,*pfVar5,pfVar5[1]);
        fVar9 = CurveLerp<float>(0x43c80000,0x44bb8000,ABS(fVar8),&DAT_05754048,&DAT_05754044,4);
        pcVar6 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        pvVar7 = (void *)FUN_0547429c(&DAT_06b0fc50);
        AudioMgr::SetRTPCValue(pcVar6,(double)fVar9,pvVar7);
        fVar8 = CurveLerp<float>(0xc4fa0000,0x44fa0000,fVar8,&DAT_0575404c,&DAT_05754040,1);
        pcVar6 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        pvVar7 = (void *)FUN_0547429c(&DAT_06b0ff78);
        AudioMgr::SetRTPCValue(pcVar6,(double)fVar8,pvVar7);
        return;
      }
    }
  }
  return;
}


/* WorldMap::updateAllAudioRTPCs() */

void __thiscall WorldMap::updateAllAudioRTPCs(WorldMap *this)

{
  int iVar1;
  WorldDataManager *this_00;
  long lVar2;
  ulong uVar3;
  MapEventItem *pMVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  
  if (*(long *)(this + 0x2f0) != 0) {
    this_00 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
    iVar7 = 0;
    iVar1 = WorldDataManager::GetWorldDataCount(this_00);
    if (0 < iVar1) {
      do {
        lVar2 = WorldDataManager::GetWorldDataByIdx(this_00,iVar7);
        if (*(char *)(*(long *)(lVar2 + 0xb0) + 0x50) != '\0') {
          uVar5 = 0;
          while( true ) {
            uVar6 = *(undefined8 *)(lVar2 + 8);
            uVar3 = FUN_04528d68(uVar6,*(undefined8 *)(lVar2 + 0x10));
            if (uVar3 <= uVar5) break;
            pMVar4 = (MapEventItem *)FUN_04528d88(uVar6,uVar5);
            uVar5 = uVar5 + 1;
            updateAudioRTPC(this,pMVar4);
          }
          uVar5 = 0;
          while( true ) {
            uVar6 = *(undefined8 *)(lVar2 + 0x20);
            uVar3 = FUN_04528d68(uVar6,*(undefined8 *)(lVar2 + 0x28));
            if (uVar3 <= uVar5) break;
            pMVar4 = (MapEventItem *)FUN_04528d88(uVar6,uVar5);
            updateAudioRTPC(this,pMVar4);
            uVar5 = uVar5 + 1;
          }
        }
        iVar7 = iVar7 + 1;
        iVar1 = WorldDataManager::GetWorldDataCount(this_00);
      } while (iVar7 < iVar1);
    }
  }
  return;
}


/* WorldMap::initializeZombossSoundRTPC() */

void __thiscall WorldMap::initializeZombossSoundRTPC(WorldMap *this)

{
  void *pvVar1;
  char *pcVar2;
  
  *(WorldMap **)(this + 0x3e0) = this + 0x3e0;
  pvVar1 = (void *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::RegisterForAudio(pvVar1);
  pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  pvVar1 = (void *)FUN_0547429c(&DAT_06b0fc50);
  AudioMgr::SetRTPCValue(pcVar2,0.0,pvVar1);
  pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  pvVar1 = (void *)FUN_0547429c(&DAT_06b0ff78);
  AudioMgr::SetRTPCValue(pcVar2,50.0,pvVar1);
  return;
}


/* WorldMap::updateZombossSoundRTPC() */

void __thiscall WorldMap::updateZombossSoundRTPC(WorldMap *this)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float *pfVar1;
  char *pcVar2;
  void *pvVar3;
  float fVar4;
  float fVar5;
  
  if ((*(long *)(this + 0x2f0) != 0) &&
     (this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)WorldMapUtils::FindZombossNodeInWorld((string *)(*(long *)(this + 0x2f0) + 0x38))
     , this_00 !=
       (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
        *)0x0)) {
    pfVar1 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_end(this_00);
    fVar4 = (float)GetMapSpaceOffsetFromCameraCenter(this,*pfVar1,pfVar1[1]);
    fVar5 = CurveLerp<float>(0x43c80000,0x44bb8000,ABS(fVar4),&DAT_05754048,&DAT_05754044,4);
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    pvVar3 = (void *)FUN_0547429c(&DAT_06b0fc50);
    AudioMgr::SetRTPCValue(pcVar2,(double)fVar5,pvVar3);
    fVar4 = CurveLerp<float>(0xc4fa0000,0x44fa0000,fVar4,&DAT_0575404c,&DAT_05754040,1);
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    pvVar3 = (void *)FUN_0547429c(&DAT_06b0ff78);
    AudioMgr::SetRTPCValue(pcVar2,(double)fVar4,pvVar3);
    return;
  }
  return;
}


/* WorldMap::PlayZombossSound(std::string const&) */

void __thiscall WorldMap::PlayZombossSound(WorldMap *this,string *param_1)

{
  string *psVar1;
  
  psVar1 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEventThrottled(psVar1,0.0,param_1);
  return;
}


/* WorldMap::cleanupZombossSoundRTPC() */

void WorldMap::cleanupZombossSoundRTPC(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::UnregisterForAudio(pvVar1);
  return;
}


/* WorldMap::SwitchToGameLevel(std::string const&, LevelSource, bool) */

void __thiscall
WorldMap::SwitchToGameLevel(WorldMap *this,undefined8 param_1,undefined8 param_3,char param_4)

{
  GameStateMgr *pGVar1;
  char cVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  char *pcVar3;
  long lVar4;
  
  cVar2 = CanBeClosed(this);
  if (cVar2 != '\0') {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    if (this_01 != (PlayerInfo *)0x0) {
      PlayerInfo::SetWorldMapZoomData(this_01,*(float *)(this + 0x338),false);
    }
    if (param_4 == '\0') {
      pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar3,"Play_UI_Map_Select_Level");
    }
    else {
      GameStateMgr::QueueWarpTunnel(gGameStateMgr);
    }
    pGVar1 = gGameStateMgr;
    lVar4 = FUN_04528c10(*(undefined8 *)(this + 0x2f0));
    GameStateMgr::StartLevel(pGVar1,lVar4 + 0x38,param_1,0xffffffff,1,1,0);
    return;
  }
  QueueForLoadLevel(this,param_1,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::PlayLevelOfTheDay() */

void __thiscall WorldMap::PlayLevelOfTheDay(WorldMap *this)

{
  char cVar1;
  string *psVar2;
  ProfileMgr *this_00;
  undefined8 uVar3;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_18);
  psVar2 = (string *)LevelOfTheDay::GetSystem();
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  cVar1 = LevelOfTheDaySystem::PickLevelNameForProfile(psVar2,(PlayerInfo *)asStack_18);
  if (cVar1 != '\0') {
    uVar3 = FUN_0547429c(asStack_18);
    Sexy::StrFormat("[#43966] WorldMap::PlayLevelOfTheDay - Starting level of the day from world map: %s"
                    ,asStack_10,uVar3);
    nop();
    std::string::~string(asStack_10);
    SwitchToGameLevel(this,asStack_18,2,0);
  }
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::onYetiPlayLevelButtonPressed() */

void __thiscall WorldMap::onYetiPlayLevelButtonPressed(WorldMap *this)

{
  char cVar1;
  ProfileMgr *this_00;
  NewPVPMgr *this_01;
  undefined8 uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = TreasureYeti::IsSpawned();
  if (cVar1 != '\0') {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (NewPVPMgr *)ProfileMgr::GetCurrentProfile(this_00);
    NewPVPMgr::GetSunUpgradeInfos(this_01);
    uVar2 = FUN_0547429c();
    Sexy::StrFormat("[#43966] WorldMap::onYetiPlayLevelButtonPressed - Starting level from yeti play button: %s"
                    ,asStack_10,uVar2);
    nop();
    std::string::~string(asStack_10);
    uVar2 = NewPVPMgr::GetSunUpgradeInfos(this_01);
    SwitchToGameLevel(this,uVar2,6,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x045329f0 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WorldMap::updateState_Ready() */

void __thiscall WorldMap::updateState_Ready(WorldMap *this)

{
  string *this_00;
  WorldMap WVar1;
  GameStateMgr *pGVar2;
  char cVar3;
  int iVar4;
  WorldDataManager *this_01;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  NewPlantUIMgr *this_02;
  size_t __n;
  ulong uVar9;
  undefined8 uVar10;
  PopAnimRig *pPVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined4 uVar16;
  float fVar17;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0x2f9] != (WorldMap)0x0) && (cVar3 = IsInState(this,4), cVar3 != '\0')) {
    this_00 = (string *)(this + 0x308);
    lVar5 = FUN_05474178(this_00);
    pGVar2 = gGameStateMgr;
    if (lVar5 == 0) {
      iVar12 = *(int *)(this + 0x2fc);
      if (iVar12 == 8) {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x300));
        GameStateMgr::ShowAlmanac(pGVar2,aRStack_10,5,5);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
      }
      else if (iVar12 == 4) {
        GameStateMgr::ShowMainMenu(gGameStateMgr,1,1);
      }
      else if (iVar12 == 9) {
        GameStateMgr::ShowStore(gGameStateMgr,this + 0x318,5,5);
      }
      else if (iVar12 == 0xb) {
        this_02 = (NewPlantUIMgr *)Sexy::LazySingleton<NewPlantUIMgr>::GetInstancePtr();
        cVar3 = NewPlantUIMgr::IsNewUI(this_02);
        if (cVar3 == '\0') {
          GameStateMgr::ShowLevelUp(gGameStateMgr,5,5);
        }
        else {
          GameStateMgr::ShowNewPlantUIEntryScreen(gGameStateMgr);
        }
      }
      else if (iVar12 == 0xc) {
        GameStateMgr::ShowPlantAvatar(gGameStateMgr,5,5);
      }
      else if (iVar12 == 0x1b) {
        GameStateMgr::ShowPlantFamily(gGameStateMgr,5,5);
      }
      else if (iVar12 == 10) {
        GameStateMgr::ShowLottery(gGameStateMgr,5,5);
      }
      else if (iVar12 == 0x26) {
        GameStateMgr::ShowArtifactCultivation(gGameStateMgr,5,5);
      }
      else if (iVar12 == 0x2a) {
        GameStateMgr::ShowPlantGeneEnhancement(gGameStateMgr,5,5);
      }
      else if (iVar12 == 0x28) {
        GameStateMgr::ShowNostalgiaPVZ(gGameStateMgr,5,5);
      }
      else if (iVar12 == 0x29) {
        GameStateMgr::ShowCustomLevel(gGameStateMgr,5,5);
      }
    }
    else {
      __n = (size_t)*(uint *)(this + 0x310);
      SwitchToGameLevel(this,this_00,__n,0);
      std::string::append(this_00,"",__n);
    }
    (**(code **)(*(long *)this + 0x3b8))(this,5);
    goto LAB_045326d4;
  }
  updateZoomBounce(this);
  if (this[0x254] == (WorldMap)0x0) {
    UIWidget::UpdateUI();
  }
  this_01 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
  iVar12 = 0;
  iVar4 = WorldDataManager::GetWorldDataCount(this_01);
  if (0 < iVar4) {
    do {
      lVar5 = WorldDataManager::GetWorldDataByIdx(this_01,iVar12);
      if (*(char *)(*(long *)(lVar5 + 0xb0) + 0x50) != '\0') {
        uVar9 = 0;
        while( true ) {
          uVar10 = *(undefined8 *)(lVar5 + 0x78);
          uVar6 = FUN_04528cac(uVar10,*(undefined8 *)(lVar5 + 0x80));
          if (uVar6 <= uVar9) break;
          puVar8 = (undefined8 *)FUN_04528cb8(uVar10,uVar9);
          pPVar11 = (PopAnimRig *)*puVar8;
          fVar13 = (float)PVZ_T();
          fVar14 = (float)PVZ_Dt();
          PopAnimRig::UpdateAnim(pPVar11,fVar13,fVar14);
          uVar9 = uVar9 + 1;
        }
        uVar10 = *(undefined8 *)(lVar5 + 0x60);
        uVar9 = 0;
        uVar6 = FUN_04528e18(uVar10,*(undefined8 *)(lVar5 + 0x68));
        if (uVar6 != 0) {
          do {
            lVar7 = FUN_04528e38(uVar10,uVar9);
            pPVar11 = *(PopAnimRig **)(lVar7 + 8);
            if (pPVar11 != (PopAnimRig *)0x0) {
              fVar13 = (float)PVZ_T();
              fVar14 = (float)PVZ_Dt();
              PopAnimRig::UpdateAnim(pPVar11,fVar13,fVar14);
              uVar10 = *(undefined8 *)(lVar5 + 0x60);
              uVar6 = FUN_04528e18(uVar10,*(undefined8 *)(lVar5 + 0x68));
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar6);
        }
      }
      iVar12 = iVar12 + 1;
      iVar4 = WorldDataManager::GetWorldDataCount(this_01);
    } while (iVar12 < iVar4);
  }
  uVar9 = 0;
  while( true ) {
    uVar10 = *(undefined8 *)(this + 0x1a8);
    uVar6 = FUN_04528cac(uVar10,*(undefined8 *)(this + 0x1b0));
    if (uVar6 <= uVar9) break;
    puVar8 = (undefined8 *)FUN_04528cb8(uVar10,uVar9);
    pPVar11 = (PopAnimRig *)*puVar8;
    fVar13 = (float)PVZ_T();
    fVar14 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(pPVar11,fVar13,fVar14);
    uVar9 = uVar9 + 1;
  }
  updateMapPaths(this);
  updateAllAudioRTPCs(this);
  updateZombossSoundRTPC(this);
  updateZombossHologram(this);
  cVar3 = FUN_04528bd8(this[0x209]);
  if (cVar3 != '\0') {
    WVar1 = this[0x208];
    this[0x208] = (WorldMap)((char)WVar1 + '\x01');
    if (2 < (byte)((char)WVar1 + 1U)) {
      ResetCameraVelocity(this);
      this[0x208] = (WorldMap)0x0;
    }
    goto LAB_045326d4;
  }
  if (this[0x2f9] == (WorldMap)0x0) {
    fVar13 = *(float *)(this + 0x228);
    cVar3 = Sexy::IsNearZero(fVar13,0.001);
    if (cVar3 == '\0') {
      fVar13 = fVar13 * 0.9;
      if (ABS(fVar13) <= 0.2) {
        fVar13 = 0.0;
        *(undefined4 *)(this + 0x228) = 0;
      }
      else {
        *(float *)(this + 0x228) = fVar13;
      }
      SetCameraPosition(this,fVar13 + *(float *)(this + 0x210),*(float *)(this + 0x214),false);
      if (this[0x2f9] != (WorldMap)0x0) goto LAB_04532770;
    }
    fVar13 = *(float *)(this + 0x22c);
    cVar3 = Sexy::IsNearZero(fVar13,0.001);
    if (cVar3 == '\0') {
      fVar13 = fVar13 * 0.9;
      if (ABS(fVar13) <= 0.2) {
        fVar13 = 0.0;
        *(undefined4 *)(this + 0x22c) = 0;
      }
      else {
        *(float *)(this + 0x22c) = fVar13;
      }
      SetCameraPosition(this,*(float *)(this + 0x210),fVar13 + *(float *)(this + 0x214),false);
      if (this[0x2f9] != (WorldMap)0x0) goto LAB_04532770;
    }
    fVar13 = (float)PVZ_EOT();
    if (*(float *)(this + 0x240) != fVar13) {
      fVar17 = *(float *)(this + 0x240) + 0.2;
      fVar14 = (float)PVZ_T();
      if (fVar14 < fVar17) {
        auVar15 = PVZ_T();
        fVar14 = CurveLerp<float>(auVar15,fVar17,auVar15._0_4_,this + 0x244,this + 0x24c,3);
        *(float *)(this + 0x210) = fVar14;
        auVar15 = PVZ_T();
        fVar14 = CurveLerp<float>(auVar15,fVar17,auVar15._0_4_,this + 0x248,this + 0x250,3);
        *(float *)(this + 0x214) = fVar14;
      }
      else {
        *(undefined8 *)(this + 0x210) = *(undefined8 *)(this + 0x24c);
        *(float *)(this + 0x240) = fVar13;
      }
    }
  }
  else {
LAB_04532770:
    fVar13 = (float)PVZ_EOT();
  }
  if (*(float *)(this + 0x460) != fVar13) {
    uVar16 = *(undefined4 *)(this + 0x464);
    auVar15 = PVZ_T();
    fVar14 = CurveLerp<float>(auVar15,uVar16,auVar15._0_4_,this + 0x450,this + 0x458,4);
    uVar16 = *(undefined4 *)(this + 0x464);
    auVar15 = PVZ_T();
    fVar17 = CurveLerp<float>(auVar15,uVar16,auVar15._0_4_,this + 0x454,this + 0x45c,4);
    SetCameraPosition(this,((float)*(int *)(this + 0x48) - (float)(*(int *)(gLawnApp + 0x724) / 2))
                           + fVar14,
                      ((float)*(int *)(this + 0x4c) - (float)(*(int *)(gLawnApp + 0x728) / 2)) +
                      fVar17,false);
    fVar14 = (float)PVZ_T();
    if (*(float *)(this + 0x464) < fVar14) {
      *(float *)(this + 0x460) = fVar13;
      *(float *)(this + 0x464) = fVar13;
    }
  }
  (**(code **)(*(long *)this + 0x388))(this);
LAB_045326d4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::onStartPVZ2UnchartedModeLevel(std::string const&) */

void __thiscall WorldMap::onStartPVZ2UnchartedModeLevel(WorldMap *this,string *param_1)

{
  int iVar1;
  undefined8 uVar2;
  PrimeText *this_00;
  PVZ2UnchartedModeUtils *this_01;
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = PVZ2UnchartedModeUtils::GetUnchartedWorldType();
  if (iVar1 == 3) {
    this_01 = (PVZ2UnchartedModeUtils *)Sexy::LazySingleton<RiftThemeMgr>::GetInstance();
    PVZ2UnchartedModeUtils::GetCurrentThemeList(this_01);
    RiftThemeMgr::SyncTheme((RiftThemeMgr *)this_01,(vector *)asStack_20);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)asStack_20);
  }
  uVar2 = FUN_0547429c(param_1);
  Sexy::StrFormat("WorldMap::onStartPVZ2UnchartedModeLevel - Starting level from pvz1mode dialog callback: %s"
                  ,asStack_20,uVar2);
  nop();
  std::string::~string(asStack_20);
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  FUN_045291e8(gGameStateMgr + 0x1eb1);
  SwitchToGameLevel(this,param_1,5,0);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::onStartPlantWarsLevel(std::string const&) */

void __thiscall WorldMap::onStartPlantWarsLevel(WorldMap *this,string *param_1)

{
  undefined8 uVar1;
  PrimeText *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = FUN_0547429c(param_1);
  Sexy::StrFormat("WorldMap::onStartPlantWarsLevel - Starting level from pvz1mode dialog callback: %s"
                  ,asStack_10,uVar1);
  nop();
  std::string::~string(asStack_10);
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  FUN_045291e8(gGameStateMgr + 0x1eb1);
  SwitchToGameLevel(this,param_1,5,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap::onStartPVZ1Level(std::string const&) */

void __thiscall WorldMap::onStartPVZ1Level(WorldMap *this,string *param_1)

{
  PrimeText *this_00;
  
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  FUN_045291e8(gGameStateMgr + 0x1eb1);
  SwitchToGameLevel(this,param_1,5,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::onStartRiftLevel(std::string const&) */

void __thiscall WorldMap::onStartRiftLevel(WorldMap *this,string *param_1)

{
  char cVar1;
  undefined8 uVar2;
  PrimeText *this_00;
  WorldDataManager *this_01;
  MapEventItem *pMVar3;
  RiftThemeMgr *this_02;
  vector *pvVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = FUN_0547429c(param_1);
  Sexy::StrFormat("WorldMap::onStartRiftLevel - Starting level from rift dialog callback: %s",
                  asStack_10,uVar2);
  nop();
  std::string::~string(asStack_10);
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  FUN_045291e8(gGameStateMgr + 0x1eb1);
  this_01 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
  pMVar3 = (MapEventItem *)WorldDataManager::FindEventByLevelName(this_01,param_1);
  if ((pMVar3 != (MapEventItem *)0x0) &&
     (cVar1 = RiftUtils::IsRiftTimedLevel(pMVar3), cVar1 != '\0')) {
    this_02 = (RiftThemeMgr *)Sexy::LazySingleton<RiftThemeMgr>::GetInstance();
    pvVar4 = (vector *)RiftUtils::GetRiftTimedEventThemes();
    RiftThemeMgr::SyncTheme(this_02,pvVar4);
  }
  SwitchToGameLevel(this,param_1,5,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::ActivateMapPathGroupWithEvent(MapEventItem const*, bool) */

void WorldMap::ActivateMapPathGroupWithEvent(MapEventItem *param_1,bool param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 *puVar7;
  long *extraout_x0;
  ulong uVar8;
  char in_w2;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  code *pcVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50 [6];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  uVar8 = (ulong)param_2;
  local_8 = ___stack_chk_guard;
  if (((in_w2 == '\0') && (iVar3 = FUN_04528b48(*(undefined4 *)(uVar8 + 0x14)), iVar3 == 1)) &&
     (sVar2 = FUN_04528ba0(*(undefined2 *)(uVar8 + 0xe0)), sVar2 != -1)) {
    puVar5 = (undefined8 *)FUN_04528cb8(*(undefined8 *)(param_1 + 0x1a8));
    plVar12 = (long *)*puVar5;
    nop();
    pcVar13 = *(code **)(*extraout_x0 + 0x130);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)param_1,onLevelNodeClearedAnimFinished);
    Sexy::Delegate1<std::string_const&>::Delegate1<WorldMap,void(WorldMap::*)(std::string_const&)>
              (aDStack_38,(CBMemberTranslatorX *)local_50);
    (*pcVar13)(extraout_x0,aDStack_38);
    (**(code **)(*plVar12 + 0x80))(0x3f800000,plVar12);
    MessageRouter::Broadcast((_func_void *)gMessageRouter);
    iVar3 = FUN_04528b58(*(undefined4 *)(uVar8 + 0x78));
    if (iVar3 == 1) {
      pcVar6 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar6,"Play_UI_Map_Minigame_Node_Complete");
    }
    else if ((iVar3 - 2U & 0xfffffffd) == 0) {
      pcVar6 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar6,"Play_UI_Map_Gargantuar_Node_Complete");
    }
    else {
      pcVar6 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar6,"Play_UI_Map_Level_Node_Complete");
    }
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0x390);
    uVar11 = 0;
    uVar4 = FUN_04528da8(uVar9,*(undefined8 *)(param_1 + 0x398));
    if (uVar4 != 0) {
      do {
        puVar5 = (undefined8 *)FUN_04528db4(uVar9,uVar11);
        if (uVar8 == puVar5[3]) {
          uVar9 = *puVar5;
          uVar10 = 0;
          uVar4 = FUN_04528dbc(uVar9,puVar5[1]);
          if (uVar4 != 0) {
            do {
              pcVar6 = (char *)FUN_04528dc8(uVar9,uVar10);
              this = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       **)(pcVar6 + 0x10);
              iVar3 = FUN_04528b48(*(undefined4 *)(this + 0x14));
              if (iVar3 == 0xc) {
                ActivateMapPathGroupWithEvent(param_1,SUB81(this,0));
LAB_04532f0c:
                uVar9 = *puVar5;
                uVar4 = FUN_04528dbc(uVar9,puVar5[1]);
              }
              else if (*pcVar6 == '\0') {
                puVar7 = (undefined8 *)
                         std::
                         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         ::_M_end((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)puVar5[3]);
                local_60 = *puVar7;
                puVar7 = (undefined8 *)
                         std::
                         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         ::_M_end(this);
                local_58 = *puVar7;
                local_50[0] = Sexy::SexyVector2::operator-
                                        ((SexyVector2 *)&local_58,(SexyVector2 *)&local_60);
                fVar14 = (float)DVec2::getLength((DVec2 *)local_50);
                fVar14 = fVar14 / *(float *)(*(long *)(param_1 + 0x1f0) + 0x4c);
                cVar1 = FUN_045291fc(fVar14);
                if (cVar1 != '\0') {
                  fVar14 = 0.01;
                }
                *pcVar6 = '\x01';
                uVar15 = PVZ_T();
                *(undefined4 *)(pcVar6 + 4) = uVar15;
                fVar16 = (float)PVZ_T();
                *(float *)(pcVar6 + 8) = fVar16 + fVar14;
                MessageRouter::Broadcast((_func_void *)gMessageRouter);
                goto LAB_04532f0c;
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < uVar4);
          }
          uVar9 = *(undefined8 *)(param_1 + 0x390);
          uVar4 = FUN_04528da8(uVar9,*(undefined8 *)(param_1 + 0x398));
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar4);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WorldMap::onContinueButtonPressed() */

void __thiscall WorldMap::onContinueButtonPressed(WorldMap *this)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  if (*(long *)(this + 800) != 0) {
    MessageRouter::Broadcast((_func_void *)gMessageRouter);
    ActivateMapPathGroupWithEvent((MapEventItem *)this,SUB81(*(undefined8 *)(this + 800),0));
    *(undefined8 *)(this + 800) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::onLevelNodeClearedAnimFinished(std::string const&) */

void WorldMap::onLevelNodeClearedAnimFinished(string *param_1)

{
  char cVar1;
  short sVar2;
  WorldDataManager *this;
  string *psVar3;
  long lVar4;
  long *extraout_x0;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::GetLastCompletedLevel(gLawnApp);
  cVar1 = FUN_0547419c();
  if (cVar1 == '\0') {
    MessageRouter::Broadcast((_func_void *)gMessageRouter);
    this = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
    psVar3 = (string *)LawnApp::GetLastCompletedLevel(gLawnApp);
    lVar4 = WorldDataManager::FindEventByLevelName(this,psVar3);
    sVar2 = FUN_04528ba0(*(undefined2 *)(lVar4 + 0xe0));
    if (sVar2 != -1) {
      FUN_04528cb8(*(undefined8 *)(param_1 + 0x1a8),(long)sVar2);
      nop();
      (**(code **)(*extraout_x0 + 0x138))();
    }
    psVar3 = (string *)gLawnApp;
    std::string::string(asStack_10,"");
    LawnApp::SetLastCompletedLevel(psVar3);
    std::string::~string(asStack_10);
    nop();
    if (param_1[0x378] == (string)0x0) {
      ActivateMapPathGroupWithEvent((MapEventItem *)param_1,SUB81(lVar4,0));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap::onWorldMapShown() */

void WorldMap::onWorldMapShown(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_World_Map_Events");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::onFullyInitialized() */

void WorldMap::onFullyInitialized(void)

{
  string *psVar1;
  char cVar2;
  WorldMap *in_x0;
  ProfileMgr *this;
  wchar16 *pwVar3;
  wchar16 *extraout_x1;
  LineBreakCategory *in_x2;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pwVar3 = (wchar16 *)ProfileMgr::GetCurrentProfile(this);
  nop();
  cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    ((wchar16 *)in_x0,pwVar3,in_x2,in_x3,in_x4);
  if ((cVar2 == '\0') &&
     (cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                        ((wchar16 *)in_x0,pwVar3,in_x2,in_x3,in_x4), cVar2 == '\0')) {
    cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (pwVar3,extraout_x1,in_x2,in_x3,in_x4);
    if (cVar2 == '\0') {
      BusyAnimationManager::StartBusyIcon(*(BusyAnimationManager **)(gLawnApp + 0x28d0));
      FUN_045291dc(in_x0 + 0x370);
      WorldMapActionManager::QueueAllInitActions((WorldMapActionManager *)(in_x0 + 0x358));
      onWorldMapShown();
    }
    else {
      initializeToUniverseMap(in_x0);
    }
  }
  else {
    initializeToUniverseMap(in_x0);
    psVar1 = gLawnApp;
    std::string::string(asStack_10,"");
    LawnApp::SetLastCompletedLevel(psVar1);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap::updateState_Initializing() */

void __thiscall WorldMap::updateState_Initializing(WorldMap *this)

{
  char cVar1;
  
  cVar1 = UIWidget::IsLoadCompleteForAllWidgets();
  if ((cVar1 != '\0') &&
     ((*(UniverseMap **)(this + 0x2b0) == (UniverseMap *)0x0 ||
      (cVar1 = UniverseMap::IsLoaded(*(UniverseMap **)(this + 0x2b0)), cVar1 != '\0')))) {
    (**(code **)(*(long *)this + 0x358))(this);
    MessageRouter::Broadcast((_func_void *)gMessageRouter);
    onFullyInitialized();
    BusyAnimationManager::StopBusyIcon(*(BusyAnimationManager **)(gLawnApp + 0x28d0));
    (**(code **)(*(long *)this + 0x3b8))(this,4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::doCardGameLevelPopup(MapEventItem*) */

void __thiscall WorldMap::doCardGameLevelPopup(WorldMap *this,MapEventItem *param_1)

{
  char *pcVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onStartCardGameLevel);
  Sexy::Delegate1<std::string_const&>::Delegate1<WorldMap,void(WorldMap::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  CardGameUtils::ShowLevelSetupScreen(param_1,aDStack_38);
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Rift_Node_Panel_Open");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::doPVZ2UnchartedLevelPopup(MapEventItem*) */

void __thiscall WorldMap::doPVZ2UnchartedLevelPopup(WorldMap *this,MapEventItem *param_1)

{
  char *pcVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onStartPVZ2UnchartedModeLevel);
  Sexy::Delegate1<std::string_const&>::Delegate1<WorldMap,void(WorldMap::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  PVZ2UnchartedModeUtils::ShowLevelSetupScreen(param_1,aDStack_38);
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Rift_Node_Panel_Open");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::doPlantWarsLevelPopup(MapEventItem*) */

void __thiscall WorldMap::doPlantWarsLevelPopup(WorldMap *this,MapEventItem *param_1)

{
  char *pcVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onStartPlantWarsLevel);
  Sexy::Delegate1<std::string_const&>::Delegate1<WorldMap,void(WorldMap::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  PlantWarsUtils::ShowLevelSetupScreen(param_1,aDStack_38);
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Rift_Node_Panel_Open");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::doPVZ1LevelPopup(MapEventItem*) */

void __thiscall WorldMap::doPVZ1LevelPopup(WorldMap *this,MapEventItem *param_1)

{
  LawnApp *this_00;
  char cVar1;
  char *pcVar2;
  PVZ2UIDialog *pPVar3;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = PVZ1ModeUtils::PlayerCanPlay();
  this_00 = gLawnApp;
  if (cVar1 == '\0') {
    FUN_05478178(awStack_58,&DAT_056f11a8,auStack_68);
    FUN_05478178(awStack_50,L"[RIFT_SEASON_END_TIP]",auStack_60);
    pPVar3 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>((Delegate0 *)aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar3,awStack_58,(Delegate0 *)aDStack_38,1);
    FUN_05476c50(awStack_58);
    nop();
  }
  else {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onStartPVZ1ModeLevel);
    Sexy::Delegate1<std::string_const&>::Delegate1<WorldMap,void(WorldMap::*)(std::string_const&)>
              (aDStack_38,awStack_50);
    PVZ1ModeUtils::ShowLevelSetupScreen(param_1,aDStack_38);
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_UI_Rift_Node_Panel_Open");
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::showRiftOverNotice() */

void __thiscall WorldMap::showRiftOverNotice(WorldMap *this)

{
  LawnApp *this_00;
  int iVar1;
  int iVar2;
  PVZ2UIDialog *this_01;
  char *pcVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04529744(0x1ea);
  iVar2 = FUN_04529744(0x118);
  this_01 = (PVZ2UIDialog *)
            LawnApp::ShowPVZ2Dialog(this_00,(float)iVar1,(float)iVar2,(PVZ2UIDialog *)0x0);
  TodStringTranslate(L"[RIFT_OVER_HEADER]");
  PVZ2UIDialog::SetHeaderLabel(this_01,awStack_50);
  FUN_05476c50(awStack_50);
  FUN_05478178(awStack_50,L"[RIFT_OVER_DESCRIPTION]",auStack_58);
  PVZ2UIDialog::SetFooterLabel(this_01,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  PVZ2UIDialog::SetBackgroundDarken(this_01,true,0.5);
  FUN_05478178(auStack_58,L"[BUTTON_OK]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRiftOverAcknowledged);
  Sexy::Delegate0::Delegate0<WorldMap,void(WorldMap::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(this_01,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar3,"Play_UI_Menu_PopUp_General");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::doRiftLevelPopup(MapEventItem*) */

void __thiscall WorldMap::doRiftLevelPopup(WorldMap *this,MapEventItem *param_1)

{
  LawnApp *this_00;
  char cVar1;
  long lVar2;
  char *pcVar3;
  PVZ2UIDialog *pPVar4;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = RiftUtils::GetCurrentRiftEventTimeRemaining();
  if (lVar2 < 1) {
    showRiftOverNotice(this);
  }
  else {
    cVar1 = RiftUtils::PlayerCanPlay();
    this_00 = gLawnApp;
    if (cVar1 == '\0') {
      FUN_05478178(awStack_58,&DAT_056f11a8,auStack_68);
      FUN_05478178(awStack_50,L"[RIFT_SEASON_END_TIP]",auStack_60);
      pPVar4 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
      FUN_05476c50(awStack_50);
      nop();
      FUN_05476c50(awStack_58);
      nop();
      FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
      Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>((Delegate0 *)aDStack_38,awStack_50);
      PVZ2UIDialog::AddButton(pPVar4,awStack_58,(Delegate0 *)aDStack_38,1);
      FUN_05476c50(awStack_58);
      nop();
    }
    else {
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onStartRiftLevel);
      Sexy::Delegate1<std::string_const&>::Delegate1<WorldMap,void(WorldMap::*)(std::string_const&)>
                (aDStack_38,awStack_50);
      RiftUtils::ShowLevelSetupScreen(param_1,aDStack_38);
      pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar3,"Play_UI_Rift_Node_Panel_Open");
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::popUIState() */

void __thiscall WorldMap::popUIState(WorldMap *this)

{
  map<Sexy::RtName,bool,std::less<Sexy::RtName>,std::allocator<std::pair<Sexy::RtName_const,bool>>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  UIWidget *this_01;
  long lVar3;
  bool *pbVar4;
  bool abStack_28 [8];
  undefined8 local_20;
  Sexy aSStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  this_00 = (map<Sexy::RtName,bool,std::less<Sexy::RtName>,std::allocator<std::pair<Sexy::RtName_const,bool>>>
             *)(this + 0x1c0);
  local_8 = ___stack_chk_guard;
  local_20 = std::
             map<Sexy::RtName,bool,std::less<Sexy::RtName>,std::allocator<std::pair<Sexy::RtName_const,bool>>>
             ::begin(this_00);
  while( true ) {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_00);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_20,(rbtree_iterator *)&local_10);
    if (!bVar1) break;
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
    uVar2 = Sexy::RtName::GetString();
    pbVar4 = abStack_28;
    FUN_05478178(aSStack_18,uVar2);
    Sexy::WStringToString(aSStack_18,(wstring *)0x0,pbVar4);
    this_01 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_10);
    lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
    UIWidget::SetClickable(this_01,*(bool *)(lVar3 + 0x10));
    std::string::~string((string *)&local_10);
    FUN_05476c50(aSStack_18);
    nop();
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
  }
  std::
  map<Sexy::RtName,bool,std::less<Sexy::RtName>,std::allocator<std::pair<Sexy::RtName_const,bool>>>
  ::clear(this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap::CancelTutorial(MapTutorialState) */

void __thiscall WorldMap::CancelTutorial(WorldMap *this,int param_2)

{
  PlayerInfo *pPVar1;
  
  *(undefined4 *)(this + 0x44c) = 0;
  pPVar1 = (PlayerInfo *)ProfileUtils::Profile();
  PlayerInfo::SetActiveTutorial(pPVar1,0);
  if ((param_2 != 0x23) && (param_2 != 0x35)) {
    return;
  }
  popUIState(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::handleTutorialEnd(bool) */

void __thiscall WorldMap::handleTutorialEnd(WorldMap *this,bool param_1)

{
  int iVar1;
  char cVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long extraout_x0;
  long *plVar3;
  GachaMgr *pGVar4;
  char *__s;
  undefined8 uVar5;
  undefined8 uVar6;
  ShowAdvice *pSVar7;
  undefined4 uVar8;
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  pSVar7 = *(ShowAdvice **)(this + 0x290);
  FUN_05478178(asStack_10,&DAT_056f11a8,auStack_18);
  ShowAdvice::SetLabel(pSVar7,asStack_10,0);
  FUN_05476c50(asStack_10);
  nop();
  StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x298),false);
  iVar1 = *(int *)(this + 0x44c);
  this[0x2a0] = (WorldMap)0x0;
  *(undefined4 *)(this + 0x44c) = 0;
  uVar8 = PVZ_EOT();
  this[0x43c] = (WorldMap)0x0;
  this[0x448] = (WorldMap)0x0;
  *(undefined8 *)(this + 0x440) = 0;
  this[0x449] = (WorldMap)0x0;
  *(undefined4 *)(this + 0x438) = uVar8;
  isTutorialDeprecated(this,iVar1);
  switch(iVar1) {
  case 1:
    std::string::string(asStack_10,"UIWorldMapAlmanacButton");
    UIWidget::GetWidgetBySheetName(asStack_10);
    nop();
    std::string::~string(asStack_10);
    nop();
    cVar2 = FUN_04528c70(*(undefined1 *)(extraout_x0 + 0x164));
    if ((cVar2 != '\0') || (param_1)) {
      popUIState(this);
      PlayerInfo::CompleteTutorial(this_01,1);
      Effect_FloatingText::SetFadeInDuration(*(Effect_FloatingText **)(this + 0x298),0.0);
    }
    else {
      (**(code **)(*(long *)this + 0x338))(this,1);
    }
    break;
  case 7:
    PlayerInfo::CompleteTutorial(this_01,7);
    break;
  case 0xc:
    __s = "nar_sprout_world_map_tutorial";
    goto LAB_0453423c;
  case 0xf:
    __s = "nar_minigame_intro";
    goto LAB_0453423c;
  case 0x10:
    __s = "nar_quest_intro";
LAB_0453423c:
    std::string::string(asStack_10,__s);
    PlayerInfo::CompleteNarrationEvent(this_01,asStack_10);
    std::string::~string(asStack_10);
    nop();
switchD_04534168_caseD_15:
    popUIState(this);
    break;
  case 0x11:
    WorldMapActionManager::StopActions((WorldMapActionManager *)(this + 0x358));
    PlayerInfo::CompleteTutorial(this_01,0x11);
    break;
  case 0x14:
    popUIState(this);
    PlayerInfo::CompleteTutorial(this_01,0x14);
    PlayerInfo::CompleteTutorial(this_01,0x15);
    break;
  case 0x15:
  case 0x19:
    goto switchD_04534168_caseD_15;
  case 0x16:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x2a:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4d:
  case 0x50:
  case 0x52:
    popUIState(this);
    PlayerInfo::CompleteTutorial(this_01,iVar1);
    FUN_04528c08(this + 0x356,1);
    break;
  case 0x17:
  case 0x18:
  case 0x1c:
    popUIState(this);
    FUN_04528c08(this + 0x356,1);
    if (iVar1 == 0x1c) {
      PlayerInfo::CompleteTutorial(this_01,0x1c);
      pGVar4 = (GachaMgr *)Sexy::LazySingleton<GachaMgr>::GetInstance();
      GachaMgr::SetTutorialStep(pGVar4,0);
      (**(code **)(*(long *)this + 0x338))(this,0x1d);
    }
    break;
  case 0x1a:
  case 0x1b:
    popUIState(this);
    PlayerInfo::CompleteTutorial(this_01,iVar1);
    if (iVar1 == 0x1b) {
      (**(code **)(*(long *)this + 0x338))(this,0x1c);
    }
    break;
  case 0x1d:
    popUIState(this);
    FUN_04528c08(this + 0x356,1);
    PlayerInfo::CompleteTutorial(this_01,0x1d);
    break;
  case 0x1e:
    PlayerInfo::CompleteTutorial(this_01,0x1e);
    (**(code **)(*(long *)this + 0x338))(this,0x1f);
    break;
  case 0x20:
    popUIState(this);
    FUN_04528c08(this + 0x356,1);
    PlayerInfo::CompleteTutorial(this_01,0x20);
    break;
  case 0x26:
  case 0x29:
    popUIState(this);
    FUN_04528c08(this + 0x356,1);
    break;
  case 0x28:
    PlayerInfo::CompleteTutorial(this_01,0x28);
    uVar5 = 1;
    uVar6 = 0x1d;
    goto LAB_04534364;
  case 0x2b:
    PlayerInfo::CompleteTutorial(this_01,0x2b);
    break;
  case 0x33:
    WorldMapActionManager::StopActions((WorldMapActionManager *)(this + 0x358));
    popUIState(this);
    plVar3 = (long *)Lua::CUIDialog::GetDialog("MonthlyCardBtn");
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x188))(plVar3,0);
    }
    LawnApp::KillGameMaskUI(gLawnApp);
    PlayerInfo::CompleteTutorial(this_01,0x33);
    uVar5 = 0;
    uVar6 = 0x17;
LAB_04534364:
    MessageRouter::Post<int,int,TutorialType,TutorialEventNew>
              ((MessageRouter *)gMessageRouter,Message::Toturi,uVar5,uVar6);
    break;
  case 0x35:
    popUIState(this);
    PlayerInfo::CompleteTutorial(this_01,0x35);
    break;
  case 0x36:
    WorldMapActionManager::StopActions((WorldMapActionManager *)(this + 0x358));
    PlayerInfo::CompleteTutorial(this_01,0x36);
  }
  if (*(int *)(this + 0x44c) == 0) {
    MessageRouter::Broadcast((_func_void *)gMessageRouter);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::Update() */

void WorldMap::Update(void)

{
  char cVar1;
  WorldMap *in_x0;
  long lVar2;
  wchar16 *pwVar3;
  PopAnimRig *pPVar4;
  LineBreakCategory *pLVar5;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  AnimationController *this;
  float fVar6;
  float fVar7;
  LineBreakCategory aLStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  updateStateMachine(in_x0);
  this = *(AnimationController **)(in_x0 + 0x290);
  fVar6 = (float)FUN_04528b38(*(undefined4 *)(this + 0x18));
  if (0.0 < fVar6) {
    fVar7 = (float)PVZ_Dt();
    AnimationController::SetDuration(this,fVar6 - fVar7);
  }
  StandaloneEffect::Update(*(StandaloneEffect **)(in_x0 + 0x298));
  fVar6 = (float)PVZ_T();
  if (*(float *)(in_x0 + 0x438) <= fVar6) {
    handleTutorialEnd(in_x0,false);
  }
  lVar2 = Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  if (lVar2 != 0) {
    pwVar3 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    pLVar5 = aLStack_18;
    std::string::string(asStack_10,"AutoTestUnlockLevel");
    cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (pwVar3,(wchar16 *)asStack_10,pLVar5,in_x3,in_x4);
    std::string::~string(asStack_10);
    nop();
    if ((cVar1 != '\0') && (fVar6 = (float)PVZ_RealT(), *(float *)(in_x0 + 0x468) <= fVar6)) {
      *(float *)(in_x0 + 0x468) = fVar6 + 5.0;
      MessageRouter::Post((_func_void *)gMessageRouter);
    }
  }
  pPVar4 = *(PopAnimRig **)(in_x0 + 0x380);
  if (pPVar4 != (PopAnimRig *)0x0) {
    fVar6 = (float)PVZ_T();
    fVar7 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(pPVar4,fVar6,fVar7);
    pPVar4 = *(PopAnimRig **)(in_x0 + 0x388);
    fVar6 = (float)PVZ_T();
    fVar7 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(pPVar4,fVar6,fVar7);
  }
  pPVar4 = *(PopAnimRig **)(in_x0 + 0x3c0);
  if (pPVar4 != (PopAnimRig *)0x0) {
    fVar6 = (float)PVZ_T();
    fVar7 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(pPVar4,fVar6,fVar7);
    cVar1 = PopAnimRig::IsPlayingAnything(*(PopAnimRig **)(in_x0 + 0x3c0));
    if (cVar1 == '\0') {
      PlacePathDestinationAnimationOnEvent(in_x0,(PopAnimRig *)0x0,(MapEventItem *)0x0);
    }
  }
  WorldMapActionManager::Update((WorldMapActionManager *)(in_x0 + 0x358));
  UpdateTransitionEffect(in_x0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap::closeMapPopups() */

void __thiscall WorldMap::closeMapPopups(WorldMap *this)

{
  char cVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  PurchaseBroker *this_01;
  WorldMapEventAlert *this_02;
  
  this_02 = *(WorldMapEventAlert **)(this + 0x2a8);
  cVar1 = FUN_04528c64(this_02[0x50]);
  if (cVar1 != '\0') {
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PurchaseBroker *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_rightmost(this_00);
    PurchaseBroker::EndCartInstance(this_01);
    this_02 = *(WorldMapEventAlert **)(this + 0x2a8);
  }
  WorldMapEventAlert::HideBadge(this_02);
  if (this[0x448] == (WorldMap)0x0) {
    return;
  }
  handleTutorialEnd(this,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::handleTouchMoved(int, int) */

void __thiscall WorldMap::handleTouchMoved(WorldMap *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  TPoint *pTVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar5 = IsUserInputEnabled(this);
  if ((cVar5 == '\0') || (cVar5 = IsValidStateForInput(this), cVar5 == '\0')) goto LAB_0453476c;
  cVar5 = FUN_04528bd8(this[0x209]);
  if (cVar5 != '\0') {
    closeMapPopups(this);
  }
  if (((this[0x448] != (WorldMap)0x0) || (cVar5 = FUN_04528bc4(this[0x355]), cVar5 != '\0')) ||
     (this[0x2f9] != (WorldMap)0x0)) goto LAB_0453476c;
  UIWidget::ProcessedMouseMove(param_1 + *(int *)(this + 0x48),param_2 + *(int *)(this + 0x4c),200);
  cVar5 = handledPopupDialogsMouseMove(this,param_1,param_2);
  if (((cVar5 != '\0') || (cVar5 = FUN_04528bd8(this[0x209]), cVar5 == '\0')) ||
     ((*(long *)(this + 0x440) != 0 && (this[0x43c] != (WorldMap)0x0)))) goto LAB_0453476c;
  if (((this[0x33c] != (WorldMap)0x0) ||
      (cVar5 = FUN_04528c18(*(undefined4 *)(this + 0x334),*(undefined4 *)(this + 0x338)),
      cVar5 == '\0')) || (fVar9 = (float)PVZ_EOT(), *(float *)(this + 0x340) != fVar9)) {
    FUN_04528bdc(this + 0x20a,0);
    this[0x208] = (WorldMap)0x64;
    goto LAB_0453476c;
  }
  this[0x208] = (WorldMap)0x0;
  pTVar6 = (TPoint *)GetMouseDownPos(this);
  Sexy::Point::Point((Point *)&local_20,pTVar6);
  iVar1 = local_20 - param_1;
  iVar2 = local_1c - param_2;
  cVar5 = FUN_04528be4(this[0x20a]);
  if (cVar5 == '\0') {
    iVar7 = (**(code **)(*gLawnApp + 0x470))(gLawnApp);
    if (iVar7 * iVar7 < iVar2 * iVar2 + iVar1 * iVar1) {
      FUN_04528bdc(this + 0x20a,1);
    }
    cVar5 = FUN_04528be4(this[0x20a]);
    if (cVar5 == '\0') goto LAB_0453476c;
  }
  pTVar6 = (TPoint *)GetStartingMouseDownPos(this);
  Sexy::Point::Point((Point *)&local_18,pTVar6);
  uVar3 = local_14 - param_2;
  uVar4 = local_18 - param_1 >> 0x1f;
  iVar8 = (local_18 - param_1 ^ uVar4) - uVar4;
  iVar7 = (uVar3 ^ (int)uVar3 >> 0x3f) - ((int)uVar3 >> 0x1f);
  cVar5 = FUN_04528bf0();
  if (cVar5 == '\0') {
    cVar5 = FUN_04528c00();
    if (cVar5 == '\0') {
      if (iVar8 < 0xf) {
        if (0xe < iVar7) {
          FUN_04528be8(this + 0x20b,0);
          FUN_04528bf8(this + 0x20c,1);
        }
      }
      else {
        FUN_04528be8(this + 0x20b,1);
        FUN_04528bf8(this + 0x20c,0);
      }
      Sexy::Point::Point(aPStack_10,param_1,param_2);
      SetMouseDownPos(this,aPStack_10);
LAB_045349ec:
      SetCameraPosition(this,(float)iVar1 + *(float *)(this + 0x210),
                        (float)iVar2 + *(float *)(this + 0x214),false);
      *(float *)(this + 0x228) = (float)iVar1;
      *(float *)(this + 0x22c) = (float)iVar2;
    }
    else {
      if ((iVar8 < 0xf) && (iVar7 < 0xf)) {
        FUN_04528be8(this + 0x20b,0);
        FUN_04528bf8(this + 0x20c,0);
        Sexy::Point::Point(aPStack_10,param_1,param_2);
        SetMouseDownPos(this,aPStack_10);
        cVar5 = FUN_04528c00();
        if (cVar5 == '\0') goto LAB_045349ec;
      }
      else {
        Sexy::Point::Point(aPStack_10,param_1,param_2);
        SetMouseDownPos(this,aPStack_10);
      }
      SetCameraPosition(this,*(float *)(this + 0x210),(float)iVar2 + *(float *)(this + 0x214),false)
      ;
      *(float *)(this + 0x22c) = (float)iVar2;
      *(undefined4 *)(this + 0x228) = 0;
    }
  }
  else {
    if ((iVar8 < 0xf) && (iVar7 < 0xf)) {
      FUN_04528be8(this + 0x20b,0);
      FUN_04528bf8(this + 0x20c,0);
      Sexy::Point::Point(aPStack_10,param_1,param_2);
      SetMouseDownPos(this,aPStack_10);
    }
    else {
      Sexy::Point::Point(aPStack_10,param_1,param_2);
      SetMouseDownPos(this,aPStack_10);
    }
    SetCameraPosition(this,(float)iVar1 + *(float *)(this + 0x210),*(float *)(this + 0x214),false);
    *(float *)(this + 0x228) = (float)iVar1;
    *(undefined4 *)(this + 0x22c) = 0;
  }
  (**(code **)(*(long *)this + 0x388))(this);
LAB_0453476c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap::TouchMoved(Sexy::Touch const&) */

void __thiscall WorldMap::TouchMoved(WorldMap *this,Touch *param_1)

{
  char cVar1;
  
  WorldMap_LuaButtonsDelegate::TouchMoved(param_1,*(int *)(this + 0x48),*(int *)(this + 0x4c));
  cVar1 = IsUserInputEnabled(this);
  if ((cVar1 == '\0') || (cVar1 = IsValidStateForInput(this), cVar1 == '\0')) {
    *(undefined8 *)(this + 600) = 0;
  }
  else if ((*(long *)(this + 600) == 0) || (*(long *)(this + 600) == *(long *)param_1)) {
    handleTouchMoved(this,*(int *)(param_1 + 0x10),*(int *)(param_1 + 0x14));
    return;
  }
  return;
}


/* WorldMap::DoRewardUpgradeDialog(MapEventItem*) */

void __thiscall WorldMap::DoRewardUpgradeDialog(WorldMap *this,MapEventItem *param_1)

{
  ProfileMgr *this_00;
  
  if (*(long *)(this + 0x440) != 0) {
    *(undefined8 *)(this + 0x440) = 0;
    handleTutorialEnd(this,false);
  }
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  *(MapEventItem **)(this + 800) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::SwitchToAlmanacFromPlantInfoPopup() */

void __thiscall WorldMap::SwitchToAlmanacFromPlantInfoPopup(WorldMap *this)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  MapPopupDialog::GetInfoObjectType();
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x300),(RtWeakPtr *)aRStack_10);
  QueueForTransition(this,8);
  this[0x354] = (WorldMap)0x1;
  if (this[0x448] != (WorldMap)0x0) {
    handleTutorialEnd(this,false);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::SwitchToStore(std::string) */

void __thiscall WorldMap::SwitchToStore(WorldMap *this,undefined8 param_2)

{
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x44c) == 8) {
    *(undefined8 *)(this + 0x440) = 0;
    handleTutorialEnd(this,false);
  }
  else {
    std::string::string(asStack_18,"WorldMap");
    std::string::string(asStack_10,"Store");
    UIMetrics::BroadcastUIEvent(asStack_18,asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
    thunk_FUN_05475e00(this + 0x318,param_2);
    QueueForTransition(this,9);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap::onGateCancelButtonPressed() */

void __thiscall WorldMap::onGateCancelButtonPressed(WorldMap *this)

{
  *(undefined8 *)(this + 0x230) = 0;
  if (this[0x448] == (WorldMap)0x0) {
    return;
  }
  handleTutorialEnd(this,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::SwitchToAlmanac() */

void __thiscall WorldMap::SwitchToAlmanac(WorldMap *this)

{
  string *psVar1;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"WorldMap");
  std::string::string(asStack_10,"Almanac");
  UIMetrics::BroadcastUIEvent(asStack_18,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_18,"sunflower");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar1);
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x300),(RtWeakPtrBase *)asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  std::string::~string(asStack_18);
  nop();
  QueueForTransition(this,8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::gatherRequiredResourcesFromMapEvents() */

void WorldMap::gatherRequiredResourcesFromMapEvents(void)

{
  int iVar1;
  WorldDataManager *this;
  long lVar2;
  ulong uVar3;
  FilesystemSaveGameContext *this_00;
  string *psVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  iVar7 = 0;
  local_8 = ___stack_chk_guard;
  this = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
  iVar1 = WorldDataManager::GetWorldDataCount(this);
  if (0 < iVar1) {
    do {
      lVar2 = WorldDataManager::GetWorldDataByIdx(this,iVar7);
      if (*(char *)(lVar2 + 0xa8) == '\0') {
        uVar6 = *(undefined8 *)(lVar2 + 0x20);
        uVar5 = 0;
        uVar3 = FUN_04528d68(uVar6,*(undefined8 *)(lVar2 + 0x28));
        if (uVar3 != 0) {
          do {
            this_00 = (FilesystemSaveGameContext *)FUN_04528dd0(uVar6,uVar5);
            iVar1 = FUN_04528b48(*(undefined4 *)(this_00 + 0x14));
            if (iVar1 - 2U < 2) {
              psVar4 = (string *)
                       Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
              Sexy::FilesystemSaveGameContext::GetBuffer(this_00);
              ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
              uVar6 = *(undefined8 *)(lVar2 + 0x20);
              uVar3 = FUN_04528d68(uVar6,*(undefined8 *)(lVar2 + 0x28));
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar3);
        }
        *(undefined1 *)(lVar2 + 0xa8) = 1;
      }
      iVar7 = iVar7 + 1;
      iVar1 = WorldDataManager::GetWorldDataCount(this);
    } while (iVar7 < iVar1);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WorldMap::loadMap(std::string const&) */

void WorldMap::loadMap(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x358))();
  gatherRequiredResourcesFromMapEvents();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::showPopup(MapEventItem const*) */

void __thiscall WorldMap::showPopup(WorldMap *this,MapEventItem *param_1)

{
  int iVar1;
  string *psVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  MapPopupDialog *pMVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  float local_50;
  float local_4c;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  MapPopupDialog::SetDialogType(*(MapPopupDialog **)(this + 0x2a8),4);
  pMVar5 = *(MapPopupDialog **)(this + 0x2a8);
  FUN_05478178(asStack_58,&DAT_056f11a8,asStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGateCancelButtonPressed);
  Sexy::Delegate0::Delegate0<WorldMap,void(WorldMap::*)()>
            (aDStack_38,(RtWeakPtr<Sexy::SoundResource> *)&local_50);
  MapPopupDialog::SetCancelButtonPressed(pMVar5,asStack_58,aDStack_38);
  FUN_05476c50(asStack_58);
  nop();
  pMVar5 = *(MapPopupDialog **)(this + 0x2a8);
  TodStringTranslate(L"[VIEW_IN_ALMANAC]");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,SwitchToAlmanacFromPlantInfoPopup);
  Sexy::Delegate0::Delegate0<WorldMap,void(WorldMap::*)()>
            (aDStack_38,(RtWeakPtr<Sexy::SoundResource> *)&local_50);
  std::string::string(asStack_60,"Play_UI_Menu_Almanac_Open_Press");
  std::string::string(asStack_58,"Play_UI_Button_Almanac_Open_Release");
  MapPopupDialog::SetConfirmButtonPressed(pMVar5,auStack_68,aDStack_38,asStack_60,asStack_58);
  std::string::~string(asStack_58);
  nop();
  std::string::~string(asStack_60);
  nop();
  FUN_05476c50(auStack_68);
  iVar1 = FUN_04528b48(*(undefined4 *)(param_1 + 0x14));
  if (iVar1 == 4) {
    pMVar5 = *(MapPopupDialog **)(this + 0x2a8);
    uVar4 = Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)param_1);
    FUN_05475d88(asStack_60,uVar4);
    GameFeatureType::GetGameFeatureTypeFromUnlockString((GameFeatureType *)asStack_58,asStack_60);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_50,(RtWeakPtrBase *)asStack_58);
    MapPopupDialog::SetRewardInfoData(pMVar5,(RtWeakPtr<Sexy::SoundResource> *)&local_50,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
    std::string::~string(asStack_60);
  }
  else {
    pMVar5 = *(MapPopupDialog **)(this + 0x2a8);
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)param_1);
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_50,(RtWeakPtrBase *)asStack_58);
    MapPopupDialog::SetRewardInfoData(pMVar5,(RtWeakPtr<Sexy::SoundResource> *)&local_50,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
  }
  puVar3 = (undefined4 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)param_1);
  fVar6 = (float)FUN_04529710(*puVar3);
  fVar7 = (float)FUN_04529710(puVar3[1]);
  WorldMapCamera::TransformPointToCamera(fVar6,fVar7);
  local_50 = ((float)*(int *)(this + 0x48) - *(float *)(this + 0x210)) + local_50;
  local_4c = ((float)*(int *)(this + 0x4c) - *(float *)(this + 0x214)) + local_4c;
  showPopup(this,(int)local_50,(int)local_4c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::CheckPlantTrialButton(bool) */

void __thiscall WorldMap::CheckPlantTrialButton(WorldMap *this,bool param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  vector *pvVar4;
  string *psVar5;
  PlantTrialConfig *pPVar6;
  long lVar7;
  time_t tVar8;
  UIWidget *this_02;
  SexyVector2 *this_03;
  string *extraout_x0;
  long lVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 local_38;
  undefined8 local_30;
  string asStack_28 [8];
  vector<PlantTrialCD,std::allocator<PlantTrialCD>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    pvVar4 = (vector *)PlayerInfo::GetPlantTrialRecord(this_01);
    lVar10 = 0;
    lVar11 = 0;
    std::vector<PlantTrialCD,std::allocator<PlantTrialCD>>::vector(avStack_20,pvVar4);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar1)
    {
      psVar5 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
      pPVar6 = (PlantTrialConfig *)LawnApp::GetPlantTrialConfig(gLawnApp);
      FUN_05475d88(asStack_28,psVar5);
      lVar7 = PlantTrialConfig::GetTrialDataByPlantName(pPVar6,asStack_28);
      std::string::~string(asStack_28);
      lVar9 = *(long *)(psVar5 + 8);
      tVar8 = time((time_t *)0x0);
      lVar9 = lVar9 - tVar8;
      if (((lVar9 < 1) || (lVar7 == 0)) ||
         ((cVar2 = PlayerInfo::GetIsPlantUnlocked(this_01,psVar5), cVar2 != '\0' &&
          (iVar3 = PlayerInfo::GetPlantStarLevel(this_01,psVar5,false),
          *(int *)(lVar7 + 0x48) <= iVar3)))) {
        PlayerInfo::RemovePlantTrialObj(this_01,psVar5);
      }
      else if ((lVar9 < lVar10) || (lVar11 == 0)) {
        lVar10 = lVar9;
        lVar11 = lVar7;
      }
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_38);
    }
    std::vector<PlantTrialCD,std::allocator<PlantTrialCD>>::~vector(avStack_20);
    if (lVar11 != 0) {
      std::string::string((string *)avStack_20,"UIWorldMapPlantTrialButton");
      this_02 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)avStack_20);
      std::string::~string((string *)avStack_20);
      nop();
      if (this_02 == (UIWidget *)0x0) {
        Sexy::RtName::RtName((RtName *)avStack_20,L"UIWorldMapPlantTrialButton");
        this_02 = (UIWidget *)UIWidget::CreateWidget(avStack_20,param_1);
        Sexy::RtName::~RtName((RtName *)avStack_20);
      }
      this_03 = (SexyVector2 *)UIWidget::GetPositionOffset(this_02);
      fVar12 = (float)FUN_04529758();
      uVar14 = 0;
      Sexy::FastCurve::SetOutRange((FastCurve *)avStack_20,fVar12,0.0);
      uVar13 = Sexy::SexyVector2::operator+(this_03,(SexyVector2 *)avStack_20);
      UIWidget::SetPositionOffset(uVar13,uVar14,this_02);
      nop();
      WorldMap_PlantTrialButton::SetButtonData(extraout_x0);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::handleTouchEnded(int, int) */

void WorldMap::handleTouchEnded(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  LawnApp *this;
  char cVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  char cVar8;
  char cVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  WorldMap *this_00;
  long lVar15;
  WorldDataManager *this_01;
  ulong uVar16;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  int *piVar17;
  float *pfVar18;
  string *psVar19;
  long lVar20;
  wchar16 *pwVar21;
  string *psVar22;
  ProfileMgr *pPVar23;
  PlayerInfo *pPVar24;
  string *psVar25;
  UnchartedModeNetworkMgr *this_03;
  MapEventItem *pMVar26;
  PVZ2UIDialog *pPVar27;
  wchar_t *pwVar28;
  char *__s;
  int in_w2;
  LineBreakCategory *pLVar29;
  LineBreakCategory *pLVar30;
  MapPopupDialog *pMVar31;
  string *in_x4;
  undefined8 uVar32;
  hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  *this_04;
  wstring *pwVar33;
  int iVar34;
  ulong uVar35;
  undefined4 uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  int iVar41;
  wchar_t *local_b8;
  Delegate0 *local_b0;
  string *local_a8;
  LawnApp *local_88;
  undefined1 auStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  wstring awStack_68 [8];
  LineBreakCategory aLStack_60 [8];
  string asStack_58 [8];
  WorldMap *local_50;
  long local_48;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = (WorldMap *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  cVar4 = IsUserInputEnabled(this_00);
  if ((((cVar4 != '\0') && (cVar4 = IsValidStateForInput(this_00), cVar4 != '\0')) &&
      (this_00[0x254] == (WorldMap)0x0)) &&
     ((this_00[0x255] == (WorldMap)0x0 && (cVar4 = FUN_04528bc4(this_00[0x355]), cVar4 == '\0')))) {
    if (this_00[0x33c] == (WorldMap)0x0) {
      iVar1 = *(int *)(this_00 + 0x48);
      iVar2 = *(int *)(this_00 + 0x4c);
      cVar4 = handledPopupDialogsMouseUp(this_00,param_2,in_w2);
      if ((cVar4 == '\0') && (closeMapPopups(this_00), this_00[0x448] == (WorldMap)0x0)) {
        cVar4 = FUN_04528be4(this_00[0x20a]);
        if (cVar4 == '\0') {
          iVar1 = iVar1 + param_2;
          iVar2 = iVar2 + in_w2;
          FUN_04528bd0(this_00 + 0x209);
          cVar4 = UIWidget::ProcessedMouseUp(iVar1,iVar2,200);
          if (cVar4 == '\0') {
            cVar4 = IsInState(this_00,2);
            if ((((cVar4 == '\0') && (cVar4 = IsInState(this_00,3), cVar4 == '\0')) &&
                (this_00[0x449] == (WorldMap)0x0)) &&
               ((this_00[0x256] == (WorldMap)0x0 && (this_00[0x43c] == (WorldMap)0x0)))) {
              psVar22 = (string *)&local_48;
              WorldMapCamera::TransformPointFromCamera
                        ((float)((int)*(float *)(this_00 + 0x210) + param_2),
                         (float)((int)*(float *)(this_00 + 0x214) + in_w2));
              fVar37 = (float)FUN_04529734(local_70);
              iVar11 = (int)fVar37;
              fVar37 = (float)FUN_04529734(local_6c);
              uVar12 = (uint)fVar37;
              this_01 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
              local_a8 = in_x4;
              for (iVar41 = 0; iVar13 = WorldDataManager::GetWorldDataCount(this_01),
                  iVar41 < iVar13; iVar41 = iVar41 + 1) {
                lVar15 = WorldDataManager::GetWorldDataByIdx(this_01,iVar41);
                if ((*(char *)(*(long *)(lVar15 + 0xb0) + 0x50) != '\0') &&
                   (cVar4 = FUN_04528c18(*(undefined4 *)(this_00 + 0x334),
                                         *(undefined4 *)(this_00 + 0x338)), cVar4 != '\0')) {
                  uVar35 = 0;
                  local_b8 = L"[PVZ2_UNCHARTED_MODE_TALE_2_NORMAL_TIPS_DESC]";
LAB_045372c4:
                  uVar32 = *(undefined8 *)(lVar15 + 0x20);
                  uVar16 = FUN_04528d68(uVar32,*(undefined8 *)(lVar15 + 0x28));
                  if (uVar16 <= uVar35) goto LAB_04537638;
                  this_02 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)FUN_04528d88(uVar32,uVar35);
                  uVar36 = FUN_04528b48(*(undefined4 *)(this_02 + 0x14));
                  local_50 = (WorldMap *)CONCAT44(local_50._4_4_,uVar36);
                  piVar17 = (int *)std::
                                   map<MapEventType,Sexy::TRect<int>,std::less<MapEventType>,std::allocator<std::pair<MapEventType_const,Sexy::TRect<int>>>>
                                   ::operator[]((map<MapEventType,Sexy::TRect<int>,std::less<MapEventType>,std::allocator<std::pair<MapEventType_const,Sexy::TRect<int>>>>
                                                 *)(this_00 + 0x260),(MapEventType *)&local_50);
                  if ((this_02 !=
                       *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         **)(this_00 + 0x440)) &&
                     (*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        **)(this_00 + 0x440) !=
                      (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)0x0)) goto LAB_0453731c;
                  pfVar18 = (float *)std::
                                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     ::_M_end(this_02);
                  fVar37 = *pfVar18;
                  fVar39 = pfVar18[1];
                  cVar5 = FUN_04528b64(this_02[0xf0]);
                  if (cVar5 == '\0') {
                    uVar36 = *(undefined4 *)(this_02 + 0x14);
                    iVar13 = FUN_04528b48(uVar36);
                    if (iVar13 != 1) goto LAB_045374fc;
LAB_04537828:
                    cVar5 = FUN_04528b70(this_02[0xf1]);
                    if (cVar5 == '\0') goto LAB_0453731c;
                    iVar13 = 1;
                    cVar5 = FUN_04528b7c(this_02[0xf2]);
                    if (cVar5 == '\0') goto LAB_0453784c;
                    goto LAB_0453753c;
                  }
                  fVar40 = (float)iVar11;
                  bVar10 = SUB81((string *)&local_50,0);
                  if ((fVar40 < fVar37 + (float)*piVar17) ||
                     (fVar37 + (float)*piVar17 + (float)piVar17[2] < fVar40)) {
LAB_045377c4:
                    uVar36 = *(undefined4 *)(this_02 + 0x14);
                    iVar13 = FUN_04528b48(uVar36);
                    if (iVar13 != 1) goto LAB_045374fc;
                  }
                  else {
                    if (((float)(int)uVar12 < fVar39 + (float)piVar17[1]) ||
                       (fVar39 + (float)piVar17[1] + (float)piVar17[3] < (float)(int)uVar12))
                    goto LAB_045377c4;
                    Set8BytesTo0(asStack_58);
                    psVar19 = (string *)
                              Sexy::FilesystemSaveGameContext::GetBuffer
                                        ((FilesystemSaveGameContext *)this_02);
                    lVar20 = FUN_05474178();
                    if (lVar20 == 0) {
                      uVar32 = std::
                               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               ::_M_rightmost(this_02);
                      thunk_FUN_05475e00(asStack_58,uVar32);
                    }
                    else {
                      thunk_FUN_05475e00(asStack_58,psVar19);
                    }
                    pwVar21 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
                    pLVar30 = aLStack_60;
                    pLVar29 = pLVar30;
                    std::string::string((string *)&local_50,"AutoClearMode");
                    cVar5 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                                      (pwVar21,(wchar16 *)&local_50,pLVar29,
                                       (LineBreakCategory *)pwVar21,(LineBreakCategory *)local_a8);
                    std::string::~string((string *)&local_50);
                    nop();
                    if (cVar5 != '\0') {
                      psVar22 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
                      std::string::string((string *)&local_50,"AutoLockMode");
                      CheatManager::SetToggleValue(psVar22,bVar10);
                      std::string::~string((string *)&local_50);
                      nop();
                      psVar22 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
                      std::string::string((string *)&local_50,"AutoHardClearMode");
                      CheatManager::SetToggleValue(psVar22,bVar10);
                      std::string::~string((string *)&local_50);
                      nop();
                      psVar22 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
                      std::string::string((string *)&local_50,"AutoStarMode");
                      CheatManager::SetToggleValue(psVar22,bVar10);
                      std::string::~string((string *)&local_50);
                      nop();
                      pPVar23 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
                      pPVar24 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar23);
                      iVar13 = FUN_04528b48(*(undefined4 *)(this_02 + 0x14));
                      if (iVar13 == 1) {
                        LawnApp::SetLastCompletedLevel((string *)gLawnApp);
                      }
                      uVar32 = std::
                               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               ::_M_rightmost(this_02);
                      psVar22 = (string *)0x3;
                      local_a8 = (string *)0x1;
                      PlayerInfo::SetWorldMapEventStatus(pPVar24,uVar32,asStack_58);
                      PlayerInfo::ResetStarTotal(pPVar24);
                      if ((*(long *)(this_00 + 0x2f0) != 0) &&
                         (cVar4 = WorldMapUtils::IsPVZ1World
                                            ((string *)(*(long *)(this_00 + 0x2f0) + 0x38)),
                         cVar4 != '\0')) {
                        PVZ1ModeUtils::TryCompleteLevel(psVar19);
                      }
LAB_04537dcc:
                      (**(code **)(*(long *)this_00 + 0x378))(this_00);
                      std::string::~string(asStack_58);
                      goto LAB_04537638;
                    }
                    psVar22 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
                    pLVar29 = pLVar30;
                    std::string::string((string *)&local_50,"AutoHardClearMode");
                    cVar5 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                                      ((wchar16 *)psVar22,(wchar16 *)&local_50,pLVar29,
                                       (LineBreakCategory *)psVar22,(LineBreakCategory *)local_a8);
                    std::string::~string((string *)&local_50);
                    nop();
                    if (cVar5 != '\0') {
                      psVar19 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
                      std::string::string((string *)&local_50,"AutoLockMode");
                      CheatManager::SetToggleValue(psVar19,bVar10);
                      std::string::~string((string *)&local_50);
                      nop();
                      psVar19 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
                      std::string::string((string *)&local_50,"AutoStarMode");
                      CheatManager::SetToggleValue(psVar19,bVar10);
                      std::string::~string((string *)&local_50);
                      nop();
                      pPVar23 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
                      pPVar24 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar23);
                      uVar14 = FUN_04528b48(*(undefined4 *)(this_02 + 0x14));
                      psVar19 = (string *)(ulong)uVar14;
                      if (uVar14 == 1) {
                        lVar15 = FUN_04528bb0(*(undefined8 *)(this_02 + 0xe8));
                        cVar4 = WorldMapUtils::WorldHasHardModule(*(uchar *)(lVar15 + 0x5c));
                        if (cVar4 != '\0') {
                          uVar32 = std::
                                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   ::_M_rightmost(this_02);
                          psVar22 = (string *)&DAT_00000004;
                          PlayerInfo::SetWorldMapEventStatus(pPVar24,uVar32,asStack_58);
                          PlayerInfo::ResetStarTotal(pPVar24);
                          local_a8 = psVar19;
                        }
                      }
                      goto LAB_04537dcc;
                    }
                    cVar5 = FUN_04528b70(this_02[0xf1]);
                    if (cVar5 != '\0') {
                      psVar22 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
                      std::string::string((string *)&local_50,"AutoLockMode");
                      cVar5 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                                        ((wchar16 *)psVar22,(wchar16 *)&local_50,pLVar30,
                                         (LineBreakCategory *)psVar22,(LineBreakCategory *)local_a8)
                      ;
                      std::string::~string((string *)&local_50);
                      nop();
                      if (cVar5 != '\0') {
                        psVar19 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
                        std::string::string((string *)&local_50,"AutoClearMode");
                        CheatManager::SetToggleValue(psVar19,bVar10);
                        std::string::~string((string *)&local_50);
                        nop();
                        psVar19 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
                        std::string::string((string *)&local_50,"AutoHardClearMode");
                        CheatManager::SetToggleValue(psVar19,bVar10);
                        std::string::~string((string *)&local_50);
                        nop();
                        psVar19 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
                        std::string::string((string *)&local_50,"AutoStarMode");
                        CheatManager::SetToggleValue(psVar19,bVar10);
                        std::string::~string((string *)&local_50);
                        nop();
                        pPVar23 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
                        pPVar24 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar23);
                        PlayerInfo::ClearWorldMapEventStatus(pPVar24,asStack_58);
                        PlayerInfo::ResetStarTotal(pPVar24);
                        goto LAB_04537dcc;
                      }
                    }
                    std::string::~string(asStack_58);
                    uVar36 = *(undefined4 *)(this_02 + 0x14);
                    iVar13 = FUN_04528b48(uVar36);
                    if (iVar13 != 1) goto LAB_045374fc;
                    cVar5 = FUN_04528b64(this_02[0xf0]);
                    if (cVar5 == '\0') goto LAB_04537828;
                  }
                  cVar5 = FUN_04528b70(this_02[0xf1]);
                  if (cVar5 == '\0') {
                    cVar5 = WorldMapUtils::IsUnchartedWorld
                                      ((string *)(*(long *)(this_00 + 0x2f0) + 0x38));
                    if ((((cVar5 == '\0') ||
                         (cVar5 = PVZ2UnchartedModeUtils::IsHardMode(), cVar5 == '\0')) &&
                        ((cVar5 = WorldMapUtils::IsUnchartedWorld
                                            ((string *)(*(long *)(this_00 + 0x2f0) + 0x38)),
                         cVar5 == '\0' ||
                         (iVar13 = PVZ2UnchartedModeUtils::GetUnchartedWorldType(), iVar13 != 3))))
                       && ((cVar5 = WorldMapUtils::IsCardGameWorld
                                              ((string *)(*(long *)(this_00 + 0x2f0) + 0x38)),
                           cVar5 == '\0' &&
                           (cVar5 = WorldMapUtils::IsPlantWarsWorld
                                              ((string *)(*(long *)(this_00 + 0x2f0) + 0x38)),
                           cVar5 == '\0')))) {
                      if ((fVar37 + (float)*piVar17 <= fVar40) &&
                         (fVar40 <= fVar37 + (float)*piVar17 + (float)piVar17[2])) {
                        if ((fVar39 + (float)piVar17[1] <= (float)(int)uVar12) &&
                           ((float)(int)uVar12 <= fVar39 + (float)piVar17[1] + (float)piVar17[3])) {
                          cVar5 = PVZ1ModeUtils::IsZombossLevel((MapEventItem *)this_02);
                          if (cVar5 == '\0') {
                            if (*(long *)(this_00 + 0x2f0) == 0) goto LAB_04537b3c;
                            cVar5 = PVZ2UnchartedModeUtils::IsUnchartedBirthday
                                              ((string *)(*(long *)(this_00 + 0x2f0) + 0x38));
                            if (cVar5 == '\0') {
                              if (*(long *)(this_00 + 0x2f0) == 0) goto LAB_04537b3c;
                              cVar5 = PVZ2UnchartedModeUtils::IsAnniversarySelectLevel
                                                ((string *)(*(long *)(this_00 + 0x2f0) + 0x38));
                              if (cVar5 == '\0') {
                                if ((*(long *)(this_00 + 0x2f0) == 0) ||
                                   (bVar10 = std::operator==((string *)
                                                             (*(long *)(this_00 + 0x2f0) + 0x38),
                                                             "uncharted_tale_2_n"), !bVar10))
                                goto LAB_04537b3c;
                                local_88 = gLawnApp;
                                FUN_05478178(asStack_58,&DAT_056f11a8,awStack_68);
                                pwVar28 = local_b8;
                              }
                              else {
                                local_88 = gLawnApp;
                                FUN_05478178(asStack_58,&DAT_056f11a8,awStack_68);
                                pwVar28 = L"[UNCHARTED_ANNIVERSARY_SELECT_LEVEL_LOCKED]";
                              }
                            }
                            else {
                              local_88 = gLawnApp;
                              FUN_05478178(asStack_58,&DAT_056f11a8,awStack_68);
                              pwVar28 = L"[UNCHARTED_ANNIVERSARY_HALLOWEEN_LEVEL_LOCKED]";
                            }
                          }
                          else {
                            local_88 = gLawnApp;
                            FUN_05478178(asStack_58,&DAT_056f11a8,awStack_68);
                            pwVar28 = L"[PVZ1MODE_ZOMBOSS_LOCKED]";
                          }
                          local_b0 = aDStack_38;
                          local_a8 = (string *)&gLawnApp;
                          FUN_05478178((string *)&local_50,pwVar28,aLStack_60);
                          pPVar27 = (PVZ2UIDialog *)
                                    LawnApp::ShowPVZ2Dialog
                                              (local_88,(wstring *)asStack_58,(wstring *)&local_50);
                          FUN_05476c50((string *)&local_50);
                          nop();
                          FUN_05476c50((wstring *)asStack_58);
                          nop();
                          FUN_05478178((wstring *)asStack_58,L"[BUTTON_OK]",aLStack_60);
                          Sexy::
                          MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                                    ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
                          Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>
                                    (local_b0,(string *)&local_50);
                          psVar22 = (string *)0x1;
                          PVZ2UIDialog::AddButton(pPVar27,(wstring *)asStack_58,local_b0);
                          FUN_05476c50((wstring *)asStack_58);
                          nop();
                        }
                      }
                    }
                    else {
                      fVar38 = fVar37 + (float)*piVar17;
                      if (fVar38 <= fVar40) goto LAB_04537af8;
                    }
                  }
                  else {
                    fVar38 = fVar37 + (float)*piVar17;
                    if (fVar40 < fVar38) {
                      iVar13 = FUN_04528b48(uVar36);
LAB_04537510:
                      cVar5 = FUN_04528b7c(this_02[0xf2]);
                      if (cVar5 == '\0') {
LAB_0453784c:
                        iVar13 = FUN_04528b48(uVar36);
                        cVar5 = cVar4;
                        goto LAB_04537528;
                      }
                      if (iVar13 != 2) goto LAB_04537528;
                      iVar3 = *piVar17;
                      fVar40 = fVar37 + (float)iVar3;
                      if (fVar40 <= (float)iVar11) goto LAB_04537664;
                      uVar35 = uVar35 + 1;
                      goto LAB_045372c4;
                    }
LAB_04537af8:
                    if (fVar40 <= fVar38 + (float)piVar17[2]) {
                      if (((float)(int)uVar12 < fVar39 + (float)piVar17[1]) ||
                         (fVar39 + (float)piVar17[1] + (float)piVar17[3] < (float)(int)uVar12))
                      goto LAB_04537b3c;
                      if (*(long *)(this_00 + 0x440) != 0) {
                        *(undefined8 *)(this_00 + 0x440) = 0;
                        handleTutorialEnd(this_00,false);
                      }
                      psVar25 = (string *)
                                Sexy::FilesystemSaveGameContext::GetBuffer
                                          ((FilesystemSaveGameContext *)this_02);
                      uVar32 = FUN_0547429c();
                      Sexy::StrFormat("[#43966] WorldMap::handleTouchEnded - Starting level from touch on map: %s"
                                      ,(string *)&local_50,uVar32);
                      nop();
                      std::string::~string((string *)&local_50);
                      pwVar21 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
                      psVar19 = asStack_58;
                      std::string::string((string *)&local_50,"AutoStarMode");
                      cVar4 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                                        (pwVar21,(wchar16 *)&local_50,(LineBreakCategory *)psVar19,
                                         (LineBreakCategory *)psVar22,(LineBreakCategory *)local_a8)
                      ;
                      std::string::~string((string *)&local_50);
                      nop();
                      if (cVar4 != '\0') {
                        psVar19 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
                        std::string::string((string *)&local_50,"AutoLockMode");
                        CheatManager::SetToggleValue(psVar19,bVar10);
                        std::string::~string((string *)&local_50);
                        nop();
                        psVar19 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
                        std::string::string((string *)&local_50,"AutoUnlockMode");
                        CheatManager::SetToggleValue(psVar19,bVar10);
                        std::string::~string((string *)&local_50);
                        nop();
                        psVar19 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
                        std::string::string((string *)&local_50,"AutoClearMode");
                        CheatManager::SetToggleValue(psVar19,bVar10);
                        std::string::~string((string *)&local_50);
                        nop();
                        pPVar23 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
                        pPVar24 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar23);
                        iVar13 = PlayerInfo::GetStarCompleted(pPVar24,psVar25);
                        if (iVar13 == 1) {
                          lVar15 = FUN_04528bb0(*(undefined8 *)(this_02 + 0xe8));
                          cVar4 = WorldMapUtils::WorldHasHardModule(*(uchar *)(lVar15 + 0x5c));
                          if (cVar4 == '\0') goto LAB_04538498;
                          PlayerInfo::SetHardLevelCompleted(pPVar24,psVar25,true);
                        }
                        else if (iVar13 == 3) {
LAB_04538498:
                          PlayerInfo::ClearWorldMapEventStatus(pPVar24,psVar25);
                        }
                        else if (iVar13 == 0) {
                          PlayerInfo::SetLevelCompleted(pPVar24,psVar25,true);
                        }
                        PlayerInfo::ResetStarTotal(pPVar24);
                        (**(code **)(*(long *)this_00 + 0x378))(this_00);
                        goto LAB_04537638;
                      }
                      WorldMapActionManager::StopActions((WorldMapActionManager *)(this_00 + 0x358))
                      ;
                      cVar4 = WorldMapUtils::IsRiftWorld
                                        ((string *)(*(long *)(this_00 + 0x2f0) + 0x38));
                      cVar5 = WorldMapUtils::IsPVZ1World
                                        ((string *)(*(long *)(this_00 + 0x2f0) + 0x38));
                      cVar6 = WorldMapUtils::IsUnchartedWorld
                                        ((string *)(*(long *)(this_00 + 0x2f0) + 0x38));
                      cVar8 = WorldMapUtils::IsCardGameWorld
                                        ((string *)(*(long *)(this_00 + 0x2f0) + 0x38));
                      psVar22 = *(string **)(this_00 + 0x2f0);
                      cVar9 = WorldMapUtils::IsPlantWarsWorld(psVar22 + 0x38);
                      if (cVar4 != '\0') {
                        doRiftLevelPopup(this_00,(MapEventItem *)this_02);
                        goto LAB_04537638;
                      }
                      if (cVar9 == '\0') {
                        if (cVar5 != '\0') {
                          doPVZ1LevelPopup(this_00,(MapEventItem *)this_02);
                          goto LAB_04537638;
                        }
                        if (cVar6 == '\0') {
                          if (cVar8 == '\0') {
                            iVar13 = FUN_04528b58(*(undefined4 *)(this_02 + 0x78));
                            if (iVar13 - 3U < 2) {
                              local_50 = this_00;
                              local_48 = lVar15;
                              local_40 = this_02;
                              cVar4 = FUN_02fd446c((string *)&local_48);
                              if (cVar4 == '\0') {
                                MapPopupDialog::SetDialogType
                                          (*(MapPopupDialog **)(this_00 + 0x2a8),1);
                                pMVar31 = *(MapPopupDialog **)(this_00 + 0x2a8);
                                FUN_05478178(asStack_58,&DAT_056f11a8,auStack_78);
                                TodStringTranslate(L"[WAIT_FOR_BOSS_COMING_TIP]");
                                TodStringTranslate(L"[SUPER_BOSS_COMING_SOON]");
                                psVar22 = (string *)aLStack_60;
                                MapPopupDialog::SetKeygateInfo
                                          (pMVar31,(wstring *)asStack_58,awStack_68,
                                           (wstring *)aLStack_60);
                                FUN_05476c50((wstring *)aLStack_60);
                                FUN_05476c50(awStack_68);
                                FUN_05476c50(asStack_58);
                                nop();
                                showPopup(this_00,iVar1,iVar2);
                              }
                              else {
                                UISelectBossLevelModeWidget::create(this_00,psVar25,0);
                              }
                            }
                            else {
                              UISelectHardLevelModeWidget::create(this_00,psVar25,0);
                            }
                          }
                          else {
                            pPVar23 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
                            pPVar24 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar23);
                            iVar13 = WorldMapUtils::GetVisualMapEventStatus
                                               ((MapEventItem *)this_02,pPVar24);
                            if (iVar13 - 2U < 0x7ffffffe) {
                              doCardGameLevelPopup(this_00,(MapEventItem *)this_02);
                            }
                          }
                          goto LAB_04537638;
                        }
                        pPVar23 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
                        pPVar24 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar23);
                        iVar13 = WorldMapUtils::GetVisualMapEventStatus
                                           ((MapEventItem *)this_02,pPVar24);
                        if (iVar13 == 1) {
                          cVar4 = PVZ2UnchartedModeUtils::IsHardMode();
                          if ((cVar4 != '\0') &&
                             (cVar4 = PVZ2UnchartedModeUtils::IsAnniversarySelectLevel(),
                             cVar4 != '\0')) {
                            pMVar26 = (MapEventItem *)
                                      Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr()
                            ;
                            UnchartedModeNetworkMgr::ShowUnlockAnniversarySelectLevel(pMVar26);
                            goto LAB_04537638;
                          }
                          iVar13 = PVZ2UnchartedModeUtils::GetUnchartedWorldType();
                          if (iVar13 != 3) {
                            if ((*(long *)(this_00 + 0x2f0) != 0) &&
                               (bVar10 = std::operator==((string *)
                                                         (*(long *)(this_00 + 0x2f0) + 0x38),
                                                         "uncharted_tale_2_h"), bVar10)) {
                              psVar19 = (string *)
                                        std::
                                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        ::_M_rightmost(this_02);
                              bVar10 = std::operator==(psVar19,"uncharted_tale_h_15");
                              if (bVar10) {
                                std::string::string((string *)&local_50,"uncharted_tale_2");
                                cVar4 = PVZ2UnchartedModeUtils::CanTale2HardBossLevelUnlock
                                                  ((string *)&local_50,1);
                                std::string::~string((string *)&local_50);
                                nop();
                                this = gLawnApp;
                                if (cVar4 == '\0') {
                                  FUN_05478178(asStack_58,&DAT_056f11a8,awStack_68);
                                  FUN_05478178((string *)&local_50,
                                               L"[PVZ2_UNCHARTED_MODE_TALE_2_HARD_TIPS_DESC]",
                                               aLStack_60);
                                  pPVar27 = (PVZ2UIDialog *)
                                            LawnApp::ShowPVZ2Dialog
                                                      (this,(wstring *)asStack_58,
                                                       (wstring *)&local_50);
                                  FUN_05476c50((string *)&local_50);
                                  nop();
                                  FUN_05476c50(asStack_58);
                                  nop();
                                  FUN_05478178(asStack_58,L"[BUTTON_OK]",aLStack_60);
                                  Sexy::
                                  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                                            ((ReceivedDataCallback *)gLawnApp,
                                             LawnApp::KillPVZ2Dialog);
                                  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>
                                            (aDStack_38,(string *)&local_50);
                                  psVar22 = (string *)0x1;
                                  PVZ2UIDialog::AddButton(pPVar27,asStack_58,aDStack_38);
                                  FUN_05476c50(asStack_58);
                                  nop();
                                  goto LAB_04537638;
                                }
                              }
                            }
                            this_03 = (UnchartedModeNetworkMgr *)
                                      Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr()
                            ;
                            UnchartedModeNetworkMgr::ShowUnlockHardEvent
                                      (this_03,(MapEventItem *)this_02);
                            goto LAB_04537638;
                          }
                          std::string::string(asStack_58,"[REVIVE_TIP]");
                          __s = "[UNCHARTED_SPRING_FESTIVAL_2024_SELECT_LEVEL_LOCKED]";
                        }
                        else {
                          if (iVar13 < 2) goto LAB_04537638;
                          if ((iVar13 != 3) ||
                             (iVar13 = PVZ2UnchartedModeUtils::GetUnchartedWorldType(), iVar13 != 3)
                             ) {
                            doPVZ2UnchartedLevelPopup(this_00,(MapEventItem *)this_02);
                            goto LAB_04537638;
                          }
                          std::string::string(asStack_58,"[REVIVE_TIP]");
                          __s = "[UNCHARTED_WORLD_SPRING_FESTIVAL_2024_COMPLETE]";
                        }
                        std::string::string((string *)&local_50,__s);
                        PlantWarsUtils::ShowTipsDialog(asStack_58,(string *)&local_50);
                      }
                      else {
                        pPVar23 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
                        pPVar24 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar23);
                        iVar13 = WorldMapUtils::GetVisualMapEventStatus
                                           ((MapEventItem *)this_02,pPVar24);
                        if (0x7ffffffd < iVar13 - 2U) goto LAB_04537638;
                        cVar4 = PlantWarsUtils::IsOffSeason();
                        if (cVar4 == '\0') {
                          doPlantWarsLevelPopup(this_00,(MapEventItem *)this_02);
                          goto LAB_04537638;
                        }
                        std::string::string(asStack_58,"[REVIVE_TIP]");
                        std::string::string((string *)&local_50,"[PLANTWARS_LEVEL_OFFSEASON_DESC]");
                        PlantWarsUtils::ShowTipsDialog(asStack_58,(string *)&local_50);
                      }
                      std::string::~string((string *)&local_50);
                      nop();
                      std::string::~string(asStack_58);
                      nop();
                      goto LAB_04537638;
                    }
                  }
LAB_04537b3c:
                  uVar36 = *(undefined4 *)(this_02 + 0x14);
                  iVar13 = FUN_04528b48(uVar36);
LAB_045374fc:
                  cVar6 = FUN_04528b70(this_02[0xf1]);
                  cVar5 = '\0';
                  if (cVar6 != '\0') goto LAB_04537510;
LAB_04537528:
                  if (iVar13 - 3U < 2) {
                    iVar3 = *piVar17;
                    fVar40 = fVar37 + (float)iVar3;
                    if (fVar40 <= (float)iVar11) {
LAB_04537664:
                      iVar34 = piVar17[2];
                      if ((float)iVar11 <= fVar40 + (float)iVar34) {
                        psVar22 = (string *)(ulong)uVar12;
                        if ((fVar39 + (float)piVar17[1] <= (float)(int)uVar12) &&
                           ((float)(int)uVar12 <= fVar39 + (float)piVar17[1] + (float)piVar17[3])) {
                          MapPopupDialog::SetDialogType(*(MapPopupDialog **)(this_00 + 0x2a8),4);
                          pMVar31 = *(MapPopupDialog **)(this_00 + 0x2a8);
                          FUN_05478178(asStack_58,&DAT_056f11a8,(string *)aLStack_60);
                          Sexy::
                          MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                                    ((ReceivedDataCallback *)this_00,onGateCancelButtonPressed);
                          Sexy::Delegate0::Delegate0<WorldMap,void(WorldMap::*)()>
                                    (aDStack_38,(string *)&local_50);
                          MapPopupDialog::SetCancelButtonPressed(pMVar31,asStack_58,aDStack_38);
                          FUN_05476c50(asStack_58);
                          nop();
                          pMVar31 = *(MapPopupDialog **)(this_00 + 0x2a8);
                          TodStringTranslate(L"[VIEW_IN_ALMANAC]");
                          Sexy::
                          MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                                    ((ReceivedDataCallback *)this_00,
                                     SwitchToAlmanacFromPlantInfoPopup);
                          Sexy::Delegate0::Delegate0<WorldMap,void(WorldMap::*)()>
                                    (aDStack_38,(string *)&local_50);
                          std::string::string((string *)aLStack_60,"Play_UI_Menu_Almanac_Open_Press"
                                             );
                          std::string::string(asStack_58,"Play_UI_Button_Almanac_Open_Release");
                          psVar22 = (string *)aLStack_60;
                          local_a8 = asStack_58;
                          MapPopupDialog::SetConfirmButtonPressed(pMVar31,awStack_68,aDStack_38);
                          std::string::~string(asStack_58);
                          nop();
                          std::string::~string((string *)aLStack_60);
                          nop();
                          FUN_05476c50(awStack_68);
                          iVar13 = FUN_04528b48(*(undefined4 *)(this_02 + 0x14));
                          if (iVar13 == 4) {
                            pMVar31 = *(MapPopupDialog **)(this_00 + 0x2a8);
                            uVar32 = Sexy::FilesystemSaveGameContext::GetBuffer
                                               ((FilesystemSaveGameContext *)this_02);
                            FUN_05475d88((string *)aLStack_60,uVar32);
                            GameFeatureType::GetGameFeatureTypeFromUnlockString
                                      ((GameFeatureType *)asStack_58,(string *)aLStack_60);
                            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                                      ((RtWeakPtr<Sexy::SoundResource> *)&local_50,
                                       (RtWeakPtrBase *)asStack_58);
                            MapPopupDialog::SetRewardInfoData(pMVar31,(string *)&local_50,0);
                            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
                            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                                      ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
                            std::string::~string((string *)aLStack_60);
                          }
                          else {
                            pMVar31 = *(MapPopupDialog **)(this_00 + 0x2a8);
                            psVar19 = (string *)
                                      Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::
                                      GetInstancePtr();
                            Sexy::FilesystemSaveGameContext::GetBuffer
                                      ((FilesystemSaveGameContext *)this_02);
                            ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar19);
                            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                                      ((RtWeakPtr<Sexy::SoundResource> *)&local_50,
                                       (RtWeakPtrBase *)asStack_58);
                            MapPopupDialog::SetRewardInfoData(pMVar31,(string *)&local_50,0);
                            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
                            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                                      ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
                          }
                          showPopup(this_00,iVar1,iVar2);
                          if (((*(long *)(this_00 + 0x440) != 0) &&
                              (cVar4 = FUN_04528b70(this_02[0xf1]), cVar4 != '\0')) &&
                             (cVar4 = FUN_04528b7c(this_02[0xf2]), cVar4 != '\0')) {
                            *(undefined8 *)(this_00 + 0x440) = 0;
                            handleTutorialEnd(this_00,false);
                          }
                          goto LAB_04537638;
                        }
                      }
                      iVar13 = FUN_04528b48(*(undefined4 *)(this_02 + 0x14));
                      if (iVar13 == 0xd) {
                        fVar37 = fVar37 + (float)iVar3;
                        goto LAB_045376d4;
                      }
                      goto LAB_0453753c;
                    }
                  }
                  else if (iVar13 == 0xd) {
                    fVar37 = fVar37 + (float)*piVar17;
                    if (fVar37 <= (float)iVar11) {
                      iVar34 = piVar17[2];
LAB_045376d4:
                      if ((float)iVar11 <= fVar37 + (float)iVar34) {
                        if ((fVar39 + (float)piVar17[1] <= (float)(int)uVar12) &&
                           ((float)(int)uVar12 <= fVar39 + (float)piVar17[1] + (float)piVar17[3])) {
                          MapPopupDialog::SetDialogType(*(MapPopupDialog **)(this_00 + 0x2a8),6);
                          pwVar33 = *(wstring **)(this_00 + 0x2a8);
                          Sexy::ToWString((string *)(this_02 + 0x20));
                          TodStringTranslate((wstring *)asStack_58);
                          MapPopupDialog::SetHeader(pwVar33);
                          FUN_05476c50((string *)&local_50);
                          FUN_05476c50((wstring *)asStack_58);
                          pwVar33 = *(wstring **)(this_00 + 0x2a8);
                          Sexy::ToWString((string *)(this_02 + 0x28));
                          TodStringTranslate((wstring *)asStack_58);
                          MapPopupDialog::SetDescription(pwVar33);
                          FUN_05476c50((string *)&local_50);
                          FUN_05476c50((wstring *)asStack_58);
                          this_04 = *(hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                                      **)(this_00 + 0x2a8);
                          piVar17 = (int *)eastl::
                                           hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                                           ::get_allocator(this_04);
                          MapPopupDialog::SetHeight((MapPopupDialog *)this_04,*piVar17 << 1);
                          showPopup(this_00,iVar1,iVar2);
                          goto LAB_04537638;
                        }
                      }
                    }
                  }
                  else {
LAB_0453753c:
                    if (iVar13 == 0xc) {
                      if ((fVar37 + (float)*piVar17 <= (float)iVar11) &&
                         ((float)iVar11 <= fVar37 + (float)*piVar17 + (float)piVar17[2])) {
                        if ((fVar39 + (float)piVar17[1] <= (float)(int)uVar12) &&
                           ((float)(int)uVar12 <= fVar39 + (float)piVar17[1] + (float)piVar17[3])) {
                          MapPopupDialog::SetDialogType(*(MapPopupDialog **)(this_00 + 0x2a8),4);
                          pMVar31 = *(MapPopupDialog **)(this_00 + 0x2a8);
                          FUN_05478178(asStack_58,&DAT_056f11a8,aLStack_60);
                          Sexy::
                          MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                                    ((ReceivedDataCallback *)this_00,onGateCancelButtonPressed);
                          Sexy::Delegate0::Delegate0<WorldMap,void(WorldMap::*)()>
                                    (aDStack_38,(string *)&local_50);
                          MapPopupDialog::SetCancelButtonPressed(pMVar31,asStack_58,aDStack_38);
                          FUN_05476c50(asStack_58);
                          nop();
                          pMVar31 = *(MapPopupDialog **)(this_00 + 0x2a8);
                          TodStringTranslate(L"[BUTTON_OK]");
                          Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
                          std::string::string(asStack_58,"Play_UI_Menu_Almanac_Open_Press");
                          std::string::string((string *)&local_50,
                                              "Play_UI_Button_Almanac_Open_Release");
                          psVar22 = asStack_58;
                          local_a8 = (string *)&local_50;
                          MapPopupDialog::SetConfirmButtonPressed(pMVar31,aLStack_60,aDStack_38);
                          std::string::~string((string *)&local_50);
                          nop();
                          std::string::~string(asStack_58);
                          nop();
                          FUN_05476c50(aLStack_60);
                          pwVar33 = *(wstring **)(this_00 + 0x2a8);
                          TodStringTranslate(L"[GIFT_BOX_WORLDMAP_HEADER]");
                          MapPopupDialog::SetHeader(pwVar33);
                          FUN_05476c50((string *)&local_50);
                          pwVar33 = *(wstring **)(this_00 + 0x2a8);
                          TodStringTranslate(L"[GIFT_BOX_WORLDMAP_DESCRIPTION]");
                          MapPopupDialog::SetDescription(pwVar33);
                          FUN_05476c50((string *)&local_50);
                          showPopup(this_00,iVar1,iVar2);
                          goto LAB_04537638;
                        }
                      }
                    }
                    else if ((cVar5 != '\0') &&
                            (bVar7 = FUN_04528b7c(this_02[0xf2]), bVar7 < (iVar13 == 5))) {
                      if ((fVar37 + (float)*piVar17 <= (float)iVar11) &&
                         ((float)iVar11 <= fVar37 + (float)*piVar17 + (float)piVar17[2])) {
                        if ((fVar39 + (float)piVar17[1] <= (float)(int)uVar12) &&
                           ((float)(int)uVar12 <= fVar39 + (float)piVar17[1] + (float)piVar17[3])) {
                          if (*(long *)(this_00 + 0x440) != 0) {
                            *(undefined8 *)(this_00 + 0x440) = 0;
                            handleTutorialEnd(this_00,false);
                          }
                          pPVar23 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
                          pPVar24 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar23);
                          if (pPVar24 != (PlayerInfo *)0x0) {
                            uVar32 = std::
                                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     ::_M_rightmost(this_02);
                            psVar19 = (string *)
                                      Sexy::FilesystemSaveGameContext::GetBuffer
                                                ((FilesystemSaveGameContext *)this_02);
                            psVar22 = (string *)0x3;
                            local_a8 = (string *)0x1;
                            PlayerInfo::SetWorldMapEventStatus(pPVar24,uVar32,psVar19);
                            PlayerInfo::SetPowerupUnlockState(pPVar24,psVar19,true);
                            (**(code **)(*(long *)this_00 + 0x378))(this_00);
                          }
                          goto LAB_04537638;
                        }
                      }
                    }
                  }
LAB_0453731c:
                  uVar35 = uVar35 + 1;
                  goto LAB_045372c4;
                }
LAB_04537638:
              }
            }
          }
          else {
            lVar15 = LawnApp::GetWorldMap(gLawnApp);
            if ((lVar15 != 0) && (this_00[0x449] != (WorldMap)0x0)) {
              handleTutorialEnd(this_00,false);
            }
          }
        }
        else {
          FUN_04528bdc(this_00 + 0x20a,0);
          FUN_04528bd0(this_00 + 0x209,0);
        }
      }
    }
    else {
      (**(code **)(*(long *)this_00 + 0x268))(this_00);
      uVar36 = PVZ_T();
      *(undefined4 *)(this_00 + 0x340) = uVar36;
      *(undefined4 *)(this_00 + 0x344) = *(undefined4 *)(this_00 + 0x338);
      closeMapPopups(this_00);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap::TouchEnded(Sexy::Touch const&) */

void __thiscall WorldMap::TouchEnded(WorldMap *this,Touch *param_1)

{
  int iVar1;
  char cVar2;
  
  WorldMap_LuaButtonsDelegate::TouchEnded(param_1,*(int *)(this + 0x48),*(int *)(this + 0x4c));
  cVar2 = IsUserInputEnabled(this);
  if ((cVar2 == '\0') || (cVar2 = IsValidStateForInput(this), cVar2 == '\0')) {
    *(undefined8 *)(this + 600) = 0;
  }
  else if (*(long *)(this + 600) == *(long *)param_1) {
    iVar1 = *(int *)(param_1 + 0x10);
    *(undefined8 *)(this + 600) = 0;
    handleTouchEnded((int)this,iVar1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::getUpgradeImage(std::string const&) */

void WorldMap::getUpgradeImage(string *param_1)

{
  map<std::string,Sexy::RtWeakPtr<Sexy::Image>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<Sexy::Image>>>>
  *this;
  bool bVar1;
  long lVar2;
  RtWeakPtr<PowerPropertySheet> *this_00;
  string *in_x1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  undefined8 local_20;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  this = (map<std::string,Sexy::RtWeakPtr<Sexy::Image>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<Sexy::Image>>>>
          *)(param_1 + 0x2b8);
  local_8 = ___stack_chk_guard;
  local_20 = std::
             map<std::string,Sexy::RtWeakPtr<Sexy::Image>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<Sexy::Image>>>>
             ::find(this,in_x1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(lVar2 + 8));
  }
  else {
    FUN_05475d88((string *)&local_10);
    GameFeatureType::GetGameFeatureTypeFromUnlockString
              ((GameFeatureType *)aRStack_18,(string *)&local_10);
    std::string::~string((string *)&local_10);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    if (lVar2 == 0) {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
    }
    else {
      GameFeatureType::GetUpgradeImage();
      this_00 = (RtWeakPtr<PowerPropertySheet> *)
                std::
                map<std::string,Sexy::RtWeakPtr<Sexy::Image>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<Sexy::Image>>>>
                ::operator[](this,in_x1);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)&local_10);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)&local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::pushUIStateAndDisableAll() */

void __thiscall WorldMap::pushUIStateAndDisableAll(WorldMap *this)

{
  undefined1 uVar1;
  bool bVar2;
  undefined8 uVar3;
  UIWidget *this_00;
  undefined1 *puVar4;
  int extraout_w1;
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  RtId aRStack_38 [16];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<Sexy::RtName,bool,std::less<Sexy::RtName>,std::allocator<std::pair<Sexy::RtName_const,bool>>>
  ::clear((map<Sexy::RtName,bool,std::less<Sexy::RtName>,std::allocator<std::pair<Sexy::RtName_const,bool>>>
           *)(this + 0x1c0));
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x24);
  while (bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar2) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)aRStack_38);
    Sexy::RtId::~RtId(aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    nop();
    UIWidget::GetPropertySheetPtrName();
    puVar4 = (undefined1 *)
             std::
             map<Sexy::RtName,bool,std::less<Sexy::RtName>,std::allocator<std::pair<Sexy::RtName_const,bool>>>
             ::operator[]((map<Sexy::RtName,bool,std::less<Sexy::RtName>,std::allocator<std::pair<Sexy::RtName_const,bool>>>
                           *)(this + 0x1c0),(RtName *)aRStack_38);
    uVar1 = FUN_0452ad5c(*(undefined4 *)(this_00 + 0x68));
    *puVar4 = uVar1;
    Sexy::RtName::~RtName((RtName *)aRStack_38);
    UIWidget::SetClickable(this_00,false);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap::setCurrentMapEventItem(MapEventItem*) */

void __thiscall WorldMap::setCurrentMapEventItem(WorldMap *this,MapEventItem *param_1)

{
  if (*(long *)(this + 0x4c8) != 0) {
    *(undefined1 *)(*(long *)(this + 0x4c8) + 0x106) = 0;
  }
  *(MapEventItem **)(this + 0x4c8) = param_1;
  EditorClearSelectionGroup(this);
  if (*(long *)(this + 0x4c8) != 0) {
    *(undefined1 *)(*(long *)(this + 0x4c8) + 0x106) = 1;
    std::vector<MapEventItem*,std::allocator<MapEventItem*>>::push_back
              ((vector<MapEventItem*,std::allocator<MapEventItem*>> *)(this + 0xea8),
               (MapEventItem **)(this + 0x4c8));
    return;
  }
  return;
}


/* WorldMap::EditorAppendToSelectionGroup(MapEventItem*) */

void __thiscall WorldMap::EditorAppendToSelectionGroup(WorldMap *this,MapEventItem *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  MapEventItem *local_8;
  
  uVar4 = *(undefined8 *)(this + 0xea8);
  local_8 = param_1;
  lVar1 = FUN_04528ddc(uVar4,*(undefined8 *)(this + 0xeb0));
  lVar3 = 0;
  do {
    if (lVar3 == lVar1) {
      std::vector<MapEventItem*,std::allocator<MapEventItem*>>::push_back
                ((vector<MapEventItem*,std::allocator<MapEventItem*>> *)(this + 0xea8),&local_8);
      local_8[0x106] = (MapEventItem)0x1;
      return;
    }
    puVar2 = (undefined8 *)FUN_04528de8(uVar4,lVar3);
    lVar3 = lVar3 + 1;
  } while ((MapEventItem *)*puVar2 != param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::addToLoadingResourcesGroupList(std::string const&) */

void __thiscall WorldMap::addToLoadingResourcesGroupList(WorldMap *this,string *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x178);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                       (uVar2,uVar3,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    if (local_8 == ___stack_chk_guard) {
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)this_00,param_1);
      return;
    }
  }
  else if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::StartLoad() */

void __thiscall WorldMap::StartLoad(WorldMap *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = hasRequiredResources(this);
  if (cVar2 == '\0') {
    cVar2 = IsInState(this,0);
    if (cVar2 != '\0') {
      pvVar1 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                *)(this + 0x178);
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(pvVar1);
      uVar6 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(pvVar1);
      local_38 = FUN_0452fff4(uVar5,uVar6);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_28,(__normal_iterator *)&local_38);
      local_30 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(pvVar1);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)local_20,(__normal_iterator *)&local_30);
      std::vector<std::string,std::allocator<std::string>>::erase
                ((vector<std::string,std::allocator<std::string>> *)pvVar1,local_28,local_20[0]);
    }
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 400));
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 400));
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar3)
    {
      lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
      pvVar1 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                *)(lVar4 + 8);
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(pvVar1);
      uVar6 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(pvVar1);
      local_38 = FUN_0452fff4(uVar5,uVar6);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_28,(__normal_iterator *)&local_38);
      local_30 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(pvVar1);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)local_20,(__normal_iterator *)&local_30);
      std::vector<std::string,std::allocator<std::string>>::erase
                ((vector<std::string,std::allocator<std::string>> *)pvVar1,local_28,local_20[0]);
      std::move_iterator<SexyURL::KeyedValue*>::operator++
                ((move_iterator<SexyURL::KeyedValue*> *)&local_48);
    }
  }
  else {
    cVar2 = IsInState(this,0);
    if (cVar2 != '\0') {
      cVar2 = std::vector<std::string,std::allocator<std::string>>::empty
                        ((vector<std::string,std::allocator<std::string>> *)(this + 0x178));
      if (cVar2 == '\0') {
        LawnApp::PrepareLoadGroups(gLawnApp,(vector *)(this + 0x178));
      }
    }
    if (*(UniverseMap **)(this + 0x2b0) != (UniverseMap *)0x0) {
      UniverseMap::PrepForLoading(*(UniverseMap **)(this + 0x2b0));
      nop();
    }
    cVar2 = std::vector<WorldResourceLoadState,std::allocator<WorldResourceLoadState>>::empty
                      ((vector<WorldResourceLoadState,std::allocator<WorldResourceLoadState>> *)
                       (this + 400));
    if (cVar2 == '\0') {
      uVar8 = 0;
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
      uVar5 = *(undefined8 *)(this + 400);
      uVar7 = FUN_04528df8(uVar5,*(undefined8 *)(this + 0x198));
      if (uVar7 != 0) {
        do {
          lVar4 = FUN_04528e04(uVar5,uVar8);
          if (*(int *)(lVar4 + 4) == 1) {
            local_30 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)local_20);
            __gnu_cxx::
            __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
            ::__normal_iterator<Sexy::RenderStateManager::Context**>
                      ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                        *)&local_28,(__normal_iterator *)&local_30);
            lVar4 = FUN_04528e04(*(undefined8 *)(this + 400),uVar8);
            uVar5 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)(lVar4 + 8));
            lVar4 = FUN_04528e04(*(undefined8 *)(this + 400),uVar8);
            uVar6 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(lVar4 + 8));
            std::vector<std::string,std::allocator<std::string>>::
            insert<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,void>
                      ((vector<std::string,std::allocator<std::string>> *)local_20,local_28,uVar5,
                       uVar6);
            uVar5 = *(undefined8 *)(this + 400);
            lVar4 = FUN_04528e04(uVar5,uVar8);
            *(undefined4 *)(lVar4 + 4) = 2;
            uVar7 = FUN_04528df8(uVar5,*(undefined8 *)(this + 0x198));
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar7);
      }
      LawnApp::PrepareLoadGroups(gLawnApp,(vector *)local_20);
      std::vector<std::string,std::allocator<std::string>>::~vector
                ((vector<std::string,std::allocator<std::string>> *)local_20);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WorldMap::onEnterState_Loading(WorldMapState) */

void WorldMap::onEnterState_Loading(WorldMap *param_1)

{
  BusyAnimationManager::StartBusyIcon(*(BusyAnimationManager **)(gLawnApp + 0x28d0));
  gatherRequiredResourcesFromMapEvents();
  StartLoad(param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::onEnterState_BackgroundLoading(WorldMapState) */

void WorldMap::onEnterState_BackgroundLoading(WorldMap *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 auStack_20 [3];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  cVar2 = hasRequiredResources(param_1);
  if (cVar2 == '\0') {
    cVar2 = IsInState(param_1,0);
    if (cVar2 != '\0') {
      pvVar1 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                *)(param_1 + 0x178);
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(pvVar1);
      uVar6 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(pvVar1);
      uStack_38 = FUN_0452fff4(uVar5,uVar6);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&uStack_28,(__normal_iterator *)&uStack_38);
      uStack_30 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(pvVar1);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)auStack_20,(__normal_iterator *)&uStack_30);
      std::vector<std::string,std::allocator<std::string>>::erase
                ((vector<std::string,std::allocator<std::string>> *)pvVar1,uStack_28,auStack_20[0]);
    }
    uStack_48 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(param_1 + 400));
    uStack_40 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(param_1 + 400));
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&uStack_48,(__normal_iterator *)&uStack_40),
          bVar3) {
      lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_48);
      pvVar1 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                *)(lVar4 + 8);
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(pvVar1);
      uVar6 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(pvVar1);
      uStack_38 = FUN_0452fff4(uVar5,uVar6);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&uStack_28,(__normal_iterator *)&uStack_38);
      uStack_30 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(pvVar1);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)auStack_20,(__normal_iterator *)&uStack_30);
      std::vector<std::string,std::allocator<std::string>>::erase
                ((vector<std::string,std::allocator<std::string>> *)pvVar1,uStack_28,auStack_20[0]);
      std::move_iterator<SexyURL::KeyedValue*>::operator++
                ((move_iterator<SexyURL::KeyedValue*> *)&uStack_48);
    }
  }
  else {
    cVar2 = IsInState(param_1,0);
    if (cVar2 != '\0') {
      cVar2 = std::vector<std::string,std::allocator<std::string>>::empty
                        ((vector<std::string,std::allocator<std::string>> *)(param_1 + 0x178));
      if (cVar2 == '\0') {
        LawnApp::PrepareLoadGroups(gLawnApp,(vector *)(param_1 + 0x178));
      }
    }
    if (*(UniverseMap **)(param_1 + 0x2b0) != (UniverseMap *)0x0) {
      UniverseMap::PrepForLoading(*(UniverseMap **)(param_1 + 0x2b0));
      nop();
    }
    cVar2 = std::vector<WorldResourceLoadState,std::allocator<WorldResourceLoadState>>::empty
                      ((vector<WorldResourceLoadState,std::allocator<WorldResourceLoadState>> *)
                       (param_1 + 400));
    if (cVar2 == '\0') {
      uVar8 = 0;
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)auStack_20);
      uVar5 = *(undefined8 *)(param_1 + 400);
      uVar7 = FUN_04528df8(uVar5,*(undefined8 *)(param_1 + 0x198));
      if (uVar7 != 0) {
        do {
          lVar4 = FUN_04528e04(uVar5,uVar8);
          if (*(int *)(lVar4 + 4) == 1) {
            uStack_30 = std::
                        vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                               *)auStack_20);
            __gnu_cxx::
            __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
            ::__normal_iterator<Sexy::RenderStateManager::Context**>
                      ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                        *)&uStack_28,(__normal_iterator *)&uStack_30);
            lVar4 = FUN_04528e04(*(undefined8 *)(param_1 + 400),uVar8);
            uVar5 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)(lVar4 + 8));
            lVar4 = FUN_04528e04(*(undefined8 *)(param_1 + 400),uVar8);
            uVar6 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(lVar4 + 8));
            std::vector<std::string,std::allocator<std::string>>::
            insert<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,void>
                      ((vector<std::string,std::allocator<std::string>> *)auStack_20,uStack_28,uVar5
                       ,uVar6);
            uVar5 = *(undefined8 *)(param_1 + 400);
            lVar4 = FUN_04528e04(uVar5,uVar8);
            *(undefined4 *)(lVar4 + 4) = 2;
            uVar7 = FUN_04528df8(uVar5,*(undefined8 *)(param_1 + 0x198));
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar7);
      }
      LawnApp::PrepareLoadGroups(gLawnApp,(vector *)auStack_20);
      std::vector<std::string,std::allocator<std::string>>::~vector
                ((vector<std::string,std::allocator<std::string>> *)auStack_20);
    }
  }
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::CompleteLoad() */

void __thiscall WorldMap::CompleteLoad(WorldMap *this)

{
  int iVar1;
  char cVar2;
  ProfileMgr *this_00;
  PlayerInfo *pPVar3;
  WorldMapActivityBtnTurnChangeManager *this_01;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  int *piVar7;
  WorldDataManager *this_02;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 local_30;
  undefined8 local_28;
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = IsInState(this,0);
  if (cVar2 != '\0') {
    cVar2 = std::vector<std::string,std::allocator<std::string>>::empty
                      ((vector<std::string,std::allocator<std::string>> *)(this + 0x178));
    if (cVar2 == '\0') {
      LawnApp::FinalizeGroupLoads(gLawnApp,(vector *)(this + 0x178));
    }
  }
  cVar2 = std::vector<WorldResourceLoadState,std::allocator<WorldResourceLoadState>>::empty
                    ((vector<WorldResourceLoadState,std::allocator<WorldResourceLoadState>> *)
                     (this + 400));
  if (cVar2 == '\0') {
    uVar8 = 0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_20);
    uVar9 = *(undefined8 *)(this + 400);
    uVar4 = FUN_04528df8(uVar9,*(undefined8 *)(this + 0x198));
    if (uVar4 != 0) {
      do {
        lVar5 = FUN_04528e04(uVar9,uVar8);
        if (*(int *)(lVar5 + 4) == 2) {
          *(undefined4 *)(lVar5 + 4) = 4;
          local_30 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)asStack_20);
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_28,(__normal_iterator *)&local_30);
          lVar5 = FUN_04528e04(*(undefined8 *)(this + 400),uVar8);
          uVar9 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(lVar5 + 8));
          lVar5 = FUN_04528e04(*(undefined8 *)(this + 400),uVar8);
          uVar6 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(lVar5 + 8));
          std::vector<std::string,std::allocator<std::string>>::
          insert<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,void>
                    ((vector<std::string,std::allocator<std::string>> *)asStack_20,local_28,uVar9,
                     uVar6);
          piVar7 = (int *)FUN_04528e04(*(undefined8 *)(this + 400),uVar8);
          iVar1 = *piVar7;
          this_02 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
          lVar5 = WorldDataManager::GetWorldDataByIndexInMapList(this_02,iVar1);
          uVar9 = *(undefined8 *)(this + 400);
          uVar6 = *(undefined8 *)(this + 0x198);
          *(undefined1 *)(*(long *)(lVar5 + 0xb0) + 0x50) = 1;
          uVar4 = FUN_04528df8(uVar9,uVar6);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar4);
    }
    LawnApp::FinalizeGroupLoads(gLawnApp,(vector *)asStack_20);
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)asStack_20);
  }
  cVar2 = IsInState(this,0);
  if (cVar2 == '\0') {
    (**(code **)(*(long *)this + 0x3b8))(this,3);
  }
  else {
    (**(code **)(*(long *)this + 0x3b8))(this,1);
  }
  std::string::string(asStack_20,"egypt3");
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  cVar2 = ProfileUtils::HasCompletedLevel(asStack_20,false,pPVar3);
  std::string::~string(asStack_20);
  nop();
  if (cVar2 != '\0') {
    this_01 = (WorldMapActivityBtnTurnChangeManager *)
              Sexy::LazySingleton<WorldMapActivityBtnTurnChangeManager>::GetInstancePtr();
    WorldMapActivityBtnTurnChangeManager::initButtonTurn(this_01);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WorldMap::updateState_Loading() */

void __thiscall WorldMap::updateState_Loading(WorldMap *this)

{
  char cVar1;
  
  cVar1 = hasRequiredResources(this);
  if (cVar1 == '\0') {
    GameStateMgr::ShowLogoScreen(gGameStateMgr);
    return;
  }
  cVar1 = checkLoadComplete(this);
  if (cVar1 == '\0') {
    return;
  }
  CompleteLoad(this);
  return;
}


/* WorldMap::updateState_BackgroundLoading() */

void __thiscall WorldMap::updateState_BackgroundLoading(WorldMap *this)

{
  char cVar1;
  
  StartLoad(this);
  cVar1 = checkLoadComplete(this);
  if (cVar1 == '\0') {
    (**(code **)(*(long *)this + 0x428))(this);
    return;
  }
  CompleteLoad(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::addToLoadedWorldResourcesGroupList(int) */

void __thiscall WorldMap::addToLoadedWorldResourcesGroupList(WorldMap *this,int param_1)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  long lVar4;
  int *piVar5;
  WorldDataManager *this_00;
  WorldMapList *this_01;
  string *psVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  string asStack_30 [8];
  int local_28 [2];
  vector<std::string,std::allocator<std::string>> avStack_20 [24];
  long local_8;
  
  uVar9 = *(undefined8 *)(this + 400);
  local_8 = ___stack_chk_guard;
  lVar4 = FUN_04528df8(uVar9,*(undefined8 *)(this + 0x198));
  for (lVar8 = 0; lVar8 != lVar4; lVar8 = lVar8 + 1) {
    piVar5 = (int *)FUN_04528e04(uVar9,lVar8);
    if (*piVar5 == param_1) goto LAB_0453a0e8;
  }
  uVar10 = 0;
  PlantWarsStarRewardData::PlantWarsStarRewardData((PlantWarsStarRewardData *)local_28);
  local_28[0] = param_1;
  this_00 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
  lVar8 = WorldDataManager::GetWorldDataByIndexInMapList(this_00,param_1);
  std::vector<std::string,std::allocator<std::string>>::operator=
            (avStack_20,(vector *)(lVar8 + 0x90));
  this_01 = (WorldMapList *)WorldMapUtils::GetWorldMapList();
  lVar4 = WorldMapList::GetMapListNodeByName(this_01,(string *)(lVar8 + 0x38));
  cVar2 = *(char *)(lVar4 + 0xa8);
  cVar3 = *(char *)(lVar4 + 0xa9);
  uVar9 = *(undefined8 *)(*(long *)(lVar8 + 0xb0) + 0x10);
  lVar4 = FUN_04528e0c(uVar9,*(undefined8 *)(*(long *)(lVar8 + 0xb0) + 0x18));
  if (lVar4 != 0) {
    do {
      psVar6 = (string *)FUN_04528df0(uVar9,uVar10);
      std::vector<std::string,std::allocator<std::string>>::push_back(avStack_20,psVar6);
      if (cVar2 != '\0') {
        if ((int)cVar3 == 0) {
          uVar7 = 1;
          if (0 < cVar2) {
            do {
              uVar9 = FUN_0547429c(psVar6);
              uVar1 = (int)uVar7 + 1;
              Sexy::StrFormat("%s_Part%d",asStack_30,uVar9,uVar7);
              std::vector<std::string,std::allocator<std::string>>::push_back(avStack_20,asStack_30)
              ;
              std::string::~string(asStack_30);
              uVar7 = (ulong)uVar1;
            } while ((int)uVar1 <= (int)cVar2);
          }
        }
        else {
          uVar9 = FUN_0547429c(psVar6);
          Sexy::StrFormat("%s_Part%d",asStack_30,uVar9,(ulong)(uint)(int)cVar3);
          std::vector<std::string,std::allocator<std::string>>::push_back(avStack_20,asStack_30);
          std::string::~string(asStack_30);
        }
      }
      uVar10 = uVar10 + 1;
      uVar9 = *(undefined8 *)(*(long *)(lVar8 + 0xb0) + 0x10);
      uVar7 = FUN_04528e0c(uVar9,*(undefined8 *)(*(long *)(lVar8 + 0xb0) + 0x18));
    } while (uVar10 < uVar7);
  }
  local_28[1] = 1;
  std::vector<WorldResourceLoadState,std::allocator<WorldResourceLoadState>>::push_back
            ((vector<WorldResourceLoadState,std::allocator<WorldResourceLoadState>> *)(this + 400),
             (WorldResourceLoadState *)local_28);
  WorldResourceLoadState::~WorldResourceLoadState((WorldResourceLoadState *)local_28);
LAB_0453a0e8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::unloadFromLoadedWorldResourcesGroupList(int) */

void __thiscall WorldMap::unloadFromLoadedWorldResourcesGroupList(WorldMap *this,int param_1)

{
  long lVar1;
  int *piVar2;
  WorldDataManager *this_00;
  WorldData *this_01;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar4 = *(undefined8 *)(this + 400);
  lVar3 = 0;
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_04528df8(uVar4,*(undefined8 *)(this + 0x198));
  do {
    if (lVar3 == lVar1) {
LAB_0453a488:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    piVar2 = (int *)FUN_04528e04(uVar4,lVar3);
    if (*piVar2 == param_1) {
      LawnApp::DeleteGroups(gLawnApp,(vector *)(piVar2 + 2));
      local_20 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(this + 400));
      local_18 = __gnu_cxx::
                 __normal_iterator<Sexy::StructuredData::Value*,std::vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>>>
                 ::operator+((__normal_iterator<Sexy::StructuredData::Value*,std::vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>>>
                              *)&local_20,lVar3);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      std::vector<WorldResourceLoadState,std::allocator<WorldResourceLoadState>>::erase
                ((vector<WorldResourceLoadState,std::allocator<WorldResourceLoadState>> *)
                 (this + 400),local_10);
      this_00 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
      this_01 = (WorldData *)WorldDataManager::GetWorldDataByIndexInMapList(this_00,param_1);
      WorldData::DeletePopAnimRigData(this_01);
      *(undefined1 *)(*(long *)(this_01 + 0xb0) + 0x50) = 0;
      std::vector<WorldMapAsset,std::allocator<WorldMapAsset>>::clear
                ((vector<WorldMapAsset,std::allocator<WorldMapAsset>> *)(this_01 + 0x60));
      goto LAB_0453a488;
    }
    lVar3 = lVar3 + 1;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::syncMapResourceGrid(unsigned short) */

void __thiscall WorldMap::syncMapResourceGrid(WorldMap *this,ushort param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  long lVar11;
  uint *puVar12;
  ulong *puVar13;
  undefined4 *puVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  uint uVar21;
  undefined8 local_50;
  ulong local_48;
  ulong local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar21 = (uint)param_1;
  lVar6 = WorldMapUtils::GetWorldMapList();
  lVar20 = gLawnApp;
  iVar4 = FUN_04529720((int)*(float *)(this + 0x210) + *(int *)(gLawnApp + 0x724) / 2);
  iVar5 = FUN_04529720((int)*(float *)(this + 0x214) + *(int *)(lVar20 + 0x728) / 2);
  iVar4 = (iVar4 - *(int *)(lVar6 + 0x40)) / 600 +
          ((iVar5 - *(int *)(lVar6 + 0x44)) / 600) * *(int *)(lVar6 + 0x38);
  cVar3 = IsInState(this,4);
  if ((((cVar3 != '\0') || (cVar3 = IsInState(this,0), cVar3 != '\0')) ||
      (cVar3 = IsInState(this,1), cVar3 != '\0')) &&
     (((*(int *)(this + 0x2e8) != iVar4 || (uVar21 != 0xffff)) || (this[0x2f8] != (WorldMap)0x0))))
  {
    this[0x2f8] = (WorldMap)0x0;
    uVar16 = 0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    uVar17 = *(undefined8 *)(this + 400);
    uVar7 = FUN_04528df8(uVar17,*(undefined8 *)(this + 0x198));
    if (uVar7 != 0) {
      do {
        piVar8 = (int *)FUN_04528e04(uVar17,uVar16);
        if (piVar8[1] == 4) {
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)&local_20,piVar8);
          uVar17 = *(undefined8 *)(this + 400);
          uVar7 = FUN_04528df8(uVar17,*(undefined8 *)(this + 0x198));
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < uVar7);
    }
    uVar7 = 0;
    puVar9 = (undefined8 *)FUN_04528e44(*(undefined8 *)(lVar6 + 0x20),(long)iVar4);
    uVar17 = *puVar9;
    uVar16 = FUN_04528c7c(uVar17,puVar9[1]);
    if (uVar16 != 0) {
LAB_0453a6e4:
      pbVar10 = (byte *)FUN_04528c84(uVar17,uVar7);
      uVar15 = (uint)*pbVar10;
      if (uVar21 != 0xffff) {
        uVar7 = uVar16;
        uVar15 = uVar21;
      }
      uVar18 = *(undefined8 *)(this + 400);
      lVar11 = FUN_04528df8(uVar18,*(undefined8 *)(this + 0x198));
      for (lVar20 = 0; lVar20 != lVar11; lVar20 = lVar20 + 1) {
        puVar12 = (uint *)FUN_04528e04(uVar18,lVar20);
        uVar2 = local_20;
        if (*puVar12 == uVar15) {
          iVar5 = FUN_04528c8c(local_20,local_18);
          iVar5 = iVar5 + -1;
          if (iVar5 < 0) goto LAB_0453a778;
          lVar20 = (long)iVar5;
          goto LAB_0453a928;
        }
      }
      local_40 = CONCAT44(local_40._4_4_,uVar15);
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)&local_38,(int *)&local_40);
LAB_0453a75c:
      puVar9 = (undefined8 *)FUN_04528e44(*(undefined8 *)(lVar6 + 0x20),(long)iVar4);
      uVar17 = *puVar9;
      uVar16 = FUN_04528c7c(uVar17,puVar9[1]);
      goto LAB_0453a778;
    }
LAB_0453a788:
    uVar17 = local_38;
    uVar7 = FUN_04528c8c(local_38,local_30);
    local_48 = uVar7;
    if (uVar7 != 0) {
      uVar16 = 0;
      iVar5 = FUN_04528df8(*(undefined8 *)(this + 400),*(undefined8 *)(this + 0x198));
      if ((ulong)(long)(1 - iVar5) < uVar7) {
        local_40 = FUN_04528c8c(local_20,local_18);
        uVar16 = 0;
        while( true ) {
          puVar13 = eastl::min_alt<unsigned_long>(&local_48,&local_40);
          if (*puVar13 <= uVar16) break;
          piVar8 = (int *)FUN_04528ca4(local_20,uVar16);
          unloadFromLoadedWorldResourcesGroupList(this,*piVar8);
          uVar16 = uVar16 + 1;
        }
        uVar19 = (ulong)(int)uVar16;
        if ((int)uVar16 == 0) {
          uVar19 = 0;
        }
        else {
          uVar16 = 0;
          do {
            uVar1 = uVar16 + 1;
            puVar14 = (undefined4 *)FUN_04528ca4(local_38,uVar16);
            (**(code **)(*(long *)this + 0x3b0))(this,*puVar14);
            uVar16 = uVar1;
          } while (uVar1 != uVar19);
        }
        if (uVar19 < uVar7) {
          this[0x2f8] = (WorldMap)0x1;
        }
        cVar3 = IsInState(this,0);
      }
      else {
        for (; uVar16 < uVar7; uVar16 = uVar16 + 1) {
          puVar14 = (undefined4 *)FUN_04528ca4(uVar17,uVar16);
          (**(code **)(*(long *)this + 0x3b0))(this,*puVar14);
          uVar17 = local_38;
          uVar7 = FUN_04528c8c(local_38,local_30);
        }
        cVar3 = IsInState(this,0);
      }
      if (cVar3 == '\0') {
        (**(code **)(*(long *)this + 0x3b8))(this,2);
      }
    }
    *(int *)(this + 0x2e8) = iVar4;
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_20);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
  while( true ) {
    iVar5 = iVar5 + -1;
    lVar20 = lVar20 + -1;
    if (iVar5 == -1) break;
LAB_0453a928:
    puVar12 = (uint *)FUN_04528ca4(uVar2,lVar20);
    if (*puVar12 == uVar15) {
      local_50 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_20);
      local_48 = __gnu_cxx::__normal_iterator<wchar_t*,std::vector<wchar_t,std::allocator<wchar_t>>>
                 ::operator+((__normal_iterator<wchar_t*,std::vector<wchar_t,std::allocator<wchar_t>>>
                              *)&local_50,(long)iVar5);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_40,(__normal_iterator *)&local_48);
      std::vector<int,std::allocator<int>>::erase
                ((vector<int,std::allocator<int>> *)&local_20,local_40);
      goto LAB_0453a75c;
    }
  }
LAB_0453a778:
  uVar7 = uVar7 + 1;
  if (uVar16 <= uVar7) goto LAB_0453a788;
  goto LAB_0453a6e4;
}


/* WorldMap::UnloadResources() */

void __thiscall WorldMap::UnloadResources(WorldMap *this)

{
  vector<std::string,std::allocator<std::string>> *this_00;
  uint uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  if (*(UniverseMap **)(this + 0x2b0) != (UniverseMap *)0x0) {
    UniverseMap::UnloadResources(*(UniverseMap **)(this + 0x2b0));
  }
  this_00 = (vector<std::string,std::allocator<std::string>> *)(this + 0x178);
  cVar2 = std::vector<std::string,std::allocator<std::string>>::empty(this_00);
  if (cVar2 == '\0') {
    LawnApp::DeleteGroups(gLawnApp,(vector *)this_00);
    std::vector<std::string,std::allocator<std::string>>::clear(this_00);
  }
  cVar2 = std::vector<WorldResourceLoadState,std::allocator<WorldResourceLoadState>>::empty
                    ((vector<WorldResourceLoadState,std::allocator<WorldResourceLoadState>> *)
                     (this + 400));
  if (cVar2 == '\0') {
    uVar6 = *(undefined8 *)(this + 400);
    iVar3 = FUN_04528df8(uVar6,*(undefined8 *)(this + 0x198));
    uVar1 = iVar3 - 1;
    if (-1 < (int)uVar1) {
      lVar7 = (long)(int)uVar1 + -1;
      lVar5 = (long)(int)uVar1;
      lVar8 = lVar7;
      while( true ) {
        piVar4 = (int *)FUN_04528e04(uVar6,lVar5);
        unloadFromLoadedWorldResourcesGroupList(this,*piVar4);
        if (lVar8 == lVar7 - (ulong)uVar1) break;
        uVar6 = *(undefined8 *)(this + 400);
        lVar5 = lVar8;
        lVar8 = lVar8 + -1;
      }
    }
    std::vector<WorldResourceLoadState,std::allocator<WorldResourceLoadState>>::clear
              ((vector<WorldResourceLoadState,std::allocator<WorldResourceLoadState>> *)(this + 400)
              );
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::SetEditorEnabled(bool) */

void __thiscall WorldMap::SetEditorEnabled(WorldMap *this,bool param_1)

{
  bool bVar1;
  undefined1 uVar2;
  WorldMapEditorFactory *this_00;
  long lVar3;
  UIWidget *this_01;
  undefined8 uVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (WorldMapEditorFactory *)Sexy::LazySingleton<WorldMapEditorFactory>::GetInstance();
  WorldMapEditorFactory::SetEditorEnabled(this_00,param_1);
  lVar3 = FUN_0452e2ac(*(long *)(this + 0x2f0) + 0x38);
  bVar1 = '\x01' < *(char *)(lVar3 + 0xa8);
  if (!param_1) {
    if (bVar1) {
      uVar2 = *(undefined1 *)(*(long *)(this + 0x2f0) + 0x5c);
      *(WorldMap *)(lVar3 + 0xa9) = this[0xedc];
      this[0xedc] = (WorldMap)param_1;
      unloadFromLoadedWorldResourcesGroupList
                (this,(uint)*(ushort *)(*(long *)(this + 0x2f0) + 0x48));
      syncMapResourceGrid(this,*(ushort *)(*(long *)(this + 0x2f0) + 0x48));
      *(undefined8 *)(this + 0x4b8) = 0;
      WorldMapUtils::LoadWorldMapData();
      gatherRequiredResourcesFromMapEvents();
      uVar4 = FUN_04528a20(uVar2);
      *(undefined8 *)(this + 0x2f0) = uVar4;
    }
    *(undefined4 *)(this + 0x474) = 0;
    goto LAB_0453abac;
  }
  if (bVar1) {
    this[0xedc] = *(WorldMap *)(lVar3 + 0xa9);
    *(undefined1 *)(lVar3 + 0xa9) = 0;
    unloadFromLoadedWorldResourcesGroupList(this,(uint)*(ushort *)(*(long *)(this + 0x2f0) + 0x48));
    lVar3 = *(long *)(this + 0x2f0);
    if (lVar3 != 0) goto LAB_0453ab78;
LAB_0453ac0c:
    lVar3 = 0;
    *(undefined4 *)(this + 0x474) = 1;
  }
  else {
    lVar3 = *(long *)(this + 0x2f0);
    if (lVar3 == 0) goto LAB_0453ac0c;
LAB_0453ab78:
    (**(code **)(*(long *)this + 0x350))(this,lVar3 + 0x38);
    *(undefined4 *)(this + 0x474) = 0;
    lVar3 = *(long *)(this + 0x2f0);
  }
  syncMapResourceGrid(this,*(ushort *)(lVar3 + 0x48));
LAB_0453abac:
  std::string::string(asStack_10,"UIScreen");
  this_01 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  UIWidget::SetVisible(this_01,!param_1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x0453b47c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WorldMap::Draw(Sexy::Graphics*) */

void __thiscall WorldMap::Draw(WorldMap *this,Graphics *param_1)

{
  string *psVar1;
  ParallaxCache *this_00;
  char cVar2;
  bool bVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var7;
  long *plVar8;
  WorldDataManager *pWVar9;
  long lVar10;
  long lVar11;
  MapEventItem *pMVar12;
  ulong uVar13;
  rbtree_node *prVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  wchar16 *pwVar17;
  undefined4 *puVar18;
  Delegate1wRet<bool,SexyURL_const&> *this_01;
  int *piVar19;
  float *pfVar20;
  Image *pIVar21;
  FilesystemSaveGameContext *this_02;
  GraphicsAutoState *pGVar22;
  LineBreakCategory *pLVar23;
  int iVar24;
  ParallaxCache *pPVar25;
  ulong uVar26;
  undefined8 uVar27;
  WorldMapCamera *this_03;
  float fVar28;
  undefined4 uVar29;
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  GraphicsAutoState aGStack_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50 [4];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_28 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar28 = (float)PVZ_EOT();
  if (*(float *)(this + 0xee0) == fVar28) {
    uVar29 = PVZ_T();
    *(undefined4 *)(this + 0xee0) = uVar29;
  }
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_68,param_1);
  WorldMapCamera::SetGraphics(*(WorldMapCamera **)(this + 0x328),param_1);
  Sexy::Graphics::TranslateF(param_1,-*(float *)(this + 0x210),-*(float *)(this + 0x214));
  p_Var7 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::LazySingleton<WorldMapEditorFactory>::GetInstance();
  plVar8 = (long *)std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_end(p_Var7);
  (**(code **)(*plVar8 + 0x18))
            (plVar8,param_1,(int)*(float *)(this + 0x210),(int)*(float *)(this + 0x214),
             *(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  if (*(long *)(this + 0x2f0) != 0) {
    psVar1 = (string *)(*(long *)(this + 0x2f0) + 0x38);
    cVar2 = FUN_0547419c(psVar1);
    if ((cVar2 == '\0') &&
       ((((cVar2 = WorldMapUtils::IsPVZ1World(psVar1), cVar2 != '\0' ||
          (cVar2 = WorldMapUtils::IsUnchartedWorld((string *)(*(long *)(this + 0x2f0) + 0x38)),
          cVar2 != '\0')) ||
         (cVar2 = WorldMapUtils::IsCardGameWorld((string *)(*(long *)(this + 0x2f0) + 0x38)),
         cVar2 != '\0')) ||
        (cVar2 = WorldMapUtils::IsPlantWarsWorld((string *)(*(long *)(this + 0x2f0) + 0x38)),
        cVar2 != '\0')))) {
      cVar2 = WorldMapUtils::IsPVZ1World((string *)(*(long *)(this + 0x2f0) + 0x38));
      if (cVar2 != '\0') {
        DrawSpaceSpiralSpecial(param_1);
        goto LAB_0453b050;
      }
      cVar2 = WorldMapUtils::IsCardGameWorld((string *)(*(long *)(this + 0x2f0) + 0x38));
      if (cVar2 == '\0') {
        cVar2 = WorldMapUtils::IsUnchartedWorld((string *)(*(long *)(this + 0x2f0) + 0x38));
        if (cVar2 == '\0') {
          cVar2 = WorldMapUtils::IsPlantWarsWorld((string *)(*(long *)(this + 0x2f0) + 0x38));
          if (cVar2 == '\0') goto LAB_0453b050;
          Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)local_28,param_1);
          *(undefined4 *)(param_1 + 0x10) = 0;
          *(undefined4 *)(param_1 + 0x14) = 0;
          iVar24 = *(int *)(gLawnApp + 0x724);
          iVar5 = *(int *)(gLawnApp + 0x728);
          lVar10 = CachedResourcePtr<Sexy::Image>::operator->
                             ((CachedResourcePtr<Sexy::Image> *)&DAT_06b0ffb0);
          iVar6 = *(int *)(lVar10 + 0x38);
          lVar10 = CachedResourcePtr<Sexy::Image>::operator->
                             ((CachedResourcePtr<Sexy::Image> *)&DAT_06b0ffb0);
          fVar28 = (float)iVar6 / (float)*(int *)(lVar10 + 0x3c);
          if ((float)iVar24 / (float)iVar5 <= fVar28) {
            fVar28 = fVar28 * (float)*(int *)(gLawnApp + 0x728);
            pIVar21 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                         ((CachedResourcePtr<Sexy::Image> *)&DAT_06b0ffb0);
            iVar24 = (int)fVar28;
            goto LAB_0453bd7c;
          }
          fVar28 = (float)*(int *)(gLawnApp + 0x724) / fVar28;
          pIVar21 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                       ((CachedResourcePtr<Sexy::Image> *)&DAT_06b0ffb0);
          Sexy::Graphics::DrawImage
                    (param_1,pIVar21,0,(int)(((float)*(int *)(gLawnApp + 0x728) - fVar28) * 0.5),
                     *(int *)(gLawnApp + 0x724),(int)fVar28);
        }
        else {
          Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)local_28,param_1);
          *(undefined4 *)(param_1 + 0x10) = 0;
          *(undefined4 *)(param_1 + 0x14) = 0;
          this_02 = (FilesystemSaveGameContext *)
                    Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
          cVar2 = Sexy::FilesystemSaveGameContext::HasError(this_02);
          iVar24 = *(int *)(gLawnApp + 0x724);
          iVar5 = *(int *)(gLawnApp + 0x728);
          lVar10 = CachedResourcePtr<Sexy::Image>::operator->
                             ((CachedResourcePtr<Sexy::Image> *)&DAT_06b0fc98);
          iVar6 = *(int *)(lVar10 + 0x38);
          lVar10 = CachedResourcePtr<Sexy::Image>::operator->
                             ((CachedResourcePtr<Sexy::Image> *)&DAT_06b0fc98);
          fVar28 = (float)iVar6 / (float)*(int *)(lVar10 + 0x3c);
          if ((float)iVar24 / (float)iVar5 <= fVar28) {
            fVar28 = fVar28 * (float)*(int *)(gLawnApp + 0x728);
            if (cVar2 == '\0') {
              pIVar21 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                           ((CachedResourcePtr<Sexy::Image> *)&DAT_06b0ffb0);
            }
            else {
              pIVar21 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                           ((CachedResourcePtr<Sexy::Image> *)&DAT_06b0fc98);
            }
            Sexy::Graphics::DrawImage
                      (param_1,pIVar21,(int)(((float)*(int *)(gLawnApp + 0x724) - fVar28) * 0.5),0,
                       (int)fVar28,*(int *)(gLawnApp + 0x728));
          }
          else {
            fVar28 = (float)*(int *)(gLawnApp + 0x724) / fVar28;
            if (cVar2 == '\0') {
              pIVar21 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                           ((CachedResourcePtr<Sexy::Image> *)&DAT_06b0ffb0);
            }
            else {
              pIVar21 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                           ((CachedResourcePtr<Sexy::Image> *)&DAT_06b0fc98);
            }
            Sexy::Graphics::DrawImage
                      (param_1,pIVar21,0,(int)(((float)*(int *)(gLawnApp + 0x728) - fVar28) * 0.5),
                       *(int *)(gLawnApp + 0x724),(int)fVar28);
          }
        }
      }
      else {
        Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)local_28,param_1);
        *(undefined4 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x14) = 0;
        lVar10 = Sexy::LazySingleton<CardGameNetworkMgr>::GetInstancePtr();
        cVar2 = FUN_04528c78(*(undefined1 *)(lVar10 + 8));
        iVar24 = *(int *)(gLawnApp + 0x724);
        iVar5 = *(int *)(gLawnApp + 0x728);
        lVar10 = CachedResourcePtr<Sexy::Image>::operator->
                           ((CachedResourcePtr<Sexy::Image> *)&DAT_06b0fb30);
        iVar6 = *(int *)(lVar10 + 0x38);
        lVar10 = CachedResourcePtr<Sexy::Image>::operator->
                           ((CachedResourcePtr<Sexy::Image> *)&DAT_06b0fb30);
        fVar28 = (float)iVar6 / (float)*(int *)(lVar10 + 0x3c);
        if ((float)iVar24 / (float)iVar5 <= fVar28) {
          fVar28 = fVar28 * (float)*(int *)(gLawnApp + 0x728);
          if (cVar2 == '\0') {
            pIVar21 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                         ((CachedResourcePtr<Sexy::Image> *)&DAT_06b0fc28);
            iVar24 = (int)fVar28;
          }
          else {
            pIVar21 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                         ((CachedResourcePtr<Sexy::Image> *)&DAT_06b0fb30);
            iVar24 = (int)fVar28;
          }
LAB_0453bd7c:
          Sexy::Graphics::DrawImage
                    (param_1,pIVar21,(int)(((float)*(int *)(gLawnApp + 0x724) - fVar28) * 0.5),0,
                     iVar24,*(int *)(gLawnApp + 0x728));
        }
        else {
          fVar28 = (float)*(int *)(gLawnApp + 0x724) / fVar28;
          if (cVar2 == '\0') {
            pIVar21 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                         ((CachedResourcePtr<Sexy::Image> *)&DAT_06b0fc28);
          }
          else {
            pIVar21 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                         ((CachedResourcePtr<Sexy::Image> *)&DAT_06b0fb30);
          }
          Sexy::Graphics::DrawImage
                    (param_1,pIVar21,0,(int)(((float)*(int *)(gLawnApp + 0x728) - fVar28) * 0.5),
                     *(int *)(gLawnApp + 0x724),(int)fVar28);
        }
      }
      Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)local_28);
      goto LAB_0453b050;
    }
  }
  Sexy::Insets::Insets((Insets *)local_28,0,0,0,0);
  DrawSpaceSpiral(param_1,0xff,(Insets *)local_28);
LAB_0453b050:
  this_00 = (ParallaxCache *)(this + 1000);
  iVar24 = 0;
  Sexy::Color::Color((Color *)local_28,1);
  Sexy::Graphics::SetColor(param_1,(Color *)local_28);
  Sexy::OutputDebugStrF((wchar_t *)"creating render list");
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_40);
  ParallaxCache::RecalculateOffsets
            (this_00,*(float *)(this + 0x210) - (float)*(int *)(this + 0x218));
  pWVar9 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
  iVar5 = WorldDataManager::GetWorldDataCount(pWVar9);
  if (0 < iVar5) {
    do {
      lVar10 = WorldDataManager::GetWorldDataByIdx(pWVar9,iVar24);
      if (*(char *)(*(long *)(lVar10 + 0xb0) + 0x50) != '\0') {
        uVar27 = *(undefined8 *)(lVar10 + 8);
        uVar26 = 0;
        lVar11 = FUN_04528d68(uVar27,*(undefined8 *)(lVar10 + 0x10));
        if (lVar11 != 0) {
          do {
            pMVar12 = (MapEventItem *)FUN_04528d88(uVar27,uVar26);
            cVar2 = MapEventItem::HasImageData(pMVar12);
            if ((cVar2 != '\0') ||
               (sVar4 = FUN_04528bac(*(undefined2 *)(pMVar12 + 0xe2)), sVar4 != -1)) {
              eastl::
              rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
              ::rbtree_iterator((rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
                                 *)local_28,(rbtree_node *)pMVar12);
              std::vector<MapRenderItem,std::allocator<MapRenderItem>>::push_back
                        ((vector<MapRenderItem,std::allocator<MapRenderItem>> *)&local_40,
                         (rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
                          *)local_28);
            }
            uVar27 = *(undefined8 *)(lVar10 + 8);
            uVar26 = uVar26 + 1;
            uVar13 = FUN_04528d68(uVar27,*(undefined8 *)(lVar10 + 0x10));
          } while (uVar26 < uVar13);
        }
        uVar27 = *(undefined8 *)(lVar10 + 0x20);
        uVar13 = 0;
        uVar26 = FUN_04528d68(uVar27,*(undefined8 *)(lVar10 + 0x28));
        if (uVar26 != 0) {
          do {
            prVar14 = (rbtree_node *)FUN_04528d88(uVar27,uVar13);
            iVar5 = FUN_04528b58(*(undefined4 *)(prVar14 + 0x78));
            if (iVar5 == 3) {
              eastl::
              rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
              ::rbtree_iterator((rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
                                 *)local_28,prVar14);
              std::vector<MapRenderItem,std::allocator<MapRenderItem>>::push_back
                        ((vector<MapRenderItem,std::allocator<MapRenderItem>> *)&local_40,
                         (rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
                          *)local_28);
              uVar27 = *(undefined8 *)(lVar10 + 0x20);
              uVar26 = FUN_04528d68(uVar27,*(undefined8 *)(lVar10 + 0x28));
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 < uVar26);
        }
      }
      iVar24 = iVar24 + 1;
      iVar5 = WorldDataManager::GetWorldDataCount(pWVar9);
    } while (iVar24 < iVar5);
  }
  Sexy::OutputDebugStrF((wchar_t *)"start sort");
  uVar27 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_40);
  uVar15 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)&local_40);
  std::
  sort<__gnu_cxx::__normal_iterator<MapRenderItem*,std::vector<MapRenderItem,std::allocator<MapRenderItem>>>,bool(*)(MapRenderItem_const&,MapRenderItem_const&)>
            (uVar27,uVar15,WorldMapRenderMapItemSortFunc);
  Sexy::OutputDebugStrF((wchar_t *)"end sort, start draw");
  pLVar23 = *(LineBreakCategory **)(this + 0x328);
  pPVar25 = this_00;
  (**(code **)(*plVar8 + 0x20))
            (plVar8,param_1,
             (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_40);
  if ((*(long *)(this + 0x2f0) != 0) &&
     (*(char *)(*(long *)(*(long *)(this + 0x2f0) + 0xb0) + 0x50) != '\0')) {
    drawMapPaths((Graphics *)this);
  }
  iVar24 = 0;
  Sexy::OutputDebugStrF((wchar_t *)"resetting render list");
  std::vector<MapRenderItem,std::allocator<MapRenderItem>>::clear
            ((vector<MapRenderItem,std::allocator<MapRenderItem>> *)&local_40);
  pWVar9 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
  iVar5 = WorldDataManager::GetWorldDataCount(pWVar9);
  if (0 < iVar5) {
    do {
      lVar10 = WorldDataManager::GetWorldDataByIdx(pWVar9,iVar24);
      if (*(char *)(*(long *)(lVar10 + 0xb0) + 0x50) != '\0') {
        uVar27 = *(undefined8 *)(lVar10 + 0x20);
        uVar26 = 0;
        lVar11 = FUN_04528d68(uVar27,*(undefined8 *)(lVar10 + 0x28));
        if (lVar11 != 0) {
          do {
            pMVar12 = (MapEventItem *)FUN_04528d88(uVar27,uVar26);
            iVar5 = FUN_04528b48(*(undefined4 *)(pMVar12 + 0x14));
            if ((((iVar5 != 0xb) ||
                 (sVar4 = FUN_04528bac(*(undefined2 *)(pMVar12 + 0xe2)), sVar4 != -1)) ||
                (cVar2 = MapEventItem::HasImageData(pMVar12), cVar2 != '\0')) &&
               (cVar2 = FUN_04528b64(pMVar12[0xf0]), cVar2 != '\0')) {
              eastl::
              rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
              ::rbtree_iterator((rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
                                 *)local_28,(rbtree_node *)pMVar12);
              std::vector<MapRenderItem,std::allocator<MapRenderItem>>::push_back
                        ((vector<MapRenderItem,std::allocator<MapRenderItem>> *)&local_40,
                         (rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
                          *)local_28);
            }
            uVar26 = uVar26 + 1;
            uVar27 = *(undefined8 *)(lVar10 + 0x20);
            uVar13 = FUN_04528d68(uVar27,*(undefined8 *)(lVar10 + 0x28));
          } while (uVar26 < uVar13);
        }
      }
      iVar24 = iVar24 + 1;
      iVar5 = WorldDataManager::GetWorldDataCount(pWVar9);
    } while (iVar24 < iVar5);
  }
  if (*(long *)(this + 0x440) != 0) {
    FUN_04528b4c(*(long *)(this + 0x440) + 0x102,1);
  }
  Sexy::OutputDebugStrF((wchar_t *)"start sort");
  uVar27 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_40);
  uVar15 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)&local_40);
  std::
  sort<__gnu_cxx::__normal_iterator<MapRenderItem*,std::vector<MapRenderItem,std::allocator<MapRenderItem>>>,bool(*)(MapRenderItem_const&,MapRenderItem_const&)>
            (uVar27,uVar15,WorldMapRenderMapItemSortFunc);
  Sexy::OutputDebugStrF((wchar_t *)"end sort, start draw");
  Sexy::Graphics::SetColorizeImages(param_1,false);
  uVar27 = local_40;
  uVar26 = 0;
  if (*(long *)(this + 0x3c8) == 0) {
    while( true ) {
      uVar27 = local_40;
      uVar13 = FUN_04528d94(local_40,local_38);
      if (uVar13 <= uVar26) break;
      puVar16 = (undefined8 *)FUN_04528da0(uVar27,uVar26);
      pLVar23 = *(LineBreakCategory **)(*(long *)*puVar16 + 0x18);
      (*(code *)pLVar23)(0,(long *)*puVar16,param_1,*(undefined8 *)(this + 0x328));
      uVar26 = uVar26 + 1;
    }
  }
  else {
    uVar26 = 0;
    lVar10 = FUN_04528d94(local_40,local_38);
    if (lVar10 != 0) {
      do {
        puVar16 = (undefined8 *)FUN_04528da0(uVar27,uVar26);
        pLVar23 = *(LineBreakCategory **)(*(long *)*puVar16 + 0x18);
        (*(code *)pLVar23)(0,(long *)*puVar16,param_1,*(undefined8 *)(this + 0x328));
        uVar27 = local_40;
        p_Var7 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   **)(this + 0x3c8);
        plVar8 = (long *)FUN_04528da0(local_40,uVar26);
        if (p_Var7 == (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)*plVar8) {
          puVar18 = (undefined4 *)
                    std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_end(p_Var7);
          fVar28 = (float)FUN_04529710(*puVar18);
          fVar31 = (float)FUN_04529710(puVar18[1]);
          WorldMapCamera::DrawPopAnimRig
                    (*(WorldMapCamera **)(this + 0x328),*(PopAnimRig **)(this + 0x3c0),fVar28,fVar31
                     ,1.0,1.0,0.0);
          uVar27 = local_40;
        }
        uVar26 = uVar26 + 1;
        uVar13 = FUN_04528d94(uVar27,local_38);
      } while (uVar26 < uVar13);
    }
  }
  pwVar17 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  pGVar22 = (GraphicsAutoState *)local_50;
  std::string::string((string *)local_28,"WM_Hitboxes");
  cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar17,(wchar16 *)local_28,(LineBreakCategory *)pGVar22,pLVar23,
                     (LineBreakCategory *)pPVar25);
  std::string::~string((string *)local_28);
  nop();
  if (cVar2 != '\0') {
    Sexy::Color::Color((Color *)local_28,5);
    Sexy::Graphics::SetColor(param_1,(Color *)local_28);
    uVar26 = 0;
    while( true ) {
      uVar27 = local_40;
      uVar13 = FUN_04528d94(local_40,local_38);
      if (uVar13 <= uVar26) break;
      plVar8 = (long *)FUN_04528da0(uVar27,uVar26);
      local_28[0] = FUN_04528b48(*(undefined4 *)(*plVar8 + 0x14));
      piVar19 = (int *)std::
                       map<MapEventType,Sexy::TRect<int>,std::less<MapEventType>,std::allocator<std::pair<MapEventType_const,Sexy::TRect<int>>>>
                       ::operator[]((map<MapEventType,Sexy::TRect<int>,std::less<MapEventType>,std::allocator<std::pair<MapEventType_const,Sexy::TRect<int>>>>
                                     *)(this + 0x260),(MapEventType *)local_28);
      puVar16 = (undefined8 *)FUN_04528da0(local_40,uVar26);
      p_Var7 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)*puVar16;
      pfVar20 = (float *)std::
                         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         ::_M_end(p_Var7);
      fVar32 = *pfVar20;
      fVar31 = pfVar20[1];
      cVar2 = FUN_04528b5c(p_Var7[0x8c]);
      fVar28 = (float)ParallaxCache::GetOffsetForLayer(this_00,(int)cVar2);
      this_03 = *(WorldMapCamera **)(this + 0x328);
      Sexy::Insets::Insets
                ((Insets *)local_50,(int)(fVar28 + (float)*piVar19 + fVar32),
                 (int)(fVar31 + (float)piVar19[1]),piVar19[2],piVar19[3]);
      FUN_0452ad28((rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
                    *)local_28,(GraphicsAutoState *)local_50);
      WorldMapCamera::DrawRect(this_03,(TRect *)local_28);
      uVar26 = uVar26 + 1;
    }
  }
  if (*(long *)(this + 0x440) != 0) {
    FUN_04528b4c(*(long *)(this + 0x440) + 0x102,0);
  }
  if ((this[0x254] != (WorldMap)0x0) ||
     ((this[0x2f9] != (WorldMap)0x0 && (lVar10 = FUN_05474178(this + 0x308), lVar10 != 0)))) {
    Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)&local_58,param_1);
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    Sexy::Insets::Insets((Insets *)local_28,0,0,0,0x80);
    Sexy::Graphics::SetColor(param_1,(Color *)local_28);
    iVar5 = FUN_045296fc(0x20);
    lVar10 = gLawnApp;
    iVar24 = *(int *)(gLawnApp + 0xd8);
    iVar6 = FUN_045296fc(0x40);
    Sexy::Graphics::FillRect(param_1,0,iVar24 / 2 - iVar5,*(int *)(lVar10 + 0xd4),iVar6);
    uVar27 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26_Shaded);
    lVar10 = gLawnApp;
    iVar6 = FUN_045296fc(0x10);
    iVar24 = *(int *)(lVar10 + 0xd8);
    iVar5 = *(int *)(lVar10 + 0xd4);
    fVar28 = (float)Sexy::PrimeTypeface::ParagraphHeightUnlimited;
    FUN_05478178((GraphicsAutoState *)local_50,L"LOADING...",&local_60);
    Sexy::Color::Color((Color *)local_28,1);
    Sexy::PrimeTypeface::DrawString_Paragraph
              ((PrimeTypeface *)0x0,(float)(iVar6 + iVar24 / 2),(float)iVar5,fVar28,uVar27,param_1,
               (GraphicsAutoState *)local_50,1,0,
               (rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
                *)local_28,0);
    FUN_05476c50((GraphicsAutoState *)local_50);
    nop();
    Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)&local_58);
  }
  fVar28 = *(float *)(this + 0xee0);
  auVar30 = PVZ_T();
  local_50[0] = 0;
  local_28[0] = 0x3f800000;
  CurveLerp<float>(auVar30,fVar28 + 0.4,auVar30._0_4_,(GraphicsAutoState *)local_50,
                   (rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
                    *)local_28,2);
  Sexy::Graphics::TranslateF(param_1,-*(float *)(this + 0x210),-*(float *)(this + 0x214));
  if (this[0x254] == (WorldMap)0x0) {
    RenderQueue::RenderQueue((RenderQueue *)local_28,0x800);
    if (this[0x2a0] == (WorldMap)0x0) {
      Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)local_50,param_1);
      Sexy::Graphics::Translate(param_1,(int)*(float *)(this + 0x210),(int)*(float *)(this + 0x214))
      ;
      StandaloneEffect::SetIsScreenSpaceEffect(*(StandaloneEffect **)(this + 0x298),false);
      StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0x298),param_1);
      Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)local_50);
    }
    if (*(char *)(*(long *)(this + 0x2b0) + 0x7c) == '\0') {
      UIWidget::AddToRenderQueueForAllWidgets((RenderQueue *)local_28);
    }
    Sexy::OutputDebugStrF((wchar_t *)"start sort");
    puVar16 = (undefined8 *)RenderQueue::GetSortedQueue((RenderQueue *)local_28);
    Sexy::OutputDebugStrF((wchar_t *)"end sort, start draw");
    uVar27 = *puVar16;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    local_60 = FUN_0452dcc0(uVar27);
    local_58 = FUN_0452dd10(puVar16[1]);
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_60,(__normal_iterator *)&local_58), bVar3)
    {
      this_01 = (Delegate1wRet<bool,SexyURL_const&> *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
      Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)local_50,param_1);
      Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()(this_01,(SexyURL *)param_1);
      Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)local_50);
      std::move_iterator<Sexy::PAFrame*>::operator++((move_iterator<Sexy::PAFrame*> *)&local_60);
    }
    plVar8 = *(long **)(this + 0x290);
    fVar28 = (float)FUN_04528b38((int)plVar8[3]);
    if (0.0 < fVar28) {
      (**(code **)(*plVar8 + 0x98))(plVar8,param_1);
    }
    RenderQueue::~RenderQueue((RenderQueue *)local_28);
  }
  Sexy::Graphics::TranslateF(param_1,-*(float *)(this + 0x210),-*(float *)(this + 0x214));
  (**(code **)(**(long **)(this + 0x2a8) + 0x10))(*(long **)(this + 0x2a8),param_1);
  if (this[0x2a0] != (WorldMap)0x0) {
    StandaloneEffect::SetIsScreenSpaceEffect(*(StandaloneEffect **)(this + 0x298),true);
    StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0x298),param_1);
  }
  Sexy::Graphics::TranslateF(param_1,*(float *)(this + 0x210),*(float *)(this + 0x214));
  DrawTransitionEffect(this,param_1);
  std::vector<MapRenderItem,std::allocator<MapRenderItem>>::~vector
            ((vector<MapRenderItem,std::allocator<MapRenderItem>> *)&local_40);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::rebuildMapPathGroups(WorldData*) */

void __thiscall WorldMap::rebuildMapPathGroups(WorldMap *this,WorldData *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  PlayerInfo *pPVar4;
  MapEventItem *pMVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  PopAnim *pPVar10;
  RtClass *pRVar11;
  vector<MapPath,std::allocator<MapPath>> *this_00;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 local_50;
  undefined8 local_48;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_40 [24];
  BarGroup aBStack_28 [16];
  MapEventItem *local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  purgeMapPathGroups(this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_40);
  WorldMapUtils::GetOrderedMainSpinePath((string *)(param_1 + 0x38),(vector *)avStack_40);
  pPVar4 = (PlayerInfo *)ProfileUtils::Profile();
  pMVar5 = (MapEventItem *)WorldMapUtils::GetLastUnlockedNodeOnPath((vector *)avStack_40,pPVar4);
  iVar2 = WorldMapUtils::GetIndexOfEventOnPath(pMVar5,(vector *)avStack_40);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_40);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_40);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)&local_48);
  if (bVar1) {
    do {
      plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
      pMVar5 = (MapEventItem *)*plVar6;
      lVar7 = FUN_04528b60(*(undefined8 *)(pMVar5 + 0xb0));
      if (lVar7 != 0) {
        uVar13 = *(undefined8 *)(this + 0x390);
        uVar8 = FUN_04528da8(uVar13,*(undefined8 *)(this + 0x398));
        for (uVar12 = 0; uVar12 != uVar8; uVar12 = uVar12 + 1) {
          lVar9 = FUN_04528db4(uVar13,uVar12);
          if (lVar7 == *(long *)(lVar9 + 0x18)) {
            if ((int)uVar12 != -1) goto LAB_0453c654;
            break;
          }
        }
        uVar12 = uVar8 & 0xffffffff;
        TriRepGenerator::PointGroup::BarGroup::BarGroup(aBStack_28);
        local_10 = FUN_04528b60(*(undefined8 *)(pMVar5 + 0xb0));
        std::vector<MapPathGroup,std::allocator<MapPathGroup>>::push_back
                  ((vector<MapPathGroup,std::allocator<MapPathGroup>> *)(this + 0x390),
                   (MapPathGroup *)aBStack_28);
        MapPathGroup::~MapPathGroup((MapPathGroup *)aBStack_28);
LAB_0453c654:
        MapPath::MapPath((MapPath *)aBStack_28);
        local_18 = pMVar5;
        pPVar10 = (PopAnim *)FUN_04528c30(*(undefined8 *)(*(long *)(this + 0x380) + 0x20));
        pRVar11 = (RtClass *)PopAnimRig::StaticGetClass();
        local_10 = PopAnimRig::CreateRigOutsideTable(pPVar10,pRVar11);
        iVar3 = WorldMapUtils::GetIndexOfEventOnPath(local_18,(vector *)avStack_40);
        SetMapPathAnimationState(this,(MapPath *)aBStack_28,iVar3 <= iVar2);
        this_00 = (vector<MapPath,std::allocator<MapPath>> *)
                  FUN_04528db4(*(undefined8 *)(this + 0x390),(long)(int)uVar12);
        std::vector<MapPath,std::allocator<MapPath>>::push_back(this_00,(MapPath *)aBStack_28);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)&local_48);
    } while (bVar1);
  }
  std::vector<MapEventItem_const*,std::allocator<MapEventItem_const*>>::~vector
            ((vector<MapEventItem_const*,std::allocator<MapEventItem_const*>> *)avStack_40);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::initLoadedWorldResources() */

void __thiscall WorldMap::initLoadedWorldResources(WorldMap *this)

{
  vector<WorldMapAsset,std::allocator<WorldMapAsset>> *this_00;
  PopAnimRig *pPVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  ushort uVar5;
  short sVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  PopAnim *pPVar12;
  RtClass *pRVar13;
  PopAnimRig *pPVar14;
  WorldDataManager *this_01;
  WorldData *pWVar15;
  WorldMapList *this_02;
  long lVar16;
  DungeonInfo *pDVar17;
  WorldDungeonInfo *pWVar18;
  MapEventItem *pMVar19;
  ulong uVar20;
  RtWeakPtr *pRVar21;
  EffectAnimRig_IslandNode *pEVar22;
  long extraout_x0;
  LotteryResultProgressBar *pLVar23;
  SalesProgressBar *pSVar24;
  RtWeakPtrBase *pRVar25;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar26;
  EffectAnimRig_LevelNode *pEVar27;
  NameMapperBase *this_03;
  long *plVar28;
  EffectAnimRig_LevelNode_Zomboss *this_04;
  long lVar29;
  string *psVar30;
  PlantType *pPVar31;
  EffectAnimRig_DelayReplayAnim *this_05;
  long extraout_x0_00;
  short *psVar32;
  WorldDataManager *pWVar33;
  MapEventItem *pMVar34;
  undefined8 *puVar35;
  CachedResourcePtr *this_06;
  string *extraout_x1;
  string *psVar36;
  uint uVar37;
  undefined8 uVar38;
  ulong uVar39;
  ulong uVar40;
  long lVar41;
  uint uVar42;
  code *pcVar43;
  float fVar44;
  float fVar45;
  int iVar46;
  undefined1 auVar47 [16];
  ulong local_150;
  code *local_128;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_118 [8];
  string asStack_110 [8];
  string asStack_108 [8];
  RtWeakPtrBase aRStack_100 [8];
  PopAnimRig *local_f8;
  undefined8 local_f0;
  PopAnimRig *local_e8;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_e0 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_c8 [24];
  PopAnimRig *local_b0;
  undefined8 local_a8;
  SexyTransform2D aSStack_98 [8];
  undefined1 auStack_90 [12];
  undefined1 auStack_84 [20];
  DummyInit aDStack_70 [8];
  undefined1 auStack_68 [12];
  undefined1 auStack_5c [28];
  EffectAnimRig_IslandNode *local_40;
  EffectAnimRig_IslandNode *local_38;
  uint local_30;
  undefined1 local_2c;
  vector avStack_20 [24];
  long local_8;
  
  iVar46 = 0;
  local_8 = ___stack_chk_guard;
  psVar36 = *(string **)(gLawnApp + 0x848);
  std::string::string((string *)&local_40,"POPANIM_WORLDMAP_MAP_PATH");
  Sexy::ResourceManager::GetResourceForStringIdT<Sexy::PopAnim>
            (psVar36,SUB81((string *)&local_40,0));
  std::string::~string((string *)&local_40);
  nop();
  pPVar12 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_118);
  pRVar13 = (RtClass *)PopAnimRig::StaticGetClass();
  pPVar14 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable(pPVar12,pRVar13);
  *(PopAnimRig **)(this + 0x380) = pPVar14;
  std::string::string((string *)&local_40,"beam_path_open");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_70);
  PopAnimRig::PlayAndContinue(pPVar14,(string *)&local_40,0,aDStack_70);
  std::string::~string((string *)&local_40);
  nop();
  pPVar12 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_118);
  pRVar13 = (RtClass *)PopAnimRig::StaticGetClass();
  pPVar14 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable(pPVar12,pRVar13);
  *(PopAnimRig **)(this + 0x388) = pPVar14;
  std::string::string((string *)&local_40,"beam_roll");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_70);
  PopAnimRig::PlayAndContinue(pPVar14,(string *)&local_40,0,aDStack_70);
  std::string::~string((string *)&local_40);
  nop();
  createZombossHologram(this);
  this_01 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
LAB_0453c900:
  iVar7 = WorldDataManager::GetWorldDataCount(this_01);
  if (iVar7 <= iVar46) {
    (**(code **)(*(long *)this + 0x378))(this);
    MessageRouter::Broadcast((_func_void *)gMessageRouter);
    MessageRouter::Post((_func_void *)gMessageRouter);
    fVar44 = (float)PVZ_RealT();
    *(float *)(this + 0x468) = fVar44 + 5.0;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_118);
    if (local_8 == ___stack_chk_guard) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  pWVar15 = (WorldData *)WorldDataManager::GetWorldDataByIdx(this_01,iVar46);
  if (*(char *)(*(long *)(pWVar15 + 0xb0) + 0x50) != '\0') {
    this_02 = (WorldMapList *)WorldMapUtils::GetWorldMapList();
    psVar36 = (string *)(pWVar15 + 0x38);
    lVar16 = WorldMapList::GetMapListNodeByName(this_02,psVar36);
    FUN_05475d88(asStack_110,psVar36);
    LawnApp::GetPlantAdventureConfig(gLawnApp);
    PlantAdventureConfig::GetDungeonListInfo();
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_c8);
    local_f8 = (PopAnimRig *)
               std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(avStack_e0);
    local_40 = (EffectAnimRig_IslandNode *)
               std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(avStack_e0);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_f8,(__normal_iterator *)&local_40);
    if (bVar2) {
      do {
        pDVar17 = (DungeonInfo *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_f8);
        DungeonInfo::DungeonInfo((DungeonInfo *)&local_40,pDVar17);
        std::vector<WorldDungeonInfo,std::allocator<WorldDungeonInfo>>::vector
                  ((vector<WorldDungeonInfo,std::allocator<WorldDungeonInfo>> *)&local_b0,avStack_20
                  );
        local_f0 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)&local_b0);
        local_e8 = (PopAnimRig *)
                   std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_b0);
        while (bVar2 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_f0,(__normal_iterator *)&local_e8),
              bVar2) {
          pWVar18 = (WorldDungeonInfo *)
                    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_f0);
          cVar3 = std::operator==((string *)(pWVar18 + 0x18),asStack_110);
          if (cVar3 != '\0') {
            std::vector<WorldDungeonInfo,std::allocator<WorldDungeonInfo>>::push_back
                      ((vector<WorldDungeonInfo,std::allocator<WorldDungeonInfo>> *)avStack_c8,
                       pWVar18);
          }
          __gnu_cxx::
          __normal_iterator<Sexy::PIValue2D_const*,std::vector<Sexy::PIValue2D,std::allocator<Sexy::PIValue2D>>>
          ::operator++((__normal_iterator<Sexy::PIValue2D_const*,std::vector<Sexy::PIValue2D,std::allocator<Sexy::PIValue2D>>>
                        *)&local_f0);
        }
        std::vector<WorldDungeonInfo,std::allocator<WorldDungeonInfo>>::~vector
                  ((vector<WorldDungeonInfo,std::allocator<WorldDungeonInfo>> *)&local_b0);
        DungeonInfo::~DungeonInfo((DungeonInfo *)&local_40);
        std::move_iterator<Sexy::PAFrame*>::operator++((move_iterator<Sexy::PAFrame*> *)&local_f8);
        local_40 = (EffectAnimRig_IslandNode *)
                   std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(avStack_e0);
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_f8,(__normal_iterator *)&local_40)
        ;
      } while (bVar2);
    }
    this_00 = (vector<WorldMapAsset,std::allocator<WorldMapAsset>> *)(pWVar15 + 0x60);
    local_150 = 0xffffffffffffffff;
    cVar3 = std::vector<WorldMapAsset,std::allocator<WorldMapAsset>>::empty(this_00);
    psVar30 = (string *)gLawnApp;
    if (cVar3 != '\0') {
      std::string::string((string *)&local_40,"IMAGE_WORLDMAP_COMMON_MISSING_ARTPIECE");
      uVar40 = 1;
      iVar7 = 0;
      LawnApp::GetImageFromStringId(psVar30,(int)(string *)&local_40);
      std::string::~string((string *)&local_40);
      nop();
      do {
        uVar38 = FUN_0547429c(*(long *)(pWVar15 + 0xb0) + 0x28);
        Sexy::StrFormat("%s_ISLAND%d",(string *)&local_e8,uVar38,uVar40);
        iVar9 = (int)(string *)&local_e8;
        LawnApp::GetImageFromStringId((string *)gLawnApp,iVar9);
        cVar3 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)&local_b0);
        if ((cVar3 != '\0') && ('\0' < *(char *)(lVar16 + 0xa8))) {
          uVar37 = 1;
          do {
            uVar38 = FUN_0547429c(*(long *)(pWVar15 + 0xb0) + 0x28);
            Sexy::StrFormat("%s_PART%d_ISLAND%d",(string *)&local_40,uVar38,(ulong)uVar37,uVar40);
            FUN_05474278((string *)&local_e8,(string *)&local_40);
            std::string::~string((string *)&local_40);
            LawnApp::GetImageFromStringId((string *)gLawnApp,iVar9);
            Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                      ((RtWeakPtr<PowerPropertySheet> *)&local_b0,(RtWeakPtr *)&local_40);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
            bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_b0);
            if (bVar2) {
              bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_b0);
              if (bVar2) goto LAB_0453da68;
              goto LAB_0453db1c;
            }
            uVar37 = (uint)(char)((char)uVar37 + '\x01');
          } while ((int)uVar37 <= (int)*(char *)(lVar16 + 0xa8));
        }
        uVar37 = 0;
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_b0);
        if (bVar2) {
LAB_0453da68:
          iVar9 = 0;
          if (iVar7 != 0) {
            do {
              iVar9 = iVar9 + 1;
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)&local_40,aRStack_100);
              local_38 = (EffectAnimRig_IslandNode *)0x0;
              local_2c = 0;
              local_30 = uVar37;
              std::vector<WorldMapAsset,std::allocator<WorldMapAsset>>::push_back
                        (this_00,(WorldMapAsset *)&local_40);
              std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_40);
            } while (iVar9 < iVar7);
          }
          iVar7 = 0;
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)&local_b0);
          local_38 = (EffectAnimRig_IslandNode *)0x0;
          local_2c = 1;
          local_30 = uVar37;
          std::vector<WorldMapAsset,std::allocator<WorldMapAsset>>::push_back
                    (this_00,(WorldMapAsset *)&local_40);
          std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_40);
        }
        else {
LAB_0453db1c:
          iVar7 = iVar7 + 1;
          if (0x19 < iVar7) goto code_r0x0453db30;
        }
        uVar40 = (ulong)((int)uVar40 + 1);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_b0);
        std::string::~string((string *)&local_e8);
      } while( true );
    }
    goto LAB_0453caa8;
  }
  goto LAB_0453c8f4;
code_r0x0453db30:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_b0);
  std::string::~string((string *)&local_e8);
  local_150 = FUN_04528e18(*(undefined8 *)(pWVar15 + 0x60),*(undefined8 *)(pWVar15 + 0x68));
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_40,aRStack_100);
  local_38 = (EffectAnimRig_IslandNode *)0x0;
  local_30 = 0;
  local_2c = 0;
  std::vector<WorldMapAsset,std::allocator<WorldMapAsset>>::resize
            (this_00,100,(WorldMapAsset *)&local_40);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_40);
  lVar41 = *(long *)(pWVar15 + 0xb0);
  lVar29 = FUN_05474184(lVar41 + 0x30);
  if (lVar29 != 0) {
    iVar7 = 0;
    uVar37 = 1;
    FUN_05475d88((__normal_iterator *)&local_f8,lVar41 + 0x30);
    do {
      uVar38 = FUN_0547429c((__normal_iterator *)&local_f8);
      Sexy::StrFormat("%s_ANIM%d",(string *)&local_f0,uVar38,(ulong)uVar37);
      bVar2 = SUB81((string *)&local_f0,0);
      Sexy::ResourceManager::GetResourceForStringIdT<Sexy::PopAnim>
                (*(string **)(gLawnApp + 0x848),bVar2);
      cVar3 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)&local_e8);
      if ((cVar3 != '\0') && ('\0' < *(char *)(lVar16 + 0xa8))) {
        uVar42 = 1;
        do {
          uVar38 = FUN_0547429c((__normal_iterator *)&local_f8);
          Sexy::StrFormat("%s_PART%d_ANIM%d",(string *)&local_40,uVar38,(ulong)uVar42,(ulong)uVar37)
          ;
          FUN_05474278((string *)&local_f0,(string *)&local_40);
          std::string::~string((string *)&local_40);
          Sexy::ResourceManager::GetResourceForStringIdT<Sexy::PopAnim>
                    (*(string **)(gLawnApp + 0x848),bVar2);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)&local_e8,(RtWeakPtr *)&local_40);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
          bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_e8);
          if (bVar4) {
            bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_e8);
            if (bVar2) goto LAB_0453e1f0;
            goto LAB_0453e31c;
          }
          uVar42 = (uint)(char)((char)uVar42 + '\x01');
        } while ((int)uVar42 <= (int)*(char *)(lVar16 + 0xa8));
      }
      uVar42 = 0;
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_e8);
      if (bVar2) {
LAB_0453e1f0:
        iVar9 = 0;
        if (iVar7 != 0) {
          do {
            iVar9 = iVar9 + 1;
            std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::
            _Hash_node((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_40);
            local_38 = (EffectAnimRig_IslandNode *)0x0;
            local_2c = 0;
            local_30 = uVar42;
            std::vector<WorldMapAsset,std::allocator<WorldMapAsset>>::push_back
                      (this_00,(WorldMapAsset *)&local_40);
            std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_40);
          } while (iVar9 < iVar7);
        }
        pPVar12 = (PopAnim *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_e8);
        pEVar22 = PopAnimRig::CreateRigOutsideTable<EffectAnimRig_IslandNode>(pPVar12);
        lVar41 = *(long *)(pWVar15 + 0xb0);
        lVar29 = FUN_04528e2c(*(undefined8 *)(lVar41 + 0x38),*(undefined8 *)(lVar41 + 0x40));
        if (lVar29 != 0) {
          local_b0 = (PopAnimRig *)
                     std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)(lVar41 + 0x38));
          local_40 = (EffectAnimRig_IslandNode *)
                     std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(lVar41 + 0x38));
          while (bVar2 = __gnu_cxx::operator!=
                                   ((__normal_iterator *)&local_b0,(__normal_iterator *)&local_40),
                bVar2) {
            psVar32 = (short *)std::__exception_ptr::exception_ptr::_M_get
                                         ((exception_ptr *)&local_b0);
            if ((int)*psVar32 == uVar37) {
              FUN_04528c34(*(undefined4 *)(psVar32 + 2),*(undefined4 *)(psVar32 + 4),pEVar22 + 0x210
                           ,pEVar22 + 0x214);
              if ((char)psVar32[6] != '\0') {
                PopAnimRig::SetDrawScale
                          ((PopAnimRig *)pEVar22,*(float *)(gLawnApp + 0x28dc) * 0.0006510417);
              }
              break;
            }
            std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                      ((move_iterator<Sexy::CharDataHashEntry*> *)&local_b0);
          }
        }
        iVar7 = 0;
        std::string::string((string *)&local_40,"idle");
        Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_70);
        PopAnimRig::PlayAndContinue((PopAnimRig *)pEVar22,(string *)&local_40,0,aDStack_70);
        std::string::~string((string *)&local_40);
        nop();
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_40);
        local_2c = 1;
        local_38 = pEVar22;
        local_30 = uVar42;
        std::vector<WorldMapAsset,std::allocator<WorldMapAsset>>::push_back
                  (this_00,(WorldMapAsset *)&local_40);
        std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_40);
      }
      else {
LAB_0453e31c:
        iVar7 = iVar7 + 1;
        if (0x19 < iVar7) goto code_r0x0453e330;
      }
      uVar37 = uVar37 + 1;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_e8);
      std::string::~string((string *)&local_f0);
    } while( true );
  }
LAB_0453dba0:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_100);
LAB_0453caa8:
  uVar38 = *(undefined8 *)(pWVar15 + 8);
  uVar40 = 0;
  lVar16 = FUN_04528d68(uVar38,*(undefined8 *)(pWVar15 + 0x10));
  if (lVar16 != 0) {
    do {
      pMVar19 = (MapEventItem *)FUN_04528dd0(uVar38,uVar40);
      uVar5 = FUN_04528b44(*(undefined2 *)(pMVar19 + 0x10));
      uVar37 = (uint)uVar5;
      if ((pWVar15[0x5d] == (WorldData)0x0) && (local_150 <= uVar5)) {
        uVar37 = (100 - (int)local_150) + uVar37;
        FUN_04528b3c(pMVar19 + 0x10,uVar37);
      }
      uVar38 = *(undefined8 *)(pWVar15 + 0x60);
      uVar39 = (ulong)(int)uVar37;
      uVar20 = FUN_04528e18(uVar38,*(undefined8 *)(pWVar15 + 0x68));
      if (uVar20 <= uVar39) {
        uVar39 = 0;
      }
      lVar16 = FUN_04528e38(uVar38,uVar39);
      MapEventItem::SetAssetFilter(pMVar19,*(int *)(lVar16 + 0x10));
      pRVar21 = (RtWeakPtr *)FUN_04528e38(*(undefined8 *)(pWVar15 + 0x60),uVar39);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar21);
      if (bVar2) {
        pRVar25 = (RtWeakPtrBase *)FUN_04528e38(*(undefined8 *)(pWVar15 + 0x60),uVar39);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_40,pRVar25);
        pRVar26 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  FUN_04528e38(*(undefined8 *)(pWVar15 + 0x60),uVar39);
        pLVar23 = (LotteryResultProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar26);
        iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar23);
        Sexy::Point::Point((Point *)&local_b0,-(iVar7 / 2),0);
        MapEventItem::SetImageData
                  (pMVar19,(string *)&local_40,
                   (vector<WorldDungeonInfo,std::allocator<WorldDungeonInfo>> *)&local_b0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      }
      else {
        lVar16 = FUN_04528e38(*(undefined8 *)(pWVar15 + 0x60),uVar39);
        if ((*(long *)(lVar16 + 8) != 0) &&
           (sVar6 = FUN_04528bac(*(undefined2 *)(pMVar19 + 0xe2)), sVar6 == -1)) {
          uVar8 = FUN_04528cac(*(undefined8 *)(pWVar15 + 0x78),*(undefined8 *)(pWVar15 + 0x80));
          FUN_04528ba4(pMVar19 + 0xe2,uVar8);
          lVar16 = FUN_04528e38(*(undefined8 *)(pWVar15 + 0x60),uVar39);
          pPVar12 = (PopAnim *)FUN_04528c30(*(undefined8 *)(*(long *)(lVar16 + 8) + 0x20));
          pEVar22 = PopAnimRig::CreateRigOutsideTable<EffectAnimRig_IslandNode>(pPVar12);
          Sexy::SexyTransform2D::SexyTransform2D((SexyTransform2D *)aDStack_70);
          iVar7 = FUN_045296fc(0x61);
          FUN_04528af4((float)-iVar7,(float)-iVar7,auStack_68,auStack_5c);
          PopAnimRig::SetRenderTransform((PopAnimRig *)pEVar22,(SexyTransform2D *)aDStack_70);
          FUN_04528e38(*(undefined8 *)(pWVar15 + 0x60),uVar39);
          nop();
          FUN_04528c40(*(undefined4 *)(extraout_x0 + 0x210),extraout_x0 + 0x214,&local_e8,
                       (vector<WorldDungeonInfo,std::allocator<WorldDungeonInfo>> *)&local_b0);
          FUN_04528c34(local_e8._0_4_,local_b0._0_4_,pEVar22 + 0x210,pEVar22 + 0x214);
          std::string::string((string *)&local_40,"idle");
          EffectAnimRig_DelayReplayAnim::PlayAnimation(pEVar22,(string *)&local_40);
          std::string::~string((string *)&local_40);
          nop();
          PopAnimRig::RandomizeCurrentAnimFrame((PopAnimRig *)pEVar22);
          fVar44 = (float)PVZ_T();
          fVar45 = (float)PVZ_Dt();
          PopAnimRig::UpdateAnim((PopAnimRig *)pEVar22,fVar44,fVar45);
          local_40 = pEVar22;
          std::vector<PopAnimRig*,std::allocator<PopAnimRig*>>::push_back
                    ((vector<PopAnimRig*,std::allocator<PopAnimRig*>> *)(pWVar15 + 0x78),
                     (PopAnimRig **)&local_40);
          initializeAudioRTPC(this,pMVar19);
        }
      }
      uVar40 = uVar40 + 1;
      uVar38 = *(undefined8 *)(pWVar15 + 8);
      uVar39 = FUN_04528d68(uVar38,*(undefined8 *)(pWVar15 + 0x10));
    } while (uVar40 < uVar39);
  }
  uVar38 = *(undefined8 *)(pWVar15 + 0x20);
  uVar39 = 0;
  uVar40 = FUN_04528d68(uVar38,*(undefined8 *)(pWVar15 + 0x28));
  if (uVar40 != 0) {
    do {
      pMVar19 = (MapEventItem *)FUN_04528dd0(uVar38,uVar39);
      iVar7 = FUN_04528b48(*(undefined4 *)(pMVar19 + 0x14));
      if (iVar7 == 0xb) {
        uVar5 = FUN_04528b44(*(undefined2 *)(pMVar19 + 0x10));
        uVar37 = (uint)uVar5;
        if ((pWVar15[0x5d] == (WorldData)0x0) && (local_150 <= uVar5)) {
          uVar37 = ((uint)uVar5 - (int)local_150) + 100;
          FUN_04528b3c(pMVar19 + 0x10,uVar37);
        }
        uVar38 = *(undefined8 *)(pWVar15 + 0x60);
        uVar40 = (ulong)(int)uVar37;
        uVar20 = FUN_04528e18(uVar38,*(undefined8 *)(pWVar15 + 0x68));
        if (uVar20 <= uVar40) {
          uVar40 = 0;
        }
        lVar16 = FUN_04528e38(uVar38,uVar40);
        MapEventItem::SetAssetFilter(pMVar19,*(int *)(lVar16 + 0x10));
        pRVar21 = (RtWeakPtr *)FUN_04528e38(*(undefined8 *)(pWVar15 + 0x60),uVar40);
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar21);
        if (bVar2) {
          pRVar25 = (RtWeakPtrBase *)FUN_04528e38(*(undefined8 *)(pWVar15 + 0x60),uVar40);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_40,pRVar25);
          pRVar26 = (RtWeakPtr<Sexy::ResourceInfo> *)
                    FUN_04528e38(*(undefined8 *)(pWVar15 + 0x60),uVar40);
          pLVar23 = (LotteryResultProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar26);
          iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar23);
          pRVar26 = (RtWeakPtr<Sexy::ResourceInfo> *)
                    FUN_04528e38(*(undefined8 *)(pWVar15 + 0x60),uVar40);
          pSVar24 = (SalesProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar26);
          iVar9 = SalesProgressBar::GetCurrentLevel(pSVar24);
          Sexy::Point::Point((Point *)&local_b0,-(iVar7 / 2),-iVar9);
          MapEventItem::SetImageData
                    (pMVar19,(string *)&local_40,
                     (vector<WorldDungeonInfo,std::allocator<WorldDungeonInfo>> *)&local_b0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
        }
        else {
          lVar16 = FUN_04528e38(*(undefined8 *)(pWVar15 + 0x60),uVar40);
          if ((*(long *)(lVar16 + 8) != 0) &&
             (sVar6 = FUN_04528bac(*(undefined2 *)(pMVar19 + 0xe2)), sVar6 == -1)) {
            uVar8 = FUN_04528cac(*(undefined8 *)(pWVar15 + 0x78),*(undefined8 *)(pWVar15 + 0x80));
            FUN_04528ba4(pMVar19 + 0xe2,uVar8);
            lVar16 = FUN_04528e38(*(undefined8 *)(pWVar15 + 0x60),uVar40);
            pPVar12 = (PopAnim *)FUN_04528c30(*(undefined8 *)(*(long *)(lVar16 + 8) + 0x20));
            this_05 = PopAnimRig::CreateRigOutsideTable<EffectAnimRig_DelayReplayAnim>(pPVar12);
            Sexy::SexyTransform2D::SexyTransform2D((SexyTransform2D *)aDStack_70);
            iVar7 = FUN_045296fc(0x61);
            FUN_04528af4((float)-iVar7,(float)-iVar7,auStack_68,auStack_5c);
            PopAnimRig::SetRenderTransform((PopAnimRig *)this_05,(SexyTransform2D *)aDStack_70);
            FUN_04528e38(*(undefined8 *)(pWVar15 + 0x60),uVar40);
            nop();
            FUN_04528c40(*(undefined4 *)(extraout_x0_00 + 0x210),extraout_x0_00 + 0x214,&local_e8,
                         (vector<WorldDungeonInfo,std::allocator<WorldDungeonInfo>> *)&local_b0);
            FUN_04528c34(local_e8._0_4_,local_b0._0_4_,this_05 + 0x210,this_05 + 0x214);
            std::string::string((string *)&local_40,"idle");
            EffectAnimRig_DelayReplayAnim::PlayAnimation(this_05,(string *)&local_40);
            std::string::~string((string *)&local_40);
            nop();
            PopAnimRig::RandomizeCurrentAnimFrame((PopAnimRig *)this_05);
            fVar44 = (float)PVZ_T();
            fVar45 = (float)PVZ_Dt();
            PopAnimRig::UpdateAnim((PopAnimRig *)this_05,fVar44,fVar45);
            local_40 = (EffectAnimRig_IslandNode *)this_05;
            std::vector<PopAnimRig*,std::allocator<PopAnimRig*>>::push_back
                      ((vector<PopAnimRig*,std::allocator<PopAnimRig*>> *)(pWVar15 + 0x78),
                       (PopAnimRig **)&local_40);
          }
        }
        FUN_045291f0(pMVar19 + 0xf0);
LAB_0453cfa4:
        uVar38 = *(undefined8 *)(pWVar15 + 0x20);
        uVar40 = FUN_04528d68(uVar38,*(undefined8 *)(pWVar15 + 0x28));
      }
      else {
        if (iVar7 == 5) {
          Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)pMVar19);
          getUpgradeImage((string *)this);
          pMVar34 = (MapEventItem *)FUN_04528dd0(*(undefined8 *)(pWVar15 + 0x20),uVar39);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)&local_e8);
          pLVar23 = (LotteryResultProgressBar *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)&local_e8);
          iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar23);
          pSVar24 = (SalesProgressBar *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)&local_e8);
          iVar9 = SalesProgressBar::GetCurrentLevel(pSVar24);
          Sexy::Point::Point((Point *)&local_b0,-(iVar7 / 2),-iVar9);
          MapEventItem::SetImageData
                    (pMVar34,(string *)&local_40,
                     (vector<WorldDungeonInfo,std::allocator<WorldDungeonInfo>> *)&local_b0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
          uVar8 = FUN_04528cac(*(undefined8 *)(pWVar15 + 0x78),*(undefined8 *)(pWVar15 + 0x80));
          FUN_04528ba4(pMVar19 + 0xe2,uVar8);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_e8);
          goto LAB_0453cfa4;
        }
        if (iVar7 != 4) {
          if (iVar7 == 1) {
            local_e8 = (PopAnimRig *)
                       std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                *)avStack_c8);
            local_b0 = (PopAnimRig *)
                       std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)avStack_c8);
            while (bVar2 = __gnu_cxx::operator!=
                                     ((__normal_iterator *)&local_e8,(__normal_iterator *)&local_b0)
                  , bVar2) {
              lVar16 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_e8);
              psVar30 = (string *)
                        Sexy::FilesystemSaveGameContext::GetBuffer
                                  ((FilesystemSaveGameContext *)pMVar19);
              cVar3 = std::operator==(psVar30,(string *)(lVar16 + 0x20));
              if (cVar3 != '\0') {
                this_03 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
                cVar3 = NameMapperBase::ContainsId(this_03,*(int *)(lVar16 + 0x10));
                if (cVar3 != '\0') {
                  iVar7 = PlantChipNameMapperServerID::GetInstance();
                  NameMapperBase::GetNameForId(iVar7);
                  NetworkCacheQueue::setWechatUserID((string *)pMVar19);
                  std::string::~string((string *)&local_40);
                  cVar3 = DangerRoomUtils::IsMapEventDangerRoom(pMVar19);
                  iVar7 = FUN_04528b58(*(undefined4 *)(pMVar19 + 0x78));
                  goto joined_r0x0453d734;
                }
                break;
              }
              __gnu_cxx::
              __normal_iterator<Sexy::PIValue2D_const*,std::vector<Sexy::PIValue2D,std::allocator<Sexy::PIValue2D>>>
              ::operator++((__normal_iterator<Sexy::PIValue2D_const*,std::vector<Sexy::PIValue2D,std::allocator<Sexy::PIValue2D>>>
                            *)&local_e8);
            }
            cVar3 = DangerRoomUtils::IsMapEventDangerRoom(pMVar19);
            iVar7 = FUN_04528b58(*(undefined4 *)(pMVar19 + 0x78));
joined_r0x0453d734:
            if (iVar7 == 3) {
              sVar6 = FUN_04528ba0(*(undefined2 *)(pMVar19 + 0xe0));
              uVar37 = (uint)sVar6;
              if (uVar37 == 0xffffffff) {
                uVar37 = FUN_04528cac(*(undefined8 *)(this + 0x1a8),*(undefined8 *)(this + 0x1b0));
                local_40 = (EffectAnimRig_IslandNode *)0x0;
                std::vector<PopAnimRig*,std::allocator<PopAnimRig*>>::push_back
                          ((vector<PopAnimRig*,std::allocator<PopAnimRig*>> *)(this + 0x1a8),
                           (PopAnimRig **)&local_40);
              }
              else {
                plVar28 = (long *)GetPopAnimRigByID(this,sVar6);
                if (plVar28 != (long *)0x0) {
                  (**(code **)(*plVar28 + 0x18))();
                }
              }
              FUN_04528b98(pMVar19 + 0xe0,uVar37 & 0xffff);
              std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::
              _Hash_node((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_f8
                        );
              cVar3 = FUN_0547419c((string *)(pMVar19 + 0x130));
              if (cVar3 == '\0') {
                GetPAMByName((string *)(pMVar19 + 0x130));
                Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                          ((RtWeakPtr<PowerPropertySheet> *)&local_f8,(RtWeakPtr *)&local_40);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
              }
              else {
                std::string::string((string *)&local_f0,"POPANIM_WORLDMAP_ZOMBOSS_NODE_%s");
                nop();
                auVar47 = FUN_0547429c((string *)&local_f0);
                Sexy::StringToUpper((Sexy *)psVar36,auVar47._8_8_);
                uVar38 = FUN_0547429c((exception_ptr *)&local_e8);
                Sexy::StrFormat(auVar47._0_8_,
                                (vector<WorldDungeonInfo,std::allocator<WorldDungeonInfo>> *)
                                &local_b0,uVar38);
                GetPAMByName((string *)&local_b0);
                Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                          ((RtWeakPtr<PowerPropertySheet> *)&local_f8,(RtWeakPtr *)&local_40);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
                std::string::~string((string *)&local_b0);
                std::string::~string((string *)&local_e8);
                std::string::~string((string *)&local_f0);
              }
              pPVar12 = (PopAnim *)
                        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)&local_f8);
              this_04 = PopAnimRig::CreateRigOutsideTable<EffectAnimRig_LevelNode_Zomboss>(pPVar12);
              Sexy::SexyTransform2D::SexyTransform2D((SexyTransform2D *)aDStack_70);
              fVar44 = (float)FUN_04529710(0x42980000);
              fVar45 = (float)FUN_04529710(0x42b40000);
              FUN_04528af4(-fVar44,-fVar45,auStack_68,auStack_5c);
              PopAnimRig::SetRenderTransform((PopAnimRig *)this_04,(SexyTransform2D *)aDStack_70);
              PopAnimRig::SetDrawScale
                        ((PopAnimRig *)this_04,*(float *)(gLawnApp + 0x28dc) * 0.0006510417);
              fVar44 = (float)PVZ_T();
              fVar45 = (float)PVZ_Dt();
              PopAnimRig::UpdateAnim((PopAnimRig *)this_04,fVar44,fVar45);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_f8);
              pPVar12 = CachedResourcePtr::operator_cast_to_PopAnim_
                                  ((CachedResourcePtr *)&DAT_06b0fb08);
              pEVar27 = PopAnimRig::CreateRigOutsideTable<EffectAnimRig_LevelNode>(pPVar12);
              Sexy::SexyTransform2D::SexyTransform2D((SexyTransform2D *)aDStack_70);
              fVar44 = (float)FUN_04529710(0x42c40000);
              fVar45 = (float)FUN_04529710(0x42d00000);
              FUN_04528af4(-fVar44,-fVar45,auStack_68,auStack_5c);
              PopAnimRig::SetRenderTransform((PopAnimRig *)pEVar27,(SexyTransform2D *)aDStack_70);
              EffectAnimRig_LevelNode_Zomboss::SetOverlayNode(this_04,pEVar27);
              puVar35 = (undefined8 *)FUN_04528cb8(*(undefined8 *)(this + 0x1a8),(long)(int)uVar37);
              *puVar35 = this_04;
              updateZombossNodeRenderStatusForEventItem(this,pWVar15,pMVar19);
            }
            else if ((cVar3 == '\0') ||
                    (sVar6 = FUN_04528bac(*(undefined2 *)(pMVar19 + 0xe2)), sVar6 != -1)) {
              sVar6 = FUN_04528ba0(*(undefined2 *)(pMVar19 + 0xe0));
              if (sVar6 == -1) {
                uVar8 = FUN_04528cac(*(undefined8 *)(this + 0x1a8),*(undefined8 *)(this + 0x1b0));
                FUN_04528b98(pMVar19 + 0xe0,uVar8);
                CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06b0fd48);
                iVar7 = FUN_04528b58(*(undefined4 *)(pMVar19 + 0x78));
                if (iVar7 == 1) {
                  this_06 = (CachedResourcePtr *)&DAT_06b0fb90;
LAB_0453e600:
                  CachedResourcePtr::operator_cast_to_RtWeakPtr(this_06);
                  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                            ((RtWeakPtr<PowerPropertySheet> *)&local_b0,(RtWeakPtr *)&local_40);
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
                }
                else if (((iVar7 == 2) || (iVar7 == 3)) || (iVar7 == 4)) {
                  this_06 = (CachedResourcePtr *)&DAT_06b0fb08;
                  goto LAB_0453e600;
                }
                pPVar12 = (PopAnim *)
                          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_b0);
                pEVar27 = PopAnimRig::CreateRigOutsideTable<EffectAnimRig_LevelNode>(pPVar12);
                Sexy::SexyTransform2D::SexyTransform2D((SexyTransform2D *)aDStack_70);
                Sexy::SexyTransform2D::Scale((SexyTransform2D *)aDStack_70,1.0,1.0);
                fVar44 = (float)FUN_04529710(0x42c40000);
                fVar45 = (float)FUN_04529710(0x42d00000);
                FUN_04528af4(-fVar44,-fVar45,auStack_68,auStack_5c);
                PopAnimRig::SetRenderTransform((PopAnimRig *)pEVar27,(SexyTransform2D *)aDStack_70);
                cVar3 = FUN_04528b7c(pMVar19[0xf2]);
                if (cVar3 == '\0') {
                  cVar3 = FUN_04528b70(pMVar19[0xf1]);
                  if (cVar3 == '\0') {
                    (**(code **)(*(long *)pEVar27 + 0x118))(pEVar27);
                  }
                  else {
                    (**(code **)(*(long *)pEVar27 + 0x128))(pEVar27);
                  }
                }
                else {
                  (**(code **)(*(long *)pEVar27 + 0x138))(pEVar27);
                }
                fVar44 = (float)PVZ_T();
                fVar45 = (float)PVZ_Dt();
                PopAnimRig::UpdateAnim((PopAnimRig *)pEVar27,fVar44,fVar45);
                local_40 = (EffectAnimRig_IslandNode *)pEVar27;
                std::vector<PopAnimRig*,std::allocator<PopAnimRig*>>::push_back
                          ((vector<PopAnimRig*,std::allocator<PopAnimRig*>> *)(this + 0x1a8),
                           (PopAnimRig **)&local_40);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)&local_b0);
              }
            }
            else {
              uVar8 = FUN_04528cac(*(undefined8 *)(pWVar15 + 0x78),*(undefined8 *)(pWVar15 + 0x80));
              FUN_04528ba4(pMVar19 + 0xe2,uVar8);
              std::string::string(asStack_108,"POPANIM_WORLDMAP_DANGER_NODE_%s");
              nop();
              auVar47 = FUN_0547429c(asStack_108);
              Sexy::StringToUpper((Sexy *)psVar36,auVar47._8_8_);
              uVar38 = FUN_0547429c((vector<WorldDungeonInfo,std::allocator<WorldDungeonInfo>> *)
                                    &local_b0);
              Sexy::StrFormat(auVar47._0_8_,(string *)&local_40,uVar38);
              GetPAMByName((string *)&local_40);
              std::string::~string((string *)&local_40);
              std::string::~string((string *)&local_b0);
              pPVar12 = (PopAnim *)
                        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_100);
              pRVar13 = (RtClass *)PopAnimRig::StaticGetClass();
              local_f8 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable(pPVar12,pRVar13);
              Sexy::SexyTransform2D::SexyTransform2D((SexyTransform2D *)aDStack_70);
              Sexy::SexyTransform2D::Scale((SexyTransform2D *)aDStack_70,1.0,1.0);
              fVar44 = (float)FUN_04529710(0x42c40000);
              fVar45 = (float)FUN_04529710(0x42d00000);
              FUN_04528af4(-fVar44,-fVar45,auStack_68,auStack_5c);
              PopAnimRig::SetRenderTransform(local_f8,(SexyTransform2D *)aDStack_70);
              cVar3 = FUN_04528b7c(pMVar19[0xf2]);
              pPVar14 = local_f8;
              if (cVar3 == '\0') {
                cVar3 = FUN_04528b70(pMVar19[0xf1]);
                pPVar14 = local_f8;
                if (cVar3 == '\0') {
                  local_128 = *(code **)(*(long *)local_f8 + 0x78);
                  std::string::string((string *)&local_b0,"locked_idle");
                  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)
                             &local_40);
                }
                else {
                  local_128 = *(code **)(*(long *)local_f8 + 0x78);
                  std::string::string((string *)&local_b0,"unlocked_idle");
                  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)
                             &local_40);
                }
              }
              else {
                local_128 = *(code **)(*(long *)local_f8 + 0x78);
                std::string::string((string *)&local_b0,"unlocked_idle");
                std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                          ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)
                           &local_40);
              }
              (*local_128)(pPVar14,(vector<WorldDungeonInfo,std::allocator<WorldDungeonInfo>> *)
                                   &local_b0,1,0,(string *)&local_40);
              std::vector<int,std::allocator<int>>::~vector
                        ((vector<int,std::allocator<int>> *)&local_40);
              std::string::~string((string *)&local_b0);
              nop();
              uVar38 = LawnApp::GetLastCompletedLevel(gLawnApp);
              FUN_05475d88((string *)&local_f0,uVar38);
              lVar16 = FUN_05474178((string *)&local_f0);
              if (lVar16 != 0) {
                pWVar33 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
                pMVar34 = (MapEventItem *)
                          WorldDataManager::FindEventByLevelName(pWVar33,(string *)&local_f0);
                if (pMVar34 == (MapEventItem *)0x0) {
                  pWVar33 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
                  pMVar34 = (MapEventItem *)
                            WorldDataManager::FindEventByName(pWVar33,(string *)&local_f0);
                }
                std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                          ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)
                           &local_b0);
                pWVar33 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
                WorldDataManager::FindEventsUnlockedByEvent(pWVar33,pMVar34,(vector *)&local_b0);
                pPVar14 = local_b0;
                uVar40 = FUN_04528ddc(local_b0,local_a8);
                uVar20 = 0;
                if (uVar40 != 0) {
                  do {
                    puVar35 = (undefined8 *)FUN_04528de8(pPVar14,uVar20);
                    pPVar1 = local_f8;
                    if (pMVar19 == (MapEventItem *)*puVar35) {
                      pcVar43 = *(code **)(*(long *)local_f8 + 0x78);
                      std::string::string((string *)&local_e8,"locked_idle");
                      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)
                                 &local_40);
                      (*pcVar43)(pPVar1,(exception_ptr *)&local_e8,1,0,(string *)&local_40);
                      std::vector<int,std::allocator<int>>::~vector
                                ((vector<int,std::allocator<int>> *)&local_40);
                      std::string::~string((string *)&local_e8);
                      nop();
                      pPVar14 = local_b0;
                      uVar40 = FUN_04528ddc(local_b0,local_a8);
                    }
                    uVar20 = uVar20 + 1;
                  } while (uVar20 < uVar40);
                }
                std::vector<MapEventItem*,std::allocator<MapEventItem*>>::~vector
                          ((vector<MapEventItem*,std::allocator<MapEventItem*>> *)&local_b0);
              }
              pPVar14 = local_f8;
              fVar44 = (float)PVZ_T();
              fVar45 = (float)PVZ_Dt();
              PopAnimRig::UpdateAnim(pPVar14,fVar44,fVar45);
              std::vector<PopAnimRig*,std::allocator<PopAnimRig*>>::push_back
                        ((vector<PopAnimRig*,std::allocator<PopAnimRig*>> *)(pWVar15 + 0x78),
                         &local_f8);
              std::string::~string((string *)&local_f0);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_100);
              std::string::~string(asStack_108);
            }
          }
          else if (iVar7 - 2U < 2) {
            sVar6 = FUN_04528bac(*(undefined2 *)(pMVar19 + 0xe2));
            if (sVar6 == -1) {
              uVar8 = FUN_04528cac(*(undefined8 *)(pWVar15 + 0x78),*(undefined8 *)(pWVar15 + 0x80));
              FUN_04528ba4(pMVar19 + 0xe2,uVar8);
              psVar30 = (string *)
                        Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
              Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)pMVar19);
              ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar30);
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)&local_b0);
              pPVar14 = (PopAnimRig *)CreateStandalonePlantAnimRig((string *)&local_40,1);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
              Sexy::SexyTransform2D::SexyTransform2D((SexyTransform2D *)aDStack_70);
              Sexy::SexyTransform2D::Scale((SexyTransform2D *)aDStack_70,1.0,1.0);
              pPVar31 = (PlantType *)
                        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)&local_b0);
              lVar16 = PlantType::GetProps(pPVar31);
              fVar44 = (float)FUN_04529710(*(undefined4 *)(lVar16 + 0x9c));
              pPVar31 = (PlantType *)
                        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)&local_b0);
              lVar16 = PlantType::GetProps(pPVar31);
              fVar45 = (float)FUN_04529710(*(undefined4 *)(lVar16 + 0xa0));
              FUN_04528af4(-fVar44,-fVar45,auStack_68,auStack_5c);
              PopAnimRig::SetRenderTransform(pPVar14,(SexyTransform2D *)aDStack_70);
              (**(code **)(*(long *)pPVar14 + 0x1a0))(pPVar14,0);
              fVar44 = (float)PVZ_T();
              fVar45 = (float)PVZ_Dt();
              PopAnimRig::UpdateAnim(pPVar14,fVar44,fVar45);
              local_40 = (EffectAnimRig_IslandNode *)pPVar14;
              std::vector<PopAnimRig*,std::allocator<PopAnimRig*>>::push_back
                        ((vector<PopAnimRig*,std::allocator<PopAnimRig*>> *)(pWVar15 + 0x78),
                         (PopAnimRig **)&local_40);
              initializeAudioRTPC(this,pMVar19);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_b0);
            }
            sVar6 = FUN_04528ba0(*(undefined2 *)(pMVar19 + 0xe0));
            if (sVar6 == -1) {
              uVar8 = FUN_04528cac(*(undefined8 *)(this + 0x1a8),*(undefined8 *)(this + 0x1b0));
              FUN_04528b98(pMVar19 + 0xe0,uVar8);
              CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06b0ff38);
              pPVar12 = (PopAnim *)
                        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)&local_f0);
              pRVar13 = (RtClass *)PopAnimRig::StaticGetClass();
              local_e8 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable(pPVar12,pRVar13);
              Sexy::SexyTransform2D::SexyTransform2D((SexyTransform2D *)aDStack_70);
              Sexy::SexyTransform2D::Scale((SexyTransform2D *)aDStack_70,1.0,1.0);
              fVar44 = (float)FUN_04529710(0x42c40000);
              fVar45 = (float)FUN_04529710(0x42e60000);
              FUN_04528af4(-fVar44,-fVar45,auStack_68,auStack_5c);
              PopAnimRig::SetRenderTransform(local_e8,(SexyTransform2D *)aDStack_70);
              cVar3 = FUN_04528b7c(pMVar19[0xf2]);
              pPVar14 = local_e8;
              if (cVar3 == '\0') {
                pcVar43 = *(code **)(*(long *)local_e8 + 0x78);
                std::string::string((string *)&local_b0,"idle");
                std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                          ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)
                           &local_40);
              }
              else {
                pcVar43 = *(code **)(*(long *)local_e8 + 0x78);
                std::string::string((string *)&local_b0,"idle2");
                std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                          ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)
                           &local_40);
              }
              (*pcVar43)(pPVar14,(vector<WorldDungeonInfo,std::allocator<WorldDungeonInfo>> *)
                                 &local_b0,1,0,(string *)&local_40);
              std::vector<int,std::allocator<int>>::~vector
                        ((vector<int,std::allocator<int>> *)&local_40);
              std::string::~string((string *)&local_b0);
              nop();
              pPVar14 = local_e8;
              fVar44 = (float)PVZ_T();
              fVar45 = (float)PVZ_Dt();
              PopAnimRig::UpdateAnim(pPVar14,fVar44,fVar45);
              std::vector<PopAnimRig*,std::allocator<PopAnimRig*>>::push_back
                        ((vector<PopAnimRig*,std::allocator<PopAnimRig*>> *)(this + 0x1a8),&local_e8
                        );
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_f0);
            }
          }
          else {
            if ((iVar7 != 0xc) ||
               (sVar6 = FUN_04528bac(*(undefined2 *)(pMVar19 + 0xe2)), sVar6 != -1))
            goto LAB_0453cc28;
            pPVar12 = CachedResourcePtr::operator_cast_to_PopAnim_
                                ((CachedResourcePtr *)&DAT_06b0fcf0);
            pRVar13 = (RtClass *)PopAnimRig::StaticGetClass();
            local_b0 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable(pPVar12,pRVar13);
            uVar8 = FUN_04528cac(*(undefined8 *)(pWVar15 + 0x78),*(undefined8 *)(pWVar15 + 0x80));
            FUN_04528ba4(pMVar19 + 0xe2,uVar8);
            Sexy::SexyTransform2D::SexyTransform2D(aSStack_98);
            Sexy::SexyTransform2D::Scale(aSStack_98,1.0,1.0);
            fVar44 = (float)FUN_04529710(0x42c80000);
            FUN_04528af4(-fVar44,-fVar44,auStack_90,auStack_84);
            PopAnimRig::SetRenderTransform(local_b0,aSStack_98);
            pPVar14 = local_b0;
            std::string::string((string *)&local_40,"idle");
            Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_70);
            PopAnimRig::PlayAndContinue(pPVar14,(string *)&local_40,0,aDStack_70);
            std::string::~string((string *)&local_40);
            nop();
            std::vector<PopAnimRig*,std::allocator<PopAnimRig*>>::push_back
                      ((vector<PopAnimRig*,std::allocator<PopAnimRig*>> *)(pWVar15 + 0x78),&local_b0
                      );
          }
          goto LAB_0453cfa4;
        }
        sVar6 = FUN_04528bac(*(undefined2 *)(pMVar19 + 0xe2));
        if (sVar6 == -1) {
          Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)pMVar19);
          getUpgradeImage((string *)this);
          pMVar34 = (MapEventItem *)FUN_04528dd0(*(undefined8 *)(pWVar15 + 0x20),uVar39);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)&local_f8);
          pLVar23 = (LotteryResultProgressBar *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)&local_f8);
          iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar23);
          iVar9 = FUN_045296fc(1);
          pSVar24 = (SalesProgressBar *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)&local_f8);
          iVar10 = SalesProgressBar::GetCurrentLevel(pSVar24);
          iVar11 = FUN_045296fc(0xfffffff4);
          Sexy::Point::Point((Point *)&local_b0,-iVar9 - iVar7 / 2,-iVar11 - iVar10);
          MapEventItem::SetImageData
                    (pMVar34,(string *)&local_40,
                     (vector<WorldDungeonInfo,std::allocator<WorldDungeonInfo>> *)&local_b0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
          uVar8 = FUN_04528cac(*(undefined8 *)(pWVar15 + 0x78),*(undefined8 *)(pWVar15 + 0x80));
          FUN_04528ba4(pMVar19 + 0xe2,uVar8);
          Sexy::StringToUpper((Sexy *)psVar36,extraout_x1);
          uVar38 = FUN_0547429c((vector<WorldDungeonInfo,std::allocator<WorldDungeonInfo>> *)
                                &local_b0);
          Sexy::StrFormat("POPANIM_EFFECTS_COLLECTED_UPGRADE_EFFECT",(string *)&local_40,uVar38);
          GetPAMByName((string *)&local_40);
          std::string::~string((string *)&local_40);
          std::string::~string((string *)&local_b0);
          pPVar12 = (PopAnim *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)&local_f0);
          pRVar13 = (RtClass *)PopAnimRig::StaticGetClass();
          local_e8 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable(pPVar12,pRVar13);
          Sexy::SexyTransform2D::SexyTransform2D((SexyTransform2D *)aDStack_70);
          iVar7 = FUN_045296fc(0x43);
          iVar9 = FUN_045296fc(0x47);
          FUN_04528af4((float)-iVar7,(float)-iVar9,auStack_68,auStack_5c);
          PopAnimRig::SetRenderTransform(local_e8,(SexyTransform2D *)aDStack_70);
          pPVar14 = local_e8;
          pcVar43 = *(code **)(*(long *)local_e8 + 0x78);
          std::string::string((string *)&local_b0,"idle");
          std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                    ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_40);
          (*pcVar43)(pPVar14,(vector<WorldDungeonInfo,std::allocator<WorldDungeonInfo>> *)&local_b0,
                     1,0,(string *)&local_40);
          std::vector<int,std::allocator<int>>::~vector
                    ((vector<int,std::allocator<int>> *)&local_40);
          std::string::~string((string *)&local_b0);
          nop();
          pPVar14 = local_e8;
          fVar44 = (float)PVZ_T();
          fVar45 = (float)PVZ_Dt();
          PopAnimRig::UpdateAnim(pPVar14,fVar44,fVar45);
          std::vector<PopAnimRig*,std::allocator<PopAnimRig*>>::push_back
                    ((vector<PopAnimRig*,std::allocator<PopAnimRig*>> *)(pWVar15 + 0x78),&local_e8);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_f0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_f8);
          goto LAB_0453cfa4;
        }
      }
LAB_0453cc28:
      uVar39 = uVar39 + 1;
    } while (uVar39 < uVar40);
  }
  if ((local_150 != 0xffffffffffffffff) && (pWVar15[0x5d] == (WorldData)0x0)) {
    pWVar15[0x5d] = (WorldData)0x1;
  }
  rebuildMapPathGroups(this,pWVar15);
  std::vector<WorldDungeonInfo,std::allocator<WorldDungeonInfo>>::~vector
            ((vector<WorldDungeonInfo,std::allocator<WorldDungeonInfo>> *)avStack_c8);
  std::vector<DungeonInfo,std::allocator<DungeonInfo>>::~vector
            ((vector<DungeonInfo,std::allocator<DungeonInfo>> *)avStack_e0);
  std::string::~string(asStack_110);
LAB_0453c8f4:
  iVar46 = iVar46 + 1;
  goto LAB_0453c900;
code_r0x0453e330:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_e8);
  std::string::~string((string *)&local_f0);
  std::string::~string((string *)&local_f8);
  goto LAB_0453dba0;
}


/* WorldMap::setupMap() */

void __thiscall WorldMap::setupMap(WorldMap *this)

{
  remapWorldMapEvents(this);
  initLoadedWorldResources(this);
  (**(code **)(*(long *)this + 0x378))(this);
  return;
}


/* WorldMap::onEnterState_BackgroundInit(WorldMapState) */

void WorldMap::onEnterState_BackgroundInit(WorldMap *param_1)

{
  ProfileMgr *this;
  PlayerInfo *this_00;
  float fVar1;
  
  initLoadedWorldResources(param_1);
  WorldMapActionManager::QueueAllInitActions((WorldMapActionManager *)(param_1 + 0x358));
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  fVar1 = (float)PlayerInfo::GetLastWorldMapZoomLevel(this_00);
  if (0.99 <= fVar1) {
    return;
  }
  ZoomOutNoAnimation(param_1);
  return;
}


/* WorldMap::refreshMapPathGroups() */

void __thiscall WorldMap::refreshMapPathGroups(WorldMap *this)

{
  WorldData *pWVar1;
  
  pWVar1 = (WorldData *)FUN_04528c10(*(undefined8 *)(this + 0x2f0));
  rebuildMapPathGroups(this,pWVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::rebuildResourceGrid() */

void WorldMap::rebuildResourceGrid(void)

{
  int iVar1;
  float fVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  WorldDataManager *this;
  long lVar9;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var10;
  float *pfVar11;
  long lVar12;
  float *pfVar13;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar14;
  undefined8 uVar15;
  vector<unsigned_char,std::allocator<unsigned_char>> *this_00;
  int iVar16;
  undefined8 uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int local_44;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  undefined8 local_28;
  undefined8 local_20;
  int local_18;
  int local_14;
  long local_8;
  
  iVar19 = 0;
  local_8 = ___stack_chk_guard;
  lVar8 = WorldMapUtils::GetWorldMapListForEdit();
  this = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
  lVar9 = WorldDataManager::GetWorldDataByIdx(this,0);
  p_Var10 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)FUN_04528dd0(*(undefined8 *)(lVar9 + 8),0);
  pfVar11 = (float *)std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_end(p_Var10);
  fVar2 = *pfVar11;
  local_38 = fVar2;
  lVar9 = WorldDataManager::GetWorldDataByIdx(this,0);
  p_Var10 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)FUN_04528dd0(*(undefined8 *)(lVar9 + 8),0);
  lVar9 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_end(p_Var10);
  local_34 = *(float *)(lVar9 + 4);
  local_30 = fVar2;
  local_2c = local_34;
  iVar5 = WorldDataManager::GetWorldDataCount(this);
  if (0 < iVar5) {
    do {
      lVar9 = WorldDataManager::GetWorldDataByIdx(this,iVar19);
      uVar17 = *(undefined8 *)(lVar9 + 8);
      lVar12 = FUN_04528d68(uVar17,*(undefined8 *)(lVar9 + 0x10));
      for (lVar9 = 0; lVar9 != lVar12; lVar9 = lVar9 + 1) {
        p_Var10 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)FUN_04528dd0(uVar17,lVar9);
        pfVar11 = (float *)std::
                           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           ::_M_end(p_Var10);
        pfVar13 = eastl::min_alt<float>(pfVar11,&local_38);
        local_38 = *pfVar13;
        pfVar13 = eastl::min_alt<float>(pfVar11 + 1,&local_34);
        local_34 = *pfVar13;
        pfVar13 = eastl::max_alt<float>(pfVar11,&local_30);
        local_30 = *pfVar13;
        pfVar11 = eastl::max_alt<float>(pfVar11 + 1,&local_2c);
        local_2c = *pfVar11;
      }
      iVar19 = iVar19 + 1;
      iVar5 = WorldDataManager::GetWorldDataCount(this);
    } while (iVar19 < iVar5);
  }
  iVar5 = (int)local_38 + -600;
  *(int *)(lVar8 + 0x48) = iVar5;
  iVar19 = ((int)local_30 - (int)local_38) + 0x4b0;
  iVar6 = (int)local_34 + -600;
  *(int *)(lVar8 + 0x50) = iVar19;
  *(int *)(lVar8 + 0x40) = iVar5;
  iVar5 = ((int)local_2c - (int)local_34) + 0x4b0;
  *(int *)(lVar8 + 0x54) = iVar5;
  *(int *)(lVar8 + 0x4c) = iVar6;
  *(int *)(lVar8 + 0x44) = iVar6;
  *(int *)(lVar8 + 0x38) = iVar19 / 600 + 1;
  *(int *)(lVar8 + 0x3c) = iVar5 / 600 + 1;
  std::
  vector<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::allocator<std::vector<unsigned_char,std::allocator<unsigned_char>>>>
  ::clear((vector<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::allocator<std::vector<unsigned_char,std::allocator<unsigned_char>>>>
           *)(lVar8 + 0x20));
  std::
  vector<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::allocator<std::vector<unsigned_char,std::allocator<unsigned_char>>>>
  ::resize((vector<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::allocator<std::vector<unsigned_char,std::allocator<unsigned_char>>>>
            *)(lVar8 + 0x20),(long)(*(int *)(lVar8 + 0x38) * *(int *)(lVar8 + 0x3c)));
  Sexy::Insets::Insets((Insets *)&local_18,0,0,600,600);
  iVar19 = *(int *)(lVar8 + 0x38);
  if (0 < iVar19) {
    local_44 = -0x960;
    iVar6 = *(int *)(lVar8 + 0x3c);
    iVar5 = 0;
    do {
      if (0 < iVar6) {
        iVar21 = 0;
        iVar16 = -0x960;
        do {
          iVar18 = iVar5 + -4;
          iVar20 = local_44;
          do {
            if ((-1 < iVar18) && (iVar18 < iVar19)) {
              iVar19 = iVar21 + -4;
              local_18 = *(int *)(lVar8 + 0x40) + iVar20;
              iVar1 = iVar16;
              do {
                if ((-1 < iVar19) && (iVar19 < iVar6)) {
                  iVar6 = 0;
                  local_14 = *(int *)(lVar8 + 0x44) + iVar1;
                  iVar7 = WorldDataManager::GetWorldDataCount(this);
                  if (0 < iVar7) {
                    do {
                      lVar9 = WorldDataManager::GetWorldDataByIdx(this,iVar6);
                      if ((*(int *)(lVar9 + 0x54) != 0) &&
                         (cVar3 = Sexy::TRect<int>::Intersects
                                            ((TRect<int> *)(lVar9 + 0x4c),(TRect *)&local_18),
                         cVar3 != '\0')) {
                        lVar12 = (long)(iVar5 + iVar21 * *(int *)(lVar8 + 0x38));
                        pvVar14 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                   *)FUN_04528e50(*(undefined8 *)(lVar8 + 0x20),lVar12);
                        uVar17 = std::
                                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                 ::begin(pvVar14);
                        pvVar14 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                   *)FUN_04528e50(*(undefined8 *)(lVar8 + 0x20),lVar12);
                        uVar15 = std::
                                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                 ::end(pvVar14);
                        local_28 = std::
                                   find<__gnu_cxx::__normal_iterator<unsigned_char*,std::vector<unsigned_char,std::allocator<unsigned_char>>>,unsigned_short>
                                             (uVar17,uVar15,lVar9 + 0x48);
                        pvVar14 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                   *)FUN_04528e50(*(undefined8 *)(lVar8 + 0x20),lVar12);
                        local_20 = std::
                                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                   ::end(pvVar14);
                        bVar4 = __gnu_cxx::operator==
                                          ((__normal_iterator *)&local_28,
                                           (__normal_iterator *)&local_20);
                        if (bVar4) {
                          this_00 = (vector<unsigned_char,std::allocator<unsigned_char>> *)
                                    FUN_04528e50(*(undefined8 *)(lVar8 + 0x20),lVar12);
                          local_20 = CONCAT71(local_20._1_7_,(char)*(undefined2 *)(lVar9 + 0x48));
                          std::vector<unsigned_char,std::allocator<unsigned_char>>::push_back
                                    (this_00,(uchar *)&local_20);
                        }
                      }
                      iVar6 = iVar6 + 1;
                      iVar7 = WorldDataManager::GetWorldDataCount(this);
                    } while (iVar6 < iVar7);
                  }
                  iVar6 = *(int *)(lVar8 + 0x3c);
                }
                iVar19 = iVar19 + 1;
                iVar1 = iVar1 + 600;
              } while (iVar21 + 5 != iVar19);
              iVar19 = *(int *)(lVar8 + 0x38);
            }
            iVar18 = iVar18 + 1;
            iVar20 = iVar20 + 600;
          } while (iVar5 + 5 != iVar18);
          iVar21 = iVar21 + 1;
          iVar16 = iVar16 + 600;
        } while (iVar21 < iVar6);
      }
      local_44 = local_44 + 600;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar19);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::setCurrentWorld(WorldData*) */

void __thiscall WorldMap::setCurrentWorld(WorldMap *this,WorldData *param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  UIWidget *pUVar10;
  UIWidget *this_00;
  UIWidget *this_01;
  UIWidget *this_02;
  ProfileMgr *this_03;
  PlayerInfo *pPVar11;
  WorldLevelPackageManager *pWVar12;
  WorldMap_LevelPackageButton *this_04;
  UIWidget *pUVar13;
  float *pfVar14;
  long lVar15;
  UIWidget *this_05;
  UIWidget *this_06;
  UIWidget *this_07;
  UIWidget *this_08;
  UIWidget *this_09;
  char *__s;
  wchar_t *pwVar16;
  WorldData *pWVar17;
  float fVar18;
  string asStack_a0 [8];
  undefined4 local_98;
  undefined4 local_94;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(WorldData **)(this + 0x2f0) == param_1) goto LAB_0453ee7c;
  *(WorldData **)(this + 0x2f0) = param_1;
  if (param_1 == (WorldData *)0x0) {
    pWVar17 = (WorldData *)0x38;
  }
  else {
    pWVar17 = param_1 + 0x38;
    std::string::string((string *)&local_98,"WorldMap Current World");
    nop();
    std::string::~string((string *)&local_98);
    nop();
  }
  MessageRouter::Broadcast<WorldData*,WorldData*>
            ((MessageRouter *)gMessageRouter,Message::WorldMapSwitchedWorlds,param_1);
  cVar1 = LawnApp::IsCurrentNormalWorld(gLawnApp);
  if (cVar1 != '\0') {
    pPVar11 = (PlayerInfo *)ProfileUtils::Profile();
    PlayerInfo::UpdateWorldLevelPackageStartTime(pPVar11);
    pWVar12 = (WorldLevelPackageManager *)
              Sexy::LazySingleton<WorldLevelPackageManager>::GetInstancePtr();
    cVar1 = WorldLevelPackageManager::IsInitRequest(pWVar12);
    if (cVar1 == '\0') {
      pWVar12 = (WorldLevelPackageManager *)
                Sexy::LazySingleton<WorldLevelPackageManager>::GetInstancePtr();
      WorldLevelPackageManager::RequestNetwork(pWVar12,true);
    }
    else {
      iVar9 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar9);
      cVar1 = FUN_04528c58(local_80);
      if ((cVar1 != '\0') && (local_70 != '\0')) {
        pWVar12 = (WorldLevelPackageManager *)
                  Sexy::LazySingleton<WorldLevelPackageManager>::GetInstancePtr();
        WorldLevelPackageManager::RefreshValidPackage(pWVar12);
        std::string::string((string *)&local_98,"UIWorldMapLevelPackageButton");
        lVar15 = UIWidget::GetWidgetBySheetName((string *)&local_98);
        std::string::~string((string *)&local_98);
        nop();
        Sexy::LazySingleton<WorldLevelPackageManager>::GetInstancePtr();
        RechargeDailySignActivityManager::GetBannerImageName();
        pWVar12 = (WorldLevelPackageManager *)
                  Sexy::LazySingleton<WorldLevelPackageManager>::GetInstancePtr();
        FUN_05475d88((string *)&local_98,asStack_a0);
        cVar1 = WorldLevelPackageManager::HasValidPackage(pWVar12,(string *)&local_98);
        std::string::~string((string *)&local_98);
        pPVar11 = (PlayerInfo *)ProfileUtils::Profile();
        PlayerInfo::GetWorldLevelPackageFirstPlay(pPVar11);
        if (cVar1 == '\0') {
          if (lVar15 != 0) {
            nop();
            UIWidget::SetVisible(this_09,false);
          }
        }
        else if (lVar15 == 0) {
          Sexy::RtName::RtName((RtName *)&local_98,L"UIWorldMapLevelPackageButton");
          UIWidget::CreateWidget((string *)&local_98,1);
          Sexy::RtName::~RtName((RtName *)&local_98);
        }
        else {
          nop();
          WorldMap_LevelPackageButton::UpdateExpireTime(this_04);
          UIWidget::SetVisible((UIWidget *)this_04,true);
        }
        std::string::~string(asStack_a0);
      }
      ActiveItem::~ActiveItem(aAStack_88);
    }
  }
  cVar1 = WorldMapUtils::IsRiftWorld((string *)pWVar17);
  cVar2 = WorldMapUtils::IsPVZ1World((string *)pWVar17);
  cVar3 = WorldMapUtils::IsUnchartedWorld((string *)pWVar17);
  cVar4 = WorldMapUtils::IsCardGameWorld((string *)pWVar17);
  cVar5 = WorldMapUtils::IsPlantWarsWorld((string *)pWVar17);
  if (cVar1 == '\0') {
    if (cVar2 == '\0') {
      if (cVar3 == '\0') {
        if (cVar4 != '\0') {
          std::string::string((string *)&local_98,"UIWorldMapBackButton");
          pUVar10 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_98);
          std::string::~string((string *)&local_98);
          nop();
          if (pUVar10 != (UIWidget *)0x0) {
            UIWidget::SetVisible(pUVar10,true);
          }
          Sexy::RtName::RtName((RtName *)&local_98,L"UIWorldMapCardGameBottomBar");
          pUVar10 = (UIWidget *)UIWidget::CreateWidget((string *)&local_98,1);
          Sexy::RtName::~RtName((RtName *)&local_98);
          if (pUVar10 != (UIWidget *)0x0) {
            UIWidget::SetVisible(pUVar10,true);
          }
          Sexy::RtName::RtName((RtName *)&local_98,L"UICardGameCountDownWidget");
          pUVar10 = (UIWidget *)UIWidget::CreateWidget((string *)&local_98,1);
          Sexy::RtName::~RtName((RtName *)&local_98);
          if (pUVar10 != (UIWidget *)0x0) {
            UIWidget::SetVisible(pUVar10,true);
          }
          std::string::string((string *)&local_98,"UIWorldMapCoinBank");
          pUVar10 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_98);
          std::string::~string((string *)&local_98);
          nop();
          if (pUVar10 != (UIWidget *)0x0) {
            UIWidget::SetVisible(pUVar10,false);
          }
          goto LAB_0453f788;
        }
        if (cVar5 != '\0') {
          std::string::string((string *)&local_98,"UIWorldMapBackButton");
          pUVar10 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_98);
          std::string::~string((string *)&local_98);
          nop();
          if (pUVar10 != (UIWidget *)0x0) {
            UIWidget::SetVisible(pUVar10,true);
          }
          Sexy::RtName::RtName((RtName *)&local_98,L"UIPlantWarsInfoButton");
          pUVar10 = (UIWidget *)UIWidget::CreateWidget((string *)&local_98,1);
          Sexy::RtName::~RtName((RtName *)&local_98);
          if (pUVar10 != (UIWidget *)0x0) {
            UIWidget::SetVisible(pUVar10,true);
          }
          Sexy::RtName::RtName((RtName *)&local_98,L"UIPlantWarsLeaderBoardButton");
          pUVar10 = (UIWidget *)UIWidget::CreateWidget((string *)&local_98,1);
          Sexy::RtName::~RtName((RtName *)&local_98);
          if (pUVar10 != (UIWidget *)0x0) {
            UIWidget::SetVisible(pUVar10,true);
          }
          std::string::string((string *)&local_98,"UIWorldMapCoinBank");
          pUVar10 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_98);
          std::string::~string((string *)&local_98);
          nop();
          if (pUVar10 != (UIWidget *)0x0) {
            UIWidget::SetVisible(pUVar10,false);
          }
          std::string::string((string *)&local_98,"UIWorldMapGemBank");
          pUVar10 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_98);
          std::string::~string((string *)&local_98);
          nop();
          if (pUVar10 != (UIWidget *)0x0) {
            UIWidget::SetVisible(pUVar10,false);
          }
          Sexy::RtName::RtName((RtName *)&local_98,L"UIPlantWarsMapThemBuff");
          UIWidget::CreateWidget((string *)&local_98,1);
          nop();
          Sexy::RtName::~RtName((RtName *)&local_98);
          if (this_00 != (UIWidget *)0x0) {
            UIWidget::SetVisible(this_00,true);
          }
          Sexy::RtName::RtName((RtName *)&local_98,L"UIPlantWarsMapTitle");
          UIWidget::CreateWidget((string *)&local_98,1);
          nop();
          Sexy::RtName::~RtName((RtName *)&local_98);
          if (this_01 != (UIWidget *)0x0) {
            UIWidget::SetVisible(this_01,true);
          }
          cVar1 = PlantWarsUtils::IsPlayingPlantWarsTutorial();
          if (cVar1 != '\0') {
            PlantWarsUtils::ShowHowToPlay();
            this[0x352] = (WorldMap)0x0;
            goto LAB_0453ee7c;
          }
          goto LAB_0453ee78;
        }
        std::string::string((string *)&local_98,"UIWorldMapPerkLibraryButton");
        pUVar10 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_98);
        std::string::~string((string *)&local_98);
        nop();
        if (pUVar10 != (UIWidget *)0x0) {
          UIWidget::SetVisible(pUVar10,false);
        }
        std::string::string((string *)&local_98,"UIWorldMapRiftRankButton");
        pUVar10 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_98);
        std::string::~string((string *)&local_98);
        nop();
        if (pUVar10 != (UIWidget *)0x0) {
          UIWidget::SetVisible(pUVar10,false);
        }
        std::string::string((string *)&local_98,"UIWorldMapRiftStoreButton");
        pUVar10 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_98);
        std::string::~string((string *)&local_98);
        nop();
        if (pUVar10 != (UIWidget *)0x0) {
          UIWidget::SetVisible(pUVar10,false);
        }
        std::string::string((string *)&local_98,"UIWorldMapEventBar");
        pUVar10 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_98);
        std::string::~string((string *)&local_98);
        nop();
        if (pUVar10 != (UIWidget *)0x0) {
          UIWidget::SetVisible(pUVar10,false);
        }
        std::string::string((string *)&local_98,"UIWorldMapFuelBank");
        pUVar10 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_98);
        std::string::~string((string *)&local_98);
        nop();
        if (pUVar10 != (UIWidget *)0x0) {
          UIWidget::SetVisible(pUVar10,false);
        }
        __s = "UIRiftPlayerInfoBank";
      }
      else {
        std::string::string((string *)&local_98,"UIWorldMapBackButton");
        pUVar10 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_98);
        std::string::~string((string *)&local_98);
        nop();
        if (pUVar10 != (UIWidget *)0x0) {
          UIWidget::SetVisible(pUVar10,true);
        }
        cVar1 = PVZ2UnchartedModeUtils::IsUnchartedBirthday();
        if (cVar1 == '\0') {
          cVar1 = PVZ2UnchartedModeUtils::IsAnniversarySelectLevel();
          if ((cVar1 != '\0') ||
             (cVar1 = PVZ2UnchartedModeUtils::IsNormalSelectLevelWithHardmode(), cVar1 != '\0')) {
            pwVar16 = L"UIAnniversarySelectLevelInfoButton";
LAB_0453f8a0:
            Sexy::RtName::RtName((RtName *)&local_98,pwVar16);
            pUVar10 = (UIWidget *)UIWidget::CreateWidget((string *)&local_98,1);
            Sexy::RtName::~RtName((RtName *)&local_98);
            if (pUVar10 != (UIWidget *)0x0) {
              UIWidget::SetVisible(pUVar10,true);
            }
            pwVar16 = L"UIWorldMapUnchartedBottomBar";
            goto LAB_0453f6dc;
          }
          iVar9 = PVZ2UnchartedModeUtils::GetUnchartedWorldType();
          if (iVar9 != 3) {
            pwVar16 = L"UISpacetimeKeyBank";
            goto LAB_0453f8a0;
          }
          Sexy::RtName::RtName((RtName *)&local_98,L"UISpringFestival2024InfoButton");
          UIWidget::CreateWidget((string *)&local_98,1);
          Sexy::RtName::~RtName((RtName *)&local_98);
          Sexy::RtName::RtName((RtName *)&local_98,L"UISpringFestival2024LevelResetButton");
          UIWidget::CreateWidget((string *)&local_98,1);
          Sexy::RtName::~RtName((RtName *)&local_98);
          Sexy::RtName::RtName((RtName *)&local_98,L"UIWorldMapUnchartedBottomBar");
          UIWidget::CreateWidget((string *)&local_98,1);
          Sexy::RtName::~RtName((RtName *)&local_98);
          Sexy::RtName::RtName((RtName *)&local_98,L"UISpringFestival2024Difficulty");
          UIWidget::CreateWidget((string *)&local_98,1);
          Sexy::RtName::~RtName((RtName *)&local_98);
          Sexy::RtName::RtName((RtName *)&local_98,L"UISpringFestival2024Boost");
          UIWidget::CreateWidget((string *)&local_98,1);
          Sexy::RtName::~RtName((RtName *)&local_98);
        }
        else {
          pwVar16 = L"UIAnniversaryInfoButton";
LAB_0453f6dc:
          Sexy::RtName::RtName((RtName *)&local_98,pwVar16);
          pUVar10 = (UIWidget *)UIWidget::CreateWidget((string *)&local_98,1);
          Sexy::RtName::~RtName((RtName *)&local_98);
          if (pUVar10 != (UIWidget *)0x0) {
            UIWidget::SetVisible(pUVar10,true);
          }
        }
        std::string::string((string *)&local_98,"UIWorldMapCoinBank");
        pUVar10 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_98);
        std::string::~string((string *)&local_98);
        nop();
        if (pUVar10 != (UIWidget *)0x0) {
          UIWidget::SetVisible(pUVar10,false);
        }
        std::string::string((string *)&local_98,"UIWorldMapEventBar");
        pUVar10 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_98);
        std::string::~string((string *)&local_98);
        nop();
        if (pUVar10 != (UIWidget *)0x0) {
          UIWidget::SetVisible(pUVar10,true);
        }
LAB_0453f788:
        __s = "UIWorldMapGemBank";
      }
      std::string::string((string *)&local_98,__s);
      pUVar10 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_98);
      std::string::~string((string *)&local_98);
      nop();
      if (pUVar10 != (UIWidget *)0x0) {
        UIWidget::SetVisible(pUVar10,false);
        this[0x352] = (WorldMap)0x0;
        goto LAB_0453ee7c;
      }
    }
    else {
      PVZ1ModeUtils::PlayerCanPlay();
      std::string::string((string *)&local_98,"UIWorldMapBackButton");
      pUVar10 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_98);
      std::string::~string((string *)&local_98);
      nop();
      if (pUVar10 != (UIWidget *)0x0) {
        UIWidget::SetVisible(pUVar10,true);
      }
      std::string::string((string *)&local_98,"UIWorldMapLimitedGachaButton");
      pUVar10 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_98);
      std::string::~string((string *)&local_98);
      nop();
      if (pUVar10 != (UIWidget *)0x0) {
        UIWidget::SetVisible(pUVar10,false);
      }
      std::string::string((string *)&local_98,"UIWorldMapCoinBank");
      pUVar10 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_98);
      std::string::~string((string *)&local_98);
      nop();
      if (pUVar10 != (UIWidget *)0x0) {
        UIWidget::SetVisible(pUVar10,false);
      }
      std::string::string((string *)&local_98,"UIWorldMapGemBank");
      pUVar10 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_98);
      std::string::~string((string *)&local_98);
      nop();
      if (pUVar10 != (UIWidget *)0x0) {
        std::string::string((string *)&local_98,"UIScreen");
        pUVar13 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_98);
        UIWidget::SetParentWidget(pUVar10,pUVar13);
        std::string::~string((string *)&local_98);
        nop();
        UIWidget::SetAnchorType(pUVar10,3);
        UIWidget::SetParentAnchorType(pUVar10,3);
        pfVar14 = (float *)UIWidget::GetPositionOffset(pUVar10);
        iVar9 = FUN_04529744(0xf);
        fVar18 = *pfVar14;
        lVar15 = UIWidget::GetPositionOffset(pUVar10);
        iVar8 = FUN_04529744(0xf);
        Sexy::FastCurve::SetOutRange
                  ((FastCurve *)&local_98,(float)iVar9 + fVar18,
                   (float)iVar8 + *(float *)(lVar15 + 4));
        UIWidget::SetPositionOffset(local_98,local_94,pUVar10);
        UIWidget::SetVisible(pUVar10,false);
      }
      Sexy::RtName::RtName((RtName *)&local_98,L"UIWorldMapPVZ1CoinBank");
      UIWidget::CreateWidget((string *)&local_98,1);
      nop();
      Sexy::RtName::~RtName((RtName *)&local_98);
      if (this_05 == (UIWidget *)0x0) {
        Sexy::RtName::RtName((RtName *)&local_98,L"UIWorldMapPVZ1CoinHardBank");
        UIWidget::CreateWidget((string *)&local_98,1);
        Sexy::RtName::~RtName((RtName *)&local_98);
      }
      else {
        FuelBank::SetBankMode((FuelBank *)this_05,2);
        std::string::string((string *)&local_98,"IMAGE_UI_HUD_WORLDMAP_PVZ1_COIN_CURRENCY_COUNTER");
        FuelBank::SetButtonImage((FuelBank *)this_05,(string *)&local_98);
        std::string::~string((string *)&local_98);
        nop();
        UIWidget::SetVisible(this_05,true);
        Sexy::RtName::RtName((RtName *)&local_98,L"UIWorldMapPVZ1CoinHardBank");
        UIWidget::CreateWidget((string *)&local_98,1);
        nop();
        Sexy::RtName::~RtName((RtName *)&local_98);
        FuelBank::SetBankMode((FuelBank *)this_06,3);
        std::string::string((string *)&local_98,
                            "IMAGE_UI_HUD_WORLDMAP_PVZ1_COIN_HARD_CURRENCY_COUNTER");
        FuelBank::SetButtonImage((FuelBank *)this_06,(string *)&local_98);
        std::string::~string((string *)&local_98);
        nop();
        UIWidget::SetVisible(this_06,true);
      }
      Sexy::RtName::RtName((RtName *)&local_98,L"UIPVZ1BannedUI");
      UIWidget::CreateWidget((string *)&local_98,1);
      nop();
      Sexy::RtName::~RtName((RtName *)&local_98);
      if (this_07 != (UIWidget *)0x0) {
        UIWidget::SetVisible(this_07,true);
      }
      Sexy::RtName::RtName((RtName *)&local_98,L"UIPVZ1InfoUI");
      UIWidget::CreateWidget((string *)&local_98,1);
      nop();
      Sexy::RtName::~RtName((RtName *)&local_98);
      if (this_08 != (UIWidget *)0x0) {
        UIWidget::SetVisible(this_08,true);
        this[0x352] = (WorldMap)0x0;
        goto LAB_0453ee7c;
      }
    }
  }
  else {
    bVar6 = (bool)RiftUtils::PlayerCanPlay();
    bVar7 = RiftUtils::IsPublicityTime();
    Sexy::RtName::RtName((RtName *)&local_98,L"UIWorldMapPerkLibraryButton");
    pUVar10 = (UIWidget *)UIWidget::CreateWidget((string *)&local_98,1);
    Sexy::RtName::~RtName((RtName *)&local_98);
    UIWidget::SetVisible(pUVar10,bVar6);
    Sexy::RtName::RtName((RtName *)&local_98,L"UIWorldMapRiftRankButton");
    pUVar10 = (UIWidget *)UIWidget::CreateWidget((string *)&local_98,1);
    Sexy::RtName::~RtName((RtName *)&local_98);
    UIWidget::SetVisible(pUVar10,(bool)(bVar7 | bVar6));
    Sexy::RtName::RtName((RtName *)&local_98,L"UIWorldMapRiftStoreButton");
    pUVar10 = (UIWidget *)UIWidget::CreateWidget((string *)&local_98,1);
    Sexy::RtName::~RtName((RtName *)&local_98);
    UIWidget::SetVisible(pUVar10,true);
    Sexy::RtName::RtName((RtName *)&local_98,L"UIWorldMapFuelBank");
    UIWidget::CreateWidget((string *)&local_98,1);
    nop();
    Sexy::RtName::~RtName((RtName *)&local_98);
    if (this_02 != (UIWidget *)0x0) {
      FuelBank::SetBankMode((FuelBank *)this_02,0);
      std::string::string((string *)&local_98,"IMAGE_UI_HUD_WORLDMAP_FUEL_CURRENCY_COUNTER");
      FuelBank::SetButtonImage((FuelBank *)this_02,(string *)&local_98);
      std::string::~string((string *)&local_98);
      nop();
      UIWidget::SetVisible(this_02,bVar6);
    }
    std::string::string((string *)&local_98,"UIWorldMapBackButton");
    pUVar10 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_98);
    std::string::~string((string *)&local_98);
    nop();
    if (pUVar10 != (UIWidget *)0x0) {
      UIWidget::SetVisible(pUVar10,true);
    }
    std::string::string((string *)&local_98,"UIWorldMapEventBar");
    pUVar10 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_98);
    std::string::~string((string *)&local_98);
    nop();
    if (pUVar10 != (UIWidget *)0x0) {
      UIWidget::SetVisible(pUVar10,true);
    }
    std::string::string((string *)&local_98,"UIWorldMapLimitedGachaButton");
    pUVar10 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_98);
    std::string::~string((string *)&local_98);
    nop();
    if (pUVar10 != (UIWidget *)0x0) {
      UIWidget::SetVisible(pUVar10,false);
    }
    setRiftPlayerBank();
    this_03 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar11 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_03);
    if ((pPVar11 != (PlayerInfo *)0x0) &&
       (cVar1 = PlayerInfo::PlayerHasCompletedTutorial(pPVar11,0x2a), cVar1 == '\0')) {
      RiftUtils::ShowHowToPlayScreen();
      this[0x352] = (WorldMap)0x0;
      goto LAB_0453ee7c;
    }
  }
LAB_0453ee78:
  this[0x352] = (WorldMap)0x0;
LAB_0453ee7c:
  CalculateMinMaxZoomForWorld((WorldData *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::CenterOnMapEvent(MapEventItem const*, bool) */

void __thiscall WorldMap::CenterOnMapEvent(WorldMap *this,MapEventItem *param_1,bool param_2)

{
  char cVar1;
  float *pfVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  DVec2 aDStack_18 [8];
  DVec2 aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SetCameraBoundsToWorld(this,*(WorldData **)(param_1 + 0xe8));
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_end((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)param_1);
  fVar5 = *pfVar2;
  fVar4 = pfVar2[1];
  lVar3 = FUN_04528bb0(*(undefined8 *)(param_1 + 0xe8));
  if (*(long *)(this + 0x2f0) == lVar3) {
    if (param_2) {
      DVec2::DVec2(aDStack_10,fVar5,fVar4);
      CenterOnPoint(this,aDStack_10,0);
    }
    else {
      DVec2::DVec2(aDStack_10,fVar5,fVar4);
      ScrollToPosition(this,aDStack_10);
    }
  }
  else {
    DVec2::DVec2(aDStack_10,fVar5,fVar4);
    CenterOnPoint(this,aDStack_10,0);
    syncMapResourceGrid(this,*(ushort *)(*(long *)(param_1 + 0xe8) + 0x48));
    setCurrentWorld(this,*(WorldData **)(param_1 + 0xe8));
  }
  cVar1 = FUN_04528c18(*(undefined4 *)(this + 0x334),*(undefined4 *)(this + 0x338));
  if (cVar1 == '\0') {
    lVar3 = *(long *)(this + 0x2f0);
    DVec2::DVec2(aDStack_18,(float)(*(int *)(lVar3 + 0x4c) + *(int *)(lVar3 + 0x54) / 2),
                 (float)(*(int *)(lVar3 + 0x50) + *(int *)(lVar3 + 0x58) / 2));
    Sexy::FPoint::FPoint((FPoint *)aDStack_10,(TPoint *)aDStack_18);
    CenterOnPoint(this,(FPoint *)aDStack_10,1);
    ZoomOutNoAnimation(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap::CenterOnMapEvent(std::string const&, bool) */

void __thiscall WorldMap::CenterOnMapEvent(WorldMap *this,string *param_1,bool param_2)

{
  char cVar1;
  WorldDataManager *this_00;
  MapEventItem *pMVar2;
  
  cVar1 = FUN_0547419c(param_1);
  if (cVar1 == '\0') {
    this_00 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
    pMVar2 = (MapEventItem *)WorldDataManager::FindEventByName(this_00,param_1);
    if (pMVar2 != (MapEventItem *)0x0) {
      CenterOnMapEvent(this,pMVar2,param_2);
      (**(code **)(*(long *)this + 0x378))(this);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::showLevelArrow(std::string const&, std::wstring const&) */

void __thiscall WorldMap::showLevelArrow(WorldMap *this,string *param_1,wstring *param_2)

{
  char cVar1;
  WorldDataManager *this_00;
  undefined8 uVar2;
  undefined4 *puVar3;
  StandaloneEffect *this_01;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  FastCurve aFStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  CenterOnMapEvent(this,param_1,false);
  cVar1 = FUN_054765e8(param_2);
  if (cVar1 == '\0') {
    ShowAdvice::SetLabel(0x40400000,*(undefined8 *)(this + 0x290),param_2,0x14);
  }
  uVar4 = PVZ_EOT();
  *(undefined4 *)(this + 0x438) = uVar4;
  this_00 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
  uVar2 = WorldDataManager::FindEvent(this_00,param_1);
  *(undefined8 *)(this + 0x440) = uVar2;
  StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x298),true);
  this_01 = *(StandaloneEffect **)(this + 0x298);
  puVar3 = (undefined4 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      **)(this + 0x440));
  fVar5 = (float)FUN_04529710(*puVar3);
  fVar6 = (float)FUN_04529710((float)puVar3[1] - 55.0);
  Sexy::FastCurve::SetOutRange(aFStack_10,fVar5,fVar6);
  StandaloneEffect::SetScreenSpaceOrigin(this_01,(SexyVector2 *)aFStack_10,900000);
  this[0x2a0] = (WorldMap)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::onEnterState_Initializing(WorldMapState) */

void WorldMap::onEnterState_Initializing
               (ReceivedDataCallback *param_1,undefined8 param_2,undefined8 param_3,
               LineBreakCategory *param_4,LineBreakCategory *param_5)

{
  undefined *puVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ProfileMgr *pPVar9;
  PlayerInfo *pPVar10;
  WorldMap_UniverseViewButton *this;
  WorldMap_SalesButton *this_00;
  WorldMap_PlantAdventureButton *this_01;
  WorldMap_RechargeReward *this_02;
  UIWidget *this_03;
  UIWidget *this_04;
  UIWidget *this_05;
  UIWidget *this_06;
  WorldMap_TaptapButton *this_07;
  WorldMap_AuthenticationButton *this_08;
  RtObject *this_09;
  UIWidget *pUVar11;
  WorldDataManager *this_10;
  ulong uVar12;
  MapEventItem *pMVar13;
  WorldMapActivityBtnTurnChangeManager *pWVar14;
  wchar16 *pwVar15;
  WorldMap_MonthVIPButton *this_11;
  undefined8 *puVar16;
  undefined1 uVar17;
  undefined8 uVar18;
  string *this_12;
  ulong uVar19;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  CBMemberTranslatorX aCStack_e8 [24];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AnimationController::SetDuration(*(AnimationController **)(param_1 + 0x290),0.0);
  lVar7 = GameStateMgr::GetQueuedWorldMapDestination(gGameStateMgr);
  if (lVar7 == 0) {
    bVar4 = true;
  }
  else {
    lVar8 = FUN_04528bb0(*(undefined8 *)(lVar7 + 0xe8));
    cVar2 = WorldMapUtils::IsRiftWorld((string *)(lVar8 + 0x38));
    if (cVar2 == '\0') {
      lVar8 = FUN_04528bb0(*(undefined8 *)(lVar7 + 0xe8));
      cVar2 = WorldMapUtils::IsPVZ1World((string *)(lVar8 + 0x38));
      if (cVar2 == '\0') {
        lVar8 = FUN_04528bb0(*(undefined8 *)(lVar7 + 0xe8));
        cVar2 = WorldMapUtils::IsUnchartedWorld((string *)(lVar8 + 0x38));
        if (cVar2 == '\0') {
          lVar8 = FUN_04528bb0(*(undefined8 *)(lVar7 + 0xe8));
          cVar2 = WorldMapUtils::IsCardGameWorld((string *)(lVar8 + 0x38));
          if (cVar2 == '\0') {
            lVar7 = FUN_04528bb0(*(undefined8 *)(lVar7 + 0xe8));
            bVar4 = WorldMapUtils::IsPlantWarsWorld((string *)(lVar7 + 0x38));
            bVar4 = bVar4 ^ 1;
            goto LAB_0453fdb0;
          }
        }
      }
    }
    bVar4 = false;
  }
LAB_0453fdb0:
  UIWidget::ResetUI();
  this_12 = (string *)&local_b8;
  Sexy::RtName::RtName((RtName *)&local_a0,L"UIScreen");
  UIWidget::CreateWidget((RtName *)&local_a0,1);
  Sexy::RtName::~RtName((RtName *)&local_a0);
  Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapTopBar");
  UIWidget::CreateWidget((RtName *)&local_a0,1);
  Sexy::RtName::~RtName((RtName *)&local_a0);
  Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapPlantLevelUpButton");
  std::string::string(this_12,"egypt4");
  pPVar9 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar10 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar9);
  bVar3 = ProfileUtils::HasCompletedLevel(this_12,false,pPVar10);
  UIWidget::CreateWidget((RtName *)&local_a0,bVar3 & bVar4);
  std::string::~string(this_12);
  nop();
  Sexy::RtName::~RtName((RtName *)&local_a0);
  Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapLuaVirtualBtns");
  UIWidget::CreateWidget((RtName *)&local_a0,bVar4);
  Sexy::RtName::~RtName((RtName *)&local_a0);
  Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapUniverseViewButton");
  std::string::string(this_12,"egypt15");
  pPVar9 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar10 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar9);
  bVar3 = ProfileUtils::HasCompletedLevel(this_12,false,pPVar10);
  UIWidget::CreateWidget((RtName *)&local_a0,bVar3 & bVar4);
  nop();
  std::string::~string(this_12);
  nop();
  Sexy::RtName::~RtName((RtName *)&local_a0);
  if (this != (WorldMap_UniverseViewButton *)0x0) {
    WorldMap_UniverseViewButton::CreateAnim(this);
  }
  cVar2 = WorldMap_RechargeBundleButton::CheckVisibility(true);
  if (cVar2 != '\0') {
    std::string::string((string *)&local_a0,"UIWorldMapRechargeBundleButton");
    lVar7 = UIWidget::GetWidgetBySheetName((string *)&local_a0);
    std::string::~string((string *)&local_a0);
    nop();
    if (lVar7 == 0) {
      Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapRechargeBundleButton");
      pUVar11 = (UIWidget *)UIWidget::CreateWidget((RtName *)&local_a0,bVar4);
      Sexy::RtName::~RtName((RtName *)&local_a0);
      puVar16 = (undefined8 *)UIWidget::GetPositionOffset(pUVar11);
      local_a0 = *puVar16;
      pWVar14 = (WorldMapActivityBtnTurnChangeManager *)
                Sexy::LazySingleton<WorldMapActivityBtnTurnChangeManager>::GetInstancePtr();
      WorldMapActivityBtnTurnChangeManager::setVecLine1(pWVar14,(SexyVector2 *)&local_a0);
      pWVar14 = (WorldMapActivityBtnTurnChangeManager *)
                Sexy::LazySingleton<WorldMapActivityBtnTurnChangeManager>::GetInstance();
      WorldMapActivityBtnTurnChangeManager::setIsLoaded(pWVar14,0x2983,true);
    }
  }
  cVar2 = WorldMap_OfflineBundleButton::CheckVisibility();
  if (cVar2 != '\0') {
    std::string::string((string *)&local_a0,"UIWorldMapOfflineBundleButton");
    lVar7 = UIWidget::GetWidgetBySheetName((string *)&local_a0);
    std::string::~string((string *)&local_a0);
    nop();
    if (lVar7 == 0) {
      std::string::string((string *)&local_a0,"UIWorldMapRechargeBundleButton");
      lVar7 = UIWidget::GetWidgetBySheetName((string *)&local_a0);
      std::string::~string((string *)&local_a0);
      nop();
      if (lVar7 == 0) {
        Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapOfflineBundleButton");
        UIWidget::CreateWidget((RtName *)&local_a0,bVar4);
        Sexy::RtName::~RtName((RtName *)&local_a0);
      }
    }
  }
  Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapSales");
  UIWidget::CreateWidget((RtName *)&local_a0,bVar4);
  nop();
  Sexy::RtName::~RtName((RtName *)&local_a0);
  if ((this_00 != (WorldMap_SalesButton *)0x0) && ((bool)bVar4 != false)) {
    WorldMap_SalesButton::CheckActivated(this_00);
  }
  Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapPlantAdventure");
  UIWidget::CreateWidget((RtName *)&local_a0,bVar4);
  nop();
  Sexy::RtName::~RtName((RtName *)&local_a0);
  if ((this_01 != (WorldMap_PlantAdventureButton *)0x0) && ((bool)bVar4 != false)) {
    WorldMap_PlantAdventureButton::CheckActivated(this_01);
  }
  Sexy::RtName::RtName((RtName *)&local_a0,L"WorldMapRechargeReward");
  UIWidget::CreateWidget((RtName *)&local_a0,bVar4);
  nop();
  Sexy::RtName::~RtName((RtName *)&local_a0);
  if ((this_02 != (WorldMap_RechargeReward *)0x0) && ((bool)bVar4 != false)) {
    WorldMap_RechargeReward::CheckActivated(this_02);
  }
  Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapAnniversaryButton");
  UIWidget::CreateWidget((RtName *)&local_a0,1);
  nop();
  Sexy::RtName::~RtName((RtName *)&local_a0);
  if (this_03 != (UIWidget *)0x0) {
    UIWidget::SetVisible(this_03,false);
  }
  Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapPlantSpecialButton");
  UIWidget::CreateWidget((RtName *)&local_a0,1);
  nop();
  Sexy::RtName::~RtName((RtName *)&local_a0);
  if (this_04 != (UIWidget *)0x0) {
    UIWidget::SetVisible(this_04,false);
  }
  Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapLuckBagButton");
  UIWidget::CreateWidget((RtName *)&local_a0,1);
  nop();
  Sexy::RtName::~RtName((RtName *)&local_a0);
  if (this_05 != (UIWidget *)0x0) {
    UIWidget::SetVisible(this_05,false);
  }
  Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapLimitedGachaButton");
  UIWidget::CreateWidget((RtName *)&local_a0,1);
  nop();
  Sexy::RtName::~RtName((RtName *)&local_a0);
  if (this_06 != (UIWidget *)0x0) {
    UIWidget::SetVisible(this_06,false);
  }
  Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapTaptapEvent");
  UIWidget::CreateWidget((RtName *)&local_a0,1);
  nop();
  Sexy::RtName::~RtName((RtName *)&local_a0);
  if (this_07 != (WorldMap_TaptapButton *)0x0) {
    WorldMap_TaptapButton::CheckActivated(this_07);
  }
  Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapAuthenticationButton");
  UIWidget::CreateWidget((RtName *)&local_a0,bVar4);
  nop();
  Sexy::RtName::~RtName((RtName *)&local_a0);
  if ((this_08 == (WorldMap_AuthenticationButton *)0x0) || ((bool)bVar4 == false)) {
    pPVar9 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar10 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar9);
    cVar2 = ProfileUtils::HasCompletedSecondWorldLevel(3,false,pPVar10);
  }
  else {
    WorldMap_AuthenticationButton::CheckActivated(this_08);
    pPVar9 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar10 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar9);
    cVar2 = ProfileUtils::HasCompletedSecondWorldLevel(3,false,pPVar10);
  }
  if (cVar2 != '\0') {
    Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapBagButton");
    UIWidget::CreateWidget((RtName *)&local_a0,bVar4);
    Sexy::RtName::~RtName((RtName *)&local_a0);
  }
  Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapHeadshotButton");
  UIWidget::CreateWidget((RtName *)&local_a0,bVar4);
  Sexy::RtName::~RtName((RtName *)&local_a0);
  std::string::string((string *)&local_a0,"egypt6");
  pPVar9 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar10 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar9);
  cVar2 = ProfileUtils::HasCompletedLevel((string *)&local_a0,false,pPVar10);
  std::string::~string((string *)&local_a0);
  nop();
  if (cVar2 != '\0') {
    Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapDailyActivityButton");
    UIWidget::CreateWidget((RtName *)&local_a0,bVar4);
    Sexy::RtName::~RtName((RtName *)&local_a0);
    Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapTourismOctoberButton");
    UIWidget::CreateWidget((RtName *)&local_a0,bVar4);
    Sexy::RtName::~RtName((RtName *)&local_a0);
  }
  std::string::string((string *)&local_a0,"egypt12");
  pPVar9 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar10 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar9);
  cVar2 = ProfileUtils::HasCompletedLevel((string *)&local_a0,false,pPVar10);
  std::string::~string((string *)&local_a0);
  nop();
  if (cVar2 != '\0') {
    Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapChallengeButton");
    UIWidget::CreateWidget((RtName *)&local_a0,bVar4);
    Sexy::RtName::~RtName((RtName *)&local_a0);
  }
  std::string::string((string *)&local_a0,"egypt3");
  pPVar9 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar10 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar9);
  cVar2 = ProfileUtils::HasCompletedLevel((string *)&local_a0,false,pPVar10);
  std::string::~string((string *)&local_a0);
  nop();
  if (cVar2 != '\0') {
    Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapShopButton");
    UIWidget::CreateWidget((RtName *)&local_a0,bVar4);
    Sexy::RtName::~RtName((RtName *)&local_a0);
  }
  std::string::string((string *)&local_a0,"egypt2");
  pPVar9 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar10 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar9);
  cVar2 = ProfileUtils::HasCompletedLevel((string *)&local_a0,false,pPVar10);
  std::string::~string((string *)&local_a0);
  nop();
  if (cVar2 != '\0') {
    Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapWelfareButtonExtra");
    UIWidget::CreateWidget((RtName *)&local_a0,bVar4);
    Sexy::RtName::~RtName((RtName *)&local_a0);
  }
  Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapNewPlayerButton");
  UIWidget::CreateWidget((RtName *)&local_a0,bVar4);
  Sexy::RtName::~RtName((RtName *)&local_a0);
  Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapOneYuanButton");
  UIWidget::CreateWidget((RtName *)&local_a0,0);
  Sexy::RtName::~RtName((RtName *)&local_a0);
  Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapPiggyBankButton");
  UIWidget::CreateWidget((RtName *)&local_a0,0);
  Sexy::RtName::~RtName((RtName *)&local_a0);
  Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapDaveTreasureButton");
  UIWidget::CreateWidget((RtName *)&local_a0,0);
  Sexy::RtName::~RtName((RtName *)&local_a0);
  Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapCallOfWishButton");
  UIWidget::CreateWidget((RtName *)&local_a0,0);
  Sexy::RtName::~RtName((RtName *)&local_a0);
  Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapArtifactPresentButton");
  UIWidget::CreateWidget((RtName *)&local_a0,0);
  Sexy::RtName::~RtName((RtName *)&local_a0);
  Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapPVZ2UnchartedModeButton");
  UIWidget::CreateWidget((RtName *)&local_a0,0);
  Sexy::RtName::~RtName((RtName *)&local_a0);
  Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapGrowthPackageButton");
  UIWidget::CreateWidget((RtName *)&local_a0,0);
  Sexy::RtName::~RtName((RtName *)&local_a0);
  Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapBattleOrderButton");
  UIWidget::CreateWidget((RtName *)&local_a0,0);
  Sexy::RtName::~RtName((RtName *)&local_a0);
  Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapLimitedSummonButton");
  UIWidget::CreateWidget((RtName *)&local_a0,0);
  Sexy::RtName::~RtName((RtName *)&local_a0);
  Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapCarnivalButton");
  UIWidget::CreateWidget((RtName *)&local_a0,0);
  Sexy::RtName::~RtName((RtName *)&local_a0);
  Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapNewYearGoodsButton");
  UIWidget::CreateWidget((RtName *)&local_a0,0);
  Sexy::RtName::~RtName((RtName *)&local_a0);
  Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapCornucopiaButton");
  UIWidget::CreateWidget((RtName *)&local_a0,0);
  Sexy::RtName::~RtName((RtName *)&local_a0);
  Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapPlantCultivateButton");
  UIWidget::CreateWidget((RtName *)&local_a0,0);
  Sexy::RtName::~RtName((RtName *)&local_a0);
  Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapTenYearRecordButton");
  UIWidget::CreateWidget((RtName *)&local_a0,0);
  Sexy::RtName::~RtName((RtName *)&local_a0);
  Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapGiftFoReturnButton");
  UIWidget::CreateWidget((RtName *)&local_a0,0);
  Sexy::RtName::~RtName((RtName *)&local_a0);
  Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapPartyAssistButton");
  UIWidget::CreateWidget((RtName *)&local_a0,0);
  Sexy::RtName::~RtName((RtName *)&local_a0);
  Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapTreasurePavilionButton");
  UIWidget::CreateWidget((RtName *)&local_a0,0);
  Sexy::RtName::~RtName((RtName *)&local_a0);
  Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapPennyGiftBoxButton");
  UIWidget::CreateWidget((RtName *)&local_a0,0);
  Sexy::RtName::~RtName((RtName *)&local_a0);
  Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapLuckyChestShopButton");
  UIWidget::CreateWidget((RtName *)&local_a0,0);
  Sexy::RtName::~RtName((RtName *)&local_a0);
  Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapAutumnHarvestButton");
  UIWidget::CreateWidget((RtName *)&local_a0,0);
  Sexy::RtName::~RtName((RtName *)&local_a0);
  Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapNighttheToyButton");
  UIWidget::CreateWidget((RtName *)&local_a0,0);
  Sexy::RtName::~RtName((RtName *)&local_a0);
  std::string::string((string *)&local_a0,"egypt2");
  pPVar9 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar10 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar9);
  cVar2 = ProfileUtils::HasCompletedLevel((string *)&local_a0,false,pPVar10);
  std::string::~string((string *)&local_a0);
  nop();
  if (cVar2 != '\0') {
    LawnApp::ShowScrollBanner(gLawnApp);
    LawnApp::SetScrollBannerVisible(gLawnApp,(bool)bVar4);
    Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapScrollBannerSwitchButton");
    UIWidget::CreateWidget((RtName *)&local_a0,bVar4);
    Sexy::RtName::~RtName((RtName *)&local_a0);
    LawnApp::ShowMarqueeView(gLawnApp);
    LawnApp::SetMarqueeViewVisible(gLawnApp,(bool)bVar4);
  }
  pPVar10 = (PlayerInfo *)ProfileUtils::Profile();
  Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapMonthVIPButton");
  this_09 = (RtObject *)UIWidget::CreateWidget((RtName *)&local_a0,0);
  Sexy::RtName::~RtName((RtName *)&local_a0);
  if (((this_09 != (RtObject *)0x0) && ((bool)bVar4 != false)) &&
     (this_11 = Sexy::RtObject::Cast<WorldMap_MonthVIPButton>(this_09),
     this_11 != (WorldMap_MonthVIPButton *)0x0)) {
    WorldMap_MonthVIPButton::checkVisiable(this_11);
  }
  Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapLoginRewardButton");
  std::string::string(this_12,"egypt1");
  bVar3 = PlayerInfo::GetLevelCompleted(pPVar10,this_12);
  UIWidget::CreateWidget((RtName *)&local_a0,bVar3 & bVar4);
  std::string::~string(this_12);
  nop();
  Sexy::RtName::~RtName((RtName *)&local_a0);
  Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapPlatformGiftButton");
  UIWidget::CreateWidget((RtName *)&local_a0,bVar4);
  Sexy::RtName::~RtName((RtName *)&local_a0);
  Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapVivoGameCenterButton");
  UIWidget::CreateWidget((RtName *)&local_a0,bVar4);
  Sexy::RtName::~RtName((RtName *)&local_a0);
  Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapGameCommunityButton");
  iVar5 = LawnApp::GetPlatform(gLawnApp);
  uVar17 = bVar4;
  if (((iVar5 != 0x59) && (iVar5 = LawnApp::GetPlatform(gLawnApp), iVar5 != 0x25)) &&
     ((iVar5 = LawnApp::GetPlatform(gLawnApp), iVar5 != 0x5a &&
      (iVar5 = LawnApp::GetPlatform(gLawnApp), iVar5 != 0x26)))) {
    uVar17 = 0;
  }
  UIWidget::CreateWidget((RtName *)&local_a0,uVar17);
  Sexy::RtName::~RtName((RtName *)&local_a0);
  Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapWelfareButton");
  pUVar11 = (UIWidget *)UIWidget::CreateWidget((RtName *)&local_a0,1);
  Sexy::RtName::~RtName((RtName *)&local_a0);
  UIWidget::SetVisible(pUVar11,false);
  iVar5 = LawnApp::GetPlatform(gLawnApp);
  if ((iVar5 != 0x5b) && (iVar5 != 0x27)) {
    pwVar15 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    std::string::string((string *)&local_a0,"TestDailysignWith4399");
    cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (pwVar15,(wchar16 *)&local_a0,(LineBreakCategory *)this_12,param_4,param_5);
    std::string::~string((string *)&local_a0);
    nop();
    if (cVar2 == '\0') goto LAB_0454077c;
  }
  iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar5);
  if (local_70 != '\0') {
    Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapTWLoginRewardButton");
    UIWidget::CreateWidget((RtName *)&local_a0,bVar4);
    Sexy::RtName::~RtName((RtName *)&local_a0);
  }
  ActiveItem::~ActiveItem(aAStack_88);
LAB_0454077c:
  iVar5 = 0;
  Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapAdsRewardButton");
  UIWidget::CreateWidget((RtName *)&local_a0,0);
  Sexy::RtName::~RtName((RtName *)&local_a0);
  Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapAdsLotteryButton");
  UIWidget::CreateWidget((RtName *)&local_a0,0);
  Sexy::RtName::~RtName((RtName *)&local_a0);
  Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapAlmanacButton");
  pUVar11 = (UIWidget *)UIWidget::CreateWidget((RtName *)&local_a0,bVar4);
  Sexy::RtName::~RtName((RtName *)&local_a0);
  UIWidget::SetIgnoreParentVisibility(pUVar11,true);
  std::string::string((string *)&local_a0,"WorldMap");
  DoSharedHUDWidgetCreation((RtName *)&local_a0);
  std::string::~string((string *)&local_a0);
  nop();
  uVar18 = *(undefined8 *)(*(long *)(param_1 + 0x1f0) + 0x50);
  *(undefined8 *)(param_1 + 0x430) = uVar18;
  *(undefined8 *)(param_1 + 0x428) = uVar18;
  *(float *)(param_1 + 0x430) = -*(float *)(param_1 + 0x430);
  Sexy::RtName::RtName((RtName *)&local_a0,L"UIWorldMapEventBar");
  UIWidget::CreateWidget((RtName *)&local_a0,0);
  Sexy::RtName::~RtName((RtName *)&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (param_1,onYetiSpawned);
  Sexy::Delegate0::Delegate0<WorldMap,void(WorldMap::*)()>
            ((Delegate0 *)aAStack_88,(RtName *)&local_a0);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::TreasureYetiSpawned,(Delegate0 *)aAStack_88);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (param_1,onFirstYetiSpawned);
  Sexy::Delegate0::Delegate0<WorldMap,void(WorldMap::*)()>
            ((Delegate0 *)aAStack_88,(RtName *)&local_a0);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::FirstTreasureYetiSpawned,(Delegate0 *)aAStack_88);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (param_1,onAppEnteredBackground);
  Sexy::Delegate0::Delegate0<WorldMap,void(WorldMap::*)()>
            ((Delegate0 *)aAStack_88,(RtName *)&local_a0);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::AppEnteredBackground,(Delegate0 *)aAStack_88);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (param_1,onWorldMapShown);
  Sexy::Delegate0::Delegate0<WorldMap,void(WorldMap::*)()>
            ((Delegate0 *)aAStack_88,(RtName *)&local_a0);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::WorldMapWorldLoaded,(Delegate0 *)aAStack_88);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (param_1,OnGotActActivityStates);
  local_110 = local_d0;
  uStack_108 = uStack_c8;
  local_100 = local_c0;
  MessageRouter::Subscribe<bool,Sexy::CBMemberTranslatorX<WorldMap,void(WorldMap::*)(bool)>>
            ((MessageRouter *)puVar1,Message::GotActActivityStates,&local_110);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (param_1,onServerTimeReceived);
  Sexy::Delegate0::Delegate0<WorldMap,void(WorldMap::*)()>
            ((Delegate0 *)aAStack_88,(RtName *)&local_a0);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::ServerTimeReceived,(Delegate0 *)aAStack_88);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (param_1,onNotifyRefreshActivityList);
  local_120 = local_a8;
  local_130 = local_b8;
  uStack_128 = uStack_b0;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<WorldMap,void(WorldMap::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_130);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (param_1,onMonthlyCardQueryOrder);
  local_150 = local_a0;
  uStack_148 = uStack_98;
  local_140 = local_90;
  MessageRouter::
  Subscribe<std::string_const&,int,Sexy::CBMemberTranslatorX<WorldMap,void(WorldMap::*)(std::string_const&,int)>>
            ((MessageRouter *)puVar1,Message::AndroidSDKQueryOrder,&local_150);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (param_1,onNewVersionFound);
  Sexy::Delegate0::Delegate0<WorldMap,void(WorldMap::*)()>((Delegate0 *)aAStack_88,aCStack_e8);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NewVersionFound,(Delegate0 *)aAStack_88)
  ;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (param_1,pushUIStateAndDisableAll);
  Sexy::Delegate0::Delegate0<WorldMap,void(WorldMap::*)()>((Delegate0 *)aAStack_88,aCStack_e8);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::PushUIStateAndDisableAll,(Delegate0 *)aAStack_88);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (param_1,popUIState);
  Sexy::Delegate0::Delegate0<WorldMap,void(WorldMap::*)()>((Delegate0 *)aAStack_88,aCStack_e8);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::PopUIState,(Delegate0 *)aAStack_88);
  this_10 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
  iVar6 = WorldDataManager::GetWorldDataCount(this_10);
  if (0 < iVar6) {
    do {
      lVar7 = WorldDataManager::GetWorldDataByIdx(this_10,iVar5);
      uVar19 = 0;
      while( true ) {
        uVar18 = *(undefined8 *)(lVar7 + 8);
        uVar12 = FUN_04528d68(uVar18,*(undefined8 *)(lVar7 + 0x10));
        if (uVar12 <= uVar19) break;
        pMVar13 = (MapEventItem *)FUN_04528dd0(uVar18,uVar19);
        MapEventItem::InitializeMembers(pMVar13);
        uVar19 = uVar19 + 1;
      }
      uVar19 = 0;
      while( true ) {
        uVar18 = *(undefined8 *)(lVar7 + 0x20);
        uVar12 = FUN_04528d68(uVar18,*(undefined8 *)(lVar7 + 0x28));
        if (uVar12 <= uVar19) break;
        pMVar13 = (MapEventItem *)FUN_04528dd0(uVar18,uVar19);
        MapEventItem::InitializeMembers(pMVar13);
        uVar19 = uVar19 + 1;
      }
      iVar5 = iVar5 + 1;
      iVar6 = WorldDataManager::GetWorldDataCount(this_10);
    } while (iVar5 < iVar6);
  }
  remapWorldMapEvents((WorldMap *)param_1);
  pWVar14 = (WorldMapActivityBtnTurnChangeManager *)
            Sexy::LazySingleton<WorldMapActivityBtnTurnChangeManager>::GetInstancePtr();
  WorldMapActivityBtnTurnChangeManager::setFirstInit(pWVar14,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::onYetiNarrationFinished() */

void __thiscall WorldMap::onYetiNarrationFinished(WorldMap *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  TutorialMgr *pTVar5;
  UIWidget *this_00;
  undefined8 uVar6;
  GameMaskUI *this_01;
  string asStack_b0 [8];
  ResistenceValueInfo aRStack_a8 [8];
  string asStack_a0 [8];
  wstring awStack_98 [16];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  iVar3 = *(int *)(this + 0x44c);
  local_8 = ___stack_chk_guard;
  if (iVar3 == 0x1f) {
    std::string::string(asStack_a0,"egypt_level_1");
    FUN_05478178(awStack_98,L"[ADVICE_EGYPT1_HARD_LEVEL]",aRStack_a8);
    showLevelArrow(this,asStack_a0,awStack_98);
    FUN_05476c50(awStack_98);
    nop();
    std::string::~string(asStack_a0);
    nop();
    goto LAB_04540ff4;
  }
  if (iVar3 != 0x20) {
    if (iVar3 != 0x1d) goto LAB_04540ff4;
    lVar4 = Sexy::LazySingleton<TutorialMgr>::GetInstance();
    iVar2 = FUN_04528c74(*(undefined4 *)(lVar4 + 0x10));
    if (iVar2 == 0x1d) {
      iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar3);
      cVar1 = FUN_04528c58(local_80);
      if ((cVar1 != '\0') && (local_70 != '\0')) {
        MessageRouter::Post((_func_void *)gMessageRouter);
        std::string::string(asStack_b0,"");
        nop();
        ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo(aRStack_a8);
        std::string::string((string *)awStack_98,"UIWorldMapNewPlayerButton");
        this_00 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)awStack_98);
        std::string::~string((string *)awStack_98);
        nop();
        if ((this_00 != (UIWidget *)0x0) && (cVar1 = UIWidget::IsVisible(this_00), cVar1 != '\0')) {
          uVar6 = LawnApp::GetWorldMap(gLawnApp);
          std::string::string(asStack_a0,"");
          UIWidget::GetDrawRect();
          this_01 = (GameMaskUI *)GameMaskUI::ShowMask(uVar6,1,asStack_a0,(string *)awStack_98);
          GameMaskUI::EnableScale(this_01,false);
          std::string::~string(asStack_a0);
          nop();
        }
        std::string::~string(asStack_b0);
      }
      ActiveItem::~ActiveItem(aAStack_88);
      goto LAB_04540ff4;
    }
  }
  pTVar5 = (TutorialMgr *)Sexy::LazySingleton<TutorialMgr>::GetInstance();
  TutorialMgr::StartTutorial(pTVar5,iVar3);
  FUN_04528c08(this + 0x356,0);
  pushUIStateAndDisableAll(this);
LAB_04540ff4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::SetupTutorial(MapTutorialState) */

void __thiscall WorldMap::SetupTutorial(WorldMap *this,uint param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  PlayerInfo *pPVar4;
  long extraout_x0;
  Dialog *this_00;
  long *plVar5;
  long lVar6;
  UIWidget *this_01;
  TutorialMgr *pTVar7;
  UIWidget *pUVar8;
  GameMaskUI *this_02;
  DNetwork *this_03;
  char *pcVar9;
  undefined8 uVar10;
  ShowAdvice *pSVar11;
  float fVar12;
  undefined4 uVar13;
  CrazyNPCManager *local_e68;
  string asStack_e50 [8];
  string asStack_e48 [8];
  ResistenceValueInfo aRStack_e40 [8];
  string asStack_e38 [8];
  function<bool(Sexy::Touch_const&)> afStack_e30 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_e10 [48];
  string asStack_de0 [48];
  string asStack_db0 [72];
  Delegate0 aDStack_d68 [8];
  undefined4 local_d60;
  char local_d50;
  string asStack_ce8 [3024];
  string asStack_118 [272];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(this + 0x44c) != 0) && (cVar1 = '\0', *(int *)(this + 0x44c) <= (int)param_2))
  goto LAB_045412bc;
  Sexy::StrFormat("WorldMap::SetupTutorial called with tutorial state %d",asStack_e50,(ulong)param_2
                 );
  nop();
  *(uint *)(this + 0x44c) = param_2;
  pPVar4 = (PlayerInfo *)ProfileUtils::Profile();
  PlayerInfo::SetActiveTutorial(pPVar4,param_2);
  cVar1 = isTutorialDeprecated(this,param_2);
  if (cVar1 != '\0') {
LAB_045412a4:
    cVar1 = '\x01';
    handleTutorialEnd(this,false);
    goto LAB_045412b4;
  }
  switch(param_2) {
  case 1:
    pSVar11 = *(ShowAdvice **)(this + 0x290);
    FUN_05478178(asStack_ce8,L"[ADVICE_GOTO_ALMANAC]",asStack_db0);
    cVar1 = '\x01';
    ShowAdvice::SetLabel(pSVar11,asStack_ce8,0x15);
    FUN_05476c50(asStack_ce8);
    nop();
    uVar13 = PVZ_EOT();
    *(undefined4 *)(this + 0x438) = uVar13;
    std::string::string(asStack_ce8,"UIWorldMapAlmanacButton");
    pUVar8 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_ce8);
    std::string::~string(asStack_ce8);
    nop();
    showFlashingArrow(this,pUVar8);
    this[0x43c] = (WorldMap)0x1;
    this[0x449] = (WorldMap)0x1;
    pushUIStateAndDisableAll(this);
    std::string::string(asStack_ce8,"UIWorldMapAlmanacButton");
    pUVar8 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_ce8);
    UIWidget::SetClickable(pUVar8,true);
    std::string::~string(asStack_ce8);
    nop();
    std::string::string(asStack_ce8,"UIWorldMapBackButton");
    pUVar8 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_ce8);
    UIWidget::SetClickable(pUVar8,true);
    std::string::~string(asStack_ce8);
    nop();
    std::string::string(asStack_ce8,"UIWorldMapAlmanacButton");
    UIWidget::GetWidgetBySheetName(asStack_ce8);
    nop();
    std::string::~string(asStack_ce8);
    nop();
    FUN_04528c68(extraout_x0 + 0x164);
    goto LAB_045412b4;
  default:
switchD_0454130c_caseD_2:
    cVar1 = '\x01';
    goto LAB_045412b4;
  case 7:
    pPVar4 = (PlayerInfo *)ProfileUtils::Profile();
    std::string::string(asStack_ce8,"torchwood");
    cVar1 = PlayerInfo::GetIsPlantUnlocked(pPVar4,asStack_ce8);
    std::string::~string(asStack_ce8);
    nop();
    if (cVar1 != '\0') goto LAB_045412a4;
    cVar1 = '\x01';
    std::string::string(asStack_ce8,"UIWorldMapStarConvertButton");
    UIWidget::GetWidgetBySheetName(asStack_ce8);
    std::string::~string(asStack_ce8);
    nop();
    pcVar9 = "";
LAB_045414d8:
    std::string::string(asStack_db0,pcVar9);
    UIWidget::GetDrawRect();
    uVar10 = 3;
    goto LAB_045414f8;
  case 8:
    pSVar11 = *(ShowAdvice **)(this + 0x290);
    cVar1 = '\x01';
    FUN_05478178(asStack_ce8,L"[ADVICE_GOTO_STORE]",asStack_db0);
    ShowAdvice::SetLabel(pSVar11,asStack_ce8,0x15);
    FUN_05476c50(asStack_ce8);
    nop();
    uVar13 = PVZ_EOT();
    *(undefined4 *)(this + 0x438) = uVar13;
    goto LAB_045412b4;
  case 0x11:
    fVar12 = (float)PVZ_T();
    *(float *)(this + 0x438) = fVar12 + 1.0;
    cVar1 = WorldMap_LoginRewardButton::SignToday();
    if (cVar1 != '\0') goto switchD_0454130c_caseD_2;
    WorldMap_LoginRewardButton::ShowSignUI();
    cVar1 = '\x01';
    MessageRouter::Post<int,int,TutorialType,TutorialEventNew>
              ((MessageRouter *)gMessageRouter,Message::Toturi,0,0x25);
    goto LAB_045412b4;
  case 0x13:
    pcVar9 = "egypt_level_2";
    goto LAB_045415c8;
  case 0x14:
    pTVar7 = (TutorialMgr *)Sexy::LazySingleton<TutorialMgr>::GetInstance();
    cVar1 = '\x01';
    TutorialMgr::StartTutorial(pTVar7,0x14);
    pushUIStateAndDisableAll(this);
    goto LAB_045412b4;
  case 0x15:
    pcVar9 = "egypt_level_3";
LAB_045415c8:
    cVar1 = '\x01';
    std::string::string(asStack_db0,pcVar9);
    FUN_05478178((wstring *)asStack_ce8,L"[ADVICE_NEW_LEVEL]",asStack_de0);
    showLevelArrow(this,asStack_db0,(wstring *)asStack_ce8);
    FUN_05476c50((wstring *)asStack_ce8);
    nop();
    std::string::~string(asStack_db0);
    nop();
    pushUIStateAndDisableAll(this);
    goto LAB_045412b4;
  case 0x16:
    pTVar7 = (TutorialMgr *)Sexy::LazySingleton<TutorialMgr>::GetInstance();
    param_2 = 0x16;
    break;
  case 0x17:
  case 0x18:
    pTVar7 = (TutorialMgr *)Sexy::LazySingleton<TutorialMgr>::GetInstance();
    break;
  case 0x19:
    pTVar7 = (TutorialMgr *)Sexy::LazySingleton<TutorialMgr>::GetInstance();
    cVar1 = '\x01';
    TutorialMgr::StartTutorial(pTVar7,0x19);
    pushUIStateAndDisableAll(this);
    goto LAB_045412b4;
  case 0x1a:
    pTVar7 = (TutorialMgr *)Sexy::LazySingleton<TutorialMgr>::GetInstance();
    cVar1 = '\x01';
    TutorialMgr::StartTutorial(pTVar7,0x1a);
    pushUIStateAndDisableAll(this);
    goto LAB_045412b4;
  case 0x1b:
    pTVar7 = (TutorialMgr *)Sexy::LazySingleton<TutorialMgr>::GetInstance();
    cVar1 = '\x01';
    TutorialMgr::StartTutorial(pTVar7,0x1b);
    pushUIStateAndDisableAll(this);
    goto LAB_045412b4;
  case 0x1c:
    lVar6 = Sexy::LazySingleton<TutorialMgr>::GetInstance();
    iVar2 = FUN_04528c74(*(undefined4 *)(lVar6 + 0x10));
    if (iVar2 == 0x1c) goto LAB_045412a4;
    pTVar7 = (TutorialMgr *)Sexy::LazySingleton<TutorialMgr>::GetInstance();
    param_2 = 0x1c;
    break;
  case 0x1d:
    lVar6 = Sexy::LazySingleton<TutorialMgr>::GetInstance();
    iVar2 = FUN_04528c74(*(undefined4 *)(lVar6 + 0x10));
    if (iVar2 == 0x1d) {
      local_e68 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
      pcVar9 = "NEWPLAYER_COLLECTION_ACTIVITY_PENNYCLASSROOM_INTRO";
    }
    else {
      local_e68 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
      pcVar9 = "TUTORIAL_LEVEL_UP_INTRO";
    }
    goto LAB_04541760;
  case 0x1e:
    lVar6 = Sexy::LazySingleton<TutorialMgr>::GetInstance();
    iVar2 = FUN_04528c74(*(undefined4 *)(lVar6 + 0x10));
    if (iVar2 == 0x1e) {
      iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar2);
      cVar1 = FUN_04528c58(local_d60);
      if ((cVar1 != '\0') && (local_d50 != '\0')) {
        MessageRouter::Post((_func_void *)gMessageRouter);
        std::string::string(asStack_e48,"");
        nop();
        ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo(aRStack_e40);
        std::string::string(asStack_ce8,"UIWorldMapNewPlayerButton");
        pUVar8 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_ce8);
        std::string::~string(asStack_ce8);
        nop();
        if ((pUVar8 != (UIWidget *)0x0) && (cVar1 = UIWidget::IsVisible(pUVar8), cVar1 != '\0')) {
          uVar10 = LawnApp::GetWorldMap(gLawnApp);
          std::string::string(asStack_db0,"");
          UIWidget::GetDrawRect();
          this_02 = (GameMaskUI *)GameMaskUI::ShowMask(uVar10,1,asStack_db0,asStack_ce8);
          GameMaskUI::EnableScale(this_02,false);
          std::string::~string(asStack_db0);
          nop();
        }
        ActivityCollectionData::ActivityCollectionData((ActivityCollectionData *)asStack_db0);
        cVar1 = ActiveItem::GetDataSerialized((ActiveItem *)aDStack_d68,(RtObject *)asStack_db0);
        if (cVar1 != '\0') {
          std::
          map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
          ::map(amStack_e10);
          cVar1 = ActivityCollectionData::IsActivityClose
                            ((ActivityCollectionData *)asStack_db0,0x2a7d);
          if (cVar1 == '\0') {
            std::
            map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
            ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
                   *)asStack_de0);
            this_03 = (DNetwork *)DSingleton<DNetwork>::getInstance();
            _PacketId::_PacketId((_PacketId *)asStack_ce8);
            FUN_02fd4410(afStack_e30,this);
            std::string::string(asStack_e38,"[NET_CONNECTING]");
            DNetwork::requestMsg
                      (this_03,asStack_118,(map *)asStack_de0,30.0,(function *)afStack_e30,true,true
                       ,asStack_e38,0);
            std::string::~string(asStack_e38);
            nop();
            std::function<bool(Sexy::Touch_const&)>::~function(afStack_e30);
            _PacketId::~_PacketId((_PacketId *)asStack_ce8);
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                    *)asStack_de0);
          }
          std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                  *)amStack_e10);
        }
        ActivityCollectionData::~ActivityCollectionData((ActivityCollectionData *)asStack_db0);
        std::string::~string(asStack_e48);
      }
      cVar1 = '\x01';
      ActiveItem::~ActiveItem((ActiveItem *)aDStack_d68);
    }
    else {
      pTVar7 = (TutorialMgr *)Sexy::LazySingleton<TutorialMgr>::GetInstance();
      cVar1 = '\x01';
      TutorialMgr::StartTutorial(pTVar7,0x1e);
      pushUIStateAndDisableAll(this);
    }
    goto LAB_045412b4;
  case 0x1f:
    local_e68 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    pcVar9 = "TUTORIAL_HARD_LEVEL_INTRO";
    goto LAB_04541760;
  case 0x20:
    local_e68 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    pcVar9 = "TUTORIAL_FIRST_RECHARGE_INTRO";
LAB_04541760:
    cVar1 = '\x01';
    std::string::string(asStack_de0,pcVar9);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onYetiNarrationFinished);
    Sexy::Delegate0::Delegate0<WorldMap,void(WorldMap::*)()>(aDStack_d68,asStack_ce8);
    std::string::string(asStack_db0,"");
    CrazyNPCManager::StartNarrativeID(local_e68,asStack_de0,aDStack_d68,asStack_db0);
    std::string::~string(asStack_db0);
    nop();
    std::string::~string(asStack_de0);
    nop();
    goto LAB_045412b4;
  case 0x21:
    pTVar7 = (TutorialMgr *)Sexy::LazySingleton<TutorialMgr>::GetInstance();
    param_2 = 0x21;
    break;
  case 0x22:
    pTVar7 = (TutorialMgr *)Sexy::LazySingleton<TutorialMgr>::GetInstance();
    param_2 = 0x22;
    break;
  case 0x23:
    pTVar7 = (TutorialMgr *)Sexy::LazySingleton<TutorialMgr>::GetInstance();
    param_2 = 0x23;
    break;
  case 0x24:
    pTVar7 = (TutorialMgr *)Sexy::LazySingleton<TutorialMgr>::GetInstance();
    param_2 = 0x24;
    break;
  case 0x25:
    pTVar7 = (TutorialMgr *)Sexy::LazySingleton<TutorialMgr>::GetInstance();
    param_2 = 0x25;
    break;
  case 0x26:
    pTVar7 = (TutorialMgr *)Sexy::LazySingleton<TutorialMgr>::GetInstance();
    param_2 = 0x26;
    break;
  case 0x27:
    pTVar7 = (TutorialMgr *)Sexy::LazySingleton<TutorialMgr>::GetInstance();
    param_2 = 0x27;
    break;
  case 0x28:
    pTVar7 = (TutorialMgr *)Sexy::LazySingleton<TutorialMgr>::GetInstance();
    param_2 = 0x28;
    break;
  case 0x29:
    pTVar7 = (TutorialMgr *)Sexy::LazySingleton<TutorialMgr>::GetInstance();
    param_2 = 0x29;
    break;
  case 0x2a:
    pTVar7 = (TutorialMgr *)Sexy::LazySingleton<TutorialMgr>::GetInstance();
    param_2 = 0x2a;
    break;
  case 0x31:
    cVar1 = '\x01';
    FUN_04528c08(this + 0x356,0);
    PlayTransitionEffect(this);
    goto LAB_045412b4;
  case 0x33:
    uVar13 = PVZ_EOT();
    *(undefined4 *)(this + 0x438) = uVar13;
    pushUIStateAndDisableAll(this);
    this_00 = (Dialog *)Lua::CUIDialog::GetDialog("DaveShopBtn");
    if (this_00 != (Dialog *)0x0) {
      std::string::string(asStack_ce8,"UIButton_DaveShop");
      lVar6 = UI::Dialog::GetWidget(this_00,asStack_ce8);
      std::string::~string(asStack_ce8);
      nop();
      if (lVar6 != 0) {
        std::string::string(asStack_db0,"[ADVICE_GOTO_STORE]");
        Sexy::Insets::Insets((Insets *)asStack_ce8);
        lVar6 = GameMaskUI::ShowMask(lVar6,4,asStack_db0,asStack_ce8);
        std::string::~string(asStack_db0);
        nop();
        if (lVar6 != 0) {
          uVar13 = FUN_04529744(0xfffffe02);
          uVar3 = FUN_04529744(0x23);
          FUN_04529220(lVar6 + 0x114,uVar13,uVar3);
        }
      }
    }
    plVar5 = (long *)Lua::CUIDialog::GetDialog("MonthlyCardBtn");
    if (plVar5 == (long *)0x0) goto switchD_0454130c_caseD_2;
    cVar1 = '\x01';
    (**(code **)(*plVar5 + 0x188))(plVar5,1);
    goto LAB_045412b4;
  case 0x35:
    cVar1 = LawnApp::IsNetworkModuleOK();
    if (cVar1 == '\0') {
      (**(code **)(*(long *)this + 0x348))(this,0x35);
    }
    else {
      uVar13 = PVZ_EOT();
      *(undefined4 *)(this + 0x438) = uVar13;
      pushUIStateAndDisableAll(this);
      std::string::string(asStack_ce8,"UIWorldMapActivityHomeButton");
      lVar6 = UIWidget::GetWidgetBySheetName(asStack_ce8);
      std::string::~string(asStack_ce8);
      nop();
      if (lVar6 != 0) {
        nop();
        UIWidget::SetClickable(this_01,true);
        pcVar9 = "[ADVICE_GOTO_DANGER_ROOM]";
        goto LAB_045414d8;
      }
      cVar1 = '\0';
      (**(code **)(*(long *)this + 0x348))(this,0x35);
    }
    goto LAB_045412b4;
  case 0x36:
    cVar1 = '\x01';
    std::string::string(asStack_ce8,"UIWorldMapPlantLevelUpButton");
    UIWidget::GetWidgetBySheetName(asStack_ce8);
    std::string::~string(asStack_ce8);
    nop();
    std::string::string(asStack_db0,"");
    UIWidget::GetDrawRect();
    uVar10 = 4;
LAB_045414f8:
    GameMaskUI::ShowMask(this,uVar10,asStack_db0,asStack_ce8);
    std::string::~string(asStack_db0);
    nop();
    goto LAB_045412b4;
  case 0x39:
    pTVar7 = (TutorialMgr *)Sexy::LazySingleton<TutorialMgr>::GetInstance();
    param_2 = 0x39;
    break;
  case 0x3a:
    pTVar7 = (TutorialMgr *)Sexy::LazySingleton<TutorialMgr>::GetInstance();
    param_2 = 0x3a;
    break;
  case 0x3b:
    pTVar7 = (TutorialMgr *)Sexy::LazySingleton<TutorialMgr>::GetInstance();
    param_2 = 0x3b;
    break;
  case 0x3e:
    pTVar7 = (TutorialMgr *)Sexy::LazySingleton<TutorialMgr>::GetInstance();
    param_2 = 0x3e;
    break;
  case 0x3f:
    pTVar7 = (TutorialMgr *)Sexy::LazySingleton<TutorialMgr>::GetInstance();
    param_2 = 0x3f;
    break;
  case 0x40:
    pTVar7 = (TutorialMgr *)Sexy::LazySingleton<TutorialMgr>::GetInstance();
    param_2 = 0x40;
    break;
  case 0x44:
    pTVar7 = (TutorialMgr *)Sexy::LazySingleton<TutorialMgr>::GetInstance();
    param_2 = 0x44;
    break;
  case 0x45:
    pTVar7 = (TutorialMgr *)Sexy::LazySingleton<TutorialMgr>::GetInstance();
    param_2 = 0x45;
    break;
  case 0x46:
    pTVar7 = (TutorialMgr *)Sexy::LazySingleton<TutorialMgr>::GetInstance();
    param_2 = 0x46;
    break;
  case 0x47:
    pTVar7 = (TutorialMgr *)Sexy::LazySingleton<TutorialMgr>::GetInstance();
    param_2 = 0x47;
    break;
  case 0x48:
    pTVar7 = (TutorialMgr *)Sexy::LazySingleton<TutorialMgr>::GetInstance();
    param_2 = 0x48;
    break;
  case 0x49:
    pTVar7 = (TutorialMgr *)Sexy::LazySingleton<TutorialMgr>::GetInstance();
    param_2 = 0x49;
    break;
  case 0x4a:
    pTVar7 = (TutorialMgr *)Sexy::LazySingleton<TutorialMgr>::GetInstance();
    param_2 = 0x4a;
    break;
  case 0x4b:
    pTVar7 = (TutorialMgr *)Sexy::LazySingleton<TutorialMgr>::GetInstance();
    param_2 = 0x4b;
    break;
  case 0x4c:
    cVar1 = '\x01';
    pushUIStateAndDisableAll(this);
    FUN_04528c08(this + 0x356,0);
    goto LAB_045412b4;
  case 0x4d:
    pTVar7 = (TutorialMgr *)Sexy::LazySingleton<TutorialMgr>::GetInstance();
    param_2 = 0x4d;
    break;
  case 0x50:
    pTVar7 = (TutorialMgr *)Sexy::LazySingleton<TutorialMgr>::GetInstance();
    param_2 = 0x50;
    break;
  case 0x52:
    pTVar7 = (TutorialMgr *)Sexy::LazySingleton<TutorialMgr>::GetInstance();
    param_2 = 0x52;
  }
  cVar1 = '\x01';
  TutorialMgr::StartTutorial(pTVar7,param_2);
  pushUIStateAndDisableAll(this);
  FUN_04528c08(this + 0x356,0);
LAB_045412b4:
  std::string::~string(asStack_e50);
LAB_045412bc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&) */

void __thiscall WorldMap::onNotifyRefreshActivityList(WorldMap *this,bool param_1,set *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  WorldLevelPackageManager *pWVar6;
  PlayerInfo *this_00;
  WorldMap_LevelPackageButton *this_01;
  UIWidget *this_02;
  undefined4 local_d0 [2];
  undefined8 local_c8 [2];
  undefined8 local_b8 [6];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    lVar4 = GameStateMgr::GetQueuedWorldMapDestination(gGameStateMgr);
    if (lVar4 == 0) {
      if ((((*(long *)(this + 0x2f0) != 0) &&
           (cVar1 = WorldMapUtils::IsRiftWorld((string *)(*(long *)(this + 0x2f0) + 0x38)),
           cVar1 == '\0')) &&
          (cVar1 = WorldMapUtils::IsPVZ1World((string *)(*(long *)(this + 0x2f0) + 0x38)),
          cVar1 == '\0')) &&
         ((cVar1 = WorldMapUtils::IsUnchartedWorld((string *)(*(long *)(this + 0x2f0) + 0x38)),
          cVar1 == '\0' &&
          (cVar1 = WorldMapUtils::IsCardGameWorld((string *)(*(long *)(this + 0x2f0) + 0x38)),
          cVar1 == '\0')))) {
        WorldMapUtils::IsPlantWarsWorld((string *)(*(long *)(this + 0x2f0) + 0x38));
      }
    }
    else {
      lVar5 = FUN_04528bb0(*(undefined8 *)(lVar4 + 0xe8));
      cVar1 = WorldMapUtils::IsRiftWorld((string *)(lVar5 + 0x38));
      if (cVar1 == '\0') {
        lVar5 = FUN_04528bb0(*(undefined8 *)(lVar4 + 0xe8));
        cVar1 = WorldMapUtils::IsPVZ1World((string *)(lVar5 + 0x38));
        if (cVar1 == '\0') {
          lVar5 = FUN_04528bb0(*(undefined8 *)(lVar4 + 0xe8));
          cVar1 = WorldMapUtils::IsUnchartedWorld((string *)(lVar5 + 0x38));
          if (cVar1 == '\0') {
            lVar5 = FUN_04528bb0(*(undefined8 *)(lVar4 + 0xe8));
            cVar1 = WorldMapUtils::IsCardGameWorld((string *)(lVar5 + 0x38));
            if (cVar1 == '\0') {
              lVar4 = FUN_04528bb0(*(undefined8 *)(lVar4 + 0xe8));
              WorldMapUtils::IsPlantWarsWorld((string *)(lVar4 + 0x38));
            }
          }
        }
      }
    }
    local_d0[0] = 0x2a6e;
    local_c8[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                            ((set<int,std::less<int>,std::allocator<int>> *)param_2,(int *)local_d0)
    ;
    local_b8[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_2);
    bVar2 = eastl::operator!=((rbtree_iterator *)local_c8,(rbtree_iterator *)local_b8);
    if (bVar2) {
      iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar3);
      cVar1 = FUN_04528c58(local_80);
      if ((cVar1 != '\0') && (local_70 != '\0')) {
        WorldLevelPackageNetworkData::WorldLevelPackageNetworkData
                  ((WorldLevelPackageNetworkData *)local_b8);
        cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)local_b8);
        if (cVar1 != '\0') {
          pWVar6 = (WorldLevelPackageManager *)
                   Sexy::LazySingleton<WorldLevelPackageManager>::GetInstancePtr();
          WorldLevelPackageManager::LoadData(pWVar6,(WorldLevelPackageNetworkData *)local_b8);
          pWVar6 = (WorldLevelPackageManager *)
                   Sexy::LazySingleton<WorldLevelPackageManager>::GetInstancePtr();
          WorldLevelPackageManager::RefreshValidPackage(pWVar6);
          std::string::string((string *)local_c8,"UIWorldMapLevelPackageButton");
          lVar4 = UIWidget::GetWidgetBySheetName((string *)local_c8);
          std::string::~string((string *)local_c8);
          nop();
          Sexy::LazySingleton<WorldLevelPackageManager>::GetInstancePtr();
          RechargeDailySignActivityManager::GetBannerImageName();
          pWVar6 = (WorldLevelPackageManager *)
                   Sexy::LazySingleton<WorldLevelPackageManager>::GetInstancePtr();
          FUN_05475d88((rbtree_iterator *)local_c8,(string *)local_d0);
          cVar1 = WorldLevelPackageManager::HasValidPackage(pWVar6,(rbtree_iterator *)local_c8);
          std::string::~string((string *)local_c8);
          this_00 = (PlayerInfo *)ProfileUtils::Profile();
          PlayerInfo::GetWorldLevelPackageFirstPlay(this_00);
          if (cVar1 == '\0') {
            if (lVar4 != 0) {
              nop();
              UIWidget::SetVisible(this_02,false);
            }
          }
          else if (lVar4 == 0) {
            Sexy::RtName::RtName((RtName *)local_c8,L"UIWorldMapLevelPackageButton");
            UIWidget::CreateWidget((rbtree_iterator *)local_c8,1);
            Sexy::RtName::~RtName((RtName *)local_c8);
          }
          else {
            nop();
            WorldMap_LevelPackageButton::UpdateExpireTime(this_01);
            UIWidget::SetVisible((UIWidget *)this_01,true);
          }
          std::string::~string((string *)local_d0);
        }
        WorldLevelPackageNetworkData::~WorldLevelPackageNetworkData
                  ((WorldLevelPackageNetworkData *)local_b8);
      }
      ActiveItem::~ActiveItem(aAStack_88);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::WorldMap() */

void __thiscall WorldMap::WorldMap(WorldMap *this)

{
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  *this_00;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *this_01;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *this_02;
  long lVar1;
  ShowAdvice *pSVar2;
  Effect_BouncingArrow *pEVar3;
  MapPopupDialog *this_03;
  UniverseMap *this_04;
  WorldMapCamera *this_05;
  undefined8 uVar4;
  undefined8 *puVar5;
  code *__n;
  Point *pPVar6;
  WorldMap *this_06;
  undefined4 uVar7;
  undefined4 local_148 [2];
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
             *)(this + 0x260);
  Sexy::Widget::Widget((Widget *)this);
  this_01 = (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x610);
  this_02 = (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x628);
  *(undefined ***)this = &PTR_GetClass_06857e50;
  StateMachine<WorldMapState>::StateMachine((StateMachine<WorldMapState> *)(this + 0xd8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x178));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 400));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1a8));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x1c0));
  Sexy::Point::Point((Point *)(this + 0x1f8));
  Sexy::Point::Point((Point *)(this + 0x200));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x210));
  Sexy::Insets::Insets((Insets *)(this + 0x218));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x228));
  Sexy::Point::Point((Point *)(this + 0x238));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x244));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x24c));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(this_00);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x2b8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x300));
  Set8BytesTo0((string *)(this + 0x308));
  Set8BytesTo0(this + 0x318);
  PieceConfig::PieceConfig((PieceConfig *)(this + 0x348));
  WorldMapActionManager::WorldMapActionManager((WorldMapActionManager *)(this + 0x358));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x390));
  Sexy::Insets::Insets((Insets *)(this + 0x3ac));
  ParallaxCache::ParallaxCache((ParallaxCache *)(this + 1000));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x428));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x430));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x450));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x458));
  Set8BytesTo0((string *)(this + 0x498));
  Set8BytesTo0((string *)(this + 0x4a0));
  MapEventItem::MapEventItem((MapEventItem *)(this + 0x4d0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(this_01);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(this_02);
  this_06 = this + 0x640;
  do {
    pPVar6 = (Point *)(this_06 + 0x10);
    Sexy::Insets::Insets((Insets *)this_06);
    this_06 = (WorldMap *)pPVar6;
  } while (pPVar6 != (Point *)(this + 0xe90));
  Sexy::Point::Point(pPVar6);
  Sexy::Point::Point((Point *)(this + 0xe98));
  Sexy::Point::Point((Point *)(this + 0xea0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xea8));
  Sexy::Point::Point((Point *)(this + 0xec8));
  Sexy::Point::Point((Point *)(this + 0xed0));
  *(undefined4 *)(this + 0xee4) = 4;
  uVar7 = PVZ_EOT();
  *(undefined4 *)(this + 0xd4) = uVar7;
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x178));
  Sexy::Point::Point((Point *)&local_140,0,0);
  this[0x208] = (WorldMap)0x0;
  *(ulong *)(this + 0x200) = CONCAT44(uStack_13c,local_140);
  this[0x209] = (WorldMap)0x0;
  this[0x20a] = (WorldMap)0x0;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_140,0.0,0.0);
  *(ulong *)(this + 0x210) = CONCAT44(uStack_13c,local_140);
  Sexy::Insets::Insets((Insets *)&local_140,0,0,0,0);
  *(ulong *)(this + 0x218) = CONCAT44(uStack_13c,local_140);
  *(undefined8 *)(this + 0x220) = uStack_138;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_140,0.0,0.0);
  *(undefined8 *)(this + 0x230) = 0;
  *(ulong *)(this + 0x228) = CONCAT44(uStack_13c,local_140);
  Sexy::Point::Point((Point *)&local_140,0,0);
  this[0x254] = (WorldMap)0x0;
  this[0x356] = (WorldMap)0x1;
  *(ulong *)(this + 0x238) = CONCAT44(uStack_13c,local_140);
  this[0x255] = (WorldMap)0x0;
  this[0x256] = (WorldMap)0x0;
  this[0x20b] = (WorldMap)0x0;
  this[0x20c] = (WorldMap)0x0;
  this[0x355] = (WorldMap)0x0;
  *(undefined8 *)(this + 800) = 0;
  this[0x353] = (WorldMap)0x0;
  *(undefined8 *)(this + 0xee8) = 0;
  *(undefined4 *)(this + 0x240) = uVar7;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_140,0.0,0.0);
  *(ulong *)(this + 0x244) = CONCAT44(uStack_13c,local_140);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_140,0.0,0.0);
  *(ulong *)(this + 0x24c) = CONCAT44(uStack_13c,local_140);
  *(undefined8 *)(this + 600) = 0;
  pSVar2 = GameObject::Create<ShowAdvice>();
  *(ShowAdvice **)(this + 0x290) = pSVar2;
  pEVar3 = GameObject::CreateOutsideTable<Effect_BouncingArrow>();
  *(Effect_BouncingArrow **)(this + 0x298) = pEVar3;
  CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06b0fb68);
  Effect_BouncingArrow::SetArrowImage(pEVar3,(Point *)&local_140);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_140);
  StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x298),false);
  this[0x2a0] = (WorldMap)0x0;
  this_03 = ::operator_new(0x280);
  MapPopupDialog::MapPopupDialog(this_03);
  *(MapPopupDialog **)(this + 0x2a8) = this_03;
  this_04 = ::operator_new(0x370);
  UniverseMap::UniverseMap(this_04);
  *(UniverseMap **)(this + 0x2b0) = this_04;
  (**(code **)(*(long *)(this_04 + 0x10) + 0x198))
            (this_04 + 0x10,0,0,*(undefined4 *)(gLawnApp + 0x724),*(undefined4 *)(gLawnApp + 0x728))
  ;
  lVar1 = *(long *)(this + 0x2b0) + 0x10;
  if (*(long *)(this + 0x2b0) == 0) {
    lVar1 = 0;
  }
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))(*(long **)(gLawnApp + 0x360),lVar1);
  lVar1 = *(long *)(this + 0x2b0) + 0x10;
  if (*(long *)(this + 0x2b0) == 0) {
    lVar1 = 0;
  }
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb8))(*(long **)(gLawnApp + 0x360),lVar1);
  lVar1 = *(long *)(this + 0x2b0) + 0x10;
  if (*(long *)(this + 0x2b0) == 0) {
    lVar1 = 0;
  }
  __n = *(code **)(**(long **)(gLawnApp + 0x360) + 0x98);
  (*__n)(*(long **)(gLawnApp + 0x360),lVar1);
  *(undefined8 *)(this + 0x3d0) = 0;
  this[0x3d8] = (WorldMap)0x0;
  *(undefined4 *)(this + 0x3dc) = uVar7;
  initializeZombossSoundRTPC(this);
  this[0x354] = (WorldMap)0x0;
  *(undefined4 *)(this + 0x2e8) = 0xffffffff;
  *(undefined8 *)(this + 0x2f0) = 0;
  this[0x2f8] = (WorldMap)0x0;
  this[0x2f9] = (WorldMap)0x0;
  std::string::append((string *)(this + 0x308),"",(size_t)__n);
  this[0x357] = (WorldMap)0x0;
  this[0xef0] = (WorldMap)0x0;
  this[0x378] = (WorldMap)0x0;
  this[0x33c] = (WorldMap)0x0;
  this[0x350] = (WorldMap)0x0;
  this[0x351] = (WorldMap)0x0;
  *(undefined4 *)(this + 0x340) = uVar7;
  *(undefined4 *)(this + 0x334) = 0x3f800000;
  *(undefined4 *)(this + 0x330) = 0x3f800000;
  *(undefined4 *)(this + 0x338) = 0x3f800000;
  *(undefined4 *)(this + 0x344) = 0x3f800000;
  this_05 = ::operator_new(0x48);
  WorldMapCamera::WorldMapCamera(this_05,(Graphics *)0x0);
  *(WorldMapCamera **)(this + 0x328) = this_05;
  WorldMapCamera::SetCameraScale(this_05,*(float *)(this + 0x338),*(float *)(this + 0x338));
  WorldMapCamera::SetCameraCenter
            (*(WorldMapCamera **)(this + 0x328),(float)*(int *)(gLawnApp + 0x724) * 0.5,
             (float)*(int *)(gLawnApp + 0x728) * 0.5);
  *(undefined8 *)(this + 0x380) = 0;
  *(undefined8 *)(this + 0x388) = 0;
  *(undefined8 *)(this + 0x3c0) = 0;
  *(undefined8 *)(this + 0x3c8) = 0;
  this[0x43c] = (WorldMap)0x0;
  *(undefined8 *)(this + 0x440) = 0;
  this[0x448] = (WorldMap)0x0;
  this[0x449] = (WorldMap)0x0;
  *(undefined4 *)(this + 0x44c) = 0;
  *(undefined4 *)(this + 0x438) = uVar7;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)&local_140);
  *(ulong *)(this + 0x450) = CONCAT44(uStack_13c,local_140);
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)&local_140);
  *(ulong *)(this + 0x458) = CONCAT44(uStack_13c,local_140);
  *(undefined4 *)(this + 0x460) = uVar7;
  *(undefined4 *)(this + 0x464) = uVar7;
  *(undefined4 *)(this + 0x468) = uVar7;
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::RtName::RtName((RtName *)&local_140,L"DefaultWorldMapProps");
  pPVar6 = (Point *)&local_140;
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>((RtWeakPtr<Sexy::ResourceInfo> *)local_148,uVar4,5)
  ;
  uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_148);
  *(undefined8 *)(this + 0x1f0) = uVar4;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_148);
  Sexy::RtName::~RtName((RtName *)&local_140);
  ParallaxCache::InitializeMultipliers
            ((ParallaxCache *)(this + 1000),*(WorldMapPropertySheet **)(this + 0x1f0));
  *(undefined4 *)(this + 0x46c) = 2;
  *(undefined4 *)(this + 0x478) = 0x85;
  this[0x470] = (WorldMap)0x0;
  *(undefined4 *)(this + 0x474) = 0;
  *(undefined8 *)(this + 0x480) = 0;
  *(undefined8 *)(this + 0x488) = 0;
  this[0x490] = (WorldMap)0x0;
  this[0x491] = (WorldMap)0x0;
  *(undefined4 *)(this + 0x494) = 0;
  std::string::append((string *)(this + 0x498),"",(size_t)pPVar6);
  std::string::append((string *)(this + 0x4a0),"",(size_t)pPVar6);
  *(undefined2 *)(this + 0x4a8) = 0;
  *(undefined4 *)(this + 0x4c0) = 0x16;
  *(undefined4 *)(this + 0x4ac) = 0xffffffff;
  *(undefined4 *)(this + 0x4b0) = 0;
  *(undefined4 *)(this + 0x4b4) = 0;
  *(undefined8 *)(this + 0x4b8) = 0;
  *(undefined8 *)(this + 0x4c8) = 0;
  MapEventItem::MapEventItem((MapEventItem *)&local_140);
  MapEventItem::operator=((MapEventItem *)(this + 0x4d0),(MapEventItem *)&local_140);
  MapEventItem::~MapEventItem((MapEventItem *)&local_140);
  this[0x608] = (WorldMap)0x0;
  *(undefined2 *)(this + 0x60a) = 0;
  *(undefined2 *)(this + 0x60c) = 0;
  this[0x60e] = (WorldMap)0x0;
  std::vector<MapEventType,std::allocator<MapEventType>>::clear
            ((vector<MapEventType,std::allocator<MapEventType>> *)this_01);
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)this_02);
  Sexy::Point::Point((Point *)&local_140,0,0);
  *(ulong *)(this + 0xe90) = CONCAT44(uStack_13c,local_140);
  Sexy::Point::Point((Point *)&local_140,0,0);
  *(ulong *)(this + 0xe98) = CONCAT44(uStack_13c,local_140);
  Sexy::Point::Point((Point *)&local_140,0,0);
  *(ulong *)(this + 0xea0) = CONCAT44(uStack_13c,local_140);
  std::vector<MapEventItem*,std::allocator<MapEventItem*>>::clear
            ((vector<MapEventItem*,std::allocator<MapEventItem*>> *)(this + 0xea8));
  this[0xec0] = (WorldMap)0x0;
  this[0xec1] = (WorldMap)0x0;
  this[0xec2] = (WorldMap)0x0;
  this[0xec3] = (WorldMap)0x0;
  *(undefined4 *)(this + 0xec4) = 0xffffffff;
  Sexy::Point::Point((Point *)&local_140,0,0);
  *(ulong *)(this + 0xec8) = CONCAT44(uStack_13c,local_140);
  Sexy::Point::Point((Point *)&local_140,0,0);
  this[0xed8] = (WorldMap)0x0;
  *(ulong *)(this + 0xed0) = CONCAT44(uStack_13c,local_140);
  this[0xed9] = (WorldMap)0x1;
  this[0xeda] = (WorldMap)0x0;
  this[0xedb] = (WorldMap)0x0;
  this[0xedc] = (WorldMap)0x0;
  local_140 = 1;
  std::vector<MapEventType,std::allocator<MapEventType>>::push_back
            ((vector<MapEventType,std::allocator<MapEventType>> *)this_01,(MapEventType *)&local_140
            );
  std::string::string((string *)&local_140,"level");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)this_02,(string *)&local_140);
  std::string::~string((string *)&local_140);
  nop();
  local_140 = 8;
  std::vector<MapEventType,std::allocator<MapEventType>>::push_back
            ((vector<MapEventType,std::allocator<MapEventType>> *)this_01,(MapEventType *)&local_140
            );
  std::string::string((string *)&local_140,"keygate");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)this_02,(string *)&local_140);
  std::string::~string((string *)&local_140);
  nop();
  local_140 = 7;
  std::vector<MapEventType,std::allocator<MapEventType>>::push_back
            ((vector<MapEventType,std::allocator<MapEventType>> *)this_01,(MapEventType *)&local_140
            );
  std::string::string((string *)&local_140,"stargate");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)this_02,(string *)&local_140);
  std::string::~string((string *)&local_140);
  nop();
  local_140 = 2;
  std::vector<MapEventType,std::allocator<MapEventType>>::push_back
            ((vector<MapEventType,std::allocator<MapEventType>> *)this_01,(MapEventType *)&local_140
            );
  std::string::string((string *)&local_140,"rewardplantbox");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)this_02,(string *)&local_140);
  std::string::~string((string *)&local_140);
  nop();
  local_140 = 3;
  std::vector<MapEventType,std::allocator<MapEventType>>::push_back
            ((vector<MapEventType,std::allocator<MapEventType>> *)this_01,(MapEventType *)&local_140
            );
  std::string::string((string *)&local_140,"rewardplant");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)this_02,(string *)&local_140);
  std::string::~string((string *)&local_140);
  nop();
  local_140 = 4;
  std::vector<MapEventType,std::allocator<MapEventType>>::push_back
            ((vector<MapEventType,std::allocator<MapEventType>> *)this_01,(MapEventType *)&local_140
            );
  std::string::string((string *)&local_140,"rewardupgrade");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)this_02,(string *)&local_140);
  std::string::~string((string *)&local_140);
  nop();
  local_140 = 5;
  std::vector<MapEventType,std::allocator<MapEventType>>::push_back
            ((vector<MapEventType,std::allocator<MapEventType>> *)this_01,(MapEventType *)&local_140
            );
  std::string::string((string *)&local_140,"rewardpowerup");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)this_02,(string *)&local_140);
  std::string::~string((string *)&local_140);
  nop();
  local_140 = 9;
  std::vector<MapEventType,std::allocator<MapEventType>>::push_back
            ((vector<MapEventType,std::allocator<MapEventType>> *)this_01,(MapEventType *)&local_140
            );
  std::string::string((string *)&local_140,"pathnode");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)this_02,(string *)&local_140);
  std::string::~string((string *)&local_140);
  nop();
  local_140 = 0xc;
  std::vector<MapEventType,std::allocator<MapEventType>>::push_back
            ((vector<MapEventType,std::allocator<MapEventType>> *)this_01,(MapEventType *)&local_140
            );
  std::string::string((string *)&local_140,"rewardgiftbox");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)this_02,(string *)&local_140);
  std::string::~string((string *)&local_140);
  nop();
  local_148[0] = 1;
  puVar5 = (undefined8 *)
           std::
           map<MapEventType,Sexy::TRect<int>,std::less<MapEventType>,std::allocator<std::pair<MapEventType_const,Sexy::TRect<int>>>>
           ::operator[]((map<MapEventType,Sexy::TRect<int>,std::less<MapEventType>,std::allocator<std::pair<MapEventType_const,Sexy::TRect<int>>>>
                         *)this_00,(MapEventType *)local_148);
  Sexy::Insets::Insets((Insets *)&local_140,-0x24,-0x22,0x48,0x3a);
  *puVar5 = CONCAT44(uStack_13c,local_140);
  puVar5[1] = uStack_138;
  local_148[0] = 2;
  puVar5 = (undefined8 *)
           std::
           map<MapEventType,Sexy::TRect<int>,std::less<MapEventType>,std::allocator<std::pair<MapEventType_const,Sexy::TRect<int>>>>
           ::operator[]((map<MapEventType,Sexy::TRect<int>,std::less<MapEventType>,std::allocator<std::pair<MapEventType_const,Sexy::TRect<int>>>>
                         *)this_00,(MapEventType *)local_148);
  Sexy::Insets::Insets((Insets *)&local_140,-0x1e,-0x3c,0x3c,0x50);
  *puVar5 = CONCAT44(uStack_13c,local_140);
  puVar5[1] = uStack_138;
  local_148[0] = 3;
  puVar5 = (undefined8 *)
           std::
           map<MapEventType,Sexy::TRect<int>,std::less<MapEventType>,std::allocator<std::pair<MapEventType_const,Sexy::TRect<int>>>>
           ::operator[]((map<MapEventType,Sexy::TRect<int>,std::less<MapEventType>,std::allocator<std::pair<MapEventType_const,Sexy::TRect<int>>>>
                         *)this_00,(MapEventType *)local_148);
  Sexy::Insets::Insets((Insets *)&local_140,-0x24,-0x34,0x48,0x46);
  *puVar5 = CONCAT44(uStack_13c,local_140);
  puVar5[1] = uStack_138;
  local_148[0] = 4;
  puVar5 = (undefined8 *)
           std::
           map<MapEventType,Sexy::TRect<int>,std::less<MapEventType>,std::allocator<std::pair<MapEventType_const,Sexy::TRect<int>>>>
           ::operator[]((map<MapEventType,Sexy::TRect<int>,std::less<MapEventType>,std::allocator<std::pair<MapEventType_const,Sexy::TRect<int>>>>
                         *)this_00,(MapEventType *)local_148);
  Sexy::Insets::Insets((Insets *)&local_140,-0x22,-0x4c,0x44,0x5a);
  *puVar5 = CONCAT44(uStack_13c,local_140);
  puVar5[1] = uStack_138;
  local_148[0] = 5;
  puVar5 = (undefined8 *)
           std::
           map<MapEventType,Sexy::TRect<int>,std::less<MapEventType>,std::allocator<std::pair<MapEventType_const,Sexy::TRect<int>>>>
           ::operator[]((map<MapEventType,Sexy::TRect<int>,std::less<MapEventType>,std::allocator<std::pair<MapEventType_const,Sexy::TRect<int>>>>
                         *)this_00,(MapEventType *)local_148);
  Sexy::Insets::Insets((Insets *)&local_140,-0x14,-0x14,0x28,0x28);
  *puVar5 = CONCAT44(uStack_13c,local_140);
  puVar5[1] = uStack_138;
  local_148[0] = 7;
  puVar5 = (undefined8 *)
           std::
           map<MapEventType,Sexy::TRect<int>,std::less<MapEventType>,std::allocator<std::pair<MapEventType_const,Sexy::TRect<int>>>>
           ::operator[]((map<MapEventType,Sexy::TRect<int>,std::less<MapEventType>,std::allocator<std::pair<MapEventType_const,Sexy::TRect<int>>>>
                         *)this_00,(MapEventType *)local_148);
  Sexy::Insets::Insets((Insets *)&local_140,-0x32,-100,100,0x78);
  *puVar5 = CONCAT44(uStack_13c,local_140);
  puVar5[1] = uStack_138;
  local_148[0] = 8;
  puVar5 = (undefined8 *)
           std::
           map<MapEventType,Sexy::TRect<int>,std::less<MapEventType>,std::allocator<std::pair<MapEventType_const,Sexy::TRect<int>>>>
           ::operator[]((map<MapEventType,Sexy::TRect<int>,std::less<MapEventType>,std::allocator<std::pair<MapEventType_const,Sexy::TRect<int>>>>
                         *)this_00,(MapEventType *)local_148);
  Sexy::Insets::Insets((Insets *)&local_140,-0x32,-0x5a,100,0x72);
  *puVar5 = CONCAT44(uStack_13c,local_140);
  puVar5[1] = uStack_138;
  local_148[0] = 9;
  puVar5 = (undefined8 *)
           std::
           map<MapEventType,Sexy::TRect<int>,std::less<MapEventType>,std::allocator<std::pair<MapEventType_const,Sexy::TRect<int>>>>
           ::operator[]((map<MapEventType,Sexy::TRect<int>,std::less<MapEventType>,std::allocator<std::pair<MapEventType_const,Sexy::TRect<int>>>>
                         *)this_00,(MapEventType *)local_148);
  Sexy::Insets::Insets((Insets *)&local_140,-0x14,-0x14,0x28,0x28);
  *puVar5 = CONCAT44(uStack_13c,local_140);
  puVar5[1] = uStack_138;
  local_148[0] = 10;
  puVar5 = (undefined8 *)
           std::
           map<MapEventType,Sexy::TRect<int>,std::less<MapEventType>,std::allocator<std::pair<MapEventType_const,Sexy::TRect<int>>>>
           ::operator[]((map<MapEventType,Sexy::TRect<int>,std::less<MapEventType>,std::allocator<std::pair<MapEventType_const,Sexy::TRect<int>>>>
                         *)this_00,(MapEventType *)local_148);
  Sexy::Insets::Insets((Insets *)&local_140,-0x14,-0x14,0x28,0x28);
  *puVar5 = CONCAT44(uStack_13c,local_140);
  puVar5[1] = uStack_138;
  local_148[0] = 0xb;
  puVar5 = (undefined8 *)
           std::
           map<MapEventType,Sexy::TRect<int>,std::less<MapEventType>,std::allocator<std::pair<MapEventType_const,Sexy::TRect<int>>>>
           ::operator[]((map<MapEventType,Sexy::TRect<int>,std::less<MapEventType>,std::allocator<std::pair<MapEventType_const,Sexy::TRect<int>>>>
                         *)this_00,(MapEventType *)local_148);
  Sexy::Insets::Insets((Insets *)&local_140,-0x14,-0x14,0x28,0x28);
  *puVar5 = CONCAT44(uStack_13c,local_140);
  puVar5[1] = uStack_138;
  local_148[0] = 0xc;
  puVar5 = (undefined8 *)
           std::
           map<MapEventType,Sexy::TRect<int>,std::less<MapEventType>,std::allocator<std::pair<MapEventType_const,Sexy::TRect<int>>>>
           ::operator[]((map<MapEventType,Sexy::TRect<int>,std::less<MapEventType>,std::allocator<std::pair<MapEventType_const,Sexy::TRect<int>>>>
                         *)this_00,(MapEventType *)local_148);
  Sexy::Insets::Insets((Insets *)&local_140,-0x1e,-0x3c,0x3c,0x50);
  *puVar5 = CONCAT44(uStack_13c,local_140);
  puVar5[1] = uStack_138;
  local_148[0] = 0xd;
  puVar5 = (undefined8 *)
           std::
           map<MapEventType,Sexy::TRect<int>,std::less<MapEventType>,std::allocator<std::pair<MapEventType_const,Sexy::TRect<int>>>>
           ::operator[]((map<MapEventType,Sexy::TRect<int>,std::less<MapEventType>,std::allocator<std::pair<MapEventType_const,Sexy::TRect<int>>>>
                         *)this_00,(MapEventType *)local_148);
  Sexy::Insets::Insets((Insets *)&local_140,-0x1e,-0x3c,0x3c,0x50);
  *puVar5 = CONCAT44(uStack_13c,local_140);
  puVar5[1] = uStack_138;
  this[0x6c] = (WorldMap)0x0;
  *(undefined4 *)(this + 0xee0) = uVar7;
  PrepForLoading(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap::StaticNew() */

WorldMap * WorldMap::StaticNew(void)

{
  WorldMap *this;
  
  this = ::operator_new(0xef8);
  WorldMap(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::~WorldMap() */

void __thiscall WorldMap::~WorldMap(WorldMap *this)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  ulong uVar4;
  char *pcVar5;
  ulong uVar6;
  undefined8 uVar7;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06857e50;
  if (*(long *)(this + 0x2b0) != 0) {
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x68))
              (*(long **)(gLawnApp + 0x360),*(long *)(this + 0x2b0) + 0x10);
    lVar1 = *(long *)(this + 0x2b0) + 0x10;
    if (*(long *)(this + 0x2b0) == 0) {
      lVar1 = 0;
    }
    (**(code **)(*(long *)gLawnApp + 0x150))(gLawnApp,lVar1);
    *(undefined8 *)(this + 0x2b0) = 0;
  }
  LawnApp::KillScrollBanner(gLawnApp);
  LawnApp::KillMarqueeView(gLawnApp);
  ToolPacketData::GetProps();
  cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (cVar2 != '\0') {
    ToolPacketData::GetProps();
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    (**(code **)(*plVar3 + 0x48))();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  ToolPacketData::GetProps();
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (*(long **)(this + 0x298) == (long *)0x0) {
    plVar3 = *(long **)(this + 0x2a8);
  }
  else {
    (**(code **)(**(long **)(this + 0x298) + 0x18))();
    *(undefined8 *)(this + 0x298) = 0;
    plVar3 = *(long **)(this + 0x2a8);
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
    *(undefined8 *)(this + 0x2a8) = 0;
  }
  if (*(long **)(this + 0x328) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x328) + 8))();
    *(undefined8 *)(this + 0x328) = 0;
  }
  uVar7 = *(undefined8 *)(this + 0x1a8);
  uVar6 = 0;
  uVar4 = FUN_04528cac(uVar7,*(undefined8 *)(this + 0x1b0));
  if (uVar4 != 0) {
    do {
      plVar3 = (long *)FUN_04528cb8(uVar7,uVar6);
      if ((long *)*plVar3 != (long *)0x0) {
        (**(code **)(*(long *)*plVar3 + 0x18))();
        uVar7 = *(undefined8 *)(this + 0x1a8);
        uVar4 = FUN_04528cac(uVar7,*(undefined8 *)(this + 0x1b0));
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar4);
  }
  std::vector<PopAnimRig*,std::allocator<PopAnimRig*>>::clear
            ((vector<PopAnimRig*,std::allocator<PopAnimRig*>> *)(this + 0x1a8));
  purgeMapPathGroups(this);
  if (*(long **)(this + 0x380) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x380) + 0x18))();
    *(undefined8 *)(this + 0x380) = 0;
  }
  if (*(long **)(this + 0x388) == (long *)0x0) {
    plVar3 = *(long **)(this + 0x3c0);
  }
  else {
    (**(code **)(**(long **)(this + 0x388) + 0x18))();
    *(undefined8 *)(this + 0x388) = 0;
    plVar3 = *(long **)(this + 0x3c0);
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))();
    *(undefined8 *)(this + 0x3c0) = 0;
  }
  if (*(long **)(this + 0x3d0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x3d0) + 0x18))();
    *(undefined8 *)(this + 0x3d0) = 0;
  }
  if (*(long **)(this + 0xee8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xee8) + 0x18))();
    *(undefined8 *)(this + 0xee8) = 0;
  }
  PurgeWorldMapActions(this);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UnloadResources(this);
  cleanupZombossSoundRTPC();
  pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar5,"Stop_World_Map_Events");
  std::vector<MapEventItem*,std::allocator<MapEventItem*>>::~vector
            ((vector<MapEventItem*,std::allocator<MapEventItem*>> *)(this + 0xea8));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x628));
  std::vector<MapEventType,std::allocator<MapEventType>>::~vector
            ((vector<MapEventType,std::allocator<MapEventType>> *)(this + 0x610));
  MapEventItem::~MapEventItem((MapEventItem *)(this + 0x4d0));
  std::string::~string((string *)(this + 0x4a0));
  std::string::~string((string *)(this + 0x498));
  ParallaxCache::~ParallaxCache((ParallaxCache *)(this + 1000));
  std::vector<MapPathGroup,std::allocator<MapPathGroup>>::~vector
            ((vector<MapPathGroup,std::allocator<MapPathGroup>> *)(this + 0x390));
  WorldMapActionManager::~WorldMapActionManager((WorldMapActionManager *)(this + 0x358));
  std::string::~string((string *)(this + 0x318));
  std::string::~string((string *)(this + 0x308));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x300));
  std::
  map<std::string,Sexy::RtWeakPtr<Sexy::Image>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<Sexy::Image>>>>
  ::~map((map<std::string,Sexy::RtWeakPtr<Sexy::Image>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<Sexy::Image>>>>
          *)(this + 0x2b8));
  std::
  map<MapEventType,Sexy::TRect<int>,std::less<MapEventType>,std::allocator<std::pair<MapEventType_const,Sexy::TRect<int>>>>
  ::~map((map<MapEventType,Sexy::TRect<int>,std::less<MapEventType>,std::allocator<std::pair<MapEventType_const,Sexy::TRect<int>>>>
          *)(this + 0x260));
  std::
  map<Sexy::RtName,bool,std::less<Sexy::RtName>,std::allocator<std::pair<Sexy::RtName_const,bool>>>
  ::~map((map<Sexy::RtName,bool,std::less<Sexy::RtName>,std::allocator<std::pair<Sexy::RtName_const,bool>>>
          *)(this + 0x1c0));
  std::vector<PopAnimRig*,std::allocator<PopAnimRig*>>::~vector
            ((vector<PopAnimRig*,std::allocator<PopAnimRig*>> *)(this + 0x1a8));
  std::vector<WorldResourceLoadState,std::allocator<WorldResourceLoadState>>::~vector
            ((vector<WorldResourceLoadState,std::allocator<WorldResourceLoadState>> *)(this + 400));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x178));
  std::_Destroy<StateDefinition<CardGameState>>((StateDefinition *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap::~WorldMap() */

void __thiscall WorldMap::~WorldMap(WorldMap *this)

{
  ~WorldMap(this);
  AK::FreeHook(this);
  return;
}


/* WorldMap::RemovedFromManager(Sexy::WidgetManager*) */

void __thiscall WorldMap::RemovedFromManager(WorldMap *this,WidgetManager *param_1)

{
  long lVar1;
  
  Sexy::WidgetContainer::RemovedFromManager((WidgetContainer *)this,param_1);
  if (*(long *)(this + 0x2b0) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))
              ((long *)gLawnApp[0x6c],*(long *)(this + 0x2b0) + 0x10);
    lVar1 = *(long *)(this + 0x2b0) + 0x10;
    if (*(long *)(this + 0x2b0) == 0) {
      lVar1 = 0;
    }
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,lVar1);
    *(undefined8 *)(this + 0x2b0) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap::onStartPVZ1ModeLevel(std::string const&) */

void __thiscall WorldMap::onStartPVZ1ModeLevel(WorldMap *this,string *param_1)

{
  char cVar1;
  undefined8 uVar2;
  PrimeText *this_00;
  char *pcVar3;
  TGALogMgr *this_01;
  PVZ1ModeUtils *this_02;
  size_t __n;
  DString aDStack_68 [16];
  string asStack_58 [8];
  undefined1 auStack_50 [8];
  string asStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = FUN_0547429c(param_1);
  Sexy::StrFormat("WorldMap::onStartPVZ1ModeLevel - Starting level from pvz1mode dialog callback: %s"
                  ,asStack_58,uVar2);
  nop();
  std::string::~string(asStack_58);
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  FUN_045291e8(gGameStateMgr + 0x1eb1);
  cVar1 = PVZ1ModeUtils::IsHardMode();
  if (cVar1 != '\0') {
    this_02 = (PVZ1ModeUtils *)Sexy::LazySingleton<RiftThemeMgr>::GetInstance();
    PVZ1ModeUtils::GetCurrentThemeList(this_02);
    RiftThemeMgr::SyncTheme((RiftThemeMgr *)this_02,(vector *)asStack_58);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)asStack_58);
  }
  __n = 5;
  SwitchToGameLevel(this,param_1,5,0);
  TGAPVZ1ModeData::TGAPVZ1ModeData((TGAPVZ1ModeData *)asStack_58);
  DString::DString(aDStack_68,3);
  pcVar3 = (char *)DString::c_str(aDStack_68);
  std::string::append(asStack_58,pcVar3,__n);
  DString::~DString(aDStack_68);
  Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
  PVZ1ModeNetworkMgr::GetCurrentLevel();
  FUN_05474278(auStack_50,aDStack_68);
  std::string::~string((string *)aDStack_68);
  cVar1 = PVZ1ModeUtils::IsHardMode();
  if (cVar1 == '\0') {
    pcVar3 = "0";
  }
  else {
    pcVar3 = "1";
  }
  std::string::append(asStack_48,pcVar3,__n);
  this_01 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogPVZ1Mode(this_01,(TGAPVZ1ModeData *)asStack_58);
  TGAPVZ1ModeData::~TGAPVZ1ModeData((TGAPVZ1ModeData *)asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap::GetMapPathGroups() */

WorldMap * __thiscall WorldMap::GetMapPathGroups(WorldMap *this)

{
  return this + 0x390;
}

