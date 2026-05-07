// Class: ZombieAnimRig_Magician


/* ZombieAnimRig_Magician::StaticGetClass() */

long * ZombieAnimRig_Magician::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Magician",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_Magician::GetClass() const */

long * ZombieAnimRig_Magician::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Magician",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_Magician::~ZombieAnimRig_Magician() */

void __thiscall ZombieAnimRig_Magician::~ZombieAnimRig_Magician(ZombieAnimRig_Magician *this)

{
  *(undefined ***)this = &PTR_GetClass_06a14800;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Magician_06a14a78;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Magician::~ZombieAnimRig_Magician() */

void __thiscall ZombieAnimRig_Magician::~ZombieAnimRig_Magician(ZombieAnimRig_Magician *this)

{
  ~ZombieAnimRig_Magician(this + -0x10);
  return;
}


/* ZombieAnimRig_Magician::~ZombieAnimRig_Magician() */

void __thiscall ZombieAnimRig_Magician::~ZombieAnimRig_Magician(ZombieAnimRig_Magician *this)

{
  ~ZombieAnimRig_Magician(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Magician::~ZombieAnimRig_Magician() */

void __thiscall ZombieAnimRig_Magician::~ZombieAnimRig_Magician(ZombieAnimRig_Magician *this)

{
  ~ZombieAnimRig_Magician(this + -0x10);
  return;
}


/* ZombieAnimRig_Magician::ZombieAnimRig_Magician() */

void __thiscall ZombieAnimRig_Magician::ZombieAnimRig_Magician(ZombieAnimRig_Magician *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06a14800;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Magician_06a14a78;
  return;
}


/* ZombieAnimRig_Magician::StaticNew() */

ZombieAnimRig_Magician * ZombieAnimRig_Magician::StaticNew(void)

{
  ZombieAnimRig_Magician *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_Magician(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Magician::getHeadLayerNames() */

void ZombieAnimRig_Magician::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba58f0 & 1;
  if (((DAT_06ba58f0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba58f0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba58c0,"zombie_jaw");
    nop();
    std::string::string((string *)&DAT_06ba58c8,"zombie_skull");
    nop();
    std::string::string((string *)&DAT_06ba58d0,"zombie_pupil");
    nop();
    std::string::string((string *)&DAT_06ba58d8,"hat");
    nop();
    __cxa_guard_release(&DAT_06ba58f0);
    __cxa_atexit(FUN_04f2cde4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba59a0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba59a0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba5958,(string *)&DAT_06ba58c0,
               (allocator *)&GridItemMagichat::sClass);
    __cxa_guard_release(&DAT_06ba59a0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba5958,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba5958);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Magician::getArmLayerNames() */

void ZombieAnimRig_Magician::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba59c0 & 1;
  if (((DAT_06ba59c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba59c0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba5a68,"zombie_arm_inner_lower");
    nop();
    std::string::string((string *)&DAT_06ba5a70,"zombie_arm_inner_upper");
    nop();
    std::string::string((string *)&DAT_06ba5a78,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06ba5a80,"zombie_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06ba5a88,"zombie_arms_outer_upper");
    nop();
    std::string::string((string *)&DAT_06ba5a90,"zombie_hand_inner_01");
    nop();
    std::string::string((string *)&DAT_06ba5a98,"zombie_hand_inner_02");
    nop();
    std::string::string((string *)&DAT_06ba5aa0,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06ba5aa8,"");
    nop();
    __cxa_guard_release(&DAT_06ba59c0);
    __cxa_atexit(FUN_04f2ce20,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba5a60 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba5a60), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba58f8,(string *)&DAT_06ba5a68,
               (allocator *)&ZombieTeleportActionDefinition::sClass);
    __cxa_guard_release(&DAT_06ba5a60);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba58f8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba58f8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Magician::getArmReplacementPairNames() */

void ZombieAnimRig_Magician::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba5998 & 1;
  if (((DAT_06ba5998 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba5998), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba5980,"zombie_arms_outer_upper");
    nop();
    std::string::string((string *)&DAT_06ba5988,"zombie_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06ba5998);
    __cxa_atexit(FUN_04f2ce58,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba5928 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba5928), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba5a40,(string *)&DAT_06ba5980,
               (allocator *)&ZombieCarnieMagicianProps::sClass);
    __cxa_guard_release(&DAT_06ba5928);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba5a40,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba5a40);
}

