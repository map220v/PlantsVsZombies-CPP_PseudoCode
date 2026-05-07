// Class: AnimateLawnMowers


/* AnimateLawnMowers::Init(float, float) */

AnimateLawnMowers * __thiscall
AnimateLawnMowers::Init(AnimateLawnMowers *this,float param_1,float param_2)

{
  AnimationController::Init((AnimationController *)this,param_1,true);
  *(float *)(this + 0x28) = param_2;
  return this;
}


/* AnimateLawnMowers::Create() */

void AnimateLawnMowers::Create(void)

{
  GameObject::Create<AnimateLawnMowers>();
  return;
}


/* AnimateLawnMowers::Create(float, float) */

void AnimateLawnMowers::Create(float param_1,float param_2)

{
  AnimateLawnMowers *this;
  
  this = (AnimateLawnMowers *)Create();
  Init(this,param_1,param_2);
  return;
}


/* AnimateLawnMowers::~AnimateLawnMowers() */

void __thiscall AnimateLawnMowers::~AnimateLawnMowers(AnimateLawnMowers *this)

{
  *(undefined ***)this = &PTR_GetClass_06732670;
  AnimationController::~AnimationController((AnimationController *)this);
  return;
}


/* AnimateLawnMowers::~AnimateLawnMowers() */

void __thiscall AnimateLawnMowers::~AnimateLawnMowers(AnimateLawnMowers *this)

{
  ~AnimateLawnMowers(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimateLawnMowers::StaticClassInit() */

void AnimateLawnMowers::StaticClassInit(void)

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
    std::string::string(asStack_10,"AnimateLawnMowers");
    (*pcVar2)(plVar1,asStack_10,FUN_03b4d83c,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AnimateLawnMowers::StaticGetClass() */

long * AnimateLawnMowers::StaticGetClass(void)

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
  uVar2 = AnimationController::StaticGetClass();
  (*pcVar3)(plVar1,"AnimateLawnMowers",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AnimateLawnMowers::GetClass() const */

long * AnimateLawnMowers::GetClass(void)

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
  uVar2 = AnimationController::StaticGetClass();
  (*pcVar3)(plVar1,"AnimateLawnMowers",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AnimateLawnMowers::AnimateLawnMowers() */

void __thiscall AnimateLawnMowers::AnimateLawnMowers(AnimateLawnMowers *this)

{
  AnimationController::AnimationController((AnimationController *)this,0.0,true);
  *(undefined ***)this = &PTR_GetClass_06732670;
  *(undefined4 *)(this + 0x28) = 0;
  return;
}


/* AnimateLawnMowers::StaticNew() */

AnimateLawnMowers * AnimateLawnMowers::StaticNew(void)

{
  AnimateLawnMowers *this;
  
  this = ::operator_new(0x30);
  AnimateLawnMowers(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimateLawnMowers::Update(float) */

void __thiscall AnimateLawnMowers::Update(AnimateLawnMowers *this,float param_1)

{
  float fVar1;
  int iVar2;
  LawnMower *this_00;
  int iVar3;
  int iVar4;
  long lVar5;
  float fVar6;
  
  fVar6 = (float)FUN_03b4cd90(*(undefined4 *)(this + 0x10));
  fVar1 = _FUN_03b4f9f0;
  lVar5 = *(long *)(gLawnApp + 0x9f0);
  iVar3 = *(int *)(lVar5 + 0xfc);
  if (0 < iVar3) {
    iVar4 = 0;
    do {
      this_00 = (LawnMower *)FUN_03b4f84c(iVar4);
      if (((this_00 != (LawnMower *)0x0) &&
          (iVar2 = FUN_03b4cda0(*(undefined4 *)(this_00 + 0xcc)), iVar2 == 1)) &&
         (fVar6 + fVar1 * (float)(iVar3 - iVar4) <= param_1)) {
        LawnMower::SpawnMower(this_00);
      }
      iVar3 = *(int *)(lVar5 + 0xfc);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  return;
}

