// Class: GridItemSunSeed


/* GridItemSunSeed::GetCantPlantReason() const */

undefined8 GridItemSunSeed::GetCantPlantReason(void)

{
  return 0x59;
}


/* GridItemSunSeed::setBindZombie(Sexy::RtWeakPtr<Zombie>) */

void __thiscall GridItemSunSeed::setBindZombie(GridItemSunSeed *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1b0),param_2);
  return;
}


/* GridItemSunSeed::onAttackAnimDone(std::string const&) */

void GridItemSunSeed::onAttackAnimDone(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x48))();
  return;
}


/* GridItemSunSeed::CalcRenderOrder() const */

void __thiscall GridItemSunSeed::CalcRenderOrder(GridItemSunSeed *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = SharkMinion::getRow((SharkMinion *)this);
  uVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(0x64960,uVar1,uVar2);
  return;
}


/* non-virtual thunk to GridItemSunSeed::CalcRenderOrder() const */

void __thiscall GridItemSunSeed::CalcRenderOrder(GridItemSunSeed *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSunSeed::StaticClassInit() */

void GridItemSunSeed::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemSunSeed");
    (*pcVar2)(plVar1,asStack_10,FUN_04070e40,0x1c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSunSeed::StaticGetClass() */

long * GridItemSunSeed::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemSunSeed",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemSunSeed::GetClass() const */

long * GridItemSunSeed::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemSunSeed",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemSunSeed::getState() */

undefined4 __thiscall GridItemSunSeed::getState(GridItemSunSeed *this)

{
  return *(undefined4 *)(this + 0x1b8);
}


/* GridItemSunSeed::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void GridItemSunSeed::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_4,"use_action");
  if (bVar1) {
    (**(code **)(*(long *)param_1 + 0x2a8))(param_1);
  }
  return;
}


/* GridItemSunSeed::~GridItemSunSeed() */

void __thiscall GridItemSunSeed::~GridItemSunSeed(GridItemSunSeed *this)

{
  *(undefined ***)this = &PTR_GetClass_067c6f90;
  *(undefined ***)(this + 0x10) = &PTR__GridItemSunSeed_067c7250;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b0));
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemSunSeed::~GridItemSunSeed() */

void __thiscall GridItemSunSeed::~GridItemSunSeed(GridItemSunSeed *this)

{
  ~GridItemSunSeed(this + -0x10);
  return;
}


/* GridItemSunSeed::~GridItemSunSeed() */

void __thiscall GridItemSunSeed::~GridItemSunSeed(GridItemSunSeed *this)

{
  ~GridItemSunSeed(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemSunSeed::~GridItemSunSeed() */

void __thiscall GridItemSunSeed::~GridItemSunSeed(GridItemSunSeed *this)

{
  ~GridItemSunSeed(this + -0x10);
  return;
}


/* GridItemSunSeed::GridItemSunSeed() */

void __thiscall GridItemSunSeed::GridItemSunSeed(GridItemSunSeed *this)

{
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_067c6f90;
  *(undefined ***)(this + 0x10) = &PTR__GridItemSunSeed_067c7250;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1b0));
  *(undefined4 *)(this + 0x1b8) = 0;
  return;
}


/* GridItemSunSeed::StaticNew() */

GridItemSunSeed * GridItemSunSeed::StaticNew(void)

{
  GridItemSunSeed *this;
  
  this = ::operator_new(0x1c8);
  GridItemSunSeed(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSunSeed::setState(SeedState) */

void __thiscall GridItemSunSeed::setState(GridItemSunSeed *this,int param_2)

{
  GridItemSunSeedAnimRig *extraout_x0;
  GridItemAnimRig_BesiegeGuide *this_00;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x1b8) != param_2) {
    *(int *)(this + 0x1b8) = param_2;
    GridItemAnimation::GetAnimRig();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    if (extraout_x0 != (GridItemSunSeedAnimRig *)0x0) {
      if (param_2 == 3) {
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
        std::string::string((string *)aRStack_58,"onAttackAnimDone");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                   aRStack_60,aRStack_58);
        GridItemSunSeedAnimRig::PlayAttack(extraout_x0,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string((string *)aRStack_58);
        nop();
        Sexy::RtId::~RtId(aRStack_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
      }
      else if ((param_2 == 5) || (param_2 != 2)) {
        (**(code **)(*(long *)this + 0x48))(this);
      }
      else {
        GridItemAnimation::GetAnimRig();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
        nop();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
        if (this_00 != (GridItemAnimRig_BesiegeGuide *)0x0) {
          GridItemAnimRig_BesiegeGuide::PlayIdle(this_00);
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSunSeed::tryFindZombie() */

void __thiscall GridItemSunSeed::tryFindZombie(GridItemSunSeed *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  Zombie *this_00;
  RtObject *this_01;
  float fVar6;
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
LAB_04070a24:
      fVar6 = (float)PVZ_T();
      if (*(float *)(this + 0x1c4) + 10.0 <= fVar6 - *(float *)(this + 0x1a8)) {
        (**(code **)(*(long *)this + 0x48))(this);
      }
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
        setBindZombie(this,aRStack_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
        setState(this,3);
        goto LAB_04070a24;
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  } while( true );
}


/* GridItemSunSeed::updateState() */

void __thiscall GridItemSunSeed::updateState(GridItemSunSeed *this)

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
/* GridItemSunSeed::sunflowerOnTakeDamage() */

void __thiscall GridItemSunSeed::sunflowerOnTakeDamage(GridItemSunSeed *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  Insets *pIVar7;
  int extraout_w1;
  code *pcVar8;
  float fVar9;
  float fVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_b0 [8];
  Point aPStack_a8 [8];
  undefined4 local_a0;
  undefined4 local_9c;
  Insets aIStack_98 [16];
  Iterator aIStack_88 [32];
  RtId aRStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  iVar2 = BoardTransforms::GridToBoardSpaceX(iVar2);
  iVar3 = SharkMinion::getRow((SharkMinion *)this);
  iVar3 = BoardTransforms::GridToBoardSpaceY(iVar3);
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_88,uVar4,0x29);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_88), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_88);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_b0,(RtWeakPtrBase *)aRStack_68);
    Sexy::RtId::~RtId(aRStack_68);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b0);
    fVar9 = (float)FUN_0406f6b4(*(undefined4 *)(lVar5 + 0x284));
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b0);
    fVar10 = (float)FUN_0406f6b8(*(undefined4 *)(lVar5 + 0x2ac));
    plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b0);
    pIVar7 = (Insets *)(**(code **)(*plVar6 + 0x178))();
    Sexy::Insets::Insets(aIStack_98,pIVar7);
    Sexy::FastCurve::SetOutRange((FastCurve *)aRStack_68,(float)iVar2,(float)iVar3);
    bVar1 = RectCircleIntersection<int>((TRect *)aIStack_98,(SexyVector2 *)aRStack_68,60.0);
    if (bVar1) {
      plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b0);
      pcVar8 = *(code **)(*plVar6 + 0x110);
      Sexy::Point::Point(aPStack_a8,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_a0,1.0,0.0);
      DamageInfo::DamageInfo
                ((DamageInfo *)((fVar10 + fVar9) * 0.1),local_a0,local_9c,aRStack_68,aPStack_a8,0);
      (*pcVar8)(plVar6,aRStack_68);
      DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_b0);
    Sexy::RtDbTable::Iterator::operator++(aIStack_88,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSunSeed::onGridItemInitialize() */

void __thiscall GridItemSunSeed::onGridItemInitialize(GridItemSunSeed *this)

{
  char cVar1;
  string *psVar2;
  long lVar3;
  GridItemPropertySheet *pGVar4;
  TimeChallengeEndLevelUI *this_00;
  Board *pBVar5;
  undefined4 uVar6;
  RtMixedPtrBase aRStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  string asStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x1c4) = 0;
  uVar6 = PVZ_T();
  *(undefined4 *)(this + 0x1a8) = uVar6;
  GridItemAnimation::onGridItemInitialize((GridItemAnimation *)this);
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_50,"tanglekelp");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
  std::string::~string(asStack_50);
  nop();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_60);
  if (cVar1 != '\0') {
    pBVar5 = *(Board **)(gLawnApp + 0x9f0);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    Board::LoadResourceGroupForGameplay(pBVar5,(string *)(lVar3 + 0x10));
    pBVar5 = *(Board **)(gLawnApp + 0x9f0);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    Board::LoadResourceGroupsForGameplay(pBVar5,(vector *)(lVar3 + 0x80));
  }
  RealObject::JoinTeam((RealObject *)this,1);
  pGVar4 = GridItem::GetProps<GridItemPropertySheet>();
  FUN_0406f694(*(undefined4 *)(pGVar4 + 0x10),this + 300);
  if (*(code **)(*(long *)this + 0x1e0) == GridItem::GetMaxHitpoints) {
    GridItem::GetMaxHitpoints((GridItem *)this);
  }
  else {
    (**(code **)(*(long *)this + 0x1e0))();
  }
  FUN_0406f69c(this + 0x128);
  *(undefined4 *)(this + 0x1c0) = 0;
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  *(undefined4 *)(this + 0x1bc) = 3;
  setState(this,2);
  GridItemAnimation::GetAnimRig();
  this_00 = (TimeChallengeEndLevelUI *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPopAnimCommand);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<GridItemSunSeed,void(GridItemSunSeed::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_38,asStack_50);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_00,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSunSeed::onUpdate() */

void __thiscall GridItemSunSeed::onUpdate(GridItemSunSeed *this)

{
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  updateState(this);
  return;
}

