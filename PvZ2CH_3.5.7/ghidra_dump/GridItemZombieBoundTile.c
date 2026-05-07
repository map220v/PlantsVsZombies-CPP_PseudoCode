// Class: GridItemZombieBoundTile


/* GridItemZombieBoundTile::OnStartAnimStopped(std::string const&) */

void GridItemZombieBoundTile::OnStartAnimStopped(string *param_1)

{
  return;
}


/* GridItemZombieBoundTile::~GridItemZombieBoundTile() */

void __thiscall GridItemZombieBoundTile::~GridItemZombieBoundTile(GridItemZombieBoundTile *this)

{
  *(undefined ***)this = &PTR_GetClass_067852b0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemZombieBoundTile_06785568;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemZombieBoundTile::~GridItemZombieBoundTile() */

void __thiscall GridItemZombieBoundTile::~GridItemZombieBoundTile(GridItemZombieBoundTile *this)

{
  ~GridItemZombieBoundTile(this + -0x10);
  return;
}


/* GridItemZombieBoundTile::~GridItemZombieBoundTile() */

void __thiscall GridItemZombieBoundTile::~GridItemZombieBoundTile(GridItemZombieBoundTile *this)

{
  ~GridItemZombieBoundTile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemZombieBoundTile::~GridItemZombieBoundTile() */

void __thiscall GridItemZombieBoundTile::~GridItemZombieBoundTile(GridItemZombieBoundTile *this)

{
  ~GridItemZombieBoundTile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieBoundTile::StaticClassInit() */

void GridItemZombieBoundTile::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemZombieBoundTile");
    (*pcVar2)(plVar1,asStack_10,FUN_03e1c104,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemZombieBoundTile::StaticGetClass() */

long * GridItemZombieBoundTile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemZombieBoundTile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemZombieBoundTile::GetClass() const */

long * GridItemZombieBoundTile::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemZombieBoundTile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemZombieBoundTile::GridItemZombieBoundTile() */

void __thiscall GridItemZombieBoundTile::GridItemZombieBoundTile(GridItemZombieBoundTile *this)

{
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_067852b0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemZombieBoundTile_06785568;
  return;
}


/* GridItemZombieBoundTile::StaticNew() */

GridItemZombieBoundTile * GridItemZombieBoundTile::StaticNew(void)

{
  GridItemZombieBoundTile *this;
  
  this = ::operator_new(0x1b0);
  GridItemZombieBoundTile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieBoundTile::SetState(BoundTileState) */

void __thiscall GridItemZombieBoundTile::SetState(GridItemZombieBoundTile *this,int param_2)

{
  GridItemZombieBoundTileProps *pGVar1;
  PopAnimRig *pPVar2;
  float fVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x1a8) == param_2) goto switchD_03e1b954_default;
  *(int *)(this + 0x1a8) = param_2;
  pGVar1 = GridItem::GetProps<GridItemZombieBoundTileProps>();
  switch(*(undefined4 *)(this + 0x1a8)) {
  case 0:
    GridItemAnimation::GetAnimRig();
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aRStack_50);
    PopAnimRig::PlayAndContinue(pPVar2,pGVar1 + 0xe0,0,(DummyInit *)aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
    break;
  case 1:
    GridItemAnimation::GetAnimRig();
    pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"OnBoundAnimStopped");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,asStack_58);
    pGVar1 = pGVar1 + 0xe8;
    goto LAB_03e1b9ec;
  case 2:
    fVar3 = (float)PVZ_T();
    *(float *)(this + 0x1ac) = fVar3 + *(float *)(pGVar1 + 0x100);
    break;
  case 3:
    GridItemAnimation::GetAnimRig();
    pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"OnCooldownnimStopped");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,asStack_58);
    pGVar1 = pGVar1 + 0xf0;
LAB_03e1b9ec:
    PopAnimRig::PlayAndStop
              (pPVar2,pGVar1,0,
               (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
  }
switchD_03e1b954_default:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* GridItemZombieBoundTile::OnBoundAnimStopped(std::string const&) */

void GridItemZombieBoundTile::OnBoundAnimStopped(string *param_1)

{
  SetState((GridItemZombieBoundTile *)param_1,2);
  return;
}


/* GridItemZombieBoundTile::OnCooldownnimStopped(std::string const&) */

void GridItemZombieBoundTile::OnCooldownnimStopped(string *param_1)

{
  SetState((GridItemZombieBoundTile *)param_1,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieBoundTile::BoundZombies(std::vector<BoardEntity*, std::allocator<BoardEntity*> >)
    */

void __thiscall
GridItemZombieBoundTile::BoundZombies
          (GridItemZombieBoundTile *this,vector<BoardEntity*,std::allocator<BoardEntity*>> *param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ZombieTosserSubSystem *pZVar5;
  GridItemZombieBoundTileProps *pGVar6;
  undefined8 *puVar7;
  Zombie *this_00;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  ZombieTosserSubSystem *pZVar11;
  undefined8 local_a8;
  undefined8 local_a0;
  RtMixedPtr aRStack_98 [8];
  RtId aRStack_90 [8];
  string asStack_88 [8];
  undefined8 local_80;
  undefined4 local_78;
  Vec3 aVStack_70 [16];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty(param_2);
  if (cVar2 == '\0') {
    pZVar5 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
    pGVar6 = GridItem::GetProps<GridItemZombieBoundTileProps>();
    local_a8 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)param_2);
    local_a0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)param_2);
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_a8,(__normal_iterator *)&local_a0), bVar3)
    {
      puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a8)
      ;
      this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar7);
      iVar4 = Zombie::GetSizeType(this_00);
      iVar1 = *(int *)(pGVar6 + 0xd8);
      if (iVar4 != 0) {
        iVar1 = *(int *)(pGVar6 + 0xdc);
      }
      puVar7 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)this_00);
      local_80 = *puVar7;
                    /* WARNING: Load size is inaccurate */
      pZVar11._0_4_ = *(ZombieTosserSubSystem **)(pGVar6 + 0xd0);
      uVar10 = *(undefined4 *)(pGVar6 + 0xd4);
      local_78 = *(undefined4 *)(puVar7 + 1);
      iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
      uVar8 = 0;
      uVar9 = 0;
      EATextSquish::Vec3::Vec3(aVStack_70,(float)(iVar4 * iVar1),0.0,0.0);
      local_60 = Sexy::SexyVector3::operator-((SexyVector3 *)&local_80,(SexyVector3 *)aVStack_70);
      local_5c = uVar8;
      local_58 = uVar9;
      Zombie::SetIsJumping(this_00,true);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_98);
      std::string::string(asStack_88,"OnZombieTossEnd");
      RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *)aRStack_50,aRStack_90,asStack_88)
      ;
      ZombieTosserSubSystem::LaunchZombie
                (pZVar11._0_4_,uVar10,pZVar5,this_00,&local_60,aRStack_50,1);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_88);
      nop();
      Sexy::RtId::~RtId(aRStack_90);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a8);
    }
    SetState(this,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieBoundTile::OnZombieTossEnd(Zombie*) */

void __thiscall
GridItemZombieBoundTile::OnZombieTossEnd(GridItemZombieBoundTile *this,Zombie *param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  Plant *pPVar4;
  GridItemZombieBoundTileProps *pGVar5;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [8];
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Zombie *)0x0) {
    Zombie::SetIsJumping(param_1,false);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
    BoardEntity::CalcGridPosition();
    EntityFinder::GetEntitiesAtGridSquare(avStack_80,1,local_98,local_94);
    local_90 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_80);
    local_88 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_90,(__normal_iterator *)&local_88), bVar1)
    {
      puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90)
      ;
      pPVar4 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar3);
      if (pPVar4 != (Plant *)0x0) {
        DamageInfo::DamageInfo(aDStack_68);
        iVar2 = Zombie::GetSizeType(param_1);
        if (iVar2 == 0) {
          pGVar5 = GridItem::GetProps<GridItemZombieBoundTileProps>();
          local_60 = *(undefined4 *)(pGVar5 + 0xf8);
        }
        else {
          pGVar5 = GridItem::GetProps<GridItemZombieBoundTileProps>();
          local_60 = *(undefined4 *)(pGVar5 + 0xfc);
        }
        (**(code **)(*(long *)pPVar4 + 0x110))(pPVar4,aDStack_68);
        DamageInfo::~DamageInfo(aDStack_68);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_90);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieBoundTile::FindTargets() */

