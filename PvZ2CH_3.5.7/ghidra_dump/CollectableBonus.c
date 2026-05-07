// Class: CollectableBonus


/* CollectableBonus::~CollectableBonus() */

void __thiscall CollectableBonus::~CollectableBonus(CollectableBonus *this)

{
  *(undefined ***)this = &PTR_GetClass_06758040;
  *(undefined ***)(this + 0x10) = &PTR__CollectableBonus_06758290;
  Collectable::~Collectable((Collectable *)this);
  return;
}


/* non-virtual thunk to CollectableBonus::~CollectableBonus() */

void __thiscall CollectableBonus::~CollectableBonus(CollectableBonus *this)

{
  ~CollectableBonus(this + -0x10);
  return;
}


/* CollectableBonus::~CollectableBonus() */

void __thiscall CollectableBonus::~CollectableBonus(CollectableBonus *this)

{
  ~CollectableBonus(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CollectableBonus::~CollectableBonus() */

void __thiscall CollectableBonus::~CollectableBonus(CollectableBonus *this)

{
  ~CollectableBonus(this + -0x10);
  return;
}


/* CollectableBonus::StaticGetClass() */

long * CollectableBonus::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CollectableBonus",uVar2,StaticNew);
  return sClass;
}


/* CollectableBonus::GetClass() const */

long * CollectableBonus::GetClass(void)

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
  (*pcVar3)(plVar1,"CollectableBonus",uVar2,StaticNew);
  return sClass;
}


/* CollectableBonus::CollectableBonus() */

void __thiscall CollectableBonus::CollectableBonus(CollectableBonus *this)

{
  Collectable::Collectable((Collectable *)this);
  *(undefined ***)this = &PTR_GetClass_06758040;
  *(undefined ***)(this + 0x10) = &PTR__CollectableBonus_06758290;
  return;
}


/* CollectableBonus::StaticNew() */

CollectableBonus * CollectableBonus::StaticNew(void)

{
  CollectableBonus *this;
  
  this = ::operator_new(0x1f0);
  CollectableBonus(this);
  return this;
}

