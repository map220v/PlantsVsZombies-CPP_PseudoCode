// Class: PlantAnimRig_DragonBruit


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_DragonBruit::ShowBoostedLayerSet(std::string) */

void PlantAnimRig_DragonBruit::ShowBoostedLayerSet(long param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10);
  AnimRigLayerSet::ShowSet((AnimRigLayerSet *)(param_1 + 0x3c0),param_1,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_DragonBruit::AddBoostedLayerSet(std::string, std::vector<std::string,
   std::allocator<std::string > >) */

void __thiscall
PlantAnimRig_DragonBruit::AddBoostedLayerSet
          (PlantAnimRig_DragonBruit *this,undefined8 param_2,vector *param_3)

{
  string asStack_28 [8];
  vector<std::string,std::allocator<std::string>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_28);
  std::vector<std::string,std::allocator<std::string>>::vector(avStack_20,param_3);
  AnimRigLayerSet::AddSet((AnimRigLayerSet *)(this + 0x3c0),asStack_28,avStack_20);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_20);
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_DragonBruit::getPlantFoodOffAnimName() */

void __thiscall PlantAnimRig_DragonBruit::getPlantFoodOffAnimName(PlantAnimRig_DragonBruit *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"pf_end");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_DragonBruit::getPlantFoodMainAnimName() */

void __thiscall PlantAnimRig_DragonBruit::getPlantFoodMainAnimName(PlantAnimRig_DragonBruit *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"pf_loop");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_DragonBruit::getPlantFoodOnAnimName() */

void __thiscall PlantAnimRig_DragonBruit::getPlantFoodOnAnimName(PlantAnimRig_DragonBruit *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"pf_start");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_DragonBruit::StaticClassInit() */

