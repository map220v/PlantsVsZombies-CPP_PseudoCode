// Class: PlantAnimRig_Holonut


/* PlantAnimRig_Holonut::PlantAnimRig_Holonut() */

void __thiscall PlantAnimRig_Holonut::PlantAnimRig_Holonut(PlantAnimRig_Holonut *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0679ba50;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Holonut_0679bcb8;
  AnimRigLayerSet::AnimRigLayerSet((AnimRigLayerSet *)(this + 0x3c0));
  return;
}


/* PlantAnimRig_Holonut::StaticNew() */

PlantAnimRig_Holonut * PlantAnimRig_Holonut::StaticNew(void)

{
  PlantAnimRig_Holonut *this;
  
  this = ::operator_new(0x408);
  PlantAnimRig_Holonut(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Holonut::StaticClassInit() */

void PlantAnimRig_Holonut::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Holonut");
    (*pcVar2)(plVar1,asStack_10,FUN_03f5a84c,0x408,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Holonut::StaticGetClass() */

long * PlantAnimRig_Holonut::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Holonut",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Holonut::GetClass() const */

long * PlantAnimRig_Holonut::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Holonut",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Holonut::PlayZenGardenIdleAnim() */

void __thiscall PlantAnimRig_Holonut::PlayZenGardenIdleAnim(PlantAnimRig_Holonut *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10,&k_normalLayerSetName);
  PlantAnimRig_DragonBruit::ShowBoostedLayerSet(this,asStack_10);
  std::string::~string(asStack_10);
  PlantAnimRig::PlayZenGardenIdleAnim((PlantAnimRig *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Holonut::PlayPlanted() */

void __thiscall PlantAnimRig_Holonut::PlayPlanted(PlantAnimRig_Holonut *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"plant");
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
/* PlantAnimRig_Holonut::PlayRecover() */

void __thiscall PlantAnimRig_Holonut::PlayRecover(PlantAnimRig_Holonut *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"recover");
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
/* PlantAnimRig_Holonut::PlayDie() */

void __thiscall PlantAnimRig_Holonut::PlayDie(PlantAnimRig_Holonut *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"die");
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


/* PlantAnimRig_Holonut::~PlantAnimRig_Holonut() */

void __thiscall PlantAnimRig_Holonut::~PlantAnimRig_Holonut(PlantAnimRig_Holonut *this)

{
  *(undefined ***)this = &PTR_GetClass_0679ba50;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Holonut_0679bcb8;
  AnimRigLayerSet::~AnimRigLayerSet((AnimRigLayerSet *)(this + 0x3c0));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Holonut::~PlantAnimRig_Holonut() */

void __thiscall PlantAnimRig_Holonut::~PlantAnimRig_Holonut(PlantAnimRig_Holonut *this)

{
  ~PlantAnimRig_Holonut(this + -0x10);
  return;
}


/* PlantAnimRig_Holonut::~PlantAnimRig_Holonut() */

void __thiscall PlantAnimRig_Holonut::~PlantAnimRig_Holonut(PlantAnimRig_Holonut *this)

{
  ~PlantAnimRig_Holonut(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Holonut::~PlantAnimRig_Holonut() */

void __thiscall PlantAnimRig_Holonut::~PlantAnimRig_Holonut(PlantAnimRig_Holonut *this)

{
  ~PlantAnimRig_Holonut(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Holonut::onPopAnimInitialized() */

void __thiscall PlantAnimRig_Holonut::onPopAnimInitialized(PlantAnimRig_Holonut *this)

{
  undefined1 auStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantAnimRig::onPopAnimInitialized((PlantAnimRig *)this);
  FUN_05475d88(asStack_30,&k_normalLayerSetName);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  PlantAnimRig_DragonBruit::AddBoostedLayerSet
            ((PlantAnimRig_DragonBruit *)this,asStack_30,avStack_20);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  std::string::~string(asStack_30);
  FUN_05475d88(asStack_30,&k_halfshieldLayerSetName);
  std::string::string(asStack_28,"hu_halfshield");
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,asStack_28,1,auStack_38);
  PlantAnimRig_DragonBruit::AddBoostedLayerSet
            ((PlantAnimRig_DragonBruit *)this,asStack_30,avStack_20);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  std::string::~string(asStack_28);
  nop();
  std::string::~string(asStack_30);
  FUN_05475d88(asStack_30,&k_totalshieldLayerSetName);
  std::string::string(asStack_28,"hu_totalshield");
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,asStack_28,1,auStack_38);
  PlantAnimRig_DragonBruit::AddBoostedLayerSet
            ((PlantAnimRig_DragonBruit *)this,asStack_30,avStack_20);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  std::string::~string(asStack_28);
  nop();
  std::string::~string(asStack_30);
  this[0x3b8] = (PlantAnimRig_Holonut)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Holonut::PlayIdleLooped() */

void __thiscall PlantAnimRig_Holonut::PlayIdleLooped(PlantAnimRig_Holonut *this)

{
  undefined1 uVar1;
  int iVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x3b8] == (PlantAnimRig_Holonut)0x0) {
    uVar1 = PlantAnimRig::PlayIdleLooped((PlantAnimRig *)this);
  }
  else {
    std::string::string(asStack_40,"projector_idle");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    iVar2 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    uVar1 = iVar2 != -1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Holonut::PlayPreviewAnim(bool) */

void PlantAnimRig_Holonut::PlayPreviewAnim(bool param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10,&k_normalLayerSetName);
  PlantAnimRig_DragonBruit::ShowBoostedLayerSet((BoardEntity *)(ulong)param_1,asStack_10);
  std::string::~string(asStack_10);
  TwinsRedStarProjectile::damageEntity((BoardEntity *)(ulong)param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

