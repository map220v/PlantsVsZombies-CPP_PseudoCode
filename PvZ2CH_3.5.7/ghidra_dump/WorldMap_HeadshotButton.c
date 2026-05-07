// Class: WorldMap_HeadshotButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_HeadshotButton::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_HeadshotButton::Draw(WorldMap_HeadshotButton *this,Graphics *param_1)

{
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  (**(code **)(**(long **)(this + 0x1d0) + 0x128))(*(long **)(this + 0x1d0),param_1);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to WorldMap_HeadshotButton::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_HeadshotButton::Draw(WorldMap_HeadshotButton *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_HeadshotButton::StaticClassInit() */

void WorldMap_HeadshotButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_HeadshotButton");
    (*pcVar2)(plVar1,asStack_10,FUN_03d730a8,0x1e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_HeadshotButton::StaticGetClass() */

long * WorldMap_HeadshotButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_HeadshotButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_HeadshotButton::GetClass() const */

long * WorldMap_HeadshotButton::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_HeadshotButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_HeadshotButton::~WorldMap_HeadshotButton() */

void __thiscall WorldMap_HeadshotButton::~WorldMap_HeadshotButton(WorldMap_HeadshotButton *this)

{
  *(undefined ***)this = &PTR_GetClass_0676fb20;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_HeadshotButton_0676fcc8;
  if (*(long **)(this + 0x1d0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1d0) + 0x18))();
    *(undefined8 *)(this + 0x1d0) = 0;
  }
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_HeadshotButton::~WorldMap_HeadshotButton() */

void __thiscall WorldMap_HeadshotButton::~WorldMap_HeadshotButton(WorldMap_HeadshotButton *this)

{
  ~WorldMap_HeadshotButton(this + -0x10);
  return;
}


/* WorldMap_HeadshotButton::~WorldMap_HeadshotButton() */

void __thiscall WorldMap_HeadshotButton::~WorldMap_HeadshotButton(WorldMap_HeadshotButton *this)

{
  ~WorldMap_HeadshotButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_HeadshotButton::~WorldMap_HeadshotButton() */

void __thiscall WorldMap_HeadshotButton::~WorldMap_HeadshotButton(WorldMap_HeadshotButton *this)

{
  ~WorldMap_HeadshotButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_HeadshotButton::WorldMap_HeadshotButton() */

void __thiscall WorldMap_HeadshotButton::WorldMap_HeadshotButton(WorldMap_HeadshotButton *this)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  Insets aIStack_38 [16];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::UIEasyButtonWidget((UIEasyButtonWidget *)this);
  *(undefined8 *)(this + 0x1d0) = 0;
  this[0x1d8] = (WorldMap_HeadshotButton)0x0;
  *(undefined ***)this = &PTR_GetClass_0676fb20;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_HeadshotButton_0676fcc8;
  iVar1 = FUN_03d72f44();
  Sexy::Insets::Insets(aIStack_38,0,0,iVar1,iVar1);
  SalesButton::Resize((SalesButton *)this,aIStack_38);
  lVar2 = DSingleton<UserInfo>::getInstance();
  iVar1 = FUN_03d72a78(*(undefined4 *)(lVar2 + 0x24));
  uVar3 = UIHeadshot::create(iVar1);
  *(undefined8 *)(this + 0x1d0) = uVar3;
  FUN_03d72e5c(afStack_28,this);
  PopingBonusUI::SetCloseFuction((PopingBonusUI *)this,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_HeadshotButton::StaticNew() */

WorldMap_HeadshotButton * WorldMap_HeadshotButton::StaticNew(void)

{
  WorldMap_HeadshotButton *this;
  
  this = ::operator_new(0x1e0);
  WorldMap_HeadshotButton(this);
  return this;
}


/* WorldMap_HeadshotButton::onUpdate() */

void __thiscall WorldMap_HeadshotButton::onUpdate(WorldMap_HeadshotButton *this)

{
  char cVar1;
  WorldMap_HeadshotButton WVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *pPVar4;
  long lVar5;
  UIHeadshotIcon *this_01;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if ((pPVar4 == (PlayerInfo *)0x0) ||
     (cVar1 = PlayerInfo::IsMonthlyCardActivated(pPVar4,1), cVar1 == '\0')) {
    WVar2 = (WorldMap_HeadshotButton)0x0;
    if (this[0x1d8] == (WorldMap_HeadshotButton)0x0) {
      return;
    }
  }
  else {
    WVar2 = (WorldMap_HeadshotButton)0x1;
    if (this[0x1d8] == (WorldMap_HeadshotButton)0x1) {
      return;
    }
  }
  this[0x1d8] = WVar2;
  this_01 = *(UIHeadshotIcon **)(this + 0x1d0);
  lVar5 = DSingleton<UserInfo>::getInstance();
  iVar3 = FUN_03d72a78(*(undefined4 *)(lVar5 + 0x24));
  UIHeadshotIcon::changeHeadshot(this_01,iVar3);
  return;
}

