// Class: ZombieYearMonster


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieYearMonster::StaticClassInit() */

void ZombieYearMonster::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieYearMonster");
    (*pcVar2)(plVar1,asStack_10,FUN_0347da90,0x868,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieYearMonster::StaticGetClass() */

long * ZombieYearMonster::StaticGetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieYearMonster",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieYearMonster::GetClass() const */

long * ZombieYearMonster::GetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieYearMonster",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieYearMonster::calJumpingDistance() */

void ZombieYearMonster::calJumpingDistance(void)

{
  int iVar1;
  int iVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  float *pfVar3;
  string *in_x8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"five");
  nop();
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(in_x0);
  iVar1 = BoardTransforms::BoardSpaceToGridX(*pfVar3);
  iVar2 = BoardTransforms::BoardSpaceToGridX(*pfVar3);
  if (iVar2 != 8) {
    iVar1 = -iVar1;
    if (iVar1 + 7U < 7) {
      if (iVar1 + 8 < 6) {
        switch(iVar1) {
        case -6:
          std::string::string(in_x8,"two");
          nop();
          break;
        case -5:
          std::string::string(in_x8,"three");
          nop();
          break;
        case -4:
          std::string::string(in_x8,"four");
          nop();
          break;
        case -3:
          goto switchD_0347bd18_caseD_fffffffd;
        default:
          std::string::string(in_x8,"one");
          nop();
        }
      }
      else {
switchD_0347bd18_caseD_fffffffd:
        std::string::string(in_x8,"five");
        nop();
      }
      goto LAB_0347bc7c;
    }
  }
  std::string::string(in_x8,"zero");
  nop();
LAB_0347bc7c:
  std::string::~string(asStack_10);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieYearMonster::isOnLastColumn() */

ZombieYearMonster __thiscall ZombieYearMonster::isOnLastColumn(ZombieYearMonster *this)

{
  ZombieYearMonster ZVar1;
  int iVar2;
  float *pfVar3;
  
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  iVar2 = BoardTransforms::BoardSpaceToGridXKeepOnBoard(*pfVar3);
  if ((iVar2 == 7) && (ZVar1 = this[0x850], ZVar1 != (ZombieYearMonster)0x0)) {
    this[0x850] = (ZombieYearMonster)0x0;
    return ZVar1;
  }
  return (ZombieYearMonster)0x0;
}


/* ZombieYearMonster::ZombieYearMonster() */

void __thiscall ZombieYearMonster::ZombieYearMonster(ZombieYearMonster *this)

{
  Zombie::Zombie((Zombie *)this);
  ZombieEliteModule::ZombieEliteModule((ZombieEliteModule *)(this + 0x800));
  *(undefined ***)this = &PTR_GetClass_0663d4b0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieYearMonster_0663dec8;
  *(undefined ***)(this + 0x800) = &PTR__ZombieYearMonster_0663def8;
  DVec3::DVec3((DVec3 *)(this + 0x854));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x860));
  return;
}


/* ZombieYearMonster::StaticNew() */

ZombieYearMonster * ZombieYearMonster::StaticNew(void)

{
  ZombieYearMonster *this;
  
  this = ::operator_new(0x868);
  ZombieYearMonster(this);
  return this;
}


/* ZombieYearMonster::~ZombieYearMonster() */

void __thiscall ZombieYearMonster::~ZombieYearMonster(ZombieYearMonster *this)

{
  *(undefined ***)this = &PTR_GetClass_0663d4b0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieYearMonster_0663dec8;
  *(undefined ***)(this + 0x800) = &PTR__ZombieYearMonster_0663def8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x860));
  nop();
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieYearMonster::~ZombieYearMonster() */

void __thiscall ZombieYearMonster::~ZombieYearMonster(ZombieYearMonster *this)

{
  ~ZombieYearMonster(this + -0x800);
  return;
}


/* non-virtual thunk to ZombieYearMonster::~ZombieYearMonster() */

