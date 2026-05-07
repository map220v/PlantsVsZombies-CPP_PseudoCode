// Class: CardGameZombiesAteYourBaseProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameZombiesAteYourBaseProperties::StaticClassInit() */

void CardGameZombiesAteYourBaseProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"CardGameZombiesAteYourBaseProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_046ce840,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameZombiesAteYourBaseProperties::StaticGetClass() */

long * CardGameZombiesAteYourBaseProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CardGameZombiesAteYourBaseProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardGameZombiesAteYourBaseProperties::GetClass() const */

long * CardGameZombiesAteYourBaseProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"CardGameZombiesAteYourBaseProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardGameZombiesAteYourBaseProperties::GetModuleClass() const */

long * CardGameZombiesAteYourBaseProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (CardGameZombiesAteYourBaseModule::sClass != (long *)0x0) {
    return CardGameZombiesAteYourBaseModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  CardGameZombiesAteYourBaseModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"CardGameZombiesAteYourBaseModule",uVar2,
            CardGameZombiesAteYourBaseModule::StaticNew);
  CardGameZombiesAteYourBaseModule::StaticClassInit();
  return CardGameZombiesAteYourBaseModule::sClass;
}


/* CardGameZombiesAteYourBaseProperties::CardGameZombiesAteYourBaseProperties() */

void __thiscall
CardGameZombiesAteYourBaseProperties::CardGameZombiesAteYourBaseProperties
          (CardGameZombiesAteYourBaseProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined4 *)(this + 0x40) = 0xc2a00000;
  *(undefined ***)this = &PTR_GetClass_068b3e10;
  *(undefined4 *)(this + 0x44) = 0x447a0000;
  *(undefined4 *)(this + 0x48) = 0x42480000;
  return;
}


/* CardGameZombiesAteYourBaseProperties::StaticNew() */

CardGameZombiesAteYourBaseProperties * CardGameZombiesAteYourBaseProperties::StaticNew(void)

{
  CardGameZombiesAteYourBaseProperties *this;
  
  this = ::operator_new(0x50);
  CardGameZombiesAteYourBaseProperties(this);
  return this;
}


/* CardGameZombiesAteYourBaseProperties::~CardGameZombiesAteYourBaseProperties() */

void __thiscall
CardGameZombiesAteYourBaseProperties::~CardGameZombiesAteYourBaseProperties
          (CardGameZombiesAteYourBaseProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_068b3e10;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* CardGameZombiesAteYourBaseProperties::~CardGameZombiesAteYourBaseProperties() */

void __thiscall
CardGameZombiesAteYourBaseProperties::~CardGameZombiesAteYourBaseProperties
          (CardGameZombiesAteYourBaseProperties *this)

{
  ~CardGameZombiesAteYourBaseProperties(this);
  AK::FreeHook(this);
  return;
}

