// Class: CollectablePowerup


/* CollectablePowerup::~CollectablePowerup() */

void __thiscall CollectablePowerup::~CollectablePowerup(CollectablePowerup *this)

{
  *(undefined ***)this = &PTR_GetClass_06755c30;
  *(undefined ***)(this + 0x10) = &PTR__CollectablePowerup_06755e80;
  Collectable::~Collectable((Collectable *)this);
  return;
}


/* non-virtual thunk to CollectablePowerup::~CollectablePowerup() */

void __thiscall CollectablePowerup::~CollectablePowerup(CollectablePowerup *this)

{
  ~CollectablePowerup(this + -0x10);
  return;
}


/* CollectablePowerup::~CollectablePowerup() */

void __thiscall CollectablePowerup::~CollectablePowerup(CollectablePowerup *this)

{
  ~CollectablePowerup(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CollectablePowerup::~CollectablePowerup() */

void __thiscall CollectablePowerup::~CollectablePowerup(CollectablePowerup *this)

{
  ~CollectablePowerup(this + -0x10);
  return;
}


/* CollectablePowerup::StaticGetClass() */

long * CollectablePowerup::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CollectablePowerup",uVar2,StaticNew);
  return sClass;
}


/* CollectablePowerup::GetClass() const */

long * CollectablePowerup::GetClass(void)

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
  (*pcVar3)(plVar1,"CollectablePowerup",uVar2,StaticNew);
  return sClass;
}


/* CollectablePowerup::CollectablePowerup() */

void __thiscall CollectablePowerup::CollectablePowerup(CollectablePowerup *this)

{
  Collectable::Collectable((Collectable *)this);
  *(undefined ***)this = &PTR_GetClass_06755c30;
  *(undefined ***)(this + 0x10) = &PTR__CollectablePowerup_06755e80;
  return;
}


/* CollectablePowerup::StaticNew() */

CollectablePowerup * CollectablePowerup::StaticNew(void)

{
  CollectablePowerup *this;
  
  this = ::operator_new(0x1f0);
  CollectablePowerup(this);
  return this;
}

