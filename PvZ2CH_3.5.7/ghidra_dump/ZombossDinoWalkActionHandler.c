// Class: ZombossDinoWalkActionHandler


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossDinoWalkActionHandler::StaticClassInit() */

void ZombossDinoWalkActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossDinoWalkActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_047f47a8,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossDinoWalkActionHandler::StaticGetClass() */

long * ZombossDinoWalkActionHandler::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombossDinoWalkActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossDinoWalkActionHandler::GetClass() const */

long * ZombossDinoWalkActionHandler::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombossDinoWalkActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossDinoWalkActionHandler::onUpdateAction() */

void __thiscall ZombossDinoWalkActionHandler::onUpdateAction(ZombossDinoWalkActionHandler *this)

{
  RtObject *this_00;
  ZombieZombossMech *this_01;
  float fVar1;
  float fVar2;
  
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  ZombossWalkActionHandler::onUpdateAction((ZombossWalkActionHandler *)this);
  fVar2 = *(float *)(this + 0x60);
  fVar1 = (float)ZombieZombossMech::GetZomboss_T(this_01);
  if (fVar1 <= fVar2) {
    return;
  }
  fVar1 = (float)ZombieZombossMech::GetZomboss_T(this_01);
  *(float *)(this + 0x60) = fVar1 + 0.9;
  Board::ShakeBoard(*(Board **)(gLawnApp + 0x9f0),0,-10,0.15);
  return;
}


/* ZombossDinoWalkActionHandler::ZombossDinoWalkActionHandler() */

void __thiscall
ZombossDinoWalkActionHandler::ZombossDinoWalkActionHandler(ZombossDinoWalkActionHandler *this)

{
  ZombossWalkActionHandler::ZombossWalkActionHandler((ZombossWalkActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_068f6ea0;
  return;
}


/* ZombossDinoWalkActionHandler::StaticNew() */

ZombossDinoWalkActionHandler * ZombossDinoWalkActionHandler::StaticNew(void)

{
  ZombossDinoWalkActionHandler *this;
  
  this = ::operator_new(0x68);
  ZombossDinoWalkActionHandler(this);
  return this;
}


/* ZombossDinoWalkActionHandler::~ZombossDinoWalkActionHandler() */

void __thiscall
ZombossDinoWalkActionHandler::~ZombossDinoWalkActionHandler(ZombossDinoWalkActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_068f6ea0;
  ZombossWalkActionHandler::~ZombossWalkActionHandler((ZombossWalkActionHandler *)this);
  return;
}


/* ZombossDinoWalkActionHandler::~ZombossDinoWalkActionHandler() */

void __thiscall
ZombossDinoWalkActionHandler::~ZombossDinoWalkActionHandler(ZombossDinoWalkActionHandler *this)

{
  ~ZombossDinoWalkActionHandler(this);
  AK::FreeHook(this);
  return;
}

