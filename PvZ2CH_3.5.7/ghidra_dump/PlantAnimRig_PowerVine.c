// Class: PlantAnimRig_PowerVine


/* PlantAnimRig_PowerVine::PlantAnimRig_PowerVine() */

void __thiscall PlantAnimRig_PowerVine::PlantAnimRig_PowerVine(PlantAnimRig_PowerVine *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_069a8fe0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_PowerVine_069a9248;
  AnimRigLayerSet::AnimRigLayerSet((AnimRigLayerSet *)(this + 0x3b8));
  *(undefined4 *)(this + 0x400) = 0;
  return;
}


/* PlantAnimRig_PowerVine::StaticNew() */

PlantAnimRig_PowerVine * PlantAnimRig_PowerVine::StaticNew(void)

{
  PlantAnimRig_PowerVine *this;
  
  this = ::operator_new(0x408);
  PlantAnimRig_PowerVine(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_PowerVine::StaticClassInit() */

void PlantAnimRig_PowerVine::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_PowerVine");
    (*pcVar2)(plVar1,asStack_10,FUN_04d16464,0x408,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_PowerVine::StaticGetClass() */

long * PlantAnimRig_PowerVine::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_PowerVine",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_PowerVine::GetClass() const */

long * PlantAnimRig_PowerVine::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_PowerVine",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_PowerVine::PlayZenGardenIdleAnim() */

void __thiscall PlantAnimRig_PowerVine::PlayZenGardenIdleAnim(PlantAnimRig_PowerVine *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10,&PlantPowerVine::k_normalLayerSetName);
  PlantAnimRig_DragonBabyBruit::ShowBoostedLayerSet(this,asStack_10);
  std::string::~string(asStack_10);
  PlantAnimRig::PlayZenGardenIdleAnim((PlantAnimRig *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_PowerVine::PlayLv2Projectile() */

void __thiscall PlantAnimRig_PowerVine::PlayLv2Projectile(PlantAnimRig_PowerVine *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"attack_lv2");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 2;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_PowerVine::PlayLv5Projectile() */

void __thiscall PlantAnimRig_PowerVine::PlayLv5Projectile(PlantAnimRig_PowerVine *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"attack_lv5");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 2;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* PlantAnimRig_PowerVine::~PlantAnimRig_PowerVine() */

void __thiscall PlantAnimRig_PowerVine::~PlantAnimRig_PowerVine(PlantAnimRig_PowerVine *this)

{
  *(undefined ***)this = &PTR_GetClass_069a8fe0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_PowerVine_069a9248;
  AnimRigLayerSet::~AnimRigLayerSet((AnimRigLayerSet *)(this + 0x3b8));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_PowerVine::~PlantAnimRig_PowerVine() */

void __thiscall PlantAnimRig_PowerVine::~PlantAnimRig_PowerVine(PlantAnimRig_PowerVine *this)

{
  ~PlantAnimRig_PowerVine(this + -0x10);
  return;
}


/* PlantAnimRig_PowerVine::~PlantAnimRig_PowerVine() */

void __thiscall PlantAnimRig_PowerVine::~PlantAnimRig_PowerVine(PlantAnimRig_PowerVine *this)

{
  ~PlantAnimRig_PowerVine(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_PowerVine::~PlantAnimRig_PowerVine() */

void __thiscall PlantAnimRig_PowerVine::~PlantAnimRig_PowerVine(PlantAnimRig_PowerVine *this)

{
  ~PlantAnimRig_PowerVine(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_PowerVine::onPopAnimInitialized() */

void __thiscall PlantAnimRig_PowerVine::onPopAnimInitialized(PlantAnimRig_PowerVine *this)

{
  string *psVar1;
  string *psVar2;
  undefined1 auStack_110 [8];
  string asStack_108 [8];
  vector<std::string,std::allocator<std::string>> avStack_100 [16];
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
  FUN_05475d88(asStack_108,&PlantPowerVine::k_networkedLayerSetName);
  std::string::string(asStack_e8,"powervine_back_network");
  std::string::string(asStack_e0,"powervine_base01_network");
  std::string::string(asStack_d8,"powervine_base02_network");
  std::string::string(asStack_d0,"powervine_body_network");
  std::string::string(asStack_c8,"powervine_eye_left_network");
  std::string::string(asStack_c0,"powervine_eye_right_network");
  std::string::string(asStack_b8,"powervine_eyeball_left_network");
  std::string::string(asStack_b0,"powervine_eyeball_right_network");
  std::string::string(asStack_a8,"powervine_eyebrow_left_network");
  std::string::string(asStack_a0,"powervine_eyebrow_left1_network");
  std::string::string(asStack_98,"powervine_eyebrow_left3_network");
  std::string::string(asStack_90,"powervine_eyebrow_left4_network");
  std::string::string(asStack_88,"powervine_eyebrow_left5_network");
  std::string::string(asStack_80,"powervine_eyebrow_right_network");
  std::string::string(asStack_78,"powervine_eyebrow_right2_network");
  std::string::string(asStack_70,"powervine_eyebrow_right3_network");
  std::string::string(asStack_68,"powervine_eyebrow_right4_network");
  std::string::string(asStack_60,"powervine_eyebrow_right5_network");
  std::string::string(asStack_58,"powervine_hair_network");
  std::string::string(asStack_50,"powervine_facglow_network");
  std::string::string(asStack_48,"powervine_leaf01_network");
  std::string::string(asStack_40,"powervine_leaf02_network");
  std::string::string(asStack_38,"powervine_lip_network");
  std::string::string(asStack_30,"powervine_lip2_network");
  std::string::string(asStack_28,"powervine_nose_network");
  std::string::string(asStack_20,"powervine_sprout_network");
  std::string::string(asStack_18,"powervine_sprout01_network");
  std::string::string(asStack_10,"powervine_sprout02_network");
  std::vector<std::string,std::allocator<std::string>>::vector
            (avStack_100,asStack_e8,0x1c,auStack_110);
  PlantAnimRig_DragonBabyBruit::AddBoostedLayerSet
            ((PlantAnimRig_DragonBabyBruit *)this,asStack_108,avStack_100);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_100);
  psVar2 = asStack_10;
  do {
    psVar1 = psVar2 + -8;
    std::string::~string(psVar2);
    psVar2 = psVar1;
  } while (psVar1 != asStack_f0);
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
  std::string::~string(asStack_108);
  FUN_05475d88(asStack_108,&PlantPowerVine::k_normalLayerSetName);
  std::string::string(asStack_e8,"powervine_back");
  std::string::string(asStack_e0,"powervine_base01");
  std::string::string(asStack_d8,"powervine_base02");
  std::string::string(asStack_d0,"powervine_body");
  std::string::string(asStack_c8,"powervine_eye_left");
  std::string::string(asStack_c0,"powervine_eye_right");
  std::string::string(asStack_b8,"powervine_eyeball_left");
  std::string::string(asStack_b0,"powervine_eyeball_right");
  std::string::string(asStack_a8,"powervine_eyebrow_left");
  std::string::string(asStack_a0,"powervine_eyebrow_left1");
  std::string::string(asStack_98,"powervine_eyebrow_left3");
  std::string::string(asStack_90,"powervine_eyebrow_left4");
  std::string::string(asStack_88,"powervine_eyebrow_left5");
  std::string::string(asStack_80,"powervine_eyebrow_right");
  std::string::string(asStack_78,"powervine_eyebrow_right2");
  std::string::string(asStack_70,"powervine_eyebrow_right3");
  std::string::string(asStack_68,"powervine_eyebrow_right4");
  std::string::string(asStack_60,"powervine_eyebrow_right5");
  std::string::string(asStack_58,"powervine_hair");
  std::string::string(asStack_50,"powervine_facglow_network");
  std::string::string(asStack_48,"powervine_leaf01");
  std::string::string(asStack_40,"powervine_leaf02");
  std::string::string(asStack_38,"powervine_lip");
  std::string::string(asStack_30,"powervine_lip2");
  std::string::string(asStack_28,"powervine_nose");
  std::string::string(asStack_20,"powervine_sprout");
  std::string::string(asStack_18,"powervine_sprout01");
  std::string::string(asStack_10,"powervine_sprout02");
  std::vector<std::string,std::allocator<std::string>>::vector
            (avStack_100,asStack_e8,0x1c,auStack_110);
  PlantAnimRig_DragonBabyBruit::AddBoostedLayerSet
            ((PlantAnimRig_DragonBabyBruit *)this,asStack_108,avStack_100);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_100);
  psVar2 = asStack_10;
  do {
    psVar1 = psVar2 + -8;
    std::string::~string(psVar2);
    psVar2 = psVar1;
  } while (psVar1 != asStack_f0);
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
  std::string::~string(asStack_108);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_PowerVine::PlayPreviewAnim(bool) */

void PlantAnimRig_PowerVine::PlayPreviewAnim(bool param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10,&PlantPowerVine::k_normalLayerSetName);
  PlantAnimRig_DragonBabyBruit::ShowBoostedLayerSet((BoardEntity *)(ulong)param_1,asStack_10);
  std::string::~string(asStack_10);
  TwinsRedStarProjectile::damageEntity((BoardEntity *)(ulong)param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

