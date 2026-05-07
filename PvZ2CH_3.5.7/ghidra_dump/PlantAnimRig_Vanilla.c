// Class: PlantAnimRig_Vanilla


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Vanilla::getPlantFoodMainAnimName() */

void PlantAnimRig_Vanilla::getPlantFoodMainAnimName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 0x228) % 2 == 1) {
    __s = "plantfood";
  }
  else {
    __s = "plantfood2";
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
/* PlantAnimRig_Vanilla::getCyclingAnimName() */

void PlantAnimRig_Vanilla::getCyclingAnimName(void)

{
  int iVar1;
  PopAnimRig *in_x0;
  size_t __n;
  string *in_x8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0();
  std::string::string(asStack_10,"_sarcophagus_beam_down_circles_green");
  __n = 1;
  PopAnimRig::SetLayerVisibility(in_x0,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  iVar1 = FUN_03964634(*(undefined4 *)(in_x0 + 0x21c));
  if (((iVar1 == 1) || (iVar1 == 2)) || (iVar1 != 0)) {
    std::string::append(in_x8,"idle1",__n);
  }
  else {
    std::string::append(in_x8,"idle",__n);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Vanilla::StaticClassInit() */

void PlantAnimRig_Vanilla::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Vanilla");
    (*pcVar2)(plVar1,asStack_10,FUN_03968048,0x3c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Vanilla::StaticGetClass() */

long * PlantAnimRig_Vanilla::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Vanilla",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Vanilla::GetClass() const */

long * PlantAnimRig_Vanilla::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Vanilla",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Vanilla::~PlantAnimRig_Vanilla() */

void __thiscall PlantAnimRig_Vanilla::~PlantAnimRig_Vanilla(PlantAnimRig_Vanilla *this)

{
  *(undefined ***)this = &PTR_GetClass_066d5360;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Vanilla_066d55c8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x3b8));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Vanilla::~PlantAnimRig_Vanilla() */

void __thiscall PlantAnimRig_Vanilla::~PlantAnimRig_Vanilla(PlantAnimRig_Vanilla *this)

{
  ~PlantAnimRig_Vanilla(this + -0x10);
  return;
}


/* PlantAnimRig_Vanilla::~PlantAnimRig_Vanilla() */

void __thiscall PlantAnimRig_Vanilla::~PlantAnimRig_Vanilla(PlantAnimRig_Vanilla *this)

{
  ~PlantAnimRig_Vanilla(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Vanilla::~PlantAnimRig_Vanilla() */

void __thiscall PlantAnimRig_Vanilla::~PlantAnimRig_Vanilla(PlantAnimRig_Vanilla *this)

{
  ~PlantAnimRig_Vanilla(this + -0x10);
  return;
}


/* PlantAnimRig_Vanilla::PlantAnimRig_Vanilla() */

void __thiscall PlantAnimRig_Vanilla::PlantAnimRig_Vanilla(PlantAnimRig_Vanilla *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_066d5360;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Vanilla_066d55c8;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x3b8));
  this[0x3c0] = (PlantAnimRig_Vanilla)0x0;
  return;
}


/* PlantAnimRig_Vanilla::StaticNew() */

PlantAnimRig_Vanilla * PlantAnimRig_Vanilla::StaticNew(void)

{
  PlantAnimRig_Vanilla *this;
  
  this = ::operator_new(0x3c8);
  PlantAnimRig_Vanilla(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Vanilla::PlayPreviewAnim(bool) */

void PlantAnimRig_Vanilla::PlayPreviewAnim(bool param_1)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantAnimRig_OlivePit::getPreviewAnimationName((PlantAnimRig_OlivePit *)(ulong)param_1);
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
/* PlantAnimRig_Vanilla::onPopAnimInitialized() */

void __thiscall PlantAnimRig_Vanilla::onPopAnimInitialized(PlantAnimRig_Vanilla *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantAnimRig::onPopAnimInitialized((PlantAnimRig *)this);
  std::string::string(asStack_10,"_sarcophagus_beam_down_circles_green");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Vanilla::onAnimStopped() */

void __thiscall PlantAnimRig_Vanilla::onAnimStopped(PlantAnimRig_Vanilla *this)

{
  bool bVar1;
  PlantAnimRig_Vanilla PVar2;
  int iVar3;
  PlantVanilla *this_00;
  PlantCaulipower *this_01;
  
  iVar3 = Effect_AngerFlame::GetFlameCol((Effect_AngerFlame *)this);
  if (iVar3 != 2) {
    if ((iVar3 == 0xc) && (iVar3 = FUN_03964634(*(undefined4 *)(this + 0x21c)), iVar3 == 0)) {
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x3b8));
      if (bVar1) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x3b8));
        nop();
        PVar2 = (PlantAnimRig_Vanilla)PlantVanilla::CheckLv5SkillTriggle(this_00);
        this[0x3c0] = PVar2;
      }
    }
    PlantAnimRig::onAnimStopped((PlantAnimRig *)this);
    return;
  }
  if (this[0x3c0] == (PlantAnimRig_Vanilla)0x0) {
    (**(code **)(*(long *)this + 0x180))(this);
    return;
  }
  this[0x3c0] = (PlantAnimRig_Vanilla)0x0;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x3b8));
  if (bVar1) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x3b8));
    nop();
    PlantCaulipower::ClearLv5SkillTriggle(this_01);
  }
  *(undefined4 *)(this + 0x21c) = 1;
  (**(code **)(*(long *)this + 0x180))(this);
  return;
}

