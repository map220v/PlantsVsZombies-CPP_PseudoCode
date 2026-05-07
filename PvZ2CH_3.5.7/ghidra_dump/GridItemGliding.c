// Class: GridItemGliding


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGliding::onUpdate() */

void __thiscall GridItemGliding::onUpdate(GridItemGliding *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  bool bVar2;
  PopAnimRig *pPVar3;
  float fVar4;
  float fVar5;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_20 [8];
  Color aCStack_18 [16];
  long lStack_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x198);
  lStack_8 = ___stack_chk_guard;
  GridItem::onUpdate((GridItem *)this);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_20);
    if (this[0x194] != (GridItemGliding)0x0) {
      GridItemAnimation::GetLinkedAnimRig();
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)a_Stack_20,(RtWeakPtr *)aCStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aCStack_18);
    }
    cVar1 = EntityConditionTracker<Creature,CreatureConditions>::TestModifierFlag
                      ((EntityConditionTracker<Creature,CreatureConditions> *)(this + 0xa8),0x10);
    if (cVar1 == '\0') {
      pPVar3 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      PopAnimRig::ClearMultiplicativeOverlayColor(pPVar3);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)a_Stack_20);
      if (bVar2) {
        pPVar3 = (PopAnimRig *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
        PopAnimRig::ClearMultiplicativeOverlayColor(pPVar3);
      }
    }
    else {
      EntityConditionTracker<Creature,CreatureConditions>::GetDrawOverlayColor();
      pPVar3 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      PopAnimRig::SetMultiplicativeOverlayColor(pPVar3,aCStack_18);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)a_Stack_20);
      if (bVar2) {
        pPVar3 = (PopAnimRig *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
        PopAnimRig::SetMultiplicativeOverlayColor(pPVar3,aCStack_18);
      }
    }
    cVar1 = EntityConditionTracker<Creature,CreatureConditions>::TestModifierFlag
                      ((EntityConditionTracker<Creature,CreatureConditions> *)(this + 0xa8),8);
    if (cVar1 == '\0') {
      pPVar3 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      PopAnimRig::ClearShaderOverrideColor(pPVar3);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)a_Stack_20);
      if (bVar2) {
        pPVar3 = (PopAnimRig *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
        PopAnimRig::ClearShaderOverrideColor(pPVar3);
      }
    }
    else {
      EntityConditionTracker<Creature,CreatureConditions>::GetDrawShaderColor();
      pPVar3 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      PopAnimRig::SetShaderOverrideColor(pPVar3,aCStack_18);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)a_Stack_20);
      if (bVar2) {
        pPVar3 = (PopAnimRig *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
        PopAnimRig::SetShaderOverrideColor(pPVar3,aCStack_18);
      }
    }
    pPVar3 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    fVar4 = (float)PVZ_T();
    fVar5 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(pPVar3,fVar4,fVar5);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGliding::StaticClassInit() */

