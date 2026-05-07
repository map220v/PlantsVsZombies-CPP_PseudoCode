// Class: NewPlantUIEntryScreenState


/* NewPlantUIEntryScreenState::Enter() */

void __thiscall NewPlantUIEntryScreenState::Enter(NewPlantUIEntryScreenState *this)

{
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  BusyAnimationManager::StartBusyIcon(*(BusyAnimationManager **)(gLawnApp + 0x28d0));
  PVZHotUIGameState::setState_PVZGameStateLoadingState((PVZHotUIGameState *)this,0);
  return;
}


/* NewPlantUIEntryScreenState::getHotUIAdaptorClass() */

long * NewPlantUIEntryScreenState::getHotUIAdaptorClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (AdaptorNewPlantUIEntryScreen::sClass != (long *)0x0) {
    return AdaptorNewPlantUIEntryScreen::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  AdaptorNewPlantUIEntryScreen::sClass = plVar1;
  uVar2 = HotUIAdaptor::StaticGetClass();
  (*pcVar3)(plVar1,"AdaptorNewPlantUIEntryScreen",uVar2,AdaptorNewPlantUIEntryScreen::StaticNew);
  AdaptorNewPlantUIEntryScreen::StaticClassInit();
  return AdaptorNewPlantUIEntryScreen::sClass;
}


/* NewPlantUIEntryScreenState::getTopHudControllerClass() */

long * NewPlantUIEntryScreenState::getTopHudControllerClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (NewPlantUIEntryScreenTopHUD::sClass != (long *)0x0) {
    return NewPlantUIEntryScreenTopHUD::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  NewPlantUIEntryScreenTopHUD::sClass = plVar1;
  uVar2 = PVZGameStateTopHUDController::StaticGetClass();
  (*pcVar3)(plVar1,"NewPlantUIEntryScreenTopHUD",uVar2,NewPlantUIEntryScreenTopHUD::StaticNew);
  NewPlantUIEntryScreenTopHUD::StaticClassInit();
  return NewPlantUIEntryScreenTopHUD::sClass;
}


/* NewPlantUIEntryScreenState::~NewPlantUIEntryScreenState() */

void __thiscall
NewPlantUIEntryScreenState::~NewPlantUIEntryScreenState(NewPlantUIEntryScreenState *this)

{
  *(undefined ***)this = &PTR_GetClass_06619400;
  PVZHotUIGameState::~PVZHotUIGameState((PVZHotUIGameState *)this);
  return;
}


/* NewPlantUIEntryScreenState::~NewPlantUIEntryScreenState() */

void __thiscall
NewPlantUIEntryScreenState::~NewPlantUIEntryScreenState(NewPlantUIEntryScreenState *this)

{
  ~NewPlantUIEntryScreenState(this);
  AK::FreeHook(this);
  return;
}


/* NewPlantUIEntryScreenState::NewPlantUIEntryScreenState() */

void __thiscall
NewPlantUIEntryScreenState::NewPlantUIEntryScreenState(NewPlantUIEntryScreenState *this)

{
  PVZHotUIGameState::PVZHotUIGameState((PVZHotUIGameState *)this);
  *(undefined ***)this = &PTR_GetClass_06619400;
  return;
}


/* NewPlantUIEntryScreenState::StaticNew() */

NewPlantUIEntryScreenState * NewPlantUIEntryScreenState::StaticNew(void)

{
  NewPlantUIEntryScreenState *this;
  
  this = ::operator_new(0x30);
  NewPlantUIEntryScreenState(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPlantUIEntryScreenState::StaticClassInit() */

void NewPlantUIEntryScreenState::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPlantUIEntryScreenState");
    (*pcVar2)(plVar1,asStack_10,FUN_033c10c8,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPlantUIEntryScreenState::StaticGetClass() */

long * NewPlantUIEntryScreenState::StaticGetClass(void)

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
  uVar2 = PVZHotUIGameState::StaticGetClass();
  (*pcVar3)(plVar1,"NewPlantUIEntryScreenState",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPlantUIEntryScreenState::GetClass() const */

long * NewPlantUIEntryScreenState::GetClass(void)

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
  uVar2 = PVZHotUIGameState::StaticGetClass();
  (*pcVar3)(plVar1,"NewPlantUIEntryScreenState",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

