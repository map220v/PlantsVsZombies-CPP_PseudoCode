// Class: LevelReplaySubsystem


/* LevelReplaySubsystem::stop() */

void __thiscall LevelReplaySubsystem::stop(LevelReplaySubsystem *this)

{
  this[0x24] = (LevelReplaySubsystem)0x0;
  return;
}


/* LevelReplaySubsystem::calculateNextTimeDelta() */

undefined4 LevelReplaySubsystem::calculateNextTimeDelta(void)

{
  return 0x7f7fffff;
}


/* LevelReplaySubsystem::~LevelReplaySubsystem() */

void __thiscall LevelReplaySubsystem::~LevelReplaySubsystem(LevelReplaySubsystem *this)

{
  *(undefined ***)this = &PTR_GetClass_066a7760;
  LevelRecordingBaseSubsystem::~LevelRecordingBaseSubsystem((LevelRecordingBaseSubsystem *)this);
  return;
}


/* LevelReplaySubsystem::~LevelReplaySubsystem() */

void __thiscall LevelReplaySubsystem::~LevelReplaySubsystem(LevelReplaySubsystem *this)

{
  ~LevelReplaySubsystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelReplaySubsystem::StaticClassInit() */

void LevelReplaySubsystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelReplaySubsystem");
    (*pcVar2)(plVar1,asStack_10,FUN_0384a8b0,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelReplaySubsystem::StaticGetClass() */

long * LevelReplaySubsystem::StaticGetClass(void)

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
  uVar2 = LevelRecordingBaseSubsystem::StaticGetClass();
  (*pcVar3)(plVar1,"LevelReplaySubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelReplaySubsystem::GetClass() const */

long * LevelReplaySubsystem::GetClass(void)

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
  uVar2 = LevelRecordingBaseSubsystem::StaticGetClass();
  (*pcVar3)(plVar1,"LevelReplaySubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelReplaySubsystem::Init() */

void __thiscall LevelReplaySubsystem::Init(LevelReplaySubsystem *this)

{
  (**(code **)(*(long *)this + 0xc0))();
  return;
}


/* LevelReplaySubsystem::updateNextDelta() */

void __thiscall LevelReplaySubsystem::updateNextDelta(LevelReplaySubsystem *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)(**(code **)(*(long *)this + 0xd0))();
  fVar2 = (float)PVZ_EOT();
  if (fVar1 != fVar2) {
    fVar2 = fVar1 + *(float *)(this + 0x1c);
  }
  *(float *)(this + 0x1c) = fVar2;
  return;
}


/* LevelReplaySubsystem::start() */

void __thiscall LevelReplaySubsystem::start(LevelReplaySubsystem *this)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (this[0x24] != (LevelReplaySubsystem)0x0) {
    return;
  }
  uVar2 = PVZ_T();
  *(undefined4 *)(this + 0x14) = uVar2;
  uVar2 = PVZ_T();
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  pcVar1 = *(code **)(*(long *)this + 0xc0);
  this[0x24] = (LevelReplaySubsystem)0x1;
  *(undefined4 *)(this + 0x1c) = uVar2;
  (*pcVar1)(this);
  (**(code **)(*(long *)this + 0xb8))(this,0);
  updateNextDelta(this);
  return;
}


/* LevelReplaySubsystem::Update() */

void __thiscall LevelReplaySubsystem::Update(LevelReplaySubsystem *this)

{
  LevelReplaySubsystem LVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  
  cVar2 = (**(code **)(*(long *)this + 200))();
  if ((cVar2 != '\0') && (LVar1 = this[0x24], LVar1 != (LevelReplaySubsystem)0x0)) {
    if (0.0 < *(float *)(this + 0x20)) {
      fVar3 = (float)PVZ_T();
      if (fVar3 - *(float *)(this + 0x14) <= *(float *)(this + 0x20)) goto LAB_0384b5d0;
      (**(code **)(*(long *)this + 0x90))(this);
      LVar1 = this[0x24];
    }
    while (LVar1 != (LevelReplaySubsystem)0x0) {
      fVar3 = (float)PVZ_T();
      fVar4 = *(float *)(this + 0x1c);
      if (fVar3 <= fVar4) {
        return;
      }
      fVar3 = (float)PVZ_EOT();
      if (fVar4 == fVar3) {
        return;
      }
      (**(code **)(*(long *)this + 0xb8))(this,1);
LAB_0384b5d0:
      LVar1 = this[0x24];
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelReplaySubsystem::LevelReplaySubsystem() */

void __thiscall LevelReplaySubsystem::LevelReplaySubsystem(LevelReplaySubsystem *this)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelRecordingBaseSubsystem::LevelRecordingBaseSubsystem((LevelRecordingBaseSubsystem *)this);
  this[0x24] = (LevelReplaySubsystem)0x0;
  *(undefined ***)this = &PTR_GetClass_066a7760;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x88);
  Sexy::Delegate0::Delegate0<LevelReplaySubsystem,void(LevelReplaySubsystem::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::LevelLoadComplete,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelReplaySubsystem::StaticNew() */

LevelReplaySubsystem * LevelReplaySubsystem::StaticNew(void)

{
  LevelReplaySubsystem *this;
  
  this = ::operator_new(0x30);
  LevelReplaySubsystem(this);
  return this;
}


/* LevelReplaySubsystem::broadcastChanges() */

void __thiscall LevelReplaySubsystem::broadcastChanges(LevelReplaySubsystem *this)

{
  MessageRouter::Broadcast<int,float,int,int>
            ((MessageRouter *)gMessageRouter,Message::ReplayScoreUpdated,*(int *)(this + 0x28),
             *(int *)(this + 0x2c));
  return;
}


/* LevelReplaySubsystem::setCurrentScore(int) */

void __thiscall LevelReplaySubsystem::setCurrentScore(LevelReplaySubsystem *this,int param_1)

{
  *(int *)(this + 0x28) = param_1;
  broadcastChanges(this);
  return;
}


/* LevelReplaySubsystem::setCurrentMultiplier(int) */

void __thiscall LevelReplaySubsystem::setCurrentMultiplier(LevelReplaySubsystem *this,int param_1)

{
  *(int *)(this + 0x2c) = param_1;
  broadcastChanges(this);
  return;
}


/* LevelReplaySubsystem::CheatSetCurrentScore(int) */

void __thiscall LevelReplaySubsystem::CheatSetCurrentScore(LevelReplaySubsystem *this,int param_1)

{
  *(int *)(this + 0x28) = param_1;
  broadcastChanges(this);
  return;
}

