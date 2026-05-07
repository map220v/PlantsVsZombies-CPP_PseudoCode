// Class: ZombieAnimRig_DarkBasic


/* ZombieAnimRig_DarkBasic::StaticGetClass() */

long * ZombieAnimRig_DarkBasic::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_DarkBasic",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_DarkBasic::GetClass() const */

long * ZombieAnimRig_DarkBasic::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_DarkBasic",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_DarkBasic::~ZombieAnimRig_DarkBasic() */

void __thiscall ZombieAnimRig_DarkBasic::~ZombieAnimRig_DarkBasic(ZombieAnimRig_DarkBasic *this)

{
  *(undefined ***)this = &PTR_GetClass_0687b6d0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_DarkBasic_0687b9e8;
  ZombieAnimRig_Basic::~ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_DarkBasic::~ZombieAnimRig_DarkBasic() */

void __thiscall ZombieAnimRig_DarkBasic::~ZombieAnimRig_DarkBasic(ZombieAnimRig_DarkBasic *this)

{
  ~ZombieAnimRig_DarkBasic(this + -0x10);
  return;
}


/* ZombieAnimRig_DarkBasic::~ZombieAnimRig_DarkBasic() */

void __thiscall ZombieAnimRig_DarkBasic::~ZombieAnimRig_DarkBasic(ZombieAnimRig_DarkBasic *this)

{
  ~ZombieAnimRig_DarkBasic(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_DarkBasic::~ZombieAnimRig_DarkBasic() */

void __thiscall ZombieAnimRig_DarkBasic::~ZombieAnimRig_DarkBasic(ZombieAnimRig_DarkBasic *this)

{
  ~ZombieAnimRig_DarkBasic(this + -0x10);
  return;
}


/* ZombieAnimRig_DarkBasic::ZombieAnimRig_DarkBasic() */

void __thiscall ZombieAnimRig_DarkBasic::ZombieAnimRig_DarkBasic(ZombieAnimRig_DarkBasic *this)

{
  ZombieAnimRig_Basic::ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  *(undefined ***)this = &PTR_GetClass_0687b6d0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_DarkBasic_0687b9e8;
  return;
}


/* ZombieAnimRig_DarkBasic::StaticNew() */

ZombieAnimRig_DarkBasic * ZombieAnimRig_DarkBasic::StaticNew(void)

{
  ZombieAnimRig_DarkBasic *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_DarkBasic(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DarkBasic::SetLayerVisibilityForCurrentState() */

void __thiscall
ZombieAnimRig_DarkBasic::SetLayerVisibilityForCurrentState(ZombieAnimRig_DarkBasic *this)

{
  long lVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  string *psVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  
  lVar2 = ___stack_chk_guard;
  ZombieAnimRig_Basic::SetLayerVisibilityForCurrentState((ZombieAnimRig_Basic *)this);
  uVar8 = DAT_06b1b170 & 1;
  if (((DAT_06b1b170 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_06b1b170), iVar4 != 0)) {
    std::string::string((string *)&DAT_06b1b200,"zombie_shoulder_armor_norm");
    nop();
    std::string::string((string *)&DAT_06b1b208,"zombie_shoulder_armor_damage_01");
    nop();
    std::string::string((string *)&DAT_06b1b210,"zombie_shoulder_armor_damage_02");
    nop();
    __cxa_guard_release(&DAT_06b1b170);
    __cxa_atexit(FUN_046230ac,uVar8,&DAT_06a88000);
  }
  if (((DAT_06b1b218 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_06b1b218), iVar4 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1b0f8,(string *)&DAT_06b1b200,(allocator *)&DAT_06b1b218);
    __cxa_guard_release(&DAT_06b1b218);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1b0f8,
                 &DAT_06a88000);
  }
  iVar4 = FUN_04623230(DAT_06b1b0f8,DAT_06b1b100);
  cVar3 = (**(code **)(*(long *)this + 0x300))(this,10);
  if (0 < iVar4) {
    lVar7 = 0;
    if (cVar3 == '\0') {
      do {
        lVar1 = lVar7 + 1;
        psVar5 = (string *)FUN_0462323c(DAT_06b1b0f8,lVar7);
        PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar5,false);
        lVar7 = lVar1;
      } while ((int)lVar1 < iVar4);
    }
    else {
      do {
        psVar5 = (string *)FUN_0462323c(DAT_06b1b0f8,lVar7);
        iVar6 = (int)lVar7;
        lVar7 = lVar7 + 1;
        PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar5,*(int *)(this + 0x248) == iVar6);
      } while ((int)lVar7 < iVar4);
    }
  }
  if (lVar2 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DarkBasic::getHeadLayerNames() */

void ZombieAnimRig_DarkBasic::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1b058 & 1;
  if (((DAT_06b1b058 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b058), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1b178,"zombie_skull");
    nop();
    std::string::string((string *)&DAT_06b1b180,"zombie_jaw");
    nop();
    std::string::string((string *)&DAT_06b1b188,"zombie_pupil");
    nop();
    __cxa_guard_release(&DAT_06b1b058);
    __cxa_atexit(FUN_046230e0,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1b0b8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b0b8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1b138,(string *)&DAT_06b1b178,(allocator *)&DAT_06b1b190);
    __cxa_guard_release(&DAT_06b1b0b8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1b138,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1b138);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DarkBasic::getArmLayerNames() */

void ZombieAnimRig_DarkBasic::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1b1a0 & 1;
  if (((DAT_06b1b1a0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b1a0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1b1a8,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b1b1b0,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b1b1b8,"zombie_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06b1b1c0,"zombie_hand_outer_03");
    nop();
    __cxa_guard_release(&DAT_06b1b1a0);
    __cxa_atexit(FUN_04623114,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1b0e8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b0e8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1b078,(string *)&DAT_06b1b1a8,(allocator *)&DAT_06b1b1c8);
    __cxa_guard_release(&DAT_06b1b0e8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1b078,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1b078);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DarkBasic::getArmReplacementPairNames() */

void ZombieAnimRig_DarkBasic::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1b0c0 & 1;
  if (((DAT_06b1b0c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b0c0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1b240,"zombie_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b1b248,"zombie_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06b1b0c0);
    __cxa_atexit(FUN_04623150,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1b0a8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b0a8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1b270,(string *)&DAT_06b1b240,(allocator *)&DAT_06b1b250);
    __cxa_guard_release(&DAT_06b1b0a8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1b270,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1b270);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DarkBasic::getFlagHandLayerNames() */

void ZombieAnimRig_DarkBasic::getFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1b0b0 & 1;
  if (((DAT_06b1b0b0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b0b0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1b0e0,"FIXME, 0 size array");
    nop();
    __cxa_guard_release(&DAT_06b1b0b0);
    __cxa_atexit(FUN_0462317c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1b040 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b040), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1b258,(string *)&DAT_06b1b0e0,(allocator *)&DAT_06b1b0e8);
    __cxa_guard_release(&DAT_06b1b040);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1b258,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1b258);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DarkBasic::getNoFlagHandLayerNames() */

void ZombieAnimRig_DarkBasic::getNoFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1b228 & 1;
  if (((DAT_06b1b228 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b228), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1b238,"FIXME, 0 size array");
    nop();
    __cxa_guard_release(&DAT_06b1b228);
    __cxa_atexit(FUN_04623188,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1b220 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b220), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1b060,(string *)&DAT_06b1b238,(allocator *)&DAT_06b1b240);
    __cxa_guard_release(&DAT_06b1b220);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1b060,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1b060);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DarkBasic::getConeLayerNames() */

void ZombieAnimRig_DarkBasic::getConeLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1b048 & 1;
  if (((DAT_06b1b048 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b048), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1b158,"zombie_armor_cone_norm");
    nop();
    std::string::string((string *)&DAT_06b1b160,"zombie_armor_cone_damage_01");
    nop();
    std::string::string((string *)&DAT_06b1b168,"zombie_armor_cone_damage_02");
    nop();
    __cxa_guard_release(&DAT_06b1b048);
    __cxa_atexit(FUN_04623194,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1b150 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b150), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1b1c8,(string *)&DAT_06b1b158,(allocator *)&DAT_06b1b170);
    __cxa_guard_release(&DAT_06b1b150);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1b1c8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1b1c8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DarkBasic::getBucketLayerNames() */

void ZombieAnimRig_DarkBasic::getBucketLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1b0f0 & 1;
  if (((DAT_06b1b0f0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b0f0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1b120,"zombie_armor_bucket_norm");
    nop();
    std::string::string((string *)&DAT_06b1b128,"zombie_armor_bucket_damage_01");
    nop();
    std::string::string((string *)&DAT_06b1b130,"zombie_armor_bucket_damage_02");
    nop();
    __cxa_guard_release(&DAT_06b1b0f0);
    __cxa_atexit(FUN_046231c8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1b050 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b050), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1b1e0,(string *)&DAT_06b1b120,(allocator *)&DAT_06b1b138);
    __cxa_guard_release(&DAT_06b1b050);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1b1e0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1b1e0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DarkBasic::getCrownLayerNames() */

void ZombieAnimRig_DarkBasic::getCrownLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1b230 & 1;
  if (((DAT_06b1b230 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b230), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1b0c8,"zombie_armor_crown_norm");
    nop();
    std::string::string((string *)&DAT_06b1b0d0,"zombie_armor_crown_damage_01");
    nop();
    std::string::string((string *)&DAT_06b1b0d8,"zombie_armor_crown_damage_02");
    nop();
    __cxa_guard_release(&DAT_06b1b230);
    __cxa_atexit(FUN_046231fc,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1b250 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b250), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1b090,(string *)&DAT_06b1b0c8,(allocator *)&DAT_06b1b0e0);
    __cxa_guard_release(&DAT_06b1b250);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1b090,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1b090);
}

