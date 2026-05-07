// Class: ZombieAnimRig_HeianOnmyoji


/* ZombieAnimRig_HeianOnmyoji::StaticGetClass() */

long * ZombieAnimRig_HeianOnmyoji::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_HeianOnmyoji",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_HeianOnmyoji::GetClass() const */

long * ZombieAnimRig_HeianOnmyoji::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_HeianOnmyoji",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_HeianOnmyoji::~ZombieAnimRig_HeianOnmyoji() */

void __thiscall
ZombieAnimRig_HeianOnmyoji::~ZombieAnimRig_HeianOnmyoji(ZombieAnimRig_HeianOnmyoji *this)

{
  *(undefined ***)this = &PTR_GetClass_06a05730;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_HeianOnmyoji_06a05a48;
  ZombieAnimRig_Basic::~ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_HeianOnmyoji::~ZombieAnimRig_HeianOnmyoji() */

void __thiscall
ZombieAnimRig_HeianOnmyoji::~ZombieAnimRig_HeianOnmyoji(ZombieAnimRig_HeianOnmyoji *this)

{
  ~ZombieAnimRig_HeianOnmyoji(this + -0x10);
  return;
}


/* ZombieAnimRig_HeianOnmyoji::~ZombieAnimRig_HeianOnmyoji() */

void __thiscall
ZombieAnimRig_HeianOnmyoji::~ZombieAnimRig_HeianOnmyoji(ZombieAnimRig_HeianOnmyoji *this)

{
  ~ZombieAnimRig_HeianOnmyoji(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_HeianOnmyoji::~ZombieAnimRig_HeianOnmyoji() */

void __thiscall
ZombieAnimRig_HeianOnmyoji::~ZombieAnimRig_HeianOnmyoji(ZombieAnimRig_HeianOnmyoji *this)

{
  ~ZombieAnimRig_HeianOnmyoji(this + -0x10);
  return;
}


/* ZombieAnimRig_HeianOnmyoji::ZombieAnimRig_HeianOnmyoji() */

void __thiscall
ZombieAnimRig_HeianOnmyoji::ZombieAnimRig_HeianOnmyoji(ZombieAnimRig_HeianOnmyoji *this)

{
  ZombieAnimRig_Basic::ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  *(undefined ***)this = &PTR_GetClass_06a05730;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_HeianOnmyoji_06a05a48;
  return;
}


/* ZombieAnimRig_HeianOnmyoji::StaticNew() */

ZombieAnimRig_HeianOnmyoji * ZombieAnimRig_HeianOnmyoji::StaticNew(void)

{
  ZombieAnimRig_HeianOnmyoji *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_HeianOnmyoji(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_HeianOnmyoji::getHeadLayerNames() */

void ZombieAnimRig_HeianOnmyoji::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba3f80 & 1;
  if (((DAT_06ba3f80 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3f80), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba3ff8,"zombie_skull");
    nop();
    std::string::string((string *)&DAT_06ba4000,"zombie_jaw");
    nop();
    std::string::string((string *)&DAT_06ba4008,"maozi1");
    nop();
    std::string::string((string *)&DAT_06ba4010,"toufa2");
    nop();
    std::string::string((string *)&DAT_06ba4018,"toufa3");
    nop();
    std::string::string((string *)&DAT_06ba4020,"toufa4");
    nop();
    std::string::string((string *)&DAT_06ba4028,"toufa5");
    nop();
    __cxa_guard_release(&DAT_06ba3f80);
    __cxa_atexit(FUN_04ef3f24,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba3f78 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3f78), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba3f88,(string *)&DAT_06ba3ff8,(allocator *)&DAT_06ba4030);
    __cxa_guard_release(&DAT_06ba3f78);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba3f88,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba3f88);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_HeianOnmyoji::getArmLayerNames() */

void ZombieAnimRig_HeianOnmyoji::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba4078 & 1;
  if (((DAT_06ba4078 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba4078), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba4030,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06ba4038,"zombie_arms_outer_upper");
    nop();
    std::string::string((string *)&DAT_06ba4040,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06ba4048,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06ba4050,"zombie_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06ba4058,"zombie_hand_outer_03");
    nop();
    __cxa_guard_release(&DAT_06ba4078);
    __cxa_atexit(FUN_04ef3f5c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba3fc0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3fc0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba3fd8,(string *)&DAT_06ba4030,(allocator *)&DAT_06ba4060);
    __cxa_guard_release(&DAT_06ba3fc0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba3fd8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba3fd8);
}

