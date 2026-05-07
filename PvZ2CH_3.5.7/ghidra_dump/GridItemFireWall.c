// Class: GridItemFireWall


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFireWall::StaticClassInit() */

void GridItemFireWall::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"DamageZombieInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03e25228,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"GridItemFireWall");
    (*pcVar3)(plVar2,asStack_10,FUN_03e25420,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemFireWall::StaticGetClass() */

long * GridItemFireWall::StaticGetClass(void)

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
  uVar2 = GridItem::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemFireWall",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemFireWall::GetClass() const */

long * GridItemFireWall::GetClass(void)

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
  uVar2 = GridItem::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemFireWall",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemFireWall::SetAvatar(bool) */

void __thiscall GridItemFireWall::SetAvatar(GridItemFireWall *this,bool param_1)

{
  char cVar1;
  long lVar2;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x198));
  if (cVar1 == '\0') {
    return;
  }
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198));
  FUN_03e2479c(lVar2 + 0x220,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFireWall::onDraw(Sexy::Graphics*) */

void __thiscall GridItemFireWall::onDraw(GridItemFireWall *this,Graphics *param_1)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  float *pfVar2;
  PopAnimRig *pPVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x198);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    pfVar2 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    uVar4 = FUN_03e248f4(*pfVar2 - 100.0);
    uVar5 = FUN_03e248f4((pfVar2[1] - pfVar2[2]) - 120.0);
    FUN_03e246e4(uVar4,uVar5,auStack_28,auStack_1c);
    pPVar3 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    PopAnimRig::SetRenderTransform(pPVar3,aSStack_30);
    pPVar3 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    PopAnimRig::Draw(pPVar3,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemFireWall::CanBeTargetedBy(BoardEntity const*) const */

undefined8 __thiscall GridItemFireWall::CanBeTargetedBy(GridItemFireWall *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  Zombie *pZVar3;
  undefined8 uVar4;
  
  if (((param_1 == (BoardEntity *)0x0) ||
      (bVar1 = Sexy::RtObject::IsA<Plant>((RtObject *)param_1), !bVar1)) &&
     ((pZVar3 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), pZVar3 == (Zombie *)0x0 ||
      ((cVar2 = (**(code **)(*(long *)pZVar3 + 0x4d8))(), cVar2 == '\0' &&
       (cVar2 = (**(code **)(*(long *)pZVar3 + 0x508))(pZVar3), cVar2 == '\0')))))) {
    uVar4 = EA::Text::GlyphCache_Memory::EndUpdate((TextureInfo *)this);
    return uVar4;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFireWall::IsInFire(Sexy::RtWeakPtr<Zombie>) */

void __thiscall GridItemFireWall::IsInFire(GridItemFireWall *this,RtWeakPtrBase *param_2)

{
  char cVar1;
  bool bVar2;
  RtWeakPtrBase *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x1a0));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x1a0));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2) {
    this_00 = (RtWeakPtrBase *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar1 = Sexy::RtWeakPtrBase::operator==(this_00,param_2);
    if (cVar1 != '\0') break;
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemFireWall::GridItemFireWall() */

void __thiscall GridItemFireWall::GridItemFireWall(GridItemFireWall *this)

{
  GridItem::GridItem((GridItem *)this);
  *(undefined ***)this = &PTR_GetClass_067869e0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemFireWall_06786c78;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x198));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1a0));
  *(undefined4 *)(this + 0x1bc) = 0x3f800000;
  *(undefined4 *)(this + 0x1b8) = 0;
  std::vector<GridItemFireWall::DamageZombieInfo,std::allocator<GridItemFireWall::DamageZombieInfo>>
  ::clear((vector<GridItemFireWall::DamageZombieInfo,std::allocator<GridItemFireWall::DamageZombieInfo>>
           *)(this + 0x1a0));
  return;
}


/* GridItemFireWall::StaticNew() */

GridItemFireWall * GridItemFireWall::StaticNew(void)

