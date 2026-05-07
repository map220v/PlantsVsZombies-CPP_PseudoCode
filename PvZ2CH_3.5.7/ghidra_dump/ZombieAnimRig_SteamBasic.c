// Class: ZombieAnimRig_SteamBasic


/* ZombieAnimRig_SteamBasic::StaticGetClass() */

long * ZombieAnimRig_SteamBasic::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_SteamBasic",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_SteamBasic::GetClass() const */

long * ZombieAnimRig_SteamBasic::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_SteamBasic",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_SteamBasic::~ZombieAnimRig_SteamBasic() */

void __thiscall ZombieAnimRig_SteamBasic::~ZombieAnimRig_SteamBasic(ZombieAnimRig_SteamBasic *this)

{
  *(undefined ***)this = &PTR_GetClass_068fe250;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_SteamBasic_068fe568;
  ZombieAnimRig_Basic::~ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_SteamBasic::~ZombieAnimRig_SteamBasic() */

void __thiscall ZombieAnimRig_SteamBasic::~ZombieAnimRig_SteamBasic(ZombieAnimRig_SteamBasic *this)

{
  ~ZombieAnimRig_SteamBasic(this + -0x10);
  return;
}


/* ZombieAnimRig_SteamBasic::~ZombieAnimRig_SteamBasic() */

void __thiscall ZombieAnimRig_SteamBasic::~ZombieAnimRig_SteamBasic(ZombieAnimRig_SteamBasic *this)

{
  ~ZombieAnimRig_SteamBasic(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_SteamBasic::~ZombieAnimRig_SteamBasic() */

void __thiscall ZombieAnimRig_SteamBasic::~ZombieAnimRig_SteamBasic(ZombieAnimRig_SteamBasic *this)

{
  ~ZombieAnimRig_SteamBasic(this + -0x10);
  return;
}


/* ZombieAnimRig_SteamBasic::ZombieAnimRig_SteamBasic() */

void __thiscall ZombieAnimRig_SteamBasic::ZombieAnimRig_SteamBasic(ZombieAnimRig_SteamBasic *this)

{
  ZombieAnimRig_Basic::ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  *(undefined ***)this = &PTR_GetClass_068fe250;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_SteamBasic_068fe568;
  return;
}


/* ZombieAnimRig_SteamBasic::StaticNew() */

ZombieAnimRig_SteamBasic * ZombieAnimRig_SteamBasic::StaticNew(void)

{
  ZombieAnimRig_SteamBasic *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_SteamBasic(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SteamBasic::getHeadLayerNames() */

void ZombieAnimRig_SteamBasic::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b294b8 & 1;
  if (((DAT_06b294b8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b294b8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b29400,"zombie_skull");
    nop();
    std::string::string((string *)&DAT_06b29408,"zombie_jaw");
    nop();
    __cxa_guard_release(&DAT_06b294b8);
    __cxa_atexit(FUN_04808874,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b29498 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b29498), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b29360,(string *)&DAT_06b29400,(allocator *)&DAT_06b29410);
    __cxa_guard_release(&DAT_06b29498);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b29360,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b29360);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SteamBasic::getArmLayerNames() */

void ZombieAnimRig_SteamBasic::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b29320 & 1;
  if (((DAT_06b29320 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b29320), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b293d8,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b293e0,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b293e8,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b293f0,"zombie_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06b293f8,"zombie_hand_outer_03");
    nop();
    __cxa_guard_release(&DAT_06b29320);
    __cxa_atexit(FUN_048088a0,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b29448 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b29448), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b293c0,(string *)&DAT_06b293d8,(allocator *)&DAT_06b29400);
    __cxa_guard_release(&DAT_06b29448);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b293c0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b293c0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SteamBasic::getArmReplacementPairNames() */

void ZombieAnimRig_SteamBasic::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b29438 & 1;
  if (((DAT_06b29438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b29438), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b29410,"zombie_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b29418,"zombie_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06b29438);
    __cxa_atexit(FUN_048088d8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b29450 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b29450), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b29340,(string *)&DAT_06b29410,(allocator *)&sClass);
    __cxa_guard_release(&DAT_06b29450);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b29340,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b29340);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SteamBasic::getFlagHandLayerNames() */

void ZombieAnimRig_SteamBasic::getFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b29378 & 1;
  if (((DAT_06b29378 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b29378), iVar2 != 0)) {
    __cxa_guard_release(&DAT_06b29378);
    __cxa_atexit(FUN_0480886c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b29358 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b29358), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b29380,(string *)&DAT_06b29490,(allocator *)&DAT_06b29490);
    __cxa_guard_release(&DAT_06b29358);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b29380,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b29380);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SteamBasic::getNoFlagHandLayerNames() */

void ZombieAnimRig_SteamBasic::getNoFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b293b8 & 1;
  if (((DAT_06b293b8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b293b8), iVar2 != 0)) {
    __cxa_guard_release(&DAT_06b293b8);
    __cxa_atexit(FUN_04808870,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b29470 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b29470), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b29308,(string *)&DAT_06b29340,(allocator *)&DAT_06b29340);
    __cxa_guard_release(&DAT_06b29470);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b29308,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b29308);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SteamBasic::getConeLayerNames() */

void ZombieAnimRig_SteamBasic::getConeLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b29398 & 1;
  if (((DAT_06b29398 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b29398), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b294a0,"zombie_armor_cone_norm");
    nop();
    std::string::string((string *)&DAT_06b294a8,"zombie_armor_cone_damage_01");
    nop();
    std::string::string((string *)&DAT_06b294b0,"zombie_armor_cone_damage_02");
    nop();
    __cxa_guard_release(&DAT_06b29398);
    __cxa_atexit(FUN_04808904,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b293a0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b293a0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b29328,(string *)&DAT_06b294a0,(allocator *)&DAT_06b294b8);
    __cxa_guard_release(&DAT_06b293a0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b29328,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b29328);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SteamBasic::getBucketLayerNames() */

void ZombieAnimRig_SteamBasic::getBucketLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b29490 & 1;
  if (((DAT_06b29490 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b29490), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b29458,"zombie_armor_bucket_norm");
    nop();
    std::string::string((string *)&DAT_06b29460,"zombie_armor_bucket_damage_01");
    nop();
    std::string::string((string *)&DAT_06b29468,"zombie_armor_bucket_damage_02");
    nop();
    __cxa_guard_release(&DAT_06b29490);
    __cxa_atexit(FUN_04808938,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b29440 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b29440), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b29478,(string *)&DAT_06b29458,(allocator *)&DAT_06b29470);
    __cxa_guard_release(&DAT_06b29440);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b29478,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b29478);
}

