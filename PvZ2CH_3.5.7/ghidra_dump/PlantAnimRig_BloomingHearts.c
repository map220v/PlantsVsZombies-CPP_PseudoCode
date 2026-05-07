// Class: PlantAnimRig_BloomingHearts


/* PlantAnimRig_BloomingHearts::~PlantAnimRig_BloomingHearts() */

void __thiscall
PlantAnimRig_BloomingHearts::~PlantAnimRig_BloomingHearts(PlantAnimRig_BloomingHearts *this)

{
  *(undefined ***)this = &PTR_GetClass_06727350;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_BloomingHearts_067275b8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_BloomingHearts::~PlantAnimRig_BloomingHearts() */

void __thiscall
PlantAnimRig_BloomingHearts::~PlantAnimRig_BloomingHearts(PlantAnimRig_BloomingHearts *this)

{
  ~PlantAnimRig_BloomingHearts(this + -0x10);
  return;
}


/* PlantAnimRig_BloomingHearts::~PlantAnimRig_BloomingHearts() */

void __thiscall
PlantAnimRig_BloomingHearts::~PlantAnimRig_BloomingHearts(PlantAnimRig_BloomingHearts *this)

{
  ~PlantAnimRig_BloomingHearts(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_BloomingHearts::~PlantAnimRig_BloomingHearts() */

void __thiscall
PlantAnimRig_BloomingHearts::~PlantAnimRig_BloomingHearts(PlantAnimRig_BloomingHearts *this)

{
  ~PlantAnimRig_BloomingHearts(this + -0x10);
  return;
}


/* PlantAnimRig_BloomingHearts::StaticGetClass() */

long * PlantAnimRig_BloomingHearts::StaticGetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_BloomingHearts",uVar2,StaticNew);
  return sClass;
}


/* PlantAnimRig_BloomingHearts::GetClass() const */

long * PlantAnimRig_BloomingHearts::GetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_BloomingHearts",uVar2,StaticNew);
  return sClass;
}


/* PlantAnimRig_BloomingHearts::PlantAnimRig_BloomingHearts() */

void __thiscall
PlantAnimRig_BloomingHearts::PlantAnimRig_BloomingHearts(PlantAnimRig_BloomingHearts *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06727350;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_BloomingHearts_067275b8;
  return;
}


/* PlantAnimRig_BloomingHearts::StaticNew() */

PlantAnimRig_BloomingHearts * PlantAnimRig_BloomingHearts::StaticNew(void)

{
  PlantAnimRig_BloomingHearts *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_BloomingHearts(this);
  return this;
}

