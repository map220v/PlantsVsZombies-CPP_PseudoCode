// Class: JoustOrAdventureScreenState


/* JoustOrAdventureScreenState::getHotUIAdaptorClass() */

long * JoustOrAdventureScreenState::getHotUIAdaptorClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (AdaptorJoustOrAdventureScreen::sClass != (long *)0x0) {
    return AdaptorJoustOrAdventureScreen::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  AdaptorJoustOrAdventureScreen::sClass = plVar1;
  uVar2 = HotUIAdaptor::StaticGetClass();
  (*pcVar3)(plVar1,"AdaptorJoustOrAdventureScreen",uVar2,AdaptorJoustOrAdventureScreen::StaticNew);
  AdaptorJoustOrAdventureScreen::StaticClassInit();
  return AdaptorJoustOrAdventureScreen::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustOrAdventureScreenState::GetMusicStopEvent() */

void __thiscall JoustOrAdventureScreenState::GetMusicStopEvent(JoustOrAdventureScreenState *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"Stop_Amb_WorldMap_Space_BG_LP");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustOrAdventureScreenState::GetMusicStartEvent() */

void __thiscall JoustOrAdventureScreenState::GetMusicStartEvent(JoustOrAdventureScreenState *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"Play_Amb_WorldMap_Space_BG_LP");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* JoustOrAdventureScreenState::~JoustOrAdventureScreenState() */

void __thiscall
JoustOrAdventureScreenState::~JoustOrAdventureScreenState(JoustOrAdventureScreenState *this)

{
  *(undefined ***)this = &PTR_GetClass_066ae7c0;
  PVZHotUIGameState::~PVZHotUIGameState((PVZHotUIGameState *)this);
  return;
}


/* JoustOrAdventureScreenState::~JoustOrAdventureScreenState() */

void __thiscall
JoustOrAdventureScreenState::~JoustOrAdventureScreenState(JoustOrAdventureScreenState *this)

{
  ~JoustOrAdventureScreenState(this);
  AK::FreeHook(this);
  return;
}


/* JoustOrAdventureScreenState::JoustOrAdventureScreenState() */

void __thiscall
JoustOrAdventureScreenState::JoustOrAdventureScreenState(JoustOrAdventureScreenState *this)

{
  PVZHotUIGameState::PVZHotUIGameState((PVZHotUIGameState *)this);
  *(undefined ***)this = &PTR_GetClass_066ae7c0;
  return;
}


/* JoustOrAdventureScreenState::StaticNew() */

JoustOrAdventureScreenState * JoustOrAdventureScreenState::StaticNew(void)

{
  JoustOrAdventureScreenState *this;
  
  this = ::operator_new(0x30);
  JoustOrAdventureScreenState(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustOrAdventureScreenState::StaticClassInit() */

void JoustOrAdventureScreenState::StaticClassInit(void)

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
    std::string::string(asStack_10,"JoustOrAdventureScreenState");
    (*pcVar2)(plVar1,asStack_10,FUN_03884f90,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JoustOrAdventureScreenState::StaticGetClass() */

long * JoustOrAdventureScreenState::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"JoustOrAdventureScreenState",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* JoustOrAdventureScreenState::GetClass() const */

long * JoustOrAdventureScreenState::GetClass(void)

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
  (*pcVar3)(plVar1,"JoustOrAdventureScreenState",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

