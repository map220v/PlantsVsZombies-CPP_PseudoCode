// Class: SoccerGameLossOutroProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SoccerGameLossOutroProps::StaticClassInit() */

void SoccerGameLossOutroProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"SoccerGameLossOutroProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0393495c,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SoccerGameLossOutroProps::StaticGetClass() */

long * SoccerGameLossOutroProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SoccerGameLossOutroProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SoccerGameLossOutroProps::GetClass() const */

long * SoccerGameLossOutroProps::GetClass(void)

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
  (*pcVar3)(plVar1,"SoccerGameLossOutroProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SoccerGameLossOutroProps::GetModuleClass() const */

long * SoccerGameLossOutroProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (SoccerGameLossOutro::sClass != (long *)0x0) {
    return SoccerGameLossOutro::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  SoccerGameLossOutro::sClass = plVar1;
  uVar2 = OutroModule::StaticGetClass();
  (*pcVar3)(plVar1,"SoccerGameLossOutro",uVar2,SoccerGameLossOutro::StaticNew);
  SoccerGameLossOutro::StaticClassInit();
  return SoccerGameLossOutro::sClass;
}


/* SoccerGameLossOutroProps::SoccerGameLossOutroProps() */

void __thiscall SoccerGameLossOutroProps::SoccerGameLossOutroProps(SoccerGameLossOutroProps *this)

{
  OutroModuleProperties::OutroModuleProperties((OutroModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_066cb200;
  return;
}


/* SoccerGameLossOutroProps::StaticNew() */

SoccerGameLossOutroProps * SoccerGameLossOutroProps::StaticNew(void)

{
  SoccerGameLossOutroProps *this;
  
  this = ::operator_new(0x40);
  SoccerGameLossOutroProps(this);
  return this;
}


/* SoccerGameLossOutroProps::~SoccerGameLossOutroProps() */

void __thiscall SoccerGameLossOutroProps::~SoccerGameLossOutroProps(SoccerGameLossOutroProps *this)

{
  *(undefined ***)this = &PTR_GetClass_066cb200;
  OutroModuleProperties::~OutroModuleProperties((OutroModuleProperties *)this);
  return;
}


/* SoccerGameLossOutroProps::~SoccerGameLossOutroProps() */

void __thiscall SoccerGameLossOutroProps::~SoccerGameLossOutroProps(SoccerGameLossOutroProps *this)

{
  ~SoccerGameLossOutroProps(this);
  AK::FreeHook(this);
  return;
}

