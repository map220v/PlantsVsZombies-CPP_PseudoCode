// Class: GiveFreeZombieCardAuraProperty


/* GiveFreeZombieCardAuraProperty::~GiveFreeZombieCardAuraProperty() */

void __thiscall
GiveFreeZombieCardAuraProperty::~GiveFreeZombieCardAuraProperty
          (GiveFreeZombieCardAuraProperty *this)

{
  *(undefined ***)this = &PTR_GetClass_06667180;
  InfluenceAuraProperty::~InfluenceAuraProperty((InfluenceAuraProperty *)this);
  return;
}


/* GiveFreeZombieCardAuraProperty::~GiveFreeZombieCardAuraProperty() */

void __thiscall
GiveFreeZombieCardAuraProperty::~GiveFreeZombieCardAuraProperty
          (GiveFreeZombieCardAuraProperty *this)

{
  ~GiveFreeZombieCardAuraProperty(this);
  AK::FreeHook(this);
  return;
}


/* GiveFreeZombieCardAuraProperty::GiveFreeZombieCardAuraProperty() */

void __thiscall
GiveFreeZombieCardAuraProperty::GiveFreeZombieCardAuraProperty(GiveFreeZombieCardAuraProperty *this)

{
  InfluenceAuraProperty::InfluenceAuraProperty((InfluenceAuraProperty *)this);
  *(undefined4 *)(this + 8) = 1;
  *(undefined ***)this = &PTR_GetClass_06667180;
  return;
}


/* GiveFreeZombieCardAuraProperty::StaticNew() */

GiveFreeZombieCardAuraProperty * GiveFreeZombieCardAuraProperty::StaticNew(void)

{
  GiveFreeZombieCardAuraProperty *this;
  
  this = ::operator_new(0x10);
  GiveFreeZombieCardAuraProperty(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GiveFreeZombieCardAuraProperty::StaticClassInit() */

void GiveFreeZombieCardAuraProperty::StaticClassInit(void)

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
    std::string::string(asStack_10,"GiveFreeZombieCardAuraProperty");
    (*pcVar2)(plVar1,asStack_10,FUN_0360988c,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GiveFreeZombieCardAuraProperty::StaticGetClass() */

long * GiveFreeZombieCardAuraProperty::StaticGetClass(void)

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
  uVar2 = InfluenceAuraProperty::StaticGetClass();
  (*pcVar3)(plVar1,"GiveFreeZombieCardAuraProperty",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GiveFreeZombieCardAuraProperty::GetClass() const */

long * GiveFreeZombieCardAuraProperty::GetClass(void)

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
  uVar2 = InfluenceAuraProperty::StaticGetClass();
  (*pcVar3)(plVar1,"GiveFreeZombieCardAuraProperty",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GiveFreeZombieCardAuraProperty::GetAuraClass() const */

long * GiveFreeZombieCardAuraProperty::GetAuraClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (GiveFreeZombieCardAura::sClass != (long *)0x0) {
    return GiveFreeZombieCardAura::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  GiveFreeZombieCardAura::sClass = plVar1;
  uVar2 = InfluenceAura::StaticGetClass();
  (*pcVar3)(plVar1,"GiveFreeZombieCardAura",uVar2,GiveFreeZombieCardAura::StaticNew);
  GiveFreeZombieCardAura::StaticClassInit();
  return GiveFreeZombieCardAura::sClass;
}

