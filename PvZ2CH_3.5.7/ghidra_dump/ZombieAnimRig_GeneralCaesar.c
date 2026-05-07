// Class: ZombieAnimRig_GeneralCaesar


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_GeneralCaesar::getRangedAttackAnimationName() */

void __thiscall
ZombieAnimRig_GeneralCaesar::getRangedAttackAnimationName(ZombieAnimRig_GeneralCaesar *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"ATTACK");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_GeneralCaesar::getWalkReverseAnimationName() */

void __thiscall
ZombieAnimRig_GeneralCaesar::getWalkReverseAnimationName(ZombieAnimRig_GeneralCaesar *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"walk_off2");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* ZombieAnimRig_GeneralCaesar::StaticGetClass() */

long * ZombieAnimRig_GeneralCaesar::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_GeneralBase::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_GeneralCaesar",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_GeneralCaesar::GetClass() const */

long * ZombieAnimRig_GeneralCaesar::GetClass(void)

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
  uVar2 = ZombieAnimRig_GeneralBase::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_GeneralCaesar",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_GeneralCaesar::~ZombieAnimRig_GeneralCaesar() */

void __thiscall
ZombieAnimRig_GeneralCaesar::~ZombieAnimRig_GeneralCaesar(ZombieAnimRig_GeneralCaesar *this)

