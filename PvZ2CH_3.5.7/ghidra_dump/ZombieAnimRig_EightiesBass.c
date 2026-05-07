// Class: ZombieAnimRig_EightiesBass


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EightiesBass::getDieAnimationName() */

void ZombieAnimRig_EightiesBass::getDieAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x240) == '\0') {
    __s = "die";
  }
  else {
    __s = "die1";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* ZombieAnimRig_EightiesBass::~ZombieAnimRig_EightiesBass() */

void __thiscall
ZombieAnimRig_EightiesBass::~ZombieAnimRig_EightiesBass(ZombieAnimRig_EightiesBass *this)

{
  *(undefined ***)this = &PTR_GetClass_068f0180;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_EightiesBass_068f03f8;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_EightiesBass::~ZombieAnimRig_EightiesBass() */

void __thiscall
ZombieAnimRig_EightiesBass::~ZombieAnimRig_EightiesBass(ZombieAnimRig_EightiesBass *this)

{
  ~ZombieAnimRig_EightiesBass(this + -0x10);
  return;
}


/* ZombieAnimRig_EightiesBass::~ZombieAnimRig_EightiesBass() */

void __thiscall
ZombieAnimRig_EightiesBass::~ZombieAnimRig_EightiesBass(ZombieAnimRig_EightiesBass *this)

{
  ~ZombieAnimRig_EightiesBass(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_EightiesBass::~ZombieAnimRig_EightiesBass() */

void __thiscall
ZombieAnimRig_EightiesBass::~ZombieAnimRig_EightiesBass(ZombieAnimRig_EightiesBass *this)

{
  ~ZombieAnimRig_EightiesBass(this + -0x10);
  return;
}


/* ZombieAnimRig_EightiesBass::ZombieAnimRig_EightiesBass() */

void __thiscall
ZombieAnimRig_EightiesBass::ZombieAnimRig_EightiesBass(ZombieAnimRig_EightiesBass *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  this[0x240] = (ZombieAnimRig_EightiesBass)0x1;
  *(undefined ***)this = &PTR_GetClass_068f0180;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_EightiesBass_068f03f8;
  return;
}


/* ZombieAnimRig_EightiesBass::StaticNew() */

ZombieAnimRig_EightiesBass * ZombieAnimRig_EightiesBass::StaticNew(void)

{
  ZombieAnimRig_EightiesBass *this;
  
  this = ::operator_new(0x248);
  ZombieAnimRig_EightiesBass(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EightiesBass::StaticClassInit() */

void ZombieAnimRig_EightiesBass::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_EightiesBass");
    (*pcVar2)(plVar1,asStack_10,FUN_047e07a4,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_EightiesBass::StaticGetClass() */

long * ZombieAnimRig_EightiesBass::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_EightiesBass",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_EightiesBass::GetClass() const */

long * ZombieAnimRig_EightiesBass::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_EightiesBass",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EightiesBass::PlayFalling(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
ZombieAnimRig_EightiesBass::PlayFalling
          (ZombieAnimRig_EightiesBass *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"attack_on");
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
/* ZombieAnimRig_EightiesBass::PlayDancing(RtReflectionDelegate<Sexy::Delegate3<std::string const&,
   std::string const&, int> >) */

void __thiscall
ZombieAnimRig_EightiesBass::PlayDancing
          (ZombieAnimRig_EightiesBass *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"attack");
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50,param_2);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_58,0,aRStack_50);
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
/* ZombieAnimRig_EightiesBass::PlayWreckAttack(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_EightiesBass::PlayWreckAttack
          (ZombieAnimRig_EightiesBass *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"attack_off");
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
/* ZombieAnimRig_EightiesBass::getHeadLayerNames() */

void ZombieAnimRig_EightiesBass::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b27b40 & 1;
  if (((DAT_06b27b40 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b27b40), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b27ae8,"zombie_skull");
    nop();
    std::string::string((string *)&DAT_06b27af0,"zombie_jaw");
    nop();
    std::string::string((string *)&DAT_06b27af8,"zombie_pupil");
    nop();
    std::string::string((string *)&DAT_06b27b00,"zombie_hair");
    nop();
    __cxa_guard_release(&DAT_06b27b40);
    __cxa_atexit(FUN_047e00d8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b27a58 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b27a58), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b27b10,(string *)&DAT_06b27ae8,(allocator *)&DAT_06b27b08);
    __cxa_guard_release(&DAT_06b27a58);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b27b10,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b27b10);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EightiesBass::getArmLayerNames() */

void ZombieAnimRig_EightiesBass::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b27b08 & 1;
  if (((DAT_06b27b08 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b27b08), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b27b90,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b27b98,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b27ba0,"zombie_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06b27ba8,"zombie_hand_outer_03");
    nop();
    __cxa_guard_release(&DAT_06b27b08);
    __cxa_atexit(FUN_047e0114,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b27a70 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b27a70), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b27b28,(string *)&DAT_06b27b90,(allocator *)&DAT_06b27bb0);
    __cxa_guard_release(&DAT_06b27a70);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b27b28,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b27b28);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EightiesBass::getArmReplacementPairNames() */

void ZombieAnimRig_EightiesBass::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b27b50 & 1;
  if (((DAT_06b27b50 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b27b50), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b27b80,"zombie_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b27b88,"zombie_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06b27b50);
    __cxa_atexit(FUN_047e0150,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b27a60 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b27a60), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b27a38,(string *)&DAT_06b27b80,(allocator *)&DAT_06b27b90);
    __cxa_guard_release(&DAT_06b27a60);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b27a38,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b27a38);
}

