// Class: ZombieAnimRig_SummerImp


/* ZombieAnimRig_SummerImp::~ZombieAnimRig_SummerImp() */

void __thiscall ZombieAnimRig_SummerImp::~ZombieAnimRig_SummerImp(ZombieAnimRig_SummerImp *this)

{
  *(undefined ***)this = &PTR_GetClass_068a3680;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_SummerImp_068a3920;
  ZombieAnimRig_FutureImp::~ZombieAnimRig_FutureImp((ZombieAnimRig_FutureImp *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_SummerImp::~ZombieAnimRig_SummerImp() */

void __thiscall ZombieAnimRig_SummerImp::~ZombieAnimRig_SummerImp(ZombieAnimRig_SummerImp *this)

{
  ~ZombieAnimRig_SummerImp(this + -0x10);
  return;
}


/* ZombieAnimRig_SummerImp::~ZombieAnimRig_SummerImp() */

void __thiscall ZombieAnimRig_SummerImp::~ZombieAnimRig_SummerImp(ZombieAnimRig_SummerImp *this)

{
  ~ZombieAnimRig_SummerImp(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_SummerImp::~ZombieAnimRig_SummerImp() */

void __thiscall ZombieAnimRig_SummerImp::~ZombieAnimRig_SummerImp(ZombieAnimRig_SummerImp *this)

{
  ~ZombieAnimRig_SummerImp(this + -0x10);
  return;
}


/* ZombieAnimRig_SummerImp::ZombieAnimRig_SummerImp() */

void __thiscall ZombieAnimRig_SummerImp::ZombieAnimRig_SummerImp(ZombieAnimRig_SummerImp *this)

{
  ZombieAnimRig_FutureImp::ZombieAnimRig_FutureImp((ZombieAnimRig_FutureImp *)this);
  *(undefined ***)this = &PTR_GetClass_068a3680;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_SummerImp_068a3920;
  return;
}


/* ZombieAnimRig_SummerImp::StaticNew() */

ZombieAnimRig_SummerImp * ZombieAnimRig_SummerImp::StaticNew(void)

{
  ZombieAnimRig_SummerImp *this;
  
  this = ::operator_new(0x248);
  ZombieAnimRig_SummerImp(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SummerImp::StaticClassInit() */

void ZombieAnimRig_SummerImp::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_SummerImp");
    (*pcVar2)(plVar1,asStack_10,FUN_04692e38,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_SummerImp::StaticGetClass() */

long * ZombieAnimRig_SummerImp::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_FutureImp::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_SummerImp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_SummerImp::GetClass() const */

long * ZombieAnimRig_SummerImp::GetClass(void)

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
  uVar2 = ZombieAnimRig_FutureImp::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_SummerImp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SummerImp::getHeadLayerNames() */

void ZombieAnimRig_SummerImp::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1eab0 & 1;
  if (((DAT_06b1eab0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1eab0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1eae0,"zombie_imp_skull");
    nop();
    std::string::string((string *)&DAT_06b1eae8,"zombie_imp_jaw");
    nop();
    std::string::string((string *)&DAT_06b1eaf0,"hotdog_head");
    nop();
    std::string::string((string *)&DAT_06b1eaf8,"hotdog_layered_head");
    nop();
    __cxa_guard_release(&DAT_06b1eab0);
    __cxa_atexit(FUN_046924b8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1ea10 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1ea10), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1ea68,(string *)&DAT_06b1eae0,(allocator *)&DAT_06b1eb00);
    __cxa_guard_release(&DAT_06b1ea10);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1ea68,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1ea68);
}

