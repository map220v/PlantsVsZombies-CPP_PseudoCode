// Class: ZombieAnimRig_RomanTopShield


/* ZombieAnimRig_RomanTopShield::~ZombieAnimRig_RomanTopShield() */

void __thiscall
ZombieAnimRig_RomanTopShield::~ZombieAnimRig_RomanTopShield(ZombieAnimRig_RomanTopShield *this)

{
  *(undefined ***)this = &PTR_GetClass_0688a8b0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_RomanTopShield_0688ab28;
  ZombieAnimRig_Camel::~ZombieAnimRig_Camel((ZombieAnimRig_Camel *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_RomanTopShield::~ZombieAnimRig_RomanTopShield() */

void __thiscall
ZombieAnimRig_RomanTopShield::~ZombieAnimRig_RomanTopShield(ZombieAnimRig_RomanTopShield *this)

{
  ~ZombieAnimRig_RomanTopShield(this + -0x10);
  return;
}


/* ZombieAnimRig_RomanTopShield::~ZombieAnimRig_RomanTopShield() */

void __thiscall
ZombieAnimRig_RomanTopShield::~ZombieAnimRig_RomanTopShield(ZombieAnimRig_RomanTopShield *this)

{
  ~ZombieAnimRig_RomanTopShield(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_RomanTopShield::~ZombieAnimRig_RomanTopShield() */

void __thiscall
ZombieAnimRig_RomanTopShield::~ZombieAnimRig_RomanTopShield(ZombieAnimRig_RomanTopShield *this)

{
  ~ZombieAnimRig_RomanTopShield(this + -0x10);
  return;
}


/* ZombieAnimRig_RomanTopShield::ZombieAnimRig_RomanTopShield() */

void __thiscall
ZombieAnimRig_RomanTopShield::ZombieAnimRig_RomanTopShield(ZombieAnimRig_RomanTopShield *this)

{
  ZombieAnimRig_Camel::ZombieAnimRig_Camel((ZombieAnimRig_Camel *)this);
  *(undefined ***)this = &PTR_GetClass_0688a8b0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_RomanTopShield_0688ab28;
  return;
}


/* ZombieAnimRig_RomanTopShield::StaticNew() */

ZombieAnimRig_RomanTopShield * ZombieAnimRig_RomanTopShield::StaticNew(void)

{
  ZombieAnimRig_RomanTopShield *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_RomanTopShield(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RomanTopShield::StaticClassInit() */

void ZombieAnimRig_RomanTopShield::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_RomanTopShield");
    (*pcVar2)(plVar1,asStack_10,FUN_0465947c,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_RomanTopShield::StaticGetClass() */

long * ZombieAnimRig_RomanTopShield::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_Camel::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_RomanTopShield",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_RomanTopShield::GetClass() const */

long * ZombieAnimRig_RomanTopShield::GetClass(void)

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
  uVar2 = ZombieAnimRig_Camel::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_RomanTopShield",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RomanTopShield::getArmReplacementPairNames() */

void ZombieAnimRig_RomanTopShield::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = getArmReplacementPairNames()::k_layerArray_values & 1;
  if (((getArmReplacementPairNames()::k_layerArray_values & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&getArmReplacementPairNames()::k_layerArray_values), iVar2 != 0))
  {
    std::string::string((string *)&getArmReplacementPairNames()::k_layerArray_values,
                        "zombie_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&getArmReplacementPairNames()::k_layerArray_values);
    __cxa_atexit(FUN_04658bb4,uVar3,&DAT_06a88000);
  }
  if (((getArmReplacementPairNames()::k_layerArray & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&getArmReplacementPairNames()::k_layerArray), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)getArmReplacementPairNames()::k_layerArray,
               (string *)&getArmReplacementPairNames()::k_layerArray_values,
               (allocator *)&getArmReplacementPairNames()::k_layerArray);
    __cxa_guard_release(&getArmReplacementPairNames()::k_layerArray);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,
                 getArmReplacementPairNames()::k_layerArray,&DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(getArmReplacementPairNames()::k_layerArray);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RomanTopShield::getArmLayerNames() */

void ZombieAnimRig_RomanTopShield::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = getArmLayerNames()::k_layerArray_values & 1;
  if (((getArmLayerNames()::k_layerArray_values & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&getArmLayerNames()::k_layerArray_values), iVar2 != 0)) {
    std::string::string((string *)getArmLayerNames()::k_layerArray_values,
                        "zombie_roman_arm_outer_lower");
    nop();
    std::string::string((string *)(getArmLayerNames()::k_layerArray_values + 8),
                        "zombie_roman_hand_outer");
    nop();
    std::string::string((string *)(getArmLayerNames()::k_layerArray_values + 0x10),
                        "zombie_roman_hand_outer_01");
    nop();
    __cxa_guard_release(&getArmLayerNames()::k_layerArray_values);
    __cxa_atexit(FUN_04658bc8,uVar3,&DAT_06a88000);
  }
  if (((getArmLayerNames()::k_layerArray & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&getArmLayerNames()::k_layerArray), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)getArmLayerNames()::k_layerArray,
               (string *)getArmLayerNames()::k_layerArray_values,
               (allocator *)getArmReplacementPairNames()::k_layerArray);
    __cxa_guard_release(&getArmLayerNames()::k_layerArray);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,
                 getArmLayerNames()::k_layerArray,&DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(getArmLayerNames()::k_layerArray);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RomanTopShield::getHeadLayerNames() */

void ZombieAnimRig_RomanTopShield::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = getHeadLayerNames()::k_layerArray_values & 1;
  if (((getHeadLayerNames()::k_layerArray_values & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&getHeadLayerNames()::k_layerArray_values), iVar2 != 0)) {
    std::string::string((string *)getHeadLayerNames()::k_layerArray_values,"zombie_roman_skull");
    nop();
    std::string::string((string *)(getHeadLayerNames()::k_layerArray_values + 8),"zombie_roman_jaw")
    ;
    nop();
    std::string::string((string *)(getHeadLayerNames()::k_layerArray_values + 0x10),"zombie_pupil");
    nop();
    __cxa_guard_release(&getHeadLayerNames()::k_layerArray_values);
    __cxa_atexit(FUN_04658c0c,uVar3,&DAT_06a88000);
  }
  if (((getHeadLayerNames()::k_layerArray & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&getHeadLayerNames()::k_layerArray), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)getHeadLayerNames()::k_layerArray,
               (string *)getHeadLayerNames()::k_layerArray_values,
               (allocator *)getArmLayerNames()::k_layerArray);
    __cxa_guard_release(&getHeadLayerNames()::k_layerArray);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,
                 getHeadLayerNames()::k_layerArray,&DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(getHeadLayerNames()::k_layerArray);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RomanTopShield::CreateProjectileParticle() */

void ZombieAnimRig_RomanTopShield::CreateProjectileParticle(void)

{
  string *psVar1;
  ZombieType *this;
  ZombieAnimRig *this_00;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string(asStack_18,"roman");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar1);
  this = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  this_00 = (ZombieAnimRig *)ZombieType::CreateAnimRig(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  ZombieAnimRig::SpawnProjectileParticle(this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

