// Class: HeathSeekerProjectile


/* HeathSeekerProjectile::onDeflection(BoardEntity*) */

void HeathSeekerProjectile::onDeflection(BoardEntity *param_1)

{
  FUN_0400c5dc(0,param_1 + 0xc4);
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(param_1 + 0x1a8));
  param_1[0x1c8] = (BoardEntity)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeathSeekerProjectile::StaticClassInit() */

void HeathSeekerProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"HeathSeekerProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_0400ef4c,0x1e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HeathSeekerProjectile::StaticGetClass() */

long * HeathSeekerProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HeathSeekerProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeathSeekerProjectile::GetClass() const */

long * HeathSeekerProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"HeathSeekerProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeathSeekerProjectile::shouldDeprioritizeTarget(BoardEntity const*) */

ulong __thiscall
HeathSeekerProjectile::shouldDeprioritizeTarget(HeathSeekerProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  ulong uVar4;
  long *extraout_x0;
  
  if ((param_1 == (BoardEntity *)0x0) ||
     (cVar1 = GameObject::IsDestroyed((GameObject *)param_1), cVar1 != '\0')) {
    uVar4 = 0;
  }
  else {
    bVar2 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
    uVar4 = (ulong)bVar2;
    if (bVar2) {
      nop();
      if (*(code **)(*extraout_x0 + 0x338) == Zombie::IsSwingingIn) {
        uVar4 = Zombie::IsSwingingIn();
        return uVar4;
      }
      bVar3 = (**(code **)(*extraout_x0 + 0x338))();
      return (ulong)bVar3;
    }
  }
  return uVar4;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeathSeekerProjectile::isValidTarget(BoardEntity*) */

void __thiscall
HeathSeekerProjectile::isValidTarget(HeathSeekerProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  undefined4 uVar4;
  Zombie *extraout_x0;
  undefined8 uVar5;
  long *extraout_x0_00;
  long lVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (BoardEntity *)0x0) {
    cVar1 = GameObject::IsDestroyed((GameObject *)param_1);
    if (cVar1 == '\0') {
      bVar2 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
      if (bVar2) {
        nop();
        uVar5 = operator|(1,8);
        uVar4 = operator|(uVar5,4);
        cVar1 = Zombie::MatchesAny(extraout_x0,uVar4);
        bVar3 = 0;
        if (((cVar1 == '\0') && (cVar1 = RealObject::IsOnTeam(extraout_x0,1), cVar1 == '\0')) &&
           ((cVar1 = FUN_0400d7ac(*(undefined4 *)(extraout_x0 + 0xcc)), cVar1 == '\0' &&
            (cVar1 = Zombie::HasCondition(extraout_x0,0x19), cVar1 == '\0')))) {
          bVar3 = Zombie::HasCondition(extraout_x0,0x77);
          bVar3 = bVar3 ^ 1;
        }
        goto LAB_0400d8b0;
      }
      bVar3 = 1;
      bVar2 = Sexy::RtObject::IsA<GridItem>((RtObject *)param_1);
      if (!bVar2) goto LAB_0400d8b0;
      nop();
      cVar1 = RealObject::IsOnTeam();
      if (((cVar1 == '\0') &&
          (cVar1 = (**(code **)(*extraout_x0_00 + 0x218))(extraout_x0_00,param_1), cVar1 != '\0'))
         && (cVar1 = (**(code **)(*extraout_x0_00 + 0x200))(extraout_x0_00), cVar1 != '\0')) {
        GridItem::GetType();
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        bVar3 = std::operator!=((string *)(lVar6 + 8),"wizard_crucible");
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        goto LAB_0400d8b0;
      }
    }
  }
  bVar3 = 0;
LAB_0400d8b0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeathSeekerProjectile::InitializeHeathSeeker(BoardEntity*, int, int, int) */

void __thiscall
HeathSeekerProjectile::InitializeHeathSeeker
          (HeathSeekerProjectile *this,BoardEntity *param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = isValidTarget(this,param_1);
  if ((cVar1 == '\0') || (cVar1 = shouldDeprioritizeTarget(this,param_1), cVar1 != '\0')) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
  }
  else {
    ToolPacketData::GetProps();
  }
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x1a8),(RtWeakPtrBase *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  FUN_0400c5e4((float)param_2,this + 0xd8);
  *(int *)(this + 0x1d4) = param_3;
  *(int *)(this + 0x1d8) = param_4;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HeathSeekerProjectile::HeathSeekerProjectile() */

void __thiscall HeathSeekerProjectile::HeathSeekerProjectile(HeathSeekerProjectile *this)

{
  undefined4 uVar1;
  
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067b5380;
  *(undefined ***)(this + 0x10) = &PTR__HeathSeekerProjectile_067b5570;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1a8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b0));
  this[0x1c8] = (HeathSeekerProjectile)0x0;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x1d0) = 0;
  *(undefined4 *)(this + 0x1cc) = uVar1;
  return;
}


