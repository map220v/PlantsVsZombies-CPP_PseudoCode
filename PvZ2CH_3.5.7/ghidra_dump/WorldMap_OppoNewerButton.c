// Class: WorldMap_OppoNewerButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_OppoNewerButton::StaticClassInit() */

void WorldMap_OppoNewerButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_OppoNewerButton");
    (*pcVar2)(plVar1,asStack_10,FUN_038fd008,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_OppoNewerButton::StaticGetClass() */

long * WorldMap_OppoNewerButton::StaticGetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_OppoNewerButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_OppoNewerButton::GetClass() const */

long * WorldMap_OppoNewerButton::GetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_OppoNewerButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_OppoNewerButton::onButtonClicked() */

void WorldMap_OppoNewerButton::onButtonClicked(void)

{
  LawnApp::ShowOppoNewerEventUI(gLawnApp);
  return;
}


/* WorldMap_OppoNewerButton::~WorldMap_OppoNewerButton() */

void __thiscall WorldMap_OppoNewerButton::~WorldMap_OppoNewerButton(WorldMap_OppoNewerButton *this)

{
  *(undefined ***)this = &PTR_GetClass_066becc0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_OppoNewerButton_066bee68;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_OppoNewerButton::~WorldMap_OppoNewerButton() */

void __thiscall WorldMap_OppoNewerButton::~WorldMap_OppoNewerButton(WorldMap_OppoNewerButton *this)

{
  ~WorldMap_OppoNewerButton(this + -0x10);
  return;
}


/* WorldMap_OppoNewerButton::~WorldMap_OppoNewerButton() */

void __thiscall WorldMap_OppoNewerButton::~WorldMap_OppoNewerButton(WorldMap_OppoNewerButton *this)

{
  ~WorldMap_OppoNewerButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_OppoNewerButton::~WorldMap_OppoNewerButton() */

void __thiscall WorldMap_OppoNewerButton::~WorldMap_OppoNewerButton(WorldMap_OppoNewerButton *this)

{
  ~WorldMap_OppoNewerButton(this + -0x10);
  return;
}


/* WorldMap_OppoNewerButton::CheckActivated() */

void __thiscall WorldMap_OppoNewerButton::CheckActivated(WorldMap_OppoNewerButton *this)

{
  char cVar1;
  ProfileMgr *this_00;
  long lVar2;
  time_t __time0;
  time_t __time1;
  double dVar3;
  
  cVar1 = LawnApp::isOppoNewerOptimizationOpen(gLawnApp);
  if (cVar1 != '\0') {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar2 = ProfileMgr::GetCurrentProfile(this_00);
    __time0 = FUN_038fca7c(*(undefined8 *)(lVar2 + 0x13d8));
    __time1 = LawnApp::GetRealBeijingTime(gLawnApp);
    dVar3 = difftime(__time1,__time0);
    Sexy::OutputDebugStrF
              ((wchar_t *)"WorldMap_OppoNewerButton::CheckActivated, difDays : %d",
               (ulong)(uint)(int)(dVar3 * 1.1574074074074073e-05));
    if ((int)(dVar3 * 1.1574074074074073e-05) < 0xe) {
      UIWidget::SetVisible((UIWidget *)this,true);
      return;
    }
  }
  UIWidget::SetVisible((UIWidget *)this,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_OppoNewerButton::WorldMap_OppoNewerButton() */

void __thiscall WorldMap_OppoNewerButton::WorldMap_OppoNewerButton(WorldMap_OppoNewerButton *this)

{
  string asStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::UIEasyButtonWidget((UIEasyButtonWidget *)this);
  *(undefined ***)this = &PTR_GetClass_066becc0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_OppoNewerButton_066bee68;
  std::string::string(asStack_30,"IMAGE_UI_HUD_WORLDMAP_TINY_ICON_OPPO_NEWER");
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
  FUN_038fce1c(afStack_28,this);
  PopingBonusUI::SetCloseFuction((PopingBonusUI *)this,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  Sexy::LazySingleton<OppoNewerRechargeMgr>::GetInstancePtr();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_OppoNewerButton::StaticNew() */

WorldMap_OppoNewerButton * WorldMap_OppoNewerButton::StaticNew(void)

{
  WorldMap_OppoNewerButton *this;
  
  this = ::operator_new(0x1d0);
  WorldMap_OppoNewerButton(this);
  return this;
}

