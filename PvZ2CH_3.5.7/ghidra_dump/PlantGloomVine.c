// Class: PlantGloomVine


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGloomVine::StaticClassInit() */

void PlantGloomVine::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantGloomVine");
    (*pcVar2)(plVar1,asStack_10,FUN_04d3dd90,0x170,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGloomVine::StaticGetClass() */

long * PlantGloomVine::StaticGetClass(void)

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
  uVar2 = PlantVineFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantGloomVine",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantGloomVine::GetClass() const */

long * PlantGloomVine::GetClass(void)

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
  uVar2 = PlantVineFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantGloomVine",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantGloomVine::~PlantGloomVine() */

void __thiscall PlantGloomVine::~PlantGloomVine(PlantGloomVine *this)

{
  *(undefined ***)this = &PTR_GetClass_069aec30;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x150));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x148));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x140));
  PlantVineFramework::~PlantVineFramework((PlantVineFramework *)this);
  return;
}


/* PlantGloomVine::~PlantGloomVine() */

void __thiscall PlantGloomVine::~PlantGloomVine(PlantGloomVine *this)

{
  ~PlantGloomVine(this);
  AK::FreeHook(this);
  return;
}


/* PlantGloomVine::onEndCondition(PlantConditions) */

void PlantGloomVine::onEndCondition(long param_1)

{
  char cVar1;
  MoonFlowerPoweredTilesSubsystem *this;
  
  cVar1 = Board::IsLevelEnded(*(Board **)(gLawnApp + 0x9f0));
  if (cVar1 != '\0') {
    return;
  }
  this = (MoonFlowerPoweredTilesSubsystem *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                   ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x148));
  MoonFlowerPoweredTilesSubsystem::UpdateGlowEffects(this,*(Plant **)(param_1 + 0x10));
  return;
}


/* PlantGloomVine::onKilled(bool) */

void PlantGloomVine::onKilled(bool param_1)

{
  RtWeakPtr *this;
  bool bVar1;
  char cVar2;
  ulong uVar3;
  MoonFlowerPoweredTilesSubsystem *pMVar4;
  
  uVar3 = (ulong)param_1;
  this = (RtWeakPtr *)(uVar3 + 0x148);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
  if (!bVar1) {
    return;
  }
  cVar2 = Plant::IsOnBoard(*(Plant **)(uVar3 + 0x10));
  if (cVar2 == '\0') {
    pMVar4 = (MoonFlowerPoweredTilesSubsystem *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    MoonFlowerPoweredTilesSubsystem::RemoveGlowEffects(pMVar4,(Plant *)0x0);
    return;
  }
  pMVar4 = (MoonFlowerPoweredTilesSubsystem *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  MoonFlowerPoweredTilesSubsystem::RemoveGlowEffects(pMVar4,*(Plant **)(uVar3 + 0x10));
  return;
}


/* PlantGloomVine::onApplyCondition(PlantConditions) */

void PlantGloomVine::onApplyCondition(long param_1)

{
  bool bVar1;
  MoonFlowerPoweredTilesSubsystem *this;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0x148));
  if (!bVar1) {
    return;
  }
  this = (MoonFlowerPoweredTilesSubsystem *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                   ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x148));
  MoonFlowerPoweredTilesSubsystem::UpdateGlowEffects(this,*(Plant **)(param_1 + 0x10));
  return;
}


/* PlantGloomVine::OnRelocationBegun() */

void __thiscall PlantGloomVine::OnRelocationBegun(PlantGloomVine *this)

{
  bool bVar1;
  MoonFlowerPoweredTilesSubsystem *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x148));
  if (!bVar1) {
    return;
  }
  this_00 = (MoonFlowerPoweredTilesSubsystem *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x148));
  MoonFlowerPoweredTilesSubsystem::RemoveGlowEffects(this_00,(Plant *)0x0);
  return;
}


/* PlantGloomVine::OnRelocationComplete() */

