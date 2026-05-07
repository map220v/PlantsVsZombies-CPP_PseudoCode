// Class: ZombieAnimRig_ZoybeanPodBasic


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZoybeanPodBasic::StaticClassInit() */

void ZombieAnimRig_ZoybeanPodBasic::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_ZoybeanPodBasic");
    (*pcVar2)(plVar1,asStack_10,FUN_0345f30c,0x250,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_ZoybeanPodBasic::StaticGetClass() */

long * ZombieAnimRig_ZoybeanPodBasic::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_ZoybeanPodBasic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_ZoybeanPodBasic::GetClass() const */

long * ZombieAnimRig_ZoybeanPodBasic::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_ZoybeanPodBasic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_ZoybeanPodBasic::~ZombieAnimRig_ZoybeanPodBasic() */

void __thiscall
ZombieAnimRig_ZoybeanPodBasic::~ZombieAnimRig_ZoybeanPodBasic(ZombieAnimRig_ZoybeanPodBasic *this)

{
  *(undefined ***)this = &PTR_GetClass_06636f30;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ZoybeanPodBasic_06637248;
  ZombieAnimRig_Basic::~ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ZoybeanPodBasic::~ZombieAnimRig_ZoybeanPodBasic() */

void __thiscall
ZombieAnimRig_ZoybeanPodBasic::~ZombieAnimRig_ZoybeanPodBasic(ZombieAnimRig_ZoybeanPodBasic *this)

{
  ~ZombieAnimRig_ZoybeanPodBasic(this + -0x10);
  return;
}


/* ZombieAnimRig_ZoybeanPodBasic::~ZombieAnimRig_ZoybeanPodBasic() */

void __thiscall
ZombieAnimRig_ZoybeanPodBasic::~ZombieAnimRig_ZoybeanPodBasic(ZombieAnimRig_ZoybeanPodBasic *this)

{
  ~ZombieAnimRig_ZoybeanPodBasic(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ZoybeanPodBasic::~ZombieAnimRig_ZoybeanPodBasic() */

void __thiscall
ZombieAnimRig_ZoybeanPodBasic::~ZombieAnimRig_ZoybeanPodBasic(ZombieAnimRig_ZoybeanPodBasic *this)

{
  ~ZombieAnimRig_ZoybeanPodBasic(this + -0x10);
  return;
}


/* ZombieAnimRig_ZoybeanPodBasic::ZombieAnimRig_ZoybeanPodBasic() */

void __thiscall
ZombieAnimRig_ZoybeanPodBasic::ZombieAnimRig_ZoybeanPodBasic(ZombieAnimRig_ZoybeanPodBasic *this)

{
  undefined4 uVar1;
  
  ZombieAnimRig_Basic::ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  this[0x240] = (ZombieAnimRig_ZoybeanPodBasic)0x0;
  *(undefined4 *)(this + 0x244) = 0;
  *(undefined ***)this = &PTR_GetClass_06636f30;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ZoybeanPodBasic_06637248;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x248) = 0;
  *(undefined4 *)(this + 0x24c) = uVar1;
  return;
}


/* ZombieAnimRig_ZoybeanPodBasic::StaticNew() */

ZombieAnimRig_ZoybeanPodBasic * ZombieAnimRig_ZoybeanPodBasic::StaticNew(void)

{
  ZombieAnimRig_ZoybeanPodBasic *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_ZoybeanPodBasic(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZoybeanPodBasic::getHeadLayerNames() */

void ZombieAnimRig_ZoybeanPodBasic::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06aa14e8 & 1;
  if (((DAT_06aa14e8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06aa14e8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06aa1490,"zombie_skull");
    nop();
    std::string::string((string *)&DAT_06aa1498,"zombie_jaw");
    nop();
    std::string::string((string *)&DAT_06aa14a0,"zombie_pupil");
    nop();
    std::string::string((string *)&DAT_06aa14a8,"zombie_hair");
    nop();
    __cxa_guard_release(&DAT_06aa14e8);
    __cxa_atexit(FUN_0345ef1c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06aa13d0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06aa13d0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06aa13b0,(string *)&DAT_06aa1490,(allocator *)&DAT_06aa14b0);
    __cxa_guard_release(&DAT_06aa13d0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06aa13b0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06aa13b0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZoybeanPodBasic::getArmLayerNames() */

void ZombieAnimRig_ZoybeanPodBasic::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06aa14c8 & 1;
  if (((DAT_06aa14c8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06aa14c8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06aa14f0,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06aa14f8,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06aa1500,"zombie_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06aa1508,"zombie_hand_outer_03");
    nop();
    __cxa_guard_release(&DAT_06aa14c8);
    __cxa_atexit(FUN_0345ef58,uVar3,&DAT_06a88000);
  }
  if (((DAT_06aa13c8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06aa13c8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06aa1398,(string *)&DAT_06aa14f0,(allocator *)&DAT_06aa1510);
    __cxa_guard_release(&DAT_06aa13c8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06aa1398,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06aa1398);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZoybeanPodBasic::getArmReplacementPairNames() */

void ZombieAnimRig_ZoybeanPodBasic::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06aa14b0 & 1;
  if (((DAT_06aa14b0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06aa14b0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06aa1408,"zombie_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06aa1410,"zombie_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06aa14b0);
    __cxa_atexit(FUN_0345ef94,uVar3,&DAT_06a88000);
  }
  if (((DAT_06aa1418 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06aa1418), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06aa13d8,(string *)&DAT_06aa1408,(allocator *)&DAT_06aa1418);
    __cxa_guard_release(&DAT_06aa1418);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06aa13d8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06aa13d8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZoybeanPodBasic::getConeLayerNames() */

void ZombieAnimRig_ZoybeanPodBasic::getConeLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06aa14d0 & 1;
  if (((DAT_06aa14d0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06aa14d0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06aa13f0,"zombie_armor_cone_norm");
    nop();
    std::string::string((string *)&DAT_06aa13f8,"zombie_armor_cone_damage_01");
    nop();
    std::string::string((string *)&DAT_06aa1400,"zombie_armor_cone_damage_02");
    nop();
    __cxa_guard_release(&DAT_06aa14d0);
    __cxa_atexit(FUN_0345efc0,uVar3,&DAT_06a88000);
  }
  if (((DAT_06aa14e0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06aa14e0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06aa1470,(string *)&DAT_06aa13f0,(allocator *)&DAT_06aa1408);
    __cxa_guard_release(&DAT_06aa14e0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06aa1470,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06aa1470);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZoybeanPodBasic::getBucketLayerNames() */

void ZombieAnimRig_ZoybeanPodBasic::getBucketLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06aa1488 & 1;
  if (((DAT_06aa1488 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06aa1488), iVar2 != 0)) {
    std::string::string((string *)&DAT_06aa1440,"zombie_armor_bucket_norm");
    nop();
    std::string::string((string *)&DAT_06aa1448,"zombie_armor_bucket_damage_01");
    nop();
    std::string::string((string *)&DAT_06aa1450,"zombie_armor_bucket_damage_02");
    nop();
    __cxa_guard_release(&DAT_06aa1488);
    __cxa_atexit(FUN_0345eff4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06aa14d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06aa14d8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06aa1420,(string *)&DAT_06aa1440,(allocator *)&DAT_06aa1458);
    __cxa_guard_release(&DAT_06aa14d8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06aa1420,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06aa1420);
}

