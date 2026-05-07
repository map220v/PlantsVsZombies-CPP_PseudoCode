// Class: SpecialBabyBruitProjectile


/* SpecialBabyBruitProjectile::~SpecialBabyBruitProjectile() */

void __thiscall
SpecialBabyBruitProjectile::~SpecialBabyBruitProjectile(SpecialBabyBruitProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_069b7a40;
  *(undefined ***)(this + 0x10) = &PTR__SpecialBabyBruitProjectile_069b7c30;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to SpecialBabyBruitProjectile::~SpecialBabyBruitProjectile() */

void __thiscall
SpecialBabyBruitProjectile::~SpecialBabyBruitProjectile(SpecialBabyBruitProjectile *this)

{
  ~SpecialBabyBruitProjectile(this + -0x10);
  return;
}


/* SpecialBabyBruitProjectile::~SpecialBabyBruitProjectile() */

void __thiscall
SpecialBabyBruitProjectile::~SpecialBabyBruitProjectile(SpecialBabyBruitProjectile *this)

{
  ~SpecialBabyBruitProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to SpecialBabyBruitProjectile::~SpecialBabyBruitProjectile() */

void __thiscall
SpecialBabyBruitProjectile::~SpecialBabyBruitProjectile(SpecialBabyBruitProjectile *this)

{
  ~SpecialBabyBruitProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpecialBabyBruitProjectile::StaticClassInit() */

void SpecialBabyBruitProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"SpecialBabyBruitProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04d79444,0x1c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpecialBabyBruitProjectile::StaticGetClass() */

long * SpecialBabyBruitProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SpecialBabyBruitProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SpecialBabyBruitProjectile::GetClass() const */

long * SpecialBabyBruitProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"SpecialBabyBruitProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpecialBabyBruitProjectile::InitializeValues(Sexy::SexyVector3, int, DragonBruitState,
   DragonBruitState, float) */

void SpecialBabyBruitProjectile::InitializeValues
               (float param_1,float param_2,undefined1 param_3 [16],undefined4 param_4,
               BoardTransforms *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  long lVar1;
  bool bVar2;
  undefined8 local_10;
  
  lVar1 = ___stack_chk_guard;
  BoardTransforms::BoardSpaceToGrid(param_5,param_1,param_2);
  bVar2 = lVar1 == ___stack_chk_guard;
  *(undefined8 *)(param_5 + 0x1a8) = local_10;
  *(undefined4 *)(param_5 + 0x1b0) = param_6;
  *(undefined4 *)(param_5 + 0x1b8) = param_7;
  *(undefined4 *)(param_5 + 0x1bc) = param_8;
  *(undefined4 *)(param_5 + 0x1b4) = param_4;
  if (bVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpecialBabyBruitProjectile::SetData(float, float) */

void __thiscall
SpecialBabyBruitProjectile::SetData(SpecialBabyBruitProjectile *this,float param_1,float param_2)

{
  *(float *)(this + 0x1c0) = param_1;
  *(float *)(this + 0x1c4) = param_2;
  return;
}


/* SpecialBabyBruitProjectile::SpecialBabyBruitProjectile() */

void __thiscall
SpecialBabyBruitProjectile::SpecialBabyBruitProjectile(SpecialBabyBruitProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_069b7a40;
  *(undefined ***)(this + 0x10) = &PTR__SpecialBabyBruitProjectile_069b7c30;
  Sexy::Point::Point((Point *)(this + 0x1a8));
  *(undefined4 *)(this + 0x1b0) = 1;
  return;
}


/* SpecialBabyBruitProjectile::StaticNew() */

SpecialBabyBruitProjectile * SpecialBabyBruitProjectile::StaticNew(void)

{
  SpecialBabyBruitProjectile *this;
  
  this = ::operator_new(0x1c8);
  SpecialBabyBruitProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpecialBabyBruitProjectile::OnCollideEntity(BoardEntity*) */

void SpecialBabyBruitProjectile::OnCollideEntity(BoardEntity *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  string *psVar6;
  Zombie *extraout_x0;
  float *pfVar7;
  Effect_PopAnim *pEVar8;
  ResourceInfo *pRVar9;
  long lVar10;
  PlantDragonBabyBruit *pPVar11;
  undefined8 uVar12;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x1;
  int in_w4;
  Board *this;
  code *pcVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  DamageInfo *pDVar17;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  Point aPStack_a0 [8];
  undefined4 local_98;
  undefined4 local_94;
  undefined1 auStack_90 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  string asStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = *(Board **)(gLawnApp + 0x9f0);
  psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_68,"dragonbabybruit");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar6);
  std::string::~string(asStack_68);
  nop();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_68,(RtWeakPtrBase *)aRStack_b8);
  cVar3 = Board::CanPlantAt(this,param_1 + 0x1a8,asStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
  if (cVar3 == '\0') {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
    BoardTransforms::GridToBoardSpaceRect
              ((BoardTransforms *)(ulong)*(uint *)(param_1 + 0x1a8),*(int *)(param_1 + 0x1ac),2,1,
               in_w4);
    EntityFinder::GetEntitiesInRectangle(avStack_80,2,auStack_90);
    local_b0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_80);
    local_a8 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
    while( true ) {
      bVar4 = __gnu_cxx::operator!=((__normal_iterator *)&local_b0,(__normal_iterator *)&local_a8);
      if (!bVar4) break;
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
      nop();
      if (extraout_x0 != (Zombie *)0x0) {
        cVar3 = (**(code **)(*(long *)extraout_x0 + 0x328))();
        if (cVar3 == '\0') {
          iVar1 = *(int *)(param_1 + 0x1b8);
          if (iVar1 == 1) {
                    /* WARNING: Load size is inaccurate */
            pDVar17._0_4_ = *(DamageInfo **)(param_1 + 0x1b4);
            pcVar13 = *(code **)(*(long *)extraout_x0 + 0x110);
            uVar12 = operator|(0x20,0x400);
            Sexy::Point::Point(aPStack_a0,-1,-1);
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
            DamageInfo::DamageInfo(pDVar17._0_4_,local_98,local_94,asStack_68,uVar12,aPStack_a0,0);
            (*pcVar13)(extraout_x0,asStack_68);
            DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
            cVar3 = (**(code **)(*(long *)extraout_x0 + 0x328))(extraout_x0);
            if ((cVar3 == '\0') &&
               (cVar3 = (**(code **)(*(long *)extraout_x0 + 0x330))(extraout_x0), cVar3 == '\0')) {
                    /* WARNING: Load size is inaccurate */
              Zombie::ApplyCondition(*(Zombie **)(param_1 + 0x1c4),0,extraout_x0,0x35,1);
              PlantDragonBabyBruit::BurnZombie
                        ((PlantDragonBabyBruit *)param_1,extraout_x0,*(float *)(param_1 + 0x1c0),
                         *(float *)(param_1 + 0x1c4));
            }
          }
          else if (iVar1 == 2) {
                    /* WARNING: Load size is inaccurate */
            pDVar17._0_4_ = *(DamageInfo **)(param_1 + 0x1b4);
            pcVar13 = *(code **)(*(long *)extraout_x0 + 0x110);
            uVar12 = operator|(0x20,0x1000000000000);
            Sexy::Point::Point(aPStack_a0,-1,-1);
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
            DamageInfo::DamageInfo(pDVar17._0_4_,local_98,local_94,asStack_68,uVar12,aPStack_a0,0);
            (*pcVar13)(extraout_x0,asStack_68);
            DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
            cVar3 = (**(code **)(*(long *)extraout_x0 + 0x328))(extraout_x0);
            if ((cVar3 == '\0') &&
               (cVar3 = (**(code **)(*(long *)extraout_x0 + 0x330))(extraout_x0), cVar3 == '\0')) {
              Zombie::ApplyCondition((Zombie *)0x40a00000,0,extraout_x0,1,1);
            }
          }
          else if (iVar1 == 3) {
                    /* WARNING: Load size is inaccurate */
            pDVar17._0_4_ = *(DamageInfo **)(param_1 + 0x1b4);
            pcVar13 = *(code **)(*(long *)extraout_x0 + 0x110);
            uVar12 = operator|(0x20,0x80);
            Sexy::Point::Point(aPStack_a0,-1,-1);
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
            DamageInfo::DamageInfo(pDVar17._0_4_,local_98,local_94,asStack_68,uVar12,aPStack_a0,0);
            (*pcVar13)(extraout_x0,asStack_68);
            DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
            cVar3 = (**(code **)(*(long *)extraout_x0 + 0x328))(extraout_x0);
            if ((cVar3 == '\0') &&
               (cVar3 = (**(code **)(*(long *)extraout_x0 + 0x330))(extraout_x0), cVar3 == '\0')) {
              Zombie::ApplyCondition((Zombie *)0x40000000,0,extraout_x0,6,1);
              Zombie::ApplyCondition((Zombie *)0x40000000,0,extraout_x0,0x18,1);
            }
          }
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b0);
    }
    std::string::string(asStack_68,"Play_CherryBomb");
    RealObject::PlayPositionalSound((RealObject *)param_1,asStack_68,0.0);
    std::string::~string(asStack_68);
    nop();
    pfVar7 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(in_x1);
    fVar16 = pfVar7[2];
    fVar14 = *pfVar7;
    fVar15 = pfVar7[1];
    pEVar8 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string((string *)&local_98,"POPANIM_EFFECTS_CHERRYBOMB_EXPLOSION_TOP");
    GetPAMByName((string *)&local_98);
    pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_68);
    Effect_PopAnim::CreatePopAnimRig(pEVar8,(PopAnim *)pRVar9,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
    std::string::~string((string *)&local_98);
    nop();
    (**(code **)(*(long *)pEVar8 + 0x80))(0x3f800000,pEVar8);
    EATextSquish::Vec3::Vec3
              ((Vec3 *)asStack_68,(float)(int)(fVar14 - 66.0),(float)(int)(fVar15 - 220.0),
               (float)(int)fVar16);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar8,(SexyVector3 *)asStack_68,-1);
    FUN_04d76ba4(pEVar8 + 0x1c,500000);
    std::string::string(asStack_68,"animation");
    Effect_PopAnim::PlaySingleAnimation(pEVar8,asStack_68,0);
    std::string::~string(asStack_68);
    nop();
    pEVar8 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    (**(code **)(*(long *)pEVar8 + 0x80))(0x3f800000);
    std::string::string((string *)&local_98,"POPANIM_EFFECTS_CHERRYBOMB_EXPLOSION_REAR");
    GetPAMByName((string *)&local_98);
    pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_68);
    Effect_PopAnim::CreatePopAnimRig(pEVar8,(PopAnim *)pRVar9,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
    std::string::~string((string *)&local_98);
    nop();
    EATextSquish::Vec3::Vec3
              ((Vec3 *)asStack_68,(float)(int)(fVar14 - 66.0),(float)(int)(fVar15 - 220.0),
               (float)(int)fVar16);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar8,(SexyVector3 *)asStack_68,-1);
    FUN_04d76ba4(pEVar8 + 0x1c,300000);
    std::string::string(asStack_68,"animation");
    Effect_PopAnim::PlaySingleAnimation(pEVar8,asStack_68,bVar4);
    std::string::~string(asStack_68);
    nop();
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x1ac);
    iVar2 = *(int *)(param_1 + 0x1a8);
    std::string::string(asStack_68,"dragonbabybruit");
    lVar10 = Board::AddPlant(this,iVar2,iVar1,asStack_68,*(int *)(param_1 + 0x1b0),false,false,true,
                             false);
    std::string::~string(asStack_68);
    nop();
    pPVar11 = Sexy::RtObject::Cast<PlantDragonBabyBruit>(*(RtObject **)(lVar10 + 0xa8));
    PlantDragonBabyBruit::setTransformState(pPVar11,*(undefined4 *)(param_1 + 0x1bc));
  }
  uVar5 = Projectile::OnCollideEntity((Projectile *)param_1,(BoardEntity *)in_x1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_b8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

