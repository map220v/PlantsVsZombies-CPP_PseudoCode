// Class: PowerupMiniGamePerkBowling


/* PowerupMiniGamePerkBowling::~PowerupMiniGamePerkBowling() */

void __thiscall
PowerupMiniGamePerkBowling::~PowerupMiniGamePerkBowling(PowerupMiniGamePerkBowling *this)

{
  *(undefined ***)this = &PTR_GetClass_066b0fc0;
  PowerupMiniGamePerkSelector::~PowerupMiniGamePerkSelector((PowerupMiniGamePerkSelector *)this);
  return;
}


/* PowerupMiniGamePerkBowling::~PowerupMiniGamePerkBowling() */

void __thiscall
PowerupMiniGamePerkBowling::~PowerupMiniGamePerkBowling(PowerupMiniGamePerkBowling *this)

{
  ~PowerupMiniGamePerkBowling(this);
  AK::FreeHook(this);
  return;
}


/* PowerupMiniGamePerkBowling::StaticGetClass() */

long * PowerupMiniGamePerkBowling::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PowerupMiniGamePerkBowling",uVar2,StaticNew);
  return sClass;
}


/* PowerupMiniGamePerkBowling::GetClass() const */

long * PowerupMiniGamePerkBowling::GetClass(void)

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
  (*pcVar3)(plVar1,"PowerupMiniGamePerkBowling",uVar2,StaticNew);
  return sClass;
}


/* PowerupMiniGamePerkBowling::PowerupMiniGamePerkBowling() */

void __thiscall
PowerupMiniGamePerkBowling::PowerupMiniGamePerkBowling(PowerupMiniGamePerkBowling *this)

{
  PowerupMiniGamePerkSelector::PowerupMiniGamePerkSelector((PowerupMiniGamePerkSelector *)this);
  *(undefined ***)this = &PTR_GetClass_066b0fc0;
  return;
}


/* PowerupMiniGamePerkBowling::StaticNew() */

PowerupMiniGamePerkBowling * PowerupMiniGamePerkBowling::StaticNew(void)

{
  PowerupMiniGamePerkBowling *this;
  
  this = ::operator_new(0x108);
  PowerupMiniGamePerkBowling(this);
  return this;
}

