// Class: PowerupMiniGamePerkTimeBack


/* PowerupMiniGamePerkTimeBack::~PowerupMiniGamePerkTimeBack() */

void __thiscall
PowerupMiniGamePerkTimeBack::~PowerupMiniGamePerkTimeBack(PowerupMiniGamePerkTimeBack *this)

{
  *(undefined ***)this = &PTR_GetClass_066b11e0;
  PowerupMiniGamePerkSelector::~PowerupMiniGamePerkSelector((PowerupMiniGamePerkSelector *)this);
  return;
}


/* PowerupMiniGamePerkTimeBack::~PowerupMiniGamePerkTimeBack() */

void __thiscall
PowerupMiniGamePerkTimeBack::~PowerupMiniGamePerkTimeBack(PowerupMiniGamePerkTimeBack *this)

{
  ~PowerupMiniGamePerkTimeBack(this);
  AK::FreeHook(this);
  return;
}


/* PowerupMiniGamePerkTimeBack::StaticGetClass() */

long * PowerupMiniGamePerkTimeBack::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PowerupMiniGamePerkTimeBack",uVar2,StaticNew);
  return sClass;
}


/* PowerupMiniGamePerkTimeBack::GetClass() const */

long * PowerupMiniGamePerkTimeBack::GetClass(void)

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
  (*pcVar3)(plVar1,"PowerupMiniGamePerkTimeBack",uVar2,StaticNew);
  return sClass;
}


/* PowerupMiniGamePerkTimeBack::PowerupMiniGamePerkTimeBack() */

void __thiscall
PowerupMiniGamePerkTimeBack::PowerupMiniGamePerkTimeBack(PowerupMiniGamePerkTimeBack *this)

{
  PowerupMiniGamePerkSelector::PowerupMiniGamePerkSelector((PowerupMiniGamePerkSelector *)this);
  *(undefined ***)this = &PTR_GetClass_066b11e0;
  return;
}


/* PowerupMiniGamePerkTimeBack::StaticNew() */

PowerupMiniGamePerkTimeBack * PowerupMiniGamePerkTimeBack::StaticNew(void)

{
  PowerupMiniGamePerkTimeBack *this;
  
  this = ::operator_new(0x108);
  PowerupMiniGamePerkTimeBack(this);
  return this;
}

