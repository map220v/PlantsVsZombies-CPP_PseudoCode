// Class: WorldMap_MonthVIPButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_MonthVIPButton::StaticClassInit() */

void WorldMap_MonthVIPButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_MonthVIPButton");
    (*pcVar2)(plVar1,asStack_10,FUN_04bfdd74,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_MonthVIPButton::StaticGetClass() */

long * WorldMap_MonthVIPButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_MonthVIPButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_MonthVIPButton::GetClass() const */

long * WorldMap_MonthVIPButton::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_MonthVIPButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_MonthVIPButton::onShowVIPWnd() */

void __thiscall WorldMap_MonthVIPButton::onShowVIPWnd(WorldMap_MonthVIPButton *this)

{
  char cVar1;
  uint uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (gLawnApp != (LawnApp *)0x0) {
    LawnApp::GetPlatform(gLawnApp);
    cVar1 = IsMonthlyVIPChannel();
    uVar2 = LawnApp::GetDeviceCardType();
    if ((cVar1 == '\0') || ((uVar2 >> 1 & 1) == 0)) {
      UIWidget::SetVisible((UIWidget *)this,false);
    }
    else {
      std::string::string(asStack_10,"OpenMonthlyVIPUI");
      Cpp2Lua(asStack_10);
      std::string::~string(asStack_10);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_MonthVIPButton::~WorldMap_MonthVIPButton() */

void __thiscall WorldMap_MonthVIPButton::~WorldMap_MonthVIPButton(WorldMap_MonthVIPButton *this)

{
  *(undefined ***)this = &PTR_GetClass_0697f210;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_MonthVIPButton_0697f3b8;
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_MonthVIPButton::~WorldMap_MonthVIPButton() */

void __thiscall WorldMap_MonthVIPButton::~WorldMap_MonthVIPButton(WorldMap_MonthVIPButton *this)

{
  ~WorldMap_MonthVIPButton(this + -0x10);
  return;
}


/* WorldMap_MonthVIPButton::~WorldMap_MonthVIPButton() */

void __thiscall WorldMap_MonthVIPButton::~WorldMap_MonthVIPButton(WorldMap_MonthVIPButton *this)

{
  ~WorldMap_MonthVIPButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_MonthVIPButton::~WorldMap_MonthVIPButton() */

void __thiscall WorldMap_MonthVIPButton::~WorldMap_MonthVIPButton(WorldMap_MonthVIPButton *this)

{
  ~WorldMap_MonthVIPButton(this + -0x10);
  return;
}


/* WorldMap_MonthVIPButton::checkVisiable() */

void __thiscall WorldMap_MonthVIPButton::checkVisiable(WorldMap_MonthVIPButton *this)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  
  LawnApp::GetPlatform(gLawnApp);
  IsMonthlyVIPChannel();
  LawnApp::GetDeviceCardType();
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    PlayerInfo::SetMonthVIPState(this_01,0);
  }
  UIWidget::SetVisible((UIWidget *)this,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_MonthVIPButton::WorldMap_MonthVIPButton() */

void __thiscall WorldMap_MonthVIPButton::WorldMap_MonthVIPButton(WorldMap_MonthVIPButton *this)

{
  string asStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::UIEasyButtonWidget((UIEasyButtonWidget *)this);
  *(undefined ***)this = &PTR_GetClass_0697f210;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_MonthVIPButton_0697f3b8;
  std::string::string(asStack_30,"IMAGE_UI_HUD_WORLDMAP_VIP_ICON");
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
  FUN_04bfdbac(afStack_28,this);
  PopingBonusUI::SetCloseFuction((PopingBonusUI *)this,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_MonthVIPButton::StaticNew() */

WorldMap_MonthVIPButton * WorldMap_MonthVIPButton::StaticNew(void)

{
  WorldMap_MonthVIPButton *this;
  
  this = ::operator_new(0x1d0);
  WorldMap_MonthVIPButton(this);
  return this;
}

