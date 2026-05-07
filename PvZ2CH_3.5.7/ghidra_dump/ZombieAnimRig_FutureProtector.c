// Class: ZombieAnimRig_FutureProtector


/* ZombieAnimRig_FutureProtector::~ZombieAnimRig_FutureProtector() */

void __thiscall
ZombieAnimRig_FutureProtector::~ZombieAnimRig_FutureProtector(ZombieAnimRig_FutureProtector *this)

{
  *(undefined ***)this = &PTR_GetClass_06870500;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_FutureProtector_06870790;
  ZombieAnimRig_Mech::~ZombieAnimRig_Mech((ZombieAnimRig_Mech *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_FutureProtector::~ZombieAnimRig_FutureProtector() */

void __thiscall
ZombieAnimRig_FutureProtector::~ZombieAnimRig_FutureProtector(ZombieAnimRig_FutureProtector *this)

{
  ~ZombieAnimRig_FutureProtector(this + -0x10);
  return;
}


/* ZombieAnimRig_FutureProtector::~ZombieAnimRig_FutureProtector() */

void __thiscall
ZombieAnimRig_FutureProtector::~ZombieAnimRig_FutureProtector(ZombieAnimRig_FutureProtector *this)

{
  ~ZombieAnimRig_FutureProtector(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_FutureProtector::~ZombieAnimRig_FutureProtector() */

void __thiscall
ZombieAnimRig_FutureProtector::~ZombieAnimRig_FutureProtector(ZombieAnimRig_FutureProtector *this)

{
  ~ZombieAnimRig_FutureProtector(this + -0x10);
  return;
}


/* ZombieAnimRig_FutureProtector::ZombieAnimRig_FutureProtector() */

void __thiscall
ZombieAnimRig_FutureProtector::ZombieAnimRig_FutureProtector(ZombieAnimRig_FutureProtector *this)

{
  ZombieAnimRig_Mech::ZombieAnimRig_Mech((ZombieAnimRig_Mech *)this);
  *(undefined ***)this = &PTR_GetClass_06870500;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_FutureProtector_06870790;
  return;
}


/* ZombieAnimRig_FutureProtector::StaticNew() */

ZombieAnimRig_FutureProtector * ZombieAnimRig_FutureProtector::StaticNew(void)

{
  ZombieAnimRig_FutureProtector *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_FutureProtector(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FutureProtector::StaticClassInit() */

void ZombieAnimRig_FutureProtector::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_FutureProtector");
    (*pcVar2)(plVar1,asStack_10,FUN_04602234,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_FutureProtector::StaticGetClass() */

long * ZombieAnimRig_FutureProtector::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_Mech::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_FutureProtector",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_FutureProtector::GetClass() const */

long * ZombieAnimRig_FutureProtector::GetClass(void)

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
  uVar2 = ZombieAnimRig_Mech::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_FutureProtector",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FutureProtector::getHeadLayerNames() */

void ZombieAnimRig_FutureProtector::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b18070 & 1;
  if (((DAT_06b18070 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18070), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b18028,"zombie_skull");
    nop();
    std::string::string((string *)&DAT_06b18030,"zombie_jaw");
    nop();
    std::string::string((string *)&DAT_06b18038,"zombie_pupil");
    nop();
    __cxa_guard_release(&DAT_06b18070);
    __cxa_atexit(FUN_04601dc0,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b17fd8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17fd8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b17fc0,(string *)&DAT_06b18028,(allocator *)&sClass);
    __cxa_guard_release(&DAT_06b17fd8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b17fc0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b17fc0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FutureProtector::getArmLayerNames() */

void ZombieAnimRig_FutureProtector::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b17fb8 & 1;
  if (((DAT_06b17fb8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17fb8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b17fe0,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b17fe8,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b17ff0,"zombie_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06b17ff8,"zombie_hand_outer_03");
    nop();
    __cxa_guard_release(&DAT_06b17fb8);
    __cxa_atexit(FUN_04601df4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b18000 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18000), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b17fa0,(string *)&DAT_06b17fe0,(allocator *)&DAT_06b18000);
    __cxa_guard_release(&DAT_06b18000);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b17fa0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b17fa0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FutureProtector::getArmReplacementPairNames() */

void ZombieAnimRig_FutureProtector::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b18068 & 1;
  if (((DAT_06b18068 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18068), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b18078,"zombie_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b18080,"zombie_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06b18068);
    __cxa_atexit(FUN_04601e30,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b18008 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18008), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b18010,(string *)&DAT_06b18078,(allocator *)&DAT_06b18088);
    __cxa_guard_release(&DAT_06b18008);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b18010,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b18010);
}

