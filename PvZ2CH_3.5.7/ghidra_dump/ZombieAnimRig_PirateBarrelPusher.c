// Class: ZombieAnimRig_PirateBarrelPusher


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_PirateBarrelPusher::getWalkAnimationName() */

void ZombieAnimRig_PirateBarrelPusher::getWalkAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x240) == '\0') {
    __s = "walk2";
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
/* ZombieAnimRig_PirateBarrelPusher::getEatAnimationName() */

void ZombieAnimRig_PirateBarrelPusher::getEatAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x240) == '\0') {
    __s = "eat2";
  }
  else {
    __s = "eat";
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
/* ZombieAnimRig_PirateBarrelPusher::GetArmParticleName() */

void ZombieAnimRig_PirateBarrelPusher::GetArmParticleName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x240) == '\0') {
    __s = "particle_arm_02";
  }
  else {
    __s = "particle_arm_01";
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
/* ZombieAnimRig_PirateBarrelPusher::StaticClassInit() */

void ZombieAnimRig_PirateBarrelPusher::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_PirateBarrelPusher");
    (*pcVar2)(plVar1,asStack_10,FUN_04607598,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_PirateBarrelPusher::StaticGetClass() */

long * ZombieAnimRig_PirateBarrelPusher::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_PirateBarrelPusher",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_PirateBarrelPusher::GetClass() const */

long * ZombieAnimRig_PirateBarrelPusher::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_PirateBarrelPusher",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_PirateBarrelPusher::~ZombieAnimRig_PirateBarrelPusher() */

void __thiscall
ZombieAnimRig_PirateBarrelPusher::~ZombieAnimRig_PirateBarrelPusher
          (ZombieAnimRig_PirateBarrelPusher *this)

{
  *(undefined ***)this = &PTR_GetClass_06871e00;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_PirateBarrelPusher_06872078;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_PirateBarrelPusher::~ZombieAnimRig_PirateBarrelPusher() */

void __thiscall
ZombieAnimRig_PirateBarrelPusher::~ZombieAnimRig_PirateBarrelPusher
          (ZombieAnimRig_PirateBarrelPusher *this)

{
  ~ZombieAnimRig_PirateBarrelPusher(this + -0x10);
  return;
}


/* ZombieAnimRig_PirateBarrelPusher::~ZombieAnimRig_PirateBarrelPusher() */

void __thiscall
ZombieAnimRig_PirateBarrelPusher::~ZombieAnimRig_PirateBarrelPusher
          (ZombieAnimRig_PirateBarrelPusher *this)

{
  ~ZombieAnimRig_PirateBarrelPusher(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_PirateBarrelPusher::~ZombieAnimRig_PirateBarrelPusher() */

void __thiscall
ZombieAnimRig_PirateBarrelPusher::~ZombieAnimRig_PirateBarrelPusher
          (ZombieAnimRig_PirateBarrelPusher *this)

{
  ~ZombieAnimRig_PirateBarrelPusher(this + -0x10);
  return;
}


/* ZombieAnimRig_PirateBarrelPusher::ZombieAnimRig_PirateBarrelPusher() */

void __thiscall
ZombieAnimRig_PirateBarrelPusher::ZombieAnimRig_PirateBarrelPusher
          (ZombieAnimRig_PirateBarrelPusher *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  this[0x240] = (ZombieAnimRig_PirateBarrelPusher)0x1;
  *(undefined ***)this = &PTR_GetClass_06871e00;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_PirateBarrelPusher_06872078;
  return;
}


/* ZombieAnimRig_PirateBarrelPusher::StaticNew() */

ZombieAnimRig_PirateBarrelPusher * ZombieAnimRig_PirateBarrelPusher::StaticNew(void)

{
  ZombieAnimRig_PirateBarrelPusher *this;
  
  this = ::operator_new(0x248);
  ZombieAnimRig_PirateBarrelPusher(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_PirateBarrelPusher::HideBarrel() */

void __thiscall ZombieAnimRig_PirateBarrelPusher::HideBarrel(ZombieAnimRig_PirateBarrelPusher *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"barrel_eyes");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"barrel_front");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"barrel_front_shad");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"barrel_side");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"barrel_side_strap");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"barrel_slat_01");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"barrel_slat_02");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_PirateBarrelPusher::PlayStreetIdle(RtReflectionDelegate<Sexy::Delegate3<std::string
   const&, std::string const&, int> >) */

void ZombieAnimRig_PirateBarrelPusher::PlayStreetIdle(PopAnimRig *param_1)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1[0x240] == (PopAnimRig)0x0) {
    std::string::string(asStack_40,"idle2");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    iVar1 = PopAnimRig::PlayAndContinue(param_1,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  else {
    std::string::string(asStack_40,"idle");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    iVar1 = PopAnimRig::PlayAndContinue(param_1,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  if (iVar1 != -1) {
    *(undefined4 *)(param_1 + 0x210) = 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_PirateBarrelPusher::getHeadLayerNames() */

void ZombieAnimRig_PirateBarrelPusher::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b184b0 & 1;
  if (((DAT_06b184b0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b184b0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b184c0,"zombie_barrel_skull");
    nop();
    std::string::string((string *)&DAT_06b184c8,"zombie_barrel_jaw");
    nop();
    __cxa_guard_release(&DAT_06b184b0);
    __cxa_atexit(FUN_0460721c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b18578 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18578), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b184f8,(string *)&DAT_06b184c0,(allocator *)&DAT_06b184d0);
    __cxa_guard_release(&DAT_06b18578);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b184f8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b184f8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_PirateBarrelPusher::getArmLayerNames() */

void ZombieAnimRig_PirateBarrelPusher::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b184a0 & 1;
  if (((DAT_06b184a0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b184a0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b18518,"zombie_barrel_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b18520,"zombie_barrel_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b18528,"zombie_barrel_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06b18530,"zombie_barrel_hand_outer_03");
    nop();
    std::string::string((string *)&DAT_06b18538,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b18540,"zombie_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06b18548,"zombie_hand_outer_03");
    nop();
    __cxa_guard_release(&DAT_06b184a0);
    __cxa_atexit(FUN_04607248,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b18590 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18590), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b18560,(string *)&DAT_06b18518,(allocator *)&DAT_06b18550);
    __cxa_guard_release(&DAT_06b18590);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b18560,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b18560);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_PirateBarrelPusher::getArmReplacementPairNames() */

void ZombieAnimRig_PirateBarrelPusher::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b184a8 & 1;
  if (((DAT_06b184a8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b184a8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b18580,"zombie_barrel_arm_outer_upper_01");
    nop();
    std::string::string((string *)&DAT_06b18588,"zombie_barrel_arm_outer_upper_02");
    nop();
    __cxa_guard_release(&DAT_06b184a8);
    __cxa_atexit(FUN_04607280,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b184b8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b184b8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b184d0,(string *)&DAT_06b18580,(allocator *)&DAT_06b18590);
    __cxa_guard_release(&DAT_06b184b8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b184d0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b184d0);
}

