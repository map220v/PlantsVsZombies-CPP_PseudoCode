// Class: CoalTruckAnimRig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CoalTruckAnimRig::StaticClassInit() */

void CoalTruckAnimRig::StaticClassInit(void)

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
    std::string::string(asStack_10,"CoalTruckAnimRig");
    (*pcVar2)(plVar1,asStack_10,FUN_03c37b1c,0x218,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CoalTruckAnimRig::StaticGetClass() */

long * CoalTruckAnimRig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CoalTruckAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CoalTruckAnimRig::GetClass() const */

long * CoalTruckAnimRig::GetClass(void)

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
  (*pcVar3)(plVar1,"CoalTruckAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CoalTruckAnimRig::~CoalTruckAnimRig() */

void __thiscall CoalTruckAnimRig::~CoalTruckAnimRig(CoalTruckAnimRig *this)

{
  *(undefined ***)this = &PTR_GetClass_0674f8a0;
  *(undefined ***)(this + 0x10) = &PTR__CoalTruckAnimRig_0674f9c8;
  GravestoneAnimRig::~GravestoneAnimRig((GravestoneAnimRig *)this);
  return;
}


/* non-virtual thunk to CoalTruckAnimRig::~CoalTruckAnimRig() */

void __thiscall CoalTruckAnimRig::~CoalTruckAnimRig(CoalTruckAnimRig *this)

{
  ~CoalTruckAnimRig(this + -0x10);
  return;
}


/* CoalTruckAnimRig::~CoalTruckAnimRig() */

void __thiscall CoalTruckAnimRig::~CoalTruckAnimRig(CoalTruckAnimRig *this)

{
  ~CoalTruckAnimRig(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CoalTruckAnimRig::~CoalTruckAnimRig() */

void __thiscall CoalTruckAnimRig::~CoalTruckAnimRig(CoalTruckAnimRig *this)

{
  ~CoalTruckAnimRig(this + -0x10);
  return;
}


/* CoalTruckAnimRig::CoalTruckAnimRig() */

void __thiscall CoalTruckAnimRig::CoalTruckAnimRig(CoalTruckAnimRig *this)

{
  GravestoneAnimRig::GravestoneAnimRig((GravestoneAnimRig *)this);
  *(undefined4 *)(this + 0x210) = 0xffffffff;
  this[0x214] = (CoalTruckAnimRig)0x0;
  *(undefined ***)this = &PTR_GetClass_0674f8a0;
  *(undefined ***)(this + 0x10) = &PTR__CoalTruckAnimRig_0674f9c8;
  return;
}


/* CoalTruckAnimRig::StaticNew() */

CoalTruckAnimRig * CoalTruckAnimRig::StaticNew(void)

{
  CoalTruckAnimRig *this;
  
  this = ::operator_new(0x218);
  CoalTruckAnimRig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CoalTruckAnimRig::SetDamageState(int, bool) */

void __thiscall CoalTruckAnimRig::SetDamageState(CoalTruckAnimRig *this,int param_1,bool param_2)

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
  uVar7 = DAT_06acfd40 & 1;
  if (((DAT_06acfd40 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06acfd40), iVar3 != 0)) {
    std::string::string((string *)&DAT_06acfe18,"surf_board1_damage1");
    nop();
    std::string::string((string *)&DAT_06acfe20,"surf_board1_damage2");
    nop();
    __cxa_guard_release(&DAT_06acfd40);
    __cxa_atexit(FUN_03c363a8,uVar7,&DAT_06a88000);
  }
  if (((DAT_06acfd50 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06acfd50), iVar3 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06acfc80,(string *)&DAT_06acfe18,(allocator *)&DAT_06acfe28);
    __cxa_guard_release(&DAT_06acfd50);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06acfc80,
                 &DAT_06a88000);
  }
  uVar7 = DAT_06acfce8 & 1;
  if (((DAT_06acfce8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06acfce8), iVar3 != 0)) {
    std::string::string((string *)&DAT_06acfda8,"surf_board2_damage1");
    nop();
    std::string::string((string *)&DAT_06acfdb0,"surf_board2_damage2");
    nop();
    __cxa_guard_release(&DAT_06acfce8);
    __cxa_atexit(FUN_03c3637c,uVar7,&DAT_06a88000);
  }
  if (((DAT_06acfd58 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06acfd58), iVar3 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06acfe78,(string *)&DAT_06acfda8,
               (allocator *)&GridItemCoalTruck::sClass);
    __cxa_guard_release(&DAT_06acfd58);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06acfe78,
                 &DAT_06a88000);
  }
  uVar7 = DAT_06acfc48 & 1;
  if (((DAT_06acfc48 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06acfc48), iVar3 != 0)) {
    std::string::string((string *)&DAT_06acfd00,"surf_board3_damage1");
    nop();
    std::string::string((string *)&DAT_06acfd08,"surf_board3_damage2");
    nop();
    __cxa_guard_release(&DAT_06acfc48);
    __cxa_atexit(FUN_03c36350,uVar7,&DAT_06a88000);
  }
  if (((DAT_06acfd60 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06acfd60), iVar3 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06acfca8,(string *)&DAT_06acfd00,(allocator *)&DAT_06acfd10);
    __cxa_guard_release(&DAT_06acfd60);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06acfca8,
                 &DAT_06a88000);
  }
  local_14[0] = param_1 + -1;
  local_14[1] = 0;
  piVar4 = eastl::max_alt<int>(local_14,local_14 + 1);
  iVar3 = *piVar4;
  for (uVar7 = 0; uVar2 = DAT_06acfc80, uVar6 = FUN_03c367b0(DAT_06acfc80,DAT_06acfc88),
      uVar7 < uVar6; uVar7 = uVar7 + 1) {
    bVar1 = (bool)(iVar3 == (int)uVar7 | (byte)this[0x214] ^ 1);
    psVar5 = (string *)FUN_03c367bc(uVar2,uVar7);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar5,bVar1);
    psVar5 = (string *)FUN_03c367bc(DAT_06acfe78,uVar7);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar5,bVar1);
    psVar5 = (string *)FUN_03c367bc(DAT_06acfca8,uVar7);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar5,bVar1);
  }
  if (this[0x214] == (CoalTruckAnimRig)0x0) {
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

