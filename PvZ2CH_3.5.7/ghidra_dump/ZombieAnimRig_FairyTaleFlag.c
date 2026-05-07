// Class: ZombieAnimRig_FairyTaleFlag


/* ZombieAnimRig_FairyTaleFlag::StaticGetClass() */

long * ZombieAnimRig_FairyTaleFlag::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_FairyTaleFlag",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_FairyTaleFlag::GetClass() const */

long * ZombieAnimRig_FairyTaleFlag::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_FairyTaleFlag",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_FairyTaleFlag::~ZombieAnimRig_FairyTaleFlag() */

void __thiscall
ZombieAnimRig_FairyTaleFlag::~ZombieAnimRig_FairyTaleFlag(ZombieAnimRig_FairyTaleFlag *this)

{
  *(undefined ***)this = &PTR_GetClass_069fbdc0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_FairyTaleFlag_069fc0d8;
  ZombieAnimRig_Basic::~ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_FairyTaleFlag::~ZombieAnimRig_FairyTaleFlag() */

void __thiscall
ZombieAnimRig_FairyTaleFlag::~ZombieAnimRig_FairyTaleFlag(ZombieAnimRig_FairyTaleFlag *this)

{
  ~ZombieAnimRig_FairyTaleFlag(this + -0x10);
  return;
}


/* ZombieAnimRig_FairyTaleFlag::~ZombieAnimRig_FairyTaleFlag() */

void __thiscall
ZombieAnimRig_FairyTaleFlag::~ZombieAnimRig_FairyTaleFlag(ZombieAnimRig_FairyTaleFlag *this)

{
  ~ZombieAnimRig_FairyTaleFlag(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_FairyTaleFlag::~ZombieAnimRig_FairyTaleFlag() */

void __thiscall
ZombieAnimRig_FairyTaleFlag::~ZombieAnimRig_FairyTaleFlag(ZombieAnimRig_FairyTaleFlag *this)

{
  ~ZombieAnimRig_FairyTaleFlag(this + -0x10);
  return;
}


/* ZombieAnimRig_FairyTaleFlag::ZombieAnimRig_FairyTaleFlag() */

void __thiscall
ZombieAnimRig_FairyTaleFlag::ZombieAnimRig_FairyTaleFlag(ZombieAnimRig_FairyTaleFlag *this)

{
  ZombieAnimRig_Basic::ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  *(undefined ***)this = &PTR_GetClass_069fbdc0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_FairyTaleFlag_069fc0d8;
  return;
}


/* ZombieAnimRig_FairyTaleFlag::StaticNew() */

ZombieAnimRig_FairyTaleFlag * ZombieAnimRig_FairyTaleFlag::StaticNew(void)

{
  ZombieAnimRig_FairyTaleFlag *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_FairyTaleFlag(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FairyTaleFlag::getHeadLayerNames() */

void ZombieAnimRig_FairyTaleFlag::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba2da0 & 1;
  if (((DAT_06ba2da0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba2da0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba2e78,"zombie_skull");
    nop();
    std::string::string((string *)&DAT_06ba2e80,"zombie_jaw");
    nop();
    __cxa_guard_release(&DAT_06ba2da0);
    __cxa_atexit(FUN_04ed9ca8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba2e88 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba2e88), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba2e60,(string *)&DAT_06ba2e78,(allocator *)&DAT_06ba2e88);
    __cxa_guard_release(&DAT_06ba2e88);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba2e60,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba2e60);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FairyTaleFlag::getArmLayerNames() */

void ZombieAnimRig_FairyTaleFlag::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba2e40 & 1;
  if (((DAT_06ba2e40 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba2e40), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba2d18,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06ba2d20,"zombie_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06ba2d28,"zombie_hand_outer_01");
    nop();
    __cxa_guard_release(&DAT_06ba2e40);
    __cxa_atexit(FUN_04ed9cd4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba2e20 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba2e20), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba2d80,(string *)&DAT_06ba2d18,(allocator *)&sClass);
    __cxa_guard_release(&DAT_06ba2e20);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba2d80,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba2d80);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FairyTaleFlag::getArmReplacementPairNames() */

void ZombieAnimRig_FairyTaleFlag::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba2e58 & 1;
  if (((DAT_06ba2e58 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba2e58), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba2e48,"zombie_arm_outer_upper_01");
    nop();
    std::string::string((string *)&DAT_06ba2e50,"zombie_arm_outer_upper_02");
    nop();
    __cxa_guard_release(&DAT_06ba2e58);
    __cxa_atexit(FUN_04ed9d08,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba2dd0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba2dd0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba2d40,(string *)&DAT_06ba2e48,(allocator *)&DAT_06ba2e58);
    __cxa_guard_release(&DAT_06ba2dd0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba2d40,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba2d40);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FairyTaleFlag::getNoFlagHandLayerNames() */

void ZombieAnimRig_FairyTaleFlag::getNoFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba2e30 & 1;
  if (((DAT_06ba2e30 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba2e30), iVar2 != 0)) {
    __cxa_guard_release(&DAT_06ba2e30);
    __cxa_atexit(FUN_04ed9c98,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba2d98 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba2d98), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba2d68,(string *)&DAT_06ba2e20,(allocator *)&DAT_06ba2e20);
    __cxa_guard_release(&DAT_06ba2d98);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba2d68,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba2d68);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FairyTaleFlag::getFlagHandLayerNames() */

void ZombieAnimRig_FairyTaleFlag::getFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba2e28 & 1;
  if (((DAT_06ba2e28 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba2e28), iVar2 != 0)) {
    __cxa_guard_release(&DAT_06ba2e28);
    __cxa_atexit(FUN_04ed9c9c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba2d38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba2d38), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba2e08,(string *)&DAT_06ba2e08,(allocator *)&DAT_06ba2e08);
    __cxa_guard_release(&DAT_06ba2d38);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba2e08,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba2e08);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FairyTaleFlag::getConeLayerNames() */

void ZombieAnimRig_FairyTaleFlag::getConeLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba2e38 & 1;
  if (((DAT_06ba2e38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba2e38), iVar2 != 0)) {
    __cxa_guard_release(&DAT_06ba2e38);
    __cxa_atexit(FUN_04ed9ca0,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba2d60 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba2d60), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba2dd8,(string *)&DAT_06ba2d18,(allocator *)&DAT_06ba2d18);
    __cxa_guard_release(&DAT_06ba2d60);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba2dd8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba2dd8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FairyTaleFlag::getBucketLayerNames() */

void ZombieAnimRig_FairyTaleFlag::getBucketLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba2e00 & 1;
  if (((DAT_06ba2e00 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba2e00), iVar2 != 0)) {
    __cxa_guard_release(&DAT_06ba2e00);
    __cxa_atexit(FUN_04ed9ca4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba2d58 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba2d58), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba2db8,(string *)&DAT_06ba2db8,(allocator *)&DAT_06ba2db8);
    __cxa_guard_release(&DAT_06ba2d58);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba2db8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba2db8);
}

