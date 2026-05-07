// Class: EffectObject_DinoTreadProps


/* EffectObject_DinoTreadProps::~EffectObject_DinoTreadProps() */

void __thiscall
EffectObject_DinoTreadProps::~EffectObject_DinoTreadProps(EffectObject_DinoTreadProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067604b0;
  EffectObjectPropertySheet::~EffectObjectPropertySheet((EffectObjectPropertySheet *)this);
  return;
}


/* EffectObject_DinoTreadProps::~EffectObject_DinoTreadProps() */

void __thiscall
EffectObject_DinoTreadProps::~EffectObject_DinoTreadProps(EffectObject_DinoTreadProps *this)

{
  ~EffectObject_DinoTreadProps(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_DinoTreadProps::StaticClassInit() */

void EffectObject_DinoTreadProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"EffectObject_DinoTreadProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03cdc74c,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectObject_DinoTreadProps::StaticGetClass() */

long * EffectObject_DinoTreadProps::StaticGetClass(void)

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
  uVar2 = EffectObjectPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"EffectObject_DinoTreadProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectObject_DinoTreadProps::GetClass() const */

long * EffectObject_DinoTreadProps::GetClass(void)

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
  uVar2 = EffectObjectPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"EffectObject_DinoTreadProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_DinoTreadProps::EffectObject_DinoTreadProps() */

void __thiscall
EffectObject_DinoTreadProps::EffectObject_DinoTreadProps(EffectObject_DinoTreadProps *this)

{
  undefined4 uVar1;
  
  EffectObjectPropertySheet::EffectObjectPropertySheet((EffectObjectPropertySheet *)this);
  uVar1 = _FUN_03cdca90;
  *(undefined4 *)(this + 0x30) = 0x40a00000;
  *(undefined ***)this = &PTR_GetClass_067604b0;
  *(undefined4 *)(this + 0x34) = uVar1;
  return;
}


/* EffectObject_DinoTreadProps::StaticNew() */

EffectObject_DinoTreadProps * EffectObject_DinoTreadProps::StaticNew(void)

{
  EffectObject_DinoTreadProps *this;
  
  this = ::operator_new(0x38);
  EffectObject_DinoTreadProps(this);
  return this;
}

