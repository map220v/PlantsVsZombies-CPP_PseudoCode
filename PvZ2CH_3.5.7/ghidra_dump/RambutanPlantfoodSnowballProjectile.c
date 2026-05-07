// Class: RambutanPlantfoodSnowballProjectile


/* RambutanPlantfoodSnowballProjectile::~RambutanPlantfoodSnowballProjectile() */

void __thiscall
RambutanPlantfoodSnowballProjectile::~RambutanPlantfoodSnowballProjectile
          (RambutanPlantfoodSnowballProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_066b21a0;
  *(undefined ***)(this + 0x10) = &PTR__RambutanPlantfoodSnowballProjectile_066b2390;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to RambutanPlantfoodSnowballProjectile::~RambutanPlantfoodSnowballProjectile()
    */

void __thiscall
RambutanPlantfoodSnowballProjectile::~RambutanPlantfoodSnowballProjectile
          (RambutanPlantfoodSnowballProjectile *this)

{
  ~RambutanPlantfoodSnowballProjectile(this + -0x10);
  return;
}


/* RambutanPlantfoodSnowballProjectile::~RambutanPlantfoodSnowballProjectile() */

void __thiscall
RambutanPlantfoodSnowballProjectile::~RambutanPlantfoodSnowballProjectile
          (RambutanPlantfoodSnowballProjectile *this)

{
  ~RambutanPlantfoodSnowballProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to RambutanPlantfoodSnowballProjectile::~RambutanPlantfoodSnowballProjectile()
    */

void __thiscall
RambutanPlantfoodSnowballProjectile::~RambutanPlantfoodSnowballProjectile
          (RambutanPlantfoodSnowballProjectile *this)

{
  ~RambutanPlantfoodSnowballProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RambutanPlantfoodSnowballProjectile::OnCollideEntity(BoardEntity*) */

void RambutanPlantfoodSnowballProjectile::OnCollideEntity(BoardEntity *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined8 *puVar4;
  BoardEntity *in_x1;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  int local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_40 [4];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  if (local_54 == *(int *)(param_1 + 0x1a8)) {
    uVar2 = 0;
  }
  else {
    *(int *)(param_1 + 0x1a8) = local_54;
    puVar4 = (undefined8 *)Projectile::GetVelocity((Projectile *)param_1);
    uVar5 = *puVar4;
    local_48 = *(undefined4 *)(puVar4 + 1);
    local_50._4_4_ = (float)((ulong)uVar5 >> 0x20);
    bVar1 = local_50._4_4_ == 0.0;
    fVar6 = local_50._4_4_;
    local_50 = uVar5;
    if (bVar1) {
      Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
      Sexy::SexyTransform2D::RotateRad(aSStack_30,-DAT_06ab6ab8);
      local_40[0] = Sexy::SexyMatrix3::operator*((SexyMatrix3 *)aSStack_30,(SexyVector3 *)&local_50)
      ;
      Sexy::SexyVector3::operator=((SexyVector3 *)&local_50,(SexyVector3 *)local_40);
      fVar6 = 0.75;
      if ((local_54 != 1) && (fVar6 = 0.25, local_54 != 3)) {
        fVar6 = 0.5;
      }
      bVar3 = WinterRambutan::determineBounceDirection(fVar6);
      fVar6 = (float)bVar3 * local_50._4_4_;
    }
    fVar7 = 1.0;
    if (local_54 != 0) {
      if (local_54 == 4) {
        fVar7 = -1.0;
      }
      else {
        fVar7 = -1.0;
        if (fVar6 <= 0.0) {
          fVar7 = 1.0;
        }
      }
    }
    local_50 = CONCAT44(fVar7 * ABS(fVar6),(undefined4)local_50);
    Projectile::SetVelocity((Projectile *)param_1,(SexyVector3 *)&local_50);
    uVar2 = Projectile::OnCollideEntity((Projectile *)param_1,in_x1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* RambutanPlantfoodSnowballProjectile::RambutanPlantfoodSnowballProjectile() */

void __thiscall
RambutanPlantfoodSnowballProjectile::RambutanPlantfoodSnowballProjectile
          (RambutanPlantfoodSnowballProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined4 *)(this + 0x1a8) = 0xffffffff;
  this[0x1b0] = (RambutanPlantfoodSnowballProjectile)0x0;
  *(undefined ***)this = &PTR_GetClass_066b21a0;
  *(undefined ***)(this + 0x10) = &PTR__RambutanPlantfoodSnowballProjectile_066b2390;
  *(undefined4 *)(this + 0x1ac) = 0x40a00000;
  return;
}


/* RambutanPlantfoodSnowballProjectile::StaticNew() */

RambutanPlantfoodSnowballProjectile * RambutanPlantfoodSnowballProjectile::StaticNew(void)

{
  RambutanPlantfoodSnowballProjectile *this;
  
  this = ::operator_new(0x1b8);
  RambutanPlantfoodSnowballProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RambutanPlantfoodSnowballProjectile::StaticClassInit() */

void RambutanPlantfoodSnowballProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"RambutanPlantfoodSnowballProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_038a3950,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RambutanPlantfoodSnowballProjectile::StaticGetClass() */

long * RambutanPlantfoodSnowballProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RambutanPlantfoodSnowballProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RambutanPlantfoodSnowballProjectile::GetClass() const */

long * RambutanPlantfoodSnowballProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"RambutanPlantfoodSnowballProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RambutanPlantfoodSnowballProjectile::onUpdate(float) */

void RambutanPlantfoodSnowballProjectile::onUpdate(float param_1)

{
  undefined *this;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  float *pfVar1;
  BoardEntity *pBVar2;
  
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(in_x0);
  if (*pfVar1 <= 800.0) {
    return;
  }
  (**(code **)(*(long *)in_x0 + 0x48))();
  this = gMessageRouter;
  pBVar2 = (BoardEntity *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x68))
  ;
  MessageRouter::Post<BoardEntity*,bool,BoardEntity*,bool>
            ((MessageRouter *)this,Message::RambutanReturn,pBVar2,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RambutanPlantfoodSnowballProjectile::radiateSplashDamage(BoardEntity*) */

void RambutanPlantfoodSnowballProjectile::radiateSplashDamage(BoardEntity *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  Zombie *this;
  long *plVar10;
  ResourceInfo *pRVar11;
  long *in_x1;
  int in_w4;
  ulong uVar12;
  undefined8 uVar13;
  code *pcVar14;
  float fVar15;
  uint local_9c;
  FastCurve aFStack_98 [4];
  float local_94;
  int local_8c;
  int local_84;
  undefined8 local_80;
  undefined8 local_78;
  DamageInfo aDStack_68 [8];
  float local_60;
  undefined1 auStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (in_x1 != (long *)0x0) {
    if (*(code **)(*in_x1 + 0x128) == BoardEntity::NeutralizeSplashDamage) {
      cVar3 = BoardEntity::NeutralizeSplashDamage();
    }
    else {
      cVar3 = (**(code **)(*in_x1 + 0x128))();
    }
    if (cVar3 != '\0') goto LAB_038a6d98;
  }
  lVar7 = Projectile::getProps((Projectile *)param_1);
  if ((0.0 < *(float *)(lVar7 + 0x38)) && (0.0 < *(float *)(lVar7 + 0x60))) {
    DamageInfo::DamageInfo(aDStack_68);
    (**(code **)(*(long *)param_1 + 0x178))(param_1,aDStack_68,0);
    fVar15 = *(float *)(param_1 + 0x178);
    local_60 = 1.0;
    if (*(char *)(lVar7 + 0x3c) == '\0') {
      local_60 = (float)FUN_038a21c8(*(undefined4 *)(param_1 + 0x170),
                                     *(undefined4 *)(param_1 + 0x17c),
                                     *(undefined4 *)(param_1 + 0x180),
                                     *(undefined4 *)(param_1 + 0x184));
    }
    local_60 = local_60 * fVar15;
    SetFlag<DamageTypeFlags>(auStack_58,0x2000000000,0);
    SetFlag<DamageTypeFlags>(auStack_58,0x800,0);
    Sexy::FastCurve::SetOutRange(aFStack_98,*(float *)(param_1 + 0x18),*(float *)(param_1 + 0x1c));
    BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)0x0,*(int *)(param_1 + 0xa8),1,1,in_w4)
    ;
    iVar2 = *(int *)(param_1 + 0xa8);
    iVar1 = (int)*(float *)(lVar7 + 0x60) / 2;
    local_94 = (float)(local_8c + local_84 / 2);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
    uVar4 = operator|(2,4);
    local_9c = uVar4;
    iVar5 = FUN_038a211c(*(undefined4 *)(param_1 + 0x24));
    if (iVar5 == 2) {
      operator|=(&local_9c,1);
      uVar4 = local_9c;
    }
    iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
    uVar12 = 0;
    EntityFinder::GetEntitiesTouchingCircle2D
              ((float)iVar5 * SQRT(*(float *)(lVar7 + 0x60)),
               (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar4,
               aFStack_98,iVar2 - iVar1,iVar1 + iVar2);
    uVar13 = local_80;
    lVar7 = FUN_038a2240(local_80,local_78);
    if (lVar7 != 0) {
      do {
        puVar8 = (undefined8 *)FUN_038a224c(uVar13,uVar12);
        uVar6 = FUN_038a211c(*(undefined4 *)(param_1 + 0x24));
        cVar3 = RealObject::IsOnOpposingTeam(*puVar8,uVar6);
        uVar13 = local_80;
        if (cVar3 != '\0') {
          puVar8 = (undefined8 *)FUN_038a224c(local_80,uVar12);
          this = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar8);
          if ((this == (Zombie *)0x0) ||
             (cVar3 = (**(code **)(*(long *)this + 0xb8))(this,7), uVar13 = local_80, cVar3 != '\0')
             ) {
            uVar13 = local_80;
            puVar8 = (undefined8 *)FUN_038a224c(local_80,uVar12);
            plVar10 = (long *)*puVar8;
            if (in_x1 != plVar10) {
              (**(code **)(*plVar10 + 0x110))(plVar10,aDStack_68);
              pcVar14 = *(code **)(*(long *)param_1 + 0x1c8);
              puVar8 = (undefined8 *)FUN_038a224c(local_80,uVar12);
              if (pcVar14 != Projectile::onSplashDamageHitEntity) {
                (*pcVar14)(param_1,*puVar8);
              }
              uVar13 = local_80;
              if ((this != (Zombie *)0x0) &&
                 (cVar3 = Zombie::HasCondition(this,0x99), uVar13 = local_80, cVar3 != '\0')) {
                Zombie::EndCondition(this,0x99);
                pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_
                                    ((RtWeakPtr *)(param_1 + 0x68));
                Zombie::TakeFatalDamage(this,(BoardEntity *)pRVar11);
                uVar13 = local_80;
              }
            }
          }
        }
        uVar12 = uVar12 + 1;
        uVar9 = FUN_038a2240(uVar13,local_78);
      } while (uVar12 < uVar9);
    }
    lVar7 = Projectile::getProps((Projectile *)param_1);
    if (*(char *)(lVar7 + 100) != '\0') {
      Board::ShakeBoard(*(Board **)(gLawnApp + 0x9f0),3,-4,0.25);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
    DamageInfo::~DamageInfo(aDStack_68);
  }
LAB_038a6d98:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RambutanPlantfoodSnowballProjectile::handleImpact(BoardEntity*) */

void __thiscall
RambutanPlantfoodSnowballProjectile::handleImpact
          (RambutanPlantfoodSnowballProjectile *this,BoardEntity *param_1)

{
  RambutanPlantfoodSnowballProjectile RVar1;
  char cVar2;
  undefined1 uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  Zombie *this_00;
  ResourceInfo *pRVar9;
  RtObject *this_01;
  float *pfVar10;
  long lVar11;
  Board *this_02;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (BoardEntity *)0x0) {
    uVar3 = 0;
  }
  else {
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    if ((this_00 == (Zombie *)0x0) || (cVar2 = Zombie::HasCondition(this_00,0x99), cVar2 == '\0')) {
      RVar1 = this[0x1b0];
    }
    else {
      Zombie::EndCondition(this_00,0x99);
      pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x68));
      Zombie::TakeFatalDamage(this_00,(BoardEntity *)pRVar9);
      RVar1 = this[0x1b0];
    }
    if ((RVar1 != (RambutanPlantfoodSnowballProjectile)0x0) &&
       ((this_01 = (RtObject *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0)),
        this_01 == (RtObject *)0x0 || (bVar4 = Sexy::RtObject::IsA<SkyCityStage>(this_01), !bVar4)))
       ) {
      pfVar10 = (float *)std::
                         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        *)param_1);
      iVar5 = BoardTransforms::BoardSpaceToGridX(*pfVar10);
      if (-1 < iVar5) {
        iVar5 = BoardTransforms::BoardSpaceToGridX(*pfVar10);
        iVar6 = BoardConstants::NUMBER_OF_COLUMNS();
        if (iVar5 <= iVar6) {
          uVar7 = BoardTransforms::BoardSpaceToGridX(*pfVar10);
          uVar8 = BoardTransforms::BoardSpaceToGridY(pfVar10[1]);
          lVar11 = FUN_038a633c(uVar7,uVar8);
          if (lVar11 == 0) {
            this_02 = *(Board **)(gLawnApp + 0x9f0);
            std::string::string(asStack_10,"rambutan_icy");
            iVar5 = BoardTransforms::BoardSpaceToGridX(*pfVar10);
            iVar6 = BoardTransforms::BoardSpaceToGridY(pfVar10[1]);
            Board::AddGridItem(this_02,asStack_10,iVar5,iVar6,1);
            std::string::~string(asStack_10);
            nop();
          }
        }
      }
    }
    uVar3 = Projectile::handleImpact((Projectile *)this,param_1);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

