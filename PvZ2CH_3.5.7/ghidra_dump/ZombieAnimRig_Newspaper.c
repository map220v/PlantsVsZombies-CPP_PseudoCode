// Class: ZombieAnimRig_Newspaper


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Newspaper::getIdleAnimationName() */

void __thiscall ZombieAnimRig_Newspaper::getIdleAnimationName(ZombieAnimRig_Newspaper *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"idle_newspaper");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Newspaper::getWalkAnimationName() */

void ZombieAnimRig_Newspaper::getWalkAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x240) == '\0') {
    __s = "walk";
  }
  else {
    __s = "walk_newspaper";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Newspaper::getEatAnimationName() */

void ZombieAnimRig_Newspaper::getEatAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x240) == '\0') {
    __s = "eat";
  }
  else {
    __s = "eat_newspaper";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* ZombieAnimRig_Newspaper::~ZombieAnimRig_Newspaper() */

void __thiscall ZombieAnimRig_Newspaper::~ZombieAnimRig_Newspaper(ZombieAnimRig_Newspaper *this)

{
  *(undefined ***)this = &PTR_GetClass_06739fb0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Newspaper_0673a228;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Newspaper::~ZombieAnimRig_Newspaper() */

void __thiscall ZombieAnimRig_Newspaper::~ZombieAnimRig_Newspaper(ZombieAnimRig_Newspaper *this)

{
  ~ZombieAnimRig_Newspaper(this + -0x10);
  return;
}


/* ZombieAnimRig_Newspaper::~ZombieAnimRig_Newspaper() */

void __thiscall ZombieAnimRig_Newspaper::~ZombieAnimRig_Newspaper(ZombieAnimRig_Newspaper *this)

{
  ~ZombieAnimRig_Newspaper(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Newspaper::~ZombieAnimRig_Newspaper() */

void __thiscall ZombieAnimRig_Newspaper::~ZombieAnimRig_Newspaper(ZombieAnimRig_Newspaper *this)

{
  ~ZombieAnimRig_Newspaper(this + -0x10);
  return;
}


/* ZombieAnimRig_Newspaper::ZombieAnimRig_Newspaper() */

void __thiscall ZombieAnimRig_Newspaper::ZombieAnimRig_Newspaper(ZombieAnimRig_Newspaper *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06739fb0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Newspaper_0673a228;
  return;
}


/* ZombieAnimRig_Newspaper::StaticNew() */

ZombieAnimRig_Newspaper * ZombieAnimRig_Newspaper::StaticNew(void)

{
  ZombieAnimRig_Newspaper *this;
  
  this = ::operator_new(0x248);
  ZombieAnimRig_Newspaper(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Newspaper::StaticClassInit() */

void ZombieAnimRig_Newspaper::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_Newspaper");
    (*pcVar2)(plVar1,asStack_10,FUN_03bc3734,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_Newspaper::StaticGetClass() */

long * ZombieAnimRig_Newspaper::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Newspaper",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_Newspaper::GetClass() const */

long * ZombieAnimRig_Newspaper::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Newspaper",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Newspaper::DiscardNewspaper(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_Newspaper::DiscardNewspaper
          (ZombieAnimRig_Newspaper *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x240] = (ZombieAnimRig_Newspaper)0x0;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"newspaper_defeat");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  (*pcVar1)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Newspaper::getHeadLayerNames() */

void ZombieAnimRig_Newspaper::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ace228 & 1;
  if (((DAT_06ace228 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ace228), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ace1f0,"zombie_skull");
    nop();
    std::string::string((string *)&DAT_06ace1f8,"zombie_jaw");
    nop();
    std::string::string((string *)&DAT_06ace200,"_zombie_glasses");
    nop();
    std::string::string((string *)&DAT_06ace208,"_zombie_hair");
    nop();
    std::string::string((string *)&DAT_06ace210,"zombie_brow");
    nop();
    __cxa_guard_release(&DAT_06ace228);
    __cxa_atexit(FUN_03bc2cd0,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ace1e8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ace1e8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ace2d8,(string *)&DAT_06ace1f0,(allocator *)&DAT_06ace218);
    __cxa_guard_release(&DAT_06ace1e8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ace2d8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ace2d8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Newspaper::getArmLayerNames() */

void ZombieAnimRig_Newspaper::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ace310 & 1;
  if (((DAT_06ace310 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ace310), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ace318,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06ace320,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06ace328,"zombie_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06ace330,"zombie_hand_outer_03");
    nop();
    std::string::string((string *)&DAT_06ace338,"_zombie_newspaper_hand");
    nop();
    __cxa_guard_release(&DAT_06ace310);
    __cxa_atexit(FUN_03bc2d08,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ace1e0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ace1e0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ace1c0,(string *)&DAT_06ace318,(allocator *)&DAT_06ace340);
    __cxa_guard_release(&DAT_06ace1e0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ace1c0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ace1c0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Newspaper::getArmReplacementPairNames() */

void ZombieAnimRig_Newspaper::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ace2f0 & 1;
  if (((DAT_06ace2f0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ace2f0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ace250,"zombie_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06ace258,"zombie_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06ace2f0);
    __cxa_atexit(FUN_03bc2d40,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ace1b8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ace1b8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ace2c0,(string *)&DAT_06ace250,
               (allocator *)&ZombieModernNewspaperProps::sClass);
    __cxa_guard_release(&DAT_06ace1b8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ace2c0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ace2c0);
}

