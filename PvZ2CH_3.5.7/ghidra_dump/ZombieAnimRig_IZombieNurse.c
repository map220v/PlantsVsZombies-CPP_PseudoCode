// Class: ZombieAnimRig_IZombieNurse


/* ZombieAnimRig_IZombieNurse::StaticGetClass() */

long * ZombieAnimRig_IZombieNurse::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_PVPNurse::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_IZombieNurse",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_IZombieNurse::GetClass() const */

long * ZombieAnimRig_IZombieNurse::GetClass(void)

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
  uVar2 = ZombieAnimRig_PVPNurse::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_IZombieNurse",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_IZombieNurse::~ZombieAnimRig_IZombieNurse() */

void __thiscall
ZombieAnimRig_IZombieNurse::~ZombieAnimRig_IZombieNurse(ZombieAnimRig_IZombieNurse *this)

{
  *(undefined ***)this = &PTR_GetClass_06623340;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_IZombieNurse_066235b8;
  ZombieAnimRig_PVPNurse::~ZombieAnimRig_PVPNurse((ZombieAnimRig_PVPNurse *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_IZombieNurse::~ZombieAnimRig_IZombieNurse() */

void __thiscall
ZombieAnimRig_IZombieNurse::~ZombieAnimRig_IZombieNurse(ZombieAnimRig_IZombieNurse *this)

{
  ~ZombieAnimRig_IZombieNurse(this + -0x10);
  return;
}


/* ZombieAnimRig_IZombieNurse::~ZombieAnimRig_IZombieNurse() */

void __thiscall
ZombieAnimRig_IZombieNurse::~ZombieAnimRig_IZombieNurse(ZombieAnimRig_IZombieNurse *this)

{
  ~ZombieAnimRig_IZombieNurse(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_IZombieNurse::~ZombieAnimRig_IZombieNurse() */

void __thiscall
ZombieAnimRig_IZombieNurse::~ZombieAnimRig_IZombieNurse(ZombieAnimRig_IZombieNurse *this)

{
  ~ZombieAnimRig_IZombieNurse(this + -0x10);
  return;
}


/* ZombieAnimRig_IZombieNurse::ZombieAnimRig_IZombieNurse() */

void __thiscall
ZombieAnimRig_IZombieNurse::ZombieAnimRig_IZombieNurse(ZombieAnimRig_IZombieNurse *this)

{
  ZombieAnimRig_PVPNurse::ZombieAnimRig_PVPNurse((ZombieAnimRig_PVPNurse *)this);
  *(undefined ***)this = &PTR_GetClass_06623340;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_IZombieNurse_066235b8;
  return;
}


/* ZombieAnimRig_IZombieNurse::StaticNew() */

ZombieAnimRig_IZombieNurse * ZombieAnimRig_IZombieNurse::StaticNew(void)

{
  ZombieAnimRig_IZombieNurse *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_IZombieNurse(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_IZombieNurse::getHeadLayerNames() */

void ZombieAnimRig_IZombieNurse::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06a9fa00 & 1;
  if (((DAT_06a9fa00 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06a9fa00), iVar2 != 0)) {
    std::string::string((string *)&DAT_06a9f780,"zombie_skull");
    nop();
    std::string::string((string *)&DAT_06a9f788,"zombie_jaw");
    nop();
    std::string::string((string *)&DAT_06a9f790,"_zombie_head_idle");
    nop();
    std::string::string((string *)&DAT_06a9f798,"_zombie_head_walk");
    nop();
    std::string::string((string *)&DAT_06a9f7a0,"_zombie_head_eat");
    nop();
    __cxa_guard_release(&DAT_06a9fa00);
    __cxa_atexit(FUN_03418df8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06a9fc70 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06a9fc70), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06a9fa68,(string *)&DAT_06a9f780,(allocator *)&DAT_06a9f7a8);
    __cxa_guard_release(&DAT_06a9fc70);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06a9fa68,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06a9fa68);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_IZombieNurse::getArmLayerNames() */

void ZombieAnimRig_IZombieNurse::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06a9f760 & 1;
  if (((DAT_06a9f760 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06a9f760), iVar2 != 0)) {
    std::string::string((string *)&DAT_06a9fa80,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06a9fa88,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06a9fa90,"zombie_hand_outer_02");
    nop();
    __cxa_guard_release(&DAT_06a9f760);
    __cxa_atexit(FUN_03418e30,uVar3,&DAT_06a88000);
  }
  if (((DAT_06a9f888 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06a9f888), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06a9fc50,(string *)&DAT_06a9fa80,(allocator *)&ZombieWallnut::sClass);
    __cxa_guard_release(&DAT_06a9f888);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06a9fc50,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06a9fc50);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_IZombieNurse::getArmReplacementPairNames() */

void ZombieAnimRig_IZombieNurse::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06a9f700 & 1;
  if (((DAT_06a9f700 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06a9f700), iVar2 != 0)) {
    std::string::string((string *)&DAT_06a9f800,"zombie_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06a9f808,"zombie_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06a9f700);
    __cxa_atexit(FUN_03418e64,uVar3,&DAT_06a88000);
  }
  if (((DAT_06a9fc68 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06a9fc68), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06a9f9e8,(string *)&DAT_06a9f800,(allocator *)&sClass);
    __cxa_guard_release(&DAT_06a9fc68);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06a9f9e8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06a9f9e8);
}

