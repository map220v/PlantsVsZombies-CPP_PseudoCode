// Class: ShadowVanillaHurricaneProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShadowVanillaHurricaneProjectile::StaticClassInit() */

void ShadowVanillaHurricaneProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"ShadowVanillaHurricaneProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04ce4704,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ShadowVanillaHurricaneProjectile::StaticGetClass() */

long * ShadowVanillaHurricaneProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ShadowVanillaHurricaneProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ShadowVanillaHurricaneProjectile::GetClass() const */

long * ShadowVanillaHurricaneProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"ShadowVanillaHurricaneProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShadowVanillaHurricaneProjectile::onSetInstigator(BoardEntity*) */

void __thiscall
ShadowVanillaHurricaneProjectile::onSetInstigator
          (ShadowVanillaHurricaneProjectile *this,BoardEntity *param_1)

{
  undefined4 uVar1;
  ShadowVanillaHurricaneProjectile SVar2;
  undefined4 uVar3;
  Plant *this_00;
  PlantShadowvanilla *this_01;
  RtObject *this_02;
  PlantShadowVanillaProps *pPVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (BoardEntity *)0x0) &&
     (this_00 = Sexy::RtObject::Cast<Plant>((RtObject *)param_1), this_00 != (Plant *)0x0)) {
    uVar3 = FUN_04cde2c4(*(undefined4 *)(this_00 + 0x50));
    *(undefined4 *)(this + 0x1a8) = uVar3;
    SVar2 = (ShadowVanillaHurricaneProjectile)Plant::GetAvatarEnable(this_00);
    this[0x1ac] = SVar2;
    nop();
    SVar2 = (ShadowVanillaHurricaneProjectile)PlantShadowvanilla::IsBoosted(this_01);
    this[0x1b8] = SVar2;
    Plant::GetProps();
    this_02 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    pPVar4 = Sexy::RtObject::Cast<PlantShadowVanillaProps_const>(this_02);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    uVar3 = *(undefined4 *)(pPVar4 + 0x2dc);
    uVar1 = *(undefined4 *)(pPVar4 + 0x2b8);
    uVar5 = *(undefined8 *)(pPVar4 + 0x70);
    *(undefined4 *)(this + 0x1bc) = *(undefined4 *)(pPVar4 + 0x2d8);
    *(undefined4 *)(this + 0x1c4) = uVar1;
    *(undefined4 *)(this + 0x1c0) = uVar3;
    lVar6 = FUN_04cde33c(uVar5,4);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1c8),(RtWeakPtr *)(lVar6 + 8));
    fVar8 = *(float *)(pPVar4 + 0x2e4);
    fVar7 = (float)Plant::GetGeneSkillBoost(this_00);
    *(undefined4 *)(this + 0x1b4) = *(undefined4 *)(pPVar4 + 0x2e8);
    *(float *)(this + 0x1b0) = fVar7 * fVar8 + fVar8;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShadowVanillaHurricaneProjectile::CrossFireHurricane(BoardEntity*) */

void __thiscall
ShadowVanillaHurricaneProjectile::CrossFireHurricane
          (ShadowVanillaHurricaneProjectile *this,BoardEntity *param_1)

