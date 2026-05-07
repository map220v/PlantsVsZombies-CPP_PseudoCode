// Class: WorldMap_OneYuanButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_OneYuanButton::StaticClassInit() */

void WorldMap_OneYuanButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_OneYuanButton");
    (*pcVar2)(plVar1,asStack_10,FUN_0458cbf4,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_OneYuanButton::StaticGetClass() */

long * WorldMap_OneYuanButton::StaticGetClass(void)

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
  uVar2 = WorldMap_TurnChangeButton::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_OneYuanButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_OneYuanButton::GetClass() const */

long * WorldMap_OneYuanButton::GetClass(void)

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
  uVar2 = WorldMap_TurnChangeButton::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_OneYuanButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_OneYuanButton::~WorldMap_OneYuanButton() */

void __thiscall WorldMap_OneYuanButton::~WorldMap_OneYuanButton(WorldMap_OneYuanButton *this)

{
  *(undefined ***)this = &PTR_GetClass_06861c00;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_OneYuanButton_06861de8;
  WorldMap_TurnChangeButton::~WorldMap_TurnChangeButton((WorldMap_TurnChangeButton *)this);
  return;
}


/* non-virtual thunk to WorldMap_OneYuanButton::~WorldMap_OneYuanButton() */

void __thiscall WorldMap_OneYuanButton::~WorldMap_OneYuanButton(WorldMap_OneYuanButton *this)

{
  ~WorldMap_OneYuanButton(this + -0x10);
  return;
}


/* WorldMap_OneYuanButton::~WorldMap_OneYuanButton() */

void __thiscall WorldMap_OneYuanButton::~WorldMap_OneYuanButton(WorldMap_OneYuanButton *this)

{
  ~WorldMap_OneYuanButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_OneYuanButton::~WorldMap_OneYuanButton() */

void __thiscall WorldMap_OneYuanButton::~WorldMap_OneYuanButton(WorldMap_OneYuanButton *this)

{
  ~WorldMap_OneYuanButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_OneYuanButton::WorldMap_OneYuanButton() */

void __thiscall WorldMap_OneYuanButton::WorldMap_OneYuanButton(WorldMap_OneYuanButton *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WorldMap_TurnChangeButton::WorldMap_TurnChangeButton((WorldMap_TurnChangeButton *)this);
  *(undefined ***)this = &PTR_GetClass_06861c00;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_OneYuanButton_06861de8;
  std::string::string(asStack_10,"IMAGE_UI_HUD_WORLDMAP_BIG_ICON_ONE_YUAN");
  UIEasyButtonWidget::SetImageNormal((UIEasyButtonWidget *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_OneYuanButton::StaticNew() */

WorldMap_OneYuanButton * WorldMap_OneYuanButton::StaticNew(void)

{
  WorldMap_OneYuanButton *this;
  
  this = ::operator_new(0x1d8);
  WorldMap_OneYuanButton(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_OneYuanButton::CheckActivated() */

void __thiscall WorldMap_OneYuanButton::CheckActivated(WorldMap_OneYuanButton *this)

{
  char cVar1;
  int iVar2;
  ActiveItem aAStack_88 [24];
  undefined1 local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = RiftUtils::IsWorldMapButtonsEnabled();
  if (cVar1 == '\0') {
    local_70 = false;
  }
  UIWidget::SetVisible((UIWidget *)this,(bool)local_70);
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_70);
}

