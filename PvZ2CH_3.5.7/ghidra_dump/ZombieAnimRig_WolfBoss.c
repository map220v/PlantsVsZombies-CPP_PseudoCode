// Class: ZombieAnimRig_WolfBoss


/* ZombieAnimRig_WolfBoss::~ZombieAnimRig_WolfBoss() */

void __thiscall ZombieAnimRig_WolfBoss::~ZombieAnimRig_WolfBoss(ZombieAnimRig_WolfBoss *this)

{
  *(undefined ***)this = &PTR_GetClass_068901d0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_WolfBoss_06890448;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_WolfBoss::~ZombieAnimRig_WolfBoss() */

void __thiscall ZombieAnimRig_WolfBoss::~ZombieAnimRig_WolfBoss(ZombieAnimRig_WolfBoss *this)

{
  ~ZombieAnimRig_WolfBoss(this + -0x10);
  return;
}


/* ZombieAnimRig_WolfBoss::~ZombieAnimRig_WolfBoss() */

void __thiscall ZombieAnimRig_WolfBoss::~ZombieAnimRig_WolfBoss(ZombieAnimRig_WolfBoss *this)

{
  ~ZombieAnimRig_WolfBoss(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_WolfBoss::~ZombieAnimRig_WolfBoss() */

void __thiscall ZombieAnimRig_WolfBoss::~ZombieAnimRig_WolfBoss(ZombieAnimRig_WolfBoss *this)

{
  ~ZombieAnimRig_WolfBoss(this + -0x10);
  return;
}


/* ZombieAnimRig_WolfBoss::ZombieAnimRig_WolfBoss() */

void __thiscall ZombieAnimRig_WolfBoss::ZombieAnimRig_WolfBoss(ZombieAnimRig_WolfBoss *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_068901d0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_WolfBoss_06890448;
  return;
}


/* ZombieAnimRig_WolfBoss::StaticNew() */

ZombieAnimRig_WolfBoss * ZombieAnimRig_WolfBoss::StaticNew(void)

{
  ZombieAnimRig_WolfBoss *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_WolfBoss(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_WolfBoss::StaticClassInit() */

void ZombieAnimRig_WolfBoss::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"ZombieAnimRig_WolfBoss");
    (*pcVar2)(plVar1,asStack_10,FUN_04661184,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_WolfBoss::StaticGetClass() */

long * ZombieAnimRig_WolfBoss::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_WolfBoss",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_WolfBoss::GetClass() const */

long * ZombieAnimRig_WolfBoss::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_WolfBoss",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_WolfBoss::PlayIntro(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
ZombieAnimRig_WolfBoss::PlayIntro(ZombieAnimRig_WolfBoss *this,RtReflectionDelegate *param_2)

{
  long lVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"intro");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  (*pcVar2)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x210) = 9;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_WolfBoss::PlayFire(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
ZombieAnimRig_WolfBoss::PlayFire(ZombieAnimRig_WolfBoss *this,RtReflectionDelegate *param_2)

{
  long lVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"chui");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  (*pcVar2)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x210) = 10;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_WolfBoss::PlayBlow(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
ZombieAnimRig_WolfBoss::PlayBlow(ZombieAnimRig_WolfBoss *this,RtReflectionDelegate *param_2)

{
  long lVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"chui");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  (*pcVar2)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x210) = 0xb;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_WolfBoss::getHeadLayerNames() */

void ZombieAnimRig_WolfBoss::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1d488 & 1;
  if (((DAT_06b1d488 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1d488), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1d490,"zombie_skull");
    nop();
    std::string::string((string *)&DAT_06b1d498,"zombie_jaw");
    nop();
    __cxa_guard_release(&DAT_06b1d488);
    __cxa_atexit(FUN_04660cbc,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1d4f8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1d4f8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1d4a0,(string *)&DAT_06b1d490,(allocator *)&DAT_06b1d4a0);
    __cxa_guard_release(&DAT_06b1d4f8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1d4a0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1d4a0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_WolfBoss::getArmLayerNames() */

void ZombieAnimRig_WolfBoss::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1d4e8 & 1;
  if (((DAT_06b1d4e8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1d4e8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1d560,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b1d568,"zombie_hand_outer_01");
    nop();
    __cxa_guard_release(&DAT_06b1d4e8);
    __cxa_atexit(FUN_04660ce8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1d450 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1d450), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1d548,(string *)&DAT_06b1d560,(allocator *)&DAT_06b1d570);
    __cxa_guard_release(&DAT_06b1d450);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1d548,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1d548);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_WolfBoss::getArmReplacementPairNames() */

void ZombieAnimRig_WolfBoss::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1d500 & 1;
  if (((DAT_06b1d500 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1d500), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1d4b8,"zombie_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b1d4c0,"zombie_arm_outer_upper2");
    nop();
    __cxa_guard_release(&DAT_06b1d500);
    __cxa_atexit(FUN_04660d14,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1d4c8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1d4c8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1d3c0,(string *)&DAT_06b1d4b8,(allocator *)&DAT_06b1d4c8);
    __cxa_guard_release(&DAT_06b1d4c8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1d3c0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1d3c0);
}

