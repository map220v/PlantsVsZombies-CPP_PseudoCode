// Class: ThemeBalloonProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThemeBalloonProjectile::myrandom() */

void ThemeBalloonProjectile::myrandom(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_28._0_4_ = 1;
  do {
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)avStack_20,(int *)&local_28);
    local_28._0_4_ = (int)local_28 + 1;
  } while ((int)local_28 < 0x65);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_20);
  std::random_shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            (uVar2,uVar3);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  puVar4 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
  uVar1 = *puVar4;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* ThemeBalloonProjectile::~ThemeBalloonProjectile() */

void __thiscall ThemeBalloonProjectile::~ThemeBalloonProjectile(ThemeBalloonProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067e7c90;
  *(undefined ***)(this + 0x10) = &PTR__ThemeBalloonProjectile_067e7e80;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to ThemeBalloonProjectile::~ThemeBalloonProjectile() */

void __thiscall ThemeBalloonProjectile::~ThemeBalloonProjectile(ThemeBalloonProjectile *this)

{
  ~ThemeBalloonProjectile(this + -0x10);
  return;
}


/* ThemeBalloonProjectile::~ThemeBalloonProjectile() */

void __thiscall ThemeBalloonProjectile::~ThemeBalloonProjectile(ThemeBalloonProjectile *this)

{
  ~ThemeBalloonProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ThemeBalloonProjectile::~ThemeBalloonProjectile() */

void __thiscall ThemeBalloonProjectile::~ThemeBalloonProjectile(ThemeBalloonProjectile *this)

{
  ~ThemeBalloonProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThemeBalloonProjectile::onUpdate(float) */

void ThemeBalloonProjectile::onUpdate(float param_1)

{
  Projectile *in_x0;
  long lVar1;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = Projectile::GetPreviousPosition(in_x0);
  if (*(float *)(lVar1 + 4) <= 0.0) {
    EATextSquish::Vec3::Vec3(aVStack_18,0.0,0.0,0.0);
    Projectile::SetVelocity(in_x0,(SexyVector3 *)aVStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ThemeBalloonProjectile::ThemeBalloonProjectile() */

void __thiscall ThemeBalloonProjectile::ThemeBalloonProjectile(ThemeBalloonProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined4 *)(this + 0x1a8) = 1;
  *(undefined ***)this = &PTR_GetClass_067e7c90;
  *(undefined ***)(this + 0x10) = &PTR__ThemeBalloonProjectile_067e7e80;
  return;
}


/* ThemeBalloonProjectile::StaticNew() */

ThemeBalloonProjectile * ThemeBalloonProjectile::StaticNew(void)

{
  ThemeBalloonProjectile *this;
  
  this = ::operator_new(0x1b0);
  ThemeBalloonProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThemeBalloonProjectile::StaticClassInit() */

void ThemeBalloonProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"ThemeBalloonProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_0411834c,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ThemeBalloonProjectile::StaticGetClass() */

long * ThemeBalloonProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ThemeBalloonProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ThemeBalloonProjectile::GetClass() const */

long * ThemeBalloonProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"ThemeBalloonProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThemeBalloonProjectile::handleImpact(BoardEntity*) */

void __thiscall
ThemeBalloonProjectile::handleImpact(ThemeBalloonProjectile *this,BoardEntity *param_1)

{
  int iVar1;
  char cVar2;
  long lVar3;
  float *pfVar4;
  Board *this_00;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  string asStack_38 [8];
  RtMixedPtrBase aRStack_30 [8];
  float local_28;
  float local_24;
  string asStack_20 [8];
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x170))();
  lVar3 = Projectile::getProps((Projectile *)this);
  (**(code **)(*(long *)this + 0x180))(asStack_38,this);
  cVar2 = FUN_0547419c(asStack_38);
  if (cVar2 == '\0') {
    GetPAMByName(asStack_38);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_30);
    if (cVar2 != '\0') {
      ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                ((ResistenceValueInfo *)&local_28);
      Projectile::calcRandomSplatOffset((Projectile *)this,(SexyVector2 *)&local_28);
      if ((param_1 == (BoardEntity *)0x0) || (*(char *)(lVar3 + 0x6d) == '\0')) {
        fVar7 = (local_24 + *(float *)(this + 0x1c)) - *(float *)(this + 0x20);
        fVar8 = local_28 + *(float *)(this + 0x18);
      }
      else {
        pfVar4 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)param_1);
        fVar7 = (local_24 + pfVar4[1]) - pfVar4[2];
        fVar8 = local_28 + *pfVar4;
      }
      fVar6 = 0.0;
      this_00 = *(Board **)(gLawnApp + 0x9f0);
      if (this_00[0x119] != (Board)0x0) {
        fVar6 = (float)Board::calculateRoofOffsetZ(fVar8);
        this_00 = *(Board **)(gLawnApp + 0x9f0);
      }
      this_01 = Board::AddEffect<Effect_PopAnim>(this_00);
      pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_30);
      Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar5,(RtClass *)0x0);
      Effect_PopAnim::SetCentered(this_01,true);
      EATextSquish::Vec3::Vec3(aVStack_18,fVar8,fVar7,fVar6);
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)this_01,(SexyVector3 *)aVStack_18,-1);
      FUN_04115ac8(this_01 + 0x1c,*(int *)(this + 0x50) + 1);
      if (*(int *)(this + 0x1a8) == 1) {
        std::string::string((string *)aVStack_18,"ANIMATION");
        Effect_PopAnim::PlaySingleAnimation(this_01,aVStack_18,0);
        std::string::~string((string *)aVStack_18);
        nop();
      }
      else {
        std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x1a8));
        std::operator+("ANIMATION",asStack_20);
        Effect_PopAnim::PlaySingleAnimation(this_01,aVStack_18,0);
        std::string::~string((string *)aVStack_18);
        std::string::~string(asStack_20);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  }
  if (((*(int *)(this + 0x4c) < 1) ||
      (iVar1 = *(int *)(this + 0x4c) + -1, *(int *)(this + 0x4c) = iVar1, iVar1 == 0)) &&
     (cVar2 = *(char *)(lVar3 + 0x65), cVar2 != '\0')) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  else {
    cVar2 = '\0';
  }
  std::string::~string(asStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThemeBalloonProjectile::getThemeBalloonProjectile(Sexy::Point&) */

void ThemeBalloonProjectile::getThemeBalloonProjectile(Point *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  float *pfVar6;
  ThemeBalloonProjectile *this_00;
  int extraout_w1;
  undefined1 auVar7 [12];
  RtId aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar5,0x2b);
  do {
    bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar2) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      this_00 = (ThemeBalloonProjectile *)0x0;
LAB_04119edc:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(this_00);
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)aRStack_38);
    this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_38);
    pfVar6 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(this);
    iVar3 = BoardTransforms::BoardSpaceToGridXUnbounded(*pfVar6);
    iVar4 = BoardTransforms::BoardSpaceToGridYUnbounded(pfVar6[1]);
    Sexy::Point::Point((Point *)aRStack_30,iVar3,iVar4);
    this_00 = Sexy::RtObject::Cast<ThemeBalloonProjectile>((RtObject *)this);
    cVar1 = Sexy::TPoint<int>::operator==((TPoint<int> *)aRStack_30,(TPoint *)param_1);
    iVar3 = extraout_w1;
    if ((this_00 != (ThemeBalloonProjectile *)0x0) && (cVar1 != '\0')) {
      auVar7 = Projectile::GetVelocity((Projectile *)this_00);
      iVar3 = auVar7._8_4_;
      if (*(float *)(auVar7._0_8_ + 8) == 0.0) {
        Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
        goto LAB_04119edc;
      }
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar3);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThemeBalloonProjectile::getBoomFlowerProjectile(Sexy::Point&) */