void __thiscall ZombieYearMonster::~ZombieYearMonster(ZombieYearMonster *this)

{
  ~ZombieYearMonster(this + -0x10);
  return;
}


/* ZombieYearMonster::~ZombieYearMonster() */

void __thiscall ZombieYearMonster::~ZombieYearMonster(ZombieYearMonster *this)

{
  ~ZombieYearMonster(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieYearMonster::~ZombieYearMonster() */

void __thiscall ZombieYearMonster::~ZombieYearMonster(ZombieYearMonster *this)

{
  ~ZombieYearMonster(this + -0x800);
  return;
}


/* non-virtual thunk to ZombieYearMonster::~ZombieYearMonster() */

void __thiscall ZombieYearMonster::~ZombieYearMonster(ZombieYearMonster *this)

{
  ~ZombieYearMonster(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieYearMonster::healingItself() */

void __thiscall ZombieYearMonster::healingItself(ZombieYearMonster *this)

{
  char cVar1;
  float *pfVar2;
  float fVar3;
  float local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Zombie::HasFullHitpoints((Zombie *)this);
  if (cVar1 == '\0') {
    fVar3 = (float)FUN_0347b754(*(undefined4 *)(this + 0x280));
    local_c = (float)FUN_0347b758(*(undefined4 *)(this + 0x284));
    local_10 = fVar3 + local_c * 0.05;
    pfVar2 = eastl::min_alt<float>(&local_10,&local_c);
    if (local_8 == ___stack_chk_guard) {
      Zombie::SetHitpoints((Zombie *)this,*pfVar2);
      return;
    }
  }
  else if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieYearMonster::findNearest() */

void ZombieYearMonster::findNearest(void)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  RealObject *in_x0;
  undefined8 *puVar6;
  Zombie *pZVar7;
  Plant *pPVar8;
  float *pfVar9;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  RtObject *this;
  float fVar10;
  float fVar11;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  FastCurve aFStack_30 [8];
  undefined4 local_28;
  float local_24;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar3 = operator|(1,2);
  EntityFinder::GetEntitiesOnBoard(avStack_20,uVar3);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  fVar11 = 800000.0;
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_48,(__normal_iterator *)&local_40);
    if (!bVar1) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    this = (RtObject *)*puVar6;
    cVar2 = RealObject::IsOnOpposingTeam(in_x0,(RealObject *)this);
    if (cVar2 != '\0') {
      iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
      fVar10 = (float)FUN_0347b780(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                                   *(undefined4 *)(this + 0x20));
      iVar5 = BoardTransforms::BoardSpaceToGridX(fVar10);
      if (iVar5 < iVar4) {
        pZVar7 = Sexy::RtObject::Cast<Zombie>(this);
        if (pZVar7 != (Zombie *)0x0) {
          uVar3 = operator|(1,8);
          cVar2 = Zombie::MatchesAny(pZVar7,uVar3);
          if (((cVar2 != '\0') || (cVar2 = Zombie::HasCondition(pZVar7,0x27), cVar2 != '\0')) ||
             (cVar2 = Zombie::HasCondition(pZVar7,0x25), cVar2 != '\0')) goto LAB_0347d490;
        }
        pPVar8 = Sexy::RtObject::Cast<Plant>(this);
        if ((pPVar8 == (Plant *)0x0) ||
           (cVar2 = FUN_0347cc34(*(undefined4 *)(pPVar8 + 0x28)), cVar2 == '\0')) {
          uVar3 = *(undefined4 *)(this + 0x1c);
          local_38 = FUN_0347b780(*(undefined4 *)(this + 0x18),uVar3,*(undefined4 *)(this + 0x20));
          local_34 = uVar3;
          pfVar9 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           *)in_x0);
          fVar10 = pfVar9[1];
          Sexy::FastCurve::SetOutRange(aFStack_30,*pfVar9,fVar10);
          local_28 = Sexy::SexyVector2::operator-
                               ((SexyVector2 *)&local_38,(SexyVector2 *)aFStack_30);
          local_24 = fVar10;
          fVar10 = (float)VectorNorm((FPoint *)&local_28);
          if (fVar10 < fVar11) {
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                      ((RtWeakPtr<SpartanBambooMatrixSystem> *)in_x8,(RtWeakPtrBase *)&local_28);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
            fVar11 = fVar10;
          }
        }
      }
    }
LAB_0347d490:
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieYearMonster::attackTarget() */

void __thiscall ZombieYearMonster::attackTarget(ZombieYearMonster *this)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  int iVar1;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  RtObject *this_02;
  ZombieYearMonsterProps *pZVar2;
  float *pfVar3;
  Projectile *this_03;
  ResourceInfo *pRVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_04;
  SexyVector3 *pSVar5;
  PopAnimRig *this_05;
  undefined8 uVar6;
  Board *pBVar10;
  float fVar7;
  float fVar8;
  float fVar9;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x860);
  findNearest();
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  this_02 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
  pZVar2 = Sexy::RtObject::Cast<ZombieYearMonsterProps>(this_02);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)(pZVar2 + 0x228));
  uVar6 = *(undefined8 *)(gLawnApp + 0x9f0);
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
                    /* WARNING: Load size is inaccurate */
  pBVar10._0_4_ = *(Board **)pfVar3;
  fVar7 = pfVar3[1];
  fVar8 = pfVar3[2];
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_20);
  this_03 = (Projectile *)Board::AddProjectile(pBVar10._0_4_,fVar7,fVar8,uVar6,aRStack_18,0,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_00);
  if (pRVar4 == (ResourceInfo *)0x0) {
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,100.0,300.0,0.0);
    Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x854),(SexyVector3 *)aRStack_18);
    fVar7 = *(float *)(this + 0x854);
  }
  else {
    this_04 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pSVar5 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this_04);
    Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x854),pSVar5);
    fVar7 = *(float *)(this + 0x854);
    iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
    fVar7 = (float)iVar1 + fVar7;
    *(float *)(this + 0x854) = fVar7;
  }
  fVar7 = (float)Sexy::SexyMath::Fabs(fVar7 - *pfVar3);
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar1 = (int)(fVar7 / (float)(iVar1 * 3)) + 1;
  fVar9 = (float)iVar1 * 0.5;
  Projectile::LaunchAt(this_03,(SexyVector3 *)(this + 0x854),(float)iVar1 * 120.0,fVar9);
  fVar7 = (float)PVZ_T();
  this_05 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
  std::string::string((string *)aRStack_18,"land");
  fVar8 = (float)PopAnimRig::CalcAnimLengthSeconds(this_05,(string *)aRStack_18);
  *(float *)(this + 0x83c) = fVar8 + fVar7 + fVar9;
  std::string::~string((string *)aRStack_18);
  nop();
  Zombie::SetIgnoresAllDamage((Zombie *)this,true);
  Zombie::SetIsControlled((Zombie *)this,true);
  Zombie::SetIgnoresCollisions((Zombie *)this,true);
  Zombie::SetIsTargetable((Zombie *)this,false);
  (**(code **)(*(long *)this + 0x80))(this,1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieYearMonster::isRedPlant(BoardEntity*) */

void __thiscall ZombieYearMonster::isRedPlant(ZombieYearMonster *this,BoardEntity *param_1)

{
  bool bVar1;
  Plant *pPVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 == (BoardEntity *)0x0) ||
     (pPVar2 = Sexy::RtObject::Cast<Plant>((RtObject *)param_1), pPVar2 == (Plant *)0x0)) {
    bVar1 = false;
  }
  else {
    Plant::GetType();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    uVar4 = FUN_0347d350(*(undefined8 *)(lVar3 + 0x68));
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    uVar5 = FUN_0347d3a0(*(undefined8 *)(lVar3 + 0x70));
    local_18 = std::
               find<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,char[4]>
                         (uVar4,uVar5,&DAT_055ad368);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    local_10 = FUN_0347d3a0(*(undefined8 *)(lVar3 + 0x70));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieYearMonster::setState(int) */

void __thiscall ZombieYearMonster::setState(ZombieYearMonster *this,int param_1)

{
  RtWeakPtr *this_00;
  char cVar1;
  bool bVar2;
  RtObject *pRVar3;
  ZombieAnimRig_YearMonster *pZVar4;
  ResourceInfo *pRVar5;
  long *plVar6;
  Plant *pPVar7;
  code *pcVar8;
  undefined4 uVar9;
  float fVar10;
  string asStack_c8 [8];
  Point aPStack_c0 [8];
  undefined4 local_b8;
  undefined4 local_b4;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_b0 [72];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  *(int *)(this + 0x84c) = param_1;
  local_8 = ___stack_chk_guard;
  pRVar3 = (RtObject *)Zombie::GetAnimRig((Zombie *)this);
  pZVar4 = Sexy::RtObject::Cast<ZombieAnimRig_YearMonster>(pRVar3);
  switch(*(undefined4 *)(this + 0x84c)) {
  case 0:
    this[0x853] = (ZombieYearMonster)0x1;
    uVar9 = PVZ_EOT();
    *(undefined4 *)(this + 0x840) = uVar9;
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)aPStack_c0);
    std::string::string((string *)aDStack_68,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_b0,&local_b8,(string *)aDStack_68);
    ZombieAnimRig_YearMonster::PlayAccumulation(pZVar4,aRStack_b0);
LAB_0347e620:
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_b0);
    std::string::~string((string *)aDStack_68);
    nop();
    Sexy::RtId::~RtId((RtId *)&local_b8);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_c0);
    break;
  case 2:
    attackTarget(this);
    break;
  case 3:
    fVar10 = (float)PVZ_T();
    *(float *)(this + 0x844) = fVar10 + 20.0;
    std::string::string((string *)aDStack_68,"Giddiness");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aRStack_b0);
    PopAnimRig::PlayAndContinue((PopAnimRig *)pZVar4,(string *)aDStack_68,0,(DummyInit *)aRStack_b0)
    ;
    std::string::~string((string *)aDStack_68);
    nop();
    break;
  case 4:
    this_00 = (RtWeakPtr *)(this + 0x860);
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    cVar1 = isRedPlant(this,(BoardEntity *)pRVar5);
    if (cVar1 != '\0') {
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
      if (bVar2) {
        pRVar3 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        pPVar7 = Sexy::RtObject::Cast<Plant>(pRVar3);
        if ((pPVar7 != (Plant *)0x0) && (cVar1 = Plant::IsInvincible(pPVar7,true), cVar1 != '\0')) {
          (**(code **)(*(long *)pPVar7 + 0x48))(pPVar7);
          setState(this,3);
          break;
        }
      }
      plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      pcVar8 = *(code **)(*plVar6 + 0x120);
      Sexy::Point::Point(aPStack_c0,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_b8,1.0,0.0);
      DamageInfo::DamageInfo((DamageInfo *)0x0,local_b8,local_b4,aDStack_68,2,0,aPStack_c0,0);
      (*pcVar8)(plVar6,aDStack_68);
      DamageInfo::~DamageInfo(aDStack_68);
      setState(this,3);
      break;
    }
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar2) {
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
      if (bVar2) {
        pRVar3 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        pPVar7 = Sexy::RtObject::Cast<Plant>(pRVar3);
        if ((pPVar7 != (Plant *)0x0) && (cVar1 = Plant::IsInvincible(pPVar7,true), cVar1 != '\0')) {
          (**(code **)(*(long *)pPVar7 + 0x48))(pPVar7);
          fVar10 = (float)PVZ_T();
          *(float *)(this + 0x838) = fVar10 + 1.0;
          ToolPacketData::GetProps();
          Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)aPStack_c0);
          std::string::string((string *)aDStack_68,"onAnimStoppedCallback");
          RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                    (aRStack_b0,&local_b8,(string *)aDStack_68);
          ZombieAnimRig_YearMonster::PlayEat(pZVar4,aRStack_b0);
          goto LAB_0347e620;
        }
      }
      plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      pcVar8 = *(code **)(*plVar6 + 0x120);
      Sexy::Point::Point(aPStack_c0,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_b8,1.0,0.0);
      DamageInfo::DamageInfo((DamageInfo *)0x0,local_b8,local_b4,aDStack_68,2,0,aPStack_c0,0);
      (*pcVar8)(plVar6,aDStack_68);
      DamageInfo::~DamageInfo(aDStack_68);
    }
    if (this[0x851] == (ZombieYearMonster)0x0) {
      fVar10 = (float)PVZ_T();
      *(float *)(this + 0x838) = fVar10 + 1.0;
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)aPStack_c0);
      std::string::string((string *)aDStack_68,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                (aRStack_b0,(RtId *)&local_b8,(string *)aDStack_68);
      ZombieAnimRig_YearMonster::PlayEat
                (pZVar4,(RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                         *)aRStack_b0);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_b0);
      std::string::~string((string *)aDStack_68);
      nop();
      Sexy::RtId::~RtId((RtId *)&local_b8);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_c0);
    }
    break;
  case 5:
    calJumpingDistance();
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)aPStack_c0);
    std::string::string((string *)aDStack_68,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_b0,(RtId *)&local_b8,(string *)aDStack_68);
    ZombieAnimRig_YearMonster::PlayJumpBackFive
              (pZVar4,asStack_c8,
               (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_b0);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_b0);
    std::string::~string((string *)aDStack_68);
    nop();
    Sexy::RtId::~RtId((RtId *)&local_b8);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_c0);
    std::string::~string(asStack_c8);
    break;
  case 6:
    Zombie::SetIgnoresAllDamage((Zombie *)this,true);
    Zombie::SetIgnoresCollisions((Zombie *)this,true);
    Zombie::SetIsTargetable((Zombie *)this,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieYearMonster::onAnimStoppedCallback(std::string const&) */

void __thiscall ZombieYearMonster::onAnimStoppedCallback(ZombieYearMonster *this,string *param_1)

{
  bool bVar1;
  RtObject *this_00;
  ZombieAnimRig_YearMonster *pZVar2;
  float fVar3;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)Zombie::GetAnimRig((Zombie *)this);
  pZVar2 = Sexy::RtObject::Cast<ZombieAnimRig_YearMonster>(this_00);
  bVar1 = std::operator==(param_1,"Accumulation_of_force");
  if (bVar1) {
    findNearest();
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x860),(RtWeakPtr *)asStack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
    setState(this,2);
  }
  else {
    bVar1 = std::operator==(param_1,"back_zero");
    if ((((!bVar1) && (bVar1 = std::operator==(param_1,"back_one"), !bVar1)) &&
        (bVar1 = std::operator==(param_1,"back_two"), !bVar1)) &&
       ((bVar1 = std::operator==(param_1,"back_three"), !bVar1 &&
        (bVar1 = std::operator==(param_1,"back_four"), !bVar1)))) {
      bVar1 = std::operator==(param_1,"back_five");
      if (!bVar1) {
        bVar1 = std::operator==(param_1,"look");
        if (bVar1) {
          setState(this,0);
        }
        else {
          bVar1 = std::operator==(param_1,"bull_eat");
          if (bVar1) {
            std::string::string(asStack_58,"digest");
            Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3
                      ((DummyInit *)aRStack_50);
            PopAnimRig::PlayAndContinue((PopAnimRig *)pZVar2,asStack_58,0,(DummyInit *)aRStack_50);
            std::string::~string(asStack_58);
            nop();
            fVar3 = (float)PVZ_T();
            *(float *)(this + 0x840) = fVar3 + 9.0;
          }
        }
        goto LAB_0347ea9c;
      }
    }
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    ZombieAnimRig_YearMonster::PlayLook(pZVar2,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    this[0x851] = (ZombieYearMonster)0x0;
  }
LAB_0347ea9c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieYearMonster::onZombieInitialize() */

void __thiscall ZombieYearMonster::onZombieInitialize(ZombieYearMonster *this)

{
  PopAnimRig *pPVar1;
  undefined4 uVar2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_48 [16];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onZombieInitialize((Zombie *)this);
  RealObject::JoinTeam((RealObject *)this,2);
  this[0x851] = (ZombieYearMonster)0x0;
  this[0x1b8] = (ZombieYearMonster)0x1;
  this[0x850] = (ZombieYearMonster)0x1;
  this[0x852] = (ZombieYearMonster)0x0;
  this[0x853] = (ZombieYearMonster)0x0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_48);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x860),(RtWeakPtr *)a_Stack_48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_48);
  *(undefined4 *)(this + 0x848) = 0x18;
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x83c) = uVar2;
  *(undefined4 *)(this + 0x840) = uVar2;
  *(undefined4 *)(this + 0x844) = uVar2;
  *(undefined4 *)(this + 0x838) = uVar2;
  EATextSquish::Vec3::Vec3((Vec3 *)a_Stack_48,100.0,300.0,0.0);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x854),(SexyVector3 *)a_Stack_48);
  ZombieEliteModule::SetMaxHealth((ZombieEliteModule *)(this + 0x800),15000.0);
  pPVar1 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
  std::string::string((string *)a_Stack_48,"walk");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar1,a_Stack_48,0,aDStack_38);
  std::string::~string((string *)a_Stack_48);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieYearMonster::onUpdate() */

