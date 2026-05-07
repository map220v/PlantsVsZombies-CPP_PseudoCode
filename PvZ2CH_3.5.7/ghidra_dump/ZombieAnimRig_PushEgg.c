// Class: ZombieAnimRig_PushEgg


/* ZombieAnimRig_PushEgg::~ZombieAnimRig_PushEgg() */

void __thiscall ZombieAnimRig_PushEgg::~ZombieAnimRig_PushEgg(ZombieAnimRig_PushEgg *this)

{
  *(undefined ***)this = &PTR_GetClass_068fb470;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_PushEgg_068fb6f8;
  ZombieWithPushingActionAnimRig::~ZombieWithPushingActionAnimRig
            ((ZombieWithPushingActionAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_PushEgg::~ZombieAnimRig_PushEgg() */

void __thiscall ZombieAnimRig_PushEgg::~ZombieAnimRig_PushEgg(ZombieAnimRig_PushEgg *this)

{
  ~ZombieAnimRig_PushEgg(this + -0x10);
  return;
}


/* ZombieAnimRig_PushEgg::~ZombieAnimRig_PushEgg() */

void __thiscall ZombieAnimRig_PushEgg::~ZombieAnimRig_PushEgg(ZombieAnimRig_PushEgg *this)

{
  ~ZombieAnimRig_PushEgg(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_PushEgg::~ZombieAnimRig_PushEgg() */

void __thiscall ZombieAnimRig_PushEgg::~ZombieAnimRig_PushEgg(ZombieAnimRig_PushEgg *this)

{
  ~ZombieAnimRig_PushEgg(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_PushEgg::StaticClassInit() */

void ZombieAnimRig_PushEgg::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_PushEgg");
    (*pcVar2)(plVar1,asStack_10,FUN_047fcf60,0x2d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_PushEgg::StaticGetClass() */

long * ZombieAnimRig_PushEgg::StaticGetClass(void)

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
  uVar2 = ZombieWithPushingActionAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_PushEgg",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_PushEgg::GetClass() const */

long * ZombieAnimRig_PushEgg::GetClass(void)

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
  uVar2 = ZombieWithPushingActionAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_PushEgg",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_PushEgg::ZombieAnimRig_PushEgg() */

void __thiscall ZombieAnimRig_PushEgg::ZombieAnimRig_PushEgg(ZombieAnimRig_PushEgg *this)

{
  ZombieWithPushingActionAnimRig::ZombieWithPushingActionAnimRig
            ((ZombieWithPushingActionAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_068fb470;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_PushEgg_068fb6f8;
  return;
}


/* ZombieAnimRig_PushEgg::StaticNew() */

ZombieAnimRig_PushEgg * ZombieAnimRig_PushEgg::StaticNew(void)

{
  ZombieAnimRig_PushEgg *this;
  
  this = ::operator_new(0x2d8);
  ZombieAnimRig_PushEgg(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_PushEgg::getArmReplacementPairNames() */

void ZombieAnimRig_PushEgg::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b28d30 & 1;
  if (((DAT_06b28d30 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b28d30), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b28d78,"zombie_imp_arm_outer_upper_01");
    nop();
    std::string::string((string *)&DAT_06b28d80,"zombie_imp_arm_outer_upper_02");
    nop();
    __cxa_guard_release(&DAT_06b28d30);
    __cxa_atexit(FUN_047fc4e8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b28d18 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b28d18), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b28d38,(string *)&DAT_06b28d78,(allocator *)&sClass);
    __cxa_guard_release(&DAT_06b28d18);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b28d38,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b28d38);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_PushEgg::getHeadLayerNames() */

void ZombieAnimRig_PushEgg::getHeadLayerNames(void)

{
  int iVar1;
  undefined1 auStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((DAT_06b28de0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06b28de0), iVar1 != 0)) {
    std::string::string(asStack_28,"zombie_imp_skull");
    std::string::string(asStack_20,"zombie_imp_jaw");
    std::string::string(asStack_18,"maozi1");
    std::string::string(asStack_10,"maozi2");
    std::vector<std::string,std::allocator<std::string>>::vector
              ((vector<std::string,std::allocator<std::string>> *)&DAT_06b28d98,asStack_28,4,
               auStack_30);
    __cxa_guard_release(&DAT_06b28de0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b28d98,
                 &DAT_06a88000);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    std::string::~string(asStack_20);
    std::string::~string(asStack_28);
    nop();
    nop();
    nop();
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b28d98);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_PushEgg::getArmLayerNames() */

void ZombieAnimRig_PushEgg::getArmLayerNames(void)

{
  int iVar1;
  undefined1 auStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((DAT_06b28d20 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06b28d20), iVar1 != 0)) {
    std::string::string(asStack_18,"zombie_imp_arm_outer_lower");
    std::string::string(asStack_10,"zombie_imp_hand_outer");
    std::vector<std::string,std::allocator<std::string>>::vector
              ((vector<std::string,std::allocator<std::string>> *)&DAT_06b28cf8,asStack_18,2,
               auStack_20);
    __cxa_guard_release(&DAT_06b28d20);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b28cf8,
                 &DAT_06a88000);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    nop();
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b28cf8);
}

