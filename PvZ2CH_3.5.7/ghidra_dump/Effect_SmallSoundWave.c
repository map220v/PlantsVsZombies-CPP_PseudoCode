// Class: Effect_SmallSoundWave


/* Effect_SmallSoundWave::~Effect_SmallSoundWave() */

void __thiscall Effect_SmallSoundWave::~Effect_SmallSoundWave(Effect_SmallSoundWave *this)

{
  *(undefined ***)this = &PTR_GetClass_067a82b0;
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* Effect_SmallSoundWave::~Effect_SmallSoundWave() */

void __thiscall Effect_SmallSoundWave::~Effect_SmallSoundWave(Effect_SmallSoundWave *this)

{
  ~Effect_SmallSoundWave(this);
  AK::FreeHook(this);
  return;
}


/* Effect_SmallSoundWave::SetSpawnPoint(Sexy::Point const&) */

void __thiscall Effect_SmallSoundWave::SetSpawnPoint(Effect_SmallSoundWave *this,Point *param_1)

{
  *(undefined8 *)(this + 0x10c) = *(undefined8 *)param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_SmallSoundWave::StaticClassInit() */

void Effect_SmallSoundWave::StaticClassInit(void)

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
    std::string::string(asStack_10,"Effect_SmallSoundWave");
    (*pcVar2)(plVar1,asStack_10,FUN_03fb1cc4,0x118,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_SmallSoundWave::StaticGetClass() */

long * Effect_SmallSoundWave::StaticGetClass(void)

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
  uVar2 = Effect_PopAnim::StaticGetClass();
  (*pcVar3)(plVar1,"Effect_SmallSoundWave",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_SmallSoundWave::GetClass() const */

long * Effect_SmallSoundWave::GetClass(void)

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
  uVar2 = Effect_PopAnim::StaticGetClass();
  (*pcVar3)(plVar1,"Effect_SmallSoundWave",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_SmallSoundWave::Effect_SmallSoundWave() */

void __thiscall Effect_SmallSoundWave::Effect_SmallSoundWave(Effect_SmallSoundWave *this)

{
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_067a82b0;
  Sexy::Point::Point((Point *)(this + 0x10c));
  return;
}


/* Effect_SmallSoundWave::StaticNew() */

Effect_SmallSoundWave * Effect_SmallSoundWave::StaticNew(void)

{
  Effect_SmallSoundWave *this;
  
  this = ::operator_new(0x118);
  Effect_SmallSoundWave(this);
  return this;
}


/* Effect_SmallSoundWave::onDestroy() */

void __thiscall Effect_SmallSoundWave::onDestroy(Effect_SmallSoundWave *this)

{
  StaveSystem *this_00;
  
  this_00 = Board::GetGameSubSystem<StaveSystem>(*(Board **)(gLawnApp + 0x9f0));
  StaveSystem::PlayNextSyllable(this_00,(Point *)(this + 0x10c));
  return;
}

