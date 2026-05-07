// Class: ArmorflameMissile


/* ArmorflameMissile::calcDesiredRot(Sexy::SexyVector3, float) */

undefined1  [16]
ArmorflameMissile::calcDesiredRot(float param_1,float param_2,undefined1 param_3 [16],float param_4)

{
  float fVar1;
  undefined4 uVar3;
  undefined4 extraout_var;
  undefined8 uVar4;
  undefined1 auVar2 [16];
  undefined8 extraout_var_00;
  float fVar5;
  
  if (0.001 <= ABS(param_1)) {
    fVar1 = atan2f(-param_2,param_1);
    uVar3 = extraout_var;
    uVar4 = extraout_var_00;
    if ((long)(double)param_4 < 0) {
      fVar5 = fVar1 + -6.2831855;
      if (ABS(param_4 - fVar5) <= ABS(param_4 - fVar1)) goto LAB_037315e4;
    }
    else {
      fVar5 = fVar1 + 6.2831855;
      if (ABS(param_4 - fVar5) <= ABS(param_4 - fVar1)) {
LAB_037315e4:
        return ZEXT416((uint)fVar5);
      }
    }
  }
  else if (param_2 < 0.0) {
    fVar1 = -1.5707964;
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    fVar1 = 1.5707964;
    uVar3 = 0;
    uVar4 = 0;
  }
  auVar2._4_4_ = uVar3;
  auVar2._0_4_ = fVar1;
  auVar2._8_8_ = uVar4;
  return auVar2;
}


/* ArmorflameMissile::handleImpact(BoardEntity*) */

undefined8 __thiscall ArmorflameMissile::handleImpact(ArmorflameMissile *this,BoardEntity *param_1)

{
  int iVar1;
  char cVar2;
  
  cVar2 = Projectile::handleImpact((Projectile *)this,param_1);
  if ((cVar2 == '\0') &&
     (iVar1 = *(int *)(this + 0x1ac), *(int *)(this + 0x1ac) = iVar1 + -1, iVar1 + -1 < 1)) {
    (**(code **)(*(long *)this + 0x48))(this);
    return 1;
  }
  return 0;
}


/* ArmorflameMissile::onDeflection(BoardEntity*) */

void ArmorflameMissile::onDeflection(BoardEntity *param_1)

{
  FUN_042c0138(0,param_1 + 0xc4);
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(param_1 + 0x1b0));
  param_1[0x1a5] = (BoardEntity)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArmorflameMissile::StaticClassInit() */

void ArmorflameMissile::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArmorflameMissile");
    (*pcVar2)(plVar1,asStack_10,FUN_042c126c,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArmorflameMissile::StaticGetClass() */

long * ArmorflameMissile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArmorflameMissile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArmorflameMissile::GetClass() const */

long * ArmorflameMissile::GetClass(void)

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
  (*pcVar3)(plVar1,"ArmorflameMissile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArmorflameMissile::SetOverrideTarget(BoardEntity*) */

void __thiscall ArmorflameMissile::SetOverrideTarget(ArmorflameMissile *this,BoardEntity *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (BoardEntity *)0x0) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1b0),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  else {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x1b0),(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArmorflameMissile::ArmorflameMissile() */

void __thiscall ArmorflameMissile::ArmorflameMissile(ArmorflameMissile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_0682d480;
  *(undefined ***)(this + 0x10) = &PTR__ArmorflameMissile_0682d670;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1b0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1d0));
  return;
}


/* ArmorflameMissile::StaticNew() */

ArmorflameMissile * ArmorflameMissile::StaticNew(void)

{
  ArmorflameMissile *this;
  
  this = ::operator_new(0x1e8);
  ArmorflameMissile(this);
  return this;
}


/* ArmorflameMissile::~ArmorflameMissile() */

void __thiscall ArmorflameMissile::~ArmorflameMissile(ArmorflameMissile *this)

