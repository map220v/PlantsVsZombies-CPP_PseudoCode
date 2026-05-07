// Class: ZombieAnimRig_KongfuFlag


/* ZombieAnimRig_KongfuFlag::StaticGetClass() */

long * ZombieAnimRig_KongfuFlag::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_KongfuFlag",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_KongfuFlag::GetClass() const */

long * ZombieAnimRig_KongfuFlag::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_KongfuFlag",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_KongfuFlag::~ZombieAnimRig_KongfuFlag() */

void __thiscall ZombieAnimRig_KongfuFlag::~ZombieAnimRig_KongfuFlag(ZombieAnimRig_KongfuFlag *this)

{
  *(undefined ***)this = &PTR_GetClass_0687aa50;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_KongfuFlag_0687ad68;
  ZombieAnimRig_Basic::~ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_KongfuFlag::~ZombieAnimRig_KongfuFlag() */

void __thiscall ZombieAnimRig_KongfuFlag::~ZombieAnimRig_KongfuFlag(ZombieAnimRig_KongfuFlag *this)

{
  ~ZombieAnimRig_KongfuFlag(this + -0x10);
  return;
}


/* ZombieAnimRig_KongfuFlag::~ZombieAnimRig_KongfuFlag() */

void __thiscall ZombieAnimRig_KongfuFlag::~ZombieAnimRig_KongfuFlag(ZombieAnimRig_KongfuFlag *this)

{
  ~ZombieAnimRig_KongfuFlag(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_KongfuFlag::~ZombieAnimRig_KongfuFlag() */

void __thiscall ZombieAnimRig_KongfuFlag::~ZombieAnimRig_KongfuFlag(ZombieAnimRig_KongfuFlag *this)

{
  ~ZombieAnimRig_KongfuFlag(this + -0x10);
  return;
}


/* ZombieAnimRig_KongfuFlag::ZombieAnimRig_KongfuFlag() */

void __thiscall ZombieAnimRig_KongfuFlag::ZombieAnimRig_KongfuFlag(ZombieAnimRig_KongfuFlag *this)

{
  ZombieAnimRig_Basic::ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  *(undefined ***)this = &PTR_GetClass_0687aa50;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_KongfuFlag_0687ad68;
  return;
}


/* ZombieAnimRig_KongfuFlag::StaticNew() */

ZombieAnimRig_KongfuFlag * ZombieAnimRig_KongfuFlag::StaticNew(void)

{
  ZombieAnimRig_KongfuFlag *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_KongfuFlag(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_KongfuFlag::getHeadLayerNames() */

void ZombieAnimRig_KongfuFlag::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1ad50 & 1;
  if (((DAT_06b1ad50 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1ad50), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1ac50,"zombie_egypt_skull");
    nop();
    std::string::string((string *)&DAT_06b1ac58,"zombie_egypt_jaw");
    nop();
    __cxa_guard_release(&DAT_06b1ad50);
    __cxa_atexit(FUN_046212c4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1acd8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1acd8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1abf0,(string *)&DAT_06b1ac50,(allocator *)&DAT_06b1ac60);
    __cxa_guard_release(&DAT_06b1acd8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1abf0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1abf0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_KongfuFlag::getArmLayerNames() */

void ZombieAnimRig_KongfuFlag::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1ac20 & 1;
  if (((DAT_06b1ac20 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1ac20), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1ac28,"zombie_egypt_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b1ac30,"zombie_egypt_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b1ac38,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b1ac40,"zombie_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06b1ac48,"zombie_hand_outer_03");
    nop();
    __cxa_guard_release(&DAT_06b1ac20);
    __cxa_atexit(FUN_046212f0,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1ad10 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1ad10), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1acf0,(string *)&DAT_06b1ac28,(allocator *)&DAT_06b1ac50);
    __cxa_guard_release(&DAT_06b1ad10);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1acf0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1acf0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_KongfuFlag::getArmReplacementPairNames() */

void ZombieAnimRig_KongfuFlag::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1ad38 & 1;
  if (((DAT_06b1ad38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1ad38), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1ad18,"zombie_egypt_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b1ad20,"zombie_egypt_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06b1ad38);
    __cxa_atexit(FUN_04621328,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1ace0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1ace0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1acb8,(string *)&DAT_06b1ad18,(allocator *)&sClass);
    __cxa_guard_release(&DAT_06b1ace0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1acb8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1acb8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_KongfuFlag::getNoFlagHandLayerNames() */

void ZombieAnimRig_KongfuFlag::getNoFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1ad40 & 1;
  if (((DAT_06b1ad40 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1ad40), iVar2 != 0)) {
    __cxa_guard_release(&DAT_06b1ad40);
    __cxa_atexit(FUN_046212b4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1acd0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1acd0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1ac08,(string *)&DAT_06b1ac08,(allocator *)&DAT_06b1ac08);
    __cxa_guard_release(&DAT_06b1acd0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1ac08,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1ac08);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_KongfuFlag::getFlagHandLayerNames() */

void ZombieAnimRig_KongfuFlag::getFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1abe8 & 1;
  if (((DAT_06b1abe8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1abe8), iVar2 != 0)) {
    __cxa_guard_release(&DAT_06b1abe8);
    __cxa_atexit(FUN_046212b8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1ace8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1ace8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1abd0,(string *)&DAT_06b1ac50,(allocator *)&DAT_06b1ac50);
    __cxa_guard_release(&DAT_06b1ace8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1abd0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1abd0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_KongfuFlag::getConeLayerNames() */

void ZombieAnimRig_KongfuFlag::getConeLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1acb0 & 1;
  if (((DAT_06b1acb0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1acb0), iVar2 != 0)) {
    __cxa_guard_release(&DAT_06b1acb0);
    __cxa_atexit(FUN_046212bc,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1ad08 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1ad08), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1ac60,(string *)&DAT_06b1ac50,(allocator *)&DAT_06b1ac50);
    __cxa_guard_release(&DAT_06b1ad08);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1ac60,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1ac60);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_KongfuFlag::getBucketLayerNames() */

void ZombieAnimRig_KongfuFlag::getBucketLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1ad30 & 1;
  if (((DAT_06b1ad30 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1ad30), iVar2 != 0)) {
    __cxa_guard_release(&DAT_06b1ad30);
    __cxa_atexit(FUN_046212c0,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1ad48 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1ad48), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1ac88,(string *)&DAT_06b1ac88,(allocator *)&DAT_06b1ac88);
    __cxa_guard_release(&DAT_06b1ad48);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1ac88,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1ac88);
}

