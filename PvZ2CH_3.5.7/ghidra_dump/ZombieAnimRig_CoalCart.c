// Class: ZombieAnimRig_CoalCart


/* ZombieAnimRig_CoalCart::onPopAnimInitialized() */

void __thiscall ZombieAnimRig_CoalCart::onPopAnimInitialized(ZombieAnimRig_CoalCart *this)

{
  this[0x240] = (ZombieAnimRig_CoalCart)0x1;
  ZombieAnimRig::onPopAnimInitialized((ZombieAnimRig *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_CoalCart::getIdleAnimationName() */

void __thiscall ZombieAnimRig_CoalCart::getIdleAnimationName(ZombieAnimRig_CoalCart *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"idle_cart");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_CoalCart::getWalkAnimationName() */

void ZombieAnimRig_CoalCart::getWalkAnimationName(void)

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
    __s = "walk_cart";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* ZombieAnimRig_CoalCart::~ZombieAnimRig_CoalCart() */

void __thiscall ZombieAnimRig_CoalCart::~ZombieAnimRig_CoalCart(ZombieAnimRig_CoalCart *this)

{
  *(undefined ***)this = &PTR_GetClass_068ff460;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_CoalCart_068ff6d8;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_CoalCart::~ZombieAnimRig_CoalCart() */

void __thiscall ZombieAnimRig_CoalCart::~ZombieAnimRig_CoalCart(ZombieAnimRig_CoalCart *this)

{
  ~ZombieAnimRig_CoalCart(this + -0x10);
  return;
}


/* ZombieAnimRig_CoalCart::~ZombieAnimRig_CoalCart() */

void __thiscall ZombieAnimRig_CoalCart::~ZombieAnimRig_CoalCart(ZombieAnimRig_CoalCart *this)

{
  ~ZombieAnimRig_CoalCart(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_CoalCart::~ZombieAnimRig_CoalCart() */

void __thiscall ZombieAnimRig_CoalCart::~ZombieAnimRig_CoalCart(ZombieAnimRig_CoalCart *this)

{
  ~ZombieAnimRig_CoalCart(this + -0x10);
  return;
}


/* ZombieAnimRig_CoalCart::ZombieAnimRig_CoalCart() */

void __thiscall ZombieAnimRig_CoalCart::ZombieAnimRig_CoalCart(ZombieAnimRig_CoalCart *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_068ff460;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_CoalCart_068ff6d8;
  return;
}


/* ZombieAnimRig_CoalCart::StaticNew() */

ZombieAnimRig_CoalCart * ZombieAnimRig_CoalCart::StaticNew(void)

{
  ZombieAnimRig_CoalCart *this;
  
  this = ::operator_new(0x248);
  ZombieAnimRig_CoalCart(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_CoalCart::StaticClassInit() */

void ZombieAnimRig_CoalCart::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_CoalCart");
    (*pcVar2)(plVar1,asStack_10,FUN_0480a55c,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_CoalCart::StaticGetClass() */

long * ZombieAnimRig_CoalCart::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_CoalCart",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_CoalCart::GetClass() const */

long * ZombieAnimRig_CoalCart::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_CoalCart",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_CoalCart::UnloadCart(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
ZombieAnimRig_CoalCart::UnloadCart(ZombieAnimRig_CoalCart *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x240] = (ZombieAnimRig_CoalCart)0x0;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"unload_cart");
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
/* ZombieAnimRig_CoalCart::ScaredByCartBurnt(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_CoalCart::ScaredByCartBurnt
          (ZombieAnimRig_CoalCart *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x240] = (ZombieAnimRig_CoalCart)0x0;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"scared");
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
/* ZombieAnimRig_CoalCart::CartCrash(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
ZombieAnimRig_CoalCart::CartCrash(ZombieAnimRig_CoalCart *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x240] = (ZombieAnimRig_CoalCart)0x0;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"cart_crash");
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
/* ZombieAnimRig_CoalCart::getHeadLayerNames() */

void ZombieAnimRig_CoalCart::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b296a8 & 1;
  if (((DAT_06b296a8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b296a8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b29680,"zombie_skull");
    nop();
    std::string::string((string *)&DAT_06b29688,"zombie_jaw");
    nop();
    std::string::string((string *)&DAT_06b29690,"_zombie_glasses");
    nop();
    std::string::string((string *)&DAT_06b29698,"_zombie_hair");
    nop();
    std::string::string((string *)&DAT_06b296a0,"zombie_brow");
    nop();
    __cxa_guard_release(&DAT_06b296a8);
    __cxa_atexit(FUN_04809ca4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b296b8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b296b8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b29668,(string *)&DAT_06b29680,(allocator *)&DAT_06b296a8);
    __cxa_guard_release(&DAT_06b296b8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b29668,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b29668);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_CoalCart::getArmLayerNames() */

void ZombieAnimRig_CoalCart::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b29740 & 1;
  if (((DAT_06b29740 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b29740), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b297c8,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b297d0,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b297d8,"zombie_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06b297e0,"zombie_hand_outer_03");
    nop();
    std::string::string((string *)&DAT_06b297e8,"_zombie_newspaper_hand");
    nop();
    __cxa_guard_release(&DAT_06b29740);
    __cxa_atexit(FUN_04809cdc,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b29720 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b29720), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b29750,(string *)&DAT_06b297c8,(allocator *)&DAT_06b297f0);
    __cxa_guard_release(&DAT_06b29720);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b29750,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b29750);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_CoalCart::getArmReplacementPairNames() */

void ZombieAnimRig_CoalCart::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b29818 & 1;
  if (((DAT_06b29818 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b29818), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b29708,"zombie_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b29710,"zombie_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06b29818);
    __cxa_atexit(FUN_04809d14,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b29650 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b29650), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b297f8,(string *)&DAT_06b29708,
               (allocator *)&ZombieSteamCoalCartProps::sClass);
    __cxa_guard_release(&DAT_06b29650);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b297f8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b297f8);
}

