// Class: ZombieAnimRig_Hammer


/* ZombieAnimRig_Hammer::ZombieAnimRig_Hammer() */

void __thiscall ZombieAnimRig_Hammer::ZombieAnimRig_Hammer(ZombieAnimRig_Hammer *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0687a780;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Hammer_0687aa08;
  return;
}


/* ZombieAnimRig_Hammer::~ZombieAnimRig_Hammer() */

void __thiscall ZombieAnimRig_Hammer::~ZombieAnimRig_Hammer(ZombieAnimRig_Hammer *this)

{
  *(undefined ***)this = &PTR_GetClass_0687a780;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Hammer_0687aa08;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Hammer::~ZombieAnimRig_Hammer() */

void __thiscall ZombieAnimRig_Hammer::~ZombieAnimRig_Hammer(ZombieAnimRig_Hammer *this)

{
  ~ZombieAnimRig_Hammer(this + -0x10);
  return;
}


/* ZombieAnimRig_Hammer::~ZombieAnimRig_Hammer() */

void __thiscall ZombieAnimRig_Hammer::~ZombieAnimRig_Hammer(ZombieAnimRig_Hammer *this)

{
  ~ZombieAnimRig_Hammer(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Hammer::~ZombieAnimRig_Hammer() */

void __thiscall ZombieAnimRig_Hammer::~ZombieAnimRig_Hammer(ZombieAnimRig_Hammer *this)

{
  ~ZombieAnimRig_Hammer(this + -0x10);
  return;
}


/* ZombieAnimRig_Hammer::StaticNew() */

ZombieAnimRig_Hammer * ZombieAnimRig_Hammer::StaticNew(void)

{
  ZombieAnimRig_Hammer *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_Hammer(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Hammer::StaticClassInit() */

void ZombieAnimRig_Hammer::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_Hammer");
    (*pcVar2)(plVar1,asStack_10,FUN_04620bf4,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_Hammer::StaticGetClass() */

long * ZombieAnimRig_Hammer::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Hammer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_Hammer::GetClass() const */

long * ZombieAnimRig_Hammer::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Hammer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Hammer::PlayBlock(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
ZombieAnimRig_Hammer::PlayBlock(ZombieAnimRig_Hammer *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"attack3");
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
/* ZombieAnimRig_Hammer::PlayBlock() */

void __thiscall ZombieAnimRig_Hammer::PlayBlock(ZombieAnimRig_Hammer *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"attack3_attack");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Hammer::PlayRest() */

void __thiscall ZombieAnimRig_Hammer::PlayRest(ZombieAnimRig_Hammer *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"rest");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Hammer::getHeadLayerNames() */

void ZombieAnimRig_Hammer::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1ab48 & 1;
  if (((DAT_06b1ab48 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1ab48), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1aaf8,"zombie_egypt_skull");
    nop();
    std::string::string((string *)&DAT_06b1ab00,"zombie_egypt_jaw");
    nop();
    __cxa_guard_release(&DAT_06b1ab48);
    __cxa_atexit(FUN_046209f4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1ab60 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1ab60), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1aba8,(string *)&DAT_06b1aaf8,(allocator *)&DAT_06b1ab08);
    __cxa_guard_release(&DAT_06b1ab60);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1aba8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1aba8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Hammer::getArmLayerNames() */

void ZombieAnimRig_Hammer::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1aaf0 & 1;
  if (((DAT_06b1aaf0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1aaf0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1aad8,"zombie_pros_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b1aae0,"zombie_pros_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b1aae8,"zombie_pros_hand_outer_02");
    nop();
    __cxa_guard_release(&DAT_06b1aaf0);
    __cxa_atexit(FUN_04620a20,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1ab28 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1ab28), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1ab10,(string *)&DAT_06b1aad8,(allocator *)&DAT_06b1aaf0);
    __cxa_guard_release(&DAT_06b1ab28);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1ab10,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1ab10);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Hammer::getArmReplacementPairNames() */

void ZombieAnimRig_Hammer::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1aba0 & 1;
  if (((DAT_06b1aba0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1aba0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1ab70,"zombie_egypt_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b1ab78,"zombie_egypt_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06b1aba0);
    __cxa_atexit(FUN_04620a54,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1ab08 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1ab08), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1ab30,(string *)&DAT_06b1ab70,(allocator *)&DAT_06b1ab80);
    __cxa_guard_release(&DAT_06b1ab08);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1ab30,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1ab30);
}

