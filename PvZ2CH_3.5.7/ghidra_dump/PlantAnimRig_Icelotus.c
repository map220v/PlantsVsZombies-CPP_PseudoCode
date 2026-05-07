// Class: PlantAnimRig_Icelotus


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Icelotus::StaticClassInit() */

void PlantAnimRig_Icelotus::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Icelotus");
    (*pcVar2)(plVar1,asStack_10,FUN_04ce88b0,0x408,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Icelotus::StaticGetClass() */

long * PlantAnimRig_Icelotus::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Icelotus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Icelotus::GetClass() const */

long * PlantAnimRig_Icelotus::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Icelotus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Icelotus::PlantAnimRig_Icelotus() */

void __thiscall PlantAnimRig_Icelotus::PlantAnimRig_Icelotus(PlantAnimRig_Icelotus *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_069a2bc0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Icelotus_069a2e28;
  AnimRigLayerSet::AnimRigLayerSet((AnimRigLayerSet *)(this + 0x3b8));
  this[0x400] = (PlantAnimRig_Icelotus)0x1;
  return;
}


/* PlantAnimRig_Icelotus::StaticNew() */

PlantAnimRig_Icelotus * PlantAnimRig_Icelotus::StaticNew(void)

{
  PlantAnimRig_Icelotus *this;
  
  this = ::operator_new(0x408);
  PlantAnimRig_Icelotus(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Icelotus::ShowIceLayer(bool) */

void __thiscall PlantAnimRig_Icelotus::ShowIceLayer(PlantAnimRig_Icelotus *this,bool param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"icelotus_icebuttom");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"icelotus_back_lv3_right");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"icelotus_back_lv3_left");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"icelotus_stem_lv3");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"icelotus_front_lv3_left");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"icelotus_front_lv3_right");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"icepiece1");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"icepiece2");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"icepiece3");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Icelotus::onAnimStoppedCallback(std::string const&) */

void __thiscall
PlantAnimRig_Icelotus::onAnimStoppedCallback(PlantAnimRig_Icelotus *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"reload");
  if (bVar1) {
    this[0x400] = (PlantAnimRig_Icelotus)0x0;
  }
  else {
    bVar1 = std::operator==(param_1,"attack");
    if ((bVar1) || (bVar1 = std::operator==(param_1,"plantfood"), bVar1)) {
      this[0x400] = (PlantAnimRig_Icelotus)0x1;
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Icelotus::PlayIdleLooped() */

void __thiscall PlantAnimRig_Icelotus::PlayIdleLooped(PlantAnimRig_Icelotus *this)

{
  code *pcVar1;
  string asStack_58 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x218) = 1;
  if (this[0x400] == (PlantAnimRig_Icelotus)0x0) {
    pcVar1 = *(code **)(*(long *)this + 0x78);
    std::string::string(asStack_58,"idle");
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_50);
    (*pcVar1)(this,asStack_58,1,0,avStack_50);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_50);
    std::string::~string(asStack_58);
    nop();
  }
  else {
    std::string::string(asStack_58,"reload");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onAnimStoppedCallback);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<PlantAnimRig_Icelotus,void(PlantAnimRig_Icelotus::*)(std::string_const&)>
              (aDStack_38,avStack_50);
    PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aDStack_38);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* PlantAnimRig_Icelotus::~PlantAnimRig_Icelotus() */

void __thiscall PlantAnimRig_Icelotus::~PlantAnimRig_Icelotus(PlantAnimRig_Icelotus *this)

