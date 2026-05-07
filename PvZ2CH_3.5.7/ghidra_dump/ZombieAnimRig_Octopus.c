// Class: ZombieAnimRig_Octopus


/* ZombieAnimRig_Octopus::StaticGetClass() */

long * ZombieAnimRig_Octopus::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_BeachBasic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_Octopus",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_Octopus::GetClass() const */

long * ZombieAnimRig_Octopus::GetClass(void)

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
  uVar2 = ZombieAnimRig_BeachBasic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_Octopus",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_Octopus::~ZombieAnimRig_Octopus() */

void __thiscall ZombieAnimRig_Octopus::~ZombieAnimRig_Octopus(ZombieAnimRig_Octopus *this)

{
  *(undefined ***)this = &PTR_GetClass_06884190;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Octopus_068844a8;
  ZombieAnimRig_BeachBasic::~ZombieAnimRig_BeachBasic((ZombieAnimRig_BeachBasic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Octopus::~ZombieAnimRig_Octopus() */

void __thiscall ZombieAnimRig_Octopus::~ZombieAnimRig_Octopus(ZombieAnimRig_Octopus *this)

{
  ~ZombieAnimRig_Octopus(this + -0x10);
  return;
}


/* ZombieAnimRig_Octopus::~ZombieAnimRig_Octopus() */

void __thiscall ZombieAnimRig_Octopus::~ZombieAnimRig_Octopus(ZombieAnimRig_Octopus *this)

{
  ~ZombieAnimRig_Octopus(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Octopus::~ZombieAnimRig_Octopus() */

void __thiscall ZombieAnimRig_Octopus::~ZombieAnimRig_Octopus(ZombieAnimRig_Octopus *this)

{
  ~ZombieAnimRig_Octopus(this + -0x10);
  return;
}


/* ZombieAnimRig_Octopus::ZombieAnimRig_Octopus() */

void __thiscall ZombieAnimRig_Octopus::ZombieAnimRig_Octopus(ZombieAnimRig_Octopus *this)

{
  ZombieAnimRig_BeachBasic::ZombieAnimRig_BeachBasic((ZombieAnimRig_BeachBasic *)this);
  *(undefined ***)this = &PTR_GetClass_06884190;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Octopus_068844a8;
  return;
}


/* ZombieAnimRig_Octopus::StaticNew() */

ZombieAnimRig_Octopus * ZombieAnimRig_Octopus::StaticNew(void)

{
  ZombieAnimRig_Octopus *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_Octopus(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Octopus::getHeadLayerNames() */

void ZombieAnimRig_Octopus::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1c2a8 & 1;
  if (((DAT_06b1c2a8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1c2a8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1c300,"zombie_octo_jaw");
    nop();
    std::string::string((string *)&DAT_06b1c308,"zombie_octo_skull");
    nop();
    std::string::string((string *)&DAT_06b1c310,"Pupil1");
    nop();
    std::string::string((string *)&DAT_06b1c318,"Pupil2");
    nop();
    std::string::string((string *)&DAT_06b1c320,"zombie_octopuss_eye");
    nop();
    std::string::string((string *)&DAT_06b1c328,"zombie_octopuss_eye2");
    nop();
    std::string::string((string *)&DAT_06b1c330,"zombie_octopuss_eye2_closed");
    nop();
    std::string::string((string *)&DAT_06b1c338,"zombie_octopuss_eye2_half");
    nop();
    std::string::string((string *)&DAT_06b1c340,"zombie_octopuss_eye_closed");
    nop();
    std::string::string((string *)&DAT_06b1c348,"zombie_octopuss_eye_half");
    nop();
    std::string::string((string *)&DAT_06b1c350,"zombie_octopuss_head");
    nop();
    std::string::string((string *)&DAT_06b1c358,"zombie_octopuss_headback");
    nop();
    __cxa_guard_release(&DAT_06b1c2a8);
    __cxa_atexit(FUN_0464313c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1c430 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1c430), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1c2b0,(string *)&DAT_06b1c300,(allocator *)&SquidProjectile::sClass
              );
    __cxa_guard_release(&DAT_06b1c430);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1c2b0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1c2b0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Octopus::getArmLayerNames() */

void ZombieAnimRig_Octopus::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1c380 & 1;
  if (((DAT_06b1c380 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1c380), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1c3e0,"Octopuss_eye_red");
    nop();
    std::string::string((string *)&DAT_06b1c3e8,"octopuss_eye_red2");
    nop();
    std::string::string((string *)&DAT_06b1c3f0,"octopuss_red_head");
    nop();
    std::string::string((string *)&DAT_06b1c3f8,"octopuss_red_headback");
    nop();
    std::string::string((string *)&DAT_06b1c400,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b1c408,"zombie_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06b1c410,"zombie_octo_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b1c418,"zombie_octo_hand_outer");
    nop();
    __cxa_guard_release(&DAT_06b1c380);
    __cxa_atexit(FUN_04643174,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1c388 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1c388), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1c2d0,(string *)&DAT_06b1c3e0,(allocator *)&DAT_06b1c420);
    __cxa_guard_release(&DAT_06b1c388);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1c2d0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1c2d0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Octopus::getArmReplacementPairNames() */

void ZombieAnimRig_Octopus::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1c2c8 & 1;
  if (((DAT_06b1c2c8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1c2c8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1c2f0,"zombie_octo_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b1c2f8,"zombie_octo_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06b1c2c8);
    __cxa_atexit(FUN_046431ac,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1c2e8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1c2e8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1c3a8,(string *)&DAT_06b1c2f0,(allocator *)&DAT_06b1c300);
    __cxa_guard_release(&DAT_06b1c2e8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1c3a8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1c3a8);
}

