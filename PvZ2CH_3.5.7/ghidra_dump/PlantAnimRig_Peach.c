// Class: PlantAnimRig_Peach


/* PlantAnimRig_Peach::~PlantAnimRig_Peach() */

void __thiscall PlantAnimRig_Peach::~PlantAnimRig_Peach(PlantAnimRig_Peach *this)

{
  *(undefined ***)this = &PTR_GetClass_0679f5e0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Peach_0679f850;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Peach::~PlantAnimRig_Peach() */

void __thiscall PlantAnimRig_Peach::~PlantAnimRig_Peach(PlantAnimRig_Peach *this)

{
  ~PlantAnimRig_Peach(this + -0x10);
  return;
}


/* PlantAnimRig_Peach::~PlantAnimRig_Peach() */

void __thiscall PlantAnimRig_Peach::~PlantAnimRig_Peach(PlantAnimRig_Peach *this)

{
  ~PlantAnimRig_Peach(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Peach::~PlantAnimRig_Peach() */

void __thiscall PlantAnimRig_Peach::~PlantAnimRig_Peach(PlantAnimRig_Peach *this)

{
  ~PlantAnimRig_Peach(this + -0x10);
  return;
}


/* PlantAnimRig_Peach::StaticGetClass() */

long * PlantAnimRig_Peach::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Peach",uVar2,StaticNew);
  return sClass;
}


/* PlantAnimRig_Peach::GetClass() const */

long * PlantAnimRig_Peach::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Peach",uVar2,StaticNew);
  return sClass;
}


/* PlantAnimRig_Peach::PlantAnimRig_Peach() */

void __thiscall PlantAnimRig_Peach::PlantAnimRig_Peach(PlantAnimRig_Peach *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0679f5e0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Peach_0679f850;
  return;
}


/* PlantAnimRig_Peach::StaticNew() */

PlantAnimRig_Peach * PlantAnimRig_Peach::StaticNew(void)

{
  PlantAnimRig_Peach *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_Peach(this);
  return this;
}


/* PlantAnimRig_Peach::onAnimStopped() */

void __thiscall PlantAnimRig_Peach::onAnimStopped(PlantAnimRig_Peach *this)

{
  if (*(int *)(this + 0x218) != 0xe) {
    PlantAnimRig::onAnimStopped((PlantAnimRig *)this);
    return;
  }
  (**(code **)(*(long *)this + 0x118))();
  return;
}

