// Class: EffectObject_BurrowAttackProps


/* EffectObject_BurrowAttackProps::~EffectObject_BurrowAttackProps() */

void __thiscall
EffectObject_BurrowAttackProps::~EffectObject_BurrowAttackProps
          (EffectObject_BurrowAttackProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06827140;
  EffectObjectPropertySheet::~EffectObjectPropertySheet((EffectObjectPropertySheet *)this);
  return;
}


/* EffectObject_BurrowAttackProps::~EffectObject_BurrowAttackProps() */

void __thiscall
EffectObject_BurrowAttackProps::~EffectObject_BurrowAttackProps
          (EffectObject_BurrowAttackProps *this)

{
  ~EffectObject_BurrowAttackProps(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_BurrowAttackProps::StaticClassInit() */

void EffectObject_BurrowAttackProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"EffectObject_BurrowAttackProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04290be4,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectObject_BurrowAttackProps::StaticGetClass() */

long * EffectObject_BurrowAttackProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EffectObject_BurrowAttackProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectObject_BurrowAttackProps::GetClass() const */

long * EffectObject_BurrowAttackProps::GetClass(void)

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
  (*pcVar3)(plVar1,"EffectObject_BurrowAttackProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectObject_BurrowAttackProps::EffectObject_BurrowAttackProps() */

void __thiscall
EffectObject_BurrowAttackProps::EffectObject_BurrowAttackProps(EffectObject_BurrowAttackProps *this)

{
  EffectObjectPropertySheet::EffectObjectPropertySheet((EffectObjectPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06827140;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x30));
  return;
}


/* EffectObject_BurrowAttackProps::StaticNew() */

EffectObject_BurrowAttackProps * EffectObject_BurrowAttackProps::StaticNew(void)

{
  EffectObject_BurrowAttackProps *this;
  
  this = ::operator_new(0x38);
  EffectObject_BurrowAttackProps(this);
  return this;
}

