// Class: CollectablePresent


/* CollectablePresent::~CollectablePresent() */

void __thiscall CollectablePresent::~CollectablePresent(CollectablePresent *this)

{
  *(undefined ***)this = &PTR_GetClass_06755f10;
  *(undefined ***)(this + 0x10) = &PTR__CollectablePresent_06756160;
  Collectable::~Collectable((Collectable *)this);
  return;
}


/* non-virtual thunk to CollectablePresent::~CollectablePresent() */

void __thiscall CollectablePresent::~CollectablePresent(CollectablePresent *this)

{
  ~CollectablePresent(this + -0x10);
  return;
}


/* CollectablePresent::~CollectablePresent() */

void __thiscall CollectablePresent::~CollectablePresent(CollectablePresent *this)

{
  ~CollectablePresent(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CollectablePresent::~CollectablePresent() */

void __thiscall CollectablePresent::~CollectablePresent(CollectablePresent *this)

{
  ~CollectablePresent(this + -0x10);
  return;
}


/* CollectablePresent::CollectablePresent() */

void __thiscall CollectablePresent::CollectablePresent(CollectablePresent *this)

{
  Collectable::Collectable((Collectable *)this);
  *(undefined ***)this = &PTR_GetClass_06755f10;
  *(undefined ***)(this + 0x10) = &PTR__CollectablePresent_06756160;
  return;
}


/* CollectablePresent::StaticNew() */

CollectablePresent * CollectablePresent::StaticNew(void)

{
  CollectablePresent *this;
  
  this = ::operator_new(0x1f0);
  CollectablePresent(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectablePresent::StaticClassInit() */

void CollectablePresent::StaticClassInit(void)

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
    std::string::string(asStack_10,"CollectablePresent");
    (*pcVar2)(plVar1,asStack_10,FUN_03c656e4,0x1f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectablePresent::StaticGetClass() */

long * CollectablePresent::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CollectablePresent",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CollectablePresent::GetClass() const */

long * CollectablePresent::GetClass(void)

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
  (*pcVar3)(plVar1,"CollectablePresent",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectablePresent::GetIsShiny() const */

void CollectablePresent::GetIsShiny(void)

{
  undefined1 uVar1;
  long extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TwinsAssistPerson::GetPopAnimRig();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  uVar1 = *(undefined1 *)(extraout_x0 + 0x91);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

