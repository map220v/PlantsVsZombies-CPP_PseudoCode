// Class: AnimMgrSendAudioEvent


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimMgrSendAudioEvent::Init(std::string const&) */

void __thiscall AnimMgrSendAudioEvent::Init(AnimMgrSendAudioEvent *this,string *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AnimationController::Init((AnimationController *)this,0.0,true);
  thunk_FUN_05475e00(this + 0x28,param_1);
  FUN_031f5e7c(asStack_10,"AnimMgrSendAudioEvent: ",param_1);
  AnimationController::SetDescription((string *)this);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* AnimMgrSendAudioEvent::Create(std::string const&) */

void AnimMgrSendAudioEvent::Create(string *param_1)

{
  AnimMgrSendAudioEvent *this;
  
  this = GameObject::Create<AnimMgrSendAudioEvent>();
  Init(this,param_1);
  return;
}


/* AnimMgrSendAudioEvent::~AnimMgrSendAudioEvent() */

void __thiscall AnimMgrSendAudioEvent::~AnimMgrSendAudioEvent(AnimMgrSendAudioEvent *this)

{
  *(undefined ***)this = &PTR_GetClass_06732510;
  std::string::~string((string *)(this + 0x28));
  AnimationController::~AnimationController((AnimationController *)this);
  return;
}


/* AnimMgrSendAudioEvent::~AnimMgrSendAudioEvent() */

void __thiscall AnimMgrSendAudioEvent::~AnimMgrSendAudioEvent(AnimMgrSendAudioEvent *this)

{
  ~AnimMgrSendAudioEvent(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimMgrSendAudioEvent::StaticClassInit() */

void AnimMgrSendAudioEvent::StaticClassInit(void)

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
    std::string::string(asStack_10,"AnimMgrSendAudioEvent");
    (*pcVar2)(plVar1,asStack_10,FUN_03b4d474,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AnimMgrSendAudioEvent::StaticGetClass() */

long * AnimMgrSendAudioEvent::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AnimMgrSendAudioEvent",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AnimMgrSendAudioEvent::GetClass() const */

long * AnimMgrSendAudioEvent::GetClass(void)

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
  (*pcVar3)(plVar1,"AnimMgrSendAudioEvent",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AnimMgrSendAudioEvent::AnimMgrSendAudioEvent() */

void __thiscall AnimMgrSendAudioEvent::AnimMgrSendAudioEvent(AnimMgrSendAudioEvent *this)

{
  AnimationController::AnimationController((AnimationController *)this,0.0,true);
  *(undefined ***)this = &PTR_GetClass_06732510;
  Set8BytesTo0(this + 0x28);
  return;
}


/* AnimMgrSendAudioEvent::StaticNew() */

AnimMgrSendAudioEvent * AnimMgrSendAudioEvent::StaticNew(void)

{
  AnimMgrSendAudioEvent *this;
  
  this = ::operator_new(0x30);
  AnimMgrSendAudioEvent(this);
  return this;
}


/* AnimMgrSendAudioEvent::Update(float) */

void AnimMgrSendAudioEvent::Update(float param_1)

{
  long in_x0;
  char *pcVar1;
  void *pvVar2;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  pvVar2 = (void *)FUN_0547429c(in_x0 + 0x28);
  AudioMgr::SendEvent(pcVar1,pvVar2);
  return;
}

