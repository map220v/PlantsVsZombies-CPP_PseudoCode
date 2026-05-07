// Class: CardGameZombieGenerateRoundActionProperties


/* CardGameZombieGenerateRoundActionProperties::StaticNew() */

undefined8 CardGameZombieGenerateRoundActionProperties::StaticNew(void)

{
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameZombieGenerateRoundActionProperties::StaticClassInit() */

void CardGameZombieGenerateRoundActionProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"CardGameZombieGenerateRoundActionProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_04e13638,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameZombieGenerateRoundActionProperties::StaticGetClass() */

long * CardGameZombieGenerateRoundActionProperties::StaticGetClass(void)

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
  uVar2 = CardGameRoundActionProperties::StaticGetClass();
  (*pcVar3)(plVar1,"CardGameZombieGenerateRoundActionProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardGameZombieGenerateRoundActionProperties::GetClass() const */

long * CardGameZombieGenerateRoundActionProperties::GetClass(void)

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
  uVar2 = CardGameRoundActionProperties::StaticGetClass();
  (*pcVar3)(plVar1,"CardGameZombieGenerateRoundActionProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardGameZombieGenerateRoundActionProperties::~CardGameZombieGenerateRoundActionProperties() */

void __thiscall
CardGameZombieGenerateRoundActionProperties::~CardGameZombieGenerateRoundActionProperties
          (CardGameZombieGenerateRoundActionProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_069d6220;
  std::vector<CardGameZombieGenerateData,std::allocator<CardGameZombieGenerateData>>::~vector
            ((vector<CardGameZombieGenerateData,std::allocator<CardGameZombieGenerateData>> *)
             (this + 0x18));
  CardGameRoundActionProperties::~CardGameRoundActionProperties
            ((CardGameRoundActionProperties *)this);
  return;
}


/* CardGameZombieGenerateRoundActionProperties::~CardGameZombieGenerateRoundActionProperties() */

void __thiscall
CardGameZombieGenerateRoundActionProperties::~CardGameZombieGenerateRoundActionProperties
          (CardGameZombieGenerateRoundActionProperties *this)

{
  ~CardGameZombieGenerateRoundActionProperties(this);
  AK::FreeHook(this);
  return;
}

