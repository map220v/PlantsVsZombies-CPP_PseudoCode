// Class: ZombieAnimRig_BeachBasic


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BeachBasic::onPopAnimInitialized() */

void __thiscall ZombieAnimRig_BeachBasic::onPopAnimInitialized(ZombieAnimRig_BeachBasic *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieAnimRig_PirateBarrel::onPopAnimInitialized((ZombieAnimRig_PirateBarrel *)this);
  std::string::string(asStack_10,"zombie_seaweed1");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_BeachBasic::~ZombieAnimRig_BeachBasic() */

void __thiscall ZombieAnimRig_BeachBasic::~ZombieAnimRig_BeachBasic(ZombieAnimRig_BeachBasic *this)

{
  *(undefined ***)this = &PTR_GetClass_0686c840;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_BeachBasic_0686cb58;
  ZombieAnimRig_Basic::~ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_BeachBasic::~ZombieAnimRig_BeachBasic() */

void __thiscall ZombieAnimRig_BeachBasic::~ZombieAnimRig_BeachBasic(ZombieAnimRig_BeachBasic *this)

{
  ~ZombieAnimRig_BeachBasic(this + -0x10);
  return;
}


/* ZombieAnimRig_BeachBasic::~ZombieAnimRig_BeachBasic() */

void __thiscall ZombieAnimRig_BeachBasic::~ZombieAnimRig_BeachBasic(ZombieAnimRig_BeachBasic *this)

{
  ~ZombieAnimRig_BeachBasic(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_BeachBasic::~ZombieAnimRig_BeachBasic() */

void __thiscall ZombieAnimRig_BeachBasic::~ZombieAnimRig_BeachBasic(ZombieAnimRig_BeachBasic *this)

{
  ~ZombieAnimRig_BeachBasic(this + -0x10);
  return;
}


/* ZombieAnimRig_BeachBasic::ZombieAnimRig_BeachBasic() */

void __thiscall ZombieAnimRig_BeachBasic::ZombieAnimRig_BeachBasic(ZombieAnimRig_BeachBasic *this)

{
  ZombieAnimRig_Basic::ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  *(undefined ***)this = &PTR_GetClass_0686c840;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_BeachBasic_0686cb58;
  return;
}


/* ZombieAnimRig_BeachBasic::StaticNew() */

ZombieAnimRig_BeachBasic * ZombieAnimRig_BeachBasic::StaticNew(void)

{
  ZombieAnimRig_BeachBasic *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_BeachBasic(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BeachBasic::StaticClassInit() */

void ZombieAnimRig_BeachBasic::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_BeachBasic");
    (*pcVar2)(plVar1,asStack_10,FUN_045f4268,0x250,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_BeachBasic::StaticGetClass() */

long * ZombieAnimRig_BeachBasic::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_BeachBasic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_BeachBasic::GetClass() const */

long * ZombieAnimRig_BeachBasic::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_BeachBasic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BeachBasic::getHeadLayerNames() */

void ZombieAnimRig_BeachBasic::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b16b58 & 1;
  if (((DAT_06b16b58 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b16b58), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b16bf0,"zombie_skull");
    nop();
    std::string::string((string *)&DAT_06b16bf8,"zombie_jaw");
    nop();
    std::string::string((string *)&DAT_06b16c00,"zombie_pupil");
    nop();
    std::string::string((string *)&DAT_06b16c08,"zombie_hair");
    nop();
    __cxa_guard_release(&DAT_06b16b58);
    __cxa_atexit(FUN_045f3edc,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b16c28 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b16c28), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b16b30,(string *)&DAT_06b16bf0,(allocator *)&DAT_06b16c10);
    __cxa_guard_release(&DAT_06b16c28);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b16b30,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b16b30);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BeachBasic::getArmLayerNames() */

void ZombieAnimRig_BeachBasic::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b16c30 & 1;
  if (((DAT_06b16c30 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b16c30), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b16b78,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b16b80,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b16b88,"zombie_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06b16b90,"zombie_hand_outer_03");
    nop();
    __cxa_guard_release(&DAT_06b16c30);
    __cxa_atexit(FUN_045f3f18,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b16ae0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b16ae0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b16ae8,(string *)&DAT_06b16b78,(allocator *)&DAT_06b16b98);
    __cxa_guard_release(&DAT_06b16ae0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b16ae8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b16ae8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BeachBasic::getArmReplacementPairNames() */

void ZombieAnimRig_BeachBasic::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b16b60 & 1;
  if (((DAT_06b16b60 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b16b60), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b16b48,"zombie_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b16b50,"zombie_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06b16b60);
    __cxa_atexit(FUN_045f3f54,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b16b28 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b16b28), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b16b00,(string *)&DAT_06b16b48,(allocator *)&DAT_06b16b58);
    __cxa_guard_release(&DAT_06b16b28);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b16b00,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b16b00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BeachBasic::getConeLayerNames() */

void ZombieAnimRig_BeachBasic::getConeLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b16b20 & 1;
  if (((DAT_06b16b20 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b16b20), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b16bd8,"zombie_armor_cone_norm");
    nop();
    std::string::string((string *)&DAT_06b16be0,"zombie_armor_cone_damage_01");
    nop();
    std::string::string((string *)&DAT_06b16be8,"zombie_armor_cone_damage_02");
    nop();
    __cxa_guard_release(&DAT_06b16b20);
    __cxa_atexit(FUN_045f3f80,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b16b18 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b16b18), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b16ba8,(string *)&DAT_06b16bd8,(allocator *)&DAT_06b16bf0);
    __cxa_guard_release(&DAT_06b16b18);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b16ba8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b16ba8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BeachBasic::getBucketLayerNames() */

void ZombieAnimRig_BeachBasic::getBucketLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b16b68 & 1;
  if (((DAT_06b16b68 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b16b68), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b16c10,"zombie_armor_bucket_norm");
    nop();
    std::string::string((string *)&DAT_06b16c18,"zombie_armor_bucket_damage_01");
    nop();
    std::string::string((string *)&DAT_06b16c20,"zombie_armor_bucket_damage_02");
    nop();
    __cxa_guard_release(&DAT_06b16b68);
    __cxa_atexit(FUN_045f3fb4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b16b70 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b16b70), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b16c38,(string *)&DAT_06b16c10,(allocator *)&DAT_06b16c28);
    __cxa_guard_release(&DAT_06b16b70);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b16c38,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b16c38);
}