void __thiscall PlantGloomVine::OnRelocationComplete(PlantGloomVine *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  MoonFlowerPoweredTilesSubsystem *pMVar3;
  
  this_00 = (RtWeakPtr *)(this + 0x148);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (!bVar1) {
    return;
  }
  cVar2 = Plant::IsOnBoard(*(Plant **)(this + 0x10));
  if (cVar2 == '\0') {
    pMVar3 = (MoonFlowerPoweredTilesSubsystem *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    MoonFlowerPoweredTilesSubsystem::RemoveGlowEffects(pMVar3,(Plant *)0x0);
    return;
  }
  pMVar3 = (MoonFlowerPoweredTilesSubsystem *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  MoonFlowerPoweredTilesSubsystem::AddGlowEffects(pMVar3,*(Plant **)(this + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGloomVine::updateAttackProps() */

void __thiscall PlantGloomVine::updateAttackProps(PlantGloomVine *this)

{
  RtObject *pRVar1;
  GloomVineProps *pGVar2;
  ComponentDamageRadius *this_00;
  PowerPropsDamageRadius *pPVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_04d3c5dc(aRStack_10,*(undefined8 *)(this + 0x10));
  pRVar1 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar2 = Sexy::RtObject::Cast<GloomVineProps_const>(pRVar1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  this_00 = (ComponentDamageRadius *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x140));
  PowerSet::Find(aRStack_10,pGVar2 + 0x58,5,0);
  pRVar1 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pPVar3 = Sexy::RtObject::Cast<PowerPropsDamageRadius>(pRVar1);
  ComponentDamageRadius::SetRadiusProps(this_00,(ComponentDamageRadiusProps *)(pPVar3 + 0x18));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGloomVine::UpdatePowerUpStats() */

void __thiscall PlantGloomVine::UpdatePowerUpStats(PlantGloomVine *this)

{
  bool bVar1;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x140));
  if (!bVar1) {
    return;
  }
  updateAttackProps(this);
  return;
}


/* PlantGloomVine::NotifyDamagedEntity(BoardEntity*) */

void __thiscall PlantGloomVine::NotifyDamagedEntity(PlantGloomVine *this,BoardEntity *param_1)

{
  int iVar1;
  Zombie *this_00;
  undefined8 uVar2;
  ZombieConditionTracker *pZVar3;
  
  this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
  if ((this_00 != (Zombie *)0x0) && (iVar1 = FUN_04d3c600(*(undefined8 *)(this + 0x10)), 1 < iVar1))
  {
                    /* WARNING: Load size is inaccurate */
    pZVar3._0_4_ = *(ZombieConditionTracker **)(this + 0x160);
    Zombie::ApplyCondition((Zombie *)0x3ff33333,0,this_00,0x5f,1);
    uVar2 = Zombie::GetConditionTracker(this_00);
    ZombieConditionTracker::SetAdditionalValue(pZVar3._0_4_,uVar2,0x5f);
    return;
  }
  return;
}


/* PlantGloomVine::PlantGloomVine() */

void __thiscall PlantGloomVine::PlantGloomVine(PlantGloomVine *this)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  PlantVineFramework::PlantVineFramework((PlantVineFramework *)this);
  *(undefined ***)this = &PTR_GetClass_069aec30;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x140));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x148));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x150));
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x168) = uVar2;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,updatePlacedBoosted);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<PlantGloomVine,void(PlantGloomVine::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantPlaced,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,updatePlantDiedBoosted);
  local_40 = local_8;
  local_50 = local_18;
  uStack_48 = uStack_10;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<PlantGloomVine,void(PlantGloomVine::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDied,&local_50);
  return;
}


/* PlantGloomVine::StaticNew() */

PlantGloomVine * PlantGloomVine::StaticNew(void)

{
  PlantGloomVine *this;
  
  this = ::operator_new(0x170);
  PlantGloomVine(this);
  return this;
}


/* PlantGloomVine::GetMoonBoostRadius() */

undefined4 __thiscall PlantGloomVine::GetMoonBoostRadius(PlantGloomVine *this)

{
  long lVar1;
  
  lVar1 = FUN_04d3d570(*(undefined8 *)(this + 0x10));
  return *(undefined4 *)(lVar1 + 0x2b8);
}


/* PlantGloomVine::calculateNextAttack() */

void __thiscall PlantGloomVine::calculateNextAttack(PlantGloomVine *this)

{
  long lVar1;
  float fVar2;
  
  lVar1 = FUN_04d3d570(*(undefined8 *)(this + 0x10));
  fVar2 = (float)PVZ_T();
  lVar1 = FUN_04d3c640(*(undefined8 *)(lVar1 + 0x70));
  *(float *)(this + 0x13c) = fVar2 + *(float *)(lVar1 + 0x28);
  updateAttackProps(this);
  return;
}


/* PlantGloomVine::NotifyOfDamagedZombieCount(int) */

void PlantGloomVine::NotifyOfDamagedZombieCount(int param_1)

{
  long lVar1;
  PlantGloomVine *this;
  float fVar2;
  
  this = (PlantGloomVine *)(ulong)(uint)param_1;
  lVar1 = FUN_04d3d570(*(undefined8 *)(this + 0x10));
  fVar2 = (float)PVZ_T();
  lVar1 = FUN_04d3c640(*(undefined8 *)(lVar1 + 0x70));
  *(float *)(this + 0x13c) = fVar2 + *(float *)(lVar1 + 0x28);
  updateAttackProps(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGloomVine::isBoosted() */

void PlantGloomVine::isBoosted(void)

{
  undefined1 uVar1;
  bool bVar2;
  long extraout_x0;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  BoardEntity::CalcGridPosition();
  Sexy::Insets::Insets((Insets *)local_30,local_40 + -1,local_3c + -1,3,3);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,1,(Insets *)local_30);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_30[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_20);
  while (bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)local_30)
        , uVar1 = 0, bVar2) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    nop();
    if (((extraout_x0 != 0) && (*(RtObject **)(extraout_x0 + 0xa8) != (RtObject *)0x0)) &&
       (bVar2 = Sexy::RtObject::IsA<PlantMoonFlower>(*(RtObject **)(extraout_x0 + 0xa8)), uVar1 = 1,
       bVar2)) break;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGloomVine::setState(unsigned int) */

void __thiscall PlantGloomVine::setState(PlantGloomVine *this,uint param_1)

