// Class: ZombieAnimRig_MonkDrink


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_MonkDrink::recover(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
ZombieAnimRig_MonkDrink::recover(ZombieAnimRig_MonkDrink *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"return");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = (*pcVar2)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (iVar1 != -1) {
    this[0x240] = (ZombieAnimRig_MonkDrink)0x0;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_MonkDrink::getEatAnimationName() */

void ZombieAnimRig_MonkDrink::getEatAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x240) == '\0') {
    __s = "attack";
  }
  else {
    __s = "crazy attack";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_MonkDrink::StaticClassInit() */

void ZombieAnimRig_MonkDrink::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_MonkDrink");
    (*pcVar2)(plVar1,asStack_10,FUN_04618598,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_MonkDrink::StaticGetClass() */

long * ZombieAnimRig_MonkDrink::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_MonkDrink",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_MonkDrink::GetClass() const */

long * ZombieAnimRig_MonkDrink::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_MonkDrink",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_MonkDrink::~ZombieAnimRig_MonkDrink() */

void __thiscall ZombieAnimRig_MonkDrink::~ZombieAnimRig_MonkDrink(ZombieAnimRig_MonkDrink *this)

{
  *(undefined ***)this = &PTR_GetClass_06878460;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_MonkDrink_068786d8;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_MonkDrink::~ZombieAnimRig_MonkDrink() */

void __thiscall ZombieAnimRig_MonkDrink::~ZombieAnimRig_MonkDrink(ZombieAnimRig_MonkDrink *this)

{
  ~ZombieAnimRig_MonkDrink(this + -0x10);
  return;
}


/* ZombieAnimRig_MonkDrink::~ZombieAnimRig_MonkDrink() */

void __thiscall ZombieAnimRig_MonkDrink::~ZombieAnimRig_MonkDrink(ZombieAnimRig_MonkDrink *this)

{
  ~ZombieAnimRig_MonkDrink(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_MonkDrink::~ZombieAnimRig_MonkDrink() */

void __thiscall ZombieAnimRig_MonkDrink::~ZombieAnimRig_MonkDrink(ZombieAnimRig_MonkDrink *this)

{
  ~ZombieAnimRig_MonkDrink(this + -0x10);
  return;
}


/* ZombieAnimRig_MonkDrink::ZombieAnimRig_MonkDrink() */

void __thiscall ZombieAnimRig_MonkDrink::ZombieAnimRig_MonkDrink(ZombieAnimRig_MonkDrink *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  this[0x240] = (ZombieAnimRig_MonkDrink)0x0;
  *(undefined ***)this = &PTR_GetClass_06878460;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_MonkDrink_068786d8;
  return;
}


/* ZombieAnimRig_MonkDrink::StaticNew() */

ZombieAnimRig_MonkDrink * ZombieAnimRig_MonkDrink::StaticNew(void)

{
  ZombieAnimRig_MonkDrink *this;
  
  this = ::operator_new(0x248);
  ZombieAnimRig_MonkDrink(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_MonkDrink::becomeCrazy(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
ZombieAnimRig_MonkDrink::becomeCrazy(ZombieAnimRig_MonkDrink *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"drink");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = (*pcVar2)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (iVar1 != -1) {
    this[0x240] = (ZombieAnimRig_MonkDrink)0x1;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_MonkDrink::PlayAttackEat(RtReflectionDelegate<Sexy::Delegate3<std::string const&,
   std::string const&, int> >) */

void __thiscall
ZombieAnimRig_MonkDrink::PlayAttackEat(ZombieAnimRig_MonkDrink *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x230))(asStack_58);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_58,3,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x210) = 3;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_MonkDrink::SetRedEyeLayers(bool) */

void __thiscall ZombieAnimRig_MonkDrink::SetRedEyeLayers(ZombieAnimRig_MonkDrink *this,bool param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"zombie_eye red_sm");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"zombie_eye red");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_MonkDrink::getHeadLayerNames() */

void ZombieAnimRig_MonkDrink::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b19f60 & 1;
  if (((DAT_06b19f60 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19f60), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b19f90,"Zombie_skull");
    nop();
    std::string::string((string *)&DAT_06b19f98,"Zombie_drink_jaw");
    nop();
    __cxa_guard_release(&DAT_06b19f60);
    __cxa_atexit(FUN_04618320,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b19fb0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19fb0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b19f10,(string *)&DAT_06b19f90,(allocator *)&DAT_06b19fa0);
    __cxa_guard_release(&DAT_06b19fb0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b19f10,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b19f10);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_MonkDrink::getArmLayerNames() */

void ZombieAnimRig_MonkDrink::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b19f00 & 1;
  if (((DAT_06b19f00 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19f00), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b19f68,"Zombie_drink_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b19f70,"Zombie_drink_hand_outer");
    nop();
    std::string::string((string *)&DAT_06b19f78,"Zombie_drink_hand_outer_01");
    nop();
    __cxa_guard_release(&DAT_06b19f00);
    __cxa_atexit(FUN_0461834c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b19ef8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19ef8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b19f48,(string *)&DAT_06b19f68,(allocator *)&DAT_06b19f80);
    __cxa_guard_release(&DAT_06b19ef8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b19f48,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b19f48);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_MonkDrink::getArmReplacementPairNames() */

void ZombieAnimRig_MonkDrink::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b19f40 & 1;
  if (((DAT_06b19f40 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19f40), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b19fa0,"Zombie_drink_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b19fa8,"Zombie_drink_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06b19f40);
    __cxa_atexit(FUN_04618380,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b19f08 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19f08), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b19ee0,(string *)&DAT_06b19fa0,(allocator *)&DAT_06b19fb0);
    __cxa_guard_release(&DAT_06b19f08);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b19ee0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b19ee0);
}

