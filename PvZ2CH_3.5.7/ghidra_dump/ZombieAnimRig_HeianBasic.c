// Class: ZombieAnimRig_HeianBasic


/* ZombieAnimRig_HeianBasic::StaticGetClass() */

long * ZombieAnimRig_HeianBasic::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_HeianBasic",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_HeianBasic::GetClass() const */

long * ZombieAnimRig_HeianBasic::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_HeianBasic",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_HeianBasic::~ZombieAnimRig_HeianBasic() */

void __thiscall ZombieAnimRig_HeianBasic::~ZombieAnimRig_HeianBasic(ZombieAnimRig_HeianBasic *this)

{
  *(undefined ***)this = &PTR_GetClass_06a031c0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_HeianBasic_06a034d8;
  ZombieAnimRig_Basic::~ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_HeianBasic::~ZombieAnimRig_HeianBasic() */

void __thiscall ZombieAnimRig_HeianBasic::~ZombieAnimRig_HeianBasic(ZombieAnimRig_HeianBasic *this)

{
  ~ZombieAnimRig_HeianBasic(this + -0x10);
  return;
}


/* ZombieAnimRig_HeianBasic::~ZombieAnimRig_HeianBasic() */

void __thiscall ZombieAnimRig_HeianBasic::~ZombieAnimRig_HeianBasic(ZombieAnimRig_HeianBasic *this)

{
  ~ZombieAnimRig_HeianBasic(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_HeianBasic::~ZombieAnimRig_HeianBasic() */

void __thiscall ZombieAnimRig_HeianBasic::~ZombieAnimRig_HeianBasic(ZombieAnimRig_HeianBasic *this)

{
  ~ZombieAnimRig_HeianBasic(this + -0x10);
  return;
}


/* ZombieAnimRig_HeianBasic::ZombieAnimRig_HeianBasic() */

void __thiscall ZombieAnimRig_HeianBasic::ZombieAnimRig_HeianBasic(ZombieAnimRig_HeianBasic *this)

{
  ZombieAnimRig_Basic::ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  *(undefined ***)this = &PTR_GetClass_06a031c0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_HeianBasic_06a034d8;
  return;
}


/* ZombieAnimRig_HeianBasic::StaticNew() */

ZombieAnimRig_HeianBasic * ZombieAnimRig_HeianBasic::StaticNew(void)

{
  ZombieAnimRig_HeianBasic *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_HeianBasic(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_HeianBasic::getHeadLayerNames() */

void ZombieAnimRig_HeianBasic::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba3b00 & 1;
  if (((DAT_06ba3b00 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3b00), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba3a10,"zombie_skull");
    nop();
    std::string::string((string *)&DAT_06ba3a18,"zombie_jaw");
    nop();
    __cxa_guard_release(&DAT_06ba3b00);
    __cxa_atexit(FUN_04eef2d4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba3a20 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3a20), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba3ad0,(string *)&DAT_06ba3a10,(allocator *)&DAT_06ba3a20);
    __cxa_guard_release(&DAT_06ba3a20);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba3ad0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba3ad0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_HeianBasic::getArmLayerNames() */

void ZombieAnimRig_HeianBasic::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba3a38 & 1;
  if (((DAT_06ba3a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3a38), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba3b20,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06ba3b28,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06ba3b30,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06ba3b38,"zombie_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06ba3b40,"zombie_hand_outer_03");
    nop();
    __cxa_guard_release(&DAT_06ba3a38);
    __cxa_atexit(FUN_04eef300,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba3a68 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3a68), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba3a98,(string *)&DAT_06ba3b20,(allocator *)&DAT_06ba3b48);
    __cxa_guard_release(&DAT_06ba3a68);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba3a98,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba3a98);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_HeianBasic::getArmReplacementPairNames() */

void ZombieAnimRig_HeianBasic::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba3bc0 & 1;
  if (((DAT_06ba3bc0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3bc0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba3a28,"zombie_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06ba3a30,"zombie_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06ba3bc0);
    __cxa_atexit(FUN_04eef338,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba3a78 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3a78), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba3a40,(string *)&DAT_06ba3a28,(allocator *)&DAT_06ba3a38);
    __cxa_guard_release(&DAT_06ba3a78);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba3a40,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba3a40);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_HeianBasic::getFlagHandLayerNames() */

void ZombieAnimRig_HeianBasic::getFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba3b88 & 1;
  if (((DAT_06ba3b88 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3b88), iVar2 != 0)) {
    __cxa_guard_release(&DAT_06ba3b88);
    __cxa_atexit(FUN_04eef2cc,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba3a58 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3a58), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba3ae8,(string *)&DAT_06ba3b88,(allocator *)&DAT_06ba3b88);
    __cxa_guard_release(&DAT_06ba3a58);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba3ae8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba3ae8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_HeianBasic::getNoFlagHandLayerNames() */

void ZombieAnimRig_HeianBasic::getNoFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba3b48 & 1;
  if (((DAT_06ba3b48 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3b48), iVar2 != 0)) {
    __cxa_guard_release(&DAT_06ba3b48);
    __cxa_atexit(FUN_04eef2d0,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba3b50 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3b50), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba3b70,(string *)&DAT_06ba3b58,(allocator *)&DAT_06ba3b58);
    __cxa_guard_release(&DAT_06ba3b50);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba3b70,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba3b70);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_HeianBasic::getConeLayerNames() */

void ZombieAnimRig_HeianBasic::getConeLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba3ab0 & 1;
  if (((DAT_06ba3ab0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3ab0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba3b90,"zombie_armor_cone_norm");
    nop();
    std::string::string((string *)&DAT_06ba3b98,"zombie_armor_cone_damage_01");
    nop();
    std::string::string((string *)&DAT_06ba3ba0,"zombie_armor_cone_damage_02");
    nop();
    __cxa_guard_release(&DAT_06ba3ab0);
    __cxa_atexit(FUN_04eef364,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba3ac8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3ac8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba3b58,(string *)&DAT_06ba3b90,(allocator *)&DAT_06ba3ba8);
    __cxa_guard_release(&DAT_06ba3ac8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba3b58,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba3b58);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_HeianBasic::getBucketLayerNames() */

void ZombieAnimRig_HeianBasic::getBucketLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba3b08 & 1;
  if (((DAT_06ba3b08 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3b08), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba3a80,"zombie_armor_bucket_norm");
    nop();
    std::string::string((string *)&DAT_06ba3a88,"zombie_armor_bucket_damage_01");
    nop();
    std::string::string((string *)&DAT_06ba3a90,"zombie_armor_bucket_damage_02");
    nop();
    __cxa_guard_release(&DAT_06ba3b08);
    __cxa_atexit(FUN_04eef398,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba3a60 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3a60), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba3ba8,(string *)&DAT_06ba3a80,(allocator *)&DAT_06ba3a98);
    __cxa_guard_release(&DAT_06ba3a60);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba3ba8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba3ba8);
}

