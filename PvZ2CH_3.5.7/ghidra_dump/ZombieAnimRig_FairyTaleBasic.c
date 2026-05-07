// Class: ZombieAnimRig_FairyTaleBasic


/* ZombieAnimRig_FairyTaleBasic::ZombieAnimRig_FairyTaleBasic() */

void __thiscall
ZombieAnimRig_FairyTaleBasic::ZombieAnimRig_FairyTaleBasic(ZombieAnimRig_FairyTaleBasic *this)

{
  ZombieAnimRig_Basic::ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  *(undefined ***)this = &PTR_GetClass_069fba60;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_FairyTaleBasic_069fbd78;
  return;
}


/* ZombieAnimRig_FairyTaleBasic::~ZombieAnimRig_FairyTaleBasic() */

void __thiscall
ZombieAnimRig_FairyTaleBasic::~ZombieAnimRig_FairyTaleBasic(ZombieAnimRig_FairyTaleBasic *this)

{
  *(undefined ***)this = &PTR_GetClass_069fba60;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_FairyTaleBasic_069fbd78;
  ZombieAnimRig_Basic::~ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_FairyTaleBasic::~ZombieAnimRig_FairyTaleBasic() */

void __thiscall
ZombieAnimRig_FairyTaleBasic::~ZombieAnimRig_FairyTaleBasic(ZombieAnimRig_FairyTaleBasic *this)

{
  ~ZombieAnimRig_FairyTaleBasic(this + -0x10);
  return;
}


/* ZombieAnimRig_FairyTaleBasic::~ZombieAnimRig_FairyTaleBasic() */

void __thiscall
ZombieAnimRig_FairyTaleBasic::~ZombieAnimRig_FairyTaleBasic(ZombieAnimRig_FairyTaleBasic *this)

{
  ~ZombieAnimRig_FairyTaleBasic(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_FairyTaleBasic::~ZombieAnimRig_FairyTaleBasic() */

void __thiscall
ZombieAnimRig_FairyTaleBasic::~ZombieAnimRig_FairyTaleBasic(ZombieAnimRig_FairyTaleBasic *this)

{
  ~ZombieAnimRig_FairyTaleBasic(this + -0x10);
  return;
}


/* ZombieAnimRig_FairyTaleBasic::StaticGetClass() */

long * ZombieAnimRig_FairyTaleBasic::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_FairyTaleBasic",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_FairyTaleBasic::GetClass() const */

long * ZombieAnimRig_FairyTaleBasic::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_FairyTaleBasic",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_FairyTaleBasic::StaticNew() */

ZombieAnimRig_FairyTaleBasic * ZombieAnimRig_FairyTaleBasic::StaticNew(void)

{
  ZombieAnimRig_FairyTaleBasic *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_FairyTaleBasic(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FairyTaleBasic::getHeadLayerNames() */

void ZombieAnimRig_FairyTaleBasic::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba2c00 & 1;
  if (((DAT_06ba2c00 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba2c00), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba2bc8,"zombie_skull");
    nop();
    std::string::string((string *)&DAT_06ba2bd0,"zombie_jaw");
    nop();
    std::string::string((string *)&DAT_06ba2bd8,"_zombie_armor_hat_states");
    nop();
    __cxa_guard_release(&DAT_06ba2c00);
    __cxa_atexit(FUN_04ed9220,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba2cf8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba2cf8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba2b98,(string *)&DAT_06ba2bc8,(allocator *)&DAT_06ba2be0);
    __cxa_guard_release(&DAT_06ba2cf8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba2b98,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba2b98);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FairyTaleBasic::getArmLayerNames() */

void ZombieAnimRig_FairyTaleBasic::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba2c50 & 1;
  if (((DAT_06ba2c50 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba2c50), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba2c88,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06ba2c90,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06ba2c98,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06ba2ca0,"zombie_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06ba2ca8,"zombie_hand_outer_03");
    nop();
    __cxa_guard_release(&DAT_06ba2c50);
    __cxa_atexit(FUN_04ed9254,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba2c08 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba2c08), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba2b48,(string *)&DAT_06ba2c88,(allocator *)&DAT_06ba2cb0);
    __cxa_guard_release(&DAT_06ba2c08);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba2b48,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba2b48);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FairyTaleBasic::getArmReplacementPairNames() */

void ZombieAnimRig_FairyTaleBasic::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba2d00 & 1;
  if (((DAT_06ba2d00 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba2d00), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba2cb8,"zombie_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06ba2cc0,"zombie_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06ba2d00);
    __cxa_atexit(FUN_04ed928c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba2b60 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba2b60), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba2c28,(string *)&DAT_06ba2cb8,(allocator *)&DAT_06ba2cc8);
    __cxa_guard_release(&DAT_06ba2b60);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba2c28,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba2c28);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FairyTaleBasic::getFlagHandLayerNames() */

void ZombieAnimRig_FairyTaleBasic::getFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba2cb0 & 1;
  if (((DAT_06ba2cb0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba2cb0), iVar2 != 0)) {
    __cxa_guard_release(&DAT_06ba2cb0);
    __cxa_atexit(FUN_04ed9218,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba2b90 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba2b90), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba2be0,(string *)&DAT_06ba2c20,(allocator *)&DAT_06ba2c20);
    __cxa_guard_release(&DAT_06ba2b90);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba2be0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba2be0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FairyTaleBasic::getNoFlagHandLayerNames() */

void ZombieAnimRig_FairyTaleBasic::getNoFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba2b80 & 1;
  if (((DAT_06ba2b80 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba2b80), iVar2 != 0)) {
    __cxa_guard_release(&DAT_06ba2b80);
    __cxa_atexit(FUN_04ed921c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba2b88 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba2b88), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba2bb0,(string *)&DAT_06ba2d08,(allocator *)&DAT_06ba2d08);
    __cxa_guard_release(&DAT_06ba2b88);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba2bb0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba2bb0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FairyTaleBasic::getConeLayerNames() */

void ZombieAnimRig_FairyTaleBasic::getConeLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba2cf0 & 1;
  if (((DAT_06ba2cf0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba2cf0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba2b68,"zombie_armor_cone_norm");
    nop();
    std::string::string((string *)&DAT_06ba2b70,"zombie_armor_cone_damage_01");
    nop();
    std::string::string((string *)&DAT_06ba2b78,"zombie_armor_cone_damage_02");
    nop();
    __cxa_guard_release(&DAT_06ba2cf0);
    __cxa_atexit(FUN_04ed92b8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba2ce0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba2ce0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba2cc8,(string *)&DAT_06ba2b68,(allocator *)&DAT_06ba2b80);
    __cxa_guard_release(&DAT_06ba2ce0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba2cc8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba2cc8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FairyTaleBasic::getBucketLayerNames() */

void ZombieAnimRig_FairyTaleBasic::getBucketLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba2c20 & 1;
  if (((DAT_06ba2c20 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba2c20), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba2c58,"zombie_armor_bucket_norm");
    nop();
    std::string::string((string *)&DAT_06ba2c60,"zombie_armor_bucket_damage_01");
    nop();
    std::string::string((string *)&DAT_06ba2c68,"zombie_armor_bucket_damage_02");
    nop();
    __cxa_guard_release(&DAT_06ba2c20);
    __cxa_atexit(FUN_04ed92ec,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba2bf8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba2bf8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba2c70,(string *)&DAT_06ba2c58,(allocator *)&DAT_06ba2c70);
    __cxa_guard_release(&DAT_06ba2bf8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba2c70,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba2c70);
}

