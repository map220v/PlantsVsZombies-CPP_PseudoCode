// Class: PlantTypeChardGuard


/* PlantTypeChardGuard::StaticGetClass() */

long * PlantTypeChardGuard::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantTypeChardGuard",uVar2,StaticNew);
  return sClass;
}


/* PlantTypeChardGuard::GetClass() const */

long * PlantTypeChardGuard::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantTypeChardGuard",uVar2,StaticNew);
  return sClass;
}


/* PlantTypeChardGuard::PlantTypeChardGuard() */

void __thiscall PlantTypeChardGuard::PlantTypeChardGuard(PlantTypeChardGuard *this)

{
  PlantType::PlantType((PlantType *)this);
  *(undefined ***)this = &PTR_GetClass_067d5620;
  return;
}


/* PlantTypeChardGuard::StaticNew() */

PlantTypeChardGuard * PlantTypeChardGuard::StaticNew(void)

{
  PlantTypeChardGuard *this;
  
  this = ::operator_new(0x138);
  PlantTypeChardGuard(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTypeChardGuard::CanPlantOnPlant(Plant*) const */

void __thiscall PlantTypeChardGuard::CanPlantOnPlant(PlantTypeChardGuard *this,Plant *param_1)

{
  undefined1 uVar1;
  ResourceInfo *pRVar2;
  PlantChardGuard *this_00;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (Plant *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    Plant::GetType();
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
    if (this == (PlantTypeChardGuard *)pRVar2) {
      nop();
      uVar1 = PlantChardGuard::CanUpgrade(this_00);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* PlantTypeChardGuard::~PlantTypeChardGuard() */

void __thiscall PlantTypeChardGuard::~PlantTypeChardGuard(PlantTypeChardGuard *this)

{
  *(undefined ***)this = &PTR_GetClass_067d5620;
  PlantType::~PlantType((PlantType *)this);
  return;
}


/* PlantTypeChardGuard::~PlantTypeChardGuard() */

void __thiscall PlantTypeChardGuard::~PlantTypeChardGuard(PlantTypeChardGuard *this)

{
  ~PlantTypeChardGuard(this);
  AK::FreeHook(this);
  return;
}

