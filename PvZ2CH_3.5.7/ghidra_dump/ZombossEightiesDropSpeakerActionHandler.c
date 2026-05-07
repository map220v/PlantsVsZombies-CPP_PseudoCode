// Class: ZombossEightiesDropSpeakerActionHandler


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossEightiesDropSpeakerActionHandler::StaticClassInit() */

void ZombossEightiesDropSpeakerActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossEightiesDropSpeakerActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_047f068c,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossEightiesDropSpeakerActionHandler::StaticGetClass() */

long * ZombossEightiesDropSpeakerActionHandler::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombossEightiesDropSpeakerActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossEightiesDropSpeakerActionHandler::GetClass() const */

long * ZombossEightiesDropSpeakerActionHandler::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombossEightiesDropSpeakerActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossEightiesDropSpeakerActionHandler::ZombossEightiesDropSpeakerActionHandler() */

void __thiscall
ZombossEightiesDropSpeakerActionHandler::ZombossEightiesDropSpeakerActionHandler
          (ZombossEightiesDropSpeakerActionHandler *this)

{
  undefined4 uVar1;
  
  ZombieActionHandler::ZombieActionHandler((ZombieActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_068f67b0;
  Sexy::Point::Point((Point *)(this + 0x24));
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x2c) = uVar1;
  return;
}


/* ZombossEightiesDropSpeakerActionHandler::StaticNew() */

ZombossEightiesDropSpeakerActionHandler * ZombossEightiesDropSpeakerActionHandler::StaticNew(void)

{
  ZombossEightiesDropSpeakerActionHandler *this;
  
  this = ::operator_new(0x30);
  ZombossEightiesDropSpeakerActionHandler(this);
  return this;
}


/* ZombossEightiesDropSpeakerActionHandler::~ZombossEightiesDropSpeakerActionHandler() */

void __thiscall
ZombossEightiesDropSpeakerActionHandler::~ZombossEightiesDropSpeakerActionHandler
          (ZombossEightiesDropSpeakerActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_068f67b0;
  ZombieActionHandler::~ZombieActionHandler((ZombieActionHandler *)this);
  return;
}


/* ZombossEightiesDropSpeakerActionHandler::~ZombossEightiesDropSpeakerActionHandler() */

void __thiscall
ZombossEightiesDropSpeakerActionHandler::~ZombossEightiesDropSpeakerActionHandler
          (ZombossEightiesDropSpeakerActionHandler *this)

{
  ~ZombossEightiesDropSpeakerActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossEightiesDropSpeakerActionHandler::onUpdateAction() */

void __thiscall
ZombossEightiesDropSpeakerActionHandler::onUpdateAction
          (ZombossEightiesDropSpeakerActionHandler *this)

{
  char cVar1;
  RtObject *this_00;
  ZombieZombossMech_Eighties *pZVar2;
  GridItemSpeaker *this_01;
  Board *this_02;
  float fVar3;
  undefined4 uVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  pZVar2 = Sexy::RtObject::Cast<ZombieZombossMech_Eighties>(this_00);
  cVar1 = (**(code **)(*(long *)pZVar2 + 0xa90))();
  if (cVar1 == '\0') {
    fVar3 = (float)PVZ_T();
    if (*(float *)(this + 0x2c) <= fVar3) {
      this_02 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string(asStack_10,"speaker");
      Board::AddGridItem(this_02,asStack_10,*(int *)(this + 0x24),*(int *)(this + 0x28),1);
      nop();
      std::string::~string(asStack_10);
      nop();
      GridItemSpeaker::SetSpeakerDroppingIn(this_01);
      Sexy::Point::Point((Point *)asStack_10,(TPoint *)(this + 0x24));
      ZombieZombossMech_Eighties::CancelSpeakerReticle(pZVar2,asStack_10);
      uVar4 = PVZ_EOT();
      *(undefined4 *)(this + 0x2c) = uVar4;
      ZombieActionHandler::markActionDone((ZombieActionHandler *)this);
    }
  }
  else {
    Sexy::Point::Point((Point *)asStack_10,(TPoint *)(this + 0x24));
    ZombieZombossMech_Eighties::CancelSpeakerReticle(pZVar2,(Point *)asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossEightiesDropSpeakerActionHandler::SetFiringData(Sexy::Point const&) */

void __thiscall
ZombossEightiesDropSpeakerActionHandler::SetFiringData
          (ZombossEightiesDropSpeakerActionHandler *this,Point *param_1)

{
  ZombossHydraSprayActionDefinition *pZVar1;
  float fVar2;
  
  *(undefined8 *)(this + 0x24) = *(undefined8 *)param_1;
  fVar2 = (float)PVZ_T();
  pZVar1 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  *(float *)(this + 0x2c) = fVar2 + *(float *)(pZVar1 + 0x4c);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossEightiesDropSpeakerActionHandler::onStartAction() */

void __thiscall
ZombossEightiesDropSpeakerActionHandler::onStartAction
          (ZombossEightiesDropSpeakerActionHandler *this)

{
  RtObject *this_00;
  ZombieZombossMech_Eighties *this_01;
  ZombossHydraSprayActionDefinition *pZVar1;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech_Eighties>(this_00);
  Sexy::Point::Point(aPStack_10,(TPoint *)(this + 0x24));
  pZVar1 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
                    /* WARNING: Load size is inaccurate */
  ZombieZombossMech_Eighties::CreateSpeakerReticle
            (*(ZombieZombossMech_Eighties **)(pZVar1 + 0x4c),this_01,aPStack_10);
  std::string::string((string *)aPStack_10,"Play_Zomb_Global_Zomboss_Attack_Reticle_Start_Appear");
  RealObject::PlayPositionalSound((RealObject *)this_01,(string *)aPStack_10,0.0);
  std::string::~string((string *)aPStack_10);
  nop();
  ZombieZombossMech::ForceAnimRateModifierForActiveStage((ZombieZombossMech *)this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

