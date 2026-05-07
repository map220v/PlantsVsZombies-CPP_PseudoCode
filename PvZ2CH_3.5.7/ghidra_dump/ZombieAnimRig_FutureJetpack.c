// Class: ZombieAnimRig_FutureJetpack


/* ZombieAnimRig_FutureJetpack::onPopAnimInitialized() */

void __thiscall ZombieAnimRig_FutureJetpack::onPopAnimInitialized(ZombieAnimRig_FutureJetpack *this)

{
  this[0x240] = (ZombieAnimRig_FutureJetpack)0x0;
  ZombieAnimRig::onPopAnimInitialized((ZombieAnimRig *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FutureJetpack::GetHeadParticleName() */

void ZombieAnimRig_FutureJetpack::GetHeadParticleName(void)

{
  long lVar1;
  ZombieAnimRig_CavalryRider *in_x0;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (in_x0[0x240] == (ZombieAnimRig_CavalryRider)0x0) {
    ZombieAnimRig_CavalryRider::GetHeadParticleName(in_x0);
  }
  else {
    std::string::string(in_x8,"particle_head_disco");
    nop();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_FutureJetpack::~ZombieAnimRig_FutureJetpack() */

void __thiscall
ZombieAnimRig_FutureJetpack::~ZombieAnimRig_FutureJetpack(ZombieAnimRig_FutureJetpack *this)

{
  *(undefined ***)this = &PTR_GetClass_0686fee0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_FutureJetpack_06870158;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_FutureJetpack::~ZombieAnimRig_FutureJetpack() */

void __thiscall
ZombieAnimRig_FutureJetpack::~ZombieAnimRig_FutureJetpack(ZombieAnimRig_FutureJetpack *this)

{
  ~ZombieAnimRig_FutureJetpack(this + -0x10);
  return;
}


/* ZombieAnimRig_FutureJetpack::~ZombieAnimRig_FutureJetpack() */

void __thiscall
ZombieAnimRig_FutureJetpack::~ZombieAnimRig_FutureJetpack(ZombieAnimRig_FutureJetpack *this)

{
  ~ZombieAnimRig_FutureJetpack(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_FutureJetpack::~ZombieAnimRig_FutureJetpack() */

void __thiscall
ZombieAnimRig_FutureJetpack::~ZombieAnimRig_FutureJetpack(ZombieAnimRig_FutureJetpack *this)

{
  ~ZombieAnimRig_FutureJetpack(this + -0x10);
  return;
}


/* ZombieAnimRig_FutureJetpack::ZombieAnimRig_FutureJetpack() */

void __thiscall
ZombieAnimRig_FutureJetpack::ZombieAnimRig_FutureJetpack(ZombieAnimRig_FutureJetpack *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  this[0x240] = (ZombieAnimRig_FutureJetpack)0x0;
  *(undefined ***)this = &PTR_GetClass_0686fee0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_FutureJetpack_06870158;
  return;
}


/* ZombieAnimRig_FutureJetpack::StaticNew() */

ZombieAnimRig_FutureJetpack * ZombieAnimRig_FutureJetpack::StaticNew(void)

{
  ZombieAnimRig_FutureJetpack *this;
  
  this = ::operator_new(0x248);
  ZombieAnimRig_FutureJetpack(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FutureJetpack::StaticClassInit() */

void ZombieAnimRig_FutureJetpack::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_FutureJetpack");
    (*pcVar2)(plVar1,asStack_10,FUN_0460077c,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_FutureJetpack::StaticGetClass() */

long * ZombieAnimRig_FutureJetpack::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_FutureJetpack",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_FutureJetpack::GetClass() const */

long * ZombieAnimRig_FutureJetpack::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_FutureJetpack",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FutureJetpack::PlayDropIn(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
ZombieAnimRig_FutureJetpack::PlayDropIn
          (ZombieAnimRig_FutureJetpack *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"enter");
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
/* ZombieAnimRig_FutureJetpack::PlayFlyUp(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
ZombieAnimRig_FutureJetpack::PlayFlyUp
          (ZombieAnimRig_FutureJetpack *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"fly_up");
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
/* ZombieAnimRig_FutureJetpack::PlayFlyDown(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
ZombieAnimRig_FutureJetpack::PlayFlyDown
          (ZombieAnimRig_FutureJetpack *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"fly_down");
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
/* ZombieAnimRig_FutureJetpack::PlayFlyIdle() */

void __thiscall ZombieAnimRig_FutureJetpack::PlayFlyIdle(ZombieAnimRig_FutureJetpack *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"up_idle");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FutureJetpack::getHeadLayerNames() */

void ZombieAnimRig_FutureJetpack::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b17d68 & 1;
  if (((DAT_06b17d68 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17d68), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b17c60,"zombie_skull");
    nop();
    std::string::string((string *)&DAT_06b17c68,"_zombie_skull_jetpack");
    nop();
    std::string::string((string *)&DAT_06b17c70,"zombie_jaw");
    nop();
    std::string::string((string *)&DAT_06b17c78,"zombie_pupil");
    nop();
    std::string::string((string *)&DAT_06b17c80,"jetpack_disco_glasses");
    nop();
    __cxa_guard_release(&DAT_06b17d68);
    __cxa_atexit(FUN_046003fc,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b17cc0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17cc0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b17c98,(string *)&DAT_06b17c60,(allocator *)&DAT_06b17c88);
    __cxa_guard_release(&DAT_06b17cc0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b17c98,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b17c98);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FutureJetpack::getArmLayerNames() */

void ZombieAnimRig_FutureJetpack::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b17cb8 & 1;
  if (((DAT_06b17cb8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17cb8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b17db8,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b17dc0,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b17dc8,"zombie_hand_outer_02");
    nop();
    __cxa_guard_release(&DAT_06b17cb8);
    __cxa_atexit(FUN_04600434,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b17cb0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17cb0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b17de8,(string *)&DAT_06b17db8,(allocator *)&DAT_06b17dd0);
    __cxa_guard_release(&DAT_06b17cb0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b17de8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b17de8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FutureJetpack::getArmReplacementPairNames() */

void ZombieAnimRig_FutureJetpack::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b17cd8 & 1;
  if (((DAT_06b17cd8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17cd8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b17dd0,"zombie_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b17dd8,"zombie_arm_outer_upper2");
    nop();
    __cxa_guard_release(&DAT_06b17cd8);
    __cxa_atexit(FUN_04600468,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b17de0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17de0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b17d88,(string *)&DAT_06b17dd0,(allocator *)&DAT_06b17de0);
    __cxa_guard_release(&DAT_06b17de0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b17d88,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b17d88);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FutureJetpack::getDiscoLayerNames() */

void ZombieAnimRig_FutureJetpack::getDiscoLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b17da0 & 1;
  if (((DAT_06b17da0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17da0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b17ce0,"disco_zombie_arm_inner_lower");
    nop();
    std::string::string((string *)&DAT_06b17ce8,"disco_zombie_arm_inner_upper");
    nop();
    std::string::string((string *)&DAT_06b17cf0,"disco_zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b17cf8,"disco_zombie_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b17d00,"disco_zombie_arm_outer_upper_bone");
    nop();
    std::string::string((string *)&DAT_06b17d08,"disco_zombie_foot_inner_heel");
    nop();
    std::string::string((string *)&DAT_06b17d10,"disco_zombie_foot_inner_toe");
    nop();
    std::string::string((string *)&DAT_06b17d18,"disco_zombie_foot_outer_heel");
    nop();
    std::string::string((string *)&DAT_06b17d20,"disco_zombie_foot_outer_toe");
    nop();
    std::string::string((string *)&DAT_06b17d28,"disco_zombie_leg_inner_upper");
    nop();
    std::string::string((string *)&DAT_06b17d30,"disco_zombie_leg_inner_lower");
    nop();
    std::string::string((string *)&DAT_06b17d38,"disco_zombie_leg_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b17d40,"disco_zombie_leg_upper_outer");
    nop();
    std::string::string((string *)&DAT_06b17d48,"disco_zombie_torso");
    nop();
    std::string::string((string *)&DAT_06b17d50,"disco_zombie_waist");
    nop();
    std::string::string((string *)&DAT_06b17d58,"jetpack_disco_glasses");
    nop();
    std::string::string((string *)&DAT_06b17d60,"particle_head_disco");
    nop();
    __cxa_guard_release(&DAT_06b17da0);
    __cxa_atexit(FUN_04600494,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b17c88 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17c88), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b17d70,(string *)&DAT_06b17ce0,(allocator *)&DAT_06b17d68);
    __cxa_guard_release(&DAT_06b17c88);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b17d70,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b17d70);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FutureJetpack::SetDiscoMode(bool) */

void __thiscall
ZombieAnimRig_FutureJetpack::SetDiscoMode(ZombieAnimRig_FutureJetpack *this,bool param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  string *psVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this[0x240] = (ZombieAnimRig_FutureJetpack)param_1;
  local_8 = ___stack_chk_guard;
  puVar2 = (undefined8 *)getDiscoLayerNames();
  local_18 = FUN_04600bb4(*puVar2);
  local_10 = FUN_04600c04(puVar2[1]);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar3,param_1);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

