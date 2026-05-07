// Class: PlantTypePeapod


/* PlantTypePeapod::StaticGetClass() */

long * PlantTypePeapod::StaticGetClass(void)

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
  uVar2 = PlantType::StaticGetClass();
  (*pcVar3)(plVar1,"PlantTypePeapod",uVar2,StaticNew);
  return sClass;
}


/* PlantTypePeapod::GetClass() const */

long * PlantTypePeapod::GetClass(void)

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
  uVar2 = PlantType::StaticGetClass();
  (*pcVar3)(plVar1,"PlantTypePeapod",uVar2,StaticNew);
  return sClass;
}


/* PlantTypePeapod::PlantTypePeapod() */

void __thiscall PlantTypePeapod::PlantTypePeapod(PlantTypePeapod *this)

{
  PlantType::PlantType((PlantType *)this);
  *(undefined ***)this = &PTR_GetClass_067bfc00;
  return;
}


/* PlantTypePeapod::StaticNew() */

PlantTypePeapod * PlantTypePeapod::StaticNew(void)

{
  PlantTypePeapod *this;
  
  this = ::operator_new(0x138);
  PlantTypePeapod(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTypePeapod::CanPlantOnPlant(Plant*) const */

void __thiscall PlantTypePeapod::CanPlantOnPlant(PlantTypePeapod *this,Plant *param_1)

{
  undefined1 uVar1;
  PlantTypePeapod *pPVar2;
  PlantPeapod *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (Plant *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    Plant::GetType();
    pPVar2 = (PlantTypePeapod *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    if (this == pPVar2) {
      nop();
      uVar1 = PlantPeapod::CanUpgrade(this_00);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* PlantTypePeapod::~PlantTypePeapod() */

void __thiscall PlantTypePeapod::~PlantTypePeapod(PlantTypePeapod *this)

{
  *(undefined ***)this = &PTR_GetClass_067bfc00;
  PlantType::~PlantType((PlantType *)this);
  return;
}


/* PlantTypePeapod::~PlantTypePeapod() */

void __thiscall PlantTypePeapod::~PlantTypePeapod(PlantTypePeapod *this)

{
  ~PlantTypePeapod(this);
  AK::FreeHook(this);
  return;
}

