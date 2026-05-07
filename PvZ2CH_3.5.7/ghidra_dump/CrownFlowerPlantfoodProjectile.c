// Class: CrownFlowerPlantfoodProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrownFlowerPlantfoodProjectile::StaticClassInit() */

void CrownFlowerPlantfoodProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"CrownFlowerPlantfoodProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03b42424,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CrownFlowerPlantfoodProjectile::StaticGetClass() */

long * CrownFlowerPlantfoodProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CrownFlowerPlantfoodProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CrownFlowerPlantfoodProjectile::GetClass() const */

long * CrownFlowerPlantfoodProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"CrownFlowerPlantfoodProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CrownFlowerPlantfoodProjectile::setOverrideAttackLevel(float) */

void __thiscall
CrownFlowerPlantfoodProjectile::setOverrideAttackLevel
          (CrownFlowerPlantfoodProjectile *this,float param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(this + 0x170);
  *(float *)(this + 0x1c4) = param_1;
  fVar1 = (float)FUN_03b39dcc(uVar3,*(undefined4 *)(this + 0x17c),*(undefined4 *)(this + 0x180),
                              *(undefined4 *)(this + 0x184));
  fVar2 = (float)FUN_03b39dbc(uVar3);
  *(float *)(this + 0x1c8) = (fVar1 / fVar2) * param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrownFlowerPlantfoodProjectile::playHitEffect(BoardEntity*, bool) */

void __thiscall
CrownFlowerPlantfoodProjectile::playHitEffect
          (CrownFlowerPlantfoodProjectile *this,BoardEntity *param_1,bool param_2)

{
  int iVar1;
  undefined8 *puVar2;
  Effect_PopAnim *pEVar3;
  ResourceInfo *pRVar4;
  RtWeakPtr *__n;
  string asStack_28 [8];
  RtWeakPtr aRStack_20 [8];
  float local_18;
  float fStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_1);
  local_10 = *(undefined4 *)(puVar2 + 1);
  local_18 = (float)*puVar2;
  fStack_14 = (float)((ulong)*puVar2 >> 0x20);
  _local_18 = CONCAT44(fStack_14 - 135.0,local_18 - 85.0);
  if (param_2) {
    if (this[0x1a5] != (CrownFlowerPlantfoodProjectile)0x0) {
      pEVar3 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      std::string::string(asStack_28,"POPANIM_EFFECTS_CROWNFLOWER_AVATAR_PROJECTILE_HIT");
      GetPAMByName(asStack_28);
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
      Effect_PopAnim::CreatePopAnimRig(pEVar3,(PopAnim *)pRVar4,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      std::string::~string(asStack_28);
      nop();
      std::string::string((string *)aRStack_20,"idle2");
      Effect_PopAnim::PlaySingleAnimation(pEVar3,aRStack_20,0);
      std::string::~string((string *)aRStack_20);
      nop();
      iVar1 = (**(code **)(*(long *)param_1 + 0x170))(param_1);
      FUN_03b39d98(pEVar3 + 0x1c,iVar1 + 1);
      StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar3,(SexyVector3 *)&local_18,-1);
    }
  }
  else {
    pEVar3 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    __n = aRStack_20;
    std::string::string(asStack_28,"POPANIM_EFFECTS_CROWNFLOWER_PLANTFOOD_PROJECTILE_HIT");
    nop();
    if (this[0x1a5] != (CrownFlowerPlantfoodProjectile)0x0) {
      std::string::append(asStack_28,"POPANIM_EFFECTS_CROWNFLOWER_AVATAR_PROJECTILE_HIT",(size_t)__n
                         );
    }
    GetPAMByName(asStack_28);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
    Effect_PopAnim::CreatePopAnimRig(pEVar3,(PopAnim *)pRVar4,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    std::string::string((string *)aRStack_20,"idle");
    Effect_PopAnim::PlaySingleAnimation(pEVar3,aRStack_20,0);
    std::string::~string((string *)aRStack_20);
    nop();
    iVar1 = (**(code **)(*(long *)param_1 + 0x170))(param_1);
    FUN_03b39d98(pEVar3 + 0x1c,iVar1 + 1);
    StandaloneEffect::SetIsScreenSpaceEffect((StandaloneEffect *)pEVar3,false);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar3,(SexyVector3 *)&local_18,-1);
    std::string::~string(asStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrownFlowerPlantfoodProjectile::hitNormalZombie(Zombie*) */

void __thiscall
CrownFlowerPlantfoodProjectile::hitNormalZombie
          (CrownFlowerPlantfoodProjectile *this,Zombie *param_1)

{
  char cVar1;
  long extraout_x0;
  float *pfVar2;
  string *psVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float local_48;
  float local_44;
  FastCurve aFStack_40 [4];
  float local_3c;
  FastCurve aFStack_38 [8];
  float local_30 [2];
  undefined4 local_28 [2];
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::GetProps((Projectile *)this);
  nop();
  fVar4 = (float)RandRangeFloat(*(float *)(extraout_x0 + 0x1e0),*(float *)(extraout_x0 + 0x1e4));
  fVar4 = (float)Sexy::SexyMath::DegToRad(fVar4);
  fVar7 = *(float *)(extraout_x0 + 0x1e8);
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  fVar8 = *(float *)(extraout_x0 + 0x1ec);
  Sexy::FastCurve::SetOutRange(aFStack_40,*pfVar2,pfVar2[2]);
  fVar5 = cosf(fVar4);
  fVar4 = sinf(fVar4);
  Sexy::FastCurve::SetOutRange(aFStack_38,fVar5,fVar4);
  Sexy::FastCurve::SetOutRange((FastCurve *)local_30,850.0,0.0);
  EATextSquish::Vec3::Vec3((Vec3 *)local_28,local_30[0],pfVar2[1],local_3c);
  uVar6 = 0x3f800000;
  local_48 = 0.0;
  local_44 = 0.0;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,0.0,1.0);
  cVar1 = LineLineIntersect((SexyVector2 *)aFStack_40,(SexyVector2 *)aFStack_38,
                            (SexyVector2 *)local_30,(SexyVector2 *)&local_18,&local_48,&local_44,
                            0.0001);
  if (cVar1 != '\0') {
    local_18 = Sexy::SexyVector2::operator*((SexyVector2 *)aFStack_38,local_48);
    local_14 = uVar6;
    local_28[0] = Sexy::SexyVector2::operator+((SexyVector2 *)aFStack_40,(SexyVector2 *)&local_18);
    local_20 = uVar6;
  }
  Zombie::FlickOff((SexyVector3 *)param_1,fVar7,fVar8);
  psVar3 = (string *)Zombie::GetAttachedEffects(param_1);
  std::string::string((string *)&local_18,"crownflower_lightning_aura");
  cVar1 = GameObjectDictionary::Contains(psVar3);
  std::string::~string((string *)&local_18);
  nop();
  if (cVar1 == '\0') {
    EATextSquish::Vec3::Vec3((Vec3 *)&local_18,0.0,0.0,20.0);
    Zombie::AddAttachedEffect
              (param_1,"crownflower_lightning_aura",
               "POPANIM_EFFECTS_CROWNFLOWER_AVATAR_PROJECTILE_HIT","idle2",(SexyVector3 *)&local_18,
               1,false);
  }
  playHitEffect(this,(BoardEntity *)param_1,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CrownFlowerPlantfoodProjectile::CrownFlowerPlantfoodProjectile() */

void __thiscall
CrownFlowerPlantfoodProjectile::CrownFlowerPlantfoodProjectile(CrownFlowerPlantfoodProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  this[0x1a5] = (CrownFlowerPlantfoodProjectile)0x0;
  *(undefined ***)this = &PTR_GetClass_06730c70;
  *(undefined ***)(this + 0x10) = &PTR__CrownFlowerPlantfoodProjectile_06730e60;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1a8));
  *(undefined4 *)(this + 0x1c0) = 0;
  *(undefined4 *)(this + 0x1c4) = 0;
  *(undefined4 *)(this + 0x1c8) = 0;
  return;
}


/* CrownFlowerPlantfoodProjectile::StaticNew() */

CrownFlowerPlantfoodProjectile * CrownFlowerPlantfoodProjectile::StaticNew(void)

{
  CrownFlowerPlantfoodProjectile *this;
  
  this = ::operator_new(0x1d0);
  CrownFlowerPlantfoodProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrownFlowerPlantfoodProjectile::hitMechZombie(Zombie*) */

void __thiscall
CrownFlowerPlantfoodProjectile::hitMechZombie(CrownFlowerPlantfoodProjectile *this,Zombie *param_1)

{
  undefined8 local_68 [2];
  undefined1 auStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DamageInfo::DamageInfo((DamageInfo *)local_68);
  local_68[0] = Projectile::GetInstigator((Projectile *)this);
  operator|=(auStack_58,0x2000);
  (**(code **)(*(long *)param_1 + 0x120))(param_1,(DamageInfo *)local_68);
  playHitEffect(this,(BoardEntity *)param_1,false);
  DamageInfo::~DamageInfo((DamageInfo *)local_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CrownFlowerPlantfoodProjectile::~CrownFlowerPlantfoodProjectile() */

void __thiscall
CrownFlowerPlantfoodProjectile::~CrownFlowerPlantfoodProjectile
          (CrownFlowerPlantfoodProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06730c70;
  *(undefined ***)(this + 0x10) = &PTR__CrownFlowerPlantfoodProjectile_06730e60;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to CrownFlowerPlantfoodProjectile::~CrownFlowerPlantfoodProjectile() */

void __thiscall
CrownFlowerPlantfoodProjectile::~CrownFlowerPlantfoodProjectile
          (CrownFlowerPlantfoodProjectile *this)

{
  ~CrownFlowerPlantfoodProjectile(this + -0x10);
  return;
}


/* CrownFlowerPlantfoodProjectile::~CrownFlowerPlantfoodProjectile() */

void __thiscall
CrownFlowerPlantfoodProjectile::~CrownFlowerPlantfoodProjectile
          (CrownFlowerPlantfoodProjectile *this)

{
  ~CrownFlowerPlantfoodProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CrownFlowerPlantfoodProjectile::~CrownFlowerPlantfoodProjectile() */

void __thiscall
CrownFlowerPlantfoodProjectile::~CrownFlowerPlantfoodProjectile
          (CrownFlowerPlantfoodProjectile *this)

{
  ~CrownFlowerPlantfoodProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrownFlowerPlantfoodProjectile::ReleaseChainLightning() */

void __thiscall
CrownFlowerPlantfoodProjectile::ReleaseChainLightning(CrownFlowerPlantfoodProjectile *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  Zombie *this_01;
  undefined8 uVar5;
  undefined8 uVar6;
  Effect_PopAnim *this_02;
  ResourceInfo *pRVar7;
  SexyVector3 *this_03;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  undefined8 local_a8;
  undefined8 local_a0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_98 [8];
  undefined8 local_90;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  undefined8 local_68;
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  uVar10 = *(undefined4 *)(this + 0x1c);
  uVar8 = FUN_03b3a2c4(*(undefined4 *)(this + 0x18),uVar10,*(undefined4 *)(this + 0x20));
  local_68 = CONCAT44(uVar10,uVar8);
  EntityFinder::GetEntitiesTouchingCircle2D
            ((float)iVar3 * 1.1,avStack_80,2,(RtWeakPtr *)&local_68,0xffffffff,0xffffffff);
  local_a8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_a0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_a8,(__normal_iterator *)&local_a0), bVar1) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a8);
    this_01 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar4);
    if (((this_01 != (Zombie *)0x0) && (iVar3 = Zombie::GetSizeType(this_01), iVar3 == 0)) &&
       (cVar2 = RealObject::IsOnTeam(this_01,1), cVar2 == '\0')) {
      this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(this + 0x1a8);
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(this_00);
      uVar6 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(this_00);
      ToolPacketData::GetProps();
      local_90 = std::
                 find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Zombie>*,std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>>,Sexy::RtWeakPtr<GameObject>>
                           (uVar5,uVar6,aRStack_98);
      local_68 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_90,(__normal_iterator *)&local_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
      if (!bVar1) {
        this_02 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
        std::string::string((string *)&local_90,"POPANIM_EFFECTS_CROWNFLOWER_AVATAR_PROJECTILE_HIT")
        ;
        GetPAMByName((string *)&local_90);
        pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_68);
        Effect_PopAnim::CreatePopAnimRig(this_02,(PopAnim *)pRVar7,(RtClass *)0x0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
        std::string::~string((string *)&local_90);
        nop();
        this_03 = (SexyVector3 *)
                  std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 *)this_01);
        uVar11 = 0x41a00000;
        uVar10 = 0;
        EATextSquish::Vec3::Vec3((Vec3 *)&local_90,0.0,0.0,20.0);
        uVar8 = Sexy::SexyVector3::operator+(this_03,(SexyVector3 *)&local_90);
        local_68 = CONCAT44(uVar10,uVar8);
        local_60 = uVar11;
        uVar8 = SharkMinion::getRow((SharkMinion *)this_01);
        iVar3 = Board::MakeRenderOrder(0x64960,uVar8,0);
        StandaloneEffect::SetBoardSpaceOrigin
                  ((StandaloneEffect *)this_02,(SexyVector3 *)&local_68,iVar3);
        Effect_PopAnim::SetCentered(this_02,true);
        std::string::string((string *)&local_68,"idle2");
        Effect_PopAnim::PlaySingleAnimation(this_02,(RtWeakPtr *)&local_68,bVar1);
        std::string::~string((string *)&local_68);
        nop();
        fVar9 = *(float *)(this + 0x1c8);
        if (fVar9 == 0.0) {
          fVar9 = (float)FUN_03b39dcc(*(undefined4 *)(this + 0x170),*(undefined4 *)(this + 0x17c),
                                      *(undefined4 *)(this + 0x180),*(undefined4 *)(this + 0x184));
        }
        fVar12 = *(float *)(this + 0x1c0);
        uVar5 = Projectile::GetInstigator((Projectile *)this);
        Sexy::Point::Point((Point *)aRStack_98,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_90,1.0,0.0);
        DamageInfo::DamageInfo
                  ((DamageInfo *)(fVar9 * fVar12),(undefined4)local_90,local_90._4_4_,
                   (RtWeakPtr *)&local_68,0x2000000000000,uVar5,aRStack_98,0);
        (**(code **)(*(long *)this_01 + 0x110))(this_01,(RtWeakPtr *)&local_68);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_90,(RtWeakPtrBase *)aRStack_98);
        std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                  ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                   this_00,(RtWeakPtr *)&local_90);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_90);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
        DamageInfo::~DamageInfo((DamageInfo *)&local_68);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a8);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CrownFlowerPlantfoodProjectile::onUpdate(float) */

void CrownFlowerPlantfoodProjectile::onUpdate(float param_1)

{
  CrownFlowerPlantfoodProjectile *in_x0;
  
  if (in_x0[0x1a5] == (CrownFlowerPlantfoodProjectile)0x0) {
    return;
  }
  ReleaseChainLightning(in_x0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrownFlowerPlantfoodProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
CrownFlowerPlantfoodProjectile::OnCollideEntity
          (CrownFlowerPlantfoodProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  bool bVar2;
  Zombie *this_00;
  undefined8 local_70 [2];
  undefined1 auStack_60 [8];
  char local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((param_1 == (BoardEntity *)0x0) ||
      (this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), this_00 == (Zombie *)0x0)) ||
     (cVar1 = (**(code **)(*(long *)this_00 + 0x328))(), cVar1 != '\0')) {
    bVar2 = false;
    DamageInfo::DamageInfo((DamageInfo *)local_70);
    local_70[0] = Projectile::GetInstigator((Projectile *)this);
    operator|=(auStack_60,0x2000);
    (**(code **)(*(long *)param_1 + 0x120))(param_1,(DamageInfo *)local_70);
    DamageInfo::~DamageInfo((DamageInfo *)local_70);
  }
  else {
    if (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) {
      Board::IsDangerRoom(*(Board **)(gLawnApp + 0x9f0));
    }
    bVar2 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)this_00);
    if ((((!bVar2) && (bVar2 = Sexy::RtObject::IsA<ZombieMech>((RtObject *)this_00), !bVar2)) &&
        ((bVar2 = Sexy::RtObject::IsA<ZombieGargantuar>((RtObject *)this_00), !bVar2 &&
         ((bVar2 = Sexy::RtObject::IsA<Zomboss>((RtObject *)this_00), !bVar2 &&
          (bVar2 = Sexy::RtObject::IsA<ZombieAgileBronze>((RtObject *)this_00), !bVar2)))))) &&
       ((bVar2 = Sexy::RtObject::IsA<ZombieStrongBronze>((RtObject *)this_00), !bVar2 &&
        (((((bVar2 = Sexy::RtObject::IsA<ZombieMagicBronze>((RtObject *)this_00), !bVar2 &&
            (bVar2 = Sexy::RtObject::IsA<ZombieLionDance>((RtObject *)this_00), !bVar2)) &&
           (bVar2 = Sexy::RtObject::IsA<ZombieWealthGod>((RtObject *)this_00), !bVar2)) &&
          ((bVar2 = Sexy::RtObject::IsA<ZombieSkyCityTwinsPlane>((RtObject *)this_00), !bVar2 &&
           (bVar2 = Sexy::RtObject::IsA<ZombieInvisiblePlane>((RtObject *)this_00), !bVar2)))) &&
         ((cVar1 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar1 == '\0' &&
          (cVar1 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar1 == '\0')))))))) {
      Zombie::GetCurrentTitleStatus();
      if (((local_58 != '\0') || (cVar1 = Zombie::HasFogImmune(this_00), cVar1 != '\0')) ||
         (bVar2 = Sexy::RtObject::IsA<ZombieTowerDefendBasic>((RtObject *)this_00), bVar2)) {
        TitleStatus::~TitleStatus((TitleStatus *)local_70);
      }
      else {
        bVar2 = Sexy::RtObject::IsA<ZombieMirrorQueen>((RtObject *)this_00);
        TitleStatus::~TitleStatus((TitleStatus *)local_70);
        if (!bVar2) {
          hitNormalZombie(this,this_00);
          goto LAB_03b41bac;
        }
      }
    }
    bVar2 = true;
    (**(code **)(*(long *)this + 0x1b0))(this,param_1);
    playHitEffect(this,param_1,false);
    (**(code **)(*(long *)this + 0x48))(this);
  }
LAB_03b41bac:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* CrownFlowerPlantfoodProjectile::fillDamageInfo(DamageInfo&, BoardEntity*) */

void CrownFlowerPlantfoodProjectile::fillDamageInfo(DamageInfo *param_1,BoardEntity *param_2)

{
  float fVar1;
  float fVar2;
  
  Projectile::fillDamageInfo(param_1,param_2);
  fVar1 = (float)FUN_03b39dc0(*(undefined4 *)(param_1 + 0xd8));
  fVar2 = *(float *)(param_1 + 0x1c8);
  if (fVar2 == 0.0) {
    fVar2 = (float)FUN_03b39dcc(*(undefined4 *)(param_1 + 0x170),*(undefined4 *)(param_1 + 0x17c),
                                *(undefined4 *)(param_1 + 0x180),*(undefined4 *)(param_1 + 0x184));
  }
  *(float *)(param_2 + 8) = fVar2 * fVar1;
  return;
}

