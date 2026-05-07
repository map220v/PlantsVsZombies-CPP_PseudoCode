// Class: WorldMap_PlantAdventureButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_PlantAdventureButton::onUpdate() */

void __thiscall WorldMap_PlantAdventureButton::onUpdate(WorldMap_PlantAdventureButton *this)

{
  char cVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if ((this_01 == (PlayerInfo *)0x0) ||
     (cVar1 = PlayerInfo::HasPlantAdventureFinished(this_01), cVar1 == '\0')) {
    UIEasyButtonWidget::RemoveNotice((UIEasyButtonWidget *)this);
  }
  else {
    std::string::string(asStack_10,"IMAGE_UI_HUD_WORLDMAP_NOTICE_ICON");
    UIEasyButtonWidget::AddNotice((UIEasyButtonWidget *)this,asStack_10,-0.1,0.0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_PlantAdventureButton::BackToMap() */

void WorldMap_PlantAdventureButton::BackToMap(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  LawnApp::KillAdventureOpenedUI(gLawnApp);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_PlantAdventureButton::StaticClassInit() */

void WorldMap_PlantAdventureButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_PlantAdventureButton");
    (*pcVar2)(plVar1,asStack_10,FUN_042dfd2c,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_PlantAdventureButton::StaticGetClass() */

long * WorldMap_PlantAdventureButton::StaticGetClass(void)

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
  uVar2 = UIEasyButtonWidget::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_PlantAdventureButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_PlantAdventureButton::GetClass() const */

long * WorldMap_PlantAdventureButton::GetClass(void)

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
  uVar2 = UIEasyButtonWidget::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_PlantAdventureButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_PlantAdventureButton::CheckActivated() */

undefined8 __thiscall
WorldMap_PlantAdventureButton::CheckActivated(WorldMap_PlantAdventureButton *this)

{
  UIWidget::SetVisible((UIWidget *)this,false);
  return 0;
}


/* WorldMap_PlantAdventureButton::onWorldLoaded() */

undefined8 __thiscall
WorldMap_PlantAdventureButton::onWorldLoaded(WorldMap_PlantAdventureButton *this)

{
  UIWidget::SetVisible((UIWidget *)this,false);
  return 0;
}


/* WorldMap_PlantAdventureButton::~WorldMap_PlantAdventureButton() */

void __thiscall
WorldMap_PlantAdventureButton::~WorldMap_PlantAdventureButton(WorldMap_PlantAdventureButton *this)

{
  *(undefined ***)this = &PTR_GetClass_06830060;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_PlantAdventureButton_06830208;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_PlantAdventureButton::~WorldMap_PlantAdventureButton() */

void __thiscall
WorldMap_PlantAdventureButton::~WorldMap_PlantAdventureButton(WorldMap_PlantAdventureButton *this)

{
  ~WorldMap_PlantAdventureButton(this + -0x10);
  return;
}


/* WorldMap_PlantAdventureButton::~WorldMap_PlantAdventureButton() */

void __thiscall
WorldMap_PlantAdventureButton::~WorldMap_PlantAdventureButton(WorldMap_PlantAdventureButton *this)

{
  ~WorldMap_PlantAdventureButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_PlantAdventureButton::~WorldMap_PlantAdventureButton() */

void __thiscall
WorldMap_PlantAdventureButton::~WorldMap_PlantAdventureButton(WorldMap_PlantAdventureButton *this)

{
  ~WorldMap_PlantAdventureButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_PlantAdventureButton::OnGotExploreTeamStatus(bool) */

void __thiscall
WorldMap_PlantAdventureButton::OnGotExploreTeamStatus
          (WorldMap_PlantAdventureButton *this,bool param_1)

{
  LawnApp *pLVar1;
  char cVar2;
  PVZ2UIDialog *pPVar3;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  pLVar1 = gLawnApp;
  local_8 = ___stack_chk_guard;
  cVar2 = LawnApp::IsAdventureOpenedUIValid(gLawnApp);
  if (cVar2 != '\0') {
    LawnApp::KillAdventureOpenedUI(pLVar1);
  }
  pLVar1 = gLawnApp;
  if (param_1) {
    GameStateMgr::ShowPlantAdventure(gGameStateMgr,5,5);
  }
  else {
    FUN_05478178(awStack_58,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_68);
    FUN_05478178(awStack_50,L"[PLANT_ADVENTURE_FINISHED_FAILED]",auStack_60);
    pPVar3 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(pLVar1,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,BackToMap);
    Sexy::Delegate0::
    Delegate0<WorldMap_PlantAdventureButton,void(WorldMap_PlantAdventureButton::*)()>
              (aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar3,awStack_58,aDStack_38,0);
    FUN_05476c50(awStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_PlantAdventureButton::WorldMap_PlantAdventureButton() */

void __thiscall
WorldMap_PlantAdventureButton::WorldMap_PlantAdventureButton(WorldMap_PlantAdventureButton *this)

{
  string asStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::UIEasyButtonWidget((UIEasyButtonWidget *)this);
  *(undefined ***)this = &PTR_GetClass_06830060;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_PlantAdventureButton_06830208;
  std::string::string(asStack_30,"IMAGE_UI_HUD_WORLDMAP_TINY_ICON_PLANT_ADVENTURE");
  UIEasyButtonWidget::SetImageNormal((UIEasyButtonWidget *)this,asStack_30);
  std::string::~string(asStack_30);
  nop();
  std::string::string(asStack_30,"Play_UI_Map_Select_Universe_Press");
  DEditorNode::setRootName((string *)this);
  std::string::~string(asStack_30);
  nop();
  std::string::string(asStack_30,"Play_UI_Map_Select_Universe_Release");
  UIEasyButtonWidget::SetSoundReleased((string *)this);
  std::string::~string(asStack_30);
  nop();
  FUN_042dfb9c(afStack_28,this);
  PopingBonusUI::SetCloseFuction((PopingBonusUI *)this,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  UIWidget::SetVisible((UIWidget *)this,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_PlantAdventureButton::StaticNew() */

WorldMap_PlantAdventureButton * WorldMap_PlantAdventureButton::StaticNew(void)

{
  WorldMap_PlantAdventureButton *this;
  
  this = ::operator_new(0x1d0);
  WorldMap_PlantAdventureButton(this);
  return this;
}


/* WorldMap_PlantAdventureButton::onButtonClicked() */

void WorldMap_PlantAdventureButton::onButtonClicked(void)

{
  char cVar1;
  ProfileMgr *this;
  long lVar2;
  long *plVar3;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar2 = ProfileMgr::GetCurrentProfile(this);
  if (lVar2 != 0) {
    cVar1 = LawnApp::IsNetworkModuleOK();
    if (cVar1 == '\0') {
      MessageRouter::Post<bool,bool>
                ((MessageRouter *)gMessageRouter,Message::GotExploreTeamStatus,false);
      return;
    }
    plVar3 = (long *)NetworkMgr::GetNewNetWorkProcess(gNetworkMgr);
    (**(code **)(*plVar3 + 0x100))();
  }
  return;
}

