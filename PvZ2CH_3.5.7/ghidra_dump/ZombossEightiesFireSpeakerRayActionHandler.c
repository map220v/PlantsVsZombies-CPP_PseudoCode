// Class: ZombossEightiesFireSpeakerRayActionHandler


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossEightiesFireSpeakerRayActionHandler::StaticClassInit() */

void ZombossEightiesFireSpeakerRayActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossEightiesFireSpeakerRayActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_047ef7d8,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossEightiesFireSpeakerRayActionHandler::StaticGetClass() */

long * ZombossEightiesFireSpeakerRayActionHandler::StaticGetClass(void)

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
  uVar2 = ZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossEightiesFireSpeakerRayActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossEightiesFireSpeakerRayActionHandler::GetClass() const */

long * ZombossEightiesFireSpeakerRayActionHandler::GetClass(void)

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
  uVar2 = ZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossEightiesFireSpeakerRayActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossEightiesFireSpeakerRayActionHandler::ZombossEightiesFireSpeakerRayActionHandler() */

void __thiscall
ZombossEightiesFireSpeakerRayActionHandler::ZombossEightiesFireSpeakerRayActionHandler
          (ZombossEightiesFireSpeakerRayActionHandler *this)

{
  undefined4 uVar1;
  
  ZombieActionHandler::ZombieActionHandler((ZombieActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_068f6910;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x24) = uVar1;
  return;
}


/* ZombossEightiesFireSpeakerRayActionHandler::StaticNew() */

ZombossEightiesFireSpeakerRayActionHandler *
ZombossEightiesFireSpeakerRayActionHandler::StaticNew(void)

{
  ZombossEightiesFireSpeakerRayActionHandler *this;
  
  this = ::operator_new(0x28);
  ZombossEightiesFireSpeakerRayActionHandler(this);
  return this;
}


/* ZombossEightiesFireSpeakerRayActionHandler::~ZombossEightiesFireSpeakerRayActionHandler() */

void __thiscall
ZombossEightiesFireSpeakerRayActionHandler::~ZombossEightiesFireSpeakerRayActionHandler
          (ZombossEightiesFireSpeakerRayActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_068f6910;
  ZombieActionHandler::~ZombieActionHandler((ZombieActionHandler *)this);
  return;
}


/* ZombossEightiesFireSpeakerRayActionHandler::~ZombossEightiesFireSpeakerRayActionHandler() */

void __thiscall
ZombossEightiesFireSpeakerRayActionHandler::~ZombossEightiesFireSpeakerRayActionHandler
          (ZombossEightiesFireSpeakerRayActionHandler *this)

{
  ~ZombossEightiesFireSpeakerRayActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossEightiesFireSpeakerRayActionHandler::spawnSpeakerAt(int, int) */

void __thiscall
ZombossEightiesFireSpeakerRayActionHandler::spawnSpeakerAt
          (ZombossEightiesFireSpeakerRayActionHandler *this,int param_1,int param_2)

{
  PlantGroup *pPVar1;
  undefined8 extraout_x0;
  Board *this_00;
  Point aPStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_18,param_1,param_2);
  pPVar1 = (PlantGroup *)Board::GetPlantGroupAt(*(Point **)(gLawnApp + 0x9f0));
  if (pPVar1 != (PlantGroup *)0x0) {
    PlantGroup::KillPlants(pPVar1,2,0);
  }
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"speaker_zomboss");
  Board::AddGridItem(this_00,asStack_10,param_1,param_2,1);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(extraout_x0);
}


/* ZombossEightiesFireSpeakerRayActionHandler::onUpdateAction() */

void __thiscall
ZombossEightiesFireSpeakerRayActionHandler::onUpdateAction
          (ZombossEightiesFireSpeakerRayActionHandler *this)

{
  float fVar1;
  undefined4 uVar2;
  
  fVar1 = (float)PVZ_T();
  if (fVar1 < *(float *)(this + 0x24)) {
    return;
  }
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x24) = uVar2;
  ZombieActionHandler::markActionDone((ZombieActionHandler *)this);
  return;
}


/* ZombossEightiesFireSpeakerRayActionHandler::onStartAction() */

void __thiscall
ZombossEightiesFireSpeakerRayActionHandler::onStartAction
          (ZombossEightiesFireSpeakerRayActionHandler *this)

{
  int iVar1;
  GridItemSpeakerZomboss *this_00;
  ZombossHydraSprayActionDefinition *pZVar2;
  float fVar3;
  
  iVar1 = BoardConstants::NUMBER_OF_ROWS();
  iVar1 = RandRangeInt(0,iVar1 + -1);
  this_00 = (GridItemSpeakerZomboss *)FUN_047f15f0();
  if (this_00 == (GridItemSpeakerZomboss *)0x0) {
    this_00 = (GridItemSpeakerZomboss *)spawnSpeakerAt(this,6,iVar1);
  }
  GridItemSpeakerZomboss::ZombossLaneClear(this_00);
  fVar3 = (float)PVZ_T();
  pZVar2 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  *(float *)(this + 0x24) = fVar3 + *(float *)(pZVar2 + 0x38);
  ZombieActionHandler::markActionDone((ZombieActionHandler *)this);
  return;
}