{
  char cVar1;
  uint uVar2;
  long *plVar3;
  PopAnimRig *pPVar4;
  long *extraout_x0;
  UIEasyButtonWidget *this_00;
  string *__n;
  code *pcVar5;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  *(uint *)(this_00 + 200) = param_1;
  if (param_1 == 10) {
    std::string::string(asStack_70,"attack");
    nop();
    UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    nop();
    pcVar5 = *(code **)(*extraout_x0 + 0x130);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    (*pcVar5)(extraout_x0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    std::string::~string(asStack_70);
  }
  else if (param_1 == 0xb) {
    if ((this[0x158] == (PlantGloomVine)0x0) && (cVar1 = isBoosted(), cVar1 != '\0')) {
      uVar2 = *(int *)(this + 0x164) + 1;
      *(uint *)(this + 0x164) = uVar2;
    }
    else {
      uVar2 = *(uint *)(this + 0x164);
    }
    if (4 < uVar2) {
      *(undefined4 *)(this + 0x164) = 0;
      this[0x158] = (PlantGloomVine)0x1;
    }
    __n = asStack_58;
    std::string::string(asStack_70,"attack");
    nop();
    cVar1 = isBoosted();
    if (cVar1 != '\0') {
      std::string::append(asStack_70,"attack_xt02",(size_t)__n);
    }
    pPVar4 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PopAnimRig::PlayAndStop(pPVar4,asStack_70,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    std::string::~string(asStack_70);
  }
  else if (param_1 == 4) {
    plVar3 = (long *)UIEasyButtonWidget::GetImageNormal(this_00);
    (**(code **)(*plVar3 + 0x118))();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGloomVine::doBasicAttack() */

void __thiscall PlantGloomVine::doBasicAttack(PlantGloomVine *this)

{
  ComponentConditionRadius *this_00;
  
  this_00 = (ComponentConditionRadius *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x140));
  ComponentConditionRadius::beginCoolDown(this_00);
  setState(this,0xe);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGloomVine::updatePlacedBoosted(Plant*) */

void __thiscall PlantGloomVine::updatePlacedBoosted(PlantGloomVine *this,Plant *param_1)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  long extraout_x0;
  long lVar6;
  UIEasyButtonWidget *this_00;
  int local_28;
  int local_1c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (Plant *)0x0) goto LAB_04d3db5c;
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  cVar2 = FUN_04d3c608(this_00);
  if (cVar2 == '\0') goto LAB_04d3db5c;
  UIEasyButtonWidget::GetImageNormal(this_00);
  nop();
  Plant::GetType();
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  bVar3 = std::operator==((string *)(lVar6 + 8),"moonflower");
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  bVar4 = isBoosted();
  bVar5 = FUN_04d3c630(*(undefined1 *)(extraout_x0 + 0x3b8));
  if (bVar4 == bVar5) {
    bVar1 = false;
    if (!bVar3) goto LAB_04d3db3c;
LAB_04d3db88:
    BoardEntity::CalcGridPosition();
    BoardEntity::CalcGridPosition();
    Sexy::Insets::Insets((Insets *)aRStack_18,local_28 + -1,local_1c + -1,3,3);
    bVar5 = Sexy::TRect<int>::Contains
                      ((TRect<int> *)aRStack_18,*(int *)(param_1 + 0x114),*(int *)(param_1 + 0x110))
    ;
    if (bVar5 <= bVar4) goto LAB_04d3db3c;
    FUN_04d3c628(extraout_x0 + 0x3b8,1);
  }
  else {
    bVar1 = true;
    FUN_04d3c628(extraout_x0 + 0x3b8,bVar4);
    if (bVar3) goto LAB_04d3db88;
LAB_04d3db3c:
    if (!bVar1) goto LAB_04d3db5c;
  }
  if (*(int *)(*(long *)(this + 0x10) + 200) == 4) {
    setState(this,4);
  }
LAB_04d3db5c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGloomVine::updatePlantDiedBoosted(Plant*) */

void __thiscall PlantGloomVine::updatePlantDiedBoosted(PlantGloomVine *this,Plant *param_1)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  long extraout_x0;
  Plant *extraout_x0_00;
  UIEasyButtonWidget *this_00;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Plant *)0x0) {
    this_00 = *(UIEasyButtonWidget **)(this + 0x10);
    cVar1 = FUN_04d3c608(this_00);
    if (cVar1 != '\0') {
      UIEasyButtonWidget::GetImageNormal(this_00);
      nop();
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
      BoardEntity::CalcGridPosition();
      Sexy::Insets::Insets((Insets *)local_30,local_40 + -1,local_3c + -1,3,3);
      EntityFinder::GetEntitiesInGridSquares(avStack_20,1,(Insets *)local_30);
      local_38 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_20);
      local_30[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)avStack_20);
      while( true ) {
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)local_30);
        if (!bVar2) break;
        std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
        nop();
        if ((param_1 != extraout_x0_00) &&
           (bVar2 = Sexy::RtObject::IsA<PlantMoonFlower>(*(RtObject **)(extraout_x0_00 + 0xa8)),
           bVar2)) {
          cVar1 = '\x01';
          goto LAB_04d3dd18;
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
      }
      cVar1 = '\0';
