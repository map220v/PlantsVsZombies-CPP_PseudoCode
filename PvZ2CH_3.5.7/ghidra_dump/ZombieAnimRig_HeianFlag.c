// Class: ZombieAnimRig_HeianFlag


/* ZombieAnimRig_HeianFlag::StaticGetClass() */

long * ZombieAnimRig_HeianFlag::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_HeianFlag",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_HeianFlag::GetClass() const */

long * ZombieAnimRig_HeianFlag::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_HeianFlag",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_HeianFlag::~ZombieAnimRig_HeianFlag() */

void __thiscall ZombieAnimRig_HeianFlag::~ZombieAnimRig_HeianFlag(ZombieAnimRig_HeianFlag *this)

{
  *(undefined ***)this = &PTR_GetClass_06a03520;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_HeianFlag_06a03838;
  ZombieAnimRig_Basic::~ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_HeianFlag::~ZombieAnimRig_HeianFlag() */

void __thiscall ZombieAnimRig_HeianFlag::~ZombieAnimRig_HeianFlag(ZombieAnimRig_HeianFlag *this)

{
  ~ZombieAnimRig_HeianFlag(this + -0x10);
  return;
}


/* ZombieAnimRig_HeianFlag::~ZombieAnimRig_HeianFlag() */

void __thiscall ZombieAnimRig_HeianFlag::~ZombieAnimRig_HeianFlag(ZombieAnimRig_HeianFlag *this)

{
  ~ZombieAnimRig_HeianFlag(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_HeianFlag::~ZombieAnimRig_HeianFlag() */

void __thiscall ZombieAnimRig_HeianFlag::~ZombieAnimRig_HeianFlag(ZombieAnimRig_HeianFlag *this)

{
  ~ZombieAnimRig_HeianFlag(this + -0x10);
  return;
}


/* ZombieAnimRig_HeianFlag::ZombieAnimRig_HeianFlag() */

void __thiscall ZombieAnimRig_HeianFlag::ZombieAnimRig_HeianFlag(ZombieAnimRig_HeianFlag *this)

{
  ZombieAnimRig_Basic::ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  *(undefined ***)this = &PTR_GetClass_06a03520;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_HeianFlag_06a03838;
  return;
}


/* ZombieAnimRig_HeianFlag::StaticNew() */

ZombieAnimRig_HeianFlag * ZombieAnimRig_HeianFlag::StaticNew(void)

{
  ZombieAnimRig_HeianFlag *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_HeianFlag(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_HeianFlag::getHeadLayerNames() */

void ZombieAnimRig_HeianFlag::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba3be0 & 1;
  if (((DAT_06ba3be0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3be0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba3c30,"zombie_skull");
    nop();
    std::string::string((string *)&DAT_06ba3c38,"zombie_jaw");
    nop();
    __cxa_guard_release(&DAT_06ba3be0);
    __cxa_atexit(FUN_04eefdc0,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba3be8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3be8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba3bf8,(string *)&DAT_06ba3c30,(allocator *)&DAT_06ba3c40);
    __cxa_guard_release(&DAT_06ba3be8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba3bf8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba3bf8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_HeianFlag::getArmLayerNames() */

void ZombieAnimRig_HeianFlag::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba3c10 & 1;
  if (((DAT_06ba3c10 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3c10), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba3c18,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06ba3c20,"zombie_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06ba3c28,"zombie_hand_outer_01");
    nop();
    __cxa_guard_release(&DAT_06ba3c10);
    __cxa_atexit(FUN_04eefdec,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba3d38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3d38), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba3ca8,(string *)&DAT_06ba3c18,(allocator *)&DAT_06ba3c30);
    __cxa_guard_release(&DAT_06ba3d38);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba3ca8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba3ca8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_HeianFlag::getArmReplacementPairNames() */

void ZombieAnimRig_HeianFlag::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba3d28 & 1;
  if (((DAT_06ba3d28 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3d28), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba3c78,"zombie_arm_outer_upper_01");
    nop();
    std::string::string((string *)&DAT_06ba3c80,"zombie_arm_outer_upper_02");
    nop();
    __cxa_guard_release(&DAT_06ba3d28);
    __cxa_atexit(FUN_04eefe20,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba3c40 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3c40), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba3c88,(string *)&DAT_06ba3c78,(allocator *)&DAT_06ba3c88);
    __cxa_guard_release(&DAT_06ba3c40);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba3c88,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba3c88);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_HeianFlag::getNoFlagHandLayerNames() */

void ZombieAnimRig_HeianFlag::getNoFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba3d30 & 1;
  if (((DAT_06ba3d30 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3d30), iVar2 != 0)) {
    __cxa_guard_release(&DAT_06ba3d30);
    __cxa_atexit(FUN_04eefdb0,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba3ca0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3ca0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba3d10,(string *)&DAT_06ba3bf0,(allocator *)&DAT_06ba3bf0);
    __cxa_guard_release(&DAT_06ba3ca0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba3d10,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba3d10);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_HeianFlag::getFlagHandLayerNames() */

void ZombieAnimRig_HeianFlag::getFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba3cc0 & 1;
  if (((DAT_06ba3cc0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3cc0), iVar2 != 0)) {
    __cxa_guard_release(&DAT_06ba3cc0);
    __cxa_atexit(FUN_04eefdb4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba3d08 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3d08), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba3cd8,(string *)&DAT_06ba3c88,(allocator *)&DAT_06ba3c88);
    __cxa_guard_release(&DAT_06ba3d08);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba3cd8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba3cd8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_HeianFlag::getConeLayerNames() */

void ZombieAnimRig_HeianFlag::getConeLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba3bd8 & 1;
  if (((DAT_06ba3bd8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3bd8), iVar2 != 0)) {
    __cxa_guard_release(&DAT_06ba3bd8);
    __cxa_atexit(FUN_04eefdb8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba3c48 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3c48), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba3c60,(string *)&DAT_06ba3c78,(allocator *)&DAT_06ba3c78);
    __cxa_guard_release(&DAT_06ba3c48);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba3c60,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba3c60);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_HeianFlag::getBucketLayerNames() */

void ZombieAnimRig_HeianFlag::getBucketLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba3cc8 & 1;
  if (((DAT_06ba3cc8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3cc8), iVar2 != 0)) {
    __cxa_guard_release(&DAT_06ba3cc8);
    __cxa_atexit(FUN_04eefdbc,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba3bf0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3bf0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba3cf0,(string *)&DAT_06ba3cf0,(allocator *)&DAT_06ba3cf0);
    __cxa_guard_release(&DAT_06ba3bf0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba3cf0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba3cf0);
}

