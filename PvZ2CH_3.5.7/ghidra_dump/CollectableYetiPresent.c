// Class: CollectableYetiPresent


/* CollectableYetiPresent::~CollectableYetiPresent() */

void __thiscall CollectableYetiPresent::~CollectableYetiPresent(CollectableYetiPresent *this)

{
  *(undefined ***)this = &PTR_GetClass_067561f0;
  *(undefined ***)(this + 0x10) = &PTR__CollectableYetiPresent_06756440;
  Collectable::~Collectable((Collectable *)this);
  return;
}


/* non-virtual thunk to CollectableYetiPresent::~CollectableYetiPresent() */

void __thiscall CollectableYetiPresent::~CollectableYetiPresent(CollectableYetiPresent *this)

{
  ~CollectableYetiPresent(this + -0x10);
  return;
}


/* CollectableYetiPresent::~CollectableYetiPresent() */

void __thiscall CollectableYetiPresent::~CollectableYetiPresent(CollectableYetiPresent *this)

{
  ~CollectableYetiPresent(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CollectableYetiPresent::~CollectableYetiPresent() */

void __thiscall CollectableYetiPresent::~CollectableYetiPresent(CollectableYetiPresent *this)

{
  ~CollectableYetiPresent(this + -0x10);
  return;
}


/* CollectableYetiPresent::CollectableYetiPresent() */

void __thiscall CollectableYetiPresent::CollectableYetiPresent(CollectableYetiPresent *this)

{
  Collectable::Collectable((Collectable *)this);
  this[0x1f0] = (CollectableYetiPresent)0x0;
  *(undefined ***)this = &PTR_GetClass_067561f0;
  *(undefined ***)(this + 0x10) = &PTR__CollectableYetiPresent_06756440;
  return;
}


/* CollectableYetiPresent::StaticNew() */

CollectableYetiPresent * CollectableYetiPresent::StaticNew(void)

{
  CollectableYetiPresent *this;
  
  this = ::operator_new(0x1f8);
  CollectableYetiPresent(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableYetiPresent::StaticClassInit() */

void CollectableYetiPresent::StaticClassInit(void)

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
    std::string::string(asStack_10,"CollectableYetiPresent");
    (*pcVar2)(plVar1,asStack_10,FUN_03c65b0c,0x1f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectableYetiPresent::StaticGetClass() */

long * CollectableYetiPresent::StaticGetClass(void)

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
  uVar2 = Collectable::StaticGetClass();
  (*pcVar3)(plVar1,"CollectableYetiPresent",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CollectableYetiPresent::GetClass() const */

long * CollectableYetiPresent::GetClass(void)

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
  uVar2 = Collectable::StaticGetClass();
  (*pcVar3)(plVar1,"CollectableYetiPresent",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

