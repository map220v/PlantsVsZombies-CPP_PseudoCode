// Class: ZombieAnimRig_FairyTaleWitch


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FairyTaleWitch::StartCasting(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_FairyTaleWitch::StartCasting
          (ZombieAnimRig_FairyTaleWitch *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"SHEEP");
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


/* ZombieAnimRig_FairyTaleWitch::StaticGetClass() */

long * ZombieAnimRig_FairyTaleWitch::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_FairyTaleWitch",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_FairyTaleWitch::GetClass() const */

long * ZombieAnimRig_FairyTaleWitch::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_FairyTaleWitch",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_FairyTaleWitch::~ZombieAnimRig_FairyTaleWitch() */

void __thiscall
ZombieAnimRig_FairyTaleWitch::~ZombieAnimRig_FairyTaleWitch(ZombieAnimRig_FairyTaleWitch *this)

{
  *(undefined ***)this = &PTR_GetClass_069fad40;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_FairyTaleWitch_069fafb8;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_FairyTaleWitch::~ZombieAnimRig_FairyTaleWitch() */

void __thiscall
ZombieAnimRig_FairyTaleWitch::~ZombieAnimRig_FairyTaleWitch(ZombieAnimRig_FairyTaleWitch *this)

{
  ~ZombieAnimRig_FairyTaleWitch(this + -0x10);
  return;
}


/* ZombieAnimRig_FairyTaleWitch::~ZombieAnimRig_FairyTaleWitch() */

void __thiscall
ZombieAnimRig_FairyTaleWitch::~ZombieAnimRig_FairyTaleWitch(ZombieAnimRig_FairyTaleWitch *this)

{
  ~ZombieAnimRig_FairyTaleWitch(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_FairyTaleWitch::~ZombieAnimRig_FairyTaleWitch() */

void __thiscall
ZombieAnimRig_FairyTaleWitch::~ZombieAnimRig_FairyTaleWitch(ZombieAnimRig_FairyTaleWitch *this)

{
  ~ZombieAnimRig_FairyTaleWitch(this + -0x10);
  return;
}


/* ZombieAnimRig_FairyTaleWitch::ZombieAnimRig_FairyTaleWitch() */

void __thiscall
ZombieAnimRig_FairyTaleWitch::ZombieAnimRig_FairyTaleWitch(ZombieAnimRig_FairyTaleWitch *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_069fad40;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_FairyTaleWitch_069fafb8;
  return;
}


/* ZombieAnimRig_FairyTaleWitch::StaticNew() */

ZombieAnimRig_FairyTaleWitch * ZombieAnimRig_FairyTaleWitch::StaticNew(void)

{
  ZombieAnimRig_FairyTaleWitch *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_FairyTaleWitch(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FairyTaleWitch::getHeadLayerNames() */

void ZombieAnimRig_FairyTaleWitch::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba2ad0 & 1;
  if (((DAT_06ba2ad0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba2ad0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba2a90,"zombie_egyptflag_skull");
    nop();
    std::string::string((string *)&DAT_06ba2a98,"zombie_egyptflag_jaw");
    nop();
    std::string::string((string *)&DAT_06ba2aa0,"zombie_pupil");
    nop();
    std::string::string((string *)&DAT_06ba2aa8,"wizard_beard_tip");
    nop();
    __cxa_guard_release(&DAT_06ba2ad0);
    __cxa_atexit(FUN_04ed5560,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba2ad8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba2ad8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba29c0,(string *)&DAT_06ba2a90,(allocator *)&DAT_06ba2ab0);
    __cxa_guard_release(&DAT_06ba2ad8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba29c0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba29c0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FairyTaleWitch::getArmLayerNames() */

void ZombieAnimRig_FairyTaleWitch::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba2a48 & 1;
  if (((DAT_06ba2a48 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba2a48), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba2a50,"zombie_egyptflag_hand_outer");
    nop();
    std::string::string((string *)&DAT_06ba2a58,"zombie_egyptflag_arm_outer_lower");
    nop();
    __cxa_guard_release(&DAT_06ba2a48);
    __cxa_atexit(FUN_04ed559c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba29d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba29d8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba2a08,(string *)&DAT_06ba2a50,(allocator *)&DAT_06ba2a60);
    __cxa_guard_release(&DAT_06ba29d8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba2a08,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba2a08);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FairyTaleWitch::getArmReplacementPairNames() */

void ZombieAnimRig_FairyTaleWitch::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba2988 & 1;
  if (((DAT_06ba2988 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba2988), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba2ac0,"zombie_egyptflag_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06ba2ac8,"zombie_egyptflag_arm_outer_upper_02");
    nop();
    __cxa_guard_release(&DAT_06ba2988);
    __cxa_atexit(FUN_04ed55c8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba29e0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba29e0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba29f0,(string *)&DAT_06ba2ac0,(allocator *)&DAT_06ba2ad0);
    __cxa_guard_release(&DAT_06ba29e0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba29f0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba29f0);
}

