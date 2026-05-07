// Class: MowerRemover


/* MowerRemover::~MowerRemover() */

void __thiscall MowerRemover::~MowerRemover(MowerRemover *this)

{
  *(undefined ***)this = &PTR_GetClass_06856990;
  std::string::~string((string *)(this + 0x30));
  AnimationController::~AnimationController((AnimationController *)this);
  return;
}


/* MowerRemover::~MowerRemover() */

void __thiscall MowerRemover::~MowerRemover(MowerRemover *this)

{
  ~MowerRemover(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MowerRemover::StaticClassInit() */

void MowerRemover::StaticClassInit(void)

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
    std::string::string(asStack_10,"MowerRemover");
    (*pcVar2)(plVar1,asStack_10,FUN_044eea08,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MowerRemover::StaticGetClass() */

long * MowerRemover::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MowerRemover",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MowerRemover::GetClass() const */

long * MowerRemover::GetClass(void)

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
  (*pcVar3)(plVar1,"MowerRemover",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MowerRemover::MowerRemover() */

void __thiscall MowerRemover::MowerRemover(MowerRemover *this)

{
  AnimationController::AnimationController((AnimationController *)this,0.0,true);
  *(undefined ***)this = &PTR_GetClass_06856990;
  Set8BytesTo0(this + 0x30);
  return;
}


/* MowerRemover::StaticNew() */

MowerRemover * MowerRemover::StaticNew(void)

{
  MowerRemover *this;
  
  this = ::operator_new(0x38);
  MowerRemover(this);
  return this;
}


/* MowerRemover::Create(int, std::string const&) */

MowerRemover * MowerRemover::Create(int param_1,string *param_2)

{
  MowerRemover *this;
  
  this = GameObject::Create<MowerRemover>();
  *(int *)(this + 0x28) = param_1;
  thunk_FUN_05475e00(this + 0x30,param_2);
  AnimationController::SetDuration((AnimationController *)this,0.0);
  return this;
}


/* MowerRemover::Update(float) */

void MowerRemover::Update(float param_1)

{
  long in_x0;
  long *plVar1;
  long lVar2;
  string *psVar3;
  
  plVar1 = (long *)FUN_044f09dc(*(undefined4 *)(in_x0 + 0x28));
  if (plVar1 != (long *)0x0) {
    LawnMower::CreateSpawnEffect();
    (**(code **)(*plVar1 + 0x48))(plVar1);
    lVar2 = FUN_05474184((void *)(in_x0 + 0x30));
    if (lVar2 != 0) {
      psVar3 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(psVar3,(void *)(in_x0 + 0x30));
      return;
    }
  }
  return;
}

