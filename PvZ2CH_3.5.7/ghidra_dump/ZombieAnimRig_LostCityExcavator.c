// Class: ZombieAnimRig_LostCityExcavator


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_LostCityExcavator::getWalkAnimationName() */

void ZombieAnimRig_LostCityExcavator::getWalkAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x250) == '\0') {
    __s = "walk_no_shovel";
  }
  else {
    __s = "walk";
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
/* ZombieAnimRig_LostCityExcavator::getEatAnimationName() */

void ZombieAnimRig_LostCityExcavator::getEatAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x250) == '\0') {
    __s = "eat";
  }
  else {
    __s = "eat_shovel";
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
/* ZombieAnimRig_LostCityExcavator::getDieAnimationName() */

void ZombieAnimRig_LostCityExcavator::getDieAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x250) == '\0') {
    __s = "die";
  }
  else {
    __s = "die_shovel";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* ZombieAnimRig_LostCityExcavator::onPopAnimInitialized() */

void __thiscall
ZombieAnimRig_LostCityExcavator::onPopAnimInitialized(ZombieAnimRig_LostCityExcavator *this)

{
  ZombieAnimRig_PirateBarrel::onPopAnimInitialized((ZombieAnimRig_PirateBarrel *)this);
  this[0x250] = (ZombieAnimRig_LostCityExcavator)0x1;
  return;
}


/* ZombieAnimRig_LostCityExcavator::~ZombieAnimRig_LostCityExcavator() */

void __thiscall
ZombieAnimRig_LostCityExcavator::~ZombieAnimRig_LostCityExcavator
          (ZombieAnimRig_LostCityExcavator *this)

{
  *(undefined ***)this = &PTR_GetClass_068e6240;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_LostCityExcavator_068e6558;
  ZombieAnimRig_Basic::~ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_LostCityExcavator::~ZombieAnimRig_LostCityExcavator() */

void __thiscall
ZombieAnimRig_LostCityExcavator::~ZombieAnimRig_LostCityExcavator
          (ZombieAnimRig_LostCityExcavator *this)

{
  ~ZombieAnimRig_LostCityExcavator(this + -0x10);
  return;
}


/* ZombieAnimRig_LostCityExcavator::~ZombieAnimRig_LostCityExcavator() */

void __thiscall
ZombieAnimRig_LostCityExcavator::~ZombieAnimRig_LostCityExcavator
          (ZombieAnimRig_LostCityExcavator *this)

{
  ~ZombieAnimRig_LostCityExcavator(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_LostCityExcavator::~ZombieAnimRig_LostCityExcavator() */

void __thiscall
ZombieAnimRig_LostCityExcavator::~ZombieAnimRig_LostCityExcavator
          (ZombieAnimRig_LostCityExcavator *this)

{
  ~ZombieAnimRig_LostCityExcavator(this + -0x10);
  return;
}


/* ZombieAnimRig_LostCityExcavator::ZombieAnimRig_LostCityExcavator() */

void __thiscall
ZombieAnimRig_LostCityExcavator::ZombieAnimRig_LostCityExcavator
          (ZombieAnimRig_LostCityExcavator *this)

{
  ZombieAnimRig_Basic::ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  this[0x250] = (ZombieAnimRig_LostCityExcavator)0x1;
  *(undefined ***)this = &PTR_GetClass_068e6240;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_LostCityExcavator_068e6558;
  return;
}


/* ZombieAnimRig_LostCityExcavator::StaticNew() */

ZombieAnimRig_LostCityExcavator * ZombieAnimRig_LostCityExcavator::StaticNew(void)

{
  ZombieAnimRig_LostCityExcavator *this;
  
  this = ::operator_new(600);
  ZombieAnimRig_LostCityExcavator(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_LostCityExcavator::StaticClassInit() */

void ZombieAnimRig_LostCityExcavator::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_LostCityExcavator");
    (*pcVar2)(plVar1,asStack_10,FUN_047cd260,600,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_LostCityExcavator::StaticGetClass() */

long * ZombieAnimRig_LostCityExcavator::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_LostCityExcavator",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_LostCityExcavator::GetClass() const */

long * ZombieAnimRig_LostCityExcavator::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_LostCityExcavator",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_LostCityExcavator::DoShovel(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_LostCityExcavator::DoShovel
          (ZombieAnimRig_LostCityExcavator *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"shovel_attack");
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
/* ZombieAnimRig_LostCityExcavator::DropShovel(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_LostCityExcavator::DropShovel
          (ZombieAnimRig_LostCityExcavator *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"drop_shovel");
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
/* ZombieAnimRig_LostCityExcavator::getHeadLayerNames() */

void ZombieAnimRig_LostCityExcavator::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b26c28 & 1;
  if (((DAT_06b26c28 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b26c28), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b26bd8,"zombie_skull");
    nop();
    std::string::string((string *)&DAT_06b26be0,"zombie_jaw");
    nop();
    __cxa_guard_release(&DAT_06b26c28);
    __cxa_atexit(FUN_047cc94c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b26ba0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b26ba0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b26bf8,(string *)&DAT_06b26bd8,(allocator *)&DAT_06b26be8);
    __cxa_guard_release(&DAT_06b26ba0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b26bf8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b26bf8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_LostCityExcavator::getArmLayerNames() */

void ZombieAnimRig_LostCityExcavator::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b26c50 & 1;
  if (((DAT_06b26c50 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b26c50), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b26b68,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b26b70,"zombie_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06b26b78,"zombie_hand_outer_03");
    nop();
    std::string::string((string *)&DAT_06b26b80,"zombie_hand_outer_no_shovel");
    nop();
    std::string::string((string *)&DAT_06b26b88,"zombie_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b26b90,"zombie_arm_outer_upper_bone");
    nop();
    std::string::string((string *)&DAT_06b26b98,"zombie_hand_grip");
    nop();
    __cxa_guard_release(&DAT_06b26c50);
    __cxa_atexit(FUN_047cc978,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b26bb8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b26bb8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b26c88,(string *)&DAT_06b26b68,(allocator *)&DAT_06b26ba0);
    __cxa_guard_release(&DAT_06b26bb8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b26c88,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b26c88);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_LostCityExcavator::getShovelLayerNames() */

void ZombieAnimRig_LostCityExcavator::getShovelLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b26bb0 & 1;
  if (((DAT_06b26bb0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b26bb0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b26bf0,"particle_shovel");
    nop();
    __cxa_guard_release(&DAT_06b26bb0);
    __cxa_atexit(FUN_047cc9b0,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b26ba8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b26ba8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b26cb8,(string *)&DAT_06b26bf0,(allocator *)&DAT_06b26bf8);
    __cxa_guard_release(&DAT_06b26ba8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b26cb8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b26cb8);
}

