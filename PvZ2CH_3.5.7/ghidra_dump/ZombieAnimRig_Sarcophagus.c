// Class: ZombieAnimRig_Sarcophagus


/* ZombieAnimRig_Sarcophagus::SetSarcophagusDamageIndex(int) */

void __thiscall
ZombieAnimRig_Sarcophagus::SetSarcophagusDamageIndex(ZombieAnimRig_Sarcophagus *this,int param_1)

{
  *(int *)(this + 0x244) = param_1;
  (**(code **)(*(long *)this + 0x1f8))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Sarcophagus::getIdleAnimationName() */

void ZombieAnimRig_Sarcophagus::getIdleAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x240) == '\0') {
    __s = "idle_norm";
  }
  else {
    __s = "idle";
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
/* ZombieAnimRig_Sarcophagus::getWalkAnimationName() */

void ZombieAnimRig_Sarcophagus::getWalkAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x240) == '\0') {
    __s = "walk_norm";
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
/* ZombieAnimRig_Sarcophagus::getEatAnimationName() */

void ZombieAnimRig_Sarcophagus::getEatAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x240) == '\0') {
    __s = "eat_norm";
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
/* ZombieAnimRig_Sarcophagus::getStunAnimationName() */

void ZombieAnimRig_Sarcophagus::getStunAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x240) == '\0') {
    __s = "stun_norm";
  }
  else {
    __s = "stun";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* ZombieAnimRig_Sarcophagus::onPopAnimInitialized() */

void __thiscall ZombieAnimRig_Sarcophagus::onPopAnimInitialized(ZombieAnimRig_Sarcophagus *this)

{
  ZombieAnimRig::onPopAnimInitialized((ZombieAnimRig *)this);
  *(undefined4 *)(this + 0x244) = 0;
  this[0x240] = (ZombieAnimRig_Sarcophagus)0x1;
  return;
}


/* ZombieAnimRig_Sarcophagus::~ZombieAnimRig_Sarcophagus() */

void __thiscall
ZombieAnimRig_Sarcophagus::~ZombieAnimRig_Sarcophagus(ZombieAnimRig_Sarcophagus *this)

{
  *(undefined ***)this = &PTR_GetClass_06873550;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Sarcophagus_068737d0;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Sarcophagus::~ZombieAnimRig_Sarcophagus() */

void __thiscall
ZombieAnimRig_Sarcophagus::~ZombieAnimRig_Sarcophagus(ZombieAnimRig_Sarcophagus *this)

{
  ~ZombieAnimRig_Sarcophagus(this + -0x10);
  return;
}


/* ZombieAnimRig_Sarcophagus::~ZombieAnimRig_Sarcophagus() */

void __thiscall
ZombieAnimRig_Sarcophagus::~ZombieAnimRig_Sarcophagus(ZombieAnimRig_Sarcophagus *this)

{
  ~ZombieAnimRig_Sarcophagus(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Sarcophagus::~ZombieAnimRig_Sarcophagus() */

void __thiscall
ZombieAnimRig_Sarcophagus::~ZombieAnimRig_Sarcophagus(ZombieAnimRig_Sarcophagus *this)

{
  ~ZombieAnimRig_Sarcophagus(this + -0x10);
  return;
}


/* ZombieAnimRig_Sarcophagus::ZombieAnimRig_Sarcophagus() */

void __thiscall
ZombieAnimRig_Sarcophagus::ZombieAnimRig_Sarcophagus(ZombieAnimRig_Sarcophagus *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06873550;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Sarcophagus_068737d0;
  return;
}


/* ZombieAnimRig_Sarcophagus::StaticNew() */

ZombieAnimRig_Sarcophagus * ZombieAnimRig_Sarcophagus::StaticNew(void)

{
  ZombieAnimRig_Sarcophagus *this;
  
  this = ::operator_new(0x248);
  ZombieAnimRig_Sarcophagus(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Sarcophagus::StaticClassInit() */

void ZombieAnimRig_Sarcophagus::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_Sarcophagus");
    (*pcVar2)(plVar1,asStack_10,FUN_0460cf20,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_Sarcophagus::StaticGetClass() */

long * ZombieAnimRig_Sarcophagus::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Sarcophagus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_Sarcophagus::GetClass() const */

long * ZombieAnimRig_Sarcophagus::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Sarcophagus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Sarcophagus::PlayBustOutAnimation() */

void __thiscall ZombieAnimRig_Sarcophagus::PlayBustOutAnimation(ZombieAnimRig_Sarcophagus *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"idle_norm");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    this[0x240] = (ZombieAnimRig_Sarcophagus)0x0;
    *(undefined4 *)(this + 0x210) = 9;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Sarcophagus::getHeadLayerNames() */

void ZombieAnimRig_Sarcophagus::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b18ed0 & 1;
  if (((DAT_06b18ed0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18ed0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b18e78,"zombie_egypt_skull");
    nop();
    std::string::string((string *)&DAT_06b18e80,"zombie_egypt_jaw");
    nop();
    std::string::string((string *)&DAT_06b18e88,"zombie_egypt_sarc_power");
    nop();
    __cxa_guard_release(&DAT_06b18ed0);
    __cxa_atexit(FUN_0460c9f0,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b18ef8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18ef8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b18e58,(string *)&DAT_06b18e78,(allocator *)&DAT_06b18e90);
    __cxa_guard_release(&DAT_06b18ef8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b18e58,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b18e58);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Sarcophagus::getArmLayerNames() */

void ZombieAnimRig_Sarcophagus::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b18e70 & 1;
  if (((DAT_06b18e70 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18e70), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b18e20,"zombie_egypt_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b18e28,"zombie_egypt_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06b18e30,"zombie_egypt_hand_outer_03");
    nop();
    std::string::string((string *)&DAT_06b18e38,"zombie_egypt_arm_outer_lower");
    nop();
    __cxa_guard_release(&DAT_06b18e70);
    __cxa_atexit(FUN_0460ca24,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b18ee0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18ee0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b18e40,(string *)&DAT_06b18e20,(allocator *)&DAT_06b18e40);
    __cxa_guard_release(&DAT_06b18ee0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b18e40,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b18e40);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Sarcophagus::getArmReplacementPairNames() */

void ZombieAnimRig_Sarcophagus::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b18f28 & 1;
  if (((DAT_06b18f28 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18f28), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b18f10,"zombie_egypt_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b18f18,"zombie_egypt_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06b18f28);
    __cxa_atexit(FUN_0460ca60,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b18ed8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18ed8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b18e90,(string *)&DAT_06b18f10,(allocator *)&DAT_06b18f20);
    __cxa_guard_release(&DAT_06b18ed8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b18e90,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b18e90);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Sarcophagus::getSarcophagusLayerNames() */

void ZombieAnimRig_Sarcophagus::getSarcophagusLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b18f20 & 1;
  if (((DAT_06b18f20 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18f20), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b18f30,"zombie_egypt_sarcophagus_norm");
    nop();
    std::string::string((string *)&DAT_06b18f38,"zombie_egypt_sarcophagus_damage1");
    nop();
    std::string::string((string *)&DAT_06b18f40,"zombie_egypt_sarcophagus_damage2");
    nop();
    __cxa_guard_release(&DAT_06b18f20);
    __cxa_atexit(FUN_0460ca8c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b18ea8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18ea8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b18eb0,(string *)&DAT_06b18f30,(allocator *)&DAT_06b18f48);
    __cxa_guard_release(&DAT_06b18ea8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b18eb0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b18eb0);
}


/* ZombieAnimRig_Sarcophagus::SetLayerVisibilityForCurrentState() */

void __thiscall
ZombieAnimRig_Sarcophagus::SetLayerVisibilityForCurrentState(ZombieAnimRig_Sarcophagus *this)

{
  int iVar1;
  undefined8 *puVar2;
  string *psVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (this[0x240] == (ZombieAnimRig_Sarcophagus)0x0) {
    return;
  }
  puVar2 = (undefined8 *)getSarcophagusLayerNames();
  lVar5 = 0;
  while( true ) {
    uVar6 = *puVar2;
    iVar1 = FUN_0460cd24(uVar6,puVar2[1]);
    iVar4 = (int)lVar5;
    if (iVar1 <= iVar4) break;
    psVar3 = (string *)FUN_0460cd30(uVar6,lVar5);
    lVar5 = lVar5 + 1;
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar3,*(int *)(this + 0x244) == iVar4);
  }
  return;
}

