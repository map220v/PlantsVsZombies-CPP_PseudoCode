// Class: ZombieAnimRig_MonkImp


/* ZombieAnimRig_MonkImp::~ZombieAnimRig_MonkImp() */

void __thiscall ZombieAnimRig_MonkImp::~ZombieAnimRig_MonkImp(ZombieAnimRig_MonkImp *this)

{
  *(undefined ***)this = &PTR_GetClass_068712f0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_MonkImp_06871568;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_MonkImp::~ZombieAnimRig_MonkImp() */

void __thiscall ZombieAnimRig_MonkImp::~ZombieAnimRig_MonkImp(ZombieAnimRig_MonkImp *this)

{
  ~ZombieAnimRig_MonkImp(this + -0x10);
  return;
}


/* ZombieAnimRig_MonkImp::~ZombieAnimRig_MonkImp() */

void __thiscall ZombieAnimRig_MonkImp::~ZombieAnimRig_MonkImp(ZombieAnimRig_MonkImp *this)

{
  ~ZombieAnimRig_MonkImp(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_MonkImp::~ZombieAnimRig_MonkImp() */

void __thiscall ZombieAnimRig_MonkImp::~ZombieAnimRig_MonkImp(ZombieAnimRig_MonkImp *this)

{
  ~ZombieAnimRig_MonkImp(this + -0x10);
  return;
}


/* ZombieAnimRig_MonkImp::ZombieAnimRig_MonkImp() */

void __thiscall ZombieAnimRig_MonkImp::ZombieAnimRig_MonkImp(ZombieAnimRig_MonkImp *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_068712f0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_MonkImp_06871568;
  return;
}


/* ZombieAnimRig_MonkImp::StaticNew() */

ZombieAnimRig_MonkImp * ZombieAnimRig_MonkImp::StaticNew(void)

{
  ZombieAnimRig_MonkImp *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_MonkImp(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_MonkImp::StaticClassInit() */

void ZombieAnimRig_MonkImp::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_MonkImp");
    (*pcVar2)(plVar1,asStack_10,FUN_04604930,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_MonkImp::StaticGetClass() */

long * ZombieAnimRig_MonkImp::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_MonkImp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_MonkImp::GetClass() const */

long * ZombieAnimRig_MonkImp::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_MonkImp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_MonkImp::PlayPreparing(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
ZombieAnimRig_MonkImp::PlayPreparing(ZombieAnimRig_MonkImp *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"prepare");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = (*pcVar2)(this,asStack_58,0,aRStack_50);
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
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_MonkImp::PlayLanding(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
ZombieAnimRig_MonkImp::PlayLanding(ZombieAnimRig_MonkImp *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"landing");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = (*pcVar2)(this,asStack_58,0,aRStack_50);
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
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_MonkImp::PlayFalling(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
ZombieAnimRig_MonkImp::PlayFalling(ZombieAnimRig_MonkImp *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"fall");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = (*pcVar2)(this,asStack_58,0,aRStack_50);
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
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_MonkImp::PlayFlyingDie(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
ZombieAnimRig_MonkImp::PlayFlyingDie(ZombieAnimRig_MonkImp *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"fly die");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = (*pcVar2)(this,asStack_58,0,aRStack_50);
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
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_MonkImp::getHeadLayerNames() */

void ZombieAnimRig_MonkImp::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b18248 & 1;
  if (((DAT_06b18248 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18248), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b18238,"zombie_kongfu_imp_skull");
    nop();
    std::string::string((string *)&DAT_06b18240,"zombie_kongfu_imp_jaw");
    nop();
    __cxa_guard_release(&DAT_06b18248);
    __cxa_atexit(FUN_046046ac,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b182b0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b182b0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b18218,(string *)&DAT_06b18238,(allocator *)&DAT_06b18248);
    __cxa_guard_release(&DAT_06b182b0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b18218,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b18218);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_MonkImp::getArmLayerNames() */

void ZombieAnimRig_MonkImp::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b18280 & 1;
  if (((DAT_06b18280 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18280), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b182b8,"zombie_kongfu_imp_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b182c0,"zombie_kongfu_imp_hand_outer1");
    nop();
    std::string::string((string *)&DAT_06b182c8,"zombie_kongfu_imp_hand_outer2");
    nop();
    __cxa_guard_release(&DAT_06b18280);
    __cxa_atexit(FUN_046046d8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b182a8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b182a8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b18200,(string *)&DAT_06b182b8,(allocator *)&DAT_06b182d0);
    __cxa_guard_release(&DAT_06b182a8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b18200,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b18200);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_MonkImp::getArmReplacementPairNames() */

void ZombieAnimRig_MonkImp::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b18278 & 1;
  if (((DAT_06b18278 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18278), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b18288,"zombie_kongfu_imp_arm_outer_upper_01");
    nop();
    std::string::string((string *)&DAT_06b18290,"zombie_kongfu_imp_arm_outer_upper_02");
    nop();
    __cxa_guard_release(&DAT_06b18278);
    __cxa_atexit(FUN_0460470c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b181f8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b181f8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b18260,(string *)&DAT_06b18288,(allocator *)&DAT_06b18298);
    __cxa_guard_release(&DAT_06b181f8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b18260,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b18260);
}

