// Class: GridItemDuskSeed


/* GridItemDuskSeed::getState() */

undefined4 __thiscall GridItemDuskSeed::getState(GridItemDuskSeed *this)

{
  return *(undefined4 *)(this + 0x1b0);
}


/* GridItemDuskSeed::onBirthAnimDone(std::string const&) */

void GridItemDuskSeed::onBirthAnimDone(string *param_1)

{
  return;
}


/* GridItemDuskSeed::CalcRenderOrder() const */

void __thiscall GridItemDuskSeed::CalcRenderOrder(GridItemDuskSeed *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = SharkMinion::getRow((SharkMinion *)this);
  uVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(0x64960,uVar1,uVar2);
  return;
}


/* non-virtual thunk to GridItemDuskSeed::CalcRenderOrder() const */

void __thiscall GridItemDuskSeed::CalcRenderOrder(GridItemDuskSeed *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* GridItemDuskSeed::CanBeTargetedBy(BoardEntity const*) const */

byte GridItemDuskSeed::CanBeTargetedBy(BoardEntity *param_1)

{
  undefined4 uVar1;
  char cVar2;
  byte bVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1b0);
  cVar2 = FUN_03bd4340(uVar1,0);
  bVar3 = 0;
  if (cVar2 == '\0') {
    bVar3 = FUN_03bd4340(uVar1,1);
    bVar3 = bVar3 ^ 1;
  }
  return bVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemDuskSeed::StaticClassInit() */

void GridItemDuskSeed::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemDuskSeed");
    (*pcVar2)(plVar1,asStack_10,FUN_03bd9ff0,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemDuskSeed::StaticGetClass() */

long * GridItemDuskSeed::StaticGetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemDuskSeed",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemDuskSeed::GetClass() const */

long * GridItemDuskSeed::GetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemDuskSeed",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemDuskSeed::~GridItemDuskSeed() */

void __thiscall GridItemDuskSeed::~GridItemDuskSeed(GridItemDuskSeed *this)

{
  *(undefined ***)this = &PTR_GetClass_0673d240;
  *(undefined ***)(this + 0x10) = &PTR__GridItemDuskSeed_0673d4f8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8));
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemDuskSeed::~GridItemDuskSeed() */

void __thiscall GridItemDuskSeed::~GridItemDuskSeed(GridItemDuskSeed *this)

{
  ~GridItemDuskSeed(this + -0x10);
  return;
}


/* GridItemDuskSeed::~GridItemDuskSeed() */

void __thiscall GridItemDuskSeed::~GridItemDuskSeed(GridItemDuskSeed *this)

{
  ~GridItemDuskSeed(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemDuskSeed::~GridItemDuskSeed() */

void __thiscall GridItemDuskSeed::~GridItemDuskSeed(GridItemDuskSeed *this)

{
  ~GridItemDuskSeed(this + -0x10);
  return;
}


/* GridItemDuskSeed::GridItemDuskSeed() */

void __thiscall GridItemDuskSeed::GridItemDuskSeed(GridItemDuskSeed *this)

{
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_0673d240;
  *(undefined ***)(this + 0x10) = &PTR__GridItemDuskSeed_0673d4f8;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1a8));
  *(undefined4 *)(this + 0x1b0) = 0;
  return;
}


/* GridItemDuskSeed::StaticNew() */

GridItemDuskSeed * GridItemDuskSeed::StaticNew(void)

{
  GridItemDuskSeed *this;
  
  this = ::operator_new(0x1c0);
  GridItemDuskSeed(this);
  return this;
}


/* GridItemDuskSeed::bindZombie() */

void __thiscall GridItemDuskSeed::bindZombie(GridItemDuskSeed *this)

{
  char cVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x1a8));
  if ((((cVar1 != '\0') &&
       (plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8)),
       plVar2 != (long *)0x0)) && (cVar1 = (**(code **)(*plVar2 + 0x330))(), cVar1 == '\0')) &&
     (cVar1 = (**(code **)(*plVar2 + 0x328))(plVar2), cVar1 == '\0')) {
    auVar3 = PVZ_EOT();
    Zombie::ApplyCondition((Zombie *)auVar3,0,plVar2,0x39,1);
    return;
  }
  return;
}


/* GridItemDuskSeed::unbindZombie() */

void __thiscall GridItemDuskSeed::unbindZombie(GridItemDuskSeed *this)

