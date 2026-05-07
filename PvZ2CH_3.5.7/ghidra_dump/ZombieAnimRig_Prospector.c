// Class: ZombieAnimRig_Prospector


/* ZombieAnimRig_Prospector::~ZombieAnimRig_Prospector() */

void __thiscall ZombieAnimRig_Prospector::~ZombieAnimRig_Prospector(ZombieAnimRig_Prospector *this)

{
  *(undefined ***)this = &PTR_GetClass_06872fc0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Prospector_06873238;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Prospector::~ZombieAnimRig_Prospector() */

void __thiscall ZombieAnimRig_Prospector::~ZombieAnimRig_Prospector(ZombieAnimRig_Prospector *this)

{
  ~ZombieAnimRig_Prospector(this + -0x10);
  return;
}


/* ZombieAnimRig_Prospector::~ZombieAnimRig_Prospector() */

void __thiscall ZombieAnimRig_Prospector::~ZombieAnimRig_Prospector(ZombieAnimRig_Prospector *this)

{
  ~ZombieAnimRig_Prospector(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Prospector::~ZombieAnimRig_Prospector() */

void __thiscall ZombieAnimRig_Prospector::~ZombieAnimRig_Prospector(ZombieAnimRig_Prospector *this)

{
  ~ZombieAnimRig_Prospector(this + -0x10);
  return;
}


/* ZombieAnimRig_Prospector::ZombieAnimRig_Prospector() */

void __thiscall ZombieAnimRig_Prospector::ZombieAnimRig_Prospector(ZombieAnimRig_Prospector *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined4 *)(this + 0x240) = 0;
  *(undefined ***)this = &PTR_GetClass_06872fc0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Prospector_06873238;
  return;
}


/* ZombieAnimRig_Prospector::StaticNew() */

ZombieAnimRig_Prospector * ZombieAnimRig_Prospector::StaticNew(void)

{
  ZombieAnimRig_Prospector *this;
  
  this = ::operator_new(0x248);
  ZombieAnimRig_Prospector(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Prospector::StaticClassInit() */

void ZombieAnimRig_Prospector::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_Prospector");
    (*pcVar2)(plVar1,asStack_10,FUN_0460b318,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_Prospector::StaticGetClass() */

long * ZombieAnimRig_Prospector::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Prospector",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_Prospector::GetClass() const */

long * ZombieAnimRig_Prospector::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Prospector",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Prospector::PlayBlastoff(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
ZombieAnimRig_Prospector::PlayBlastoff(ZombieAnimRig_Prospector *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"blastoff");
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
/* ZombieAnimRig_Prospector::PlayLanding(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
ZombieAnimRig_Prospector::PlayLanding(ZombieAnimRig_Prospector *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"land");
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
/* ZombieAnimRig_Prospector::SetDynamiteState(ZombieAnimRig_Prospector::ProspectorDynamiteState) */

void __thiscall
ZombieAnimRig_Prospector::SetDynamiteState(ZombieAnimRig_Prospector *this,int param_2)

{
  bool bVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x240) == param_2) goto LAB_0460b5b0;
  *(int *)(this + 0x240) = param_2;
  if (4 < param_2 - 1U) goto LAB_0460b5b0;
  switch(param_2) {
  case 1:
    std::string::string(asStack_10,"dynamite_burnt");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"_dynamite_extinguished");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"_dynamite_burning_01");
    bVar1 = true;
    goto LAB_0460b870;
  case 2:
    std::string::string(asStack_10,"dynamite_burnt");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"_dynamite_extinguished");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"_dynamite_burning_01");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"_dynamite_burning_02");
    bVar1 = true;
    goto LAB_0460b7b4;
  case 3:
    std::string::string(asStack_10,"dynamite_burnt");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"_dynamite_extinguished");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"_dynamite_burning_01");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"_dynamite_burning_02");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"_dynamite_burning_03");
    bVar1 = true;
    goto LAB_0460b6e4;
  case 4:
    std::string::string(asStack_10,"dynamite_burnt");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,true);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"_dynamite_extinguished");
    bVar1 = false;
    break;
  case 5:
    std::string::string(asStack_10,"dynamite_burnt");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"_dynamite_extinguished");
    bVar1 = true;
  }
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"_dynamite_burning_01");
  bVar1 = false;
LAB_0460b870:
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"_dynamite_burning_02");
  bVar1 = false;
LAB_0460b7b4:
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"_dynamite_burning_03");
  bVar1 = false;
LAB_0460b6e4:
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
LAB_0460b5b0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_Prospector::HideDynamite() */

void __thiscall ZombieAnimRig_Prospector::HideDynamite(ZombieAnimRig_Prospector *this)

{
  SetDynamiteState(this,4);
  return;
}


/* ZombieAnimRig_Prospector::DefuseDynamite() */

void __thiscall ZombieAnimRig_Prospector::DefuseDynamite(ZombieAnimRig_Prospector *this)

{
  SetDynamiteState(this,5);
  return;
}


/* ZombieAnimRig_Prospector::SetDynamiteState(float, float) */

