// Class: ZombieAnimRig_LostCityBasic


/* ZombieAnimRig_LostCityBasic::~ZombieAnimRig_LostCityBasic() */

void __thiscall
ZombieAnimRig_LostCityBasic::~ZombieAnimRig_LostCityBasic(ZombieAnimRig_LostCityBasic *this)

{
  *(undefined ***)this = &PTR_GetClass_068eccc0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_LostCityBasic_068ecfd8;
  ZombieAnimRig_Basic::~ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_LostCityBasic::~ZombieAnimRig_LostCityBasic() */

void __thiscall
ZombieAnimRig_LostCityBasic::~ZombieAnimRig_LostCityBasic(ZombieAnimRig_LostCityBasic *this)

{
  ~ZombieAnimRig_LostCityBasic(this + -0x10);
  return;
}


/* ZombieAnimRig_LostCityBasic::~ZombieAnimRig_LostCityBasic() */

void __thiscall
ZombieAnimRig_LostCityBasic::~ZombieAnimRig_LostCityBasic(ZombieAnimRig_LostCityBasic *this)

{
  ~ZombieAnimRig_LostCityBasic(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_LostCityBasic::~ZombieAnimRig_LostCityBasic() */

void __thiscall
ZombieAnimRig_LostCityBasic::~ZombieAnimRig_LostCityBasic(ZombieAnimRig_LostCityBasic *this)

{
  ~ZombieAnimRig_LostCityBasic(this + -0x10);
  return;
}


/* ZombieAnimRig_LostCityBasic::ZombieAnimRig_LostCityBasic() */

void __thiscall
ZombieAnimRig_LostCityBasic::ZombieAnimRig_LostCityBasic(ZombieAnimRig_LostCityBasic *this)

{
  ZombieAnimRig_Basic::ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  *(undefined ***)this = &PTR_GetClass_068eccc0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_LostCityBasic_068ecfd8;
  return;
}


/* ZombieAnimRig_LostCityBasic::StaticNew() */

ZombieAnimRig_LostCityBasic * ZombieAnimRig_LostCityBasic::StaticNew(void)

{
  ZombieAnimRig_LostCityBasic *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_LostCityBasic(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_LostCityBasic::StaticClassInit() */

void ZombieAnimRig_LostCityBasic::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_LostCityBasic");
    (*pcVar2)(plVar1,asStack_10,FUN_047dc5c8,0x250,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_LostCityBasic::StaticGetClass() */

long * ZombieAnimRig_LostCityBasic::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_LostCityBasic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_LostCityBasic::GetClass() const */

long * ZombieAnimRig_LostCityBasic::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_LostCityBasic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_LostCityBasic::getHeadLayerNames() */

void ZombieAnimRig_LostCityBasic::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b275f0 & 1;
  if (((DAT_06b275f0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b275f0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b27628,"zombie_skull");
    nop();
    std::string::string((string *)&DAT_06b27630,"zombie_jaw");
    nop();
    __cxa_guard_release(&DAT_06b275f0);
    __cxa_atexit(FUN_047dc0d8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b27518 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b27518), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b274f8,(string *)&DAT_06b27628,(allocator *)&DAT_06b27638);
    __cxa_guard_release(&DAT_06b27518);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b274f8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b274f8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_LostCityBasic::getArmLayerNames() */

void ZombieAnimRig_LostCityBasic::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b275d0 & 1;
  if (((DAT_06b275d0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b275d0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b27570,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b27578,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b27580,"zombie_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06b27588,"zombie_hand_outer_03");
    nop();
    __cxa_guard_release(&DAT_06b275d0);
    __cxa_atexit(FUN_047dc104,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b275e8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b275e8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b27558,(string *)&DAT_06b27570,
               (allocator *)&ZombieLostCityBasic::sClass);
    __cxa_guard_release(&DAT_06b275e8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b27558,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b27558);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_LostCityBasic::getArmReplacementPairNames() */

void ZombieAnimRig_LostCityBasic::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b27520 & 1;
  if (((DAT_06b27520 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b27520), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b274e8,"zombie_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b274f0,"zombie_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06b27520);
    __cxa_atexit(FUN_047dc140,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b27620 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b27620), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b274d0,(string *)&DAT_06b274e8,(allocator *)&DAT_06b274f8);
    __cxa_guard_release(&DAT_06b27620);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b274d0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b274d0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_LostCityBasic::getConeLayerNames() */

void ZombieAnimRig_LostCityBasic::getConeLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b27610 & 1;
  if (((DAT_06b27610 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b27610), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b275f8,"zombie_armor_cone_norm");
    nop();
    std::string::string((string *)&DAT_06b27600,"zombie_armor_cone_damage_01");
    nop();
    std::string::string((string *)&DAT_06b27608,"zombie_armor_cone_damage_02");
    nop();
    __cxa_guard_release(&DAT_06b27610);
    __cxa_atexit(FUN_047dc16c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b275b0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b275b0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b275b8,(string *)&DAT_06b275f8,(allocator *)&DAT_06b27610);
    __cxa_guard_release(&DAT_06b275b0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b275b8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b275b8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_LostCityBasic::getBucketLayerNames() */

void ZombieAnimRig_LostCityBasic::getBucketLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b27668 & 1;
  if (((DAT_06b27668 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b27668), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b27540,"zombie_armor_bucket_norm");
    nop();
    std::string::string((string *)&DAT_06b27548,"zombie_armor_bucket_damage_01");
    nop();
    std::string::string((string *)&DAT_06b27550,"zombie_armor_bucket_damage_02");
    nop();
    __cxa_guard_release(&DAT_06b27668);
    __cxa_atexit(FUN_047dc1a0,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b27510 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b27510), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b27528,(string *)&DAT_06b27540,(allocator *)&DAT_06b27558);
    __cxa_guard_release(&DAT_06b27510);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b27528,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b27528);
}

