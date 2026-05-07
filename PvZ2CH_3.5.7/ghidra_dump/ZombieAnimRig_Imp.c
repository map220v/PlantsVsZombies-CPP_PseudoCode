// Class: ZombieAnimRig_Imp


/* ZombieAnimRig_Imp::ZombieAnimRig_Imp() */

void __thiscall ZombieAnimRig_Imp::ZombieAnimRig_Imp(ZombieAnimRig_Imp *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_068707d0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Imp_06870a70;
  return;
}


/* ZombieAnimRig_Imp::~ZombieAnimRig_Imp() */

void __thiscall ZombieAnimRig_Imp::~ZombieAnimRig_Imp(ZombieAnimRig_Imp *this)

{
  *(undefined ***)this = &PTR_GetClass_068707d0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Imp_06870a70;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Imp::~ZombieAnimRig_Imp() */

void __thiscall ZombieAnimRig_Imp::~ZombieAnimRig_Imp(ZombieAnimRig_Imp *this)

{
  ~ZombieAnimRig_Imp(this + -0x10);
  return;
}


/* ZombieAnimRig_Imp::~ZombieAnimRig_Imp() */

void __thiscall ZombieAnimRig_Imp::~ZombieAnimRig_Imp(ZombieAnimRig_Imp *this)

{
  ~ZombieAnimRig_Imp(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Imp::~ZombieAnimRig_Imp() */

void __thiscall ZombieAnimRig_Imp::~ZombieAnimRig_Imp(ZombieAnimRig_Imp *this)

{
  ~ZombieAnimRig_Imp(this + -0x10);
  return;
}


/* ZombieAnimRig_Imp::StaticNew() */

ZombieAnimRig_Imp * ZombieAnimRig_Imp::StaticNew(void)

{
  ZombieAnimRig_Imp *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_Imp(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Imp::StaticClassInit() */

void ZombieAnimRig_Imp::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_Imp");
    (*pcVar2)(plVar1,asStack_10,FUN_04602bac,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_Imp::StaticGetClass() */

long * ZombieAnimRig_Imp::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_Imp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_Imp::GetClass() const */

long * ZombieAnimRig_Imp::GetClass(void)

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
  uVar2 = ZombieAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_Imp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Imp::PlayFlying() */

void __thiscall ZombieAnimRig_Imp::PlayFlying(ZombieAnimRig_Imp *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"fly");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x210) = 8;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Imp::getHeadLayerNames() */

void ZombieAnimRig_Imp::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b18100 & 1;
  if (((DAT_06b18100 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18100), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b18088,"zombie_imp_skull");
    nop();
    std::string::string((string *)&DAT_06b18090,"zombie_imp_jaw");
    nop();
    __cxa_guard_release(&DAT_06b18100);
    __cxa_atexit(FUN_046029b8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b18098 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18098), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b18108,(string *)&DAT_06b18088,(allocator *)&DAT_06b18098);
    __cxa_guard_release(&DAT_06b18098);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b18108,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b18108);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Imp::getArmLayerNames() */

void ZombieAnimRig_Imp::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b180a0 & 1;
  if (((DAT_06b180a0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b180a0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b180d0,"zombie_imp_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b180d8,"zombie_imp_hand_outer");
    nop();
    __cxa_guard_release(&DAT_06b180a0);
    __cxa_atexit(FUN_046029e4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b18160 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18160), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b18120,(string *)&DAT_06b180d0,(allocator *)&DAT_06b180e0);
    __cxa_guard_release(&DAT_06b18160);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b18120,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b18120);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Imp::getArmReplacementPairNames() */

void ZombieAnimRig_Imp::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b180c0 & 1;
  if (((DAT_06b180c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b180c0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b18150,"zombie_imp_arm_outer_upper_01");
    nop();
    std::string::string((string *)&DAT_06b18158,"zombie_imp_arm_outer_upper_02");
    nop();
    __cxa_guard_release(&DAT_06b180c0);
    __cxa_atexit(FUN_04602a10,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b18138 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18138), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b180a8,(string *)&DAT_06b18150,(allocator *)&DAT_06b18160);
    __cxa_guard_release(&DAT_06b18138);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b180a8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b180a8);
}