{
  *(undefined ***)this = &PTR_GetClass_0682d480;
  *(undefined ***)(this + 0x10) = &PTR__ArmorflameMissile_0682d670;
  std::vector<Sexy::SexyTransform2D,std::allocator<Sexy::SexyTransform2D>>::~vector
            ((vector<Sexy::SexyTransform2D,std::allocator<Sexy::SexyTransform2D>> *)(this + 0x1d0));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1b8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b0));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to ArmorflameMissile::~ArmorflameMissile() */

void __thiscall ArmorflameMissile::~ArmorflameMissile(ArmorflameMissile *this)

{
  ~ArmorflameMissile(this + -0x10);
  return;
}


/* ArmorflameMissile::~ArmorflameMissile() */

void __thiscall ArmorflameMissile::~ArmorflameMissile(ArmorflameMissile *this)

{
  ~ArmorflameMissile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ArmorflameMissile::~ArmorflameMissile() */

void __thiscall ArmorflameMissile::~ArmorflameMissile(ArmorflameMissile *this)

{
  ~ArmorflameMissile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArmorflameMissile::CanBeTarget(BoardEntity*) */

void __thiscall ArmorflameMissile::CanBeTarget(ArmorflameMissile *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  Zombie *extraout_x0;
  GridItem *pGVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (BoardEntity *)0x0) {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x1b8);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_00);
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this_00);
    ToolPacketData::GetProps();
    local_18 = std::
               find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<GameObject>>
                         (uVar5,uVar6,aRStack_20);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    if (!bVar1) {
      bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
      if (bVar1) {
        nop();
        if (extraout_x0 != (Zombie *)0x0) {
          uVar5 = operator|(1,8);
          uVar4 = operator|(uVar5,4);
          cVar2 = Zombie::MatchesAny(extraout_x0,uVar4);
          if (((cVar2 == '\0') && (cVar2 = RealObject::IsOnTeam(extraout_x0,1), cVar2 == '\0')) &&
             ((cVar2 = FUN_042c171c(*(undefined4 *)(extraout_x0 + 0xcc)), cVar2 == '\0' &&
              (cVar2 = Zombie::HasCondition(extraout_x0,0x19), cVar2 == '\0')))) {
            bVar3 = Zombie::HasCondition(extraout_x0,0x77);
            bVar3 = bVar3 ^ 1;
            goto LAB_042c4388;
          }
        }
      }
      else {
        bVar1 = Sexy::RtObject::IsA<GridItem>((RtObject *)param_1);
        if (((bVar1) &&
            (pGVar7 = Sexy::RtObject::Cast<GridItem>((RtObject *)param_1), pGVar7 != (GridItem *)0x0
            )) && (cVar2 = RealObject::IsOnTeam(pGVar7,1), cVar2 == '\0')) {
          bVar3 = (**(code **)(*(long *)pGVar7 + 0x200))(pGVar7);
          goto LAB_042c4388;
        }
      }
    }
  }
  bVar3 = 0;
LAB_042c4388:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArmorflameMissile::FindTargetWithFlag(BoardEntityTypeFlag) */

void __thiscall ArmorflameMissile::FindTargetWithFlag(ArmorflameMissile *this,undefined4 param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  BoardEntity *pBVar8;
  undefined8 local_40;
  undefined8 local_38;
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar4 = BoardConstants::NUMBER_OF_ROWS();
  Sexy::Insets::Insets(aIStack_30,0,0,iVar3,iVar4);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,param_2,aIStack_30);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_20);
  std::
  random_shuffle<__gnu_cxx::__normal_iterator<Pinata**,std::vector<Pinata*,std::allocator<Pinata*>>>>
            (uVar5,uVar6);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar2) {
    puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    pBVar8 = (BoardEntity *)*puVar7;
    cVar1 = CanBeTarget(this,pBVar8);
    if (cVar1 != '\0') goto LAB_042c44c8;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  pBVar8 = (BoardEntity *)0x0;
LAB_042c44c8:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pBVar8);
}


