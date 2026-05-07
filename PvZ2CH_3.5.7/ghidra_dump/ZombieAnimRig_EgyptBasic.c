// Class: ZombieAnimRig_EgyptBasic


/* ZombieAnimRig_EgyptBasic::StaticGetClass() */

long * ZombieAnimRig_EgyptBasic::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_EgyptBasic",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_EgyptBasic::GetClass() const */

long * ZombieAnimRig_EgyptBasic::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_EgyptBasic",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_EgyptBasic::~ZombieAnimRig_EgyptBasic() */

void __thiscall ZombieAnimRig_EgyptBasic::~ZombieAnimRig_EgyptBasic(ZombieAnimRig_EgyptBasic *this)

{
  *(undefined ***)this = &PTR_GetClass_0686f200;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_EgyptBasic_0686f518;
  ZombieAnimRig_Basic::~ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_EgyptBasic::~ZombieAnimRig_EgyptBasic() */

void __thiscall ZombieAnimRig_EgyptBasic::~ZombieAnimRig_EgyptBasic(ZombieAnimRig_EgyptBasic *this)

{
  ~ZombieAnimRig_EgyptBasic(this + -0x10);
  return;
}


/* ZombieAnimRig_EgyptBasic::~ZombieAnimRig_EgyptBasic() */

void __thiscall ZombieAnimRig_EgyptBasic::~ZombieAnimRig_EgyptBasic(ZombieAnimRig_EgyptBasic *this)

{
  ~ZombieAnimRig_EgyptBasic(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_EgyptBasic::~ZombieAnimRig_EgyptBasic() */

void __thiscall ZombieAnimRig_EgyptBasic::~ZombieAnimRig_EgyptBasic(ZombieAnimRig_EgyptBasic *this)

{
  ~ZombieAnimRig_EgyptBasic(this + -0x10);
  return;
}


/* ZombieAnimRig_EgyptBasic::ZombieAnimRig_EgyptBasic() */

void __thiscall ZombieAnimRig_EgyptBasic::ZombieAnimRig_EgyptBasic(ZombieAnimRig_EgyptBasic *this)

{
  ZombieAnimRig_Basic::ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  *(undefined ***)this = &PTR_GetClass_0686f200;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_EgyptBasic_0686f518;
  return;
}


/* ZombieAnimRig_EgyptBasic::StaticNew() */

ZombieAnimRig_EgyptBasic * ZombieAnimRig_EgyptBasic::StaticNew(void)

{
  ZombieAnimRig_EgyptBasic *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_EgyptBasic(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EgyptBasic::getHeadLayerNames() */

void ZombieAnimRig_EgyptBasic::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b176d8 & 1;
  if (((DAT_06b176d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b176d8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b17600,"zombie_egypt_skull");
    nop();
    std::string::string((string *)&DAT_06b17608,"zombie_egypt_jaw");
    nop();
    __cxa_guard_release(&DAT_06b176d8);
    __cxa_atexit(FUN_045fd958,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b17770 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17770), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b17610,(string *)&DAT_06b17600,(allocator *)&DAT_06b17610);
    __cxa_guard_release(&DAT_06b17770);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b17610,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b17610);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EgyptBasic::getArmLayerNames() */

void ZombieAnimRig_EgyptBasic::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b176c0 & 1;
  if (((DAT_06b176c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b176c0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b17780,"zombie_egypt_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b17788,"zombie_egypt_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b17790,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b17798,"zombie_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06b177a0,"zombie_hand_outer_03");
    nop();
    __cxa_guard_release(&DAT_06b176c0);
    __cxa_atexit(FUN_045fd984,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b177c8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b177c8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b177d8,(string *)&DAT_06b17780,(allocator *)&DAT_06b177a8);
    __cxa_guard_release(&DAT_06b177c8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b177d8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b177d8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EgyptBasic::getArmReplacementPairNames() */

void ZombieAnimRig_EgyptBasic::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b17718 & 1;
  if (((DAT_06b17718 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17718), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b176f0,"zombie_egypt_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b176f8,"zombie_egypt_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06b17718);
    __cxa_atexit(FUN_045fd9bc,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b17680 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17680), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b17628,(string *)&DAT_06b176f0,(allocator *)&DAT_06b17700);
    __cxa_guard_release(&DAT_06b17680);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b17628,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b17628);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EgyptBasic::getFlagHandLayerNames() */

void ZombieAnimRig_EgyptBasic::getFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b17660 & 1;
  if (((DAT_06b17660 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17660), iVar2 != 0)) {
    __cxa_guard_release(&DAT_06b17660);
    __cxa_atexit(FUN_045fd950,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b17768 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17768), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b17648,(string *)&DAT_06b17628,(allocator *)&DAT_06b17628);
    __cxa_guard_release(&DAT_06b17768);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b17648,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b17648);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EgyptBasic::getNoFlagHandLayerNames() */

void ZombieAnimRig_EgyptBasic::getNoFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b176e0 & 1;
  if (((DAT_06b176e0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b176e0), iVar2 != 0)) {
    __cxa_guard_release(&DAT_06b176e0);
    __cxa_atexit(FUN_045fd954,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b177c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b177c0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b176a8,(string *)&DAT_06b17688,(allocator *)&DAT_06b17688);
    __cxa_guard_release(&DAT_06b177c0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b176a8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b176a8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EgyptBasic::getConeLayerNames() */

void ZombieAnimRig_EgyptBasic::getConeLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b177d0 & 1;
  if (((DAT_06b177d0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b177d0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b177a8,"zombie_egypt_armor1_norm");
    nop();
    std::string::string((string *)&DAT_06b177b0,"zombie_egypt_armor1_damage_01");
    nop();
    std::string::string((string *)&DAT_06b177b8,"zombie_egypt_armor1_damage_02");
    nop();
    __cxa_guard_release(&DAT_06b177d0);
    __cxa_atexit(FUN_045fd9e8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b17760 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17760), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b17748,(string *)&DAT_06b177a8,(allocator *)&DAT_06b177c0);
    __cxa_guard_release(&DAT_06b17760);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b17748,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b17748);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EgyptBasic::getBucketLayerNames() */

void ZombieAnimRig_EgyptBasic::getBucketLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b176e8 & 1;
  if (((DAT_06b176e8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b176e8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b17690,"zombie_egypt_armor2_norm");
    nop();
    std::string::string((string *)&DAT_06b17698,"zombie_egypt_armor2_damage_01");
    nop();
    std::string::string((string *)&DAT_06b176a0,"zombie_egypt_armor2_damage_02");
    nop();
    __cxa_guard_release(&DAT_06b176e8);
    __cxa_atexit(FUN_045fda1c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b17778 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17778), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b17700,(string *)&DAT_06b17690,(allocator *)&DAT_06b176a8);
    __cxa_guard_release(&DAT_06b17778);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b17700,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b17700);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EgyptBasic::getHelmetLayerNames() */

void ZombieAnimRig_EgyptBasic::getHelmetLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b17688 & 1;
  if (((DAT_06b17688 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17688), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b17668,"zombie_egypt_armor3_norm");
    nop();
    std::string::string((string *)&DAT_06b17670,"zombie_egypt_armor3_damage_01");
    nop();
    std::string::string((string *)&DAT_06b17678,"zombie_egypt_armor3_damage_02");
    nop();
    __cxa_guard_release(&DAT_06b17688);
    __cxa_atexit(FUN_045fda50,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b177f0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b177f0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b17720,(string *)&DAT_06b17668,(allocator *)&DAT_06b17680);
    __cxa_guard_release(&DAT_06b177f0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b17720,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b17720);
}

