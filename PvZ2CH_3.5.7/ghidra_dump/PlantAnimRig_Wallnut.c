// Class: PlantAnimRig_Wallnut


/* PlantAnimRig_Wallnut::getArmorStateLayerNames() const */

undefined8 * __thiscall PlantAnimRig_Wallnut::getArmorStateLayerNames(PlantAnimRig_Wallnut *this)

{
  if (this[0x220] == (PlantAnimRig_Wallnut)0x0) {
    return &DAT_06ae41b0;
  }
  return &DAT_06ae4198;
}


/* PlantAnimRig_Wallnut::GetArmorStateCount() */

void __thiscall PlantAnimRig_Wallnut::GetArmorStateCount(PlantAnimRig_Wallnut *this)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*(long *)this + 0x268))();
  FUN_03f60e8c(*puVar1,puVar1[1]);
  return;
}


/* PlantAnimRig_Wallnut::SetArmorStateIndex(int) */

void __thiscall PlantAnimRig_Wallnut::SetArmorStateIndex(PlantAnimRig_Wallnut *this,int param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  string *psVar4;
  long lVar5;
  
  iVar2 = (**(code **)(*(long *)this + 600))();
  lVar5 = 0;
  if (0 < iVar2) {
    do {
      puVar3 = (undefined8 *)(**(code **)(*(long *)this + 0x268))(this);
      lVar1 = lVar5 + 1;
      psVar4 = (string *)FUN_03f60ec4(*puVar3,lVar5);
      PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar4,param_1 == (int)lVar5);
      lVar5 = lVar1;
    } while ((int)lVar1 < iVar2);
  }
  return;
}


/* PlantAnimRig_Wallnut::~PlantAnimRig_Wallnut() */

void __thiscall PlantAnimRig_Wallnut::~PlantAnimRig_Wallnut(PlantAnimRig_Wallnut *this)