{
  char cVar1;
  Zombie *pZVar2;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x1a8));
  if ((((cVar1 != '\0') &&
       (pZVar2 = (Zombie *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8)),
       pZVar2 != (Zombie *)0x0)) &&
      (cVar1 = (**(code **)(*(long *)pZVar2 + 0x330))(), cVar1 == '\0')) &&
     (cVar1 = (**(code **)(*(long *)pZVar2 + 0x328))(pZVar2), cVar1 == '\0')) {
    Zombie::EndCondition(pZVar2,0x39);
    return;
  }
  return;
}


/* GridItemDuskSeed::onKilled() */

void __thiscall GridItemDuskSeed::onKilled(GridItemDuskSeed *this)

{
  char cVar1;
  
  cVar1 = FUN_03bd4340(*(undefined4 *)(this + 0x1b0),4);
  if (cVar1 == '\0') {
    return;
  }
  unbindZombie(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemDuskSeed::CalcDamageStateCount() */

void GridItemDuskSeed::CalcDamageStateCount(void)

{
  GridItemDuskSeedAnimRig *this;
  undefined8 uVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (this == (GridItemDuskSeedAnimRig *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = GridItemDuskSeedAnimRig::CalcDamageStateCount(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemDuskSeed::calcDamageState() */

void __thiscall GridItemDuskSeed::calcDamageState(GridItemDuskSeed *this)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  int local_10;
  int local_c;
  long local_8;
  
  lVar4 = *(long *)this;
  iVar1 = *(int *)(this + 0x1b4);
  pcVar3 = *(code **)(lVar4 + 0x1d8);
  local_8 = ___stack_chk_guard;
  if (pcVar3 == GridItem::GetHitpoints) {
    fVar5 = (float)GridItem::GetHitpoints((GridItem *)this);
    pcVar3 = *(code **)(lVar4 + 0x1e0);
  }
  else {
    fVar5 = (float)(*pcVar3)();
    pcVar3 = *(code **)(*(long *)this + 0x1e0);
  }
  if (pcVar3 == GridItem::GetMaxHitpoints) {
    fVar6 = (float)GridItem::GetMaxHitpoints((GridItem *)this);
  }
  else {
    fVar6 = (float)(*pcVar3)();
  }
  local_c = *(int *)(this + 0x1b4) + -1;
  local_10 = iVar1 - (int)((fVar5 * (float)iVar1) / fVar6);
  piVar2 = eastl::min_alt<int>(&local_10,&local_c);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(*piVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemDuskSeed::onTakeDamage(DamageInfo const&) */

void GridItemDuskSeed::onTakeDamage(DamageInfo *param_1)

{
  uint uVar1;
  PopAnimRig *extraout_x0;
  string asStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = calcDamageState((GridItemDuskSeed *)param_1);
  if (*(uint *)(param_1 + 0x1b8) != uVar1) {
    *(uint *)(param_1 + 0x1b8) = uVar1;
    Sexy::StrFormat("damage%d",asStack_48,(ulong)uVar1);
    GridItemAnimation::GetAnimRig();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    if (extraout_x0 != (PopAnimRig *)0x0) {
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      PopAnimRig::PlayAndContinue(extraout_x0,asStack_48,0,aDStack_38);
    }
    std::string::~string(asStack_48);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemDuskSeed::setState(SeedState) */

void __thiscall GridItemDuskSeed::setState(GridItemDuskSeed *this,int param_2)

{
  GridItemDuskSeedAnimRig *extraout_x0;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x1b0) == param_2) goto switchD_03bd9994_caseD_2;
  *(int *)(this + 0x1b0) = param_2;
  GridItemAnimation::GetAnimRig();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  if (extraout_x0 == (GridItemDuskSeedAnimRig *)0x0) goto switchD_03bd9994_caseD_2;
  switch(param_2) {
  case 1:
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string((string *)aRStack_58,"onBirthAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               aRStack_58);
    GridItemDuskSeedAnimRig::PlayIdle
              (extraout_x0,(RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50);
    goto LAB_03bd9a80;
  case 3:
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string((string *)aRStack_58,"onAttackAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               aRStack_58);
    GridItemDuskSeedAnimRig::PlayAttack
              (extraout_x0,(RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50);
LAB_03bd9a80:
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string((string *)aRStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    break;
  case 4:
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string((string *)aRStack_58,"onBirthAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               aRStack_58);
    GridItemDuskSeedAnimRig::PlayIdle(extraout_x0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string((string *)aRStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    bindZombie(this);
    break;
  case 5:
    (**(code **)(*(long *)this + 0x48))(this);
  }
switchD_03bd9994_caseD_2:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemDuskSeed::onAttackAnimDone(std::string const&) */

void GridItemDuskSeed::onAttackAnimDone(string *param_1)

{
  setState((GridItemDuskSeed *)param_1,4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemDuskSeed::onZombieDeath(Zombie*, DamageInfo const*) */

void GridItemDuskSeed::onZombieDeath(Zombie *param_1,DamageInfo *param_2)

{
  char cVar1;
  RtWeakPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  cVar1 = Sexy::RtWeakPtrBase::operator==(aRStack_10,(RtWeakPtrBase *)(param_1 + 0x1a8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (cVar1 != '\0') {
    setState((GridItemDuskSeed *)param_1,5);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemDuskSeed::tryFindZombie() */

void __thiscall GridItemDuskSeed::tryFindZombie(GridItemDuskSeed *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  Zombie *this_00;
  RtObject *this_01;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesAtGridSquare(avStack_20,2,local_48,local_44);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
    if (!bVar1) {
LAB_03bd9e74:
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    this_01 = (RtObject *)*puVar5;
    cVar2 = RealObject::IsOnOpposingTeam(this_01,1);
    if ((cVar2 != '\0') &&
       (this_00 = Sexy::RtObject::Cast<Zombie>(this_01), this_00 != (Zombie *)0x0)) {
      uVar3 = operator|(1,8);
      cVar2 = Zombie::MatchesAny(this_00,uVar3);
      if ((cVar2 == '\0') &&
         (((cVar2 = (**(code **)(*(long *)this_00 + 0xb8))(this_00,7), cVar2 != '\0' &&
           (cVar2 = Zombie::IsFlying(this_00), cVar2 == '\0')) &&
          (iVar4 = Zombie::GetSizeType(this_00), iVar4 != 2)))) {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_30);
        SpearProjectile::SetPlant((SpearProjectile *)this,aRStack_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
        setState(this,4);
        goto LAB_03bd9e74;
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  } while( true );
}


/* GridItemDuskSeed::updateState() */

void __thiscall GridItemDuskSeed::updateState(GridItemDuskSeed *this)

{
  int iVar1;
  
  iVar1 = getState(this);
  if (iVar1 != 2) {
    return;
  }
  tryFindZombie(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemDuskSeed::GatherPlantingRestrictions(PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*) const */

void __thiscall
GridItemDuskSeed::GatherPlantingRestrictions
          (GridItemDuskSeed *this,PlantType *param_1,vector *param_2)

{
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GatherPlantingRestrictions((GridItem *)this,param_1,param_2);
  local_c = GridItemSunSeed::GetCantPlantReason();
  std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
            ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_2,
             (PlantingReason *)&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemDuskSeed::onUpdate() */

void __thiscall GridItemDuskSeed::onUpdate(GridItemDuskSeed *this)

{
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  updateState(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemDuskSeed::onGridItemInitialize() */

void __thiscall GridItemDuskSeed::onGridItemInitialize(GridItemDuskSeed *this)

{
  undefined *puVar1;
  char cVar2;
  string *psVar3;
  long lVar4;
  GridItemPropertySheet *pGVar5;
  Board *pBVar6;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  RtMixedPtrBase aRStack_30 [8];
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onGridItemInitialize((GridItemAnimation *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDeath);
  local_60 = local_20;
  uStack_58 = uStack_18;
  local_50 = local_10;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<GridItemDuskSeed,void(GridItemDuskSeed::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,&local_60);
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_28,"tanglekelp");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
  std::string::~string(asStack_28);
  nop();
  cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_30);
  if (cVar2 != '\0') {
    pBVar6 = *(Board **)(gLawnApp + 0x9f0);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    Board::LoadResourceGroupForGameplay(pBVar6,(string *)(lVar4 + 0x10));
    pBVar6 = *(Board **)(gLawnApp + 0x9f0);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    Board::LoadResourceGroupsForGameplay(pBVar6,(vector *)(lVar4 + 0x80));
  }
  RealObject::JoinTeam((RealObject *)this,1);
  pGVar5 = GridItem::GetProps<GridItemPropertySheet>();
  FUN_03bd42fc(*(undefined4 *)(pGVar5 + 0x10),this + 300);
  if (*(code **)(*(long *)this + 0x1e0) == GridItem::GetMaxHitpoints) {
    GridItem::GetMaxHitpoints((GridItem *)this);
  }
  else {
    (**(code **)(*(long *)this + 0x1e0))();
  }
  FUN_03bd4304(this + 0x128);
  *(undefined4 *)(this + 0x1b8) = 0;
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  *(undefined4 *)(this + 0x1b4) = 3;
  setState(this,2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

