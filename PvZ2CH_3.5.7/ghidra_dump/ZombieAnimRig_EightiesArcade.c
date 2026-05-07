// Class: ZombieAnimRig_EightiesArcade


/* ZombieAnimRig_EightiesArcade::~ZombieAnimRig_EightiesArcade() */

void __thiscall
ZombieAnimRig_EightiesArcade::~ZombieAnimRig_EightiesArcade(ZombieAnimRig_EightiesArcade *this)

{
  *(undefined ***)this = &PTR_GetClass_068ee5d0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_EightiesArcade_068ee858;
  ZombieWithPushingActionAnimRig::~ZombieWithPushingActionAnimRig
            ((ZombieWithPushingActionAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_EightiesArcade::~ZombieAnimRig_EightiesArcade() */

void __thiscall
ZombieAnimRig_EightiesArcade::~ZombieAnimRig_EightiesArcade(ZombieAnimRig_EightiesArcade *this)

{
  ~ZombieAnimRig_EightiesArcade(this + -0x10);
  return;
}


/* ZombieAnimRig_EightiesArcade::~ZombieAnimRig_EightiesArcade() */

void __thiscall
ZombieAnimRig_EightiesArcade::~ZombieAnimRig_EightiesArcade(ZombieAnimRig_EightiesArcade *this)

{
  ~ZombieAnimRig_EightiesArcade(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_EightiesArcade::~ZombieAnimRig_EightiesArcade() */

void __thiscall
ZombieAnimRig_EightiesArcade::~ZombieAnimRig_EightiesArcade(ZombieAnimRig_EightiesArcade *this)

{
  ~ZombieAnimRig_EightiesArcade(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EightiesArcade::StaticClassInit() */

void ZombieAnimRig_EightiesArcade::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_EightiesArcade");
    (*pcVar2)(plVar1,asStack_10,FUN_047ddea0,0x2d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_EightiesArcade::StaticGetClass() */

long * ZombieAnimRig_EightiesArcade::StaticGetClass(void)

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
  uVar2 = ZombieWithPushingActionAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_EightiesArcade",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_EightiesArcade::GetClass() const */

long * ZombieAnimRig_EightiesArcade::GetClass(void)

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
  uVar2 = ZombieWithPushingActionAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_EightiesArcade",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_EightiesArcade::ZombieAnimRig_EightiesArcade() */

void __thiscall
ZombieAnimRig_EightiesArcade::ZombieAnimRig_EightiesArcade(ZombieAnimRig_EightiesArcade *this)

{
  ZombieWithPushingActionAnimRig::ZombieWithPushingActionAnimRig
            ((ZombieWithPushingActionAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_068ee5d0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_EightiesArcade_068ee858;
  return;
}


/* ZombieAnimRig_EightiesArcade::StaticNew() */

ZombieAnimRig_EightiesArcade * ZombieAnimRig_EightiesArcade::StaticNew(void)

{
  ZombieAnimRig_EightiesArcade *this;
  
  this = ::operator_new(0x2d8);
  ZombieAnimRig_EightiesArcade(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EightiesArcade::getHeadLayerNames() */

void ZombieAnimRig_EightiesArcade::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b276f8 & 1;
  if (((DAT_06b276f8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b276f8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b277c0,"zombie_troglobite_jaw");
    nop();
    std::string::string((string *)&DAT_06b277c8,"zombie_troglobite_skull");
    nop();
    __cxa_guard_release(&DAT_06b276f8);
    __cxa_atexit(FUN_047dd7b4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b276b8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b276b8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b27700,(string *)&DAT_06b277c0,(allocator *)&DAT_06b277d0);
    __cxa_guard_release(&DAT_06b276b8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b27700,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b27700);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EightiesArcade::getArmLayerNames() */

void ZombieAnimRig_EightiesArcade::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b276c0 & 1;
  if (((DAT_06b276c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b276c0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b276d0,"zombie_troglobite_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b276d8,"zombie_troglobite_hand_outer");
    nop();
    std::string::string((string *)&DAT_06b276e0,"zombie_troglobite_hand_oute_push");
    nop();
    std::string::string((string *)&DAT_06b276e8,"zombie_hand_outer_02");
    nop();
    __cxa_guard_release(&DAT_06b276c0);
    __cxa_atexit(FUN_047dd7e0,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b277b8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b277b8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b277a0,(string *)&DAT_06b276d0,(allocator *)&DAT_06b276f0);
    __cxa_guard_release(&DAT_06b277b8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b277a0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b277a0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EightiesArcade::getArmReplacementPairNames() */

void ZombieAnimRig_EightiesArcade::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b27780 & 1;
  if (((DAT_06b27780 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b27780), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b27748,"zombie_troglobite_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b27750,"zombie_troglobite_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06b27780);
    __cxa_atexit(FUN_047dd81c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b27718 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b27718), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b27758,(string *)&DAT_06b27748,(allocator *)&DAT_06b27758);
    __cxa_guard_release(&DAT_06b27718);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b27758,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b27758);
}

