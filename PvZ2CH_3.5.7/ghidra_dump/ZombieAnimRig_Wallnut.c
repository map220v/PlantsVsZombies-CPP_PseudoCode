// Class: ZombieAnimRig_Wallnut


/* ZombieAnimRig_Wallnut::ZombieAnimRig_Wallnut() */

void __thiscall ZombieAnimRig_Wallnut::ZombieAnimRig_Wallnut(ZombieAnimRig_Wallnut *this)

{
  ZombieAnimRig_Explodenut::ZombieAnimRig_Explodenut((ZombieAnimRig_Explodenut *)this);
  *(undefined ***)this = &PTR_GetClass_06621450;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Wallnut_06621768;
  return;
}


/* ZombieAnimRig_Wallnut::StaticNew() */

ZombieAnimRig_Wallnut * ZombieAnimRig_Wallnut::StaticNew(void)

{
  ZombieAnimRig_Wallnut *this;
  
  this = ::operator_new(0x2a0);
  ZombieAnimRig_Wallnut(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Wallnut::StaticClassInit() */

void ZombieAnimRig_Wallnut::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_Wallnut");
    (*pcVar2)(plVar1,asStack_10,FUN_0341a2bc,0x2a0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_Wallnut::StaticGetClass() */

long * ZombieAnimRig_Wallnut::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_Explodenut::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_Wallnut",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_Wallnut::GetClass() const */

long * ZombieAnimRig_Wallnut::GetClass(void)

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
  uVar2 = ZombieAnimRig_Explodenut::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_Wallnut",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Wallnut::getHeadLayerNames() */

void ZombieAnimRig_Wallnut::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06a9f928 & 1;
  if (((DAT_06a9f928 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06a9f928), iVar2 != 0)) {
    std::string::string((string *)&DAT_06a9f830,"_zombie_head_idle");
    nop();
    std::string::string((string *)&DAT_06a9f838,"_zombie_head_walk");
    nop();
    std::string::string((string *)&DAT_06a9f840,"_zombie_head_eat");
    nop();
    std::string::string((string *)&DAT_06a9f848,"wallnut_pupil");
    nop();
    std::string::string((string *)&DAT_06a9f850,"wallnut_mouth_closed");
    nop();
    std::string::string((string *)&DAT_06a9f858,"wallnut_eye");
    nop();
    std::string::string((string *)&DAT_06a9f860,"wallnut_brow");
    nop();
    std::string::string((string *)&DAT_06a9f868,"wallnut_body_rear");
    nop();
    std::string::string((string *)&DAT_06a9f870,"wallnut_body_front");
    nop();
    std::string::string((string *)&DAT_06a9f878,"wallnut_body_edge");
    nop();
    __cxa_guard_release(&DAT_06a9f928);
    __cxa_atexit(FUN_03418cac,uVar3,&DAT_06a88000);
  }
  if (((DAT_06a9f890 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06a9f890), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06a9fc18,(string *)&DAT_06a9f830,(allocator *)&IZombieCursor::sClass);
    __cxa_guard_release(&DAT_06a9f890);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06a9fc18,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06a9fc18);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Wallnut::getArmLayerNames() */

void ZombieAnimRig_Wallnut::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06a9f9b0 & 1;
  if (((DAT_06a9f9b0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06a9f9b0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06a9f960,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06a9f968,"zombie_arms_outer_upper");
    nop();
    std::string::string((string *)&DAT_06a9f970,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06a9f978,"zombie_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06a9f980,"zombie_hand_outer_03");
    nop();
    __cxa_guard_release(&DAT_06a9f9b0);
    __cxa_atexit(FUN_03418ce4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06a9fa10 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06a9fa10), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06a9f988,(string *)&DAT_06a9f960,(allocator *)&DAT_06a9f988);
    __cxa_guard_release(&DAT_06a9fa10);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06a9f988,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06a9f988);
}


/* ZombieAnimRig_Wallnut::~ZombieAnimRig_Wallnut() */

void __thiscall ZombieAnimRig_Wallnut::~ZombieAnimRig_Wallnut(ZombieAnimRig_Wallnut *this)

{
  *(undefined ***)this = &PTR_GetClass_06621450;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Wallnut_06621768;
  ZombieAnimRig_Explodenut::~ZombieAnimRig_Explodenut((ZombieAnimRig_Explodenut *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Wallnut::~ZombieAnimRig_Wallnut() */

void __thiscall ZombieAnimRig_Wallnut::~ZombieAnimRig_Wallnut(ZombieAnimRig_Wallnut *this)

{
  ~ZombieAnimRig_Wallnut(this + -0x10);
  return;
}


/* ZombieAnimRig_Wallnut::~ZombieAnimRig_Wallnut() */

void __thiscall ZombieAnimRig_Wallnut::~ZombieAnimRig_Wallnut(ZombieAnimRig_Wallnut *this)

{
  ~ZombieAnimRig_Wallnut(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Wallnut::~ZombieAnimRig_Wallnut() */

void __thiscall ZombieAnimRig_Wallnut::~ZombieAnimRig_Wallnut(ZombieAnimRig_Wallnut *this)

{
  ~ZombieAnimRig_Wallnut(this + -0x10);
  return;
}