{
  *(undefined ***)this = &PTR_GetClass_069a2bc0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Icelotus_069a2e28;
  AnimRigLayerSet::~AnimRigLayerSet((AnimRigLayerSet *)(this + 0x3b8));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Icelotus::~PlantAnimRig_Icelotus() */

void __thiscall PlantAnimRig_Icelotus::~PlantAnimRig_Icelotus(PlantAnimRig_Icelotus *this)

{
  ~PlantAnimRig_Icelotus(this + -0x10);
  return;
}


/* PlantAnimRig_Icelotus::~PlantAnimRig_Icelotus() */

void __thiscall PlantAnimRig_Icelotus::~PlantAnimRig_Icelotus(PlantAnimRig_Icelotus *this)

{
  ~PlantAnimRig_Icelotus(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Icelotus::~PlantAnimRig_Icelotus() */

void __thiscall PlantAnimRig_Icelotus::~PlantAnimRig_Icelotus(PlantAnimRig_Icelotus *this)

{
  ~PlantAnimRig_Icelotus(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Icelotus::onPopAnimInitialized() */

void __thiscall PlantAnimRig_Icelotus::onPopAnimInitialized(PlantAnimRig_Icelotus *this)

{
  string *psVar1;
  undefined1 auStack_58 [8];
  string asStack_50 [8];
  vector<std::string,std::allocator<std::string>> avStack_48 [24];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantAnimRig::onPopAnimInitialized((PlantAnimRig *)this);
  FUN_05475d88(asStack_50,&DAT_06b96488);
  std::string::string(asStack_30,"icelotus_lefthand_stage1");
  psVar1 = (string *)&local_8;
  std::string::string(asStack_28,"icelotus_face_stage1");
  std::string::string(asStack_20,"icelotus_leaf_back_stage1");
  std::string::string(asStack_18,"icelotus_leaf_right_stage1");
  std::string::string(asStack_10,"icelotus_righthand_stage1");
  std::vector<std::string,std::allocator<std::string>>::vector(avStack_48,asStack_30,5,auStack_58);
  PlantAnimRig_DragonBabyBruit::AddBoostedLayerSet
            ((PlantAnimRig_DragonBabyBruit *)this,asStack_50,avStack_48);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_48);
  do {
    psVar1 = psVar1 + -8;
    std::string::~string(psVar1);
  } while (psVar1 != asStack_30);
  psVar1 = (string *)&local_8;
  nop();
  nop();
  nop();
  nop();
  nop();
  std::string::~string(asStack_50);
  FUN_05475d88(asStack_50,&DAT_06b96420);
  std::string::string(asStack_30,"icelotus_lefthand_stage2");
  std::string::string(asStack_28,"icelotus_face_stage2");
  std::string::string(asStack_20,"icelotus_leaf_back_stage2");
  std::string::string(asStack_18,"icelotus_leaf_right_stage2");
  std::string::string(asStack_10,"icelotus_righthand_stage2");
  std::vector<std::string,std::allocator<std::string>>::vector(avStack_48,asStack_30,5,auStack_58);
  PlantAnimRig_DragonBabyBruit::AddBoostedLayerSet
            ((PlantAnimRig_DragonBabyBruit *)this,asStack_50,avStack_48);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_48);
  do {
    psVar1 = psVar1 + -8;
    std::string::~string(psVar1);
  } while (psVar1 != asStack_30);
  psVar1 = (string *)&local_8;
  nop();
  nop();
  nop();
  nop();
  nop();
  std::string::~string(asStack_50);
  FUN_05475d88(asStack_50,&DAT_06b963f0);
  std::string::string(asStack_30,"icelotus_lefthand_stage3");
  std::string::string(asStack_28,"icelotus_face_stage3");
  std::string::string(asStack_20,"icelotus_leaf_back_stage3");
  std::string::string(asStack_18,"icelotus_leaf_right_stage3");
  std::string::string(asStack_10,"icelotus_righthand_stage3");
  std::vector<std::string,std::allocator<std::string>>::vector(avStack_48,asStack_30,5,auStack_58);
  PlantAnimRig_DragonBabyBruit::AddBoostedLayerSet
            ((PlantAnimRig_DragonBabyBruit *)this,asStack_50,avStack_48);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_48);
  do {
    psVar1 = psVar1 + -8;
    std::string::~string(psVar1);
  } while (psVar1 != asStack_30);
  nop();
  nop();
  nop();
  nop();
  nop();
  std::string::~string(asStack_50);
  this[0x400] = (PlantAnimRig_Icelotus)0x1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Icelotus::PlayWatering() */

void __thiscall PlantAnimRig_Icelotus::PlayWatering(PlantAnimRig_Icelotus *this)

{
  this[0x400] = (PlantAnimRig_Icelotus)0x1;
  PlantAnimRig::PlayWatering((PlantAnimRig *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Icelotus::PlayPreviewAnim(bool) */

void PlantAnimRig_Icelotus::PlayPreviewAnim(bool param_1)

{
  PlantAnimRig_Icelotus *this;
  string asStack_10 [8];
  long local_8;
  
  this = (PlantAnimRig_Icelotus *)(ulong)param_1;
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10,&DAT_06b96488);
  PlantAnimRig_DragonBabyBruit::ShowBoostedLayerSet(this,asStack_10);
  std::string::~string(asStack_10);
  this[0x400] = (PlantAnimRig_Icelotus)0x0;
  ShowIceLayer(this,false);
  TwinsRedStarProjectile::damageEntity((BoardEntity *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

