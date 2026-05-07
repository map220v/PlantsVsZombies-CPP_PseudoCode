// Class: SurfboardAnimRig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SurfboardAnimRig::StaticClassInit() */

void SurfboardAnimRig::StaticClassInit(void)

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
    std::string::string(asStack_10,"SurfboardAnimRig");
    (*pcVar2)(plVar1,asStack_10,FUN_04645b3c,0x218,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SurfboardAnimRig::StaticGetClass() */

long * SurfboardAnimRig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SurfboardAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SurfboardAnimRig::GetClass() const */

long * SurfboardAnimRig::GetClass(void)

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
  (*pcVar3)(plVar1,"SurfboardAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SurfboardAnimRig::~SurfboardAnimRig() */

void __thiscall SurfboardAnimRig::~SurfboardAnimRig(SurfboardAnimRig *this)

{
  *(undefined ***)this = &PTR_GetClass_068857e0;
  *(undefined ***)(this + 0x10) = &PTR__SurfboardAnimRig_06885908;
  GravestoneAnimRig::~GravestoneAnimRig((GravestoneAnimRig *)this);
  return;
}


/* non-virtual thunk to SurfboardAnimRig::~SurfboardAnimRig() */

void __thiscall SurfboardAnimRig::~SurfboardAnimRig(SurfboardAnimRig *this)

{
  ~SurfboardAnimRig(this + -0x10);
  return;
}


/* SurfboardAnimRig::~SurfboardAnimRig() */

void __thiscall SurfboardAnimRig::~SurfboardAnimRig(SurfboardAnimRig *this)

{
  ~SurfboardAnimRig(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to SurfboardAnimRig::~SurfboardAnimRig() */

void __thiscall SurfboardAnimRig::~SurfboardAnimRig(SurfboardAnimRig *this)

{
  ~SurfboardAnimRig(this + -0x10);
  return;
}


/* SurfboardAnimRig::SurfboardAnimRig() */

void __thiscall SurfboardAnimRig::SurfboardAnimRig(SurfboardAnimRig *this)

{
  GravestoneAnimRig::GravestoneAnimRig((GravestoneAnimRig *)this);
  *(undefined4 *)(this + 0x210) = 0xffffffff;
  this[0x214] = (SurfboardAnimRig)0x0;
  *(undefined ***)this = &PTR_GetClass_068857e0;
  *(undefined ***)(this + 0x10) = &PTR__SurfboardAnimRig_06885908;
  return;
}


/* SurfboardAnimRig::StaticNew() */

SurfboardAnimRig * SurfboardAnimRig::StaticNew(void)

{
  SurfboardAnimRig *this;
  
  this = ::operator_new(0x218);
  SurfboardAnimRig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SurfboardAnimRig::PlayStationary() */

void __thiscall SurfboardAnimRig::PlayStationary(SurfboardAnimRig *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  this[0x214] = (SurfboardAnimRig)0x1;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"animation2");
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
/* SurfboardAnimRig::SetDamageState(int, bool) */

void __thiscall SurfboardAnimRig::SetDamageState(SurfboardAnimRig *this,int param_1,bool param_2)

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
  uVar7 = DAT_06b1c4a0 & 1;
  if (((DAT_06b1c4a0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06b1c4a0), iVar3 != 0)) {
    std::string::string((string *)&DAT_06b1c448,"surf_board1_damage1");
    nop();
    std::string::string((string *)&DAT_06b1c450,"surf_board1_damage2");
    nop();
    std::string::string((string *)&DAT_06b1c458,"surf_board1_damage3");
    nop();
    std::string::string((string *)&DAT_06b1c460,"surf_board1_damage4");
    nop();
    std::string::string((string *)&DAT_06b1c468,"surf_board1_damage5");
    nop();
    __cxa_guard_release(&DAT_06b1c4a0);
    __cxa_atexit(FUN_04644774,uVar7,&DAT_06a88000);
  }
  if (((DAT_06b1c530 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06b1c530), iVar3 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1c5a0,(string *)&DAT_06b1c448,(allocator *)&DAT_06b1c470);
    __cxa_guard_release(&DAT_06b1c530);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1c5a0,
                 &DAT_06a88000);
  }
  uVar7 = DAT_06b1c6d8 & 1;
  if (((DAT_06b1c6d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06b1c6d8), iVar3 != 0)) {
    std::string::string((string *)&DAT_06b1c508,"surf_board2_damage1");
    nop();
    std::string::string((string *)&DAT_06b1c510,"surf_board2_damage2");
    nop();
    std::string::string((string *)&DAT_06b1c518,"surf_board2_damage3");
    nop();
    std::string::string((string *)&DAT_06b1c520,"surf_board2_damage4");
    nop();
    std::string::string((string *)&DAT_06b1c528,"surf_board2_damage5");
    nop();
    __cxa_guard_release(&DAT_06b1c6d8);
    __cxa_atexit(FUN_0464473c,uVar7,&DAT_06a88000);
  }
  if (((DAT_06b1c538 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06b1c538), iVar3 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1c670,(string *)&DAT_06b1c508,(allocator *)&DAT_06b1c530);
    __cxa_guard_release(&DAT_06b1c538);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1c670,
                 &DAT_06a88000);
  }
  local_14[0] = param_1 + -1;
  local_14[1] = 0;
  piVar4 = eastl::max_alt<int>(local_14,local_14 + 1);
  iVar3 = *piVar4;
  for (uVar7 = 0; uVar2 = DAT_06b1c5a0, uVar6 = FUN_04644a54(DAT_06b1c5a0,DAT_06b1c5a8),
      uVar7 < uVar6; uVar7 = uVar7 + 1) {
    bVar1 = (bool)(iVar3 == (int)uVar7 | (byte)this[0x214] ^ 1);
    psVar5 = (string *)FUN_04644a60(uVar2,uVar7);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar5,bVar1);
    psVar5 = (string *)FUN_04644a60(DAT_06b1c670,uVar7);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar5,bVar1);
  }
  if (this[0x214] == (SurfboardAnimRig)0x0) {
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