LAB_04d3dd18:
      cVar3 = FUN_04d3c630(*(undefined1 *)(extraout_x0 + 0x3b8));
      if (cVar1 != cVar3) {
        FUN_04d3c628(extraout_x0 + 0x3b8,cVar1);
        if (*(int *)(*(long *)(this + 0x10) + 200) == 4) {
          setState(this,4);
        }
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGloomVine::doPlantfoodAttack() */

void __thiscall PlantGloomVine::doPlantfoodAttack(PlantGloomVine *this)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  long extraout_x0;
  RtObject *pRVar4;
  PowerPropsDamageRadius *pPVar5;
  undefined8 *puVar6;
  Zombie *this_00;
  GridItem *pGVar7;
  undefined8 uVar8;
  float fVar9;
  int local_a0;
  int local_9c;
  undefined8 local_98;
  undefined8 local_90 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  float local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_04d3c5dc(aRStack_68,*(undefined8 *)(this + 0x10));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  PowerSet::Find(aRStack_68,extraout_x0 + 0x58,5,1);
  pRVar4 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
  pPVar5 = Sexy::RtObject::Cast<PowerPropsDamageRadius>(pRVar4);
  fVar9 = (float)DamageInfoProps::GetBaseDamage((DamageInfoProps *)(pPVar5 + 0xb8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  DamageInfo::DamageInfo((DamageInfo *)aRStack_68);
  local_60 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
  local_60 = local_60 * fVar9;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  BoardEntity::CalcGridPosition();
  uVar3 = operator|(2,4);
  Sexy::Insets::Insets((Insets *)local_90,local_a0 + -1,local_9c + -1,3,3);
  EntityFinder::GetEntitiesInGridSquares(avStack_80,uVar3,(Insets *)local_90);
  cVar1 = FUN_04d3c608(*(undefined8 *)(this + 0x10));
  if (cVar1 != '\0') {
    Sexy::Insets::Insets((Insets *)local_90,local_a0 + -2,local_9c,1,1);
    EntityFinder::GetEntitiesInGridSquares(avStack_80,uVar3,(Insets *)local_90);
    Sexy::Insets::Insets((Insets *)local_90,local_a0 + 2,local_9c,1,1);
    EntityFinder::GetEntitiesInGridSquares(avStack_80,uVar3,(Insets *)local_90);
    cVar1 = NewPVPUtils::IsPlayingNewPVP();
    if (cVar1 != '\0') {
      cVar1 = NewPVPUtils::IsOppoentRegion((Point *)&local_a0);
      if (cVar1 == '\0') {
        Sexy::Point::Point((Point *)local_90,local_a0,local_9c + -2);
        cVar1 = NewPVPUtils::IsOppoentRegion((Point *)local_90);
        if (cVar1 == '\0') {
          Sexy::Insets::Insets((Insets *)local_90,local_a0,local_9c + -2,1,1);
          EntityFinder::GetEntitiesInGridSquares(avStack_80,uVar3,(Insets *)local_90);
        }
        Sexy::Point::Point((Point *)local_90,local_a0,local_9c + 2);
        cVar1 = NewPVPUtils::IsOppoentRegion((Point *)local_90);
        if (cVar1 != '\0') goto LAB_04d3e32c;
      }
      else {
        Sexy::Point::Point((Point *)local_90,local_a0,local_9c + -2);
        cVar1 = NewPVPUtils::IsOppoentRegion((Point *)local_90);
        if (cVar1 != '\0') {
          Sexy::Insets::Insets((Insets *)local_90,local_a0,local_9c + -2,1,1);
          EntityFinder::GetEntitiesInGridSquares(avStack_80,uVar3,(Insets *)local_90);
        }
        Sexy::Point::Point((Point *)local_90,local_a0,local_9c + 2);
        cVar1 = NewPVPUtils::IsOppoentRegion((Point *)local_90);
        if (cVar1 == '\0') goto LAB_04d3e32c;
      }
      Sexy::Insets::Insets((Insets *)local_90,local_a0,local_9c + 2,1,1);
      EntityFinder::GetEntitiesInGridSquares(avStack_80,uVar3,(Insets *)local_90);
    }
  }
LAB_04d3e32c:
  local_98 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_90[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_80);
  bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_98,(__normal_iterator *)local_90);
  if (bVar2) {
    do {
      puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_98)
      ;
      pRVar4 = (RtObject *)*puVar6;
      this_00 = Sexy::RtObject::Cast<Zombie>(pRVar4);
      pGVar7 = Sexy::RtObject::Cast<GridItem>(pRVar4);
      if ((this_00 != (Zombie *)0x0) && (cVar1 = RealObject::IsOnTeam(this_00,2), cVar1 != '\0')) {
        cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
        if (cVar1 != '\0') {
          Zombie::ApplyCondition((Zombie *)0x3ff33333,0,this_00,0x5f,1);
          uVar8 = Zombie::GetConditionTracker(this_00);
                    /* WARNING: Load size is inaccurate */
          ZombieConditionTracker::SetAdditionalValue
                    (*(ZombieConditionTracker **)(extraout_x0 + 0x364),uVar8,0x5f);
        }
        (**(code **)(*(long *)this_00 + 0x110))(this_00,aRStack_68);
      }
      if ((pGVar7 != (GridItem *)0x0) &&
         (cVar1 = (**(code **)(*(long *)pGVar7 + 0x200))(pGVar7), cVar1 != '\0')) {
        (**(code **)(*(long *)pGVar7 + 0x110))(pGVar7,aRStack_68);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_98);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_98,(__normal_iterator *)local_90);
    } while (bVar2);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGloomVine::doLv5Skill() */

void __thiscall PlantGloomVine::doLv5Skill(PlantGloomVine *this)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  long extraout_x0;
  RtObject *this_00;
  PowerPropsDamageRadius *pPVar4;
  TPoint *pTVar5;
  float fVar6;
  int local_130;
  int local_12c;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 local_114;
  PlantGloomVine *local_110;
  RtWeakPtr<Sexy::ResourceInfo> *local_108;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_100 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_e8 [24];
  vector<Sexy::Point,std::allocator<Sexy::Point>> avStack_d0 [24];
  vector<Sexy::Point,std::allocator<Sexy::Point>> avStack_b8 [24];
  Point aPStack_a0 [8];
  Point aPStack_98 [8];
  Point aPStack_90 [8];
  Point aPStack_88 [8];
  Point aPStack_80 [8];
  Point aPStack_78 [8];
  Point aPStack_70 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  float local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_04d3c5dc(aRStack_68,*(undefined8 *)(this + 0x10));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  PowerSet::Find(aRStack_68,extraout_x0 + 0x58,5,0);
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
  pPVar4 = Sexy::RtObject::Cast<PowerPropsDamageRadius>(this_00);
  fVar6 = (float)DamageInfoProps::GetBaseDamage((DamageInfoProps *)(pPVar4 + 0xb8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  DamageInfo::DamageInfo((DamageInfo *)aRStack_68);
  local_60 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
  local_60 = local_60 * fVar6;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_100);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_e8);
  Sexy::Point::Point(aPStack_a0,-1,-1);
  Sexy::Point::Point(aPStack_98,1,-1);
  Sexy::Point::Point(aPStack_90,-1,1);
  Sexy::Point::Point(aPStack_88,1,1);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::vector(avStack_d0,aPStack_a0,4,avStack_b8);
  Sexy::Point::Point(aPStack_a0,-2,0);
  Sexy::Point::Point(aPStack_98,-1,0);
  Sexy::Point::Point(aPStack_90,0,0);
  Sexy::Point::Point(aPStack_88,1,0);
  Sexy::Point::Point(aPStack_80,2,0);
  Sexy::Point::Point(aPStack_78,0,-1);
  Sexy::Point::Point(aPStack_70,0,1);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::vector
            (avStack_b8,aPStack_a0,7,(Point *)&local_110);
  BoardEntity::CalcGridPosition();
  cVar1 = NewPVPUtils::IsPlayingNewPVP();
  if (cVar1 != '\0') {
    cVar1 = NewPVPUtils::IsOppoentRegion((Point *)&local_130);
    if (cVar1 == '\0') {
      Sexy::Point::Point((Point *)&local_110,local_130,local_12c + -2);
      cVar1 = NewPVPUtils::IsOppoentRegion((Point *)&local_110);
      if (cVar1 == '\0') {
        Sexy::Point::Point((Point *)&local_110,0,-2);
        std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                  (avStack_b8,(Point *)&local_110);
      }
      Sexy::Point::Point((Point *)&local_110,local_130,local_12c + 2);
      cVar1 = NewPVPUtils::IsOppoentRegion((Point *)&local_110);
      if (cVar1 == '\0') {
        Sexy::Point::Point((Point *)&local_110,0,2);
        std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                  (avStack_b8,(Point *)&local_110);
      }
    }
    else {
      Sexy::Point::Point((Point *)&local_110,local_130,local_12c + -2);
      cVar1 = NewPVPUtils::IsOppoentRegion((Point *)&local_110);
      if (cVar1 != '\0') {
        Sexy::Point::Point((Point *)&local_110,0,-2);
        std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                  (avStack_b8,(Point *)&local_110);
      }
      Sexy::Point::Point((Point *)&local_110,local_130,local_12c + 2);
      cVar1 = NewPVPUtils::IsOppoentRegion((Point *)&local_110);
      if (cVar1 != '\0') {
        Sexy::Point::Point((Point *)&local_110,0,2);
        std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                  (avStack_b8,(Point *)&local_110);
      }
    }
  }
  local_128 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_d0);
  local_120 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)avStack_d0);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_128,(__normal_iterator *)&local_120), bVar2)
  {
    pTVar5 = (TPoint *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_128);
    Sexy::TPoint<int>::operator+((TPoint<int> *)&local_130,pTVar5);
    Sexy::Point::Point((Point *)&local_118,(TPoint *)&local_110);
    uVar3 = operator|(2,4);
    EntityFinder::GetEntitiesAtGridSquare(avStack_100,uVar3,local_118,local_114);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_128);
  }
  local_128 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_b8);
  local_120 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)avStack_b8);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_128,(__normal_iterator *)&local_120), bVar2)
  {
    pTVar5 = (TPoint *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_128);
    Sexy::TPoint<int>::operator+((TPoint<int> *)&local_130,pTVar5);
    Sexy::Point::Point((Point *)&local_118,(TPoint *)&local_110);
    uVar3 = operator|(2,4);
    EntityFinder::GetEntitiesAtGridSquare(avStack_e8,uVar3,local_118,local_114);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_128);
  }
  local_110 = this;
  local_108 = aRStack_68;
  FUN_04d3d1e8((Point *)&local_110,avStack_100);
  FUN_04d3d1e8((Point *)&local_110,avStack_e8);
  if (this[0x158] != (PlantGloomVine)0x0) {
    this[0x158] = (PlantGloomVine)0x0;
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector(avStack_b8);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector(avStack_d0);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_e8);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_100);
  DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGloomVine::OnAnimCommand(std::string const&, std::string const&) */