{
  *(undefined ***)this = &PTR_GetClass_0679e860;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Wallnut_0679eae0;
  PlantAnimRig_Shielded::~PlantAnimRig_Shielded((PlantAnimRig_Shielded *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Wallnut::~PlantAnimRig_Wallnut() */

void __thiscall PlantAnimRig_Wallnut::~PlantAnimRig_Wallnut(PlantAnimRig_Wallnut *this)

{
  ~PlantAnimRig_Wallnut(this + -0x10);
  return;
}


/* PlantAnimRig_Wallnut::~PlantAnimRig_Wallnut() */

void __thiscall PlantAnimRig_Wallnut::~PlantAnimRig_Wallnut(PlantAnimRig_Wallnut *this)

{
  ~PlantAnimRig_Wallnut(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Wallnut::~PlantAnimRig_Wallnut() */

void __thiscall PlantAnimRig_Wallnut::~PlantAnimRig_Wallnut(PlantAnimRig_Wallnut *this)

{
  ~PlantAnimRig_Wallnut(this + -0x10);
  return;
}


/* PlantAnimRig_Wallnut::PlantAnimRig_Wallnut() */

void __thiscall PlantAnimRig_Wallnut::PlantAnimRig_Wallnut(PlantAnimRig_Wallnut *this)

{
  PlantAnimRig_Shielded::PlantAnimRig_Shielded((PlantAnimRig_Shielded *)this);
  *(undefined ***)this = &PTR_GetClass_0679e860;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Wallnut_0679eae0;
  return;
}


/* PlantAnimRig_Wallnut::StaticNew() */

PlantAnimRig_Wallnut * PlantAnimRig_Wallnut::StaticNew(void)

{
  PlantAnimRig_Wallnut *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_Wallnut(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Wallnut::StaticClassInit() */

void PlantAnimRig_Wallnut::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Wallnut");
    (*pcVar2)(plVar1,asStack_10,FUN_03f61140,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Wallnut::StaticGetClass() */

long * PlantAnimRig_Wallnut::StaticGetClass(void)

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
  uVar2 = PlantAnimRig_Shielded::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_Wallnut",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Wallnut::GetClass() const */

long * PlantAnimRig_Wallnut::GetClass(void)

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
  uVar2 = PlantAnimRig_Shielded::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_Wallnut",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Wallnut::HideAllShieldLayer() */

void __thiscall PlantAnimRig_Wallnut::HideAllShieldLayer(PlantAnimRig_Wallnut *this)

{
  long lVar1;
  int iVar2;
  string *psVar3;
  long lVar4;
  
  iVar2 = (**(code **)(*(long *)this + 600))();
  if (0 < iVar2) {
    lVar4 = 0;
    do {
      psVar3 = (string *)FUN_03f60ec4(DAT_06ae4198,lVar4);
      PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar3,false);
      lVar1 = lVar4 + 1;
      psVar3 = (string *)FUN_03f60ec4(DAT_06ae41b0,lVar4);
      PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar3,false);
      lVar4 = lVar1;
    } while ((int)lVar1 < iVar2);
  }
  return;
}


/* PlantAnimRig_Wallnut::onPopAnimInitialized() */

void __thiscall PlantAnimRig_Wallnut::onPopAnimInitialized(PlantAnimRig_Wallnut *this)

{
  PlantAnimRig::onPopAnimInitialized((PlantAnimRig *)this);
  HideAllShieldLayer(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Wallnut::IsWallnutAnim(std::string, std::string) */

void __thiscall
PlantAnimRig_Wallnut::IsWallnutAnim(undefined8 param_1,string *param_2,string *param_3)

{
  char cVar1;
  char cVar2;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  cVar2 = '\x01';
  local_8 = ___stack_chk_guard;
  cVar1 = std::operator==(param_2,param_3);
  if (cVar1 == '\0') {
    FUN_031f5e7c(asStack_20,"damage_",param_2);
    cVar2 = std::operator==(asStack_20,param_3);
    if (cVar2 == '\0') {
      FUN_031f5e7c(asStack_18,"damage2_",param_2);
      cVar2 = std::operator==(asStack_18,param_3);
      if (cVar2 == '\0') {
        FUN_031f5e7c(asStack_10,"damage3_",param_2);
        cVar2 = std::operator==(asStack_10,param_3);
        std::string::~string(asStack_10);
      }
      std::string::~string(asStack_18);
    }
    std::string::~string(asStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Wallnut::IsShootAnim(std::string) */

void __thiscall PlantAnimRig_Wallnut::IsShootAnim(PlantAnimRig_Wallnut *this,undefined8 param_2)

{
  char cVar1;
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_38,"iceattack");
  FUN_05475d88(asStack_30,param_2);
  cVar1 = IsWallnutAnim(this,asStack_38,asStack_30);
  if (cVar1 == '\0') {
    std::string::string(asStack_28,"fireattack");
    FUN_05475d88(asStack_20,param_2);
    cVar1 = IsWallnutAnim(this,asStack_28,asStack_20);
    if (cVar1 == '\0') {
      std::string::string(asStack_18,"electricattack");
      FUN_05475d88(asStack_10,param_2);
      cVar1 = IsWallnutAnim(this,asStack_18,asStack_10);
      std::string::~string(asStack_10);
      std::string::~string(asStack_18);
      nop();
    }
    std::string::~string(asStack_20);
    std::string::~string(asStack_28);
    nop();
  }
  std::string::~string(asStack_30);
  std::string::~string(asStack_38);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Wallnut::getRecoverAnim() */

void PlantAnimRig_Wallnut::getRecoverAnim(void)

{
  string *in_x0;
  string *in_x8;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 0x22c) == 0) {
    std::string::string(in_x8,"recover");
    nop();
  }
  else {
    (**(code **)(*(long *)in_x0 + 0x1f8))(asStack_18);
    PopAnimRig::CalcVariationLabelName(in_x0,(int)asStack_18);
    std::operator+(asStack_10,"_recover");
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Wallnut::PlayRecover(Sexy::Delegate1<std::string const&>) */

void __thiscall PlantAnimRig_Wallnut::PlayRecover(PlantAnimRig_Wallnut *this,Delegate1 *param_2)

{
  string asStack_40 [8];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0x218) = 0xe;
  local_8 = ___stack_chk_guard;
  getRecoverAnim();
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38,param_2);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Wallnut::getShootIceAnim() */

void PlantAnimRig_Wallnut::getShootIceAnim(void)

{
  string *in_x0;
  string *in_x8;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 0x22c) == 0) {
    std::string::string(in_x8,"iceattack");
    nop();
  }
  else {
    (**(code **)(*(long *)in_x0 + 0x1f8))(asStack_18);
    PopAnimRig::CalcVariationLabelName(in_x0,(int)asStack_18);
    std::operator+(asStack_10,"_iceattack");
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Wallnut::PlayShootIce(Sexy::Delegate1<std::string const&>) */

void __thiscall PlantAnimRig_Wallnut::PlayShootIce(PlantAnimRig_Wallnut *this,Delegate1 *param_2)

{
  string asStack_40 [8];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0x218) = 0xe;
  local_8 = ___stack_chk_guard;
  getShootIceAnim();
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38,param_2);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Wallnut::getShootFireAnim() */

void PlantAnimRig_Wallnut::getShootFireAnim(void)

{
  string *in_x0;
  string *in_x8;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 0x22c) == 0) {
    std::string::string(in_x8,"fireattack");
    nop();
  }
  else {
    (**(code **)(*(long *)in_x0 + 0x1f8))(asStack_18);
    PopAnimRig::CalcVariationLabelName(in_x0,(int)asStack_18);
    std::operator+(asStack_10,"_fireattack");
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Wallnut::PlayShootFire(Sexy::Delegate1<std::string const&>) */

void __thiscall PlantAnimRig_Wallnut::PlayShootFire(PlantAnimRig_Wallnut *this,Delegate1 *param_2)

{
  string asStack_40 [8];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0x218) = 0xe;
  local_8 = ___stack_chk_guard;
  getShootFireAnim();
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38,param_2);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Wallnut::getShootElectricAnim() */

void PlantAnimRig_Wallnut::getShootElectricAnim(void)

{
  string *in_x0;
  string *in_x8;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 0x22c) == 0) {
    std::string::string(in_x8,"electricattack");
    nop();
  }
  else {
    (**(code **)(*(long *)in_x0 + 0x1f8))(asStack_18);
    PopAnimRig::CalcVariationLabelName(in_x0,(int)asStack_18);
    std::operator+(asStack_10,"_electricattack");
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Wallnut::PlayShootElectric(Sexy::Delegate1<std::string const&>) */

void __thiscall
PlantAnimRig_Wallnut::PlayShootElectric(PlantAnimRig_Wallnut *this,Delegate1 *param_2)

{
  string asStack_40 [8];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0x218) = 0xe;
  local_8 = ___stack_chk_guard;
  getShootElectricAnim();
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38,param_2);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Wallnut::GetArmorLayers() */

void PlantAnimRig_Wallnut::GetArmorLayers(void)

{
  long lVar1;
  int iVar2;
  long *in_x0;
  string *psVar3;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  long lVar4;
  
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  iVar2 = (**(code **)(*in_x0 + 600))();
  if (0 < iVar2) {
    lVar4 = 0;
    do {
      psVar3 = (string *)FUN_03f60ec4(DAT_06ae4198,lVar4);
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)in_x8,psVar3);
      lVar1 = lVar4 + 1;
      psVar3 = (string *)FUN_03f60ec4(DAT_06ae41b0,lVar4);
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)in_x8,psVar3);
      lVar4 = lVar1;
    } while ((int)lVar1 < iVar2);
  }
  return;
}

