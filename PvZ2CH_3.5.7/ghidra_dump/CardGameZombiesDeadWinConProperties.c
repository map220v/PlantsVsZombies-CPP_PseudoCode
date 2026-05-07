// Class: CardGameZombiesDeadWinConProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameZombiesDeadWinConProperties::StaticClassInit() */

void CardGameZombiesDeadWinConProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"CardGameZombiesDeadWinConProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_046d2df8,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameZombiesDeadWinConProperties::StaticGetClass() */

long * CardGameZombiesDeadWinConProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CardGameZombiesDeadWinConProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardGameZombiesDeadWinConProperties::GetClass() const */

long * CardGameZombiesDeadWinConProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"CardGameZombiesDeadWinConProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardGameZombiesDeadWinConProperties::GetModuleClass() const */

long * CardGameZombiesDeadWinConProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (CardGameZombiesDeadWinCon::sClass != (long *)0x0) {
    return CardGameZombiesDeadWinCon::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  CardGameZombiesDeadWinCon::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"CardGameZombiesDeadWinCon",uVar2,CardGameZombiesDeadWinCon::StaticNew);
  return CardGameZombiesDeadWinCon::sClass;
}


/* CardGameZombiesDeadWinConProperties::CardGameZombiesDeadWinConProperties() */

void __thiscall
CardGameZombiesDeadWinConProperties::CardGameZombiesDeadWinConProperties
          (CardGameZombiesDeadWinConProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_068b4390;
  return;
}


/* CardGameZombiesDeadWinConProperties::StaticNew() */

CardGameZombiesDeadWinConProperties * CardGameZombiesDeadWinConProperties::StaticNew(void)

{
  CardGameZombiesDeadWinConProperties *this;
  
  this = ::operator_new(0x40);
  CardGameZombiesDeadWinConProperties(this);
  return this;
}


/* CardGameZombiesDeadWinConProperties::~CardGameZombiesDeadWinConProperties() */

void __thiscall
CardGameZombiesDeadWinConProperties::~CardGameZombiesDeadWinConProperties
          (CardGameZombiesDeadWinConProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_068b4390;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* CardGameZombiesDeadWinConProperties::~CardGameZombiesDeadWinConProperties() */

void __thiscall
CardGameZombiesDeadWinConProperties::~CardGameZombiesDeadWinConProperties
          (CardGameZombiesDeadWinConProperties *this)

{
  ~CardGameZombiesDeadWinConProperties(this);
  AK::FreeHook(this);
  return;
}

