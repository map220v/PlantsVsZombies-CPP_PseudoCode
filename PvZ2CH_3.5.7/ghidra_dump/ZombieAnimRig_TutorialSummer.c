// Class: ZombieAnimRig_TutorialSummer


/* ZombieAnimRig_TutorialSummer::~ZombieAnimRig_TutorialSummer() */

void __thiscall
ZombieAnimRig_TutorialSummer::~ZombieAnimRig_TutorialSummer(ZombieAnimRig_TutorialSummer *this)

{
  *(undefined ***)this = &PTR_GetClass_06874d40;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_TutorialSummer_06875058;
  ZombieAnimRig_Tutorial::~ZombieAnimRig_Tutorial((ZombieAnimRig_Tutorial *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_TutorialSummer::~ZombieAnimRig_TutorialSummer() */

void __thiscall
ZombieAnimRig_TutorialSummer::~ZombieAnimRig_TutorialSummer(ZombieAnimRig_TutorialSummer *this)

{
  ~ZombieAnimRig_TutorialSummer(this + -0x10);
  return;
}


/* ZombieAnimRig_TutorialSummer::~ZombieAnimRig_TutorialSummer() */

void __thiscall
ZombieAnimRig_TutorialSummer::~ZombieAnimRig_TutorialSummer(ZombieAnimRig_TutorialSummer *this)

{
  ~ZombieAnimRig_TutorialSummer(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_TutorialSummer::~ZombieAnimRig_TutorialSummer() */

void __thiscall
ZombieAnimRig_TutorialSummer::~ZombieAnimRig_TutorialSummer(ZombieAnimRig_TutorialSummer *this)

{
  ~ZombieAnimRig_TutorialSummer(this + -0x10);
  return;
}


/* ZombieAnimRig_TutorialSummer::ZombieAnimRig_TutorialSummer() */

void __thiscall
ZombieAnimRig_TutorialSummer::ZombieAnimRig_TutorialSummer(ZombieAnimRig_TutorialSummer *this)

{
  ZombieAnimRig_Tutorial::ZombieAnimRig_Tutorial((ZombieAnimRig_Tutorial *)this);
  *(undefined ***)this = &PTR_GetClass_06874d40;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_TutorialSummer_06875058;
  return;
}


/* ZombieAnimRig_TutorialSummer::StaticNew() */

ZombieAnimRig_TutorialSummer * ZombieAnimRig_TutorialSummer::StaticNew(void)

{
  ZombieAnimRig_TutorialSummer *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_TutorialSummer(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_TutorialSummer::StaticClassInit() */

void ZombieAnimRig_TutorialSummer::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_TutorialSummer");
    (*pcVar2)(plVar1,asStack_10,FUN_0461128c,0x250,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_TutorialSummer::StaticGetClass() */

long * ZombieAnimRig_TutorialSummer::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_Tutorial::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_TutorialSummer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_TutorialSummer::GetClass() const */

long * ZombieAnimRig_TutorialSummer::GetClass(void)

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
  uVar2 = ZombieAnimRig_Tutorial::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_TutorialSummer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_TutorialSummer::getFlagHandLayerNames() */

void ZombieAnimRig_TutorialSummer::getFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b19730 & 1;
  if (((DAT_06b19730 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19730), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b196c8,"flag_01");
    nop();
    std::string::string((string *)&DAT_06b196d0,"flag_stick_base");
    nop();
    std::string::string((string *)&DAT_06b196d8,"sparkler");
    nop();
    __cxa_guard_release(&DAT_06b19730);
    __cxa_atexit(FUN_0460ff50,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b19408 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19408), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b198b0,(string *)&DAT_06b196c8,(allocator *)&DAT_06b196e0);
    __cxa_guard_release(&DAT_06b19408);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b198b0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b198b0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_TutorialSummer::getNoFlagHandLayerNames() */

void ZombieAnimRig_TutorialSummer::getNoFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b19650 & 1;
  if (((DAT_06b19650 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19650), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b19480,"sparkler_glow");
    nop();
    std::string::string((string *)&DAT_06b19488,"sparkle_circle");
    nop();
    __cxa_guard_release(&DAT_06b19650);
    __cxa_atexit(FUN_0460ff84,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b194f0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b194f0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b197a0,(string *)&DAT_06b19480,(allocator *)&DAT_06b19490);
    __cxa_guard_release(&DAT_06b194f0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b197a0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b197a0);
}

