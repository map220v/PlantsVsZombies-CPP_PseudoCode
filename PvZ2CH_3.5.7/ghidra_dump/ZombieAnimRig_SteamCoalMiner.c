// Class: ZombieAnimRig_SteamCoalMiner


/* ZombieAnimRig_SteamCoalMiner::~ZombieAnimRig_SteamCoalMiner() */

void __thiscall
ZombieAnimRig_SteamCoalMiner::~ZombieAnimRig_SteamCoalMiner(ZombieAnimRig_SteamCoalMiner *this)

{
  *(undefined ***)this = &PTR_GetClass_0674f260;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_SteamCoalMiner_0674f4d8;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_SteamCoalMiner::~ZombieAnimRig_SteamCoalMiner() */

void __thiscall
ZombieAnimRig_SteamCoalMiner::~ZombieAnimRig_SteamCoalMiner(ZombieAnimRig_SteamCoalMiner *this)

{
  ~ZombieAnimRig_SteamCoalMiner(this + -0x10);
  return;
}


/* ZombieAnimRig_SteamCoalMiner::~ZombieAnimRig_SteamCoalMiner() */

void __thiscall
ZombieAnimRig_SteamCoalMiner::~ZombieAnimRig_SteamCoalMiner(ZombieAnimRig_SteamCoalMiner *this)

{
  ~ZombieAnimRig_SteamCoalMiner(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_SteamCoalMiner::~ZombieAnimRig_SteamCoalMiner() */

void __thiscall
ZombieAnimRig_SteamCoalMiner::~ZombieAnimRig_SteamCoalMiner(ZombieAnimRig_SteamCoalMiner *this)

{
  ~ZombieAnimRig_SteamCoalMiner(this + -0x10);
  return;
}


/* ZombieAnimRig_SteamCoalMiner::ZombieAnimRig_SteamCoalMiner() */

void __thiscall
ZombieAnimRig_SteamCoalMiner::ZombieAnimRig_SteamCoalMiner(ZombieAnimRig_SteamCoalMiner *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  this[0x240] = (ZombieAnimRig_SteamCoalMiner)0x1;
  *(undefined ***)this = &PTR_GetClass_0674f260;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_SteamCoalMiner_0674f4d8;
  return;
}


/* ZombieAnimRig_SteamCoalMiner::StaticNew() */

ZombieAnimRig_SteamCoalMiner * ZombieAnimRig_SteamCoalMiner::StaticNew(void)

{
  ZombieAnimRig_SteamCoalMiner *this;
  
  this = ::operator_new(0x248);
  ZombieAnimRig_SteamCoalMiner(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SteamCoalMiner::StaticClassInit() */

void ZombieAnimRig_SteamCoalMiner::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_SteamCoalMiner");
    (*pcVar2)(plVar1,asStack_10,FUN_03c37088,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_SteamCoalMiner::StaticGetClass() */

long * ZombieAnimRig_SteamCoalMiner::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_SteamCoalMiner",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_SteamCoalMiner::GetClass() const */

long * ZombieAnimRig_SteamCoalMiner::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_SteamCoalMiner",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SteamCoalMiner::PlayStartWork(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_SteamCoalMiner::PlayStartWork
          (ZombieAnimRig_SteamCoalMiner *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  *(undefined4 *)(this + 0x210) = 8;
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"slam");
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SteamCoalMiner::PlayBurnedTruck(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_SteamCoalMiner::PlayBurnedTruck
          (ZombieAnimRig_SteamCoalMiner *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"posun2");
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
/* ZombieAnimRig_SteamCoalMiner::PlayBrokenTruck(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_SteamCoalMiner::PlayBrokenTruck
          (ZombieAnimRig_SteamCoalMiner *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"posun1");
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
/* ZombieAnimRig_SteamCoalMiner::HideTruck() */

void __thiscall ZombieAnimRig_SteamCoalMiner::HideTruck(ZombieAnimRig_SteamCoalMiner *this)

{
  char **ppcVar1;
  string asStack_48 [8];
  char *local_40;
  char *local_38;
  char *local_30;
  char *local_28;
  char *local_20;
  char *local_18;
  char *local_10;
  char *local_8;
  char **ppcVar2;
  
  local_40 = "surf_board1_damage1";
  local_38 = "surf_board1_damage2";
  local_30 = "surf_board2_damage1";
  local_28 = "surf_board2_damage2";
  local_20 = "surf_board2_damage3";
  local_18 = "surf_board3_damage1";
  local_8 = ___stack_chk_guard;
  local_10 = "surf_board3_damage2";
  ppcVar1 = &local_40;
  do {
    ppcVar2 = ppcVar1 + 1;
    std::string::string(asStack_48,*ppcVar1);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_48,false);
    std::string::~string(asStack_48);
    nop();
    ppcVar1 = ppcVar2;
  } while (&local_8 != ppcVar2);
  this[0x240] = (ZombieAnimRig_SteamCoalMiner)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SteamCoalMiner::UpdateTruckDamageState(int) */

void __thiscall
ZombieAnimRig_SteamCoalMiner::UpdateTruckDamageState(ZombieAnimRig_SteamCoalMiner *this,int param_1)

{
  undefined8 *puVar1;
  long lVar2;
  char **ppcVar3;
  int iVar4;
  string asStack_40 [8];
  char *local_38;
  char *local_30;
  char *local_28;
  char *local_20;
  char *local_18;
  char *local_10;
  long local_8;
  
  local_38 = "surf_board1_damage1";
  local_30 = "surf_board2_damage1";
  local_28 = "surf_board3_damage1";
  local_20 = "surf_board1_damage2";
  local_18 = "surf_board2_damage2";
  local_8 = ___stack_chk_guard;
  ppcVar3 = &local_38;
  iVar4 = 0;
  local_10 = "surf_board3_damage2";
  while( true ) {
    lVar2 = 0;
    do {
      puVar1 = (undefined8 *)((long)ppcVar3 + lVar2);
      lVar2 = lVar2 + 8;
      std::string::string(asStack_40,(char *)*puVar1);
      PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_40,param_1 == iVar4);
      std::string::~string(asStack_40);
      nop();
    } while (lVar2 != 0x18);
    ppcVar3 = ppcVar3 + 3;
    if (iVar4 != 0) break;
    iVar4 = 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SteamCoalMiner::getHeadLayerNames() */

void ZombieAnimRig_SteamCoalMiner::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06acfe00 & 1;
  if (((DAT_06acfe00 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06acfe00), iVar2 != 0)) {
    std::string::string((string *)&DAT_06acfe28,"zombie_skull");
    nop();
    std::string::string((string *)&DAT_06acfe30,"zombie_hair1");
    nop();
    std::string::string((string *)&DAT_06acfe38,"zombie_hair2");
    nop();
    std::string::string((string *)&DAT_06acfe40,"zombie_hair3");
    nop();
    std::string::string((string *)&DAT_06acfe48,"zombie_hair4");
    nop();
    std::string::string((string *)&DAT_06acfe50,"zombie_jaw");
    nop();
    std::string::string((string *)&DAT_06acfe58,"zombie_hair");
    nop();
    std::string::string((string *)&DAT_06acfe60,"zombie_skull_surf");
    nop();
    std::string::string((string *)&DAT_06acfe68,"zombiehair_5");
    nop();
    __cxa_guard_release(&DAT_06acfe00);
    __cxa_atexit(FUN_03c362b0,uVar3,&DAT_06a88000);
  }
  if (((DAT_06acfdd0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06acfdd0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06acfbe8,(string *)&DAT_06acfe28,(allocator *)&DAT_06acfe70);
    __cxa_guard_release(&DAT_06acfdd0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06acfbe8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06acfbe8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SteamCoalMiner::getArmLayerNames() */

void ZombieAnimRig_SteamCoalMiner::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06acfd10 & 1;
  if (((DAT_06acfd10 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06acfd10), iVar2 != 0)) {
    std::string::string((string *)&DAT_06acfb90,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06acfb98,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06acfba0,"zombie_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06acfba8,"zombie_hand_outer_03");
    nop();
    __cxa_guard_release(&DAT_06acfd10);
    __cxa_atexit(FUN_03c362e8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06acfea8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06acfea8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06acfd28,(string *)&DAT_06acfb90,(allocator *)&DAT_06acfbb0);
    __cxa_guard_release(&DAT_06acfea8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06acfd28,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06acfd28);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SteamCoalMiner::getArmReplacementPairNames() */

void ZombieAnimRig_SteamCoalMiner::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06acfdc0 & 1;
  if (((DAT_06acfdc0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06acfdc0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06acfd18,"zombie_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06acfd20,"zombie_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06acfdc0);
    __cxa_atexit(FUN_03c36324,uVar3,&DAT_06a88000);
  }
  if (((DAT_06acfe90 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06acfe90), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06acfd68,(string *)&DAT_06acfd18,(allocator *)&DAT_06acfd28);
    __cxa_guard_release(&DAT_06acfe90);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06acfd68,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06acfd68);
}

