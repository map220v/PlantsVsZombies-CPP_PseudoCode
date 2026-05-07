// Class: GhostPepperAttackAnim


/* GhostPepperAttackAnim::~GhostPepperAttackAnim() */

void __thiscall GhostPepperAttackAnim::~GhostPepperAttackAnim(GhostPepperAttackAnim *this)

{
  *(undefined ***)this = &PTR_GetClass_067ce070;
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* GhostPepperAttackAnim::~GhostPepperAttackAnim() */

void __thiscall GhostPepperAttackAnim::~GhostPepperAttackAnim(GhostPepperAttackAnim *this)

{
  ~GhostPepperAttackAnim(this);
  AK::FreeHook(this);
  return;
}


/* GhostPepperAttackAnim::GhostPepperAttackAnim() */

void __thiscall GhostPepperAttackAnim::GhostPepperAttackAnim(GhostPepperAttackAnim *this)

{
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_067ce070;
  return;
}


/* GhostPepperAttackAnim::StaticNew() */

GhostPepperAttackAnim * GhostPepperAttackAnim::StaticNew(void)

{
  GhostPepperAttackAnim *this;
  
  this = ::operator_new(0x110);
  GhostPepperAttackAnim(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GhostPepperAttackAnim::StaticClassInit() */

void GhostPepperAttackAnim::StaticClassInit(void)

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
    std::string::string(asStack_10,"GhostPepperAttackAnim");
    (*pcVar2)(plVar1,asStack_10,FUN_04090d5c,0x110,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GhostPepperAttackAnim::StaticGetClass() */

long * GhostPepperAttackAnim::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GhostPepperAttackAnim",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GhostPepperAttackAnim::GetClass() const */

long * GhostPepperAttackAnim::GetClass(void)

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
  (*pcVar3)(plVar1,"GhostPepperAttackAnim",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GhostPepperAttackAnim::StartFog() */

void __thiscall GhostPepperAttackAnim::StartFog(GhostPepperAttackAnim *this)

{
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x109] == (GhostPepperAttackAnim)0x0) {
    __s = "attack_start";
  }
  else {
    __s = "attack2_start";
  }
  std::string::string(asStack_10,__s);
  nop();
  Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this,asStack_10,0);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GhostPepperAttackAnim::StopFog() */

void __thiscall GhostPepperAttackAnim::StopFog(GhostPepperAttackAnim *this)

{
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x109] == (GhostPepperAttackAnim)0x0) {
    __s = "attack_end";
  }
  else {
    __s = "attack2_end";
  }
  std::string::string(asStack_10,__s);
  nop();
  Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this,asStack_10,0);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GhostPepperAttackAnim::onAnimStopped(std::string const&) */

void __thiscall GhostPepperAttackAnim::onAnimStopped(GhostPepperAttackAnim *this,string *param_1)

{
  bool bVar1;
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"attack_start");
  if ((bVar1) || (bVar1 = std::operator==(param_1,"attack2_start"), bVar1)) {
    if (this[0x109] == (GhostPepperAttackAnim)0x0) {
      __s = "attack_loop";
    }
    else {
      __s = "attack2_loop";
    }
    std::string::string(asStack_10,__s);
    nop();
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation((Effect_PopAnim *)this,asStack_10,0);
    std::string::~string(asStack_10);
    bVar1 = std::operator==(param_1,"attack_end");
  }
  else {
    bVar1 = std::operator==(param_1,"attack_end");
  }
  if ((bVar1) || (bVar1 = std::operator==(param_1,"attack2_end"), bVar1)) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

