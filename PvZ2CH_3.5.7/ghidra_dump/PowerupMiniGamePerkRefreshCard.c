// Class: PowerupMiniGamePerkRefreshCard


/* PowerupMiniGamePerkRefreshCard::~PowerupMiniGamePerkRefreshCard() */

void __thiscall
PowerupMiniGamePerkRefreshCard::~PowerupMiniGamePerkRefreshCard
          (PowerupMiniGamePerkRefreshCard *this)

{
  *(undefined ***)this = &PTR_GetClass_066b10d0;
  PowerupMiniGamePerkSelector::~PowerupMiniGamePerkSelector((PowerupMiniGamePerkSelector *)this);
  return;
}


/* PowerupMiniGamePerkRefreshCard::~PowerupMiniGamePerkRefreshCard() */

void __thiscall
PowerupMiniGamePerkRefreshCard::~PowerupMiniGamePerkRefreshCard
          (PowerupMiniGamePerkRefreshCard *this)

{
  ~PowerupMiniGamePerkRefreshCard(this);
  AK::FreeHook(this);
  return;
}


/* PowerupMiniGamePerkRefreshCard::StaticGetClass() */

long * PowerupMiniGamePerkRefreshCard::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PowerupMiniGamePerkRefreshCard",uVar2,StaticNew);
  return sClass;
}


/* PowerupMiniGamePerkRefreshCard::GetClass() const */

long * PowerupMiniGamePerkRefreshCard::GetClass(void)

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
  (*pcVar3)(plVar1,"PowerupMiniGamePerkRefreshCard",uVar2,StaticNew);
  return sClass;
}


/* PowerupMiniGamePerkRefreshCard::PowerupMiniGamePerkRefreshCard() */

void __thiscall
PowerupMiniGamePerkRefreshCard::PowerupMiniGamePerkRefreshCard(PowerupMiniGamePerkRefreshCard *this)

{
  PowerupMiniGamePerkSelector::PowerupMiniGamePerkSelector((PowerupMiniGamePerkSelector *)this);
  *(undefined ***)this = &PTR_GetClass_066b10d0;
  return;
}


/* PowerupMiniGamePerkRefreshCard::StaticNew() */

PowerupMiniGamePerkRefreshCard * PowerupMiniGamePerkRefreshCard::StaticNew(void)

{
  PowerupMiniGamePerkRefreshCard *this;
  
  this = ::operator_new(0x108);
  PowerupMiniGamePerkRefreshCard(this);
  return this;
}

