// Class: CardGameRoundModuleProperties


/* CardGameRoundModuleProperties::StaticNew() */

undefined8 CardGameRoundModuleProperties::StaticNew(void)

{
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameRoundModuleProperties::StaticClassInit() */

void CardGameRoundModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"CardGameRoundModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_04e12ab0,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameRoundModuleProperties::StaticGetClass() */

long * CardGameRoundModuleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CardGameRoundModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardGameRoundModuleProperties::GetClass() const */

long * CardGameRoundModuleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"CardGameRoundModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardGameRoundModuleProperties::GetModuleClass() const */

long * CardGameRoundModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (CardGameRoundModule::sClass != (long *)0x0) {
    return CardGameRoundModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  CardGameRoundModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"CardGameRoundModule",uVar2,CardGameRoundModule::StaticNew);
  CardGameRoundModule::StaticClassInit();
  return CardGameRoundModule::sClass;
}


/* CardGameRoundModuleProperties::CardGameRoundModuleProperties() */

void __thiscall
CardGameRoundModuleProperties::CardGameRoundModuleProperties(CardGameRoundModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_069d62b0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  return;
}


/* CardGameRoundModuleProperties::~CardGameRoundModuleProperties() */

void __thiscall
CardGameRoundModuleProperties::~CardGameRoundModuleProperties(CardGameRoundModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_069d62b0;
  std::
  vector<Sexy::RtWeakPtr<CardGameRoundProperties>,std::allocator<Sexy::RtWeakPtr<CardGameRoundProperties>>>
  ::~vector((vector<Sexy::RtWeakPtr<CardGameRoundProperties>,std::allocator<Sexy::RtWeakPtr<CardGameRoundProperties>>>
             *)(this + 0x40));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* CardGameRoundModuleProperties::~CardGameRoundModuleProperties() */

void __thiscall
CardGameRoundModuleProperties::~CardGameRoundModuleProperties(CardGameRoundModuleProperties *this)

{
  ~CardGameRoundModuleProperties(this);
  AK::FreeHook(this);
  return;
}

