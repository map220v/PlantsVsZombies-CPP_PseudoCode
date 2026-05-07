// Class: CollectableDRMadal


/* CollectableDRMadal::~CollectableDRMadal() */

void __thiscall CollectableDRMadal::~CollectableDRMadal(CollectableDRMadal *this)

{
  *(undefined ***)this = &PTR_GetClass_0690dae0;
  *(undefined ***)(this + 0x10) = &PTR__CollectableDRMadal_0690dd30;
  Collectable::~Collectable((Collectable *)this);
  return;
}


/* non-virtual thunk to CollectableDRMadal::~CollectableDRMadal() */

void __thiscall CollectableDRMadal::~CollectableDRMadal(CollectableDRMadal *this)

{
  ~CollectableDRMadal(this + -0x10);
  return;
}


/* CollectableDRMadal::~CollectableDRMadal() */

void __thiscall CollectableDRMadal::~CollectableDRMadal(CollectableDRMadal *this)

{
  ~CollectableDRMadal(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CollectableDRMadal::~CollectableDRMadal() */

void __thiscall CollectableDRMadal::~CollectableDRMadal(CollectableDRMadal *this)

{
  ~CollectableDRMadal(this + -0x10);
  return;
}


/* CollectableDRMadal::StaticGetClass() */

long * CollectableDRMadal::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CollectableDRMadal",uVar2,StaticNew);
  return sClass;
}


/* CollectableDRMadal::GetClass() const */

long * CollectableDRMadal::GetClass(void)

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
  (*pcVar3)(plVar1,"CollectableDRMadal",uVar2,StaticNew);
  return sClass;
}


/* CollectableDRMadal::CollectableDRMadal() */

void __thiscall CollectableDRMadal::CollectableDRMadal(CollectableDRMadal *this)

{
  Collectable::Collectable((Collectable *)this);
  *(undefined ***)this = &PTR_GetClass_0690dae0;
  *(undefined ***)(this + 0x10) = &PTR__CollectableDRMadal_0690dd30;
  return;
}


/* CollectableDRMadal::StaticNew() */

CollectableDRMadal * CollectableDRMadal::StaticNew(void)

{
  CollectableDRMadal *this;
  
  this = ::operator_new(0x1f0);
  CollectableDRMadal(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableDRMadal::onUpdate() */

void __thiscall CollectableDRMadal::onUpdate(CollectableDRMadal *this)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Collectable::onUpdate((Collectable *)this);
  fVar2 = (float)FUN_0490bf7c(*(undefined4 *)(this + 0x16c));
  fVar3 = (float)PVZ_EOT();
  if (fVar2 < fVar3) {
    fVar2 = (float)PVZ_T();
    fVar3 = (float)FUN_0490bf7c(*(undefined4 *)(this + 0x16c));
    TwinsAssistPerson::GetPopAnimRig();
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    fVar4 = *(float *)(lVar1 + 0x20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (fVar4 - (fVar2 - fVar3) <= 0.5) {
      Collectable::TryToCollect((Collectable *)this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

