// Class: ZombieAnimRig_RenaiBasic


/* ZombieAnimRig_RenaiBasic::StaticGetClass() */

long * ZombieAnimRig_RenaiBasic::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_RenaiBasic",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_RenaiBasic::GetClass() const */

long * ZombieAnimRig_RenaiBasic::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_RenaiBasic",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_RenaiBasic::~ZombieAnimRig_RenaiBasic() */

void __thiscall ZombieAnimRig_RenaiBasic::~ZombieAnimRig_RenaiBasic(ZombieAnimRig_RenaiBasic *this)

{
  *(undefined ***)this = &PTR_GetClass_069fe2a0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_RenaiBasic_069fe5b8;
  ZombieAnimRig_Basic::~ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_RenaiBasic::~ZombieAnimRig_RenaiBasic() */

void __thiscall ZombieAnimRig_RenaiBasic::~ZombieAnimRig_RenaiBasic(ZombieAnimRig_RenaiBasic *this)

{
  ~ZombieAnimRig_RenaiBasic(this + -0x10);
  return;
}


/* ZombieAnimRig_RenaiBasic::~ZombieAnimRig_RenaiBasic() */

void __thiscall ZombieAnimRig_RenaiBasic::~ZombieAnimRig_RenaiBasic(ZombieAnimRig_RenaiBasic *this)

{
  ~ZombieAnimRig_RenaiBasic(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_RenaiBasic::~ZombieAnimRig_RenaiBasic() */

void __thiscall ZombieAnimRig_RenaiBasic::~ZombieAnimRig_RenaiBasic(ZombieAnimRig_RenaiBasic *this)

{
  ~ZombieAnimRig_RenaiBasic(this + -0x10);
  return;
}


/* ZombieAnimRig_RenaiBasic::ZombieAnimRig_RenaiBasic() */

void __thiscall ZombieAnimRig_RenaiBasic::ZombieAnimRig_RenaiBasic(ZombieAnimRig_RenaiBasic *this)

{
  ZombieAnimRig_Basic::ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  *(undefined ***)this = &PTR_GetClass_069fe2a0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_RenaiBasic_069fe5b8;
  return;
}


/* ZombieAnimRig_RenaiBasic::StaticNew() */

ZombieAnimRig_RenaiBasic * ZombieAnimRig_RenaiBasic::StaticNew(void)

{
  ZombieAnimRig_RenaiBasic *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_RenaiBasic(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RenaiBasic::getHeadLayerNames() */

void ZombieAnimRig_RenaiBasic::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba3218 & 1;
  if (((DAT_06ba3218 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3218), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba3128,"zombie_skull");
    nop();
    std::string::string((string *)&DAT_06ba3130,"zombie_jaw");
    nop();
    __cxa_guard_release(&DAT_06ba3218);
    __cxa_atexit(FUN_04ee1c7c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba3220 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3220), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba30d0,(string *)&DAT_06ba3128,(allocator *)&DAT_06ba3138);
    __cxa_guard_release(&DAT_06ba3220);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba30d0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba30d0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RenaiBasic::getArmLayerNames() */

void ZombieAnimRig_RenaiBasic::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba3120 & 1;
  if (((DAT_06ba3120 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3120), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba31d0,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06ba31d8,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06ba31e0,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06ba31e8,"zombie_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06ba31f0,"zombie_hand_outer_03");
    nop();
    __cxa_guard_release(&DAT_06ba3120);
    __cxa_atexit(FUN_04ee1ca8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba3188 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3188), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba3230,(string *)&DAT_06ba31d0,(allocator *)&DAT_06ba31f8);
    __cxa_guard_release(&DAT_06ba3188);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba3230,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba3230);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RenaiBasic::getArmReplacementPairNames() */

void ZombieAnimRig_RenaiBasic::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba3270 & 1;
  if (((DAT_06ba3270 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3270), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba3248,"zombie_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06ba3250,"zombie_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06ba3270);
    __cxa_atexit(FUN_04ee1ce0,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba31f8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba31f8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba31a8,(string *)&DAT_06ba3248,(allocator *)&DAT_06ba3258);
    __cxa_guard_release(&DAT_06ba31f8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba31a8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba31a8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RenaiBasic::getFlagHandLayerNames() */

void ZombieAnimRig_RenaiBasic::getFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba30c8 & 1;
  if (((DAT_06ba30c8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba30c8), iVar2 != 0)) {
    __cxa_guard_release(&DAT_06ba30c8);
    __cxa_atexit(FUN_04ee1c74,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba30e8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba30e8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba3168,(string *)&DAT_06ba3258,(allocator *)&DAT_06ba3258);
    __cxa_guard_release(&DAT_06ba30e8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba3168,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba3168);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RenaiBasic::getNoFlagHandLayerNames() */

void ZombieAnimRig_RenaiBasic::getNoFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba31a0 & 1;
  if (((DAT_06ba31a0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba31a0), iVar2 != 0)) {
    __cxa_guard_release(&DAT_06ba31a0);
    __cxa_atexit(FUN_04ee1c78,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba3228 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3228), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba3108,(string *)&DAT_06ba30c8,(allocator *)&DAT_06ba30c8);
    __cxa_guard_release(&DAT_06ba3228);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba3108,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba3108);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RenaiBasic::getConeLayerNames() */

void ZombieAnimRig_RenaiBasic::getConeLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba31c0 & 1;
  if (((DAT_06ba31c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba31c0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba30f0,"zombie_armor_cone_norm");
    nop();
    std::string::string((string *)&DAT_06ba30f8,"zombie_armor_cone_damage_01");
    nop();
    std::string::string((string *)&DAT_06ba3100,"zombie_armor_cone_damage_02");
    nop();
    __cxa_guard_release(&DAT_06ba31c0);
    __cxa_atexit(FUN_04ee1d0c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba3278 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3278), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba3138,(string *)&DAT_06ba30f0,(allocator *)&DAT_06ba3108);
    __cxa_guard_release(&DAT_06ba3278);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba3138,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba3138);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RenaiBasic::getBucketLayerNames() */

void ZombieAnimRig_RenaiBasic::getBucketLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba3180 & 1;
  if (((DAT_06ba3180 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3180), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba3200,"zombie_armor_bucket_norm");
    nop();
    std::string::string((string *)&DAT_06ba3208,"zombie_armor_bucket_damage_01");
    nop();
    std::string::string((string *)&DAT_06ba3210,"zombie_armor_bucket_damage_02");
    nop();
    __cxa_guard_release(&DAT_06ba3180);
    __cxa_atexit(FUN_04ee1d40,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba3160 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3160), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba3258,(string *)&DAT_06ba3200,(allocator *)&DAT_06ba3218);
    __cxa_guard_release(&DAT_06ba3160);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba3258,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba3258);
}

