// Class: PlantAnimRig_Citron


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Citron::PlayPreviewAnim(bool) */

void PlantAnimRig_Citron::PlayPreviewAnim(bool param_1)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"idle2");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)param_1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Citron::PlayInitialFrame() */

void __thiscall PlantAnimRig_Citron::PlayInitialFrame(PlantAnimRig_Citron *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"idle");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* PlantAnimRig_Citron::~PlantAnimRig_Citron() */

void __thiscall PlantAnimRig_Citron::~PlantAnimRig_Citron(PlantAnimRig_Citron *this)

{
  *(undefined ***)this = &PTR_GetClass_0679f890;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Citron_0679faf8;
  std::string::~string((string *)(this + 0x3b8));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Citron::~PlantAnimRig_Citron() */

void __thiscall PlantAnimRig_Citron::~PlantAnimRig_Citron(PlantAnimRig_Citron *this)

{
  ~PlantAnimRig_Citron(this + -0x10);
  return;
}


/* PlantAnimRig_Citron::~PlantAnimRig_Citron() */

void __thiscall PlantAnimRig_Citron::~PlantAnimRig_Citron(PlantAnimRig_Citron *this)

{
  ~PlantAnimRig_Citron(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Citron::~PlantAnimRig_Citron() */

void __thiscall PlantAnimRig_Citron::~PlantAnimRig_Citron(PlantAnimRig_Citron *this)

{
  ~PlantAnimRig_Citron(this + -0x10);
  return;
}


/* PlantAnimRig_Citron::PlantAnimRig_Citron() */

void __thiscall PlantAnimRig_Citron::PlantAnimRig_Citron(PlantAnimRig_Citron *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0679f890;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Citron_0679faf8;
  Set8BytesTo0(this + 0x3b8);
  return;
}


/* PlantAnimRig_Citron::StaticNew() */

PlantAnimRig_Citron * PlantAnimRig_Citron::StaticNew(void)

{
  PlantAnimRig_Citron *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_Citron(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Citron::StaticClassInit() */

void PlantAnimRig_Citron::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Citron");
    (*pcVar2)(plVar1,asStack_10,FUN_03f63274,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Citron::StaticGetClass() */

long * PlantAnimRig_Citron::StaticGetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_Citron",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Citron::GetClass() const */

long * PlantAnimRig_Citron::GetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_Citron",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Citron::PlayRecovery() */

void __thiscall PlantAnimRig_Citron::PlayRecovery(PlantAnimRig_Citron *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"recovery");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Citron::PlayCharging() */

void __thiscall PlantAnimRig_Citron::PlayCharging(PlantAnimRig_Citron *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"charge");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Citron::PlayIdleLooped() */

void __thiscall PlantAnimRig_Citron::PlayIdleLooped(PlantAnimRig_Citron *this)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = ProbabilitySet<std::string>::GetSize((ProbabilitySet<std::string> *)&DAT_06ae4360);
  if (lVar3 == 0) {
    std::string::string(asStack_40,"idle");
    ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)&DAT_06ae4360,asStack_40,10)
    ;
    std::string::~string(asStack_40);
    nop();
    iVar2 = *(int *)(this + 0x218);
  }
  else {
    iVar2 = *(int *)(this + 0x218);
  }
  bVar1 = true;
  if (iVar2 == 1) {
    ProbabilitySet<std::string>::PickItem();
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    iVar2 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
    bVar1 = iVar2 != -1;
    if (bVar1) {
      thunk_FUN_05475e00(this + 0x3b8,asStack_40);
      *(undefined4 *)(this + 0x218) = 1;
    }
    std::string::~string(asStack_40);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar1);
  }
  return;
}