/* ArmorflameMissile::FindNewTarget() */

void __thiscall ArmorflameMissile::FindNewTarget(ArmorflameMissile *this)

{
  BoardEntity *pBVar1;
  
  pBVar1 = (BoardEntity *)FindTargetWithFlag(this,2);
  if (pBVar1 != (BoardEntity *)0x0) {
    SetOverrideTarget(this,pBVar1);
    return;
  }
  pBVar1 = (BoardEntity *)FindTargetWithFlag(this,4);
  SetOverrideTarget(this,pBVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArmorflameMissile::InitializeArmorflameMissile(bool) */

void __thiscall ArmorflameMissile::InitializeArmorflameMissile(ArmorflameMissile *this,bool param_1)

{
  RtWeakPtr *this_00;
  bool bVar1;
  RtObject *pRVar2;
  Plant *pPVar3;
  PlantArmorflame *this_01;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  this[0x1a6] = (ArmorflameMissile)param_1;
  this[0x1a5] = (ArmorflameMissile)0x0;
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtr *)(this + 0x68);
  *(undefined4 *)(this + 0x1a8) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1b0),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  *(undefined4 *)(this + 0x1ac) = 1;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    pRVar2 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    bVar1 = Sexy::RtObject::IsA<Plant>(pRVar2);
    if (bVar1) {
      pRVar2 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      pPVar3 = Sexy::RtObject::Cast<Plant>(pRVar2);
      this_01 = Sexy::RtObject::Cast<PlantArmorflame>(*(RtObject **)(pPVar3 + 0xa8));
      if (this_01 != (PlantArmorflame *)0x0) {
        uVar4 = PlantArmorflame::GetMissileDamageImprove(this_01);
        *(undefined4 *)(this + 0x1a8) = uVar4;
        fVar5 = (float)Sexy::Rand(1.0);
        fVar6 = (float)PlantArmorflame::GetMissileDeprioritizeRate(this_01);
        if (fVar5 < fVar6) {
          *(undefined4 *)(this + 0x1ac) = 2;
        }
      }
    }
  }
  FindNewTarget(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArmorflameMissile::moveThroughTime(float) */

void __thiscall ArmorflameMissile::moveThroughTime(ArmorflameMissile *this,float param_1)

{
  RtWeakPtr *this_00;
  uint uVar1;
  char cVar2;
  ResourceInfo *pRVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  SexyVector3 *pSVar4;
  DVec3 *this_02;
  SexyVector3 *this_03;
  float *pfVar5;
  uint uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  ulong uVar12;
  undefined8 uVar13;
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
  if (this[0x1a5] == (ArmorflameMissile)0x0) {
    this_00 = (RtWeakPtr *)(this + 0x1b0);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    cVar2 = CanBeTarget(this,(BoardEntity *)pRVar3);
    if (cVar2 == '\0') {
      FindNewTarget(this);
      this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    }
    else {
      this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    }
    if (this_01 !=
        (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
         *)0x0) {
      pSVar4 = (SexyVector3 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)this);
      this_02 = (DVec3 *)Projectile::GetVelocity((Projectile *)this);
      this_03 = (SexyVector3 *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost(this_01);
      fVar7 = (float)FUN_042c0284(0xc1700000);
      uVar12 = (ulong)(uint)fVar7;
      uVar13 = 0;
      EATextSquish::Vec3::Vec3((Vec3 *)&local_18,0.0,fVar7,0.0);
      local_38 = Sexy::SexyVector3::operator+(this_03,(SexyVector3 *)&local_18);
      local_34 = (undefined4)uVar12;
      local_30 = (undefined4)uVar13;
      local_18 = (float)Sexy::SexyVector3::operator-((SexyVector3 *)&local_38,pSVar4);
      local_14 = (undefined4)uVar12;
      local_10 = (undefined4)uVar13;
      uVar8 = Sexy::SexyVector3::Normalize((SexyVector3 *)&local_18);
      local_24 = (undefined4)uVar12;
      local_20 = (undefined4)uVar13;
      local_28 = uVar8;
      fVar7 = (float)FUN_042c0134(*(undefined4 *)(this + 0xc4));
      fVar9 = (float)calcDesiredRot(uVar8,uVar12,uVar13,fVar7,this);
      local_18 = param_1 * 8.16814;
      uVar6 = (uint)(fVar9 - fVar7);
      uVar1 = (int)uVar6 >> 0x1f;
      local_3c = (float)(int)((uVar6 ^ uVar1) - uVar1);
      pfVar5 = eastl::min_alt<float>(&local_3c,&local_18);
      dVar10 = ABS((double)*pfVar5);
      if ((long)(double)(fVar9 - fVar7) < 0) {
        dVar10 = -dVar10;
      }
      dVar10 = (double)fVar7 + dVar10;
      uVar1 = (int)dVar10 >> 0x1f;
      if (3.1415927 < (float)(int)(((int)dVar10 ^ uVar1) - uVar1)) {
        dVar11 = 6.2831854820251465;
        if ((long)dVar10 < 0) {
          dVar11 = -6.2831854820251465;
        }
        dVar10 = dVar10 - dVar11;
      }
      FUN_042c0138((float)dVar10,this + 0xc4);
      fVar7 = (float)DVec3::getLength(this_02);
      Projectile::SetRotatedVelocity((Projectile *)this,fVar7);
      Projectile::moveThroughTime((Projectile *)this,param_1);
      goto LAB_042c4e8c;
    }
  }
  Projectile::moveThroughTime((Projectile *)this,param_1);
LAB_042c4e8c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArmorflameMissile::damageEntity(BoardEntity*) */

void __thiscall ArmorflameMissile::damageEntity(ArmorflameMissile *this,BoardEntity *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  UnchartedBoostMgr *pUVar4;
  Zombie *this_00;
  long lVar5;
  code *pcVar6;
  float fVar7;
  Point aPStack_d8 [8];
  undefined4 local_d0;
  undefined4 local_cc;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_c8 [8];
  float local_c0;
  undefined8 local_b0;
  undefined8 local_68 [12];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x48] != (ArmorflameMissile)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_68,(RtWeakPtrBase *)aRStack_c8);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
    push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              (this + 0x1b8),(RtWeakPtr *)local_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_c8);
    DamageInfo::DamageInfo((DamageInfo *)aRStack_c8);
    (**(code **)(*(long *)this + 0x178))(this,aRStack_c8,param_1);
    iVar2 = BoardEntity::CalcColumnPosition(param_1);
    iVar3 = FUN_042c0130(*(undefined4 *)(this + 0xa8));
    Sexy::Point::Point((Point *)local_68,iVar2,iVar3);
    local_b0 = local_68[0];
    if (this[0x1a6] == (ArmorflameMissile)0x0) {
      local_c0 = (*(float *)(this + 0x1a8) + 1.0) * local_c0;
    }
    else {
      lVar5 = Projectile::GetInstigator((Projectile *)this);
      if (lVar5 != 0) {
        iVar2 = FUN_042c0140(*(undefined4 *)(lVar5 + 0x50));
        local_c0 = (float)((iVar2 + 1) * 8);
      }
    }
    pUVar4 = (UnchartedBoostMgr *)Sexy::LazySingleton<UnchartedBoostMgr>::GetInstancePtr();
    fVar7 = (float)UnchartedBoostMgr::GetBoostValue(pUVar4,0,0x12,0);
    if ((((0.0 < fVar7) && (param_1 != (BoardEntity *)0x0)) &&
        (this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), this_00 != (Zombie *)0x0)) &&
       (((cVar1 = Zombie::IsBoss(this_00), cVar1 == '\0' &&
         (cVar1 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar1 == '\0')) &&
        (cVar1 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar1 == '\0')))) {
      fVar7 = (float)Zombie::getLeftHitPer(this_00,true);
      if (fVar7 < 0.5) {
        cVar1 = (**(code **)(*(long *)this_00 + 0x378))(this_00);
        if (cVar1 != '\0') {
          (**(code **)(*(long *)this_00 + 0x240))(this_00);
        }
        cVar1 = Zombie::CanTakeFatalDamage(this_00);
        if (cVar1 != '\0') {
          pcVar6 = *(code **)(*(long *)this_00 + 0x120);
          Sexy::Point::Point(aPStack_d8,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_d0,1.0,0.0);
          DamageInfo::DamageInfo
                    ((DamageInfo *)0x0,local_d0,local_cc,(RtWeakPtr<Sexy::SoundResource> *)local_68,
                     4,0,aPStack_d8,0);
          (*pcVar6)(this_00,(RtWeakPtr<Sexy::SoundResource> *)local_68);
          DamageInfo::~DamageInfo((DamageInfo *)local_68);
        }
        DamageInfo::~DamageInfo((DamageInfo *)aRStack_c8);
        goto LAB_042c4f3c;
      }
      cVar1 = Zombie::HasCondition(this_00,0x32);
      if (cVar1 == '\0') {
        Zombie::ApplyCondition((Zombie *)0x40a00000,0,this_00,0x32,1);
        Zombie::SetConditionTracker(0x42480000,this_00,0x32);
      }
    }
    (**(code **)(*(long *)param_1 + 0x110))(param_1,aRStack_c8);
    DamageInfo::~DamageInfo((DamageInfo *)aRStack_c8);
  }
