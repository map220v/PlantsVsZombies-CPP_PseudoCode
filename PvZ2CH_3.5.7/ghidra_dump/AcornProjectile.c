// Class: AcornProjectile


/* AcornProjectile::onDeflection(BoardEntity*) */

void AcornProjectile::onDeflection(BoardEntity *param_1)

{
  param_1[0x1d4] = (BoardEntity)0x1;
  return;
}


/* AcornProjectile::SetBoundaryPosition(Sexy::SexyVector2 const&, Sexy::SexyVector2 const&) */

void __thiscall
AcornProjectile::SetBoundaryPosition
          (AcornProjectile *this,SexyVector2 *param_1,SexyVector2 *param_2)

{
  *(undefined8 *)(this + 0x1b8) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x1a8) = *(undefined8 *)param_2;
  return;
}


/* AcornProjectile::SetBaseVelocity(Sexy::SexyVector3 const&) */

void __thiscall AcornProjectile::SetBaseVelocity(AcornProjectile *this,SexyVector3 *param_1)

{
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x1c0),param_1);
  return;
}


/* AcornProjectile::SetSlowdown(float, float) */

void __thiscall AcornProjectile::SetSlowdown(AcornProjectile *this,float param_1,float param_2)

{
  *(float *)(this + 0x1cc) = param_1;
  *(float *)(this + 0x1d0) = param_2;
  return;
}


/* AcornProjectile::onInitialized() */

void __thiscall AcornProjectile::onInitialized(AcornProjectile *this)

{
  this[0x1a5] = (AcornProjectile)0x0;
  this[0x1d4] = (AcornProjectile)0x0;
  this[0x1d5] = (AcornProjectile)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AcornProjectile::StaticClassInit() */

void AcornProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"AcornProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_040c23b0,0x1f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AcornProjectile::StaticGetClass() */

long * AcornProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AcornProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AcornProjectile::GetClass() const */

long * AcornProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"AcornProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AcornProjectile::AcornProjectile() */

void __thiscall AcornProjectile::AcornProjectile(AcornProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067d7d40;
  *(undefined ***)(this + 0x10) = &PTR__AcornProjectile_067d7f30;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x1a8));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x1b0));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x1b8));
  DVec3::DVec3((DVec3 *)(this + 0x1c0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1d8));
  return;
}


/* AcornProjectile::StaticNew() */

AcornProjectile * AcornProjectile::StaticNew(void)

{
  AcornProjectile *this;
  
  this = ::operator_new(0x1f0);
  AcornProjectile(this);
  return this;
}


/* AcornProjectile::onDestroy() */

void __thiscall AcornProjectile::onDestroy(AcornProjectile *this)

{
  if (this[0x1d5] != (AcornProjectile)0x0) {
    return;
  }
  MessageRouter::Post<AcornProjectile*,AcornProjectile*>
            ((MessageRouter *)gMessageRouter,Message::AcornProjectileDestoryed,this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AcornProjectile::onUpdate(float) */

void AcornProjectile::onUpdate(float param_1)

{
  FPoint *pFVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float in_s2;
  float local_50;
  undefined4 local_4c;
  float local_48 [2];
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  float local_34;
  undefined4 local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_18;
  float local_14;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (in_x0[0x1d4] !=
      (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
       )0x0) goto LAB_040c1cd4;
  pFVar1 = (FPoint *)(in_x0 + 0x1b0);
  param_1 = (float)VectorNorm(pFVar1);
  if (param_1 == 0.0) {
    pfVar2 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(in_x0);
    fVar3 = pfVar2[1];
    Sexy::FastCurve::SetOutRange((FastCurve *)local_48,*pfVar2,fVar3);
    local_40 = Sexy::SexyVector2::operator-((SexyVector2 *)local_48,(SexyVector2 *)(in_x0 + 0x1b8));
    local_3c = fVar3;
    local_18 = Sexy::SexyVector3::Normalize((SexyVector3 *)(in_x0 + 0x1c0));
    local_14 = fVar3;
    local_10 = in_s2;
    local_28 = (float)Sexy::SexyVector3::operator*
                                ((SexyVector3 *)&local_18,*(float *)(in_x0 + 0x1cc));
    local_24 = fVar3;
    local_30 = Sexy::SexyVector2::operator-((SexyVector2 *)local_48,(SexyVector2 *)(in_x0 + 0x1a8));
    fVar4 = local_24;
    local_2c = fVar3;
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,local_28,local_24);
    local_38 = Sexy::SexyVector2::operator+((SexyVector2 *)&local_30,(SexyVector2 *)&local_18);
    local_34 = fVar4;
    fVar4 = (float)DVec2::getLength((DVec2 *)&local_38);
    fVar3 = (float)DVec2::dot((DVec2 *)&local_38,(DVec2 *)&local_40);
    if ((0.0 <= fVar3) || (fVar4 <= 1.0)) {
      *(undefined8 *)(in_x0 + 0x1b0) = *(undefined8 *)(in_x0 + 0x1a8);
    }
    param_1 = (float)VectorNorm(pFVar1);
  }
  if (param_1 <= 0.0) goto LAB_040c1cd4;
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(in_x0);
  fVar4 = pfVar2[1];
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_40,*pfVar2,fVar4);
  local_38 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_40,(SexyVector2 *)pFVar1);
  local_34 = fVar4;
  local_30 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_40,(SexyVector2 *)(in_x0 + 0x1b8));
  local_2c = fVar4;
  fVar4 = (float)DVec2::getLength((DVec2 *)&local_38);
  if (in_x0[0x1a5] ==
      (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
       )0x0) {
    fVar3 = (float)DVec2::dot((DVec2 *)&local_38,(DVec2 *)&local_30);
    if ((fVar3 < 0.0) && (fVar3 = 1.0, 1.0 < fVar4)) goto LAB_040c1c4c;
    in_x0[0x1a5] = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    )0x1;
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
              ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
               (in_x0 + 0x1d8));
    if (in_x0[0x1a5] !=
        (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
         )0x0) goto LAB_040c1c48;
    fVar5 = *(float *)(in_x0 + 0x1cc);
    fVar3 = 1.0;
    if (fVar4 <= fVar5) goto LAB_040c1c58;
