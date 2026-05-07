// Class: ZombieAnimRig_WolfImp


/* ZombieAnimRig_WolfImp::~ZombieAnimRig_WolfImp() */

void __thiscall ZombieAnimRig_WolfImp::~ZombieAnimRig_WolfImp(ZombieAnimRig_WolfImp *this)

{
  *(undefined ***)this = &PTR_GetClass_0688f410;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_WolfImp_0688f688;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_WolfImp::~ZombieAnimRig_WolfImp() */

void __thiscall ZombieAnimRig_WolfImp::~ZombieAnimRig_WolfImp(ZombieAnimRig_WolfImp *this)

{
  ~ZombieAnimRig_WolfImp(this + -0x10);
  return;
}


/* ZombieAnimRig_WolfImp::~ZombieAnimRig_WolfImp() */

void __thiscall ZombieAnimRig_WolfImp::~ZombieAnimRig_WolfImp(ZombieAnimRig_WolfImp *this)

{
  ~ZombieAnimRig_WolfImp(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_WolfImp::~ZombieAnimRig_WolfImp() */

void __thiscall ZombieAnimRig_WolfImp::~ZombieAnimRig_WolfImp(ZombieAnimRig_WolfImp *this)

{
  ~ZombieAnimRig_WolfImp(this + -0x10);
  return;
}


/* ZombieAnimRig_WolfImp::ZombieAnimRig_WolfImp() */

void __thiscall ZombieAnimRig_WolfImp::ZombieAnimRig_WolfImp(ZombieAnimRig_WolfImp *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0688f410;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_WolfImp_0688f688;
  return;
}


/* ZombieAnimRig_WolfImp::StaticNew() */

ZombieAnimRig_WolfImp * ZombieAnimRig_WolfImp::StaticNew(void)

{
  ZombieAnimRig_WolfImp *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_WolfImp(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_WolfImp::StaticClassInit() */

void ZombieAnimRig_WolfImp::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_WolfImp");
    (*pcVar2)(plVar1,asStack_10,FUN_04660810,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_WolfImp::StaticGetClass() */

long * ZombieAnimRig_WolfImp::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_WolfImp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_WolfImp::GetClass() const */

long * ZombieAnimRig_WolfImp::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_WolfImp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_WolfImp::getHeadLayerNames() */

void ZombieAnimRig_WolfImp::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1d340 & 1;
  if (((DAT_06b1d340 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1d340), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1d320,"zombie_imp_skull");
    nop();
    std::string::string((string *)&DAT_06b1d328,"zombie_imp_jaw");
    nop();
    __cxa_guard_release(&DAT_06b1d340);
    __cxa_atexit(FUN_046602cc,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1d348 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1d348), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1d370,(string *)&DAT_06b1d320,(allocator *)&DAT_06b1d330);
    __cxa_guard_release(&DAT_06b1d348);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1d370,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1d370);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_WolfImp::getArmLayerNames() */

void ZombieAnimRig_WolfImp::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1d2f8 & 1;
  if (((DAT_06b1d2f8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1d2f8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1d2d8,"zombie_imp_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b1d2e0,"zombie_imp_hand_outer");
    nop();
    __cxa_guard_release(&DAT_06b1d2f8);
    __cxa_atexit(FUN_046602f8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1d2f0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1d2f0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1d308,(string *)&DAT_06b1d2d8,(allocator *)&DAT_06b1d2e8);
    __cxa_guard_release(&DAT_06b1d2f0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1d308,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1d308);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_WolfImp::getArmReplacementPairNames() */

void ZombieAnimRig_WolfImp::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1d2e8 & 1;
  if (((DAT_06b1d2e8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1d2e8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1d350,"zombie_imp_arm_outer_upper_01");
    nop();
    std::string::string((string *)&DAT_06b1d358,"zombie_imp_arm_outer_upper_02");
    nop();
    __cxa_guard_release(&DAT_06b1d2e8);
    __cxa_atexit(FUN_04660324,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1d388 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1d388), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1d398,(string *)&DAT_06b1d350,(allocator *)&DAT_06b1d360);
    __cxa_guard_release(&DAT_06b1d388);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1d398,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1d398);
}

