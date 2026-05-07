// Class: PlantShadowPeashooter


/* PlantShadowPeashooter::CanApplyPlantfood() */

bool __thiscall PlantShadowPeashooter::CanApplyPlantfood(PlantShadowPeashooter *this)

{
  return *(int *)(this + 0xd0) == 0;
}


/* PlantShadowPeashooter::CanBeShoveled() */

undefined8 __thiscall PlantShadowPeashooter::CanBeShoveled(PlantShadowPeashooter *this)

{
  undefined8 uVar1;
  
  if ((*(uint *)(this + 0xd0) & 0xfffffffd) != 5) {
    uVar1 = PlantFramework::CanBeShoveled();
    return uVar1;
  }
  return 0;
}


/* PlantShadowPeashooter::CanBeTargeted() */

undefined8 __thiscall PlantShadowPeashooter::CanBeTargeted(PlantShadowPeashooter *this)

{
  undefined8 uVar1;
  
  if (*(int *)(this + 0xd0) == 0) {
    uVar1 = PlantFramework::CanBeTargeted();
    return uVar1;
  }
  return 0;
}


/* PlantShadowPeashooter::IsInvincible() const */

undefined8 __thiscall PlantShadowPeashooter::IsInvincible(PlantShadowPeashooter *this)

{
  undefined8 uVar1;
  
  if ((*(uint *)(this + 0xd0) & 0xfffffffd) != 5) {
    uVar1 = PlantFramework::IsInvincible();
    return uVar1;
  }
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShadowPeashooter::StaticClassInit() */

void PlantShadowPeashooter::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantShadowPeashooter");
    (*pcVar2)(plVar1,asStack_10,FUN_03bc8690,0xf0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantShadowPeashooter::StaticGetClass() */

long * PlantShadowPeashooter::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantShadowPeashooter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantShadowPeashooter::GetClass() const */

long * PlantShadowPeashooter::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantShadowPeashooter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantShadowPeashooter::shouldHideFromZombies(std::vector<BoardEntity*,
   std::allocator<BoardEntity*> >&) */

char __thiscall
PlantShadowPeashooter::shouldHideFromZombies(PlantShadowPeashooter *this,vector *param_1)

{
  char cVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)param_1;
  uVar2 = FUN_03bc5a7c(uVar5,*(undefined8 *)(param_1 + 8));
  uVar4 = 0;
  if (uVar2 != 0) {
    while (uVar4 < uVar2) {
      puVar3 = (undefined8 *)FUN_03bc5a88(uVar5,uVar4);
      cVar1 = RealObject::IsOnOpposingTeam((RealObject *)*puVar3,*(RealObject **)(this + 0x10));
      if (cVar1 != '\0') {
        return cVar1;
      }
      uVar5 = *(undefined8 *)param_1;
      uVar2 = FUN_03bc5a7c(uVar5,*(undefined8 *)(param_1 + 8));
      uVar4 = uVar4 + 1;
    }
  }
  return '\0';
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShadowPeashooter::GetPlantFoodPlayCount() */

void __thiscall PlantShadowPeashooter::GetPlantFoodPlayCount(PlantShadowPeashooter *this)

{
  int iVar1;
  char cVar2;
  long lVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetProps();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  iVar1 = *(int *)(lVar3 + 0x3c);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar2 != '\0') {
    iVar1 = iVar1 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}


/* PlantShadowPeashooter::isZombieInFrontOfPlant(Sexy::RtWeakPtr<Zombie>) */

bool __thiscall
PlantShadowPeashooter::isZombieInFrontOfPlant
          (PlantShadowPeashooter *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float *pfVar1;
  float *pfVar2;
  
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(this_00);
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  return *pfVar2 < *pfVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShadowPeashooter::ShowLayerSet(std::string) */

void __thiscall PlantShadowPeashooter::ShowLayerSet(PlantShadowPeashooter *this,undefined8 param_2)

{
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  FUN_05475d88(asStack_10,param_2);
  AnimRigLayerSet::ShowSet((AnimRigLayerSet *)(this + 0x58),uVar1,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantShadowPeashooter::PlantShadowPeashooter() */

void __thiscall PlantShadowPeashooter::PlantShadowPeashooter(PlantShadowPeashooter *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_0673a5b0;
  AttachedEffectManager::AttachedEffectManager((AttachedEffectManager *)(this + 0x38));
  AnimRigLayerSet::AnimRigLayerSet((AnimRigLayerSet *)(this + 0x58));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xa0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xb8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xd8));
  return;
}


/* PlantShadowPeashooter::StaticNew() */

PlantShadowPeashooter * PlantShadowPeashooter::StaticNew(void)

{
  PlantShadowPeashooter *this;
  
  this = ::operator_new(0xf0);
  PlantShadowPeashooter(this);
  return this;
}


/* PlantShadowPeashooter::updateZombiesSwallowed() */

void __thiscall PlantShadowPeashooter::updateZombiesSwallowed(PlantShadowPeashooter *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = FUN_03bc7248(*(undefined8 *)(this + 0x10));
  iVar1 = *(int *)(lVar3 + 0x2c8);
  iVar2 = *(int *)(this + 0x34);
  *(int *)(this + 0x34) = iVar2 + 1;
  if (iVar2 + 1 < iVar1 + *(int *)(this + 0xe8)) {
    return;
  }
  PlantStrawBurst::onAnimStoppedCallback((string *)this);
  return;
}


/* PlantShadowPeashooter::FindTargetAndFire(PlantWeapon) */

undefined8 PlantShadowPeashooter::FindTargetAndFire(PlantShadowvanilla *param_1)

{
  char cVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  if ((*(int *)(param_1 + 0xd0) == 0) &&
     (cVar1 = Plant::CanFindTarget(*(undefined8 *)(param_1 + 0x10)), cVar1 != '\0')) {
    lVar2 = FUN_03bc7248(*(undefined8 *)(param_1 + 0x10));
    cVar1 = FUN_03bc5a0c(*(undefined8 *)(param_1 + 0x10));
    if (cVar1 != '\0') {
      cVar1 = PlantShadowvanilla::IsBoosted(param_1);
      if (cVar1 == '\0') {
        fVar4 = *(float *)(lVar2 + 0x2f0);
      }
      else {
        fVar4 = *(float *)(lVar2 + 0x2f4);
      }
      fVar3 = (float)PlantFramework::Rand((PlantFramework *)param_1,1.0);
      if (fVar3 < fVar4) {
        param_1[0x2c] = (PlantShadowvanilla)0x1;
        lVar2 = FUN_03bc737c(*(undefined8 *)(param_1 + 0x10));
        FUN_03bc5a2c(lVar2 + 0x3b8,1);
      }
    }
    (**(code **)(*(long *)param_1 + 0x1a0))(param_1);
    return 1;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShadowPeashooter::setState(int) */

void __thiscall PlantShadowPeashooter::setState(PlantShadowPeashooter *this,int param_1)

{
  PopAnimRig *pPVar1;
  PlantAnimRig *pPVar2;
  float fVar3;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xd0) != param_1) {
    *(int *)(this + 0xd0) = param_1;
    switch(param_1) {
    case 0:
      pPVar2 = (PlantAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      PlantAnimRig::SetState(pPVar2,1);
      break;
    case 1:
      pPVar2 = (PlantAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      PlantAnimRig::SetState(pPVar2,0xe);
      pPVar1 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string(asStack_68,"down_start");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      PopAnimRig::PlayAndStop(pPVar1,asStack_68,0,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      std::string::~string(asStack_68);
      nop();
      setState(this,2);
      break;
    case 3:
      pPVar1 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string(asStack_58,"down_idle");
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aRStack_50)
      ;
      PopAnimRig::PlayAndContinue(pPVar1,asStack_58,0,(DummyInit *)aRStack_50);
      std::string::~string(asStack_58);
      nop();
      break;
    case 4:
      fVar3 = (float)PVZ_T();
      *(float *)(this + 0xe4) = fVar3 + 0.5;
      setState(this,5);
      break;
    case 6:
      pPVar1 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string(asStack_68,"down_attack");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      PopAnimRig::PlayAndStop(pPVar1,asStack_68,0,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      std::string::~string(asStack_68);
      nop();
      setState(this,7);
      break;
    case 8:
      pPVar1 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string(asStack_68,"down_end");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      PopAnimRig::PlayAndStop(pPVar1,asStack_68,0,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      std::string::~string(asStack_68);
      nop();
      setState(this,9);
      break;
    case 10:
      setState(this,0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShadowPeashooter::swallowZombie(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
PlantShadowPeashooter::swallowZombie(PlantShadowPeashooter *this,RtMixedPtr<Sexy::Image> *param_2)

{
  char cVar1;
  bool bVar2;
  PopAnimRig *this_00;
  float *pfVar3;
  Zombie *pZVar4;
  long *plVar5;
  undefined8 uVar6;
  RealObject *pRVar7;
  float fVar8;
  float fVar9;
  float local_1c;
  string asStack_18 [12];
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  setState(this,4);
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(param_2);
  if (cVar1 == '\0') {
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0xd8),(RtWeakPtr *)param_2);
    this_00 = (PopAnimRig *)
              UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    std::string::string(asStack_18,"down_attack");
    local_1c = (float)PopAnimRig::CalcAnimLengthSeconds(this_00,asStack_18);
    pfVar3 = eastl::max_alt<float>((float *)&DAT_057523f0,&local_1c);
    fVar9 = *pfVar3;
    std::string::~string(asStack_18);
    nop();
    Sexy::Insets::Insets((Insets *)asStack_18);
    pZVar4 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    plVar5 = (long *)Zombie::GetAnimRig(pZVar4);
    (**(code **)(*plVar5 + 0x90))(plVar5,asStack_18);
    fVar8 = (float)FUN_03bc5ce8();
    *(float *)(this + 0xe0) = (fVar8 * (float)local_c) / fVar9;
    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    cVar1 = (**(code **)(*plVar5 + 0x378))();
    if (cVar1 == '\0') {
      fVar8 = 0.9;
    }
    else {
      fVar8 = 0.3;
    }
    *(float *)(this + 0xe0) = *(float *)(this + 0xe0) * fVar8;
    pZVar4 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    Zombie::GetHasPlantFood(pZVar4);
    pZVar4 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    Zombie::ClearConditions(pZVar4);
    bVar2 = (bool)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2)
    ;
    Zombie::SetHasPlantFood(bVar2);
    uVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    pZVar4 = (Zombie *)PVZ_EOT();
    Zombie::ApplyCondition(pZVar4,0,uVar6,2,1);
    pZVar4 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    Zombie::SetMarkedForDeath(pZVar4);
    pZVar4 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    Zombie::SetIsControlled(pZVar4,true);
    pZVar4 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    Zombie::SetIgnoresAllDamage(pZVar4,true);
    pZVar4 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    Zombie::SetIgnoresCollisions(pZVar4,true);
    pRVar7 = (RealObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    RealObject::SetUseGroundClipRect(pRVar7,true);
    pRVar7 = (RealObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    RealObject::SetDisableSnapToGround(pRVar7,true);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShadowPeashooter::GetSkillDamageRate() */

void __thiscall PlantShadowPeashooter::GetSkillDamageRate(PlantShadowPeashooter *this)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  Plant *pPVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  float fVar9;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar6 = 0;
  iVar8 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesOnBoard
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,1);
  uVar7 = local_20;
  lVar2 = FUN_03bc5a7c(local_20,local_18);
  if (lVar2 != 0) {
    do {
      puVar3 = (undefined8 *)FUN_03bc5a88(uVar7,uVar6);
      pPVar4 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar3);
      if (pPVar4 != (Plant *)0x0) {
        Plant::GetType();
        lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
        bVar1 = std::operator==((string *)(lVar2 + 8),"moonflower");
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
        if (bVar1) {
          iVar8 = iVar8 + 1;
        }
      }
      uVar7 = local_20;
      uVar6 = uVar6 + 1;
      uVar5 = FUN_03bc5a7c(local_20,local_18);
    } while (uVar6 < uVar5);
  }
  fVar9 = (float)Plant::GetGeneSkillBoost(*(Plant **)(this + 0x10));
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(fVar9 * (float)iVar8 + 1.0);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShadowPeashooter::calcBombTier() */

void PlantShadowPeashooter::calcBombTier(void)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  undefined8 local_38;
  undefined8 local_30;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  iVar3 = 0;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntities(avStack_20,1);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_30);
    if (!bVar1) {
      if (iVar3 < 1) {
        iVar3 = 1;
      }
LAB_03bc8314:
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(iVar3);
      }
      return;
    }
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    nop();
    Plant::GetType();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
    bVar1 = std::operator==((string *)(lVar2 + 8),"moonflower");
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    if (bVar1) {
      iVar3 = iVar3 + 1;
    }
    if (2 < iVar3) {
      iVar3 = 3;
      goto LAB_03bc8314;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShadowPeashooter::CreateHole(Sexy::Point) */

void __thiscall PlantShadowPeashooter::CreateHole(PlantShadowPeashooter *this,int *param_2)

{
  char cVar1;
  long lVar2;
  RtObject *this_00;
  ShadowpeashooterBlackHole *this_01;
  Board *this_02;
  float fVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_03bc7248(*(undefined8 *)(this + 0x10));
  cVar1 = FUN_03bc843c(param_2);
  if (cVar1 != '\0') {
    this_02 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_10,"shadowpeashooter_blackhole");
    this_00 = (RtObject *)Board::AddGridItem(this_02,asStack_10,*param_2,param_2[1],1);
    this_01 = Sexy::RtObject::Cast<ShadowpeashooterBlackHole>(this_00);
    std::string::~string(asStack_10);
    nop();
    FUN_03bc5bfc(this_01 + 0x24);
    ShadowpeashooterBlackHole::SetIdle(this_01);
    fVar3 = (float)PVZ_T();
    *(float *)(this + 0x30) = fVar3 + *(float *)(lVar2 + 0x2f8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShadowPeashooter::zombieIsBlacklisted(Zombie const*) const */

void __thiscall
PlantShadowPeashooter::zombieIsBlacklisted(PlantShadowPeashooter *this,Zombie *param_1)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar6;
  ZombieGargantuar *pZVar7;
  ZombieZombossMech *pZVar8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_03bc7248(*(undefined8 *)(this + 0x10));
  uVar4 = FUN_03bc6a04(*(undefined8 *)(lVar3 + 0x2d0));
  uVar5 = FUN_03bc6a54(*(undefined8 *)(lVar3 + 0x2d8));
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(param_1);
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                       (uVar4,uVar5,lVar6 + 8);
  local_10 = FUN_03bc6a54(*(undefined8 *)(lVar3 + 0x2d8));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if ((((bVar1) ||
       (pZVar7 = Sexy::RtObject::Cast<ZombieGargantuar>((RtObject *)param_1),
       pZVar7 != (ZombieGargantuar *)0x0)) ||
      (cVar2 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar2 != '\0')) ||
     (cVar2 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar2 != '\0')) {
    bVar1 = true;
  }
  else {
    pZVar8 = Sexy::RtObject::Cast<ZombieZombossMech>((RtObject *)param_1);
    bVar1 = pZVar8 != (ZombieZombossMech *)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* PlantShadowPeashooter::shouldSwallowZombie(Zombie*) */

byte __thiscall
PlantShadowPeashooter::shouldSwallowZombie(PlantShadowPeashooter *this,Zombie *param_1)

{
  char cVar1;
  byte bVar2;
  
  if ((((((param_1 == (Zombie *)0x0) || (cVar1 = Zombie::IsBerserk(param_1), cVar1 != '\0')) ||
        (cVar1 = Zombie::HasFogImmune(param_1), cVar1 != '\0')) ||
       ((cVar1 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar1 != '\0' ||
        (cVar1 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar1 != '\0')))) ||
      ((cVar1 = Zombie::CanTakeFatalDamage(param_1), cVar1 == '\0' ||
       ((cVar1 = RealObject::IsOnOpposingTeam((RealObject *)param_1,*(RealObject **)(this + 0x10)),
        cVar1 == '\0' || (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 != '\0')))
       ))) || (cVar1 = Zombie::IsFlying(param_1), cVar1 != '\0')) {
    bVar2 = 0;
  }
  else {
    bVar2 = zombieIsBlacklisted(this,param_1);
    bVar2 = bVar2 ^ 1;
  }
  return bVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShadowPeashooter::UpdateActions() */

void __thiscall PlantShadowPeashooter::UpdateActions(PlantShadowPeashooter *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  float *pfVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  long *plVar5;
  undefined8 *puVar6;
  Zombie *pZVar7;
  char *__s;
  int iVar8;
  code *pcVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_60 [8];
  Insets aIStack_58 [16];
  Insets aIStack_48 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_03bc7248(*(undefined8 *)(this + 0x10));
  cVar1 = PlantShadowvanilla::IsBoosted((PlantShadowvanilla *)this);
  if (cVar1 == '\0') {
    lVar3 = FUN_03bc5a90(*(undefined8 *)(lVar3 + 0x70),0);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)(*(long *)(this + 0x10) + 0xbc),*(float *)(lVar3 + 0x24),
               *(float *)(lVar3 + 0x28));
    __s = "normal";
    *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0;
  }
  else {
    lVar3 = FUN_03bc5a90(*(undefined8 *)(lVar3 + 0x70),1);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)(*(long *)(this + 0x10) + 0xbc),*(float *)(lVar3 + 0x24),
               *(float *)(lVar3 + 0x28));
    *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 1;
    __s = "boosted";
  }
  std::string::string((string *)&local_20,__s);
  ShowLayerSet(this,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  uVar2 = calcBombTier();
  *(undefined4 *)(this + 0x28) = uVar2;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  Sexy::Insets::Insets(aIStack_58,(int)(*pfVar4 - 90.0),(int)pfVar4[1],0xb4,0x28);
  EntityFinder::GetEntitiesInRectangle(avStack_38,2,aIStack_58);
  cVar1 = (**(code **)(*(long *)this + 0x180))(this);
  if ((cVar1 == '\0') && (cVar1 = shouldHideFromZombies(this,(vector *)avStack_38), cVar1 != '\0'))
  {
    iVar8 = *(int *)(this + 0xd0);
    if (iVar8 == 0) {
      setState(this,1);
      iVar8 = *(int *)(this + 0xd0);
    }
    else if (iVar8 == 3) {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
      pfVar4 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        **)(this + 0x10));
      Sexy::Insets::Insets(aIStack_48,(int)(*pfVar4 - 25.0),(int)pfVar4[1],0x19,0x19);
      EntityFinder::GetEntitiesInRectangle((string *)&local_20,2,aIStack_48);
      lVar3 = FUN_03bc5a7c(local_20,local_18);
      if (lVar3 != 0) {
        puVar6 = (undefined8 *)FUN_03bc5a88(local_20,0);
        pZVar7 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar6);
        cVar1 = shouldSwallowZombie(this,pZVar7);
        if (cVar1 != '\0') {
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_60,(RtWeakPtrBase *)aRStack_68);
          swallowZombie(this,aRStack_60);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
        }
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
      iVar8 = *(int *)(this + 0xd0);
    }
  }
  else {
    iVar8 = *(int *)(this + 0xd0);
    if (iVar8 == 3) {
      setState(this,8);
      iVar8 = *(int *)(this + 0xd0);
    }
  }
  if (iVar8 == 7) {
    this_00 = (RtMixedPtrBase *)(this + 0xd8);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if (cVar1 == '\0') {
      iVar8 = *(int *)(this + 0xd0);
    }
    else {
      fVar14 = *(float *)(this + 0xe0);
      fVar10 = (float)PVZ_Dt();
      this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      pfVar4 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(this_01);
      fVar13 = pfVar4[2];
      fVar12 = *pfVar4;
      fVar11 = pfVar4[1];
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      pcVar9 = *(code **)(*plVar5 + 0x78);
      EATextSquish::Vec3::Vec3((Vec3 *)&local_20,fVar12,fVar11,fVar13 - fVar14 * fVar10);
      (*pcVar9)(plVar5,(string *)&local_20);
      iVar8 = *(int *)(this + 0xd0);
    }
  }
  if ((iVar8 == 5) && (fVar11 = *(float *)(this + 0xe4), fVar10 = (float)PVZ_T(), fVar11 < fVar10))
  {
    setState(this,6);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShadowPeashooter::onAnimStoppedCallback(std::string const&) */

void __thiscall
PlantShadowPeashooter::onAnimStoppedCallback(PlantShadowPeashooter *this,string *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  bool bVar1;
  char cVar2;
  Zombie *this_01;
  long *plVar3;
  code *pcVar4;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"down_start");
  if (bVar1) {
    setState(this,3);
    bVar1 = std::operator==(param_1,"down_end");
  }
  else {
    bVar1 = std::operator==(param_1,"down_end");
  }
  if (bVar1) {
    setState(this,10);
    bVar1 = std::operator==(param_1,"down_attack");
  }
  else {
    bVar1 = std::operator==(param_1,"down_attack");
  }
  if (bVar1) {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8);
    setState(this,8);
    this_01 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    Zombie::SetIgnoresAllDamage(this_01,false);
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    cVar2 = (**(code **)(*plVar3 + 0x378))();
    if (cVar2 != '\0') {
      plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      (**(code **)(*plVar3 + 0x240))();
    }
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    (**(code **)(*plVar3 + 0x80))(plVar3,1);
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    pcVar4 = *(code **)(*plVar3 + 0x120);
    Sexy::Point::Point(aPStack_78,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
    DamageInfo::DamageInfo((DamageInfo *)0x0,local_70,local_6c,aDStack_68,4,aPStack_78,0);
    (*pcVar4)(plVar3,aDStack_68);
    DamageInfo::~DamageInfo(aDStack_68);
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
    cVar2 = PlantShadowvanilla::IsBoosted((PlantShadowvanilla *)this);
    if (cVar2 == '\0') {
      PlantStrawBurst::onAnimStoppedCallback((string *)this);
    }
    else {
      updateZombiesSwallowed(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShadowPeashooter::AddLayerSet(std::string, std::vector<std::string,
   std::allocator<std::string > >) */

void __thiscall
PlantShadowPeashooter::AddLayerSet(PlantShadowPeashooter *this,undefined8 param_2,vector *param_3)

{
  string asStack_28 [8];
  vector<std::string,std::allocator<std::string>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_28);
  std::vector<std::string,std::allocator<std::string>>::vector(avStack_20,param_3);
  AnimRigLayerSet::AddSet((AnimRigLayerSet *)(this + 0x58),asStack_28,avStack_20);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_20);
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShadowPeashooter::OnAnimCommand(std::string const&, std::string const&) */

void PlantShadowPeashooter::OnAnimCommand(string *param_1,string *param_2)

{
  char cVar1;
  bool bVar2;
  AttachedEffect *this;
  PopAnim *pPVar3;
  long lVar4;
  long lVar5;
  AttachedGameObjectNode *this_00;
  undefined8 *puVar6;
  RtObject *this_01;
  PlantShadowPeashooterBomb *this_02;
  float *pfVar7;
  SexyVector3 *pSVar8;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_03;
  Point *extraout_x1;
  undefined8 uVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  Board *pBVar15;
  undefined4 uVar13;
  float fVar14;
  RtMixedPtrBase aRStack_48 [8];
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  string asStack_20 [24];
  ulong local_8;
  
  local_8 = ___stack_chk_guard;
  fVar14 = 0.0;
  if (*(int *)(param_1 + 0x28) - 1U < 3) {
    fVar14 = *(float *)(&DAT_057523e0 + (ulong)(*(int *)(param_1 + 0x28) - 1U) * 4);
  }
  cVar1 = (**(code **)(*(long *)param_1 + 0x180))(param_1);
  if ((cVar1 == '\0') || (bVar2 = std::operator==(param_2,"plantfood_start"), !bVar2)) {
    cVar1 = (**(code **)(*(long *)param_1 + 0x180))(param_1);
    if ((cVar1 == '\0') || (bVar2 = std::operator==(param_2,"plantfood_move"), !bVar2)) {
      uVar10 = ___stack_chk_guard;
      if (local_8 == ___stack_chk_guard) {
        PlantFramework::OnAnimCommand(param_1,param_2);
        return;
      }
      goto LAB_03bca5e8;
    }
    lVar4 = FUN_03bc7248(*(undefined8 *)(param_1 + 0x10));
    lVar5 = FUN_03bc5a90(*(undefined8 *)(lVar4 + 0x70),(long)(*(int *)(param_1 + 0x28) + 1));
    std::string::string(asStack_20,"bombEffect");
    this_00 = (AttachedGameObjectNode *)
              GameObjectDictionary::FindOrCreate
                        ((GameObjectDictionary *)(param_1 + 0x38),asStack_20);
    std::string::~string(asStack_20);
    nop();
    AttachedGameObjectNode::Destroy(this_00);
    uVar9 = *(undefined8 *)(gLawnApp + 0x9f0);
    puVar6 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             **)(param_1 + 0x10));
                    /* WARNING: Load size is inaccurate */
    pBVar15._0_4_ = *puVar6;
    fVar14 = fVar14 + *(float *)(puVar6 + 1);
    uVar13 = *(undefined4 *)((long)puVar6 + 4);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_20,(RtWeakPtrBase *)(lVar5 + 8));
    this_01 = (RtObject *)
              Board::AddProjectile
                        (pBVar15._0_4_,uVar13,uVar9,asStack_20,*(undefined8 *)(param_1 + 0x10),0);
    this_02 = Sexy::RtObject::Cast<PlantShadowPeashooterBomb>(this_01);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
    PlantShadowPeashooterBomb::InitializeBomb
              (this_02,(PlantShadowPeashooter *)param_1,*(int *)(param_1 + 0x28));
    fVar11 = (float)FUN_03bc59b0(*(undefined4 *)(this_02 + 0xd8));
    fVar12 = (float)GetSkillDamageRate((PlantShadowPeashooter *)param_1);
    FUN_03bc59b4(fVar12 * fVar11,this_02 + 0xd8);
    PlantFramework::FindTargetZombie(aRStack_48,param_1,0);
    DVec3::DVec3((DVec3 *)&local_40);
    if (*(int *)(param_1 + 0x28) == 3) {
      Sexy::Point::Point((Point *)asStack_20,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) / 2,
                         *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc) / 2);
      BoardTransforms::GridToBoardSpaceUnbounded((BoardTransforms *)asStack_20,extraout_x1);
      fVar14 = 0.0;
      fVar11 = (float)(int)local_30;
      local_38 = 0.0;
      local_3c = (float)(int)local_2c;
      local_40 = fVar11;
    }
    else {
      cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_48);
      if (cVar1 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)asStack_20,(RtWeakPtrBase *)aRStack_48);
        cVar1 = isZombieInFrontOfPlant((PlantShadowPeashooter *)param_1,asStack_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20)
        ;
        if (cVar1 != '\0') {
          this_03 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
          pSVar8 = (SexyVector3 *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_leftmost(this_03);
          Sexy::SexyVector3::operator=((SexyVector3 *)&local_40,pSVar8);
          lVar5 = Board::FindRegionWithFlags(*(undefined8 *)(gLawnApp + 0x9f0),(DVec3 *)&local_40,2)
          ;
          if (lVar5 != 0) {
            local_38 = local_38 + 12.5;
          }
          fVar11 = 1.1;
          local_40 = local_40 * 1.1;
          goto LAB_03bca4ac;
        }
      }
      pfVar7 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        **)(param_1 + 0x10));
      fVar11 = 700.0;
      local_3c = pfVar7[1];
      local_38 = 0.0;
      local_40 = *pfVar7 + 700.0;
    }
LAB_03bca4ac:
    pSVar8 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this_02);
    local_30 = (float)Sexy::SexyVector3::operator-((SexyVector3 *)&local_40,pSVar8);
    fVar12 = 1.0 / *(float *)(lVar4 + 0x2cc);
    local_2c = fVar11;
    local_28 = fVar14;
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_20,fVar12 * local_30,fVar12 * fVar11,fVar12 * fVar14);
    Sexy::SexyVector3::operator=((SexyVector3 *)&local_30,(SexyVector3 *)asStack_20);
    Projectile::SetVelocity((Projectile *)this_02,(SexyVector3 *)&local_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  }
  else {
    std::string::string(asStack_20,"bombEffect");
    this = (AttachedEffect *)
           GameObjectDictionary::FindOrCreate((GameObjectDictionary *)(param_1 + 0x38),asStack_20);
    std::string::~string(asStack_20);
    nop();
    std::string::string((string *)&local_30,"POPANIM_EFFECTS_SHADOWPEASHOOTER_PLANTFOOD_PROJECTILE")
    ;
    GetPAMByName((string *)&local_30);
    pPVar3 = (PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
    AttachedEffect::InitializeWithAnimation(this,pPVar3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
    std::string::~string((string *)&local_30);
    nop();
    Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)asStack_20);
    Sexy::StrFormat("tier%i_intro",(string *)&local_30,(ulong)*(uint *)(param_1 + 0x28));
    AnimationSequence::AddSingleAnimation(asStack_20,(string *)&local_30,0);
    std::string::~string((string *)&local_30);
    Sexy::StrFormat("tier%i_idle",(string *)&local_30,(ulong)*(uint *)(param_1 + 0x28));
    PVZ_EOT();
    AnimationSequence::AddLoopingAnimation(asStack_20,(string *)&local_30,0);
    std::string::~string((string *)&local_30);
    AttachedEffect::PlayAnimSequenceAndDestroy(this,(AnimationSequence *)asStack_20);
    EATextSquish::Vec3::Vec3((Vec3 *)&local_30,0.0,-fVar14,0.0);
    (**(code **)(*(long *)this + 0x18))(this,*(undefined8 *)(param_1 + 0x10),(string *)&local_30,1);
    AnimationSequence::~AnimationSequence((AnimationSequence *)asStack_20);
  }
  uVar10 = (ulong)bVar2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
LAB_03bca5e8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShadowPeashooter::Initialize() */

void __thiscall PlantShadowPeashooter::Initialize(PlantShadowPeashooter *this)

{
  string *psVar1;
  string *psVar2;
  undefined4 uVar3;
  float fVar4;
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
  PlantFramework::Initialize((PlantFramework *)this);
  std::string::string(asStack_e8,"shadow_powered_collarshadow_powered_eyel");
  std::string::string(asStack_e0,"shadow_powered_eyel_closed");
  std::string::string(asStack_d8,"shadow_powered_eyer");
  std::string::string(asStack_d0,"shadow_powered_eyer_closed");
  std::string::string(asStack_c8,"shadow_powered_head");
  std::string::string(asStack_c0,"shadow_powered_leaf_anim");
  std::string::string(asStack_b8,"shadow_powered_leaf_anim_base001");
  std::string::string(asStack_b0,"shadow_powered_leaf_anim_base002");
  std::string::string(asStack_a8,"shadow_powered_leaf_anim_base003");
  std::string::string(asStack_a0,"shadow_powered_leaf_anim_base004");
  std::string::string(asStack_98,"shadow_powered_leaf_anim_base005");
  std::string::string(asStack_90,"shadow_powered_leaf_anim_base006");
  std::string::string(asStack_88,"shadow_powered_leaf_anim_base007");
  std::string::string(asStack_80,"shadow_powered_leaf_anim_base008");
  std::string::string(asStack_78,"shadow_powered_leaf_anim_base009");
  std::string::string(asStack_70,"shadow_powered_leaf_anim_base010");
  std::string::string(asStack_68,"shadow_powered_leaf_anim_base011");
  std::string::string(asStack_60,"shadow_powered_leaf_anim_base012");
  std::string::string(asStack_58,"shadow_powered_mouth");
  std::string::string(asStack_50,"shadow_powered_mouth_closed");
  std::string::string(asStack_48,"shadow_powered_neck");
  std::string::string(asStack_40,"shadow_powered_neck2");
  std::string::string(asStack_38,"shadow_powered_neck3");
  std::string::string(asStack_30,"shadow_powered_neck4");
  std::string::string(asStack_28,"shadow_powered_neck5");
  std::string::string(asStack_20,"shadow_powered_neck6");
  std::string::string(asStack_18,"shadow_powered_snout");
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xb8),asStack_e8,0x1b);
  psVar2 = asStack_18;
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
  std::string::string(asStack_e8,"shadow_collar");
  std::string::string(asStack_e0,"shadow_eyel");
  std::string::string(asStack_d8,"shadow_eyel_closed");
  std::string::string(asStack_d0,"shadow_eyer");
  std::string::string(asStack_c8,"shadow_eyer_closed");
  std::string::string(asStack_c0,"shadow_head");
  std::string::string(asStack_b8,"shadow_leaf_anim");
  std::string::string(asStack_b0,"shadow_leaf_anim_base001");
  std::string::string(asStack_a8,"shadow_leaf_anim_base002");
  std::string::string(asStack_a0,"shadow_leaf_anim_base003");
  std::string::string(asStack_98,"shadow_leaf_anim_base004");
  std::string::string(asStack_90,"shadow_leaf_anim_base005");
  std::string::string(asStack_88,"shadow_leaf_anim_base006");
  std::string::string(asStack_80,"shadow_leaf_anim_base007");
  std::string::string(asStack_78,"shadow_leaf_anim_base008");
  std::string::string(asStack_70,"shadow_leaf_anim_base009");
  std::string::string(asStack_68,"shadow_leaf_anim_base010");
  std::string::string(asStack_60,"shadow_leaf_anim_base011");
  std::string::string(asStack_58,"shadow_leaf_anim_base012");
  std::string::string(asStack_50,"shadow_mouth");
  std::string::string(asStack_48,"shadow_mouth_closed");
  std::string::string(asStack_40,"shadow_neck");
  std::string::string(asStack_38,"shadow_neck2");
  std::string::string(asStack_30,"shadow_neck3");
  std::string::string(asStack_28,"shadow_neck4");
  std::string::string(asStack_20,"shadow_neck5");
  std::string::string(asStack_18,"shadow_neck6");
  std::string::string(asStack_10,"shadow_snout");
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xa0),asStack_e8,0x1c);
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
  std::string::string(asStack_108,"boosted");
  std::vector<std::string,std::allocator<std::string>>::vector(avStack_100,(vector *)(this + 0xb8));
  AddLayerSet(this,asStack_108,avStack_100);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_100);
  std::string::~string(asStack_108);
  nop();
  std::string::string(asStack_108,"normal");
  std::vector<std::string,std::allocator<std::string>>::vector(avStack_100,(vector *)(this + 0xa0));
  AddLayerSet(this,asStack_108,avStack_100);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_100);
  std::string::~string(asStack_108);
  nop();
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)avStack_100);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xd8),(RtWeakPtr *)avStack_100);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)avStack_100);
  *(undefined4 *)(this + 0xe0) = 0x3f800000;
  uVar3 = PVZ_T();
  *(undefined4 *)(this + 0xe4) = uVar3;
  uVar3 = PVZ_T();
  this[0x2c] = (PlantShadowPeashooter)0x0;
  *(undefined4 *)(this + 0x30) = uVar3;
  std::string::string((string *)avStack_100,"shadowpeashooter_new_avatar_1");
  fVar4 = (float)NewAvatar::GetGeneralBoostValueByNewAvatarName((string *)avStack_100);
  *(int *)(this + 0xe8) = (int)fVar4;
  std::string::~string((string *)avStack_100);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShadowPeashooter::LineShot(bool) */

