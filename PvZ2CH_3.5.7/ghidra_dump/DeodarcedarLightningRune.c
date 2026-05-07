// Class: DeodarcedarLightningRune


/* DeodarcedarLightningRune::setLightningArcAnimationToPlay(std::string) */

void DeodarcedarLightningRune::setLightningArcAnimationToPlay(long param_1)

{
  thunk_FUN_05475e00(param_1 + 0x228);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DeodarcedarLightningRune::StaticClassInit() */

void DeodarcedarLightningRune::StaticClassInit(void)

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
    std::string::string(asStack_10,"DeodarcedarLightningRune");
    (*pcVar2)(plVar1,asStack_10,FUN_03642430,0x250,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DeodarcedarLightningRune::StaticGetClass() */

long * DeodarcedarLightningRune::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DeodarcedarLightningRune",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DeodarcedarLightningRune::GetClass() const */

long * DeodarcedarLightningRune::GetClass(void)

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
  (*pcVar3)(plVar1,"DeodarcedarLightningRune",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DeodarcedarLightningRune::setProjectileIdleAnimationToPlay(std::string) */

void __thiscall
DeodarcedarLightningRune::setProjectileIdleAnimationToPlay
          (DeodarcedarLightningRune *this,undefined8 param_2)

{
  PopAnimRig *pPVar1;
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar1,param_2,0,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DeodarcedarLightningRune::onProjectileInitialized() */

void __thiscall DeodarcedarLightningRune::onProjectileInitialized(DeodarcedarLightningRune *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x1f0) = fVar1 + *(float *)(this + 0x1c8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DeodarcedarLightningRune::updateAlive() */

void __thiscall DeodarcedarLightningRune::updateAlive(DeodarcedarLightningRune *this)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  DVec3 aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar3 = (float)PVZ_T();
  if (*(float *)(this + 0x1ec) < fVar3) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  if (*(int *)(this + 0x1b4) <= *(int *)(this + 0x1b8)) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  iVar1 = BoardTransforms::GridToBoardSpaceXUnbounded
                    (*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) + -1);
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  if ((float)iVar1 < *pfVar2) {
    DVec3::DVec3(aDStack_18);
    Projectile::SetVelocity((Projectile *)this,(SexyVector3 *)aDStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DeodarcedarLightningRune::DeodarcedarLightningRune() */

void __thiscall DeodarcedarLightningRune::DeodarcedarLightningRune(DeodarcedarLightningRune *this)

{
  undefined4 uVar1;
  
  Projectile::Projectile((Projectile *)this);
  *(undefined4 *)(this + 0x1a8) = 1;
  *(undefined ***)this = &PTR_GetClass_0666ecd0;
  *(undefined4 *)(this + 0x1b0) = 1;
  *(undefined ***)(this + 0x10) = &PTR__DeodarcedarLightningRune_0666eec0;
  *(undefined4 *)(this + 0x1b8) = 0;
  *(undefined4 *)(this + 0x1b4) = 5;
  *(undefined4 *)(this + 0x1e8) = 0;
  *(undefined4 *)(this + 0x1ac) = 0x3f800000;
  *(undefined4 *)(this + 0x1c0) = 0x3f800000;
  *(undefined4 *)(this + 0x1c4) = 0x3f800000;
  *(undefined4 *)(this + 0x1c8) = 0x3f800000;
  *(undefined4 *)(this + 0x1d0) = 0x3f800000;
  *(undefined4 *)(this + 0x1bc) = 0;
  *(undefined4 *)(this + 0x1cc) = 0;
  *(undefined4 *)(this + 0x1d4) = 0;
  *(undefined4 *)(this + 0x1d8) = 0;
  *(undefined4 *)(this + 0x1dc) = 0;
  *(undefined4 *)(this + 0x1e0) = 0;
  *(undefined4 *)(this + 0x1e4) = 0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1ec) = uVar1;
  *(undefined4 *)(this + 0x1f0) = uVar1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1f8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x210));
  Set8BytesTo0(this + 0x228);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x230));
  *(undefined4 *)(this + 0x248) = 0;
  return;
}


/* DeodarcedarLightningRune::StaticNew() */

DeodarcedarLightningRune * DeodarcedarLightningRune::StaticNew(void)

{
  DeodarcedarLightningRune *this;
  
  this = ::operator_new(0x250);
  DeodarcedarLightningRune(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DeodarcedarLightningRune::generateArc(BoardEntity*) */

void __thiscall
DeodarcedarLightningRune::generateArc(DeodarcedarLightningRune *this,BoardEntity *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  float *pfVar4;
  Board *this_00;
  Effect_PopAnim *this_01;
  PopAnim *pPVar5;
  undefined8 *puVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_90;
  undefined8 local_88;
  string asStack_80 [24];
  ResourceInfo *local_68;
  undefined4 local_60;
  undefined8 local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (BoardEntity *)0x0) && (*(float *)(this + 0x1e0) != 0.0)) {
    pfVar4 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)param_1);
    fVar11 = *pfVar4;
    fVar10 = pfVar4[1];
    this_00 = *(Board **)(gLawnApp + 0x9f0);
    fVar9 = (float)(int)fVar11;
    if (this_00[0x119] == (Board)0x0) {
      fVar8 = 0.0;
    }
    else {
      fVar8 = (float)Board::calculateRoofOffsetZ(fVar9);
      this_00 = *(Board **)(gLawnApp + 0x9f0);
      fVar8 = (float)(int)fVar8;
    }
    this_01 = Board::AddEffect<Effect_PopAnim>(this_00);
    std::string::string(asStack_80,"POPANIM_EFFECTS_DEODARCEDAR_EFFECT_AVATAR_RUNE");
    GetPAMByName(asStack_80);
    pPVar5 = (PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    Effect_PopAnim::CreatePopAnimRig(this_01,pPVar5,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    std::string::~string(asStack_80);
    nop();
    EATextSquish::Vec3::Vec3((Vec3 *)&local_68,fVar9,(float)(int)fVar10,fVar8);
    StandaloneEffect::SetBoardSpaceOrigin
              ((StandaloneEffect *)this_01,(SexyVector3 *)&local_68,0x61cd8);
    Effect_PopAnim::SetCentered(this_01,true);
    Effect_PopAnim::PlaySingleAnimation(this_01,this + 0x228,0);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_80);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_68,fVar11,fVar10);
    iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
    EntityFinder::GetEntitiesWithinCircle2D
              (*(float *)(this + 0x1e0) * 0.5 * (float)iVar3,asStack_80,2,
               (RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    local_90 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)asStack_80);
    local_88 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)asStack_80);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_90,(__normal_iterator *)&local_88), bVar2)
    {
      puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90)
      ;
      plVar7 = (long *)*puVar6;
      cVar1 = RealObject::IsOnTeam(plVar7,1);
      if (cVar1 != '\0') break;
      DamageInfo::DamageInfo((DamageInfo *)&local_68);
      local_60 = *(undefined4 *)(this + 0x1dc);
      local_68 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x68));
      local_58 = 0x80;
      (**(code **)(*plVar7 + 0x110))(plVar7,(RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
      DamageInfo::~DamageInfo((DamageInfo *)&local_68);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_90);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)asStack_80);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DeodarcedarLightningRune::~DeodarcedarLightningRune() */

