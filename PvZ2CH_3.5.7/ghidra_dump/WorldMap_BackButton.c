// Class: WorldMap_BackButton


/* WorldMap_BackButton::OnBackButtonPressed() */

undefined8 __thiscall WorldMap_BackButton::OnBackButtonPressed(WorldMap_BackButton *this)

{
  (**(code **)(*(long *)this + 0x198))();
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_BackButton::StaticClassInit() */

void WorldMap_BackButton::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"WorldMap_BackButton");
    (*pcVar2)(plVar1,asStack_10,FUN_04572c6c,0x208,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_BackButton::StaticGetClass() */

long * WorldMap_BackButton::StaticGetClass(void)

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
  uVar2 = UIButtonWidget::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_BackButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_BackButton::GetClass() const */

long * WorldMap_BackButton::GetClass(void)

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
  uVar2 = UIButtonWidget::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_BackButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_BackButton::~WorldMap_BackButton() */

void __thiscall WorldMap_BackButton::~WorldMap_BackButton(WorldMap_BackButton *this)

{
  *(undefined ***)this = &PTR_GetClass_0685e860;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_BackButton_0685ea18;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::string::~string((string *)(this + 0x200));
  UIButtonWidget::~UIButtonWidget((UIButtonWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_BackButton::~WorldMap_BackButton() */

void __thiscall WorldMap_BackButton::~WorldMap_BackButton(WorldMap_BackButton *this)

{
  ~WorldMap_BackButton(this + -0x10);
  return;
}


/* WorldMap_BackButton::~WorldMap_BackButton() */

void __thiscall WorldMap_BackButton::~WorldMap_BackButton(WorldMap_BackButton *this)

{
  ~WorldMap_BackButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_BackButton::~WorldMap_BackButton() */

void __thiscall WorldMap_BackButton::~WorldMap_BackButton(WorldMap_BackButton *this)

{
  ~WorldMap_BackButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_BackButton::WorldMap_BackButton() */

void __thiscall WorldMap_BackButton::WorldMap_BackButton(WorldMap_BackButton *this)

{
  undefined4 uVar1;
  CachedUIResourcePtr<Sexy::Image> aCStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIButtonWidget::UIButtonWidget((UIButtonWidget *)this);
  *(undefined ***)this = &PTR_GetClass_0685e860;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_BackButton_0685ea18;
  Set8BytesTo0(this + 0x200);
  *(undefined4 *)(this + 0x1f0) = 0;
  *(undefined4 *)(this + 500) = 0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1f8) = uVar1;
  CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr
            (aCStack_30,(CachedUIResourcePtr *)&DAT_06b11410);
  UIButtonWidget::SetImagePressed((UIButtonWidget *)this,aCStack_30);
  CachedUIResourcePtr<Sexy::Image>::~CachedUIResourcePtr(aCStack_30);
  CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr
            (aCStack_30,(CachedUIResourcePtr *)&DAT_06b113b0);
  UIButtonWidget::SetImageNormal((UIButtonWidget *)this,aCStack_30);
  CachedUIResourcePtr<Sexy::Image>::~CachedUIResourcePtr(aCStack_30);
  std::string::string((string *)aCStack_30,"Play_UI_Map_Select_Menu_Press");
  UIButtonWidget::SetSoundPressed(this,aCStack_30);
  std::string::~string((string *)aCStack_30);
  nop();
  std::string::string((string *)aCStack_30,"Play_UI_Map_Select_Menu_Release");
  UIButtonWidget::SetSoundReleased(this,aCStack_30);
  std::string::~string((string *)aCStack_30);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_BackButton::StaticNew() */

WorldMap_BackButton * WorldMap_BackButton::StaticNew(void)

{
  WorldMap_BackButton *this;
  
  this = ::operator_new(0x208);
  WorldMap_BackButton(this);
  return this;
}


/* WorldMap_BackButton::goToUniverseMap() */

void WorldMap_BackButton::goToUniverseMap(void)

{
  long lVar1;
  UniverseMap *this;
  
  lVar1 = LawnApp::GetWorldMap(gLawnApp);
  this = (UniverseMap *)FUN_04572b24(*(undefined8 *)(lVar1 + 0x2b0));
  UniverseMap::TransitionToUniverse(this,false);
  return;
}


/* WorldMap_BackButton::FadeOut() */

void __thiscall WorldMap_BackButton::FadeOut(WorldMap_BackButton *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x1f0) == 0) {
    uVar1 = PVZ_RealT();
    *(undefined4 *)(this + 0x1f8) = uVar1;
    *(undefined4 *)(this + 0x1f0) = 2;
  }
  return;
}


/* WorldMap_BackButton::FadeIn() */

void __thiscall WorldMap_BackButton::FadeIn(WorldMap_BackButton *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = PVZ_RealT();
  uVar1 = 1;
  *(undefined4 *)(this + 0x1f0) = 1;
  if (*(int *)(this + 500) != 2) {
    uVar1 = 2;
  }
  *(undefined4 *)(this + 500) = uVar1;
  *(undefined4 *)(this + 0x1f8) = uVar2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_BackButton::onUpdate() */

void __thiscall WorldMap_BackButton::onUpdate(WorldMap_BackButton *this)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 500) == 0) {
    lVar3 = LawnApp::GetWorldMap(gLawnApp);
    lVar3 = FUN_04572b24(*(undefined8 *)(lVar3 + 0x2b0));
    uVar1 = 2;
    if (*(char *)(lVar3 + 0x7c) == '\0') {
      uVar1 = 1;
    }
    *(undefined4 *)(this + 500) = uVar1;
  }
  Sexy::Color::Color((Color *)&local_38,0xff,0xff,0xff);
  Sexy::Color::Color((Color *)&local_28,0xff,0xff,0xff);
  if (*(int *)(this + 0x1f0) != 0) {
    fVar4 = (float)PVZ_RealT();
    if (0.25 <= fVar4 - *(float *)(this + 0x1f8)) {
      iVar2 = *(int *)(this + 0x1f0);
      if (iVar2 == 2) {
        *(undefined4 *)(this + 0x1f0) = 3;
        goto LAB_045730e8;
      }
      if (iVar2 == 1) {
        *(undefined4 *)(this + 0x1f0) = 0;
      }
      else if (iVar2 == 3) goto LAB_045730e8;
    }
    else {
      if (*(int *)(this + 0x1f0) == 2) {
        local_18 = 0;
        local_3c = 0xff;
        iVar2 = CurveLerp<int>(0,&local_3c,&local_18,1);
      }
      else if (*(int *)(this + 0x1f0) == 1) {
        local_3c = 0;
        local_18 = 0xff;
        iVar2 = CurveLerp<int>(0,&local_3c,&local_18);
      }
      else {
        iVar2 = 0xff;
      }
      Sexy::Insets::Insets((Insets *)&local_18,0xff,0xff,0xff,iVar2);
      local_28 = CONCAT44(uStack_14,local_18);
      uStack_20 = uStack_10;
      Sexy::Insets::Insets((Insets *)&local_18,0xff,0xff,0xff,iVar2);
      local_38 = CONCAT44(uStack_14,local_18);
      uStack_30 = uStack_10;
    }
  }
  UIButtonWidget::SetColorLabel((UIButtonWidget *)this,(Color *)&local_38);
  UIButtonWidget::SetColorButton((UIButtonWidget *)this,(Color *)&local_28);
LAB_045730e8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_BackButton::goToMainMenu() */

void WorldMap_BackButton::goToMainMenu(void)

{
  char cVar1;
  bool bVar2;
  WorldMap *pWVar3;
  ProfileMgr *this;
  PlayerInfo *this_00;
  long lVar4;
  undefined8 uVar5;
  wchar16 *extraout_x1;
  LineBreakCategory *in_x2;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  long *plVar6;
  float fVar7;
  
  pWVar3 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
  cVar1 = WorldMap::CanBeClosed(pWVar3);
  if (cVar1 != '\0') {
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
    if (this_00 != (PlayerInfo *)0x0) {
      lVar4 = LawnApp::GetWorldMap(gLawnApp);
      fVar7 = (float)FUN_04572b20(*(undefined4 *)(lVar4 + 0x338));
      bVar2 = (bool)EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                              ((wchar16 *)this_00,extraout_x1,in_x2,in_x3,in_x4);
      PlayerInfo::SetWorldMapZoomData(this_00,fVar7,bVar2);
    }
    GameStateMgr::ShowMainMenu(gGameStateMgr,2,2);
    plVar6 = *(long **)(gLawnApp + 0x360);
    uVar5 = LawnApp::GetTransitionOverlay(gLawnApp);
    (**(code **)(*plVar6 + 0xb0))(plVar6,uVar5);
    LawnApp::PushOverlaysToTop(gLawnApp);
    return;
  }
  pWVar3 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
  WorldMap::QueueForTransition(pWVar3,4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_BackButton::performButtonAction() */

void __thiscall WorldMap_BackButton::performButtonAction(WorldMap_BackButton *this)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  ProfileMgr *pPVar4;
  PlayerInfo *pPVar5;
  string *psVar6;
  UniverseMap *pUVar7;
  DangerRoomManager *this_00;
  undefined8 uVar8;
  char *__s;
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = LawnApp::GetWorldMap(gLawnApp);
  lVar3 = FUN_04572b24(*(undefined8 *)(lVar3 + 0x2b0));
  if (*(char *)(lVar3 + 0x7c) == '\0') {
    cVar2 = RiftUtils::IsWorldMapButtonsEnabled();
    if (cVar2 == '\0') {
      cVar2 = PVZ1ModeUtils::IsInPVZ1WorldMap();
      if (cVar2 == '\0') {
        cVar2 = PVZ2UnchartedModeUtils::IsInPVZ2UnchartedModeWorldMap();
        if (cVar2 == '\0') {
          cVar2 = PlantWarsUtils::IsInPlantWarsWorldMap();
          if (cVar2 == '\0') {
            cVar2 = CardGameUtils::IsInCardGameWorldMap();
            if (cVar2 == '\0') {
              lVar3 = LawnApp::GetWorldMap(gLawnApp);
              if ((lVar3 == 0) || (lVar3 = FUN_04572b24(*(undefined8 *)(lVar3 + 0x2b0)), lVar3 == 0)
                 ) {
                GameStateMgr::ShowWorldMap(gGameStateMgr,5,5);
              }
              else {
                pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
                pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar4);
                psVar6 = (string *)PlayerInfo::GetLastWorldName(pPVar5);
                bVar1 = std::operator==(psVar6,"");
                if (bVar1) {
                  std::string::string(asStack_18,"egypt");
                  nop();
                }
                else {
                  uVar8 = PlayerInfo::GetLastWorldName(pPVar5);
                  FUN_05475d88(asStack_18,uVar8);
                }
                lVar3 = LawnApp::GetWorldMap(gLawnApp);
                pUVar7 = (UniverseMap *)FUN_04572b24(*(undefined8 *)(lVar3 + 0x2b0));
                UniverseMap::TransitionToUniverse(pUVar7,false);
                lVar3 = LawnApp::GetWorldMap(gLawnApp);
                pUVar7 = (UniverseMap *)FUN_04572b24(*(undefined8 *)(lVar3 + 0x2b0));
                FUN_05475d88(asStack_10,asStack_18);
                UniverseMap::TransToWorldByName(pUVar7,asStack_10);
                std::string::~string(asStack_10);
                lVar3 = LawnApp::GetWorldMap(gLawnApp);
                pUVar7 = (UniverseMap *)FUN_04572b24(*(undefined8 *)(lVar3 + 0x2b0));
                UniverseMap::ShowWorlds(pUVar7);
                MessageRouter::Post((_func_void *)gMessageRouter);
                std::string::~string(asStack_18);
              }
            }
            else {
              PlantWarsUtils::GoToPlantWarsMainMenu();
            }
          }
          else {
            PlantWarsUtils::GoToPlantWarsMainMenu();
          }
        }
        else {
          PlantWarsUtils::GoToPlantWarsMainMenu();
        }
      }
      else {
        PVZ1ModeUtils::GoToPVZ1MainMenu();
      }
      goto LAB_0457335c;
    }
    cVar2 = WorldMapUtils::UniverseIsOpen();
    if (cVar2 == '\0') goto LAB_04573388;
    goToUniverseMap();
    FUN_05475d88(asStack_28,this + 0x200);
    std::string::string(asStack_20,"Back");
    __s = "Universe";
  }
  else {
    if (*(char *)(lVar3 + 0x360) != '\0') {
      pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar4);
      psVar6 = (string *)PlayerInfo::GetLastWorldName(pPVar5);
      bVar1 = std::operator==(psVar6,"");
      if (bVar1) {
        std::string::string(asStack_18,"egypt");
        nop();
      }
      else {
        uVar8 = PlayerInfo::GetLastWorldName(pPVar5);
        FUN_05475d88(asStack_18,uVar8);
      }
      lVar3 = LawnApp::GetWorldMap(gLawnApp);
      pUVar7 = (UniverseMap *)FUN_04572b24(*(undefined8 *)(lVar3 + 0x2b0));
      FUN_05475d88(asStack_10,asStack_18);
      UniverseMap::TransToWorldByName(pUVar7,asStack_10);
      std::string::~string(asStack_10);
      this_00 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
      DangerRoomManager::SetMainDialogVisible(this_00,true);
      std::string::~string(asStack_18);
      goto LAB_0457335c;
    }
LAB_04573388:
    goToMainMenu();
    FUN_05475d88(asStack_28,this + 0x200);
    std::string::string(asStack_20,"Back");
    __s = "MainMenu";
  }
  std::string::string(asStack_18,__s);
  std::string::string(asStack_10,"");
  UIMetrics::BroadcastUIEvent(asStack_28,asStack_20,asStack_18,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  std::string::~string(asStack_20);
  nop();
  std::string::~string(asStack_28);
LAB_0457335c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

