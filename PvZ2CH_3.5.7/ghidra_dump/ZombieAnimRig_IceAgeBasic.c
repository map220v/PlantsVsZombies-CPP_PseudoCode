// Class: ZombieAnimRig_IceAgeBasic


/* ZombieAnimRig_IceAgeBasic::StaticGetClass() */

long * ZombieAnimRig_IceAgeBasic::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_IceAgeBasic",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_IceAgeBasic::GetClass() const */

long * ZombieAnimRig_IceAgeBasic::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_IceAgeBasic",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_IceAgeBasic::~ZombieAnimRig_IceAgeBasic() */

void __thiscall
ZombieAnimRig_IceAgeBasic::~ZombieAnimRig_IceAgeBasic(ZombieAnimRig_IceAgeBasic *this)

{
  *(undefined ***)this = &PTR_GetClass_068d27c0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_IceAgeBasic_068d2ad8;
  ZombieAnimRig_Basic::~ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_IceAgeBasic::~ZombieAnimRig_IceAgeBasic() */

void __thiscall
ZombieAnimRig_IceAgeBasic::~ZombieAnimRig_IceAgeBasic(ZombieAnimRig_IceAgeBasic *this)

{
  ~ZombieAnimRig_IceAgeBasic(this + -0x10);
  return;
}


/* ZombieAnimRig_IceAgeBasic::~ZombieAnimRig_IceAgeBasic() */

void __thiscall
ZombieAnimRig_IceAgeBasic::~ZombieAnimRig_IceAgeBasic(ZombieAnimRig_IceAgeBasic *this)

{
  ~ZombieAnimRig_IceAgeBasic(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_IceAgeBasic::~ZombieAnimRig_IceAgeBasic() */

void __thiscall
ZombieAnimRig_IceAgeBasic::~ZombieAnimRig_IceAgeBasic(ZombieAnimRig_IceAgeBasic *this)

{
  ~ZombieAnimRig_IceAgeBasic(this + -0x10);
  return;
}


/* ZombieAnimRig_IceAgeBasic::ZombieAnimRig_IceAgeBasic() */

void __thiscall
ZombieAnimRig_IceAgeBasic::ZombieAnimRig_IceAgeBasic(ZombieAnimRig_IceAgeBasic *this)

{
  ZombieAnimRig_Basic::ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  *(undefined ***)this = &PTR_GetClass_068d27c0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_IceAgeBasic_068d2ad8;
  return;
}


/* ZombieAnimRig_IceAgeBasic::StaticNew() */

ZombieAnimRig_IceAgeBasic * ZombieAnimRig_IceAgeBasic::StaticNew(void)

{
  ZombieAnimRig_IceAgeBasic *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_IceAgeBasic(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_IceAgeBasic::getHeadLayerNames() */

void ZombieAnimRig_IceAgeBasic::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b23c58 & 1;
  if (((DAT_06b23c58 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b23c58), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b23df0,"zombie_skull");
    nop();
    std::string::string((string *)&DAT_06b23df8,"zombie_jaw");
    nop();
    __cxa_guard_release(&DAT_06b23c58);
    __cxa_atexit(FUN_04769714,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b23c80 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b23c80), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b23db0,(string *)&DAT_06b23df0,(allocator *)&DAT_06b23e00);
    __cxa_guard_release(&DAT_06b23c80);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b23db0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b23db0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_IceAgeBasic::getArmLayerNames() */

void ZombieAnimRig_IceAgeBasic::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b23c60 & 1;
  if (((DAT_06b23c60 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b23c60), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b23d68,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b23d70,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b23d78,"zombie_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06b23d80,"zombie_hand_outer_03");
    nop();
    __cxa_guard_release(&DAT_06b23c60);
    __cxa_atexit(FUN_04769740,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b23e00 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b23e00), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b23cb0,(string *)&DAT_06b23d68,(allocator *)&DAT_06b23d88);
    __cxa_guard_release(&DAT_06b23e00);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b23cb0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b23cb0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_IceAgeBasic::getArmReplacementPairNames() */

void ZombieAnimRig_IceAgeBasic::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b23cd8 & 1;
  if (((DAT_06b23cd8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b23cd8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b23cf8,"zombie_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b23d00,"zombie_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06b23cd8);
    __cxa_atexit(FUN_0476977c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b23d10 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b23d10), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b23dd0,(string *)&DAT_06b23cf8,(allocator *)&DAT_06b23d08);
    __cxa_guard_release(&DAT_06b23d10);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b23dd0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b23dd0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_IceAgeBasic::getFlagHandLayerNames() */

void ZombieAnimRig_IceAgeBasic::getFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b23e38 & 1;
  if (((DAT_06b23e38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b23e38), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b23cc8,"FIXME, 0 size array");
    nop();
    __cxa_guard_release(&DAT_06b23e38);
    __cxa_atexit(FUN_047697a8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b23d08 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b23d08), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b23e20,(string *)&DAT_06b23cc8,(allocator *)&DAT_06b23cd0);
    __cxa_guard_release(&DAT_06b23d08);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b23e20,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b23e20);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_IceAgeBasic::getNoFlagHandLayerNames() */

void ZombieAnimRig_IceAgeBasic::getNoFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b23cf0 & 1;
  if (((DAT_06b23cf0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b23cf0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b23da8,"FIXME, 0 size array");
    nop();
    __cxa_guard_release(&DAT_06b23cf0);
    __cxa_atexit(FUN_047697b4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b23d88 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b23d88), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b23c68,(string *)&DAT_06b23da8,(allocator *)&DAT_06b23db0);
    __cxa_guard_release(&DAT_06b23d88);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b23c68,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b23c68);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_IceAgeBasic::getConeLayerNames() */

void ZombieAnimRig_IceAgeBasic::getConeLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b23ca0 & 1;
  if (((DAT_06b23ca0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b23ca0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b23c88,"zombie_armor_cone_norm");
    nop();
    std::string::string((string *)&DAT_06b23c90,"zombie_armor_cone_damage_01");
    nop();
    std::string::string((string *)&DAT_06b23c98,"zombie_armor_cone_damage_02");
    nop();
    __cxa_guard_release(&DAT_06b23ca0);
    __cxa_atexit(FUN_047697c0,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b23d48 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b23d48), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b23d90,(string *)&DAT_06b23c88,(allocator *)&DAT_06b23ca0);
    __cxa_guard_release(&DAT_06b23d48);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b23d90,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b23d90);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_IceAgeBasic::getBucketLayerNames() */

void ZombieAnimRig_IceAgeBasic::getBucketLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b23de8 & 1;
  if (((DAT_06b23de8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b23de8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b23e08,"zombie_armor_bucket_norm");
    nop();
    std::string::string((string *)&DAT_06b23e10,"zombie_armor_bucket_damage_01");
    nop();
    std::string::string((string *)&DAT_06b23e18,"zombie_armor_bucket_damage_02");
    nop();
    __cxa_guard_release(&DAT_06b23de8);
    __cxa_atexit(FUN_047697f4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b23cd0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b23cd0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b23c40,(string *)&DAT_06b23e08,(allocator *)&DAT_06b23e20);
    __cxa_guard_release(&DAT_06b23cd0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b23c40,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b23c40);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_IceAgeBasic::getIceBlockLayerNames() */

void ZombieAnimRig_IceAgeBasic::getIceBlockLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b23dc8 & 1;
  if (((DAT_06b23dc8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b23dc8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b23d18,"zombie_armor_iceblock_norm");
    nop();
    std::string::string((string *)&DAT_06b23d20,"zombie_armor_iceblock_damage1");
    nop();
    std::string::string((string *)&DAT_06b23d28,"zombie_armor_iceblock_damage2");
    nop();
    __cxa_guard_release(&DAT_06b23dc8);
    __cxa_atexit(FUN_04769828,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b23ca8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b23ca8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b23d30,(string *)&DAT_06b23d18,(allocator *)&DAT_06b23d30);
    __cxa_guard_release(&DAT_06b23ca8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b23d30,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b23d30);
}

