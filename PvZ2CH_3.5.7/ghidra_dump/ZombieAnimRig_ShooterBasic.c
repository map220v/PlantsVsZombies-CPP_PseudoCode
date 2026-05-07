// Class: ZombieAnimRig_ShooterBasic


/* ZombieAnimRig_ShooterBasic::ZombieAnimRig_ShooterBasic() */

void __thiscall
ZombieAnimRig_ShooterBasic::ZombieAnimRig_ShooterBasic(ZombieAnimRig_ShooterBasic *this)

{
  ZombieAnimRig_Basic::ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  *(undefined ***)this = &PTR_GetClass_069005c0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ShooterBasic_069008d8;
  return;
}


/* ZombieAnimRig_ShooterBasic::~ZombieAnimRig_ShooterBasic() */

void __thiscall
ZombieAnimRig_ShooterBasic::~ZombieAnimRig_ShooterBasic(ZombieAnimRig_ShooterBasic *this)

{
  *(undefined ***)this = &PTR_GetClass_069005c0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ShooterBasic_069008d8;
  ZombieAnimRig_Basic::~ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ShooterBasic::~ZombieAnimRig_ShooterBasic() */

void __thiscall
ZombieAnimRig_ShooterBasic::~ZombieAnimRig_ShooterBasic(ZombieAnimRig_ShooterBasic *this)

{
  ~ZombieAnimRig_ShooterBasic(this + -0x10);
  return;
}


/* ZombieAnimRig_ShooterBasic::~ZombieAnimRig_ShooterBasic() */

void __thiscall
ZombieAnimRig_ShooterBasic::~ZombieAnimRig_ShooterBasic(ZombieAnimRig_ShooterBasic *this)

{
  ~ZombieAnimRig_ShooterBasic(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ShooterBasic::~ZombieAnimRig_ShooterBasic() */

void __thiscall
ZombieAnimRig_ShooterBasic::~ZombieAnimRig_ShooterBasic(ZombieAnimRig_ShooterBasic *this)

{
  ~ZombieAnimRig_ShooterBasic(this + -0x10);
  return;
}


/* ZombieAnimRig_ShooterBasic::StaticNew() */

ZombieAnimRig_ShooterBasic * ZombieAnimRig_ShooterBasic::StaticNew(void)

{
  ZombieAnimRig_ShooterBasic *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_ShooterBasic(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ShooterBasic::StaticClassInit() */

void ZombieAnimRig_ShooterBasic::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_ShooterBasic");
    (*pcVar2)(plVar1,asStack_10,FUN_0480de20,0x250,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_ShooterBasic::StaticGetClass() */

long * ZombieAnimRig_ShooterBasic::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_ShooterBasic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_ShooterBasic::GetClass() const */

long * ZombieAnimRig_ShooterBasic::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_ShooterBasic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ShooterBasic::getArmLayerNames() */

void ZombieAnimRig_ShooterBasic::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b29a00 & 1;
  if (((DAT_06b29a00 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b29a00), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b29980,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b29988,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b29990,"zombie_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06b29998,"zombie_hand_outer_03");
    nop();
    __cxa_guard_release(&DAT_06b29a00);
    __cxa_atexit(FUN_0480dc3c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b29950 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b29950), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b29a08,(string *)&DAT_06b29980,(allocator *)&DAT_06b299a0);
    __cxa_guard_release(&DAT_06b29950);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b29a08,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b29a08);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ShooterBasic::getArmReplacementPairNames() */

void ZombieAnimRig_ShooterBasic::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b29940 & 1;
  if (((DAT_06b29940 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b29940), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b299d0,"zombie_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b299d8,"zombie_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06b29940);
    __cxa_atexit(FUN_0480dc78,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b299c8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b299c8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b29960,(string *)&DAT_06b299d0,(allocator *)&DAT_06b299e0);
    __cxa_guard_release(&DAT_06b299c8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b29960,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b29960);
}

