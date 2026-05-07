// Class: GridItemSteamTrainAnimRig


/* GridItemSteamTrainAnimRig::~GridItemSteamTrainAnimRig() */

void __thiscall
GridItemSteamTrainAnimRig::~GridItemSteamTrainAnimRig(GridItemSteamTrainAnimRig *this)

{
  *(undefined ***)this = &PTR_GetClass_06752b70;
  *(undefined ***)(this + 0x10) = &PTR__GridItemSteamTrainAnimRig_06752c90;
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to GridItemSteamTrainAnimRig::~GridItemSteamTrainAnimRig() */

void __thiscall
GridItemSteamTrainAnimRig::~GridItemSteamTrainAnimRig(GridItemSteamTrainAnimRig *this)

{
  ~GridItemSteamTrainAnimRig(this + -0x10);
  return;
}


/* GridItemSteamTrainAnimRig::~GridItemSteamTrainAnimRig() */

void __thiscall
GridItemSteamTrainAnimRig::~GridItemSteamTrainAnimRig(GridItemSteamTrainAnimRig *this)

{
  ~GridItemSteamTrainAnimRig(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemSteamTrainAnimRig::~GridItemSteamTrainAnimRig() */

void __thiscall
GridItemSteamTrainAnimRig::~GridItemSteamTrainAnimRig(GridItemSteamTrainAnimRig *this)

{
  ~GridItemSteamTrainAnimRig(this + -0x10);
  return;
}


/* GridItemSteamTrainAnimRig::GridItemSteamTrainAnimRig() */

void __thiscall
GridItemSteamTrainAnimRig::GridItemSteamTrainAnimRig(GridItemSteamTrainAnimRig *this)

{
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06752b70;
  *(undefined ***)(this + 0x10) = &PTR__GridItemSteamTrainAnimRig_06752c90;
  return;
}


/* GridItemSteamTrainAnimRig::StaticNew() */

GridItemSteamTrainAnimRig * GridItemSteamTrainAnimRig::StaticNew(void)

{
  GridItemSteamTrainAnimRig *this;
  
  this = ::operator_new(0x210);
  GridItemSteamTrainAnimRig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSteamTrainAnimRig::StaticClassInit() */

void GridItemSteamTrainAnimRig::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemSteamTrainAnimRig");
    (*pcVar2)(plVar1,asStack_10,FUN_03c42420,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSteamTrainAnimRig::StaticGetClass() */

long * GridItemSteamTrainAnimRig::StaticGetClass(void)

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
  uVar2 = PopAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemSteamTrainAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemSteamTrainAnimRig::GetClass() const */

long * GridItemSteamTrainAnimRig::GetClass(void)

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
  uVar2 = PopAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemSteamTrainAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSteamTrainAnimRig::PlayIdle() */

void __thiscall GridItemSteamTrainAnimRig::PlayIdle(GridItemSteamTrainAnimRig *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"train");
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
/* GridItemSteamTrainAnimRig::SetDamageState(int) */

void __thiscall
GridItemSteamTrainAnimRig::SetDamageState(GridItemSteamTrainAnimRig *this,int param_1)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  string *psVar5;
  ulong uVar6;
  ulong uVar7;
  int local_14 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar7 = DAT_06ad02c0 & 1;
  if (((DAT_06ad02c0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06ad02c0), iVar3 != 0)) {
    std::string::string((string *)&DAT_06ad05c0,"ct_damage1");
    nop();
    std::string::string((string *)&DAT_06ad05c8,"ct_damage2");
    nop();
    __cxa_guard_release(&DAT_06ad02c0);
    __cxa_atexit(FUN_03c3e7e4,uVar7,&DAT_06a88000);
  }
  if (((DAT_06ad0080 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06ad0080), iVar3 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ad0140,(string *)&DAT_06ad05c0,(allocator *)&DAT_06ad05d0);
    __cxa_guard_release(&DAT_06ad0080);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ad0140,
                 &DAT_06a88000);
  }
  uVar7 = DAT_06ad0668 & 1;
  if (((DAT_06ad0668 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06ad0668), iVar3 != 0)) {
    std::string::string((string *)&DAT_06ad0960,"yuanzhu_damage1");
    nop();
    std::string::string((string *)&DAT_06ad0968,"yuanzhu_damage2");
    nop();
    __cxa_guard_release(&DAT_06ad0668);
    __cxa_atexit(FUN_03c3e7b8,uVar7,&DAT_06a88000);
  }
  if (((DAT_06ad0088 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06ad0088), iVar3 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ad0178,(string *)&DAT_06ad0960,(allocator *)&DAT_06ad0970);
    __cxa_guard_release(&DAT_06ad0088);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ad0178,
                 &DAT_06a88000);
  }
  uVar7 = DAT_06ad0020 & 1;
  if (((DAT_06ad0020 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06ad0020), iVar3 != 0)) {
    std::string::string((string *)&DAT_06ad0270,"yq_damage1");
    nop();
    std::string::string((string *)&DAT_06ad0278,"yq_damage2");
    nop();
    __cxa_guard_release(&DAT_06ad0020);
    __cxa_atexit(FUN_03c3e78c,uVar7,&DAT_06a88000);
  }
  if (((DAT_06ad0090 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06ad0090), iVar3 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ad03e0,(string *)&DAT_06ad0270,
               (allocator *)&ZombossSteamFireActionDefinition::sClass);
    __cxa_guard_release(&DAT_06ad0090);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ad03e0,
                 &DAT_06a88000);
  }
  uVar7 = DAT_06ad0860 & 1;
  if (((DAT_06ad0860 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06ad0860), iVar3 != 0)) {
    std::string::string((string *)&DAT_06ad0158,"yt_damage1");
    nop();
    std::string::string((string *)&DAT_06ad0160,"yt_damage2");
    nop();
    __cxa_guard_release(&DAT_06ad0860);
    __cxa_atexit(FUN_03c3e760,uVar7,&DAT_06a88000);
  }
  if (((DAT_06ad0098 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06ad0098), iVar3 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ad07a8,(string *)&DAT_06ad0158,(allocator *)&DAT_06ad0168);
    __cxa_guard_release(&DAT_06ad0098);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ad07a8,
                 &DAT_06a88000);
  }
  uVar7 = DAT_06ad0220 & 1;
  if (((DAT_06ad0220 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06ad0220), iVar3 != 0)) {
    std::string::string((string *)&DAT_06ad0528,"zyt_damage1");
    nop();
    std::string::string((string *)&DAT_06ad0530,"zyt_damage2");
    nop();
    __cxa_guard_release(&DAT_06ad0220);
    __cxa_atexit(FUN_03c3e734,uVar7,&DAT_06a88000);
  }
  if (((DAT_06ad05b8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06ad05b8), iVar3 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ad0400,(string *)&DAT_06ad0528,(allocator *)&DAT_06ad0538);
    __cxa_guard_release(&DAT_06ad05b8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ad0400,
                 &DAT_06a88000);
  }
  uVar7 = DAT_06ad0598 & 1;
  if (((DAT_06ad0598 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06ad0598), iVar3 != 0)) {
    std::string::string((string *)&DAT_06ad0838,"pt_damage1");
    nop();
    std::string::string((string *)&DAT_06ad0840,"pt_damage2");
    nop();
    __cxa_guard_release(&DAT_06ad0598);
    __cxa_atexit(FUN_03c3e708,uVar7,&DAT_06a88000);
  }
  if (((DAT_06ad0230 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06ad0230), iVar3 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ad0848,(string *)&DAT_06ad0838,(allocator *)&DAT_06ad0848);
    __cxa_guard_release(&DAT_06ad0230);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ad0848,
                 &DAT_06a88000);
  }
  local_14[0] = param_1 + -1;
  local_14[1] = 0;
  piVar4 = eastl::max_alt<int>(local_14,local_14 + 1);
  iVar3 = *piVar4;
  for (uVar7 = 0; uVar1 = DAT_06ad0140, uVar6 = FUN_03c3eda8(DAT_06ad0140,DAT_06ad0148),
      uVar7 < uVar6; uVar7 = uVar7 + 1) {
    bVar2 = iVar3 == (int)uVar7;
    psVar5 = (string *)FUN_03c3edb4(uVar1,uVar7);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar5,bVar2);
    psVar5 = (string *)FUN_03c3edb4(DAT_06ad0178,uVar7);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar5,bVar2);
    psVar5 = (string *)FUN_03c3edb4(DAT_06ad03e0,uVar7);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar5,bVar2);
    psVar5 = (string *)FUN_03c3edb4(DAT_06ad07a8,uVar7);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar5,bVar2);
    psVar5 = (string *)FUN_03c3edb4(DAT_06ad0400,uVar7);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar5,bVar2);
    psVar5 = (string *)FUN_03c3edb4(DAT_06ad0848,uVar7);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar5,bVar2);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

