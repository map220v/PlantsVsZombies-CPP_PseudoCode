// Class: ZombieAnimRig_Explorer


/* ZombieAnimRig_Explorer::StaticGetClass() */

long * ZombieAnimRig_Explorer::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Explorer",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_Explorer::GetClass() const */

long * ZombieAnimRig_Explorer::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Explorer",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_Explorer::~ZombieAnimRig_Explorer() */

void __thiscall ZombieAnimRig_Explorer::~ZombieAnimRig_Explorer(ZombieAnimRig_Explorer *this)

{
  *(undefined ***)this = &PTR_GetClass_0686f8c0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Explorer_0686fb38;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Explorer::~ZombieAnimRig_Explorer() */

void __thiscall ZombieAnimRig_Explorer::~ZombieAnimRig_Explorer(ZombieAnimRig_Explorer *this)

{
  ~ZombieAnimRig_Explorer(this + -0x10);
  return;
}


/* ZombieAnimRig_Explorer::~ZombieAnimRig_Explorer() */

void __thiscall ZombieAnimRig_Explorer::~ZombieAnimRig_Explorer(ZombieAnimRig_Explorer *this)

{
  ~ZombieAnimRig_Explorer(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Explorer::~ZombieAnimRig_Explorer() */

void __thiscall ZombieAnimRig_Explorer::~ZombieAnimRig_Explorer(ZombieAnimRig_Explorer *this)

{
  ~ZombieAnimRig_Explorer(this + -0x10);
  return;
}


/* ZombieAnimRig_Explorer::ZombieAnimRig_Explorer() */

void __thiscall ZombieAnimRig_Explorer::ZombieAnimRig_Explorer(ZombieAnimRig_Explorer *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0686f8c0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Explorer_0686fb38;
  return;
}


/* ZombieAnimRig_Explorer::StaticNew() */

ZombieAnimRig_Explorer * ZombieAnimRig_Explorer::StaticNew(void)

{
  ZombieAnimRig_Explorer *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_Explorer(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Explorer::getHeadLayerNames() */

void ZombieAnimRig_Explorer::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b179c0 & 1;
  if (((DAT_06b179c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b179c0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b17a00,"zombie_expl_skull");
    nop();
    std::string::string((string *)&DAT_06b17a08,"zombie_expl_jaw");
    nop();
    std::string::string((string *)&DAT_06b17a10,"zombie_expl_hat");
    nop();
    __cxa_guard_release(&DAT_06b179c0);
    __cxa_atexit(FUN_045fef18,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b17a50 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17a50), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b17a58,(string *)&DAT_06b17a00,(allocator *)&DAT_06b17a18);
    __cxa_guard_release(&DAT_06b17a50);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b17a58,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b17a58);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Explorer::getArmLayerNames() */

void ZombieAnimRig_Explorer::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b17a18 & 1;
  if (((DAT_06b17a18 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17a18), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b179d8,"zombie_expl_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b179e0,"zombie_expl_hand_outer");
    nop();
    std::string::string((string *)&DAT_06b179e8,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b179f0,"zombie_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06b179f8,"zombie_hand_outer_03");
    nop();
    __cxa_guard_release(&DAT_06b17a18);
    __cxa_atexit(FUN_045fef4c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b17a48 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17a48), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b17a20,(string *)&DAT_06b179d8,(allocator *)&DAT_06b17a00);
    __cxa_guard_release(&DAT_06b17a48);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b17a20,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b17a20);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Explorer::getArmReplacementPairNames() */

void ZombieAnimRig_Explorer::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b17988 & 1;
  if (((DAT_06b17988 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17988), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b17998,"zombie_expl_arm_outer_upper_01");
    nop();
    std::string::string((string *)&DAT_06b179a0,"zombie_expl_arm_outer_upper_02");
    nop();
    __cxa_guard_release(&DAT_06b17988);
    __cxa_atexit(FUN_045fef84,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b17a70 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17a70), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b179a8,(string *)&DAT_06b17998,(allocator *)&DAT_06b179a8);
    __cxa_guard_release(&DAT_06b17a70);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b179a8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b179a8);
}

