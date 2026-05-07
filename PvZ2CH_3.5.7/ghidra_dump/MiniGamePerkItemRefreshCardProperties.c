// Class: MiniGamePerkItemRefreshCardProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerkItemRefreshCardProperties::StaticClassInit() */

void MiniGamePerkItemRefreshCardProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"MiniGamePerkItemRefreshCardProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_038a0924,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGamePerkItemRefreshCardProperties::MiniGamePerkItemRefreshCardProperties() */

void __thiscall
MiniGamePerkItemRefreshCardProperties::MiniGamePerkItemRefreshCardProperties
          (MiniGamePerkItemRefreshCardProperties *this)

{
  MiniGamePerkItemProperties::MiniGamePerkItemProperties((MiniGamePerkItemProperties *)this);
  *(undefined ***)this = &PTR_GetClass_066b09f0;
  return;
}


/* MiniGamePerkItemRefreshCardProperties::StaticNew() */

MiniGamePerkItemRefreshCardProperties * MiniGamePerkItemRefreshCardProperties::StaticNew(void)

{
  MiniGamePerkItemRefreshCardProperties *this;
  
  this = ::operator_new(0x68);
  MiniGamePerkItemRefreshCardProperties(this);
  return this;
}


/* MiniGamePerkItemRefreshCardProperties::~MiniGamePerkItemRefreshCardProperties() */

void __thiscall
MiniGamePerkItemRefreshCardProperties::~MiniGamePerkItemRefreshCardProperties
          (MiniGamePerkItemRefreshCardProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_066b09f0;
  MiniGamePerkItemProperties::~MiniGamePerkItemProperties((MiniGamePerkItemProperties *)this);
  return;
}


/* MiniGamePerkItemRefreshCardProperties::~MiniGamePerkItemRefreshCardProperties() */

void __thiscall
MiniGamePerkItemRefreshCardProperties::~MiniGamePerkItemRefreshCardProperties
          (MiniGamePerkItemRefreshCardProperties *this)

{
  ~MiniGamePerkItemRefreshCardProperties(this);
  AK::FreeHook(this);
  return;
}


/* MiniGamePerkItemRefreshCardProperties::StaticGetClass() */

long * MiniGamePerkItemRefreshCardProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MiniGamePerkItemRefreshCardProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGamePerkItemRefreshCardProperties::GetClass() const */

long * MiniGamePerkItemRefreshCardProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"MiniGamePerkItemRefreshCardProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

