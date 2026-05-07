// Class: CollectableWorldStarUnlock


/* CollectableWorldStarUnlock::~CollectableWorldStarUnlock() */

void __thiscall
CollectableWorldStarUnlock::~CollectableWorldStarUnlock(CollectableWorldStarUnlock *this)

{
  *(undefined ***)this = &PTR_GetClass_06758820;
  *(undefined ***)(this + 0x10) = &PTR__CollectableWorldStarUnlock_06758a70;
  Collectable::~Collectable((Collectable *)this);
  return;
}


/* non-virtual thunk to CollectableWorldStarUnlock::~CollectableWorldStarUnlock() */

void __thiscall
CollectableWorldStarUnlock::~CollectableWorldStarUnlock(CollectableWorldStarUnlock *this)

{
  ~CollectableWorldStarUnlock(this + -0x10);
  return;
}


/* CollectableWorldStarUnlock::~CollectableWorldStarUnlock() */

void __thiscall
CollectableWorldStarUnlock::~CollectableWorldStarUnlock(CollectableWorldStarUnlock *this)

{
  ~CollectableWorldStarUnlock(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CollectableWorldStarUnlock::~CollectableWorldStarUnlock() */

void __thiscall
CollectableWorldStarUnlock::~CollectableWorldStarUnlock(CollectableWorldStarUnlock *this)

{
  ~CollectableWorldStarUnlock(this + -0x10);
  return;
}


/* CollectableWorldStarUnlock::StaticGetClass() */

long * CollectableWorldStarUnlock::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CollectableWorldStarUnlock",uVar2,StaticNew);
  return sClass;
}


/* CollectableWorldStarUnlock::GetClass() const */

long * CollectableWorldStarUnlock::GetClass(void)

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
  (*pcVar3)(plVar1,"CollectableWorldStarUnlock",uVar2,StaticNew);
  return sClass;
}


/* CollectableWorldStarUnlock::CollectableWorldStarUnlock() */

void __thiscall
CollectableWorldStarUnlock::CollectableWorldStarUnlock(CollectableWorldStarUnlock *this)

{
  Collectable::Collectable((Collectable *)this);
  *(undefined ***)this = &PTR_GetClass_06758820;
  *(undefined ***)(this + 0x10) = &PTR__CollectableWorldStarUnlock_06758a70;
  return;
}


/* CollectableWorldStarUnlock::StaticNew() */

CollectableWorldStarUnlock * CollectableWorldStarUnlock::StaticNew(void)

{
  CollectableWorldStarUnlock *this;
  
  this = ::operator_new(0x1f0);
  CollectableWorldStarUnlock(this);
  return this;
}