void PlantGloomVine::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  Effect_PopAnim *pEVar4;
  SexyVector3 *pSVar5;
  PopAnim *pPVar6;
  RtWeakPtr<Sexy::ResourceInfo> *__n;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var7;
  float fVar8;
  string asStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,"use_action");
  if ((bVar1) && (cVar2 = FUN_04d3c608(*(undefined8 *)(param_1 + 0x10)), cVar2 != '\0')) {
    __n = aRStack_10;
    std::string::string(asStack_20,"animation03");
    nop();
    if (param_1[0x158] != (string)0x0) {
      std::string::append(asStack_20,"animation02",(size_t)__n);
    }
    pEVar4 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    p_Var7 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               **)(param_1 + 0x10);
    pSVar5 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(p_Var7);
    iVar3 = (**(code **)(*(long *)p_Var7 + 200))(p_Var7);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar4,pSVar5,iVar3 + -1);
    std::string::string(asStack_18,"POPANIM_EFFECTS_GLOOMVINE_ATTACK_EFFECT");
    GetPAMByName(asStack_18);
    pPVar6 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    Effect_PopAnim::CreatePopAnimRig(pEVar4,pPVar6,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
    Effect_PopAnim::SetCentered(pEVar4,true);
    Effect_PopAnim::PlaySingleAnimation(pEVar4,asStack_20,0);
    doLv5Skill((PlantGloomVine *)param_1);
    std::string::~string(asStack_20);
  }
  else {
    bVar1 = std::operator==(param_2,"use_special");
    if (bVar1) {
      fVar8 = (float)PVZ_T();
      *(float *)(param_1 + 0x168) = fVar8 + 0.2;
      std::string::string(asStack_20,"animation");
      nop();
      pEVar4 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      p_Var7 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 **)(param_1 + 0x10);
      pSVar5 = (SexyVector3 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(p_Var7);
      iVar3 = (**(code **)(*(long *)p_Var7 + 200))(p_Var7);
      StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar4,pSVar5,iVar3 + -1);
      std::string::string(asStack_18,"POPANIM_EFFECTS_GLOOMVINE_PF_EFFECT");
      GetPAMByName(asStack_18);
      pPVar6 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      Effect_PopAnim::CreatePopAnimRig(pEVar4,pPVar6,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      std::string::~string(asStack_18);
      nop();
      Effect_PopAnim::SetCentered(pEVar4,true);
      Effect_PopAnim::PlaySingleAnimation(pEVar4,asStack_20,0);
      std::string::~string(asStack_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGloomVine::boostPlant(Plant*) */

void __thiscall PlantGloomVine::boostPlant(PlantGloomVine *this,Plant *param_1)

{
  bool bVar1;
  long lVar2;
  int *piVar3;
  float fVar4;
  undefined8 local_30;
  undefined8 local_28;
  vector<PlantTag,std::allocator<PlantTag>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Plant *)0x0) {
    Plant::GetType();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
    std::vector<PlantTag,std::allocator<PlantTag>>::vector(avStack_20,(vector *)(lVar2 + 0xf0));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1)
    {
      piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
      if (*piVar3 == 0xf) {
        fVar4 = (float)Plant::GetExtraLevelDamge(param_1);
        Plant::SetExtraLevelDamge(param_1,fVar4 + *(float *)(this + 0x15c));
        std::vector<PlantTag,std::allocator<PlantTag>>::~vector(avStack_20);
        goto LAB_04d3ee28;
      }
      eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_30);
    }
    std::vector<PlantTag,std::allocator<PlantTag>>::~vector(avStack_20);
  }