void __thiscall PlantShadowPeashooter::LineShot(PlantShadowPeashooter *this,bool param_1)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  PlantAction *pPVar9;
  undefined8 *puVar10;
  Zombie *this_00;
  undefined8 uVar11;
  EntityConditionTracker<Zombie,ZombieConditions> *pEVar12;
  GridItem *pGVar13;
  ulong uVar14;
  Effect_PopAnim *this_01;
  PopAnim *pPVar15;
  float *pfVar16;
  Plant *this_02;
  ulong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  DamageInfo *pDVar23;
  Point aPStack_118 [8];
  undefined4 local_110;
  undefined4 local_10c;
  Insets aIStack_108 [16];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e0 [2];
  undefined1 auStack_d0 [80];
  PlantAction aPStack_80 [44];
  int local_54;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar6 = FUN_03bc7248(*(undefined8 *)(this + 0x10));
  this_02 = *(Plant **)(this + 0x10);
  fVar18 = (float)FUN_03bc59c0(*(undefined4 *)(this_02 + 0xf4),*(undefined4 *)(this_02 + 0x100),
                               *(undefined4 *)(this_02 + 0x104),*(undefined4 *)(this_02 + 0x3b8));
  fVar19 = (float)FUN_03bc59d0(*(undefined4 *)(this_02 + 0x3bc));
  fVar20 = (float)Plant::GetExtraDPSmodifier(this_02);
  fVar21 = (float)GetSkillDamageRate(this);
                    /* WARNING: Load size is inaccurate */
  pDVar23._0_4_ = *(DamageInfo **)(lVar6 + 700);
  if (*(code **)(*(long *)this + 0x198) == PlantFramework::GetDamageFlags) {
    uVar7 = PlantFramework::GetDamageFlags();
  }
  else {
    uVar7 = (**(code **)(*(long *)this + 0x198))(this,0);
  }
  FUN_03bc59e0((RtWeakPtr<Sexy::ResourceInfo> *)local_e0,*(undefined8 *)(this + 0x10));
  uVar17 = 0;
  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_e0);
  pPVar9 = (PlantAction *)FUN_03bc5a90(*(undefined8 *)(lVar8 + 0x70),1);
  PlantAction::PlantAction(aPStack_80,pPVar9);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_e0);
  Sexy::Insets::Insets
            (aIStack_108,*(int *)(*(long *)(this + 0x10) + 0x114),
             *(int *)(*(long *)(this + 0x10) + 0x110),0xf,1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_f8);
  uVar4 = operator|(4,2);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_f8,uVar4,
             aIStack_108);
  lVar8 = FUN_03bc5a7c(local_f8,local_f0);
  if (lVar8 != 0) {
    do {
      Sexy::Point::Point(aPStack_118,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_110,1.0,0.0);
      DamageInfo::DamageInfo
                ((DamageInfo *)(fVar18 * fVar19 * (float)local_54 * fVar20 * fVar21),local_110,
                 local_10c,(RtWeakPtr<Sexy::ResourceInfo> *)local_e0,aPStack_118,0);
      operator|=(auStack_d0,uVar7);
      local_e0[0] = *(undefined8 *)(this + 0x10);
      puVar10 = (undefined8 *)FUN_03bc5a88(local_f8,uVar17);
      this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar10);
      if (this_00 == (Zombie *)0x0) {
        puVar10 = (undefined8 *)FUN_03bc5a88(local_f8,uVar17);
        pGVar13 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar10);
        if ((pGVar13 != (GridItem *)0x0) &&
           (cVar2 = (**(code **)(*(long *)pGVar13 + 0x200))(), cVar2 == '\0')) goto LAB_03bcc1bc;
LAB_03bcbfd4:
        puVar10 = (undefined8 *)FUN_03bc5a88(local_f8,uVar17);
        (**(code **)(*(long *)*puVar10 + 0x110))
                  ((long *)*puVar10,(RtWeakPtr<Sexy::ResourceInfo> *)local_e0);
LAB_03bcbff8:
                    /* WARNING: Load size is inaccurate */
        pDVar23._0_4_ = (DamageInfo *)((float)pDVar23._0_4_ - *(float *)(lVar6 + 0x2c4));
        if ((float)pDVar23._0_4_ <= (float)*(DamageInfo **)(lVar6 + 0x2c0)) {
          pDVar23._0_4_ = *(DamageInfo **)(lVar6 + 0x2c0);
        }
        DamageInfo::~DamageInfo((DamageInfo *)local_e0);
      }
      else {
        uVar11 = operator|(1,4);
        uVar4 = operator|(uVar11,0x2000);
        cVar2 = Zombie::MatchesAny(this_00,uVar4,*(undefined8 *)(this + 0x10));
        if (cVar2 == '\0') {
          pEVar12 = (EntityConditionTracker<Zombie,ZombieConditions> *)
                    Zombie::GetConditionTracker(this_00);
          cVar2 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition(pEVar12,0x2d);
          if (cVar2 == '\0') {
            DamageInfo::AddCondition(pDVar23._0_4_,(RtWeakPtr<Sexy::ResourceInfo> *)local_e0,0x2d);
          }
          puVar10 = (undefined8 *)FUN_03bc5a88(local_f8,uVar17);
          pGVar13 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar10);
          if ((pGVar13 == (GridItem *)0x0) ||
             (cVar2 = (**(code **)(*(long *)pGVar13 + 0x200))(), cVar2 != '\0')) {
            cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00);
            if ((cVar2 != '\0') ||
               (bVar3 = (**(code **)(*(long *)this_00 + 0x330))(this_00), param_1 <= bVar3))
            goto LAB_03bcbfd4;
            puVar10 = (undefined8 *)FUN_03bc5a88(local_f8,uVar17);
            (**(code **)(*(long *)*puVar10 + 0x110))
                      ((long *)*puVar10,(RtWeakPtr<Sexy::ResourceInfo> *)local_e0);
            fVar22 = (float)PVZ_T();
            if ((*(float *)(this + 0x30) < fVar22) &&
               ((cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar2 != '\0' ||
                (cVar2 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar2 != '\0')))) {
              BoardEntity::CalcGridPosition();
              CreateHole(this,(FastCurve *)&local_110);
            }
            goto LAB_03bcbff8;
          }
        }
