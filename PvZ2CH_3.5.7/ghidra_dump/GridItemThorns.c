// Class: GridItemThorns


/* GridItemThorns::SetPoisonedlv5Dot(float) */

void __thiscall GridItemThorns::SetPoisonedlv5Dot(GridItemThorns *this,float param_1)

{
  *(float *)(this + 0x1bc) = param_1;
  SetState(this,2);
  this[0x1dc] = (GridItemThorns)0x1;
  return;
}


/* GridItemThorns::OnZombieConditionPrepare(Zombie*, int*, float*) */

void GridItemThorns::OnZombieConditionPrepare(Zombie *param_1,int *param_2,float *param_3)

{
  if (*param_3 != 3.50325e-44) {
    return;
  }
  (**(code **)(*(long *)param_1 + 0x230))();
  return;
}


/* GridItemThorns::CalcRenderOrder() const */

void __thiscall GridItemThorns::CalcRenderOrder(GridItemThorns *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = SharkMinion::getRow((SharkMinion *)this);
  uVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(0x64960,uVar1,uVar2);
  return;
}


/* non-virtual thunk to GridItemThorns::CalcRenderOrder() const */

void __thiscall GridItemThorns::CalcRenderOrder(GridItemThorns *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemThorns::StaticClassInit() */

void GridItemThorns::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemThorns");
    (*pcVar2)(plVar1,asStack_10,FUN_04e522f4,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemThorns::StaticGetClass() */

long * GridItemThorns::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemThorns",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemThorns::GetClass() const */

long * GridItemThorns::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemThorns",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemThorns::~GridItemThorns() */

void __thiscall GridItemThorns::~GridItemThorns(GridItemThorns *this)

{
  *(undefined ***)this = &PTR_GetClass_069e0700;
  *(undefined ***)(this + 0x10) = &PTR__GridItemThorns_069e09b8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c8));
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemThorns::~GridItemThorns() */

void __thiscall GridItemThorns::~GridItemThorns(GridItemThorns *this)

{
  ~GridItemThorns(this + -0x10);
  return;
}


/* GridItemThorns::~GridItemThorns() */

void __thiscall GridItemThorns::~GridItemThorns(GridItemThorns *this)

{
  ~GridItemThorns(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemThorns::~GridItemThorns() */

void __thiscall GridItemThorns::~GridItemThorns(GridItemThorns *this)

{
  ~GridItemThorns(this + -0x10);
  return;
}


/* GridItemThorns::GridItemThorns() */

void __thiscall GridItemThorns::GridItemThorns(GridItemThorns *this)

{
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined4 *)(this + 0x1b0) = 2;
  *(undefined4 *)(this + 0x1b4) = 2;
  *(undefined ***)this = &PTR_GetClass_069e0700;
  *(undefined ***)(this + 0x10) = &PTR__GridItemThorns_069e09b8;
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined4 *)(this + 0x1b8) = 0;
  *(undefined4 *)(this + 0x1bc) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1c8));
  this[0x1dc] = (GridItemThorns)0x0;
  *(undefined4 *)(this + 0x1d8) = 0;
  *(undefined4 *)(this + 0x1e0) = 0;
  *(undefined4 *)(this + 0x1d0) = 0x3f000000;
  return;
}


/* GridItemThorns::StaticNew() */

GridItemThorns * GridItemThorns::StaticNew(void)

{
  GridItemThorns *this;
  
  this = ::operator_new(0x1e8);
  GridItemThorns(this);
  return this;
}


/* GridItemThorns::onZombieDestroyed(Zombie*) */

void __thiscall GridItemThorns::onZombieDestroyed(GridItemThorns *this,Zombie *param_1)

{
  char cVar1;
  Zombie *pZVar2;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x1c8));
  if ((cVar1 != '\0') &&
     (pZVar2 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c8)), param_1 == pZVar2)) {
    (**(code **)(*(long *)this + 0x230))(this);
    return;
  }
  return;
}


/* GridItemThorns::onZombieBleedingOut(Zombie*, DamageInfo const*) */

void GridItemThorns::onZombieBleedingOut(Zombie *param_1,DamageInfo *param_2)

{
  char cVar1;
  DamageInfo *pDVar2;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(param_1 + 0x1c8));
  if ((cVar1 != '\0') &&
     (pDVar2 = (DamageInfo *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x1c8)), param_2 == pDVar2)) {
    (**(code **)(*(long *)param_1 + 0x230))(param_1);
    return;
  }
  return;
}


