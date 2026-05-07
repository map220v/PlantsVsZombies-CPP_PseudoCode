// Class: CollectableNewerPresent


/* CollectableNewerPresent::~CollectableNewerPresent() */

void __thiscall CollectableNewerPresent::~CollectableNewerPresent(CollectableNewerPresent *this)

{
  *(undefined ***)this = &PTR_GetClass_067564d0;
  *(undefined ***)(this + 0x10) = &PTR__CollectableNewerPresent_06756720;
  Collectable::~Collectable((Collectable *)this);
  return;
}


/* non-virtual thunk to CollectableNewerPresent::~CollectableNewerPresent() */

void __thiscall CollectableNewerPresent::~CollectableNewerPresent(CollectableNewerPresent *this)

{
  ~CollectableNewerPresent(this + -0x10);
  return;
}


/* CollectableNewerPresent::~CollectableNewerPresent() */

void __thiscall CollectableNewerPresent::~CollectableNewerPresent(CollectableNewerPresent *this)

{
  ~CollectableNewerPresent(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CollectableNewerPresent::~CollectableNewerPresent() */

void __thiscall CollectableNewerPresent::~CollectableNewerPresent(CollectableNewerPresent *this)

{
  ~CollectableNewerPresent(this + -0x10);
  return;
}


/* CollectableNewerPresent::CollectableNewerPresent() */

void __thiscall CollectableNewerPresent::CollectableNewerPresent(CollectableNewerPresent *this)

{
  Collectable::Collectable((Collectable *)this);
  *(undefined ***)this = &PTR_GetClass_067564d0;
  *(undefined ***)(this + 0x10) = &PTR__CollectableNewerPresent_06756720;
  return;
}


/* CollectableNewerPresent::StaticNew() */

CollectableNewerPresent * CollectableNewerPresent::StaticNew(void)

{
  CollectableNewerPresent *this;
  
  this = ::operator_new(0x1f0);
  CollectableNewerPresent(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableNewerPresent::StaticClassInit() */

void CollectableNewerPresent::StaticClassInit(void)

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
    std::string::string(asStack_10,"CollectableNewerPresent");
    (*pcVar2)(plVar1,asStack_10,FUN_03c65f34,0x1f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectableNewerPresent::StaticGetClass() */

long * CollectableNewerPresent::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CollectableNewerPresent",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CollectableNewerPresent::GetClass() const */

long * CollectableNewerPresent::GetClass(void)

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
  (*pcVar3)(plVar1,"CollectableNewerPresent",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

