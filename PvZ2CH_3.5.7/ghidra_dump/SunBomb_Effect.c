// Class: SunBomb_Effect


/* SunBomb_Effect::SetRedStarProjectile(int, Sexy::RtWeakPtr<ProjectilePropertySheet>) */

void __thiscall
SunBomb_Effect::SetRedStarProjectile(SunBomb_Effect *this,undefined4 param_1,RtWeakPtr *param_3)

{
  *(undefined4 *)(this + 0x130) = param_1;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x110),param_3);
  return;
}


/* SunBomb_Effect::SetBuleStarProjectile(int, Sexy::RtWeakPtr<ProjectilePropertySheet>) */

void __thiscall
SunBomb_Effect::SetBuleStarProjectile(SunBomb_Effect *this,undefined4 param_1,RtWeakPtr *param_3)

{
  *(undefined4 *)(this + 0x134) = param_1;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x118),param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SunBomb_Effect::StaticClassInit() */

void SunBomb_Effect::StaticClassInit(void)

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
    std::string::string(asStack_10,"SunBomb_Effect");
    (*pcVar2)(plVar1,asStack_10,FUN_04d405a8,0x138,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SunBomb_Effect::StaticGetClass() */

long * SunBomb_Effect::StaticGetClass(void)

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
  uVar2 = Effect_PopAnim::StaticGetClass();
  (*pcVar3)(plVar1,"SunBomb_Effect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SunBomb_Effect::GetClass() const */

long * SunBomb_Effect::GetClass(void)

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
  uVar2 = Effect_PopAnim::StaticGetClass();
  (*pcVar3)(plVar1,"SunBomb_Effect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SunBomb_Effect::Init(Sexy::Point const&, BoardEntity*) */

void __thiscall SunBomb_Effect::Init(SunBomb_Effect *this,Point *param_1,BoardEntity *param_2)

{
  *(undefined8 *)(this + 0x120) = *(undefined8 *)param_1;
  *(BoardEntity **)(this + 0x128) = param_2;
  return;
}


/* SunBomb_Effect::SunBomb_Effect() */

void __thiscall SunBomb_Effect::SunBomb_Effect(SunBomb_Effect *this)

{
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_069af6a0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x110));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x118));
  Sexy::Point::Point((Point *)(this + 0x120),-1,-1);
  return;
}


/* SunBomb_Effect::StaticNew() */

SunBomb_Effect * SunBomb_Effect::StaticNew(void)

{
  SunBomb_Effect *this;
  
  this = ::operator_new(0x138);
  SunBomb_Effect(this);
  return this;
}


/* SunBomb_Effect::~SunBomb_Effect() */

void __thiscall SunBomb_Effect::~SunBomb_Effect(SunBomb_Effect *this)

{
  *(undefined ***)this = &PTR_GetClass_069af6a0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x118));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x110));
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* SunBomb_Effect::~SunBomb_Effect() */

void __thiscall SunBomb_Effect::~SunBomb_Effect(SunBomb_Effect *this)

