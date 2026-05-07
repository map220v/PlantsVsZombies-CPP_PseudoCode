// Class: ZombieAnimRig_PirateBasic


/* ZombieAnimRig_PirateBasic::StaticGetClass() */

long * ZombieAnimRig_PirateBasic::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_PirateBasic",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_PirateBasic::GetClass() const */

long * ZombieAnimRig_PirateBasic::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_PirateBasic",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_PirateBasic::~ZombieAnimRig_PirateBasic() */

void __thiscall
ZombieAnimRig_PirateBasic::~ZombieAnimRig_PirateBasic(ZombieAnimRig_PirateBasic *this)

{
  *(undefined ***)this = &PTR_GetClass_068720c0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_PirateBasic_068723d8;
  ZombieAnimRig_Basic::~ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_PirateBasic::~ZombieAnimRig_PirateBasic() */

void __thiscall
ZombieAnimRig_PirateBasic::~ZombieAnimRig_PirateBasic(ZombieAnimRig_PirateBasic *this)

{
  ~ZombieAnimRig_PirateBasic(this + -0x10);
  return;
}


/* ZombieAnimRig_PirateBasic::~ZombieAnimRig_PirateBasic() */

void __thiscall
ZombieAnimRig_PirateBasic::~ZombieAnimRig_PirateBasic(ZombieAnimRig_PirateBasic *this)

{
  ~ZombieAnimRig_PirateBasic(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_PirateBasic::~ZombieAnimRig_PirateBasic() */

void __thiscall
ZombieAnimRig_PirateBasic::~ZombieAnimRig_PirateBasic(ZombieAnimRig_PirateBasic *this)

{
  ~ZombieAnimRig_PirateBasic(this + -0x10);
  return;
}


/* ZombieAnimRig_PirateBasic::ZombieAnimRig_PirateBasic() */

void __thiscall
ZombieAnimRig_PirateBasic::ZombieAnimRig_PirateBasic(ZombieAnimRig_PirateBasic *this)

{
  ZombieAnimRig_Basic::ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  *(undefined ***)this = &PTR_GetClass_068720c0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_PirateBasic_068723d8;
  return;
}


/* ZombieAnimRig_PirateBasic::StaticNew() */

ZombieAnimRig_PirateBasic * ZombieAnimRig_PirateBasic::StaticNew(void)

{
  ZombieAnimRig_PirateBasic *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_PirateBasic(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_PirateBasic::getHeadLayerNames() */

void ZombieAnimRig_PirateBasic::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b185f8 & 1;
  if (((DAT_06b185f8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b185f8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b18620,"zombie_pirate_basic_skull");
    nop();
    std::string::string((string *)&DAT_06b18628,"zombie_pirate_basic_jaw");
    nop();
    __cxa_guard_release(&DAT_06b185f8);
    __cxa_atexit(FUN_04607ee8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b18690 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18690), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b185a8,(string *)&DAT_06b18620,(allocator *)&DAT_06b18630);
    __cxa_guard_release(&DAT_06b18690);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b185a8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b185a8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_PirateBasic::getArmLayerNames() */

void ZombieAnimRig_PirateBasic::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b18670 & 1;
  if (((DAT_06b18670 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18670), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b18748,"zombie_pirate_basic_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b18750,"zombie_pirate_basic_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b18758,"zombie_pirate_basic_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06b18760,"zombie_hand_outer_01");
    nop();
    __cxa_guard_release(&DAT_06b18670);
    __cxa_atexit(FUN_04607f14,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b18668 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18668), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b18708,(string *)&DAT_06b18748,(allocator *)&DAT_06b18768);
    __cxa_guard_release(&DAT_06b18668);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b18708,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b18708);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_PirateBasic::getArmReplacementPairNames() */

void ZombieAnimRig_PirateBasic::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b186c8 & 1;
  if (((DAT_06b186c8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b186c8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b186d0,"zombie_pirate_basic_arm_outer_upper_01");
    nop();
    std::string::string((string *)&DAT_06b186d8,"zombie_pirate_basic_arm_outer_upper_02");
    nop();
    __cxa_guard_release(&DAT_06b186c8);
    __cxa_atexit(FUN_04607f50,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b18630 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18630), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b185c0,(string *)&DAT_06b186d0,(allocator *)&DAT_06b186e0);
    __cxa_guard_release(&DAT_06b18630);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b185c0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b185c0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_PirateBasic::getFlagHandLayerNames() */

void ZombieAnimRig_PirateBasic::getFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b18720 & 1;
  if (((DAT_06b18720 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18720), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b18648,"FIXME, 0 size array");
    nop();
    __cxa_guard_release(&DAT_06b18720);
    __cxa_atexit(FUN_04607f7c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b18728 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18728), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b18600,(string *)&DAT_06b18648,(allocator *)&DAT_06b18650);
    __cxa_guard_release(&DAT_06b18728);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b18600,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b18600);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_PirateBasic::getNoFlagHandLayerNames() */

void ZombieAnimRig_PirateBasic::getNoFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b18618 & 1;
  if (((DAT_06b18618 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18618), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b185f0,"FIXME, 0 size array");
    nop();
    __cxa_guard_release(&DAT_06b18618);
    __cxa_atexit(FUN_04607f88,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b18738 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18738), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b18678,(string *)&DAT_06b185f0,(allocator *)&DAT_06b185f8);
    __cxa_guard_release(&DAT_06b18738);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b18678,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b18678);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_PirateBasic::getConeLayerNames() */

void ZombieAnimRig_PirateBasic::getConeLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b186e8 & 1;
  if (((DAT_06b186e8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b186e8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b185d8,"zombie_pirate_armor_cone_norm");
    nop();
    std::string::string((string *)&DAT_06b185e0,"zombie_pirate_armor_cone_damage_01");
    nop();
    std::string::string((string *)&DAT_06b185e8,"zombie_pirate_armor_cone_damage_02");
    nop();
    __cxa_guard_release(&DAT_06b186e8);
    __cxa_atexit(FUN_04607f94,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b18730 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18730), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b18650,(string *)&DAT_06b185d8,(allocator *)&DAT_06b185f0);
    __cxa_guard_release(&DAT_06b18730);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b18650,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b18650);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_PirateBasic::getBucketLayerNames() */

void ZombieAnimRig_PirateBasic::getBucketLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b18740 & 1;
  if (((DAT_06b18740 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18740), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b186f0,"zombie_pirate_armor_bucket_norm");
    nop();
    std::string::string((string *)&DAT_06b186f8,"zombie_pirate_armor_bucket_damage_01");
    nop();
    std::string::string((string *)&DAT_06b18700,"zombie_pirate_armor_bucket_damage_02");
    nop();
    __cxa_guard_release(&DAT_06b18740);
    __cxa_atexit(FUN_04607fc8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b186e0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b186e0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b186b0,(string *)&DAT_06b186f0,(allocator *)&DAT_06b18708);
    __cxa_guard_release(&DAT_06b186e0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b186b0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b186b0);
}

