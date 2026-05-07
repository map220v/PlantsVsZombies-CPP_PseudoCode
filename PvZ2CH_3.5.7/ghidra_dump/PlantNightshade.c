// Class: PlantNightshade


/* PlantNightshade::deactivateRegenTimer() */

void __thiscall PlantNightshade::deactivateRegenTimer(PlantNightshade *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x2c) = uVar1;
  return;
}


/* PlantNightshade::GetPlantFoodPlayCount() */

undefined4 __thiscall PlantNightshade::GetPlantFoodPlayCount(PlantNightshade *this)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  uVar2 = 1;
  if (cVar1 == '\0') {
    uVar2 = k_maxLeaves;
  }
  return uVar2;
}


/* PlantNightshade::PlantNightshade() */

void __thiscall PlantNightshade::PlantNightshade(PlantNightshade *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_06814130;
  return;
}


/* PlantNightshade::StaticNew() */

PlantNightshade * PlantNightshade::StaticNew(void)

{
  PlantNightshade *this;
  
  this = ::operator_new(0x38);
  PlantNightshade(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantNightshade::StaticClassInit() */

void PlantNightshade::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantNightshade");
    (*pcVar2)(plVar1,asStack_10,FUN_0423bb9c,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantNightshade::StaticGetClass() */

long * PlantNightshade::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantNightshade",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantNightshade::GetClass() const */

long * PlantNightshade::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantNightshade",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantNightshade::hasMaxLeaves() */

bool __thiscall PlantNightshade::hasMaxLeaves(PlantNightshade *this)

{
  return *(int *)(this + 0x28) == k_maxLeaves;
}


/* PlantNightshade::canBeginRegen() */

byte __thiscall PlantNightshade::canBeginRegen(PlantNightshade *this)

{
  char cVar1;
  byte bVar2;
  float fVar3;
  
  fVar3 = (float)PVZ_EOT();
  if ((*(float *)(this + 0x2c) == fVar3) &&
     (cVar1 = PlantShadowvanilla::IsBoosted((PlantShadowvanilla *)this), cVar1 != '\0')) {
    bVar2 = hasMaxLeaves(this);
    return bVar2 ^ 1;
  }
  return 0;
}


/* PlantNightshade::~PlantNightshade() */

void __thiscall PlantNightshade::~PlantNightshade(PlantNightshade *this)

{
  *(undefined ***)this = &PTR_GetClass_06814130;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantNightshade::~PlantNightshade() */

void __thiscall PlantNightshade::~PlantNightshade(PlantNightshade *this)

{
  ~PlantNightshade(this);
  AK::FreeHook(this);
  return;
}


/* PlantNightshade::updateLeafCount(int) */

void __thiscall PlantNightshade::updateLeafCount(PlantNightshade *this,int param_1)

{
  PlantAnimRig_Nightshade *this_00;
  
  *(int *)(this + 0x28) = param_1;
  this_00 = (PlantAnimRig_Nightshade *)FUN_0423c7c0(*(undefined8 *)(this + 0x10));
  PlantAnimRig_Nightshade::AdjustLeafDisplay(this_00,*(int *)(this + 0x28),(bool)this[0x30]);
  return;
}


/* PlantNightshade::useLeaf() */

void __thiscall PlantNightshade::useLeaf(PlantNightshade *this)

{
  if (*(int *)(this + 0x28) == 0) {
    return;
  }
  updateLeafCount(this,*(int *)(this + 0x28) + -1);
  return;
}


/* PlantNightshade::regenLeaf() */

void __thiscall PlantNightshade::regenLeaf(PlantNightshade *this)

{
  char cVar1;
  
  cVar1 = hasMaxLeaves(this);
  if (cVar1 != '\0') {
    return;
  }
  updateLeafCount(this,*(int *)(this + 0x28) + 1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantNightshade::updateRigLayers() */

void __thiscall PlantNightshade::updateRigLayers(PlantNightshade *this)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  Plant *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = FUN_0423c7c0(*(undefined8 *)(this + 0x10));
  cVar1 = PlantShadowvanilla::IsBoosted((PlantShadowvanilla *)this);
  if (cVar1 == '\0') {
    puVar4 = &k_boostedOffLayerSetName;
  }
  else {
    puVar4 = &k_boostedOnLayerSetName;
  }
  FUN_05475d88(asStack_10,puVar4);
  PlantAnimRig_Nightshade::ShowBoostedLayerSet(uVar3,asStack_10);
  std::string::~string(asStack_10);
  if (this[0x30] == (PlantNightshade)0x0) {
    puVar4 = &k_pfOffLayerSetName;
  }
  else {
    puVar4 = &k_pfOnLayerSetName;
  }
  FUN_05475d88(asStack_10,puVar4);
  PlantAnimRig_DragonBruit::ShowBoostedLayerSet(uVar3,asStack_10);
  std::string::~string(asStack_10);
  this_00 = *(Plant **)(this + 0x10);
  bVar2 = (bool)PlantShadowvanilla::IsBoosted((PlantShadowvanilla *)this);
  Plant::setShowShadowBoost(this_00,bVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantNightshade::ApplyPlantfood() */

void __thiscall PlantNightshade::ApplyPlantfood(PlantNightshade *this)

{
  this[0x30] = (PlantNightshade)0x1;
  updateRigLayers(this);
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  return;
}


/* PlantNightshade::getWeapon() */

undefined4 __thiscall PlantNightshade::getWeapon(PlantNightshade *this)

{
  char cVar1;
  undefined4 uVar2;
  PlantAnimRig_Nightshade *this_00;
  
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 == '\0') {
    uVar2 = 4;
    if (this[0x30] == (PlantNightshade)0x0) {
      uVar2 = 0;
    }
    return uVar2;
  }
  this_00 = (PlantAnimRig_Nightshade *)FUN_0423c7c0(*(undefined8 *)(this + 0x10));
  PlantAnimRig_Nightshade::AdjustLeafDisplay(this_00,k_maxLeaves,(bool)this[0x30]);
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  uVar2 = 2;
  if (cVar1 == '\0') {
    uVar2 = 1;
  }
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantNightshade::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantNightshade::Fire(PlantNightshade *param_1,RtWeakPtrBase *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  RealObject *this;
  string asStack_10 [8];
  long local_8;
  
  lVar4 = *(long *)(param_1 + 0x10);
  local_8 = ___stack_chk_guard;
  if (*(int *)(lVar4 + 200) != 0xc) {
    uVar3 = 0;
    cVar1 = (**(code **)(*(long *)param_1 + 0x180))();
    if (cVar1 == '\0') goto LAB_0423ca4c;
    lVar4 = *(long *)(param_1 + 0x10);
  }
  uVar2 = getWeapon(param_1);
  this = *(RealObject **)(param_1 + 0x10);
  *(undefined4 *)(lVar4 + 0x150) = uVar2;
  std::string::string(asStack_10,"Play_Plant_NightShade_Fire");
  RealObject::PlayPositionalSound(this,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,param_2);
  uVar3 = PlantFramework::Fire((PlantFramework *)param_1,asStack_10,param_3,1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
LAB_0423ca4c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* PlantNightshade::updateLeafRegen() */

void __thiscall PlantNightshade::updateLeafRegen(PlantNightshade *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  cVar1 = PlantShadowvanilla::IsBoosted((PlantShadowvanilla *)this);
  if (cVar1 == '\0') {
    deactivateRegenTimer(this);
    return;
  }
  cVar1 = canBeginRegen(this);
  if (cVar1 == '\0') {
    cVar1 = PVZ_IS_IT(*(float *)(this + 0x2c));
    if (cVar1 != '\0') {
      deactivateRegenTimer(this);
      regenLeaf(this);
      return;
    }
  }
  else {
    lVar3 = FUN_0423cb74(*(undefined8 *)(this + 0x10));
    uVar4 = *(undefined8 *)(this + 0x10);
    fVar5 = *(float *)(lVar3 + 0x2c0);
    iVar2 = FUN_0423b7f4(uVar4);
    if (1 < iVar2) {
      lVar3 = FUN_0423cb74(uVar4);
      uVar4 = *(undefined8 *)(this + 0x10);
      fVar6 = *(float *)(lVar3 + 0x2c4);
      iVar2 = FUN_0423b7f4(uVar4);
      if (iVar2 < 3) {
        fVar5 = fVar5 * (1.0 - fVar6);
      }
      else {
        lVar3 = FUN_0423cb74(uVar4);
        fVar5 = fVar5 * (1.0 - fVar6 * (*(float *)(lVar3 + 0x2c8) + 1.0));
      }
    }
    fVar6 = (float)PVZ_T();
    *(float *)(this + 0x2c) = fVar6 + fVar5;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantNightshade::PlayAttackAnimation() */

void __thiscall PlantNightshade::PlayAttackAnimation(PlantNightshade *this)

{
  long *plVar1;
  code *pcVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  pcVar2 = *(code **)(*plVar1 + 0x130);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  (*pcVar2)(plVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantNightshade::setState(NightShade_State) */

void __thiscall PlantNightshade::setState(PlantNightshade *this,int param_2)

{
  long *plVar1;
  code *pcVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(*(long *)(this + 0x10) + 200) != param_2) {
    *(int *)(*(long *)(this + 0x10) + 200) = param_2;
    if (param_2 == 10) {
      plVar1 = (long *)FUN_0423c7c0();
      (**(code **)(*plVar1 + 0x118))();
    }
    else if (param_2 == 0xb) {
      plVar1 = (long *)FUN_0423c7c0();
      pcVar2 = *(code **)(*plVar1 + 0x130);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      (*pcVar2)(plVar1,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantNightshade::Initialize() */

void __thiscall PlantNightshade::Initialize(PlantNightshade *this)

{
  undefined4 uVar1;
  
  PlantFramework::Initialize((PlantFramework *)this);
  this[0x30] = (PlantNightshade)0x0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x2c) = uVar1;
  updateLeafCount(this,k_maxLeaves);
  updateRigLayers(this);
  setState(this,10);
  return;
}


/* PlantNightshade::FindTargetAndFire(PlantWeapon) */

char PlantNightshade::FindTargetAndFire(PlantShadowvanilla *param_1)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  
  if (1 < *(int *)(*(long *)(param_1 + 0x10) + 200) - 0xbU) {
    cVar1 = PlantShadowvanilla::IsBoosted(param_1);
    cVar2 = EA::Thread::Mutex::HasLock((Mutex *)param_1);
    if ((cVar2 != '\0') && (cVar1 != '\0')) {
      uVar3 = getWeapon((PlantNightshade *)param_1);
      cVar1 = PlantFramework::FindTargetAndFire(param_1,uVar3);
      if (cVar1 != '\0') {
        setState((PlantNightshade *)param_1,0xc);
        return cVar1;
      }
    }
  }
  return '\0';
}


/* PlantNightshade::onAnimStoppedCallback(std::string const&) */

void PlantNightshade::onAnimStoppedCallback(string *param_1)

{
  if (1 < *(int *)(*(long *)(param_1 + 0x10) + 200) - 0xbU) {
    return;
  }
  setState((PlantNightshade *)param_1,10);
  return;
}


/* PlantNightshade::CancelPlantfood() */

void __thiscall PlantNightshade::CancelPlantfood(PlantNightshade *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  updateLeafCount(this,k_maxLeaves);
  setState(this,10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantNightshade::getMeleeTargets() */

void PlantNightshade::getMeleeTargets(void)

{
  long *in_x0;
  long lVar1;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [8];
  undefined1 auStack_60 [16];
  TargetInfoProps aTStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*in_x0 + 0x2b8))(auStack_60,in_x0,3);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  EntityFinder::GetEntitiesTouchingRectangle();
  lVar1 = FUN_0423cb74(in_x0[2]);
  TargetInfoProps::TargetInfoProps(aTStack_50,(TargetInfoProps *)(lVar1 + 0x2d0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)aRStack_70);
  TargetInfoProps::FilterUntargetable(aTStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
  TargetInfoProps::~TargetInfoProps(aTStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantNightshade::zombiesInMeleeRange() */

void PlantNightshade::zombiesInMeleeRange(void)

{
  long lVar1;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  getMeleeTargets();
  lVar1 = FUN_0423b80c(local_20,local_18);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1 != 0);
}


/* PlantNightshade::UpdateActions() */

void __thiscall PlantNightshade::UpdateActions(PlantNightshade *this)

{
  char cVar1;
  
  updateLeafRegen(this);
  if ((((*(int *)(*(long *)(this + 0x10) + 200) == 10) &&
       (cVar1 = zombiesInMeleeRange(), cVar1 != '\0')) &&
      (cVar1 = EA::Thread::Mutex::HasLock((Mutex *)this), cVar1 != '\0')) &&
     (cVar1 = PlantShadowvanilla::IsBoosted((PlantShadowvanilla *)this), cVar1 == '\0')) {
    setState(this,0xb);
    updateRigLayers(this);
    return;
  }
  updateRigLayers(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantNightshade::dealMeleeDamage() */

void __thiscall PlantNightshade::dealMeleeDamage(PlantNightshade *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  float *pfVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  code *pcVar9;
  float fVar10;
  DamageInfo *pDVar14;
  float fVar11;
  float fVar12;
  float fVar13;
  Point aPStack_90 [8];
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80 [3];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [96];
  long local_8;
  
  uVar7 = 0;
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_0423cb74(*(undefined8 *)(this + 0x10));
  getMeleeTargets();
  cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_80);
  if (cVar1 == '\0') {
    fVar12 = *(float *)(lVar3 + 0x2b8);
    FUN_0423b7d0(aRStack_68,*(undefined8 *)(this + 0x10));
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    iVar2 = FUN_0423b7f4(*(undefined8 *)(this + 0x10));
    pfVar5 = (float *)FUN_0423b818(*(undefined8 *)(lVar4 + 0x208),(long)(iVar2 + -1));
    fVar11 = *pfVar5;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
    fVar10 = *(float *)(lVar3 + 700);
    FUN_0423b7d0(aRStack_68,*(undefined8 *)(this + 0x10));
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    iVar2 = FUN_0423b7f4(*(undefined8 *)(this + 0x10));
    pfVar5 = (float *)FUN_0423b818(*(undefined8 *)(lVar3 + 0x208),(long)(iVar2 + -1));
    fVar13 = *pfVar5;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
    puVar6 = (undefined8 *)FUN_0423b8d4(local_80[0]);
    plVar8 = (long *)*puVar6;
    pcVar9 = *(code **)(*plVar8 + 0x110);
    if (this[0x30] == (PlantNightshade)0x0) {
      pDVar14._0_4_ = (DamageInfo *)(fVar11 * fVar12);
    }
    else {
      pDVar14._0_4_ = (DamageInfo *)(fVar13 * fVar10);
    }
    uVar7 = 1;
    Sexy::Point::Point(aPStack_90,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
    DamageInfo::DamageInfo(pDVar14._0_4_,local_88,local_84,aRStack_68,0x4000000000,aPStack_90,0);
    (*pcVar9)(plVar8,aRStack_68);
    DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


/* PlantNightshade::tryMeleeAttack() */

char __thiscall PlantNightshade::tryMeleeAttack(PlantNightshade *this)

{
  char cVar1;
  
  cVar1 = dealMeleeDamage(this);
  if (cVar1 != '\0') {
    useLeaf(this);
  }
  return cVar1;
}


/* PlantNightshade::OnAnimCommand(std::string const&, std::string const&) */

ulong PlantNightshade::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  ulong uVar2;
  
  bVar1 = std::operator==(param_2,"use_action");
  uVar2 = (ulong)bVar1;
  if (bVar1 != 0) {
    if (*(int *)(*(long *)(param_1 + 0x10) + 200) == 0xb) {
      uVar2 = tryMeleeAttack((PlantNightshade *)param_1);
      return uVar2;
    }
    if (*(int *)(*(long *)(param_1 + 0x10) + 200) == 0xc) {
      useLeaf((PlantNightshade *)param_1);
      return (ulong)(uint)bVar1;
    }
    uVar2 = 0;
  }
  return uVar2;
}

