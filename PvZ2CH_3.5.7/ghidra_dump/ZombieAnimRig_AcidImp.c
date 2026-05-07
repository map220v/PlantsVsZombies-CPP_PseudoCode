// Class: ZombieAnimRig_AcidImp


/* ZombieAnimRig_AcidImp::~ZombieAnimRig_AcidImp() */

void __thiscall ZombieAnimRig_AcidImp::~ZombieAnimRig_AcidImp(ZombieAnimRig_AcidImp *this)

{
  *(undefined ***)this = &PTR_GetClass_0668ca90;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_AcidImp_0668cd30;
  ZombieAnimRig_Imp::~ZombieAnimRig_Imp((ZombieAnimRig_Imp *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_AcidImp::~ZombieAnimRig_AcidImp() */

void __thiscall ZombieAnimRig_AcidImp::~ZombieAnimRig_AcidImp(ZombieAnimRig_AcidImp *this)

{
  ~ZombieAnimRig_AcidImp(this + -0x10);
  return;
}


/* ZombieAnimRig_AcidImp::~ZombieAnimRig_AcidImp() */

void __thiscall ZombieAnimRig_AcidImp::~ZombieAnimRig_AcidImp(ZombieAnimRig_AcidImp *this)

{
  ~ZombieAnimRig_AcidImp(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_AcidImp::~ZombieAnimRig_AcidImp() */

void __thiscall ZombieAnimRig_AcidImp::~ZombieAnimRig_AcidImp(ZombieAnimRig_AcidImp *this)

{
  ~ZombieAnimRig_AcidImp(this + -0x10);
  return;
}


/* ZombieAnimRig_AcidImp::ZombieAnimRig_AcidImp() */

void __thiscall ZombieAnimRig_AcidImp::ZombieAnimRig_AcidImp(ZombieAnimRig_AcidImp *this)

{
  ZombieAnimRig_Imp::ZombieAnimRig_Imp((ZombieAnimRig_Imp *)this);
  *(undefined ***)this = &PTR_GetClass_0668ca90;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_AcidImp_0668cd30;
  return;
}


/* ZombieAnimRig_AcidImp::StaticNew() */

ZombieAnimRig_AcidImp * ZombieAnimRig_AcidImp::StaticNew(void)

{
  ZombieAnimRig_AcidImp *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_AcidImp(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_AcidImp::StaticClassInit() */

void ZombieAnimRig_AcidImp::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_AcidImp");
    (*pcVar2)(plVar1,asStack_10,FUN_0372c5f0,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_AcidImp::StaticGetClass() */

long * ZombieAnimRig_AcidImp::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_Imp::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_AcidImp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_AcidImp::GetClass() const */

long * ZombieAnimRig_AcidImp::GetClass(void)

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
  uVar2 = ZombieAnimRig_Imp::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_AcidImp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_AcidImp::getHeadLayerNames() */

void ZombieAnimRig_AcidImp::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06aaf8f8 & 1;
  if (((DAT_06aaf8f8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06aaf8f8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06aaf958,"zombie_skull");
    nop();
    std::string::string((string *)&DAT_06aaf960,"zombie_jaw");
    nop();
    std::string::string((string *)&DAT_06aaf968,"zombie_pupil");
    nop();
    __cxa_guard_release(&DAT_06aaf8f8);
    __cxa_atexit(FUN_03722cf0,uVar3,&DAT_06a88000);
  }
  if (((DAT_06aafb68 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06aafb68), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06aafe00,(string *)&DAT_06aaf958,
               (allocator *)&ArtifactMidasTouch::sClass);
    __cxa_guard_release(&DAT_06aafb68);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06aafe00,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06aafe00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_AcidImp::getArmLayerNames() */

void ZombieAnimRig_AcidImp::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06aafd78 & 1;
  if (((DAT_06aafd78 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06aafd78), iVar2 != 0)) {
    std::string::string((string *)&DAT_06aaf708,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06aaf710,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06aaf718,"zombie_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06aaf720,"zombie_hand_outer_03");
    nop();
    __cxa_guard_release(&DAT_06aafd78);
    __cxa_atexit(FUN_03722d24,uVar3,&DAT_06a88000);
  }
  if (((DAT_06aafa68 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06aafa68), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06aafe90,(string *)&DAT_06aaf708,(allocator *)&AcidCursor::sClass);
    __cxa_guard_release(&DAT_06aafa68);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06aafe90,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06aafe90);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_AcidImp::getArmReplacementPairNames() */

void ZombieAnimRig_AcidImp::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06aaf5c0 & 1;
  if (((DAT_06aaf5c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06aaf5c0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06aafac8,"zombie_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06aafad0,"zombie_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06aaf5c0);
    __cxa_atexit(FUN_03722d60,uVar3,&DAT_06a88000);
  }
  if (((DAT_06aaf5b0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06aaf5b0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06aaf8d0,(string *)&DAT_06aafac8,(allocator *)&DAT_06aafad8);
    __cxa_guard_release(&DAT_06aaf5b0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06aaf8d0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06aaf8d0);
}

