// Class: PowerupVaseSelector


/* PowerupVaseSelector::~PowerupVaseSelector() */

void __thiscall PowerupVaseSelector::~PowerupVaseSelector(PowerupVaseSelector *this)

{
  *(undefined ***)this = &PTR_GetClass_06916ba0;
  PowerupTouchBased::~PowerupTouchBased((PowerupTouchBased *)this);
  return;
}


/* PowerupVaseSelector::~PowerupVaseSelector() */

void __thiscall PowerupVaseSelector::~PowerupVaseSelector(PowerupVaseSelector *this)

{
  ~PowerupVaseSelector(this);
  AK::FreeHook(this);
  return;
}


/* PowerupVaseSelector::StaticGetClass() */

long * PowerupVaseSelector::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PowerupVaseSelector",uVar2,StaticNew);
  return sClass;
}


/* PowerupVaseSelector::GetClass() const */

long * PowerupVaseSelector::GetClass(void)

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
  (*pcVar3)(plVar1,"PowerupVaseSelector",uVar2,StaticNew);
  return sClass;
}


/* PowerupVaseSelector::PowerupVaseSelector() */

void __thiscall PowerupVaseSelector::PowerupVaseSelector(PowerupVaseSelector *this)

{
  PowerupTouchBased::PowerupTouchBased((PowerupTouchBased *)this);
  *(undefined ***)this = &PTR_GetClass_06916ba0;
  return;
}


/* PowerupVaseSelector::StaticNew() */

PowerupVaseSelector * PowerupVaseSelector::StaticNew(void)

{
  PowerupVaseSelector *this;
  
  this = ::operator_new(0x108);
  PowerupVaseSelector(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupVaseSelector::Draw(Sexy::Graphics*) */

void __thiscall PowerupVaseSelector::Draw(PowerupVaseSelector *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  BoardTransforms *this_00;
  float local_20;
  float local_1c;
  Point aPStack_18 [8];
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar4 = (long *)PlayerInfo::GetPlantAvatarInfo((PlayerInfo *)this);
  if (*plVar4 != 0) {
    lVar5 = DailyAchievementInfo::getSpecificPlantPool((DailyAchievementInfo *)this);
    iVar2 = FUN_0496ef74(*(undefined4 *)(lVar5 + 0x10));
    iVar3 = FUN_0496ef74(*(undefined4 *)(lVar5 + 0x14));
    this_00 = (BoardTransforms *)
              Sexy::FastCurve::SetOutRange((FastCurve *)&local_20,(float)iVar2,(float)iVar3);
    BoardTransforms::BoardSpaceToGrid(this_00,local_20,local_1c);
    lVar5 = PowerupVaseBreakerMove::getFirstVaseAt((PowerupVaseBreakerMove *)this,aPStack_18);
    if ((lVar5 != 0) && (cVar1 = (**(code **)(*(long *)this + 0xf0))(this,lVar5), cVar1 != '\0')) {
      GridItem::GetGridLocation();
      Board::DrawCelHighlight(*(Board **)(gLawnApp + 0x9f0),param_1,local_10,local_c);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupVaseSelector::onTouchEnd(Sexy::Touch const&) */

void __thiscall PowerupVaseSelector::onTouchEnd(PowerupVaseSelector *this,Touch *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  BoardTransforms *this_00;
  undefined8 uVar4;
  PowerupManager *this_01;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point((Point *)&local_20,(TPoint *)(param_1 + 0x10));
  iVar2 = FUN_0496ef74(local_20);
  iVar3 = FUN_0496ef74(local_1c);
  this_00 = (BoardTransforms *)
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,(float)iVar2,(float)iVar3);
  BoardTransforms::BoardSpaceToGrid(this_00,local_18,local_14);
  uVar4 = PowerupVaseBreakerMove::getFirstVaseAt((PowerupVaseBreakerMove *)this,aPStack_10);
  cVar1 = (**(code **)(*(long *)this + 0xf0))(this,uVar4);
  if (cVar1 == '\0') {
    this_01 = (PowerupManager *)Board::GetPowerupManager(*(Board **)(gLawnApp + 0x9f0));
    PowerupManager::CancelActivePowerup(this_01);
  }
  else {
    cVar1 = BasePowerup::isInState((BasePowerup *)this,2);
    if (cVar1 == '\0') {
      BasePowerup::Activate((BasePowerup *)this);
    }
    (**(code **)(*(long *)this + 0xf8))(this,uVar4);
    BasePowerup::DecrementTimeByUseCost((BasePowerup *)this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

