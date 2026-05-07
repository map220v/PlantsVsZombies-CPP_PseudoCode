// Class: ZombossRiftPointOfLossModule


/* ZombossRiftPointOfLossModule::getCurrentGemCost() */

undefined4 ZombossRiftPointOfLossModule::getCurrentGemCost(void)

{
  long lVar1;
  
  lVar1 = RiftPropertySheet::GetProperties();
  return *(undefined4 *)(lVar1 + 0x54);
}


/* ZombossRiftPointOfLossModule::~ZombossRiftPointOfLossModule() */

void __thiscall
ZombossRiftPointOfLossModule::~ZombossRiftPointOfLossModule(ZombossRiftPointOfLossModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0667ec30;
  PointOfLossModule::~PointOfLossModule((PointOfLossModule *)this);
  return;
}


/* ZombossRiftPointOfLossModule::~ZombossRiftPointOfLossModule() */

void __thiscall
ZombossRiftPointOfLossModule::~ZombossRiftPointOfLossModule(ZombossRiftPointOfLossModule *this)

{
  ~ZombossRiftPointOfLossModule(this);
  AK::FreeHook(this);
  return;
}


/* ZombossRiftPointOfLossModule::ZombossRiftPointOfLossModule() */

void __thiscall
ZombossRiftPointOfLossModule::ZombossRiftPointOfLossModule(ZombossRiftPointOfLossModule *this)

{
  PointOfLossModule::PointOfLossModule((PointOfLossModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0667ec30;
  return;
}


/* ZombossRiftPointOfLossModule::StaticNew() */

ZombossRiftPointOfLossModule * ZombossRiftPointOfLossModule::StaticNew(void)

{
  ZombossRiftPointOfLossModule *this;
  
  this = ::operator_new(0x28);
  ZombossRiftPointOfLossModule(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRiftPointOfLossModule::StaticClassInit() */

void ZombossRiftPointOfLossModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossRiftPointOfLossModule");
    (*pcVar2)(plVar1,asStack_10,FUN_0369beb8,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossRiftPointOfLossModule::StaticGetClass() */

long * ZombossRiftPointOfLossModule::StaticGetClass(void)

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
  uVar2 = PointOfLossModule::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossRiftPointOfLossModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossRiftPointOfLossModule::getExtraTimeAllotted() */

float ZombossRiftPointOfLossModule::getExtraTimeAllotted(void)

{
  long lVar1;
  
  lVar1 = RiftPropertySheet::GetProperties();
  return (float)*(int *)(lVar1 + 0x5c);
}


/* ZombossRiftPointOfLossModule::createDialog() */

void __thiscall ZombossRiftPointOfLossModule::createDialog(ZombossRiftPointOfLossModule *this)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  
  (**(code **)(*(long *)this + 0xd0))();
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  PlayerInfo::GetNumGems(this_01,false);
  return;
}


/* ZombossRiftPointOfLossModule::onAcceptGems() */

char __thiscall ZombossRiftPointOfLossModule::onAcceptGems(ZombossRiftPointOfLossModule *this)

{
  char cVar1;
  LevelModuleManager *this_00;
  ZombossRiftBattleModule *pZVar2;
  long lVar3;
  float fVar4;
  
  cVar1 = PointOfLossModule::onAcceptGems((PointOfLossModule *)this);
  if (cVar1 == '\0') {
    return '\0';
  }
  this_00 = (LevelModuleManager *)FUN_0369bb08(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8))
  ;
  pZVar2 = LevelModuleManager::GetModuleByClass<ZombossRiftBattleModule>(this_00);
  if (pZVar2 != (ZombossRiftBattleModule *)0x0) {
    fVar4 = (float)getExtraTimeAllotted();
    ZombossRiftBattleModule::HandlePointOfLoss(fVar4);
  }
  lVar3 = Sexy::LazySingleton<RiftStatus>::GetInstance();
  FUN_0369bb0c(lVar3 + 0x18,*(undefined4 *)(this + 0x20));
  return cVar1;
}

