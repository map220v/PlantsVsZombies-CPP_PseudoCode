// Class: ZombieAnimRig_MonkBlade


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_MonkBlade::getEatAnimationName() */

void __thiscall ZombieAnimRig_MonkBlade::getEatAnimationName(ZombieAnimRig_MonkBlade *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"eat xunhuan");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_MonkBlade::StaticClassInit() */

void ZombieAnimRig_MonkBlade::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_MonkBlade");
    (*pcVar2)(plVar1,asStack_10,FUN_04619050,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_MonkBlade::StaticGetClass() */

long * ZombieAnimRig_MonkBlade::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_MonkBlade",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_MonkBlade::GetClass() const */

long * ZombieAnimRig_MonkBlade::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_MonkBlade",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_MonkBlade::~ZombieAnimRig_MonkBlade() */

void __thiscall ZombieAnimRig_MonkBlade::~ZombieAnimRig_MonkBlade(ZombieAnimRig_MonkBlade *this)

{
  *(undefined ***)this = &PTR_GetClass_06878720;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_MonkBlade_06878998;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_MonkBlade::~ZombieAnimRig_MonkBlade() */

void __thiscall ZombieAnimRig_MonkBlade::~ZombieAnimRig_MonkBlade(ZombieAnimRig_MonkBlade *this)

{
  ~ZombieAnimRig_MonkBlade(this + -0x10);
  return;
}


/* ZombieAnimRig_MonkBlade::~ZombieAnimRig_MonkBlade() */

void __thiscall ZombieAnimRig_MonkBlade::~ZombieAnimRig_MonkBlade(ZombieAnimRig_MonkBlade *this)

{
  ~ZombieAnimRig_MonkBlade(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_MonkBlade::~ZombieAnimRig_MonkBlade() */

void __thiscall ZombieAnimRig_MonkBlade::~ZombieAnimRig_MonkBlade(ZombieAnimRig_MonkBlade *this)

{
  ~ZombieAnimRig_MonkBlade(this + -0x10);
  return;
}


/* ZombieAnimRig_MonkBlade::ZombieAnimRig_MonkBlade() */

void __thiscall ZombieAnimRig_MonkBlade::ZombieAnimRig_MonkBlade(ZombieAnimRig_MonkBlade *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  this[0x240] = (ZombieAnimRig_MonkBlade)0x0;
  *(undefined ***)this = &PTR_GetClass_06878720;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_MonkBlade_06878998;
  return;
}


/* ZombieAnimRig_MonkBlade::StaticNew() */

ZombieAnimRig_MonkBlade * ZombieAnimRig_MonkBlade::StaticNew(void)

{
  ZombieAnimRig_MonkBlade *this;
  
  this = ::operator_new(0x248);
  ZombieAnimRig_MonkBlade(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_MonkBlade::getHeadLayerNames() */

void ZombieAnimRig_MonkBlade::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b19ff0 & 1;
  if (((DAT_06b19ff0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19ff0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1a070,"_zombie_kongfu_knife_head");
    nop();
    std::string::string((string *)&DAT_06b1a078,"zombie_jaw");
    nop();
    std::string::string((string *)&DAT_06b1a080,"zombie_skull");
    nop();
    __cxa_guard_release(&DAT_06b19ff0);
    __cxa_atexit(FUN_04618df0,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b19fd0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19fd0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1a008,(string *)&DAT_06b1a070,(allocator *)&DAT_06b1a088);
    __cxa_guard_release(&DAT_06b19fd0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1a008,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1a008);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_MonkBlade::getArmLayerNames() */

void ZombieAnimRig_MonkBlade::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1a098 & 1;
  if (((DAT_06b1a098 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1a098), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1a088,"zombie_kongfu_knife_left hand");
    nop();
    std::string::string((string *)&DAT_06b1a090,"zombie_kongfu_knife_left xsb");
    nop();
    __cxa_guard_release(&DAT_06b1a098);
    __cxa_atexit(FUN_04618e24,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1a068 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1a068), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1a040,(string *)&DAT_06b1a088,(allocator *)&DAT_06b1a098);
    __cxa_guard_release(&DAT_06b1a068);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1a040,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1a040);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_MonkBlade::getArmReplacementPairNames() */

void ZombieAnimRig_MonkBlade::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b19fc8 & 1;
  if (((DAT_06b19fc8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19fc8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b19fe0,"zombie_kongfu_knife_arm_outer_upper_01");
    nop();
    std::string::string((string *)&DAT_06b19fe8,"zombie_kongfu_knife_arm_outer_upper_02");
    nop();
    __cxa_guard_release(&DAT_06b19fc8);
    __cxa_atexit(FUN_04618e50,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1a020 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1a020), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1a028,(string *)&DAT_06b19fe0,(allocator *)&DAT_06b19ff0);
    __cxa_guard_release(&DAT_06b1a020);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1a028,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1a028);
}

