// Class: PlantTypeHollyKnight


/* PlantTypeHollyKnight::StaticGetClass() */

long * PlantTypeHollyKnight::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantTypeHollyKnight",uVar2,StaticNew);
  return sClass;
}


/* PlantTypeHollyKnight::GetClass() const */

long * PlantTypeHollyKnight::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantTypeHollyKnight",uVar2,StaticNew);
  return sClass;
}


/* PlantTypeHollyKnight::PlantTypeHollyKnight() */

void __thiscall PlantTypeHollyKnight::PlantTypeHollyKnight(PlantTypeHollyKnight *this)

{
  PlantType::PlantType((PlantType *)this);
  *(undefined ***)this = &PTR_GetClass_06825cc0;
  return;
}


/* PlantTypeHollyKnight::StaticNew() */

PlantTypeHollyKnight * PlantTypeHollyKnight::StaticNew(void)

{
  PlantTypeHollyKnight *this;
  
  this = ::operator_new(0x138);
  PlantTypeHollyKnight(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTypeHollyKnight::CanPlantOnPlant(Plant*) const */

void __thiscall PlantTypeHollyKnight::CanPlantOnPlant(PlantTypeHollyKnight *this,Plant *param_1)

{
  undefined1 uVar1;
  PlantTypeHollyKnight *pPVar2;
  PlantHollyKnight *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (Plant *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    Plant::GetType();
    pPVar2 = (PlantTypeHollyKnight *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    if (this == pPVar2) {
      nop();
      uVar1 = PlantHollyKnight::CanUpgrade(this_00);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* PlantTypeHollyKnight::~PlantTypeHollyKnight() */

void __thiscall PlantTypeHollyKnight::~PlantTypeHollyKnight(PlantTypeHollyKnight *this)

{
  *(undefined ***)this = &PTR_GetClass_06825cc0;
  PlantType::~PlantType((PlantType *)this);
  return;
}


/* PlantTypeHollyKnight::~PlantTypeHollyKnight() */

void __thiscall PlantTypeHollyKnight::~PlantTypeHollyKnight(PlantTypeHollyKnight *this)

{
  ~PlantTypeHollyKnight(this);
  AK::FreeHook(this);
  return;
}