{
  ~SunBomb_Effect(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SunBomb_Effect::launchBuleStarsProjectile() */

void __thiscall SunBomb_Effect::launchBuleStarsProjectile(SunBomb_Effect *this)

{
  RtWeakPtrBase *pRVar1;
  int iVar2;
  Projectile *pPVar3;
  int iVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  int local_38;
  int local_2c;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [32];
  Point *local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = (RtWeakPtrBase *)(this + 0x118);
  BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)(this + 0x120),___stack_chk_guard);
  uVar5 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::TRect<int>::GetCenter();
  Sexy::TRect<int>::GetCenter();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,pRVar1);
  pPVar3 = (Projectile *)
           Board::AddProjectile
                     ((Board *)(float)local_38,(float)local_2c,0,uVar5,aRStack_28,
                      *(undefined8 *)(this + 0x128),0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  if (pPVar3 != (Projectile *)0x0) {
    fVar6 = (float)FUN_04d3fc28(0xc2200000,0x42200000);
    fVar7 = (float)FUN_04d3fc28(0xc2200000,0x41f00000);
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_28,fVar6 - 60.0,fVar7 - 300.0,0.0);
    Projectile::SetVelocity(pPVar3,(SexyVector3 *)aRStack_28);
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_28,0.0,400.0,0.0);
    Projectile::SetAcceleration(pPVar3,(SexyVector3 *)aRStack_28);
  }
  uVar5 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::TRect<int>::GetCenter();
  Sexy::TRect<int>::GetCenter();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,pRVar1);
  pPVar3 = (Projectile *)
           Board::AddProjectile
                     ((Board *)(float)local_38,(float)local_2c,0,uVar5,aRStack_28,
                      *(undefined8 *)(this + 0x128),0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  if (pPVar3 != (Projectile *)0x0) {
    fVar6 = (float)FUN_04d3fc28(0xc2200000,0x42200000);
    fVar7 = (float)FUN_04d3fc28(0xc2200000,0x41f00000);
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_28,fVar6 - 60.0,fVar7 - 300.0,0.0);
    Projectile::SetVelocity(pPVar3,(SexyVector3 *)aRStack_28);
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_28,0.0,400.0,0.0);
    Projectile::SetAcceleration(pPVar3,(SexyVector3 *)aRStack_28);
  }
  iVar4 = 0;
  if (2 < *(int *)(this + 0x134)) {
    do {
      uVar5 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::TRect<int>::GetCenter();
      Sexy::TRect<int>::GetCenter();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,pRVar1);
      pPVar3 = (Projectile *)
               Board::AddProjectile
                         ((Board *)(float)local_38,(float)local_2c,0,uVar5,aRStack_28,
                          *(undefined8 *)(this + 0x128),0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      if (pPVar3 != (Projectile *)0x0) {
        iVar2 = Sexy::Rand(2);
        fVar6 = (float)FUN_04d3fc28(0xc2200000,0x42200000);
        fVar7 = (float)FUN_04d3fc28(0xc2480000,0x41f00000);
        if (iVar2 == 0) {
          fVar6 = fVar6 - 60.0;
        }
        else {
          fVar6 = fVar6 + 60.0;
        }
        EATextSquish::Vec3::Vec3((Vec3 *)aRStack_28,fVar6,fVar7 - 300.0,0.0);
        Projectile::SetVelocity(pPVar3,(SexyVector3 *)aRStack_28);
        EATextSquish::Vec3::Vec3((Vec3 *)aRStack_28,0.0,400.0,0.0);
        Projectile::SetAcceleration(pPVar3,(SexyVector3 *)aRStack_28);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(this + 0x134) + -2);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SunBomb_Effect::launchRedStarsProjectile() */

void __thiscall SunBomb_Effect::launchRedStarsProjectile(SunBomb_Effect *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  RtObject *pRVar10;
  TwinsRedStarProjectile *pTVar11;
  SexyTransform2D *pSVar12;
  SexyVector3 *pSVar13;
  Point *extraout_x1;
  undefined8 uVar14;
  int iVar15;
  Board *pBVar20;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  int local_60 [2];
  TPoint aTStack_58 [4];
  int local_54;
  int local_50;
  float local_4c;
  undefined4 local_48;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  SexyMatrix3 aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point((Point *)local_60,-1,-1);
  Sexy::TPoint<int>::operator+((TPoint<int> *)(this + 0x120),(TPoint *)local_60);
  Sexy::Point::Point((Point *)&local_50,aTStack_58);
  BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)&local_50,extraout_x1);
  iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
  local_38 = local_38 + iVar5 * 2;
  iVar5 = BoardConstants::GRIDSQUARE_HEIGHT();
  local_34 = local_34 + iVar5 * 2;
  iVar5 = 0;
  do {
    iVar15 = 0;
    while( true ) {
      iVar3 = local_40;
      iVar1 = local_38 / 2;
      iVar6 = Sexy::Rand(iVar1);
      iVar8 = local_3c;
      iVar2 = local_34 / 2;
      iVar7 = Sexy::Rand(iVar2);
      uVar14 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::TRect<int>::GetCenter();
      pBVar20._0_4_ = (Board *)(float)local_60[0];
      Sexy::TRect<int>::GetCenter();
      fVar16 = (float)local_54;
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_50,(RtWeakPtrBase *)(this + 0x110));
      pRVar10 = (RtObject *)
                Board::AddProjectile
                          (pBVar20._0_4_,fVar16,0,uVar14,(Point *)&local_50,
                           *(undefined8 *)(this + 0x128),0);
      pTVar11 = Sexy::RtObject::Cast<TwinsRedStarProjectile>(pRVar10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
      if (pTVar11 != (TwinsRedStarProjectile *)0x0) {
        fVar19 = (float)(iVar3 + iVar1 * iVar15 + iVar6);
        fVar18 = (float)(iVar8 + iVar2 * iVar5 + iVar7);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_50,fVar19,fVar18);
        FUN_04d3fbf8(pTVar11 + 0x1a8,(Point *)&local_50);
        uVar17 = 0;
        EATextSquish::Vec3::Vec3((Vec3 *)&local_50,-100.0,0.0,0.0);
        Projectile::SetAcceleration((Projectile *)pTVar11,(SexyVector3 *)&local_50);
        Sexy::TRect<int>::GetCenter();
        fVar16 = (float)local_54;
        Sexy::TRect<int>::GetCenter();
        fVar19 = fVar19 - (float)local_50;
        fVar16 = atan2f(fVar18 - fVar16,fVar19);
        pSVar12 = (SexyTransform2D *)FUN_04d3fbc8(-fVar16,pTVar11 + 0xc4);
        Sexy::SexyTransform2D::CreateRotation(pSVar12,-fVar16);
        Projectile::ApplyRotationToVelocity((SexyTransform2D *)pTVar11);
        pSVar13 = (SexyVector3 *)AssetsManagerManifest::getAssets((AssetsManagerManifest *)pTVar11);
        local_50 = Sexy::SexyMatrix3::operator*(aSStack_30,pSVar13);
        local_4c = fVar19;
        local_48 = uVar17;
        Projectile::SetAcceleration((Projectile *)pTVar11,(SexyVector3 *)&local_50);
      }
      if (iVar15 != 0) break;
      iVar15 = 1;
    }
    bVar4 = iVar5 != 1;
    iVar5 = iVar15;
  } while (bVar4);
  iVar5 = 0;
  if (0 < *(int *)(this + 0x130)) {
    do {
      iVar8 = Sexy::Rand(2);
      iVar6 = Sexy::Rand(2);
      iVar2 = local_40;
      iVar15 = local_38 / 2;
      iVar7 = Sexy::Rand(iVar15);
      iVar3 = local_3c;
      iVar1 = local_34 / 2;
      iVar9 = Sexy::Rand(iVar1);
      uVar14 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::TRect<int>::GetCenter();
      pBVar20._0_4_ = (Board *)(float)local_60[0];
      Sexy::TRect<int>::GetCenter();
      fVar16 = (float)local_54;
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_50,(RtWeakPtrBase *)(this + 0x110));
      pRVar10 = (RtObject *)
                Board::AddProjectile
                          (pBVar20._0_4_,fVar16,0,uVar14,(Point *)&local_50,
                           *(undefined8 *)(this + 0x128),0);
      pTVar11 = Sexy::RtObject::Cast<TwinsRedStarProjectile>(pRVar10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
      if (pTVar11 != (TwinsRedStarProjectile *)0x0) {
        fVar19 = (float)(iVar2 + iVar15 * iVar8 + iVar7);
        fVar18 = (float)(iVar3 + iVar1 * iVar6 + iVar9);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_50,fVar19,fVar18);
        FUN_04d3fbf8(pTVar11 + 0x1a8,(Point *)&local_50);
        uVar17 = 0;
        EATextSquish::Vec3::Vec3((Vec3 *)&local_50,-100.0,0.0,0.0);
        Projectile::SetAcceleration((Projectile *)pTVar11,(SexyVector3 *)&local_50);
        Sexy::TRect<int>::GetCenter();
        fVar16 = (float)local_54;
        Sexy::TRect<int>::GetCenter();
        fVar19 = fVar19 - (float)local_50;
        fVar16 = atan2f(fVar18 - fVar16,fVar19);
        pSVar12 = (SexyTransform2D *)FUN_04d3fbc8(-fVar16,pTVar11 + 0xc4);
        Sexy::SexyTransform2D::CreateRotation(pSVar12,-fVar16);
        Projectile::ApplyRotationToVelocity((SexyTransform2D *)pTVar11);
        pSVar13 = (SexyVector3 *)AssetsManagerManifest::getAssets((AssetsManagerManifest *)pTVar11);
        local_50 = Sexy::SexyMatrix3::operator*(aSStack_30,pSVar13);
        local_4c = fVar19;
        local_48 = uVar17;
        Projectile::SetAcceleration((Projectile *)pTVar11,(SexyVector3 *)&local_50);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(this + 0x130));
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* SunBomb_Effect::OnAnimCommand(std::string const&, std::string const&) */

void SunBomb_Effect::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_2,"fire");
  if (bVar1) {
    launchRedStarsProjectile((SunBomb_Effect *)param_1);
    return;
  }
  bVar1 = std::operator==(param_2,"pf");
  if (!bVar1) {
    return;
  }
  launchRedStarsProjectile((SunBomb_Effect *)param_1);
  launchBuleStarsProjectile((SunBomb_Effect *)param_1);
  return;
}

