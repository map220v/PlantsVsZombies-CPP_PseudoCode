// Class: RambutanSmallSnowballProjectile


/* RambutanSmallSnowballProjectile::~RambutanSmallSnowballProjectile() */

void __thiscall
RambutanSmallSnowballProjectile::~RambutanSmallSnowballProjectile
          (RambutanSmallSnowballProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_066b1d60;
  *(undefined ***)(this + 0x10) = &PTR__RambutanSmallSnowballProjectile_066b1f50;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to RambutanSmallSnowballProjectile::~RambutanSmallSnowballProjectile() */

void __thiscall
RambutanSmallSnowballProjectile::~RambutanSmallSnowballProjectile
          (RambutanSmallSnowballProjectile *this)

{
  ~RambutanSmallSnowballProjectile(this + -0x10);
  return;
}


/* RambutanSmallSnowballProjectile::~RambutanSmallSnowballProjectile() */

void __thiscall
RambutanSmallSnowballProjectile::~RambutanSmallSnowballProjectile
          (RambutanSmallSnowballProjectile *this)

{
  ~RambutanSmallSnowballProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to RambutanSmallSnowballProjectile::~RambutanSmallSnowballProjectile() */

void __thiscall
RambutanSmallSnowballProjectile::~RambutanSmallSnowballProjectile
          (RambutanSmallSnowballProjectile *this)

{
  ~RambutanSmallSnowballProjectile(this + -0x10);
  return;
}


/* RambutanSmallSnowballProjectile::onUpdate(float) */

void RambutanSmallSnowballProjectile::onUpdate(float param_1)

{
  Projectile *in_x0;
  float *pfVar1;
  
  pfVar1 = (float *)Projectile::GetVelocity(in_x0);
  atan2f(pfVar1[2],*pfVar1);
  FUN_038a21c0(in_x0 + 0xc4);
  return;
}


/* RambutanSmallSnowballProjectile::SetIceProbability(float, float, float) */

void __thiscall
RambutanSmallSnowballProjectile::SetIceProbability
          (RambutanSmallSnowballProjectile *this,float param_1,float param_2,float param_3)

{
  *(float *)(this + 0x1a8) = param_1;
  *(float *)(this + 0x1ac) = param_2;
  *(float *)(this + 0x1b0) = param_3;
  return;
}


/* RambutanSmallSnowballProjectile::RambutanSmallSnowballProjectile() */

void __thiscall
RambutanSmallSnowballProjectile::RambutanSmallSnowballProjectile
          (RambutanSmallSnowballProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_066b1d60;
  *(undefined ***)(this + 0x10) = &PTR__RambutanSmallSnowballProjectile_066b1f50;
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined4 *)(this + 0x1b0) = 0;
  return;
}


/* RambutanSmallSnowballProjectile::StaticNew() */

RambutanSmallSnowballProjectile * RambutanSmallSnowballProjectile::StaticNew(void)

{
  RambutanSmallSnowballProjectile *this;
  
  this = ::operator_new(0x1b8);
  RambutanSmallSnowballProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RambutanSmallSnowballProjectile::StaticClassInit() */

void RambutanSmallSnowballProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"RambutanSmallSnowballProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_038a334c,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RambutanSmallSnowballProjectile::StaticGetClass() */

long * RambutanSmallSnowballProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RambutanSmallSnowballProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RambutanSmallSnowballProjectile::GetClass() const */

long * RambutanSmallSnowballProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"RambutanSmallSnowballProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RambutanSmallSnowballProjectile::radiateSplashDamage(BoardEntity*) */

void RambutanSmallSnowballProjectile::radiateSplashDamage(BoardEntity *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  Zombie *this;
  long *plVar10;
  RtObject *this_00;
  RambutanSmallSnowballProjectileProps *pRVar11;
  Rambutanbergeffect *this_01;
  ResourceInfo *pRVar12;
  float *pfVar13;
  long *in_x1;
  int in_w4;
  ulong uVar14;
  undefined8 uVar15;
  code *pcVar16;
  float fVar17;
  undefined1 auStack_b8 [4];
  uint local_b4;
  FastCurve aFStack_b0 [4];
  float local_ac;
  string asStack_a8 [8];
  RtWeakPtr aRStack_a0 [20];
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
      cVar2 = BoardEntity::NeutralizeSplashDamage();
    }
    else {
      cVar2 = (**(code **)(*in_x1 + 0x128))();
    }
    if (cVar2 != '\0') goto LAB_038a672c;
  }
  lVar7 = Projectile::getProps((Projectile *)param_1);
  if ((0.0 < *(float *)(lVar7 + 0x38)) && (0.0 < *(float *)(lVar7 + 0x60))) {
    DamageInfo::DamageInfo(aDStack_68);
    (**(code **)(*(long *)param_1 + 0x178))(param_1,aDStack_68,0);
    fVar17 = *(float *)(param_1 + 0x178);
    local_60 = 1.0;
    if (*(char *)(lVar7 + 0x3c) == '\0') {
      local_60 = (float)FUN_038a21c8(*(undefined4 *)(param_1 + 0x170),
                                     *(undefined4 *)(param_1 + 0x17c),
                                     *(undefined4 *)(param_1 + 0x180),
                                     *(undefined4 *)(param_1 + 0x184));
    }
    local_60 = local_60 * fVar17;
    SetFlag<DamageTypeFlags>(auStack_58,0x2000000000,0);
    SetFlag<DamageTypeFlags>(auStack_58,0x800,0);
    Sexy::FastCurve::SetOutRange(aFStack_b0,*(float *)(param_1 + 0x18),*(float *)(param_1 + 0x1c));
    BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)0x0,*(int *)(param_1 + 0xa8),1,1,in_w4)
    ;
    iVar1 = *(int *)(param_1 + 0xa8);
    iVar6 = (int)*(float *)(lVar7 + 0x60) / 2;
    local_ac = (float)(local_8c + local_84 / 2);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
    uVar3 = operator|(2,4);
    local_b4 = uVar3;
    iVar4 = FUN_038a211c(*(undefined4 *)(param_1 + 0x24));
    if (iVar4 == 2) {
      operator|=(&local_b4,1);
      uVar3 = local_b4;
    }
    iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
    uVar14 = 0;
    EntityFinder::GetEntitiesTouchingCircle2D
              ((float)iVar4 * SQRT(*(float *)(lVar7 + 0x60)),
               (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar3,
               aFStack_b0,iVar1 - iVar6,iVar6 + iVar1,auStack_b8);
    uVar15 = local_80;
    lVar7 = FUN_038a2240(local_80,local_78);
    if (lVar7 != 0) {
      do {
        puVar8 = (undefined8 *)FUN_038a224c(uVar15,uVar14);
        uVar5 = FUN_038a211c(*(undefined4 *)(param_1 + 0x24));
        cVar2 = RealObject::IsOnOpposingTeam(*puVar8,uVar5);
        uVar15 = local_80;
        if (cVar2 != '\0') {
          puVar8 = (undefined8 *)FUN_038a224c(local_80,uVar14);
          this = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar8);
          if ((this == (Zombie *)0x0) ||
             (cVar2 = (**(code **)(*(long *)this + 0xb8))(this,7), uVar15 = local_80, cVar2 != '\0')
             ) {
            uVar15 = local_80;
            puVar8 = (undefined8 *)FUN_038a224c(local_80,uVar14);
            plVar10 = (long *)*puVar8;
            if (in_x1 != plVar10) {
              (**(code **)(*plVar10 + 0x110))(plVar10,aDStack_68);
              pcVar16 = *(code **)(*(long *)param_1 + 0x1c8);
              puVar8 = (undefined8 *)FUN_038a224c(local_80,uVar14);
              if (pcVar16 != Projectile::onSplashDamageHitEntity) {
                (*pcVar16)(param_1,*puVar8);
              }
              uVar15 = local_80;
              if (((((this != (Zombie *)0x0) &&
                    (cVar2 = (**(code **)(*(long *)this + 0x328))(this), uVar15 = local_80,
                    cVar2 == '\0')) &&
                   (cVar2 = (**(code **)(*(long *)this + 0x330))(this), uVar15 = local_80,
                   cVar2 == '\0')) &&
                  (iVar6 = FUN_038a21d8(*(undefined4 *)(param_1 + 0x70)), uVar15 = local_80,
                  4 < iVar6)) &&
                 (((cVar2 = Zombie::HasCondition(this,1), cVar2 != '\0' ||
                   (cVar2 = Zombie::HasCondition(this), uVar15 = local_80, cVar2 != '\0')) &&
                  ((cVar2 = WinterRambutan::CanZombieLaunch(this), uVar15 = local_80, cVar2 != '\0'
                   && ((iVar6 = Zombie::GetSizeType(this), uVar15 = local_80, iVar6 != 2 &&
                       (fVar17 = (float)Sexy::Rand(1.0), uVar15 = local_80,
                       fVar17 < *(float *)(param_1 + 0x1b0))))))))) {
                this_00 = (RtObject *)Projectile::GetProps((Projectile *)param_1);
                pRVar11 = Sexy::RtObject::Cast<RambutanSmallSnowballProjectileProps>(this_00);
                if (pRVar11 == (RambutanSmallSnowballProjectileProps *)0x0) goto LAB_038a6964;
                    /* WARNING: Load size is inaccurate */
                Zombie::ApplyCondition(*(Zombie **)(pRVar11 + 0x1e0),0,this,0x99,1);
                this_01 = Board::AddEffect<Rambutanbergeffect>(*(Board **)(gLawnApp + 0x9f0));
                std::string::string(asStack_a8,"POPANIM_EFFECTS_WINTERRAMBUTAN_EFFECT");
                GetPAMByName(asStack_a8);
                pRVar12 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_a0);
                Effect_PopAnim::CreatePopAnimRig
                          ((Effect_PopAnim *)this_01,(PopAnim *)pRVar12,(RtClass *)0x0);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
                std::string::~string(asStack_a8);
                nop();
                puVar8 = (undefined8 *)FUN_038a224c(local_80,uVar14);
                pfVar13 = (float *)std::
                                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)*puVar8);
                EATextSquish::Vec3::Vec3
                          ((Vec3 *)aRStack_a0,*pfVar13 + gCheat_X + -113.0,
                           pfVar13[1] + gCheat_Y + -143.0,0.0);
                StandaloneEffect::SetBoardSpaceOrigin
                          ((StandaloneEffect *)this_01,(SexyVector3 *)aRStack_a0,-1);
                iVar6 = (**(code **)(*(long *)this + 0x170))(this);
                FUN_038a21b8(this_01 + 0x1c,iVar6 + 1);
                std::string::string((string *)aRStack_a0,"binkuai_xiao");
                PVZ_EOT();
                Effect_PopAnim::PlayLoopingAnimation((Effect_PopAnim *)this_01,aRStack_a0,0);
                std::string::~string((string *)aRStack_a0);
                nop();
                iVar6 = Zombie::GetSizeType(this);
                if (iVar6 == 1) {
                  puVar8 = (undefined8 *)FUN_038a224c(local_80,uVar14);
                  pfVar13 = (float *)std::
                                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     ::_M_leftmost((
                                                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)*puVar8);
                  EATextSquish::Vec3::Vec3
                            ((Vec3 *)aRStack_a0,*pfVar13 + gCheat_X + -152.0,
                             pfVar13[1] + gCheat_Y + -175.0,0.0);
                  StandaloneEffect::SetBoardSpaceOrigin
                            ((StandaloneEffect *)this_01,(SexyVector3 *)aRStack_a0,-1);
                  (**(code **)(*(long *)this_01 + 0x80))(0x3fa66666);
                }
                ToolPacketData::GetProps();
                Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                          ((RtWeakPtr<Sexy::SoundResource> *)aRStack_a0,(RtWeakPtrBase *)asStack_a8)
                ;
                CthulhuEyeballEffect::SetCthulhuEasyButton
                          ((CthulhuEyeballEffect *)this_01,aRStack_a0);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_a8);
                uVar15 = local_80;
              }
            }
          }
        }
        uVar14 = uVar14 + 1;
        uVar9 = FUN_038a2240(uVar15,local_78);
      } while (uVar14 < uVar9);
    }
    lVar7 = Projectile::getProps((Projectile *)param_1);
    if (*(char *)(lVar7 + 100) != '\0') {
      Board::ShakeBoard(*(Board **)(gLawnApp + 0x9f0),3,-4,0.25);
    }
