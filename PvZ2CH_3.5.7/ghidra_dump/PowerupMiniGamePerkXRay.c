// Class: PowerupMiniGamePerkXRay


/* PowerupMiniGamePerkXRay::~PowerupMiniGamePerkXRay() */

void __thiscall PowerupMiniGamePerkXRay::~PowerupMiniGamePerkXRay(PowerupMiniGamePerkXRay *this)

{
  *(undefined ***)this = &PTR_GetClass_066b0eb0;
  PowerupMiniGamePerkSelector::~PowerupMiniGamePerkSelector((PowerupMiniGamePerkSelector *)this);
  return;
}


/* PowerupMiniGamePerkXRay::~PowerupMiniGamePerkXRay() */

void __thiscall PowerupMiniGamePerkXRay::~PowerupMiniGamePerkXRay(PowerupMiniGamePerkXRay *this)

{
  ~PowerupMiniGamePerkXRay(this);
  AK::FreeHook(this);
  return;
}


/* PowerupMiniGamePerkXRay::StaticGetClass() */

long * PowerupMiniGamePerkXRay::StaticGetClass(void)

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
  uVar2 = PowerupMiniGamePerkSelector::StaticGetClass();
  (*pcVar3)(plVar1,"PowerupMiniGamePerkXRay",uVar2,StaticNew);
  return sClass;
}


/* PowerupMiniGamePerkXRay::GetClass() const */

long * PowerupMiniGamePerkXRay::GetClass(void)

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
  uVar2 = PowerupMiniGamePerkSelector::StaticGetClass();
  (*pcVar3)(plVar1,"PowerupMiniGamePerkXRay",uVar2,StaticNew);
  return sClass;
}


/* PowerupMiniGamePerkXRay::PowerupMiniGamePerkXRay() */

void __thiscall PowerupMiniGamePerkXRay::PowerupMiniGamePerkXRay(PowerupMiniGamePerkXRay *this)

{
  PowerupMiniGamePerkSelector::PowerupMiniGamePerkSelector((PowerupMiniGamePerkSelector *)this);
  *(undefined ***)this = &PTR_GetClass_066b0eb0;
  return;
}


/* PowerupMiniGamePerkXRay::StaticNew() */

PowerupMiniGamePerkXRay * PowerupMiniGamePerkXRay::StaticNew(void)

{
  PowerupMiniGamePerkXRay *this;
  
  this = ::operator_new(0x108);
  PowerupMiniGamePerkXRay(this);
  return this;
}

