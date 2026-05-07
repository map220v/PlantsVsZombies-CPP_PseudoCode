// Class: JoustLandingScreenState


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustLandingScreenState::GetMusicStopEvent() */

void __thiscall JoustLandingScreenState::GetMusicStopEvent(JoustLandingScreenState *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"Stop_Joust_Dashboard_Music");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustLandingScreenState::GetMusicStartEvent() */

void __thiscall JoustLandingScreenState::GetMusicStartEvent(JoustLandingScreenState *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"Play_Joust_Dashboard_Music");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* JoustLandingScreenState::getHotUIAdaptorClass() */

long * JoustLandingScreenState::getHotUIAdaptorClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (AdaptorJoustScreen::sClass != (long *)0x0) {
    return AdaptorJoustScreen::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  AdaptorJoustScreen::sClass = plVar1;
  uVar2 = HotUIAdaptor::StaticGetClass();
  (*pcVar3)(plVar1,"AdaptorJoustScreen",uVar2,AdaptorJoustScreen::StaticNew);
  AdaptorJoustScreen::StaticClassInit();
  return AdaptorJoustScreen::sClass;
}


/* JoustLandingScreenState::~JoustLandingScreenState() */

void __thiscall JoustLandingScreenState::~JoustLandingScreenState(JoustLandingScreenState *this)

{
  *(undefined ***)this = &PTR_GetClass_066ae0f0;
  PVZHotUIGameState::~PVZHotUIGameState((PVZHotUIGameState *)this);
  return;
}


/* JoustLandingScreenState::~JoustLandingScreenState() */

void __thiscall JoustLandingScreenState::~JoustLandingScreenState(JoustLandingScreenState *this)

{
  ~JoustLandingScreenState(this);
  AK::FreeHook(this);
  return;
}


/* JoustLandingScreenState::JoustLandingScreenState() */

void __thiscall JoustLandingScreenState::JoustLandingScreenState(JoustLandingScreenState *this)

{
  PVZHotUIGameState::PVZHotUIGameState((PVZHotUIGameState *)this);
  *(undefined ***)this = &PTR_GetClass_066ae0f0;
  return;
}


/* JoustLandingScreenState::StaticNew() */

JoustLandingScreenState * JoustLandingScreenState::StaticNew(void)

{
  JoustLandingScreenState *this;
  
  this = ::operator_new(0x30);
  JoustLandingScreenState(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustLandingScreenState::StaticClassInit() */

void JoustLandingScreenState::StaticClassInit(void)

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
    std::string::string(asStack_10,"JoustLandingScreenState");
    (*pcVar2)(plVar1,asStack_10,FUN_0387cb78,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JoustLandingScreenState::StaticGetClass() */

long * JoustLandingScreenState::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"JoustLandingScreenState",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* JoustLandingScreenState::GetClass() const */

long * JoustLandingScreenState::GetClass(void)

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
  (*pcVar3)(plVar1,"JoustLandingScreenState",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

