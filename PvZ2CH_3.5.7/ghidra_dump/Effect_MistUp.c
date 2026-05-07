// Class: Effect_MistUp


/* Effect_MistUp::~Effect_MistUp() */

void __thiscall Effect_MistUp::~Effect_MistUp(Effect_MistUp *this)

{
  *(undefined ***)this = &PTR_GetClass_0663e400;
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* Effect_MistUp::~Effect_MistUp() */

void __thiscall Effect_MistUp::~Effect_MistUp(Effect_MistUp *this)

{
  ~Effect_MistUp(this);
  AK::FreeHook(this);
  return;
}


/* Effect_MistUp::Effect_MistUp() */

void __thiscall Effect_MistUp::Effect_MistUp(Effect_MistUp *this)

{
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_0663e400;
  return;
}


/* Effect_MistUp::StaticNew() */

Effect_MistUp * Effect_MistUp::StaticNew(void)

{
  Effect_MistUp *this;
  
  this = ::operator_new(0x110);
  Effect_MistUp(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_MistUp::StaticClassInit() */

void Effect_MistUp::StaticClassInit(void)

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
    std::string::string(asStack_10,"Effect_MistUp");
    (*pcVar2)(plVar1,asStack_10,FUN_0347c828,0x110,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_MistUp::StaticGetClass() */

long * Effect_MistUp::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Effect_MistUp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_MistUp::GetClass() const */

long * Effect_MistUp::GetClass(void)

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
  (*pcVar3)(plVar1,"Effect_MistUp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

