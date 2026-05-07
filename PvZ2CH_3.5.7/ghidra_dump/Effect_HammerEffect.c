// Class: Effect_HammerEffect


/* Effect_HammerEffect::~Effect_HammerEffect() */

void __thiscall Effect_HammerEffect::~Effect_HammerEffect(Effect_HammerEffect *this)

{
  *(undefined ***)this = &PTR_GetClass_067332d0;
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* Effect_HammerEffect::~Effect_HammerEffect() */

void __thiscall Effect_HammerEffect::~Effect_HammerEffect(Effect_HammerEffect *this)

{
  ~Effect_HammerEffect(this);
  AK::FreeHook(this);
  return;
}


/* Effect_HammerEffect::Effect_HammerEffect() */

void __thiscall Effect_HammerEffect::Effect_HammerEffect(Effect_HammerEffect *this)

{
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_067332d0;
  return;
}


/* Effect_HammerEffect::StaticNew() */

Effect_HammerEffect * Effect_HammerEffect::StaticNew(void)

{
  Effect_HammerEffect *this;
  
  this = ::operator_new(0x110);
  Effect_HammerEffect(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_HammerEffect::StaticClassInit() */

void Effect_HammerEffect::StaticClassInit(void)

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
    std::string::string(asStack_10,"Effect_HammerEffect");
    (*pcVar2)(plVar1,asStack_10,FUN_03b560c4,0x110,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_HammerEffect::StaticGetClass() */

long * Effect_HammerEffect::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Effect_HammerEffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_HammerEffect::GetClass() const */

long * Effect_HammerEffect::GetClass(void)

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
  (*pcVar3)(plVar1,"Effect_HammerEffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

