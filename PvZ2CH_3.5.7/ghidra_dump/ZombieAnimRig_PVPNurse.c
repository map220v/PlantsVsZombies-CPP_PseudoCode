// Class: ZombieAnimRig_PVPNurse


/* ZombieAnimRig_PVPNurse::ZombieAnimRig_PVPNurse() */

void __thiscall ZombieAnimRig_PVPNurse::ZombieAnimRig_PVPNurse(ZombieAnimRig_PVPNurse *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0691c770;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_PVPNurse_0691c9e8;
  return;
}


/* ZombieAnimRig_PVPNurse::~ZombieAnimRig_PVPNurse() */

void __thiscall ZombieAnimRig_PVPNurse::~ZombieAnimRig_PVPNurse(ZombieAnimRig_PVPNurse *this)

{
  *(undefined ***)this = &PTR_GetClass_0691c770;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_PVPNurse_0691c9e8;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_PVPNurse::~ZombieAnimRig_PVPNurse() */

void __thiscall ZombieAnimRig_PVPNurse::~ZombieAnimRig_PVPNurse(ZombieAnimRig_PVPNurse *this)

{
  ~ZombieAnimRig_PVPNurse(this + -0x10);
  return;
}


/* ZombieAnimRig_PVPNurse::~ZombieAnimRig_PVPNurse() */

void __thiscall ZombieAnimRig_PVPNurse::~ZombieAnimRig_PVPNurse(ZombieAnimRig_PVPNurse *this)

{
  ~ZombieAnimRig_PVPNurse(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_PVPNurse::~ZombieAnimRig_PVPNurse() */

void __thiscall ZombieAnimRig_PVPNurse::~ZombieAnimRig_PVPNurse(ZombieAnimRig_PVPNurse *this)

{
  ~ZombieAnimRig_PVPNurse(this + -0x10);
  return;
}


/* ZombieAnimRig_PVPNurse::StaticGetClass() */

long * ZombieAnimRig_PVPNurse::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_PVPNurse",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_PVPNurse::GetClass() const */

long * ZombieAnimRig_PVPNurse::GetClass(void)

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
  uVar2 = ZombieAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_PVPNurse",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_PVPNurse::StaticNew() */

ZombieAnimRig_PVPNurse * ZombieAnimRig_PVPNurse::StaticNew(void)

{
  ZombieAnimRig_PVPNurse *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_PVPNurse(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_PVPNurse::StartTreat(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
ZombieAnimRig_PVPNurse::StartTreat(ZombieAnimRig_PVPNurse *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"attack");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = (*pcVar2)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x210) = 8;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_PVPNurse::getHeadLayerNames() */

void ZombieAnimRig_PVPNurse::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b73a10 & 1;
  if (((DAT_06b73a10 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b73a10), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b73a18,"zombie_skull");
    nop();
    std::string::string((string *)&DAT_06b73a20,"zombie_jaw");
    nop();
    __cxa_guard_release(&DAT_06b73a10);
    __cxa_atexit(FUN_0499610c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b739b0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b739b0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b73988,(string *)&DAT_06b73a18,
               (allocator *)&ZombiePVPNurseProps::sClass);
    __cxa_guard_release(&DAT_06b739b0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b73988,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b73988);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_PVPNurse::getArmLayerNames() */

void ZombieAnimRig_PVPNurse::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b73a88 & 1;
  if (((DAT_06b73a88 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b73a88), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b73ad8,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b73ae0,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b73ae8,"zombie_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06b73af0,"zombie_hand_outer_03");
    nop();
    __cxa_guard_release(&DAT_06b73a88);
    __cxa_atexit(FUN_04996138,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b73a00 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b73a00), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b739b8,(string *)&DAT_06b73ad8,(allocator *)&DAT_06b73af8);
    __cxa_guard_release(&DAT_06b73a00);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b739b8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b739b8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_PVPNurse::getArmReplacementPairNames() */

void ZombieAnimRig_PVPNurse::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b73a50 & 1;
  if (((DAT_06b73a50 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b73a50), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b73a40,"zombie_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b73a48,"zombie_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06b73a50);
    __cxa_atexit(FUN_04996174,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b739d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b739d8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b73a98,(string *)&DAT_06b73a40,(allocator *)&DAT_06b73a50);
    __cxa_guard_release(&DAT_06b739d8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b73a98,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b73a98);
}

