// Class: ParsnipUltraProjectile


/* ParsnipUltraProjectile::onInitialized() */

void __thiscall ParsnipUltraProjectile::onInitialized(ParsnipUltraProjectile *this)

{
  this[0x1a5] = (ParsnipUltraProjectile)0x0;
  this[0x1d4] = (ParsnipUltraProjectile)0x0;
  this[0x1d5] = (ParsnipUltraProjectile)0x0;
  this[0x1f0] = (ParsnipUltraProjectile)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ParsnipUltraProjectile::StaticClassInit() */

void ParsnipUltraProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"ParsnipUltraProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03bf16e8,0x1f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ParsnipUltraProjectile::StaticGetClass() */

long * ParsnipUltraProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ParsnipUltraProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ParsnipUltraProjectile::GetClass() const */

long * ParsnipUltraProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"ParsnipUltraProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ParsnipUltraProjectile::OnTurnAroundAnimDone(std::string const&) */

void ParsnipUltraProjectile::OnTurnAroundAnimDone(string *param_1)

{
  param_1[0x1f0] = (string)0x0;
  return;
}


/* ParsnipUltraProjectile::ParsnipUltraProjectile() */

void __thiscall ParsnipUltraProjectile::ParsnipUltraProjectile(ParsnipUltraProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06740280;
  *(undefined ***)(this + 0x10) = &PTR__ParsnipUltraProjectile_06740470;
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


/* ParsnipUltraProjectile::StaticNew() */

ParsnipUltraProjectile * ParsnipUltraProjectile::StaticNew(void)

{
  ParsnipUltraProjectile *this;
  
  this = ::operator_new(0x1f8);
  ParsnipUltraProjectile(this);
  return this;
}


/* ParsnipUltraProjectile::onDestroy() */

void __thiscall ParsnipUltraProjectile::onDestroy(ParsnipUltraProjectile *this)

{
  if (this[0x1d5] != (ParsnipUltraProjectile)0x0) {
    return;
  }
  MessageRouter::Post<ParsnipUltraProjectile*,ParsnipUltraProjectile*>
            ((MessageRouter *)gMessageRouter,Message::ParsnipProjectileDestoryed,this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ParsnipUltraProjectile::onUpdate(float) */

void ParsnipUltraProjectile::onUpdate(float param_1)

{
  FPoint *pFVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  float *pfVar2;
  PopAnimRig *pPVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float in_s2;
  float local_80;
  undefined4 local_7c;
  float local_78 [2];
  undefined4 local_70;
  float local_6c;
  undefined4 local_68;
  float local_64;
  undefined4 local_60;
  float local_5c;
  float local_58;
  float local_54;
  undefined4 local_48;
  float local_44;
  float local_40;
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (in_x0[0x1d4] !=
      (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
       )0x0) goto LAB_03bf12ec;
  pFVar1 = (FPoint *)(in_x0 + 0x1b0);
  param_1 = (float)VectorNorm(pFVar1);
  if (param_1 == 0.0) {
    pfVar2 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(in_x0);
    fVar4 = pfVar2[1];
    Sexy::FastCurve::SetOutRange((FastCurve *)local_78,*pfVar2,fVar4);
    local_70 = Sexy::SexyVector2::operator-((SexyVector2 *)local_78,(SexyVector2 *)(in_x0 + 0x1b8));
    local_6c = fVar4;
    local_48 = Sexy::SexyVector3::Normalize((SexyVector3 *)(in_x0 + 0x1c0));
    local_44 = fVar4;
    local_40 = in_s2;
    local_58 = (float)Sexy::SexyVector3::operator*
                                ((SexyVector3 *)&local_48,*(float *)(in_x0 + 0x1cc));
    local_54 = fVar4;
    local_60 = Sexy::SexyVector2::operator-((SexyVector2 *)local_78,(SexyVector2 *)(in_x0 + 0x1a8));
    fVar6 = local_54;
    local_5c = fVar4;
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_48,local_58,local_54);
    local_68 = Sexy::SexyVector2::operator+((SexyVector2 *)&local_60,(SexyVector2 *)&local_48);
    local_64 = fVar6;
    fVar6 = (float)DVec2::getLength((DVec2 *)&local_68);
    fVar4 = (float)DVec2::dot((DVec2 *)&local_68,(DVec2 *)&local_70);
    if ((0.0 <= fVar4) || (fVar6 <= 1.0)) {
      *(undefined8 *)(in_x0 + 0x1b0) = *(undefined8 *)(in_x0 + 0x1a8);
    }
    param_1 = (float)VectorNorm(pFVar1);
  }
  if (param_1 <= 0.0) goto LAB_03bf12ec;
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(in_x0);
  fVar6 = pfVar2[1];
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,*pfVar2,fVar6);
  local_68 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_70,(SexyVector2 *)pFVar1);
  local_64 = fVar6;
  local_60 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_70,(SexyVector2 *)(in_x0 + 0x1b8));
  local_5c = fVar6;
  fVar6 = (float)DVec2::getLength((DVec2 *)&local_68);
  if (in_x0[0x1a5] ==
      (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
       )0x0) {
    fVar4 = (float)DVec2::dot((DVec2 *)&local_68,(DVec2 *)&local_60);
    if ((0.0 <= fVar4) || (fVar5 = 1.0, fVar6 <= 1.0)) {
      in_x0[0x1a5] = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      )0x1;
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
                ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                  *)(in_x0 + 0x1d8));
      pPVar3 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x38));
      std::string::string((string *)&local_48,"attack2");
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      PopAnimRig::PlayAndContinue(pPVar3,(string *)&local_48,0,aDStack_38);
      std::string::~string((string *)&local_48);
      nop();
      if (in_x0[0x1a5] !=
          (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           )0x0) {
        fVar4 = *(float *)(in_x0 + 0x1cc);
        if (fVar6 <= fVar4) goto LAB_03bf14cc;
        local_80 = 1.0;
        goto LAB_03bf1334;
      }
      fVar4 = *(float *)(in_x0 + 0x1cc);
      if (fVar6 <= fVar4) goto LAB_03bf150c;
      fVar5 = 1.0;
      local_80 = 1.0;
    }
    else {
      fVar4 = *(float *)(in_x0 + 0x1cc);
      if (fVar6 <= fVar4) {
LAB_03bf150c:
        fVar5 = 1.0;
        local_80 = fVar6 / fVar4;
      }
      else {
        local_80 = 1.0;
      }
    }
  }
  else {
    fVar4 = *(float *)(in_x0 + 0x1cc);
    if (fVar6 <= fVar4) {
LAB_03bf14cc:
      local_80 = fVar6 / fVar4;
    }
    else {
      local_80 = 1.0;
    }
LAB_03bf1334:
    fVar5 = -1.0;
    if (in_x0[0x1f0] !=
        (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
         )0x0) {
      EATextSquish::Vec3::Vec3((Vec3 *)&local_48,0.0,0.0,0.0);
      param_1 = (float)Projectile::SetVelocity((Projectile *)in_x0,(SexyVector3 *)&local_48);
      goto LAB_03bf12ec;
    }
  }
  fVar6 = local_80;
  local_58 = (float)Sexy::SexyVector3::operator*((SexyVector3 *)(in_x0 + 0x1c0),fVar5);
  fVar5 = 1.0;
  fVar6 = 1.0 - fVar6;
  local_7c = 0x3f800000;
  local_54 = fVar4;
  local_78[0] = CurveLerp<float>(&local_7c,in_x0 + 0x1d0,1);
  pfVar2 = eastl::max_alt<float>(&local_80,local_78);
  local_48 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_58,*pfVar2);
  local_44 = fVar5;
  local_40 = fVar6;
  param_1 = (float)Projectile::SetVelocity((Projectile *)in_x0,(SexyVector3 *)&local_48);
