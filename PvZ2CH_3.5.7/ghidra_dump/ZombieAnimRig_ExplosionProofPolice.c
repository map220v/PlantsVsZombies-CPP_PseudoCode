// Class: ZombieAnimRig_ExplosionProofPolice


/* ZombieAnimRig_ExplosionProofPolice::StaticGetClass() */

long * ZombieAnimRig_ExplosionProofPolice::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_ExplosionProofPolice",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_ExplosionProofPolice::GetClass() const */

long * ZombieAnimRig_ExplosionProofPolice::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_ExplosionProofPolice",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_ExplosionProofPolice::~ZombieAnimRig_ExplosionProofPolice() */

void __thiscall
ZombieAnimRig_ExplosionProofPolice::~ZombieAnimRig_ExplosionProofPolice
          (ZombieAnimRig_ExplosionProofPolice *this)

{
  *(undefined ***)this = &PTR_GetClass_06726550;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ExplosionProofPolice_06726868;
  ZombieAnimRig_Basic::~ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ExplosionProofPolice::~ZombieAnimRig_ExplosionProofPolice() */

void __thiscall
ZombieAnimRig_ExplosionProofPolice::~ZombieAnimRig_ExplosionProofPolice
          (ZombieAnimRig_ExplosionProofPolice *this)

{
  ~ZombieAnimRig_ExplosionProofPolice(this + -0x10);
  return;
}


/* ZombieAnimRig_ExplosionProofPolice::~ZombieAnimRig_ExplosionProofPolice() */

void __thiscall
ZombieAnimRig_ExplosionProofPolice::~ZombieAnimRig_ExplosionProofPolice
          (ZombieAnimRig_ExplosionProofPolice *this)

{
  ~ZombieAnimRig_ExplosionProofPolice(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ExplosionProofPolice::~ZombieAnimRig_ExplosionProofPolice() */

void __thiscall
ZombieAnimRig_ExplosionProofPolice::~ZombieAnimRig_ExplosionProofPolice
          (ZombieAnimRig_ExplosionProofPolice *this)

{
  ~ZombieAnimRig_ExplosionProofPolice(this + -0x10);
  return;
}


/* ZombieAnimRig_ExplosionProofPolice::ZombieAnimRig_ExplosionProofPolice() */

void __thiscall
ZombieAnimRig_ExplosionProofPolice::ZombieAnimRig_ExplosionProofPolice
          (ZombieAnimRig_ExplosionProofPolice *this)

{
  ZombieAnimRig_Basic::ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  *(undefined ***)this = &PTR_GetClass_06726550;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ExplosionProofPolice_06726868;
  return;
}


/* ZombieAnimRig_ExplosionProofPolice::StaticNew() */

ZombieAnimRig_ExplosionProofPolice * ZombieAnimRig_ExplosionProofPolice::StaticNew(void)

{
  ZombieAnimRig_ExplosionProofPolice *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_ExplosionProofPolice(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ExplosionProofPolice::getArmReplacementPairNames() */

void ZombieAnimRig_ExplosionProofPolice::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06aca520 & 1;
  if (((DAT_06aca520 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06aca520), iVar2 != 0)) {
    std::string::string((string *)&DAT_06aca4c8,"zombie_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06aca4d0,"zombie_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06aca520);
    __cxa_atexit(FUN_03af6b24,uVar3,&DAT_06a88000);
  }
  if (((DAT_06aca558 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06aca558), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06aca4d8,(string *)&DAT_06aca4c8,(allocator *)&DAT_06aca4d8);
    __cxa_guard_release(&DAT_06aca558);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06aca4d8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06aca4d8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ExplosionProofPolice::getConeLayerNames() */

void ZombieAnimRig_ExplosionProofPolice::getConeLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06aca4b8 & 1;
  if (((DAT_06aca4b8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06aca4b8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06aca560,"zombie_armor_cone_norm");
    nop();
    std::string::string((string *)&DAT_06aca568,"zombie_armor_cone_damage_01");
    nop();
    std::string::string((string *)&DAT_06aca570,"zombie_armor_cone_damage_02");
    nop();
    __cxa_guard_release(&DAT_06aca4b8);
    __cxa_atexit(FUN_03af6b50,uVar3,&DAT_06a88000);
  }
  if (((DAT_06aca500 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06aca500), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06aca490,(string *)&DAT_06aca560,(allocator *)&DAT_06aca578);
    __cxa_guard_release(&DAT_06aca500);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06aca490,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06aca490);
}

