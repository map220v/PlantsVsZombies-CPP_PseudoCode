// Class: WorldMap_GameCommunityButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_GameCommunityButton::StaticClassInit() */

void WorldMap_GameCommunityButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_GameCommunityButton");
    (*pcVar2)(plVar1,asStack_10,FUN_0395ffb0,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_GameCommunityButton::StaticGetClass() */

long * WorldMap_GameCommunityButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_GameCommunityButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_GameCommunityButton::GetClass() const */

long * WorldMap_GameCommunityButton::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_GameCommunityButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_GameCommunityButton::~WorldMap_GameCommunityButton() */

void __thiscall
WorldMap_GameCommunityButton::~WorldMap_GameCommunityButton(WorldMap_GameCommunityButton *this)

{
  *(undefined ***)this = &PTR_GetClass_066d3340;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_GameCommunityButton_066d34e8;
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_GameCommunityButton::~WorldMap_GameCommunityButton() */

void __thiscall
WorldMap_GameCommunityButton::~WorldMap_GameCommunityButton(WorldMap_GameCommunityButton *this)

{
  ~WorldMap_GameCommunityButton(this + -0x10);
  return;
}


/* WorldMap_GameCommunityButton::~WorldMap_GameCommunityButton() */

void __thiscall
WorldMap_GameCommunityButton::~WorldMap_GameCommunityButton(WorldMap_GameCommunityButton *this)

{
  ~WorldMap_GameCommunityButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_GameCommunityButton::~WorldMap_GameCommunityButton() */

void __thiscall
WorldMap_GameCommunityButton::~WorldMap_GameCommunityButton(WorldMap_GameCommunityButton *this)

{
  ~WorldMap_GameCommunityButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_GameCommunityButton::WorldMap_GameCommunityButton() */

void __thiscall
WorldMap_GameCommunityButton::WorldMap_GameCommunityButton(WorldMap_GameCommunityButton *this)

{
  string asStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::UIEasyButtonWidget((UIEasyButtonWidget *)this);
  *(undefined ***)this = &PTR_GetClass_066d3340;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_GameCommunityButton_066d34e8;
  std::string::string(asStack_30,"IMAGE_UI_HUD_WORLDMAP_COMMUNITY");
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
  FUN_0395fe20(afStack_28,this);
  PopingBonusUI::SetCloseFuction((PopingBonusUI *)this,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_GameCommunityButton::StaticNew() */

WorldMap_GameCommunityButton * WorldMap_GameCommunityButton::StaticNew(void)

{
  WorldMap_GameCommunityButton *this;
  
  this = ::operator_new(0x1d0);
  WorldMap_GameCommunityButton(this);
  return this;
}

