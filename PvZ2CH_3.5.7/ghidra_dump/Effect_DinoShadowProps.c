// Class: Effect_DinoShadowProps


/* Effect_DinoShadowProps::~Effect_DinoShadowProps() */

void __thiscall Effect_DinoShadowProps::~Effect_DinoShadowProps(Effect_DinoShadowProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06760730;
  EffectObjectPropertySheet::~EffectObjectPropertySheet((EffectObjectPropertySheet *)this);
  return;
}


/* Effect_DinoShadowProps::~Effect_DinoShadowProps() */

void __thiscall Effect_DinoShadowProps::~Effect_DinoShadowProps(Effect_DinoShadowProps *this)

{
  ~Effect_DinoShadowProps(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_DinoShadowProps::StaticClassInit() */

void Effect_DinoShadowProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"Effect_DinoShadowProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03ce0038,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_DinoShadowProps::StaticGetClass() */

long * Effect_DinoShadowProps::StaticGetClass(void)

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
  uVar2 = EffectObjectPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"Effect_DinoShadowProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_DinoShadowProps::GetClass() const */

long * Effect_DinoShadowProps::GetClass(void)

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
  uVar2 = EffectObjectPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"Effect_DinoShadowProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_DinoShadowProps::Effect_DinoShadowProps() */

void __thiscall Effect_DinoShadowProps::Effect_DinoShadowProps(Effect_DinoShadowProps *this)

{
  EffectObjectPropertySheet::EffectObjectPropertySheet((EffectObjectPropertySheet *)this);
  *(undefined4 *)(this + 0x30) = 0x40a00000;
  *(undefined4 *)(this + 0x3c) = 0x88;
  *(undefined ***)this = &PTR_GetClass_06760730;
  *(undefined4 *)(this + 0x38) = 0x40800000;
  *(undefined4 *)(this + 0x34) = 0x447a0000;
  return;
}


/* Effect_DinoShadowProps::StaticNew() */

Effect_DinoShadowProps * Effect_DinoShadowProps::StaticNew(void)

{
  Effect_DinoShadowProps *this;
  
  this = ::operator_new(0x40);
  Effect_DinoShadowProps(this);
  return this;
}

