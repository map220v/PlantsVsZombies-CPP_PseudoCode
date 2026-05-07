// Class: MoonFlowerGlowAnimEffect


/* MoonFlowerGlowAnimEffect::~MoonFlowerGlowAnimEffect() */

void __thiscall MoonFlowerGlowAnimEffect::~MoonFlowerGlowAnimEffect(MoonFlowerGlowAnimEffect *this)

{
  *(undefined ***)this = &PTR_GetClass_0678eb20;
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* MoonFlowerGlowAnimEffect::~MoonFlowerGlowAnimEffect() */

void __thiscall MoonFlowerGlowAnimEffect::~MoonFlowerGlowAnimEffect(MoonFlowerGlowAnimEffect *this)

{
  ~MoonFlowerGlowAnimEffect(this);
  AK::FreeHook(this);
  return;
}


/* MoonFlowerGlowAnimEffect::MoonFlowerGlowAnimEffect() */

void __thiscall MoonFlowerGlowAnimEffect::MoonFlowerGlowAnimEffect(MoonFlowerGlowAnimEffect *this)

{
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_0678eb20;
  return;
}


/* MoonFlowerGlowAnimEffect::StaticNew() */

MoonFlowerGlowAnimEffect * MoonFlowerGlowAnimEffect::StaticNew(void)

{
  MoonFlowerGlowAnimEffect *this;
  
  this = ::operator_new(0x110);
  MoonFlowerGlowAnimEffect(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MoonFlowerGlowAnimEffect::StaticClassInit() */

void MoonFlowerGlowAnimEffect::StaticClassInit(void)

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
    std::string::string(asStack_10,"MoonFlowerGlowAnimEffect");
    (*pcVar2)(plVar1,asStack_10,FUN_03e83f38,0x110,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MoonFlowerGlowAnimEffect::StaticGetClass() */

long * MoonFlowerGlowAnimEffect::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MoonFlowerGlowAnimEffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MoonFlowerGlowAnimEffect::GetClass() const */

long * MoonFlowerGlowAnimEffect::GetClass(void)

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
  (*pcVar3)(plVar1,"MoonFlowerGlowAnimEffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MoonFlowerGlowAnimEffect::onInitialized() */

void __thiscall MoonFlowerGlowAnimEffect::onInitialized(MoonFlowerGlowAnimEffect *this)

{
  Effect_PopAnim::onInitialized((Effect_PopAnim *)this);
  this[0x109] = (MoonFlowerGlowAnimEffect)0x0;
  return;
}


/* MoonFlowerGlowAnimEffect::onAnimStopped(std::string const&) */

void __thiscall
MoonFlowerGlowAnimEffect::onAnimStopped(MoonFlowerGlowAnimEffect *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"spawn");
  if (bVar1) {
    this[0x109] = (MoonFlowerGlowAnimEffect)0x1;
  }
  Effect_PopAnim::onAnimStopped((string *)this);
  return;
}

