// Class: VaseBreakerMiniGameArcadeModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerMiniGameArcadeModule::addPowerUpsToBoard() */

void VaseBreakerMiniGameArcadeModule::addPowerUpsToBoard(void)

{
  PowerupManager *pPVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PowerupManager *)Board::GetPowerupManager(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_10,"powerupvasebreakermove");
  PowerupManager::AddPowerup(pPVar1,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  pPVar1 = (PowerupManager *)Board::GetPowerupManager(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_10,"powerupvasebreakerbutter");
  PowerupManager::AddPowerup(pPVar1,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  pPVar1 = (PowerupManager *)Board::GetPowerupManager(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_10,"powerupvasebreakerreveal");
  PowerupManager::AddPowerup(pPVar1,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VaseBreakerMiniGameArcadeModule::StaticGetClass() */

long * VaseBreakerMiniGameArcadeModule::StaticGetClass(void)

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
  uVar2 = VaseBreakerArcadeModule::StaticGetClass();
  (*pcVar3)(plVar1,"VaseBreakerMiniGameArcadeModule",uVar2,StaticNew);
  return sClass;
}


/* VaseBreakerMiniGameArcadeModule::VaseBreakerMiniGameArcadeModule() */

void __thiscall
VaseBreakerMiniGameArcadeModule::VaseBreakerMiniGameArcadeModule
          (VaseBreakerMiniGameArcadeModule *this)

{
  VaseBreakerArcadeModule::VaseBreakerArcadeModule((VaseBreakerArcadeModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_069186b0;
  return;
}


/* VaseBreakerMiniGameArcadeModule::StaticNew() */

VaseBreakerMiniGameArcadeModule * VaseBreakerMiniGameArcadeModule::StaticNew(void)

{
  VaseBreakerMiniGameArcadeModule *this;
  
  this = ::operator_new(0x18);
  VaseBreakerMiniGameArcadeModule(this);
  return this;
}


/* VaseBreakerMiniGameArcadeModule::~VaseBreakerMiniGameArcadeModule() */

void __thiscall
VaseBreakerMiniGameArcadeModule::~VaseBreakerMiniGameArcadeModule
          (VaseBreakerMiniGameArcadeModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_069186b0;
  VaseBreakerArcadeModule::~VaseBreakerArcadeModule((VaseBreakerArcadeModule *)this);
  return;
}


/* VaseBreakerMiniGameArcadeModule::~VaseBreakerMiniGameArcadeModule() */

void __thiscall
VaseBreakerMiniGameArcadeModule::~VaseBreakerMiniGameArcadeModule
          (VaseBreakerMiniGameArcadeModule *this)

{
  ~VaseBreakerMiniGameArcadeModule(this);
  AK::FreeHook(this);
  return;
}

