// Class: ZombieAnimRig_RomanHealer


/* ZombieAnimRig_RomanHealer::StaticGetClass() */

long * ZombieAnimRig_RomanHealer::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_RomanHealer",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_RomanHealer::GetClass() const */

long * ZombieAnimRig_RomanHealer::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_RomanHealer",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_RomanHealer::~ZombieAnimRig_RomanHealer() */

void __thiscall
ZombieAnimRig_RomanHealer::~ZombieAnimRig_RomanHealer(ZombieAnimRig_RomanHealer *this)

{
  *(undefined ***)this = &PTR_GetClass_06a00d10;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_RomanHealer_06a00f88;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_RomanHealer::~ZombieAnimRig_RomanHealer() */

void __thiscall
ZombieAnimRig_RomanHealer::~ZombieAnimRig_RomanHealer(ZombieAnimRig_RomanHealer *this)

{
  ~ZombieAnimRig_RomanHealer(this + -0x10);
  return;
}


/* ZombieAnimRig_RomanHealer::~ZombieAnimRig_RomanHealer() */

void __thiscall
ZombieAnimRig_RomanHealer::~ZombieAnimRig_RomanHealer(ZombieAnimRig_RomanHealer *this)

{
  ~ZombieAnimRig_RomanHealer(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_RomanHealer::~ZombieAnimRig_RomanHealer() */

void __thiscall
ZombieAnimRig_RomanHealer::~ZombieAnimRig_RomanHealer(ZombieAnimRig_RomanHealer *this)

{
  ~ZombieAnimRig_RomanHealer(this + -0x10);
  return;
}


/* ZombieAnimRig_RomanHealer::ZombieAnimRig_RomanHealer() */

void __thiscall
ZombieAnimRig_RomanHealer::ZombieAnimRig_RomanHealer(ZombieAnimRig_RomanHealer *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06a00d10;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_RomanHealer_06a00f88;
  return;
}


/* ZombieAnimRig_RomanHealer::StaticNew() */

ZombieAnimRig_RomanHealer * ZombieAnimRig_RomanHealer::StaticNew(void)

{
  ZombieAnimRig_RomanHealer *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_RomanHealer(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RomanHealer::StartCasting(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
ZombieAnimRig_RomanHealer::StartCasting
          (ZombieAnimRig_RomanHealer *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"power_up");
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
/* ZombieAnimRig_RomanHealer::ContinueCasting(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_RomanHealer::ContinueCasting
          (ZombieAnimRig_RomanHealer *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"power");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = (*pcVar2)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RomanHealer::StopCasting(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
ZombieAnimRig_RomanHealer::StopCasting
          (ZombieAnimRig_RomanHealer *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"power_down");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = (*pcVar2)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RomanHealer::getHeadLayerNames() */

void ZombieAnimRig_RomanHealer::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba3670 & 1;
  if (((DAT_06ba3670 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3670), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba36a0,"zombie_skull");
    nop();
    std::string::string((string *)&DAT_06ba36a8,"zombie_jaw");
    nop();
    std::string::string((string *)&DAT_06ba36b0,"zombie_pupil");
    nop();
    __cxa_guard_release(&DAT_06ba3670);
    __cxa_atexit(FUN_04ee6f58,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba37a8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba37a8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba36d0,(string *)&DAT_06ba36a0,(allocator *)&DAT_06ba36b8);
    __cxa_guard_release(&DAT_06ba37a8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba36d0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba36d0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RomanHealer::getArmLayerNames() */

void ZombieAnimRig_RomanHealer::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba3700 & 1;
  if (((DAT_06ba3700 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3700), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba3770,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06ba3778,"zombie_arm_outer_lower");
    nop();
    __cxa_guard_release(&DAT_06ba3700);
    __cxa_atexit(FUN_04ee6f8c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba36b8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba36b8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba3718,(string *)&DAT_06ba3770,(allocator *)&DAT_06ba3780);
    __cxa_guard_release(&DAT_06ba36b8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba3718,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba3718);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RomanHealer::getArmReplacementPairNames() */

void ZombieAnimRig_RomanHealer::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba3640 & 1;
  if (((DAT_06ba3640 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3640), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba3788,"zombie_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06ba3790,"zombie_egypt_ra_arm_outer_upper_02");
    nop();
    __cxa_guard_release(&DAT_06ba3640);
    __cxa_atexit(FUN_04ee6fb8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba36c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba36c0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba3648,(string *)&DAT_06ba3788,(allocator *)&DAT_06ba3798);
    __cxa_guard_release(&DAT_06ba36c0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba3648,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba3648);
}

