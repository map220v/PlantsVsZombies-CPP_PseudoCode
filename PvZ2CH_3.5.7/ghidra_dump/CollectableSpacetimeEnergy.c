// Class: CollectableSpacetimeEnergy


/* CollectableSpacetimeEnergy::~CollectableSpacetimeEnergy() */

void __thiscall
CollectableSpacetimeEnergy::~CollectableSpacetimeEnergy(CollectableSpacetimeEnergy *this)

{
  *(undefined ***)this = &PTR_GetClass_06754d70;
  *(undefined ***)(this + 0x10) = &PTR__CollectableSpacetimeEnergy_06754fc0;
  Collectable::~Collectable((Collectable *)this);
  return;
}


/* non-virtual thunk to CollectableSpacetimeEnergy::~CollectableSpacetimeEnergy() */

void __thiscall
CollectableSpacetimeEnergy::~CollectableSpacetimeEnergy(CollectableSpacetimeEnergy *this)

{
  ~CollectableSpacetimeEnergy(this + -0x10);
  return;
}


/* CollectableSpacetimeEnergy::~CollectableSpacetimeEnergy() */

void __thiscall
CollectableSpacetimeEnergy::~CollectableSpacetimeEnergy(CollectableSpacetimeEnergy *this)

{
  ~CollectableSpacetimeEnergy(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CollectableSpacetimeEnergy::~CollectableSpacetimeEnergy() */

void __thiscall
CollectableSpacetimeEnergy::~CollectableSpacetimeEnergy(CollectableSpacetimeEnergy *this)

{
  ~CollectableSpacetimeEnergy(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableSpacetimeEnergy::StaticClassInit() */

void CollectableSpacetimeEnergy::StaticClassInit(void)

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
    std::string::string(asStack_10,"CollectableSpacetimeEnergy");
    (*pcVar2)(plVar1,asStack_10,FUN_03c62a30,0x1f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectableSpacetimeEnergy::StaticGetClass() */

long * CollectableSpacetimeEnergy::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CollectableSpacetimeEnergy",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CollectableSpacetimeEnergy::GetClass() const */

long * CollectableSpacetimeEnergy::GetClass(void)

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
  (*pcVar3)(plVar1,"CollectableSpacetimeEnergy",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CollectableSpacetimeEnergy::CollectableSpacetimeEnergy() */

void __thiscall
CollectableSpacetimeEnergy::CollectableSpacetimeEnergy(CollectableSpacetimeEnergy *this)

{
  Collectable::Collectable((Collectable *)this);
  *(undefined4 *)(this + 0x1f0) = 0;
  *(undefined ***)this = &PTR_GetClass_06754d70;
  *(undefined ***)(this + 0x10) = &PTR__CollectableSpacetimeEnergy_06754fc0;
  return;
}


/* CollectableSpacetimeEnergy::StaticNew() */

CollectableSpacetimeEnergy * CollectableSpacetimeEnergy::StaticNew(void)

{
  CollectableSpacetimeEnergy *this;
  
  this = ::operator_new(0x1f8);
  CollectableSpacetimeEnergy(this);
  return this;
}


/* CollectableSpacetimeEnergy::onFinishMotion() */

void __thiscall CollectableSpacetimeEnergy::onFinishMotion(CollectableSpacetimeEnergy *this)

{
  Collectable::onFinishMotion((Collectable *)this);
  Collectable::TryToCollect((Collectable *)this);
  return;
}

