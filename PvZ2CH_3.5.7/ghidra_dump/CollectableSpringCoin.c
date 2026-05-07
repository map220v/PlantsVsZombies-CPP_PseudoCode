// Class: CollectableSpringCoin


/* CollectableSpringCoin::~CollectableSpringCoin() */

void __thiscall CollectableSpringCoin::~CollectableSpringCoin(CollectableSpringCoin *this)

{
  *(undefined ***)this = &PTR_GetClass_0690d0e0;
  *(undefined ***)(this + 0x10) = &PTR__CollectableSpringCoin_0690d330;
  Collectable::~Collectable((Collectable *)this);
  return;
}


/* non-virtual thunk to CollectableSpringCoin::~CollectableSpringCoin() */

void __thiscall CollectableSpringCoin::~CollectableSpringCoin(CollectableSpringCoin *this)

{
  ~CollectableSpringCoin(this + -0x10);
  return;
}


/* CollectableSpringCoin::~CollectableSpringCoin() */

void __thiscall CollectableSpringCoin::~CollectableSpringCoin(CollectableSpringCoin *this)

{
  ~CollectableSpringCoin(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CollectableSpringCoin::~CollectableSpringCoin() */

void __thiscall CollectableSpringCoin::~CollectableSpringCoin(CollectableSpringCoin *this)

{
  ~CollectableSpringCoin(this + -0x10);
  return;
}


/* CollectableSpringCoin::StaticGetClass() */

long * CollectableSpringCoin::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CollectableSpringCoin",uVar2,StaticNew);
  return sClass;
}


/* CollectableSpringCoin::GetClass() const */

long * CollectableSpringCoin::GetClass(void)

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
  (*pcVar3)(plVar1,"CollectableSpringCoin",uVar2,StaticNew);
  return sClass;
}


/* CollectableSpringCoin::CollectableSpringCoin() */

void __thiscall CollectableSpringCoin::CollectableSpringCoin(CollectableSpringCoin *this)

{
  Collectable::Collectable((Collectable *)this);
  *(undefined ***)this = &PTR_GetClass_0690d0e0;
  *(undefined ***)(this + 0x10) = &PTR__CollectableSpringCoin_0690d330;
  return;
}


/* CollectableSpringCoin::StaticNew() */

CollectableSpringCoin * CollectableSpringCoin::StaticNew(void)

{
  CollectableSpringCoin *this;
  
  this = ::operator_new(0x1f0);
  CollectableSpringCoin(this);
  return this;
}

