// Class: ZombieAnimRig_FutureBasic


/* ZombieAnimRig_FutureBasic::~ZombieAnimRig_FutureBasic() */

void __thiscall
ZombieAnimRig_FutureBasic::~ZombieAnimRig_FutureBasic(ZombieAnimRig_FutureBasic *this)

{
  *(undefined ***)this = &PTR_GetClass_0686fb80;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_FutureBasic_0686fe98;
  ZombieAnimRig_Basic::~ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_FutureBasic::~ZombieAnimRig_FutureBasic() */

void __thiscall
ZombieAnimRig_FutureBasic::~ZombieAnimRig_FutureBasic(ZombieAnimRig_FutureBasic *this)

{
  ~ZombieAnimRig_FutureBasic(this + -0x10);
  return;
}


/* ZombieAnimRig_FutureBasic::~ZombieAnimRig_FutureBasic() */

void __thiscall
ZombieAnimRig_FutureBasic::~ZombieAnimRig_FutureBasic(ZombieAnimRig_FutureBasic *this)

{
  ~ZombieAnimRig_FutureBasic(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_FutureBasic::~ZombieAnimRig_FutureBasic() */

void __thiscall
ZombieAnimRig_FutureBasic::~ZombieAnimRig_FutureBasic(ZombieAnimRig_FutureBasic *this)

{
  ~ZombieAnimRig_FutureBasic(this + -0x10);
  return;
}


/* ZombieAnimRig_FutureBasic::ZombieAnimRig_FutureBasic() */

void __thiscall
ZombieAnimRig_FutureBasic::ZombieAnimRig_FutureBasic(ZombieAnimRig_FutureBasic *this)

{
  ZombieAnimRig_Basic::ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  *(undefined ***)this = &PTR_GetClass_0686fb80;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_FutureBasic_0686fe98;
  return;
}


/* ZombieAnimRig_FutureBasic::StaticNew() */

ZombieAnimRig_FutureBasic * ZombieAnimRig_FutureBasic::StaticNew(void)

{
  ZombieAnimRig_FutureBasic *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_FutureBasic(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FutureBasic::StaticClassInit() */

void ZombieAnimRig_FutureBasic::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_FutureBasic");
    (*pcVar2)(plVar1,asStack_10,FUN_045ffa20,0x250,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_FutureBasic::StaticGetClass() */

long * ZombieAnimRig_FutureBasic::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_FutureBasic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_FutureBasic::GetClass() const */

long * ZombieAnimRig_FutureBasic::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_FutureBasic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FutureBasic::getHeadLayerNames() */

void ZombieAnimRig_FutureBasic::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b17be8 & 1;
  if (((DAT_06b17be8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17be8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b17af0,"zombie_skull");
    nop();
    std::string::string((string *)&DAT_06b17af8,"zombie_jaw");
    nop();
    std::string::string((string *)&DAT_06b17b00,"zombie_pupil");
    nop();
    __cxa_guard_release(&DAT_06b17be8);
    __cxa_atexit(FUN_045ff70c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b17b70 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17b70), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b17a90,(string *)&DAT_06b17af0,(allocator *)&DAT_06b17b08);
    __cxa_guard_release(&DAT_06b17b70);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b17a90,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b17a90);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FutureBasic::getArmLayerNames() */

void ZombieAnimRig_FutureBasic::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b17b50 & 1;
  if (((DAT_06b17b50 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17b50), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b17c28,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b17c30,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b17c38,"zombie_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06b17c40,"zombie_hand_outer_03");
    nop();
    __cxa_guard_release(&DAT_06b17b50);
    __cxa_atexit(FUN_045ff740,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b17a88 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17a88), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b17b30,(string *)&DAT_06b17c28,(allocator *)&DAT_06b17c48);
    __cxa_guard_release(&DAT_06b17a88);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b17b30,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b17b30);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FutureBasic::getArmReplacementPairNames() */

void ZombieAnimRig_FutureBasic::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b17bf0 & 1;
  if (((DAT_06b17bf0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17bf0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b17b10,"zombie_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b17b18,"zombie_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06b17bf0);
    __cxa_atexit(FUN_045ff77c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b17ba8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17ba8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b17bb8,(string *)&DAT_06b17b10,(allocator *)&DAT_06b17b20);
    __cxa_guard_release(&DAT_06b17ba8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b17bb8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b17bb8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FutureBasic::getFlagHandLayerNames() */

void ZombieAnimRig_FutureBasic::getFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b17ab8 & 1;
  if (((DAT_06b17ab8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17ab8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b17ba0,"FIXME, 0 size array");
    nop();
    __cxa_guard_release(&DAT_06b17ab8);
    __cxa_atexit(FUN_045ff7a8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b17b78 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17b78), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b17b80,(string *)&DAT_06b17ba0,(allocator *)&DAT_06b17ba8);
    __cxa_guard_release(&DAT_06b17b78);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b17b80,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b17b80);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FutureBasic::getNoFlagHandLayerNames() */

void ZombieAnimRig_FutureBasic::getNoFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b17aa8 & 1;
  if (((DAT_06b17aa8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17aa8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b17b48,"FIXME, 0 size array");
    nop();
    __cxa_guard_release(&DAT_06b17aa8);
    __cxa_atexit(FUN_045ff7b4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b17c48 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17c48), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b17bd0,(string *)&DAT_06b17b48,(allocator *)&DAT_06b17b50);
    __cxa_guard_release(&DAT_06b17c48);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b17bd0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b17bd0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FutureBasic::getConeLayerNames() */

void ZombieAnimRig_FutureBasic::getConeLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b17ab0 & 1;
  if (((DAT_06b17ab0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17ab0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b17ad8,"zombie_armor_cone_norm");
    nop();
    std::string::string((string *)&DAT_06b17ae0,"zombie_armor_cone_damage_01");
    nop();
    std::string::string((string *)&DAT_06b17ae8,"zombie_armor_cone_damage_02");
    nop();
    __cxa_guard_release(&DAT_06b17ab0);
    __cxa_atexit(FUN_045ff7c0,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b17b08 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17b08), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b17b58,(string *)&DAT_06b17ad8,(allocator *)&DAT_06b17af0);
    __cxa_guard_release(&DAT_06b17b08);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b17b58,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b17b58);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FutureBasic::getBucketLayerNames() */

void ZombieAnimRig_FutureBasic::getBucketLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b17bf8 & 1;
  if (((DAT_06b17bf8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17bf8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b17c00,"zombie_armor_bucket_norm");
    nop();
    std::string::string((string *)&DAT_06b17c08,"zombie_armor_bucket_damage_01");
    nop();
    std::string::string((string *)&DAT_06b17c10,"zombie_armor_bucket_damage_02");
    nop();
    __cxa_guard_release(&DAT_06b17bf8);
    __cxa_atexit(FUN_045ff7f4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b17bb0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17bb0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b17ac0,(string *)&DAT_06b17c00,(allocator *)&DAT_06b17c18);
    __cxa_guard_release(&DAT_06b17bb0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b17ac0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b17ac0);
}

