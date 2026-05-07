// Class: PlantAnimRig_ShadowShroom


/* PlantAnimRig_ShadowShroom::PlantAnimRig_ShadowShroom() */

void __thiscall
PlantAnimRig_ShadowShroom::PlantAnimRig_ShadowShroom(PlantAnimRig_ShadowShroom *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0673c350;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_ShadowShroom_0673c5b8;
  AnimRigLayerSet::AnimRigLayerSet((AnimRigLayerSet *)(this + 0x3b8));
  return;
}


/* PlantAnimRig_ShadowShroom::StaticNew() */

PlantAnimRig_ShadowShroom * PlantAnimRig_ShadowShroom::StaticNew(void)

{
  PlantAnimRig_ShadowShroom *this;
  
  this = ::operator_new(0x400);
  PlantAnimRig_ShadowShroom(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ShadowShroom::StaticClassInit() */

void PlantAnimRig_ShadowShroom::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_ShadowShroom");
    (*pcVar2)(plVar1,asStack_10,FUN_03bd1b3c,0x400,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_ShadowShroom::StaticGetClass() */

long * PlantAnimRig_ShadowShroom::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_ShadowShroom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_ShadowShroom::GetClass() const */

long * PlantAnimRig_ShadowShroom::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_ShadowShroom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ShadowShroom::PlayZenGardenIdleAnim() */

void __thiscall PlantAnimRig_ShadowShroom::PlayZenGardenIdleAnim(PlantAnimRig_ShadowShroom *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10,&PlantShadowShroom::k_boostedOffLayerSetName);
  PlantAnimRig_DragonBabyBruit::ShowBoostedLayerSet(this,asStack_10);
  std::string::~string(asStack_10);
  PlantAnimRig::PlayZenGardenIdleAnim((PlantAnimRig *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_ShadowShroom::~PlantAnimRig_ShadowShroom() */

void __thiscall
PlantAnimRig_ShadowShroom::~PlantAnimRig_ShadowShroom(PlantAnimRig_ShadowShroom *this)

{
  *(undefined ***)this = &PTR_GetClass_0673c350;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_ShadowShroom_0673c5b8;
  AnimRigLayerSet::~AnimRigLayerSet((AnimRigLayerSet *)(this + 0x3b8));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_ShadowShroom::~PlantAnimRig_ShadowShroom() */

void __thiscall
PlantAnimRig_ShadowShroom::~PlantAnimRig_ShadowShroom(PlantAnimRig_ShadowShroom *this)

{
  ~PlantAnimRig_ShadowShroom(this + -0x10);
  return;
}


/* PlantAnimRig_ShadowShroom::~PlantAnimRig_ShadowShroom() */

void __thiscall
PlantAnimRig_ShadowShroom::~PlantAnimRig_ShadowShroom(PlantAnimRig_ShadowShroom *this)

{
  ~PlantAnimRig_ShadowShroom(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_ShadowShroom::~PlantAnimRig_ShadowShroom() */

void __thiscall
PlantAnimRig_ShadowShroom::~PlantAnimRig_ShadowShroom(PlantAnimRig_ShadowShroom *this)

{
  ~PlantAnimRig_ShadowShroom(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ShadowShroom::onPopAnimInitialized() */

void __thiscall PlantAnimRig_ShadowShroom::onPopAnimInitialized(PlantAnimRig_ShadowShroom *this)

{
  string *psVar1;
  undefined1 auStack_88 [8];
  string asStack_80 [8];
  vector<std::string,std::allocator<std::string>> avStack_78 [24];
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
  FUN_05475d88(asStack_80,&PlantShadowShroom::k_boostedOffLayerSetName);
  std::string::string(asStack_60,"shadow_head_cap");
  psVar1 = (string *)&local_8;
  std::string::string(asStack_58,"shadow_head_cheekr");
  std::string::string(asStack_50,"shadow_head_mouth_tongue");
  std::string::string(asStack_48,"shadow_head_mouth_tongue2");
  std::string::string(asStack_40,"shadow_head_mouth_tongue3");
  std::string::string(asStack_38,"shadow_head_cheekl");
  std::string::string(asStack_30,"shadow_eyel");
  std::string::string(asStack_28,"shadow_eyer");
  std::string::string(asStack_20,"shadow_body");
  std::string::string(asStack_18,"shadow_eyel_blink");
  std::string::string(asStack_10,"shadow_eyer_blink");
  std::vector<std::string,std::allocator<std::string>>::vector(avStack_78,asStack_60,0xb,auStack_88)
  ;
  PlantAnimRig_DragonBabyBruit::AddBoostedLayerSet
            ((PlantAnimRig_DragonBabyBruit *)this,asStack_80,avStack_78);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_78);
  do {
    psVar1 = psVar1 + -8;
    std::string::~string(psVar1);
  } while (psVar1 != asStack_60);
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
  std::string::~string(asStack_80);
  FUN_05475d88(asStack_80,&PlantShadowShroom::k_boostedOnLayerSetName);
  std::string::string(asStack_60,"shadow_head_cap_dark");
  std::string::string(asStack_58,"shadow_head_cheekr_dark");
  std::string::string(asStack_50,"shadow_head_mouth_tongue_dark");
  std::string::string(asStack_48,"shadow_head_mouth_tongue2_dark");
  std::string::string(asStack_40,"shadow_head_mouth_tongue3_dark");
  std::string::string(asStack_38,"shadow_head_cheekl_dark");
  std::string::string(asStack_30,"shadow_eyel_dark");
  std::string::string(asStack_28,"shadow_eyer_dark");
  std::string::string(asStack_20,"shadow_body_dark");
  std::string::string(asStack_18,"shadow_eyel_blink_dark");
  std::string::string(asStack_10,"shadow_eyer_blink_dark");
  std::vector<std::string,std::allocator<std::string>>::vector(avStack_78,asStack_60,0xb,auStack_88)
  ;
  PlantAnimRig_DragonBabyBruit::AddBoostedLayerSet
            ((PlantAnimRig_DragonBabyBruit *)this,asStack_80,avStack_78);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_78);
  do {
    psVar1 = psVar1 + -8;
    std::string::~string(psVar1);
  } while (psVar1 != asStack_60);
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  std::string::~string(asStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ShadowShroom::PlayPreviewAnim(bool) */

void PlantAnimRig_ShadowShroom::PlayPreviewAnim(bool param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10,&PlantShadowShroom::k_boostedOffLayerSetName);
  PlantAnimRig_DragonBabyBruit::ShowBoostedLayerSet((BoardEntity *)(ulong)param_1,asStack_10);
  std::string::~string(asStack_10);
  TwinsRedStarProjectile::damageEntity((BoardEntity *)(ulong)param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_ShadowShroom::PopAnimPlaySample(std::string const&, int, double, double) */

void PlantAnimRig_ShadowShroom::PopAnimPlaySample
               (string *param_1,int param_2,double param_3,double param_4)

{
  char cVar1;
  
  if (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) {
    cVar1 = Board::IsGameplayEnded(*(Board **)(gLawnApp + 0x9f0));
    if (cVar1 != '\0') {
      return;
    }
  }
  PopAnimRig::PopAnimPlaySample(param_1,param_2,param_3,param_4);
  return;
}


/* non-virtual thunk to PlantAnimRig_ShadowShroom::PopAnimPlaySample(std::string const&, int,
   double, double) */

void __thiscall
PlantAnimRig_ShadowShroom::PopAnimPlaySample
          (PlantAnimRig_ShadowShroom *this,string *param_1,int param_2,double param_3,double param_4
          )

{
  PopAnimPlaySample((string *)(this + -0x10),(int)param_1,param_3,param_4);
  return;
}

