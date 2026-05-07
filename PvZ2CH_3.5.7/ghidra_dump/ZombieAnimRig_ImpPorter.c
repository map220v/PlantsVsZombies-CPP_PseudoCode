// Class: ZombieAnimRig_ImpPorter


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ImpPorter::PlaySpawnTent(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
ZombieAnimRig_ImpPorter::PlaySpawnTent(ZombieAnimRig_ImpPorter *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"land");
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
  __stack_chk_fail(iVar1 != 0);
}


/* ZombieAnimRig_ImpPorter::~ZombieAnimRig_ImpPorter() */

void __thiscall ZombieAnimRig_ImpPorter::~ZombieAnimRig_ImpPorter(ZombieAnimRig_ImpPorter *this)

{
  *(undefined ***)this = &PTR_GetClass_068e70f0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ImpPorter_068e7368;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ImpPorter::~ZombieAnimRig_ImpPorter() */

void __thiscall ZombieAnimRig_ImpPorter::~ZombieAnimRig_ImpPorter(ZombieAnimRig_ImpPorter *this)

{
  ~ZombieAnimRig_ImpPorter(this + -0x10);
  return;
}


/* ZombieAnimRig_ImpPorter::~ZombieAnimRig_ImpPorter() */

void __thiscall ZombieAnimRig_ImpPorter::~ZombieAnimRig_ImpPorter(ZombieAnimRig_ImpPorter *this)

{
  ~ZombieAnimRig_ImpPorter(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ImpPorter::~ZombieAnimRig_ImpPorter() */

void __thiscall ZombieAnimRig_ImpPorter::~ZombieAnimRig_ImpPorter(ZombieAnimRig_ImpPorter *this)

{
  ~ZombieAnimRig_ImpPorter(this + -0x10);
  return;
}


/* ZombieAnimRig_ImpPorter::ZombieAnimRig_ImpPorter() */

void __thiscall ZombieAnimRig_ImpPorter::ZombieAnimRig_ImpPorter(ZombieAnimRig_ImpPorter *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_068e70f0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ImpPorter_068e7368;
  return;
}


/* ZombieAnimRig_ImpPorter::StaticNew() */

ZombieAnimRig_ImpPorter * ZombieAnimRig_ImpPorter::StaticNew(void)

{
  ZombieAnimRig_ImpPorter *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_ImpPorter(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ImpPorter::StaticClassInit() */

void ZombieAnimRig_ImpPorter::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_ImpPorter");
    (*pcVar2)(plVar1,asStack_10,FUN_047d0570,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_ImpPorter::StaticGetClass() */

long * ZombieAnimRig_ImpPorter::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_ImpPorter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_ImpPorter::GetClass() const */

long * ZombieAnimRig_ImpPorter::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_ImpPorter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ImpPorter::getHeadLayerNames() */

void ZombieAnimRig_ImpPorter::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b26dd8 & 1;
  if (((DAT_06b26dd8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b26dd8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b26cf0,"zombie_imp_skull");
    nop();
    std::string::string((string *)&DAT_06b26cf8,"zombie_imp_jaw");
    nop();
    __cxa_guard_release(&DAT_06b26dd8);
    __cxa_atexit(FUN_047cf7e8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b26ea0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b26ea0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b26e80,(string *)&DAT_06b26cf0,
               (allocator *)&BasicZombieWeights::sClass);
    __cxa_guard_release(&DAT_06b26ea0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b26e80,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b26e80);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ImpPorter::getArmLayerNames() */

void ZombieAnimRig_ImpPorter::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b26d60 & 1;
  if (((DAT_06b26d60 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b26d60), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b26d68,"zombie_imp_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b26d70,"zombie_imp_hand_outer");
    nop();
    __cxa_guard_release(&DAT_06b26d60);
    __cxa_atexit(FUN_047cf814,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b26d48 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b26d48), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b26d28,(string *)&DAT_06b26d68,(allocator *)&DAT_06b26d78);
    __cxa_guard_release(&DAT_06b26d48);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b26d28,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b26d28);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ImpPorter::getArmReplacementPairNames() */

void ZombieAnimRig_ImpPorter::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b26e28 & 1;
  if (((DAT_06b26e28 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b26e28), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b26d10,"zombie_imp_arm_outer_upper_01");
    nop();
    std::string::string((string *)&DAT_06b26d18,"zombie_imp_arm_outer_upper_02");
    nop();
    __cxa_guard_release(&DAT_06b26e28);
    __cxa_atexit(FUN_047cf840,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b26e78 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b26e78), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b26e60,(string *)&DAT_06b26d10,(allocator *)&BackpackAnimRig::sClass
              );
    __cxa_guard_release(&DAT_06b26e78);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b26e60,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b26e60);
}

