// Class: ZombieAnimRig_FutureFlag


/* ZombieAnimRig_FutureFlag::StaticGetClass() */

long * ZombieAnimRig_FutureFlag::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_Basic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_FutureFlag",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_FutureFlag::GetClass() const */

long * ZombieAnimRig_FutureFlag::GetClass(void)

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
  uVar2 = ZombieAnimRig_Basic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_FutureFlag",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_FutureFlag::~ZombieAnimRig_FutureFlag() */

void __thiscall ZombieAnimRig_FutureFlag::~ZombieAnimRig_FutureFlag(ZombieAnimRig_FutureFlag *this)

{
  *(undefined ***)this = &PTR_GetClass_068701a0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_FutureFlag_068704b8;
  ZombieAnimRig_Basic::~ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_FutureFlag::~ZombieAnimRig_FutureFlag() */

void __thiscall ZombieAnimRig_FutureFlag::~ZombieAnimRig_FutureFlag(ZombieAnimRig_FutureFlag *this)

{
  ~ZombieAnimRig_FutureFlag(this + -0x10);
  return;
}


/* ZombieAnimRig_FutureFlag::~ZombieAnimRig_FutureFlag() */

void __thiscall ZombieAnimRig_FutureFlag::~ZombieAnimRig_FutureFlag(ZombieAnimRig_FutureFlag *this)

{
  ~ZombieAnimRig_FutureFlag(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_FutureFlag::~ZombieAnimRig_FutureFlag() */

void __thiscall ZombieAnimRig_FutureFlag::~ZombieAnimRig_FutureFlag(ZombieAnimRig_FutureFlag *this)

{
  ~ZombieAnimRig_FutureFlag(this + -0x10);
  return;
}


/* ZombieAnimRig_FutureFlag::ZombieAnimRig_FutureFlag() */

void __thiscall ZombieAnimRig_FutureFlag::ZombieAnimRig_FutureFlag(ZombieAnimRig_FutureFlag *this)

{
  ZombieAnimRig_Basic::ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  *(undefined ***)this = &PTR_GetClass_068701a0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_FutureFlag_068704b8;
  return;
}


/* ZombieAnimRig_FutureFlag::StaticNew() */

ZombieAnimRig_FutureFlag * ZombieAnimRig_FutureFlag::StaticNew(void)

{
  ZombieAnimRig_FutureFlag *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_FutureFlag(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FutureFlag::getHeadLayerNames() */

void ZombieAnimRig_FutureFlag::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b17f80 & 1;
  if (((DAT_06b17f80 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17f80), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b17f08,"zombie_skull");
    nop();
    std::string::string((string *)&DAT_06b17f10,"zombie_jaw");
    nop();
    __cxa_guard_release(&DAT_06b17f80);
    __cxa_atexit(FUN_04601434,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b17f78 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17f78), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b17e80,(string *)&DAT_06b17f08,(allocator *)&DAT_06b17f18);
    __cxa_guard_release(&DAT_06b17f78);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b17e80,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b17e80);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FutureFlag::getArmLayerNames() */

void ZombieAnimRig_FutureFlag::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b17e48 & 1;
  if (((DAT_06b17e48 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17e48), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b17ee0,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b17ee8,"zombie_hand_outer_1");
    nop();
    std::string::string((string *)&DAT_06b17ef0,"zombie_hand_outer_2");
    nop();
    std::string::string((string *)&DAT_06b17ef8,"zombie_hand_outer_3");
    nop();
    __cxa_guard_release(&DAT_06b17e48);
    __cxa_atexit(FUN_04601460,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b17e60 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17e60), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b17f20,(string *)&DAT_06b17ee0,(allocator *)&sClass);
    __cxa_guard_release(&DAT_06b17e60);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b17f20,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b17f20);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FutureFlag::getArmReplacementPairNames() */

void ZombieAnimRig_FutureFlag::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b17ed8 & 1;
  if (((DAT_06b17ed8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17ed8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b17e98,"zombie_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b17ea0,"zombie_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06b17ed8);
    __cxa_atexit(FUN_0460149c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b17f60 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17f60), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b17f48,(string *)&DAT_06b17e98,(allocator *)&DAT_06b17ea8);
    __cxa_guard_release(&DAT_06b17f60);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b17f48,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b17f48);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FutureFlag::getNoFlagHandLayerNames() */

void ZombieAnimRig_FutureFlag::getNoFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b17e68 & 1;
  if (((DAT_06b17e68 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17e68), iVar2 != 0)) {
    __cxa_guard_release(&DAT_06b17e68);
    __cxa_atexit(FUN_04601424,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b17f18 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17f18), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b17e30,(string *)&DAT_06b17ee0,(allocator *)&DAT_06b17ee0);
    __cxa_guard_release(&DAT_06b17f18);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b17e30,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b17e30);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FutureFlag::getFlagHandLayerNames() */

void ZombieAnimRig_FutureFlag::getFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b17f38 & 1;
  if (((DAT_06b17f38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17f38), iVar2 != 0)) {
    __cxa_guard_release(&DAT_06b17f38);
    __cxa_atexit(FUN_04601428,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b17e58 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17e58), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b17ea8,(string *)&DAT_06b17ee0,(allocator *)&DAT_06b17ee0);
    __cxa_guard_release(&DAT_06b17e58);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b17ea8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b17ea8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FutureFlag::getConeLayerNames() */

void ZombieAnimRig_FutureFlag::getConeLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b17e28 & 1;
  if (((DAT_06b17e28 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17e28), iVar2 != 0)) {
    __cxa_guard_release(&DAT_06b17e28);
    __cxa_atexit(FUN_0460142c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b17e50 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17e50), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b17ec0,(string *)&DAT_06b17f38,(allocator *)&DAT_06b17f38);
    __cxa_guard_release(&DAT_06b17e50);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b17ec0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b17ec0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FutureFlag::getBucketLayerNames() */

void ZombieAnimRig_FutureFlag::getBucketLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b17f40 & 1;
  if (((DAT_06b17f40 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17f40), iVar2 != 0)) {
    __cxa_guard_release(&DAT_06b17f40);
    __cxa_atexit(FUN_04601430,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b17f88 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17f88), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b17e10,(string *)&DAT_06b17f60,(allocator *)&DAT_06b17f60);
    __cxa_guard_release(&DAT_06b17f88);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b17e10,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b17e10);
}