/* HeathSeekerProjectile::StaticNew() */

HeathSeekerProjectile * HeathSeekerProjectile::StaticNew(void)

{
  HeathSeekerProjectile *this;
  
  this = ::operator_new(0x1e0);
  HeathSeekerProjectile(this);
  return this;
}


/* HeathSeekerProjectile::~HeathSeekerProjectile() */

void __thiscall HeathSeekerProjectile::~HeathSeekerProjectile(HeathSeekerProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067b5380;
  *(undefined ***)(this + 0x10) = &PTR__HeathSeekerProjectile_067b5570;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1b0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to HeathSeekerProjectile::~HeathSeekerProjectile() */

void __thiscall HeathSeekerProjectile::~HeathSeekerProjectile(HeathSeekerProjectile *this)

{
  ~HeathSeekerProjectile(this + -0x10);
  return;
}


/* HeathSeekerProjectile::~HeathSeekerProjectile() */

void __thiscall HeathSeekerProjectile::~HeathSeekerProjectile(HeathSeekerProjectile *this)

{
  ~HeathSeekerProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to HeathSeekerProjectile::~HeathSeekerProjectile() */

void __thiscall HeathSeekerProjectile::~HeathSeekerProjectile(HeathSeekerProjectile *this)

{
  ~HeathSeekerProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeathSeekerProjectile::getTargets() */

void HeathSeekerProjectile::getTargets(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  undefined8 *puVar5;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  undefined1 auStack_a8 [8];
  vector<Sexy::TRect<int>,std::allocator<Sexy::TRect<int>>> avStack_a0 [24];
  function<bool(Sexy::Touch_const&)> afStack_88 [32];
  Insets aIStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  iVar1 = *(int *)(in_x0 + 0x1d0);
  iVar2 = *(int *)(in_x0 + 0x1d8);
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar4 = BoardConstants::NUMBER_OF_ROWS();
  Sexy::Insets::Insets(aIStack_68,0,0,iVar3,iVar4);
  std::vector<Sexy::TRect<int>,std::allocator<Sexy::TRect<int>>>::vector
            (avStack_a0,aIStack_68,1,auStack_a8);
  puVar5 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(in_x0);
  iVar3 = *(int *)(in_x0 + 0x1d8);
  iVar4 = *(int *)(in_x0 + 0x1d0);
  FUN_0400c830(afStack_88);
                    /* WARNING: Load size is inaccurate */
  EntityFinder::BoardEntitySorter_Closest_PreferNewTargets::
  BoardEntitySorter_Closest_PreferNewTargets
            (*puVar5,*(undefined4 *)((long)puVar5 + 4),*(undefined4 *)(puVar5 + 1),0x3f800000,
             ((float)(iVar2 - iVar1) * 0.4) / (float)(iVar2 + -1) + 0.15,aIStack_68,in_x0 + 0x1b0,
             iVar4 == iVar3 + -1,afStack_88);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_88);
  operator|(2,4);
  EntityFinder::EntityFinderGridspace();
  EntityFinder::BoardEntitySorter_Closest_PreferNewTargets::
  ~BoardEntitySorter_Closest_PreferNewTargets
            ((BoardEntitySorter_Closest_PreferNewTargets *)aIStack_68);
  std::vector<Sexy::TRect<int>,std::allocator<Sexy::TRect<int>>>::~vector(avStack_a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeathSeekerProjectile::checkAndMoveToNextZombie() */

void __thiscall HeathSeekerProjectile::checkAndMoveToNextZombie(HeathSeekerProjectile *this)

{
  char cVar1;
  BoardEntity *pBVar2;
  long lVar3;
  undefined8 uVar4;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x1d0) < *(int *)(this + 0x1d8)) {
    getTargets();
    cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
    if (cVar1 == '\0') {
      do {
        pBVar2 = (BoardEntity *)EntityFinder::PullFirstMatchingEntity((vector *)&local_20,-1,true);
        cVar1 = isValidTarget(this,pBVar2);
        if ((cVar1 != '\0') && (pBVar2 != (BoardEntity *)0x0)) {
          ToolPacketData::GetProps();
          goto LAB_0400f654;
        }
        lVar3 = FUN_0400c63c(local_20,local_18);
      } while (lVar3 != 0);
    }
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_28);
LAB_0400f654:
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x1a8),(RtWeakPtrBase *)a_Stack_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_28);
    if (*(int *)(this + 0x1d0) == *(int *)(this + 0x1d8) + -1) {
      FUN_0400c5e4((float)*(int *)(this + 0x1d4),this + 0xd8);
    }
    uVar4 = 0;
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  }
  else {
    uVar4 = 1;
    if (*(int *)(this + 0x1d0) == *(int *)(this + 0x1d8)) {
      Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x1a8));
      (**(code **)(*(long *)this + 0x48))(this);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeathSeekerProjectile::moveThroughTime(float) */