{
  float *pfVar1;
  RtObject *this_00;
  ShadowVanillaSpecialHurricaneProjectile *this_01;
  long lVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  Board *pBVar8;
  float fVar7;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined8 local_18;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DVec3::DVec3((DVec3 *)&local_18);
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  lVar2 = *(long *)(gLawnApp + 0x9f0);
  fVar7 = local_18._4_4_ + pfVar1[1];
  pBVar8._0_4_ = (Board *)((float)(Board *)local_18 + *pfVar1);
  fVar5 = 0.0;
  local_18._0_4_ = pBVar8._0_4_;
  local_18._4_4_ = fVar7;
  if (*(char *)(lVar2 + 0x119) != '\0') {
    fVar5 = (float)Board::calculateRoofOffsetZ((float)pBVar8._0_4_);
    lVar2 = *(long *)(gLawnApp + 0x9f0);
  }
  iVar4 = 1;
  iVar3 = 0;
  do {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)(this + 0x1c8));
    this_00 = (RtObject *)
              Board::AddProjectile(pBVar8._0_4_,fVar7,fVar5 + local_10,lVar2,aRStack_20,0,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    RealObject::JoinTeam((RealObject *)this_00,1);
    this_01 = Sexy::RtObject::Cast<ShadowVanillaSpecialHurricaneProjectile>(this_00);
    ShadowVanillaSpecialHurricaneProjectile::SetShadowMistParam
              (this_01,*(float *)(this + 0x1b0),*(float *)(this + 0x1b4));
    pfVar1 = (float *)Projectile::GetVelocityScale((Projectile *)this_00);
    fVar6 = pfVar1[2];
    if (iVar3 == 0) {
      Projectile::SetVelocity((Projectile *)this_00,333.0,pfVar1[1],fVar6);
    }
    else if (iVar3 == 1) {
      Projectile::SetVelocity((Projectile *)this_00,-333.0,pfVar1[1],fVar6);
    }
    else if (iVar3 == 2) {
      Projectile::SetVelocity((Projectile *)this_00,*pfVar1,333.0,fVar6);
    }
    else {
      Projectile::SetVelocity((Projectile *)this_00,*pfVar1,-333.0,fVar6);
      if (iVar4 == 4) {
        if (local_8 == ___stack_chk_guard) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 1;
    lVar2 = *(long *)(gLawnApp + 0x9f0);
  } while( true );
}


/* ShadowVanillaHurricaneProjectile::ShadowVanillaHurricaneProjectile() */

void __thiscall
ShadowVanillaHurricaneProjectile::ShadowVanillaHurricaneProjectile
          (ShadowVanillaHurricaneProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_069a0ce0;
  *(undefined ***)(this + 0x10) = &PTR__ShadowVanillaHurricaneProjectile_069a0ed0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1c8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1d0));
  this[0x1ac] = (ShadowVanillaHurricaneProjectile)0x0;
  this[0x1ad] = (ShadowVanillaHurricaneProjectile)0x0;
  this[0x1b8] = (ShadowVanillaHurricaneProjectile)0x0;
  *(undefined4 *)(this + 0x1b4) = 0x40e00000;
  *(undefined4 *)(this + 0x1bc) = 0;
  *(undefined4 *)(this + 0x1c4) = 0;
  *(undefined4 *)(this + 0x1a8) = 1;
  *(undefined4 *)(this + 0x1b0) = 0x3e4ccccd;
  *(undefined4 *)(this + 0x1c0) = 0;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1d0));
  return;
}


/* ShadowVanillaHurricaneProjectile::StaticNew() */

ShadowVanillaHurricaneProjectile * ShadowVanillaHurricaneProjectile::StaticNew(void)

{
  ShadowVanillaHurricaneProjectile *this;
  
  this = ::operator_new(0x1e8);
  ShadowVanillaHurricaneProjectile(this);
  return this;
}


/* ShadowVanillaHurricaneProjectile::~ShadowVanillaHurricaneProjectile() */

