// Class: ZombieAnimRig_BeachSurfer


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BeachSurfer::getWalkAnimationName() */

void ZombieAnimRig_BeachSurfer::getWalkAnimationName(void)

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
    __s = "walk_board";
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
/* ZombieAnimRig_BeachSurfer::getDieAnimationName() */

void ZombieAnimRig_BeachSurfer::getDieAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 0x210) == 8) {
    __s = "surf_die";
  }
  else if (*(char *)(in_x0 + 0x240) == '\0') {
    __s = "die";
  }
  else {
    __s = "die_board";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(in_x8);
  }
  return;
}


/* ZombieAnimRig_BeachSurfer::~ZombieAnimRig_BeachSurfer() */

void __thiscall
ZombieAnimRig_BeachSurfer::~ZombieAnimRig_BeachSurfer(ZombieAnimRig_BeachSurfer *this)

{
  *(undefined ***)this = &PTR_GetClass_068851a0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_BeachSurfer_06885418;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_BeachSurfer::~ZombieAnimRig_BeachSurfer() */

void __thiscall
ZombieAnimRig_BeachSurfer::~ZombieAnimRig_BeachSurfer(ZombieAnimRig_BeachSurfer *this)

{
  ~ZombieAnimRig_BeachSurfer(this + -0x10);
  return;
}


/* ZombieAnimRig_BeachSurfer::~ZombieAnimRig_BeachSurfer() */

void __thiscall
ZombieAnimRig_BeachSurfer::~ZombieAnimRig_BeachSurfer(ZombieAnimRig_BeachSurfer *this)

{
  ~ZombieAnimRig_BeachSurfer(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_BeachSurfer::~ZombieAnimRig_BeachSurfer() */

void __thiscall
ZombieAnimRig_BeachSurfer::~ZombieAnimRig_BeachSurfer(ZombieAnimRig_BeachSurfer *this)

{
  ~ZombieAnimRig_BeachSurfer(this + -0x10);
  return;
}


/* ZombieAnimRig_BeachSurfer::ZombieAnimRig_BeachSurfer() */

void __thiscall
ZombieAnimRig_BeachSurfer::ZombieAnimRig_BeachSurfer(ZombieAnimRig_BeachSurfer *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  this[0x240] = (ZombieAnimRig_BeachSurfer)0x1;
  *(undefined ***)this = &PTR_GetClass_068851a0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_BeachSurfer_06885418;
  return;
}


/* ZombieAnimRig_BeachSurfer::StaticNew() */

ZombieAnimRig_BeachSurfer * ZombieAnimRig_BeachSurfer::StaticNew(void)

{
  ZombieAnimRig_BeachSurfer *this;
  
  this = ::operator_new(0x248);
  ZombieAnimRig_BeachSurfer(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BeachSurfer::StaticClassInit() */

void ZombieAnimRig_BeachSurfer::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_BeachSurfer");
    (*pcVar2)(plVar1,asStack_10,FUN_04645004,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_BeachSurfer::StaticGetClass() */

long * ZombieAnimRig_BeachSurfer::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_BeachSurfer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_BeachSurfer::GetClass() const */

long * ZombieAnimRig_BeachSurfer::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_BeachSurfer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BeachSurfer::PlaySlam(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
ZombieAnimRig_BeachSurfer::PlaySlam(ZombieAnimRig_BeachSurfer *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  *(undefined4 *)(this + 0x210) = 9;
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
/* ZombieAnimRig_BeachSurfer::PlaySurfToWalk(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_BeachSurfer::PlaySurfToWalk
          (ZombieAnimRig_BeachSurfer *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  *(undefined4 *)(this + 0x210) = 10;
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"surf_transition");
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
/* ZombieAnimRig_BeachSurfer::HideSurfboard() */

void __thiscall ZombieAnimRig_BeachSurfer::HideSurfboard(ZombieAnimRig_BeachSurfer *this)

{
  long *plVar1;
  string asStack_78 [8];
  long alStack_70 [13];
  long local_8;
  long *plVar2;
  
  local_8 = ___stack_chk_guard;
  memcpy(alStack_70,&PTR_s_surf_board1_damage1_06a88780,0x68);
  plVar1 = alStack_70;
  do {
    plVar2 = plVar1 + 1;
    std::string::string(asStack_78,(char *)*plVar1);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_78,false);
    std::string::~string(asStack_78);
    nop();
    plVar1 = plVar2;
  } while (&local_8 != plVar2);
  this[0x240] = (ZombieAnimRig_BeachSurfer)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BeachSurfer::UpdateSurfboardDamageState(int) */

void __thiscall
ZombieAnimRig_BeachSurfer::UpdateSurfboardDamageState(ZombieAnimRig_BeachSurfer *this,int param_1)

{
  undefined8 *puVar1;
  long lVar2;
  char **ppcVar3;
  int iVar4;
  string asStack_60 [8];
  char *local_58;
  char *local_50;
  char *local_48;
  char *local_40;
  char *local_38;
  char *local_30;
  char *local_28;
  char *local_20;
  char *local_18;
  char *local_10;
  long local_8;
  
  local_58 = "surf_board1_damage1";
  local_50 = "surf_board2_damage1";
  local_48 = "surf_board1_damage2";
  local_40 = "surf_board2_damage2";
  local_38 = "surf_board1_damage3";
  local_30 = "surf_board2_damage3";
  local_28 = "surf_board1_damage4";
  local_8 = ___stack_chk_guard;
  local_20 = "surf_board2_damage4";
  local_18 = "surf_board1_damage5";
  ppcVar3 = &local_58;
  iVar4 = 0;
  local_10 = "surf_board2_damage5";
  do {
    lVar2 = 0;
    do {
      puVar1 = (undefined8 *)((long)ppcVar3 + lVar2);
      lVar2 = lVar2 + 8;
      std::string::string(asStack_60,(char *)*puVar1);
      PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_60,param_1 == iVar4);
      std::string::~string(asStack_60);
      nop();
    } while (lVar2 != 0x10);
    iVar4 = iVar4 + 1;
    ppcVar3 = ppcVar3 + 2;
  } while (iVar4 != 5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BeachSurfer::PlayStreetIdle(RtReflectionDelegate<Sexy::Delegate3<std::string
   const&, std::string const&, int> >) */

void __thiscall
ZombieAnimRig_BeachSurfer::PlayStreetIdle
          (ZombieAnimRig_BeachSurfer *this,RtReflectionDelegate *param_2)

{
  undefined4 uVar1;
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UpdateSurfboardDamageState(this,0);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50,param_2);
  uVar1 = ZombieAnimRig::PlayStreetIdle((ZombieAnimRig *)this,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BeachSurfer::PlaySurf() */

void __thiscall ZombieAnimRig_BeachSurfer::PlaySurf(ZombieAnimRig_BeachSurfer *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0x210) = 8;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"surf_idle");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != 0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BeachSurfer::PlaySurfWithoutWave() */

void __thiscall ZombieAnimRig_BeachSurfer::PlaySurfWithoutWave(ZombieAnimRig_BeachSurfer *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0x210) = 8;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"surf_idle01");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != 0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BeachSurfer::getHeadLayerNames() */

void ZombieAnimRig_BeachSurfer::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1c578 & 1;
  if (((DAT_06b1c578 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1c578), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1c5b8,"zombie_skull");
    nop();
    std::string::string((string *)&DAT_06b1c5c0,"zombie_hair1");
    nop();
    std::string::string((string *)&DAT_06b1c5c8,"zombie_hair2");
    nop();
    std::string::string((string *)&DAT_06b1c5d0,"zombie_hair3");
    nop();
    std::string::string((string *)&DAT_06b1c5d8,"zombie_hair4");
    nop();
    std::string::string((string *)&DAT_06b1c5e0,"zombie_jaw");
    nop();
    std::string::string((string *)&DAT_06b1c5e8,"zombie_hair");
    nop();
    std::string::string((string *)&DAT_06b1c5f0,"zombie_skull_surf");
    nop();
    std::string::string((string *)&DAT_06b1c5f8,"zombiehair_5");
    nop();
    __cxa_guard_release(&DAT_06b1c578);
    __cxa_atexit(FUN_0464469c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1c698 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1c698), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1c488,(string *)&DAT_06b1c5b8,(allocator *)&DAT_06b1c600);
    __cxa_guard_release(&DAT_06b1c698);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1c488,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1c488);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BeachSurfer::getArmLayerNames() */

void ZombieAnimRig_BeachSurfer::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1c6c8 & 1;
  if (((DAT_06b1c6c8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1c6c8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1c580,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b1c588,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b1c590,"zombie_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06b1c598,"zombie_hand_outer_03");
    nop();
    __cxa_guard_release(&DAT_06b1c6c8);
    __cxa_atexit(FUN_046446d4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1c6d0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1c6d0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1c658,(string *)&DAT_06b1c580,(allocator *)&DAT_06b1c5a0);
    __cxa_guard_release(&DAT_06b1c6d0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1c658,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1c658);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BeachSurfer::getArmReplacementPairNames() */

void ZombieAnimRig_BeachSurfer::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1c6a0 & 1;
  if (((DAT_06b1c6a0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1c6a0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1c6a8,"zombie_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b1c6b0,"zombie_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06b1c6a0);
    __cxa_atexit(FUN_04644710,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1c628 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1c628), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1c638,(string *)&DAT_06b1c6a8,(allocator *)&DAT_06b1c6b8);
    __cxa_guard_release(&DAT_06b1c628);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1c638,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1c638);
}

