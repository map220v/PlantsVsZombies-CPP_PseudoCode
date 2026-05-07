// Class: Effect_BigCrash


/* Effect_BigCrash::~Effect_BigCrash() */

void __thiscall Effect_BigCrash::~Effect_BigCrash(Effect_BigCrash *this)

{
  *(undefined ***)this = &PTR_GetClass_0663c650;
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* Effect_BigCrash::~Effect_BigCrash() */

void __thiscall Effect_BigCrash::~Effect_BigCrash(Effect_BigCrash *this)

{
  ~Effect_BigCrash(this);
  AK::FreeHook(this);
  return;
}


/* Effect_BigCrash::Effect_BigCrash() */

void __thiscall Effect_BigCrash::Effect_BigCrash(Effect_BigCrash *this)

{
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined4 *)(this + 0x10c) = 0x635d7;
  *(undefined ***)this = &PTR_GetClass_0663c650;
  return;
}


/* Effect_BigCrash::StaticNew() */

Effect_BigCrash * Effect_BigCrash::StaticNew(void)

{
  Effect_BigCrash *this;
  
  this = ::operator_new(0x110);
  Effect_BigCrash(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_BigCrash::StaticClassInit() */

void Effect_BigCrash::StaticClassInit(void)

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
    std::string::string(asStack_10,"Effect_BigCrash");
    (*pcVar2)(plVar1,asStack_10,FUN_03472834,0x110,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_BigCrash::StaticGetClass() */

long * Effect_BigCrash::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Effect_BigCrash",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_BigCrash::GetClass() const */

long * Effect_BigCrash::GetClass(void)

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
  (*pcVar3)(plVar1,"Effect_BigCrash",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_BigCrash::playBigCrash(Sexy::SexyVector3) */

void Effect_BigCrash::playBigCrash
               (float param_1,float param_2,undefined4 param_3,Effect_PopAnim *param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float local_30;
  float local_2c;
  undefined4 local_28;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_30 = param_1;
  local_2c = param_2;
  local_28 = param_3;
  Effect_PopAnim::clearAnimSequence(param_4);
  fVar1 = local_30;
  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
  fVar2 = local_2c;
  local_30 = fVar1 - (float)iVar3;
  iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
  local_2c = fVar2 - (float)iVar3 * 1.5;
  StandaloneEffect::SetBoardSpaceOrigin
            ((StandaloneEffect *)param_4,(SexyVector3 *)&local_30,*(int *)(param_4 + 0x10c));
  std::string::string(asStack_10,"big_crash");
  Effect_PopAnim::PlaySingleAnimation(param_4,asStack_10,0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_BigCrash::startBigCrash(Sexy::SexyVector3) */

void Effect_BigCrash::startBigCrash(void)

{
  playBigCrash();
  return;
}

