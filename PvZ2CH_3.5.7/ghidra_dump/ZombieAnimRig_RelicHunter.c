// Class: ZombieAnimRig_RelicHunter


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RelicHunter::GetLocationOffset() */

void __thiscall ZombieAnimRig_RelicHunter::GetLocationOffset(ZombieAnimRig_RelicHunter *this)

{
  ResistenceValueInfo local_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo(local_18);
  std::string::string(asStack_10,"zombie_relichunter_waist");
  PopAnimRig::CalcLayerTranslation((PopAnimRig *)this,asStack_10,(SexyVector2 *)local_18);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_18._0_4_,local_18._4_4_);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RelicHunter::GetSwingFootOffset() */

void __thiscall ZombieAnimRig_RelicHunter::GetSwingFootOffset(ZombieAnimRig_RelicHunter *this)

{
  ResistenceValueInfo local_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo(local_18);
  std::string::string(asStack_10,"zombie_relichunter_foot_outer_toe");
  PopAnimRig::CalcLayerTranslation((PopAnimRig *)this,asStack_10,(SexyVector2 *)local_18);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_18._0_4_,local_18._4_4_);
}


/* ZombieAnimRig_RelicHunter::~ZombieAnimRig_RelicHunter() */

void __thiscall
ZombieAnimRig_RelicHunter::~ZombieAnimRig_RelicHunter(ZombieAnimRig_RelicHunter *this)

{
  *(undefined ***)this = &PTR_GetClass_068ea440;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_RelicHunter_068ea6c8;
  ZombieAnimRig_Swashbuckler::~ZombieAnimRig_Swashbuckler((ZombieAnimRig_Swashbuckler *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_RelicHunter::~ZombieAnimRig_RelicHunter() */

void __thiscall
ZombieAnimRig_RelicHunter::~ZombieAnimRig_RelicHunter(ZombieAnimRig_RelicHunter *this)

{
  ~ZombieAnimRig_RelicHunter(this + -0x10);
  return;
}


/* ZombieAnimRig_RelicHunter::~ZombieAnimRig_RelicHunter() */

void __thiscall
ZombieAnimRig_RelicHunter::~ZombieAnimRig_RelicHunter(ZombieAnimRig_RelicHunter *this)

{
  ~ZombieAnimRig_RelicHunter(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_RelicHunter::~ZombieAnimRig_RelicHunter() */

void __thiscall
ZombieAnimRig_RelicHunter::~ZombieAnimRig_RelicHunter(ZombieAnimRig_RelicHunter *this)

{
  ~ZombieAnimRig_RelicHunter(this + -0x10);
  return;
}


/* ZombieAnimRig_RelicHunter::ZombieAnimRig_RelicHunter() */

void __thiscall
ZombieAnimRig_RelicHunter::ZombieAnimRig_RelicHunter(ZombieAnimRig_RelicHunter *this)

{
  ZombieAnimRig_Swashbuckler::ZombieAnimRig_Swashbuckler((ZombieAnimRig_Swashbuckler *)this);
  *(undefined ***)this = &PTR_GetClass_068ea440;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_RelicHunter_068ea6c8;
  return;
}


/* ZombieAnimRig_RelicHunter::StaticNew() */

ZombieAnimRig_RelicHunter * ZombieAnimRig_RelicHunter::StaticNew(void)

{
  ZombieAnimRig_RelicHunter *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_RelicHunter(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RelicHunter::StaticClassInit() */

void ZombieAnimRig_RelicHunter::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_RelicHunter");
    (*pcVar2)(plVar1,asStack_10,FUN_047d8560,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_RelicHunter::StaticGetClass() */

long * ZombieAnimRig_RelicHunter::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_Swashbuckler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_RelicHunter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_RelicHunter::GetClass() const */

long * ZombieAnimRig_RelicHunter::GetClass(void)

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
  uVar2 = ZombieAnimRig_Swashbuckler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_RelicHunter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RelicHunter::getHeadLayerNames() */

void ZombieAnimRig_RelicHunter::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b271d0 & 1;
  if (((DAT_06b271d0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b271d0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b272a0,"zombie_relichunter_skull");
    nop();
    std::string::string((string *)&DAT_06b272a8,"zombie_relichunter_jaw");
    nop();
    __cxa_guard_release(&DAT_06b271d0);
    __cxa_atexit(FUN_047d7ca0,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b27270 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b27270), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b27288,(string *)&DAT_06b272a0,
               (allocator *)&ZombieLostCityRelicHunterProps::sClass);
    __cxa_guard_release(&DAT_06b27270);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b27288,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b27288);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RelicHunter::getArmLayerNames() */

void ZombieAnimRig_RelicHunter::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b27250 & 1;
  if (((DAT_06b27250 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b27250), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b27218,"zombie_relichunter_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b27220,"zombie_relichunter_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b27228,"zombie_relichunter_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06b27230,"zombie_relichunter_hand_outer_03");
    nop();
    __cxa_guard_release(&DAT_06b27250);
    __cxa_atexit(FUN_047d7ccc,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b272b8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b272b8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b27200,(string *)&DAT_06b27218,(allocator *)&DAT_06b27238);
    __cxa_guard_release(&DAT_06b272b8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b27200,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b27200);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RelicHunter::getArmReplacementPairNames() */

void ZombieAnimRig_RelicHunter::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b27268 & 1;
  if (((DAT_06b27268 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b27268), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b27258,"zombie_relichunter_arm_outer_upper_01");
    nop();
    std::string::string((string *)&DAT_06b27260,"zombie_relichunter_arm_outer_upper_02");
    nop();
    __cxa_guard_release(&DAT_06b27268);
    __cxa_atexit(FUN_047d7d08,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b271f0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b271f0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b271d8,(string *)&DAT_06b27258,(allocator *)&DAT_06b27268);
    __cxa_guard_release(&DAT_06b271f0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b271d8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b271d8);
}