LAB_04d3ee28:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGloomVine::onPlantPlaced(Plant*) */

void __thiscall PlantGloomVine::onPlantPlaced(PlantGloomVine *this,Plant *param_1)

{
  bool bVar1;
  long lVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0x110) == *(int *)(*(long *)(this + 0x10) + 0x110)) {
    Plant::GetType();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    bVar1 = std::operator!=((string *)(lVar2 + 8),"gloomvine");
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (bVar1) {
      boostPlant(this,param_1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGloomVine::onBoostPlant(Plant*) */

void __thiscall PlantGloomVine::onBoostPlant(PlantGloomVine *this,Plant *param_1)

{
  bool bVar1;
  long lVar2;
  int *piVar3;
  float fVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  vector<PlantTag,std::allocator<PlantTag>> avStack_20 [24];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (param_1 != (Plant *)0x0) {
    Plant::GetType();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_28);
    std::vector<PlantTag,std::allocator<PlantTag>>::vector(avStack_20,(vector *)(lVar2 + 0xf0));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_28);
    uStack_30 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)avStack_20);
    uStack_28 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&uStack_30,(__normal_iterator *)&uStack_28),
          bVar1) {
      piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_30);
      if (*piVar3 == 0xf) {
        fVar4 = (float)Plant::GetExtraLevelDamge(param_1);
        Plant::SetExtraLevelDamge(param_1,fVar4 + *(float *)(this + 0x15c));
        std::vector<PlantTag,std::allocator<PlantTag>>::~vector(avStack_20);
        goto LAB_04d3ee28;
      }
      eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&uStack_30);
    }
    std::vector<PlantTag,std::allocator<PlantTag>>::~vector(avStack_20);
  }
LAB_04d3ee28:
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGloomVine::shouldStartAttack() */