void __thiscall DeodarcedarLightningRune::~DeodarcedarLightningRune(DeodarcedarLightningRune *this)

{
  *(undefined ***)this = &PTR_GetClass_0666ecd0;
  *(undefined ***)(this + 0x10) = &PTR__DeodarcedarLightningRune_0666eec0;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x230));
  std::string::~string((string *)(this + 0x228));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x210));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x1f8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to DeodarcedarLightningRune::~DeodarcedarLightningRune() */

void __thiscall DeodarcedarLightningRune::~DeodarcedarLightningRune(DeodarcedarLightningRune *this)

{
  ~DeodarcedarLightningRune(this + -0x10);
  return;
}


/* DeodarcedarLightningRune::~DeodarcedarLightningRune() */

void __thiscall DeodarcedarLightningRune::~DeodarcedarLightningRune(DeodarcedarLightningRune *this)

{
  ~DeodarcedarLightningRune(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DeodarcedarLightningRune::~DeodarcedarLightningRune() */

void __thiscall DeodarcedarLightningRune::~DeodarcedarLightningRune(DeodarcedarLightningRune *this)

{
  ~DeodarcedarLightningRune(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DeodarcedarLightningRune::findTargetsAndAttack() */

void __thiscall DeodarcedarLightningRune::findTargetsAndAttack(DeodarcedarLightningRune *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  GridItem *pGVar5;
  undefined8 *puVar6;
  Zombie *this_00;
  RtObject *this_01;
  undefined4 uVar7;
  float fVar8;
  undefined8 local_40;
  undefined8 local_38;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x230));
  fVar8 = *(float *)(this + 0x1ac);
  iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
  uVar4 = operator|(2,4);
  uVar7 = *(undefined4 *)(this + 0x1c);
  local_28 = FUN_0363cd94(*(undefined4 *)(this + 0x18),uVar7,*(undefined4 *)(this + 0x20));
  local_24 = uVar7;
  EntityFinder::GetEntitiesWithinCircle2D
            (fVar8 * 0.5 * (float)iVar3,avStack_20,uVar4,(RtWeakPtr<Sexy::SoundResource> *)&local_28
            );
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    this_01 = (RtObject *)*puVar6;
    this_00 = Sexy::RtObject::Cast<Zombie>(this_01);
    if (((((((this_00 != (Zombie *)0x0) &&
            (cVar2 = (**(code **)(*(long *)this_00 + 0x328))(), cVar2 == '\0')) &&
           (cVar2 = Zombie::IsInvisible(this_00), cVar2 == '\0')) &&
          ((cVar2 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar2 == '\0' &&
           (cVar2 = RealObject::IsOnTeam(this_00,2), cVar2 != '\0')))) &&
         ((cVar2 = Zombie::IsTargetable(this_00), cVar2 != '\0' &&
          ((cVar2 = Zombie::IsIgnoringAllDamage(this_00), cVar2 == '\0' &&
           (cVar2 = Zombie::IsControlled(this_00), cVar2 == '\0')))))) &&
        (cVar2 = Zombie::HasFogImmune(this_00), cVar2 == '\0')) ||
       ((pGVar5 = Sexy::RtObject::Cast<GridItem>(this_01), pGVar5 != (GridItem *)0x0 &&
        (cVar2 = (**(code **)(*(long *)pGVar5 + 0x200))(), cVar2 != '\0')))) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_28,(RtWeakPtrBase *)aRStack_30);
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )(this + 0x230),(RtWeakPtr *)&local_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* DeodarcedarLightningRune::setLightningAttackEffectAnimationToPlay(std::vector<std::string,
   std::allocator<std::string > >, std::vector<std::string, std::allocator<std::string > >) */

void __thiscall
DeodarcedarLightningRune::setLightningAttackEffectAnimationToPlay
          (DeodarcedarLightningRune *this,vector *param_2,vector *param_3)

{
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x1f8),param_2);
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x210),param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DeodarcedarLightningRune::attackTarget(BoardEntity*, int, int) */

