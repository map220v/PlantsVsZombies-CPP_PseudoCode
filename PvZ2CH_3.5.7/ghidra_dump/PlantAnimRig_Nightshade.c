// Class: PlantAnimRig_Nightshade


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Nightshade::playIdleAnimation() */

void __thiscall PlantAnimRig_Nightshade::playIdleAnimation(PlantAnimRig_Nightshade *this)

{
  int iVar1;
  string asStack_70 [8];
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_68 [48];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_68);
  std::string::string(asStack_70,"idle");
  ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_68,asStack_70,0x14);
  std::string::~string(asStack_70);
  nop();
  std::string::string(asStack_70,"idle2");
  ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_68,asStack_70,10);
  std::string::~string(asStack_70);
  nop();
  ProbabilitySet<std::string>::PickItemIgnoring((string *)aPStack_68);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_70,0,aDStack_38);
  if (iVar1 != -1) {
    thunk_FUN_05475e00(this + 0x3b8,asStack_70);
    PlantAnimRig::SetState((PlantAnimRig *)this,1);
  }
  std::string::~string(asStack_70);
  ProbabilitySet<std::string>::~ProbabilitySet((ProbabilitySet<std::string> *)aPStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Nightshade::PlayIdleLooped() */

void __thiscall PlantAnimRig_Nightshade::PlayIdleLooped(PlantAnimRig_Nightshade *this)

{
  int iVar1;
  string asStack_70 [8];
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_68 [48];
  DummyInit aDStack_38 [48];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_68);
  std::string::string(asStack_70,"idle");
  ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_68,asStack_70,0x14);
  std::string::~string(asStack_70);
  nop();
  std::string::string(asStack_70,"idle2");
  ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_68,asStack_70,10);
  std::string::~string(asStack_70);
  nop();
  ProbabilitySet<std::string>::PickItemIgnoring((string *)aPStack_68);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_70,0,aDStack_38);
  if (iVar1 != -1) {
    thunk_FUN_05475e00(this + 0x3b8,asStack_70);
    PlantAnimRig::SetState((PlantAnimRig *)this,1);
  }
  std::string::~string(asStack_70);
  ProbabilitySet<std::string>::~ProbabilitySet((ProbabilitySet<std::string> *)aPStack_68);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Nightshade::StaticClassInit() */

