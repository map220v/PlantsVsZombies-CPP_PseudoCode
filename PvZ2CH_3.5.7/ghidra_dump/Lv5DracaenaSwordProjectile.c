// Class: Lv5DracaenaSwordProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lv5DracaenaSwordProjectile::StaticClassInit() */

void Lv5DracaenaSwordProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"Lv5DracaenaSwordProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04e3ca84,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Lv5DracaenaSwordProjectile::StaticGetClass() */

long * Lv5DracaenaSwordProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Lv5DracaenaSwordProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Lv5DracaenaSwordProjectile::GetClass() const */

long * Lv5DracaenaSwordProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"Lv5DracaenaSwordProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Lv5DracaenaSwordProjectile::InitBackPos() */

void __thiscall Lv5DracaenaSwordProjectile::InitBackPos(Lv5DracaenaSwordProjectile *this)

{
  SexyVector3 *pSVar1;
  
  pSVar1 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x1a8),pSVar1);
  return;
}


/* Lv5DracaenaSwordProjectile::Lv5DracaenaSwordProjectile() */

void __thiscall
Lv5DracaenaSwordProjectile::Lv5DracaenaSwordProjectile(Lv5DracaenaSwordProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_069dd340;
  *(undefined ***)(this + 0x10) = &PTR__Lv5DracaenaSwordProjectile_069dd530;
  DVec3::DVec3((DVec3 *)(this + 0x1a8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b8));
  return;
}


/* Lv5DracaenaSwordProjectile::StaticNew() */

Lv5DracaenaSwordProjectile * Lv5DracaenaSwordProjectile::StaticNew(void)

{
  Lv5DracaenaSwordProjectile *this;
  
  this = ::operator_new(0x1d0);
  Lv5DracaenaSwordProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lv5DracaenaSwordProjectile::onDestroy() */

void __thiscall Lv5DracaenaSwordProjectile::onDestroy(Lv5DracaenaSwordProjectile *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  RtObject *pRVar4;
  Lv5SwordProps *pLVar5;
  ActionSubSystem *pAVar6;
  RtWeakPtrBase *pRVar7;
  float *pfVar8;
  undefined8 uVar9;
  Projectile *pPVar10;
  int iVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_b0 [8];
  undefined8 local_a8;
  undefined8 local_a0;
  float local_98;
  float fStack_94;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_90 [8];
  RtMixedPtr aRStack_88 [8];
  RtId aRStack_80 [8];
  string asStack_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x68));
  if (cVar1 != '\0') {
    pRVar4 = (RtObject *)Projectile::GetProps((Projectile *)this);
    pLVar5 = Sexy::RtObject::Cast<Lv5SwordProps>(pRVar4);
    if (pLVar5 != (Lv5SwordProps *)0x0) {
      iVar11 = 0;
      local_a8 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(pLVar5 + 0x1e0));
      local_a0 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(pLVar5 + 0x1e0));
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_a8,(__normal_iterator *)&local_a0),
            bVar2) {
        pRVar7 = (RtWeakPtrBase *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a8);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_b0,pRVar7);
        uVar12 = *(undefined8 *)(gLawnApp + 0x9f0);
        iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
        pfVar8 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)this);
        fVar13 = pfVar8[1];
        fVar14 = pfVar8[2];
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_68,(RtWeakPtrBase *)aRStack_b0);
        uVar9 = Projectile::GetInstigator((Projectile *)this);
        pRVar4 = (RtObject *)
                 Board::AddProjectile
                           ((Board *)(float)(iVar3 / 2 + 800),fVar13,fVar14,uVar12,
                            (RtWeakPtr<Sexy::SoundResource> *)&local_68,uVar9,0);
        pPVar10 = Sexy::RtObject::Cast<Projectile>(pRVar4);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
        RealObject::JoinTeam((RealObject *)pPVar10,1);
        _ccBezierConfig::_ccBezierConfig((_ccBezierConfig *)&local_68);
        Sexy::FastCurve::SetOutRange
                  ((FastCurve *)&local_70,*(float *)(this + 0x1a8),*(float *)(this + 0x1ac));
        local_68 = local_70;
        ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                  ((ResistenceValueInfo *)&local_98);
        if (iVar11 == 1) {
          iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
          fStack_94 = (float)iVar3 * 1.5;
        }
        else {
          iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
          fStack_94 = -((float)iVar3 * 1.5);
        }
        fStack_94 = fStack_94 + *(float *)(this + 0x1ac);
        local_98 = (*pfVar8 + *(float *)(this + 0x1a8)) * 0.5;
        iVar11 = iVar11 + 1;
        local_60 = CONCAT44(fStack_94,local_98);
        local_58 = local_60;
        pAVar6 = Board::GetGameSubSystem<ActionSubSystem>(*(Board **)(gLawnApp + 0x9f0));
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_70,(RtWeakPtrBase *)aRStack_90);
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_88);
        std::string::string(asStack_78,"onFlyBackDone");
        RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)aRStack_50,aRStack_80,
                   asStack_78);
        ActionSubSystem::AddActionBezierTo
                  ((ActionSubSystem *)0x3f99999a,pAVar6,(RtWeakPtr<Sexy::SoundResource> *)&local_70,
                   (RtWeakPtr<Sexy::SoundResource> *)&local_68,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string(asStack_78);
        nop();
        Sexy::RtId::~RtId(aRStack_80);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_90);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_b0);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a8);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Lv5DracaenaSwordProjectile::~Lv5DracaenaSwordProjectile() */

