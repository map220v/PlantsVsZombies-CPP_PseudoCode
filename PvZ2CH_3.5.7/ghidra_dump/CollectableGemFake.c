// Class: CollectableGemFake


/* CollectableGemFake::~CollectableGemFake() */

void __thiscall CollectableGemFake::~CollectableGemFake(CollectableGemFake *this)

{
  *(undefined ***)this = &PTR_GetClass_06755050;
  *(undefined ***)(this + 0x10) = &PTR__CollectableGemFake_067552a0;
  Collectable::~Collectable((Collectable *)this);
  return;
}


/* non-virtual thunk to CollectableGemFake::~CollectableGemFake() */

void __thiscall CollectableGemFake::~CollectableGemFake(CollectableGemFake *this)

{
  ~CollectableGemFake(this + -0x10);
  return;
}


/* CollectableGemFake::~CollectableGemFake() */

void __thiscall CollectableGemFake::~CollectableGemFake(CollectableGemFake *this)

{
  ~CollectableGemFake(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CollectableGemFake::~CollectableGemFake() */

void __thiscall CollectableGemFake::~CollectableGemFake(CollectableGemFake *this)

{
  ~CollectableGemFake(this + -0x10);
  return;
}


/* CollectableGemFake::StaticGetClass() */

long * CollectableGemFake::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CollectableGemFake",uVar2,StaticNew);
  return sClass;
}


/* CollectableGemFake::GetClass() const */

long * CollectableGemFake::GetClass(void)

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
  (*pcVar3)(plVar1,"CollectableGemFake",uVar2,StaticNew);
  return sClass;
}


/* CollectableGemFake::CollectableGemFake() */

void __thiscall CollectableGemFake::CollectableGemFake(CollectableGemFake *this)

{
  Collectable::Collectable((Collectable *)this);
  *(undefined ***)this = &PTR_GetClass_06755050;
  *(undefined ***)(this + 0x10) = &PTR__CollectableGemFake_067552a0;
  return;
}


/* CollectableGemFake::StaticNew() */

CollectableGemFake * CollectableGemFake::StaticNew(void)

{
  CollectableGemFake *this;
  
  this = ::operator_new(0x1f0);
  CollectableGemFake(this);
  return this;
}