LAB_040c1d48:
    fVar4 = 0.0;
    local_50 = 1.0;
  }
  else {
LAB_040c1c48:
    fVar3 = -1.0;
LAB_040c1c4c:
    fVar5 = *(float *)(in_x0 + 0x1cc);
    if (fVar5 < fVar4) goto LAB_040c1d48;
LAB_040c1c58:
    local_50 = fVar4 / fVar5;
    fVar4 = 1.0 - local_50;
  }
  local_28 = (float)Sexy::SexyVector3::operator*((SexyVector3 *)(in_x0 + 0x1c0),fVar3);
  fVar3 = 1.0;
  local_4c = 0x3f800000;
  local_24 = fVar5;
  local_48[0] = CurveLerp<float>(&local_4c,in_x0 + 0x1d0,1);
  pfVar2 = eastl::max_alt<float>(&local_50,local_48);
  local_18 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_28,*pfVar2);
  local_14 = fVar3;
  local_10 = fVar4;
  param_1 = (float)Projectile::SetVelocity((Projectile *)in_x0,(SexyVector3 *)&local_18);
LAB_040c1cd4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


/* AcornProjectile::~AcornProjectile() */

void __thiscall AcornProjectile::~AcornProjectile(AcornProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067d7d40;
  *(undefined ***)(this + 0x10) = &PTR__AcornProjectile_067d7f30;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1d8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to AcornProjectile::~AcornProjectile() */

void __thiscall AcornProjectile::~AcornProjectile(AcornProjectile *this)

{
  ~AcornProjectile(this + -0x10);
  return;
}


/* AcornProjectile::~AcornProjectile() */

void __thiscall AcornProjectile::~AcornProjectile(AcornProjectile *this)

{
  ~AcornProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to AcornProjectile::~AcornProjectile() */

void __thiscall AcornProjectile::~AcornProjectile(AcornProjectile *this)

{
  ~AcornProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AcornProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall AcornProjectile::OnCollideEntity(AcornProjectile *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  PlantGroup *this_01;
  Zombie *pZVar5;
  undefined8 uVar6;
  Plant *this_02;
  PlantAcorn *this_03;
  undefined8 uVar7;
  BoardEntity *pBVar8;
  RealObject *this_04;
  Effect_PopAnim *this_05;
  SexyVector3 *pSVar9;
  ResourceInfo *pRVar10;
  char *__s;
  size_t __n;
  code *pcVar11;
  float fVar12;
  RtWeakPtr<Sexy::SoundResource> aRStack_80 [8];
  Point aPStack_78 [8];
  undefined8 local_70;
  undefined8 local_68 [12];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (BoardEntity *)0x0) {
    this_01 = Sexy::RtObject::Cast<PlantGroup>((RtObject *)param_1);
    if (this_01 != (PlantGroup *)0x0) {
      cVar2 = '\0';
      if (this[0x1a5] != (AcornProjectile)0x0) {
        pBVar8 = (BoardEntity *)Projectile::GetInstigator((Projectile *)this);
        cVar2 = PlantGroup::HasPlant(this_01,pBVar8);
      }
      std::string::string((string *)local_68,"PlantAcorn");
      PlantGroup::GetPlantOfClass((RtWeakPtr *)&local_70,this_01,(string *)local_68);
      std::string::~string((string *)local_68);
      nop();
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_70);
      if (bVar1) {
        this_02 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
        cVar3 = Plant::IsConvertedByCondition(this_02);
        if ((cVar3 != '\0') || (this[0x1d4] == (AcornProjectile)0x0)) goto LAB_040c29b8;
      }
      else {
LAB_040c29b8:
        if (cVar2 == '\0') {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
          goto LAB_040c29c4;
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
      nop();
      PlantAcorn::OnProjectileReturned(this_03,this);
      this[0x1d5] = (AcornProjectile)0x1;
      (**(code **)(*(long *)this + 0x48))(this);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
      uVar6 = 1;
      goto LAB_040c29ec;
    }
LAB_040c29c4:
    pZVar5 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    if (pZVar5 != (Zombie *)0x0) {
      cVar2 = (**(code **)(*(long *)pZVar5 + 0x328))();
      uVar6 = 0;
      if (cVar2 != '\0') goto LAB_040c29ec;
    }
  }
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1d8);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_80,(RtWeakPtrBase *)local_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_70 = std::
             find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<BoardEntity>>
                       (uVar6,uVar7,aRStack_80);
  local_68[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_00);
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_70,(__normal_iterator *)local_68);
  if ((bVar1) && (bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_80), bVar1)) {
    this_04 = (RealObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
    std::string::string((string *)local_68,"Play_Plant_Bloomerange_Impact");
    RealObject::PlayPositionalSound(this_04,(string *)local_68,0.0);
    std::string::~string((string *)local_68);
    nop();
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
    push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              this_00,(RtWeakPtr *)aRStack_80);
    bVar1 = Sexy::RtObject::IsA<GridItemWalrusStatue>((RtObject *)param_1);
    if (bVar1) {
      pcVar11 = *(code **)(*(long *)param_1 + 0x120);
      uVar6 = Projectile::GetInstigator((Projectile *)this);
      Sexy::Point::Point(aPStack_78,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
      DamageInfo::DamageInfo
                ((DamageInfo *)0x0,(undefined4)local_70,local_70._4_4_,
                 (RtWeakPtr<Sexy::ResourceInfo> *)local_68,uVar6,aPStack_78,0);
      (*pcVar11)(param_1,(RtWeakPtr<Sexy::ResourceInfo> *)local_68);
      DamageInfo::~DamageInfo((DamageInfo *)local_68);
    }
    else {
      (**(code **)(*(long *)this + 0x1b0))(this,param_1);
    }
    (**(code **)(*(long *)this + 0x168))(this,param_1);
    this_05 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    pSVar9 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    iVar4 = (**(code **)(*(long *)this + 200))(this);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_05,pSVar9,iVar4 + -1);
    std::string::string((string *)&local_70,"POPANIM_EFFECTS_ACORN_PROJECTILE_HIT");
    GetPAMByName((string *)&local_70);
    pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_68);
    __n = 0;
    Effect_PopAnim::CreatePopAnimRig(this_05,(PopAnim *)pRVar10,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
    std::string::~string((string *)&local_70);
    nop();
    Effect_PopAnim::SetCentered(this_05,true);
    Set8BytesTo0((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
    if (this[0x1a5] == (AcornProjectile)0x0) {
      fVar12 = (float)Sexy::Rand(1.0);
      if (fVar12 < 0.5) {
        __s = "animation";
      }
      else {
        __s = "animation2";
      }
    }
    else {
      fVar12 = (float)Sexy::Rand(1.0);
      if (fVar12 < 0.5) {
        __s = "animation3";
      }
      else {
        __s = "animation4";
      }
    }
    std::string::append((string *)local_68,__s,__n);
    Effect_PopAnim::PlaySingleAnimation(this_05,(RtWeakPtr<Sexy::ResourceInfo> *)local_68,0);
    std::string::~string((string *)local_68);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
  uVar6 = 0;
LAB_040c29ec:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

