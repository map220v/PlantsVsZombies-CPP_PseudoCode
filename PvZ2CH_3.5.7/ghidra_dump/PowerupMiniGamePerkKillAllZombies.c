// Class: PowerupMiniGamePerkKillAllZombies


/* PowerupMiniGamePerkKillAllZombies::~PowerupMiniGamePerkKillAllZombies() */

void __thiscall
PowerupMiniGamePerkKillAllZombies::~PowerupMiniGamePerkKillAllZombies
          (PowerupMiniGamePerkKillAllZombies *this)

{
  *(undefined ***)this = &PTR_GetClass_066b0da0;
  PowerupMiniGamePerkSelector::~PowerupMiniGamePerkSelector((PowerupMiniGamePerkSelector *)this);
  return;
}


/* PowerupMiniGamePerkKillAllZombies::~PowerupMiniGamePerkKillAllZombies() */

void __thiscall
PowerupMiniGamePerkKillAllZombies::~PowerupMiniGamePerkKillAllZombies
          (PowerupMiniGamePerkKillAllZombies *this)

{
  ~PowerupMiniGamePerkKillAllZombies(this);
  AK::FreeHook(this);
  return;
}


/* PowerupMiniGamePerkKillAllZombies::StaticGetClass() */

long * PowerupMiniGamePerkKillAllZombies::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PowerupMiniGamePerkKillAllZombies",uVar2,StaticNew);
  return sClass;
}


/* PowerupMiniGamePerkKillAllZombies::GetClass() const */

long * PowerupMiniGamePerkKillAllZombies::GetClass(void)

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
  (*pcVar3)(plVar1,"PowerupMiniGamePerkKillAllZombies",uVar2,StaticNew);
  return sClass;
}


/* PowerupMiniGamePerkKillAllZombies::PowerupMiniGamePerkKillAllZombies() */

void __thiscall
PowerupMiniGamePerkKillAllZombies::PowerupMiniGamePerkKillAllZombies
          (PowerupMiniGamePerkKillAllZombies *this)

{
  PowerupMiniGamePerkSelector::PowerupMiniGamePerkSelector((PowerupMiniGamePerkSelector *)this);
  *(undefined ***)this = &PTR_GetClass_066b0da0;
  return;
}


/* PowerupMiniGamePerkKillAllZombies::StaticNew() */

PowerupMiniGamePerkKillAllZombies * PowerupMiniGamePerkKillAllZombies::StaticNew(void)

{
  PowerupMiniGamePerkKillAllZombies *this;
  
  this = ::operator_new(0x108);
  PowerupMiniGamePerkKillAllZombies(this);
  return this;
}