/* GridItemThorns::unbindZombie() */

void __thiscall GridItemThorns::unbindZombie(GridItemThorns *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  Zombie *pZVar2;
  
  this_00 = (RtMixedPtrBase *)(this + 0x1c8);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 == '\0') {
    return;
  }
  pZVar2 = (Zombie *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  if (pZVar2 != (Zombie *)0x0) {
    Zombie::EndCondition(pZVar2,0x8c);
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemThorns::calcDamageState() */

void __thiscall GridItemThorns::calcDamageState(GridItemThorns *this)

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
  pcVar3 = *(code **)(lVar4 + 0x1d8);
  local_8 = ___stack_chk_guard;
  iVar1 = *(int *)(this + 0x1b0);
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
  local_c = *(int *)(this + 0x1b0) + -1;
  local_10 = (int)((fVar5 * (float)iVar1) / fVar6);
  piVar2 = eastl::min_alt<int>(&local_10,&local_c);
  iVar1 = *piVar2;
  if (iVar1 == 0) {
    iVar1 = 2;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemThorns::onTakeDamage(DamageInfo const&) */

void GridItemThorns::onTakeDamage(DamageInfo *param_1)

{
  int iVar1;
  PopAnimRig *pPVar2;
  string asStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0x1c0) == 3) {
    iVar1 = calcDamageState((GridItemThorns *)param_1);
    if (*(int *)(param_1 + 0x1b4) != iVar1) {
      *(int *)(param_1 + 0x1b4) = iVar1;
      if (param_1[0x1dc] == (DamageInfo)0x0) {
        Sexy::StrFormat("general_damage%d",asStack_48);
      }
      else {
        Sexy::StrFormat("lv5_damage%d",asStack_48);
      }
      GridItemAnimation::GetAnimRig();
      pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      PopAnimRig::PlayAndContinue(pPVar2,asStack_48,0,aDStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      std::string::~string(asStack_48);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemThorns::SetBindZombie(BoardEntity*) */

void __thiscall GridItemThorns::SetBindZombie(GridItemThorns *this,BoardEntity *param_1)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ZombieCavalry *pZVar8;
  float *pfVar9;
  undefined8 *puVar10;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var11;
  ZombieBull *pZVar12;
  undefined4 *puVar13;
  float fVar14;
  Zombie *pZVar15;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (BoardEntity *)0x0) &&
     (bVar2 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1), bVar2)) {
    this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x1c8);
    Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    fVar14 = (float)PVZ_T();
    *(float *)(this + 0x1d4) = fVar14 + *(float *)(this + 0x1d0);
    uVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    cVar3 = Zombie::HasCondition(uVar7,0x6e);
    if (cVar3 != '\0') {
      pZVar15 = (Zombie *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      Zombie::EndCondition(pZVar15,0x6e);
    }
    uVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pZVar15._0_4_ = (Zombie *)PVZ_EOT();
    Zombie::ApplyCondition(pZVar15._0_4_,0,uVar7,0x8c,1);
    pZVar8 = Sexy::RtObject::Cast<ZombieCavalry>((RtObject *)param_1);
    if ((pZVar8 != (ZombieCavalry *)0x0) ||
       (pZVar12 = Sexy::RtObject::Cast<ZombieBull>((RtObject *)param_1),
       pZVar12 != (ZombieBull *)0x0)) {
      pfVar9 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)param_1);
      fVar14 = *pfVar9;
      iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
      iVar6 = 0;
      if (iVar4 != 0) {
        iVar6 = (int)fVar14 / iVar4;
      }
      iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
      iVar1 = iVar5 + 3;
      if (-1 < iVar5) {
        iVar1 = iVar5;
      }
      if ((int)fVar14 - iVar6 * iVar4 < iVar1 >> 2) {
        puVar10 = (undefined8 *)
                  std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 *)this);
        local_18 = *puVar10;
        local_10 = *(undefined4 *)(puVar10 + 1);
        p_Var11 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        pfVar9 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(p_Var11);
        fVar14 = *pfVar9;
        iVar6 = BoardConstants::GRIDSQUARE_WIDTH();
        local_18 = CONCAT44(local_18._4_4_,fVar14 - (float)iVar6);
        (**(code **)(*(long *)this + 0x78))(this,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        goto LAB_04e5093c;
      }
    }
    puVar10 = (undefined8 *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this);
    local_18 = *puVar10;
    local_10 = *(undefined4 *)(puVar10 + 1);
    p_Var11 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    puVar13 = (undefined4 *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost(p_Var11);
    local_18 = CONCAT44(local_18._4_4_,*puVar13);
    (**(code **)(*(long *)this + 0x78))(this,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  }
LAB_04e5093c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemThorns::pricking() */

void __thiscall GridItemThorns::pricking(GridItemThorns *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  Zombie *this_00;
  Zombie *pZVar5;
  undefined8 uVar6;
  int in_w4;
  float fVar7;
  DamageInfo *pDVar8;
  uint local_118;
  int local_114;
  undefined8 local_110;
  undefined8 local_108;
  Point aPStack_100 [8];
  undefined4 local_f8;
  undefined4 local_f4;
  undefined1 auStack_f0 [12];
  int local_e4;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_e0 [24];
  DamageInfo aDStack_c8 [96];
  undefined4 local_68;
  undefined4 local_64;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_e0);
  BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)(ulong)local_118,local_114,1,1,in_w4);
  local_e4 = (int)((double)local_e4 * 1.3);
  EntityFinder::GetEntitiesInRectangle(avStack_e0,2,auStack_f0);
                    /* WARNING: Load size is inaccurate */
  pDVar8._0_4_ = *(DamageInfo **)(this + 0x1a8);
  Sexy::Point::Point((Point *)&local_f8,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_68,1.0,0.0);
  DamageInfo::DamageInfo
            (pDVar8._0_4_,local_68,local_64,aDStack_c8,0x800000000000,this,(Point *)&local_f8,0);
  local_110 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_e0);
  local_108 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)avStack_e0);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_110,(__normal_iterator *)&local_108), bVar1)
  {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_110);
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar4);
    if (this_00 != (Zombie *)0x0) {
      pZVar5 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c8));
      if ((this_00 != pZVar5) || (*(float *)(this + 0x1ac) <= 0.0)) {
        uVar3 = operator|(1,8);
      }
      else {
        uVar3 = operator|(1,8);
        cVar2 = Zombie::MatchesAny(this_00,uVar3);
        if ((cVar2 == '\0') &&
           ((cVar2 = Zombie::IsFlying(this_00), cVar2 == '\0' &&
            (cVar2 = RealObject::IsOnTeam(this_00,1), cVar2 == '\0')))) {
                    /* WARNING: Load size is inaccurate */
          pDVar8._0_4_ = *(DamageInfo **)(this + 0x1ac);
          Sexy::Point::Point(aPStack_100,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_f8,1.0,0.0);
          DamageInfo::DamageInfo
                    (pDVar8._0_4_,local_f8,local_f4,(FastCurve *)&local_68,0x800000000000,this,
                     aPStack_100,0);
          (**(code **)(*(long *)this_00 + 0x110))(this_00,(FastCurve *)&local_68);
          uVar6 = Zombie::GetConditionTracker(this_00);
                    /* WARNING: Load size is inaccurate */
          ZombieConditionTracker::SetAdditionalValue
                    (*(ZombieConditionTracker **)(this + 0x1bc),uVar6,0x8e);
                    /* WARNING: Load size is inaccurate */
          Zombie::ApplyCondition(*(Zombie **)(this + 0x1d8),0,this_00,0x8e,1);
          DamageInfo::~DamageInfo((DamageInfo *)&local_68);
        }
      }
      cVar2 = Zombie::MatchesAny(this_00,uVar3);
      if (((cVar2 == '\0') && (cVar2 = Zombie::IsFlying(this_00), cVar2 == '\0')) &&
         (cVar2 = RealObject::IsOnTeam(this_00,1), cVar2 == '\0')) {
        (**(code **)(*(long *)this_00 + 0x110))(this_00,aDStack_c8);
                    /* WARNING: Load size is inaccurate */
        Zombie::ApplyCondition(*(Zombie **)(this + 0x1d8),0,this_00,0x8d,1);
        Zombie::SetConditionTracker(*(undefined4 *)(this + 0x1b8),this_00,0x8d);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_110);
  }
  fVar7 = (float)PVZ_T();
  *(float *)(this + 0x1d4) = fVar7 + *(float *)(this + 0x1d0);
  DamageInfo::~DamageInfo(aDStack_c8);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_e0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemThorns::SetState(GridItemThornsState) */

