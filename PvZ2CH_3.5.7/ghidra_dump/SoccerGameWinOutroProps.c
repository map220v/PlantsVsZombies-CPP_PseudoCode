// Class: SoccerGameWinOutroProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SoccerGameWinOutroProps::StaticClassInit() */

void SoccerGameWinOutroProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"SoccerGameWinOutroProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03934614,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SoccerGameWinOutroProps::StaticGetClass() */

long * SoccerGameWinOutroProps::StaticGetClass(void)

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
  uVar2 = OutroModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"SoccerGameWinOutroProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SoccerGameWinOutroProps::GetClass() const */

long * SoccerGameWinOutroProps::GetClass(void)

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
  uVar2 = OutroModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"SoccerGameWinOutroProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SoccerGameWinOutroProps::GetModuleClass() const */

long * SoccerGameWinOutroProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (SoccerGameWinOutro::sClass != (long *)0x0) {
    return SoccerGameWinOutro::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  SoccerGameWinOutro::sClass = plVar1;
  uVar2 = OutroModule::StaticGetClass();
  (*pcVar3)(plVar1,"SoccerGameWinOutro",uVar2,SoccerGameWinOutro::StaticNew);
  SoccerGameWinOutro::StaticClassInit();
  return SoccerGameWinOutro::sClass;
}


/* SoccerGameWinOutroProps::SoccerGameWinOutroProps() */

void __thiscall SoccerGameWinOutroProps::SoccerGameWinOutroProps(SoccerGameWinOutroProps *this)

{
  OutroModuleProperties::OutroModuleProperties((OutroModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_066cb0a0;
  return;
}


/* SoccerGameWinOutroProps::StaticNew() */

SoccerGameWinOutroProps * SoccerGameWinOutroProps::StaticNew(void)

{
  SoccerGameWinOutroProps *this;
  
  this = ::operator_new(0x40);
  SoccerGameWinOutroProps(this);
  return this;
}


/* SoccerGameWinOutroProps::~SoccerGameWinOutroProps() */

void __thiscall SoccerGameWinOutroProps::~SoccerGameWinOutroProps(SoccerGameWinOutroProps *this)

{
  *(undefined ***)this = &PTR_GetClass_066cb0a0;
  OutroModuleProperties::~OutroModuleProperties((OutroModuleProperties *)this);
  return;
}


/* SoccerGameWinOutroProps::~SoccerGameWinOutroProps() */

void __thiscall SoccerGameWinOutroProps::~SoccerGameWinOutroProps(SoccerGameWinOutroProps *this)

{
  ~SoccerGameWinOutroProps(this);
  AK::FreeHook(this);
  return;
}

