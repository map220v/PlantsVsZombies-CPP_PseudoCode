// Class: ZombieAnimRig_Jalapeno


/* ZombieAnimRig_Jalapeno::~ZombieAnimRig_Jalapeno() */

void __thiscall ZombieAnimRig_Jalapeno::~ZombieAnimRig_Jalapeno(ZombieAnimRig_Jalapeno *this)

{
  *(undefined ***)this = &PTR_GetClass_06a01510;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Jalapeno_06a01828;
  ZombieAnimRig_Basic::~ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Jalapeno::~ZombieAnimRig_Jalapeno() */

void __thiscall ZombieAnimRig_Jalapeno::~ZombieAnimRig_Jalapeno(ZombieAnimRig_Jalapeno *this)

{
  ~ZombieAnimRig_Jalapeno(this + -0x10);
  return;
}


/* ZombieAnimRig_Jalapeno::~ZombieAnimRig_Jalapeno() */

void __thiscall ZombieAnimRig_Jalapeno::~ZombieAnimRig_Jalapeno(ZombieAnimRig_Jalapeno *this)

{
  ~ZombieAnimRig_Jalapeno(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Jalapeno::~ZombieAnimRig_Jalapeno() */

void __thiscall ZombieAnimRig_Jalapeno::~ZombieAnimRig_Jalapeno(ZombieAnimRig_Jalapeno *this)

{
  ~ZombieAnimRig_Jalapeno(this + -0x10);
  return;
}


/* ZombieAnimRig_Jalapeno::ZombieAnimRig_Jalapeno() */

void __thiscall ZombieAnimRig_Jalapeno::ZombieAnimRig_Jalapeno(ZombieAnimRig_Jalapeno *this)

{
  ZombieAnimRig_Basic::ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  *(undefined ***)this = &PTR_GetClass_06a01510;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Jalapeno_06a01828;
  return;
}


/* ZombieAnimRig_Jalapeno::StaticNew() */

ZombieAnimRig_Jalapeno * ZombieAnimRig_Jalapeno::StaticNew(void)

{
  ZombieAnimRig_Jalapeno *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_Jalapeno(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Jalapeno::StaticClassInit() */

void ZombieAnimRig_Jalapeno::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_Jalapeno");
    (*pcVar2)(plVar1,asStack_10,FUN_04eebf28,0x250,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_Jalapeno::StaticGetClass() */

long * ZombieAnimRig_Jalapeno::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_Basic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_Jalapeno",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_Jalapeno::GetClass() const */

long * ZombieAnimRig_Jalapeno::GetClass(void)

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
  uVar2 = ZombieAnimRig_Basic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_Jalapeno",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Jalapeno::getHeadLayerNames() */

void ZombieAnimRig_Jalapeno::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba3830 & 1;
  if (((DAT_06ba3830 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3830), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba3840,"_zombie_head_idle");
    nop();
    __cxa_guard_release(&DAT_06ba3830);
    __cxa_atexit(FUN_04eebba8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba3848 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3848), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba3818,(string *)&DAT_06ba3840,(allocator *)&DAT_06ba3848);
    __cxa_guard_release(&DAT_06ba3848);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba3818,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba3818);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Jalapeno::getArmLayerNames() */

void ZombieAnimRig_Jalapeno::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba3800 & 1;
  if (((DAT_06ba3800 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3800), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba37e8,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06ba37f0,"zombie_arms_outer_upper");
    nop();
    std::string::string((string *)&DAT_06ba37f8,"zombie_hand_outer_01");
    nop();
    __cxa_guard_release(&DAT_06ba3800);
    __cxa_atexit(FUN_04eebbb4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba3890 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3890), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba37d0,(string *)&DAT_06ba37e8,(allocator *)&DAT_06ba3800);
    __cxa_guard_release(&DAT_06ba3890);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba37d0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba37d0);
}