void __thiscall
Lv5DracaenaSwordProjectile::~Lv5DracaenaSwordProjectile(Lv5DracaenaSwordProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_069dd340;
  *(undefined ***)(this + 0x10) = &PTR__Lv5DracaenaSwordProjectile_069dd530;
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)(this + 0x1b8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to Lv5DracaenaSwordProjectile::~Lv5DracaenaSwordProjectile() */

void __thiscall
Lv5DracaenaSwordProjectile::~Lv5DracaenaSwordProjectile(Lv5DracaenaSwordProjectile *this)

{
  ~Lv5DracaenaSwordProjectile(this + -0x10);
  return;
}


/* Lv5DracaenaSwordProjectile::~Lv5DracaenaSwordProjectile() */

void __thiscall
Lv5DracaenaSwordProjectile::~Lv5DracaenaSwordProjectile(Lv5DracaenaSwordProjectile *this)

{
  ~Lv5DracaenaSwordProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to Lv5DracaenaSwordProjectile::~Lv5DracaenaSwordProjectile() */

void __thiscall
Lv5DracaenaSwordProjectile::~Lv5DracaenaSwordProjectile(Lv5DracaenaSwordProjectile *this)

{
  ~Lv5DracaenaSwordProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lv5DracaenaSwordProjectile::damageEntity(BoardEntity*) */

void __thiscall
Lv5DracaenaSwordProjectile::damageEntity(Lv5DracaenaSwordProjectile *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  BoardEntity *pBVar1;
  bool bVar2;
  char cVar3;
  Zombie *this_01;
  undefined8 uVar4;
  undefined8 uVar5;
  RtObject *this_02;
  Lv5SwordProps *pLVar6;
  Effect_PopAnim *this_03;
  ResourceInfo *pRVar7;
  SexyVector3 *pSVar8;
  code *pcVar9;
  float fVar10;
  DamageInfo *pDVar11;
  BoardEntity *local_88;
  undefined8 local_80;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68 [12];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_88 = param_1;
  if (param_1 == (BoardEntity *)0x0) {
    this_01 = (Zombie *)0x0;
  }
  else {
    this_01 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
  }
  if (this[0x48] != (Lv5DracaenaSwordProjectile)0x0) {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x1b8);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_00);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this_00);
    local_80 = std::
               find<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,BoardEntity*>
                         (uVar4,uVar5,&local_88);
    local_68[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(this_00);
    bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_80,(__normal_iterator *)local_68);
    if (bVar2) {
      if ((((this_01 == (Zombie *)0x0) ||
           (fVar10 = (float)Zombie::getLeftHitPer(this_01,true), 0.5 <= fVar10)) ||
          (cVar3 = Zombie::IsBoss(this_01), cVar3 != '\0')) ||
         (((cVar3 = (**(code **)(*(long *)this_01 + 0x4d8))(this_01), cVar3 != '\0' ||
           (cVar3 = (**(code **)(*(long *)this_01 + 0x508))(this_01), cVar3 != '\0')) ||
          (cVar3 = Zombie::CanTakeFatalDamage(this_01), cVar3 == '\0')))) {
        pBVar1 = local_88;
        pcVar9 = *(code **)(*(long *)local_88 + 0x110);
        this_02 = (RtObject *)Projectile::GetProps((Projectile *)this);
        pLVar6 = Sexy::RtObject::Cast<Lv5SwordProps>(this_02);
                    /* WARNING: Load size is inaccurate */
        pDVar11._0_4_ = *(DamageInfo **)(pLVar6 + 0x18);
        Sexy::Point::Point(aPStack_78,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
        DamageInfo::DamageInfo(pDVar11._0_4_,local_70,local_6c,(DamageInfo *)local_68,aPStack_78,0);
        (*pcVar9)(pBVar1,(DamageInfo *)local_68);
        DamageInfo::~DamageInfo((DamageInfo *)local_68);
      }
      else {
        pcVar9 = *(code **)(*(long *)this_01 + 0x120);
        Sexy::Point::Point(aPStack_78,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
        DamageInfo::DamageInfo
                  ((DamageInfo *)0x0,local_70,local_6c,(DamageInfo *)local_68,4,0,aPStack_78,0);
        (*pcVar9)(this_01,(DamageInfo *)local_68);
        DamageInfo::~DamageInfo((DamageInfo *)local_68);
        this_03 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
        std::string::string((string *)&local_70,"POPANIM_EFFECTS_DRACAENA_PROJECTILE02_HIT02");
        GetPAMByName((string *)&local_70);
        pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_68);
        Effect_PopAnim::CreatePopAnimRig(this_03,(PopAnim *)pRVar7,(RtClass *)0x0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
        std::string::~string((string *)&local_70);
        nop();
        Effect_PopAnim::SetCentered(this_03,true);
        pSVar8 = (SexyVector3 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                *)this_01);
        StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_03,pSVar8,-1);
        std::string::string((string *)local_68,"animation02");
        Effect_PopAnim::PlaySingleAnimation(this_03,(DamageInfo *)local_68,0);
        std::string::~string((string *)local_68);
        nop();
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)this_00,&local_88);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

