// Class: AnimationController


/* AnimationController::SetDescription(std::string const&) */

void AnimationController::SetDescription(string *param_1)

{
  thunk_FUN_05475e00(param_1 + 0x20);
  return;
}


/* AnimationController::IsAnimDone(float) */

bool __thiscall AnimationController::IsAnimDone(AnimationController *this,float param_1)

{
  return *(float *)(this + 0x14) <= param_1;
}


/* AnimationController::AddToRenderQueue(RenderQueue*) */

void AnimationController::AddToRenderQueue(RenderQueue *param_1)

{
  return;
}


/* AnimationController::InnerDraw(Sexy::Graphics*) */

void AnimationController::InnerDraw(Graphics *param_1)

{
  return;
}


/* AnimationController::SetDuration(float) */

void __thiscall AnimationController::SetDuration(AnimationController *this,float param_1)

{
  *(float *)(this + 0x18) = param_1;
  *(float *)(this + 0x14) = param_1 + *(float *)(this + 0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimationController::Init(float, bool) */

void __thiscall AnimationController::Init(AnimationController *this,float param_1,bool param_2)

{
  string asStack_10 [8];
  long local_8;
  
  *(undefined4 *)(this + 0x10) = 0;
  local_8 = ___stack_chk_guard;
  SetDuration(this,param_1);
  this[0x1c] = (AnimationController)param_2;
  std::string::string(asStack_10,"AnimationController");
  SetDescription((string *)this);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AnimationController::~AnimationController() */

void __thiscall AnimationController::~AnimationController(AnimationController *this)

{
  *(undefined ***)this = &PTR_GetClass_06733ba0;
  std::string::~string((string *)(this + 0x20));
  GameObject::~GameObject((GameObject *)this);
  return;
}


/* AnimationController::~AnimationController() */

void __thiscall AnimationController::~AnimationController(AnimationController *this)

{
  ~AnimationController(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimationController::AnimationController(float, bool) */

void __thiscall
AnimationController::AnimationController(AnimationController *this,float param_1,bool param_2)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GameObject::GameObject((GameObject *)this);
  *(undefined ***)this = &PTR_GetClass_06733ba0;
  Set8BytesTo0(this + 0x20);
  *(undefined4 *)(this + 0x10) = 0;
  SetDuration(this,param_1);
  this[0x1c] = (AnimationController)param_2;
  std::string::string(asStack_10,"AnimationController");
  SetDescription((string *)this);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AnimationController::SetStartTime(float) */

void __thiscall AnimationController::SetStartTime(AnimationController *this,float param_1)

{
  *(float *)(this + 0x10) = param_1;
  *(float *)(this + 0x14) = param_1 + *(float *)(this + 0x18);
  return;
}


/* AnimationController::ShouldUpdate(float) */

bool __thiscall AnimationController::ShouldUpdate(AnimationController *this,float param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_03b5b7b8(*(undefined4 *)(this + 0x18));
  if (fVar1 == 0.0) {
    fVar1 = (float)FUN_03b5b7b4(*(undefined4 *)(this + 0x14));
    if (fVar1 <= param_1) {
      return true;
    }
  }
  return *(float *)(this + 0x10) <= param_1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimationController::StaticClassInit() */

void AnimationController::StaticClassInit(void)

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
    std::string::string(asStack_10,"AnimationController");
    (*pcVar2)(plVar1,asStack_10,FUN_03b5bb34,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AnimationController::StaticGetClass() */

long * AnimationController::StaticGetClass(void)

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
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"AnimationController",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AnimationController::GetClass() const */

long * AnimationController::GetClass(void)

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
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"AnimationController",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AnimationController::StaticNew() */

AnimationController * AnimationController::StaticNew(void)

{
  AnimationController *this;
  
  this = ::operator_new(0x28);
  AnimationController(this,0.0,true);
  return this;
}

