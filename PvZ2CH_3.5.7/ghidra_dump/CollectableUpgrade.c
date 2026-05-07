// Class: CollectableUpgrade


/* CollectableUpgrade::~CollectableUpgrade() */

void __thiscall CollectableUpgrade::~CollectableUpgrade(CollectableUpgrade *this)

{
  *(undefined ***)this = &PTR_GetClass_06757d60;
  *(undefined ***)(this + 0x10) = &PTR__CollectableUpgrade_06757fb0;
  Collectable::~Collectable((Collectable *)this);
  return;
}


/* non-virtual thunk to CollectableUpgrade::~CollectableUpgrade() */

void __thiscall CollectableUpgrade::~CollectableUpgrade(CollectableUpgrade *this)

{
  ~CollectableUpgrade(this + -0x10);
  return;
}


/* CollectableUpgrade::~CollectableUpgrade() */

void __thiscall CollectableUpgrade::~CollectableUpgrade(CollectableUpgrade *this)

{
  ~CollectableUpgrade(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CollectableUpgrade::~CollectableUpgrade() */

void __thiscall CollectableUpgrade::~CollectableUpgrade(CollectableUpgrade *this)

{
  ~CollectableUpgrade(this + -0x10);
  return;
}


/* CollectableUpgrade::StaticGetClass() */

long * CollectableUpgrade::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CollectableUpgrade",uVar2,StaticNew);
  return sClass;
}


/* CollectableUpgrade::GetClass() const */

long * CollectableUpgrade::GetClass(void)

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
  (*pcVar3)(plVar1,"CollectableUpgrade",uVar2,StaticNew);
  return sClass;
}


/* CollectableUpgrade::CollectableUpgrade() */

void __thiscall CollectableUpgrade::CollectableUpgrade(CollectableUpgrade *this)

{
  Collectable::Collectable((Collectable *)this);
  *(undefined ***)this = &PTR_GetClass_06757d60;
  *(undefined ***)(this + 0x10) = &PTR__CollectableUpgrade_06757fb0;
  return;
}


/* CollectableUpgrade::StaticNew() */

CollectableUpgrade * CollectableUpgrade::StaticNew(void)

{
  CollectableUpgrade *this;
  
  this = ::operator_new(0x1f0);
  CollectableUpgrade(this);
  return this;
}

