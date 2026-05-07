// Class: ZombieTimedActionHandler


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTimedActionHandler::StaticClassInit() */

void ZombieTimedActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieTimedActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_04f0149c,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieTimedActionHandler::StaticGetClass() */

long * ZombieTimedActionHandler::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieTimedActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieTimedActionHandler::GetClass() const */

long * ZombieTimedActionHandler::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieTimedActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieTimedActionHandler::ZombieTimedActionHandler() */

void __thiscall ZombieTimedActionHandler::ZombieTimedActionHandler(ZombieTimedActionHandler *this)

{
  ZombieActionHandler::ZombieActionHandler((ZombieActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_06a0bc70;
  return;
}


/* ZombieTimedActionHandler::StaticNew() */

ZombieTimedActionHandler * ZombieTimedActionHandler::StaticNew(void)

{
  ZombieTimedActionHandler *this;
  
  this = ::operator_new(0x28);
  ZombieTimedActionHandler(this);
  return this;
}


/* ZombieTimedActionHandler::~ZombieTimedActionHandler() */

void __thiscall ZombieTimedActionHandler::~ZombieTimedActionHandler(ZombieTimedActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_06a0bc70;
  ZombieActionHandler::~ZombieActionHandler((ZombieActionHandler *)this);
  return;
}


/* ZombieTimedActionHandler::~ZombieTimedActionHandler() */

void __thiscall ZombieTimedActionHandler::~ZombieTimedActionHandler(ZombieTimedActionHandler *this)

{
  ~ZombieTimedActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTimedActionHandler::onStartAction() */

void __thiscall ZombieTimedActionHandler::onStartAction(ZombieTimedActionHandler *this)

{
  bool bVar1;
  long extraout_x0;
  float fVar2;
  float fVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  fVar2 = (float)PVZ_T();
  fVar3 = (float)RandRangeFloat(*(float *)(extraout_x0 + 0x38),*(float *)(extraout_x0 + 0x3c));
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(this + 0x24) = fVar3 + fVar2;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieTimedActionHandler::onUpdateAction() */

void __thiscall ZombieTimedActionHandler::onUpdateAction(ZombieTimedActionHandler *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  if (fVar1 < *(float *)(this + 0x24)) {
    return;
  }
  ZombieActionHandler::markActionDone((ZombieActionHandler *)this);
  return;
}

