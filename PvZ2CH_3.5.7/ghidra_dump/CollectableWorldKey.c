// Class: CollectableWorldKey


/* CollectableWorldKey::~CollectableWorldKey() */

void __thiscall CollectableWorldKey::~CollectableWorldKey(CollectableWorldKey *this)

{
  *(undefined ***)this = &PTR_GetClass_067585a0;
  *(undefined ***)(this + 0x10) = &PTR__CollectableWorldKey_067587f0;
  Collectable::~Collectable((Collectable *)this);
  return;
}


/* non-virtual thunk to CollectableWorldKey::~CollectableWorldKey() */

void __thiscall CollectableWorldKey::~CollectableWorldKey(CollectableWorldKey *this)

{
  ~CollectableWorldKey(this + -0x10);
  return;
}


/* CollectableWorldKey::~CollectableWorldKey() */

void __thiscall CollectableWorldKey::~CollectableWorldKey(CollectableWorldKey *this)

{
  ~CollectableWorldKey(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CollectableWorldKey::~CollectableWorldKey() */

void __thiscall CollectableWorldKey::~CollectableWorldKey(CollectableWorldKey *this)

{
  ~CollectableWorldKey(this + -0x10);
  return;
}


/* CollectableWorldKey::StaticGetClass() */

long * CollectableWorldKey::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CollectableWorldKey",uVar2,StaticNew);
  return sClass;
}


/* CollectableWorldKey::GetClass() const */

long * CollectableWorldKey::GetClass(void)

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
  (*pcVar3)(plVar1,"CollectableWorldKey",uVar2,StaticNew);
  return sClass;
}


/* CollectableWorldKey::CollectableWorldKey() */

void __thiscall CollectableWorldKey::CollectableWorldKey(CollectableWorldKey *this)

{
  Collectable::Collectable((Collectable *)this);
  *(undefined ***)this = &PTR_GetClass_067585a0;
  *(undefined ***)(this + 0x10) = &PTR__CollectableWorldKey_067587f0;
  return;
}


/* CollectableWorldKey::StaticNew() */

CollectableWorldKey * CollectableWorldKey::StaticNew(void)

{
  CollectableWorldKey *this;
  
  this = ::operator_new(0x1f0);
  CollectableWorldKey(this);
  return this;
}

