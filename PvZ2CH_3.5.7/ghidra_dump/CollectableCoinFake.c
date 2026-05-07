// Class: CollectableCoinFake


/* CollectableCoinFake::~CollectableCoinFake() */

void __thiscall CollectableCoinFake::~CollectableCoinFake(CollectableCoinFake *this)

{
  *(undefined ***)this = &PTR_GetClass_06754810;
  *(undefined ***)(this + 0x10) = &PTR__CollectableCoinFake_06754a60;
  Collectable::~Collectable((Collectable *)this);
  return;
}


/* non-virtual thunk to CollectableCoinFake::~CollectableCoinFake() */

void __thiscall CollectableCoinFake::~CollectableCoinFake(CollectableCoinFake *this)

{
  ~CollectableCoinFake(this + -0x10);
  return;
}


/* CollectableCoinFake::~CollectableCoinFake() */

void __thiscall CollectableCoinFake::~CollectableCoinFake(CollectableCoinFake *this)

{
  ~CollectableCoinFake(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CollectableCoinFake::~CollectableCoinFake() */

void __thiscall CollectableCoinFake::~CollectableCoinFake(CollectableCoinFake *this)

{
  ~CollectableCoinFake(this + -0x10);
  return;
}


/* CollectableCoinFake::StaticGetClass() */

long * CollectableCoinFake::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CollectableCoinFake",uVar2,StaticNew);
  return sClass;
}


/* CollectableCoinFake::GetClass() const */

long * CollectableCoinFake::GetClass(void)

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
  (*pcVar3)(plVar1,"CollectableCoinFake",uVar2,StaticNew);
  return sClass;
}


/* CollectableCoinFake::CollectableCoinFake() */

void __thiscall CollectableCoinFake::CollectableCoinFake(CollectableCoinFake *this)

{
  Collectable::Collectable((Collectable *)this);
  *(undefined ***)this = &PTR_GetClass_06754810;
  *(undefined ***)(this + 0x10) = &PTR__CollectableCoinFake_06754a60;
  return;
}


/* CollectableCoinFake::StaticNew() */

CollectableCoinFake * CollectableCoinFake::StaticNew(void)

{
  CollectableCoinFake *this;
  
  this = ::operator_new(0x1f0);
  CollectableCoinFake(this);
  return this;
}

