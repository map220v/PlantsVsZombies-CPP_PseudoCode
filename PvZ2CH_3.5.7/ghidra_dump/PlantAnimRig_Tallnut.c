// Class: PlantAnimRig_Tallnut


/* PlantAnimRig_Tallnut::SetArmorStateIndex(int) */

void __thiscall PlantAnimRig_Tallnut::SetArmorStateIndex(PlantAnimRig_Tallnut *this,int param_1)

{
  int iVar1;
  string *psVar2;
  int iVar3;
  string *psVar4;
  string *psVar5;
  
  iVar1 = (**(code **)(*(long *)this + 600))();
  if (0 < iVar1) {
    psVar4 = (string *)&DAT_06ae3fc0;
    psVar5 = (string *)&DAT_06ae3ef8;
    iVar3 = 0;
    do {
      psVar2 = psVar4;
      if (this[0x220] == (PlantAnimRig_Tallnut)0x0) {
        psVar2 = psVar5;
      }
      PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar2,param_1 == iVar3);
      iVar3 = iVar3 + 1;
      psVar4 = psVar4 + 8;
      psVar5 = psVar5 + 8;
    } while (iVar3 != iVar1);
  }
  return;
}


/* PlantAnimRig_Tallnut::~PlantAnimRig_Tallnut() */

void __thiscall PlantAnimRig_Tallnut::~PlantAnimRig_Tallnut(PlantAnimRig_Tallnut *this)

{
  *(undefined ***)this = &PTR_GetClass_0679e040;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Tallnut_0679e2b8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Tallnut::~PlantAnimRig_Tallnut() */

void __thiscall PlantAnimRig_Tallnut::~PlantAnimRig_Tallnut(PlantAnimRig_Tallnut *this)

{
  ~PlantAnimRig_Tallnut(this + -0x10);
  return;
}


/* PlantAnimRig_Tallnut::~PlantAnimRig_Tallnut() */

void __thiscall PlantAnimRig_Tallnut::~PlantAnimRig_Tallnut(PlantAnimRig_Tallnut *this)

{
  ~PlantAnimRig_Tallnut(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Tallnut::~PlantAnimRig_Tallnut() */

void __thiscall PlantAnimRig_Tallnut::~PlantAnimRig_Tallnut(PlantAnimRig_Tallnut *this)

{
  ~PlantAnimRig_Tallnut(this + -0x10);
  return;
}


/* PlantAnimRig_Tallnut::PlantAnimRig_Tallnut() */

void __thiscall PlantAnimRig_Tallnut::PlantAnimRig_Tallnut(PlantAnimRig_Tallnut *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  this[0x3b8] = (PlantAnimRig_Tallnut)0x0;
  *(undefined ***)this = &PTR_GetClass_0679e040;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Tallnut_0679e2b8;
  return;
}


/* PlantAnimRig_Tallnut::StaticNew() */

PlantAnimRig_Tallnut * PlantAnimRig_Tallnut::StaticNew(void)

{
  PlantAnimRig_Tallnut *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_Tallnut(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Tallnut::StaticClassInit() */

void PlantAnimRig_Tallnut::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Tallnut");
    (*pcVar2)(plVar1,asStack_10,FUN_03f60114,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Tallnut::StaticGetClass() */

long * PlantAnimRig_Tallnut::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Tallnut",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Tallnut::GetClass() const */

long * PlantAnimRig_Tallnut::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Tallnut",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Tallnut::HideAllShieldLayer() */

void __thiscall PlantAnimRig_Tallnut::HideAllShieldLayer(PlantAnimRig_Tallnut *this)

{
  string *psVar1;
  int iVar2;
  string *psVar3;
  string *psVar4;
  
  iVar2 = (**(code **)(*(long *)this + 600))();
  if (0 < iVar2) {
    psVar3 = (string *)&DAT_06ae3fc0;
    psVar4 = (string *)&DAT_06ae3ef8;
    do {
      psVar1 = psVar3 + 8;
      PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar3,false);
      PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar4,false);
      psVar3 = psVar1;
      psVar4 = psVar4 + 8;
    } while (psVar1 != (string *)(&DAT_06ae3fc0 + ((ulong)(iVar2 - 1) + 1) * 8));
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Tallnut::PlayIdleLooped() */

void __thiscall PlantAnimRig_Tallnut::PlayIdleLooped(PlantAnimRig_Tallnut *this)

{
  undefined8 uVar1;
  string asStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  uVar1 = 0;
  local_8 = ___stack_chk_guard;
  if (this[0x3b8] == (PlantAnimRig_Tallnut)0x0) {
    if (*(int *)(this + 0x22c) == 0) {
      std::string::string(asStack_40,"idle");
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,3,aDStack_38);
      std::string::~string(asStack_40);
      nop();
    }
    else {
      std::string::string(asStack_48,"damage");
      PopAnimRig::CalcVariationLabelName((string *)this,(int)asStack_48);
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
      std::string::~string(asStack_40);
      std::string::~string(asStack_48);
      nop();
    }
    uVar1 = 1;
    *(undefined4 *)(this + 0x218) = 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* PlantAnimRig_Tallnut::GetArmorLayers() */

void PlantAnimRig_Tallnut::GetArmorLayers(void)

{
  string *psVar1;
  int iVar2;
  long *in_x0;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  string *psVar3;
  string *psVar4;
  
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  iVar2 = (**(code **)(*in_x0 + 600))();
  if (0 < iVar2) {
    psVar3 = (string *)&DAT_06ae3fc0;
    psVar4 = (string *)&DAT_06ae3ef8;
    do {
      psVar1 = psVar3 + 8;
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)in_x8,psVar3);
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)in_x8,psVar4);
      psVar3 = psVar1;
      psVar4 = psVar4 + 8;
    } while (psVar1 != (string *)(&DAT_06ae3fc0 + ((ulong)(iVar2 - 1) + 1) * 8));
  }
  return;
}


/* PlantAnimRig_Tallnut::onPopAnimInitialized() */

void __thiscall PlantAnimRig_Tallnut::onPopAnimInitialized(PlantAnimRig_Tallnut *this)

{
  PlantAnimRig::onPopAnimInitialized((PlantAnimRig *)this);
  HideAllShieldLayer(this);
  this[0x3b8] = (PlantAnimRig_Tallnut)0x0;
  return;
}

