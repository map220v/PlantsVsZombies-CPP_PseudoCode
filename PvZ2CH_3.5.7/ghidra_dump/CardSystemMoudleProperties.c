// Class: CardSystemMoudleProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardSystemMoudleProperties::StaticClassInit() */

void CardSystemMoudleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"CardSystemMoudleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_035fa7ec,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardSystemMoudleProperties::StaticGetClass() */

long * CardSystemMoudleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CardSystemMoudleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardSystemMoudleProperties::GetClass() const */

long * CardSystemMoudleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"CardSystemMoudleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardSystemMoudleProperties::GetModuleClass() const */

long * CardSystemMoudleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (CardSystemMoudle::sClass != (long *)0x0) {
    return CardSystemMoudle::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  CardSystemMoudle::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"CardSystemMoudle",uVar2,CardSystemMoudle::StaticNew);
  CardSystemMoudle::StaticClassInit();
  return CardSystemMoudle::sClass;
}


/* CardSystemMoudleProperties::CardSystemMoudleProperties() */

void __thiscall
CardSystemMoudleProperties::CardSystemMoudleProperties(CardSystemMoudleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06665ea0;
  return;
}


/* CardSystemMoudleProperties::StaticNew() */

CardSystemMoudleProperties * CardSystemMoudleProperties::StaticNew(void)

{
  CardSystemMoudleProperties *this;
  
  this = ::operator_new(0x40);
  CardSystemMoudleProperties(this);
  return this;
}


/* CardSystemMoudleProperties::~CardSystemMoudleProperties() */

void __thiscall
CardSystemMoudleProperties::~CardSystemMoudleProperties(CardSystemMoudleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06665ea0;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* CardSystemMoudleProperties::~CardSystemMoudleProperties() */

void __thiscall
CardSystemMoudleProperties::~CardSystemMoudleProperties(CardSystemMoudleProperties *this)

{
  ~CardSystemMoudleProperties(this);
  AK::FreeHook(this);
  return;
}

