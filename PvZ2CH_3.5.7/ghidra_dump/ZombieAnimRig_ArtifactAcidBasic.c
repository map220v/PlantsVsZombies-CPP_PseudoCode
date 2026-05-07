// Class: ZombieAnimRig_ArtifactAcidBasic


/* ZombieAnimRig_ArtifactAcidBasic::~ZombieAnimRig_ArtifactAcidBasic() */

void __thiscall
ZombieAnimRig_ArtifactAcidBasic::~ZombieAnimRig_ArtifactAcidBasic
          (ZombieAnimRig_ArtifactAcidBasic *this)

{
  *(undefined ***)this = &PTR_GetClass_0668bcd0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ArtifactAcidBasic_0668bfe8;
  ZombieAnimRig_RomanBasic::~ZombieAnimRig_RomanBasic((ZombieAnimRig_RomanBasic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ArtifactAcidBasic::~ZombieAnimRig_ArtifactAcidBasic() */

void __thiscall
ZombieAnimRig_ArtifactAcidBasic::~ZombieAnimRig_ArtifactAcidBasic
          (ZombieAnimRig_ArtifactAcidBasic *this)

{
  ~ZombieAnimRig_ArtifactAcidBasic(this + -0x10);
  return;
}


/* ZombieAnimRig_ArtifactAcidBasic::~ZombieAnimRig_ArtifactAcidBasic() */

void __thiscall
ZombieAnimRig_ArtifactAcidBasic::~ZombieAnimRig_ArtifactAcidBasic
          (ZombieAnimRig_ArtifactAcidBasic *this)

{
  ~ZombieAnimRig_ArtifactAcidBasic(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ArtifactAcidBasic::~ZombieAnimRig_ArtifactAcidBasic() */

void __thiscall
ZombieAnimRig_ArtifactAcidBasic::~ZombieAnimRig_ArtifactAcidBasic
          (ZombieAnimRig_ArtifactAcidBasic *this)

{
  ~ZombieAnimRig_ArtifactAcidBasic(this + -0x10);
  return;
}


/* ZombieAnimRig_ArtifactAcidBasic::ZombieAnimRig_ArtifactAcidBasic() */

void __thiscall
ZombieAnimRig_ArtifactAcidBasic::ZombieAnimRig_ArtifactAcidBasic
          (ZombieAnimRig_ArtifactAcidBasic *this)

{
  ZombieAnimRig_RomanBasic::ZombieAnimRig_RomanBasic((ZombieAnimRig_RomanBasic *)this);
  *(undefined ***)this = &PTR_GetClass_0668bcd0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ArtifactAcidBasic_0668bfe8;
  return;
}


/* ZombieAnimRig_ArtifactAcidBasic::StaticNew() */

ZombieAnimRig_ArtifactAcidBasic * ZombieAnimRig_ArtifactAcidBasic::StaticNew(void)

{
  ZombieAnimRig_ArtifactAcidBasic *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_ArtifactAcidBasic(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ArtifactAcidBasic::StaticClassInit() */

void ZombieAnimRig_ArtifactAcidBasic::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_ArtifactAcidBasic");
    (*pcVar2)(plVar1,asStack_10,FUN_0372bfd8,0x250,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_ArtifactAcidBasic::StaticGetClass() */

long * ZombieAnimRig_ArtifactAcidBasic::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_RomanBasic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_ArtifactAcidBasic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_ArtifactAcidBasic::GetClass() const */

long * ZombieAnimRig_ArtifactAcidBasic::GetClass(void)

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
  uVar2 = ZombieAnimRig_RomanBasic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_ArtifactAcidBasic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ArtifactAcidBasic::getHeadLayerNames() */

void ZombieAnimRig_ArtifactAcidBasic::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06aafba8 & 1;
  if (((DAT_06aafba8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06aafba8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06aaf470,"zombie_troglobite_jaw");
    nop();
    std::string::string((string *)&DAT_06aaf478,"zombie_troglobite_skull");
    nop();
    std::string::string((string *)&DAT_06aaf480,"zombie_troglobite_eye");
    nop();
    std::string::string((string *)&DAT_06aaf488,"zombie_troglobite_eye2");
    nop();
    __cxa_guard_release(&DAT_06aafba8);
    __cxa_atexit(FUN_03722c7c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06aafc30 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06aafc30), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06aaf4e0,(string *)&DAT_06aaf470,
               (allocator *)&ArtifactWeatherMonkeyProperties::sClass);
    __cxa_guard_release(&DAT_06aafc30);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06aaf4e0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06aaf4e0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ArtifactAcidBasic::getArmLayerNames() */

void ZombieAnimRig_ArtifactAcidBasic::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06aaf6d8 & 1;
  if (((DAT_06aaf6d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06aaf6d8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06aaf858,"zombie_troglobite_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06aaf860,"zombie_troglobite_hand_outer");
    nop();
    __cxa_guard_release(&DAT_06aaf6d8);
    __cxa_atexit(FUN_03722cb8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06aafe58 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06aafe58), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06aaf6f0,(string *)&DAT_06aaf858,(allocator *)&DAT_06aaf868);
    __cxa_guard_release(&DAT_06aafe58);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06aaf6f0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06aaf6f0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ArtifactAcidBasic::getArmReplacementPairNames() */

void ZombieAnimRig_ArtifactAcidBasic::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06aafc50 & 1;
  if (((DAT_06aafc50 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06aafc50), iVar2 != 0)) {
    std::string::string((string *)&DAT_06aaffd8,"zombie_troglobite_arm_outer_upper");
    nop();
    __cxa_guard_release(&DAT_06aafc50);
    __cxa_atexit(FUN_03722ce4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06aafc40 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06aafc40), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06aafcb0,(string *)&DAT_06aaffd8,
               (allocator *)&GridItemArtifactSilverkeyGateProps::sClass);
    __cxa_guard_release(&DAT_06aafc40);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06aafcb0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06aafcb0);
}