LAB_042c4f3c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArmorflameMissile::onDraw(Sexy::Graphics*) */

void ArmorflameMissile::onDraw(Graphics *param_1)

{
  vector<Sexy::SexyTransform2D,std::allocator<Sexy::SexyTransform2D>> *this;
  char cVar1;
  ResourceInfo *this_00;
  ulong uVar2;
  ulong uVar3;
  SexyTransform2D *pSVar4;
  Graphics *in_x1;
  undefined1 in_w4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_60 [8];
  FastCurve aFStack_58 [8];
  undefined8 local_50;
  int local_44;
  undefined4 local_40;
  float fStack_3c;
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_042c1658(*(undefined4 *)(param_1 + 0x28));
  if (cVar1 == '\0') {
    this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(param_1 + 0x38));
    (**(code **)(**(long **)(gLawnApp + 0x9f0) + 0xd0))(auStack_60,*(long **)(gLawnApp + 0x9f0));
    fVar7 = *(float *)(param_1 + 0x1c);
    fVar8 = *(float *)(param_1 + 0x20);
    if (this_00 != (ResourceInfo *)0x0) {
      fVar12 = -1.0;
      if (param_1[0xd4] == (Graphics)0x0) {
        fVar12 = 1.0;
      }
      fVar11 = *(float *)(param_1 + 0x44);
      this = (vector<Sexy::SexyTransform2D,std::allocator<Sexy::SexyTransform2D>> *)
             (param_1 + 0x1d0);
      fVar6 = (float)FUN_042c0284(*(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x40) * fVar12);
      fVar10 = *(float *)(in_x1 + 0x20);
      fVar9 = *(float *)(in_x1 + 0x18);
      fVar7 = (float)FUN_042c0284((fVar7 + fVar11) - fVar8);
      Sexy::FastCurve::SetOutRange
                (aFStack_58,(float)(int)((fVar6 - fVar10) * fVar9) + fVar10,
                 (float)(int)((fVar7 - *(float *)(in_x1 + 0x24)) * *(float *)(in_x1 + 0x1c)) +
                 *(float *)(in_x1 + 0x24));
      fVar8 = *(float *)(param_1 + 0xc0);
      fVar6 = *(float *)(param_1 + 0xc4);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_50,fVar12 * fVar8,fVar8);
      fVar7 = (float)FUN_042c0284(0xbf800000);
      local_40 = Sexy::SexyVector2::operator*((SexyVector2 *)(param_1 + 0x40),fVar7);
      fStack_3c = fVar8;
      Sexy::SexyTransform2D::CreateTransformWithPivot
                ((SexyTransform2D *)aFStack_58,(SexyVector2 *)&local_50,fVar6,
                 (SexyVector2 *)&local_40,(SexyVector2 *)0x0,(bool)in_w4);
      std::vector<Sexy::SexyTransform2D,std::allocator<Sexy::SexyTransform2D>>::push_back
                (this,aSStack_30);
      while (uVar2 = FUN_042c018c(*(undefined8 *)(param_1 + 0x1d0),*(undefined8 *)(param_1 + 0x1d8))
            , 0xc < uVar2) {
        local_50 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)this);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_40,(__normal_iterator *)&local_50);
        std::vector<Sexy::SexyTransform2D,std::allocator<Sexy::SexyTransform2D>>::erase
                  (this,CONCAT44(fStack_3c,local_40));
      }
      iVar5 = 1;
      uVar2 = 0;
      PopAnimRig::GetPAMColor();
      uVar3 = FUN_042c018c(*(undefined8 *)(param_1 + 0x1d0),*(undefined8 *)(param_1 + 0x1d8));
      while( true ) {
        if (uVar3 <= uVar2) break;
        if ((((uVar2 & 0xfffffffb) == 0) || ((int)uVar2 == 7)) || ((int)uVar2 == 10)) {
          local_44 = (int)((float)iVar5 * 19.615385);
          PopAnimRig::SetPAMColor((PopAnimRig *)this_00,(Color *)&local_50);
          pSVar4 = (SexyTransform2D *)FUN_042c01ac(*(undefined8 *)(param_1 + 0x1d0),uVar2);
          PopAnimRig::Draw((PopAnimRig *)this_00,in_x1,pSVar4);
          uVar3 = FUN_042c018c(*(undefined8 *)(param_1 + 0x1d0),*(undefined8 *)(param_1 + 0x1d8));
        }
        uVar2 = uVar2 + 1;
        iVar5 = iVar5 + 1;
      }
      Sexy::Color::Color((Color *)&local_40,1);
      PopAnimRig::SetPAMColor((PopAnimRig *)this_00,(Color *)&local_40);
    }
    Projectile::onDraw(param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArmorflameMissile::fillDamageInfo(DamageInfo&, BoardEntity*) */

void ArmorflameMissile::fillDamageInfo(DamageInfo *param_1,BoardEntity *param_2)

{
  UnchartedBoostMgr *pUVar1;
  float fVar2;
  
  Projectile::fillDamageInfo(param_1,param_2);
  pUVar1 = (UnchartedBoostMgr *)Sexy::LazySingleton<UnchartedBoostMgr>::GetInstancePtr();
  fVar2 = (float)UnchartedBoostMgr::GetBoostValue(pUVar1,0,0x12,0);
  if (0.0 < fVar2) {
    *(undefined4 *)(param_2 + 0x54) = 0x41200000;
  }
  return;
}


/* ArmorflameMissile::OnCollideEntity(BoardEntity*) */

undefined8 __thiscall
ArmorflameMissile::OnCollideEntity(ArmorflameMissile *this,BoardEntity *param_1)

{
  bool bVar1;
  BoardEntity *pBVar2;
  undefined8 uVar3;
  
  pBVar2 = param_1;
  if (this[0x1a5] == (ArmorflameMissile)0x0) {
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x1b0));
    if ((!bVar1) ||
       (pBVar2 = (BoardEntity *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b0)), pBVar2 != param_1)) {
      return 0;
    }
  }
  uVar3 = Projectile::OnCollideEntity((Projectile *)this,pBVar2);
  return uVar3;
}

