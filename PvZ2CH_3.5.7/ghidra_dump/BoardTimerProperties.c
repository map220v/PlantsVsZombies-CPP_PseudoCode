// Class: BoardTimerProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardTimerProperties::StaticClassInit() */

void BoardTimerProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"BoardTimerProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_036d1b34,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoardTimerProperties::StaticGetClass() */

long * BoardTimerProperties::StaticGetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"BoardTimerProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoardTimerProperties::GetClass() const */

long * BoardTimerProperties::GetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"BoardTimerProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoardTimerProperties::GetModuleClass() const */

long * BoardTimerProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (BoardTimer::sClass != (long *)0x0) {
    return BoardTimer::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  BoardTimer::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"BoardTimer",uVar2,BoardTimer::StaticNew);
  BoardTimer::StaticClassInit();
  return BoardTimer::sClass;
}


/* BoardTimerProperties::BoardTimerProperties() */

void __thiscall BoardTimerProperties::BoardTimerProperties(BoardTimerProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06682780;
  return;
}


/* BoardTimerProperties::StaticNew() */

BoardTimerProperties * BoardTimerProperties::StaticNew(void)

{
  BoardTimerProperties *this;
  
  this = ::operator_new(0x40);
  BoardTimerProperties(this);
  return this;
}


/* BoardTimerProperties::~BoardTimerProperties() */

void __thiscall BoardTimerProperties::~BoardTimerProperties(BoardTimerProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06682780;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* BoardTimerProperties::~BoardTimerProperties() */

void __thiscall BoardTimerProperties::~BoardTimerProperties(BoardTimerProperties *this)

{
  ~BoardTimerProperties(this);
  AK::FreeHook(this);
  return;
}

