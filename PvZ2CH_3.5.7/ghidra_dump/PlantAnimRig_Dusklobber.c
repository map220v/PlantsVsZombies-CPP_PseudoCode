// Class: PlantAnimRig_Dusklobber


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Dusklobber::StaticClassInit() */

void PlantAnimRig_Dusklobber::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Dusklobber");
    (*pcVar2)(plVar1,asStack_10,FUN_03bd78ac,0x408,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Dusklobber::StaticGetClass() */

long * PlantAnimRig_Dusklobber::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Dusklobber",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Dusklobber::GetClass() const */

long * PlantAnimRig_Dusklobber::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Dusklobber",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Dusklobber::PlantAnimRig_Dusklobber() */

void __thiscall PlantAnimRig_Dusklobber::PlantAnimRig_Dusklobber(PlantAnimRig_Dusklobber *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0673cc10;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Dusklobber_0673ce78;
  Set8BytesTo0(this + 0x3b8);
  AnimRigLayerSet::AnimRigLayerSet((AnimRigLayerSet *)(this + 0x3c0));
  return;
}


/* PlantAnimRig_Dusklobber::StaticNew() */

PlantAnimRig_Dusklobber * PlantAnimRig_Dusklobber::StaticNew(void)

{
  PlantAnimRig_Dusklobber *this;
  
  this = ::operator_new(0x408);
  PlantAnimRig_Dusklobber(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Dusklobber::PlayZenGardenIdleAnim() */

void __thiscall PlantAnimRig_Dusklobber::PlayZenGardenIdleAnim(PlantAnimRig_Dusklobber *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10,&PlantDusklobber::k_boostedOffLayerSetName);
  PlantAnimRig_DragonBruit::ShowBoostedLayerSet(this,asStack_10);
  std::string::~string(asStack_10);
  PlantAnimRig::PlayZenGardenIdleAnim((PlantAnimRig *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Dusklobber::~PlantAnimRig_Dusklobber() */

void __thiscall PlantAnimRig_Dusklobber::~PlantAnimRig_Dusklobber(PlantAnimRig_Dusklobber *this)

{
  *(undefined ***)this = &PTR_GetClass_0673cc10;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Dusklobber_0673ce78;
  AnimRigLayerSet::~AnimRigLayerSet((AnimRigLayerSet *)(this + 0x3c0));
  std::string::~string((string *)(this + 0x3b8));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Dusklobber::~PlantAnimRig_Dusklobber() */

void __thiscall PlantAnimRig_Dusklobber::~PlantAnimRig_Dusklobber(PlantAnimRig_Dusklobber *this)

{
  ~PlantAnimRig_Dusklobber(this + -0x10);
  return;
}


/* PlantAnimRig_Dusklobber::~PlantAnimRig_Dusklobber() */

void __thiscall PlantAnimRig_Dusklobber::~PlantAnimRig_Dusklobber(PlantAnimRig_Dusklobber *this)

{
  ~PlantAnimRig_Dusklobber(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Dusklobber::~PlantAnimRig_Dusklobber() */

void __thiscall PlantAnimRig_Dusklobber::~PlantAnimRig_Dusklobber(PlantAnimRig_Dusklobber *this)

{
  ~PlantAnimRig_Dusklobber(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Dusklobber::onPopAnimInitialized() */

void __thiscall PlantAnimRig_Dusklobber::onPopAnimInitialized(PlantAnimRig_Dusklobber *this)

{
  string *psVar1;
  string *psVar2;
  undefined1 auStack_130 [8];
  string asStack_128 [8];
  vector<std::string,std::allocator<std::string>> avStack_120 [16];
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
  FUN_05475d88(asStack_128,&PlantDusklobber::k_boostedOffLayerSetName);
  std::string::string(asStack_108,"blur");
  std::string::string(asStack_100,"lobber_body");
  std::string::string(asStack_f8,"lobber_body2");
  std::string::string(asStack_f0,"lobber_brow");
  std::string::string(asStack_e8,"lobber_eyelidl");
  std::string::string(asStack_e0,"lobber_eyelidl_blink");
  std::string::string(asStack_d8,"lobber_eyelidr");
  std::string::string(asStack_d0,"lobber_eyelidr_blink");
  std::string::string(asStack_c8,"lobber_eyeshadow");
  std::string::string(asStack_c0,"lobber_hairband");
  std::string::string(asStack_b8,"lobber_lobber");
  std::string::string(asStack_b0,"lobber_lobber_pf");
  std::string::string(asStack_a8,"lobber_lobber2");
  std::string::string(asStack_a0,"lobber_mouth");
  std::string::string(asStack_98,"lobber_mouth2");
  std::string::string(asStack_90,"lobber_mouth3");
  std::string::string(asStack_88,"lobber_pupil");
  std::string::string(asStack_80,"lobber_spike_lobber1");
  std::string::string(asStack_78,"lobber_spike_lobber2");
  std::string::string(asStack_70,"lobber_spike_lobber3");
  std::string::string(asStack_68,"lobber_spike_lobber4");
  std::string::string(asStack_60,"lobber_spike_lobber5");
  std::string::string(asStack_58,"lobber_spike_lobber6");
  std::string::string(asStack_50,"lobber_spike_lobber7");
  std::string::string(asStack_48,"lobber_spike_lobber8");
  std::string::string(asStack_40,"lobber_spike_lobber9");
  std::string::string(asStack_38,"lobber_spike_lower1");
  std::string::string(asStack_30,"lobber_spike_lower2");
  std::string::string(asStack_28,"lobber_spike_lower3");
  std::string::string(asStack_20,"lobber_spike_lower4");
  std::string::string(asStack_18,"lobber_spike1");
  std::string::string(asStack_10,"lobber_spike2");
  std::vector<std::string,std::allocator<std::string>>::vector
            (avStack_120,asStack_108,0x20,auStack_130);
  PlantAnimRig_DragonBruit::AddBoostedLayerSet
            ((PlantAnimRig_DragonBruit *)this,asStack_128,avStack_120);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_120);
  psVar2 = asStack_10;
  do {
    psVar1 = psVar2 + -8;
    std::string::~string(psVar2);
    psVar2 = psVar1;
  } while (psVar1 != asStack_110);
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  std::string::~string(asStack_128);
  FUN_05475d88(asStack_128,&PlantDusklobber::k_boostedOnLayerSetName);
  std::string::string(asStack_108,"blur_dark");
  std::string::string(asStack_100,"lobber_body_dark");
  std::string::string(asStack_f8,"lobber_body2_dark");
  std::string::string(asStack_f0,"lobber_brow_dark");
  std::string::string(asStack_e8,"lobber_eyelidl_dark");
  std::string::string(asStack_e0,"lobber_eyelidl_blink_dark");
  std::string::string(asStack_d8,"lobber_eyelidr_dark");
  std::string::string(asStack_d0,"lobber_eyelidr_blink_dark");
  std::string::string(asStack_c8,"lobber_eyeshadow_dark");
  std::string::string(asStack_c0,"lobber_hairband_dark");
  std::string::string(asStack_b8,"lobber_lobber_dark");
  std::string::string(asStack_b0,"lobber_lobber_pf_dark");
  std::string::string(asStack_a8,"lobber_lobber2_dark");
  std::string::string(asStack_a0,"lobber_mouth_dark");
  std::string::string(asStack_98,"lobber_mouth2_dark");
  std::string::string(asStack_90,"lobber_mouth3_dark");
  std::string::string(asStack_88,"lobber_pupil_dark");
  std::string::string(asStack_80,"lobber_spike_lobber1_dark");
  std::string::string(asStack_78,"lobber_spike_lobber2_dark");
  std::string::string(asStack_70,"lobber_spike_lobber3_dark");
  std::string::string(asStack_68,"lobber_spike_lobber4_dark");
  std::string::string(asStack_60,"lobber_spike_lobber5_dark");
  std::string::string(asStack_58,"lobber_spike_lobber6_dark");
  std::string::string(asStack_50,"lobber_spike_lobber7_dark");
  std::string::string(asStack_48,"lobber_spike_lobber8_dark");
  std::string::string(asStack_40,"lobber_spike_lobber9_dark");
  std::string::string(asStack_38,"lobber_spike_lower1_dark");
  std::string::string(asStack_30,"lobber_spike_lower2_dark");
  std::string::string(asStack_28,"lobber_spike_lower3_dark");
  std::string::string(asStack_20,"lobber_spike_lower4_dark");
  std::string::string(asStack_18,"lobber_spike1_dark");
  std::string::string(asStack_10,"lobber_spike2_dark");
  std::vector<std::string,std::allocator<std::string>>::vector
            (avStack_120,asStack_108,0x20,auStack_130);
  PlantAnimRig_DragonBruit::AddBoostedLayerSet
            ((PlantAnimRig_DragonBruit *)this,asStack_128,avStack_120);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_120);
  psVar2 = asStack_10;
  do {
    psVar1 = psVar2 + -8;
    std::string::~string(psVar2);
    psVar2 = psVar1;
  } while (psVar1 != asStack_110);
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  std::string::~string(asStack_128);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Dusklobber::PlayPreviewAnim(bool) */

void PlantAnimRig_Dusklobber::PlayPreviewAnim(bool param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10,&PlantDusklobber::k_boostedOffLayerSetName);
  PlantAnimRig_DragonBruit::ShowBoostedLayerSet((BoardEntity *)(ulong)param_1,asStack_10);
  std::string::~string(asStack_10);
  TwinsRedStarProjectile::damageEntity((BoardEntity *)(ulong)param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

