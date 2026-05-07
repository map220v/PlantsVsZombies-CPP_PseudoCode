// Class: ZombossSteamFireActionHandler


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamFireActionHandler::StaticClassInit() */

void ZombossSteamFireActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossSteamFireActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_03c415e0,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossSteamFireActionHandler::StaticGetClass() */

long * ZombossSteamFireActionHandler::StaticGetClass(void)

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
  uVar2 = ZombossFireActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSteamFireActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSteamFireActionHandler::GetClass() const */

long * ZombossSteamFireActionHandler::GetClass(void)

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
  uVar2 = ZombossFireActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSteamFireActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSteamFireActionHandler::ZombossSteamFireActionHandler() */

void __thiscall
ZombossSteamFireActionHandler::ZombossSteamFireActionHandler(ZombossSteamFireActionHandler *this)

{
  ZombossFireActionHandler::ZombossFireActionHandler((ZombossFireActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_06752580;
  return;
}


/* ZombossSteamFireActionHandler::StaticNew() */

ZombossSteamFireActionHandler * ZombossSteamFireActionHandler::StaticNew(void)

{
  ZombossSteamFireActionHandler *this;
  
  this = ::operator_new(0x48);
  ZombossSteamFireActionHandler(this);
  return this;
}


/* ZombossSteamFireActionHandler::~ZombossSteamFireActionHandler() */

void __thiscall
ZombossSteamFireActionHandler::~ZombossSteamFireActionHandler(ZombossSteamFireActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_06752580;
  ZombossFireActionHandler::~ZombossFireActionHandler((ZombossFireActionHandler *)this);
  return;
}


/* ZombossSteamFireActionHandler::~ZombossSteamFireActionHandler() */

void __thiscall
ZombossSteamFireActionHandler::~ZombossSteamFireActionHandler(ZombossSteamFireActionHandler *this)

{
  ~ZombossSteamFireActionHandler(this);
  AK::FreeHook(this);
  return;
}

