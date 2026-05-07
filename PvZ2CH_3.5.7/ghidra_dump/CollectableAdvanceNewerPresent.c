// Class: CollectableAdvanceNewerPresent


/* CollectableAdvanceNewerPresent::~CollectableAdvanceNewerPresent() */

void __thiscall
CollectableAdvanceNewerPresent::~CollectableAdvanceNewerPresent
          (CollectableAdvanceNewerPresent *this)

{
  *(undefined ***)this = &PTR_GetClass_06756750;
  *(undefined ***)(this + 0x10) = &PTR__CollectableAdvanceNewerPresent_067569a0;
  Collectable::~Collectable((Collectable *)this);
  return;
}


/* non-virtual thunk to CollectableAdvanceNewerPresent::~CollectableAdvanceNewerPresent() */

void __thiscall
CollectableAdvanceNewerPresent::~CollectableAdvanceNewerPresent
          (CollectableAdvanceNewerPresent *this)

{
  ~CollectableAdvanceNewerPresent(this + -0x10);
  return;
}


/* CollectableAdvanceNewerPresent::~CollectableAdvanceNewerPresent() */

void __thiscall
CollectableAdvanceNewerPresent::~CollectableAdvanceNewerPresent
          (CollectableAdvanceNewerPresent *this)

{
  ~CollectableAdvanceNewerPresent(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CollectableAdvanceNewerPresent::~CollectableAdvanceNewerPresent() */

void __thiscall
CollectableAdvanceNewerPresent::~CollectableAdvanceNewerPresent
          (CollectableAdvanceNewerPresent *this)

{
  ~CollectableAdvanceNewerPresent(this + -0x10);
  return;
}


/* CollectableAdvanceNewerPresent::CollectableAdvanceNewerPresent() */

void __thiscall
CollectableAdvanceNewerPresent::CollectableAdvanceNewerPresent(CollectableAdvanceNewerPresent *this)

{
  Collectable::Collectable((Collectable *)this);
  *(undefined ***)this = &PTR_GetClass_06756750;
  *(undefined ***)(this + 0x10) = &PTR__CollectableAdvanceNewerPresent_067569a0;
  return;
}


/* CollectableAdvanceNewerPresent::StaticNew() */

CollectableAdvanceNewerPresent * CollectableAdvanceNewerPresent::StaticNew(void)

{
  CollectableAdvanceNewerPresent *this;
  
  this = ::operator_new(0x1f0);
  CollectableAdvanceNewerPresent(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableAdvanceNewerPresent::StaticClassInit() */

void CollectableAdvanceNewerPresent::StaticClassInit(void)

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
    std::string::string(asStack_10,"CollectableAdvanceNewerPresent");
    (*pcVar2)(plVar1,asStack_10,FUN_03c66148,0x1f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectableAdvanceNewerPresent::StaticGetClass() */

long * CollectableAdvanceNewerPresent::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CollectableAdvanceNewerPresent",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CollectableAdvanceNewerPresent::GetClass() const */

long * CollectableAdvanceNewerPresent::GetClass(void)

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
  (*pcVar3)(plVar1,"CollectableAdvanceNewerPresent",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

