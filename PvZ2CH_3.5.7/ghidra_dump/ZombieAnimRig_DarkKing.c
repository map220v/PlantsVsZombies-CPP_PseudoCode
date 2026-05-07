// Class: ZombieAnimRig_DarkKing


/* ZombieAnimRig_DarkKing::~ZombieAnimRig_DarkKing() */

void __thiscall ZombieAnimRig_DarkKing::~ZombieAnimRig_DarkKing(ZombieAnimRig_DarkKing *this)

{
  *(undefined ***)this = &PTR_GetClass_06893750;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_DarkKing_068939c8;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_DarkKing::~ZombieAnimRig_DarkKing() */

void __thiscall ZombieAnimRig_DarkKing::~ZombieAnimRig_DarkKing(ZombieAnimRig_DarkKing *this)

{
  ~ZombieAnimRig_DarkKing(this + -0x10);
  return;
}


/* ZombieAnimRig_DarkKing::~ZombieAnimRig_DarkKing() */

void __thiscall ZombieAnimRig_DarkKing::~ZombieAnimRig_DarkKing(ZombieAnimRig_DarkKing *this)

{
  ~ZombieAnimRig_DarkKing(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_DarkKing::~ZombieAnimRig_DarkKing() */

void __thiscall ZombieAnimRig_DarkKing::~ZombieAnimRig_DarkKing(ZombieAnimRig_DarkKing *this)

{
  ~ZombieAnimRig_DarkKing(this + -0x10);
  return;
}


/* ZombieAnimRig_DarkKing::ZombieAnimRig_DarkKing() */

void __thiscall ZombieAnimRig_DarkKing::ZombieAnimRig_DarkKing(ZombieAnimRig_DarkKing *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06893750;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_DarkKing_068939c8;
  return;
}


/* ZombieAnimRig_DarkKing::StaticNew() */

ZombieAnimRig_DarkKing * ZombieAnimRig_DarkKing::StaticNew(void)

{
  ZombieAnimRig_DarkKing *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_DarkKing(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DarkKing::StaticClassInit() */

void ZombieAnimRig_DarkKing::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_DarkKing");
    (*pcVar2)(plVar1,asStack_10,FUN_0466df80,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_DarkKing::StaticGetClass() */

long * ZombieAnimRig_DarkKing::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_DarkKing",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_DarkKing::GetClass() const */

long * ZombieAnimRig_DarkKing::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_DarkKing",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DarkKing::getArmLayerNames() */

void ZombieAnimRig_DarkKing::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1d910 & 1;
  if (((DAT_06b1d910 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1d910), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1d840,"king_arm_front_lower");
    nop();
    std::string::string((string *)&DAT_06b1d848,"king_hand_front");
    nop();
    __cxa_guard_release(&DAT_06b1d910);
    __cxa_atexit(FUN_0466d884,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1d928 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1d928), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1d828,(string *)&DAT_06b1d840,(allocator *)&DAT_06b1d850);
    __cxa_guard_release(&DAT_06b1d928);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1d828,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1d828);
}

