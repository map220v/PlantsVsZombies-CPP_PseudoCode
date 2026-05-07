// Class: CardGameOutroProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameOutroProperties::StaticClassInit() */

void CardGameOutroProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"CardGameOutroProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_04e0fb94,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameOutroProperties::StaticGetClass() */

long * CardGameOutroProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CardGameOutroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardGameOutroProperties::GetClass() const */

long * CardGameOutroProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"CardGameOutroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardGameOutroProperties::GetModuleClass() const */

long * CardGameOutroProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (CardGameOutro::sClass != (long *)0x0) {
    return CardGameOutro::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  CardGameOutro::sClass = plVar1;
  uVar2 = OutroModule::StaticGetClass();
  (*pcVar3)(plVar1,"CardGameOutro",uVar2,CardGameOutro::StaticNew);
  CardGameOutro::StaticClassInit();
  return CardGameOutro::sClass;
}


/* CardGameOutroProperties::CardGameOutroProperties() */

void __thiscall CardGameOutroProperties::CardGameOutroProperties(CardGameOutroProperties *this)

{
  OutroModuleProperties::OutroModuleProperties((OutroModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_069d5860;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x40));
  return;
}


/* CardGameOutroProperties::StaticNew() */

CardGameOutroProperties * CardGameOutroProperties::StaticNew(void)

{
  CardGameOutroProperties *this;
  
  this = ::operator_new(0x58);
  CardGameOutroProperties(this);
  return this;
}


/* CardGameOutroProperties::~CardGameOutroProperties() */

void __thiscall CardGameOutroProperties::~CardGameOutroProperties(CardGameOutroProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_069d5860;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x40));
  OutroModuleProperties::~OutroModuleProperties((OutroModuleProperties *)this);
  return;
}


/* CardGameOutroProperties::~CardGameOutroProperties() */

void __thiscall CardGameOutroProperties::~CardGameOutroProperties(CardGameOutroProperties *this)

{
  ~CardGameOutroProperties(this);
  AK::FreeHook(this);
  return;
}

