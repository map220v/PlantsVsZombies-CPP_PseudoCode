// Class: CollectableCoin


/* CollectableCoin::~CollectableCoin() */

void __thiscall CollectableCoin::~CollectableCoin(CollectableCoin *this)

{
  *(undefined ***)this = &PTR_GetClass_06754590;
  *(undefined ***)(this + 0x10) = &PTR__CollectableCoin_067547e0;
  Collectable::~Collectable((Collectable *)this);
  return;
}


/* non-virtual thunk to CollectableCoin::~CollectableCoin() */

void __thiscall CollectableCoin::~CollectableCoin(CollectableCoin *this)

{
  ~CollectableCoin(this + -0x10);
  return;
}


/* CollectableCoin::~CollectableCoin() */

void __thiscall CollectableCoin::~CollectableCoin(CollectableCoin *this)

{
  ~CollectableCoin(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CollectableCoin::~CollectableCoin() */

void __thiscall CollectableCoin::~CollectableCoin(CollectableCoin *this)

{
  ~CollectableCoin(this + -0x10);
  return;
}


/* CollectableCoin::StaticGetClass() */

long * CollectableCoin::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CollectableCoin",uVar2,StaticNew);
  return sClass;
}


/* CollectableCoin::GetClass() const */

long * CollectableCoin::GetClass(void)

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
  (*pcVar3)(plVar1,"CollectableCoin",uVar2,StaticNew);
  return sClass;
}


/* CollectableCoin::CollectableCoin() */

void __thiscall CollectableCoin::CollectableCoin(CollectableCoin *this)

{
  Collectable::Collectable((Collectable *)this);
  *(undefined ***)this = &PTR_GetClass_06754590;
  *(undefined ***)(this + 0x10) = &PTR__CollectableCoin_067547e0;
  return;
}


/* CollectableCoin::StaticNew() */

CollectableCoin * CollectableCoin::StaticNew(void)

{
  CollectableCoin *this;
  
  this = ::operator_new(0x1f0);
  CollectableCoin(this);
  return this;
}

