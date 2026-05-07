// Class: ZombossSteamJumpActionHandler


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamJumpActionHandler::StaticClassInit() */

void ZombossSteamJumpActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossSteamJumpActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_03c408c4,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossSteamJumpActionHandler::StaticGetClass() */

long * ZombossSteamJumpActionHandler::StaticGetClass(void)

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
  uVar2 = ZombossJumpActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSteamJumpActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSteamJumpActionHandler::GetClass() const */

long * ZombossSteamJumpActionHandler::GetClass(void)

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
  uVar2 = ZombossJumpActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSteamJumpActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSteamJumpActionHandler::ZombossSteamJumpActionHandler() */

void __thiscall
ZombossSteamJumpActionHandler::ZombossSteamJumpActionHandler(ZombossSteamJumpActionHandler *this)

{
  ZombossJumpActionHandler::ZombossJumpActionHandler((ZombossJumpActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_06751da0;
  return;
}


/* ZombossSteamJumpActionHandler::StaticNew() */

ZombossSteamJumpActionHandler * ZombossSteamJumpActionHandler::StaticNew(void)

{
  ZombossSteamJumpActionHandler *this;
  
  this = ::operator_new(0x68);
  ZombossSteamJumpActionHandler(this);
  return this;
}


/* ZombossSteamJumpActionHandler::~ZombossSteamJumpActionHandler() */

void __thiscall
ZombossSteamJumpActionHandler::~ZombossSteamJumpActionHandler(ZombossSteamJumpActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_06751da0;
  ZombossJumpActionHandler::~ZombossJumpActionHandler((ZombossJumpActionHandler *)this);
  return;
}


/* ZombossSteamJumpActionHandler::~ZombossSteamJumpActionHandler() */

void __thiscall
ZombossSteamJumpActionHandler::~ZombossSteamJumpActionHandler(ZombossSteamJumpActionHandler *this)

{
  ~ZombossSteamJumpActionHandler(this);
  AK::FreeHook(this);
  return;
}

