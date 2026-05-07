// Class: ZombossDarkWalkActionHandler


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossDarkWalkActionHandler::StaticClassInit() */

void ZombossDarkWalkActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossDarkWalkActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_0471f360,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossDarkWalkActionHandler::StaticGetClass() */

long * ZombossDarkWalkActionHandler::StaticGetClass(void)

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
  uVar2 = ZombossWalkActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossDarkWalkActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossDarkWalkActionHandler::GetClass() const */

long * ZombossDarkWalkActionHandler::GetClass(void)

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
  uVar2 = ZombossWalkActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossDarkWalkActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossDarkWalkActionHandler::ZombossDarkWalkActionHandler() */

void __thiscall
ZombossDarkWalkActionHandler::ZombossDarkWalkActionHandler(ZombossDarkWalkActionHandler *this)

{
  undefined4 uVar1;
  
  ZombossWalkActionHandler::ZombossWalkActionHandler((ZombossWalkActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_068c19d0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x60) = uVar1;
  return;
}


/* ZombossDarkWalkActionHandler::StaticNew() */

ZombossDarkWalkActionHandler * ZombossDarkWalkActionHandler::StaticNew(void)

{
  ZombossDarkWalkActionHandler *this;
  
  this = ::operator_new(0x68);
  ZombossDarkWalkActionHandler(this);
  return this;
}


/* ZombossDarkWalkActionHandler::~ZombossDarkWalkActionHandler() */

void __thiscall
ZombossDarkWalkActionHandler::~ZombossDarkWalkActionHandler(ZombossDarkWalkActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_068c19d0;
  ZombossWalkActionHandler::~ZombossWalkActionHandler((ZombossWalkActionHandler *)this);
  return;
}


/* ZombossDarkWalkActionHandler::~ZombossDarkWalkActionHandler() */

void __thiscall
ZombossDarkWalkActionHandler::~ZombossDarkWalkActionHandler(ZombossDarkWalkActionHandler *this)

{
  ~ZombossDarkWalkActionHandler(this);
  AK::FreeHook(this);
  return;
}

