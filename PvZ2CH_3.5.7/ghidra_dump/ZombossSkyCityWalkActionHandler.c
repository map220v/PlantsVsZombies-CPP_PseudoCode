// Class: ZombossSkyCityWalkActionHandler


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSkyCityWalkActionHandler::StaticClassInit() */

void ZombossSkyCityWalkActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossSkyCityWalkActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_04726c88,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossSkyCityWalkActionHandler::StaticGetClass() */

long * ZombossSkyCityWalkActionHandler::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombossSkyCityWalkActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSkyCityWalkActionHandler::GetClass() const */

long * ZombossSkyCityWalkActionHandler::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombossSkyCityWalkActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSkyCityWalkActionHandler::ZombossSkyCityWalkActionHandler() */

void __thiscall
ZombossSkyCityWalkActionHandler::ZombossSkyCityWalkActionHandler
          (ZombossSkyCityWalkActionHandler *this)

{
  undefined4 uVar1;
  
  ZombossWalkActionHandler::ZombossWalkActionHandler((ZombossWalkActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_068c2ce0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x60) = uVar1;
  return;
}


/* ZombossSkyCityWalkActionHandler::StaticNew() */

ZombossSkyCityWalkActionHandler * ZombossSkyCityWalkActionHandler::StaticNew(void)

{
  ZombossSkyCityWalkActionHandler *this;
  
  this = ::operator_new(0x68);
  ZombossSkyCityWalkActionHandler(this);
  return this;
}


/* ZombossSkyCityWalkActionHandler::~ZombossSkyCityWalkActionHandler() */

void __thiscall
ZombossSkyCityWalkActionHandler::~ZombossSkyCityWalkActionHandler
          (ZombossSkyCityWalkActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_068c2ce0;
  ZombossWalkActionHandler::~ZombossWalkActionHandler((ZombossWalkActionHandler *)this);
  return;
}


/* ZombossSkyCityWalkActionHandler::~ZombossSkyCityWalkActionHandler() */

void __thiscall
ZombossSkyCityWalkActionHandler::~ZombossSkyCityWalkActionHandler
          (ZombossSkyCityWalkActionHandler *this)

{
  ~ZombossSkyCityWalkActionHandler(this);
  AK::FreeHook(this);
  return;
}

