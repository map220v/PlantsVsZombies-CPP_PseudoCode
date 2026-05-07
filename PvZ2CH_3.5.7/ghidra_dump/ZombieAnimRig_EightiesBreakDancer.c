// Class: ZombieAnimRig_EightiesBreakDancer


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EightiesBreakDancer::getWalkAnimationName() */

void ZombieAnimRig_EightiesBreakDancer::getWalkAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x240) == '\0') {
    __s = "walk";
  }
  else {
    __s = "jam_walk";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EightiesBreakDancer::getIdleAnimationName() */

void ZombieAnimRig_EightiesBreakDancer::getIdleAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x240) == '\0') {
    __s = "idle";
  }
  else {
    __s = "jam_idle";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* ZombieAnimRig_EightiesBreakDancer::~ZombieAnimRig_EightiesBreakDancer() */

void __thiscall
ZombieAnimRig_EightiesBreakDancer::~ZombieAnimRig_EightiesBreakDancer
          (ZombieAnimRig_EightiesBreakDancer *this)

{
  *(undefined ***)this = &PTR_GetClass_068f1d20;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_EightiesBreakDancer_068f1f98;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_EightiesBreakDancer::~ZombieAnimRig_EightiesBreakDancer() */

void __thiscall
ZombieAnimRig_EightiesBreakDancer::~ZombieAnimRig_EightiesBreakDancer
          (ZombieAnimRig_EightiesBreakDancer *this)

{
  ~ZombieAnimRig_EightiesBreakDancer(this + -0x10);
  return;
}


/* ZombieAnimRig_EightiesBreakDancer::~ZombieAnimRig_EightiesBreakDancer() */

void __thiscall
ZombieAnimRig_EightiesBreakDancer::~ZombieAnimRig_EightiesBreakDancer
          (ZombieAnimRig_EightiesBreakDancer *this)

{
  ~ZombieAnimRig_EightiesBreakDancer(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_EightiesBreakDancer::~ZombieAnimRig_EightiesBreakDancer() */

void __thiscall
ZombieAnimRig_EightiesBreakDancer::~ZombieAnimRig_EightiesBreakDancer
          (ZombieAnimRig_EightiesBreakDancer *this)

{
  ~ZombieAnimRig_EightiesBreakDancer(this + -0x10);
  return;
}


/* ZombieAnimRig_EightiesBreakDancer::ZombieAnimRig_EightiesBreakDancer() */

void __thiscall
ZombieAnimRig_EightiesBreakDancer::ZombieAnimRig_EightiesBreakDancer
          (ZombieAnimRig_EightiesBreakDancer *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  this[0x240] = (ZombieAnimRig_EightiesBreakDancer)0x0;
  *(undefined ***)this = &PTR_GetClass_068f1d20;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_EightiesBreakDancer_068f1f98;
  return;
}


/* ZombieAnimRig_EightiesBreakDancer::StaticNew() */

ZombieAnimRig_EightiesBreakDancer * ZombieAnimRig_EightiesBreakDancer::StaticNew(void)

{
  ZombieAnimRig_EightiesBreakDancer *this;
  
  this = ::operator_new(0x248);
  ZombieAnimRig_EightiesBreakDancer(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EightiesBreakDancer::StaticClassInit() */

void ZombieAnimRig_EightiesBreakDancer::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_EightiesBreakDancer");
    (*pcVar2)(plVar1,asStack_10,FUN_047e538c,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_EightiesBreakDancer::StaticGetClass() */

long * ZombieAnimRig_EightiesBreakDancer::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_EightiesBreakDancer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_EightiesBreakDancer::GetClass() const */

long * ZombieAnimRig_EightiesBreakDancer::GetClass(void)

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
  uVar2 = ZombieAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_EightiesBreakDancer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EightiesBreakDancer::SpinIntro(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_EightiesBreakDancer::SpinIntro
          (ZombieAnimRig_EightiesBreakDancer *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"jam_transition_start");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  (*pcVar1)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EightiesBreakDancer::SpinMain(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_EightiesBreakDancer::SpinMain
          (ZombieAnimRig_EightiesBreakDancer *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"jam_spin");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  (*pcVar1)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EightiesBreakDancer::SpinOutro(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_EightiesBreakDancer::SpinOutro
          (ZombieAnimRig_EightiesBreakDancer *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"jam_transition_end");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  (*pcVar1)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_EightiesBreakDancer::ActivateJam(ZombieEightiesBreakDancer*) */

void __thiscall
ZombieAnimRig_EightiesBreakDancer::ActivateJam
          (ZombieAnimRig_EightiesBreakDancer *this,ZombieEightiesBreakDancer *param_1)

{
  ZombieEightiesBreakDancerProps *pZVar1;
  
  this[0x240] = (ZombieAnimRig_EightiesBreakDancer)0x1;
  pZVar1 = Zombie::GetProps<ZombieEightiesBreakDancerProps>((Zombie *)param_1);
  ZombieAnimRig::SetDesiredWalkVelocity
            ((ZombieAnimRig *)this,*(float *)(pZVar1 + 0x218) * *(float *)(pZVar1 + 0x10));
  return;
}


/* ZombieAnimRig_EightiesBreakDancer::DeactivateJam(ZombieEightiesBreakDancer*) */

void __thiscall
ZombieAnimRig_EightiesBreakDancer::DeactivateJam
          (ZombieAnimRig_EightiesBreakDancer *this,ZombieEightiesBreakDancer *param_1)

{
  ZombieEightiesBreakDancerProps *pZVar1;
  
  this[0x240] = (ZombieAnimRig_EightiesBreakDancer)0x0;
  pZVar1 = Zombie::GetProps<ZombieEightiesBreakDancerProps>((Zombie *)param_1);
  ZombieAnimRig::SetDesiredWalkVelocity((ZombieAnimRig *)this,*(float *)(pZVar1 + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EightiesBreakDancer::getHeadLayerNames() */

void ZombieAnimRig_EightiesBreakDancer::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b27e98 & 1;
  if (((DAT_06b27e98 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b27e98), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b27e78,"zombie_skull");
    nop();
    std::string::string((string *)&DAT_06b27e80,"zombie_jaw");
    nop();
    __cxa_guard_release(&DAT_06b27e98);
    __cxa_atexit(FUN_047e4aa8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b27e90 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b27e90), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b27d98,(string *)&DAT_06b27e78,(allocator *)&DAT_06b27e88);
    __cxa_guard_release(&DAT_06b27e90);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b27d98,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b27d98);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EightiesBreakDancer::getArmLayerNames() */

void ZombieAnimRig_EightiesBreakDancer::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b27e88 & 1;
  if (((DAT_06b27e88 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b27e88), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b27e00,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b27e08,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b27e10,"zombie_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06b27e18,"zombie_hand_outer_03");
    nop();
    std::string::string((string *)&DAT_06b27e20,"zombie_hand_outer_04");
    nop();
    __cxa_guard_release(&DAT_06b27e88);
    __cxa_atexit(FUN_047e4ad4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b27d58 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b27d58), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b27dd8,(string *)&DAT_06b27e00,
               (allocator *)&ZombieEightiesBreakDancerProps::sClass);
    __cxa_guard_release(&DAT_06b27d58);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b27dd8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b27dd8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EightiesBreakDancer::getArmReplacementPairNames() */

void ZombieAnimRig_EightiesBreakDancer::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b27f00 & 1;
  if (((DAT_06b27f00 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b27f00), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b27ee0,"zombie_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b27ee8,"zombie_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06b27f00);
    __cxa_atexit(FUN_047e4b0c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b27d60 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b27d60), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b27db8,(string *)&DAT_06b27ee0,(allocator *)&DAT_06b27ef0);
    __cxa_guard_release(&DAT_06b27d60);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b27db8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b27db8);
}

