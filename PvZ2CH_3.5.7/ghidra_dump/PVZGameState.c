// Class: PVZGameState


/* PVZGameState::~PVZGameState() */

void __thiscall PVZGameState::~PVZGameState(PVZGameState *this)

{
  *(undefined ***)this = &PTR_GetClass_066a83e0;
  nop();
  return;
}


/* PVZGameState::~PVZGameState() */

void __thiscall PVZGameState::~PVZGameState(PVZGameState *this)

{
  ~PVZGameState(this);
  AK::FreeHook(this);
  return;
}


/* PVZGameState::StaticNew() */

undefined8 PVZGameState::StaticNew(void)

{
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZGameState::StaticClassInit() */

void PVZGameState::StaticClassInit(void)

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
    std::string::string(asStack_10,"PVZGameState");
    (*pcVar2)(plVar1,asStack_10,FUN_03856568,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZGameState::StaticGetClass() */

long * PVZGameState::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"PVZGameState",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZGameState::GetClass() const */

long * PVZGameState::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"PVZGameState",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZGameState::PVZGameState() */

void __thiscall PVZGameState::PVZGameState(PVZGameState *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_066a83e0;
  return;
}