void PlantAnimRig_Nightshade::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Nightshade");
    (*pcVar2)(plVar1,asStack_10,FUN_0423c4fc,0x480,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Nightshade::StaticGetClass() */

long * PlantAnimRig_Nightshade::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Nightshade",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Nightshade::GetClass() const */

long * PlantAnimRig_Nightshade::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Nightshade",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Nightshade::AdjustLeafDisplay(int, bool) */

void __thiscall
PlantAnimRig_Nightshade::AdjustLeafDisplay(PlantAnimRig_Nightshade *this,int param_1,bool param_2)

{
  bool bVar1;
  long lVar2;
  string *psVar3;
  long lVar4;
  
  lVar4 = 0;
  do {
    bVar1 = (int)lVar4 + 1 <= param_1;
    psVar3 = (string *)FUN_0423b820(*(undefined8 *)(this + 0x450),lVar4);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar3,bVar1 && !param_2);
    lVar2 = lVar4 + 1;
    psVar3 = (string *)FUN_0423b820(*(undefined8 *)(this + 0x468),lVar4);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar3,bVar1 && param_2);
    lVar4 = lVar2;
  } while (lVar2 != 3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Nightshade::ShowBoostedLayerSet(std::string) */

void PlantAnimRig_Nightshade::ShowBoostedLayerSet(long param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10);
  AnimRigLayerSet::ShowSet((AnimRigLayerSet *)(param_1 + 0x408),param_1,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Nightshade::PlayZenGardenIdleAnim() */

void __thiscall PlantAnimRig_Nightshade::PlayZenGardenIdleAnim(PlantAnimRig_Nightshade *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10,&PlantNightshade::k_boostedOffLayerSetName);
  ShowBoostedLayerSet(this,asStack_10);
  std::string::~string(asStack_10);
  AdjustLeafDisplay(this,PlantNightshade::k_maxLeaves,false);
  PlantAnimRig::PlayZenGardenIdleAnim((PlantAnimRig *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Nightshade::PlantAnimRig_Nightshade() */

void __thiscall PlantAnimRig_Nightshade::PlantAnimRig_Nightshade(PlantAnimRig_Nightshade *this)

{
  undefined1 auStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06814670;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Nightshade_068148d8;
  Set8BytesTo0(this + 0x3b8);
  AnimRigLayerSet::AnimRigLayerSet((AnimRigLayerSet *)(this + 0x3c0));
  AnimRigLayerSet::AnimRigLayerSet((AnimRigLayerSet *)(this + 0x408));
  std::string::string(asStack_20,"shade_petal1");
  std::string::string(asStack_18,"shade_petal2");
  std::string::string(asStack_10,"shade_petal3");
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x450),asStack_20,3,
             auStack_28);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  nop();
  nop();
  nop();
  std::string::string(asStack_20,"shade_petal1_pf");
  std::string::string(asStack_18,"shade_petal2_pf");
  std::string::string(asStack_10,"shade_petal3_pf");
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x468),asStack_20,3,
             auStack_28);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  nop();
  nop();
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Nightshade::StaticNew() */

PlantAnimRig_Nightshade * PlantAnimRig_Nightshade::StaticNew(void)

{
  PlantAnimRig_Nightshade *this;
  
  this = ::operator_new(0x480);
  PlantAnimRig_Nightshade(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Nightshade::AddBoostedLayerSet(std::string, std::vector<std::string,
   std::allocator<std::string > >) */

void __thiscall
PlantAnimRig_Nightshade::AddBoostedLayerSet
          (PlantAnimRig_Nightshade *this,undefined8 param_2,vector *param_3)

{
  string asStack_28 [8];
  vector<std::string,std::allocator<std::string>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_28);
  std::vector<std::string,std::allocator<std::string>>::vector(avStack_20,param_3);
  AnimRigLayerSet::AddSet((AnimRigLayerSet *)(this + 0x408),asStack_28,avStack_20);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_20);
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Nightshade::~PlantAnimRig_Nightshade() */

void __thiscall PlantAnimRig_Nightshade::~PlantAnimRig_Nightshade(PlantAnimRig_Nightshade *this)

{
  *(undefined ***)this = &PTR_GetClass_06814670;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Nightshade_068148d8;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x468));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x450));
  AnimRigLayerSet::~AnimRigLayerSet((AnimRigLayerSet *)(this + 0x408));
  AnimRigLayerSet::~AnimRigLayerSet((AnimRigLayerSet *)(this + 0x3c0));
  std::string::~string((string *)(this + 0x3b8));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Nightshade::~PlantAnimRig_Nightshade() */

void __thiscall PlantAnimRig_Nightshade::~PlantAnimRig_Nightshade(PlantAnimRig_Nightshade *this)

{
  ~PlantAnimRig_Nightshade(this + -0x10);
  return;
}


/* PlantAnimRig_Nightshade::~PlantAnimRig_Nightshade() */

void __thiscall PlantAnimRig_Nightshade::~PlantAnimRig_Nightshade(PlantAnimRig_Nightshade *this)

