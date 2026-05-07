// Class: PowerupVaseBreakerReveal


/* PowerupVaseBreakerReveal::onEnterState_Activated(PowerupState) */

void PowerupVaseBreakerReveal::onEnterState_Activated(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_MiniGame_VaseBreak_TapReveal");
  return;
}


/* PowerupVaseBreakerReveal::canActivateOnVase(GridItemVase*) */

byte __thiscall
PowerupVaseBreakerReveal::canActivateOnVase(PowerupVaseBreakerReveal *this,GridItemVase *param_1)

{
  char cVar1;
  byte bVar2;
  
  if ((param_1 != (GridItemVase *)0x0) &&
     (cVar1 = GridItemVase::AreContentsRevealed(param_1), cVar1 == '\0')) {
    bVar2 = GridItemVase::IsBreaking(param_1);
    return bVar2 ^ 1;
  }
  return 0;
}


/* PowerupVaseBreakerReveal::activateOnVase(GridItemVase*) */

void __thiscall
PowerupVaseBreakerReveal::activateOnVase(PowerupVaseBreakerReveal *this,GridItemVase *param_1)

{
  GridItemVase::SetContentsRevealed(param_1,true);
  return;
}


/* PowerupVaseBreakerReveal::~PowerupVaseBreakerReveal() */

void __thiscall PowerupVaseBreakerReveal::~PowerupVaseBreakerReveal(PowerupVaseBreakerReveal *this)

{
  *(undefined ***)this = &PTR_GetClass_06916cb0;
  PowerupVaseSelector::~PowerupVaseSelector((PowerupVaseSelector *)this);
  return;
}


/* PowerupVaseBreakerReveal::~PowerupVaseBreakerReveal() */

void __thiscall PowerupVaseBreakerReveal::~PowerupVaseBreakerReveal(PowerupVaseBreakerReveal *this)

{
  ~PowerupVaseBreakerReveal(this);
  AK::FreeHook(this);
  return;
}


/* PowerupVaseBreakerReveal::StaticGetClass() */

long * PowerupVaseBreakerReveal::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PowerupVaseBreakerReveal",uVar2,StaticNew);
  return sClass;
}


/* PowerupVaseBreakerReveal::GetClass() const */

long * PowerupVaseBreakerReveal::GetClass(void)

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
  (*pcVar3)(plVar1,"PowerupVaseBreakerReveal",uVar2,StaticNew);
  return sClass;
}


/* PowerupVaseBreakerReveal::PowerupVaseBreakerReveal() */

void __thiscall PowerupVaseBreakerReveal::PowerupVaseBreakerReveal(PowerupVaseBreakerReveal *this)

{
  PowerupVaseSelector::PowerupVaseSelector((PowerupVaseSelector *)this);
  *(undefined ***)this = &PTR_GetClass_06916cb0;
  return;
}


/* PowerupVaseBreakerReveal::StaticNew() */

PowerupVaseBreakerReveal * PowerupVaseBreakerReveal::StaticNew(void)

{
  PowerupVaseBreakerReveal *this;
  
  this = ::operator_new(0x108);
  PowerupVaseBreakerReveal(this);
  return this;
}