void __thiscall GridItemZombieBoundTile::FindTargets(GridItemZombieBoundTile *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  BoardEntity **ppBVar4;
  Zombie *this_00;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  BoardEntity::CalcGridPosition();
  EntityFinder::GetEntitiesAtGridSquare(avStack_20,2,local_38,local_34);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    ppBVar4 = (BoardEntity **)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*ppBVar4);
    cVar2 = Zombie::IsBoss(this_00);
    if ((((((cVar2 == '\0') &&
           (cVar2 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar2 == '\0')) &&
          (iVar3 = Zombie::GetSizeType(this_00), iVar3 != 2)) &&
         ((cVar2 = Zombie::IsFlying(this_00), cVar2 == '\0' &&
          (cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar2 == '\0')))) &&
        ((cVar2 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar2 == '\0' &&
         ((cVar2 = Zombie::IsBerserk(this_00), cVar2 == '\0' &&
          (cVar2 = Zombie::HasFogImmune(this_00), cVar2 == '\0')))))) &&
       ((cVar2 = FUN_03e1b060(*(undefined4 *)(this_00 + 0x28)), cVar2 == '\0' &&
        ((cVar2 = RealObject::IsOnTeam(this_00,1), cVar2 == '\0' &&
         (cVar2 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar2 == '\0')))))) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)in_x8,ppBVar4);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieBoundTile::GatherPlantingRestrictions(PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*) const */

void __thiscall
GridItemZombieBoundTile::GatherPlantingRestrictions
          (GridItemZombieBoundTile *this,PlantType *param_1,vector *param_2)

{
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GatherPlantingRestrictions((GridItem *)this,param_1,param_2);
  local_c = 0x7a;
  std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
            ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_2,
             (PlantingReason *)&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemZombieBoundTile::onGridItemInitialize() */

void __thiscall GridItemZombieBoundTile::onGridItemInitialize(GridItemZombieBoundTile *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::onGridItemInitialize((GridItemAnimation *)this);
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  *(undefined4 *)(this + 0x1a8) = 0xffffffff;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1ac) = uVar1;
  SetState(this,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieBoundTile::onUpdate() */

void __thiscall GridItemZombieBoundTile::onUpdate(GridItemZombieBoundTile *this)

{
  long lVar1;
  float fVar2;
  undefined8 local_38;
  undefined8 local_30;
  vector<BoardEntity*,std::allocator<BoardEntity*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  if (*(int *)(this + 0x1a8) == 0) {
    FindTargets(this);
    lVar1 = FUN_03e198ac(local_38,local_30);
    if (lVar1 == 0) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38);
    }
    else {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector(avStack_20,(vector *)&local_38)
      ;
      BoundZombies(this,avStack_20);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector(avStack_20);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38);
    }
  }
  else if ((*(int *)(this + 0x1a8) == 2) &&
          (fVar2 = (float)PVZ_T(), *(float *)(this + 0x1ac) < fVar2)) {
    SetState(this,3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