{
  ~PlantAnimRig_Nightshade(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Nightshade::~PlantAnimRig_Nightshade() */

void __thiscall PlantAnimRig_Nightshade::~PlantAnimRig_Nightshade(PlantAnimRig_Nightshade *this)

{
  ~PlantAnimRig_Nightshade(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Nightshade::onPopAnimInitialized() */

void __thiscall PlantAnimRig_Nightshade::onPopAnimInitialized(PlantAnimRig_Nightshade *this)

{
  string *psVar1;
  undefined1 auStack_a8 [8];
  string asStack_a0 [8];
  vector<std::string,std::allocator<std::string>> avStack_98 [24];
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
  FUN_05475d88(asStack_a0,&PlantNightshade::k_pfOffLayerSetName);
  psVar1 = (string *)&local_8;
  std::string::string(asStack_80,"shade_petal_loose");
  std::string::string(asStack_78,"spin_back1");
  std::string::string(asStack_70,"spin_effect_all");
  std::string::string(asStack_68,"spin_front1");
  std::vector<std::string,std::allocator<std::string>>::vector(avStack_98,asStack_80,4,auStack_a8);
  PlantAnimRig_DragonBruit::AddBoostedLayerSet
            ((PlantAnimRig_DragonBruit *)this,asStack_a0,avStack_98);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_98);
  std::string::~string(asStack_68);
  std::string::~string(asStack_70);
  std::string::~string(asStack_78);
  std::string::~string(asStack_80);
  nop();
  nop();
  nop();
  nop();
  std::string::~string(asStack_a0);
  FUN_05475d88(asStack_a0,&PlantNightshade::k_pfOnLayerSetName);
  std::string::string(asStack_80,"shade_petal_loose_pf");
  std::string::string(asStack_78,"spin_back1_pf");
  std::string::string(asStack_70,"spin_effect_all_pf");
  std::string::string(asStack_68,"spin_front1_pf");
  std::vector<std::string,std::allocator<std::string>>::vector(avStack_98,asStack_80,4,auStack_a8);
  PlantAnimRig_DragonBruit::AddBoostedLayerSet
            ((PlantAnimRig_DragonBruit *)this,asStack_a0,avStack_98);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_98);
  std::string::~string(asStack_68);
  std::string::~string(asStack_70);
  std::string::~string(asStack_78);
  std::string::~string(asStack_80);
  nop();
  nop();
  nop();
  nop();
  std::string::~string(asStack_a0);
  FUN_05475d88(asStack_a0,&PlantNightshade::k_boostedOffLayerSetName);
  std::string::string(asStack_80,"shade_antennea");
  std::string::string(asStack_78,"shade_body");
  std::string::string(asStack_70,"shade_eyel");
  std::string::string(asStack_68,"shade_eyel_blink");
  std::string::string(asStack_60,"shade_eyer");
  std::string::string(asStack_58,"shade_eyer_blink");
  std::string::string(asStack_50,"shade_head_cap");
  std::string::string(asStack_48,"shade_head_leaf1");
  std::string::string(asStack_40,"shade_head_leaf2");
  std::string::string(asStack_38,"shade_head_leaf3");
  std::string::string(asStack_30,"shade_leaf_foot1");
  std::string::string(asStack_28,"shade_leaf_foot2");
  std::string::string(asStack_20,"shade_leaf_foot3");
  std::string::string(asStack_18,"shade_leaf_foot4");
  std::string::string(asStack_10,"shade_mouth");
  std::vector<std::string,std::allocator<std::string>>::vector(avStack_98,asStack_80,0xf,auStack_a8)
  ;
  AddBoostedLayerSet(this,asStack_a0,avStack_98);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_98);
  do {
    psVar1 = psVar1 + -8;
    std::string::~string(psVar1);
  } while (psVar1 != asStack_80);
  psVar1 = (string *)&local_8;
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
  std::string::~string(asStack_a0);
  FUN_05475d88(asStack_a0,&PlantNightshade::k_boostedOnLayerSetName);
  std::string::string(asStack_80,"shade_dark_antennea");
  std::string::string(asStack_78,"shade_dark_body");
  std::string::string(asStack_70,"shade_dark_eyel");
  std::string::string(asStack_68,"shade_dark_eyel_blink");
  std::string::string(asStack_60,"shade_dark_eyer");
  std::string::string(asStack_58,"shade_dark_eyer_blink");
  std::string::string(asStack_50,"shade_dark_head_cap");
  std::string::string(asStack_48,"shade_dark_head_leaf1");
  std::string::string(asStack_40,"shade_dark_head_leaf2");
  std::string::string(asStack_38,"shade_dark_head_leaf3");
  std::string::string(asStack_30,"shade_dark_leaf_foot1");
  std::string::string(asStack_28,"shade_dark_leaf_foot2");
  std::string::string(asStack_20,"shade_dark_leaf_foot3");
  std::string::string(asStack_18,"shade_dark_leaf_foot4");
  std::string::string(asStack_10,"shade_dark_mouth");
  std::vector<std::string,std::allocator<std::string>>::vector(avStack_98,asStack_80,0xf,auStack_a8)
  ;
  AddBoostedLayerSet(this,asStack_a0,avStack_98);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_98);
  do {
    psVar1 = psVar1 + -8;
    std::string::~string(psVar1);
  } while (psVar1 != asStack_80);
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
  std::string::~string(asStack_a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Nightshade::PlayPreviewAnim(bool) */

void PlantAnimRig_Nightshade::PlayPreviewAnim(bool param_1)

{
  PlantAnimRig_Nightshade *this;
  string asStack_10 [8];
  long local_8;
  
  this = (PlantAnimRig_Nightshade *)(ulong)param_1;
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10,&PlantNightshade::k_boostedOffLayerSetName);
  ShowBoostedLayerSet(this,asStack_10);
  std::string::~string(asStack_10);
  AdjustLeafDisplay(this,PlantNightshade::k_maxLeaves,false);
  TwinsRedStarProjectile::damageEntity((BoardEntity *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

