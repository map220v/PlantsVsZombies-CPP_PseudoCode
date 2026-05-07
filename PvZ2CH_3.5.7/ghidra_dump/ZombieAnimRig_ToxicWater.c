// Class: ZombieAnimRig_ToxicWater


/* ZombieAnimRig_ToxicWater::StaticGetClass() */

long * ZombieAnimRig_ToxicWater::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_ToxicWater",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_ToxicWater::GetClass() const */

long * ZombieAnimRig_ToxicWater::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_ToxicWater",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_ToxicWater::~ZombieAnimRig_ToxicWater() */

void __thiscall ZombieAnimRig_ToxicWater::~ZombieAnimRig_ToxicWater(ZombieAnimRig_ToxicWater *this)

{
  *(undefined ***)this = &PTR_GetClass_0687cb90;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ToxicWater_0687cea8;
  ZombieAnimRig_Basic::~ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ToxicWater::~ZombieAnimRig_ToxicWater() */

void __thiscall ZombieAnimRig_ToxicWater::~ZombieAnimRig_ToxicWater(ZombieAnimRig_ToxicWater *this)

{
  ~ZombieAnimRig_ToxicWater(this + -0x10);
  return;
}


/* ZombieAnimRig_ToxicWater::~ZombieAnimRig_ToxicWater() */

void __thiscall ZombieAnimRig_ToxicWater::~ZombieAnimRig_ToxicWater(ZombieAnimRig_ToxicWater *this)

{
  ~ZombieAnimRig_ToxicWater(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ToxicWater::~ZombieAnimRig_ToxicWater() */

void __thiscall ZombieAnimRig_ToxicWater::~ZombieAnimRig_ToxicWater(ZombieAnimRig_ToxicWater *this)

{
  ~ZombieAnimRig_ToxicWater(this + -0x10);
  return;
}


/* ZombieAnimRig_ToxicWater::ZombieAnimRig_ToxicWater() */

void __thiscall ZombieAnimRig_ToxicWater::ZombieAnimRig_ToxicWater(ZombieAnimRig_ToxicWater *this)

{
  ZombieAnimRig_Basic::ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  *(undefined ***)this = &PTR_GetClass_0687cb90;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ToxicWater_0687cea8;
  return;
}


/* ZombieAnimRig_ToxicWater::StaticNew() */

ZombieAnimRig_ToxicWater * ZombieAnimRig_ToxicWater::StaticNew(void)

{
  ZombieAnimRig_ToxicWater *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_ToxicWater(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ToxicWater::PlayToxicEndAnimation(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ToxicWater::PlayToxicEndAnimation
          (ZombieAnimRig_ToxicWater *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"EAT");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  (*pcVar1)(this,asStack_58,0,aRStack_50);
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
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ToxicWater::getHeadLayerNames() */

void ZombieAnimRig_ToxicWater::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1b790 & 1;
  if (((DAT_06b1b790 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b790), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1b798,"zombie_skull");
    nop();
    std::string::string((string *)&DAT_06b1b7a0,"zombie_jaw");
    nop();
    std::string::string((string *)&DAT_06b1b7a8,"maozi1");
    nop();
    std::string::string((string *)&DAT_06b1b7b0,"toufa2");
    nop();
    std::string::string((string *)&DAT_06b1b7b8,"toufa3");
    nop();
    std::string::string((string *)&DAT_06b1b7c0,"toufa4");
    nop();
    std::string::string((string *)&DAT_06b1b7c8,"toufa5");
    nop();
    __cxa_guard_release(&DAT_06b1b790);
    __cxa_atexit(FUN_04626a58,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1b788 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b788), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1b808,(string *)&DAT_06b1b798,(allocator *)&DAT_06b1b7d0);
    __cxa_guard_release(&DAT_06b1b788);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1b808,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1b808);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ToxicWater::getArmLayerNames() */

void ZombieAnimRig_ToxicWater::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1b730 & 1;
  if (((DAT_06b1b730 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b730), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1b740,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b1b748,"zombie_arms_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b1b750,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b1b758,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b1b760,"zombie_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06b1b768,"zombie_hand_outer_03");
    nop();
    __cxa_guard_release(&DAT_06b1b730);
    __cxa_atexit(FUN_04626a90,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1b738 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b738), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1b7f0,(string *)&DAT_06b1b740,(allocator *)&sClass);
    __cxa_guard_release(&DAT_06b1b738);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1b7f0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1b7f0);
}