void __thiscall GridItemThorns::SetState(GridItemThorns *this,int param_2)

{
  PopAnimRig *pPVar1;
  char *__s;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x1c0) = param_2;
  if (param_2 == 2) {
    GridItemAnimation::GetAnimRig();
    pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    std::string::string(asStack_68,"lv5_spawning");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_58,"onAnimation");
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
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
  }
  else if (param_2 == 4) {
    if (this[0x1dc] == (GridItemThorns)0x0) {
      __s = "general_dead";
    }
    else {
      __s = "lv5_dead";
    }
    std::string::string((string *)aRStack_60,__s);
    nop();
    GridItemAnimation::GetAnimRig();
    pPVar1 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
    Sexy::Delegate1<std::string_const&>::Delegate1((DummyInit *)aRStack_50);
    PopAnimRig::PlayAndStop(pPVar1,(string *)aRStack_60,0,(DummyInit *)aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
    unbindZombie(this);
    std::string::~string((string *)aRStack_60);
  }
  else if (param_2 == 1) {
    pricking(this);
    GridItemAnimation::GetAnimRig();
    pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    std::string::string(asStack_68,"general_spawning");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_58,"onAnimation");
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
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemThorns::onKilled() */

void __thiscall GridItemThorns::onKilled(GridItemThorns *this)

{
  SetState(this,4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemThorns::onAnimation(std::string const&) */

void __thiscall GridItemThorns::onAnimation(GridItemThorns *this,string *param_1)

{
  bool bVar1;
  PopAnimRig *pPVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"general_spawning");
  if (bVar1) {
    GridItemAnimation::GetAnimRig();
    pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    std::string::string(asStack_40,"general_damage1");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
  }
  else {
    bVar1 = std::operator==(param_1,"lv5_spawning");
    if (!bVar1) goto LAB_04e52f74;
    GridItemAnimation::GetAnimRig();
    pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    std::string::string(asStack_40,"lv5_damage1");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
  }
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  SetState(this,3);
LAB_04e52f74:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemThorns::updateState() */

void __thiscall GridItemThorns::updateState(GridItemThorns *this)

{
  float fVar1;
  float fVar2;
  
  if ((*(int *)(this + 0x1c0) == 3) &&
     (fVar2 = *(float *)(this + 0x1d4), fVar1 = (float)PVZ_T(), fVar2 < fVar1)) {
    pricking(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemThorns::onGridItemInitialize() */

void __thiscall GridItemThorns::onGridItemInitialize(GridItemThorns *this)

{
  undefined4 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onGridItemInitialize((GridItemAnimation *)this);
  *(undefined4 *)(this + 0x1c0) = 1;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1d4) = uVar1;
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  RealObject::JoinTeam((RealObject *)this,1);
  SetState(this,1);
  std::string::string(asStack_10,"Play_Plant_Pokra_Attack_01_Loop");
  RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemThorns::registerForEvents() */

void __thiscall GridItemThorns::registerForEvents(GridItemThorns *this)

{
  undefined *puVar1;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  GridItem::registerForEvents((GridItem *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieBleedingOut);
  local_60 = local_38;
  local_70 = local_48;
  uStack_68 = uStack_40;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<GridItemThorns,void(GridItemThorns::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieBleedingOut,&local_70);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDestroyed);
  local_90 = local_30;
  uStack_88 = uStack_28;
  local_80 = local_20;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<GridItemThorns,void(GridItemThorns::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieDestroyed,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnZombieConditionPrepare);
  local_a0 = local_8;
  local_b0 = local_18;
  uStack_a8 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,int*,float*,Sexy::CBMemberTranslatorX<GridItemThorns,void(GridItemThorns::*)(Zombie*,int*,float*)>>
            ((MessageRouter *)puVar1,Message::ZombieConditionPrepare,&local_b0);
  return;
}


/* GridItemThorns::onUpdate() */

void __thiscall GridItemThorns::onUpdate(GridItemThorns *this)

{
  char cVar1;
  undefined8 uVar2;
  
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x1c8));
  if (cVar1 != '\0') {
    uVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c8));
    cVar1 = Zombie::HasCondition(uVar2,0x8c);
    if (cVar1 == '\0') {
      (**(code **)(*(long *)this + 0x230))(this);
      updateState(this);
      return;
    }
  }
  updateState(this);
  return;
}

