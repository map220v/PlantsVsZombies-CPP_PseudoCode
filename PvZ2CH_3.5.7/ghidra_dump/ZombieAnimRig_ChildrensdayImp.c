// Class: ZombieAnimRig_ChildrensdayImp


/* ZombieAnimRig_ChildrensdayImp::~ZombieAnimRig_ChildrensdayImp() */

void __thiscall
ZombieAnimRig_ChildrensdayImp::~ZombieAnimRig_ChildrensdayImp(ZombieAnimRig_ChildrensdayImp *this)

{
  *(undefined ***)this = &PTR_GetClass_068a3960;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ChildrensdayImp_068a3c00;
  ZombieAnimRig_FutureImp::~ZombieAnimRig_FutureImp((ZombieAnimRig_FutureImp *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ChildrensdayImp::~ZombieAnimRig_ChildrensdayImp() */

void __thiscall
ZombieAnimRig_ChildrensdayImp::~ZombieAnimRig_ChildrensdayImp(ZombieAnimRig_ChildrensdayImp *this)

{
  ~ZombieAnimRig_ChildrensdayImp(this + -0x10);
  return;
}


/* ZombieAnimRig_ChildrensdayImp::~ZombieAnimRig_ChildrensdayImp() */

void __thiscall
ZombieAnimRig_ChildrensdayImp::~ZombieAnimRig_ChildrensdayImp(ZombieAnimRig_ChildrensdayImp *this)

{
  ~ZombieAnimRig_ChildrensdayImp(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ChildrensdayImp::~ZombieAnimRig_ChildrensdayImp() */

void __thiscall
ZombieAnimRig_ChildrensdayImp::~ZombieAnimRig_ChildrensdayImp(ZombieAnimRig_ChildrensdayImp *this)

{
  ~ZombieAnimRig_ChildrensdayImp(this + -0x10);
  return;
}


/* ZombieAnimRig_ChildrensdayImp::ZombieAnimRig_ChildrensdayImp() */

void __thiscall
ZombieAnimRig_ChildrensdayImp::ZombieAnimRig_ChildrensdayImp(ZombieAnimRig_ChildrensdayImp *this)

{
  ZombieAnimRig_FutureImp::ZombieAnimRig_FutureImp((ZombieAnimRig_FutureImp *)this);
  *(undefined ***)this = &PTR_GetClass_068a3960;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ChildrensdayImp_068a3c00;
  return;
}


/* ZombieAnimRig_ChildrensdayImp::StaticNew() */

ZombieAnimRig_ChildrensdayImp * ZombieAnimRig_ChildrensdayImp::StaticNew(void)

{
  ZombieAnimRig_ChildrensdayImp *this;
  
  this = ::operator_new(0x248);
  ZombieAnimRig_ChildrensdayImp(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ChildrensdayImp::StaticClassInit() */

void ZombieAnimRig_ChildrensdayImp::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_ChildrensdayImp");
    (*pcVar2)(plVar1,asStack_10,FUN_046930b0,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_ChildrensdayImp::StaticGetClass() */

long * ZombieAnimRig_ChildrensdayImp::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_ChildrensdayImp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_ChildrensdayImp::GetClass() const */

long * ZombieAnimRig_ChildrensdayImp::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_ChildrensdayImp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ChildrensdayImp::getHeadLayerNames() */

void ZombieAnimRig_ChildrensdayImp::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1eb00 & 1;
  if (((DAT_06b1eb00 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1eb00), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1eac0,"zombie_imp_skull");
    nop();
    std::string::string((string *)&DAT_06b1eac8,"zombie_imp_jaw");
    nop();
    std::string::string((string *)&DAT_06b1ead0,"hotdog_head");
    nop();
    std::string::string((string *)&DAT_06b1ead8,"hotdog_layered_head");
    nop();
    __cxa_guard_release(&DAT_06b1eb00);
    __cxa_atexit(FUN_046924f4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1eab8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1eab8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1e9f8,(string *)&DAT_06b1eac0,(allocator *)&DAT_06b1eae0);
    __cxa_guard_release(&DAT_06b1eab8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1e9f8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1e9f8);
}