void ThemeBalloonProjectile::getBoomFlowerProjectile(Point *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  float *pfVar6;
  BoomFlowerProjectile *this_00;
  int extraout_w1;
  undefined1 auVar7 [12];
  RtId aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar5,0x2b);
  do {
    bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar2) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      this_00 = (BoomFlowerProjectile *)0x0;
LAB_0411a028:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(this_00);
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)aRStack_38);
    this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_38);
    pfVar6 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(this);
    iVar3 = BoardTransforms::BoardSpaceToGridXUnbounded(*pfVar6);
    iVar4 = BoardTransforms::BoardSpaceToGridYUnbounded(pfVar6[1]);
    Sexy::Point::Point((Point *)aRStack_30,iVar3,iVar4);
    this_00 = Sexy::RtObject::Cast<BoomFlowerProjectile>((RtObject *)this);
    cVar1 = Sexy::TPoint<int>::operator==((TPoint<int> *)aRStack_30,(TPoint *)param_1);
    iVar3 = extraout_w1;
    if ((this_00 != (BoomFlowerProjectile *)0x0) && (cVar1 != '\0')) {
      auVar7 = Projectile::GetVelocity((Projectile *)this_00);
      iVar3 = auVar7._8_4_;
      if (*(float *)(auVar7._0_8_ + 8) == 0.0) {
        Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
        goto LAB_0411a028;
      }
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar3);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThemeBalloonProjectile::OnCollideGround() */

