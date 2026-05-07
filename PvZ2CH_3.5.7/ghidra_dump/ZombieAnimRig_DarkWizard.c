// Class: ZombieAnimRig_DarkWizard


/* ZombieAnimRig_DarkWizard::StaticGetClass() */

long * ZombieAnimRig_DarkWizard::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_DarkWizard",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_DarkWizard::GetClass() const */

long * ZombieAnimRig_DarkWizard::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_DarkWizard",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_DarkWizard::~ZombieAnimRig_DarkWizard() */

void __thiscall ZombieAnimRig_DarkWizard::~ZombieAnimRig_DarkWizard(ZombieAnimRig_DarkWizard *this)

{
  *(undefined ***)this = &PTR_GetClass_0687ba30;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_DarkWizard_0687bca8;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_DarkWizard::~ZombieAnimRig_DarkWizard() */

void __thiscall ZombieAnimRig_DarkWizard::~ZombieAnimRig_DarkWizard(ZombieAnimRig_DarkWizard *this)

{
  ~ZombieAnimRig_DarkWizard(this + -0x10);
  return;
}


/* ZombieAnimRig_DarkWizard::~ZombieAnimRig_DarkWizard() */

void __thiscall ZombieAnimRig_DarkWizard::~ZombieAnimRig_DarkWizard(ZombieAnimRig_DarkWizard *this)

{
  ~ZombieAnimRig_DarkWizard(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_DarkWizard::~ZombieAnimRig_DarkWizard() */

void __thiscall ZombieAnimRig_DarkWizard::~ZombieAnimRig_DarkWizard(ZombieAnimRig_DarkWizard *this)

{
  ~ZombieAnimRig_DarkWizard(this + -0x10);
  return;
}


/* ZombieAnimRig_DarkWizard::ZombieAnimRig_DarkWizard() */

void __thiscall ZombieAnimRig_DarkWizard::ZombieAnimRig_DarkWizard(ZombieAnimRig_DarkWizard *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0687ba30;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_DarkWizard_0687bca8;
  return;
}


/* ZombieAnimRig_DarkWizard::StaticNew() */

ZombieAnimRig_DarkWizard * ZombieAnimRig_DarkWizard::StaticNew(void)

{
  ZombieAnimRig_DarkWizard *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_DarkWizard(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DarkWizard::StartBigCasting(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_DarkWizard::StartBigCasting
          (ZombieAnimRig_DarkWizard *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"PLANTFOOD");
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
    *(undefined4 *)(this + 0x210) = 9;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DarkWizard::getHeadLayerNames() */

void ZombieAnimRig_DarkWizard::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1b308 & 1;
  if (((DAT_06b1b308 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b308), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1b2c8,"zombie_egyptflag_skull");
    nop();
    std::string::string((string *)&DAT_06b1b2d0,"zombie_egyptflag_jaw");
    nop();
    std::string::string((string *)&DAT_06b1b2d8,"zombie_pupil");
    nop();
    std::string::string((string *)&DAT_06b1b2e0,"wizard_beard_tip");
    nop();
    __cxa_guard_release(&DAT_06b1b308);
    __cxa_atexit(FUN_04623fc8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1b2a0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b2a0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1b2b0,(string *)&DAT_06b1b2c8,(allocator *)&DAT_06b1b2e8);
    __cxa_guard_release(&DAT_06b1b2a0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1b2b0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1b2b0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DarkWizard::getArmLayerNames() */

void ZombieAnimRig_DarkWizard::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1b320 & 1;
  if (((DAT_06b1b320 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b320), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1b340,"zombie_egyptflag_hand_outer");
    nop();
    std::string::string((string *)&DAT_06b1b348,"zombie_egyptflag_arm_outer_lower");
    nop();
    __cxa_guard_release(&DAT_06b1b320);
    __cxa_atexit(FUN_04624004,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1b2a8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b2a8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1b350,(string *)&DAT_06b1b340,(allocator *)&DAT_06b1b350);
    __cxa_guard_release(&DAT_06b1b2a8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1b350,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1b350);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DarkWizard::getArmReplacementPairNames() */

void ZombieAnimRig_DarkWizard::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1b300 & 1;
  if (((DAT_06b1b300 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b300), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1b330,"zombie_egyptflag_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b1b338,"zombie_egyptflag_arm_outer_upper_02");
    nop();
    __cxa_guard_release(&DAT_06b1b300);
    __cxa_atexit(FUN_04624030,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1b298 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b298), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1b368,(string *)&DAT_06b1b330,(allocator *)&DAT_06b1b340);
    __cxa_guard_release(&DAT_06b1b298);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1b368,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1b368);
}

