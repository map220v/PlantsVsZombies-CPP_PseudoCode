// Class: ZombieAnimRig_TombRaiser


/* ZombieAnimRig_TombRaiser::~ZombieAnimRig_TombRaiser() */

void __thiscall ZombieAnimRig_TombRaiser::~ZombieAnimRig_TombRaiser(ZombieAnimRig_TombRaiser *this)

{
  *(undefined ***)this = &PTR_GetClass_06873d90;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_TombRaiser_06874010;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)(this + 0x288));
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)(this + 0x240));
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_TombRaiser::~ZombieAnimRig_TombRaiser() */

void __thiscall ZombieAnimRig_TombRaiser::~ZombieAnimRig_TombRaiser(ZombieAnimRig_TombRaiser *this)

{
  ~ZombieAnimRig_TombRaiser(this + -0x10);
  return;
}


/* ZombieAnimRig_TombRaiser::~ZombieAnimRig_TombRaiser() */

void __thiscall ZombieAnimRig_TombRaiser::~ZombieAnimRig_TombRaiser(ZombieAnimRig_TombRaiser *this)

{
  ~ZombieAnimRig_TombRaiser(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_TombRaiser::~ZombieAnimRig_TombRaiser() */

void __thiscall ZombieAnimRig_TombRaiser::~ZombieAnimRig_TombRaiser(ZombieAnimRig_TombRaiser *this)

{
  ~ZombieAnimRig_TombRaiser(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_TombRaiser::StaticClassInit() */

void ZombieAnimRig_TombRaiser::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_TombRaiser");
    (*pcVar2)(plVar1,asStack_10,FUN_0460e700,0x2d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_TombRaiser::StaticGetClass() */

long * ZombieAnimRig_TombRaiser::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_TombRaiser",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_TombRaiser::GetClass() const */

long * ZombieAnimRig_TombRaiser::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_TombRaiser",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_TombRaiser::PlayPowerAnim(RtReflectionDelegate<Sexy::Delegate0>,
   RtReflectionDelegate<Sexy::Delegate0>) */

void __thiscall
ZombieAnimRig_TombRaiser::PlayPowerAnim
          (ZombieAnimRig_TombRaiser *this,RtReflectionDelegate *param_2,
          RtReflectionDelegate *param_3)

{
  int iVar1;
  code *pcVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x168);
  std::string::string(asStack_40,"power");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = (*pcVar2)(this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x210) = 8;
    RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::operator=
              ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)(this + 0x240),param_2);
    RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::operator=
              ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)(this + 0x288),param_3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* ZombieAnimRig_TombRaiser::ZombieAnimRig_TombRaiser() */

void __thiscall ZombieAnimRig_TombRaiser::ZombieAnimRig_TombRaiser(ZombieAnimRig_TombRaiser *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06873d90;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_TombRaiser_06874010;
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate0> *)(this + 0x240));
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate0> *)(this + 0x288));
  return;
}


/* ZombieAnimRig_TombRaiser::StaticNew() */

ZombieAnimRig_TombRaiser * ZombieAnimRig_TombRaiser::StaticNew(void)

{
  ZombieAnimRig_TombRaiser *this;
  
  this = ::operator_new(0x2d0);
  ZombieAnimRig_TombRaiser(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_TombRaiser::getHeadLayerNames() */

void ZombieAnimRig_TombRaiser::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b19140 & 1;
  if (((DAT_06b19140 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19140), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b19180,"zombie_egypt_tr_head_top");
    nop();
    std::string::string((string *)&DAT_06b19188,"zombie_egypt_tr_jaw");
    nop();
    std::string::string((string *)&DAT_06b19190,"zombie_egypt_tr_tongue");
    nop();
    __cxa_guard_release(&DAT_06b19140);
    __cxa_atexit(FUN_0460e340,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b19100 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19100), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b19148,(string *)&DAT_06b19180,(allocator *)&DAT_06b19198);
    __cxa_guard_release(&DAT_06b19100);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b19148,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b19148);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_TombRaiser::getArmLayerNames() */

void ZombieAnimRig_TombRaiser::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b191b0 & 1;
  if (((DAT_06b191b0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b191b0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b190d0,"zombie_egypt_tr_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b190d8,"zombie_egypt_tr_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b190e0,"zombie_egypt_tr_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06b190e8,"zombie_egypt_tr_hand_outer_03");
    nop();
    __cxa_guard_release(&DAT_06b191b0);
    __cxa_atexit(FUN_0460e374,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b190f0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b190f0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b19120,(string *)&DAT_06b190d0,(allocator *)&DAT_06b190f0);
    __cxa_guard_release(&DAT_06b190f0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b19120,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b19120);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_TombRaiser::getArmReplacementPairNames() */

void ZombieAnimRig_TombRaiser::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b19108 & 1;
  if (((DAT_06b19108 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19108), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b190c0,"zombie_egypt_tr_arm_outer_upper_01");
    nop();
    std::string::string((string *)&DAT_06b190c8,"zombie_egypt_tr_arm_outer_upper_02");
    nop();
    __cxa_guard_release(&DAT_06b19108);
    __cxa_atexit(FUN_0460e3b0,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b19138 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19138), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b19198,(string *)&DAT_06b190c0,(allocator *)&DAT_06b190d0);
    __cxa_guard_release(&DAT_06b19138);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b19198,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b19198);
}