void __thiscall PlantGloomVine::shouldStartAttack(PlantGloomVine *this)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  TPoint *pTVar4;
  undefined8 *puVar5;
  GridItem *pGVar6;
  Zombie *pZVar7;
  long *plVar8;
  float fVar9;
  int local_d0;
  int local_cc;
  undefined8 local_c8;
  RtObject *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_a8 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_90 [24];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_78 [24];
  Point aPStack_60 [8];
  Point aPStack_58 [8];
  Point aPStack_50 [8];
  Point aPStack_48 [8];
  Point aPStack_40 [8];
  Point aPStack_38 [8];
  Point aPStack_30 [8];
  Point aPStack_28 [8];
  Point aPStack_20 [8];
  Point aPStack_18 [8];
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_04d3c608(*(undefined8 *)(this + 0x10));
  if (cVar1 == '\0') {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_90);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)avStack_78);
    plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x140));
    (**(code **)(*plVar8 + 0xa8))(plVar8,avStack_90);
    plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x140));
    (**(code **)(*plVar8 + 0xa0))
              (plVar8,(vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)avStack_78);
    cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_90);
    if ((cVar1 == '\0') ||
       (cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                          ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_78),
       bVar2 = false, cVar1 == '\0')) {
      fVar9 = (float)PVZ_T();
      bVar2 = *(float *)(this + 0x13c) <= fVar9;
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_78);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_90);
  }
  else {
    BoardEntity::CalcGridPosition();
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_a8);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_90);
    Sexy::Point::Point(aPStack_60,-1,-1);
    Sexy::Point::Point(aPStack_58,1,-1);
    Sexy::Point::Point(aPStack_50,-1,1);
    Sexy::Point::Point(aPStack_48,1,1);
    Sexy::Point::Point(aPStack_40,-2,0);
    Sexy::Point::Point(aPStack_38,-1,0);
    Sexy::Point::Point(aPStack_30,0,0);
    Sexy::Point::Point(aPStack_28,1,0);
    Sexy::Point::Point(aPStack_20,2,0);
    Sexy::Point::Point(aPStack_18,0,-1);
    Sexy::Point::Point(aPStack_10,0,1);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::vector
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_78,aPStack_60,0xb,
               (Point *)&local_b0);
    cVar1 = NewPVPUtils::IsPlayingNewPVP();
    if (cVar1 != '\0') {
      cVar1 = NewPVPUtils::IsOppoentRegion((Point *)&local_d0);
      if (cVar1 == '\0') {
        Sexy::Point::Point((Point *)&local_b0,local_d0,local_cc + -2);
        cVar1 = NewPVPUtils::IsOppoentRegion((Point *)&local_b0);
        if (cVar1 == '\0') {
          Sexy::Point::Point((Point *)&local_b0,0,-2);
          std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                    ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_78,
                     (Point *)&local_b0);
        }
        Sexy::Point::Point((Point *)&local_b0,local_d0,local_cc + 2);
        cVar1 = NewPVPUtils::IsOppoentRegion((Point *)&local_b0);
        if (cVar1 == '\0') {
          Sexy::Point::Point((Point *)&local_b0,0,2);
          std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                    ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_78,
                     (Point *)&local_b0);
        }
      }
      else {
        Sexy::Point::Point((Point *)&local_b0,local_d0,local_cc + -2);
        cVar1 = NewPVPUtils::IsOppoentRegion((Point *)&local_b0);
        if (cVar1 != '\0') {
          Sexy::Point::Point((Point *)&local_b0,0,-2);
          std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                    ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_78,
                     (Point *)&local_b0);
        }
        Sexy::Point::Point((Point *)&local_b0,local_d0,local_cc + 2);
        cVar1 = NewPVPUtils::IsOppoentRegion((Point *)&local_b0);
        if (cVar1 != '\0') {
          Sexy::Point::Point((Point *)&local_b0,0,2);
          std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                    ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_78,
                     (Point *)&local_b0);
        }
      }
    }
    local_c8 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(avStack_78);
    local_c0 = (RtObject *)
               std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(avStack_78);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_c8,(__normal_iterator *)&local_c0), bVar2)
    {
      pTVar4 = (TPoint *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c8);
      Sexy::TPoint<int>::operator+((TPoint<int> *)&local_d0,pTVar4);
      Sexy::Point::Point((Point *)&local_b8,(TPoint *)&local_b0);
      uVar3 = operator|(2,4);
      EntityFinder::GetEntitiesAtGridSquare(avStack_a8,uVar3,local_b8 & 0xffffffff,local_b8._4_4_);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_c8);
    }
    local_b8 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_a8);
    local_b0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_a8);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_b8,(__normal_iterator *)&local_b0);
    if (bVar2) {
      do {
        puVar5 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b8);
        local_c0 = (RtObject *)*puVar5;
        pGVar6 = Sexy::RtObject::Cast<GridItem>(local_c0);
        pZVar7 = Sexy::RtObject::Cast<Zombie>(local_c0);
        if ((pGVar6 != (GridItem *)0x0) &&
           (cVar1 = (**(code **)(*(long *)pGVar6 + 0x200))(pGVar6), cVar1 != '\0')) {
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_90,
                     (BoardEntity **)&local_c0);
        }
        if ((pZVar7 != (Zombie *)0x0) && (cVar1 = RealObject::IsOnTeam(pZVar7,2), cVar1 != '\0')) {
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_90,
                     (BoardEntity **)&local_c0);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b8);
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_b8,(__normal_iterator *)&local_b0)
        ;
      } while (bVar2);
    }
    bVar2 = false;
    cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_90);
    if (cVar1 == '\0') {
      fVar9 = (float)PVZ_T();
      bVar2 = *(float *)(this + 0x13c) <= fVar9;
    }
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_78);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_90);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_a8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* PlantGloomVine::UpdateActions() */

