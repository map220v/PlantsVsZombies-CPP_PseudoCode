// Class: ZombieAnimRig_ChickenFarmer


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ChickenFarmer::getWalkAnimationName() */

void ZombieAnimRig_ChickenFarmer::getWalkAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x240) == '\0') {
    __s = "walk";
  }
  else {
    __s = "walk with chickens";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ChickenFarmer::getStunAnimationName() */

void ZombieAnimRig_ChickenFarmer::getStunAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x240) == '\0') {
    __s = "stun";
  }
  else {
    __s = "stunwithchicken";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ChickenFarmer::StaticClassInit() */

void ZombieAnimRig_ChickenFarmer::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_ChickenFarmer");
    (*pcVar2)(plVar1,asStack_10,FUN_045f9b10,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_ChickenFarmer::StaticGetClass() */

long * ZombieAnimRig_ChickenFarmer::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_ChickenFarmer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_ChickenFarmer::GetClass() const */

long * ZombieAnimRig_ChickenFarmer::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_ChickenFarmer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_ChickenFarmer::~ZombieAnimRig_ChickenFarmer() */

void __thiscall
ZombieAnimRig_ChickenFarmer::~ZombieAnimRig_ChickenFarmer(ZombieAnimRig_ChickenFarmer *this)

{
  *(undefined ***)this = &PTR_GetClass_0686e300;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ChickenFarmer_0686e578;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ChickenFarmer::~ZombieAnimRig_ChickenFarmer() */

void __thiscall
ZombieAnimRig_ChickenFarmer::~ZombieAnimRig_ChickenFarmer(ZombieAnimRig_ChickenFarmer *this)

{
  ~ZombieAnimRig_ChickenFarmer(this + -0x10);
  return;
}


/* ZombieAnimRig_ChickenFarmer::~ZombieAnimRig_ChickenFarmer() */

void __thiscall
ZombieAnimRig_ChickenFarmer::~ZombieAnimRig_ChickenFarmer(ZombieAnimRig_ChickenFarmer *this)

{
  ~ZombieAnimRig_ChickenFarmer(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ChickenFarmer::~ZombieAnimRig_ChickenFarmer() */

void __thiscall
ZombieAnimRig_ChickenFarmer::~ZombieAnimRig_ChickenFarmer(ZombieAnimRig_ChickenFarmer *this)

{
  ~ZombieAnimRig_ChickenFarmer(this + -0x10);
  return;
}


/* ZombieAnimRig_ChickenFarmer::ZombieAnimRig_ChickenFarmer() */

void __thiscall
ZombieAnimRig_ChickenFarmer::ZombieAnimRig_ChickenFarmer(ZombieAnimRig_ChickenFarmer *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  this[0x240] = (ZombieAnimRig_ChickenFarmer)0x1;
  *(undefined ***)this = &PTR_GetClass_0686e300;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ChickenFarmer_0686e578;
  return;
}


/* ZombieAnimRig_ChickenFarmer::StaticNew() */

ZombieAnimRig_ChickenFarmer * ZombieAnimRig_ChickenFarmer::StaticNew(void)

{
  ZombieAnimRig_ChickenFarmer *this;
  
  this = ::operator_new(0x248);
  ZombieAnimRig_ChickenFarmer(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ChickenFarmer::getHeadLayerNames() */

void ZombieAnimRig_ChickenFarmer::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b17138 & 1;
  if (((DAT_06b17138 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17138), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b17140,"zombie_farmer_skull");
    nop();
    std::string::string((string *)&DAT_06b17148,"zombie_farmer_jaw");
    nop();
    __cxa_guard_release(&DAT_06b17138);
    __cxa_atexit(FUN_045f95f8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b17088 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17088), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b17168,(string *)&DAT_06b17140,(allocator *)&DAT_06b17150);
    __cxa_guard_release(&DAT_06b17088);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b17168,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b17168);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ChickenFarmer::getArmLayerNames() */

void ZombieAnimRig_ChickenFarmer::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b170f0 & 1;
  if (((DAT_06b170f0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b170f0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b17048,"zombie_farmer_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b17050,"zombie_farmer_hand_outer");
    nop();
    __cxa_guard_release(&DAT_06b170f0);
    __cxa_atexit(FUN_045f9624,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b16ff0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b16ff0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b17108,(string *)&DAT_06b17048,(allocator *)&DAT_06b17058);
    __cxa_guard_release(&DAT_06b16ff0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b17108,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b17108);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ChickenFarmer::getArmReplacementPairNames() */

void ZombieAnimRig_ChickenFarmer::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b17008 & 1;
  if (((DAT_06b17008 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17008), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b17180,"zombie_farmer_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b17188,"zombie_farmer_arm_outer_upper2");
    nop();
    __cxa_guard_release(&DAT_06b17008);
    __cxa_atexit(FUN_045f9650,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b17098 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17098), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b17150,(string *)&DAT_06b17180,(allocator *)&DAT_06b17190);
    __cxa_guard_release(&DAT_06b17098);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b17150,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b17150);
}

