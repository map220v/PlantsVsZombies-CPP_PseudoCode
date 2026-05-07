// Class: ZombieAnimRig_Poncho


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Poncho::onPopAnimInitialized() */

void __thiscall ZombieAnimRig_Poncho::onPopAnimInitialized(ZombieAnimRig_Poncho *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieAnimRig::onPopAnimInitialized((ZombieAnimRig *)this);
  this[0x240] = (ZombieAnimRig_Poncho)0x0;
  *(undefined4 *)(this + 0x244) = 0;
  std::string::string(asStack_10,"plate");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"poncho");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_Poncho::~ZombieAnimRig_Poncho() */

void __thiscall ZombieAnimRig_Poncho::~ZombieAnimRig_Poncho(ZombieAnimRig_Poncho *this)

{
  *(undefined ***)this = &PTR_GetClass_06872d00;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Poncho_06872f78;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Poncho::~ZombieAnimRig_Poncho() */

void __thiscall ZombieAnimRig_Poncho::~ZombieAnimRig_Poncho(ZombieAnimRig_Poncho *this)

{
  ~ZombieAnimRig_Poncho(this + -0x10);
  return;
}


/* ZombieAnimRig_Poncho::~ZombieAnimRig_Poncho() */

void __thiscall ZombieAnimRig_Poncho::~ZombieAnimRig_Poncho(ZombieAnimRig_Poncho *this)

{
  ~ZombieAnimRig_Poncho(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Poncho::~ZombieAnimRig_Poncho() */

void __thiscall ZombieAnimRig_Poncho::~ZombieAnimRig_Poncho(ZombieAnimRig_Poncho *this)

{
  ~ZombieAnimRig_Poncho(this + -0x10);
  return;
}


/* ZombieAnimRig_Poncho::ZombieAnimRig_Poncho() */

void __thiscall ZombieAnimRig_Poncho::ZombieAnimRig_Poncho(ZombieAnimRig_Poncho *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  this[0x240] = (ZombieAnimRig_Poncho)0x0;
  *(undefined4 *)(this + 0x244) = 0;
  *(undefined ***)this = &PTR_GetClass_06872d00;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Poncho_06872f78;
  return;
}


/* ZombieAnimRig_Poncho::StaticNew() */

ZombieAnimRig_Poncho * ZombieAnimRig_Poncho::StaticNew(void)

{
  ZombieAnimRig_Poncho *this;
  
  this = ::operator_new(0x248);
  ZombieAnimRig_Poncho(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Poncho::StaticClassInit() */

void ZombieAnimRig_Poncho::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_Poncho");
    (*pcVar2)(plVar1,asStack_10,FUN_0460a48c,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_Poncho::StaticGetClass() */

long * ZombieAnimRig_Poncho::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Poncho",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_Poncho::GetClass() const */

long * ZombieAnimRig_Poncho::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Poncho",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Poncho::DiscardPoncho() */

void __thiscall ZombieAnimRig_Poncho::DiscardPoncho(ZombieAnimRig_Poncho *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"poncho");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_Poncho::SetHasPlate(bool) */

void __thiscall ZombieAnimRig_Poncho::SetHasPlate(ZombieAnimRig_Poncho *this,bool param_1)

{
  this[0x240] = (ZombieAnimRig_Poncho)param_1;
  (**(code **)(*(long *)this + 0x1f8))();
  return;
}


/* ZombieAnimRig_Poncho::DiscardPlate() */

void __thiscall ZombieAnimRig_Poncho::DiscardPlate(ZombieAnimRig_Poncho *this)

{
  SetHasPlate(this,false);
  (**(code **)(*(long *)this + 0x1f8))(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Poncho::GetPonchoSymbolName() */

void __thiscall ZombieAnimRig_Poncho::GetPonchoSymbolName(ZombieAnimRig_Poncho *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"poncho");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Poncho::GetPonchoParticleName() */

void __thiscall ZombieAnimRig_Poncho::GetPonchoParticleName(ZombieAnimRig_Poncho *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"particle_poncho");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Poncho::GetPlateSymbolName() */

void __thiscall ZombieAnimRig_Poncho::GetPlateSymbolName(ZombieAnimRig_Poncho *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"plate");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Poncho::getHeadLayerNames() */

void ZombieAnimRig_Poncho::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b18af0 & 1;
  if (((DAT_06b18af0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18af0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b18ab8,"zombie_poncho_skull");
    nop();
    std::string::string((string *)&DAT_06b18ac0,"zombie_poncho_jaw");
    nop();
    std::string::string((string *)&DAT_06b18ac8,"zombie_poncho_beard");
    nop();
    __cxa_guard_release(&DAT_06b18af0);
    __cxa_atexit(FUN_0460a068,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b18b30 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18b30), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b18a78,(string *)&DAT_06b18ab8,(allocator *)&DAT_06b18ad0);
    __cxa_guard_release(&DAT_06b18b30);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b18a78,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b18a78);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Poncho::getArmLayerNames() */

void ZombieAnimRig_Poncho::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b18b78 & 1;
  if (((DAT_06b18b78 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18b78), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b18af8,"zombie_poncho_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b18b00,"zombie_poncho_hand_outer");
    nop();
    __cxa_guard_release(&DAT_06b18b78);
    __cxa_atexit(FUN_0460a09c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b18aa8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18aa8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b18b60,(string *)&DAT_06b18af8,(allocator *)&DAT_06b18b08);
    __cxa_guard_release(&DAT_06b18aa8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b18b60,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b18b60);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Poncho::getArmReplacementPairNames() */

void ZombieAnimRig_Poncho::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b18b58 & 1;
  if (((DAT_06b18b58 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18b58), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b18b80,"zombie_poncho_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b18b88,"zombie_poncho_arm_outer_upper2");
    nop();
    __cxa_guard_release(&DAT_06b18b58);
    __cxa_atexit(FUN_0460a0c8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b18b38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18b38), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b18b40,(string *)&DAT_06b18b80,(allocator *)&DAT_06b18b90);
    __cxa_guard_release(&DAT_06b18b38);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b18b40,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b18b40);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Poncho::getPlateLayerNames() */

void ZombieAnimRig_Poncho::getPlateLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b18b98 & 1;
  if (((DAT_06b18b98 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18b98), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b18b18,"zombie_poncho_armor1_norm");
    nop();
    std::string::string((string *)&DAT_06b18b20,"zombie_poncho_armor1_damage1");
    nop();
    std::string::string((string *)&DAT_06b18b28,"zombie_poncho_armor1_damage2");
    nop();
    __cxa_guard_release(&DAT_06b18b98);
    __cxa_atexit(FUN_0460a0f4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b18b90 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18b90), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b18ba8,(string *)&DAT_06b18b18,(allocator *)&DAT_06b18b30);
    __cxa_guard_release(&DAT_06b18b90);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b18ba8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b18ba8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Poncho::SetLayerVisibilityForCurrentState() */

void __thiscall ZombieAnimRig_Poncho::SetLayerVisibilityForCurrentState(ZombieAnimRig_Poncho *this)

{
  int iVar1;
  undefined8 *puVar2;
  string *psVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"plate");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,(bool)this[0x240]);
  std::string::~string(asStack_10);
  nop();
  if (this[0x240] != (ZombieAnimRig_Poncho)0x0) {
    lVar5 = 0;
    puVar2 = (undefined8 *)getPlateLayerNames();
    while( true ) {
      uVar6 = *puVar2;
      iVar1 = FUN_0460a280(uVar6,puVar2[1]);
      iVar4 = (int)lVar5;
      if (iVar1 <= iVar4) break;
      psVar3 = (string *)FUN_0460a28c(uVar6,lVar5);
      lVar5 = lVar5 + 1;
      PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar3,*(int *)(this + 0x244) == iVar4);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Poncho::GetPlateParticleName() */

void ZombieAnimRig_Poncho::GetPlateParticleName(void)

{
  long lVar1;
  int iVar2;
  long in_x0;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b18ab0 & 1;
  if (((DAT_06b18ab0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18ab0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b18a90,"particle_plate");
    nop();
    std::string::string((string *)&DAT_06b18a98,"zombie_poncho_armor1_damage1");
    nop();
    std::string::string((string *)&DAT_06b18aa0,"zombie_poncho_armor1_damage2");
    nop();
    __cxa_guard_release(&DAT_06b18ab0);
    __cxa_atexit(FUN_0460a128,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b18ba0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18ba0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b18ad0,(string *)&DAT_06b18a90,(allocator *)&DAT_06b18aa8);
    __cxa_guard_release(&DAT_06b18ba0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b18ad0,
                 &DAT_06a88000);
  }
  FUN_0460a294(DAT_06b18ad0,(long)*(int *)(in_x0 + 0x244));
  FUN_05475d88();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