void __thiscall PlantGloomVine::UpdateActions(PlantGloomVine *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  
  cVar1 = Plant::IsSuspended(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    return;
  }
  iVar2 = *(int *)(*(long *)(this + 0x10) + 200);
  if (iVar2 == 10) goto LAB_04d3f478;
  do {
    iVar3 = iVar2;
    if (iVar2 == 0xd) {
      fVar6 = *(float *)(this + 0x168);
      fVar4 = (float)PVZ_T();
      if (fVar6 < fVar4) {
        doPlantfoodAttack(this);
        fVar4 = (float)PVZ_T();
        iVar2 = *(int *)(this + 0x16c);
        *(uint *)(this + 0x16c) = iVar2 + 1U;
        *(float *)(this + 0x168) = fVar4 + 0.2;
        if (3 < iVar2 + 1U) {
          uVar5 = PVZ_EOT();
          *(undefined4 *)(this + 0x168) = uVar5;
          iVar2 = *(int *)(*(long *)(this + 0x10) + 200);
          goto LAB_04d3f464;
        }
      }
LAB_04d3f45c:
      iVar2 = *(int *)(*(long *)(this + 0x10) + 200);
    }
    else {
      if (iVar2 != 4) {
        return;
      }
      cVar1 = shouldStartAttack(this);
      if (cVar1 == '\0') goto LAB_04d3f45c;
      cVar1 = FUN_04d3c608(*(undefined8 *)(this + 0x10));
      if (cVar1 != '\0') {
        setState(this,0xb);
        goto LAB_04d3f45c;
      }
      setState(this,10);
      iVar2 = *(int *)(*(long *)(this + 0x10) + 200);
    }
LAB_04d3f464:
    while( true ) {
      if (iVar3 == iVar2) {
        return;
      }
      if (iVar2 != 10) break;
LAB_04d3f478:
      doBasicAttack(this);
      iVar3 = iVar2;
      iVar2 = *(int *)(*(long *)(this + 0x10) + 200);
    }
  } while( true );
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x04d3f78c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PlantGloomVine::Initialize() */

void __thiscall PlantGloomVine::Initialize(PlantGloomVine *this)

{
  undefined4 uVar1;
  char cVar2;
  RtObject *pRVar3;
  GloomVineProps *pGVar4;
  ComponentRunner *pCVar5;
  ComponentDamageRadius *this_00;
  PowerPropsDamageRadius *pPVar6;
  ComponentConditionRadius *this_01;
  MoonFlowerPoweredTilesSubsystem *this_02;
  BoardEntity *pBVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_04d3c5dc(aRStack_10,*(undefined8 *)(this + 0x10));
  pRVar3 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar4 = Sexy::RtObject::Cast<GloomVineProps_const>(pRVar3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  pBVar7 = *(BoardEntity **)(this + 0x10);
  FUN_04d3c600(pBVar7);
  switch((int)pGVar4) {
  case 1:
    *(undefined4 *)(this + 0x15c) = 0;
    *(undefined4 *)(this + 0x160) = 0;
    break;
  case 2:
    uVar1 = *(undefined4 *)(pGVar4 + 0x358);
    *(undefined4 *)(this + 0x160) = *(undefined4 *)(pGVar4 + 0x360);
    *(undefined4 *)(this + 0x15c) = uVar1;
    break;
  case 3:
  case 4:
  case 5:
    uVar1 = *(undefined4 *)(pGVar4 + 0x35c);
    *(undefined4 *)(this + 0x160) = *(undefined4 *)(pGVar4 + 0x364);
    *(undefined4 *)(this + 0x15c) = uVar1;
  }
  pCVar5 = (ComponentRunner *)BoardEntity::GetComponentRunner(pBVar7);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_28);
  std::string::string(asStack_18,"BeetsRadius");
  ComponentRunner::Add<ComponentDamageRadius>(pCVar5,aRStack_20,asStack_18,pCVar5);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x140),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  this_00 = (ComponentDamageRadius *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x140));
  PowerSet::Find(aRStack_10,pGVar4 + 0x58,5,0);
  pRVar3 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pPVar6 = Sexy::RtObject::Cast<PowerPropsDamageRadius>(pRVar3);
  ComponentDamageRadius::SetRadiusProps(this_00,(ComponentDamageRadiusProps *)(pPVar6 + 0x18));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  calculateNextAttack(this);
  pBVar7 = *(BoardEntity **)(this + 0x10);
  BoardEntity::GetComponentRunner(pBVar7);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_28);
  std::string::string(asStack_18,"BoostRadius");
  ComponentRunner::Add<ComponentConditionRadius>((ComponentRunner *)pBVar7,aRStack_20,asStack_18);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x150),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  this_01 = (ComponentConditionRadius *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x150));
  ComponentConditionRadius::SetRadiusProps
            (this_01,(ComponentConditionRadiusProps *)(pGVar4 + 0x2b8));
  cVar2 = Plant::IsOnBoard(*(Plant **)(this + 0x10));
  if (cVar2 != '\0') {
    Board::GetGameSubSystem<MoonFlowerPoweredTilesSubsystem>(*(Board **)(gLawnApp + 0x9f0));
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x148),(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    this_02 = (MoonFlowerPoweredTilesSubsystem *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x148));
    MoonFlowerPoweredTilesSubsystem::AddGlowEffects(this_02,*(Plant **)(this + 0x10));
  }
  *(undefined4 *)(this + 0x164) = 0;
  this[0x158] = (PlantGloomVine)0x0;
  updatePlacedBoosted(this,*(Plant **)(this + 0x10));
  PlantVineFramework::Initialize((PlantVineFramework *)this);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantGloomVine::ApplyPlantfood() */

void __thiscall PlantGloomVine::ApplyPlantfood(PlantGloomVine *this)

{
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  *(undefined4 *)(this + 0x16c) = 0;
  setState(this,0xd);
  return;
}


/* PlantGloomVine::CancelPlantfood() */

void __thiscall PlantGloomVine::CancelPlantfood(PlantGloomVine *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  setState(this,4);
  return;
}


/* PlantGloomVine::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantGloomVine::onAnimStoppedCallback(PlantGloomVine *this,string *param_1)

{
  PlantStatefulFramework::onAnimStoppedCallback((PlantStatefulFramework *)this,param_1);
  setState(this,4);
  return;
}