{
  *(undefined ***)this = &PTR_GetClass_06a0b1b0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_GeneralCaesar_06a0b438;
  ZombieAnimRig_GeneralBase::~ZombieAnimRig_GeneralBase((ZombieAnimRig_GeneralBase *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_GeneralCaesar::~ZombieAnimRig_GeneralCaesar() */

void __thiscall
ZombieAnimRig_GeneralCaesar::~ZombieAnimRig_GeneralCaesar(ZombieAnimRig_GeneralCaesar *this)

{
  ~ZombieAnimRig_GeneralCaesar(this + -0x10);
  return;
}


/* ZombieAnimRig_GeneralCaesar::~ZombieAnimRig_GeneralCaesar() */

void __thiscall
ZombieAnimRig_GeneralCaesar::~ZombieAnimRig_GeneralCaesar(ZombieAnimRig_GeneralCaesar *this)

{
  ~ZombieAnimRig_GeneralCaesar(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_GeneralCaesar::~ZombieAnimRig_GeneralCaesar() */

void __thiscall
ZombieAnimRig_GeneralCaesar::~ZombieAnimRig_GeneralCaesar(ZombieAnimRig_GeneralCaesar *this)

{
  ~ZombieAnimRig_GeneralCaesar(this + -0x10);
  return;
}


/* ZombieAnimRig_GeneralCaesar::ZombieAnimRig_GeneralCaesar() */

void __thiscall
ZombieAnimRig_GeneralCaesar::ZombieAnimRig_GeneralCaesar(ZombieAnimRig_GeneralCaesar *this)

{
  ZombieAnimRig_GeneralBase::ZombieAnimRig_GeneralBase((ZombieAnimRig_GeneralBase *)this);
  *(undefined ***)this = &PTR_GetClass_06a0b1b0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_GeneralCaesar_06a0b438;
  return;
}


/* ZombieAnimRig_GeneralCaesar::StaticNew() */

ZombieAnimRig_GeneralCaesar * ZombieAnimRig_GeneralCaesar::StaticNew(void)

{
  ZombieAnimRig_GeneralCaesar *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_GeneralCaesar(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_GeneralCaesar::getBaseLayers() */

void ZombieAnimRig_GeneralCaesar::getBaseLayers(void)

{
  int iVar1;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  string asStack_80 [8];
  string asStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  vector<std::string,std::allocator<std::string>> avStack_50 [24];
  vector<std::string,std::allocator<std::string>> avStack_38 [24];
  vector<std::string,std::allocator<std::string>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((DAT_06ba4cc8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06ba4cc8), iVar1 != 0)) {
    std::string::string(asStack_80,"treadmill_state01");
    std::string::string(asStack_78,"brain_red_small");
    std::vector<std::string,std::allocator<std::string>>::vector(avStack_50,asStack_80,2,auStack_c0)
    ;
    std::string::string(asStack_70,"treadmill_state02");
    std::string::string(asStack_68,"brain_red_med");
    std::vector<std::string,std::allocator<std::string>>::vector(avStack_38,asStack_70,2,auStack_a8)
    ;
    std::string::string(asStack_60,"treadmill_state03");
    std::string::string(asStack_58,"brain_red_large");
    std::vector<std::string,std::allocator<std::string>>::vector(avStack_20,asStack_60,2,auStack_90)
    ;
    std::
    vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
    ::vector((vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
              *)&DAT_06ba4b80,avStack_50,3,auStack_88);
    __cxa_guard_release(&DAT_06ba4cc8);
    __cxa_atexit(std::
                 vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
                 ::~vector,&DAT_06ba4b80,&DAT_06a88000);
    std::vector<std::string,std::allocator<std::string>>::~vector(avStack_20);
    std::vector<std::string,std::allocator<std::string>>::~vector(avStack_38);
    std::vector<std::string,std::allocator<std::string>>::~vector(avStack_50);
    std::string::~string(asStack_58);
    std::string::~string(asStack_60);
    nop();
    nop();
    std::string::~string(asStack_68);
    std::string::~string(asStack_70);
    nop();
    nop();
    std::string::~string(asStack_78);
    std::string::~string(asStack_80);
    nop();
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba4b80);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_GeneralCaesar::getHeadLayerNames() */

void ZombieAnimRig_GeneralCaesar::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba4bf8 & 1;
  if (((DAT_06ba4bf8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba4bf8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba4c00,"zombie_troglobite_jaw");
    nop();
    std::string::string((string *)&DAT_06ba4c08,"zombie_troglobite_skull");
    nop();
    std::string::string((string *)&DAT_06ba4c10,"zombie_troglobite_eye");
    nop();
    std::string::string((string *)&DAT_06ba4c18,"zombie_troglobite_eye2");
    nop();
    __cxa_guard_release(&DAT_06ba4bf8);
    __cxa_atexit(FUN_04efd998,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba4c68 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba4c68), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba4bd8,(string *)&DAT_06ba4c00,(allocator *)&DAT_06ba4c20);
    __cxa_guard_release(&DAT_06ba4c68);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba4bd8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba4bd8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_GeneralCaesar::getArmLayerNames() */

void ZombieAnimRig_GeneralCaesar::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba4ba0 & 1;
  if (((DAT_06ba4ba0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba4ba0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba4b70,"zombie_troglobite_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06ba4b78,"zombie_troglobite_hand_outer");
    nop();
    __cxa_guard_release(&DAT_06ba4ba0);
    __cxa_atexit(FUN_04efd9d4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba4bf0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba4bf0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba4b50,(string *)&DAT_06ba4b70,(allocator *)&DAT_06ba4b80);
    __cxa_guard_release(&DAT_06ba4bf0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba4b50,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba4b50);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_GeneralCaesar::getArmReplacementPairNames() */

void ZombieAnimRig_GeneralCaesar::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba4c90 & 1;
  if (((DAT_06ba4c90 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba4c90), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba4b68,"zombie_troglobite_arm_outer_upper");
    nop();
    __cxa_guard_release(&DAT_06ba4c90);
    __cxa_atexit(FUN_04efda00,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba4b48 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba4b48), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba4c38,(string *)&DAT_06ba4b68,(allocator *)&DAT_06ba4b70);
    __cxa_guard_release(&DAT_06ba4b48);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba4c38,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba4c38);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_GeneralCaesar::getDamageLayers() */

void ZombieAnimRig_GeneralCaesar::getDamageLayers(void)

{
  int iVar1;
  vector<std::string,std::allocator<std::string>> *pvVar2;
  undefined1 auStack_338 [16];
  undefined1 auStack_328 [16];
  undefined1 auStack_318 [16];
  undefined1 auStack_308 [16];
  undefined1 auStack_2f8 [8];
  undefined1 auStack_2f0 [16];
  undefined1 auStack_2e0 [16];
  undefined1 auStack_2d0 [16];
  undefined1 auStack_2c0 [16];
  undefined1 auStack_2b0 [16];
  undefined1 auStack_2a0 [8];
  undefined1 auStack_298 [16];
  undefined1 auStack_288 [16];
  undefined1 auStack_278 [16];
  undefined1 auStack_268 [16];
  undefined1 auStack_258 [16];
  undefined1 auStack_248 [8];
  undefined1 auStack_240 [8];
  undefined1 auStack_238 [8];
  string asStack_230 [8];
  string asStack_228 [8];
  string asStack_220 [8];
  string asStack_218 [8];
  string asStack_210 [8];
  string asStack_208 [8];
  string asStack_200 [8];
  string asStack_1f8 [8];
  string asStack_1f0 [8];
  string asStack_1e8 [8];
  string asStack_1e0 [8];
  string asStack_1d8 [8];
  string asStack_1d0 [8];
  string asStack_1c8 [8];
  string asStack_1c0 [8];
  vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
  avStack_1b8 [24];
  vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
  avStack_1a0 [24];
  vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
  avStack_188 [24];
  vector<std::string,std::allocator<std::string>> avStack_170 [24];
  vector<std::string,std::allocator<std::string>> avStack_158 [24];
  vector<std::string,std::allocator<std::string>> avStack_140 [24];
  vector<std::string,std::allocator<std::string>> avStack_128 [24];
  vector<std::string,std::allocator<std::string>> avStack_110 [24];
  vector<std::string,std::allocator<std::string>> avStack_f8 [24];
  vector<std::string,std::allocator<std::string>> avStack_e0 [24];
  vector<std::string,std::allocator<std::string>> avStack_c8 [24];
  vector<std::string,std::allocator<std::string>> avStack_b0 [24];
  vector<std::string,std::allocator<std::string>> avStack_98 [24];
  vector<std::string,std::allocator<std::string>> avStack_80 [24];
  vector<std::string,std::allocator<std::string>> avStack_68 [24];
  vector<std::string,std::allocator<std::string>> avStack_50 [24];
  vector<std::string,std::allocator<std::string>> avStack_38 [24];
  vector<std::string,std::allocator<std::string>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((DAT_06ba4bb8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06ba4bb8), iVar1 != 0)) {
    std::string::string(asStack_230,"column_damagestate_01");
    std::vector<std::string,std::allocator<std::string>>::vector
              (avStack_170,asStack_230,1,auStack_338);
    std::string::string(asStack_228,"column_damagestate_02");
    std::vector<std::string,std::allocator<std::string>>::vector
              (avStack_158,asStack_228,1,auStack_328);
    std::string::string(asStack_220,"column_damagestate_03");
    std::vector<std::string,std::allocator<std::string>>::vector
              (avStack_140,asStack_220,1,auStack_318);
    std::string::string(asStack_218,"column_damagestate_04");
    std::vector<std::string,std::allocator<std::string>>::vector
              (avStack_128,asStack_218,1,auStack_308);
    std::string::string(asStack_210,"column_damagestate_05");
    std::vector<std::string,std::allocator<std::string>>::vector
              (avStack_110,asStack_210,1,auStack_2f8);
    std::
    vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
    ::vector(avStack_1b8,avStack_170,5,auStack_2f0);
    pvVar2 = (vector<std::string,std::allocator<std::string>> *)&local_8;
    std::string::string(asStack_208,"column_damagestate_01");
    std::vector<std::string,std::allocator<std::string>>::vector
              (avStack_f8,asStack_208,1,auStack_2e0);
    std::string::string(asStack_200,"column_damagestate_02");
    std::vector<std::string,std::allocator<std::string>>::vector
              (avStack_e0,asStack_200,1,auStack_2d0);
    std::string::string(asStack_1f8,"column_damagestate_03");
    std::vector<std::string,std::allocator<std::string>>::vector
              (avStack_c8,asStack_1f8,1,auStack_2c0);
    std::string::string(asStack_1f0,"column_damagestate_04");
    std::vector<std::string,std::allocator<std::string>>::vector
              (avStack_b0,asStack_1f0,1,auStack_2b0);
    std::string::string(asStack_1e8,"column_damagestate_05");
    std::vector<std::string,std::allocator<std::string>>::vector
              (avStack_98,asStack_1e8,1,auStack_2a0);
    std::
    vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
    ::vector(avStack_1a0,avStack_f8,5,auStack_298);
    std::string::string(asStack_1e0,"column_damagestate_01");
    std::vector<std::string,std::allocator<std::string>>::vector
              (avStack_80,asStack_1e0,1,auStack_288);
    std::string::string(asStack_1d8,"column_damagestate_02");
    std::vector<std::string,std::allocator<std::string>>::vector
              (avStack_68,asStack_1d8,1,auStack_278);
    std::string::string(asStack_1d0,"column_damagestate_03");
    std::vector<std::string,std::allocator<std::string>>::vector
              (avStack_50,asStack_1d0,1,auStack_268);
    std::string::string(asStack_1c8,"column_damagestate_04");
    std::vector<std::string,std::allocator<std::string>>::vector
              (avStack_38,asStack_1c8,1,auStack_258);
    std::string::string(asStack_1c0,"column_damagestate_05");
    std::vector<std::string,std::allocator<std::string>>::vector
              (avStack_20,asStack_1c0,1,auStack_248);
    std::
    vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
    ::vector(avStack_188,avStack_80,5,auStack_240);
    std::
    vector<std::vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>,std::allocator<std::vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>>>
    ::vector((vector<std::vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>,std::allocator<std::vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>>>
              *)&DAT_06ba4c20,avStack_1b8,3,auStack_238);
    __cxa_guard_release(&DAT_06ba4bb8);
    __cxa_atexit(std::
                 vector<std::vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>,std::allocator<std::vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>>>
                 ::~vector,&DAT_06ba4c20,&DAT_06a88000);
    std::
    vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
    ::~vector(avStack_188);
    std::
    vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
    ::~vector(avStack_1a0);
    std::
    vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
    ::~vector(avStack_1b8);
    do {
      pvVar2 = pvVar2 + -0x18;
      std::vector<std::string,std::allocator<std::string>>::~vector(pvVar2);
    } while (pvVar2 != avStack_80);
    pvVar2 = avStack_80;
    std::string::~string(asStack_1c0);
    nop();
    std::string::~string(asStack_1c8);
    nop();
    std::string::~string(asStack_1d0);
    nop();
    std::string::~string(asStack_1d8);
    nop();
    std::string::~string(asStack_1e0);
    nop();
    do {
      pvVar2 = pvVar2 + -0x18;
      std::vector<std::string,std::allocator<std::string>>::~vector(pvVar2);
    } while (pvVar2 != avStack_f8);
    pvVar2 = avStack_f8;
    std::string::~string(asStack_1e8);
    nop();
    std::string::~string(asStack_1f0);
    nop();
    std::string::~string(asStack_1f8);
    nop();
    std::string::~string(asStack_200);
    nop();
    std::string::~string(asStack_208);
    nop();
    do {
      pvVar2 = pvVar2 + -0x18;
      std::vector<std::string,std::allocator<std::string>>::~vector(pvVar2);
    } while (pvVar2 != avStack_170);
    std::string::~string(asStack_210);
    nop();
    std::string::~string(asStack_218);
    nop();
    std::string::~string(asStack_220);
    nop();
    std::string::~string(asStack_228);
    nop();
    std::string::~string(asStack_230);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba4c20);
}

