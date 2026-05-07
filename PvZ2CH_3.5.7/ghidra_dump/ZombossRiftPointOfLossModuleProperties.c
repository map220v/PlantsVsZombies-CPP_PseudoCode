// Class: ZombossRiftPointOfLossModuleProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRiftPointOfLossModuleProperties::StaticClassInit() */

void ZombossRiftPointOfLossModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossRiftPointOfLossModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_0369bca4,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossRiftPointOfLossModuleProperties::StaticGetClass() */

long * ZombossRiftPointOfLossModuleProperties::StaticGetClass(void)

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
  uVar2 = PointOfLossModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossRiftPointOfLossModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossRiftPointOfLossModuleProperties::GetClass() const */

long * ZombossRiftPointOfLossModuleProperties::GetClass(void)

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
  uVar2 = PointOfLossModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossRiftPointOfLossModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossRiftPointOfLossModuleProperties::GetModuleClass() const */

long * ZombossRiftPointOfLossModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (ZombossRiftPointOfLossModule::sClass != (long *)0x0) {
    return ZombossRiftPointOfLossModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  ZombossRiftPointOfLossModule::sClass = plVar1;
  uVar2 = PointOfLossModule::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossRiftPointOfLossModule",uVar2,ZombossRiftPointOfLossModule::StaticNew);
  ZombossRiftPointOfLossModule::StaticClassInit();
  return ZombossRiftPointOfLossModule::sClass;
}


/* ZombossRiftPointOfLossModuleProperties::~ZombossRiftPointOfLossModuleProperties() */

void __thiscall
ZombossRiftPointOfLossModuleProperties::~ZombossRiftPointOfLossModuleProperties
          (ZombossRiftPointOfLossModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0667eb80;
  PointOfLossModuleProperties::~PointOfLossModuleProperties((PointOfLossModuleProperties *)this);
  return;
}


/* ZombossRiftPointOfLossModuleProperties::~ZombossRiftPointOfLossModuleProperties() */

void __thiscall
ZombossRiftPointOfLossModuleProperties::~ZombossRiftPointOfLossModuleProperties
          (ZombossRiftPointOfLossModuleProperties *this)

{
  ~ZombossRiftPointOfLossModuleProperties(this);
  AK::FreeHook(this);
  return;
}


/* ZombossRiftPointOfLossModuleProperties::ZombossRiftPointOfLossModuleProperties() */

void __thiscall
ZombossRiftPointOfLossModuleProperties::ZombossRiftPointOfLossModuleProperties
          (ZombossRiftPointOfLossModuleProperties *this)

{
  PointOfLossModuleProperties::PointOfLossModuleProperties((PointOfLossModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0667eb80;
  return;
}


/* ZombossRiftPointOfLossModuleProperties::StaticNew() */

ZombossRiftPointOfLossModuleProperties * ZombossRiftPointOfLossModuleProperties::StaticNew(void)

{
  ZombossRiftPointOfLossModuleProperties *this;
  
  this = ::operator_new(0x60);
  ZombossRiftPointOfLossModuleProperties(this);
  return this;
}