LAB_03bf12ec:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


/* ParsnipUltraProjectile::~ParsnipUltraProjectile() */

void __thiscall ParsnipUltraProjectile::~ParsnipUltraProjectile(ParsnipUltraProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06740280;
  *(undefined ***)(this + 0x10) = &PTR__ParsnipUltraProjectile_06740470;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1d8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to ParsnipUltraProjectile::~ParsnipUltraProjectile() */

void __thiscall ParsnipUltraProjectile::~ParsnipUltraProjectile(ParsnipUltraProjectile *this)

{
  ~ParsnipUltraProjectile(this + -0x10);
  return;
}


/* ParsnipUltraProjectile::~ParsnipUltraProjectile() */

void __thiscall ParsnipUltraProjectile::~ParsnipUltraProjectile(ParsnipUltraProjectile *this)

{
  ~ParsnipUltraProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ParsnipUltraProjectile::~ParsnipUltraProjectile() */

void __thiscall ParsnipUltraProjectile::~ParsnipUltraProjectile(ParsnipUltraProjectile *this)

{
  ~ParsnipUltraProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ParsnipUltraProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
ParsnipUltraProjectile::OnCollideEntity(ParsnipUltraProjectile *this,BoardEntity *param_1)

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
  undefined8 uVar7;
  Plant *this_02;
  PlantParsnip *this_03;
  BoardEntity *pBVar8;
  RealObject *this_04;
  Effect_PopAnim *this_05;
  SexyVector3 *pSVar9;
  ResourceInfo *pRVar10;
  code *pcVar11;
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
      if (this[0x1a5] != (ParsnipUltraProjectile)0x0) {
        pBVar8 = (BoardEntity *)Projectile::GetInstigator((Projectile *)this);
        cVar2 = PlantGroup::HasPlant(this_01,pBVar8);
      }
      std::string::string((string *)local_68,"PlantParsnip");
      PlantGroup::GetPlantOfClass((RtWeakPtr *)&local_70,this_01,(string *)local_68);
      std::string::~string((string *)local_68);
      nop();
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_70);
      if (bVar1) {
        this_02 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
        cVar3 = Plant::IsConvertedByCondition(this_02);
        if ((cVar3 != '\0') || (this[0x1d4] == (ParsnipUltraProjectile)0x0)) goto LAB_03bf1cf0;
      }
      else {
LAB_03bf1cf0:
        if (cVar2 == '\0') {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
          goto LAB_03bf1cfc;
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
      nop();
      PlantParsnip::OnProjectileReturned(this_03,this);
      this[0x1d5] = (ParsnipUltraProjectile)0x1;
      (**(code **)(*(long *)this + 0x48))(this);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
      uVar6 = 1;
      goto LAB_03bf1e04;
    }
LAB_03bf1cfc:
    pZVar5 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    if (pZVar5 != (Zombie *)0x0) {
      cVar2 = (**(code **)(*(long *)pZVar5 + 0x328))();
      uVar6 = 0;
      if (cVar2 != '\0') goto LAB_03bf1e04;
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
    if ((param_1 == (BoardEntity *)0x0) ||
       (bVar1 = Sexy::RtObject::IsA<GridItemWalrusStatue>((RtObject *)param_1), !bVar1)) {
      (**(code **)(*(long *)this + 0x1b0))(this,param_1);
    }
    else {
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
    (**(code **)(*(long *)this + 0x168))(this,param_1);
    this_05 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    pSVar9 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    iVar4 = (**(code **)(*(long *)this + 200))(this);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_05,pSVar9,iVar4 + -1);
    std::string::string((string *)&local_70,"POPANIM_EFFECTS_PARSNIP_PROJECTILE");
    GetPAMByName((string *)&local_70);
    pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_68);
    Effect_PopAnim::CreatePopAnimRig(this_05,(PopAnim *)pRVar10,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
    std::string::~string((string *)&local_70);
    nop();
    Effect_PopAnim::SetCentered(this_05,true);
    std::string::string((string *)local_68,"bomb");
    Effect_PopAnim::PlaySingleAnimation(this_05,(RtWeakPtr<Sexy::ResourceInfo> *)local_68,0);
    std::string::~string((string *)local_68);
    nop();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
  uVar6 = 0;
LAB_03bf1e04:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

