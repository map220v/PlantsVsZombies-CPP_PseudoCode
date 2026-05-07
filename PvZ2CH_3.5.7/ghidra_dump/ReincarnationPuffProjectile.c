// Class: ReincarnationPuffProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ReincarnationPuffProjectile::StaticClassInit() */

void ReincarnationPuffProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"ReincarnationPuffProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_0424a444,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ReincarnationPuffProjectile::StaticGetClass() */

long * ReincarnationPuffProjectile::StaticGetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"ReincarnationPuffProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ReincarnationPuffProjectile::GetClass() const */

long * ReincarnationPuffProjectile::GetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"ReincarnationPuffProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ReincarnationPuffProjectile::CanTargetZombie(Zombie const*) */

char __thiscall
ReincarnationPuffProjectile::CanTargetZombie(ReincarnationPuffProjectile *this,Zombie *param_1)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  
  if ((((((param_1 != (Zombie *)0x0) &&
         (bVar1 = Sexy::RtObject::IsA<Zomboss>((RtObject *)param_1), !bVar1)) &&
        (bVar1 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)param_1), !bVar1)) &&
       ((cVar2 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar2 == '\0' &&
        (cVar2 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar2 == '\0')))) &&
      ((cVar2 = Zombie::HasFogImmune(param_1), cVar2 == '\0' &&
       ((cVar2 = Zombie::IsBerserk(param_1), cVar2 == '\0' &&
        (cVar2 = Zombie::HasCondition(param_1,2), cVar2 == '\0')))))) &&
     ((cVar2 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar2 == '\0' &&
      ((cVar2 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar2 == '\0' &&
       (cVar2 = Zombie::CanBeLaunchedByPlantsExtra(param_1), cVar2 != '\0')))))) {
    uVar4 = FUN_02fd4348(*(undefined4 *)(this + 0x24));
    cVar3 = RealObject::IsOnTeam(param_1,uVar4);
    if (cVar3 == '\0') {
      return cVar2;
    }
  }
  return '\0';
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ReincarnationPuffProjectile::updateColor() */

void __thiscall ReincarnationPuffProjectile::updateColor(ReincarnationPuffProjectile *this)

{
  int iVar1;
  PopAnimRig *this_00;
  undefined4 uVar2;
  float fVar3;
  undefined4 local_1c;
  undefined4 local_18 [3];
  int local_c;
  long local_8;
  
  fVar3 = *(float *)(this + 0x1b0);
  local_8 = ___stack_chk_guard;
  uVar2 = PVZ_T();
  local_18[0] = 0;
  local_1c = 0xff;
  iVar1 = CurveLerp<int>(fVar3,fVar3 + 0.5,uVar2,&local_1c,(Color *)local_18,1);
  Projectile::GetAnimRig((Projectile *)this);
  PopAnimRig::GetPAMColor();
  local_c = (int)(float)iVar1;
  this_00 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
  PopAnimRig::SetPAMColor(this_00,(Color *)local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ReincarnationPuffProjectile::ReincarnationPuffProjectile() */

void __thiscall
ReincarnationPuffProjectile::ReincarnationPuffProjectile(ReincarnationPuffProjectile *this)

{
  undefined4 uVar1;
  
  Projectile::Projectile((Projectile *)this);
  this[0x1a5] = (ReincarnationPuffProjectile)0x0;
  *(undefined ***)this = &PTR_GetClass_06817530;
  *(undefined ***)(this + 0x10) = &PTR__ReincarnationPuffProjectile_06817720;
  uVar1 = PVZ_EOT();
  this[0x1ac] = (ReincarnationPuffProjectile)0x0;
  this[0x1ad] = (ReincarnationPuffProjectile)0x0;
  *(undefined4 *)(this + 0x1a8) = uVar1;
  *(undefined4 *)(this + 0x1b0) = uVar1;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x1b4) = uVar1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b8));
  return;
}


/* ReincarnationPuffProjectile::StaticNew() */

ReincarnationPuffProjectile * ReincarnationPuffProjectile::StaticNew(void)

{
  ReincarnationPuffProjectile *this;
  
  this = ::operator_new(0x1d0);
  ReincarnationPuffProjectile(this);
  return this;
}


/* ReincarnationPuffProjectile::~ReincarnationPuffProjectile() */

