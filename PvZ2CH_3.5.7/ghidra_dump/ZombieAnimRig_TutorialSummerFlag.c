// Class: ZombieAnimRig_TutorialSummerFlag


/* ZombieAnimRig_TutorialSummerFlag::~ZombieAnimRig_TutorialSummerFlag() */

void __thiscall
ZombieAnimRig_TutorialSummerFlag::~ZombieAnimRig_TutorialSummerFlag
          (ZombieAnimRig_TutorialSummerFlag *this)

{
  *(undefined ***)this = &PTR_GetClass_068750a0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_TutorialSummerFlag_068753b8;
  ZombieAnimRig_Tutorial::~ZombieAnimRig_Tutorial((ZombieAnimRig_Tutorial *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_TutorialSummerFlag::~ZombieAnimRig_TutorialSummerFlag() */

void __thiscall
ZombieAnimRig_TutorialSummerFlag::~ZombieAnimRig_TutorialSummerFlag
          (ZombieAnimRig_TutorialSummerFlag *this)

{
  ~ZombieAnimRig_TutorialSummerFlag(this + -0x10);
  return;
}


/* ZombieAnimRig_TutorialSummerFlag::~ZombieAnimRig_TutorialSummerFlag() */

void __thiscall
ZombieAnimRig_TutorialSummerFlag::~ZombieAnimRig_TutorialSummerFlag
          (ZombieAnimRig_TutorialSummerFlag *this)

{
  ~ZombieAnimRig_TutorialSummerFlag(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_TutorialSummerFlag::~ZombieAnimRig_TutorialSummerFlag() */

void __thiscall
ZombieAnimRig_TutorialSummerFlag::~ZombieAnimRig_TutorialSummerFlag
          (ZombieAnimRig_TutorialSummerFlag *this)

{
  ~ZombieAnimRig_TutorialSummerFlag(this + -0x10);
  return;
}


/* ZombieAnimRig_TutorialSummerFlag::ZombieAnimRig_TutorialSummerFlag() */

void __thiscall
ZombieAnimRig_TutorialSummerFlag::ZombieAnimRig_TutorialSummerFlag
          (ZombieAnimRig_TutorialSummerFlag *this)

{
  ZombieAnimRig_Tutorial::ZombieAnimRig_Tutorial((ZombieAnimRig_Tutorial *)this);
  *(undefined ***)this = &PTR_GetClass_068750a0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_TutorialSummerFlag_068753b8;
  return;
}


/* ZombieAnimRig_TutorialSummerFlag::StaticNew() */

ZombieAnimRig_TutorialSummerFlag * ZombieAnimRig_TutorialSummerFlag::StaticNew(void)

{
  ZombieAnimRig_TutorialSummerFlag *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_TutorialSummerFlag(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_TutorialSummerFlag::StaticClassInit() */

void ZombieAnimRig_TutorialSummerFlag::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_TutorialSummerFlag");
    (*pcVar2)(plVar1,asStack_10,FUN_04611504,0x250,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_TutorialSummerFlag::StaticGetClass() */

long * ZombieAnimRig_TutorialSummerFlag::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_TutorialSummerFlag",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_TutorialSummerFlag::GetClass() const */

long * ZombieAnimRig_TutorialSummerFlag::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_TutorialSummerFlag",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_TutorialSummerFlag::getFlagHandLayerNames() */

void ZombieAnimRig_TutorialSummerFlag::getFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b19578 & 1;
  if (((DAT_06b19578 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19578), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b19750,"flag_01");
    nop();
    std::string::string((string *)&DAT_06b19758,"flag_stick_base");
    nop();
    std::string::string((string *)&DAT_06b19760,"sparkler");
    nop();
    __cxa_guard_release(&DAT_06b19578);
    __cxa_atexit(FUN_0460ffb0,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b19640 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19640), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b19810,(string *)&DAT_06b19750,
               (allocator *)&ZombieAnimRig_ChildrensdayCone::sClass);
    __cxa_guard_release(&DAT_06b19640);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b19810,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b19810);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_TutorialSummerFlag::getNoFlagHandLayerNames() */

void ZombieAnimRig_TutorialSummerFlag::getNoFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b19588 & 1;
  if (((DAT_06b19588 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19588), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b19538,"flag_01");
    nop();
    std::string::string((string *)&DAT_06b19540,"flag_stick_base");
    nop();
    std::string::string((string *)&DAT_06b19548,"sparkler");
    nop();
    __cxa_guard_release(&DAT_06b19588);
    __cxa_atexit(FUN_0460ffe4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b19890 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19890), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b19700,(string *)&DAT_06b19538,(allocator *)&DAT_06b19550);
    __cxa_guard_release(&DAT_06b19890);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b19700,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b19700);
}

