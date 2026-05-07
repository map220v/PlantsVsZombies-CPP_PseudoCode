// Class: NewPVPMainEntryScreenState


/* NewPVPMainEntryScreenState::getTopHudControllerClass() */

long * NewPVPMainEntryScreenState::getTopHudControllerClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (NewPVPMainEntryScreenTopHUD::sClass != (long *)0x0) {
    return NewPVPMainEntryScreenTopHUD::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  NewPVPMainEntryScreenTopHUD::sClass = plVar1;
  uVar2 = PVZGameStateTopHUDController::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPMainEntryScreenTopHUD",uVar2,NewPVPMainEntryScreenTopHUD::StaticNew);
  NewPVPMainEntryScreenTopHUD::StaticClassInit();
  return NewPVPMainEntryScreenTopHUD::sClass;
}


/* NewPVPMainEntryScreenState::~NewPVPMainEntryScreenState() */

void __thiscall
NewPVPMainEntryScreenState::~NewPVPMainEntryScreenState(NewPVPMainEntryScreenState *this)

{
  *(undefined ***)this = &PTR_GetClass_066483c0;
  PVZHotUIGameState::~PVZHotUIGameState((PVZHotUIGameState *)this);
  return;
}


/* NewPVPMainEntryScreenState::~NewPVPMainEntryScreenState() */

void __thiscall
NewPVPMainEntryScreenState::~NewPVPMainEntryScreenState(NewPVPMainEntryScreenState *this)

{
  ~NewPVPMainEntryScreenState(this);
  AK::FreeHook(this);
  return;
}


/* NewPVPMainEntryScreenState::NewPVPMainEntryScreenState() */

void __thiscall
NewPVPMainEntryScreenState::NewPVPMainEntryScreenState(NewPVPMainEntryScreenState *this)

{
  PVZHotUIGameState::PVZHotUIGameState((PVZHotUIGameState *)this);
  *(undefined ***)this = &PTR_GetClass_066483c0;
  return;
}


/* NewPVPMainEntryScreenState::StaticNew() */

NewPVPMainEntryScreenState * NewPVPMainEntryScreenState::StaticNew(void)

{
  NewPVPMainEntryScreenState *this;
  
  this = ::operator_new(0x30);
  NewPVPMainEntryScreenState(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMainEntryScreenState::StaticClassInit() */

void NewPVPMainEntryScreenState::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPVPMainEntryScreenState");
    (*pcVar2)(plVar1,asStack_10,FUN_034bc258,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPMainEntryScreenState::StaticGetClass() */

long * NewPVPMainEntryScreenState::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPMainEntryScreenState",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPMainEntryScreenState::GetClass() const */

long * NewPVPMainEntryScreenState::GetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPMainEntryScreenState",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMainEntryScreenState::Enter() */

void __thiscall NewPVPMainEntryScreenState::Enter(NewPVPMainEntryScreenState *this)

{
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets
            ((Insets *)&local_18,(int)((float)*(int *)(gLawnApp + 0xd4) * 0.3),0,
             (int)((float)*(int *)(gLawnApp + 0xd4) * 0.5),
             (int)((float)*(int *)(gLawnApp + 0xd8) * 0.15));
  *(undefined8 *)(this + 8) = local_18;
  *(undefined8 *)(this + 0x10) = uStack_10;
  PVZHotUIGameState::Enter((PVZHotUIGameState *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