void __thiscall ZombieYearMonster::onUpdate(ZombieYearMonster *this)

{
  ZombieEliteModule *this_00;
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  Effect_MistUp *pEVar4;
  Effect_MistDown *pEVar5;
  float fVar6;
  undefined4 uVar7;
  
  Zombie::onUpdate((Zombie *)this);
  this_00 = (ZombieEliteModule *)(this + 0x800);
  fVar6 = (float)FUN_0347b754(*(undefined4 *)(this + 0x280));
  ZombieEliteModule::SetCurrentHealth(this_00,fVar6);
  puVar3 = (undefined4 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  ZombieEliteModule::SetPosition(*puVar3,puVar3[1],puVar3[2],this_00);
  HeroPlantTalentButton::OnSelect((HeroPlantTalentButton *)this_00,true);
  fVar6 = (float)PVZ_T();
  if ((*(float *)(this + 0x844) <= fVar6) && (*(int *)(this + 0x84c) == 3)) {
    uVar7 = PVZ_EOT();
    *(undefined4 *)(this + 0x844) = uVar7;
    setState(this,0);
    return;
  }
  if (this[0x853] == (ZombieYearMonster)0x0) {
    cVar1 = isOnLastColumn(this);
  }
  else {
    this[0x853] = (ZombieYearMonster)0x0;
    pEVar4 = Board::AddEffect<Effect_MistUp>(*(Board **)(gLawnApp + 0x9f0));
    pEVar5 = Board::AddEffect<Effect_MistDown>(*(Board **)(gLawnApp + 0x9f0));
    Effect_AirflowUp::startAirflowUp(*puVar3,puVar3[1],puVar3[2],pEVar4);
    Effect_AirflowDown::startAirflowDown(*puVar3,puVar3[1],puVar3[2],pEVar5);
    cVar1 = isOnLastColumn(this);
  }
  if (cVar1 == '\0') {
    iVar2 = *(int *)(this + 0x84c);
    if (iVar2 == 2) {
      fVar6 = (float)PVZ_T();
      if (*(float *)(this + 0x83c) <= fVar6) {
        uVar7 = PVZ_EOT();
        *(undefined4 *)(this + 0x83c) = uVar7;
        BoardEntity::SetPosition((BoardEntity *)this,(SexyVector3 *)(this + 0x854));
        Zombie::SetIgnoresAllDamage((Zombie *)this,false);
        Zombie::SetIsControlled((Zombie *)this,false);
        Zombie::SetIgnoresCollisions((Zombie *)this,false);
        Zombie::SetIsTargetable((Zombie *)this,true);
        (**(code **)(*(long *)this + 0x80))(this,0);
        setState(this,4);
        return;
      }
      iVar2 = *(int *)(this + 0x84c);
    }
    if (iVar2 == 4) {
      fVar6 = (float)PVZ_T();
      if (*(float *)(this + 0x840) < fVar6) {
        uVar7 = PVZ_EOT();
        *(undefined4 *)(this + 0x840) = uVar7;
        setState(this,2);
        return;
      }
      if (*(int *)(this + 0x84c) == 4) {
        fVar6 = (float)PVZ_T();
        if (*(float *)(this + 0x838) <= fVar6) {
          *(float *)(this + 0x838) = *(float *)(this + 0x838) + 1.0;
          healingItself(this);
          return;
        }
      }
    }
    return;
  }
  setState(this,0);
  return;
}


/* ZombieYearMonster::OverrideProjectileCollision(Projectile*) */

void __thiscall
ZombieYearMonster::OverrideProjectileCollision(ZombieYearMonster *this,Projectile *param_1)

{
  long lVar1;
  ulong uVar2;
  int *piVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  if (*(int *)(this + 0x84c) != 4) {
LAB_0347f074:
    Zombie::OverrideProjectileCollision((Zombie *)this,param_1);
    return;
  }
  uVar4 = 0;
  lVar1 = Projectile::GetProps(param_1);
  do {
    uVar6 = *(undefined8 *)(lVar1 + 0x198);
    uVar2 = FUN_0347b76c(uVar6,*(undefined8 *)(lVar1 + 0x1a0));
    uVar5 = uVar4;
    do {
      uVar4 = uVar5 + 1;
      if (uVar2 <= uVar5) goto LAB_0347f074;
      piVar3 = (int *)FUN_0347b778(uVar6,uVar5);
      uVar5 = uVar4;
    } while (*piVar3 != 4);
    setState(this,5);
    Zombie::OverrideProjectileCollision((Zombie *)this,param_1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieYearMonster::TakeDamage(DamageInfo const&) */

void __thiscall ZombieYearMonster::TakeDamage(ZombieYearMonster *this,DamageInfo *param_1)

{
  bool bVar1;
  Plant *pPVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  RtObject *this_01;
  ZombieYearMonsterProps *pZVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  vector<std::string,std::allocator<std::string>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::TakeDamage((Zombie *)this,param_1);
  if (((*(int *)(this + 0x84c) == 4) &&
      ((*(ulong *)(param_1 + 0x10) & 0xfffffffffffffdff) == 0x1420)) &&
     (fVar7 = (float)PVZ_EOT(), *(float *)(this + 0x840) != fVar7)) {
    setState(this,5);
    this[0x851] = (ZombieYearMonster)0x1;
  }
  else if ((*(RtObject **)param_1 != (RtObject *)0x0) &&
          (pPVar2 = Sexy::RtObject::Cast<Plant>(*(RtObject **)param_1), pPVar2 != (Plant *)0x0)) {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
    this_01 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    pZVar3 = Sexy::RtObject::Cast<ZombieYearMonsterProps>(this_01);
    std::vector<std::string,std::allocator<std::string>>::vector
              (avStack_20,(vector *)(pZVar3 + 0x230));
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)avStack_20);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
    Plant::GetType();
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
    local_30 = std::
               find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                         (uVar4,uVar5,lVar6 + 8);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    if (bVar1) {
      setState(this,5);
      this[0x851] = (ZombieYearMonster)0x1;
      std::vector<std::string,std::allocator<std::string>>::~vector(avStack_20);
    }
    else {
      std::vector<std::string,std::allocator<std::string>>::~vector(avStack_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

