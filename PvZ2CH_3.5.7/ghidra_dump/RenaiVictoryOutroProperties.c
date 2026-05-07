// Class: RenaiVictoryOutroProperties


/* RenaiVictoryOutroProperties::GetModuleClass() const */

long * RenaiVictoryOutroProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (RenaiVictoryOutroModule::sClass != (long *)0x0) {
    return RenaiVictoryOutroModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  RenaiVictoryOutroModule::sClass = plVar1;
  uVar2 = VictoryOutroModule::StaticGetClass();
  (*pcVar3)(plVar1,"RenaiVictoryOutroModule",uVar2,RenaiVictoryOutroModule::StaticNew);
  RenaiVictoryOutroModule::StaticClassInit();
  return RenaiVictoryOutroModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenaiVictoryOutroProperties::StaticClassInit() */

void RenaiVictoryOutroProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"RenaiVictoryOutroProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03d06e28,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RenaiVictoryOutroProperties::StaticGetClass() */

long * RenaiVictoryOutroProperties::StaticGetClass(void)

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
  uVar2 = VictoryOutroProperties::StaticGetClass();
  (*pcVar3)(plVar1,"RenaiVictoryOutroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RenaiVictoryOutroProperties::GetClass() const */

long * RenaiVictoryOutroProperties::GetClass(void)

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
  uVar2 = VictoryOutroProperties::StaticGetClass();
  (*pcVar3)(plVar1,"RenaiVictoryOutroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RenaiVictoryOutroProperties::RenaiVictoryOutroProperties() */

void __thiscall
RenaiVictoryOutroProperties::RenaiVictoryOutroProperties(RenaiVictoryOutroProperties *this)

{
  VictoryOutroProperties::VictoryOutroProperties((VictoryOutroProperties *)this);
  *(undefined ***)this = &PTR_GetClass_067634f0;
  return;
}


/* RenaiVictoryOutroProperties::StaticNew() */

RenaiVictoryOutroProperties * RenaiVictoryOutroProperties::StaticNew(void)

{
  RenaiVictoryOutroProperties *this;
  
  this = ::operator_new(0x68);
  RenaiVictoryOutroProperties(this);
  return this;
}


/* RenaiVictoryOutroProperties::~RenaiVictoryOutroProperties() */

void __thiscall
RenaiVictoryOutroProperties::~RenaiVictoryOutroProperties(RenaiVictoryOutroProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_067634f0;
  VictoryOutroProperties::~VictoryOutroProperties((VictoryOutroProperties *)this);
  return;
}


/* RenaiVictoryOutroProperties::~RenaiVictoryOutroProperties() */

void __thiscall
RenaiVictoryOutroProperties::~RenaiVictoryOutroProperties(RenaiVictoryOutroProperties *this)

{
  ~RenaiVictoryOutroProperties(this);
  AK::FreeHook(this);
  return;
}