void GridItemGliding::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemGliding");
    (*pcVar2)(plVar1,asStack_10,FUN_04ee3cac,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemGliding::StaticGetClass() */

long * GridItemGliding::StaticGetClass(void)

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
  uVar2 = GridItemGravestone::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemGliding",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemGliding::GetClass() const */

long * GridItemGliding::GetClass(void)

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
  uVar2 = GridItemGravestone::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemGliding",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemGliding::GridItemGliding() */

void __thiscall GridItemGliding::GridItemGliding(GridItemGliding *this)

{
  GridItemGravestone::GridItemGravestone((GridItemGravestone *)this);
  this[0x1e0] = (GridItemGliding)0x0;
  this[0x1e1] = (GridItemGliding)0x0;
  *(undefined ***)this = &PTR_GetClass_069fecc0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemGliding_069fef80;
  return;
}


/* GridItemGliding::StaticNew() */

GridItemGliding * GridItemGliding::StaticNew(void)

{
  GridItemGliding *this;
  
  this = ::operator_new(0x1e8);
  GridItemGliding(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGliding::OnAnimStoppedCallback(std::string const&) */

void __thiscall GridItemGliding::OnAnimStoppedCallback(GridItemGliding *this,string *param_1)

{
  bool bVar1;
  PopAnimRig *pPVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"jiazi_land");
  if (bVar1) {
    if (this[0x1e0] == (GridItemGliding)0x0) {
      GridItemAnimation::GetAnimRig();
      pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
      std::string::string(asStack_40,"damage1");
      Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
      PopAnimRig::PlayAndStop(pPVar2,asStack_40,0,aDStack_38);
      std::string::~string(asStack_40);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
      if (this[0x1e1] == (GridItemGliding)0x0) {
        this[0x1e1] = (GridItemGliding)0x1;
        BoardEntity::CalcGridPosition();
        ZombieGliding::KillGridPlant(this,asStack_40);
      }
    }
    else {
      (**(code **)(*(long *)this + 0x230))(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGliding::PlayDropAnimation(bool) */

void __thiscall GridItemGliding::PlayDropAnimation(GridItemGliding *this,bool param_1)

{
  PopAnimRig *pPVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
  std::string::string(asStack_58,"jiazi_land");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnAnimStoppedCallback);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<GridItemGliding,void(GridItemGliding::*)(std::string_const&)>(aDStack_38,aCStack_50);
  PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
  this[0x1e0] = (GridItemGliding)param_1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGliding::onTakeDamage(DamageInfo const&) */

void GridItemGliding::onTakeDamage(DamageInfo *param_1)

{
  int iVar1;
  RtObject *this;
  GravestoneAnimRig *pGVar2;
  float fVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = GridItemGravestone::calcDamageState((GridItemGravestone *)param_1);
  if (*(int *)(param_1 + 0x1ac) != iVar1) {
    if ((1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x1dc))) {
      GridItemGravestone::spawnBreakEffect((GridItemGravestone *)param_1,iVar1 + -2);
    }
    GridItemAnimation::GetAnimRig();
    this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    pGVar2 = Sexy::RtObject::Cast<GravestoneAnimRig>(this);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (pGVar2 != (GravestoneAnimRig *)0x0) {
      (**(code **)(*(long *)pGVar2 + 0x110))(pGVar2,iVar1,0);
    }
    if (param_1[0x1e1] == (DamageInfo)0x0) {
      param_1[0x1e1] = (DamageInfo)0x1;
      BoardEntity::CalcGridPosition();
      ZombieGliding::KillGridPlant(param_1,aRStack_10);
    }
    *(int *)(param_1 + 0x1ac) = iVar1;
  }
  if (*(code **)(*(long *)param_1 + 0x1d8) == GridItem::GetHitpoints) {
    fVar3 = (float)GridItem::GetHitpoints((GridItem *)param_1);
  }
  else {
    fVar3 = (float)(**(code **)(*(long *)param_1 + 0x1d8))();
  }
  if (fVar3 <= 0.0) {
    GridItemGravestone::spawnBreakEffect
              ((GridItemGravestone *)param_1,*(int *)(param_1 + 0x1dc) + -2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemGliding::onGridItemInitialize() */

void __thiscall GridItemGliding::onGridItemInitialize(GridItemGliding *this)

{
  GridItemGlidingProps *pGVar1;
  
  pGVar1 = GridItem::GetProps<GridItemGlidingProps>();
  FUN_04ee3790(*(undefined4 *)(pGVar1 + 0x10),this + 300);
  if (*(code **)(*(long *)this + 0x1e0) == GridItem::GetMaxHitpoints) {
    GridItem::GetMaxHitpoints((GridItem *)this);
  }
  else {
    (**(code **)(*(long *)this + 0x1e0))();
  }
  FUN_04ee3798(this + 0x128);
  *(int *)(this + 0x1dc) = (int)(char)pGVar1[0xd0];
  *(undefined4 *)(this + 0x1ac) = 0;
  RealObject::JoinTeam((RealObject *)this,2);
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGliding::GatherPlantingRestrictions(PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*) const */

void __thiscall
GridItemGliding::GatherPlantingRestrictions
          (GridItemGliding *this,PlantType *param_1,vector *param_2)

{
  GridItemPropertySheet *pGVar1;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar1 = GridItem::GetProps<GridItemPropertySheet>();
  PlantingRestrictionSet::GatherPlantingRestrictions
            ((PlantingRestrictionSet *)(pGVar1 + 0x68),param_1,param_2);
  local_c = (**(code **)(*(long *)this + 0x2a8))(this);
  std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
            ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_2,
             (PlantingReason *)&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemGliding::~GridItemGliding() */

void __thiscall GridItemGliding::~GridItemGliding(GridItemGliding *this)

{
  *(undefined ***)this = &PTR_GetClass_069fecc0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemGliding_069fef80;
  GridItemGravestone::~GridItemGravestone((GridItemGravestone *)this);
  return;
}


/* non-virtual thunk to GridItemGliding::~GridItemGliding() */

void __thiscall GridItemGliding::~GridItemGliding(GridItemGliding *this)

{
  ~GridItemGliding(this + -0x10);
  return;
}


/* GridItemGliding::~GridItemGliding() */

void __thiscall GridItemGliding::~GridItemGliding(GridItemGliding *this)

{
  ~GridItemGliding(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemGliding::~GridItemGliding() */

void __thiscall GridItemGliding::~GridItemGliding(GridItemGliding *this)

{
  ~GridItemGliding(this + -0x10);
  return;
}

