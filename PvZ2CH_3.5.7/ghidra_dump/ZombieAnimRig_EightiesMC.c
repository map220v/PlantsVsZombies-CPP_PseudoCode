// Class: ZombieAnimRig_EightiesMC


/* ZombieAnimRig_EightiesMC::~ZombieAnimRig_EightiesMC() */

void __thiscall ZombieAnimRig_EightiesMC::~ZombieAnimRig_EightiesMC(ZombieAnimRig_EightiesMC *this)

{
  *(undefined ***)this = &PTR_GetClass_068f4650;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_EightiesMC_068f48c8;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_EightiesMC::~ZombieAnimRig_EightiesMC() */

void __thiscall ZombieAnimRig_EightiesMC::~ZombieAnimRig_EightiesMC(ZombieAnimRig_EightiesMC *this)

{
  ~ZombieAnimRig_EightiesMC(this + -0x10);
  return;
}


/* ZombieAnimRig_EightiesMC::~ZombieAnimRig_EightiesMC() */

void __thiscall ZombieAnimRig_EightiesMC::~ZombieAnimRig_EightiesMC(ZombieAnimRig_EightiesMC *this)

{
  ~ZombieAnimRig_EightiesMC(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_EightiesMC::~ZombieAnimRig_EightiesMC() */

void __thiscall ZombieAnimRig_EightiesMC::~ZombieAnimRig_EightiesMC(ZombieAnimRig_EightiesMC *this)

{
  ~ZombieAnimRig_EightiesMC(this + -0x10);
  return;
}


/* ZombieAnimRig_EightiesMC::ZombieAnimRig_EightiesMC() */

void __thiscall ZombieAnimRig_EightiesMC::ZombieAnimRig_EightiesMC(ZombieAnimRig_EightiesMC *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  this[0x240] = (ZombieAnimRig_EightiesMC)0x0;
  *(undefined ***)this = &PTR_GetClass_068f4650;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_EightiesMC_068f48c8;
  return;
}


/* ZombieAnimRig_EightiesMC::StaticNew() */

ZombieAnimRig_EightiesMC * ZombieAnimRig_EightiesMC::StaticNew(void)

{
  ZombieAnimRig_EightiesMC *this;
  
  this = ::operator_new(0x248);
  ZombieAnimRig_EightiesMC(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EightiesMC::StaticClassInit() */

void ZombieAnimRig_EightiesMC::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_EightiesMC");
    (*pcVar2)(plVar1,asStack_10,FUN_047eb3f8,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_EightiesMC::StaticGetClass() */

long * ZombieAnimRig_EightiesMC::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_EightiesMC",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_EightiesMC::GetClass() const */

long * ZombieAnimRig_EightiesMC::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_EightiesMC",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EightiesMC::PlayJamAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
ZombieAnimRig_EightiesMC::PlayJamAttack
          (ZombieAnimRig_EightiesMC *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"attack_jam");
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
/* ZombieAnimRig_EightiesMC::getHeadLayerNames() */

void ZombieAnimRig_EightiesMC::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b28130 & 1;
  if (((DAT_06b28130 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b28130), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b28110,"zombie_skull");
    nop();
    std::string::string((string *)&DAT_06b28118,"zombie_jaw");
    nop();
    std::string::string((string *)&DAT_06b28120,"mic_cord");
    nop();
    __cxa_guard_release(&DAT_06b28130);
    __cxa_atexit(FUN_047ea90c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b28108 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b28108), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b281a0,(string *)&DAT_06b28110,(allocator *)&DAT_06b28128);
    __cxa_guard_release(&DAT_06b28108);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b281a0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b281a0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EightiesMC::getArmLayerNames() */

void ZombieAnimRig_EightiesMC::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b281c0 & 1;
  if (((DAT_06b281c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b281c0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b281d8,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b281e0,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b281e8,"zombie_hand_outer_02");
    nop();
    __cxa_guard_release(&DAT_06b281c0);
    __cxa_atexit(FUN_047ea940,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b28128 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b28128), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b281f0,(string *)&DAT_06b281d8,(allocator *)&DAT_06b281f0);
    __cxa_guard_release(&DAT_06b28128);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b281f0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b281f0);
}