void __thiscall HeathSeekerProjectile::moveThroughTime(HeathSeekerProjectile *this,float param_1)

{
  uint uVar1;
  char cVar2;
  long extraout_x0;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  SexyVector3 *pSVar3;
  DVec3 *this_01;
  SexyVector3 *this_02;
  long extraout_x0_00;
  float *pfVar4;
  uint uVar5;
  float fVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  ulong uVar10;
  undefined8 uVar11;
  float fVar12;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar6 = (float)PVZ_T();
  fVar12 = *(float *)(this + 0x1cc);
  Projectile::GetProps((Projectile *)this);
  nop();
  if (fVar12 + *(float *)(extraout_x0 + 0x1e4) < fVar6) {
    (**(code **)(*(long *)this + 0x48))(this);
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8));
  }
  else {
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8));
  }
  if (this_00 ==
      (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
       *)0x0) {
    Projectile::moveThroughTime((Projectile *)this,param_1);
  }
  else {
    pSVar3 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    this_01 = (DVec3 *)Projectile::GetVelocity((Projectile *)this);
    this_02 = (SexyVector3 *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost(this_00);
    fVar6 = (float)FUN_0400c8c4();
    uVar10 = (ulong)(uint)fVar6;
    uVar11 = 0;
    EATextSquish::Vec3::Vec3((Vec3 *)&local_18,0.0,fVar6,0.0);
    local_38 = Sexy::SexyVector3::operator+(this_02,(SexyVector3 *)&local_18);
    local_34 = (undefined4)uVar10;
    local_30 = (undefined4)uVar11;
    local_18 = (float)Sexy::SexyVector3::operator-((SexyVector3 *)&local_38,pSVar3);
    local_14 = (undefined4)uVar10;
    local_10 = (undefined4)uVar11;
    uVar7 = Sexy::SexyVector3::Normalize((SexyVector3 *)&local_18);
    local_24 = (undefined4)uVar10;
    local_20 = (undefined4)uVar11;
    local_28 = uVar7;
    fVar6 = (float)FUN_0400c5d8(*(undefined4 *)(this + 0xc4));
    fVar12 = (float)ArmorflameMissile::calcDesiredRot(uVar7,uVar10,uVar11,fVar6,this);
    Projectile::GetProps((Projectile *)this);
    nop();
    uVar5 = (uint)(fVar12 - fVar6);
    uVar1 = (int)uVar5 >> 0x1f;
    local_18 = *(float *)(extraout_x0_00 + 0x1e0) * 6.2831855 * param_1;
    local_3c = (float)(int)((uVar5 ^ uVar1) - uVar1);
    pfVar4 = eastl::min_alt<float>(&local_3c,&local_18);
    dVar8 = ABS((double)*pfVar4);
    if ((long)(double)(fVar12 - fVar6) < 0) {
      dVar8 = -dVar8;
    }
    dVar8 = (double)fVar6 + dVar8;
    uVar1 = (int)dVar8 >> 0x1f;
    if (3.1415927 < (float)(int)(((int)dVar8 ^ uVar1) - uVar1)) {
      dVar9 = 6.2831854820251465;
      if ((long)dVar8 < 0) {
        dVar9 = -6.2831854820251465;
      }
      dVar8 = dVar8 - dVar9;
    }
    FUN_0400c5dc((float)dVar8,this + 0xc4);
    fVar6 = (float)DVec3::getLength(this_01);
    Projectile::SetRotatedVelocity((Projectile *)this,fVar6);
    Projectile::moveThroughTime((Projectile *)this,param_1);
    cVar2 = isValidTarget(this,(BoardEntity *)this_00);
    if (cVar2 == '\0') {
      checkAndMoveToNextZombie(this);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeathSeekerProjectile::handleImpact(BoardEntity*) */

void __thiscall
HeathSeekerProjectile::handleImpact(HeathSeekerProjectile *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x1d0) = *(int *)(this + 0x1d0) + 1;
  if (param_1 != (BoardEntity *)0x0) {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x1b0);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_00);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this_00);
    ToolPacketData::GetProps();
    local_18 = std::
               find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<GameObject>>
                         (uVar4,uVar5,aRStack_20);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    if (bVar1) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)&local_18);
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )this_00,(RtWeakPtr *)&local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    }
  }
  bVar2 = checkAndMoveToNextZombie(this);
  bVar3 = Projectile::handleImpact((Projectile *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3 | bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeathSeekerProjectile::getCollisionEntities(std::vector<BoardEntity*,
   std::allocator<BoardEntity*> >&, Sexy::TRect<int> const&) const */

void __thiscall
HeathSeekerProjectile::getCollisionEntities
          (HeathSeekerProjectile *this,vector *param_1,TRect *param_2)

{
  bool bVar1;
  RtObject *pRVar2;
  undefined8 *puVar3;
  GridItemProtectorShieldSegment *pGVar4;
  RtObject *local_38;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8))
  ;
  if ((byte)this[0x1c8] < (pRVar2 != (RtObject *)0x0)) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    Projectile::getCollisionEntities((Projectile *)this,(vector *)avStack_20,param_2);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    if (bVar1) {
      do {
        puVar3 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
        local_38 = (RtObject *)*puVar3;
        pGVar4 = Sexy::RtObject::Cast<GridItemProtectorShieldSegment>(local_38);
        if ((pGVar4 != (GridItemProtectorShieldSegment *)0x0) || (pRVar2 == local_38)) {
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)param_1,
                     (BoardEntity **)&local_38);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
        bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28)
        ;
      } while (bVar1);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  }
  else {
    Projectile::getCollisionEntities((Projectile *)this,param_1,param_2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeathSeekerProjectile::damageEntity(BoardEntity*) */

void __thiscall
HeathSeekerProjectile::damageEntity(HeathSeekerProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  GridItem *pGVar4;
  long lVar5;
  Zombie *pZVar6;
  long *plVar7;
  char *pcVar8;
  string asStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  getTargets();
  if (param_1 != (BoardEntity *)0x0) {
    pGVar4 = Sexy::RtObject::Cast<GridItem>((RtObject *)param_1);
    if (pGVar4 != (GridItem *)0x0) {
      GridItem::GetType();
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      FUN_05475d88(asStack_30,lVar5 + 8);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
      bVar1 = std::operator==(asStack_30,"protectorshieldsegment_wavegenerator");
      if (bVar1) {
        uVar3 = Sexy::Rand(2);
        if ((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f) == 1) {
          pcVar8 = "sound005";
        }
        else {
          pcVar8 = "sound006";
        }
        std::string::string((string *)aRStack_28,pcVar8);
        RealObject::PlayPositionalSound((RealObject *)this,(string *)aRStack_28,0.0);
        std::string::~string((string *)aRStack_28);
        nop();
        *(int *)(this + 0x1d0) = *(int *)(this + 0x1d8) + -1;
        std::string::~string(asStack_30);
        goto LAB_0400ffb0;
      }
      std::string::~string(asStack_30);
    }
    pZVar6 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    if (pZVar6 != (Zombie *)0x0) {
      cVar2 = Zombie::HasCondition(pZVar6,0x6c);
      if (cVar2 != '\0') {
        Zombie::EndCondition(pZVar6,0x6c);
        *(int *)(this + 0x1d0) = *(int *)(this + 0x1d8) + -1;
        goto LAB_0400ffb0;
      }
      cVar2 = Zombie::HasCondition(pZVar6,0x6b);
      if (cVar2 != '\0') {
        Zombie::EndCondition(pZVar6,0x6b);
        *(int *)(this + 0x1d0) = *(int *)(this + 0x1d8) + -1;
        goto LAB_0400ffb0;
      }
      cVar2 = Zombie::HasCondition(pZVar6,0x6a);
      if (cVar2 != '\0') {
        Zombie::EndCondition(pZVar6,0x6a);
        *(int *)(this + 0x1d0) = *(int *)(this + 0x1d8) + -1;
        goto LAB_0400ffb0;
      }
    }
  }
  lVar5 = FUN_0400c63c(local_20,local_18);
  if (lVar5 != 0) {
    if ((lVar5 == 1) && (plVar7 = (long *)FUN_0400c6a4(local_20), (BoardEntity *)*plVar7 == param_1)
       ) {
      FUN_0400c5e4((float)*(int *)(this + 0x1d4),this + 0xd8);
      *(int *)(this + 0x1d0) = *(int *)(this + 0x1d8) + -1;
    }
    uVar3 = Sexy::Rand(2);
    if ((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f) == 1) {
      pcVar8 = "sound005";
    }
    else {
      pcVar8 = "sound006";
    }
    std::string::string((string *)aRStack_28,pcVar8);
    RealObject::PlayPositionalSound((RealObject *)this,(string *)aRStack_28,0.0);
    std::string::~string((string *)aRStack_28);
    nop();
    Projectile::damageEntity((Projectile *)this,param_1);
  }
LAB_0400ffb0:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