void PlantAnimRig_DragonBruit::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_DragonBruit");
    (*pcVar2)(plVar1,asStack_10,FUN_04d78ff8,0x448,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_DragonBruit::StaticGetClass() */

long * PlantAnimRig_DragonBruit::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_DragonBruit",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_DragonBruit::GetClass() const */

long * PlantAnimRig_DragonBruit::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_DragonBruit",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_DragonBruit::PlayZenGardenIdleAnim() */

void __thiscall PlantAnimRig_DragonBruit::PlayZenGardenIdleAnim(PlantAnimRig_DragonBruit *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10,&PlantDragonBruit::k_boostedOffLayerSetName);
  ShowBoostedLayerSet(this,asStack_10);
  std::string::~string(asStack_10);
  PlantAnimRig::PlayZenGardenIdleAnim((PlantAnimRig *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_DragonBruit::PlayDeathAnim(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
PlantAnimRig_DragonBruit::PlayDeathAnim
          (PlantAnimRig_DragonBruit *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,&DAT_06b97cf8,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
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
/* PlantAnimRig_DragonBruit::PlayAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void PlantAnimRig_DragonBruit::PlayAttack(PopAnimRig *param_1)

{
  int iVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  iVar1 = PopAnimRig::PlayAndStop(param_1,&DAT_06b97c88,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)param_1,2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* PlantAnimRig_DragonBruit::PlantAnimRig_DragonBruit() */

void __thiscall PlantAnimRig_DragonBruit::PlantAnimRig_DragonBruit(PlantAnimRig_DragonBruit *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_069b74d0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_DragonBruit_069b7738;
  Set8BytesTo0(this + 0x3b8);
  AnimRigLayerSet::AnimRigLayerSet((AnimRigLayerSet *)(this + 0x3c0));
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet
            ((ProbabilitySet<ZombossRobotAirDropZombieInfo> *)(this + 0x408));
  this[0x43c] = (PlantAnimRig_DragonBruit)0x0;
  Set8BytesTo0(this + 0x440);
  return;
}


/* PlantAnimRig_DragonBruit::StaticNew() */

PlantAnimRig_DragonBruit * PlantAnimRig_DragonBruit::StaticNew(void)

{
  PlantAnimRig_DragonBruit *this;
  
  this = ::operator_new(0x448);
  PlantAnimRig_DragonBruit(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_DragonBruit::PlayIdleLooped() */

void __thiscall PlantAnimRig_DragonBruit::PlayIdleLooped(PlantAnimRig_DragonBruit *this)

{
  ProbabilitySet<std::string> *this_00;
  int iVar1;
  long lVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  this_00 = (ProbabilitySet<std::string> *)(this + 0x408);
  local_8 = ___stack_chk_guard;
  lVar2 = ProbabilitySet<std::string>::GetSize(this_00);
  if (lVar2 == 0) {
    FUN_05475d88(asStack_40,&DAT_06b97d28);
    ProbabilitySet<std::string>::AddItem(this_00,asStack_40,10);
    std::string::~string(asStack_40);
    FUN_05475d88(asStack_40,&DAT_06b97d00);
    ProbabilitySet<std::string>::AddItem(this_00,asStack_40,5);
    std::string::~string(asStack_40);
    FUN_05475d88(asStack_40,&DAT_06b97c80);
    ProbabilitySet<std::string>::AddItem(this_00,asStack_40,0x14);
    std::string::~string(asStack_40);
  }
  ProbabilitySet<std::string>::PickItemIgnoring((string *)this_00);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  if (iVar1 != -1) {
    thunk_FUN_05475e00(this + 0x3b8,asStack_40);
    PlantAnimRig::SetState((PlantAnimRig *)this,1);
  }
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_DragonBruit::getIdleWeights(int) */

void __thiscall PlantAnimRig_DragonBruit::getIdleWeights(PlantAnimRig_DragonBruit *this,int param_1)

{
  ProbabilitySet<std::string> *this_00;
  int iVar1;
  undefined *puVar2;
  string asStack_10 [8];
  long local_8;
  
  this_00 = (ProbabilitySet<std::string> *)(this + 0x408);
  *(int *)(this + 0x438) = param_1;
  local_8 = ___stack_chk_guard;
  ProbabilitySet<std::string>::Clear(this_00);
  if (this[0x43c] == (PlantAnimRig_DragonBruit)0x0) {
    iVar1 = *(int *)(this + 0x438);
    if (iVar1 == 3) {
      puVar2 = &DAT_06b97ce8;
    }
    else if (iVar1 == 1) {
      puVar2 = &DAT_06b97cd8;
    }
    else {
      if (iVar1 != 2) goto LAB_04d7d8b8;
      puVar2 = &DAT_06b97ca0;
    }
  }
  else {
    iVar1 = *(int *)(this + 0x438);
    if (iVar1 == 3) {
      puVar2 = &DAT_06b97d40;
    }
    else if (iVar1 == 1) {
      puVar2 = &DAT_06b97c50;
    }
    else {
      if (iVar1 != 2) {
LAB_04d7d8b8:
        FUN_05475d88(asStack_10,&DAT_06b97d28);
        ProbabilitySet<std::string>::AddItem(this_00,asStack_10,10);
        std::string::~string(asStack_10);
        FUN_05475d88(asStack_10,&DAT_06b97d00);
        ProbabilitySet<std::string>::AddItem(this_00,asStack_10,5);
        std::string::~string(asStack_10);
        FUN_05475d88(asStack_10,&DAT_06b97c80);
        ProbabilitySet<std::string>::AddItem(this_00,asStack_10,0x14);
        std::string::~string(asStack_10);
        goto LAB_04d7d92c;
      }
      puVar2 = &DAT_06b97c78;
    }
  }
  FUN_05475d88(asStack_10,puVar2);
  ProbabilitySet<std::string>::AddItem(this_00,asStack_10,10);
  std::string::~string(asStack_10);
LAB_04d7d92c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_DragonBruit::SetShadowState(bool) */

void __thiscall
PlantAnimRig_DragonBruit::SetShadowState(PlantAnimRig_DragonBruit *this,bool param_1)

{
  getIdleWeights(this,*(int *)(this + 0x438));
  this[0x43c] = (PlantAnimRig_DragonBruit)param_1;
  return;
}


/* PlantAnimRig_DragonBruit::~PlantAnimRig_DragonBruit() */

void __thiscall PlantAnimRig_DragonBruit::~PlantAnimRig_DragonBruit(PlantAnimRig_DragonBruit *this)

{
  *(undefined ***)this = &PTR_GetClass_069b74d0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_DragonBruit_069b7738;
  std::string::~string((string *)(this + 0x440));
  ProbabilitySet<std::string>::~ProbabilitySet((ProbabilitySet<std::string> *)(this + 0x408));
  AnimRigLayerSet::~AnimRigLayerSet((AnimRigLayerSet *)(this + 0x3c0));
  std::string::~string((string *)(this + 0x3b8));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_DragonBruit::~PlantAnimRig_DragonBruit() */

void __thiscall PlantAnimRig_DragonBruit::~PlantAnimRig_DragonBruit(PlantAnimRig_DragonBruit *this)

{
  ~PlantAnimRig_DragonBruit(this + -0x10);
  return;
}


/* PlantAnimRig_DragonBruit::~PlantAnimRig_DragonBruit() */

void __thiscall PlantAnimRig_DragonBruit::~PlantAnimRig_DragonBruit(PlantAnimRig_DragonBruit *this)

{
  ~PlantAnimRig_DragonBruit(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_DragonBruit::~PlantAnimRig_DragonBruit() */

void __thiscall PlantAnimRig_DragonBruit::~PlantAnimRig_DragonBruit(PlantAnimRig_DragonBruit *this)

{
  ~PlantAnimRig_DragonBruit(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_DragonBruit::onPopAnimInitialized() */

void __thiscall PlantAnimRig_DragonBruit::onPopAnimInitialized(PlantAnimRig_DragonBruit *this)

{
  string *psVar1;
  string *psVar2;
  undefined1 auStack_1c0 [8];
  string asStack_1b8 [8];
  vector<std::string,std::allocator<std::string>> avStack_1b0 [16];
  string asStack_1a0 [8];
  string asStack_198 [8];
  string asStack_190 [8];
  string asStack_188 [8];
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
  PlantAnimRig::onPopAnimInitialized((PlantAnimRig *)this);
  FUN_05475d88(asStack_1b8,&PlantDragonBruit::k_boostedOffLayerSetName);
  std::string::string(asStack_198,"spawn_pow");
  std::string::string(asStack_190,"cloud_raw");
  std::string::string(asStack_188,"cloud");
  std::string::string(asStack_180,"spawn_pow2");
  std::string::string(asStack_178,"spawn");
  std::string::string(asStack_170,"power_up_head_pinch_pop");
  std::string::string(asStack_168,"dragonbruit_death");
  std::string::string(asStack_160,"dragonbruit_pf_end");
  std::string::string(asStack_158,"dragonbruit_pf_loop");
  std::string::string(asStack_150,"head1_3rd_pf");
  std::string::string(asStack_148,"head1_2nd_pf");
  std::string::string(asStack_140,"head1_pf");
  std::string::string(asStack_138,"dragonbruit_pf_start");
  std::string::string(asStack_130,"empeach_arc_01_raw");
  std::string::string(asStack_128,"empeach_arc_01");
  std::string::string(asStack_120,"damage_01");
  std::string::string(asStack_118,"body_attack");
  std::string::string(asStack_110,"dragonbruit_charged");
  std::string::string(asStack_108,"head1_3rd_attack");
  std::string::string(asStack_100,"head1_2nd_attack");
  std::string::string(asStack_f8,"cheek");
  std::string::string(asStack_f0,"head1_attack");
  std::string::string(asStack_e8,"dragonbruit_attack");
  std::string::string(asStack_e0,"head1_2nd_idle3");
  std::string::string(asStack_d8,"dragonbruit_idle3");
  std::string::string(asStack_d0,"head1_3rd_idle2");
  std::string::string(asStack_c8,"head1_idle2");
  std::string::string(asStack_c0,"dragonbruit_idle2");
  std::string::string(asStack_b8,"leaf3");
  std::string::string(asStack_b0,"leaf2");
  std::string::string(asStack_a8,"stem1");
  std::string::string(asStack_a0,"stem3");
  std::string::string(asStack_98,"stem2");
  std::string::string(asStack_90,"leaf1");
  std::string::string(asStack_88,"head1_3rd");
  std::string::string(asStack_80,"head1_2nd");
  std::string::string(asStack_78,"neck");
  std::string::string(asStack_70,"faceleaf4");
  std::string::string(asStack_68,"horn2");
  std::string::string(asStack_60,"head_base");
  std::string::string(asStack_58,"head_top");
  std::string::string(asStack_50,"horn1");
  std::string::string(asStack_48,"faceleaf2");
  std::string::string(asStack_40,"lower_lip");
  std::string::string(asStack_38,"mouth");
  std::string::string(asStack_30,"faceleaf1");
  std::string::string(asStack_28,"nose");
  std::string::string(asStack_20,"faceleaf3");
  std::string::string(asStack_18,"head1");
  std::string::string(asStack_10,"dragonbruit_idle");
  std::vector<std::string,std::allocator<std::string>>::vector
            (avStack_1b0,asStack_198,0x32,auStack_1c0);
  AddBoostedLayerSet(this,asStack_1b8,avStack_1b0);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_1b0);
  psVar2 = asStack_10;
  do {
    psVar1 = psVar2 + -8;
    std::string::~string(psVar2);
    psVar2 = psVar1;
  } while (psVar1 != asStack_1a0);
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
  nop();
  nop();
  nop();
  nop();
  std::string::~string(asStack_1b8);
  FUN_05475d88(asStack_1b8,&PlantDragonBruit::k_boostedOnLayerSetName);
  std::string::string(asStack_198,"spawn_pow_dark");
  std::string::string(asStack_190,"cloud_raw_dark");
  std::string::string(asStack_188,"cloud_dark");
  std::string::string(asStack_180,"spawn_pow2_dark");
  std::string::string(asStack_178,"spawn_dark");
  std::string::string(asStack_170,"power_up_head_pinch_pop_dark");
  std::string::string(asStack_168,"dragonbruit_death_dark");
  std::string::string(asStack_160,"dragonbruit_pf_end_dark");
  std::string::string(asStack_158,"dragonbruit_pf_loop_dark");
  std::string::string(asStack_150,"head1_3rd_pf_dark");
  std::string::string(asStack_148,"head1_2nd_pf_dark");
  std::string::string(asStack_140,"head1_pf_dark");
  std::string::string(asStack_138,"dragonbruit_pf_start_dark");
  std::string::string(asStack_130,"empeach_arc_01_raw_dark");
  std::string::string(asStack_128,"empeach_arc_01_dark");
  std::string::string(asStack_120,"damage_01_dark");
  std::string::string(asStack_118,"body_attack_dark");
  std::string::string(asStack_110,"dragonbruit_charged_dark");
  std::string::string(asStack_108,"head1_3rd_attack_dark");
  std::string::string(asStack_100,"head1_2nd_attack_dark");
  std::string::string(asStack_f8,"cheek_dark");
  std::string::string(asStack_f0,"head1_attack_dark");
  std::string::string(asStack_e8,"dragonbruit_attack_dark");
  std::string::string(asStack_e0,"head1_2nd_idle3_dark");
  std::string::string(asStack_d8,"dragonbruit_idle3_dark");
  std::string::string(asStack_d0,"head1_3rd_idle2_dark");
  std::string::string(asStack_c8,"head1_idle2_dark");
  std::string::string(asStack_c0,"dragonbruit_idle2_dark");
  std::string::string(asStack_b8,"leaf3_dark");
  std::string::string(asStack_b0,"leaf2_dark");
  std::string::string(asStack_a8,"stem1_dark");
  std::string::string(asStack_a0,"stem3_dark");
  std::string::string(asStack_98,"stem2_dark");
  std::string::string(asStack_90,"leaf1_dark");
  std::string::string(asStack_88,"head1_3rd_dark");
  std::string::string(asStack_80,"head1_2nd_dark");
  std::string::string(asStack_78,"neck_dark");
  std::string::string(asStack_70,"faceleaf4_dark");
  std::string::string(asStack_68,"horn2_dark");
  std::string::string(asStack_60,"head_base_dark");
  std::string::string(asStack_58,"head_top_dark");
  std::string::string(asStack_50,"horn1_dark");
  std::string::string(asStack_48,"faceleaf2_dark");
  std::string::string(asStack_40,"lower_lip_dark");
  std::string::string(asStack_38,"mouth_dark");
  std::string::string(asStack_30,"faceleaf1_dark");
  std::string::string(asStack_28,"nose_dark");
  std::string::string(asStack_20,"faceleaf3_dark");
  std::string::string(asStack_18,"head1_dark");
  std::string::string(asStack_10,"dragonbruit_idle_dark");
  std::vector<std::string,std::allocator<std::string>>::vector
            (avStack_1b0,asStack_198,0x32,auStack_1c0);
  AddBoostedLayerSet(this,asStack_1b8,avStack_1b0);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_1b0);
  psVar2 = asStack_10;
  do {
    psVar1 = psVar2 + -8;
    std::string::~string(psVar2);
    psVar2 = psVar1;
  } while (psVar1 != asStack_1a0);
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
  nop();
  nop();
  nop();
  nop();
  std::string::~string(asStack_1b8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_DragonBruit::PlayPreviewAnim(bool) */

void PlantAnimRig_DragonBruit::PlayPreviewAnim(bool param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10,&PlantDragonBruit::k_boostedOffLayerSetName);
  ShowBoostedLayerSet((BoardEntity *)(ulong)param_1,asStack_10);
  std::string::~string(asStack_10);
  TwinsRedStarProjectile::damageEntity((BoardEntity *)(ulong)param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