void __thiscall
ZombieAnimRig_Prospector::SetDynamiteState
          (ZombieAnimRig_Prospector *this,float param_1,float param_2)

{
  float fVar1;
  
  fVar1 = 1.0 - param_2 / param_1;
  if (fVar1 <= 0.5) {
    SetDynamiteState(this,1);
    return;
  }
  if (0.8 < fVar1) {
    SetDynamiteState(this,3);
    return;
  }
  SetDynamiteState(this,2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Prospector::PlayFly() */

void __thiscall ZombieAnimRig_Prospector::PlayFly(ZombieAnimRig_Prospector *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"fly");
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
/* ZombieAnimRig_Prospector::getHeadLayerNames() */

void ZombieAnimRig_Prospector::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b18d18 & 1;
  if (((DAT_06b18d18 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18d18), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b18cd8,"zombie_pros_skull_01");
    nop();
    std::string::string((string *)&DAT_06b18ce0,"zombie_pros_skull_02");
    nop();
    std::string::string((string *)&DAT_06b18ce8,"zombie_pros_skull_03");
    nop();
    std::string::string((string *)&DAT_06b18cf0,"zombie_pros_skull_04");
    nop();
    std::string::string((string *)&DAT_06b18cf8,"zombie_pros_jaw");
    nop();
    std::string::string((string *)&DAT_06b18d00,"zombie_pros_beard");
    nop();
    __cxa_guard_release(&DAT_06b18d18);
    __cxa_atexit(FUN_0460b038,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b18bf0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18bf0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b18bd0,(string *)&DAT_06b18cd8,(allocator *)&DAT_06b18d08);
    __cxa_guard_release(&DAT_06b18bf0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b18bd0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b18bd0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Prospector::getArmLayerNames() */

void ZombieAnimRig_Prospector::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b18be8 & 1;
  if (((DAT_06b18be8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18be8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b18c28,"zombie_pros_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b18c30,"zombie_pros_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b18c38,"zombie_pros_hand_outer_02");
    nop();
    __cxa_guard_release(&DAT_06b18be8);
    __cxa_atexit(FUN_0460b070,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b18d10 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18d10), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b18c58,(string *)&DAT_06b18c28,(allocator *)&DAT_06b18c40);
    __cxa_guard_release(&DAT_06b18d10);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b18c58,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b18c58);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Prospector::getArmReplacementPairNames() */

void ZombieAnimRig_Prospector::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b18d08 & 1;
  if (((DAT_06b18d08 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18d08), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b18cb8,"zombie_pros_arm_outer_upper_01");
    nop();
    std::string::string((string *)&DAT_06b18cc0,"zombie_pros_arm_outer_upper_02");
    nop();
    __cxa_guard_release(&DAT_06b18d08);
    __cxa_atexit(FUN_0460b0a4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b18d20 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18d20), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b18c88,(string *)&DAT_06b18cb8,(allocator *)&DAT_06b18cc8);
    __cxa_guard_release(&DAT_06b18d20);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b18c88,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b18c88);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Prospector::SetDynoDamage(bool) */

void __thiscall ZombieAnimRig_Prospector::SetDynoDamage(ZombieAnimRig_Prospector *this,bool param_1)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  string *psVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = ___stack_chk_guard;
  uVar6 = DAT_06b18bf8 & 1;
  if (((DAT_06b18bf8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06b18bf8), iVar3 != 0)) {
    std::string::string((string *)&DAT_06b18c00,"damage_zombie_pros_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b18c08,"damage_zombie_pros_beard");
    nop();
    std::string::string((string *)&DAT_06b18c10,"damage_zombie_pros_leg_upper_outer");
    nop();
    std::string::string((string *)&DAT_06b18c18,"damage_zombie_pros_torso");
    nop();
    std::string::string((string *)&DAT_06b18c20,"damage_zombie_waist");
    nop();
    __cxa_guard_release(&DAT_06b18bf8);
    __cxa_atexit(FUN_0460b0d0,uVar6,&DAT_06a88000);
  }
  if (((DAT_06b18c80 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06b18c80), iVar3 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b18c40,(string *)&DAT_06b18c00,(allocator *)&DAT_06b18c28);
    __cxa_guard_release(&DAT_06b18c80);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b18c40,
                 &DAT_06a88000);
  }
  uVar6 = 0;
  while( true ) {
    uVar1 = DAT_06b18c40;
    uVar5 = FUN_0460b118(DAT_06b18c40,DAT_06b18c48);
    if (uVar5 <= uVar6) break;
    psVar4 = (string *)FUN_0460b124(uVar1,uVar6);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar4,param_1);
    uVar6 = uVar6 + 1;
  }
  if (lVar2 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieAnimRig_Prospector::onPopAnimInitialized() */

void __thiscall ZombieAnimRig_Prospector::onPopAnimInitialized(ZombieAnimRig_Prospector *this)

{
  ZombieAnimRig::onPopAnimInitialized((ZombieAnimRig *)this);
  *(undefined4 *)(this + 0x240) = 0;
  SetDynoDamage(this,false);
  SetDynamiteState(this,1.0,1.0);
  return;
}

