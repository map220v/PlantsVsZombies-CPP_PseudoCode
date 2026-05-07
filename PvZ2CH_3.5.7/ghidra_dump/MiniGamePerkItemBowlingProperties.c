// Class: MiniGamePerkItemBowlingProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerkItemBowlingProperties::StaticClassInit() */

void MiniGamePerkItemBowlingProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"MiniGamePerkItemBowlingProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_038a07c4,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGamePerkItemBowlingProperties::MiniGamePerkItemBowlingProperties() */

void __thiscall
MiniGamePerkItemBowlingProperties::MiniGamePerkItemBowlingProperties
          (MiniGamePerkItemBowlingProperties *this)

{
  MiniGamePerkItemProperties::MiniGamePerkItemProperties((MiniGamePerkItemProperties *)this);
  *(undefined ***)this = &PTR_GetClass_066b08a0;
  return;
}


/* MiniGamePerkItemBowlingProperties::StaticNew() */

MiniGamePerkItemBowlingProperties * MiniGamePerkItemBowlingProperties::StaticNew(void)

{
  MiniGamePerkItemBowlingProperties *this;
  
  this = ::operator_new(0x68);
  MiniGamePerkItemBowlingProperties(this);
  return this;
}


/* MiniGamePerkItemBowlingProperties::~MiniGamePerkItemBowlingProperties() */

void __thiscall
MiniGamePerkItemBowlingProperties::~MiniGamePerkItemBowlingProperties
          (MiniGamePerkItemBowlingProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_066b08a0;
  MiniGamePerkItemProperties::~MiniGamePerkItemProperties((MiniGamePerkItemProperties *)this);
  return;
}


/* MiniGamePerkItemBowlingProperties::~MiniGamePerkItemBowlingProperties() */

void __thiscall
MiniGamePerkItemBowlingProperties::~MiniGamePerkItemBowlingProperties
          (MiniGamePerkItemBowlingProperties *this)

{
  ~MiniGamePerkItemBowlingProperties(this);
  AK::FreeHook(this);
  return;
}


/* MiniGamePerkItemBowlingProperties::StaticGetClass() */

long * MiniGamePerkItemBowlingProperties::StaticGetClass(void)

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
  uVar2 = MiniGamePerkItemProperties::StaticGetClass();
  (*pcVar3)(plVar1,"MiniGamePerkItemBowlingProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGamePerkItemBowlingProperties::GetClass() const */

long * MiniGamePerkItemBowlingProperties::GetClass(void)

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
  uVar2 = MiniGamePerkItemProperties::StaticGetClass();
  (*pcVar3)(plVar1,"MiniGamePerkItemBowlingProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

