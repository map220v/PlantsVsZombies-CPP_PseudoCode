// Class: ZombieAnimRig_MonkNunchaku


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_MonkNunchaku::StaticClassInit() */

void ZombieAnimRig_MonkNunchaku::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_MonkNunchaku");
    (*pcVar2)(plVar1,asStack_10,FUN_0461980c,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_MonkNunchaku::StaticGetClass() */

long * ZombieAnimRig_MonkNunchaku::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_Hammer::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_MonkNunchaku",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_MonkNunchaku::GetClass() const */

long * ZombieAnimRig_MonkNunchaku::GetClass(void)

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
  uVar2 = ZombieAnimRig_Hammer::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_MonkNunchaku",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_MonkNunchaku::~ZombieAnimRig_MonkNunchaku() */

void __thiscall
ZombieAnimRig_MonkNunchaku::~ZombieAnimRig_MonkNunchaku(ZombieAnimRig_MonkNunchaku *this)

{
  *(undefined ***)this = &PTR_GetClass_068789e0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_MonkNunchaku_06878c68;
  ZombieAnimRig_Hammer::~ZombieAnimRig_Hammer((ZombieAnimRig_Hammer *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_MonkNunchaku::~ZombieAnimRig_MonkNunchaku() */

void __thiscall
ZombieAnimRig_MonkNunchaku::~ZombieAnimRig_MonkNunchaku(ZombieAnimRig_MonkNunchaku *this)

{
  ~ZombieAnimRig_MonkNunchaku(this + -0x10);
  return;
}


/* ZombieAnimRig_MonkNunchaku::~ZombieAnimRig_MonkNunchaku() */

void __thiscall
ZombieAnimRig_MonkNunchaku::~ZombieAnimRig_MonkNunchaku(ZombieAnimRig_MonkNunchaku *this)

{
  ~ZombieAnimRig_MonkNunchaku(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_MonkNunchaku::~ZombieAnimRig_MonkNunchaku() */

void __thiscall
ZombieAnimRig_MonkNunchaku::~ZombieAnimRig_MonkNunchaku(ZombieAnimRig_MonkNunchaku *this)

{
  ~ZombieAnimRig_MonkNunchaku(this + -0x10);
  return;
}


/* ZombieAnimRig_MonkNunchaku::ZombieAnimRig_MonkNunchaku() */

void __thiscall
ZombieAnimRig_MonkNunchaku::ZombieAnimRig_MonkNunchaku(ZombieAnimRig_MonkNunchaku *this)

{
  ZombieAnimRig_Hammer::ZombieAnimRig_Hammer((ZombieAnimRig_Hammer *)this);
  *(undefined ***)this = &PTR_GetClass_068789e0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_MonkNunchaku_06878c68;
  return;
}


/* ZombieAnimRig_MonkNunchaku::StaticNew() */

ZombieAnimRig_MonkNunchaku * ZombieAnimRig_MonkNunchaku::StaticNew(void)

{
  ZombieAnimRig_MonkNunchaku *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_MonkNunchaku(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_MonkNunchaku::PlayBlockReturn(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_MonkNunchaku::PlayBlockReturn
          (ZombieAnimRig_MonkNunchaku *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"skill2");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  (*pcVar1)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_MonkNunchaku::PlayBlock() */

void __thiscall ZombieAnimRig_MonkNunchaku::PlayBlock(ZombieAnimRig_MonkNunchaku *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"skill xunhuan");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_MonkNunchaku::getHeadLayerNames() */

void ZombieAnimRig_MonkNunchaku::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1a178 & 1;
  if (((DAT_06b1a178 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1a178), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1a108,"zombie_kongfu_Nunchaku_jaw");
    nop();
    std::string::string((string *)&DAT_06b1a110,"zombie_kongfu_Nunchaku_skull");
    nop();
    __cxa_guard_release(&DAT_06b1a178);
    __cxa_atexit(FUN_04619644,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1a138 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1a138), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1a140,(string *)&DAT_06b1a108,(allocator *)&DAT_06b1a118);
    __cxa_guard_release(&DAT_06b1a138);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1a140,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1a140);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_MonkNunchaku::getArmLayerNames() */

void ZombieAnimRig_MonkNunchaku::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1a0c8 & 1;
  if (((DAT_06b1a0c8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1a0c8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1a0e0,"zombie_kongfu_knife_left hand");
    nop();
    std::string::string((string *)&DAT_06b1a0e8,"zombie_kongfu_knife_left xsb");
    nop();
    __cxa_guard_release(&DAT_06b1a0c8);
    __cxa_atexit(FUN_04619670,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1a168 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1a168), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1a0f0,(string *)&DAT_06b1a0e0,(allocator *)&DAT_06b1a0f0);
    __cxa_guard_release(&DAT_06b1a168);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1a0f0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1a0f0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_MonkNunchaku::getArmReplacementPairNames() */

void ZombieAnimRig_MonkNunchaku::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1a130 & 1;
  if (((DAT_06b1a130 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1a130), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1a0d0,"zombie_kongfu_knife_arm_outer_upper_01");
    nop();
    std::string::string((string *)&DAT_06b1a0d8,"zombie_kongfu_knife_arm_outer_upper_02");
    nop();
    __cxa_guard_release(&DAT_06b1a130);
    __cxa_atexit(FUN_0461969c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1a170 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1a170), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1a0b0,(string *)&DAT_06b1a0d0,(allocator *)&DAT_06b1a0e0);
    __cxa_guard_release(&DAT_06b1a170);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1a0b0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1a0b0);
}

