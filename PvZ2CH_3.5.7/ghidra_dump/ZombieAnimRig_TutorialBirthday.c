// Class: ZombieAnimRig_TutorialBirthday


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_TutorialBirthday::getDieAnimationName() */

void ZombieAnimRig_TutorialBirthday::getDieAnimationName(void)

{
  GridItemMagicMirrorRig *in_x0;
  float fVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"die_fart");
  nop();
  fVar1 = (float)Sexy::Rand(1.0);
  if (fVar1 < 0.05) {
    FUN_05475d88();
  }
  else {
    GridItemMagicMirrorRig::getDisAppearingAnimLabel(in_x0);
  }
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_TutorialBirthday::~ZombieAnimRig_TutorialBirthday() */

void __thiscall
ZombieAnimRig_TutorialBirthday::~ZombieAnimRig_TutorialBirthday
          (ZombieAnimRig_TutorialBirthday *this)

{
  *(undefined ***)this = &PTR_GetClass_06874680;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_TutorialBirthday_06874998;
  ZombieAnimRig_Tutorial::~ZombieAnimRig_Tutorial((ZombieAnimRig_Tutorial *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_TutorialBirthday::~ZombieAnimRig_TutorialBirthday() */

void __thiscall
ZombieAnimRig_TutorialBirthday::~ZombieAnimRig_TutorialBirthday
          (ZombieAnimRig_TutorialBirthday *this)

{
  ~ZombieAnimRig_TutorialBirthday(this + -0x10);
  return;
}


/* ZombieAnimRig_TutorialBirthday::~ZombieAnimRig_TutorialBirthday() */

void __thiscall
ZombieAnimRig_TutorialBirthday::~ZombieAnimRig_TutorialBirthday
          (ZombieAnimRig_TutorialBirthday *this)

{
  ~ZombieAnimRig_TutorialBirthday(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_TutorialBirthday::~ZombieAnimRig_TutorialBirthday() */

void __thiscall
ZombieAnimRig_TutorialBirthday::~ZombieAnimRig_TutorialBirthday
          (ZombieAnimRig_TutorialBirthday *this)

{
  ~ZombieAnimRig_TutorialBirthday(this + -0x10);
  return;
}


/* ZombieAnimRig_TutorialBirthday::ZombieAnimRig_TutorialBirthday() */

void __thiscall
ZombieAnimRig_TutorialBirthday::ZombieAnimRig_TutorialBirthday(ZombieAnimRig_TutorialBirthday *this)

{
  ZombieAnimRig_Tutorial::ZombieAnimRig_Tutorial((ZombieAnimRig_Tutorial *)this);
  *(undefined ***)this = &PTR_GetClass_06874680;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_TutorialBirthday_06874998;
  return;
}


/* ZombieAnimRig_TutorialBirthday::StaticNew() */

ZombieAnimRig_TutorialBirthday * ZombieAnimRig_TutorialBirthday::StaticNew(void)

{
  ZombieAnimRig_TutorialBirthday *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_TutorialBirthday(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_TutorialBirthday::StaticClassInit() */

void ZombieAnimRig_TutorialBirthday::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_TutorialBirthday");
    (*pcVar2)(plVar1,asStack_10,FUN_04610d80,0x250,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_TutorialBirthday::StaticGetClass() */

long * ZombieAnimRig_TutorialBirthday::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_TutorialBirthday",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_TutorialBirthday::GetClass() const */

long * ZombieAnimRig_TutorialBirthday::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_TutorialBirthday",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_TutorialBirthday::getHeadLayerNames() */

void ZombieAnimRig_TutorialBirthday::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b195c0 & 1;
  if (((DAT_06b195c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b195c0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b19468,"zombie_skull");
    nop();
    std::string::string((string *)&DAT_06b19470,"zombie_jaw");
    nop();
    std::string::string((string *)&DAT_06b19478,"Birthday_Hat");
    nop();
    __cxa_guard_release(&DAT_06b195c0);
    __cxa_atexit(FUN_0460fee8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b194a0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b194a0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b19558,(string *)&DAT_06b19468,(allocator *)&DAT_06b19480);
    __cxa_guard_release(&DAT_06b194a0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b19558,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b19558);
}

