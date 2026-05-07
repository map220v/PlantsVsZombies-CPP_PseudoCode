// Class: PVZ1KlotskiUI_GloveEffect


/* PVZ1KlotskiUI_GloveEffect::~PVZ1KlotskiUI_GloveEffect() */

void __thiscall
PVZ1KlotskiUI_GloveEffect::~PVZ1KlotskiUI_GloveEffect(PVZ1KlotskiUI_GloveEffect *this)

{
  *(undefined ***)this = &PTR_GetClass_067af420;
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* PVZ1KlotskiUI_GloveEffect::~PVZ1KlotskiUI_GloveEffect() */

void __thiscall
PVZ1KlotskiUI_GloveEffect::~PVZ1KlotskiUI_GloveEffect(PVZ1KlotskiUI_GloveEffect *this)

{
  ~PVZ1KlotskiUI_GloveEffect(this);
  AK::FreeHook(this);
  return;
}


/* PVZ1KlotskiUI_GloveEffect::PVZ1KlotskiUI_GloveEffect() */

void __thiscall
PVZ1KlotskiUI_GloveEffect::PVZ1KlotskiUI_GloveEffect(PVZ1KlotskiUI_GloveEffect *this)

{
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_067af420;
  DVec3::DVec3((DVec3 *)(this + 0x114));
  return;
}


/* PVZ1KlotskiUI_GloveEffect::StaticNew() */

PVZ1KlotskiUI_GloveEffect * PVZ1KlotskiUI_GloveEffect::StaticNew(void)

{
  PVZ1KlotskiUI_GloveEffect *this;
  
  this = ::operator_new(0x120);
  PVZ1KlotskiUI_GloveEffect(this);
  return this;
}


/* PVZ1KlotskiUI_GloveEffect::SetProps(float, Sexy::SexyVector3) */

void PVZ1KlotskiUI_GloveEffect::SetProps
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  *(undefined4 *)(param_5 + 0x10c) = param_1;
  local_10 = param_2;
  local_c = param_3;
  local_8 = param_4;
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_5 + 0x114),(SexyVector3 *)&local_10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1KlotskiUI_GloveEffect::StaticClassInit() */

void PVZ1KlotskiUI_GloveEffect::StaticClassInit(void)

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
    std::string::string(asStack_10,"PVZ1KlotskiUI_GloveEffect");
    (*pcVar2)(plVar1,asStack_10,FUN_03fd41b8,0x120,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1KlotskiUI_GloveEffect::StaticGetClass() */

long * PVZ1KlotskiUI_GloveEffect::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PVZ1KlotskiUI_GloveEffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZ1KlotskiUI_GloveEffect::GetClass() const */

long * PVZ1KlotskiUI_GloveEffect::GetClass(void)

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
  (*pcVar3)(plVar1,"PVZ1KlotskiUI_GloveEffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1KlotskiUI_GloveEffect::onInitialized() */

void __thiscall PVZ1KlotskiUI_GloveEffect::onInitialized(PVZ1KlotskiUI_GloveEffect *this)

{
  undefined4 uVar1;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Effect_PopAnim::onInitialized((Effect_PopAnim *)this);
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x10c) = uVar1;
  EATextSquish::Vec3::Vec3(aVStack_18,0.0,0.0,0.0);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x114),(SexyVector3 *)aVStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x03fd97f8 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PVZ1KlotskiUI_GloveEffect::onUpdate() */

void __thiscall PVZ1KlotskiUI_GloveEffect::onUpdate(PVZ1KlotskiUI_GloveEffect *this)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  float fVar4;
  float local_1c;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Effect_PopAnim::onUpdate((Effect_PopAnim *)this);
  local_10 = *(undefined4 *)(this + 0x11c);
  fVar4 = *(float *)(this + 0x110);
  local_18 = *(undefined8 *)(this + 0x114);
  fVar1 = (float)PVZ_T();
  if (fVar4 <= fVar1) {
    fVar1 = (float)PVZ_T();
    *(float *)(this + 0x110) = fVar1 + 1.0;
    uVar3 = PVZ_T();
    *(undefined4 *)(this + 0x10c) = uVar3;
  }
  else {
    uVar3 = *(undefined4 *)(this + 0x110);
    auVar2 = PVZ_T();
    local_1c = *(float *)(this + 0x118) - 130.0;
    fVar1 = CurveLerp<float>(auVar2,uVar3,auVar2._0_4_,this + 0x118,&local_1c,4);
    local_18 = CONCAT44(fVar1,(undefined4)local_18);
  }
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)&local_18,0x7a121);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

