// Class: PlantAnimRig_ShadowVanilla


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ShadowVanilla::StaticClassInit() */

void PlantAnimRig_ShadowVanilla::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_ShadowVanilla");
    (*pcVar2)(plVar1,asStack_10,FUN_04ce3578,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_ShadowVanilla::StaticGetClass() */

long * PlantAnimRig_ShadowVanilla::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_ShadowVanilla",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_ShadowVanilla::GetClass() const */

long * PlantAnimRig_ShadowVanilla::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_ShadowVanilla",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_ShadowVanilla::~PlantAnimRig_ShadowVanilla() */

void __thiscall
PlantAnimRig_ShadowVanilla::~PlantAnimRig_ShadowVanilla(PlantAnimRig_ShadowVanilla *this)

{
  *(undefined ***)this = &PTR_GetClass_069a0230;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_ShadowVanilla_069a0498;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x3b8));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_ShadowVanilla::~PlantAnimRig_ShadowVanilla() */

void __thiscall
PlantAnimRig_ShadowVanilla::~PlantAnimRig_ShadowVanilla(PlantAnimRig_ShadowVanilla *this)

{
  ~PlantAnimRig_ShadowVanilla(this + -0x10);
  return;
}


/* PlantAnimRig_ShadowVanilla::~PlantAnimRig_ShadowVanilla() */

void __thiscall
PlantAnimRig_ShadowVanilla::~PlantAnimRig_ShadowVanilla(PlantAnimRig_ShadowVanilla *this)

{
  ~PlantAnimRig_ShadowVanilla(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_ShadowVanilla::~PlantAnimRig_ShadowVanilla() */

void __thiscall
PlantAnimRig_ShadowVanilla::~PlantAnimRig_ShadowVanilla(PlantAnimRig_ShadowVanilla *this)

{
  ~PlantAnimRig_ShadowVanilla(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ShadowVanilla::PlantAnimRig_ShadowVanilla() */

void __thiscall
PlantAnimRig_ShadowVanilla::PlantAnimRig_ShadowVanilla(PlantAnimRig_ShadowVanilla *this)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_069a0230;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_ShadowVanilla_069a0498;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x3b8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x3b8),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_ShadowVanilla::StaticNew() */

PlantAnimRig_ShadowVanilla * PlantAnimRig_ShadowVanilla::StaticNew(void)

{
  PlantAnimRig_ShadowVanilla *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_ShadowVanilla(this);
  return this;
}


/* PlantAnimRig_ShadowVanilla::IsInShadowStatus() */

void __thiscall PlantAnimRig_ShadowVanilla::IsInShadowStatus(PlantAnimRig_ShadowVanilla *this)

{
  bool bVar1;
  PlantShadowvanilla *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x3b8));
  if (!bVar1) {
    return;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x3b8));
  nop();
  PlantShadowvanilla::IsBoosted(this_00);
  return;
}


/* PlantAnimRig_ShadowVanilla::GetShadowChargeCount() */

void __thiscall PlantAnimRig_ShadowVanilla::GetShadowChargeCount(PlantAnimRig_ShadowVanilla *this)

{
  bool bVar1;
  long extraout_x0;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x3b8));
  if (!bVar1) {
    return;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x3b8));
  nop();
  FUN_04cde324(*(undefined4 *)(extraout_x0 + 0x28));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ShadowVanilla::getPlantFoodMainAnimName() */

