// Class: WorldMap_TreasureButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_TreasureButton::StaticClassInit() */

void WorldMap_TreasureButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_TreasureButton");
    (*pcVar2)(plVar1,asStack_10,FUN_0457b260,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_TreasureButton::StaticGetClass() */

long * WorldMap_TreasureButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_TreasureButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_TreasureButton::GetClass() const */

long * WorldMap_TreasureButton::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_TreasureButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_TreasureButton::~WorldMap_TreasureButton() */

void __thiscall WorldMap_TreasureButton::~WorldMap_TreasureButton(WorldMap_TreasureButton *this)

{
  *(undefined ***)this = &PTR_GetClass_068600f0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_TreasureButton_06860298;
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_TreasureButton::~WorldMap_TreasureButton() */

void __thiscall WorldMap_TreasureButton::~WorldMap_TreasureButton(WorldMap_TreasureButton *this)

{
  ~WorldMap_TreasureButton(this + -0x10);
  return;
}


/* WorldMap_TreasureButton::~WorldMap_TreasureButton() */

void __thiscall WorldMap_TreasureButton::~WorldMap_TreasureButton(WorldMap_TreasureButton *this)

{
  ~WorldMap_TreasureButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_TreasureButton::~WorldMap_TreasureButton() */

void __thiscall WorldMap_TreasureButton::~WorldMap_TreasureButton(WorldMap_TreasureButton *this)

{
  ~WorldMap_TreasureButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_TreasureButton::WorldMap_TreasureButton() */

void __thiscall WorldMap_TreasureButton::WorldMap_TreasureButton(WorldMap_TreasureButton *this)

{
  string asStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::UIEasyButtonWidget((UIEasyButtonWidget *)this);
  *(undefined ***)this = &PTR_GetClass_068600f0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_TreasureButton_06860298;
  std::string::string(asStack_30,"IMAGE_UI_HUD_WORLDMAP_BIG_ICON_TREASURE");
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
  FUN_0457b0d0(afStack_28,this);
  PopingBonusUI::SetCloseFuction((PopingBonusUI *)this,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  this[0x1d0] = (WorldMap_TreasureButton)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_TreasureButton::StaticNew() */

WorldMap_TreasureButton * WorldMap_TreasureButton::StaticNew(void)

{
  WorldMap_TreasureButton *this;
  
  this = ::operator_new(0x1d8);
  WorldMap_TreasureButton(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_TreasureButton::DoSubDialog() */

void __thiscall WorldMap_TreasureButton::DoSubDialog(WorldMap_TreasureButton *this)

{
  LawnApp *this_00;
  WorldMap *pWVar1;
  GameMaskUI *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  MessageRouter::Post<UIWidget*,WorldMap_TreasureButton*>
            ((MessageRouter *)gMessageRouter,Message::KillChooseDialog,this);
  pWVar1 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
  std::string::string(asStack_10,"Gacha");
  WorldMap::SwitchToStore(pWVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  this_00 = gLawnApp;
  this[0x1d0] = (WorldMap_TreasureButton)0x1;
  this_01 = (GameMaskUI *)LawnApp::GetGameMaskUI(this_00);
  if (this_01 != (GameMaskUI *)0x0) {
    GameMaskUI::SetToFront(this_01);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

