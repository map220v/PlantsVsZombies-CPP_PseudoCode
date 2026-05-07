// Class: Effect_GroundEffectStun


/* Effect_GroundEffectStun::~Effect_GroundEffectStun() */

void __thiscall Effect_GroundEffectStun::~Effect_GroundEffectStun(Effect_GroundEffectStun *this)

{
  *(undefined ***)this = &PTR_GetClass_0675fd00;
  Effect_BeachWaterWave::~Effect_BeachWaterWave((Effect_BeachWaterWave *)this);
  return;
}


/* Effect_GroundEffectStun::~Effect_GroundEffectStun() */

void __thiscall Effect_GroundEffectStun::~Effect_GroundEffectStun(Effect_GroundEffectStun *this)

{
  ~Effect_GroundEffectStun(this);
  AK::FreeHook(this);
  return;
}


/* Effect_GroundEffectStun::Effect_GroundEffectStun() */

void __thiscall Effect_GroundEffectStun::Effect_GroundEffectStun(Effect_GroundEffectStun *this)

{
  undefined4 uVar1;
  
  Effect_BeachWaterWave::Effect_BeachWaterWave((Effect_BeachWaterWave *)this);
  *(undefined ***)this = &PTR_GetClass_0675fd00;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x110) = uVar1;
  return;
}


/* Effect_GroundEffectStun::StaticNew() */

Effect_GroundEffectStun * Effect_GroundEffectStun::StaticNew(void)

{
  Effect_GroundEffectStun *this;
  
  this = ::operator_new(0x118);
  Effect_GroundEffectStun(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_GroundEffectStun::StaticClassInit() */

void Effect_GroundEffectStun::StaticClassInit(void)

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
    std::string::string(asStack_10,"Effect_GroundEffectStun");
    (*pcVar2)(plVar1,asStack_10,FUN_03cd6724,0x118,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_GroundEffectStun::StaticGetClass() */

long * Effect_GroundEffectStun::StaticGetClass(void)

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
  uVar2 = Effect_BeachWaterWave::StaticGetClass();
  (*pcVar3)(plVar1,"Effect_GroundEffectStun",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_GroundEffectStun::GetClass() const */

long * Effect_GroundEffectStun::GetClass(void)

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
  uVar2 = Effect_BeachWaterWave::StaticGetClass();
  (*pcVar3)(plVar1,"Effect_GroundEffectStun",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_GroundEffectStun::onUpdate() */

void __thiscall Effect_GroundEffectStun::onUpdate(Effect_GroundEffectStun *this)

{
  float fVar1;
  
  Effect_PopAnim::onUpdate((Effect_PopAnim *)this);
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0x110) < fVar1) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  return;
}

