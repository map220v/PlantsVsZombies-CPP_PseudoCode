// Class: PlantAnimRig_DragonBabyBruit


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_DragonBabyBruit::ShowBoostedLayerSet(std::string) */

void PlantAnimRig_DragonBabyBruit::ShowBoostedLayerSet(long param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10);
  AnimRigLayerSet::ShowSet((AnimRigLayerSet *)(param_1 + 0x3b8),param_1,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_DragonBabyBruit::AddBoostedLayerSet(std::string, std::vector<std::string,
   std::allocator<std::string > >) */

void __thiscall
PlantAnimRig_DragonBabyBruit::AddBoostedLayerSet
          (PlantAnimRig_DragonBabyBruit *this,undefined8 param_2,vector *param_3)

{
  string asStack_28 [8];
  vector<std::string,std::allocator<std::string>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_28);
  std::vector<std::string,std::allocator<std::string>>::vector(avStack_20,param_3);
  AnimRigLayerSet::AddSet((AnimRigLayerSet *)(this + 0x3b8),asStack_28,avStack_20);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_20);
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_DragonBabyBruit::getPlantFoodMainAnimName() */

void __thiscall
PlantAnimRig_DragonBabyBruit::getPlantFoodMainAnimName(PlantAnimRig_DragonBabyBruit *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"pf");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_DragonBabyBruit::PlantAnimRig_DragonBabyBruit() */

void __thiscall
PlantAnimRig_DragonBabyBruit::PlantAnimRig_DragonBabyBruit(PlantAnimRig_DragonBabyBruit *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_069b8270;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_DragonBabyBruit_069b84d8;
  AnimRigLayerSet::AnimRigLayerSet((AnimRigLayerSet *)(this + 0x3b8));
  return;
}


/* PlantAnimRig_DragonBabyBruit::StaticNew() */

PlantAnimRig_DragonBabyBruit * PlantAnimRig_DragonBabyBruit::StaticNew(void)

{
  PlantAnimRig_DragonBabyBruit *this;
  
  this = ::operator_new(0x408);
  PlantAnimRig_DragonBabyBruit(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_DragonBabyBruit::StaticClassInit() */

void PlantAnimRig_DragonBabyBruit::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_DragonBabyBruit");
    (*pcVar2)(plVar1,asStack_10,FUN_04d7fdbc,0x408,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_DragonBabyBruit::StaticGetClass() */

long * PlantAnimRig_DragonBabyBruit::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_DragonBabyBruit",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_DragonBabyBruit::GetClass() const */

long * PlantAnimRig_DragonBabyBruit::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_DragonBabyBruit",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_DragonBabyBruit::PlayZenGardenIdleAnim() */

void __thiscall
PlantAnimRig_DragonBabyBruit::PlayZenGardenIdleAnim(PlantAnimRig_DragonBabyBruit *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10,&PlantDragonBabyBruit::k_boostedOffLayerSetName);
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
/* PlantAnimRig_DragonBabyBruit::setTranformStatus(DragonBruitState) */

void __thiscall
PlantAnimRig_DragonBabyBruit::setTranformStatus(PlantAnimRig_DragonBabyBruit *this,int param_2)

{
  bool bVar1;
  string asStack_10 [8];
  long local_8;
  
  *(int *)(this + 0x400) = param_2;
  local_8 = ___stack_chk_guard;
  if (param_2 == 0) {
    std::string::string(asStack_10,"babybruit_idle_dark_1");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"babybruit_idle_dark_2");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"babybruit_idle_dark_3");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"babybruit_idle_dark");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"babybruit_idle_normal");
    bVar1 = true;
  }
  else {
    if (param_2 != 1) {
      if (param_2 == 2) {
        std::string::string(asStack_10,"babybruit_idle_dark");
        PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
        std::string::~string(asStack_10);
        nop();
        std::string::string(asStack_10,"babybruit_idle_dark_1");
        PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,true);
        std::string::~string(asStack_10);
        nop();
        std::string::string(asStack_10,"babybruit_idle_dark_2");
        PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
        std::string::~string(asStack_10);
        nop();
        std::string::string(asStack_10,"babybruit_idle_dark_3");
      }
      else {
        std::string::string(asStack_10,"babybruit_idle_dark");
        PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
        std::string::~string(asStack_10);
        nop();
        std::string::string(asStack_10,"babybruit_idle_dark_1");
        PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
        std::string::~string(asStack_10);
        nop();
        std::string::string(asStack_10,"babybruit_idle_dark_2");
        PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
        std::string::~string(asStack_10);
        nop();
        std::string::string(asStack_10,"babybruit_idle_dark_3");
      }
      PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_2 != 2);
      std::string::~string(asStack_10);
      nop();
      std::string::string(asStack_10,"babybruit_idle_normal");
      PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
      std::string::~string(asStack_10);
      nop();
      goto LAB_04d80064;
    }
    std::string::string(asStack_10,"babybruit_idle_dark");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"babybruit_idle_dark_1");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"babybruit_idle_dark_2");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,true);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"babybruit_idle_dark_3");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"babybruit_idle_normal");
    bVar1 = false;
  }
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
LAB_04d80064:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_DragonBabyBruit::~PlantAnimRig_DragonBabyBruit() */

