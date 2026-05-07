// Class: PowerupVaseBreakerColor


/* PowerupVaseBreakerColor::canActivateOnVase(GridItemVase*) */

byte __thiscall
PowerupVaseBreakerColor::canActivateOnVase(PowerupVaseBreakerColor *this,GridItemVase *param_1)

{
  char cVar1;
  byte bVar2;
  
  if (((param_1 != (GridItemVase *)0x0) &&
      (cVar1 = GridItemVase::DoColorByContents(param_1), cVar1 == '\0')) &&
     (cVar1 = GridItemVase::AreContentsRevealed(param_1), cVar1 == '\0')) {
    bVar2 = GridItemVase::IsBreaking(param_1);
    return bVar2 ^ 1;
  }
  return 0;
}


/* PowerupVaseBreakerColor::activateOnVase(GridItemVase*) */

void __thiscall
PowerupVaseBreakerColor::activateOnVase(PowerupVaseBreakerColor *this,GridItemVase *param_1)

{
  GridItemVase::SetColorByContents(param_1,true);
  return;
}


/* PowerupVaseBreakerColor::~PowerupVaseBreakerColor() */

void __thiscall PowerupVaseBreakerColor::~PowerupVaseBreakerColor(PowerupVaseBreakerColor *this)

{
  *(undefined ***)this = &PTR_GetClass_06916dd0;
  PowerupVaseSelector::~PowerupVaseSelector((PowerupVaseSelector *)this);
  return;
}


/* PowerupVaseBreakerColor::~PowerupVaseBreakerColor() */

void __thiscall PowerupVaseBreakerColor::~PowerupVaseBreakerColor(PowerupVaseBreakerColor *this)

{
  ~PowerupVaseBreakerColor(this);
  AK::FreeHook(this);
  return;
}


/* PowerupVaseBreakerColor::StaticGetClass() */

long * PowerupVaseBreakerColor::StaticGetClass(void)

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
  uVar2 = PowerupVaseSelector::StaticGetClass();
  (*pcVar3)(plVar1,"PowerupVaseBreakerColor",uVar2,StaticNew);
  return sClass;
}


/* PowerupVaseBreakerColor::GetClass() const */

long * PowerupVaseBreakerColor::GetClass(void)

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
  uVar2 = PowerupVaseSelector::StaticGetClass();
  (*pcVar3)(plVar1,"PowerupVaseBreakerColor",uVar2,StaticNew);
  return sClass;
}


/* PowerupVaseBreakerColor::PowerupVaseBreakerColor() */

void __thiscall PowerupVaseBreakerColor::PowerupVaseBreakerColor(PowerupVaseBreakerColor *this)

{
  PowerupVaseSelector::PowerupVaseSelector((PowerupVaseSelector *)this);
  *(undefined ***)this = &PTR_GetClass_06916dd0;
  return;
}


/* PowerupVaseBreakerColor::StaticNew() */

PowerupVaseBreakerColor * PowerupVaseBreakerColor::StaticNew(void)

{
  PowerupVaseBreakerColor *this;
  
  this = ::operator_new(0x108);
  PowerupVaseBreakerColor(this);
  return this;
}

