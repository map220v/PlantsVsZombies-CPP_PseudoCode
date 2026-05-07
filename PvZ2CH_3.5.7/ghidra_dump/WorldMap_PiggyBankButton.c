// Class: WorldMap_PiggyBankButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_PiggyBankButton::StaticClassInit() */

void WorldMap_PiggyBankButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_PiggyBankButton");
    (*pcVar2)(plVar1,asStack_10,FUN_0458ce08,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_PiggyBankButton::StaticGetClass() */

long * WorldMap_PiggyBankButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_PiggyBankButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_PiggyBankButton::GetClass() const */

long * WorldMap_PiggyBankButton::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_PiggyBankButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_PiggyBankButton::~WorldMap_PiggyBankButton() */

void __thiscall WorldMap_PiggyBankButton::~WorldMap_PiggyBankButton(WorldMap_PiggyBankButton *this)

{
  *(undefined ***)this = &PTR_GetClass_06861e20;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_PiggyBankButton_06862008;
  WorldMap_TurnChangeButton::~WorldMap_TurnChangeButton((WorldMap_TurnChangeButton *)this);
  return;
}


/* non-virtual thunk to WorldMap_PiggyBankButton::~WorldMap_PiggyBankButton() */

void __thiscall WorldMap_PiggyBankButton::~WorldMap_PiggyBankButton(WorldMap_PiggyBankButton *this)

{
  ~WorldMap_PiggyBankButton(this + -0x10);
  return;
}


/* WorldMap_PiggyBankButton::~WorldMap_PiggyBankButton() */

void __thiscall WorldMap_PiggyBankButton::~WorldMap_PiggyBankButton(WorldMap_PiggyBankButton *this)

{
  ~WorldMap_PiggyBankButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_PiggyBankButton::~WorldMap_PiggyBankButton() */

void __thiscall WorldMap_PiggyBankButton::~WorldMap_PiggyBankButton(WorldMap_PiggyBankButton *this)

{
  ~WorldMap_PiggyBankButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_PiggyBankButton::WorldMap_PiggyBankButton() */

void __thiscall WorldMap_PiggyBankButton::WorldMap_PiggyBankButton(WorldMap_PiggyBankButton *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WorldMap_TurnChangeButton::WorldMap_TurnChangeButton((WorldMap_TurnChangeButton *)this);
  *(undefined ***)this = &PTR_GetClass_06861e20;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_PiggyBankButton_06862008;
  std::string::string(asStack_10,"IMAGE_UI_HUD_WORLDMAP_BIG_ICON_PIGGY_BANK");
  UIEasyButtonWidget::SetImageNormal((UIEasyButtonWidget *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_PiggyBankButton::StaticNew() */

WorldMap_PiggyBankButton * WorldMap_PiggyBankButton::StaticNew(void)

{
  WorldMap_PiggyBankButton *this;
  
  this = ::operator_new(0x1d8);
  WorldMap_PiggyBankButton(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_PiggyBankButton::CheckActivated() */

void __thiscall WorldMap_PiggyBankButton::CheckActivated(WorldMap_PiggyBankButton *this)

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

