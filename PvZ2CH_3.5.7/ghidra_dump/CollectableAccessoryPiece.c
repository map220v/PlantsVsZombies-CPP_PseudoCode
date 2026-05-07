// Class: CollectableAccessoryPiece


/* CollectableAccessoryPiece::~CollectableAccessoryPiece() */

void __thiscall
CollectableAccessoryPiece::~CollectableAccessoryPiece(CollectableAccessoryPiece *this)

{
  *(undefined ***)this = &PTR_GetClass_0690d860;
  *(undefined ***)(this + 0x10) = &PTR__CollectableAccessoryPiece_0690dab0;
  Collectable::~Collectable((Collectable *)this);
  return;
}


/* non-virtual thunk to CollectableAccessoryPiece::~CollectableAccessoryPiece() */

void __thiscall
CollectableAccessoryPiece::~CollectableAccessoryPiece(CollectableAccessoryPiece *this)

{
  ~CollectableAccessoryPiece(this + -0x10);
  return;
}


/* CollectableAccessoryPiece::~CollectableAccessoryPiece() */

void __thiscall
CollectableAccessoryPiece::~CollectableAccessoryPiece(CollectableAccessoryPiece *this)

{
  ~CollectableAccessoryPiece(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CollectableAccessoryPiece::~CollectableAccessoryPiece() */

void __thiscall
CollectableAccessoryPiece::~CollectableAccessoryPiece(CollectableAccessoryPiece *this)

{
  ~CollectableAccessoryPiece(this + -0x10);
  return;
}


/* CollectableAccessoryPiece::StaticGetClass() */

long * CollectableAccessoryPiece::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CollectableAccessoryPiece",uVar2,StaticNew);
  return sClass;
}


/* CollectableAccessoryPiece::GetClass() const */

long * CollectableAccessoryPiece::GetClass(void)

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
  (*pcVar3)(plVar1,"CollectableAccessoryPiece",uVar2,StaticNew);
  return sClass;
}


/* CollectableAccessoryPiece::CollectableAccessoryPiece() */

void __thiscall
CollectableAccessoryPiece::CollectableAccessoryPiece(CollectableAccessoryPiece *this)

{
  Collectable::Collectable((Collectable *)this);
  *(undefined ***)this = &PTR_GetClass_0690d860;
  *(undefined ***)(this + 0x10) = &PTR__CollectableAccessoryPiece_0690dab0;
  return;
}


/* CollectableAccessoryPiece::StaticNew() */

CollectableAccessoryPiece * CollectableAccessoryPiece::StaticNew(void)

{
  CollectableAccessoryPiece *this;
  
  this = ::operator_new(0x1f0);
  CollectableAccessoryPiece(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableAccessoryPiece::GetAccessoryType() const */

void __thiscall CollectableAccessoryPiece::GetAccessoryType(CollectableAccessoryPiece *this)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TwinsAssistPerson::GetPopAnimRig();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  FUN_05475d88();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableAccessoryPiece::GetTypeName() const */

void __thiscall CollectableAccessoryPiece::GetTypeName(CollectableAccessoryPiece *this)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TwinsAssistPerson::GetPopAnimRig();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  FUN_05475d88();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

