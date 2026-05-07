// Class: PlantAnimRig_EscapeRoot


/* PlantAnimRig_EscapeRoot::PlayPreviewAnim(bool) */

void PlantAnimRig_EscapeRoot::PlayPreviewAnim(bool param_1)

{
  *(undefined1 *)((long *)(ulong)param_1 + 0x77) = 0;
  (**(code **)(*(long *)(ulong)param_1 + 0x118))();
  return;
}


/* PlantAnimRig_EscapeRoot::onInitialPlantDone(std::string const&) */

void PlantAnimRig_EscapeRoot::onInitialPlantDone(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x118))();
  return;
}


/* PlantAnimRig_EscapeRoot::onSelectedDone(std::string const&) */

void PlantAnimRig_EscapeRoot::onSelectedDone(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x118))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_EscapeRoot::getPlantFoodOnAnimName() */

void PlantAnimRig_EscapeRoot::getPlantFoodOnAnimName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x3b8) == '\0') {
    __s = "pf_burrow";
  }
  else {
    __s = "plant_active_burrow";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_EscapeRoot::PlantAnimRig_EscapeRoot() */

void __thiscall PlantAnimRig_EscapeRoot::PlantAnimRig_EscapeRoot(PlantAnimRig_EscapeRoot *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067fe390;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_EscapeRoot_067fe5f8;
  AnimRigLayerSet::AnimRigLayerSet((AnimRigLayerSet *)(this + 0x3c0));
  return;
}


/* PlantAnimRig_EscapeRoot::StaticNew() */

PlantAnimRig_EscapeRoot * PlantAnimRig_EscapeRoot::StaticNew(void)

{
  PlantAnimRig_EscapeRoot *this;
  
  this = ::operator_new(0x408);
  PlantAnimRig_EscapeRoot(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_EscapeRoot::StaticClassInit() */

void PlantAnimRig_EscapeRoot::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_EscapeRoot");
    (*pcVar2)(plVar1,asStack_10,FUN_041a2e74,0x408,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_EscapeRoot::StaticGetClass() */

long * PlantAnimRig_EscapeRoot::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_EscapeRoot",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_EscapeRoot::GetClass() const */

long * PlantAnimRig_EscapeRoot::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_EscapeRoot",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_EscapeRoot::PlayEmergeFromGround(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_EscapeRoot::PlayEmergeFromGround
          (PlantAnimRig_EscapeRoot *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"recover");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,0xf);
    this[0x3b8] = (PlantAnimRig_EscapeRoot)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_EscapeRoot::RevealPlant(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
PlantAnimRig_EscapeRoot::RevealPlant(PlantAnimRig_EscapeRoot *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"unwrap_quick");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_EscapeRoot::PlayBurrow(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
PlantAnimRig_EscapeRoot::PlayBurrow(PlantAnimRig_EscapeRoot *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  char *__s;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x3b8] == (PlantAnimRig_EscapeRoot)0x0) {
    __s = "burrow";
  }
  else {
    __s = "plant_active_burrow";
  }
  std::string::string(asStack_58,__s);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_EscapeRoot::showCorrectPlant() */

void __thiscall PlantAnimRig_EscapeRoot::showCorrectPlant(PlantAnimRig_EscapeRoot *this)

{
  string *__n;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n = asStack_10;
  std::string::string(asStack_18,"");
  nop();
  switch(*(undefined4 *)(this + 0x3bc)) {
  case 0:
    std::string::append(asStack_18,"potatomine",(size_t)__n);
    break;
  case 1:
    std::string::append(asStack_18,"primalpotatomine",(size_t)__n);
    break;
  case 2:
    std::string::append(asStack_18,"cherrybomb",(size_t)__n);
    break;
  case 3:
    std::string::append(asStack_18,"grapeshot",(size_t)__n);
  }
  FUN_05475d88(asStack_10,asStack_18);
  PlantAnimRig_DragonBruit::ShowBoostedLayerSet(this,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_EscapeRoot::PFRevealPlant(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
PlantAnimRig_EscapeRoot::PFRevealPlant(PlantAnimRig_EscapeRoot *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  showCorrectPlant(this);
  std::string::string(asStack_58,"unwrap");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_EscapeRoot::PlayAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void PlantAnimRig_EscapeRoot::PlayAttack(PlantAnimRig_EscapeRoot *param_1)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  showCorrectPlant(param_1);
  std::string::string(asStack_40,"unwrap");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)param_1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)param_1,0xe);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_EscapeRoot::PlayIdleLooped() */

void __thiscall PlantAnimRig_EscapeRoot::PlayIdleLooped(PlantAnimRig_EscapeRoot *this)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  DummyInit *local_58;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x3b8] == (PlantAnimRig_EscapeRoot)0x0) {
    if (this[0x3b9] == (PlantAnimRig_EscapeRoot)0x0) {
      pcVar2 = "idle_above";
    }
    else {
      pcVar2 = "active_loop";
    }
    std::string::string(asStack_40,pcVar2);
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    uVar3 = 2;
  }
  else {
    if (this[0x3b9] == (PlantAnimRig_EscapeRoot)0x0) {
      pcVar2 = "plant_idle";
    }
    else {
      pcVar2 = "plant_active_loop";
    }
    std::string::string(asStack_40,pcVar2);
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    uVar3 = 0;
  }
  local_58 = aDStack_38;
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,uVar3,local_58);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_EscapeRoot::PlayBurrowIdleLooped() */

void __thiscall PlantAnimRig_EscapeRoot::PlayBurrowIdleLooped(PlantAnimRig_EscapeRoot *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"burrow_idle");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_EscapeRoot::PlayInitialFrame() */

void __thiscall PlantAnimRig_EscapeRoot::PlayInitialFrame(PlantAnimRig_EscapeRoot *this)

{
  int iVar1;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_68,"plant");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_58,"onInitialPlantDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_68,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_68);
  nop();
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_EscapeRoot::PlaySelected() */

void __thiscall PlantAnimRig_EscapeRoot::PlaySelected(PlantAnimRig_EscapeRoot *this)

{
  int iVar1;
  char *__s;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x3b8] == (PlantAnimRig_EscapeRoot)0x0) {
    __s = "active_start";
  }
  else {
    __s = "plant_active_start";
  }
  std::string::string(asStack_68,__s);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_58,"onSelectedDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_68,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_68);
  nop();
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
    FUN_041a06d4(this + 0x3b9,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* PlantAnimRig_EscapeRoot::~PlantAnimRig_EscapeRoot() */

void __thiscall PlantAnimRig_EscapeRoot::~PlantAnimRig_EscapeRoot(PlantAnimRig_EscapeRoot *this)

{
  *(undefined ***)this = &PTR_GetClass_067fe390;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_EscapeRoot_067fe5f8;
  AnimRigLayerSet::~AnimRigLayerSet((AnimRigLayerSet *)(this + 0x3c0));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_EscapeRoot::~PlantAnimRig_EscapeRoot() */

void __thiscall PlantAnimRig_EscapeRoot::~PlantAnimRig_EscapeRoot(PlantAnimRig_EscapeRoot *this)

{
  ~PlantAnimRig_EscapeRoot(this + -0x10);
  return;
}


/* PlantAnimRig_EscapeRoot::~PlantAnimRig_EscapeRoot() */

void __thiscall PlantAnimRig_EscapeRoot::~PlantAnimRig_EscapeRoot(PlantAnimRig_EscapeRoot *this)

{
  ~PlantAnimRig_EscapeRoot(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_EscapeRoot::~PlantAnimRig_EscapeRoot() */

void __thiscall PlantAnimRig_EscapeRoot::~PlantAnimRig_EscapeRoot(PlantAnimRig_EscapeRoot *this)

{
  ~PlantAnimRig_EscapeRoot(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_EscapeRoot::onPopAnimInitialized() */

void __thiscall PlantAnimRig_EscapeRoot::onPopAnimInitialized(PlantAnimRig_EscapeRoot *this)

{
  string *psVar1;
  string *psVar2;
  undefined1 auStack_1a0 [8];
  string asStack_198 [8];
  vector<std::string,std::allocator<std::string>> avStack_190 [16];
  string asStack_180 [8];
  string asStack_178 [8];
  string asStack_170 [8];
  string asStack_168 [8];
  string asStack_160 [8];
  string asStack_158 [8];
  string asStack_150 [8];
  string asStack_148 [8];
  string asStack_140 [8];
  string asStack_138 [8];
  string asStack_130 [8];
  string asStack_128 [8];
  string asStack_120 [8];
  string asStack_118 [8];
  string asStack_110 [8];
  string asStack_108 [8];
  string asStack_100 [8];
  string asStack_f8 [8];
  string asStack_f0 [8];
  string asStack_e8 [8];
  string asStack_e0 [8];
  string asStack_d8 [8];
  string asStack_d0 [8];
  string asStack_c8 [8];
  string asStack_c0 [8];
  string asStack_b8 [8];
  string asStack_b0 [8];
  string asStack_a8 [8];
  string asStack_a0 [8];
  string asStack_98 [8];
  string asStack_90 [8];
  string asStack_88 [8];
  string asStack_80 [8];
  string asStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x3b8] = (PlantAnimRig_EscapeRoot)0x1;
  this[0x3b9] = (PlantAnimRig_EscapeRoot)0x0;
  *(undefined4 *)(this + 0x3bc) = 0;
  PlantAnimRig::onPopAnimInitialized((PlantAnimRig *)this);
  std::string::string(asStack_198,"potatomine");
  psVar1 = asStack_f8;
  std::string::string(asStack_178,"potatomine_stem");
  std::string::string(asStack_170,"potatomine_rock_03");
  std::string::string(asStack_168,"potatomine_rock_02");
  std::string::string(asStack_160,"potatomine_rock_01");
  std::string::string(asStack_158,"potatomine_mouth");
  std::string::string(asStack_150,"potatomine_eye");
  std::string::string(asStack_148,"potatomine_dirt_right");
  std::string::string(asStack_140,"potatomine_dirt_left");
  std::string::string(asStack_138,"potatomine_dirt_front");
  std::string::string(asStack_130,"potatomine_dirt_back");
  std::string::string(asStack_128,"potatomine_bulb_lit");
  std::string::string(asStack_120,"potatomine_bulb");
  std::string::string(asStack_118,"potatomine_base");
  std::string::string(asStack_110,"_potatomine_attack");
  std::string::string(asStack_108,"_potatomine_antenna_idle");
  std::string::string(asStack_100,"_potatomine_antenna_attack");
  std::vector<std::string,std::allocator<std::string>>::vector
            (avStack_190,asStack_178,0x10,auStack_1a0);
  PlantAnimRig_DragonBruit::AddBoostedLayerSet
            ((PlantAnimRig_DragonBruit *)this,asStack_198,avStack_190);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_190);
  do {
    psVar1 = psVar1 + -8;
    std::string::~string(psVar1);
  } while (psVar1 != asStack_178);
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  std::string::~string(asStack_198);
  nop();
  std::string::string(asStack_198,"primalpotatomine");
  std::string::string(asStack_178,"prpotato_spike4_light");
  std::string::string(asStack_170,"prpotato_spike4");
  std::string::string(asStack_168,"prpotato_spike3_light");
  std::string::string(asStack_160,"prpotato_spike3");
  std::string::string(asStack_158,"prpotato_spike2_light");
  std::string::string(asStack_150,"prpotato_spike2");
  std::string::string(asStack_148,"prpotato_spike1_light");
  std::string::string(asStack_140,"prpotato_spike1");
  std::string::string(asStack_138,"prpotato_mouth");
  std::string::string(asStack_130,"prpotato_eyer");
  std::string::string(asStack_128,"prpotato_eyel");
  std::string::string(asStack_120,"prpotato_body");
  std::string::string(asStack_118,"prpotato_attack");
  std::string::string(asStack_110,"potatomine_dirt_right2");
  std::string::string(asStack_108,"potatomine_dirt_left2");
  std::string::string(asStack_100,"potatomine_dirt_front2");
  std::string::string(asStack_f8,"potatomine_dirt_back2");
  std::vector<std::string,std::allocator<std::string>>::vector
            (avStack_190,asStack_178,0x11,auStack_1a0);
  PlantAnimRig_DragonBruit::AddBoostedLayerSet
            ((PlantAnimRig_DragonBruit *)this,asStack_198,avStack_190);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_190);
  psVar1 = asStack_f8;
  do {
    psVar2 = psVar1 + -8;
    std::string::~string(psVar1);
    psVar1 = psVar2;
  } while (psVar2 != asStack_180);
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  std::string::~string(asStack_198);
  nop();
  std::string::string(asStack_198,"cherrybomb");
  std::string::string(asStack_178,"mc_cherrybomb_stem");
  std::string::string(asStack_170,"mc_cherrybomb_spark");
  std::string::string(asStack_168,"mc_cherrybomb_pupil");
  std::string::string(asStack_160,"mc_cherrybomb_mouth_04");
  std::string::string(asStack_158,"mc_cherrybomb_mouth_03");
  std::string::string(asStack_150,"mc_cherrybomb_mouth_02");
  std::string::string(asStack_148,"mc_cherrybomb_mouth_01");
  std::string::string(asStack_140,"mc_cherrybomb_leaf");
  std::string::string(asStack_138,"mc_cherrybomb_head_right");
  std::string::string(asStack_130,"mc_cherrybomb_head_left");
  std::string::string(asStack_128,"mc_cherrybomb_eye_wide");
  std::string::string(asStack_120,"mc_cherrybomb_eye_right");
  std::string::string(asStack_118,"mc_cherrybomb_eye_left");
  std::string::string(asStack_110,"mc_cherrybomb_brow_wide_03");
  std::string::string(asStack_108,"mc_cherrybomb_brow_wide_02");
  std::string::string(asStack_100,"mc_cherrybomb_brow_wide_01");
  std::string::string(asStack_f8,"mc_cherrybomb_brow_right");
  std::string::string(asStack_f0,"mc_cherrybomb_brow_left");
  std::string::string(asStack_e8,"_CherryBomb_attack");
  std::vector<std::string,std::allocator<std::string>>::vector
            (avStack_190,asStack_178,0x13,auStack_1a0);
  PlantAnimRig_DragonBruit::AddBoostedLayerSet
            ((PlantAnimRig_DragonBruit *)this,asStack_198,avStack_190);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_190);
  psVar1 = asStack_e8;
  do {
    psVar2 = psVar1 + -8;
    std::string::~string(psVar1);
    psVar1 = psVar2;
  } while (psVar2 != asStack_180);
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  std::string::~string(asStack_198);
  nop();
  std::string::string(asStack_198,"grapeshot");
  std::string::string(asStack_178,"grapeshotface7_white");
  std::string::string(asStack_170,"grapeshotface7");
  std::string::string(asStack_168,"grapeshotface_white");
  std::string::string(asStack_160,"grapeshotfac");
  std::string::string(asStack_158,"grapeshot_stem");
  std::string::string(asStack_150,"grapeshot_shine");
  std::string::string(asStack_148,"grapeshot_pupil2");
  std::string::string(asStack_140,"grapeshot_pupil");
  std::string::string(asStack_138,"grapeshot_mid_burst");
  std::string::string(asStack_130,"grapeshot_leaf");
  std::string::string(asStack_128,"grapeshot_graperight2_right");
  std::string::string(asStack_120,"grapeshot_graperight2_mouth");
  std::string::string(asStack_118,"grapeshot_graperight2_eyeleft");
  std::string::string(asStack_110,"grapeshot_graperight_mouth");
  std::string::string(asStack_108,"grapeshot_graperight_eye");
  std::string::string(asStack_100,"grapeshot_grapeleft2_mouth");
  std::string::string(asStack_f8,"grapeshot_grapeleft2_eyeleft");
  std::string::string(asStack_f0,"grapeshot_grapecenter_mouth");
  std::string::string(asStack_e8,"grapeshot_grapebottom_eyeright");
  std::string::string(asStack_e0,"grapeshot_face8_white");
  std::string::string(asStack_d8,"grapeshot_face8");
  std::string::string(asStack_d0,"grapeshot_face6_white");
  std::string::string(asStack_c8,"grapeshot_face6");
  std::string::string(asStack_c0,"grapeshot_face5_white");
  std::string::string(asStack_b8,"grapeshot_face5");
  std::string::string(asStack_b0,"grapeshot_face4_white");
  std::string::string(asStack_a8,"grapeshot_face4");
  std::string::string(asStack_a0,"grapeshot_centergrape_eyeright");
  std::string::string(asStack_98,"grapeshot_centergrape_eyeleft");
  std::string::string(asStack_90,"grapeshot_bodyshadow2");
  std::string::string(asStack_88,"grapeshot_bodyshadow1");
  std::string::string(asStack_80,"grapeshot_base");
  std::string::string(asStack_78,"grapeshot_backgrape");
  std::string::string(asStack_70,"grapeshot_attack");
  std::string::string(asStack_68,"grape2_eyeblink2");
  std::string::string(asStack_60,"grape2_body");
  std::string::string(asStack_58,"grape1_face");
  std::string::string(asStack_50,"grape1_explode");
  std::string::string(asStack_48,"grape_mouth1");
  std::string::string(asStack_40,"front blink");
  std::string::string(asStack_38,"eyelid4");
  std::string::string(asStack_30,"eyelid3");
  std::string::string(asStack_28,"eyelid2");
  std::string::string(asStack_20,"eyelid1");
  std::string::string(asStack_18,"eyeblink4");
  std::string::string(asStack_10,"eyeblink3");
  std::vector<std::string,std::allocator<std::string>>::vector
            (avStack_190,asStack_178,0x2e,auStack_1a0);
  PlantAnimRig_DragonBruit::AddBoostedLayerSet
            ((PlantAnimRig_DragonBruit *)this,asStack_198,avStack_190);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_190);
  psVar1 = asStack_10;
  do {
    psVar2 = psVar1 + -8;
    std::string::~string(psVar1);
    psVar1 = psVar2;
  } while (psVar2 != asStack_180);
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  std::string::~string(asStack_198);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

