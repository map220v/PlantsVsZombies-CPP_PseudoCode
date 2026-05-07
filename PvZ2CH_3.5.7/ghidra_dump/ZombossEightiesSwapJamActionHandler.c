// Class: ZombossEightiesSwapJamActionHandler


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossEightiesSwapJamActionHandler::StaticClassInit() */

void ZombossEightiesSwapJamActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossEightiesSwapJamActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_047efc80,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossEightiesSwapJamActionHandler::StaticGetClass() */

long * ZombossEightiesSwapJamActionHandler::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombossEightiesSwapJamActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossEightiesSwapJamActionHandler::GetClass() const */

long * ZombossEightiesSwapJamActionHandler::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombossEightiesSwapJamActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossEightiesSwapJamActionHandler::ZombossEightiesSwapJamActionHandler() */

void __thiscall
ZombossEightiesSwapJamActionHandler::ZombossEightiesSwapJamActionHandler
          (ZombossEightiesSwapJamActionHandler *this)

{
  ZombieActionHandler::ZombieActionHandler((ZombieActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_068f6a70;
  return;
}


/* ZombossEightiesSwapJamActionHandler::StaticNew() */

ZombossEightiesSwapJamActionHandler * ZombossEightiesSwapJamActionHandler::StaticNew(void)

{
  ZombossEightiesSwapJamActionHandler *this;
  
  this = ::operator_new(0x28);
  ZombossEightiesSwapJamActionHandler(this);
  return this;
}


/* ZombossEightiesSwapJamActionHandler::~ZombossEightiesSwapJamActionHandler() */

void __thiscall
ZombossEightiesSwapJamActionHandler::~ZombossEightiesSwapJamActionHandler
          (ZombossEightiesSwapJamActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_068f6a70;
  ZombieActionHandler::~ZombieActionHandler((ZombieActionHandler *)this);
  return;
}


/* ZombossEightiesSwapJamActionHandler::~ZombossEightiesSwapJamActionHandler() */

void __thiscall
ZombossEightiesSwapJamActionHandler::~ZombossEightiesSwapJamActionHandler
          (ZombossEightiesSwapJamActionHandler *this)

{
  ~ZombossEightiesSwapJamActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossEightiesSwapJamActionHandler::onStartAction() */

void __thiscall
ZombossEightiesSwapJamActionHandler::onStartAction(ZombossEightiesSwapJamActionHandler *this)

{
  RtObject *this_00;
  ZombieZombossMech_Eighties *this_01;
  long lVar1;
  PlantGroup *pPVar2;
  int iVar3;
  Board *this_02;
  Point aPStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  iVar3 = 0;
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech_Eighties>(this_00);
  ZombieZombossMech_Eighties::SwapJam(this_01);
  do {
    lVar1 = FUN_047f1514(iVar3);
    if (lVar1 == 0) {
      Sexy::Point::Point(aPStack_18,6,iVar3);
      pPVar2 = (PlantGroup *)Board::GetPlantGroupAt(*(Point **)(gLawnApp + 0x9f0));
      if (pPVar2 != (PlantGroup *)0x0) {
        PlantGroup::KillPlants(pPVar2,2,0);
      }
      this_02 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string(asStack_10,"speaker_zomboss");
      Board::AddGridItem(this_02,asStack_10,6,iVar3,1);
      std::string::~string(asStack_10);
      nop();
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 5);
  ZombieActionHandler::markActionDone((ZombieActionHandler *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