void __thiscall
ReincarnationPuffProjectile::~ReincarnationPuffProjectile(ReincarnationPuffProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06817530;
  *(undefined ***)(this + 0x10) = &PTR__ReincarnationPuffProjectile_06817720;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1b8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to ReincarnationPuffProjectile::~ReincarnationPuffProjectile() */

void __thiscall
ReincarnationPuffProjectile::~ReincarnationPuffProjectile(ReincarnationPuffProjectile *this)

{
  ~ReincarnationPuffProjectile(this + -0x10);
  return;
}


/* ReincarnationPuffProjectile::~ReincarnationPuffProjectile() */

void __thiscall
ReincarnationPuffProjectile::~ReincarnationPuffProjectile(ReincarnationPuffProjectile *this)

{
  ~ReincarnationPuffProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ReincarnationPuffProjectile::~ReincarnationPuffProjectile() */

void __thiscall
ReincarnationPuffProjectile::~ReincarnationPuffProjectile(ReincarnationPuffProjectile *this)

{
  ~ReincarnationPuffProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ReincarnationPuffProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
ReincarnationPuffProjectile::OnCollideEntity(ReincarnationPuffProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((param_1 == (BoardEntity *)0x0) ||
      (bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1), !bVar1)) ||
     (this[0x1a5] != (ReincarnationPuffProjectile)0x0)) {
    uVar2 = 0;
  }
  else {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
    push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              (this + 0x1b8),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    uVar2 = Projectile::OnCollideEntity((Projectile *)this,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ReincarnationPuffProjectile::onUpdate(float) */

void ReincarnationPuffProjectile::onUpdate(float param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  Projectile PVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  Projectile *in_x0;
  RtObject *pRVar8;
  ReincarnationRedPuffProjectileProps *pRVar9;
  float *pfVar10;
  undefined8 uVar11;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float *pfVar12;
  ReincarnationPuffProjectile *pRVar13;
  long lVar14;
  undefined8 *puVar15;
  Zombie *pZVar16;
  undefined8 uVar17;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  int extraout_w1_02;
  int extraout_w1_03;
  int extraout_w1_04;
  undefined4 uVar18;
  undefined4 in_register_00005004;
  float fVar19;
  float fVar20;
  RtObject *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48 [2];
  undefined8 local_38 [2];
  float local_28 [3];
  int local_1c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((in_x0[0x1ac] != (Projectile)0x0) ||
     (iVar5 = FUN_04249ac4(CONCAT44(in_register_00005004,param_1),*(undefined4 *)(in_x0 + 0x70)),
     iVar5 < 5)) goto LAB_0424cadc;
  pRVar8 = (RtObject *)Projectile::GetProps(in_x0);
  pRVar9 = Sexy::RtObject::Cast<ReincarnationRedPuffProjectileProps>(pRVar8);
  if (pRVar9[0x1e0] == (ReincarnationRedPuffProjectileProps)0x0) goto LAB_0424cadc;
  Projectile::GetAnimRig(in_x0);
  PopAnimRig::GetPAMColor();
  if (local_1c < 1) {
    (**(code **)(*(long *)in_x0 + 0x48))();
  }
  if ((in_x0[0x1a5] != (Projectile)0x0) &&
     (fVar19 = *(float *)(in_x0 + 0x1b4), fVar20 = (float)PVZ_T(), fVar19 <= fVar20)) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_28);
    this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            *)(in_x0 + 0x1b8);
    Projectile::CalcSweptCollisionRectBoardSpace();
    EntityFinder::GetEntitiesInGridSquares
              ((Iterator *)local_28,2,(RtWeakPtr<Sexy::SoundResource> *)local_38);
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)local_28);
    local_50 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)local_28);
    while (bVar4 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50), bVar4)
    {
      puVar15 = (undefined8 *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
      local_60 = (RtObject *)*puVar15;
      pZVar16 = Sexy::RtObject::Cast<Zombie>(local_60);
      if (pZVar16 != (Zombie *)0x0) {
        uVar11 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(this);
        uVar17 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this);
        local_48[0] = std::
                      find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,BoardEntity*>
                                (uVar11,uVar17,&local_60);
        local_38[0] = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end(this);
        bVar4 = __gnu_cxx::operator!=((__normal_iterator *)local_48,(__normal_iterator *)local_38);
        if (bVar4) {
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)local_38,(RtWeakPtrBase *)local_48);
          std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
          push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                     *)this,(RtWeakPtr *)local_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_38)
          ;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_48)
          ;
          Projectile::OnCollideEntity(in_x0,(BoardEntity *)local_60);
        }
        cVar3 = CanTargetZombie((ReincarnationPuffProjectile *)in_x0,pZVar16);
        if (cVar3 != '\0') {
          Zombie::ApplyCondition((Zombie *)0x3f000000,0,pZVar16,2,1);
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
    }
    fVar20 = (float)PVZ_T();
    *(float *)(in_x0 + 0x1b4) = fVar20 + 1.0;
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_28);
  }
  if (in_x0[0x1ad] == (Projectile)0x0) {
    fVar19 = *(float *)(in_x0 + 0x1a8);
    fVar20 = (float)PVZ_T();
    if (fVar19 <= fVar20) {
      in_x0[0x1ad] = (Projectile)0x1;
      uVar18 = PVZ_T();
      PVar1 = in_x0[0x1ad];
      *(undefined4 *)(in_x0 + 0x1b0) = uVar18;
    }
    else {
      PVar1 = in_x0[0x1ad];
    }
    if (PVar1 != (Projectile)0x0) goto LAB_0424cb54;
  }
  else {
LAB_0424cb54:
    updateColor((ReincarnationPuffProjectile *)in_x0);
  }
  pfVar10 = (float *)std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    *)in_x0);
  fVar20 = *pfVar10;
  iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
  if (fVar20 < (float)(800 - iVar5 / 2)) {
    uVar11 = Sexy::LazySingleton<PVZDB>::GetInstance();
    bVar4 = false;
    PVZDB::GetObjectIteratorForTable((Iterator *)local_28,uVar11,0x2b);
    while (bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)local_28), bVar2) {
      Sexy::RtDbTable::Iterator::operator*((Iterator *)local_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_38,(RtWeakPtrBase *)local_48);
      this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)local_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_38);
      Sexy::RtId::~RtId((RtId *)local_48);
      iVar5 = extraout_w1;
      if (in_x0 != (Projectile *)this_00) {
        pfVar12 = (float *)std::
                           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           ::_M_leftmost(this_00);
        iVar6 = BoardTransforms::BoardSpaceToGridYUnbounded(pfVar12[1]);
        iVar7 = FUN_04249ab8(*(undefined4 *)(this_00 + 0xa8));
        iVar5 = extraout_w1_00;
        if ((iVar6 == iVar7) && (*pfVar10 <= *pfVar12)) {
          Projectile::CalcCollisionRectBoardSpace();
          Projectile::CalcSweptCollisionRectBoardSpace();
          cVar3 = Sexy::TRect<int>::Intersects((TRect<int> *)local_48,(TRect *)local_38);
          iVar5 = extraout_w1_01;
          if ((cVar3 != '\0') &&
             (bVar2 = Sexy::RtObject::IsA<ReincarnationPuffProjectile>((RtObject *)this_00),
             iVar5 = extraout_w1_02, bVar2)) {
            pRVar13 = Sexy::RtObject::Cast<ReincarnationPuffProjectile>((RtObject *)this_00);
            cVar3 = FUN_04249aec(pRVar13[0x1a5]);
            iVar5 = extraout_w1_03;
            if ((cVar3 != '\0') && (bVar4 = true, in_x0[0x1a5] == (Projectile)0x0)) {
              in_x0[0x1a5] = (Projectile)0x1;
              fVar20 = (float)PVZ_T();
              pRVar8 = (RtObject *)Projectile::GetProps(in_x0);
              pRVar9 = Sexy::RtObject::Cast<ReincarnationRedPuffProjectileProps>(pRVar8);
              local_38[0] = CONCAT44(local_38[0]._4_4_,fVar20 + *(float *)(pRVar9 + 0x1e4));
              pfVar12 = eastl::min_alt<float>((float *)(in_x0 + 0x1a8),(float *)local_38);
              *(float *)(in_x0 + 0x1a8) = *pfVar12;
              iVar5 = extraout_w1_04;
            }
          }
        }
      }
      Sexy::RtDbTable::Iterator::operator++((Iterator *)local_28,iVar5);
    }
    Sexy::RtDbTable::Iterator::~Iterator((Iterator *)local_28);
    if (bVar4) {
      Projectile::SetVelocity(in_x0,0.0,0.0,0.0);
    }
    else if (in_x0[0x1a5] != (Projectile)0x0) {
      in_x0[0x1a5] = (Projectile)0x0;
      lVar14 = Projectile::getProps(in_x0);
      lVar14 = FUN_04249b10(*(undefined8 *)(lVar14 + 0x78),0);
      fVar20 = *(float *)(lVar14 + 4);
      lVar14 = Projectile::getProps(in_x0);
      lVar14 = FUN_04249b10(*(undefined8 *)(lVar14 + 0x78),1);
      fVar19 = *(float *)(lVar14 + 4);
      lVar14 = Projectile::getProps(in_x0);
      lVar14 = FUN_04249b10(*(undefined8 *)(lVar14 + 0x78),2);
      Projectile::SetVelocity(in_x0,fVar20,fVar19,*(float *)(lVar14 + 4));
    }
  }
  else if (in_x0[0x1a5] == (Projectile)0x0) {
    in_x0[0x1a5] = (Projectile)0x1;
    Projectile::SetVelocity(in_x0,0.0,0.0,0.0);
    fVar20 = (float)PVZ_T();
    pRVar8 = (RtObject *)Projectile::GetProps(in_x0);
    pRVar9 = Sexy::RtObject::Cast<ReincarnationRedPuffProjectileProps>(pRVar8);
    local_28[0] = fVar20 + *(float *)(pRVar9 + 0x1e4);
    pfVar10 = eastl::min_alt<float>((float *)(in_x0 + 0x1a8),local_28);
    *(float *)(in_x0 + 0x1a8) = *pfVar10;
  }
LAB_0424cadc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

