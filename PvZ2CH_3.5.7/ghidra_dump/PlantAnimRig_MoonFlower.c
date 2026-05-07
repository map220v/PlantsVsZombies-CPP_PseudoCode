// Class: PlantAnimRig_MoonFlower


/* PlantAnimRig_MoonFlower::PlantAnimRig_MoonFlower() */

void __thiscall PlantAnimRig_MoonFlower::PlantAnimRig_MoonFlower(PlantAnimRig_MoonFlower *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067bf410;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_MoonFlower_067bf678;
  AnimRigLayerSet::AnimRigLayerSet((AnimRigLayerSet *)(this + 0x3b8));
  return;
}


/* PlantAnimRig_MoonFlower::StaticNew() */

PlantAnimRig_MoonFlower * PlantAnimRig_MoonFlower::StaticNew(void)

{
  PlantAnimRig_MoonFlower *this;
  
  this = ::operator_new(0x400);
  PlantAnimRig_MoonFlower(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_MoonFlower::StaticClassInit() */

void PlantAnimRig_MoonFlower::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_MoonFlower");
    (*pcVar2)(plVar1,asStack_10,FUN_0404c358,0x400,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_MoonFlower::StaticGetClass() */

long * PlantAnimRig_MoonFlower::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_MoonFlower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_MoonFlower::GetClass() const */

long * PlantAnimRig_MoonFlower::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_MoonFlower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_MoonFlower::PlayZenGardenIdleAnim() */

void __thiscall PlantAnimRig_MoonFlower::PlayZenGardenIdleAnim(PlantAnimRig_MoonFlower *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10,&PlantMoonFlower::k_normalLayerSetName);
  PlantAnimRig_DragonBabyBruit::ShowBoostedLayerSet(this,asStack_10);
  std::string::~string(asStack_10);
  PlantAnimRig::PlayZenGardenIdleAnim((PlantAnimRig *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_MoonFlower::~PlantAnimRig_MoonFlower() */

void __thiscall PlantAnimRig_MoonFlower::~PlantAnimRig_MoonFlower(PlantAnimRig_MoonFlower *this)

{
  *(undefined ***)this = &PTR_GetClass_067bf410;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_MoonFlower_067bf678;
  AnimRigLayerSet::~AnimRigLayerSet((AnimRigLayerSet *)(this + 0x3b8));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_MoonFlower::~PlantAnimRig_MoonFlower() */

void __thiscall PlantAnimRig_MoonFlower::~PlantAnimRig_MoonFlower(PlantAnimRig_MoonFlower *this)

{
  ~PlantAnimRig_MoonFlower(this + -0x10);
  return;
}


/* PlantAnimRig_MoonFlower::~PlantAnimRig_MoonFlower() */

void __thiscall PlantAnimRig_MoonFlower::~PlantAnimRig_MoonFlower(PlantAnimRig_MoonFlower *this)

{
  ~PlantAnimRig_MoonFlower(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_MoonFlower::~PlantAnimRig_MoonFlower() */

void __thiscall PlantAnimRig_MoonFlower::~PlantAnimRig_MoonFlower(PlantAnimRig_MoonFlower *this)

{
  ~PlantAnimRig_MoonFlower(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_MoonFlower::onPopAnimInitialized() */

void __thiscall PlantAnimRig_MoonFlower::onPopAnimInitialized(PlantAnimRig_MoonFlower *this)

{
  string *psVar1;
  string *psVar2;
  undefined1 auStack_e0 [8];
  string asStack_d8 [8];
  vector<std::string,std::allocator<std::string>> avStack_d0 [16];
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
  FUN_05475d88(asStack_d8,&PlantMoonFlower::k_boostedLayerSetName);
  std::string::string(asStack_b8,"moon_dark_eyel");
  std::string::string(asStack_b0,"moon_dark_eyel_blink");
  std::string::string(asStack_a8,"moon_dark_eyer");
  std::string::string(asStack_a0,"moon_dark_eyer_blink");
  std::string::string(asStack_98,"moon_dark_head");
  std::string::string(asStack_90,"moon_dark_head_leaf");
  std::string::string(asStack_88,"moon_dark_leaf_backl");
  std::string::string(asStack_80,"moon_dark_leaf_backr");
  std::string::string(asStack_78,"moon_dark_leaf_frontl");
  std::string::string(asStack_70,"moon_dark_leaf_frontr");
  std::string::string(asStack_68,"moon_dark_mouth");
  std::string::string(asStack_60,"moon_dark_mouth2");
  std::string::string(asStack_58,"moon_dark_petal_back_1");
  std::string::string(asStack_50,"moon_dark_petal_back_2");
  std::string::string(asStack_48,"moon_dark_petal_back_3");
  std::string::string(asStack_40,"moon_dark_petal_fr_1");
  std::string::string(asStack_38,"moon_dark_petal_fr_1_glow");
  std::string::string(asStack_30,"moon_dark_petal_front_2");
  std::string::string(asStack_28,"moon_dark_petal_front_2_glow");
  std::string::string(asStack_20,"moon_dark_petal_front_3");
  std::string::string(asStack_18,"moon_dark_petal_front_3_glow");
  std::string::string(asStack_10,"moon_head_glow");
  std::vector<std::string,std::allocator<std::string>>::vector
            (avStack_d0,asStack_b8,0x16,auStack_e0);
  PlantAnimRig_DragonBabyBruit::AddBoostedLayerSet
            ((PlantAnimRig_DragonBabyBruit *)this,asStack_d8,avStack_d0);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_d0);
  psVar2 = asStack_10;
  do {
    psVar1 = psVar2 + -8;
    std::string::~string(psVar2);
    psVar2 = psVar1;
  } while (psVar1 != asStack_c0);
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
  std::string::~string(asStack_d8);
  FUN_05475d88(asStack_d8,&PlantMoonFlower::k_normalLayerSetName);
  std::string::string(asStack_b8,"moon_eyel");
  std::string::string(asStack_b0,"moon_eyel_blink");
  std::string::string(asStack_a8,"moon_eyer");
  std::string::string(asStack_a0,"moon_eyer_blink");
  std::string::string(asStack_98,"moon_head");
  std::string::string(asStack_90,"moon_head_leaf");
  std::string::string(asStack_88,"moon_leaf_backl");
  std::string::string(asStack_80,"moon_leaf_backr");
  std::string::string(asStack_78,"moon_leaf_frontl");
  std::string::string(asStack_70,"moon_leaf_frontr");
  std::string::string(asStack_68,"moon_mouth");
  std::string::string(asStack_60,"moon_mouth2");
  std::string::string(asStack_58,"moon_petal_back_1");
  std::string::string(asStack_50,"moon_petal_back_2");
  std::string::string(asStack_48,"moon_petal_back_3");
  std::string::string(asStack_40,"moon_petal_fr_1");
  std::string::string(asStack_38,"moon_petal_fr_1_glow");
  std::string::string(asStack_30,"moon_petal_front_2");
  std::string::string(asStack_28,"moon_petal_front_2_glow");
  std::string::string(asStack_20,"moon_petal_front_3");
  std::string::string(asStack_18,"moon_petal_front_3_glow");
  std::vector<std::string,std::allocator<std::string>>::vector
            (avStack_d0,asStack_b8,0x15,auStack_e0);
  PlantAnimRig_DragonBabyBruit::AddBoostedLayerSet
            ((PlantAnimRig_DragonBabyBruit *)this,asStack_d8,avStack_d0);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_d0);
  psVar2 = asStack_18;
  do {
    psVar1 = psVar2 + -8;
    std::string::~string(psVar2);
    psVar2 = psVar1;
  } while (psVar1 != asStack_c0);
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
  std::string::~string(asStack_d8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_MoonFlower::PlayPreviewAnim(bool) */

void PlantAnimRig_MoonFlower::PlayPreviewAnim(bool param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10,&PlantMoonFlower::k_normalLayerSetName);
  PlantAnimRig_DragonBabyBruit::ShowBoostedLayerSet((BoardEntity *)(ulong)param_1,asStack_10);
  std::string::~string(asStack_10);
  TwinsRedStarProjectile::damageEntity((BoardEntity *)(ulong)param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

