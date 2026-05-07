// Class: ZombieAnimRig_Drink


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Drink::getIdleAnimationName() */

void ZombieAnimRig_Drink::getIdleAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x240) == '\0') {
    __s = "idle";
  }
  else {
    __s = "idle_2";
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
/* ZombieAnimRig_Drink::getWalkAnimationName() */

void ZombieAnimRig_Drink::getWalkAnimationName(void)

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
    __s = "walk_2";
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
/* ZombieAnimRig_Drink::getEatAnimationName() */

void ZombieAnimRig_Drink::getEatAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x240) == '\0') {
    __s = "eat";
  }
  else {
    __s = "eat_2";
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
/* ZombieAnimRig_Drink::getDieAnimationName() */

void ZombieAnimRig_Drink::getDieAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x240) == '\0') {
    __s = "die";
  }
  else {
    __s = "die_2";
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
/* ZombieAnimRig_Drink::getStunAnimationName() */

void ZombieAnimRig_Drink::getStunAnimationName(void)

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
    __s = "stun_2";
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
/* ZombieAnimRig_Drink::StaticClassInit() */

void ZombieAnimRig_Drink::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_Drink");
    (*pcVar2)(plVar1,asStack_10,FUN_04615588,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_Drink::StaticGetClass() */

long * ZombieAnimRig_Drink::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Drink",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_Drink::GetClass() const */

long * ZombieAnimRig_Drink::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Drink",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_Drink::~ZombieAnimRig_Drink() */

void __thiscall ZombieAnimRig_Drink::~ZombieAnimRig_Drink(ZombieAnimRig_Drink *this)

{
  *(undefined ***)this = &PTR_GetClass_06877120;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Drink_06877398;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Drink::~ZombieAnimRig_Drink() */

void __thiscall ZombieAnimRig_Drink::~ZombieAnimRig_Drink(ZombieAnimRig_Drink *this)

{
  ~ZombieAnimRig_Drink(this + -0x10);
  return;
}


/* ZombieAnimRig_Drink::~ZombieAnimRig_Drink() */

void __thiscall ZombieAnimRig_Drink::~ZombieAnimRig_Drink(ZombieAnimRig_Drink *this)

{
  ~ZombieAnimRig_Drink(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Drink::~ZombieAnimRig_Drink() */

void __thiscall ZombieAnimRig_Drink::~ZombieAnimRig_Drink(ZombieAnimRig_Drink *this)

{
  ~ZombieAnimRig_Drink(this + -0x10);
  return;
}


/* ZombieAnimRig_Drink::ZombieAnimRig_Drink() */

void __thiscall ZombieAnimRig_Drink::ZombieAnimRig_Drink(ZombieAnimRig_Drink *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  this[0x240] = (ZombieAnimRig_Drink)0x0;
  *(undefined ***)this = &PTR_GetClass_06877120;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Drink_06877398;
  return;
}


/* ZombieAnimRig_Drink::StaticNew() */

ZombieAnimRig_Drink * ZombieAnimRig_Drink::StaticNew(void)

{
  ZombieAnimRig_Drink *this;
  
  this = ::operator_new(0x248);
  ZombieAnimRig_Drink(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Drink::becomeCrazy(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
ZombieAnimRig_Drink::becomeCrazy(ZombieAnimRig_Drink *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"goman");
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
    this[0x240] = (ZombieAnimRig_Drink)0x1;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Drink::getHeadLayerNames() */

void ZombieAnimRig_Drink::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b19bc8 & 1;
  if (((DAT_06b19bc8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19bc8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b19b90,"zombie_pirate_basic_skull");
    nop();
    std::string::string((string *)&DAT_06b19b98,"zombie_pirate_basic_skull2");
    nop();
    std::string::string((string *)&DAT_06b19ba0,"zombie_pirate_basic_skull3");
    nop();
    std::string::string((string *)&DAT_06b19ba8,"zombie_pirate_basic_jaw");
    nop();
    std::string::string((string *)&DAT_06b19bb0,"zombie_pirate_basic_jaw2");
    nop();
    std::string::string((string *)&DAT_06b19bb8,"zombie_pirate_basic_jaw3");
    nop();
    __cxa_guard_release(&DAT_06b19bc8);
    __cxa_atexit(FUN_046150f4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b19b38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19b38), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b19b60,(string *)&DAT_06b19b90,(allocator *)&DAT_06b19bc0);
    __cxa_guard_release(&DAT_06b19b38);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b19b60,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b19b60);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Drink::getArmLayerNames() */

void ZombieAnimRig_Drink::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b19bf8 & 1;
  if (((DAT_06b19bf8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19bf8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b19ad8,"zombie_pirate_basic_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b19ae0,"zombie_pirate_basic_arm_outer_lower2");
    nop();
    std::string::string((string *)&DAT_06b19ae8,"zombie_pirate_basic_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b19af0,"zombie_pirate_basic_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06b19af8,"zombie_pirate_basic_hand_outer_012");
    nop();
    std::string::string((string *)&DAT_06b19b00,"zombie_pirate_basic_hand_outer_022");
    nop();
    __cxa_guard_release(&DAT_06b19bf8);
    __cxa_atexit(FUN_0461512c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b19c00 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19c00), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b19bd0,(string *)&DAT_06b19ad8,(allocator *)&DAT_06b19b08);
    __cxa_guard_release(&DAT_06b19c00);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b19bd0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b19bd0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Drink::getArmReplacementPairNames() */

void ZombieAnimRig_Drink::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b19b78 & 1;
  if (((DAT_06b19b78 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19b78), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b19b08,"zombie_pirate_basic_arm_outer_upper_01");
    nop();
    std::string::string((string *)&DAT_06b19b10,"zombie_pirate_basic_arm_outer_upper_02");
    nop();
    std::string::string((string *)&DAT_06b19b18,"zombie_pirate_basic_arm_outer_upper_012");
    nop();
    std::string::string((string *)&DAT_06b19b20,"zombie_pirate_basic_arm_outer_upper_022");
    nop();
    std::string::string((string *)&DAT_06b19b28,"zombie_pirate_basic_arm_outer_upper_013");
    nop();
    std::string::string((string *)&DAT_06b19b30,"zombie_pirate_basic_arm_outer_upper_023");
    nop();
    __cxa_guard_release(&DAT_06b19b78);
    __cxa_atexit(FUN_04615164,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b19bc0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19bc0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b19b48,(string *)&DAT_06b19b08,(allocator *)&DAT_06b19b38);
    __cxa_guard_release(&DAT_06b19bc0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b19b48,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b19b48);
}

