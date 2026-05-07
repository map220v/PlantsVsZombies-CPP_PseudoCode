// Class: HeavyShieldAnimRig


/* HeavyShieldAnimRig::onAnimStopped() */

void __thiscall HeavyShieldAnimRig::onAnimStopped(HeavyShieldAnimRig *this)

{
  this[0x214] = (HeavyShieldAnimRig)0x0;
  if (-1 < *(int *)(this + 0x210)) {
    (**(code **)(*(long *)this + 0x110))(this,*(int *)(this + 0x210),0);
    *(undefined4 *)(this + 0x210) = 0xffffffff;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeavyShieldAnimRig::PlayStationary() */

void __thiscall HeavyShieldAnimRig::PlayStationary(HeavyShieldAnimRig *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  this[0x214] = (HeavyShieldAnimRig)0x1;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"animation");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeavyShieldAnimRig::StaticClassInit() */

void HeavyShieldAnimRig::StaticClassInit(void)

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
    std::string::string(asStack_10,"HeavyShieldAnimRig");
    (*pcVar2)(plVar1,asStack_10,FUN_04ed2c98,0x218,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HeavyShieldAnimRig::StaticGetClass() */

long * HeavyShieldAnimRig::StaticGetClass(void)

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
  uVar2 = GravestoneAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"HeavyShieldAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeavyShieldAnimRig::GetClass() const */

long * HeavyShieldAnimRig::GetClass(void)

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
  uVar2 = GravestoneAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"HeavyShieldAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeavyShieldAnimRig::~HeavyShieldAnimRig() */

void __thiscall HeavyShieldAnimRig::~HeavyShieldAnimRig(HeavyShieldAnimRig *this)

{
  *(undefined ***)this = &PTR_GetClass_069f8f80;
  *(undefined ***)(this + 0x10) = &PTR__HeavyShieldAnimRig_069f90a8;
  GravestoneAnimRig::~GravestoneAnimRig((GravestoneAnimRig *)this);
  return;
}


/* non-virtual thunk to HeavyShieldAnimRig::~HeavyShieldAnimRig() */

void __thiscall HeavyShieldAnimRig::~HeavyShieldAnimRig(HeavyShieldAnimRig *this)

{
  ~HeavyShieldAnimRig(this + -0x10);
  return;
}


/* HeavyShieldAnimRig::~HeavyShieldAnimRig() */

void __thiscall HeavyShieldAnimRig::~HeavyShieldAnimRig(HeavyShieldAnimRig *this)

{
  ~HeavyShieldAnimRig(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to HeavyShieldAnimRig::~HeavyShieldAnimRig() */

void __thiscall HeavyShieldAnimRig::~HeavyShieldAnimRig(HeavyShieldAnimRig *this)

{
  ~HeavyShieldAnimRig(this + -0x10);
  return;
}


/* HeavyShieldAnimRig::HeavyShieldAnimRig() */

void __thiscall HeavyShieldAnimRig::HeavyShieldAnimRig(HeavyShieldAnimRig *this)

{
  GravestoneAnimRig::GravestoneAnimRig((GravestoneAnimRig *)this);
  *(undefined4 *)(this + 0x210) = 0xffffffff;
  this[0x214] = (HeavyShieldAnimRig)0x0;
  *(undefined ***)this = &PTR_GetClass_069f8f80;
  *(undefined ***)(this + 0x10) = &PTR__HeavyShieldAnimRig_069f90a8;
  return;
}


/* HeavyShieldAnimRig::StaticNew() */

HeavyShieldAnimRig * HeavyShieldAnimRig::StaticNew(void)

{
  HeavyShieldAnimRig *this;
  
  this = ::operator_new(0x218);
  HeavyShieldAnimRig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeavyShieldAnimRig::SetDamageState(int, bool) */

void __thiscall
HeavyShieldAnimRig::SetDamageState(HeavyShieldAnimRig *this,int param_1,bool param_2)

{
  bool bVar1;
  undefined8 uVar2;
  int iVar3;
  int *piVar4;
  string *psVar5;
  ulong uVar6;
  ulong uVar7;
  int local_14 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar7 = DAT_06ba2810 & 1;
  if (((DAT_06ba2810 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06ba2810), iVar3 != 0)) {
    std::string::string((string *)&DAT_06ba28d8,"surf_board1_damage1");
    nop();
    std::string::string((string *)&DAT_06ba28e0,"surf_board1_damage2");
    nop();
    __cxa_guard_release(&DAT_06ba2810);
    __cxa_atexit(FUN_04ed2318,uVar7,&DAT_06a88000);
  }
  if (((DAT_06ba27a8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06ba27a8), iVar3 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba27b0,(string *)&DAT_06ba28d8,
               (allocator *)&ZombieFairyTaleArmedGargantuarProps::sClass);
    __cxa_guard_release(&DAT_06ba27a8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba27b0,
                 &DAT_06a88000);
  }
  uVar7 = DAT_06ba28d0 & 1;
  if (((DAT_06ba28d0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06ba28d0), iVar3 != 0)) {
    std::string::string((string *)&DAT_06ba2870,"surf_board2_damage1");
    nop();
    std::string::string((string *)&DAT_06ba2878,"surf_board2_damage2");
    nop();
    __cxa_guard_release(&DAT_06ba28d0);
    __cxa_atexit(FUN_04ed22ec,uVar7,&DAT_06a88000);
  }
  if (((DAT_06ba27f8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06ba27f8), iVar3 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba28b8,(string *)&DAT_06ba2870,
               (allocator *)&GridItemHeavyShield::sClass);
    __cxa_guard_release(&DAT_06ba27f8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba28b8,
                 &DAT_06a88000);
  }
  uVar7 = DAT_06ba27a0 & 1;
  if (((DAT_06ba27a0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06ba27a0), iVar3 != 0)) {
    std::string::string((string *)&DAT_06ba2790,"surf_board3_damage1");
    nop();
    std::string::string((string *)&DAT_06ba2798,"surf_board3_damage2");
    nop();
    __cxa_guard_release(&DAT_06ba27a0);
    __cxa_atexit(FUN_04ed22c0,uVar7,&DAT_06a88000);
  }
  if (((DAT_06ba2818 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06ba2818), iVar3 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba27d0,(string *)&DAT_06ba2790,(allocator *)&DAT_06ba27a0);
    __cxa_guard_release(&DAT_06ba2818);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba27d0,
                 &DAT_06a88000);
  }
  local_14[0] = param_1 + -1;
  local_14[1] = 0;
  piVar4 = eastl::max_alt<int>(local_14,local_14 + 1);
  iVar3 = *piVar4;
  for (uVar7 = 0; uVar2 = DAT_06ba27b0, uVar6 = FUN_04ed250c(DAT_06ba27b0,DAT_06ba27b8),
      uVar7 < uVar6; uVar7 = uVar7 + 1) {
    bVar1 = (bool)(iVar3 == (int)uVar7 | (byte)this[0x214] ^ 1);
    psVar5 = (string *)FUN_04ed2518(uVar2,uVar7);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar5,bVar1);
    psVar5 = (string *)FUN_04ed2518(DAT_06ba28b8,uVar7);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar5,bVar1);
    psVar5 = (string *)FUN_04ed2518(DAT_06ba27d0,uVar7);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar5,bVar1);
  }
  if (this[0x214] == (HeavyShieldAnimRig)0x0) {
    GravestoneAnimRig::SetDamageState((GravestoneAnimRig *)this,param_1,param_2);
  }
  else {
    *(int *)(this + 0x210) = param_1;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

