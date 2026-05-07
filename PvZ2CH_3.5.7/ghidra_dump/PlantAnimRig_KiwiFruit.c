// Class: PlantAnimRig_KiwiFruit


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_KiwiFruit::PlayPlantFoodStart(int, RtReflectionDelegate<Sexy::Delegate0>,
   RtReflectionDelegate<Sexy::Delegate0>, RtReflectionDelegate<Sexy::Delegate0>) */

void PlantAnimRig_KiwiFruit::PlayPlantFoodStart(PopAnimRig *param_1)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 0x208))(asStack_40);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop(param_1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  if (iVar1 != -1) {
    *(undefined4 *)(param_1 + 0x218) = 0xe;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* PlantAnimRig_KiwiFruit::~PlantAnimRig_KiwiFruit() */

void __thiscall PlantAnimRig_KiwiFruit::~PlantAnimRig_KiwiFruit(PlantAnimRig_KiwiFruit *this)

{
  *(undefined ***)this = &PTR_GetClass_067dfdc0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_KiwiFruit_067e0028;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_KiwiFruit::~PlantAnimRig_KiwiFruit() */

void __thiscall PlantAnimRig_KiwiFruit::~PlantAnimRig_KiwiFruit(PlantAnimRig_KiwiFruit *this)

{
  ~PlantAnimRig_KiwiFruit(this + -0x10);
  return;
}


/* PlantAnimRig_KiwiFruit::~PlantAnimRig_KiwiFruit() */

void __thiscall PlantAnimRig_KiwiFruit::~PlantAnimRig_KiwiFruit(PlantAnimRig_KiwiFruit *this)

{
  ~PlantAnimRig_KiwiFruit(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_KiwiFruit::~PlantAnimRig_KiwiFruit() */

void __thiscall PlantAnimRig_KiwiFruit::~PlantAnimRig_KiwiFruit(PlantAnimRig_KiwiFruit *this)

{
  ~PlantAnimRig_KiwiFruit(this + -0x10);
  return;
}


/* PlantAnimRig_KiwiFruit::StaticGetClass() */

long * PlantAnimRig_KiwiFruit::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_KiwiFruit",uVar2,StaticNew);
  return sClass;
}


/* PlantAnimRig_KiwiFruit::GetClass() const */

long * PlantAnimRig_KiwiFruit::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_KiwiFruit",uVar2,StaticNew);
  return sClass;
}


/* PlantAnimRig_KiwiFruit::PlantAnimRig_KiwiFruit() */

void __thiscall PlantAnimRig_KiwiFruit::PlantAnimRig_KiwiFruit(PlantAnimRig_KiwiFruit *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067dfdc0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_KiwiFruit_067e0028;
  return;
}


/* PlantAnimRig_KiwiFruit::StaticNew() */

PlantAnimRig_KiwiFruit * PlantAnimRig_KiwiFruit::StaticNew(void)

{
  PlantAnimRig_KiwiFruit *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_KiwiFruit(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_KiwiFruit::PlayIdleLooped() */

void __thiscall PlantAnimRig_KiwiFruit::PlayIdleLooped(PlantAnimRig_KiwiFruit *this)

{
  int iVar1;
  long lVar2;
  size_t in_x2;
  string asStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = ProbabilitySet<std::string>::GetSize((ProbabilitySet<std::string> *)&DAT_06aecee0);
  if (lVar2 == 0) {
    iVar1 = 1;
    Set8BytesTo0(asStack_48);
    lVar2 = 0;
    do {
      std::string::append(asStack_48,"idle",in_x2);
      FUN_05475d88(asStack_40,asStack_48);
      in_x2 = 10;
      ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)&DAT_06aecee0,asStack_40);
      std::string::~string(asStack_40);
      std::string::~string(asStack_48);
      while( true ) {
        lVar2 = lVar2 + 1;
        iVar1 = iVar1 + 1;
        Set8BytesTo0(asStack_48);
        if (lVar2 == 0) break;
        Sexy::StrFormat("idle0%d",asStack_40,2);
        FUN_05474278(asStack_48,asStack_40);
        std::string::~string(asStack_40);
        FUN_05475d88(asStack_40,asStack_48);
        in_x2 = (size_t)(uint)(&DAT_057530a0)[lVar2];
        ProbabilitySet<std::string>::AddItem
                  ((ProbabilitySet<std::string> *)&DAT_06aecee0,asStack_40);
        std::string::~string(asStack_40);
        std::string::~string(asStack_48);
        if (iVar1 == 2) goto LAB_040f1628;
      }
    } while( true );
  }
LAB_040f1628:
  ProbabilitySet<std::string>::PickItem();
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 1;
  }
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}

