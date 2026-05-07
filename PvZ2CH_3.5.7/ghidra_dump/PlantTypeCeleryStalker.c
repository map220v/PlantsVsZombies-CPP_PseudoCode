// Class: PlantTypeCeleryStalker


/* PlantTypeCeleryStalker::StaticGetClass() */

long * PlantTypeCeleryStalker::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantTypeCeleryStalker",uVar2,StaticNew);
  return sClass;
}


/* PlantTypeCeleryStalker::GetClass() const */

long * PlantTypeCeleryStalker::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantTypeCeleryStalker",uVar2,StaticNew);
  return sClass;
}


/* PlantTypeCeleryStalker::PlantTypeCeleryStalker() */

void __thiscall PlantTypeCeleryStalker::PlantTypeCeleryStalker(PlantTypeCeleryStalker *this)

{
  PlantType::PlantType((PlantType *)this);
  *(undefined ***)this = &PTR_GetClass_067f2270;
  return;
}


/* PlantTypeCeleryStalker::StaticNew() */

PlantTypeCeleryStalker * PlantTypeCeleryStalker::StaticNew(void)

{
  PlantTypeCeleryStalker *this;
  
  this = ::operator_new(0x138);
  PlantTypeCeleryStalker(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTypeCeleryStalker::CanPlantOnPlant(Plant*) const */

void __thiscall PlantTypeCeleryStalker::CanPlantOnPlant(PlantTypeCeleryStalker *this,Plant *param_1)

{
  undefined1 uVar1;
  PlantTypeCeleryStalker *pPVar2;
  PlantCeleryStalker *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (Plant *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    Plant::GetType();
    pPVar2 = (PlantTypeCeleryStalker *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    if (this == pPVar2) {
      nop();
      uVar1 = PlantCeleryStalker::CanUpgrade(this_00);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* PlantTypeCeleryStalker::~PlantTypeCeleryStalker() */

void __thiscall PlantTypeCeleryStalker::~PlantTypeCeleryStalker(PlantTypeCeleryStalker *this)

{
  *(undefined ***)this = &PTR_GetClass_067f2270;
  PlantType::~PlantType((PlantType *)this);
  return;
}


/* PlantTypeCeleryStalker::~PlantTypeCeleryStalker() */

void __thiscall PlantTypeCeleryStalker::~PlantTypeCeleryStalker(PlantTypeCeleryStalker *this)

{
  ~PlantTypeCeleryStalker(this);
  AK::FreeHook(this);
  return;
}

