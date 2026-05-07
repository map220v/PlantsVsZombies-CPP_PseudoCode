// Class: ZombieAnimRig_BeachShell


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BeachShell::getAttackAnimationName() */

void __thiscall ZombieAnimRig_BeachShell::getAttackAnimationName(ZombieAnimRig_BeachShell *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"attack_shell");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BeachShell::StaticClassInit() */

void ZombieAnimRig_BeachShell::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_BeachShell");
    (*pcVar2)(plVar1,asStack_10,FUN_04638524,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_BeachShell::StaticGetClass() */

long * ZombieAnimRig_BeachShell::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_BeachShell",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_BeachShell::GetClass() const */

long * ZombieAnimRig_BeachShell::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_BeachShell",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_BeachShell::~ZombieAnimRig_BeachShell() */

void __thiscall ZombieAnimRig_BeachShell::~ZombieAnimRig_BeachShell(ZombieAnimRig_BeachShell *this)

{
  *(undefined ***)this = &PTR_GetClass_06880d90;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_BeachShell_06881008;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_BeachShell::~ZombieAnimRig_BeachShell() */

void __thiscall ZombieAnimRig_BeachShell::~ZombieAnimRig_BeachShell(ZombieAnimRig_BeachShell *this)

{
  ~ZombieAnimRig_BeachShell(this + -0x10);
  return;
}


/* ZombieAnimRig_BeachShell::~ZombieAnimRig_BeachShell() */

void __thiscall ZombieAnimRig_BeachShell::~ZombieAnimRig_BeachShell(ZombieAnimRig_BeachShell *this)

{
  ~ZombieAnimRig_BeachShell(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_BeachShell::~ZombieAnimRig_BeachShell() */

void __thiscall ZombieAnimRig_BeachShell::~ZombieAnimRig_BeachShell(ZombieAnimRig_BeachShell *this)

{
  ~ZombieAnimRig_BeachShell(this + -0x10);
  return;
}


/* ZombieAnimRig_BeachShell::ZombieAnimRig_BeachShell() */

void __thiscall ZombieAnimRig_BeachShell::ZombieAnimRig_BeachShell(ZombieAnimRig_BeachShell *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  this[0x240] = (ZombieAnimRig_BeachShell)0x1;
  *(undefined4 *)(this + 0x244) = 0;
  *(undefined ***)this = &PTR_GetClass_06880d90;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_BeachShell_06881008;
  return;
}


/* ZombieAnimRig_BeachShell::StaticNew() */

ZombieAnimRig_BeachShell * ZombieAnimRig_BeachShell::StaticNew(void)

{
  ZombieAnimRig_BeachShell *this;
  
  this = ::operator_new(0x248);
  ZombieAnimRig_BeachShell(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BeachShell::PlayGoAshore(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
ZombieAnimRig_BeachShell::PlayGoAshore(ZombieAnimRig_BeachShell *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"change_1");
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
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BeachShell::PlayEnterWater(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
ZombieAnimRig_BeachShell::PlayEnterWater
          (ZombieAnimRig_BeachShell *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"change_2");
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
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BeachShell::getHeadLayerNames() */

void ZombieAnimRig_BeachShell::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1bfb8 & 1;
  if (((DAT_06b1bfb8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1bfb8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1bee0,"zombie_skull");
    nop();
    std::string::string((string *)&DAT_06b1bee8,"zombie_jaw");
    nop();
    std::string::string((string *)&DAT_06b1bef0,"zombie_pupil");
    nop();
    std::string::string((string *)&DAT_06b1bef8,"zombie_hair");
    nop();
    __cxa_guard_release(&DAT_06b1bfb8);
    __cxa_atexit(FUN_04637c88,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1bdf0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1bdf0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1bec0,(string *)&DAT_06b1bee0,(allocator *)&DAT_06b1bf00);
    __cxa_guard_release(&DAT_06b1bdf0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1bec0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1bec0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BeachShell::getArmLayerNames() */

void ZombieAnimRig_BeachShell::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1bf58 & 1;
  if (((DAT_06b1bf58 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1bf58), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1bf88,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b1bf90,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b1bf98,"zombie_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06b1bfa0,"zombie_hand_outer_03");
    nop();
    __cxa_guard_release(&DAT_06b1bf58);
    __cxa_atexit(FUN_04637cc4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1bea8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1bea8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1bf30,(string *)&DAT_06b1bf88,(allocator *)&DAT_06b1bfa8);
    __cxa_guard_release(&DAT_06b1bea8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1bf30,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1bf30);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BeachShell::getArmReplacementPairNames() */

void ZombieAnimRig_BeachShell::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1be68 & 1;
  if (((DAT_06b1be68 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1be68), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1be18,"zombie_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b1be20,"zombie_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06b1be68);
    __cxa_atexit(FUN_04637d00,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1be58 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1be58), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1be00,(string *)&DAT_06b1be18,(allocator *)&DAT_06b1be28);
    __cxa_guard_release(&DAT_06b1be58);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1be00,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1be00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BeachShell::GetShellLayerNames() */

void ZombieAnimRig_BeachShell::GetShellLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1bed8 & 1;
  if (((DAT_06b1bed8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1bed8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1bf18,"shell_1");
    nop();
    std::string::string((string *)&DAT_06b1bf20,"shell_2");
    nop();
    std::string::string((string *)&DAT_06b1bf28,"shell_3");
    nop();
    __cxa_guard_release(&DAT_06b1bed8);
    __cxa_atexit(FUN_04637d2c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1bfb0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1bfb0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1bf00,(string *)&DAT_06b1bf18,(allocator *)&DAT_06b1bf30);
    __cxa_guard_release(&DAT_06b1bfb0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1bf00,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1bf00);
}


/* ZombieAnimRig_BeachShell::UpdateShellLayerVisibility() */

void __thiscall ZombieAnimRig_BeachShell::UpdateShellLayerVisibility(ZombieAnimRig_BeachShell *this)

{
  undefined8 *puVar1;
  string *psVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)GetShellLayerNames();
  uVar4 = 0;
  while( true ) {
    uVar5 = *puVar1;
    uVar3 = FUN_04637ff8(uVar5,puVar1[1]);
    if (uVar3 <= uVar4) break;
    psVar2 = (string *)FUN_04638004(uVar5,uVar4);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar2,*(int *)(this + 0x244) == (int)uVar4);
    uVar4 = uVar4 + 1;
  }
  return;
}


/* ZombieAnimRig_BeachShell::onPopAnimInitialized() */

void __thiscall ZombieAnimRig_BeachShell::onPopAnimInitialized(ZombieAnimRig_BeachShell *this)

{
  ZombieAnimRig::onPopAnimInitialized((ZombieAnimRig *)this);
  *(undefined4 *)(this + 0x244) = 0;
  UpdateShellLayerVisibility(this);
  return;
}


/* ZombieAnimRig_BeachShell::SetShellDamageIndex(int) */

void __thiscall
ZombieAnimRig_BeachShell::SetShellDamageIndex(ZombieAnimRig_BeachShell *this,int param_1)

{
  if (*(int *)(this + 0x244) != param_1) {
    *(int *)(this + 0x244) = param_1;
    UpdateShellLayerVisibility(this);
    return;
  }
  return;
}


/* ZombieAnimRig_BeachShell::GetNoShellIndex() */

void ZombieAnimRig_BeachShell::GetNoShellIndex(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)GetShellLayerNames();
  FUN_04637ff8(*puVar1,puVar1[1]);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BeachShell::PlayLostShell(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
ZombieAnimRig_BeachShell::PlayLostShell
          (ZombieAnimRig_BeachShell *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar3 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"destroy");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = (*pcVar3)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  uVar2 = GetNoShellIndex();
  *(undefined4 *)(this + 0x244) = uVar2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* ZombieAnimRig_BeachShell::HasShell() */

bool __thiscall ZombieAnimRig_BeachShell::HasShell(ZombieAnimRig_BeachShell *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x244);
  iVar2 = GetNoShellIndex();
  return iVar1 != iVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BeachShell::getIdleAnimationName() */

void ZombieAnimRig_BeachShell::getIdleAnimationName(void)

{
  long lVar1;
  char cVar2;
  ZombieAnimRig_BeachShell *in_x0;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  cVar2 = HasShell(in_x0);
  if (cVar2 == '\0') {
    std::string::string(in_x8,"");
    nop();
  }
  else if (in_x0[0x240] == (ZombieAnimRig_BeachShell)0x0) {
    std::string::string(in_x8,"idle");
    nop();
  }
  else {
    std::string::string(in_x8,"idle_shell");
    nop();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BeachShell::getWalkAnimationName() */

void ZombieAnimRig_BeachShell::getWalkAnimationName(void)

{
  long lVar1;
  char cVar2;
  ZombieAnimRig_BeachShell *in_x0;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  cVar2 = HasShell(in_x0);
  if (cVar2 == '\0') {
    std::string::string(in_x8,"walk");
    nop();
  }
  else if (in_x0[0x240] == (ZombieAnimRig_BeachShell)0x0) {
    std::string::string(in_x8,"walk_land_shell");
    nop();
  }
  else {
    std::string::string(in_x8,"walk_shell");
    nop();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BeachShell::getEatAnimationName() */

void ZombieAnimRig_BeachShell::getEatAnimationName(void)

{
  long lVar1;
  char cVar2;
  ZombieAnimRig_BeachShell *in_x0;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  cVar2 = HasShell(in_x0);
  if (cVar2 == '\0') {
    std::string::string(in_x8,"eat");
    nop();
  }
  else {
    std::string::string(in_x8,"");
    nop();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BeachShell::getStunAnimationName() */

void ZombieAnimRig_BeachShell::getStunAnimationName(void)

{
  long lVar1;
  char cVar2;
  ZombieAnimRig_BeachShell *in_x0;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  cVar2 = HasShell(in_x0);
  if (cVar2 == '\0') {
    std::string::string(in_x8,"stun");
    nop();
  }
  else if (in_x0[0x240] == (ZombieAnimRig_BeachShell)0x0) {
    std::string::string(in_x8,"stun_shell_land");
    nop();
  }
  else {
    std::string::string(in_x8,"stun_shell");
    nop();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_BeachShell::PlayEat() */

void __thiscall ZombieAnimRig_BeachShell::PlayEat(ZombieAnimRig_BeachShell *this)

{
  char cVar1;
  
  cVar1 = HasShell(this);
  if ((cVar1 != '\0') && (this[0x240] == (ZombieAnimRig_BeachShell)0x0)) {
    return;
  }
  ZombieAnimRig::PlayEat((ZombieAnimRig *)this);
  return;
}

