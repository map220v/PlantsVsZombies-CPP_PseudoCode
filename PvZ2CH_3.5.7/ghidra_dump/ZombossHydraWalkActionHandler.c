// Class: ZombossHydraWalkActionHandler


/* ZombossHydraWalkActionHandler::onStartAction() */

void __thiscall ZombossHydraWalkActionHandler::onStartAction(ZombossHydraWalkActionHandler *this)

{
  RtObject *this_00;
  ZombieZombossMech *this_01;
  float fVar1;
  
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  ZombossWalkActionHandler::onStartAction((ZombossWalkActionHandler *)this);
  fVar1 = (float)ZombieZombossMech::GetZomboss_T(this_01);
  *(float *)(this + 0x60) = fVar1 + 0.45;
  return;
}


/* ZombossHydraWalkActionHandler::onUpdateAction() */

void __thiscall ZombossHydraWalkActionHandler::onUpdateAction(ZombossHydraWalkActionHandler *this)

{
  RtObject *this_00;
  ZombieZombossMech *this_01;
  char *pcVar1;
  float fVar2;
  float fVar3;
  
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  ZombossWalkActionHandler::onUpdateAction((ZombossWalkActionHandler *)this);
  fVar3 = *(float *)(this + 0x60);
  fVar2 = (float)ZombieZombossMech::GetZomboss_T(this_01);
  if (fVar2 <= fVar3) {
    return;
  }
  fVar2 = (float)ZombieZombossMech::GetZomboss_T(this_01);
  *(float *)(this + 0x60) = fVar2 + 0.9;
  Board::ShakeBoard(*(Board **)(gLawnApp + 0x9f0),0,-10,0.15);
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_Zomb_DarkAges_Zomboss_FS");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossHydraWalkActionHandler::StaticClassInit() */

void ZombossHydraWalkActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossHydraWalkActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_04f52924,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossHydraWalkActionHandler::StaticGetClass() */

long * ZombossHydraWalkActionHandler::StaticGetClass(void)

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
  uVar2 = ZombossWalkActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossHydraWalkActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossHydraWalkActionHandler::GetClass() const */

long * ZombossHydraWalkActionHandler::GetClass(void)

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
  uVar2 = ZombossWalkActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossHydraWalkActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossHydraWalkActionHandler::ZombossHydraWalkActionHandler() */

void __thiscall
ZombossHydraWalkActionHandler::ZombossHydraWalkActionHandler(ZombossHydraWalkActionHandler *this)

{
  undefined4 uVar1;
  
  ZombossWalkActionHandler::ZombossWalkActionHandler((ZombossWalkActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_06a1e790;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x60) = uVar1;
  return;
}


/* ZombossHydraWalkActionHandler::StaticNew() */

ZombossHydraWalkActionHandler * ZombossHydraWalkActionHandler::StaticNew(void)

{
  ZombossHydraWalkActionHandler *this;
  
  this = ::operator_new(0x68);
  ZombossHydraWalkActionHandler(this);
  return this;
}


/* ZombossHydraWalkActionHandler::~ZombossHydraWalkActionHandler() */

void __thiscall
ZombossHydraWalkActionHandler::~ZombossHydraWalkActionHandler(ZombossHydraWalkActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_06a1e790;
  ZombossWalkActionHandler::~ZombossWalkActionHandler((ZombossWalkActionHandler *)this);
  return;
}


/* ZombossHydraWalkActionHandler::~ZombossHydraWalkActionHandler() */

void __thiscall
ZombossHydraWalkActionHandler::~ZombossHydraWalkActionHandler(ZombossHydraWalkActionHandler *this)

{
  ~ZombossHydraWalkActionHandler(this);
  AK::FreeHook(this);
  return;
}

