// Class: CollectableStar


/* CollectableStar::~CollectableStar() */

void __thiscall CollectableStar::~CollectableStar(CollectableStar *this)

{
  *(undefined ***)this = &PTR_GetClass_06757460;
  *(undefined ***)(this + 0x10) = &PTR__CollectableStar_067576b0;
  Collectable::~Collectable((Collectable *)this);
  return;
}


/* non-virtual thunk to CollectableStar::~CollectableStar() */

void __thiscall CollectableStar::~CollectableStar(CollectableStar *this)

{
  ~CollectableStar(this + -0x10);
  return;
}


/* CollectableStar::~CollectableStar() */

void __thiscall CollectableStar::~CollectableStar(CollectableStar *this)

{
  ~CollectableStar(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CollectableStar::~CollectableStar() */

void __thiscall CollectableStar::~CollectableStar(CollectableStar *this)

{
  ~CollectableStar(this + -0x10);
  return;
}


/* CollectableStar::StaticGetClass() */

long * CollectableStar::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CollectableStar",uVar2,StaticNew);
  return sClass;
}


/* CollectableStar::GetClass() const */

long * CollectableStar::GetClass(void)

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
  (*pcVar3)(plVar1,"CollectableStar",uVar2,StaticNew);
  return sClass;
}


/* CollectableStar::CollectableStar() */

void __thiscall CollectableStar::CollectableStar(CollectableStar *this)

{
  Collectable::Collectable((Collectable *)this);
  *(undefined ***)this = &PTR_GetClass_06757460;
  *(undefined ***)(this + 0x10) = &PTR__CollectableStar_067576b0;
  return;
}


/* CollectableStar::StaticNew() */

CollectableStar * CollectableStar::StaticNew(void)

{
  CollectableStar *this;
  
  this = ::operator_new(0x1f0);
  CollectableStar(this);
  return this;
}

