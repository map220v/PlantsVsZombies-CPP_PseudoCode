// Class: PowerupMiniGamePerkSelector


/* PowerupMiniGamePerkSelector::updateState_Selected() */

void __thiscall PowerupMiniGamePerkSelector::updateState_Selected(PowerupMiniGamePerkSelector *this)

{
  char cVar1;
  PowerupManager *this_00;
  
  cVar1 = (**(code **)(*(long *)this + 0xf0))();
  if (cVar1 == '\0') {
    this_00 = (PowerupManager *)Board::GetPowerupManager(*(Board **)(gLawnApp + 0x9f0));
    PowerupManager::CancelActivePowerup(this_00);
    return;
  }
  cVar1 = BasePowerup::isInState((BasePowerup *)this,2);
  if (cVar1 != '\0') {
    (**(code **)(*(long *)this + 0xf8))(this);
    return;
  }
  BasePowerup::Activate((BasePowerup *)this);
  (**(code **)(*(long *)this + 0xf8))(this);
  return;
}


/* PowerupMiniGamePerkSelector::~PowerupMiniGamePerkSelector() */

void __thiscall
PowerupMiniGamePerkSelector::~PowerupMiniGamePerkSelector(PowerupMiniGamePerkSelector *this)

{
  *(undefined ***)this = &PTR_GetClass_066b0c90;
  PowerupTouchBased::~PowerupTouchBased((PowerupTouchBased *)this);
  return;
}


/* PowerupMiniGamePerkSelector::~PowerupMiniGamePerkSelector() */

void __thiscall
PowerupMiniGamePerkSelector::~PowerupMiniGamePerkSelector(PowerupMiniGamePerkSelector *this)

{
  ~PowerupMiniGamePerkSelector(this);
  AK::FreeHook(this);
  return;
}


/* PowerupMiniGamePerkSelector::StaticGetClass() */

long * PowerupMiniGamePerkSelector::StaticGetClass(void)

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
  uVar2 = PowerupTouchBased::StaticGetClass();
  (*pcVar3)(plVar1,"PowerupMiniGamePerkSelector",uVar2,StaticNew);
  return sClass;
}


/* PowerupMiniGamePerkSelector::GetClass() const */

long * PowerupMiniGamePerkSelector::GetClass(void)

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
  uVar2 = PowerupTouchBased::StaticGetClass();
  (*pcVar3)(plVar1,"PowerupMiniGamePerkSelector",uVar2,StaticNew);
  return sClass;
}


/* PowerupMiniGamePerkSelector::PowerupMiniGamePerkSelector() */

void __thiscall
PowerupMiniGamePerkSelector::PowerupMiniGamePerkSelector(PowerupMiniGamePerkSelector *this)

{
  PowerupTouchBased::PowerupTouchBased((PowerupTouchBased *)this);
  *(undefined ***)this = &PTR_GetClass_066b0c90;
  return;
}


/* PowerupMiniGamePerkSelector::StaticNew() */

PowerupMiniGamePerkSelector * PowerupMiniGamePerkSelector::StaticNew(void)

{
  PowerupMiniGamePerkSelector *this;
  
  this = ::operator_new(0x108);
  PowerupMiniGamePerkSelector(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupMiniGamePerkSelector::activate() */

void __thiscall PowerupMiniGamePerkSelector::activate(PowerupMiniGamePerkSelector *this)

{
  int iVar1;
  long lVar2;
  NameMapperBase *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = BasePowerup::GetType((BasePowerup *)this);
  FUN_05475ffc(asStack_10,lVar2 + 8,8,0xffffffffffffffff);
  this_00 = (NameMapperBase *)MiniGamePerkMapper::GetInstance();
  iVar1 = NameMapperBase::GetIdForName(this_00,asStack_10);
  MessageRouter::Post<int,int>
            ((MessageRouter *)gMessageRouter,Message::NotifyUseButtonClicked,iVar1);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

