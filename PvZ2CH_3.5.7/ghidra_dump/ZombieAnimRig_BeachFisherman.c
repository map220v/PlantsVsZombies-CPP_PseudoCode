// Class: ZombieAnimRig_BeachFisherman


/* ZombieAnimRig_BeachFisherman::~ZombieAnimRig_BeachFisherman() */

void __thiscall
ZombieAnimRig_BeachFisherman::~ZombieAnimRig_BeachFisherman(ZombieAnimRig_BeachFisherman *this)

{
  *(undefined ***)this = &PTR_GetClass_0687ffc0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_BeachFisherman_06880238;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_BeachFisherman::~ZombieAnimRig_BeachFisherman() */

void __thiscall
ZombieAnimRig_BeachFisherman::~ZombieAnimRig_BeachFisherman(ZombieAnimRig_BeachFisherman *this)

{
  ~ZombieAnimRig_BeachFisherman(this + -0x10);
  return;
}


/* ZombieAnimRig_BeachFisherman::~ZombieAnimRig_BeachFisherman() */

void __thiscall
ZombieAnimRig_BeachFisherman::~ZombieAnimRig_BeachFisherman(ZombieAnimRig_BeachFisherman *this)

{
  ~ZombieAnimRig_BeachFisherman(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_BeachFisherman::~ZombieAnimRig_BeachFisherman() */

void __thiscall
ZombieAnimRig_BeachFisherman::~ZombieAnimRig_BeachFisherman(ZombieAnimRig_BeachFisherman *this)

{
  ~ZombieAnimRig_BeachFisherman(this + -0x10);
  return;
}


/* ZombieAnimRig_BeachFisherman::ZombieAnimRig_BeachFisherman() */

void __thiscall
ZombieAnimRig_BeachFisherman::ZombieAnimRig_BeachFisherman(ZombieAnimRig_BeachFisherman *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0687ffc0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_BeachFisherman_06880238;
  return;
}


/* ZombieAnimRig_BeachFisherman::StaticNew() */

ZombieAnimRig_BeachFisherman * ZombieAnimRig_BeachFisherman::StaticNew(void)

{
  ZombieAnimRig_BeachFisherman *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_BeachFisherman(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BeachFisherman::StaticClassInit() */

void ZombieAnimRig_BeachFisherman::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_BeachFisherman");
    (*pcVar2)(plVar1,asStack_10,FUN_04633d10,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_BeachFisherman::StaticGetClass() */

long * ZombieAnimRig_BeachFisherman::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_BeachFisherman",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_BeachFisherman::GetClass() const */

long * ZombieAnimRig_BeachFisherman::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_BeachFisherman",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BeachFisherman::getArmLayerNames() */

void ZombieAnimRig_BeachFisherman::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1bd80 & 1;
  if (((DAT_06b1bd80 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1bd80), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1bd88,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b1bd90,"zombie_hand_outer");
    nop();
    std::string::string((string *)&DAT_06b1bd98,"zombie_hand_outer_01");
    nop();
    __cxa_guard_release(&DAT_06b1bd80);
    __cxa_atexit(FUN_04633510,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1bd58 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1bd58), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1bd40,(string *)&DAT_06b1bd88,(allocator *)&DAT_06b1bda0);
    __cxa_guard_release(&DAT_06b1bd58);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1bd40,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1bd40);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BeachFisherman::getArmReplacementPairNames() */

void ZombieAnimRig_BeachFisherman::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1bbc0 & 1;
  if (((DAT_06b1bbc0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1bbc0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1bd00,"zombie_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b1bd08,"zombie_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06b1bbc0);
    __cxa_atexit(FUN_04633544,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1bc88 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1bc88), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1bdb0,(string *)&DAT_06b1bd00,(allocator *)&DAT_06b1bd10);
    __cxa_guard_release(&DAT_06b1bc88);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1bdb0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1bdb0);
}

