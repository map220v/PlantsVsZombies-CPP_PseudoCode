// Class: ZombieAnimRig_Archmage


/* ZombieAnimRig_Archmage::StaticGetClass() */

long * ZombieAnimRig_Archmage::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Archmage",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_Archmage::GetClass() const */

long * ZombieAnimRig_Archmage::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Archmage",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_Archmage::~ZombieAnimRig_Archmage() */

void __thiscall ZombieAnimRig_Archmage::~ZombieAnimRig_Archmage(ZombieAnimRig_Archmage *this)

{
  *(undefined ***)this = &PTR_GetClass_068945e0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Archmage_06894858;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Archmage::~ZombieAnimRig_Archmage() */

void __thiscall ZombieAnimRig_Archmage::~ZombieAnimRig_Archmage(ZombieAnimRig_Archmage *this)

{
  ~ZombieAnimRig_Archmage(this + -0x10);
  return;
}


/* ZombieAnimRig_Archmage::~ZombieAnimRig_Archmage() */

void __thiscall ZombieAnimRig_Archmage::~ZombieAnimRig_Archmage(ZombieAnimRig_Archmage *this)

{
  ~ZombieAnimRig_Archmage(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Archmage::~ZombieAnimRig_Archmage() */

void __thiscall ZombieAnimRig_Archmage::~ZombieAnimRig_Archmage(ZombieAnimRig_Archmage *this)

{
  ~ZombieAnimRig_Archmage(this + -0x10);
  return;
}


/* ZombieAnimRig_Archmage::ZombieAnimRig_Archmage() */

void __thiscall ZombieAnimRig_Archmage::ZombieAnimRig_Archmage(ZombieAnimRig_Archmage *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_068945e0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Archmage_06894858;
  return;
}


/* ZombieAnimRig_Archmage::StaticNew() */

ZombieAnimRig_Archmage * ZombieAnimRig_Archmage::StaticNew(void)

{
  ZombieAnimRig_Archmage *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_Archmage(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Archmage::StartHypnotize(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
ZombieAnimRig_Archmage::StartHypnotize(ZombieAnimRig_Archmage *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"sheep");
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
/* ZombieAnimRig_Archmage::getHeadLayerNames() */

void ZombieAnimRig_Archmage::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1da18 & 1;
  if (((DAT_06b1da18 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1da18), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1da20,"zombie_egyptflag_skull");
    nop();
    std::string::string((string *)&DAT_06b1da28,"zombie_egyptflag_jaw");
    nop();
    __cxa_guard_release(&DAT_06b1da18);
    __cxa_atexit(FUN_04671798,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1da10 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1da10), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1da48,(string *)&DAT_06b1da20,(allocator *)&DAT_06b1da30);
    __cxa_guard_release(&DAT_06b1da10);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1da48,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1da48);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Archmage::getArmLayerNames() */

void ZombieAnimRig_Archmage::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1da88 & 1;
  if (((DAT_06b1da88 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1da88), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1d998,"zombie_egyptflag_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b1d9a0,"zombie_egyptflag_hand_outer");
    nop();
    __cxa_guard_release(&DAT_06b1da88);
    __cxa_atexit(FUN_046717c4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1d9f8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1d9f8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1da60,(string *)&DAT_06b1d998,(allocator *)&ZombieArchmage::sClass)
    ;
    __cxa_guard_release(&DAT_06b1d9f8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1da60,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1da60);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Archmage::getArmReplacementPairNames() */

void ZombieAnimRig_Archmage::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1d9d8 & 1;
  if (((DAT_06b1d9d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1d9d8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1d950,"zombie_egyptflag_arm_outer_upper_01");
    nop();
    std::string::string((string *)&DAT_06b1d958,"zombie_egyptflag_arm_outer_upper_02");
    nop();
    __cxa_guard_release(&DAT_06b1d9d8);
    __cxa_atexit(FUN_046717f0,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1d9b0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1d9b0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1da30,(string *)&DAT_06b1d950,(allocator *)&DAT_06b1d960);
    __cxa_guard_release(&DAT_06b1d9b0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1da30,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1da30);
}