LAB_03bcc1bc:
        DamageInfo::~DamageInfo((DamageInfo *)local_e0);
      }
      uVar17 = uVar17 + 1;
      uVar14 = FUN_03bc5a7c(local_f8,local_f0);
    } while (uVar17 < uVar14);
  }
  this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string((string *)&local_110,"POPANIM_EFFECTS_SHADOWPEASHOOTER_PROJECTILE");
  GetPAMByName((string *)&local_110);
  pPVar15 = (PopAnim *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_e0);
  Effect_PopAnim::CreatePopAnimRig(this_01,pPVar15,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_e0);
  std::string::~string((string *)&local_110);
  nop();
  pfVar16 = (float *)std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     **)(this + 0x10));
  EATextSquish::Vec3::Vec3((Vec3 *)local_e0,*pfVar16 + 16.0,pfVar16[1] - 130.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_01,(SexyVector3 *)local_e0,-1);
  uVar4 = Board::MakeRenderOrder(0x64960,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0);
  FUN_03bc59a8(this_01 + 0x1c,uVar4);
  iVar5 = FUN_03bc5a04(*(undefined8 *)(this + 0x10));
  uVar17 = 5;
  if (this[0x2c] == (PlantShadowPeashooter)0x0) {
    uVar1 = iVar5 + 3;
    if (6 < (int)uVar1) {
      uVar1 = 6;
    }
    uVar17 = (ulong)uVar1;
  }
  Sexy::StrFormat("animation%i",(RtWeakPtr<Sexy::ResourceInfo> *)local_e0,uVar17);
  Effect_PopAnim::PlaySingleAnimation(this_01,(RtWeakPtr<Sexy::ResourceInfo> *)local_e0,0);
  std::string::~string((string *)local_e0);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_f8);
  PlantAction::~PlantAction(aPStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShadowPeashooter::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantShadowPeashooter::Fire
          (PlantShadowPeashooter *this,RtWeakPtrBase *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_03bc7248(*(undefined8 *)(this + 0x10));
  cVar1 = (**(code **)(*(long *)this + 0x180))(this);
  lVar4 = 0;
  if ((cVar1 == '\0') && (*(int *)(this + 0xd0) == 0)) {
    cVar1 = FUN_03bc5a0c(*(undefined8 *)(this + 0x10));
    if ((cVar1 == '\0') || (this[0x2c] == (PlantShadowPeashooter)0x0)) {
      cVar1 = PlantShadowvanilla::IsBoosted((PlantShadowvanilla *)this);
      if (cVar1 == '\0') {
        iVar2 = FUN_03bc5a04(*(undefined8 *)(this + 0x10));
        if ((1 < iVar2) && (lVar3 != 0)) {
          fVar5 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
          lVar4 = *(long *)(this + 0x10);
          fVar6 = *(float *)(lVar3 + 0x2e8);
          iVar2 = FUN_03bc5a04(lVar4);
          if (2 < iVar2) {
            fVar6 = *(float *)(lVar3 + 0x2ec) * fVar6 + fVar6;
          }
          if (fVar6 <= fVar5) {
            *(undefined4 *)(lVar4 + 0x150) = 0;
          }
          else {
            *(undefined4 *)(lVar4 + 0x150) = 5;
          }
        }
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
        lVar4 = PlantFramework::Fire((PlantFramework *)this,aRStack_10,param_3,param_4);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        if (lVar4 != 0) {
          fVar5 = (float)FUN_03bc59b0(*(undefined4 *)(lVar4 + 0xd8));
          fVar6 = (float)GetSkillDamageRate(this);
          FUN_03bc59b4(fVar6 * fVar5,(undefined4 *)(lVar4 + 0xd8));
        }
      }
      else {
        LineShot(this,false);
        lVar4 = 0;
      }
    }
    else {
      cVar1 = PlantShadowvanilla::IsBoosted((PlantShadowvanilla *)this);
      if (cVar1 == '\0') {
        LineShot(this,false);
      }
      else {
        LineShot(this,true);
      }
      this[0x2c] = (PlantShadowPeashooter)0x0;
      lVar3 = FUN_03bc737c(*(undefined8 *)(this + 0x10));
      FUN_03bc5a2c(lVar3 + 0x3b8,0);
      lVar4 = 0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}


/* PlantShadowPeashooter::~PlantShadowPeashooter() */

void __thiscall PlantShadowPeashooter::~PlantShadowPeashooter(PlantShadowPeashooter *this)

{
  *(undefined ***)this = &PTR_GetClass_0673a5b0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xb8));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xa0));
  AnimRigLayerSet::~AnimRigLayerSet((AnimRigLayerSet *)(this + 0x58));
  AttachedEffectManager::~AttachedEffectManager((AttachedEffectManager *)(this + 0x38));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantShadowPeashooter::~PlantShadowPeashooter() */

void __thiscall PlantShadowPeashooter::~PlantShadowPeashooter(PlantShadowPeashooter *this)

{
  ~PlantShadowPeashooter(this);
  AK::FreeHook(this);
  return;
}