void __thiscall
PlantAnimRig_DragonBabyBruit::~PlantAnimRig_DragonBabyBruit(PlantAnimRig_DragonBabyBruit *this)

{
  *(undefined ***)this = &PTR_GetClass_069b8270;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_DragonBabyBruit_069b84d8;
  AnimRigLayerSet::~AnimRigLayerSet((AnimRigLayerSet *)(this + 0x3b8));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_DragonBabyBruit::~PlantAnimRig_DragonBabyBruit() */

void __thiscall
PlantAnimRig_DragonBabyBruit::~PlantAnimRig_DragonBabyBruit(PlantAnimRig_DragonBabyBruit *this)

{
  ~PlantAnimRig_DragonBabyBruit(this + -0x10);
  return;
}


/* PlantAnimRig_DragonBabyBruit::~PlantAnimRig_DragonBabyBruit() */

void __thiscall
PlantAnimRig_DragonBabyBruit::~PlantAnimRig_DragonBabyBruit(PlantAnimRig_DragonBabyBruit *this)

{
  ~PlantAnimRig_DragonBabyBruit(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_DragonBabyBruit::~PlantAnimRig_DragonBabyBruit() */

void __thiscall
PlantAnimRig_DragonBabyBruit::~PlantAnimRig_DragonBabyBruit(PlantAnimRig_DragonBabyBruit *this)

{
  ~PlantAnimRig_DragonBabyBruit(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_DragonBabyBruit::onPopAnimInitialized() */

void __thiscall
PlantAnimRig_DragonBabyBruit::onPopAnimInitialized(PlantAnimRig_DragonBabyBruit *this)

{
  string *psVar1;
  string *psVar2;
  undefined1 auStack_168 [8];
  string asStack_160 [8];
  vector<std::string,std::allocator<std::string>> avStack_158 [16];
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
  FUN_05475d88(asStack_160,&PlantDragonBruit::k_boostedOffLayerSetName);
  std::string::string(asStack_140,"explosion");
  std::string::string(asStack_138,"dynamite_explosion");
  std::string::string(asStack_130,"power_up_head_pinch_pop");
  std::string::string(asStack_128,"dust_cloud_raw");
  std::string::string(asStack_120,"pros_dust_cloud");
  std::string::string(asStack_118,"babybruit_pf");
  std::string::string(asStack_110,"babybruit_attack");
  std::string::string(asStack_108,"babybruit_idle");
  std::string::string(asStack_100,"Tween 20");
  std::string::string(asStack_f8,"Tween 19");
  std::string::string(asStack_f0,"stem2_bb");
  std::string::string(asStack_e8,"Tween 18");
  std::string::string(asStack_e0,"Tween 17");
  std::string::string(asStack_d8,"neck_bb");
  std::string::string(asStack_d0,"faceleaf4_bb");
  std::string::string(asStack_c8,"horn2_bb");
  std::string::string(asStack_c0,"head_base_bb");
  std::string::string(asStack_b8,"head_top_bb");
  std::string::string(asStack_b0,"horn1_bb");
  std::string::string(asStack_a8,"faceleaf2_bb");
  std::string::string(asStack_a0,"lower_lip_bb");
  std::string::string(asStack_98,"mouth_bb");
  std::string::string(asStack_90,"faceleaf1_bb");
  std::string::string(asStack_88,"nose_bb");
  std::string::string(asStack_80,"faceleaf3_bb");
  std::string::string(asStack_78,"cheek_bb");
  std::string::string(asStack_70,"head1_2nd_attack_bb");
  std::string::string(asStack_68,"babyhead");
  std::string::string(asStack_60,"power_up_head_pinch");
  std::string::string(asStack_58,"kill_effect");
  std::string::string(asStack_50,"spark_01");
  std::string::string(asStack_48,"lightningreed_spark_01");
  std::string::string(asStack_40,"lightningreed_hit_01");
  std::string::string(asStack_38,"energy_beam");
  std::string::string(asStack_30,"energy_beam_02");
  std::string::string(asStack_28,"energy_particle_cluster");
  std::string::string(asStack_20,"energy_particle");
  std::string::string(asStack_18,"bb_plantfood");
  std::string::string(asStack_10,"babybruit_plant");
  std::vector<std::string,std::allocator<std::string>>::vector
            (avStack_158,asStack_140,0x27,auStack_168);
  AddBoostedLayerSet(this,asStack_160,avStack_158);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_158);
  psVar2 = asStack_10;
  do {
    psVar1 = psVar2 + -8;
    std::string::~string(psVar2);
    psVar2 = psVar1;
  } while (psVar1 != asStack_148);
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
  std::string::~string(asStack_160);
  FUN_05475d88(asStack_160,&PlantDragonBruit::k_boostedOnLayerSetName);
  std::string::string(asStack_140,"explosion_dark");
  std::string::string(asStack_138,"dynamite_explosion_dark");
  std::string::string(asStack_130,"power_up_head_pinch_pop_dark");
  std::string::string(asStack_128,"dust_cloud_raw_dark");
  std::string::string(asStack_120,"pros_dust_cloud_dark");
  std::string::string(asStack_118,"babybruit_pf_dark");
  std::string::string(asStack_110,"babybruit_attack_dark");
  std::string::string(asStack_108,"babybruit_idle_dark");
  std::string::string(asStack_100,"Tween 20_dark");
  std::string::string(asStack_f8,"Tween 19_dark");
  std::string::string(asStack_f0,"stem2_bb_dark");
  std::string::string(asStack_e8,"Tween 18_dark");
  std::string::string(asStack_e0,"Tween 17_dark");
  std::string::string(asStack_d8,"neck_bb_dark");
  std::string::string(asStack_d0,"faceleaf4_bb_dark");
  std::string::string(asStack_c8,"horn2_bb_dark");
  std::string::string(asStack_c0,"head_base_bb_dark");
  std::string::string(asStack_b8,"head_top_bb_dark");
  std::string::string(asStack_b0,"horn1_bb_dark");
  std::string::string(asStack_a8,"faceleaf2_bb_dark");
  std::string::string(asStack_a0,"lower_lip_bb_dark");
  std::string::string(asStack_98,"mouth_bb_dark");
  std::string::string(asStack_90,"faceleaf1_bb_dark");
  std::string::string(asStack_88,"nose_bb_dark");
  std::string::string(asStack_80,"faceleaf3_bb_dark");
  std::string::string(asStack_78,"cheek_bb_dark");
  std::string::string(asStack_70,"head1_2nd_attack_bb_dark");
  std::string::string(asStack_68,"babyhead_dark");
  std::string::string(asStack_60,"power_up_head_pinch_dark");
  std::string::string(asStack_58,"kill_effect_dark");
  std::string::string(asStack_50,"spark_01_dark");
  std::string::string(asStack_48,"lightningreed_spark_01_dark");
  std::string::string(asStack_40,"lightningreed_hit_01_dark");
  std::string::string(asStack_38,"energy_beam_dark");
  std::string::string(asStack_30,"energy_beam_02_dark");
  std::string::string(asStack_28,"energy_particle_cluster_dark");
  std::string::string(asStack_20,"energy_particle_dark");
  std::string::string(asStack_18,"bb_plantfood_dark");
  std::string::string(asStack_10,"babybruit_plant_dark");
  std::vector<std::string,std::allocator<std::string>>::vector
            (avStack_158,asStack_140,0x27,auStack_168);
  AddBoostedLayerSet(this,asStack_160,avStack_158);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_158);
  psVar2 = asStack_10;
  do {
    psVar1 = psVar2 + -8;
    std::string::~string(psVar2);
    psVar2 = psVar1;
  } while (psVar1 != asStack_148);
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
  std::string::~string(asStack_160);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_DragonBabyBruit::PlayPreviewAnim(bool) */

void PlantAnimRig_DragonBabyBruit::PlayPreviewAnim(bool param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10,&PlantDragonBabyBruit::k_boostedOffLayerSetName);
  ShowBoostedLayerSet((BoardEntity *)(ulong)param_1,asStack_10);
  std::string::~string(asStack_10);
  TwinsRedStarProjectile::damageEntity((BoardEntity *)(ulong)param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