LAB_038a6964:
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
    DamageInfo::~DamageInfo(aDStack_68);
  }
LAB_038a672c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RambutanSmallSnowballProjectile::handleImpact(BoardEntity*) */

void __thiscall
RambutanSmallSnowballProjectile::handleImpact
          (RambutanSmallSnowballProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  Zombie *this_00;
  RtObject *pRVar4;
  RambutanSmallSnowballProjectileProps *pRVar5;
  Rambutanbergeffect *this_01;
  ResourceInfo *pRVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (BoardEntity *)0x0) {
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    fVar9 = *(float *)(this + 0x1a8);
    if (this_00 == (Zombie *)0x0) {
      pRVar4 = (RtObject *)Projectile::GetProps((Projectile *)this);
      pRVar5 = Sexy::RtObject::Cast<RambutanSmallSnowballProjectileProps>(pRVar4);
      if (pRVar5 == (RambutanSmallSnowballProjectileProps *)0x0) {
LAB_038a7868:
        uVar2 = 0;
        goto LAB_038a7828;
      }
    }
    else {
      cVar1 = (**(code **)(*(long *)this_00 + 0x328))();
      if ((cVar1 == '\0') &&
         (cVar1 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar1 == '\0')) {
        pRVar4 = (RtObject *)Projectile::GetProps((Projectile *)this);
        pRVar5 = Sexy::RtObject::Cast<RambutanSmallSnowballProjectileProps>(pRVar4);
        if (pRVar5 == (RambutanSmallSnowballProjectileProps *)0x0) goto LAB_038a7868;
        cVar1 = Zombie::HasCondition(this_00,1);
        if ((cVar1 != '\0') || (cVar1 = Zombie::HasCondition(this_00), cVar1 != '\0')) {
          fVar9 = *(float *)(this + 0x1ac);
        }
        cVar1 = WinterRambutan::CanZombieLaunch(this_00);
        if (((cVar1 != '\0') && (iVar3 = Zombie::GetSizeType(this_00), iVar3 != 2)) &&
           (fVar8 = (float)Sexy::Rand(1.0), fVar8 < fVar9)) {
                    /* WARNING: Load size is inaccurate */
          Zombie::ApplyCondition(*(Zombie **)(pRVar5 + 0x1e0),0,this_00,0x99,1);
          this_01 = Board::AddEffect<Rambutanbergeffect>(*(Board **)(gLawnApp + 0x9f0));
          std::string::string(asStack_20,"POPANIM_EFFECTS_WINTERRAMBUTAN_EFFECT");
          GetPAMByName(asStack_20);
          pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
          Effect_PopAnim::CreatePopAnimRig
                    ((Effect_PopAnim *)this_01,(PopAnim *)pRVar6,(RtClass *)0x0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
          std::string::~string(asStack_20);
          nop();
          pfVar7 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           *)param_1);
          EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,*pfVar7 - 113.0,pfVar7[1] - 143.0,0.0);
          StandaloneEffect::SetBoardSpaceOrigin
                    ((StandaloneEffect *)this_01,(SexyVector3 *)aRStack_18,-1);
          iVar3 = (**(code **)(*(long *)this_00 + 0x170))(this_00);
          FUN_038a21b8(this_01 + 0x1c,iVar3 + 1);
          std::string::string((string *)aRStack_18,"binkuai_xiao");
          PVZ_EOT();
          Effect_PopAnim::PlayLoopingAnimation((Effect_PopAnim *)this_01,aRStack_18,0);
          std::string::~string((string *)aRStack_18);
          nop();
          iVar3 = Zombie::GetSizeType(this_00);
          if (iVar3 == 1) {
            EATextSquish::Vec3::Vec3
                      ((Vec3 *)aRStack_18,*pfVar7 + gCheat_X + -152.0,pfVar7[1] + gCheat_Y + -175.0,
                       0.0);
            StandaloneEffect::SetBoardSpaceOrigin
                      ((StandaloneEffect *)this_01,(SexyVector3 *)aRStack_18,-1);
            (**(code **)(*(long *)this_01 + 0x80))(0x3fa66666,this_01);
          }
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)asStack_20);
          CthulhuEyeballEffect::SetCthulhuEasyButton((CthulhuEyeballEffect *)this_01,aRStack_18);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
        }
      }
    }
  }
  uVar2 = Projectile::handleImpact((Projectile *)this,param_1);
LAB_038a7828:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

