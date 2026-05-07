// Class: ZombossSteamSpawnActionHandler


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamSpawnActionHandler::StaticClassInit() */

void ZombossSteamSpawnActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossSteamSpawnActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_03c42848,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossSteamSpawnActionHandler::StaticGetClass() */

long * ZombossSteamSpawnActionHandler::StaticGetClass(void)

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
  uVar2 = ZombossSpawnActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSteamSpawnActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSteamSpawnActionHandler::GetClass() const */

long * ZombossSteamSpawnActionHandler::GetClass(void)

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
  uVar2 = ZombossSpawnActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSteamSpawnActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSteamSpawnActionHandler::ZombossSteamSpawnActionHandler() */

void __thiscall
ZombossSteamSpawnActionHandler::ZombossSteamSpawnActionHandler(ZombossSteamSpawnActionHandler *this)

{
  ZombossSpawnActionHandler::ZombossSpawnActionHandler((ZombossSpawnActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_06752d70;
  return;
}


/* ZombossSteamSpawnActionHandler::StaticNew() */

ZombossSteamSpawnActionHandler * ZombossSteamSpawnActionHandler::StaticNew(void)

{
  ZombossSteamSpawnActionHandler *this;
  
  this = ::operator_new(0x50);
  ZombossSteamSpawnActionHandler(this);
  return this;
}


/* ZombossSteamSpawnActionHandler::~ZombossSteamSpawnActionHandler() */

void __thiscall
ZombossSteamSpawnActionHandler::~ZombossSteamSpawnActionHandler
          (ZombossSteamSpawnActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_06752d70;
  ZombossSpawnActionHandler::~ZombossSpawnActionHandler((ZombossSpawnActionHandler *)this);
  return;
}


/* ZombossSteamSpawnActionHandler::~ZombossSteamSpawnActionHandler() */

void __thiscall
ZombossSteamSpawnActionHandler::~ZombossSteamSpawnActionHandler
          (ZombossSteamSpawnActionHandler *this)

{
  ~ZombossSteamSpawnActionHandler(this);
  AK::FreeHook(this);
  return;
}