void __thiscall ThemeBalloonProjectile::OnCollideGround(ThemeBalloonProjectile *this)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  Projectile *pPVar5;
  PopAnimRig *pPVar6;
  float fVar7;
  Point aPStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar4 = (float *)Projectile::GetPreviousPosition((Projectile *)this);
  iVar2 = BoardTransforms::BoardSpaceToGridXUnbounded(*pfVar4);
  iVar3 = BoardTransforms::BoardSpaceToGridYUnbounded(pfVar4[1]);
  Sexy::Point::Point(aPStack_50,iVar2,iVar3);
  pPVar5 = (Projectile *)getThemeBalloonProjectile(aPStack_50);
  if (pPVar5 == (Projectile *)0x0) {
    pPVar5 = (Projectile *)getBoomFlowerProjectile(aPStack_50);
    if (pPVar5 == (Projectile *)0x0) {
      Projectile::SetAcceleration((Projectile *)this,0.0,0.0,0.0);
      Projectile::SetVelocity((Projectile *)this,0.0,0.0,0.0);
      uVar1 = 1;
      goto LAB_0411a0f4;
    }
    if (*(int *)(pPVar5 + 0x1a8) < 3) {
      *(int *)(pPVar5 + 0x1a8) = *(int *)(pPVar5 + 0x1a8) + 1;
      fVar7 = (float)FUN_04115adc(*(undefined4 *)(pPVar5 + 0xd8));
      FUN_04115ae0(fVar7 + 50.0,pPVar5 + 0xd8);
      fVar7 = (float)FUN_04115ae8(*(undefined4 *)(pPVar5 + 0x178));
      FUN_04115aec(fVar7 + 50.0,pPVar5 + 0x178);
      pPVar6 = (PopAnimRig *)Projectile::GetAnimRig(pPVar5);
      std::to_string<ActivityTypeID>((ActivityTypeID *)(pPVar5 + 0x1a8));
      std::operator+("ANIMATION",asStack_48);
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      PopAnimRig::PlayAndContinue(pPVar6,asStack_40,0,aDStack_38);
      std::string::~string(asStack_40);
      goto LAB_0411a1c8;
    }
  }
  else if (*(int *)(pPVar5 + 0x1a8) < 3) {
    *(int *)(pPVar5 + 0x1a8) = *(int *)(pPVar5 + 0x1a8) + 1;
    fVar7 = (float)FUN_04115adc(*(undefined4 *)(pPVar5 + 0xd8));
    FUN_04115ae0(fVar7 + 50.0,pPVar5 + 0xd8);
    fVar7 = (float)FUN_04115ae8(*(undefined4 *)(pPVar5 + 0x178));
    FUN_04115aec(fVar7 + 50.0,pPVar5 + 0x178);
    pPVar6 = (PopAnimRig *)Projectile::GetAnimRig(pPVar5);
    std::to_string<ActivityTypeID>((ActivityTypeID *)(pPVar5 + 0x1a8));
    std::operator+("ANIMATION",asStack_48);
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar6,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
LAB_0411a1c8:
    std::string::~string(asStack_48);
    (**(code **)(*(long *)this + 0x48))(this);
    uVar1 = 1;
    goto LAB_0411a0f4;
  }
  uVar1 = Projectile::OnCollideGround((Projectile *)this);
LAB_0411a0f4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* ThemeBalloonProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
ThemeBalloonProjectile::OnCollideEntity(ThemeBalloonProjectile *this,BoardEntity *param_1)

{
  int iVar1;
  RtObject *this_00;
  Plant *this_01;
  float fVar2;
  float fVar3;
  
  this_00 = (RtObject *)Projectile::GetInstigator((Projectile *)this);
  if ((this_00 != (RtObject *)0x0) &&
     (this_01 = Sexy::RtObject::Cast<Plant>(this_00), this_01 != (Plant *)0x0)) {
    fVar2 = (float)Sexy::Rand(1.0);
    iVar1 = *(int *)(this + 0x1a8);
    fVar3 = (float)Plant::GetGeneSkillBoost(this_01);
    if (fVar2 < fVar3 * (float)iVar1) {
      FUN_04115b6c(this + 0xdc);
    }
  }
  Projectile::OnCollideEntity((Projectile *)this,param_1);
  return;
}

