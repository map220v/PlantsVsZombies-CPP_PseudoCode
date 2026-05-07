// Class: ZombieAnimRig_Parkour


/* ZombieAnimRig_Parkour::onPopAnimInitialized() */

void __thiscall ZombieAnimRig_Parkour::onPopAnimInitialized(ZombieAnimRig_Parkour *this)

{
  ZombieAnimRig::onPopAnimInitialized((ZombieAnimRig *)this);
  (**(code **)(*(long *)this + 0x1f8))(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Parkour::PlayRunning() */

void __thiscall ZombieAnimRig_Parkour::PlayRunning(ZombieAnimRig_Parkour *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"run");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Parkour::PlayClimbing(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
ZombieAnimRig_Parkour::PlayClimbing(ZombieAnimRig_Parkour *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"jump");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = (*pcVar2)(this,asStack_58,0,aRStack_50);
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
  __stack_chk_fail(iVar1 != -1);
}


/* ZombieAnimRig_Parkour::~ZombieAnimRig_Parkour() */

void __thiscall ZombieAnimRig_Parkour::~ZombieAnimRig_Parkour(ZombieAnimRig_Parkour *this)

{
  *(undefined ***)this = &PTR_GetClass_06a1c590;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Parkour_06a1c8a8;
  ZombieAnimRig_Basic::~ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Parkour::~ZombieAnimRig_Parkour() */

void __thiscall ZombieAnimRig_Parkour::~ZombieAnimRig_Parkour(ZombieAnimRig_Parkour *this)

{
  ~ZombieAnimRig_Parkour(this + -0x10);
  return;
}


/* ZombieAnimRig_Parkour::~ZombieAnimRig_Parkour() */

void __thiscall ZombieAnimRig_Parkour::~ZombieAnimRig_Parkour(ZombieAnimRig_Parkour *this)

{
  ~ZombieAnimRig_Parkour(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Parkour::~ZombieAnimRig_Parkour() */

void __thiscall ZombieAnimRig_Parkour::~ZombieAnimRig_Parkour(ZombieAnimRig_Parkour *this)

{
  ~ZombieAnimRig_Parkour(this + -0x10);
  return;
}


/* ZombieAnimRig_Parkour::ZombieAnimRig_Parkour() */

void __thiscall ZombieAnimRig_Parkour::ZombieAnimRig_Parkour(ZombieAnimRig_Parkour *this)

{
  ZombieAnimRig_Basic::ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  *(undefined ***)this = &PTR_GetClass_06a1c590;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Parkour_06a1c8a8;
  return;
}


/* ZombieAnimRig_Parkour::StaticNew() */

ZombieAnimRig_Parkour * ZombieAnimRig_Parkour::StaticNew(void)

{
  ZombieAnimRig_Parkour *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_Parkour(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Parkour::StaticClassInit() */

void ZombieAnimRig_Parkour::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_Parkour");
    (*pcVar2)(plVar1,asStack_10,FUN_04f47618,0x250,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_Parkour::StaticGetClass() */

long * ZombieAnimRig_Parkour::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Parkour",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_Parkour::GetClass() const */

long * ZombieAnimRig_Parkour::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Parkour",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Parkour::getArmReplacementPairNames() */

void ZombieAnimRig_Parkour::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba6028 & 1;
  if (((DAT_06ba6028 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba6028), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba6050,"zombie_troglobite_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06ba6058,"zombie_troglobite_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06ba6028);
    __cxa_atexit(FUN_04f46bbc,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba6150 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba6150), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba60a8,(string *)&DAT_06ba6050,(allocator *)&ZombieParkour::sClass);
    __cxa_guard_release(&DAT_06ba6150);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba60a8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba60a8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Parkour::getHeadLayerNames() */

void ZombieAnimRig_Parkour::getHeadLayerNames(void)

{
  int iVar1;
  string *this;
  undefined1 auStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((DAT_06ba6008 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06ba6008), iVar1 != 0)) {
    std::string::string(asStack_30,"_zombie_head_idle");
    this = (string *)&local_8;
    std::string::string(asStack_28,"zombie_troglobite_head");
    std::string::string(asStack_20,"zombie_troglobite_jaw");
    std::string::string(asStack_18,"zombie_troglobite_skull");
    std::string::string(asStack_10,"zombie_troglobite_skull_jump");
    std::vector<std::string,std::allocator<std::string>>::vector
              ((vector<std::string,std::allocator<std::string>> *)&DAT_06ba6030,asStack_30,5,
               auStack_38);
    __cxa_guard_release(&DAT_06ba6008);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba6030,
                 &DAT_06a88000);
    do {
      this = this + -8;
      std::string::~string(this);
    } while (this != asStack_30);
    nop();
    nop();
    nop();
    nop();
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba6030);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Parkour::getArmLayerNames() */

void ZombieAnimRig_Parkour::getArmLayerNames(void)

{
  int iVar1;
  undefined1 auStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((DAT_06ba6148 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06ba6148), iVar1 != 0)) {
    std::string::string(asStack_28,"zombie_troglobite_arm_outer_lower");
    std::string::string(asStack_20,"zombie_troglobite_hand_outer");
    std::string::string(asStack_18,"zombie_hand_outer_01");
    std::string::string(asStack_10,"zombie_hand_outer_02");
    std::vector<std::string,std::allocator<std::string>>::vector
              ((vector<std::string,std::allocator<std::string>> *)&DAT_06ba6010,asStack_28,4,
               auStack_30);
    __cxa_guard_release(&DAT_06ba6148);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba6010,
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
  __stack_chk_fail(&DAT_06ba6010);
}

