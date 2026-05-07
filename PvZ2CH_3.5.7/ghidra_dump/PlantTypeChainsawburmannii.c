// Class: PlantTypeChainsawburmannii


/* PlantTypeChainsawburmannii::StaticGetClass() */

long * PlantTypeChainsawburmannii::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantTypeChainsawburmannii",uVar2,StaticNew);
  return sClass;
}


/* PlantTypeChainsawburmannii::GetClass() const */

long * PlantTypeChainsawburmannii::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantTypeChainsawburmannii",uVar2,StaticNew);
  return sClass;
}


/* PlantTypeChainsawburmannii::PlantTypeChainsawburmannii() */

void __thiscall
PlantTypeChainsawburmannii::PlantTypeChainsawburmannii(PlantTypeChainsawburmannii *this)

{
  PlantType::PlantType((PlantType *)this);
  *(undefined ***)this = &PTR_GetClass_067f14e0;
  return;
}


/* PlantTypeChainsawburmannii::StaticNew() */

PlantTypeChainsawburmannii * PlantTypeChainsawburmannii::StaticNew(void)

{
  PlantTypeChainsawburmannii *this;
  
  this = ::operator_new(0x138);
  PlantTypeChainsawburmannii(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTypeChainsawburmannii::CanPlantOnPlant(Plant*) const */

void __thiscall
PlantTypeChainsawburmannii::CanPlantOnPlant(PlantTypeChainsawburmannii *this,Plant *param_1)

{
  char cVar1;
  undefined1 uVar2;
  PlantTypeChainsawburmannii *pPVar3;
  PlantChainsawburmannii *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Plant *)0x0) {
    Plant::GetType();
    pPVar3 = (PlantTypeChainsawburmannii *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    if (this == pPVar3) {
      nop();
      cVar1 = PlantChainsawburmannii::CanUpgrade(this_00);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      if (cVar1 != '\0') {
        uVar2 = 0;
        if (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) {
          uVar2 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0));
        }
        goto LAB_0415bd88;
      }
    }
    else {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    }
  }
  uVar2 = 0;
LAB_0415bd88:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* PlantTypeChainsawburmannii::~PlantTypeChainsawburmannii() */

void __thiscall
PlantTypeChainsawburmannii::~PlantTypeChainsawburmannii(PlantTypeChainsawburmannii *this)

{
  *(undefined ***)this = &PTR_GetClass_067f14e0;
  PlantType::~PlantType((PlantType *)this);
  return;
}


/* PlantTypeChainsawburmannii::~PlantTypeChainsawburmannii() */

void __thiscall
PlantTypeChainsawburmannii::~PlantTypeChainsawburmannii(PlantTypeChainsawburmannii *this)

{
  ~PlantTypeChainsawburmannii(this);
  AK::FreeHook(this);
  return;
}

