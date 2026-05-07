// Class: CollectableGemDangerDrop


/* CollectableGemDangerDrop::~CollectableGemDangerDrop() */

void __thiscall CollectableGemDangerDrop::~CollectableGemDangerDrop(CollectableGemDangerDrop *this)

{
  *(undefined ***)this = &PTR_GetClass_067552d0;
  *(undefined ***)(this + 0x10) = &PTR__CollectableGemDangerDrop_06755520;
  Collectable::~Collectable((Collectable *)this);
  return;
}


/* non-virtual thunk to CollectableGemDangerDrop::~CollectableGemDangerDrop() */

void __thiscall CollectableGemDangerDrop::~CollectableGemDangerDrop(CollectableGemDangerDrop *this)

{
  ~CollectableGemDangerDrop(this + -0x10);
  return;
}


/* CollectableGemDangerDrop::~CollectableGemDangerDrop() */

void __thiscall CollectableGemDangerDrop::~CollectableGemDangerDrop(CollectableGemDangerDrop *this)

{
  ~CollectableGemDangerDrop(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CollectableGemDangerDrop::~CollectableGemDangerDrop() */

void __thiscall CollectableGemDangerDrop::~CollectableGemDangerDrop(CollectableGemDangerDrop *this)

{
  ~CollectableGemDangerDrop(this + -0x10);
  return;
}


/* CollectableGemDangerDrop::StaticGetClass() */

long * CollectableGemDangerDrop::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CollectableGemDangerDrop",uVar2,StaticNew);
  return sClass;
}


/* CollectableGemDangerDrop::GetClass() const */

long * CollectableGemDangerDrop::GetClass(void)

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
  (*pcVar3)(plVar1,"CollectableGemDangerDrop",uVar2,StaticNew);
  return sClass;
}


/* CollectableGemDangerDrop::CollectableGemDangerDrop() */

void __thiscall CollectableGemDangerDrop::CollectableGemDangerDrop(CollectableGemDangerDrop *this)

{
  Collectable::Collectable((Collectable *)this);
  *(undefined ***)this = &PTR_GetClass_067552d0;
  *(undefined ***)(this + 0x10) = &PTR__CollectableGemDangerDrop_06755520;
  return;
}


/* CollectableGemDangerDrop::StaticNew() */

CollectableGemDangerDrop * CollectableGemDangerDrop::StaticNew(void)

{
  CollectableGemDangerDrop *this;
  
  this = ::operator_new(0x1f0);
  CollectableGemDangerDrop(this);
  return this;
}