void __thiscall
ShadowVanillaHurricaneProjectile::~ShadowVanillaHurricaneProjectile
          (ShadowVanillaHurricaneProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_069a0ce0;
  *(undefined ***)(this + 0x10) = &PTR__ShadowVanillaHurricaneProjectile_069a0ed0;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1d0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to ShadowVanillaHurricaneProjectile::~ShadowVanillaHurricaneProjectile() */

void __thiscall
ShadowVanillaHurricaneProjectile::~ShadowVanillaHurricaneProjectile
          (ShadowVanillaHurricaneProjectile *this)

{
  ~ShadowVanillaHurricaneProjectile(this + -0x10);
  return;
}


/* ShadowVanillaHurricaneProjectile::~ShadowVanillaHurricaneProjectile() */

void __thiscall
ShadowVanillaHurricaneProjectile::~ShadowVanillaHurricaneProjectile
          (ShadowVanillaHurricaneProjectile *this)

{
  ~ShadowVanillaHurricaneProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ShadowVanillaHurricaneProjectile::~ShadowVanillaHurricaneProjectile() */

void __thiscall
ShadowVanillaHurricaneProjectile::~ShadowVanillaHurricaneProjectile
          (ShadowVanillaHurricaneProjectile *this)

{
  ~ShadowVanillaHurricaneProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShadowVanillaHurricaneProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
ShadowVanillaHurricaneProjectile::OnCollideEntity
          (ShadowVanillaHurricaneProjectile *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  Zombie *this_01;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  int *piVar10;
  RtObject *this_02;
  GridItemShadowVanillaHurricane *this_03;
  ShadowVanillaHurricaneProjectile SVar11;
  Board *this_04;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1d0);
  local_8 = ___stack_chk_guard;
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  ToolPacketData::GetProps();
  local_28 = std::
             find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<GameObject>>
                       (uVar5,uVar6,aRStack_30);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  if ((bVar1) ||
     (cVar2 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)param_1), cVar2 == '\0')
     ) {
    uVar3 = 0;
  }
  else {
    if ((param_1 == (BoardEntity *)0x0) ||
       (this_01 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), this_01 == (Zombie *)0x0)) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)&local_28);
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )this_00,(RtWeakPtr *)&local_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
      uVar3 = Projectile::OnCollideEntity((Projectile *)this,param_1);
    }
    else {
      cVar2 = (**(code **)(*(long *)this_01 + 0x328))();
      uVar3 = 0;
      if ((((cVar2 != '\0') ||
           (cVar2 = (**(code **)(*(long *)this_01 + 0x330))(this_01), cVar2 != '\0')) ||
          (cVar2 = Zombie::IsControlled(this_01), cVar2 != '\0')) ||
         (cVar2 = Zombie::IsInvisible(this_01), cVar2 != '\0')) goto LAB_04ce6048;
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)&local_28);
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )this_00,(RtWeakPtr *)&local_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
      uVar3 = Projectile::OnCollideEntity((Projectile *)this,param_1);
      if (this[0x1ad] != (ShadowVanillaHurricaneProjectile)0x0) {
        cVar2 = Zombie::HasCondition(this_01,0x51);
        if (cVar2 != '\0') {
          Zombie::EndCondition(this_01,0x51);
        }
                    /* WARNING: Load size is inaccurate */
        Zombie::ApplyCondition(*(Zombie **)(this + 0x1b4),0,this_01,0x51,1);
        Zombie::SetConditionTracker(*(undefined4 *)(this + 0x1b0),this_01,0x51);
      }
    }
    lVar7 = Projectile::GetProps((Projectile *)this);
    if (*(char *)(lVar7 + 0x65) != '\0') {
      if (this[0x1b8] == (ShadowVanillaHurricaneProjectile)0x0) {
        BoardEntity::CalcGridPosition();
        Sexy::Point::Point((Point *)&local_28,(TPoint *)aRStack_30);
        FUN_04ce45c4((RtWeakPtr<Sexy::SoundResource> *)&local_20,(__normal_iterator *)&local_28);
        std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                  ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20,(Point *)aRStack_30)
        ;
        uVar5 = local_20;
        iVar4 = FUN_04cde34c(local_20,local_18);
        if (0 < iVar4) {
          lVar7 = 0;
          do {
            puVar8 = (undefined4 *)FUN_04cde358(uVar5,lVar7);
            lVar9 = FUN_04ce307c(*puVar8,puVar8[1]);
            if (lVar9 == 0) {
              this_04 = *(Board **)(gLawnApp + 0x9f0);
              std::string::string((string *)&local_28,"shadowvanilla_hurricane");
              piVar10 = (int *)FUN_04cde358(local_20,lVar7);
              this_02 = (RtObject *)
                        Board::AddGridItem(this_04,(string *)&local_28,*piVar10,piVar10[1],1);
              this_03 = Sexy::RtObject::Cast<GridItemShadowVanillaHurricane>(this_02);
              std::string::~string((string *)&local_28);
              nop();
              if (this_03 != (GridItemShadowVanillaHurricane *)0x0) {
                SVar11 = (ShadowVanillaHurricaneProjectile)0x0;
                if (iVar4 + -1 == (int)lVar7) {
                  SVar11 = this[0x1ac];
                }
                GridItemShadowVanillaHurricane::InitParams
                          (this_03,(int)(((float)(*(int *)(this + 0x1a8) + -1) * 0.5 + 1.0) *
                                        (float)*(int *)(this + 0x1bc)),*(float *)(this + 0x1c0),
                           (bool)SVar11);
              }
            }
            lVar7 = lVar7 + 1;
            uVar5 = local_20;
          } while ((int)lVar7 < iVar4);
        }
        std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
                  ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20);
      }
      else if (this[0x1ac] != (ShadowVanillaHurricaneProjectile)0x0) {
        CrossFireHurricane(this,param_1);
      }
    }
  }
LAB_04ce6048:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

