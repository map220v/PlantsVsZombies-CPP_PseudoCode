// Class: PlantAnimRig_Caulipower


/* PlantAnimRig_Caulipower::setPlantFoodPlayCount(int) */

void __thiscall
PlantAnimRig_Caulipower::setPlantFoodPlayCount(PlantAnimRig_Caulipower *this,int param_1)

{
  *(int *)(this + 0x228) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Caulipower::playPlantFoodOn() */

void __thiscall PlantAnimRig_Caulipower::playPlantFoodOn(PlantAnimRig_Caulipower *this)

{
  PlantAnimRig_Caulipower PVar1;
  string asStack_10 [8];
  long local_8;
  
  PVar1 = this[0x220];
  local_8 = ___stack_chk_guard;
  if (PVar1 != (PlantAnimRig_Caulipower)0x0) {
    std::string::string(asStack_10,"fx001");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,true);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"fx002");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,true);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"fx003");
  }
  else {
    std::string::string(asStack_10,"fx001");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"fx002");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"fx003");
  }
  PopAnimRig::SetLayerVisibility
            ((PopAnimRig *)this,asStack_10,PVar1 != (PlantAnimRig_Caulipower)0x0);
  std::string::~string(asStack_10);
  nop();
  PlantAnimRig::playPlantFoodOn((PlantAnimRig *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Caulipower::getPlantFoodMainAnimName() */

void PlantAnimRig_Caulipower::getPlantFoodMainAnimName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 0x228) % 2 == 1) {
    __s = "plantfood_loop2";
  }
  else {
    __s = "plantfood_loop";
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
/* PlantAnimRig_Caulipower::getCyclingAnimName() */

void PlantAnimRig_Caulipower::getCyclingAnimName(void)

{
  PopAnimRig PVar1;
  bool bVar2;
  int iVar3;
  PopAnimRig *in_x0;
  size_t __n;
  string *in_x8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0();
  PVar1 = in_x0[0x3c0];
  if (PVar1 == (PopAnimRig)0x0) {
    std::string::string(asStack_10,"_sarcophagus_beam_down_circles_green");
  }
  else {
    std::string::string(asStack_10,"_sarcophagus_beam_down_circles_green");
  }
  bVar2 = PVar1 != (PopAnimRig)0x0;
  __n = (size_t)bVar2;
  PopAnimRig::SetLayerVisibility(in_x0,asStack_10,bVar2);
  std::string::~string(asStack_10);
  nop();
  iVar3 = FUN_03bcce94(*(undefined4 *)(in_x0 + 0x21c));
  if (iVar3 == 1) {
    std::string::append(in_x8,"idle2_1",__n);
  }
  else if (iVar3 == 2) {
    std::string::append(in_x8,"idle3_1",__n);
  }
  else if (iVar3 == 0) {
    std::string::append(in_x8,"idle1_1",__n);
  }
  else {
    std::string::append(in_x8,"idle4_1",__n);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Caulipower::StaticClassInit() */

void PlantAnimRig_Caulipower::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Caulipower");
    (*pcVar2)(plVar1,asStack_10,FUN_03bceefc,0x3c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Caulipower::StaticGetClass() */

long * PlantAnimRig_Caulipower::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Caulipower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Caulipower::GetClass() const */

long * PlantAnimRig_Caulipower::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Caulipower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Caulipower::getPreviewAnimName() */

void __thiscall PlantAnimRig_Caulipower::getPreviewAnimName(PlantAnimRig_Caulipower *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"idle4_1");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_Caulipower::~PlantAnimRig_Caulipower() */

void __thiscall PlantAnimRig_Caulipower::~PlantAnimRig_Caulipower(PlantAnimRig_Caulipower *this)

{
  *(undefined ***)this = &PTR_GetClass_0673b770;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Caulipower_0673b9d8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x3b8));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Caulipower::~PlantAnimRig_Caulipower() */

void __thiscall PlantAnimRig_Caulipower::~PlantAnimRig_Caulipower(PlantAnimRig_Caulipower *this)

{
  ~PlantAnimRig_Caulipower(this + -0x10);
  return;
}


/* PlantAnimRig_Caulipower::~PlantAnimRig_Caulipower() */

void __thiscall PlantAnimRig_Caulipower::~PlantAnimRig_Caulipower(PlantAnimRig_Caulipower *this)

{
  ~PlantAnimRig_Caulipower(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Caulipower::~PlantAnimRig_Caulipower() */

void __thiscall PlantAnimRig_Caulipower::~PlantAnimRig_Caulipower(PlantAnimRig_Caulipower *this)

{
  ~PlantAnimRig_Caulipower(this + -0x10);
  return;
}


/* PlantAnimRig_Caulipower::PlantAnimRig_Caulipower() */

void __thiscall PlantAnimRig_Caulipower::PlantAnimRig_Caulipower(PlantAnimRig_Caulipower *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0673b770;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Caulipower_0673b9d8;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x3b8));
  this[0x3c0] = (PlantAnimRig_Caulipower)0x0;
  return;
}


/* PlantAnimRig_Caulipower::StaticNew() */

PlantAnimRig_Caulipower * PlantAnimRig_Caulipower::StaticNew(void)

{
  PlantAnimRig_Caulipower *this;
  
  this = ::operator_new(0x3c8);
  PlantAnimRig_Caulipower(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Caulipower::PlayPreviewAnim(bool) */

void PlantAnimRig_Caulipower::PlayPreviewAnim(bool param_1)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  getPreviewAnimName((PlantAnimRig_Caulipower *)(ulong)param_1);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)(ulong)param_1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != 0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Caulipower::onPopAnimInitialized() */

void __thiscall PlantAnimRig_Caulipower::onPopAnimInitialized(PlantAnimRig_Caulipower *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantAnimRig::onPopAnimInitialized((PlantAnimRig *)this);
  std::string::string(asStack_10,"_sarcophagus_beam_down_circles_green");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Caulipower::onAnimStopped() */

void __thiscall PlantAnimRig_Caulipower::onAnimStopped(PlantAnimRig_Caulipower *this)

{
  bool bVar1;
  PlantAnimRig_Caulipower PVar2;
  undefined4 uVar3;
  int iVar4;
  PlantCaulipower *this_00;
  PlantCaulipower *this_01;
  PlantCaulipower *this_02;
  
  uVar3 = Effect_AngerFlame::GetFlameCol((Effect_AngerFlame *)this);
  switch(uVar3) {
  case 2:
    if (this[0x3c0] != (PlantAnimRig_Caulipower)0x0) {
      this[0x3c0] = (PlantAnimRig_Caulipower)0x0;
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x3b8));
      if (bVar1) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x3b8));
        nop();
        PlantCaulipower::ClearLv5SkillTriggle(this_02);
      }
      *(undefined4 *)(this + 0x21c) = 1;
    }
    (**(code **)(*(long *)this + 0x180))(this);
    return;
  case 3:
  case 4:
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x3b8));
    if (bVar1) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x3b8));
      nop();
      PlantCaulipower::DoPlantfoodAttack(this_01);
    }
    break;
  case 0xc:
    iVar4 = FUN_03bcce94(*(undefined4 *)(this + 0x21c));
    if (iVar4 == 0) {
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x3b8));
      if (bVar1) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x3b8));
        nop();
        PVar2 = (PlantAnimRig_Caulipower)PlantCaulipower::CheckLv5SkillTriggle(this_00);
        this[0x3c0] = PVar2;
      }
    }
  }
  PlantAnimRig::onAnimStopped((PlantAnimRig *)this);
  return;
}