{
  GridItemFireWall *this;
  
  this = ::operator_new(0x1c0);
  GridItemFireWall(this);
  return this;
}


/* GridItemFireWall::~GridItemFireWall() */

void __thiscall GridItemFireWall::~GridItemFireWall(GridItemFireWall *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long *plVar2;
  
  this_00 = (RtMixedPtrBase *)(this + 0x198);
  *(undefined ***)this = &PTR_GetClass_067869e0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemFireWall_06786c78;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  std::vector<GridItemFireWall::DamageZombieInfo,std::allocator<GridItemFireWall::DamageZombieInfo>>
  ::~vector((vector<GridItemFireWall::DamageZombieInfo,std::allocator<GridItemFireWall::DamageZombieInfo>>
             *)(this + 0x1a0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  GridItem::~GridItem((GridItem *)this);
  return;
}


/* non-virtual thunk to GridItemFireWall::~GridItemFireWall() */

void __thiscall GridItemFireWall::~GridItemFireWall(GridItemFireWall *this)

{
  ~GridItemFireWall(this + -0x10);
  return;
}


/* GridItemFireWall::~GridItemFireWall() */

void __thiscall GridItemFireWall::~GridItemFireWall(GridItemFireWall *this)

{
  ~GridItemFireWall(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemFireWall::~GridItemFireWall() */

void __thiscall GridItemFireWall::~GridItemFireWall(GridItemFireWall *this)

{
  ~GridItemFireWall(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFireWall::TakeDamage(DamageInfo const&) */

void __thiscall GridItemFireWall::TakeDamage(GridItemFireWall *this,DamageInfo *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  Zombie *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(RtObject **)param_1 != (RtObject *)0x0) &&
     (bVar1 = Sexy::RtObject::IsA<Zombie>(*(RtObject **)param_1), bVar1)) {
    nop();
    cVar2 = Zombie::IsDropingIntoHole(this_00);
    if (cVar2 == '\0') {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_20);
      cVar2 = IsInFire(this,aRStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
      if (cVar2 == '\0') {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,(RtWeakPtrBase *)aRStack_28);
        uVar3 = Zombie::getZombieStateSerialization(this_00);
        ProbabilitySet<Sexy::RtWeakPtr<SharkMinion>>::ProbabilityBucket::ProbabilityBucket
                  ((ProbabilityBucket *)aRStack_18,aRStack_20,uVar3);
        std::
        vector<GridItemFireWall::DamageZombieInfo,std::allocator<GridItemFireWall::DamageZombieInfo>>
        ::push_back((vector<GridItemFireWall::DamageZombieInfo,std::allocator<GridItemFireWall::DamageZombieInfo>>
                     *)(this + 0x1a0),(DamageZombieInfo *)aRStack_18);
        std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aRStack_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
        cVar2 = Zombie::IsBoss(this_00);
        if (((cVar2 == '\0') &&
            (cVar2 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar2 == '\0')) &&
           (cVar2 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar2 == '\0')) {
          (**(code **)(*(long *)this_00 + 600))(this_00);
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
/* GridItemFireWall::onGridItemInitialize() */

void __thiscall GridItemFireWall::onGridItemInitialize(GridItemFireWall *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  undefined4 uVar2;
  long *plVar3;
  PopAnim *pPVar4;
  EffectAnimRig_FireWall *pEVar5;
  GridItemFireWallPropertySheet *pGVar6;
  float fVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x198);
  local_8 = ___stack_chk_guard;
  GridItem::onGridItemInitialize((GridItem *)this);
  uVar2 = operator|(2,1);
  RealObject::JoinTeam((RealObject *)this,uVar2);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar3 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  pPVar4 = CachedResourcePtr::operator_cast_to_PopAnim_((CachedResourcePtr *)&DAT_06add208);
  PopAnimRig::CreateRig<EffectAnimRig_FireWall>(pPVar4);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  pEVar5 = (EffectAnimRig_FireWall *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
  EffectAnimRig_FireWall::SetGridItemFireWall(pEVar5,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  pEVar5 = (EffectAnimRig_FireWall *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  EffectAnimRig_FireWall::PlayFireWall(pEVar5);
  pGVar6 = GridItem::GetProps<GridItemFireWallPropertySheet>();
  FUN_03e24790(*(undefined4 *)(pGVar6 + 0x10),this + 300);
  fVar7 = (float)PVZ_T();
  pGVar6 = GridItem::GetProps<GridItemFireWallPropertySheet>();
  *(float *)(this + 0x1b8) = fVar7 + *(float *)(pGVar6 + 0xa8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFireWall::onUpdate() */

void __thiscall GridItemFireWall::onUpdate(GridItemFireWall *this)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  PopAnimRig *this_00;
  long lVar4;
  RtMixedPtrBase *pRVar5;
  long *plVar6;
  Zombie *this_01;
  undefined8 uVar7;
  GridItemFireWallPropertySheet *pGVar8;
  code *pcVar9;
  float fVar10;
  float fVar11;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 auStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  pRVar5 = (RtMixedPtrBase *)(this + 0x198);
  local_8 = ___stack_chk_guard;
  GridItem::onUpdate((GridItem *)this);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(pRVar5);
  if (cVar1 != '\0') {
    this_00 = (PopAnimRig *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar5);
    fVar10 = (float)PVZ_T();
    fVar11 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(this_00,fVar10,fVar11);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar5);
    cVar1 = FUN_03e24798(*(undefined1 *)(lVar4 + 0x214));
    fVar10 = (float)PVZ_T();
    if (cVar1 == '\0') {
      if (fVar10 <= *(float *)(this + 0x1b8)) goto LAB_03e262e8;
    }
    else {
      (**(code **)(*(long *)this + 0x48))(this);
    }
    local_88 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x1a0));
    local_80 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x1a0));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_88,(__normal_iterator *)&local_80), bVar2)
    {
      pRVar5 = (RtMixedPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_88);
      cVar3 = Sexy::RtMixedPtrBase::IsValid(pRVar5);
      if (cVar3 != '\0') {
        plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar5);
        cVar3 = (**(code **)(*plVar6 + 0x328))();
        if (cVar3 == '\0') {
          if (cVar1 == '\0') {
            uVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar5);
            cVar3 = RealObject::IsOnOpposingTeam(uVar7,1);
            if (cVar3 != '\0') {
              plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                         ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar5);
              pcVar9 = *(code **)(*plVar6 + 0x110);
              pGVar8 = GridItem::GetProps<GridItemFireWallPropertySheet>();
              fVar10 = *(float *)(this + 0x1bc);
              fVar11 = *(float *)(pGVar8 + 0xa0);
              uVar7 = operator|(0x400,0x1000);
              BoardEntity::CalcGridPosition();
              Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
              DamageInfo::DamageInfo
                        ((DamageInfo *)(fVar10 * fVar11),local_70,local_6c,aDStack_68,uVar7,0,
                         auStack_78,0);
              (*pcVar9)(plVar6,aDStack_68);
              DamageInfo::~DamageInfo(aDStack_68);
            }
            fVar10 = (float)PVZ_T();
            pGVar8 = GridItem::GetProps<GridItemFireWallPropertySheet>();
            *(float *)(this + 0x1b8) = fVar10 + *(float *)(pGVar8 + 0xa8);
          }
          else {
            this_01 = (Zombie *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar5);
            cVar3 = Zombie::IsBoss(this_01);
            if (cVar3 == '\0') {
              plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                         ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar5);
              cVar3 = (**(code **)(*plVar6 + 0x4d8))();
              if (cVar3 == '\0') {
                plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                           ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar5);
                cVar3 = (**(code **)(*plVar6 + 0x508))();
                if (cVar3 == '\0') {
                  DamageZombieInfo::ResumeState((DamageZombieInfo *)pRVar5);
                }
              }
            }
          }
        }
      }
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_88);
    }
  }
LAB_03e262e8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