void PlantAnimRig_ShadowVanilla::getPlantFoodMainAnimName(void)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  PlantAnimRig_ShadowVanilla *in_x0;
  PlantShadowvanilla *this;
  char *__s;
  string *in_x8;
  undefined **ppuVar4;
  string asStack_10 [8];
  long local_8;
  undefined **ppuVar5;
  
  local_8 = ___stack_chk_guard;
  bVar1 = (bool)IsInShadowStatus(in_x0);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(in_x0 + 0x3b8));
  if (bVar2) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x3b8));
    nop();
    PlantShadowvanilla::UpdateBoostLayer(this,bVar1);
  }
  else {
    ppuVar4 = &PTR_s_vanilla_mouth_1_dark_06a88f00;
    do {
      ppuVar5 = ppuVar4 + 1;
      std::string::string(asStack_10,*ppuVar4);
      PopAnimRig::SetLayerVisibility((PopAnimRig *)in_x0,asStack_10,bVar1);
      std::string::~string(asStack_10);
      nop();
      ppuVar4 = ppuVar5;
    } while (ppuVar5 != (undefined **)0x6a88f98);
  }
  if (bVar1 == false) {
    std::string::string(in_x8,"plantfood3");
    nop();
  }
  else {
    cVar3 = Plant::GetAvatarEnable(*(Plant **)(in_x0 + 0x210));
    if (cVar3 == '\0') {
      __s = "plantfood";
    }
    else {
      __s = "plantfood2";
    }
    std::string::string(in_x8,__s);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ShadowVanilla::getIdleAnimationName() */

void PlantAnimRig_ShadowVanilla::getIdleAnimationName(void)

{
  RtWeakPtr *this;
  bool bVar1;
  bool bVar2;
  PlantAnimRig_ShadowVanilla *in_x0;
  PlantShadowvanilla *this_00;
  long extraout_x0;
  ulong uVar3;
  string *in_x8;
  undefined **ppuVar4;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  undefined **ppuVar5;
  
  this = (RtWeakPtr *)(in_x0 + 0x3b8);
  local_8 = ___stack_chk_guard;
  bVar1 = (bool)IsInShadowStatus(in_x0);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
  if (bVar2) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    nop();
    PlantShadowvanilla::UpdateBoostLayer(this_00,bVar1);
  }
  else {
    ppuVar4 = &PTR_s_vanilla_mouth_1_dark_06a88f00;
    do {
      ppuVar5 = ppuVar4 + 1;
      std::string::string(asStack_10,*ppuVar4);
      PopAnimRig::SetLayerVisibility((PopAnimRig *)in_x0,asStack_10,bVar1);
      std::string::~string(asStack_10);
      nop();
      ppuVar4 = ppuVar5;
    } while (ppuVar5 != (undefined **)0x6a88f98);
  }
  if (bVar1 != false) {
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
    if (bVar1) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      nop();
      uVar3 = FUN_04cde324(*(undefined4 *)(extraout_x0 + 0x28));
      std::string::string(asStack_18,"");
      nop();
      Sexy::StrFormat("shadow_idle%d",asStack_10,uVar3 & 0xffffffff);
      FUN_05474278(asStack_18,asStack_10);
      std::string::~string(asStack_10);
      FUN_05474148();
      std::string::~string(asStack_18);
      goto LAB_04ce161c;
    }
  }
  std::string::string(in_x8,"idle");
  nop();
LAB_04ce161c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ShadowVanilla::getAttackAnimationName() */

void PlantAnimRig_ShadowVanilla::getAttackAnimationName(void)

{
  RtWeakPtr *this;
  bool bVar1;
  bool bVar2;
  PlantAnimRig_ShadowVanilla *in_x0;
  PlantShadowvanilla *this_00;
  long extraout_x0;
  ulong uVar3;
  string *in_x8;
  undefined **ppuVar4;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  undefined **ppuVar5;
  
  this = (RtWeakPtr *)(in_x0 + 0x3b8);
  local_8 = ___stack_chk_guard;
  bVar1 = (bool)IsInShadowStatus(in_x0);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
  if (bVar2) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    nop();
    PlantShadowvanilla::UpdateBoostLayer(this_00,bVar1);
  }
  else {
    ppuVar4 = &PTR_s_vanilla_mouth_1_dark_06a88f00;
    do {
      ppuVar5 = ppuVar4 + 1;
      std::string::string(asStack_10,*ppuVar4);
      PopAnimRig::SetLayerVisibility((PopAnimRig *)in_x0,asStack_10,bVar1);
      std::string::~string(asStack_10);
      nop();
      ppuVar4 = ppuVar5;
    } while (ppuVar5 != (undefined **)0x6a88f98);
  }
  if (bVar1 != false) {
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
    if (bVar1) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      nop();
      uVar3 = FUN_04cde324(*(undefined4 *)(extraout_x0 + 0x28));
      std::string::string(asStack_18,"");
      nop();
      Sexy::StrFormat("shadow_attack%d",asStack_10,uVar3 & 0xffffffff);
      FUN_05474278(asStack_18,asStack_10);
      std::string::~string(asStack_10);
      FUN_05474148();
      std::string::~string(asStack_18);
      goto LAB_04ce17bc;
    }
  }
  std::string::string(in_x8,"attack");
  nop();
LAB_04ce17bc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ShadowVanilla::PlayPreviewAnim(bool) */

void PlantAnimRig_ShadowVanilla::PlayPreviewAnim(bool param_1)

{
  bool bVar1;
  PopAnimRig *this;
  PlantShadowvanilla *this_00;
  undefined **ppuVar2;
  string asStack_10 [8];
  long local_8;
  undefined **ppuVar3;
  
  this = (PopAnimRig *)(ulong)param_1;
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x3b8));
  if (bVar1) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x3b8));
    nop();
    PlantShadowvanilla::UpdateBoostLayer(this_00,false);
  }
  else {
    ppuVar2 = &PTR_s_vanilla_mouth_1_dark_06a88f00;
    do {
      ppuVar3 = ppuVar2 + 1;
      std::string::string(asStack_10,*ppuVar2);
      PopAnimRig::SetLayerVisibility(this,asStack_10,false);
      std::string::~string(asStack_10);
      nop();
      ppuVar2 = ppuVar3;
    } while (ppuVar3 != (undefined **)0x6a88f98);
  }
  TwinsRedStarProjectile::damageEntity((BoardEntity *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