void __thiscall
DeodarcedarLightningRune::attackTarget
          (DeodarcedarLightningRune *this,BoardEntity *param_1,int param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  BoardEntity *local_b8;
  string asStack_b0 [8];
  string asStack_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  ResourceInfo *local_68;
  float local_60;
  undefined8 local_58;
  long local_8;
  
  uVar11 = (ulong)param_2;
  local_8 = ___stack_chk_guard;
  local_b8 = param_1;
  puVar7 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_1);
  local_90 = *puVar7;
  local_88 = *(undefined4 *)(puVar7 + 1);
  fVar13 = (float)Sexy::Rand(1.0);
  fVar15 = *(float *)(this + 0x1cc);
  std::string::string(asStack_b0,"POPANIM_EFFECTS_DEODARCEDAR_EFFECT_RUNE");
  nop();
  uVar12 = *(undefined8 *)(this + 0x1f8);
  uVar8 = FUN_0363cb48(uVar12,*(undefined8 *)(this + 0x200));
  if (uVar8 <= uVar11) {
    param_2 = (int)uVar8 + -1;
    uVar11 = (ulong)param_2;
  }
  uVar12 = FUN_0363cb54(uVar12,uVar11);
  FUN_05475d88(asStack_a8,uVar12);
  fVar14 = *(float *)(this + 0x1e4);
  if (fVar14 <= 0.0) {
    fVar14 = (float)FUN_0363ca4c(*(undefined4 *)(this + 0x170),*(undefined4 *)(this + 0x17c),
                                 *(undefined4 *)(this + 0x180),*(undefined4 *)(this + 0x184));
    fVar14 = *(float *)(this + 0x1c0) * *(float *)(this + 0x1bc) * *(float *)(this + 0x1c4) * fVar14
    ;
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80,&local_b8);
  if (fVar13 < fVar15) {
    uVar12 = FUN_0363cb54(*(undefined8 *)(this + 0x210),uVar11);
    thunk_FUN_05475e00(asStack_a8,uVar12);
    fVar14 = fVar14 * *(float *)(this + 0x1d0);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::clear
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
    uVar3 = operator|(4,2);
    uVar5 = BoardEntity::CalcColumnPosition(local_b8);
    uVar6 = SharkMinion::getRow((SharkMinion *)local_b8);
    EntityFinder::GetEntitiesAtGridSquare(avStack_80,uVar3,uVar5,uVar6);
  }
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  GetPAMByName(asStack_b0);
  pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_68);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar9,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
  Effect_PopAnim::SetCentered(this_00,true);
  uVar3 = SharkMinion::getRow((SharkMinion *)local_b8);
  iVar4 = Board::MakeRenderOrder(0x65130,uVar3,0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)&local_90,iVar4);
  Effect_PopAnim::PlaySingleAnimation(this_00,asStack_a8,0);
  DamageInfo::DamageInfo((DamageInfo *)&local_68);
  local_60 = fVar14 * (float)param_3;
  local_68 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x68));
                    /* WARNING: Load size is inaccurate */
  local_58 = 0x80;
  DamageInfo::AddCondition(*(DamageInfo **)(this + 0x1d8),(RtWeakPtr *)&local_68,0x18);
  local_a0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_98 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98), bVar2) {
    plVar10 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
    if (*plVar10 != 0) {
      cVar1 = RealObject::IsOnTeam(*plVar10,1);
      if (cVar1 != '\0') break;
      (**(code **)(*(long *)local_b8 + 0x110))(local_b8,(RtWeakPtr *)&local_68);
      generateArc(this,local_b8);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
  }
  *(int *)(this + 0x1b8) = param_2 + *(int *)(this + 0x1b8) + 1;
  DamageInfo::~DamageInfo((DamageInfo *)&local_68);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  std::string::~string(asStack_a8);
  std::string::~string(asStack_b0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DeodarcedarLightningRune::doAWaveOfAttack() */

void __thiscall DeodarcedarLightningRune::doAWaveOfAttack(DeodarcedarLightningRune *this)

{
  vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *this_00;
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  RtWeakPtr *pRVar6;
  ResourceInfo *pRVar7;
  RtMixedPtrBase *this_01;
  int iVar8;
  long lVar9;
  
  this_00 = (vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
            (this + 0x230);
  cVar1 = std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
          empty(this_00);
  if (cVar1 == '\0') {
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)this_00);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)this_00);
    std::
    random_shuffle<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<GridItemVase>*,std::vector<Sexy::RtWeakPtr<GridItemVase>,std::allocator<Sexy::RtWeakPtr<GridItemVase>>>>>
              (uVar3,uVar4);
    Sexy::Rand(1.0);
    uVar3 = *(undefined8 *)(this + 0x230);
    iVar8 = *(int *)(this + 0x1b0);
    uVar5 = FUN_0363cb18(uVar3,*(undefined8 *)(this + 0x238));
    if (uVar5 < (ulong)(long)iVar8) {
      iVar2 = (int)uVar5;
      if (0 < iVar2) {
        lVar9 = 0;
        while( true ) {
          if (lVar9 == 0) {
            pRVar6 = (RtWeakPtr *)FUN_0363cb40(uVar3,0);
            pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar6);
            attackTarget(this,(BoardEntity *)pRVar7,iVar8 - iVar2,(iVar8 - iVar2) + 1);
          }
          else {
            pRVar6 = (RtWeakPtr *)FUN_0363cb40(uVar3,lVar9);
            pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar6);
            attackTarget(this,(BoardEntity *)pRVar7,0,1);
          }
          lVar9 = lVar9 + 1;
          if (iVar2 <= (int)lVar9) break;
          uVar3 = *(undefined8 *)(this + 0x230);
        }
      }
    }
    else if (0 < iVar8) {
      lVar9 = 0;
      while( true ) {
        this_01 = (RtMixedPtrBase *)FUN_0363cb40(uVar3,lVar9);
        cVar1 = Sexy::RtMixedPtrBase::IsValid(this_01);
        if (cVar1 != '\0') {
          pRVar6 = (RtWeakPtr *)FUN_0363cb40(*(undefined8 *)(this + 0x230),lVar9);
          pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar6);
          attackTarget(this,(BoardEntity *)pRVar7,0,1);
        }
        iVar8 = (int)lVar9;
        lVar9 = lVar9 + 1;
        if (*(int *)(this + 0x1b0) <= iVar8 + 1) break;
        uVar3 = *(undefined8 *)(this + 0x230);
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DeodarcedarLightningRune::updateRune() */

void __thiscall DeodarcedarLightningRune::updateRune(DeodarcedarLightningRune *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  RtMixedPtrBase *this_01;
  float fVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x230);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    while( true ) {
      if (!bVar1) {
        fVar3 = (float)PVZ_T();
        if (*(float *)(this + 0x1f0) < fVar3) {
          fVar3 = (float)PVZ_T();
          *(float *)(this + 0x1f0) = fVar3 + *(float *)(this + 0x1c8);
          doAWaveOfAttack(this);
        }
        if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      this_01 = (RtMixedPtrBase *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      cVar2 = Sexy::RtMixedPtrBase::IsValid(this_01);
      if (cVar2 != '\0') break;
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      local_18 = std::
                 vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
                 erase((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                        *)this_00,local_10);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    }
    FUN_0363efdc((__normal_iterator *)&local_18);
  } while( true );
}


/* DeodarcedarLightningRune::onUpdate(float) */

void DeodarcedarLightningRune::onUpdate(float param_1)

{
  DeodarcedarLightningRune *in_x0;
  
  updateAlive(in_x0);
  updateRune(in_x0);
  findTargetsAndAttack(in_x0);
  return;
}

