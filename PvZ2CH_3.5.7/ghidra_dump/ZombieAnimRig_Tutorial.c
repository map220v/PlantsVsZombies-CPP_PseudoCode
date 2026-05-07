// Class: ZombieAnimRig_Tutorial


/* ZombieAnimRig_Tutorial::~ZombieAnimRig_Tutorial() */

void __thiscall ZombieAnimRig_Tutorial::~ZombieAnimRig_Tutorial(ZombieAnimRig_Tutorial *this)

{
  *(undefined ***)this = &PTR_GetClass_06874320;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Tutorial_06874638;
  ZombieAnimRig_Basic::~ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Tutorial::~ZombieAnimRig_Tutorial() */

void __thiscall ZombieAnimRig_Tutorial::~ZombieAnimRig_Tutorial(ZombieAnimRig_Tutorial *this)

{
  ~ZombieAnimRig_Tutorial(this + -0x10);
  return;
}


/* ZombieAnimRig_Tutorial::~ZombieAnimRig_Tutorial() */

void __thiscall ZombieAnimRig_Tutorial::~ZombieAnimRig_Tutorial(ZombieAnimRig_Tutorial *this)

{
  ~ZombieAnimRig_Tutorial(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Tutorial::~ZombieAnimRig_Tutorial() */

void __thiscall ZombieAnimRig_Tutorial::~ZombieAnimRig_Tutorial(ZombieAnimRig_Tutorial *this)

{
  ~ZombieAnimRig_Tutorial(this + -0x10);
  return;
}


/* ZombieAnimRig_Tutorial::ZombieAnimRig_Tutorial() */

void __thiscall ZombieAnimRig_Tutorial::ZombieAnimRig_Tutorial(ZombieAnimRig_Tutorial *this)

{
  ZombieAnimRig_Basic::ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  *(undefined ***)this = &PTR_GetClass_06874320;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Tutorial_06874638;
  return;
}


/* ZombieAnimRig_Tutorial::StaticNew() */

ZombieAnimRig_Tutorial * ZombieAnimRig_Tutorial::StaticNew(void)

{
  ZombieAnimRig_Tutorial *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_Tutorial(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Tutorial::StaticClassInit() */

void ZombieAnimRig_Tutorial::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_Tutorial");
    (*pcVar2)(plVar1,asStack_10,FUN_04610b08,0x250,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_Tutorial::StaticGetClass() */

long * ZombieAnimRig_Tutorial::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Tutorial",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_Tutorial::GetClass() const */

long * ZombieAnimRig_Tutorial::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Tutorial",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Tutorial::getHeadLayerNames() */

void ZombieAnimRig_Tutorial::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b19608 & 1;
  if (((DAT_06b19608 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19608), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b19910,"zombie_skull");
    nop();
    std::string::string((string *)&DAT_06b19918,"zombie_jaw");
    nop();
    __cxa_guard_release(&DAT_06b19608);
    __cxa_atexit(FUN_0460fdd4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b19550 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19550), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b19660,(string *)&DAT_06b19910,(allocator *)&DAT_06b19920);
    __cxa_guard_release(&DAT_06b19550);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b19660,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b19660);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Tutorial::getArmLayerNames() */

void ZombieAnimRig_Tutorial::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b19658 & 1;
  if (((DAT_06b19658 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19658), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b196e0,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b196e8,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b196f0,"zombie_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06b196f8,"zombie_hand_outer_03");
    nop();
    __cxa_guard_release(&DAT_06b19658);
    __cxa_atexit(FUN_0460fe00,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b194e0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b194e0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b19778,(string *)&DAT_06b196e0,(allocator *)&DAT_06b19700);
    __cxa_guard_release(&DAT_06b194e0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b19778,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b19778);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Tutorial::getArmReplacementPairNames() */

void ZombieAnimRig_Tutorial::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b19490 & 1;
  if (((DAT_06b19490 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19490), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b197e0,"zombie_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b197e8,"zombie_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06b19490);
    __cxa_atexit(FUN_0460fe3c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b19790 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19790), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b19518,(string *)&DAT_06b197e0,(allocator *)&DAT_06b197f0);
    __cxa_guard_release(&DAT_06b19790);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b19518,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b19518);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Tutorial::getFlagHandLayerNames() */

void ZombieAnimRig_Tutorial::getFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b19738 & 1;
  if (((DAT_06b19738 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19738), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b19438,"FIXME, 0 size array");
    nop();
    __cxa_guard_release(&DAT_06b19738);
    __cxa_atexit(FUN_0460fe68,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b194e8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b194e8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b19420,(string *)&DAT_06b19438,(allocator *)&DAT_06b19440);
    __cxa_guard_release(&DAT_06b194e8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b19420,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b19420);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Tutorial::getNoFlagHandLayerNames() */

void ZombieAnimRig_Tutorial::getNoFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b195d0 & 1;
  if (((DAT_06b195d0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b195d0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b19878,"FIXME, 0 size array");
    nop();
    __cxa_guard_release(&DAT_06b195d0);
    __cxa_atexit(FUN_0460fe74,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b19680 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19680), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b19848,(string *)&DAT_06b19878,(allocator *)&DAT_06b19880);
    __cxa_guard_release(&DAT_06b19680);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b19848,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b19848);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Tutorial::getConeLayerNames() */

void ZombieAnimRig_Tutorial::getConeLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b19770 & 1;
  if (((DAT_06b19770 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19770), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b195d8,"zombie_armor_cone_norm");
    nop();
    std::string::string((string *)&DAT_06b195e0,"zombie_armor_cone_damage_01");
    nop();
    std::string::string((string *)&DAT_06b195e8,"zombie_armor_cone_damage_02");
    nop();
    __cxa_guard_release(&DAT_06b19770);
    __cxa_atexit(FUN_0460fe80,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b195b8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b195b8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b19628,(string *)&DAT_06b195d8,(allocator *)&DAT_06b195f0);
    __cxa_guard_release(&DAT_06b195b8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b19628,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b19628);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Tutorial::getBucketLayerNames() */

void ZombieAnimRig_Tutorial::getBucketLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b19800 & 1;
  if (((DAT_06b19800 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19800), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b195a0,"zombie_armor_bucket_norm");
    nop();
    std::string::string((string *)&DAT_06b195a8,"zombie_armor_bucket_damage_01");
    nop();
    std::string::string((string *)&DAT_06b195b0,"zombie_armor_bucket_damage_02");
    nop();
    __cxa_guard_release(&DAT_06b19800);
    __cxa_atexit(FUN_0460feb4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b19498 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19498), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b198c8,(string *)&DAT_06b195a0,(allocator *)&DAT_06b195b8);
    __cxa_guard_release(&DAT_06b19498);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b198c8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b198c8);
}

