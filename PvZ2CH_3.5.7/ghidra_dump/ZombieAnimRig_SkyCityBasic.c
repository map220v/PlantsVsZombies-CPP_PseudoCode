// Class: ZombieAnimRig_SkyCityBasic


/* ZombieAnimRig_SkyCityBasic::StaticGetClass() */

long * ZombieAnimRig_SkyCityBasic::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_SkyCityBasic",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_SkyCityBasic::GetClass() const */

long * ZombieAnimRig_SkyCityBasic::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_SkyCityBasic",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_SkyCityBasic::~ZombieAnimRig_SkyCityBasic() */

void __thiscall
ZombieAnimRig_SkyCityBasic::~ZombieAnimRig_SkyCityBasic(ZombieAnimRig_SkyCityBasic *this)

{
  *(undefined ***)this = &PTR_GetClass_068da4b0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_SkyCityBasic_068da7c8;
  ZombieAnimRig_Basic::~ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_SkyCityBasic::~ZombieAnimRig_SkyCityBasic() */

void __thiscall
ZombieAnimRig_SkyCityBasic::~ZombieAnimRig_SkyCityBasic(ZombieAnimRig_SkyCityBasic *this)

{
  ~ZombieAnimRig_SkyCityBasic(this + -0x10);
  return;
}


/* ZombieAnimRig_SkyCityBasic::~ZombieAnimRig_SkyCityBasic() */

void __thiscall
ZombieAnimRig_SkyCityBasic::~ZombieAnimRig_SkyCityBasic(ZombieAnimRig_SkyCityBasic *this)

{
  ~ZombieAnimRig_SkyCityBasic(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_SkyCityBasic::~ZombieAnimRig_SkyCityBasic() */

void __thiscall
ZombieAnimRig_SkyCityBasic::~ZombieAnimRig_SkyCityBasic(ZombieAnimRig_SkyCityBasic *this)

{
  ~ZombieAnimRig_SkyCityBasic(this + -0x10);
  return;
}


/* ZombieAnimRig_SkyCityBasic::ZombieAnimRig_SkyCityBasic() */

void __thiscall
ZombieAnimRig_SkyCityBasic::ZombieAnimRig_SkyCityBasic(ZombieAnimRig_SkyCityBasic *this)

{
  ZombieAnimRig_Basic::ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  *(undefined ***)this = &PTR_GetClass_068da4b0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_SkyCityBasic_068da7c8;
  return;
}


/* ZombieAnimRig_SkyCityBasic::StaticNew() */

ZombieAnimRig_SkyCityBasic * ZombieAnimRig_SkyCityBasic::StaticNew(void)

{
  ZombieAnimRig_SkyCityBasic *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_SkyCityBasic(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SkyCityBasic::getHeadLayerNames() */

void ZombieAnimRig_SkyCityBasic::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b254e8 & 1;
  if (((DAT_06b254e8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b254e8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b254b0,"_zombie_skull_jetpack");
    nop();
    std::string::string((string *)&DAT_06b254b8,"zombie_jaw");
    nop();
    std::string::string((string *)&DAT_06b254c0,"goggles");
    nop();
    __cxa_guard_release(&DAT_06b254e8);
    __cxa_atexit(FUN_047976e0,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b25580 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b25580), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b25508,(string *)&DAT_06b254b0,(allocator *)&DAT_06b254c8);
    __cxa_guard_release(&DAT_06b25580);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b25508,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b25508);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SkyCityBasic::getArmLayerNames() */

void ZombieAnimRig_SkyCityBasic::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b254d0 & 1;
  if (((DAT_06b254d0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b254d0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b255a0,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b255a8,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b255b0,"zombie_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06b255b8,"zombie_hand_outer_03");
    nop();
    __cxa_guard_release(&DAT_06b254d0);
    __cxa_atexit(FUN_04797714,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b255d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b255d8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b25440,(string *)&DAT_06b255a0,(allocator *)&DAT_06b255c0);
    __cxa_guard_release(&DAT_06b255d8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b25440,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b25440);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SkyCityBasic::getArmReplacementPairNames() */

void ZombieAnimRig_SkyCityBasic::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b25570 & 1;
  if (((DAT_06b25570 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b25570), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b25588,"zombie_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b25590,"zombie_arm_outer_upper2");
    nop();
    std::string::string((string *)&DAT_06b25598,"zombie_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06b25570);
    __cxa_atexit(FUN_04797750,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b25558 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b25558), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b25520,(string *)&DAT_06b25588,(allocator *)&DAT_06b255a0);
    __cxa_guard_release(&DAT_06b25558);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b25520,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b25520);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SkyCityBasic::getFlagHandLayerNames() */

void ZombieAnimRig_SkyCityBasic::getFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b254c8 & 1;
  if (((DAT_06b254c8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b254c8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b25538,"_JetPack_body_flag");
    nop();
    __cxa_guard_release(&DAT_06b254c8);
    __cxa_atexit(FUN_04797784,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b25560 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b25560), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b254f0,(string *)&DAT_06b25538,(allocator *)&DAT_06b25540);
    __cxa_guard_release(&DAT_06b25560);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b254f0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b254f0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SkyCityBasic::getNoFlagHandLayerNames() */

void ZombieAnimRig_SkyCityBasic::getNoFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = ZombieAnimRig_Basic::getEmptyLayerNames()::k_layerArray_values & 1;
  if (((ZombieAnimRig_Basic::getEmptyLayerNames()::k_layerArray_values & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&ZombieAnimRig_Basic::getEmptyLayerNames()::k_layerArray_values),
     iVar2 != 0)) {
    __cxa_guard_release(&ZombieAnimRig_Basic::getEmptyLayerNames()::k_layerArray_values);
    __cxa_atexit(FUN_03418c88,uVar3,&DAT_06a88000);
  }
  if (((ZombieAnimRig_Basic::getEmptyLayerNames()::k_layerArray_values & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&ZombieAnimRig_Basic::getEmptyLayerNames()::k_layerArray_values),
     iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)ZombieAnimRig_Basic::getEmptyLayerNames()::k_layerArray,
               (string *)&ZombieAnimRig_Basic::getEmptyLayerNames()::k_layerArray_values,
               (allocator *)&ZombieAnimRig_Basic::getEmptyLayerNames()::k_layerArray_values);
    __cxa_guard_release(&ZombieAnimRig_Basic::getEmptyLayerNames()::k_layerArray_values);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,
                 ZombieAnimRig_Basic::getEmptyLayerNames()::k_layerArray,&DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(ZombieAnimRig_Basic::getEmptyLayerNames()::k_layerArray);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SkyCityBasic::getConeLayerNames() */

void ZombieAnimRig_SkyCityBasic::getConeLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b254a8 & 1;
  if (((DAT_06b254a8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b254a8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b25490,"zombie_armor_cone_norm");
    nop();
    std::string::string((string *)&DAT_06b25498,"zombie_armor_cone_damage_01");
    nop();
    std::string::string((string *)&DAT_06b254a0,"zombie_armor_cone_damage_02");
    nop();
    __cxa_guard_release(&DAT_06b254a8);
    __cxa_atexit(FUN_04797790,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b25458 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b25458), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b25460,(string *)&DAT_06b25490,(allocator *)&DAT_06b254a8);
    __cxa_guard_release(&DAT_06b25458);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b25460,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b25460);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SkyCityBasic::getBucketLayerNames() */

void ZombieAnimRig_SkyCityBasic::getBucketLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b255c0 & 1;
  if (((DAT_06b255c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b255c0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b25540,"zombie_armor_bucket_norm");
    nop();
    std::string::string((string *)&DAT_06b25548,"zombie_armor_bucket_damage_01");
    nop();
    std::string::string((string *)&DAT_06b25550,"zombie_armor_bucket_damage_02");
    nop();
    __cxa_guard_release(&DAT_06b255c0);
    __cxa_atexit(FUN_047977c4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b25568 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b25568), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b25478,(string *)&DAT_06b25540,(allocator *)&DAT_06b25558);
    __cxa_guard_release(&DAT_06b25568);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b25478,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b25478);
}

