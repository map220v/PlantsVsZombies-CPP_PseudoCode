// Class: PlantAnimRig_Guacodile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Guacodile::PlayPreviewAnim(bool) */

void __thiscall PlantAnimRig_Guacodile::PlayPreviewAnim(PlantAnimRig_Guacodile *this,bool param_1)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"IDLE_WORLD");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,3,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (param_1) {
    std::string::string(asStack_40,"three_01");
  }
  else {
    std::string::string(asStack_40,"three_01");
  }
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_40,param_1);
  std::string::~string(asStack_40);
  nop();
  *(undefined4 *)(this + 0x218) = 1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Guacodile::onLevelUpdate() */

void __thiscall PlantAnimRig_Guacodile::onLevelUpdate(PlantAnimRig_Guacodile *this)

{
  bool bVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x224) == 2) {
    std::string::string(asStack_10,"touth_under");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,true);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"touth_up");
    bVar1 = true;
  }
  else {
    if (2 < *(int *)(this + 0x224)) {
      std::string::string(asStack_10,"touth_under");
      PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
      std::string::~string(asStack_10);
      nop();
      std::string::string(asStack_10,"touth_up");
      PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
      std::string::~string(asStack_10);
      nop();
      std::string::string(asStack_10,"touth2_under");
      PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,true);
      std::string::~string(asStack_10);
      nop();
      std::string::string(asStack_10,"touth2_up");
      bVar1 = true;
      goto LAB_041f3de4;
    }
    std::string::string(asStack_10,"touth_under");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"touth_up");
    bVar1 = false;
  }
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"touth2_under");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"touth2_up");
  bVar1 = false;
LAB_041f3de4:
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Guacodile::~PlantAnimRig_Guacodile() */

void __thiscall PlantAnimRig_Guacodile::~PlantAnimRig_Guacodile(PlantAnimRig_Guacodile *this)

{
  *(undefined ***)this = &PTR_GetClass_06806410;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Guacodile_06806678;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Guacodile::~PlantAnimRig_Guacodile() */

void __thiscall PlantAnimRig_Guacodile::~PlantAnimRig_Guacodile(PlantAnimRig_Guacodile *this)

{
  ~PlantAnimRig_Guacodile(this + -0x10);
  return;
}


/* PlantAnimRig_Guacodile::~PlantAnimRig_Guacodile() */

void __thiscall PlantAnimRig_Guacodile::~PlantAnimRig_Guacodile(PlantAnimRig_Guacodile *this)

{
  ~PlantAnimRig_Guacodile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Guacodile::~PlantAnimRig_Guacodile() */

void __thiscall PlantAnimRig_Guacodile::~PlantAnimRig_Guacodile(PlantAnimRig_Guacodile *this)

{
  ~PlantAnimRig_Guacodile(this + -0x10);
  return;
}


/* PlantAnimRig_Guacodile::PlantAnimRig_Guacodile() */

void __thiscall PlantAnimRig_Guacodile::PlantAnimRig_Guacodile(PlantAnimRig_Guacodile *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06806410;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Guacodile_06806678;
  return;
}


/* PlantAnimRig_Guacodile::StaticNew() */

PlantAnimRig_Guacodile * PlantAnimRig_Guacodile::StaticNew(void)

{
  PlantAnimRig_Guacodile *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_Guacodile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Guacodile::StaticClassInit() */

void PlantAnimRig_Guacodile::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Guacodile");
    (*pcVar2)(plVar1,asStack_10,FUN_041f4514,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Guacodile::StaticGetClass() */

long * PlantAnimRig_Guacodile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Guacodile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Guacodile::GetClass() const */

long * PlantAnimRig_Guacodile::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Guacodile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Guacodile::GetHideLayers() */

void __thiscall PlantAnimRig_Guacodile::GetHideLayers(PlantAnimRig_Guacodile *this)

{
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  std::string::string(asStack_10,"three_01");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"touth_under");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"touth2_under");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"touth_up");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"touth2_up");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

