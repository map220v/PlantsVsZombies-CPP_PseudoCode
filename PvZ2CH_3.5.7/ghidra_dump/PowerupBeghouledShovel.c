// Class: PowerupBeghouledShovel


/* PowerupBeghouledShovel::~PowerupBeghouledShovel() */

void __thiscall PowerupBeghouledShovel::~PowerupBeghouledShovel(PowerupBeghouledShovel *this)

{
  *(undefined ***)this = &PTR_GetClass_06919ec0;
  PowerupTouchBased::~PowerupTouchBased((PowerupTouchBased *)this);
  return;
}


/* PowerupBeghouledShovel::~PowerupBeghouledShovel() */

void __thiscall PowerupBeghouledShovel::~PowerupBeghouledShovel(PowerupBeghouledShovel *this)

{
  ~PowerupBeghouledShovel(this);
  AK::FreeHook(this);
  return;
}


/* PowerupBeghouledShovel::PowerupBeghouledShovel() */

void __thiscall PowerupBeghouledShovel::PowerupBeghouledShovel(PowerupBeghouledShovel *this)

{
  PowerupTouchBased::PowerupTouchBased((PowerupTouchBased *)this);
  *(undefined ***)this = &PTR_GetClass_06919ec0;
  return;
}


/* PowerupBeghouledShovel::StaticNew() */

PowerupBeghouledShovel * PowerupBeghouledShovel::StaticNew(void)

{
  PowerupBeghouledShovel *this;
  
  this = ::operator_new(0x108);
  PowerupBeghouledShovel(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupBeghouledShovel::StaticClassInit() */

void PowerupBeghouledShovel::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"PowerupBeghouledShovel");
    (*pcVar2)(plVar1,asStack_10,FUN_04993db4,0x108,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerupBeghouledShovel::StaticGetClass() */

long * PowerupBeghouledShovel::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PowerupBeghouledShovel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PowerupBeghouledShovel::GetClass() const */

long * PowerupBeghouledShovel::GetClass(void)

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
  (*pcVar3)(plVar1,"PowerupBeghouledShovel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupBeghouledShovel::onTouchEnd(Sexy::Touch const&) */

void __thiscall PowerupBeghouledShovel::onTouchEnd(PowerupBeghouledShovel *this,Touch *param_1)

{
  int iVar1;
  int iVar2;
  BoardTransforms *this_00;
  long lVar3;
  long lVar4;
  PowerupManager *this_01;
  Board *this_02;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  int local_18;
  int local_14;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point((Point *)&local_28,(TPoint *)(param_1 + 0x10));
  iVar1 = FUN_0499378c(local_28);
  iVar2 = FUN_0499378c(local_24);
  this_00 = (BoardTransforms *)
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_20,(float)iVar1,(float)iVar2);
  BoardTransforms::BoardSpaceToGrid(this_00,local_20,local_1c);
  iVar2 = local_14;
  iVar1 = local_18;
  this_02 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"");
  lVar3 = Board::GetPlantAt(this_02,iVar1,iVar2,asStack_10);
  std::string::~string(asStack_10);
  nop();
  lVar4 = FUN_04994208(local_18,local_14);
  if ((lVar4 == 0) && (lVar3 == 0)) {
    this_01 = (PowerupManager *)Board::GetPowerupManager(*(Board **)(gLawnApp + 0x9f0));
    PowerupManager::CancelActivePowerup(this_01);
  }
  else {
    MessageRouter::Broadcast<int,int,int,int>
              ((MessageRouter *)gMessageRouter,Message::BeghouledClearGridLocation,local_18,local_14
              );
    BasePowerup::Activate((BasePowerup *)this);
    BasePowerup::Deactivate((BasePowerup *)this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

