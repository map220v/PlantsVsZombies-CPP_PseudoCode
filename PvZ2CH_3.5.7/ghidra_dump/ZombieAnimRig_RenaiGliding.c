// Class: ZombieAnimRig_RenaiGliding


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RenaiGliding::getIdleAnimationName() */

void ZombieAnimRig_RenaiGliding::getIdleAnimationName(void)

{
  long lVar1;
  char cVar2;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(long *)(in_x0 + 600) == 0) {
    std::string::string(in_x8,"idle_fly");
    nop();
  }
  else {
    cVar2 = FUN_04ee37a4(*(undefined1 *)(*(long *)(in_x0 + 600) + 0x818));
    if (cVar2 == '\0') {
      __s = "idle";
    }
    else {
      __s = "idle_fly";
    }
    std::string::string(in_x8,__s);
    nop();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RenaiGliding::getWalkAnimationName() */

void ZombieAnimRig_RenaiGliding::getWalkAnimationName(void)

{
  long lVar1;
  char cVar2;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(long *)(in_x0 + 600) == 0) {
    std::string::string(in_x8,"walk_fly");
    nop();
  }
  else {
    cVar2 = FUN_04ee37a4(*(undefined1 *)(*(long *)(in_x0 + 600) + 0x818));
    if (cVar2 == '\0') {
      __s = "walk";
    }
    else {
      __s = "walk_fly";
    }
    std::string::string(in_x8,__s);
    nop();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RenaiGliding::StaticClassInit() */

void ZombieAnimRig_RenaiGliding::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_RenaiGliding");
    (*pcVar2)(plVar1,asStack_10,FUN_04ee5b48,0x260,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_RenaiGliding::StaticGetClass() */

long * ZombieAnimRig_RenaiGliding::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_RenaiGliding",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_RenaiGliding::GetClass() const */

long * ZombieAnimRig_RenaiGliding::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_RenaiGliding",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_RenaiGliding::~ZombieAnimRig_RenaiGliding() */

void __thiscall
ZombieAnimRig_RenaiGliding::~ZombieAnimRig_RenaiGliding(ZombieAnimRig_RenaiGliding *this)

{
  *(undefined ***)this = &PTR_GetClass_069ffd20;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_RenaiGliding_06a00038;
  ZombieAnimRig_Basic::~ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_RenaiGliding::~ZombieAnimRig_RenaiGliding() */

void __thiscall
ZombieAnimRig_RenaiGliding::~ZombieAnimRig_RenaiGliding(ZombieAnimRig_RenaiGliding *this)

{
  ~ZombieAnimRig_RenaiGliding(this + -0x10);
  return;
}


/* ZombieAnimRig_RenaiGliding::~ZombieAnimRig_RenaiGliding() */

void __thiscall
ZombieAnimRig_RenaiGliding::~ZombieAnimRig_RenaiGliding(ZombieAnimRig_RenaiGliding *this)

{
  ~ZombieAnimRig_RenaiGliding(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_RenaiGliding::~ZombieAnimRig_RenaiGliding() */

void __thiscall
ZombieAnimRig_RenaiGliding::~ZombieAnimRig_RenaiGliding(ZombieAnimRig_RenaiGliding *this)

{
  ~ZombieAnimRig_RenaiGliding(this + -0x10);
  return;
}


/* ZombieAnimRig_RenaiGliding::ZombieAnimRig_RenaiGliding() */

void __thiscall
ZombieAnimRig_RenaiGliding::ZombieAnimRig_RenaiGliding(ZombieAnimRig_RenaiGliding *this)

{
  ZombieAnimRig_Basic::ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  this[0x250] = (ZombieAnimRig_RenaiGliding)0x1;
  *(undefined8 *)(this + 600) = 0;
  *(undefined ***)this = &PTR_GetClass_069ffd20;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_RenaiGliding_06a00038;
  return;
}


/* ZombieAnimRig_RenaiGliding::StaticNew() */

ZombieAnimRig_RenaiGliding * ZombieAnimRig_RenaiGliding::StaticNew(void)

{
  ZombieAnimRig_RenaiGliding *this;
  
  this = ::operator_new(0x260);
  ZombieAnimRig_RenaiGliding(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RenaiGliding::SetGlidingVisible(bool) */

void __thiscall
ZombieAnimRig_RenaiGliding::SetGlidingVisible(ZombieAnimRig_RenaiGliding *this,bool param_1)

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
  local_8 = ___stack_chk_guard;
  local_18 = "surf_board3_damage1";
  local_10 = "surf_board3_damage2";
  ppcVar1 = &local_40;
  do {
    ppcVar2 = ppcVar1 + 1;
    std::string::string(asStack_48,*ppcVar1);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_48,param_1);
    std::string::~string(asStack_48);
    nop();
    ppcVar1 = ppcVar2;
  } while (&local_8 != ppcVar2);
  this[0x250] = (ZombieAnimRig_RenaiGliding)param_1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RenaiGliding::getHeadLayerNames() */

void ZombieAnimRig_RenaiGliding::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba35d8 & 1;
  if (((DAT_06ba35d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba35d8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba35c0,"zombie_skull");
    nop();
    std::string::string((string *)&DAT_06ba35c8,"zombie_jaw");
    nop();
    __cxa_guard_release(&DAT_06ba35d8);
    __cxa_atexit(FUN_04ee35d0,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba3580 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3580), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba3500,(string *)&DAT_06ba35c0,(allocator *)&DAT_06ba35d0);
    __cxa_guard_release(&DAT_06ba3580);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba3500,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba3500);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RenaiGliding::getArmLayerNames() */

void ZombieAnimRig_RenaiGliding::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba3520 & 1;
  if (((DAT_06ba3520 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3520), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba3530,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06ba3538,"zombie_hand_outer_01");
    nop();
    __cxa_guard_release(&DAT_06ba3520);
    __cxa_atexit(FUN_04ee35fc,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba3568 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3568), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba35f0,(string *)&DAT_06ba3530,(allocator *)&DAT_06ba3540);
    __cxa_guard_release(&DAT_06ba3568);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba35f0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba35f0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RenaiGliding::getGlidingLayerNames() */

void ZombieAnimRig_RenaiGliding::getGlidingLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba35d0 & 1;
  if (((DAT_06ba35d0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba35d0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba3540,"particle_suipian1");
    nop();
    std::string::string((string *)&DAT_06ba3548,"particle_suipian2");
    nop();
    std::string::string((string *)&DAT_06ba3550,"particle_suipian3");
    nop();
    __cxa_guard_release(&DAT_06ba35d0);
    __cxa_atexit(FUN_04ee3628,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba3610 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3610), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba3618,(string *)&DAT_06ba3540,(allocator *)&DAT_06ba3558);
    __cxa_guard_release(&DAT_06ba3610);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba3618,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba3618);
}

