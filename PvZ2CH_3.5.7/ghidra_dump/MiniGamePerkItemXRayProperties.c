// Class: MiniGamePerkItemXRayProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerkItemXRayProperties::StaticClassInit() */

void MiniGamePerkItemXRayProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"MiniGamePerkItemXRayProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_038a0664,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGamePerkItemXRayProperties::MiniGamePerkItemXRayProperties() */

void __thiscall
MiniGamePerkItemXRayProperties::MiniGamePerkItemXRayProperties(MiniGamePerkItemXRayProperties *this)

{
  MiniGamePerkItemProperties::MiniGamePerkItemProperties((MiniGamePerkItemProperties *)this);
  *(undefined ***)this = &PTR_GetClass_066b0750;
  return;
}


/* MiniGamePerkItemXRayProperties::StaticNew() */

MiniGamePerkItemXRayProperties * MiniGamePerkItemXRayProperties::StaticNew(void)

{
  MiniGamePerkItemXRayProperties *this;
  
  this = ::operator_new(0x68);
  MiniGamePerkItemXRayProperties(this);
  return this;
}


/* MiniGamePerkItemXRayProperties::~MiniGamePerkItemXRayProperties() */

void __thiscall
MiniGamePerkItemXRayProperties::~MiniGamePerkItemXRayProperties
          (MiniGamePerkItemXRayProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_066b0750;
  MiniGamePerkItemProperties::~MiniGamePerkItemProperties((MiniGamePerkItemProperties *)this);
  return;
}


/* MiniGamePerkItemXRayProperties::~MiniGamePerkItemXRayProperties() */

void __thiscall
MiniGamePerkItemXRayProperties::~MiniGamePerkItemXRayProperties
          (MiniGamePerkItemXRayProperties *this)

{
  ~MiniGamePerkItemXRayProperties(this);
  AK::FreeHook(this);
  return;
}


/* MiniGamePerkItemXRayProperties::StaticGetClass() */

long * MiniGamePerkItemXRayProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MiniGamePerkItemXRayProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGamePerkItemXRayProperties::GetClass() const */

long * MiniGamePerkItemXRayProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"MiniGamePerkItemXRayProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

