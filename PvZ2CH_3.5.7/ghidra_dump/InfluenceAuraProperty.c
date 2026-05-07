// Class: InfluenceAuraProperty


/* InfluenceAuraProperty::StaticNew() */

undefined8 InfluenceAuraProperty::StaticNew(void)

{
  return 0;
}


/* InfluenceAuraProperty::~InfluenceAuraProperty() */

void __thiscall InfluenceAuraProperty::~InfluenceAuraProperty(InfluenceAuraProperty *this)

{
  *(undefined ***)this = &PTR_GetClass_06667080;
  nop();
  return;
}


/* InfluenceAuraProperty::~InfluenceAuraProperty() */

void __thiscall InfluenceAuraProperty::~InfluenceAuraProperty(InfluenceAuraProperty *this)

{
  ~InfluenceAuraProperty(this);
  AK::FreeHook(this);
  return;
}


/* InfluenceAuraProperty::InfluenceAuraProperty() */

void __thiscall InfluenceAuraProperty::InfluenceAuraProperty(InfluenceAuraProperty *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06667080;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InfluenceAuraProperty::StaticClassInit() */

void InfluenceAuraProperty::StaticClassInit(void)

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
    std::string::string(asStack_10,"InfluenceAuraProperty");
    (*pcVar2)(plVar1,asStack_10,FUN_0360950c,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* InfluenceAuraProperty::StaticGetClass() */

long * InfluenceAuraProperty::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"InfluenceAuraProperty",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* InfluenceAuraProperty::GetClass() const */

long * InfluenceAuraProperty::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"InfluenceAuraProperty",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

